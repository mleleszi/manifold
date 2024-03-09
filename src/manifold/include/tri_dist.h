// Copyright 2024 The Manifold Authors.
//
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
//
//      http://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.

#pragma once
#include <array>

#include "public.h"

namespace manifold {

void edgeEdgeDist(glm::vec3& x, glm::vec3& y, const glm::vec3& p,
                  const glm::vec3& a, const glm::vec3& q, const glm::vec3& b);

/**
 * Returns the minimum squared distance between two triangles.
 *
 * @param t1 First  triangle.
 * @param t2 Second triangle.
 */
float DistanceTriangleTriangleSquared(glm::vec3& cp, glm::vec3& cq,
                                      const glm::vec3 p[3],
                                      const glm::vec3 q[3]);
}  // namespace manifold
