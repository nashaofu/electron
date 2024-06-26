// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef ELECTRON_SHELL_RENDERER_EXTENSIONS_ELECTRON_EXTENSIONS_DISPATCHER_DELEGATE_H_
#define ELECTRON_SHELL_RENDERER_EXTENSIONS_ELECTRON_EXTENSIONS_DISPATCHER_DELEGATE_H_

#include <set>
#include <string>

#include "extensions/renderer/dispatcher_delegate.h"

class ElectronExtensionsDispatcherDelegate
    : public extensions::DispatcherDelegate {
 public:
  ElectronExtensionsDispatcherDelegate();
  ~ElectronExtensionsDispatcherDelegate() override;

  // disable copy
  ElectronExtensionsDispatcherDelegate(
      const ElectronExtensionsDispatcherDelegate&) = delete;
  ElectronExtensionsDispatcherDelegate& operator=(
      const ElectronExtensionsDispatcherDelegate&) = delete;

 private:
  // extensions::DispatcherDelegate implementation.
  void RequireWebViewModules(extensions::ScriptContext* context) override;
  void OnActiveExtensionsUpdated(
      const std::set<std::string>& extension_ids) override;
};

#endif  // ELECTRON_SHELL_RENDERER_EXTENSIONS_ELECTRON_EXTENSIONS_DISPATCHER_DELEGATE_H_
