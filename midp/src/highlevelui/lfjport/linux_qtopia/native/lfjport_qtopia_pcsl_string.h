#ifndef _LFJPORT_QTOPIA_PCSL_STRING_
#define _LFJPORT_QTOPIA_PCSL_STRING_

#include <midpString.h>
#include <QString>

/**
 * Convert a pcsl_string to a QString.
 *
 * @param pstring source pcsl_string
 * @param qstring to be set on return to the converted qstring
 */
QString pcsl_string2QString(const pcsl_string &pstring);

/**
 * Convert a QString to pcsl_string.
 *
 * @param qstring QString
 * @param pstring pcsl_string to be set on return
 * @return error code
 */
int QString2pcsl_string(const QString &qstring, pcsl_string &pstring);

#endif // _LFJPORT_QTOPIA_PCSL_STRING_
