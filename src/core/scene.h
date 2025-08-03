// Copyright (c) 2025 Sylar129. All rights reserved

#pragma once

#include <memory>
#include <vector>

#include "core/object.h"
#include "raylib.h"
#include "raymath.h"

namespace ghostescape::core {

class Scene : public Object {
 public:
  virtual ~Scene() = default;

  Vector2 WorldToScreen(const Vector2& world_position) const {
    return world_position - camera_position_;
  }
  Vector2 ScreenToWorld(const Vector2& screen_position) const {
    return screen_position + camera_position_;
  }

 protected:
  Vector2 camera_position_{};
  std::vector<std::unique_ptr<Object>> objects_;
};

}  // namespace ghostescape::core
