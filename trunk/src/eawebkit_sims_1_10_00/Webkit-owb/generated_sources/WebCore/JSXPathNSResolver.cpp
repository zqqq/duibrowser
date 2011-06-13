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
* This file was modified by Electronic Arts Inc Copyright � 2009
*/

#include "config.h"


#if ENABLE(XPATH)

#include "JSXPathNSResolver.h"

#include <wtf/GetPtr.h>

#include "JSCustomXPathNSResolver.h"
#include "JSXPathNSResolver.h"
#include "KURL.h"
#include "PlatformString.h"

using namespace KJS;

namespace WebCore {

/* Hash table for prototype */

static const HashTableValue JSXPathNSResolverPrototypeTableValues[2] =
{
    { "lookupNamespaceURI", (intptr_t)jsXPathNSResolverPrototypeFunctionLookupNamespaceURI, DontDelete|Function, 1 },
    { 0, 0, 0, 0 }
};

static const HashTable JSXPathNSResolverPrototypeTable = { 0, JSXPathNSResolverPrototypeTableValues, 0 };

const ClassInfo JSXPathNSResolverPrototype::s_info = { "XPathNSResolverPrototype", 0, &JSXPathNSResolverPrototypeTable, 0 };

JSObject* JSXPathNSResolverPrototype::self(ExecState* exec)
{
    // Changed by Paul Pedriana (1/2009), as the static new was creating a memory leak. If this gets called a lot then we can consider making it a static pointer that's freed on shutdown.
    const Identifier prototypeIdentifier(exec, "[[JSXPathNSResolver.prototype]]");
    return KJS::cacheGlobalObject<JSXPathNSResolverPrototype>(exec, prototypeIdentifier);
}

bool JSXPathNSResolverPrototype::getOwnPropertySlot(ExecState* exec, const Identifier& propertyName, PropertySlot& slot)
{
    return getStaticFunctionSlot<JSObject>(exec, &JSXPathNSResolverPrototypeTable, this, propertyName, slot);
}

const ClassInfo JSXPathNSResolver::s_info = { "XPathNSResolver", 0, 0 , 0 };

JSXPathNSResolver::JSXPathNSResolver(JSObject* prototype, XPathNSResolver* impl)
    : DOMObject(prototype)
    , m_impl(impl)
{
}

JSXPathNSResolver::~JSXPathNSResolver()
{
    ScriptInterpreter::forgetDOMObject(m_impl.get());

}

JSValue* jsXPathNSResolverPrototypeFunctionLookupNamespaceURI(ExecState* exec, JSObject*, JSValue* thisValue, const ArgList& args)
{
    if (!thisValue->isObject(&JSXPathNSResolver::s_info))
        return throwError(exec, TypeError);
    JSXPathNSResolver* castedThisObj = static_cast<JSXPathNSResolver*>(thisValue);
    XPathNSResolver* imp = static_cast<XPathNSResolver*>(castedThisObj->impl());
    const UString& prefix = args[0]->toString(exec);


    KJS::JSValue* result = jsStringOrNull(exec, imp->lookupNamespaceURI(prefix));
    return result;
}

KJS::JSValue* toJS(KJS::ExecState* exec, XPathNSResolver* obj)
{
    return cacheDOMObject<XPathNSResolver, JSXPathNSResolver, JSXPathNSResolverPrototype>(exec, obj);
}
XPathNSResolver* toXPathNSResolver(KJS::JSValue* val)
{
    return val->isObject(&JSXPathNSResolver::s_info) ? static_cast<JSXPathNSResolver*>(val)->impl() : 0;
}

}

#endif // ENABLE(XPATH)