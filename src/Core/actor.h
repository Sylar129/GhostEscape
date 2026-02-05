// Copyright (c) 2025 Sylar129. All rights reserved

#pragma once

#include "core/object_world.h"

namespace ghostescape::core {
class Actor : public ObjectWorld {
 public:
  Vector2 GetVelocity() const { return velocity_; }
  void SetVelocity(const Vector2& velocity) { velocity_ = velocity; }

  float GetMaxSpeed() const { return max_spedd_; }
  void SetMaxSpeed(float max_speed) { max_spedd_ = max_speed; }

 protected:
  Vector2 velocity_{};
  float max_spedd_ = 100;
};
}  // namespace ghostescape::core
