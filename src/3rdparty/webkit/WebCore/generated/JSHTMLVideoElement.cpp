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

#include "JSHTMLVideoElement.h"

#include "HTMLVideoElement.h"
#include "KURL.h"
#include <runtime/Error.h>
#include <runtime/JSNumberCell.h>
#include <runtime/JSString.h>
#include <wtf/GetPtr.h>

using namespace JSC;

namespace WebCore {

ASSERT_CLASS_FITS_IN_CELL(JSHTMLVideoElement);

/* Hash table */

static const HashTableValue JSHTMLVideoElementTableValues[9] =
{
    { "width", DontDelete, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsHTMLVideoElementWidth), (intptr_t)setJSHTMLVideoElementWidth },
    { "height", DontDelete, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsHTMLVideoElementHeight), (intptr_t)setJSHTMLVideoElementHeight },
    { "videoWidth", DontDelete|ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsHTMLVideoElementVideoWidth), (intptr_t)0 },
    { "videoHeight", DontDelete|ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsHTMLVideoElementVideoHeight), (intptr_t)0 },
    { "poster", DontDelete, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsHTMLVideoElementPoster), (intptr_t)setJSHTMLVideoElementPoster },
    { "webkitSupportsFullscreen", DontDelete|ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsHTMLVideoElementWebkitSupportsFullscreen), (intptr_t)0 },
    { "webkitDisplayingFullscreen", DontDelete|ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsHTMLVideoElementWebkitDisplayingFullscreen), (intptr_t)0 },
    { "constructor", DontEnum|ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsHTMLVideoElementConstructor), (intptr_t)0 },
    { 0, 0, 0, 0 }
};

static JSC_CONST_HASHTABLE HashTable JSHTMLVideoElementTable =
#if ENABLE(PERFECT_HASH_SIZE)
    { 31, JSHTMLVideoElementTableValues, 0 };
#else
    { 18, 15, JSHTMLVideoElementTableValues, 0 };
#endif

/* Hash table for constructor */

static const HashTableValue JSHTMLVideoElementConstructorTableValues[1] =
{
    { 0, 0, 0, 0 }
};

static JSC_CONST_HASHTABLE HashTable JSHTMLVideoElementConstructorTable =
#if ENABLE(PERFECT_HASH_SIZE)
    { 0, JSHTMLVideoElementConstructorTableValues, 0 };
#else
    { 1, 0, JSHTMLVideoElementConstructorTableValues, 0 };
#endif

class JSHTMLVideoElementConstructor : public DOMConstructorObject {
public:
    JSHTMLVideoElementConstructor(ExecState* exec, JSDOMGlobalObject* globalObject)
        : DOMConstructorObject(JSHTMLVideoElementConstructor::createStructure(globalObject->objectPrototype()), globalObject)
    {
        putDirect(exec->propertyNames().prototype, JSHTMLVideoElementPrototype::self(exec, globalObject), None);
    }
    virtual bool getOwnPropertySlot(ExecState*, const Identifier&, PropertySlot&);
    virtual bool getOwnPropertyDescriptor(ExecState*, const Identifier&, PropertyDescriptor&);
    virtual const ClassInfo* classInfo() const { return &s_info; }
    static const ClassInfo s_info;

    static PassRefPtr<Structure> createStructure(JSValue proto) 
    { 
        return Structure::create(proto, TypeInfo(ObjectType, StructureFlags), AnonymousSlotCount); 
    }
    
protected:
    static const unsigned StructureFlags = OverridesGetOwnPropertySlot | ImplementsHasInstance | DOMConstructorObject::StructureFlags;
};

const ClassInfo JSHTMLVideoElementConstructor::s_info = { "HTMLVideoElementConstructor", 0, &JSHTMLVideoElementConstructorTable, 0 };

bool JSHTMLVideoElementConstructor::getOwnPropertySlot(ExecState* exec, const Identifier& propertyName, PropertySlot& slot)
{
    return getStaticValueSlot<JSHTMLVideoElementConstructor, DOMObject>(exec, &JSHTMLVideoElementConstructorTable, this, propertyName, slot);
}

