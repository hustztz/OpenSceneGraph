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
#include <osg/Image>
#include <osg/ImageStream>
#include <osg/Object>

// Must undefine IN and OUT macros defined in Windows headers
#ifdef IN
#undef IN
#endif
#ifdef OUT
#undef OUT
#endif

BEGIN_ENUM_REFLECTOR(osg::ImageStream::StreamStatus)
	I_DeclaringFile("osg/ImageStream");
	I_EnumLabel(osg::ImageStream::INVALID);
	I_EnumLabel(osg::ImageStream::PLAYING);
	I_EnumLabel(osg::ImageStream::PAUSED);
	I_EnumLabel(osg::ImageStream::REWINDING);
END_REFLECTOR

BEGIN_ENUM_REFLECTOR(osg::ImageStream::LoopingMode)
	I_DeclaringFile("osg/ImageStream");
	I_EnumLabel(osg::ImageStream::NO_LOOPING);
	I_EnumLabel(osg::ImageStream::LOOPING);
END_REFLECTOR

BEGIN_OBJECT_REFLECTOR(osg::ImageStream)
	I_DeclaringFile("osg/ImageStream");
	I_BaseType(osg::Image);
	I_Constructor0(____ImageStream,
	               "",
	               "");
	I_ConstructorWithDefaults2(IN, const osg::ImageStream &, image, , IN, const osg::CopyOp &, copyop, osg::CopyOp::SHALLOW_COPY,
	                           ____ImageStream__C5_ImageStream_R1__C5_CopyOp_R1,
	                           "Copy constructor using CopyOp to manage deep vs shallow copy. ",
	                           "");
	I_Method0(osg::Object *, cloneType,
	          Properties::VIRTUAL,
	          __Object_P1__cloneType,
	          "Clone the type of an object, with Object* return type. ",
	          "Must be defined by derived classes. ");
	I_Method1(osg::Object *, clone, IN, const osg::CopyOp &, x,
	          Properties::VIRTUAL,
	          __Object_P1__clone__C5_CopyOp_R1,
	          "Clone an object, with Object* return type. ",
	          "Must be defined by derived classes. ");
	I_Method1(bool, isSameKindAs, IN, const osg::Object *, obj,
	          Properties::VIRTUAL,
	          __bool__isSameKindAs__C5_Object_P1,
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
	I_Method1(int, compare, IN, const osg::Image &, rhs,
	          Properties::VIRTUAL,
	          __int__compare__C5_Image_R1,
	          "Return -1 if *this < *rhs, 0 if *this==*rhs, 1 if *this>*rhs. ",
	          "");
	I_Method0(void, play,
	          Properties::VIRTUAL,
	          __void__play,
	          "",
	          "");
	I_Method0(void, pause,
	          Properties::VIRTUAL,
	          __void__pause,
	          "",
	          "");
	I_Method0(void, rewind,
	          Properties::VIRTUAL,
	          __void__rewind,
	          "",
	          "");
	I_MethodWithDefaults1(void, quit, IN, bool, x, true,
	                      Properties::VIRTUAL,
	                      __void__quit__bool,
	                      "",
	                      "");
	I_Method0(osg::ImageStream::StreamStatus, getStatus,
	          Properties::NON_VIRTUAL,
	          __StreamStatus__getStatus,
	          "",
	          "");
	I_Method1(void, setLoopingMode, IN, osg::ImageStream::LoopingMode, mode,
	          Properties::NON_VIRTUAL,
	          __void__setLoopingMode__LoopingMode,
	          "",
	          "");
	I_Method0(osg::ImageStream::LoopingMode, getLoopingMode,
	          Properties::NON_VIRTUAL,
	          __LoopingMode__getLoopingMode,
	          "",
	          "");
	I_Method0(double, getLength,
	          Properties::VIRTUAL,
	          __double__getLength,
	          "",
	          "");
	I_Method1(void, setReferenceTime, IN, double, x,
	          Properties::VIRTUAL,
	          __void__setReferenceTime__double,
	          "",
	          "");
	I_Method0(double, getReferenceTime,
	          Properties::VIRTUAL,
	          __double__getReferenceTime,
	          "",
	          "");
	I_Method1(void, setTimeMultiplier, IN, double, x,
	          Properties::VIRTUAL,
	          __void__setTimeMultiplier__double,
	          "",
	          "");
	I_Method0(double, getTimeMultiplier,
	          Properties::VIRTUAL,
	          __double__getTimeMultiplier,
	          "",
	          "");
	I_Method1(void, setVolume, IN, float, x,
	          Properties::VIRTUAL,
	          __void__setVolume__float,
	          "",
	          "");
	I_Method0(float, getVolume,
	          Properties::VIRTUAL,
	          __float__getVolume,
	          "",
	          "");
	I_ProtectedMethod0(void, applyLoopingMode,
	                   Properties::VIRTUAL,
	                   Properties::NON_CONST,
	                   __void__applyLoopingMode,
	                   "",
	                   "");
	I_SimpleProperty(double, Length, 
	                 __double__getLength, 
	                 0);
	I_SimpleProperty(osg::ImageStream::LoopingMode, LoopingMode, 
	                 __LoopingMode__getLoopingMode, 
	                 __void__setLoopingMode__LoopingMode);
	I_SimpleProperty(double, ReferenceTime, 
	                 __double__getReferenceTime, 
	                 __void__setReferenceTime__double);
	I_SimpleProperty(osg::ImageStream::StreamStatus, Status, 
	                 __StreamStatus__getStatus, 
	                 0);
	I_SimpleProperty(double, TimeMultiplier, 
	                 __double__getTimeMultiplier, 
	                 __void__setTimeMultiplier__double);
	I_SimpleProperty(float, Volume, 
	                 __float__getVolume, 
	                 __void__setVolume__float);
END_REFLECTOR

