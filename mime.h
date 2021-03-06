/*
   ratproxy - MIME detection
   -------------------------

   Author: Michal Zalewski <lcamtuf@google.com>

   Copyright 2007, 2008 by Google Inc. All Rights Reserved.

   Copyright 2007, 2008 by Google Inc. All Rights Reserved.

   Licensed under the Apache License, Version 2.0 (the "License");
   you may not use this file except in compliance with the License.
   You may obtain a copy of the License at

     http://www.apache.org/licenses/LICENSE-2.0

   Unless required by applicable law or agreed to in writing, software
   distributed under the License is distributed on an "AS IS" BASIS,
   WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
   See the License for the specific language governing permissions and
   limitations under the License.

 */


#ifndef _HAVE_MIME_H
#define _HAVE_MIME_H

#include "types.h"
#include "http.h"

void detect_mime(struct http_response* r);

#endif /* !_HAVE_MIME_H */