bool JSHTMLVideoElementConstructor::getOwnPropertyDescriptor(ExecState* exec, const Identifier& propertyName, PropertyDescriptor& descriptor)
{
    return getStaticValueDescriptor<JSHTMLVideoElementConstructor, DOMObject>(exec, &JSHTMLVideoElementConstructorTable, this, propertyName, descriptor);
}

/* Hash table for prototype */

static const HashTableValue JSHTMLVideoElementPrototypeTableValues[5] =
{
    { "webkitEnterFullscreen", DontDelete|Function, (intptr_t)static_cast<NativeFunction>(jsHTMLVideoElementPrototypeFunctionWebkitEnterFullscreen), (intptr_t)0 },
    { "webkitExitFullscreen", DontDelete|Function, (intptr_t)static_cast<NativeFunction>(jsHTMLVideoElementPrototypeFunctionWebkitExitFullscreen), (intptr_t)0 },
    { "webkitEnterFullScreen", DontDelete|Function, (intptr_t)static_cast<NativeFunction>(jsHTMLVideoElementPrototypeFunctionWebkitEnterFullScreen), (intptr_t)0 },
    { "webkitExitFullScreen", DontDelete|Function, (intptr_t)static_cast<NativeFunction>(jsHTMLVideoElementPrototypeFunctionWebkitExitFullScreen), (intptr_t)0 },
    { 0, 0, 0, 0 }
};

static JSC_CONST_HASHTABLE HashTable JSHTMLVideoElementPrototypeTable =
#if ENABLE(PERFECT_HASH_SIZE)
    { 3, JSHTMLVideoElementPrototypeTableValues, 0 };
#else
    { 8, 7, JSHTMLVideoElementPrototypeTableValues, 0 };
#endif

const ClassInfo JSHTMLVideoElementPrototype::s_info = { "HTMLVideoElementPrototype", 0, &JSHTMLVideoElementPrototypeTable, 0 };

JSObject* JSHTMLVideoElementPrototype::self(ExecState* exec, JSGlobalObject* globalObject)
{
    return getDOMPrototype<JSHTMLVideoElement>(exec, globalObject);
}

bool JSHTMLVideoElementPrototype::getOwnPropertySlot(ExecState* exec, const Identifier& propertyName, PropertySlot& slot)
{
    return getStaticFunctionSlot<JSObject>(exec, &JSHTMLVideoElementPrototypeTable, this, propertyName, slot);
}

bool JSHTMLVideoElementPrototype::getOwnPropertyDescriptor(ExecState* exec, const Identifier& propertyName, PropertyDescriptor& descriptor)
{
    return getStaticFunctionDescriptor<JSObject>(exec, &JSHTMLVideoElementPrototypeTable, this, propertyName, descriptor);
}

const ClassInfo JSHTMLVideoElement::s_info = { "HTMLVideoElement", &JSHTMLMediaElement::s_info, &JSHTMLVideoElementTable, 0 };

JSHTMLVideoElement::JSHTMLVideoElement(NonNullPassRefPtr<Structure> structure, JSDOMGlobalObject* globalObject, PassRefPtr<HTMLVideoElement> impl)
    : JSHTMLMediaElement(structure, globalObject, impl)
{
}

JSObject* JSHTMLVideoElement::createPrototype(ExecState* exec, JSGlobalObject* globalObject)
{
    return new (exec) JSHTMLVideoElementPrototype(JSHTMLVideoElementPrototype::createStructure(JSHTMLMediaElementPrototype::self(exec, globalObject)));
}

bool JSHTMLVideoElement::getOwnPropertySlot(ExecState* exec, const Identifier& propertyName, PropertySlot& slot)
{
    return getStaticValueSlot<JSHTMLVideoElement, Base>(exec, &JSHTMLVideoElementTable, this, propertyName, slot);
}

