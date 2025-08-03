// Copyright (c) 2025 Sylar129. All rights reserved

#include "core/scene.h"

namespace ghostescape {
class SceneMain : public core::Scene {
 public:
  virtual ~SceneMain() = default;

  virtual void Update() override;
  virtual void Render() override;

 private:
};
}  // namespace ghostescape
