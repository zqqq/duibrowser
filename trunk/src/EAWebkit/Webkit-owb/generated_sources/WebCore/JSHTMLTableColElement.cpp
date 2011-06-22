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

/*
* This file was modified by Electronic Arts Inc Copyright � 2009-2010
*/

#include "config.h"

#include "JSHTMLTableColElement.h"

#include <wtf/GetPtr.h>

#include "HTMLTableColElement.h"
#include "KURL.h"

using namespace KJS;

namespace WebCore {

/* Hash table */

static const HashTableValue JSHTMLTableColElementTableValues[8] =
{
    { "align", (intptr_t)JSHTMLTableColElement::AlignAttrNum, DontDelete, 0 },
    { "ch", (intptr_t)JSHTMLTableColElement::ChAttrNum, DontDelete, 0 },
    { "chOff", (intptr_t)JSHTMLTableColElement::ChOffAttrNum, DontDelete, 0 },
    { "span", (intptr_t)JSHTMLTableColElement::SpanAttrNum, DontDelete, 0 },
    { "vAlign", (intptr_t)JSHTMLTableColElement::VAlignAttrNum, DontDelete, 0 },
    { "width", (intptr_t)JSHTMLTableColElement::WidthAttrNum, DontDelete, 0 },
    { "constructor", (intptr_t)JSHTMLTableColElement::ConstructorAttrNum, DontEnum, 0 },
    { 0, 0, 0, 0 }
};

static const HashTable JSHTMLTableColElementTable = { 511, JSHTMLTableColElementTableValues, 0 };

/* Hash table for constructor */

static const HashTableValue JSHTMLTableColElementConstructorTableValues[1] =
{
    { 0, 0, 0, 0 }
};

static const HashTable JSHTMLTableColElementConstructorTable = { 0, JSHTMLTableColElementConstructorTableValues, 0 };

class JSHTMLTableColElementConstructor : public DOMObject {
public:
    JSHTMLTableColElementConstructor(ExecState* exec)
        : DOMObject(exec->lexicalGlobalObject()->objectPrototype())
    {
        putDirect(exec->propertyNames().prototype, JSHTMLTableColElementPrototype::self(exec), None);
    }
    virtual bool getOwnPropertySlot(ExecState*, const Identifier&, PropertySlot&);
    JSValue* getValueProperty(ExecState*, int token) const;
    virtual const ClassInfo* classInfo() const { return &s_info; }
    static const ClassInfo s_info;