bool JSHTMLVideoElement::getOwnPropertyDescriptor(ExecState* exec, const Identifier& propertyName, PropertyDescriptor& descriptor)
{
    return getStaticValueDescriptor<JSHTMLVideoElement, Base>(exec, &JSHTMLVideoElementTable, this, propertyName, descriptor);
}

JSValue jsHTMLVideoElementWidth(ExecState* exec, JSValue slotBase, const Identifier&)
{
    JSHTMLVideoElement* castedThis = static_cast<JSHTMLVideoElement*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    HTMLVideoElement* imp = static_cast<HTMLVideoElement*>(castedThis->impl());
    JSValue result = jsNumber(exec, imp->width());
    return result;
}

JSValue jsHTMLVideoElementHeight(ExecState* exec, JSValue slotBase, const Identifier&)
{
    JSHTMLVideoElement* castedThis = static_cast<JSHTMLVideoElement*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    HTMLVideoElement* imp = static_cast<HTMLVideoElement*>(castedThis->impl());
    JSValue result = jsNumber(exec, imp->height());
    return result;
}

JSValue jsHTMLVideoElementVideoWidth(ExecState* exec, JSValue slotBase, const Identifier&)
{
    JSHTMLVideoElement* castedThis = static_cast<JSHTMLVideoElement*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    HTMLVideoElement* imp = static_cast<HTMLVideoElement*>(castedThis->impl());
    JSValue result = jsNumber(exec, imp->videoWidth());
    return result;
}

JSValue jsHTMLVideoElementVideoHeight(ExecState* exec, JSValue slotBase, const Identifier&)
{
    JSHTMLVideoElement* castedThis = static_cast<JSHTMLVideoElement*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    HTMLVideoElement* imp = static_cast<HTMLVideoElement*>(castedThis->impl());
    JSValue result = jsNumber(exec, imp->videoHeight());
    return result;
}

JSValue jsHTMLVideoElementPoster(ExecState* exec, JSValue slotBase, const Identifier&)
{
    JSHTMLVideoElement* castedThis = static_cast<JSHTMLVideoElement*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    HTMLVideoElement* imp = static_cast<HTMLVideoElement*>(castedThis->impl());
    JSValue result = jsString(exec, imp->poster());
    return result;
}

JSValue jsHTMLVideoElementWebkitSupportsFullscreen(ExecState* exec, JSValue slotBase, const Identifier&)
{
    JSHTMLVideoElement* castedThis = static_cast<JSHTMLVideoElement*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    HTMLVideoElement* imp = static_cast<HTMLVideoElement*>(castedThis->impl());
    JSValue result = jsBoolean(imp->webkitSupportsFullscreen());
    return result;
}

JSValue jsHTMLVideoElementWebkitDisplayingFullscreen(ExecState* exec, JSValue slotBase, const Identifier&)
{
    JSHTMLVideoElement* castedThis = static_cast<JSHTMLVideoElement*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    HTMLVideoElement* imp = static_cast<HTMLVideoElement*>(castedThis->impl());
    JSValue result = jsBoolean(imp->webkitDisplayingFullscreen());
    return result;
}

JSValue jsHTMLVideoElementConstructor(ExecState* exec, JSValue slotBase, const Identifier&)
{
    JSHTMLVideoElement* domObject = static_cast<JSHTMLVideoElement*>(asObject(slotBase));
    return JSHTMLVideoElement::getConstructor(exec, domObject->globalObject());
}
void JSHTMLVideoElement::put(ExecState* exec, const Identifier& propertyName, JSValue value, PutPropertySlot& slot)
{
    lookupPut<JSHTMLVideoElement, Base>(exec, propertyName, value, &JSHTMLVideoElementTable, this, slot);
}

void setJSHTMLVideoElementWidth(ExecState* exec, JSObject* thisObject, JSValue value)
{
    JSHTMLVideoElement* castedThisObj = static_cast<JSHTMLVideoElement*>(thisObject);
    HTMLVideoElement* imp = static_cast<HTMLVideoElement*>(castedThisObj->impl());
    imp->setWidth(value.toInt32(exec));
}

