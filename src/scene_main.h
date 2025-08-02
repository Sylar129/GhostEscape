// Copyright (c) 2025 Sylar129. All rights reserved

#include "core/scene.h"

namespace ghostescape {
class SceneMain : public Scene {
 public:
  virtual ~SceneMain() = default;

  virtual void Init() override;
  virtual void Update() override;
  virtual void Render() override;
  virtual void Clean() override;

 private:
};
}  // namespace ghostescape
