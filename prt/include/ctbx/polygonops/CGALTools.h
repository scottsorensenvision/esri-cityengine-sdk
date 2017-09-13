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

#include <vector>


namespace CoreToolbox {
namespace CGALTools {

void computeOffset(float offset, const float* vertices, std::size_t nVertices, std::vector<float>& offsetPolygonVec);
void computeSkeleton(const float* vertices, std::size_t nVertices, std::vector<float>& skelVerts );
void testOffset();

} // namespace CGALTools
} // namespace CoreToolbox