void setJSHTMLVideoElementHeight(ExecState* exec, JSObject* thisObject, JSValue value)
{
    JSHTMLVideoElement* castedThisObj = static_cast<JSHTMLVideoElement*>(thisObject);
    HTMLVideoElement* imp = static_cast<HTMLVideoElement*>(castedThisObj->impl());
    imp->setHeight(value.toInt32(exec));
}

void setJSHTMLVideoElementPoster(ExecState* exec, JSObject* thisObject, JSValue value)
{
    JSHTMLVideoElement* castedThisObj = static_cast<JSHTMLVideoElement*>(thisObject);
    HTMLVideoElement* imp = static_cast<HTMLVideoElement*>(castedThisObj->impl());
    imp->setPoster(valueToStringWithNullCheck(exec, value));
}

JSValue JSHTMLVideoElement::getConstructor(ExecState* exec, JSGlobalObject* globalObject)
{
    return getDOMConstructor<JSHTMLVideoElementConstructor>(exec, static_cast<JSDOMGlobalObject*>(globalObject));
}

JSValue JSC_HOST_CALL jsHTMLVideoElementPrototypeFunctionWebkitEnterFullscreen(ExecState* exec, JSObject*, JSValue thisValue, const ArgList& args)
{
    UNUSED_PARAM(args);
    if (!thisValue.inherits(&JSHTMLVideoElement::s_info))
        return throwError(exec, TypeError);
    JSHTMLVideoElement* castedThisObj = static_cast<JSHTMLVideoElement*>(asObject(thisValue));
    HTMLVideoElement* imp = static_cast<HTMLVideoElement*>(castedThisObj->impl());
    ExceptionCode ec = 0;

    imp->webkitEnterFullscreen(processingUserGesture(exec), ec);
    setDOMException(exec, ec);
    return jsUndefined();
}

JSValue JSC_HOST_CALL jsHTMLVideoElementPrototypeFunctionWebkitExitFullscreen(ExecState* exec, JSObject*, JSValue thisValue, const ArgList& args)
{
    UNUSED_PARAM(args);
    if (!thisValue.inherits(&JSHTMLVideoElement::s_info))
        return throwError(exec, TypeError);
    JSHTMLVideoElement* castedThisObj = static_cast<JSHTMLVideoElement*>(asObject(thisValue));
    HTMLVideoElement* imp = static_cast<HTMLVideoElement*>(castedThisObj->impl());

    imp->webkitExitFullscreen();
    return jsUndefined();
}

JSValue JSC_HOST_CALL jsHTMLVideoElementPrototypeFunctionWebkitEnterFullScreen(ExecState* exec, JSObject*, JSValue thisValue, const ArgList& args)
{
    UNUSED_PARAM(args);
    if (!thisValue.inherits(&JSHTMLVideoElement::s_info))
        return throwError(exec, TypeError);
    JSHTMLVideoElement* castedThisObj = static_cast<JSHTMLVideoElement*>(asObject(thisValue));
    HTMLVideoElement* imp = static_cast<HTMLVideoElement*>(castedThisObj->impl());
    ExceptionCode ec = 0;

    imp->webkitEnterFullScreen(processingUserGesture(exec), ec);
    setDOMException(exec, ec);
    return jsUndefined();
}

JSValue JSC_HOST_CALL jsHTMLVideoElementPrototypeFunctionWebkitExitFullScreen(ExecState* exec, JSObject*, JSValue thisValue, const ArgList& args)
{
    UNUSED_PARAM(args);
    if (!thisValue.inherits(&JSHTMLVideoElement::s_info))
        return throwError(exec, TypeError);
    JSHTMLVideoElement* castedThisObj = static_cast<JSHTMLVideoElement*>(asObject(thisValue));
    HTMLVideoElement* imp = static_cast<HTMLVideoElement*>(castedThisObj->impl());

    imp->webkitExitFullScreen();
    return jsUndefined();
}


}

#endif // ENABLE(VIDEO)
