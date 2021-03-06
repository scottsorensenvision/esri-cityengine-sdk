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

#ifndef PRT_STATUS_H_
#define PRT_STATUS_H_

#include "prt/prt.h"


namespace prt {


/**
 * The Status enum is used to indicate whether a function was successful or not.
 * @sa getStatusDescription()
 */
enum PRT_EXPORTS_API Status {
	STATUS_OK,
	STATUS_UNSPECIFIED_ERROR,
	STATUS_OUT_OF_MEM,
	STATUS_NO_LICENSE,

	STATUS_NOT_ALL_IS_GENERATED,
	STATUS_INCOMPATIBLE_IS,

	STATUS_FILE_NOT_FOUND,
	STATUS_FILE_ALREADY_EXISTS,
	STATUS_COULD_NOT_OPEN_FILE,
	STATUS_COULD_NOT_CLOSE_FILE,
	STATUS_FILE_WRITE_FAILED,
	STATUS_FILE_SEEK_FAILED,
	STATUS_FILE_TELL_FAILED,
	STATUS_NO_SEEK,
	STATUS_EMPTY_FILE,
	STATUS_INVALID_URI,

	STATUS_ADAPTOR_NOT_FOUND,
	STATUS_DECODER_NOT_FOUND,
	STATUS_ENCODER_NOT_FOUND,
	STATUS_UNABLE_TO_RESOLVE,
	STATUS_CHECK_ERROR_PARAM,
	STATUS_KEY_NOT_FOUND,
	STATUS_KEY_ALREADY_TAKEN,
	STATUS_KEY_NOT_SUPPORTED,
	STATUS_STRING_TRUNCATED,
	STATUS_ILLEGAL_CALLBACK_OBJECT,
	STATUS_ILLEGAL_LOG_HANDLER,
	STATUS_ILLEGAL_LOG_LEVEL,
	STATUS_ILLEGAL_VALUE,
	STATUS_NO_RULEFILE,
	STATUS_NO_INITIAL_SHAPE,
	STATUS_CGB_ERROR,
	STATUS_NOT_INITIALIZED,
	STATUS_ALREADY_INITIALIZED,
	STATUS_INCONSISTENT_TEXTURE_PARAMS,
	STATUS_CANCELED,
	STATUS_UNKNOWN_ATTRIBUTE,
	STATUS_UNKNOWN_RULE,
	STATUS_ARGUMENTS_MISMATCH,
	STATUS_BUFFER_TO_SMALL,
	STATUS_UNKNOWN_FORMAT,
	STATUS_ENCODE_FAILED,
	STATUS_ATTRIBUTES_ALREADY_SET,
	STATUS_ATTRIBUTES_NOT_SET,
	STATUS_GEOMETRY_ALREADY_SET,
	STATUS_GEOMETRY_NOT_SET,
	STATUS_ILLEGAL_GEOMETRY
};


} // namespace prt


#endif /* PRT_STATUS_H_ */

