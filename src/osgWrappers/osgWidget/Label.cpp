// ***************************************************************************
//
//   Generated automatically by genwrapper.
//   Please DO NOT EDIT this file!
//
// ***************************************************************************

#include <osgIntrospection/ReflectionMacros>
#include <osgIntrospection/TypedMethodInfo>
#include <osgIntrospection/StaticMethodInfo>
#include <osgIntrospection/Attributes>

#include <osg/CopyOp>
#include <osg/Object>
#include <osgText/Text>
#include <osgWidget/Label>
#include <osgWidget/Types>
#include <osgWidget/Window>
#include <osgWidget/WindowManager>

// Must undefine IN and OUT macros defined in Windows headers
#ifdef IN
#undef IN
#endif
#ifdef OUT
#undef OUT
#endif

BEGIN_OBJECT_REFLECTOR(osgWidget::Label)
	I_DeclaringFile("osgWidget/Label");
	I_BaseType(osgWidget::Widget);
	I_Method0(osg::Object *, cloneType,
	          Properties::VIRTUAL,
	          __osg_Object_P1__cloneType,
	          "Clone the type of an object, with Object* return type. ",
	          "Must be defined by derived classes. ");
	I_Method1(osg::Object *, clone, IN, const osg::CopyOp &, x,
	          Properties::VIRTUAL,
	          __osg_Object_P1__clone__C5_osg_CopyOp_R1,
	          "Clone an object, with Object* return type. ",
	          "Must be defined by derived classes. ");
	I_Method1(bool, isSameKindAs, IN, const osg::Object *, obj,
	          Properties::VIRTUAL,
	          __bool__isSameKindAs__C5_osg_Object_P1,
	          "",
	          "");
	I_Method0(const char *, libraryName,
	          Properties::VIRTUAL,
	          __C5_char_P1__libraryName,
	          "return the name of the object's library. ",
	          "Must be defined by derived classes. The OpenSceneGraph convention is that the namespace of a library is the same as the library name. ");
	I_Method0(const char *, className,
	          Properties::VIRTUAL,
	          __C5_char_P1__className,
	          "return the name of the object's class type. ",
	          "Must be defined by derived classes. ");
	I_Method1(, META_UIObject, IN, osgWidget::Label, x,
	          Properties::NON_VIRTUAL,
	          ____META_UIObject__Label,
	          "",
	          "");
	I_ConstructorWithDefaults2(IN, const std::string &, x, "", IN, const std::string &, x, "",
	                           ____Label__C5_std_string_R1__C5_std_string_R1,
	                           "",
	                           "");
	I_Constructor2(IN, const osgWidget::Label &, x, IN, const osg::CopyOp &, x,
	               ____Label__C5_Label_R1__C5_osg_CopyOp_R1,
	               "",
	               "");
	I_Method1(void, parented, IN, osgWidget::Window *, x,
	          Properties::VIRTUAL,
	          __void__parented__Window_P1,
	          "",
	          "");
	I_Method1(void, unparented, IN, osgWidget::Window *, x,
	          Properties::VIRTUAL,
	          __void__unparented__Window_P1,
	          "",
	          "");
	I_Method1(void, managed, IN, osgWidget::WindowManager *, x,
	          Properties::VIRTUAL,
	          __void__managed__WindowManager_P1,
	          "",
	          "");
	I_Method0(void, positioned,
	          Properties::VIRTUAL,
	          __void__positioned,
	          "",
	          "");
	I_Method0(void, update,
	          Properties::NON_VIRTUAL,
	          __void__update,
	          "",
	          "");
	I_Method1(void, setLabel, IN, const std::string &, x,
	          Properties::NON_VIRTUAL,
	          __void__setLabel__C5_std_string_R1,
	          "",
	          "");
	I_Method1(void, setFont, IN, const std::string &, x,
	          Properties::NON_VIRTUAL,
	          __void__setFont__C5_std_string_R1,
	          "",
	          "");
	I_Method1(void, setFontSize, IN, unsigned, int,
	          Properties::NON_VIRTUAL,
	          __void__setFontSize__unsigned,
	          "",
	          "");
	I_Method1(void, setFontColor, IN, const osgWidget::Color &, x,
	          Properties::NON_VIRTUAL,
	          __void__setFontColor__C5_Color_R1,
	          "",
	          "");
	I_Method1(void, setShadow, IN, osgWidget::point_type, x,
	          Properties::NON_VIRTUAL,
	          __void__setShadow__point_type,
	          "",
	          "");
	I_Method0(osgWidget::XYCoord, getTextSize,
	          Properties::NON_VIRTUAL,
	          __XYCoord__getTextSize,
	          "",
	          "");
	I_Method0(std::string, getLabel,
	          Properties::NON_VIRTUAL,
	          __std_string__getLabel,
	          "",
	          "");
	I_Method4(void, setFontColor, IN, osgWidget::point_type, r, IN, osgWidget::point_type, g, IN, osgWidget::point_type, b, IN, osgWidget::point_type, a,
	          Properties::NON_VIRTUAL,
	          __void__setFontColor__point_type__point_type__point_type__point_type,
	          "",
	          "");
	I_Method0(const osgText::Text *, getText,
	          Properties::NON_VIRTUAL,
	          __C5_osgText_Text_P1__getText,
	          "",
	          "");
	I_ProtectedMethod1(void, _calculateSize, IN, const osgWidget::XYCoord &, x,
	                   Properties::VIRTUAL,
	                   Properties::NON_CONST,
	                   __void___calculateSize__C5_XYCoord_R1,
	                   "",
	                   "");
	I_SimpleProperty(const std::string &, Font, 
	                 0, 
	                 __void__setFont__C5_std_string_R1);
	I_SimpleProperty(const osgWidget::Color &, FontColor, 
	                 0, 
	                 __void__setFontColor__C5_Color_R1);
	I_SimpleProperty(unsigned, FontSize, 
	                 0, 
	                 __void__setFontSize__unsigned);
	I_SimpleProperty(std::string, Label, 
	                 __std_string__getLabel, 
	                 __void__setLabel__C5_std_string_R1);
	I_SimpleProperty(osgWidget::point_type, Shadow, 
	                 0, 
	                 __void__setShadow__point_type);
	I_SimpleProperty(const osgText::Text *, Text, 
	                 __C5_osgText_Text_P1__getText, 
	                 0);
	I_SimpleProperty(osgWidget::XYCoord, TextSize, 
	                 __XYCoord__getTextSize, 
	                 0);
END_REFLECTOR

