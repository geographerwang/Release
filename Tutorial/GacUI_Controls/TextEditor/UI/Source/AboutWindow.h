﻿/***********************************************************************
!!!!!! DO NOT MODIFY !!!!!!

GacGen.exe Resource.xml

This file is generated by Workflow compiler
https://github.com/vczh-libraries
***********************************************************************/

#ifndef VCZH_WORKFLOW_COMPILER_GENERATED_ABOUTWINDOW
#define VCZH_WORKFLOW_COMPILER_GENERATED_ABOUTWINDOW

#include "DemoPartialClasses.h"

#if defined( _MSC_VER)
#pragma warning(push)
#pragma warning(disable:4250)
#elif defined(__GNUC__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wparentheses-equality"
#elif defined(__clang__)
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wparentheses-equality"
#endif

namespace demo
{
	class AboutWindow : public ::vl::presentation::controls::GuiWindow, public ::demo::AboutWindowConstructor, public ::vl::reflection::Description<AboutWindow>
	{
		friend class ::demo::AboutWindowConstructor;
		friend struct ::vl_workflow_global::__vwsnf2_Demo_demo_AboutWindowConstructor___vwsn_demo_AboutWindow_Initialize_;
		friend struct ::vl_workflow_global::__vwsno1_Demo_demo_AboutWindowConstructor___vwsn_demo_AboutWindow_Initialize_;
#ifndef VCZH_DEBUG_NO_REFLECTION
		friend struct ::vl::reflection::description::CustomTypeDescriptorSelector<AboutWindow>;
#endif
	protected:
		void documentLabel_ActiveHyperlinkExecuted(::vl::presentation::compositions::GuiGraphicsComposition* sender, ::vl::presentation::compositions::GuiEventArgs* arguments);
	public:
		AboutWindow();
		~AboutWindow();
	};

}
#if defined( _MSC_VER)
#pragma warning(pop)
#elif defined(__GNUC__)
#pragma GCC diagnostic pop
#elif defined(__clang__)
#pragma clang diagnostic pop
#endif

#endif
