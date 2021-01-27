/*
 * This file is part of the MicroPython project, http://micropython.org/
 *
 * The MIT License (MIT)
 *
 * Copyright (c) 2015 Damien P. George
 * Copyright (c) 2020 Jim Mussared
 *
 * Permission is hereby granted, free of charge, to any person obtaining a copy
 * of this software and associated documentation files (the "Software"), to deal
 * in the Software without restriction, including without limitation the rights
 * to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
 * copies of the Software, and to permit persons to whom the Software is
 * furnished to do so, subject to the following conditions:
 *
 * The above copyright notice and this permission notice shall be included in
 * all copies or substantial portions of the Software.
 *
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 * IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
 * AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
 * LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
 * OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
 * THE SOFTWARE.
 */

// Options to control how MicroPython is built.

// Allow mpconfigembed.h to be provided by the embedder.
#ifdef MICROPY_MPCONFIGEMBED_H
#include MICROPY_MPCONFIGEMBED_H
#endif

// Default options for libmicropython.a (based originally on unix/minimal).

// TODO: Remove any that already match the mpconfig.h default, and allow
// overriding in mpconfigembed.h by wrapping them with #ifndefs.

#ifndef MICROPY_ALLOC_PATH_MAX
    #define MICROPY_ALLOC_PATH_MAX      (PATH_MAX)
#endif
#ifndef MICROPY_ENABLE_GC
    #define MICROPY_ENABLE_GC           (1)
#endif
#ifndef MICROPY_ENABLE_FINALISER
    #define MICROPY_ENABLE_FINALISER    (0)
#endif
#ifndef MICROPY_STACK_CHECK
    #define MICROPY_STACK_CHECK         (0)
#endif
#ifndef MICROPY_COMP_CONST
    #define MICROPY_COMP_CONST          (0)
#endif
#ifndef MICROPY_MEM_STATS
    #define MICROPY_MEM_STATS           (0)
#endif
#ifndef MICROPY_DEBUG_PRINTERS
    #define MICROPY_DEBUG_PRINTERS      (0)
#endif
#ifndef MICROPY_READER_POSIX
    #define MICROPY_READER_POSIX        (1)
#endif
#ifndef MICROPY_KBD_EXCEPTION
    #define MICROPY_KBD_EXCEPTION       (1)
#endif
#ifndef MICROPY_HELPER_REPL
    #define MICROPY_HELPER_REPL         (1)
#endif
#ifndef MICROPY_HELPER_LEXER_UNIX
    #define MICROPY_HELPER_LEXER_UNIX   (1)
#endif
#ifndef MICROPY_ENABLE_SOURCE_LINE
    #define MICROPY_ENABLE_SOURCE_LINE  (0)
#endif
#ifndef MICROPY_ERROR_REPORTING
    #define MICROPY_ERROR_REPORTING     (MICROPY_ERROR_REPORTING_TERSE)
#endif
#ifndef MICROPY_WARNINGS
    #define MICROPY_WARNINGS            (0)
#endif
#ifndef MICROPY_ENABLE_EMERGENCY_EXCEPTION_BUF
    #define MICROPY_ENABLE_EMERGENCY_EXCEPTION_BUF   (0)
#endif
#ifndef MICROPY_FLOAT_IMPL
    #define MICROPY_FLOAT_IMPL          (MICROPY_FLOAT_IMPL_NONE)
#endif
#ifndef MICROPY_LONGINT_IMPL
    #define MICROPY_LONGINT_IMPL        (MICROPY_LONGINT_IMPL_NONE)
#endif
#ifndef MICROPY_STREAMS_NON_BLOCK
    #define MICROPY_STREAMS_NON_BLOCK   (0)
#endif
#ifndef MICROPY_OPT_COMPUTED_GOTO
    #define MICROPY_OPT_COMPUTED_GOTO   (0)
#endif
#ifndef MICROPY_OPT_CACHE_MAP_LOOKUP_IN_BYTECODE
    #define MICROPY_OPT_CACHE_MAP_LOOKUP_IN_BYTECODE (0)
#endif
#ifndef MICROPY_CAN_OVERRIDE_BUILTINS
    #define MICROPY_CAN_OVERRIDE_BUILTINS (0)
#endif
#ifndef MICROPY_BUILTIN_METHOD_CHECK_SELF_ARG
    #define MICROPY_BUILTIN_METHOD_CHECK_SELF_ARG (0)
#endif
#ifndef MICROPY_CPYTHON_COMPAT
    #define MICROPY_CPYTHON_COMPAT      (0)
#endif
#ifndef MICROPY_PY_BUILTINS_BYTEARRAY
    #define MICROPY_PY_BUILTINS_BYTEARRAY (0)
#endif
#ifndef MICROPY_PY_BUILTINS_MEMORYVIEW
    #define MICROPY_PY_BUILTINS_MEMORYVIEW (0)
#endif
#ifndef MICROPY_PY_BUILTINS_COMPILE
    #define MICROPY_PY_BUILTINS_COMPILE (0)
#endif
#ifndef MICROPY_PY_BUILTINS_ENUMERATE
    #define MICROPY_PY_BUILTINS_ENUMERATE (0)
