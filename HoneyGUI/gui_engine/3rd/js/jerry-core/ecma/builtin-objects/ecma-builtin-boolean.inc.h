/* Copyright JS Foundation and other contributors, http://js.foundation
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

/*
 * Boolean description
 */

#include "ecma-builtin-helpers-macro-defines.inc.h"

#ifndef CONFIG_DISABLE_BOOLEAN_BUILTIN

/* Object properties:
 *  (property name, object pointer getter) */

/* ECMA-262 v5, 15.6.3.1 */
OBJECT_VALUE(LIT_MAGIC_STRING_PROTOTYPE,
             ECMA_BUILTIN_ID_BOOLEAN_PROTOTYPE,
             ECMA_PROPERTY_FIXED)

/* Number properties:
 *  (property name, object pointer getter) */

/* ECMA-262 v5, 15.6.3 */
NUMBER_VALUE(LIT_MAGIC_STRING_LENGTH,
             1,
             ECMA_PROPERTY_FIXED)

#endif /* !CONFIG_DISABLE_BOOLEAN_BUILTIN */

#include "ecma-builtin-helpers-macro-undefs.inc.h"
