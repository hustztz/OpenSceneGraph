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

#include <osg/ApplicationUsage>
#include <osg/FrameStamp>
#include <osg/OperationThread>
#include <osg/Stats>
#include <osgGA/EventVisitor>
#include <osgUtil/UpdateVisitor>
#include <osgViewer/ViewerBase>

// Must undefine IN and OUT macros defined in Windows headers
#ifdef IN
#undef IN
#endif
#ifdef OUT
#undef OUT
#endif

#include <osgViewer/View>
	
BEGIN_ENUM_REFLECTOR(osgViewer::ViewerBase::ThreadingModel)
	I_DeclaringFile("osgViewer/ViewerBase");
	I_EnumLabel(osgViewer::ViewerBase::SingleThreaded);
	I_EnumLabel(osgViewer::ViewerBase::CullDrawThreadPerContext);
	I_EnumLabel(osgViewer::ViewerBase::ThreadPerContext);
	I_EnumLabel(osgViewer::ViewerBase::DrawThreadPerContext);
	I_EnumLabel(osgViewer::ViewerBase::CullThreadPerCameraDrawThreadPerContext);
	I_EnumLabel(osgViewer::ViewerBase::ThreadPerCamera);
	I_EnumLabel(osgViewer::ViewerBase::AutomaticSelection);
END_REFLECTOR

BEGIN_ENUM_REFLECTOR(osgViewer::ViewerBase::BarrierPosition)
	I_DeclaringFile("osgViewer/ViewerBase");
	I_EnumLabel(osgViewer::ViewerBase::BeforeSwapBuffers);
	I_EnumLabel(osgViewer::ViewerBase::AfterSwapBuffers);
END_REFLECTOR

TYPE_NAME_ALIAS(std::vector< osg::Camera * >, osgViewer::ViewerBase::Cameras)

TYPE_NAME_ALIAS(std::vector< osg::GraphicsContext * >, osgViewer::ViewerBase::Contexts)

TYPE_NAME_ALIAS(std::vector< osgViewer::GraphicsWindow * >, osgViewer::ViewerBase::Windows)

TYPE_NAME_ALIAS(std::vector< OpenThreads::Thread * >, osgViewer::ViewerBase::Threads)

TYPE_NAME_ALIAS(std::vector< osg::OperationThread * >, osgViewer::ViewerBase::OperationThreads)

TYPE_NAME_ALIAS(std::vector< osgViewer::Scene * >, osgViewer::ViewerBase::Scenes)

TYPE_NAME_ALIAS(std::vector< osgViewer::View * >, osgViewer::ViewerBase::Views)

