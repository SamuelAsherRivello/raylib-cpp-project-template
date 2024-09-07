/* =========================================================================
    Unity - A Test Framework for C
    ThrowTheSwitch.org
    Copyright (c) 2007-24 Mike Karlesky, Mark VanderVoord, & Greg Williams
    SPDX-License-Identifier: MIT
========================================================================= */


#include "client/templates/TemplateClass.h"
#include "client/3rdParty/Unity/unity.h"

//
using namespace RMC;
  
/* sometimes you may want to get at local data in a module.
 * for example: If you plan to pass by reference, this could be useful
 * however, it should often be avoided */
extern TemplateClass* templateClass;

void setUp(void)
{
  /* This is run before EACH TEST */
  templateClass = new TemplateClass(0);
}

void tearDown(void)
{
  delete &templateClass;
}

void TemplateClass_IsNotNull_WhenDefault(void)
{
  /* All of these should pass */
  TEST_ASSERT_NOT_NULL(templateClass);
}


void GetAge_Is0_WhenDefault(void)
{
  /* All of these should pass */
  TEST_ASSERT_EQUAL(0, templateClass->GetAge());
}

