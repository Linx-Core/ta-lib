/* TA-LIB Copyright (c) 1999-2025, Mario Fortier
 * All rights reserved.
 *
 * Redistribution and use in source and binary forms, with or
 * without modification, are permitted provided that the following
 * conditions are met:
 *
 * - Redistributions of source code must retain the above copyright
 *   notice, this list of conditions and the following disclaimer.
 *
 * - Redistributions in binary form must reproduce the above copyright
 *   notice, this list of conditions and the following disclaimer in
 *   the documentation and/or other materials provided with the
 *   distribution.
 *
 * - Neither name of author nor the names of its contributors
 *   may be used to endorse or promote products derived from this
 *   software without specific prior written permission.
 *
 * THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS
 * ``AS IS'' AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT
 * LIMITED TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS
 * FOR A PARTICULAR PURPOSE ARE DISCLAIMED. IN NO EVENT SHALL THE
 * REGENTS OR CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT,
 * INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES
 * (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS
 * OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS
 * INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY,
 * WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE
 * OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE,
 * EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
 */

#include <stddef.h>
#include <stdlib.h>

/* Package versioning.
 *
 * Must match the VERSION file in the TA-Lib repos root dir.
 *
 */
#define MAJOR "0"
#define MINOR "6"
#define PATCH "4"

/* Deprecated: Use PATCH instead. */
#define BUILD PATCH

/* Nothing to modify below this line. */

#define TA_VERSION_DT "(" __DATE__ " " __TIME__ ")"

const char  *TA_GetVersionString( void )
{
	return MAJOR "." MINOR "." PATCH " " TA_VERSION_DT;
}

const char *TA_GetVersionMajor( void )
{
   return MAJOR;
}

const char *TA_GetVersionMinor( void )
{
   return MINOR;
}

const char *TA_GetVersionPatch( void )
{
   return PATCH;
}

const char *TA_GetVersionBuild( void )
{
   /* Deprecated: No further support for Build versioning.
    * Package versioning are now only MAJOR.MINOR.PATCH
    */
   return PATCH;
}

const char *TA_GetVersionExtra( void )
{
   /* Deprecated: No further support for Extra versioning.
    * Package versioning are now only MAJOR.MINOR.PATCH
    */
   return "";
}

const char *TA_GetVersionDate( void )
{
   return __DATE__;
}

const char *TA_GetVersionTime( void )
{
   return __TIME__;
}