BEGIN_ABSTRACT_OBJECT_REFLECTOR(osgViewer::ViewerBase)
	I_DeclaringFile("osgViewer/ViewerBase");
	I_VirtualBaseType(osg::Object);
	I_Constructor0(____ViewerBase,
	               "",
	               "");
	I_Constructor1(IN, const osgViewer::ViewerBase &, vb,
	               Properties::NON_EXPLICIT,
	               ____ViewerBase__C5_ViewerBase_R1,
	               "",
	               "");
	I_Method1(void, setStats, IN, osg::Stats *, stats,
	          Properties::NON_VIRTUAL,
	          __void__setStats__osg_Stats_P1,
	          "Set the Stats object used for collect various frame related timing and scene graph stats. ",
	          "");
	I_Method0(osg::Stats *, getStats,
	          Properties::NON_VIRTUAL,
	          __osg_Stats_P1__getStats,
	          "Get the Viewers Stats object. ",
	          "");
	I_Method0(const osg::Stats *, getStats,
	          Properties::NON_VIRTUAL,
	          __C5_osg_Stats_P1__getStats,
	          "Get the Viewers Stats object. ",
	          "");
	I_Method1(bool, readConfiguration, IN, const std::string &, filename,
	          Properties::PURE_VIRTUAL,
	          __bool__readConfiguration__C5_std_string_R1,
	          "read the viewer configuration from a configuration file. ",
	          "");
	I_Method0(bool, isRealized,
	          Properties::PURE_VIRTUAL,
	          __bool__isRealized,
	          "Get whether at least of one of this viewers windows are realized. ",
	          "");
	I_Method0(void, realize,
	          Properties::PURE_VIRTUAL,
	          __void__realize,
	          "set up windows and associated threads. ",
	          "");
	I_Method1(void, setThreadingModel, IN, osgViewer::ViewerBase::ThreadingModel, threadingModel,
	          Properties::VIRTUAL,
	          __void__setThreadingModel__ThreadingModel,
	          "Set the threading model the rendering traversals will use. ",
	          "");
	I_Method0(osgViewer::ViewerBase::ThreadingModel, getThreadingModel,
	          Properties::NON_VIRTUAL,
	          __ThreadingModel__getThreadingModel,
	          "Get the threading model the rendering traversals will use. ",
	          "");
	I_Method0(osgViewer::ViewerBase::ThreadingModel, suggestBestThreadingModel,
	          Properties::VIRTUAL,
	          __ThreadingModel__suggestBestThreadingModel,
	          "Let the viewer suggest the best threading model for the viewers camera/window setup and the hardware available. ",
	          "");
	I_Method0(void, setUpThreading,
	          Properties::VIRTUAL,
	          __void__setUpThreading,
	          "Set up the threading and processor affinity as per the viewers threading model. ",
	          "");
	I_Method0(bool, areThreadsRunning,
	          Properties::NON_VIRTUAL,
	          __bool__areThreadsRunning,
	          "Return true if viewer threads are running. ",
	          "");
	I_Method0(void, stopThreading,
	          Properties::VIRTUAL,
	          __void__stopThreading,
	          "Stop any threads begin run by viewer. ",
	          "");
	I_Method0(void, startThreading,
	          Properties::VIRTUAL,
	          __void__startThreading,
	          "Start any threads required by the viewer. ",
	          "");
	I_Method1(void, setEndBarrierPosition, IN, osgViewer::ViewerBase::BarrierPosition, bp,
	          Properties::NON_VIRTUAL,
	          __void__setEndBarrierPosition__BarrierPosition,
	          "Set the position of the end barrier. ",
	          "AfterSwapBuffers may result in slightly higher framerates, but may lead to inconsistent swapping between different windows. BeforeSwapBuffers may lead to slightly lower framerate, but improve consistency in timing of swap buffers, especially important if you are likely to consistently break frame. ");
	I_Method0(osgViewer::ViewerBase::BarrierPosition, getEndBarrierPosition,
	          Properties::NON_VIRTUAL,
	          __BarrierPosition__getEndBarrierPosition,
	          "Get the end barrier position. ",
	          "");
	I_Method1(void, setDone, IN, bool, done,
	          Properties::NON_VIRTUAL,
	          __void__setDone__bool,
	          "Set the done flag to signal the viewer's work is done and should exit the frame loop. ",
	          "");
	I_Method0(bool, done,
	          Properties::NON_VIRTUAL,
	          __bool__done,
	          "Return true if viewer's work is done and should exit the frame loop. ",
	          "");
	I_Method1(void, setEventVisitor, IN, osgGA::EventVisitor *, eventVisitor,
	          Properties::NON_VIRTUAL,
	          __void__setEventVisitor__osgGA_EventVisitor_P1,
	          "Set the EventVisitor. ",
	          "");
	I_Method0(osgGA::EventVisitor *, getEventVisitor,
	          Properties::NON_VIRTUAL,
	          __osgGA_EventVisitor_P1__getEventVisitor,
	          "Get the EventVisitor. ",
	          "");
	I_Method0(const osgGA::EventVisitor *, getEventVisitor,
	          Properties::NON_VIRTUAL,
	          __C5_osgGA_EventVisitor_P1__getEventVisitor,
	          "Get the const EventVisitor. ",
	          "");
	I_Method1(void, setKeyEventSetsDone, IN, int, key,
	          Properties::NON_VIRTUAL,
	          __void__setKeyEventSetsDone__int,
	          "Set the key event that the viewer checks on each frame to see if the viewer's done flag should be set to signal end of viewers main loop. ",
	          "Default value is Escape (osgGA::GUIEVentAdapter::KEY_Escape). Setting to 0 switches off the feature. ");
	I_Method0(int, getKeyEventSetsDone,
	          Properties::NON_VIRTUAL,
	          __int__getKeyEventSetsDone,
	          "get the key event that the viewer checks on each frame to see if the viewer's done flag. ",
	          "");
	I_Method1(void, setQuitEventSetsDone, IN, bool, flag,
	          Properties::NON_VIRTUAL,
	          __void__setQuitEventSetsDone__bool,
	          "if the flag is true, the viewer set its done flag when a QUIT_APPLICATION is received, false disables this feature ",
	          "");
	I_Method0(bool, getQuitEventSetsDone,
	          Properties::NON_VIRTUAL,
	          __bool__getQuitEventSetsDone,
	          "true if the viewer respond to the QUIT_APPLICATION-event  ",
	          "");
	I_Method1(void, setReleaseContextAtEndOfFrameHint, IN, bool, hint,
	          Properties::NON_VIRTUAL,
	          __void__setReleaseContextAtEndOfFrameHint__bool,
	          "Hint to tell the renderingTraversals() method whether to call relaseContext() on the last context that was made current by the thread calling renderingTraverals(). ",
	          "Note, when running multi-threaded viewer no threads will be made current or release current. Setting this hint to false can enable the frame loop to be lazy about calling makeCurrent and releaseContext on each new frame, helping performance. However, if you frame loop is managing multiple graphics context all from the main frame thread then this hint must be left on, otherwise the wrong context could be left active, introducing errors in rendering. ");
	I_Method0(bool, getReleaseContextAtEndOfFrameHint,
	          Properties::NON_VIRTUAL,
	          __bool__getReleaseContextAtEndOfFrameHint,
	          "Hint to tell the renderingTraversals() method whether to call relaseContext(). ",
	          "");
	I_Method1(void, setUpdateVisitor, IN, osgUtil::UpdateVisitor *, updateVisitor,
	          Properties::NON_VIRTUAL,
	          __void__setUpdateVisitor__osgUtil_UpdateVisitor_P1,
	          "Set the UpdateVisitor. ",
	          "");
	I_Method0(osgUtil::UpdateVisitor *, getUpdateVisitor,
	          Properties::NON_VIRTUAL,
	          __osgUtil_UpdateVisitor_P1__getUpdateVisitor,
	          "Get the UpdateVisitor. ",
	          "");
	I_Method0(const osgUtil::UpdateVisitor *, getUpdateVisitor,
	          Properties::NON_VIRTUAL,
	          __C5_osgUtil_UpdateVisitor_P1__getUpdateVisitor,
	          "Get the const UpdateVisitor. ",
	          "");
	I_Method1(void, setUpdateOperations, IN, osg::OperationQueue *, operations,
	          Properties::NON_VIRTUAL,
	          __void__setUpdateOperations__osg_OperationQueue_P1,
	          "Set the Update OperationQueue. ",
	          "");
	I_Method0(osg::OperationQueue *, getUpdateOperations,
	          Properties::NON_VIRTUAL,
	          __osg_OperationQueue_P1__getUpdateOperations,
	          "Get the Update OperationQueue. ",
	          "");
	I_Method0(const osg::OperationQueue *, getUpdateOperations,
	          Properties::NON_VIRTUAL,
	          __C5_osg_OperationQueue_P1__getUpdateOperations,
	          "Get the const Update OperationQueue. ",
	          "");
	I_Method1(void, addUpdateOperation, IN, osg::Operation *, operation,
	          Properties::NON_VIRTUAL,
	          __void__addUpdateOperation__osg_Operation_P1,
	          "Add an update operation. ",
	          "");
	I_Method1(void, removeUpdateOperation, IN, osg::Operation *, operation,
	          Properties::NON_VIRTUAL,
	          __void__removeUpdateOperation__osg_Operation_P1,
	          "Remove an update operation. ",
	          "");
	I_Method1(void, setRealizeOperation, IN, osg::Operation *, op,
	          Properties::NON_VIRTUAL,
	          __void__setRealizeOperation__osg_Operation_P1,
	          "Set the graphics operation to call on realization of the viewers graphics windows. ",
	          "");
	I_Method0(osg::Operation *, getRealizeOperation,
	          Properties::NON_VIRTUAL,
	          __osg_Operation_P1__getRealizeOperation,
	          "Get the graphics operation to call on realization of the viewers graphics windows. ",
	          "");
	I_Method0(void, checkWindowStatus,
	          Properties::NON_VIRTUAL,
	          __void__checkWindowStatus,
	          "Check to see if windows are still open, if not set viewer done to true. ",
	          "");
	I_Method0(int, run,
	          Properties::PURE_VIRTUAL,
	          __int__run,
	          "Execute a main frame loop. ",
	          "Equivalent to while (!viewer.done()) viewer.frame(); Also calls realize() if the viewer is not already realized, and installs trackball manipulator if one is not already assigned. ");
	I_MethodWithDefaults1(void, frame, IN, double, simulationTime, USE_REFERENCE_TIME,
	                      Properties::VIRTUAL,
	                      __void__frame__double,
	                      "Render a complete new frame. ",
	                      "Calls advance(), eventTraversal(), updateTraversal(), renderingTraversals(). ");
	I_MethodWithDefaults1(void, advance, IN, double, simulationTime, USE_REFERENCE_TIME,
	                      Properties::PURE_VIRTUAL,
	                      __void__advance__double,
	                      "",
	                      "");
	I_Method0(void, eventTraversal,
	          Properties::PURE_VIRTUAL,
	          __void__eventTraversal,
	          "",
	          "");
	I_Method0(void, updateTraversal,
	          Properties::PURE_VIRTUAL,
	          __void__updateTraversal,
	          "",
	          "");
	I_Method0(void, renderingTraversals,
	          Properties::VIRTUAL,
	          __void__renderingTraversals,
	          "",
	          "");
	I_MethodWithDefaults2(void, getCameras, IN, osgViewer::ViewerBase::Cameras &, cameras, , IN, bool, onlyActive, true,
	                      Properties::PURE_VIRTUAL,
	                      __void__getCameras__Cameras_R1__bool,
	                      "",
	                      "");
	I_MethodWithDefaults2(void, getContexts, IN, osgViewer::ViewerBase::Contexts &, contexts, , IN, bool, onlyValid, true,
	                      Properties::PURE_VIRTUAL,
	                      __void__getContexts__Contexts_R1__bool,
	                      "",
	                      "");
	I_MethodWithDefaults2(void, getWindows, IN, osgViewer::ViewerBase::Windows &, windows, , IN, bool, onlyValid, true,
	                      Properties::PURE_VIRTUAL,
	                      __void__getWindows__Windows_R1__bool,
	                      "",
	                      "");
	I_MethodWithDefaults2(void, getAllThreads, IN, osgViewer::ViewerBase::Threads &, threads, , IN, bool, onlyActive, true,
	                      Properties::PURE_VIRTUAL,
	                      __void__getAllThreads__Threads_R1__bool,
	                      "",
	                      "");
	I_MethodWithDefaults2(void, getOperationThreads, IN, osgViewer::ViewerBase::OperationThreads &, threads, , IN, bool, onlyActive, true,
	                      Properties::PURE_VIRTUAL,
	                      __void__getOperationThreads__OperationThreads_R1__bool,
	                      "",
	                      "");
	I_MethodWithDefaults2(void, getScenes, IN, osgViewer::ViewerBase::Scenes &, scenes, , IN, bool, onlyValid, true,
	                      Properties::PURE_VIRTUAL,
	                      __void__getScenes__Scenes_R1__bool,
	                      "",
	                      "");
	I_MethodWithDefaults2(void, getViews, IN, osgViewer::ViewerBase::Views &, views, , IN, bool, onlyValid, true,
	                      Properties::PURE_VIRTUAL,
	                      __void__getViews__Views_R1__bool,
	                      "",
	                      "");
	I_Method0(double, elapsedTime,
	          Properties::PURE_VIRTUAL,
	          __double__elapsedTime,
	          "",
	          "");
	I_Method0(osg::FrameStamp *, getViewerFrameStamp,
	          Properties::PURE_VIRTUAL,
	          __osg_FrameStamp_P1__getViewerFrameStamp,
	          "",
	          "");
	I_Method1(void, getUsage, IN, osg::ApplicationUsage &, usage,
	          Properties::PURE_VIRTUAL,
	          __void__getUsage__osg_ApplicationUsage_R1,
	          "Get the keyboard and mouse usage of this viewer. ",
	          "");
	I_ProtectedMethod1(void, makeCurrent, IN, osg::GraphicsContext *, gc,
	                   Properties::NON_VIRTUAL,
	                   Properties::NON_CONST,
	                   __void__makeCurrent__osg_GraphicsContext_P1,
	                   "",
	                   "");
	I_ProtectedMethod0(void, releaseContext,
	                   Properties::NON_VIRTUAL,
	                   Properties::NON_CONST,
	                   __void__releaseContext,
	                   "",
	                   "");
	I_ProtectedMethod0(void, viewerInit,
	                   Properties::PURE_VIRTUAL,
	                   Properties::NON_CONST,
	                   __void__viewerInit,
	                   "",
	                   "");
	I_SimpleProperty(bool, Done, 
	                 0, 
	                 __void__setDone__bool);
	I_SimpleProperty(osgViewer::ViewerBase::BarrierPosition, EndBarrierPosition, 
	                 __BarrierPosition__getEndBarrierPosition, 
	                 __void__setEndBarrierPosition__BarrierPosition);
	I_SimpleProperty(osgGA::EventVisitor *, EventVisitor, 
	                 __osgGA_EventVisitor_P1__getEventVisitor, 
	                 __void__setEventVisitor__osgGA_EventVisitor_P1);
	I_SimpleProperty(int, KeyEventSetsDone, 
	                 __int__getKeyEventSetsDone, 
	                 __void__setKeyEventSetsDone__int);
	I_SimpleProperty(bool, QuitEventSetsDone, 
	                 __bool__getQuitEventSetsDone, 
	                 __void__setQuitEventSetsDone__bool);
	I_SimpleProperty(osg::Operation *, RealizeOperation, 
	                 __osg_Operation_P1__getRealizeOperation, 
	                 __void__setRealizeOperation__osg_Operation_P1);
	I_SimpleProperty(bool, ReleaseContextAtEndOfFrameHint, 
	                 __bool__getReleaseContextAtEndOfFrameHint, 
	                 __void__setReleaseContextAtEndOfFrameHint__bool);
	I_SimpleProperty(osg::Stats *, Stats, 
	                 __osg_Stats_P1__getStats, 
	                 __void__setStats__osg_Stats_P1);
	I_SimpleProperty(osgViewer::ViewerBase::ThreadingModel, ThreadingModel, 
	                 __ThreadingModel__getThreadingModel, 
	                 __void__setThreadingModel__ThreadingModel);
	I_SimpleProperty(osg::OperationQueue *, UpdateOperations, 
	                 __osg_OperationQueue_P1__getUpdateOperations, 
	                 __void__setUpdateOperations__osg_OperationQueue_P1);
	I_SimpleProperty(osgUtil::UpdateVisitor *, UpdateVisitor, 
	                 __osgUtil_UpdateVisitor_P1__getUpdateVisitor, 
	                 __void__setUpdateVisitor__osgUtil_UpdateVisitor_P1);
	I_SimpleProperty(osg::FrameStamp *, ViewerFrameStamp, 
	                 __osg_FrameStamp_P1__getViewerFrameStamp, 
	                 0);
END_REFLECTOR

STD_VECTOR_REFLECTOR(std::vector< OpenThreads::Thread * >)

STD_VECTOR_REFLECTOR(std::vector< osg::Camera * >)

STD_VECTOR_REFLECTOR(std::vector< osg::OperationThread * >)

STD_VECTOR_REFLECTOR(std::vector< osgViewer::GraphicsWindow * >)

STD_VECTOR_REFLECTOR(std::vector< osgViewer::Scene * >)

STD_VECTOR_REFLECTOR(std::vector< osgViewer::View * >)

