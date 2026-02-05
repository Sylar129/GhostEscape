// Copyright (c) 2025 Sylar129. All rights reserved

#pragma once

#include "core/actor.h"

namespace ghostescape {
class Player : public core::Actor {
 public:
  Player();
  virtual ~Player() override;

  virtual void Update() override;
  virtual void Render() override;

 private:
  void KeyboardControl();
  void Move();
};
}  // namespace ghostescape