#endif
#ifndef MICROPY_PY_BUILTINS_FILTER
    #define MICROPY_PY_BUILTINS_FILTER  (0)
#endif
#ifndef MICROPY_PY_BUILTINS_FROZENSET
    #define MICROPY_PY_BUILTINS_FROZENSET (0)
#endif
#ifndef MICROPY_PY_BUILTINS_REVERSED
    #define MICROPY_PY_BUILTINS_REVERSED (0)
#endif
#ifndef MICROPY_PY_BUILTINS_SET
    #define MICROPY_PY_BUILTINS_SET     (0)
#endif
#ifndef MICROPY_PY_BUILTINS_SLICE
    #define MICROPY_PY_BUILTINS_SLICE   (0)
#endif
#ifndef MICROPY_PY_BUILTINS_STR_UNICODE
    #define MICROPY_PY_BUILTINS_STR_UNICODE (0)
#endif
#ifndef MICROPY_PY_BUILTINS_PROPERTY
    #define MICROPY_PY_BUILTINS_PROPERTY (0)
#endif
#ifndef MICROPY_PY_BUILTINS_MIN_MAX
    #define MICROPY_PY_BUILTINS_MIN_MAX (0)
#endif
#ifndef MICROPY_PY___FILE__
    #define MICROPY_PY___FILE__         (0)
#endif
#ifndef MICROPY_PY_MICROPYTHON_MEM_INFO
    #define MICROPY_PY_MICROPYTHON_MEM_INFO (0)
#endif
#ifndef MICROPY_PY_GC
    #define MICROPY_PY_GC               (0)
#endif
#ifndef MICROPY_PY_GC_COLLECT_RETVAL
    #define MICROPY_PY_GC_COLLECT_RETVAL (0)
#endif
#ifndef MICROPY_PY_ARRAY
    #define MICROPY_PY_ARRAY            (0)
#endif
#ifndef MICROPY_PY_COLLECTIONS
    #define MICROPY_PY_COLLECTIONS      (0)
#endif
#ifndef MICROPY_PY_MATH
    #define MICROPY_PY_MATH             (0)
#endif
#ifndef MICROPY_PY_CMATH
    #define MICROPY_PY_CMATH            (0)
#endif
#ifndef MICROPY_PY_IO
    #define MICROPY_PY_IO               (1)
#endif
#ifndef MICROPY_PY_IO_FILEIO
    #define MICROPY_PY_IO_FILEIO        (0)
#endif
#ifndef MICROPY_PY_STRUCT
    #define MICROPY_PY_STRUCT           (0)
#endif
#ifndef MICROPY_PY_SYS
    #define MICROPY_PY_SYS              (1)
#endif
#ifndef MICROPY_PY_SYS_EXIT
    #define MICROPY_PY_SYS_EXIT         (0)
#endif
#ifndef MICROPY_PY_SYS_PLATFORM
    #define MICROPY_PY_SYS_PLATFORM     "linux"
#endif
#ifndef MICROPY_PY_SYS_MAXSIZE
    #define MICROPY_PY_SYS_MAXSIZE      (0)
#endif
#ifndef MICROPY_PY_SYS_STDFILES
    #define MICROPY_PY_SYS_STDFILES     (0)
#endif
#ifndef MICROPY_PY_CMATH
    #define MICROPY_PY_CMATH            (0)
#endif
#ifndef MICROPY_PY_UCTYPES
    #define MICROPY_PY_UCTYPES          (0)
#endif
#ifndef MICROPY_PY_UZLIB
    #define MICROPY_PY_UZLIB            (0)
#endif
#ifndef MICROPY_PY_UJSON
    #define MICROPY_PY_UJSON            (1)
#endif
#ifndef MICROPY_PY_URE
    #define MICROPY_PY_URE              (0)
#endif
#ifndef MICROPY_PY_UHEAPQ
    #define MICROPY_PY_UHEAPQ           (0)
#endif
#ifndef MICROPY_PY_UHASHLIB
    #define MICROPY_PY_UHASHLIB         (0)
#endif
#ifndef MICROPY_PY_UBINASCII
    #define MICROPY_PY_UBINASCII        (0)
#endif

extern const struct _mp_obj_module_t mp_module_os;

#define MICROPY_PORT_BUILTIN_MODULES \

#define MICROPY_PORT_ROOT_POINTERS \

// type definitions for the specific machine

#ifdef __LP64__
typedef long mp_int_t; // must be pointer size
typedef unsigned long mp_uint_t; // must be pointer size
#else
// These are definitions for machines where sizeof(int) == sizeof(void*),
// regardless for actual size.
typedef int mp_int_t; // must be pointer size
typedef unsigned int mp_uint_t; // must be pointer size
#endif

// Cannot include <sys/types.h>, as it may lead to symbol name clashes
#if _FILE_OFFSET_BITS == 64 && !defined(__LP64__)
typedef long long mp_off_t;
#else
typedef long mp_off_t;
#endif

// We need to provide a declaration/definition of alloca()
#ifdef __FreeBSD__
#include <stdlib.h>
#else
#include <alloca.h>
#endif
