// Copyright (c) 2025 Sylar129. All rights reserved

#pragma once

#include <memory>
#include <vector>

#include "core/object.h"
#include "raylib.h"

namespace ghostescape::core {

class Scene : public Object {
 public:
  virtual ~Scene() = default;

 protected:
  Vector2 camera_position_{};
  std::vector<std::unique_ptr<Object>> objects_;
};

}  // namespace ghostescape::core
