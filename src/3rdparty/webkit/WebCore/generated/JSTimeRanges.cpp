/*
    This file is part of the WebKit open source project.
    This file has been generated by generate-bindings.pl. DO NOT MODIFY!

    This library is free software; you can redistribute it and/or
    modify it under the terms of the GNU Library General Public
    License as published by the Free Software Foundation; either
    version 2 of the License, or (at your option) any later version.

    This library is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
    Library General Public License for more details.

    You should have received a copy of the GNU Library General Public License
    along with this library; see the file COPYING.LIB.  If not, write to
    the Free Software Foundation, Inc., 51 Franklin Street, Fifth Floor,
    Boston, MA 02110-1301, USA.
*/

#include "config.h"

#if ENABLE(VIDEO)

#include "JSTimeRanges.h"

#include "TimeRanges.h"
#include <runtime/Error.h>
#include <runtime/JSNumberCell.h>
#include <wtf/GetPtr.h>

using namespace JSC;

namespace WebCore {

ASSERT_CLASS_FITS_IN_CELL(JSTimeRanges);

/* Hash table */

static const HashTableValue JSTimeRangesTableValues[2] =
{
    { "length", DontDelete|ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsTimeRangesLength), (intptr_t)0 },
    { 0, 0, 0, 0 }
};

static JSC_CONST_HASHTABLE HashTable JSTimeRangesTable =
#if ENABLE(PERFECT_HASH_SIZE)
    { 0, JSTimeRangesTableValues, 0 };
#else
    { 2, 1, JSTimeRangesTableValues, 0 };
#endif

/* Hash table for prototype */

static const HashTableValue JSTimeRangesPrototypeTableValues[3] =
{
    { "start", DontDelete|Function, (intptr_t)static_cast<NativeFunction>(jsTimeRangesPrototypeFunctionStart), (intptr_t)1 },
    { "end", DontDelete|Function, (intptr_t)static_cast<NativeFunction>(jsTimeRangesPrototypeFunctionEnd), (intptr_t)1 },
    { 0, 0, 0, 0 }
};

static JSC_CONST_HASHTABLE HashTable JSTimeRangesPrototypeTable =
#if ENABLE(PERFECT_HASH_SIZE)
    { 31, JSTimeRangesPrototypeTableValues, 0 };
#else
    { 5, 3, JSTimeRangesPrototypeTableValues, 0 };
#endif

const ClassInfo JSTimeRangesPrototype::s_info = { "TimeRangesPrototype", 0, &JSTimeRangesPrototypeTable, 0 };

JSObject* JSTimeRangesPrototype::self(ExecState* exec, JSGlobalObject* globalObject)
{
    return getDOMPrototype<JSTimeRanges>(exec, globalObject);
}

bool JSTimeRangesPrototype::getOwnPropertySlot(ExecState* exec, const Identifier& propertyName, PropertySlot& slot)
{
    return getStaticFunctionSlot<JSObject>(exec, &JSTimeRangesPrototypeTable, this, propertyName, slot);
}

bool JSTimeRangesPrototype::getOwnPropertyDescriptor(ExecState* exec, const Identifier& propertyName, PropertyDescriptor& descriptor)
{
    return getStaticFunctionDescriptor<JSObject>(exec, &JSTimeRangesPrototypeTable, this, propertyName, descriptor);
}

const ClassInfo JSTimeRanges::s_info = { "TimeRanges", 0, &JSTimeRangesTable, 0 };

JSTimeRanges::JSTimeRanges(NonNullPassRefPtr<Structure> structure, JSDOMGlobalObject* globalObject, PassRefPtr<TimeRanges> impl)
    : DOMObjectWithGlobalPointer(structure, globalObject)
    , m_impl(impl)
{
}

JSTimeRanges::~JSTimeRanges()
{
    forgetDOMObject(this, impl());
}

JSObject* JSTimeRanges::createPrototype(ExecState* exec, JSGlobalObject* globalObject)
{
    return new (exec) JSTimeRangesPrototype(JSTimeRangesPrototype::createStructure(globalObject->objectPrototype()));
}

bool JSTimeRanges::getOwnPropertySlot(ExecState* exec, const Identifier& propertyName, PropertySlot& slot)
{
    return getStaticValueSlot<JSTimeRanges, Base>(exec, &JSTimeRangesTable, this, propertyName, slot);
}

bool JSTimeRanges::getOwnPropertyDescriptor(ExecState* exec, const Identifier& propertyName, PropertyDescriptor& descriptor)
{
    return getStaticValueDescriptor<JSTimeRanges, Base>(exec, &JSTimeRangesTable, this, propertyName, descriptor);
}

JSValue jsTimeRangesLength(ExecState* exec, JSValue slotBase, const Identifier&)
{
    JSTimeRanges* castedThis = static_cast<JSTimeRanges*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    TimeRanges* imp = static_cast<TimeRanges*>(castedThis->impl());
    JSValue result = jsNumber(exec, imp->length());
    return result;
}

JSValue JSC_HOST_CALL jsTimeRangesPrototypeFunctionStart(ExecState* exec, JSObject*, JSValue thisValue, const ArgList& args)
{
    UNUSED_PARAM(args);
    if (!thisValue.inherits(&JSTimeRanges::s_info))
        return throwError(exec, TypeError);
    JSTimeRanges* castedThisObj = static_cast<JSTimeRanges*>(asObject(thisValue));
    TimeRanges* imp = static_cast<TimeRanges*>(castedThisObj->impl());
    ExceptionCode ec = 0;
    unsigned index = args.at(0).toInt32(exec);


    JSC::JSValue result = jsNumber(exec, imp->start(index, ec));
    setDOMException(exec, ec);
    return result;
}

JSValue JSC_HOST_CALL jsTimeRangesPrototypeFunctionEnd(ExecState* exec, JSObject*, JSValue thisValue, const ArgList& args)
{
    UNUSED_PARAM(args);
    if (!thisValue.inherits(&JSTimeRanges::s_info))
        return throwError(exec, TypeError);
    JSTimeRanges* castedThisObj = static_cast<JSTimeRanges*>(asObject(thisValue));
    TimeRanges* imp = static_cast<TimeRanges*>(castedThisObj->impl());
    ExceptionCode ec = 0;
    unsigned index = args.at(0).toInt32(exec);


    JSC::JSValue result = jsNumber(exec, imp->end(index, ec));
    setDOMException(exec, ec);
    return result;
}

JSC::JSValue toJS(JSC::ExecState* exec, JSDOMGlobalObject* globalObject, TimeRanges* object)
{
    return getDOMObjectWrapper<JSTimeRanges>(exec, globalObject, object);
}
TimeRanges* toTimeRanges(JSC::JSValue value)
{
    return value.inherits(&JSTimeRanges::s_info) ? static_cast<JSTimeRanges*>(asObject(value))->impl() : 0;
}

}

#endif // ENABLE(VIDEO)
