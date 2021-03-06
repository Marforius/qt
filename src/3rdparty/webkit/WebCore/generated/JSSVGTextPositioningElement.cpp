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

#if ENABLE(SVG)

#include "JSSVGTextPositioningElement.h"

#include "JSSVGAnimatedLengthList.h"
#include "JSSVGAnimatedNumberList.h"
#include "SVGTextPositioningElement.h"
#include <wtf/GetPtr.h>

using namespace JSC;

namespace WebCore {

ASSERT_CLASS_FITS_IN_CELL(JSSVGTextPositioningElement);

/* Hash table */

static const HashTableValue JSSVGTextPositioningElementTableValues[7] =
{
    { "x", DontDelete|ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsSVGTextPositioningElementX), (intptr_t)0 },
    { "y", DontDelete|ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsSVGTextPositioningElementY), (intptr_t)0 },
    { "dx", DontDelete|ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsSVGTextPositioningElementDx), (intptr_t)0 },
    { "dy", DontDelete|ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsSVGTextPositioningElementDy), (intptr_t)0 },
    { "rotate", DontDelete|ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsSVGTextPositioningElementRotate), (intptr_t)0 },
    { "constructor", DontEnum|ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsSVGTextPositioningElementConstructor), (intptr_t)0 },
    { 0, 0, 0, 0 }
};

static JSC_CONST_HASHTABLE HashTable JSSVGTextPositioningElementTable =
#if ENABLE(PERFECT_HASH_SIZE)
    { 31, JSSVGTextPositioningElementTableValues, 0 };
#else
    { 17, 15, JSSVGTextPositioningElementTableValues, 0 };
#endif

/* Hash table for constructor */

static const HashTableValue JSSVGTextPositioningElementConstructorTableValues[1] =
{
    { 0, 0, 0, 0 }
};

static JSC_CONST_HASHTABLE HashTable JSSVGTextPositioningElementConstructorTable =
#if ENABLE(PERFECT_HASH_SIZE)
    { 0, JSSVGTextPositioningElementConstructorTableValues, 0 };
#else
    { 1, 0, JSSVGTextPositioningElementConstructorTableValues, 0 };
#endif

