// Copyright (c) 2025 Sylar129. All rights reserved

#pragma once

#include "core/game.h"

namespace ghostescape::core {

class Object {
 public:
  virtual ~Object() = default;

  virtual void Update() = 0;
  virtual void Render() = 0;
};

}  // namespace ghostescape::core
