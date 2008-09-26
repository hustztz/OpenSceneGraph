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

#include <osg/CollectOccludersVisitor>
#include <osg/LOD>
#include <osg/Node>
#include <osg/OccluderNode>
#include <osg/Projection>
#include <osg/Switch>
#include <osg/Transform>
#include <osg/Vec3>

// Must undefine IN and OUT macros defined in Windows headers
#ifdef IN
#undef IN
#endif
#ifdef OUT
#undef OUT
#endif

TYPE_NAME_ALIAS(std::set< osg::ShadowVolumeOccluder >, osg::CollectOccludersVisitor::ShadowVolumeOccluderSet)

BEGIN_OBJECT_REFLECTOR(osg::CollectOccludersVisitor)
	I_DeclaringFile("osg/CollectOccludersVisitor");
	I_BaseType(osg::NodeVisitor);
	I_BaseType(osg::CullStack);
	I_Constructor0(____CollectOccludersVisitor,
	               "",
	               "");
	I_Method0(osg::CollectOccludersVisitor *, cloneType,
	          Properties::VIRTUAL,
	          __CollectOccludersVisitor_P1__cloneType,
	          "",
	          "");
	I_Method0(void, reset,
	          Properties::VIRTUAL,
	          __void__reset,
	          "",
	          "");
	I_Method2(float, getDistanceToEyePoint, IN, const osg::Vec3 &, x, IN, bool, x,
	          Properties::VIRTUAL,
	          __float__getDistanceToEyePoint__C5_Vec3_R1__bool,
	          "Get the distance from a point to the eye point, distance value in local coordinate system. ",
	          "Note, not all NodeVisitor implement this method, it is mainly cull visitors which will implement. If the getDistanceFromEyePoint(pos) is not implemented then a default value of 0.0 is returned. ");
	I_Method2(float, getDistanceToViewPoint, IN, const osg::Vec3 &, x, IN, bool, x,
	          Properties::VIRTUAL,
	          __float__getDistanceToViewPoint__C5_Vec3_R1__bool,
	          "Get the distance from a point to the view point, distance value in local coordinate system. ",
	          "Note, not all NodeVisitor implement this method, it is mainly cull visitors which will implement. If the getDistanceToViewPoint(pos) is not implemented then a default value of 0.0 is returned. ");
	I_Method2(float, getDistanceFromEyePoint, IN, const osg::Vec3 &, x, IN, bool, x,
	          Properties::VIRTUAL,
	          __float__getDistanceFromEyePoint__C5_Vec3_R1__bool,
	          "Get the distance of a point from the eye point, distance value in the eye coordinate system. ",
	          "Note, not all NodeVisitor implement this method, it is mainly cull visitors which will implement. If the getDistanceFromEyePoint(pos) is not implemented than a default value of 0.0 is returned. ");
	I_Method1(void, apply, IN, osg::Node &, x,
	          Properties::VIRTUAL,
	          __void__apply__osg_Node_R1,
	          "",
	          "");
	I_Method1(void, apply, IN, osg::Transform &, node,
	          Properties::VIRTUAL,
	          __void__apply__osg_Transform_R1,
	          "",
	          "");
	I_Method1(void, apply, IN, osg::Projection &, node,
	          Properties::VIRTUAL,
	          __void__apply__osg_Projection_R1,
	          "",
	          "");
	I_Method1(void, apply, IN, osg::Switch &, node,
	          Properties::VIRTUAL,
	          __void__apply__osg_Switch_R1,
	          "",
	          "");
	I_Method1(void, apply, IN, osg::LOD &, node,
	          Properties::VIRTUAL,
	          __void__apply__osg_LOD_R1,
	          "",
	          "");
	I_Method1(void, apply, IN, osg::OccluderNode &, node,
	          Properties::VIRTUAL,
	          __void__apply__osg_OccluderNode_R1,
	          "",
	          "");
	I_Method1(void, setMinimumShadowOccluderVolume, IN, float, vol,
	          Properties::NON_VIRTUAL,
	          __void__setMinimumShadowOccluderVolume__float,
	          "Sets the minimum shadow occluder volume that an active occluder must have. ",
	          "vol is units relative the clip space volume where 1.0 is the whole clip space. ");
	I_Method0(float, getMinimumShadowOccluderVolume,
	          Properties::NON_VIRTUAL,
	          __float__getMinimumShadowOccluderVolume,
	          "",
	          "");
	I_Method1(void, setMaximumNumberOfActiveOccluders, IN, unsigned int, num,
	          Properties::NON_VIRTUAL,
	          __void__setMaximumNumberOfActiveOccluders__unsigned_int,
	          "Sets the maximum number of occluders to have active for culling purposes. ",
	          "");
	I_Method0(unsigned int, getMaximumNumberOfActiveOccluders,
	          Properties::NON_VIRTUAL,
	          __unsigned_int__getMaximumNumberOfActiveOccluders,
	          "",
	          "");
	I_Method1(void, setCreateDrawablesOnOccludeNodes, IN, bool, flag,
	          Properties::NON_VIRTUAL,
	          __void__setCreateDrawablesOnOccludeNodes__bool,
	          "",
	          "");
	I_Method0(bool, getCreateDrawablesOnOccludeNodes,
	          Properties::NON_VIRTUAL,
	          __bool__getCreateDrawablesOnOccludeNodes,
	          "",
	          "");
	I_Method1(void, setCollectedOccluderSet, IN, const osg::CollectOccludersVisitor::ShadowVolumeOccluderSet &, svol,
	          Properties::NON_VIRTUAL,
	          __void__setCollectedOccluderSet__C5_ShadowVolumeOccluderSet_R1,
	          "",
	          "");
	I_Method0(osg::CollectOccludersVisitor::ShadowVolumeOccluderSet &, getCollectedOccluderSet,
	          Properties::NON_VIRTUAL,
	          __ShadowVolumeOccluderSet_R1__getCollectedOccluderSet,
	          "",
	          "");
	I_Method0(const osg::CollectOccludersVisitor::ShadowVolumeOccluderSet &, getCollectedOccluderSet,
	          Properties::NON_VIRTUAL,
	          __C5_ShadowVolumeOccluderSet_R1__getCollectedOccluderSet,
	          "",
	          "");
	I_Method0(void, removeOccludedOccluders,
	          Properties::NON_VIRTUAL,
	          __void__removeOccludedOccluders,
	          "Removes occluded occluders for the collected occluders list, then discards all but MaximumNumberOfActiveOccluders of occluders, discarding the occluders with the lowest shadow occluder volume. ",
	          "");
	I_ProtectedMethod1(void, handle_cull_callbacks_and_traverse, IN, osg::Node &, node,
	                   Properties::NON_VIRTUAL,
	                   Properties::NON_CONST,
	                   __void__handle_cull_callbacks_and_traverse__osg_Node_R1,
	                   "",
	                   "");
	I_ProtectedMethod2(void, handle_cull_callbacks_and_accept, IN, osg::Node &, node, IN, osg::Node *, acceptNode,
	                   Properties::NON_VIRTUAL,
	                   Properties::NON_CONST,
	                   __void__handle_cull_callbacks_and_accept__osg_Node_R1__osg_Node_P1,
	                   "",
	                   "");
	I_SimpleProperty(const osg::CollectOccludersVisitor::ShadowVolumeOccluderSet &, CollectedOccluderSet, 
	                 __C5_ShadowVolumeOccluderSet_R1__getCollectedOccluderSet, 
	                 __void__setCollectedOccluderSet__C5_ShadowVolumeOccluderSet_R1);
	I_SimpleProperty(bool, CreateDrawablesOnOccludeNodes, 
	                 __bool__getCreateDrawablesOnOccludeNodes, 
	                 __void__setCreateDrawablesOnOccludeNodes__bool);
	I_SimpleProperty(unsigned int, MaximumNumberOfActiveOccluders, 
	                 __unsigned_int__getMaximumNumberOfActiveOccluders, 
	                 __void__setMaximumNumberOfActiveOccluders__unsigned_int);
	I_SimpleProperty(float, MinimumShadowOccluderVolume, 
	                 __float__getMinimumShadowOccluderVolume, 
	                 __void__setMinimumShadowOccluderVolume__float);
END_REFLECTOR

STD_SET_REFLECTOR(std::set< osg::ShadowVolumeOccluder >)