class JSSVGTextPositioningElementConstructor : public DOMConstructorObject {
public:
    JSSVGTextPositioningElementConstructor(ExecState* exec, JSDOMGlobalObject* globalObject)
        : DOMConstructorObject(JSSVGTextPositioningElementConstructor::createStructure(globalObject->objectPrototype()), globalObject)
    {
        putDirect(exec->propertyNames().prototype, JSSVGTextPositioningElementPrototype::self(exec, globalObject), None);
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

const ClassInfo JSSVGTextPositioningElementConstructor::s_info = { "SVGTextPositioningElementConstructor", 0, &JSSVGTextPositioningElementConstructorTable, 0 };

bool JSSVGTextPositioningElementConstructor::getOwnPropertySlot(ExecState* exec, const Identifier& propertyName, PropertySlot& slot)
{
    return getStaticValueSlot<JSSVGTextPositioningElementConstructor, DOMObject>(exec, &JSSVGTextPositioningElementConstructorTable, this, propertyName, slot);
}

bool JSSVGTextPositioningElementConstructor::getOwnPropertyDescriptor(ExecState* exec, const Identifier& propertyName, PropertyDescriptor& descriptor)
{
    return getStaticValueDescriptor<JSSVGTextPositioningElementConstructor, DOMObject>(exec, &JSSVGTextPositioningElementConstructorTable, this, propertyName, descriptor);
}

/* Hash table for prototype */

static const HashTableValue JSSVGTextPositioningElementPrototypeTableValues[1] =
{
    { 0, 0, 0, 0 }
};

static JSC_CONST_HASHTABLE HashTable JSSVGTextPositioningElementPrototypeTable =
#if ENABLE(PERFECT_HASH_SIZE)
    { 0, JSSVGTextPositioningElementPrototypeTableValues, 0 };
#else
    { 1, 0, JSSVGTextPositioningElementPrototypeTableValues, 0 };
#endif

const ClassInfo JSSVGTextPositioningElementPrototype::s_info = { "SVGTextPositioningElementPrototype", 0, &JSSVGTextPositioningElementPrototypeTable, 0 };

JSObject* JSSVGTextPositioningElementPrototype::self(ExecState* exec, JSGlobalObject* globalObject)
{
    return getDOMPrototype<JSSVGTextPositioningElement>(exec, globalObject);
}

const ClassInfo JSSVGTextPositioningElement::s_info = { "SVGTextPositioningElement", &JSSVGTextContentElement::s_info, &JSSVGTextPositioningElementTable, 0 };

JSSVGTextPositioningElement::JSSVGTextPositioningElement(NonNullPassRefPtr<Structure> structure, JSDOMGlobalObject* globalObject, PassRefPtr<SVGTextPositioningElement> impl)
    : JSSVGTextContentElement(structure, globalObject, impl)
{
}

JSObject* JSSVGTextPositioningElement::createPrototype(ExecState* exec, JSGlobalObject* globalObject)
{
    return new (exec) JSSVGTextPositioningElementPrototype(JSSVGTextPositioningElementPrototype::createStructure(JSSVGTextContentElementPrototype::self(exec, globalObject)));
}

bool JSSVGTextPositioningElement::getOwnPropertySlot(ExecState* exec, const Identifier& propertyName, PropertySlot& slot)
{
    return getStaticValueSlot<JSSVGTextPositioningElement, Base>(exec, &JSSVGTextPositioningElementTable, this, propertyName, slot);
}

bool JSSVGTextPositioningElement::getOwnPropertyDescriptor(ExecState* exec, const Identifier& propertyName, PropertyDescriptor& descriptor)
{
    return getStaticValueDescriptor<JSSVGTextPositioningElement, Base>(exec, &JSSVGTextPositioningElementTable, this, propertyName, descriptor);
}

JSValue jsSVGTextPositioningElementX(ExecState* exec, JSValue slotBase, const Identifier&)
{
    JSSVGTextPositioningElement* castedThis = static_cast<JSSVGTextPositioningElement*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    SVGTextPositioningElement* imp = static_cast<SVGTextPositioningElement*>(castedThis->impl());
    RefPtr<SVGAnimatedLengthList> obj = imp->xAnimated();
    JSValue result =  toJS(exec, castedThis->globalObject(), obj.get(), imp);
    return result;
}

JSValue jsSVGTextPositioningElementY(ExecState* exec, JSValue slotBase, const Identifier&)
{
    JSSVGTextPositioningElement* castedThis = static_cast<JSSVGTextPositioningElement*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    SVGTextPositioningElement* imp = static_cast<SVGTextPositioningElement*>(castedThis->impl());
    RefPtr<SVGAnimatedLengthList> obj = imp->yAnimated();
    JSValue result =  toJS(exec, castedThis->globalObject(), obj.get(), imp);
    return result;
}

JSValue jsSVGTextPositioningElementDx(ExecState* exec, JSValue slotBase, const Identifier&)
{
    JSSVGTextPositioningElement* castedThis = static_cast<JSSVGTextPositioningElement*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    SVGTextPositioningElement* imp = static_cast<SVGTextPositioningElement*>(castedThis->impl());
    RefPtr<SVGAnimatedLengthList> obj = imp->dxAnimated();
    JSValue result =  toJS(exec, castedThis->globalObject(), obj.get(), imp);
    return result;
}

JSValue jsSVGTextPositioningElementDy(ExecState* exec, JSValue slotBase, const Identifier&)
{
    JSSVGTextPositioningElement* castedThis = static_cast<JSSVGTextPositioningElement*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    SVGTextPositioningElement* imp = static_cast<SVGTextPositioningElement*>(castedThis->impl());
    RefPtr<SVGAnimatedLengthList> obj = imp->dyAnimated();
    JSValue result =  toJS(exec, castedThis->globalObject(), obj.get(), imp);
    return result;
}

JSValue jsSVGTextPositioningElementRotate(ExecState* exec, JSValue slotBase, const Identifier&)
{
    JSSVGTextPositioningElement* castedThis = static_cast<JSSVGTextPositioningElement*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    SVGTextPositioningElement* imp = static_cast<SVGTextPositioningElement*>(castedThis->impl());
    RefPtr<SVGAnimatedNumberList> obj = imp->rotateAnimated();
    JSValue result =  toJS(exec, castedThis->globalObject(), obj.get(), imp);
    return result;
}

JSValue jsSVGTextPositioningElementConstructor(ExecState* exec, JSValue slotBase, const Identifier&)
{
    JSSVGTextPositioningElement* domObject = static_cast<JSSVGTextPositioningElement*>(asObject(slotBase));
    return JSSVGTextPositioningElement::getConstructor(exec, domObject->globalObject());
}
JSValue JSSVGTextPositioningElement::getConstructor(ExecState* exec, JSGlobalObject* globalObject)
{
    return getDOMConstructor<JSSVGTextPositioningElementConstructor>(exec, static_cast<JSDOMGlobalObject*>(globalObject));
}


}

#endif // ENABLE(SVG)
