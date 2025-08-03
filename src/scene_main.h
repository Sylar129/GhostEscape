// Copyright (c) 2025 Sylar129. All rights reserved

#pragma once

#include "core/scene.h"

namespace ghostescape {
class SceneMain : public core::Scene {
 public:
  SceneMain();
  virtual ~SceneMain() = default;

  virtual void Update() override;
  virtual void Render() override;

 private:
  void RenderBackground() const;
};
}  // namespace ghostescape
