// Copyright (c) 2020, the Dart project authors.  Please see the AUTHORS file
// for details. All rights reserved. Use of this source code is governed by a
// BSD-style license that can be found in the LICENSE file.

#ifndef RUNTIME_BIN_FILE_WIN_H_
#define RUNTIME_BIN_FILE_WIN_H_

#include "file.h"

// The limit for a regular directory is 248.
// Reference: https://docs.microsoft.com/en-us/windows/win32/fileio/naming-a-file#maximum-path-length-limitation
#define MAX_DIRECTORY_SIZE (MAX_PATH - 12)

namespace dart {
namespace bin {

const char* PrefixLongFilePath(const char* path);
const char* PrefixLongDirectoryPath(const char* path);
const char* PrefixLongPathIfExceedLimit(const char* path, bool file_name);

}  // namespace bin
}  // namespace dart

#endif  // RUNTIME_BIN_FILE_WIN_H_
