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

#ifndef PRTX_EXTENSION_H_
#define PRTX_EXTENSION_H_

#include "prtx/prtx.h"

#include "prt/ContentType.h"

#include <string>

#ifdef _MSC_VER
#	pragma warning(push)
#	pragma warning(disable : 4275)
#	ifdef PRT_MSG_WARNINGS
#		pragma message(__FILE__": disabled MSVC warnings 4275")
#	endif
#endif


namespace prtx {


/**
 * Base class for all PRTX extension types: Encoders, Decoders and Adaptors.
 * Extensions are not copyable.
 */

class PRTX_EXPORTS_API Extension {
public:
	enum ExtensionType {
		ET_UNDEFINED,
		ET_ADAPTOR,		///< Extension sub-class is an adaptor.
		ET_ENCODER,		///< Extension sub-class is an encoder.
		ET_DECODER,		///< Extension sub-class is a decoder.
		ET_COUNT
	};

protected:
	Extension() { }

public:
	Extension(const Extension&) = delete;
	Extension& operator=(const Extension&) = delete;
	virtual ~Extension() { }

	/**
	 * Utility member function to get the extension enum item from a string.
	 *
	 * @param etStr The extension type as string.
	 * @return The corresponding enum item or ET_COUNT if ctStr is not found.
	 */
	static ExtensionType toExtensionType(const std::wstring& etStr);

	/**
	 * Returns the string representation of enum item et.
	 *
	 * @param et Extension type enum item.
	 * @return Extension type as string.
	 */
	static const std::wstring& toString(const ExtensionType& et);

	/**
	 * Utility member function to get the content type enum item from a string.
	 *
	 * @param ctStr The contentType type as string.
	 * @return The corresponding enum item or CT_COUNT if ctStr is not found.
	 */
	static prt::ContentType toContentType(const std::wstring& ctStr);

	/**
	 * Returns the string representation of enum item ct.
	 *
	 * @param ct Content type enum item.
	 * @return Content type as string.
	 */
	static const std::wstring& toString(const prt::ContentType& ct);

	/**
	 * Specifies the extensions type. Implemented by each subclass.
	 *
	 * @return The extension type of a subclass instance.
	 */
	virtual ExtensionType getExtensionType() const = 0;

	/**
	 * Specifies the supported content type. Implemented by each subclass.
	 *
	 * @return The supported content type of a subclass instance.
	 */
	virtual prt::ContentType getContentType() const = 0;
};


} // namespace prtx


#ifdef _MSC_VER
#	pragma warning(pop)
#endif


#endif /* PRTX_EXTENSION_H_ */