    virtual bool implementsHasInstance() const { return true; }
};

const ClassInfo JSHTMLTableColElementConstructor::s_info = { "HTMLTableColElementConstructor", 0, &JSHTMLTableColElementConstructorTable, 0 };

bool JSHTMLTableColElementConstructor::getOwnPropertySlot(ExecState* exec, const Identifier& propertyName, PropertySlot& slot)
{
    return getStaticValueSlot<JSHTMLTableColElementConstructor, DOMObject>(exec, &JSHTMLTableColElementConstructorTable, this, propertyName, slot);
}

JSValue* JSHTMLTableColElementConstructor::getValueProperty(ExecState* exec, int token) const
{
    // The token is the numeric value of its associated constant
    return jsNumber(exec, token);
}

/* Hash table for prototype */

static const HashTableValue JSHTMLTableColElementPrototypeTableValues[1] =
{
    { 0, 0, 0, 0 }
};

static const HashTable JSHTMLTableColElementPrototypeTable = { 0, JSHTMLTableColElementPrototypeTableValues, 0 };

const ClassInfo JSHTMLTableColElementPrototype::s_info = { "HTMLTableColElementPrototype", 0, &JSHTMLTableColElementPrototypeTable, 0 };

JSObject* JSHTMLTableColElementPrototype::self(ExecState* exec)
{
    // Changed by Paul Pedriana (1/2009), as the static new was creating a memory leak. If this gets called a lot then we can consider making it a static pointer that's freed on shutdown.
    const Identifier prototypeIdentifier(exec, "[[JSHTMLTableColElement.prototype]]");
    return KJS::cacheGlobalObject<JSHTMLTableColElementPrototype>(exec, prototypeIdentifier);
}

const ClassInfo JSHTMLTableColElement::s_info = { "HTMLTableColElement", &JSHTMLElement::s_info, &JSHTMLTableColElementTable , 0 };

JSHTMLTableColElement::JSHTMLTableColElement(JSObject* prototype, HTMLTableColElement* impl)
    : JSHTMLElement(prototype, impl)
{
}

bool JSHTMLTableColElement::getOwnPropertySlot(ExecState* exec, const Identifier& propertyName, PropertySlot& slot)
{
    return getStaticValueSlot<JSHTMLTableColElement, Base>(exec, &JSHTMLTableColElementTable, this, propertyName, slot);
}

JSValue* JSHTMLTableColElement::getValueProperty(ExecState* exec, int token) const
{
    switch (token) {
    case AlignAttrNum: {
        HTMLTableColElement* imp = static_cast<HTMLTableColElement*>(impl());
        return jsString(exec, imp->align());
    }
    case ChAttrNum: {
        HTMLTableColElement* imp = static_cast<HTMLTableColElement*>(impl());
        return jsString(exec, imp->ch());
    }
    case ChOffAttrNum: {
        HTMLTableColElement* imp = static_cast<HTMLTableColElement*>(impl());
        return jsString(exec, imp->chOff());
    }
    case SpanAttrNum: {
        HTMLTableColElement* imp = static_cast<HTMLTableColElement*>(impl());
        return jsNumber(exec, imp->span());
    }
    case VAlignAttrNum: {
        HTMLTableColElement* imp = static_cast<HTMLTableColElement*>(impl());
        return jsString(exec, imp->vAlign());
    }
    case WidthAttrNum: {
        HTMLTableColElement* imp = static_cast<HTMLTableColElement*>(impl());
        return jsString(exec, imp->width());
    }
    case ConstructorAttrNum:
        return getConstructor(exec);
    }
    return 0;
}

void JSHTMLTableColElement::put(ExecState* exec, const Identifier& propertyName, JSValue* value)
{
    lookupPut<JSHTMLTableColElement, Base>(exec, propertyName, value, &JSHTMLTableColElementTable, this);
}

void JSHTMLTableColElement::putValueProperty(ExecState* exec, int token, JSValue* value)
{
    switch (token) {
    case AlignAttrNum: {
        HTMLTableColElement* imp = static_cast<HTMLTableColElement*>(impl());
        imp->setAlign(valueToStringWithNullCheck(exec, value));
        break;
    }
    case ChAttrNum: {
        HTMLTableColElement* imp = static_cast<HTMLTableColElement*>(impl());
        imp->setCh(valueToStringWithNullCheck(exec, value));
        break;
    }
    case ChOffAttrNum: {
        HTMLTableColElement* imp = static_cast<HTMLTableColElement*>(impl());
        imp->setChOff(valueToStringWithNullCheck(exec, value));
        break;
    }
    case SpanAttrNum: {
        HTMLTableColElement* imp = static_cast<HTMLTableColElement*>(impl());
        imp->setSpan(value->toInt32(exec));
        break;
    }
    case VAlignAttrNum: {
        HTMLTableColElement* imp = static_cast<HTMLTableColElement*>(impl());
        imp->setVAlign(valueToStringWithNullCheck(exec, value));
        break;
    }
    case WidthAttrNum: {
        HTMLTableColElement* imp = static_cast<HTMLTableColElement*>(impl());
        imp->setWidth(valueToStringWithNullCheck(exec, value));
        break;
    }
    }
}

JSValue* JSHTMLTableColElement::getConstructor(ExecState* exec)
{
    // Changed by Paul Pedriana (1/2009), as the static new was creating a memory leak. If this gets called a lot then we can consider making it a static pointer that's freed on shutdown.
    const Identifier constructorIdentifier(exec, "[[HTMLTableColElement.constructor]]");
    return KJS::cacheGlobalObject<JSHTMLTableColElementConstructor>(exec, constructorIdentifier);
}


}