#pragma once

#include "libuv.h"

#include "Coroutine.h"
#include "Support/JSON.h"

#include "llvm/ADT/StringRef.h"
#include "llvm/ADT/FunctionExtras.h"

namespace clice::async {

using Callback = llvm::unique_function<Task<void>(json::Value)>;

/// Listen on stdin/stdout, callback is called when there is a LSP message available.
void listen(Callback callback);

/// Listen on the given ip and port, callback is called when there is a LSP message available.
void listen(Callback callback, const char* ip, unsigned int port);

/// Spawn a new process and listen on its stdin/stdout.
void spawn(Callback callback, llvm::StringRef path, llvm::ArrayRef<std::string> args);

/// Write a JSON value to the client.
Task<> write(json::Value value);

}  // namespace clice::async
