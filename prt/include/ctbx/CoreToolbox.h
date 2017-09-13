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

#ifdef _WIN32
#	ifdef CORE_TOOLBOX_EXPORTS
#		define CORE_TOOLBOX_EXPORTS_API __declspec(dllexport)
#	else
#		define CORE_TOOLBOX_EXPORTS_API __declspec(dllimport)
#	endif
#else
#	define CORE_TOOLBOX_EXPORTS_API __attribute__ ((visibility ("default")))
#endif
