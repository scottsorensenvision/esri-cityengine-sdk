/*
  COPYRIGHT (c) 2012-2017 Esri R&D Center Zurich
  TRADE SECRETS: ESRI PROPRIETARY AND CONFIDENTIAL
  Unpublished material - all rights reserved under the
  Copyright Laws of the United States and applicable international
  laws, treaties, and conventions.

  For additional information, contact:
  Environmental Systems Research Institute, Inc.
  Attn: Contracts and Legal Services Department
  380 New York Street
  Redlands, California, 92373
  USA

  email: contracts@esri.com
*/

#pragma once

#include "ctbx/CoreToolbox.h"
#include <vector>


/**
 * The CoreToolbox API is restricted to internal use by CityEngine.
 * It is not part of the CE SDK (PRT) API.
 */

namespace CoreToolbox {
namespace PolygonOps {

CORE_TOOLBOX_EXPORTS_API const std::vector<float>* computeOffset(float offset, const float* vertices, std::size_t nVertices);
CORE_TOOLBOX_EXPORTS_API const std::vector<float>* computeSkeleton(const float* vertices, std::size_t nVertices);
CORE_TOOLBOX_EXPORTS_API const std::vector<float>* convexify(float* vertices, std::size_t nVertices);
CORE_TOOLBOX_EXPORTS_API void deleteVector(const std::vector<float>* vect);

} // namespace PolygonOps
} // namespace CoreToolbox
