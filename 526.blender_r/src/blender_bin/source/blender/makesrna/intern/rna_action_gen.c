
/* Automatically generated struct definitions for the Data API.
 * Do not edit manually, changes will be overwritten.           */
#if defined(SPEC)
#include <spec_config.h>
#endif

#define RNA_RUNTIME

#include <float.h>
#include <stdio.h>
#include <limits.h>
#include <string.h>

#include <stddef.h>

#include "MEM_guardedalloc.h"

#include "DNA_ID.h"
#include "DNA_scene_types.h"
#include "BLI_blenlib.h"

#include "BLI_utildefines.h"

#include "BKE_context.h"
#include "BKE_library.h"
#include "BKE_main.h"
#include "BKE_report.h"
#include "RNA_define.h"
#include "RNA_types.h"
#include "rna_internal.h"

extern StructRNA RNA_Struct;
extern StructRNA RNA_Property;
extern StructRNA RNA_BoolProperty;
extern StructRNA RNA_IntProperty;
extern StructRNA RNA_FloatProperty;
extern StructRNA RNA_StringProperty;
extern StructRNA RNA_EnumProperty;
extern StructRNA RNA_EnumPropertyItem;
extern StructRNA RNA_PointerProperty;
extern StructRNA RNA_CollectionProperty;
extern StructRNA RNA_Function;
extern StructRNA RNA_BlenderRNA;
extern StructRNA RNA_UnknownType;
extern StructRNA RNA_AnyType;
extern StructRNA RNA_ID;
extern StructRNA RNA_PropertyGroupItem;
extern StructRNA RNA_PropertyGroup;
extern StructRNA RNA_IDMaterials;
extern StructRNA RNA_Library;
extern StructRNA RNA_Texture;
extern StructRNA RNA_CloudsTexture;
extern StructRNA RNA_WoodTexture;
extern StructRNA RNA_MarbleTexture;
extern StructRNA RNA_MagicTexture;
extern StructRNA RNA_BlendTexture;
extern StructRNA RNA_StucciTexture;
extern StructRNA RNA_NoiseTexture;
extern StructRNA RNA_ImageTexture;
extern StructRNA RNA_EnvironmentMapTexture;
extern StructRNA RNA_MusgraveTexture;
extern StructRNA RNA_VoronoiTexture;
extern StructRNA RNA_DistortedNoiseTexture;
extern StructRNA RNA_PointDensity;
extern StructRNA RNA_PointDensityTexture;
extern StructRNA RNA_VoxelData;
extern StructRNA RNA_VoxelDataTexture;
extern StructRNA RNA_OceanTexData;
extern StructRNA RNA_OceanTexture;
extern StructRNA RNA_TextureSlot;
extern StructRNA RNA_EnvironmentMap;
extern StructRNA RNA_TexMapping;
extern StructRNA RNA_ColorMapping;
extern StructRNA RNA_Action;
extern StructRNA RNA_ActionFCurves;
extern StructRNA RNA_ActionGroups;
extern StructRNA RNA_ActionPoseMarkers;
extern StructRNA RNA_ActionGroup;
extern StructRNA RNA_DopeSheet;
extern StructRNA RNA_AnimData;
extern StructRNA RNA_NlaTracks;
extern StructRNA RNA_AnimDataDrivers;
extern StructRNA RNA_KeyingSet;
extern StructRNA RNA_KeyingSetPaths;
extern StructRNA RNA_KeyingSetPath;
extern StructRNA RNA_KeyingSetInfo;
extern StructRNA RNA_AnimViz;
extern StructRNA RNA_AnimVizOnionSkinning;
extern StructRNA RNA_AnimVizMotionPaths;
extern StructRNA RNA_MotionPath;
extern StructRNA RNA_MotionPathVert;
extern StructRNA RNA_Actuator;
extern StructRNA RNA_ActionActuator;
extern StructRNA RNA_ObjectActuator;
extern StructRNA RNA_CameraActuator;
extern StructRNA RNA_SoundActuator;
extern StructRNA RNA_PropertyActuator;
extern StructRNA RNA_ConstraintActuator;
extern StructRNA RNA_EditObjectActuator;
extern StructRNA RNA_SceneActuator;
extern StructRNA RNA_RandomActuator;
extern StructRNA RNA_MessageActuator;
extern StructRNA RNA_GameActuator;
extern StructRNA RNA_VisibilityActuator;
extern StructRNA RNA_Filter2DActuator;
extern StructRNA RNA_ParentActuator;
extern StructRNA RNA_StateActuator;
extern StructRNA RNA_ArmatureActuator;
extern StructRNA RNA_SteeringActuator;
extern StructRNA RNA_MouseActuator;
extern StructRNA RNA_Armature;
extern StructRNA RNA_ArmatureBones;
extern StructRNA RNA_ArmatureEditBones;
extern StructRNA RNA_Bone;
extern StructRNA RNA_EditBone;
extern StructRNA RNA_BoidRule;
extern StructRNA RNA_BoidRuleGoal;
extern StructRNA RNA_BoidRuleAvoid;
extern StructRNA RNA_BoidRuleAvoidCollision;
extern StructRNA RNA_BoidRuleFollowLeader;
extern StructRNA RNA_BoidRuleAverageSpeed;
extern StructRNA RNA_BoidRuleFight;
extern StructRNA RNA_BoidState;
extern StructRNA RNA_BoidSettings;
extern StructRNA RNA_Brush;
extern StructRNA RNA_BrushCapabilities;
extern StructRNA RNA_SculptToolCapabilities;
extern StructRNA RNA_ImapaintToolCapabilities;
extern StructRNA RNA_BrushTextureSlot;
extern StructRNA RNA_OperatorStrokeElement;
extern StructRNA RNA_Camera;
extern StructRNA RNA_ClothSettings;
extern StructRNA RNA_ClothCollisionSettings;
extern StructRNA RNA_CurveMapPoint;
extern StructRNA RNA_CurveMap;
extern StructRNA RNA_CurveMapPoints;
extern StructRNA RNA_CurveMapping;
extern StructRNA RNA_ColorRampElement;
extern StructRNA RNA_ColorRamp;
extern StructRNA RNA_ColorRampElements;
extern StructRNA RNA_Histogram;
extern StructRNA RNA_Scopes;
extern StructRNA RNA_ColorManagedDisplaySettings;
extern StructRNA RNA_ColorManagedViewSettings;
extern StructRNA RNA_ColorManagedInputColorspaceSettings;
extern StructRNA RNA_ColorManagedSequencerColorspaceSettings;
extern StructRNA RNA_Constraint;
extern StructRNA RNA_ConstraintTarget;
extern StructRNA RNA_ChildOfConstraint;
extern StructRNA RNA_PythonConstraint;
extern StructRNA RNA_StretchToConstraint;
extern StructRNA RNA_FollowPathConstraint;
extern StructRNA RNA_LockedTrackConstraint;
extern StructRNA RNA_ActionConstraint;
extern StructRNA RNA_CopyScaleConstraint;
extern StructRNA RNA_MaintainVolumeConstraint;
extern StructRNA RNA_CopyLocationConstraint;
extern StructRNA RNA_CopyRotationConstraint;
extern StructRNA RNA_CopyTransformsConstraint;
extern StructRNA RNA_FloorConstraint;
extern StructRNA RNA_TrackToConstraint;
extern StructRNA RNA_KinematicConstraint;
extern StructRNA RNA_RigidBodyJointConstraint;
extern StructRNA RNA_ClampToConstraint;
extern StructRNA RNA_LimitDistanceConstraint;
extern StructRNA RNA_LimitScaleConstraint;
extern StructRNA RNA_LimitRotationConstraint;
extern StructRNA RNA_LimitLocationConstraint;
extern StructRNA RNA_TransformConstraint;
extern StructRNA RNA_ShrinkwrapConstraint;
extern StructRNA RNA_DampedTrackConstraint;
extern StructRNA RNA_SplineIKConstraint;
extern StructRNA RNA_PivotConstraint;
extern StructRNA RNA_FollowTrackConstraint;
extern StructRNA RNA_CameraSolverConstraint;
extern StructRNA RNA_ObjectSolverConstraint;
extern StructRNA RNA_Context;
extern StructRNA RNA_Controller;
extern StructRNA RNA_ExpressionController;
extern StructRNA RNA_PythonController;
extern StructRNA RNA_AndController;
extern StructRNA RNA_OrController;
extern StructRNA RNA_NorController;
extern StructRNA RNA_NandController;
extern StructRNA RNA_XorController;
extern StructRNA RNA_XnorController;
extern StructRNA RNA_Curve;
extern StructRNA RNA_CurveSplines;
extern StructRNA RNA_SurfaceCurve;
extern StructRNA RNA_TextCurve;
extern StructRNA RNA_TextBox;
extern StructRNA RNA_TextCharacterFormat;
extern StructRNA RNA_SplinePoint;
extern StructRNA RNA_BezierSplinePoint;
extern StructRNA RNA_Spline;
extern StructRNA RNA_SplinePoints;
extern StructRNA RNA_SplineBezierPoints;
extern StructRNA RNA_DynamicPaintCanvasSettings;
extern StructRNA RNA_DynamicPaintSurfaces;
extern StructRNA RNA_DynamicPaintBrushSettings;
extern StructRNA RNA_DynamicPaintSurface;
extern StructRNA RNA_FCurve;
extern StructRNA RNA_FCurveKeyframePoints;
extern StructRNA RNA_FCurveModifiers;
extern StructRNA RNA_Keyframe;
extern StructRNA RNA_FCurveSample;
extern StructRNA RNA_DriverTarget;
extern StructRNA RNA_DriverVariable;
extern StructRNA RNA_Driver;
extern StructRNA RNA_ChannelDriverVariables;
extern StructRNA RNA_FModifier;
extern StructRNA RNA_FModifierGenerator;
extern StructRNA RNA_FModifierFunctionGenerator;
extern StructRNA RNA_FModifierEnvelope;
extern StructRNA RNA_FModifierEnvelopeControlPoints;
extern StructRNA RNA_FModifierEnvelopeControlPoint;
extern StructRNA RNA_FModifierCycles;
extern StructRNA RNA_FModifierPython;
extern StructRNA RNA_FModifierLimits;
extern StructRNA RNA_FModifierNoise;
extern StructRNA RNA_FModifierStepped;
extern StructRNA RNA_FluidSettings;
extern StructRNA RNA_DomainFluidSettings;
extern StructRNA RNA_FluidMeshVertex;
extern StructRNA RNA_FluidFluidSettings;
extern StructRNA RNA_ObstacleFluidSettings;
extern StructRNA RNA_InflowFluidSettings;
extern StructRNA RNA_OutflowFluidSettings;
extern StructRNA RNA_ParticleFluidSettings;
extern StructRNA RNA_ControlFluidSettings;
extern StructRNA RNA_GreasePencil;
extern StructRNA RNA_GreasePencilLayers;
extern StructRNA RNA_GPencilLayer;
extern StructRNA RNA_GPencilFrames;
extern StructRNA RNA_GPencilFrame;
extern StructRNA RNA_GPencilStrokes;
extern StructRNA RNA_GPencilStroke;
extern StructRNA RNA_GPencilStrokePoints;
extern StructRNA RNA_GPencilStrokePoint;
extern StructRNA RNA_Group;
extern StructRNA RNA_GroupObjects;
extern StructRNA RNA_RenderSlot;
extern StructRNA RNA_RenderSlots;
extern StructRNA RNA_Image;
extern StructRNA RNA_ImageUser;
extern StructRNA RNA_Key;
extern StructRNA RNA_ShapeKey;
extern StructRNA RNA_ShapeKeyPoint;
extern StructRNA RNA_ShapeKeyCurvePoint;
extern StructRNA RNA_ShapeKeyBezierPoint;
extern StructRNA RNA_Lamp;
extern StructRNA RNA_LampTextureSlots;
extern StructRNA RNA_PointLamp;
extern StructRNA RNA_AreaLamp;
extern StructRNA RNA_SpotLamp;
extern StructRNA RNA_SunLamp;
extern StructRNA RNA_LampSkySettings;
extern StructRNA RNA_HemiLamp;
extern StructRNA RNA_LampTextureSlot;
extern StructRNA RNA_Lattice;
extern StructRNA RNA_LatticePoint;
extern StructRNA RNA_LineStyleModifier;
extern StructRNA RNA_LineStyleColorModifier;
extern StructRNA RNA_LineStyleColorModifier_AlongStroke;
extern StructRNA RNA_LineStyleColorModifier_DistanceFromCamera;
extern StructRNA RNA_LineStyleColorModifier_DistanceFromObject;
extern StructRNA RNA_LineStyleColorModifier_Material;
extern StructRNA RNA_LineStyleAlphaModifier;
extern StructRNA RNA_LineStyleAlphaModifier_AlongStroke;
extern StructRNA RNA_LineStyleAlphaModifier_DistanceFromCamera;
extern StructRNA RNA_LineStyleAlphaModifier_DistanceFromObject;
extern StructRNA RNA_LineStyleAlphaModifier_Material;
extern StructRNA RNA_LineStyleThicknessModifier;
extern StructRNA RNA_LineStyleThicknessModifier_AlongStroke;
extern StructRNA RNA_LineStyleThicknessModifier_DistanceFromCamera;
extern StructRNA RNA_LineStyleThicknessModifier_DistanceFromObject;
extern StructRNA RNA_LineStyleThicknessModifier_Material;
extern StructRNA RNA_LineStyleThicknessModifier_Calligraphy;
extern StructRNA RNA_LineStyleGeometryModifier;
extern StructRNA RNA_LineStyleGeometryModifier_Sampling;
extern StructRNA RNA_LineStyleGeometryModifier_BezierCurve;
extern StructRNA RNA_LineStyleGeometryModifier_SinusDisplacement;
extern StructRNA RNA_LineStyleGeometryModifier_SpatialNoise;
extern StructRNA RNA_LineStyleGeometryModifier_PerlinNoise1D;
extern StructRNA RNA_LineStyleGeometryModifier_PerlinNoise2D;
extern StructRNA RNA_LineStyleGeometryModifier_BackboneStretcher;
extern StructRNA RNA_LineStyleGeometryModifier_TipRemover;
extern StructRNA RNA_LineStyleGeometryModifier_Polygonalization;
extern StructRNA RNA_LineStyleGeometryModifier_GuidingLines;
extern StructRNA RNA_LineStyleGeometryModifier_Blueprint;
extern StructRNA RNA_LineStyleGeometryModifier_2DOffset;
extern StructRNA RNA_LineStyleGeometryModifier_2DTransform;
extern StructRNA RNA_FreestyleLineStyle;
extern StructRNA RNA_LineStyleTextureSlots;
extern StructRNA RNA_LineStyleColorModifiers;
extern StructRNA RNA_LineStyleAlphaModifiers;
extern StructRNA RNA_LineStyleThicknessModifiers;
extern StructRNA RNA_LineStyleGeometryModifiers;
extern StructRNA RNA_LineStyleTextureSlot;
extern StructRNA RNA_BlendData;
extern StructRNA RNA_BlendDataCameras;
extern StructRNA RNA_BlendDataScenes;
extern StructRNA RNA_BlendDataObjects;
extern StructRNA RNA_BlendDataMaterials;
extern StructRNA RNA_BlendDataNodeTrees;
extern StructRNA RNA_BlendDataMeshes;
extern StructRNA RNA_BlendDataLamps;
extern StructRNA RNA_BlendDataLibraries;
extern StructRNA RNA_BlendDataScreens;
extern StructRNA RNA_BlendDataWindowManagers;
extern StructRNA RNA_BlendDataImages;
extern StructRNA RNA_BlendDataLattices;
extern StructRNA RNA_BlendDataCurves;
extern StructRNA RNA_BlendDataMetaBalls;
extern StructRNA RNA_BlendDataFonts;
extern StructRNA RNA_BlendDataTextures;
extern StructRNA RNA_BlendDataBrushes;
extern StructRNA RNA_BlendDataWorlds;
extern StructRNA RNA_BlendDataGroups;
extern StructRNA RNA_BlendDataTexts;
extern StructRNA RNA_BlendDataSpeakers;
extern StructRNA RNA_BlendDataSounds;
extern StructRNA RNA_BlendDataArmatures;
extern StructRNA RNA_BlendDataActions;
extern StructRNA RNA_BlendDataParticles;
extern StructRNA RNA_BlendDataGreasePencils;
extern StructRNA RNA_BlendDataMovieClips;
extern StructRNA RNA_BlendDataMasks;
extern StructRNA RNA_BlendDataLineStyles;
extern StructRNA RNA_Material;
extern StructRNA RNA_MaterialTextureSlots;
extern StructRNA RNA_TexPaintSlot;
extern StructRNA RNA_MaterialRaytraceMirror;
extern StructRNA RNA_MaterialRaytraceTransparency;
extern StructRNA RNA_MaterialVolume;
extern StructRNA RNA_MaterialHalo;
extern StructRNA RNA_MaterialSubsurfaceScattering;
extern StructRNA RNA_MaterialTextureSlot;
extern StructRNA RNA_MaterialStrand;
extern StructRNA RNA_MaterialPhysics;
extern StructRNA RNA_MaterialGameSettings;
extern StructRNA RNA_Mesh;
extern StructRNA RNA_MeshVertices;
extern StructRNA RNA_MeshEdges;
extern StructRNA RNA_MeshTessFaces;
extern StructRNA RNA_MeshLoops;
extern StructRNA RNA_MeshPolygons;
extern StructRNA RNA_UVLoopLayers;
extern StructRNA RNA_TessfaceUVTextures;
extern StructRNA RNA_UVTextures;
extern StructRNA RNA_VertexColors;
extern StructRNA RNA_LoopColors;
extern StructRNA RNA_FloatProperties;
extern StructRNA RNA_IntProperties;
extern StructRNA RNA_StringProperties;
extern StructRNA RNA_MeshSkinVertexLayer;
extern StructRNA RNA_MeshSkinVertex;
extern StructRNA RNA_MeshVertex;
extern StructRNA RNA_VertexGroupElement;
extern StructRNA RNA_MeshEdge;
extern StructRNA RNA_MeshTessFace;
extern StructRNA RNA_MeshLoop;
extern StructRNA RNA_MeshPolygon;
extern StructRNA RNA_MeshUVLoopLayer;
extern StructRNA RNA_MeshUVLoop;
extern StructRNA RNA_MeshTextureFaceLayer;
extern StructRNA RNA_MeshTextureFace;
extern StructRNA RNA_MeshTexturePolyLayer;
extern StructRNA RNA_MeshTexturePoly;
extern StructRNA RNA_MeshColorLayer;
extern StructRNA RNA_MeshColor;
extern StructRNA RNA_MeshLoopColorLayer;
extern StructRNA RNA_MeshLoopColor;
extern StructRNA RNA_MeshFloatPropertyLayer;
extern StructRNA RNA_MeshFloatProperty;
extern StructRNA RNA_MeshIntPropertyLayer;
extern StructRNA RNA_MeshIntProperty;
extern StructRNA RNA_MeshStringPropertyLayer;
extern StructRNA RNA_MeshStringProperty;
extern StructRNA RNA_MetaElement;
extern StructRNA RNA_MetaBall;
extern StructRNA RNA_MetaBallElements;
extern StructRNA RNA_Modifier;
extern StructRNA RNA_SubsurfModifier;
extern StructRNA RNA_LatticeModifier;
extern StructRNA RNA_CurveModifier;
extern StructRNA RNA_BuildModifier;
extern StructRNA RNA_MirrorModifier;
extern StructRNA RNA_DecimateModifier;
extern StructRNA RNA_WaveModifier;
extern StructRNA RNA_ArmatureModifier;
extern StructRNA RNA_HookModifier;
extern StructRNA RNA_SoftBodyModifier;
extern StructRNA RNA_BooleanModifier;
extern StructRNA RNA_ArrayModifier;
extern StructRNA RNA_EdgeSplitModifier;
extern StructRNA RNA_DisplaceModifier;
extern StructRNA RNA_UVProjectModifier;
extern StructRNA RNA_UVProjector;
extern StructRNA RNA_SmoothModifier;
extern StructRNA RNA_CastModifier;
extern StructRNA RNA_MeshDeformModifier;
extern StructRNA RNA_ParticleSystemModifier;
extern StructRNA RNA_ParticleInstanceModifier;
extern StructRNA RNA_ExplodeModifier;
extern StructRNA RNA_ClothModifier;
extern StructRNA RNA_CollisionModifier;
extern StructRNA RNA_BevelModifier;
extern StructRNA RNA_ShrinkwrapModifier;
extern StructRNA RNA_FluidSimulationModifier;
extern StructRNA RNA_MaskModifier;
extern StructRNA RNA_SimpleDeformModifier;
extern StructRNA RNA_WarpModifier;
extern StructRNA RNA_MultiresModifier;
extern StructRNA RNA_SurfaceModifier;
extern StructRNA RNA_SmokeModifier;
extern StructRNA RNA_SolidifyModifier;
extern StructRNA RNA_ScrewModifier;
extern StructRNA RNA_UVWarpModifier;
extern StructRNA RNA_VertexWeightEditModifier;
extern StructRNA RNA_VertexWeightMixModifier;
extern StructRNA RNA_VertexWeightProximityModifier;
extern StructRNA RNA_DynamicPaintModifier;
extern StructRNA RNA_OceanModifier;
extern StructRNA RNA_RemeshModifier;
extern StructRNA RNA_SkinModifier;
extern StructRNA RNA_LaplacianSmoothModifier;
extern StructRNA RNA_TriangulateModifier;
extern StructRNA RNA_MeshCacheModifier;
extern StructRNA RNA_LaplacianDeformModifier;
extern StructRNA RNA_WireframeModifier;
extern StructRNA RNA_NlaTrack;
extern StructRNA RNA_NlaStrips;
extern StructRNA RNA_NlaStrip;
extern StructRNA RNA_NodeSocket;
extern StructRNA RNA_NodeSocketInterface;
extern StructRNA RNA_Node;
extern StructRNA RNA_NodeInputs;
extern StructRNA RNA_NodeOutputs;
extern StructRNA RNA_NodeLink;
extern StructRNA RNA_NodeInternalSocketTemplate;
extern StructRNA RNA_NodeInternal;
extern StructRNA RNA_ShaderNode;
extern StructRNA RNA_CompositorNode;
extern StructRNA RNA_TextureNode;
extern StructRNA RNA_NodeTree;
extern StructRNA RNA_Nodes;
extern StructRNA RNA_NodeLinks;
extern StructRNA RNA_NodeTreeInputs;
extern StructRNA RNA_NodeTreeOutputs;
extern StructRNA RNA_NodeSocketStandard;
extern StructRNA RNA_NodeSocketInterfaceStandard;
extern StructRNA RNA_NodeSocketFloat;
extern StructRNA RNA_NodeSocketInterfaceFloat;
extern StructRNA RNA_NodeSocketFloatUnsigned;
extern StructRNA RNA_NodeSocketInterfaceFloatUnsigned;
extern StructRNA RNA_NodeSocketFloatPercentage;
extern StructRNA RNA_NodeSocketInterfaceFloatPercentage;
extern StructRNA RNA_NodeSocketFloatFactor;
extern StructRNA RNA_NodeSocketInterfaceFloatFactor;
extern StructRNA RNA_NodeSocketFloatAngle;
extern StructRNA RNA_NodeSocketInterfaceFloatAngle;
extern StructRNA RNA_NodeSocketFloatTime;
extern StructRNA RNA_NodeSocketInterfaceFloatTime;
extern StructRNA RNA_NodeSocketInt;
extern StructRNA RNA_NodeSocketInterfaceInt;
extern StructRNA RNA_NodeSocketIntUnsigned;
extern StructRNA RNA_NodeSocketInterfaceIntUnsigned;
extern StructRNA RNA_NodeSocketIntPercentage;
extern StructRNA RNA_NodeSocketInterfaceIntPercentage;
extern StructRNA RNA_NodeSocketIntFactor;
extern StructRNA RNA_NodeSocketInterfaceIntFactor;
extern StructRNA RNA_NodeSocketBool;
extern StructRNA RNA_NodeSocketInterfaceBool;
extern StructRNA RNA_NodeSocketVector;
extern StructRNA RNA_NodeSocketInterfaceVector;
extern StructRNA RNA_NodeSocketVectorTranslation;
extern StructRNA RNA_NodeSocketInterfaceVectorTranslation;
extern StructRNA RNA_NodeSocketVectorDirection;
extern StructRNA RNA_NodeSocketInterfaceVectorDirection;
extern StructRNA RNA_NodeSocketVectorVelocity;
extern StructRNA RNA_NodeSocketInterfaceVectorVelocity;
extern StructRNA RNA_NodeSocketVectorAcceleration;
extern StructRNA RNA_NodeSocketInterfaceVectorAcceleration;
extern StructRNA RNA_NodeSocketVectorEuler;
extern StructRNA RNA_NodeSocketInterfaceVectorEuler;
extern StructRNA RNA_NodeSocketVectorXYZ;
extern StructRNA RNA_NodeSocketInterfaceVectorXYZ;
extern StructRNA RNA_NodeSocketColor;
extern StructRNA RNA_NodeSocketInterfaceColor;
extern StructRNA RNA_NodeSocketString;
extern StructRNA RNA_NodeSocketInterfaceString;
extern StructRNA RNA_NodeSocketShader;
extern StructRNA RNA_NodeSocketInterfaceShader;
extern StructRNA RNA_NodeSocketVirtual;
extern StructRNA RNA_CompositorNodeTree;
extern StructRNA RNA_ShaderNodeTree;
extern StructRNA RNA_TextureNodeTree;
extern StructRNA RNA_NodeFrame;
extern StructRNA RNA_NodeGroup;
extern StructRNA RNA_NodeGroupInput;
extern StructRNA RNA_NodeGroupOutput;
extern StructRNA RNA_NodeReroute;
extern StructRNA RNA_ShaderNodeOutput;
extern StructRNA RNA_ShaderNodeMaterial;
extern StructRNA RNA_ShaderNodeRGB;
extern StructRNA RNA_ShaderNodeValue;
extern StructRNA RNA_ShaderNodeMixRGB;
extern StructRNA RNA_ShaderNodeValToRGB;
extern StructRNA RNA_ShaderNodeRGBToBW;
extern StructRNA RNA_ShaderNodeTexture;
extern StructRNA RNA_ShaderNodeNormal;
extern StructRNA RNA_ShaderNodeGamma;
extern StructRNA RNA_ShaderNodeBrightContrast;
extern StructRNA RNA_ShaderNodeGeometry;
extern StructRNA RNA_ShaderNodeMapping;
extern StructRNA RNA_ShaderNodeVectorCurve;
extern StructRNA RNA_ShaderNodeRGBCurve;
extern StructRNA RNA_ShaderNodeCameraData;
extern StructRNA RNA_ShaderNodeLampData;
extern StructRNA RNA_ShaderNodeMath;
extern StructRNA RNA_ShaderNodeVectorMath;
extern StructRNA RNA_ShaderNodeSqueeze;
extern StructRNA RNA_ShaderNodeExtendedMaterial;
extern StructRNA RNA_ShaderNodeInvert;
extern StructRNA RNA_ShaderNodeSeparateRGB;
extern StructRNA RNA_ShaderNodeCombineRGB;
extern StructRNA RNA_ShaderNodeHueSaturation;
extern StructRNA RNA_ShaderNodeOutputMaterial;
extern StructRNA RNA_ShaderNodeOutputLamp;
extern StructRNA RNA_ShaderNodeOutputWorld;
extern StructRNA RNA_ShaderNodeOutputLineStyle;
extern StructRNA RNA_ShaderNodeFresnel;
extern StructRNA RNA_ShaderNodeLayerWeight;
extern StructRNA RNA_ShaderNodeMixShader;
extern StructRNA RNA_ShaderNodeAddShader;
extern StructRNA RNA_ShaderNodeAttribute;
extern StructRNA RNA_ShaderNodeAmbientOcclusion;
extern StructRNA RNA_ShaderNodeBackground;
extern StructRNA RNA_ShaderNodeHoldout;
extern StructRNA RNA_ShaderNodeBsdfAnisotropic;
extern StructRNA RNA_ShaderNodeBsdfDiffuse;
extern StructRNA RNA_ShaderNodeBsdfGlossy;
extern StructRNA RNA_ShaderNodeBsdfGlass;
extern StructRNA RNA_ShaderNodeBsdfRefraction;
extern StructRNA RNA_ShaderNodeBsdfTranslucent;
extern StructRNA RNA_ShaderNodeBsdfTransparent;
extern StructRNA RNA_ShaderNodeBsdfVelvet;
extern StructRNA RNA_ShaderNodeBsdfToon;
extern StructRNA RNA_ShaderNodeBsdfHair;
extern StructRNA RNA_ShaderNodeSubsurfaceScattering;
extern StructRNA RNA_ShaderNodeVolumeAbsorption;
extern StructRNA RNA_ShaderNodeVolumeScatter;
extern StructRNA RNA_ShaderNodeEmission;
extern StructRNA RNA_ShaderNodeNewGeometry;
extern StructRNA RNA_ShaderNodeLightPath;
extern StructRNA RNA_ShaderNodeLightFalloff;
extern StructRNA RNA_ShaderNodeObjectInfo;
extern StructRNA RNA_ShaderNodeParticleInfo;
extern StructRNA RNA_ShaderNodeHairInfo;
extern StructRNA RNA_ShaderNodeWireframe;
extern StructRNA RNA_ShaderNodeWavelength;
extern StructRNA RNA_ShaderNodeBlackbody;
extern StructRNA RNA_ShaderNodeBump;
extern StructRNA RNA_ShaderNodeNormalMap;
extern StructRNA RNA_ShaderNodeTangent;
extern StructRNA RNA_ShaderNodeScript;
extern StructRNA RNA_ShaderNodeTexImage;
extern StructRNA RNA_ShaderNodeTexEnvironment;
extern StructRNA RNA_ShaderNodeTexSky;
extern StructRNA RNA_ShaderNodeTexGradient;
extern StructRNA RNA_ShaderNodeTexNoise;
extern StructRNA RNA_ShaderNodeTexMagic;
extern StructRNA RNA_ShaderNodeTexWave;
extern StructRNA RNA_ShaderNodeTexMusgrave;
extern StructRNA RNA_ShaderNodeTexVoronoi;
extern StructRNA RNA_ShaderNodeTexChecker;
extern StructRNA RNA_ShaderNodeTexBrick;
extern StructRNA RNA_ShaderNodeTexCoord;
extern StructRNA RNA_ShaderNodeVectorTransform;
extern StructRNA RNA_ShaderNodeSeparateHSV;
extern StructRNA RNA_ShaderNodeCombineHSV;
extern StructRNA RNA_ShaderNodeUVMap;
extern StructRNA RNA_ShaderNodeUVAlongStroke;
extern StructRNA RNA_ShaderNodeSeparateXYZ;
extern StructRNA RNA_ShaderNodeCombineXYZ;
extern StructRNA RNA_CompositorNodeViewer;
extern StructRNA RNA_CompositorNodeRGB;
extern StructRNA RNA_CompositorNodeValue;
extern StructRNA RNA_CompositorNodeMixRGB;
extern StructRNA RNA_CompositorNodeValToRGB;
extern StructRNA RNA_CompositorNodeRGBToBW;
extern StructRNA RNA_CompositorNodeNormal;
extern StructRNA RNA_CompositorNodeCurveVec;
extern StructRNA RNA_CompositorNodeCurveRGB;
extern StructRNA RNA_CompositorNodeAlphaOver;
extern StructRNA RNA_CompositorNodeBlur;
extern StructRNA RNA_CompositorNodeFilter;
extern StructRNA RNA_CompositorNodeMapValue;
extern StructRNA RNA_CompositorNodeMapRange;
extern StructRNA RNA_CompositorNodeTime;
extern StructRNA RNA_CompositorNodeVecBlur;
extern StructRNA RNA_CompositorNodeSepRGBA;
extern StructRNA RNA_CompositorNodeSepHSVA;
extern StructRNA RNA_CompositorNodeSetAlpha;
extern StructRNA RNA_CompositorNodeHueSat;
extern StructRNA RNA_CompositorNodeImage;
extern StructRNA RNA_CompositorNodeRLayers;
extern StructRNA RNA_CompositorNodeComposite;
extern StructRNA RNA_CompositorNodeOutputFile;
extern StructRNA RNA_CompositorNodeOutputFileFileSlots;
extern StructRNA RNA_CompositorNodeOutputFileLayerSlots;
extern StructRNA RNA_CompositorNodeTexture;
extern StructRNA RNA_CompositorNodeTranslate;
extern StructRNA RNA_CompositorNodeZcombine;
extern StructRNA RNA_CompositorNodeCombRGBA;
extern StructRNA RNA_CompositorNodeDilateErode;
extern StructRNA RNA_CompositorNodeInpaint;
extern StructRNA RNA_CompositorNodeDespeckle;
extern StructRNA RNA_CompositorNodeRotate;
extern StructRNA RNA_CompositorNodeScale;
extern StructRNA RNA_CompositorNodeSepYCCA;
extern StructRNA RNA_CompositorNodeCombYCCA;
extern StructRNA RNA_CompositorNodeSepYUVA;
extern StructRNA RNA_CompositorNodeCombYUVA;
extern StructRNA RNA_CompositorNodeDiffMatte;
extern StructRNA RNA_CompositorNodeColorSpill;
extern StructRNA RNA_CompositorNodeChromaMatte;
extern StructRNA RNA_CompositorNodeChannelMatte;
extern StructRNA RNA_CompositorNodeFlip;
extern StructRNA RNA_CompositorNodeSplitViewer;
extern StructRNA RNA_CompositorNodeMapUV;
extern StructRNA RNA_CompositorNodeIDMask;
extern StructRNA RNA_CompositorNodeDoubleEdgeMask;
extern StructRNA RNA_CompositorNodeDefocus;
extern StructRNA RNA_CompositorNodeDisplace;
extern StructRNA RNA_CompositorNodeCombHSVA;
extern StructRNA RNA_CompositorNodeMath;
extern StructRNA RNA_CompositorNodeLumaMatte;
extern StructRNA RNA_CompositorNodeBrightContrast;
extern StructRNA RNA_CompositorNodeGamma;
extern StructRNA RNA_CompositorNodeInvert;
extern StructRNA RNA_CompositorNodeNormalize;
extern StructRNA RNA_CompositorNodeCrop;
extern StructRNA RNA_CompositorNodeDBlur;
extern StructRNA RNA_CompositorNodeBilateralblur;
extern StructRNA RNA_CompositorNodePremulKey;
extern StructRNA RNA_CompositorNodeGlare;
extern StructRNA RNA_CompositorNodeTonemap;
extern StructRNA RNA_CompositorNodeLensdist;
extern StructRNA RNA_CompositorNodeLevels;
extern StructRNA RNA_CompositorNodeColorMatte;
extern StructRNA RNA_CompositorNodeDistanceMatte;
extern StructRNA RNA_CompositorNodeColorBalance;
extern StructRNA RNA_CompositorNodeHueCorrect;
extern StructRNA RNA_CompositorNodeMovieClip;
extern StructRNA RNA_CompositorNodeTransform;
extern StructRNA RNA_CompositorNodeStabilize;
extern StructRNA RNA_CompositorNodeMovieDistortion;
extern StructRNA RNA_CompositorNodeBoxMask;
extern StructRNA RNA_CompositorNodeEllipseMask;
extern StructRNA RNA_CompositorNodeBokehImage;
extern StructRNA RNA_CompositorNodeBokehBlur;
extern StructRNA RNA_CompositorNodeSwitch;
extern StructRNA RNA_CompositorNodeColorCorrection;
extern StructRNA RNA_CompositorNodeMask;
extern StructRNA RNA_CompositorNodeKeyingScreen;
extern StructRNA RNA_CompositorNodeKeying;
extern StructRNA RNA_CompositorNodeTrackPos;
extern StructRNA RNA_CompositorNodePixelate;
extern StructRNA RNA_CompositorNodePlaneTrackDeform;
extern StructRNA RNA_CompositorNodeCornerPin;
extern StructRNA RNA_CompositorNodeSunBeams;
extern StructRNA RNA_TextureNodeOutput;
extern StructRNA RNA_TextureNodeChecker;
extern StructRNA RNA_TextureNodeTexture;
extern StructRNA RNA_TextureNodeBricks;
extern StructRNA RNA_TextureNodeMath;
extern StructRNA RNA_TextureNodeMixRGB;
extern StructRNA RNA_TextureNodeRGBToBW;
extern StructRNA RNA_TextureNodeValToRGB;
extern StructRNA RNA_TextureNodeImage;
extern StructRNA RNA_TextureNodeCurveRGB;
extern StructRNA RNA_TextureNodeInvert;
extern StructRNA RNA_TextureNodeHueSaturation;
extern StructRNA RNA_TextureNodeCurveTime;
extern StructRNA RNA_TextureNodeRotate;
extern StructRNA RNA_TextureNodeViewer;
extern StructRNA RNA_TextureNodeTranslate;
extern StructRNA RNA_TextureNodeCoordinates;
extern StructRNA RNA_TextureNodeDistance;
extern StructRNA RNA_TextureNodeCompose;
extern StructRNA RNA_TextureNodeDecompose;
extern StructRNA RNA_TextureNodeValToNor;
extern StructRNA RNA_TextureNodeScale;
extern StructRNA RNA_TextureNodeAt;
extern StructRNA RNA_TextureNodeTexVoronoi;
extern StructRNA RNA_TextureNodeTexBlend;
extern StructRNA RNA_TextureNodeTexMagic;
extern StructRNA RNA_TextureNodeTexMarble;
extern StructRNA RNA_TextureNodeTexClouds;
extern StructRNA RNA_TextureNodeTexWood;
extern StructRNA RNA_TextureNodeTexMusgrave;
extern StructRNA RNA_TextureNodeTexNoise;
extern StructRNA RNA_TextureNodeTexStucci;
extern StructRNA RNA_TextureNodeTexDistNoise;
extern StructRNA RNA_ShaderNodeGroup;
extern StructRNA RNA_CompositorNodeGroup;
extern StructRNA RNA_TextureNodeGroup;
extern StructRNA RNA_NodeCustomGroup;
extern StructRNA RNA_NodeOutputFileSlotFile;
extern StructRNA RNA_NodeOutputFileSlotLayer;
extern StructRNA RNA_NodeInstanceHash;
extern StructRNA RNA_Object;
extern StructRNA RNA_ObjectModifiers;
extern StructRNA RNA_ObjectConstraints;
extern StructRNA RNA_VertexGroups;
extern StructRNA RNA_ParticleSystems;
extern StructRNA RNA_GameObjectSettings;
extern StructRNA RNA_ObjectBase;
extern StructRNA RNA_VertexGroup;
extern StructRNA RNA_MaterialSlot;
extern StructRNA RNA_DupliObject;
extern StructRNA RNA_LodLevel;
extern StructRNA RNA_PointCache;
extern StructRNA RNA_PointCaches;
extern StructRNA RNA_CollisionSettings;
extern StructRNA RNA_EffectorWeights;
extern StructRNA RNA_FieldSettings;
extern StructRNA RNA_GameSoftBodySettings;
extern StructRNA RNA_SoftBodySettings;
extern StructRNA RNA_PackedFile;
extern StructRNA RNA_ParticleTarget;
extern StructRNA RNA_SPHFluidSettings;
extern StructRNA RNA_ParticleHairKey;
extern StructRNA RNA_ParticleKey;
extern StructRNA RNA_ChildParticle;
extern StructRNA RNA_Particle;
extern StructRNA RNA_ParticleDupliWeight;
extern StructRNA RNA_ParticleSystem;
extern StructRNA RNA_ParticleSettingsTextureSlot;
extern StructRNA RNA_ParticleSettings;
extern StructRNA RNA_ParticleSettingsTextureSlots;
extern StructRNA RNA_Pose;
extern StructRNA RNA_BoneGroups;
extern StructRNA RNA_PoseBone;
extern StructRNA RNA_PoseBoneConstraints;
extern StructRNA RNA_IKParam;
extern StructRNA RNA_Itasc;
extern StructRNA RNA_BoneGroup;
extern StructRNA RNA_GameProperty;
extern StructRNA RNA_GameBooleanProperty;
extern StructRNA RNA_GameIntProperty;
extern StructRNA RNA_GameFloatProperty;
extern StructRNA RNA_GameTimerProperty;
extern StructRNA RNA_GameStringProperty;
extern StructRNA RNA_RenderEngine;
extern StructRNA RNA_RenderResult;
extern StructRNA RNA_RenderLayer;
extern StructRNA RNA_RenderPass;
extern StructRNA RNA_BakePixel;
extern StructRNA RNA_RigidBodyWorld;
extern StructRNA RNA_RigidBodyObject;
extern StructRNA RNA_RigidBodyConstraint;
extern StructRNA RNA_Scene;
extern StructRNA RNA_SceneBases;
extern StructRNA RNA_SceneObjects;
extern StructRNA RNA_KeyingSets;
extern StructRNA RNA_KeyingSetsAll;
extern StructRNA RNA_TimelineMarkers;
extern StructRNA RNA_ToolSettings;
extern StructRNA RNA_UnifiedPaintSettings;
extern StructRNA RNA_MeshStatVis;
extern StructRNA RNA_UnitSettings;
extern StructRNA RNA_ImageFormatSettings;
extern StructRNA RNA_SceneGameData;
extern StructRNA RNA_SceneGameRecastData;
extern StructRNA RNA_TransformOrientation;
extern StructRNA RNA_SelectedUvElement;
extern StructRNA RNA_FFmpegSettings;
extern StructRNA RNA_RenderSettings;
extern StructRNA RNA_RenderLayers;
extern StructRNA RNA_BakeSettings;
extern StructRNA RNA_SceneRenderLayer;
extern StructRNA RNA_FreestyleLineSet;
extern StructRNA RNA_FreestyleModuleSettings;
extern StructRNA RNA_FreestyleSettings;
extern StructRNA RNA_FreestyleModules;
extern StructRNA RNA_Linesets;
extern StructRNA RNA_Screen;
extern StructRNA RNA_Area;
extern StructRNA RNA_AreaSpaces;
extern StructRNA RNA_Region;
extern StructRNA RNA_View2D;
extern StructRNA RNA_PaletteColor;
extern StructRNA RNA_Palette;
extern StructRNA RNA_PaintCurve;
extern StructRNA RNA_Paint;
extern StructRNA RNA_Sculpt;
extern StructRNA RNA_UvSculpt;
extern StructRNA RNA_VertexPaint;
extern StructRNA RNA_ImagePaint;
extern StructRNA RNA_ParticleEdit;
extern StructRNA RNA_ParticleBrush;
extern StructRNA RNA_Sensor;
extern StructRNA RNA_AlwaysSensor;
extern StructRNA RNA_NearSensor;
extern StructRNA RNA_MouseSensor;
extern StructRNA RNA_KeyboardSensor;
extern StructRNA RNA_PropertySensor;
extern StructRNA RNA_ArmatureSensor;
extern StructRNA RNA_ActuatorSensor;
extern StructRNA RNA_DelaySensor;
extern StructRNA RNA_CollisionSensor;
extern StructRNA RNA_RadarSensor;
extern StructRNA RNA_RandomSensor;
extern StructRNA RNA_RaySensor;
extern StructRNA RNA_MessageSensor;
extern StructRNA RNA_JoystickSensor;
extern StructRNA RNA_SequenceColorBalanceData;
extern StructRNA RNA_SequenceElement;
extern StructRNA RNA_SequenceProxy;
extern StructRNA RNA_SequenceColorBalance;
extern StructRNA RNA_SequenceCrop;
extern StructRNA RNA_SequenceTransform;
extern StructRNA RNA_Sequence;
extern StructRNA RNA_SequenceModifiers;
extern StructRNA RNA_SequenceEditor;
extern StructRNA RNA_Sequences;
extern StructRNA RNA_ImageSequence;
extern StructRNA RNA_SequenceElements;
extern StructRNA RNA_MetaSequence;
extern StructRNA RNA_SceneSequence;
extern StructRNA RNA_MovieSequence;
extern StructRNA RNA_MovieClipSequence;
extern StructRNA RNA_MaskSequence;
extern StructRNA RNA_SoundSequence;
extern StructRNA RNA_EffectSequence;
extern StructRNA RNA_AddSequence;
extern StructRNA RNA_AdjustmentSequence;
extern StructRNA RNA_AlphaOverSequence;
extern StructRNA RNA_AlphaUnderSequence;
extern StructRNA RNA_ColorSequence;
extern StructRNA RNA_CrossSequence;
extern StructRNA RNA_GammaCrossSequence;
extern StructRNA RNA_GlowSequence;
extern StructRNA RNA_MulticamSequence;
extern StructRNA RNA_MultiplySequence;
extern StructRNA RNA_OverDropSequence;
extern StructRNA RNA_SpeedControlSequence;
extern StructRNA RNA_SubtractSequence;
extern StructRNA RNA_TransformSequence;
extern StructRNA RNA_WipeSequence;
extern StructRNA RNA_GaussianBlurSequence;
extern StructRNA RNA_SequenceModifier;
extern StructRNA RNA_ColorBalanceModifier;
extern StructRNA RNA_CurvesModifier;
extern StructRNA RNA_HueCorrectModifier;
extern StructRNA RNA_BrightContrastModifier;
extern StructRNA RNA_SmokeDomainSettings;
extern StructRNA RNA_SmokeFlowSettings;
extern StructRNA RNA_SmokeCollSettings;
extern StructRNA RNA_Space;
extern StructRNA RNA_SpaceImageEditor;
extern StructRNA RNA_SpaceUVEditor;
extern StructRNA RNA_SpaceSequenceEditor;
extern StructRNA RNA_SpaceTextEditor;
extern StructRNA RNA_FileSelectParams;
extern StructRNA RNA_SpaceFileBrowser;
extern StructRNA RNA_SpaceOutliner;
extern StructRNA RNA_BackgroundImage;
extern StructRNA RNA_SpaceView3D;
extern StructRNA RNA_BackgroundImages;
extern StructRNA RNA_RegionView3D;
extern StructRNA RNA_SpaceProperties;
extern StructRNA RNA_SpaceDopeSheetEditor;
extern StructRNA RNA_SpaceGraphEditor;
extern StructRNA RNA_SpaceNLA;
extern StructRNA RNA_SpaceTimeline;
extern StructRNA RNA_SpaceConsole;
extern StructRNA RNA_ConsoleLine;
extern StructRNA RNA_SpaceInfo;
extern StructRNA RNA_SpaceUserPreferences;
extern StructRNA RNA_NodeTreePath;
extern StructRNA RNA_SpaceNodeEditor;
extern StructRNA RNA_SpaceNodeEditorPath;
extern StructRNA RNA_SpaceLogicEditor;
extern StructRNA RNA_SpaceClipEditor;
extern StructRNA RNA_Speaker;
extern StructRNA RNA_TextLine;
extern StructRNA RNA_Text;
extern StructRNA RNA_TimelineMarker;
extern StructRNA RNA_Sound;
extern StructRNA RNA_UILayout;
extern StructRNA RNA_Panel;
extern StructRNA RNA_UIList;
extern StructRNA RNA_Header;
extern StructRNA RNA_Menu;
extern StructRNA RNA_ThemeFontStyle;
extern StructRNA RNA_ThemeStyle;
extern StructRNA RNA_ThemeWidgetColors;
extern StructRNA RNA_ThemeWidgetStateColors;
extern StructRNA RNA_ThemePanelColors;
extern StructRNA RNA_ThemeGradientColors;
extern StructRNA RNA_ThemeUserInterface;
extern StructRNA RNA_ThemeSpaceGeneric;
extern StructRNA RNA_ThemeSpaceGradient;
extern StructRNA RNA_ThemeSpaceListGeneric;
extern StructRNA RNA_ThemeView3D;
extern StructRNA RNA_ThemeGraphEditor;
extern StructRNA RNA_ThemeFileBrowser;
extern StructRNA RNA_ThemeNLAEditor;
extern StructRNA RNA_ThemeDopeSheet;
extern StructRNA RNA_ThemeImageEditor;
extern StructRNA RNA_ThemeSequenceEditor;
extern StructRNA RNA_ThemeProperties;
extern StructRNA RNA_ThemeTextEditor;
extern StructRNA RNA_ThemeTimeline;
extern StructRNA RNA_ThemeNodeEditor;
extern StructRNA RNA_ThemeOutliner;
extern StructRNA RNA_ThemeInfo;
extern StructRNA RNA_ThemeUserPreferences;
extern StructRNA RNA_ThemeConsole;
extern StructRNA RNA_ThemeLogicEditor;
extern StructRNA RNA_ThemeClipEditor;
extern StructRNA RNA_ThemeBoneColorSet;
extern StructRNA RNA_Theme;
extern StructRNA RNA_UserSolidLight;
extern StructRNA RNA_WalkNavigation;
extern StructRNA RNA_UserPreferences;
extern StructRNA RNA_Addons;
extern StructRNA RNA_PathCompareCollection;
extern StructRNA RNA_UserPreferencesView;
extern StructRNA RNA_UserPreferencesEdit;
extern StructRNA RNA_UserPreferencesInput;
extern StructRNA RNA_UserPreferencesFilePaths;
extern StructRNA RNA_UserPreferencesSystem;
extern StructRNA RNA_Addon;
extern StructRNA RNA_AddonPreferences;
extern StructRNA RNA_PathCompare;
extern StructRNA RNA_VectorFont;
extern StructRNA RNA_Operator;
extern StructRNA RNA_OperatorProperties;
extern StructRNA RNA_OperatorMousePath;
extern StructRNA RNA_OperatorFileListElement;
extern StructRNA RNA_Macro;
extern StructRNA RNA_OperatorMacro;
extern StructRNA RNA_Event;
extern StructRNA RNA_Timer;
extern StructRNA RNA_UIPopupMenu;
extern StructRNA RNA_UIPieMenu;
extern StructRNA RNA_Window;
extern StructRNA RNA_WindowManager;
extern StructRNA RNA_KeyConfigurations;
extern StructRNA RNA_KeyConfig;
extern StructRNA RNA_KeyMaps;
extern StructRNA RNA_KeyMap;
extern StructRNA RNA_KeyMapItems;
extern StructRNA RNA_KeyMapItem;
extern StructRNA RNA_World;
extern StructRNA RNA_WorldTextureSlots;
extern StructRNA RNA_WorldLighting;
extern StructRNA RNA_WorldMistSettings;
extern StructRNA RNA_WorldTextureSlot;
extern StructRNA RNA_MovieClip;
extern StructRNA RNA_MovieClipProxy;
extern StructRNA RNA_MovieClipUser;
extern StructRNA RNA_MovieClipScopes;
extern StructRNA RNA_MovieTrackingSettings;
extern StructRNA RNA_MovieTrackingCamera;
extern StructRNA RNA_MovieTrackingMarker;
extern StructRNA RNA_MovieTrackingTrack;
extern StructRNA RNA_MovieTrackingMarkers;
extern StructRNA RNA_MovieTrackingPlaneMarker;
extern StructRNA RNA_MovieTrackingPlaneTrack;
extern StructRNA RNA_MovieTrackingPlaneMarkers;
extern StructRNA RNA_MovieTrackingTracks;
extern StructRNA RNA_MovieTrackingPlaneTracks;
extern StructRNA RNA_MovieTrackingObjectTracks;
extern StructRNA RNA_MovieTrackingObjectPlaneTracks;
extern StructRNA RNA_MovieTrackingStabilization;
extern StructRNA RNA_MovieTrackingReconstructedCameras;
extern StructRNA RNA_MovieReconstructedCamera;
extern StructRNA RNA_MovieTrackingReconstruction;
extern StructRNA RNA_MovieTrackingObject;
extern StructRNA RNA_MovieTrackingDopesheet;
extern StructRNA RNA_MovieTracking;
extern StructRNA RNA_MovieTrackingObjects;
extern StructRNA RNA_MaskParent;
extern StructRNA RNA_MaskSplinePointUW;
extern StructRNA RNA_MaskSplinePoint;
extern StructRNA RNA_MaskSpline;
extern StructRNA RNA_MaskSplines;
extern StructRNA RNA_MaskSplinePoints;
extern StructRNA RNA_MaskLayer;
extern StructRNA RNA_Mask;
extern StructRNA RNA_MaskLayers;

#include "rna_action.c"
#include "rna_action_api.c"

#pragma GCC diagnostic ignored "-Wunused-parameter"

/* Autogenerated Functions */


extern CollectionPropertyRNA rna_ID_rna_properties;
extern PointerPropertyRNA rna_ID_rna_type;
extern StringPropertyRNA rna_ID_name;
extern IntPropertyRNA rna_ID_users;
extern BoolPropertyRNA rna_ID_use_fake_user;
extern BoolPropertyRNA rna_ID_tag;
extern BoolPropertyRNA rna_ID_is_updated;
extern BoolPropertyRNA rna_ID_is_updated_data;
extern BoolPropertyRNA rna_ID_is_library_indirect;
extern PointerPropertyRNA rna_ID_library;

CollectionPropertyRNA rna_Action_fcurves;
CollectionPropertyRNA rna_Action_groups;
CollectionPropertyRNA rna_Action_pose_markers;
FloatPropertyRNA rna_Action_frame_range;
EnumPropertyRNA rna_Action_id_root;

extern FunctionRNA rna_ID_copy_func;
extern PointerPropertyRNA rna_ID_copy_id;

extern FunctionRNA rna_ID_user_clear_func;
extern FunctionRNA rna_ID_animation_data_create_func;
extern PointerPropertyRNA rna_ID_animation_data_create_anim_data;

extern FunctionRNA rna_ID_animation_data_clear_func;
extern FunctionRNA rna_ID_update_tag_func;
extern EnumPropertyRNA rna_ID_update_tag_refresh;



CollectionPropertyRNA rna_ActionFCurves_rna_properties;
PointerPropertyRNA rna_ActionFCurves_rna_type;

extern FunctionRNA rna_ActionFCurves_new_func;
extern StringPropertyRNA rna_ActionFCurves_new_data_path;
extern IntPropertyRNA rna_ActionFCurves_new_index;
extern StringPropertyRNA rna_ActionFCurves_new_action_group;
extern PointerPropertyRNA rna_ActionFCurves_new_fcurve;

extern FunctionRNA rna_ActionFCurves_remove_func;
extern PointerPropertyRNA rna_ActionFCurves_remove_fcurve;



CollectionPropertyRNA rna_ActionGroups_rna_properties;
PointerPropertyRNA rna_ActionGroups_rna_type;

extern FunctionRNA rna_ActionGroups_new_func;
extern StringPropertyRNA rna_ActionGroups_new_name;
extern PointerPropertyRNA rna_ActionGroups_new_action_group;

extern FunctionRNA rna_ActionGroups_remove_func;
extern PointerPropertyRNA rna_ActionGroups_remove_action_group;



CollectionPropertyRNA rna_ActionPoseMarkers_rna_properties;
PointerPropertyRNA rna_ActionPoseMarkers_rna_type;
PointerPropertyRNA rna_ActionPoseMarkers_active;
IntPropertyRNA rna_ActionPoseMarkers_active_index;

extern FunctionRNA rna_ActionPoseMarkers_new_func;
extern StringPropertyRNA rna_ActionPoseMarkers_new_name;
extern PointerPropertyRNA rna_ActionPoseMarkers_new_marker;

extern FunctionRNA rna_ActionPoseMarkers_remove_func;
extern PointerPropertyRNA rna_ActionPoseMarkers_remove_marker;



CollectionPropertyRNA rna_ActionGroup_rna_properties;
PointerPropertyRNA rna_ActionGroup_rna_type;
StringPropertyRNA rna_ActionGroup_name;
CollectionPropertyRNA rna_ActionGroup_channels;
BoolPropertyRNA rna_ActionGroup_select;
BoolPropertyRNA rna_ActionGroup_lock;
BoolPropertyRNA rna_ActionGroup_show_expanded;
EnumPropertyRNA rna_ActionGroup_color_set;
BoolPropertyRNA rna_ActionGroup_is_custom_color_set;
PointerPropertyRNA rna_ActionGroup_colors;


CollectionPropertyRNA rna_DopeSheet_rna_properties;
PointerPropertyRNA rna_DopeSheet_rna_type;
PointerPropertyRNA rna_DopeSheet_source;
BoolPropertyRNA rna_DopeSheet_show_datablock_filters;
BoolPropertyRNA rna_DopeSheet_show_only_selected;
BoolPropertyRNA rna_DopeSheet_show_hidden;
BoolPropertyRNA rna_DopeSheet_show_only_errors;
BoolPropertyRNA rna_DopeSheet_show_only_group_objects;
PointerPropertyRNA rna_DopeSheet_filter_group;
BoolPropertyRNA rna_DopeSheet_show_only_matching_fcurves;
StringPropertyRNA rna_DopeSheet_filter_fcurve_name;
BoolPropertyRNA rna_DopeSheet_show_missing_nla;
BoolPropertyRNA rna_DopeSheet_show_summary;
BoolPropertyRNA rna_DopeSheet_show_expanded_summary;
BoolPropertyRNA rna_DopeSheet_show_transforms;
BoolPropertyRNA rna_DopeSheet_show_shapekeys;
BoolPropertyRNA rna_DopeSheet_show_modifiers;
BoolPropertyRNA rna_DopeSheet_show_meshes;
BoolPropertyRNA rna_DopeSheet_show_lattices;
BoolPropertyRNA rna_DopeSheet_show_cameras;
BoolPropertyRNA rna_DopeSheet_show_materials;
BoolPropertyRNA rna_DopeSheet_show_lamps;
BoolPropertyRNA rna_DopeSheet_show_linestyles;
BoolPropertyRNA rna_DopeSheet_show_textures;
BoolPropertyRNA rna_DopeSheet_show_curves;
BoolPropertyRNA rna_DopeSheet_show_worlds;
BoolPropertyRNA rna_DopeSheet_show_scenes;
BoolPropertyRNA rna_DopeSheet_show_particles;
BoolPropertyRNA rna_DopeSheet_show_metaballs;
BoolPropertyRNA rna_DopeSheet_show_armatures;
BoolPropertyRNA rna_DopeSheet_show_nodes;
BoolPropertyRNA rna_DopeSheet_show_speakers;

static PointerRNA Action_fcurves_get(CollectionPropertyIterator *iter)
{
	return rna_pointer_inherit_refine(&iter->parent, &RNA_FCurve, rna_iterator_listbase_get(iter));
}

void Action_fcurves_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{
	bAction *data = (bAction *)(ptr->data);

	memset(iter, 0, sizeof(*iter));
	iter->parent = *ptr;
	iter->prop = (PropertyRNA *)&rna_Action_fcurves;

	rna_iterator_listbase_begin(iter, &data->curves, NULL);

	if (iter->valid)
		iter->ptr = Action_fcurves_get(iter);
}

void Action_fcurves_next(CollectionPropertyIterator *iter)
{
	rna_iterator_listbase_next(iter);

	if (iter->valid)
		iter->ptr = Action_fcurves_get(iter);
}

void Action_fcurves_end(CollectionPropertyIterator *iter)
{
	rna_iterator_listbase_end(iter);
}

int Action_fcurves_lookup_int(PointerRNA *ptr, int index, PointerRNA *r_ptr)
{
	int found = 0;
	CollectionPropertyIterator iter;

	Action_fcurves_begin(&iter, ptr);

	if (iter.valid) {
		ListBaseIterator *internal = &iter.internal.listbase;
		if (internal->skip) {
			while (index-- > 0 && iter.valid) {
				rna_iterator_listbase_next(&iter);
			}
			found = (index == -1 && iter.valid);
		}
		else {
			while (index-- > 0 && internal->link)
				internal->link = internal->link->next;
			found = (index == -1 && internal->link);
		}
		if (found) *r_ptr = Action_fcurves_get(&iter);
	}

	Action_fcurves_end(&iter);

	return found;
}

static PointerRNA Action_groups_get(CollectionPropertyIterator *iter)
{
	return rna_pointer_inherit_refine(&iter->parent, &RNA_ActionGroup, rna_iterator_listbase_get(iter));
}

void Action_groups_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{
	bAction *data = (bAction *)(ptr->data);

	memset(iter, 0, sizeof(*iter));
	iter->parent = *ptr;
	iter->prop = (PropertyRNA *)&rna_Action_groups;

	rna_iterator_listbase_begin(iter, &data->groups, NULL);

	if (iter->valid)
		iter->ptr = Action_groups_get(iter);
}

void Action_groups_next(CollectionPropertyIterator *iter)
{
	rna_iterator_listbase_next(iter);

	if (iter->valid)
		iter->ptr = Action_groups_get(iter);
}

void Action_groups_end(CollectionPropertyIterator *iter)
{
	rna_iterator_listbase_end(iter);
}

int Action_groups_lookup_int(PointerRNA *ptr, int index, PointerRNA *r_ptr)
{
	int found = 0;
	CollectionPropertyIterator iter;

	Action_groups_begin(&iter, ptr);

	if (iter.valid) {
		ListBaseIterator *internal = &iter.internal.listbase;
		if (internal->skip) {
			while (index-- > 0 && iter.valid) {
				rna_iterator_listbase_next(&iter);
			}
			found = (index == -1 && iter.valid);
		}
		else {
			while (index-- > 0 && internal->link)
				internal->link = internal->link->next;
			found = (index == -1 && internal->link);
		}
		if (found) *r_ptr = Action_groups_get(&iter);
	}

	Action_groups_end(&iter);

	return found;
}

int Action_groups_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
	extern int ActionGroup_name_length(PointerRNA *);
	extern void ActionGroup_name_get(PointerRNA *, char *);

	bool found = false;
	CollectionPropertyIterator iter;
	char namebuf[1024];
	char *name;

	Action_groups_begin(&iter, ptr);

	while (iter.valid) {
		if (iter.ptr.data) {
			int namelen = ActionGroup_name_length(&iter.ptr);
			if (namelen < 1024) {
				ActionGroup_name_get(&iter.ptr, namebuf);
				if (strcmp(namebuf, key) == 0) {
					found = true;
					*r_ptr = iter.ptr;
					break;
				}
			}
			else {
				name = MEM_mallocN(namelen+1, "name string");
				ActionGroup_name_get(&iter.ptr, name);
				if (strcmp(name, key) == 0) {
					MEM_freeN(name);

					found = true;
					*r_ptr = iter.ptr;
					break;
				}
				else {
					MEM_freeN(name);
				}
			}
		}
		Action_groups_next(&iter);
	}
	Action_groups_end(&iter);

	return found;
}

static PointerRNA Action_pose_markers_get(CollectionPropertyIterator *iter)
{
	return rna_pointer_inherit_refine(&iter->parent, &RNA_TimelineMarker, rna_iterator_listbase_get(iter));
}

void Action_pose_markers_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{
	bAction *data = (bAction *)(ptr->data);

	memset(iter, 0, sizeof(*iter));
	iter->parent = *ptr;
	iter->prop = (PropertyRNA *)&rna_Action_pose_markers;

	rna_iterator_listbase_begin(iter, &data->markers, NULL);

	if (iter->valid)
		iter->ptr = Action_pose_markers_get(iter);
}

void Action_pose_markers_next(CollectionPropertyIterator *iter)
{
	rna_iterator_listbase_next(iter);

	if (iter->valid)
		iter->ptr = Action_pose_markers_get(iter);
}

void Action_pose_markers_end(CollectionPropertyIterator *iter)
{
	rna_iterator_listbase_end(iter);
}

int Action_pose_markers_lookup_int(PointerRNA *ptr, int index, PointerRNA *r_ptr)
{
	int found = 0;
	CollectionPropertyIterator iter;

	Action_pose_markers_begin(&iter, ptr);

	if (iter.valid) {
		ListBaseIterator *internal = &iter.internal.listbase;
		if (internal->skip) {
			while (index-- > 0 && iter.valid) {
				rna_iterator_listbase_next(&iter);
			}
			found = (index == -1 && iter.valid);
		}
		else {
			while (index-- > 0 && internal->link)
				internal->link = internal->link->next;
			found = (index == -1 && internal->link);
		}
		if (found) *r_ptr = Action_pose_markers_get(&iter);
	}

	Action_pose_markers_end(&iter);

	return found;
}

int Action_pose_markers_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
	extern int TimelineMarker_name_length(PointerRNA *);
	extern void TimelineMarker_name_get(PointerRNA *, char *);

	bool found = false;
	CollectionPropertyIterator iter;
	char namebuf[1024];
	char *name;

	Action_pose_markers_begin(&iter, ptr);

	while (iter.valid) {
		if (iter.ptr.data) {
			int namelen = TimelineMarker_name_length(&iter.ptr);
			if (namelen < 1024) {
				TimelineMarker_name_get(&iter.ptr, namebuf);
				if (strcmp(namebuf, key) == 0) {
					found = true;
					*r_ptr = iter.ptr;
					break;
				}
			}
			else {
				name = MEM_mallocN(namelen+1, "name string");
				TimelineMarker_name_get(&iter.ptr, name);
				if (strcmp(name, key) == 0) {
					MEM_freeN(name);

					found = true;
					*r_ptr = iter.ptr;
					break;
				}
				else {
					MEM_freeN(name);
				}
			}
		}
		Action_pose_markers_next(&iter);
	}
	Action_pose_markers_end(&iter);

	return found;
}

void Action_frame_range_get(PointerRNA *ptr, float values[2])
{
	rna_Action_frame_range_get(ptr, values);
}

int Action_id_root_get(PointerRNA *ptr)
{
	bAction *data = (bAction *)(ptr->data);
	return (int)(data->idroot);
}

void Action_id_root_set(PointerRNA *ptr, int value)
{
	bAction *data = (bAction *)(ptr->data);
	data->idroot = value;
}

static PointerRNA ActionFCurves_rna_properties_get(CollectionPropertyIterator *iter)
{
	return rna_builtin_properties_get(iter);
}

void ActionFCurves_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

	memset(iter, 0, sizeof(*iter));
	iter->parent = *ptr;
	iter->prop = (PropertyRNA *)&rna_ActionFCurves_rna_properties;

	rna_builtin_properties_begin(iter, ptr);

	if (iter->valid)
		iter->ptr = ActionFCurves_rna_properties_get(iter);
}

void ActionFCurves_rna_properties_next(CollectionPropertyIterator *iter)
{
	rna_builtin_properties_next(iter);

	if (iter->valid)
		iter->ptr = ActionFCurves_rna_properties_get(iter);
}

void ActionFCurves_rna_properties_end(CollectionPropertyIterator *iter)
{
	rna_iterator_listbase_end(iter);
}

int ActionFCurves_rna_properties_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
	return rna_builtin_properties_lookup_string(ptr, key, r_ptr);
}

PointerRNA ActionFCurves_rna_type_get(PointerRNA *ptr)
{
	return rna_builtin_type_get(ptr);
}

static PointerRNA ActionGroups_rna_properties_get(CollectionPropertyIterator *iter)
{
	return rna_builtin_properties_get(iter);
}

void ActionGroups_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

	memset(iter, 0, sizeof(*iter));
	iter->parent = *ptr;
	iter->prop = (PropertyRNA *)&rna_ActionGroups_rna_properties;

	rna_builtin_properties_begin(iter, ptr);

	if (iter->valid)
		iter->ptr = ActionGroups_rna_properties_get(iter);
}

void ActionGroups_rna_properties_next(CollectionPropertyIterator *iter)
{
	rna_builtin_properties_next(iter);

	if (iter->valid)
		iter->ptr = ActionGroups_rna_properties_get(iter);
}

void ActionGroups_rna_properties_end(CollectionPropertyIterator *iter)
{
	rna_iterator_listbase_end(iter);
}

int ActionGroups_rna_properties_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
	return rna_builtin_properties_lookup_string(ptr, key, r_ptr);
}

PointerRNA ActionGroups_rna_type_get(PointerRNA *ptr)
{
	return rna_builtin_type_get(ptr);
}

static PointerRNA ActionPoseMarkers_rna_properties_get(CollectionPropertyIterator *iter)
{
	return rna_builtin_properties_get(iter);
}

void ActionPoseMarkers_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

	memset(iter, 0, sizeof(*iter));
	iter->parent = *ptr;
	iter->prop = (PropertyRNA *)&rna_ActionPoseMarkers_rna_properties;

	rna_builtin_properties_begin(iter, ptr);

	if (iter->valid)
		iter->ptr = ActionPoseMarkers_rna_properties_get(iter);
}

void ActionPoseMarkers_rna_properties_next(CollectionPropertyIterator *iter)
{
	rna_builtin_properties_next(iter);

	if (iter->valid)
		iter->ptr = ActionPoseMarkers_rna_properties_get(iter);
}

void ActionPoseMarkers_rna_properties_end(CollectionPropertyIterator *iter)
{
	rna_iterator_listbase_end(iter);
}

int ActionPoseMarkers_rna_properties_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
	return rna_builtin_properties_lookup_string(ptr, key, r_ptr);
}

PointerRNA ActionPoseMarkers_rna_type_get(PointerRNA *ptr)
{
	return rna_builtin_type_get(ptr);
}

PointerRNA ActionPoseMarkers_active_get(PointerRNA *ptr)
{
	return rna_Action_active_pose_marker_get(ptr);
}

void ActionPoseMarkers_active_set(PointerRNA *ptr, PointerRNA value)
{
	rna_Action_active_pose_marker_set(ptr, value);
}

int ActionPoseMarkers_active_index_get(PointerRNA *ptr)
{
	return rna_Action_active_pose_marker_index_get(ptr);
}

void ActionPoseMarkers_active_index_set(PointerRNA *ptr, int value)
{
	rna_Action_active_pose_marker_index_set(ptr, value);
}

static PointerRNA ActionGroup_rna_properties_get(CollectionPropertyIterator *iter)
{
	return rna_builtin_properties_get(iter);
}

void ActionGroup_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

	memset(iter, 0, sizeof(*iter));
	iter->parent = *ptr;
	iter->prop = (PropertyRNA *)&rna_ActionGroup_rna_properties;

	rna_builtin_properties_begin(iter, ptr);

	if (iter->valid)
		iter->ptr = ActionGroup_rna_properties_get(iter);
}

void ActionGroup_rna_properties_next(CollectionPropertyIterator *iter)
{
	rna_builtin_properties_next(iter);

	if (iter->valid)
		iter->ptr = ActionGroup_rna_properties_get(iter);
}

void ActionGroup_rna_properties_end(CollectionPropertyIterator *iter)
{
	rna_iterator_listbase_end(iter);
}

int ActionGroup_rna_properties_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
	return rna_builtin_properties_lookup_string(ptr, key, r_ptr);
}

PointerRNA ActionGroup_rna_type_get(PointerRNA *ptr)
{
	return rna_builtin_type_get(ptr);
}

void ActionGroup_name_get(PointerRNA *ptr, char *value)
{
	bActionGroup *data = (bActionGroup *)(ptr->data);
	BLI_strncpy_utf8(value, data->name, 64);
}

int ActionGroup_name_length(PointerRNA *ptr)
{
	bActionGroup *data = (bActionGroup *)(ptr->data);
	return strlen(data->name);
}

void ActionGroup_name_set(PointerRNA *ptr, const char *value)
{
	bActionGroup *data = (bActionGroup *)(ptr->data);
	BLI_strncpy_utf8(data->name, value, 64);
}

static PointerRNA ActionGroup_channels_get(CollectionPropertyIterator *iter)
{
	return rna_pointer_inherit_refine(&iter->parent, &RNA_FCurve, rna_iterator_listbase_get(iter));
}

void ActionGroup_channels_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{
	bActionGroup *data = (bActionGroup *)(ptr->data);

	memset(iter, 0, sizeof(*iter));
	iter->parent = *ptr;
	iter->prop = (PropertyRNA *)&rna_ActionGroup_channels;

	rna_iterator_listbase_begin(iter, &data->channels, NULL);

	if (iter->valid)
		iter->ptr = ActionGroup_channels_get(iter);
}

void ActionGroup_channels_next(CollectionPropertyIterator *iter)
{
	rna_ActionGroup_channels_next(iter);

	if (iter->valid)
		iter->ptr = ActionGroup_channels_get(iter);
}

void ActionGroup_channels_end(CollectionPropertyIterator *iter)
{
	rna_iterator_listbase_end(iter);
}

int ActionGroup_select_get(PointerRNA *ptr)
{
	bActionGroup *data = (bActionGroup *)(ptr->data);
	return (((data->flag) & 1) != 0);
}

void ActionGroup_select_set(PointerRNA *ptr, int value)
{
	bActionGroup *data = (bActionGroup *)(ptr->data);
	if (value) data->flag |= 1;
	else data->flag &= ~1;
}

int ActionGroup_lock_get(PointerRNA *ptr)
{
	bActionGroup *data = (bActionGroup *)(ptr->data);
	return (((data->flag) & 4) != 0);
}

void ActionGroup_lock_set(PointerRNA *ptr, int value)
{
	bActionGroup *data = (bActionGroup *)(ptr->data);
	if (value) data->flag |= 4;
	else data->flag &= ~4;
}

int ActionGroup_show_expanded_get(PointerRNA *ptr)
{
	bActionGroup *data = (bActionGroup *)(ptr->data);
	return (((data->flag) & 8) != 0);
}

void ActionGroup_show_expanded_set(PointerRNA *ptr, int value)
{
	bActionGroup *data = (bActionGroup *)(ptr->data);
	if (value) data->flag |= 8;
	else data->flag &= ~8;
}

int ActionGroup_color_set_get(PointerRNA *ptr)
{
	bActionGroup *data = (bActionGroup *)(ptr->data);
	return (int)(data->customCol);
}

void ActionGroup_color_set_set(PointerRNA *ptr, int value)
{
	rna_ActionGroup_colorset_set(ptr, value);
}

int ActionGroup_is_custom_color_set_get(PointerRNA *ptr)
{
	return rna_ActionGroup_is_custom_colorset_get(ptr);
}

PointerRNA ActionGroup_colors_get(PointerRNA *ptr)
{
	bActionGroup *data = (bActionGroup *)(ptr->data);
	return rna_pointer_inherit_refine(ptr, &RNA_ThemeBoneColorSet, &data->cs);
}

static PointerRNA DopeSheet_rna_properties_get(CollectionPropertyIterator *iter)
{
	return rna_builtin_properties_get(iter);
}

void DopeSheet_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

	memset(iter, 0, sizeof(*iter));
	iter->parent = *ptr;
	iter->prop = (PropertyRNA *)&rna_DopeSheet_rna_properties;

	rna_builtin_properties_begin(iter, ptr);

	if (iter->valid)
		iter->ptr = DopeSheet_rna_properties_get(iter);
}

void DopeSheet_rna_properties_next(CollectionPropertyIterator *iter)
{
	rna_builtin_properties_next(iter);

	if (iter->valid)
		iter->ptr = DopeSheet_rna_properties_get(iter);
}

void DopeSheet_rna_properties_end(CollectionPropertyIterator *iter)
{
	rna_iterator_listbase_end(iter);
}

int DopeSheet_rna_properties_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
	return rna_builtin_properties_lookup_string(ptr, key, r_ptr);
}

PointerRNA DopeSheet_rna_type_get(PointerRNA *ptr)
{
	return rna_builtin_type_get(ptr);
}

PointerRNA DopeSheet_source_get(PointerRNA *ptr)
{
	bDopeSheet *data = (bDopeSheet *)(ptr->data);
	return rna_pointer_inherit_refine(ptr, &RNA_ID, data->source);
}

int DopeSheet_show_datablock_filters_get(PointerRNA *ptr)
{
	bDopeSheet *data = (bDopeSheet *)(ptr->data);
	return (((data->flag) & 2) != 0);
}

void DopeSheet_show_datablock_filters_set(PointerRNA *ptr, int value)
{
	bDopeSheet *data = (bDopeSheet *)(ptr->data);
	if (value) data->flag |= 2;
	else data->flag &= ~2;
}

int DopeSheet_show_only_selected_get(PointerRNA *ptr)
{
	bDopeSheet *data = (bDopeSheet *)(ptr->data);
	return (((data->filterflag) & 1) != 0);
}

void DopeSheet_show_only_selected_set(PointerRNA *ptr, int value)
{
	bDopeSheet *data = (bDopeSheet *)(ptr->data);
	if (value) data->filterflag |= 1;
	else data->filterflag &= ~1;
}

int DopeSheet_show_hidden_get(PointerRNA *ptr)
{
	bDopeSheet *data = (bDopeSheet *)(ptr->data);
	return (((data->filterflag) & 67108864) != 0);
}

void DopeSheet_show_hidden_set(PointerRNA *ptr, int value)
{
	bDopeSheet *data = (bDopeSheet *)(ptr->data);
	if (value) data->filterflag |= 67108864;
	else data->filterflag &= ~67108864;
}

int DopeSheet_show_only_errors_get(PointerRNA *ptr)
{
	bDopeSheet *data = (bDopeSheet *)(ptr->data);
	return (((data->filterflag) & 268435456) != 0);
}

void DopeSheet_show_only_errors_set(PointerRNA *ptr, int value)
{
	bDopeSheet *data = (bDopeSheet *)(ptr->data);
	if (value) data->filterflag |= 268435456;
	else data->filterflag &= ~268435456;
}

int DopeSheet_show_only_group_objects_get(PointerRNA *ptr)
{
	bDopeSheet *data = (bDopeSheet *)(ptr->data);
	return (((data->filterflag) & 32) != 0);
}

void DopeSheet_show_only_group_objects_set(PointerRNA *ptr, int value)
{
	bDopeSheet *data = (bDopeSheet *)(ptr->data);
	if (value) data->filterflag |= 32;
	else data->filterflag &= ~32;
}

PointerRNA DopeSheet_filter_group_get(PointerRNA *ptr)
{
	bDopeSheet *data = (bDopeSheet *)(ptr->data);
	return rna_pointer_inherit_refine(ptr, &RNA_Group, data->filter_grp);
}

void DopeSheet_filter_group_set(PointerRNA *ptr, PointerRNA value)
{
	bDopeSheet *data = (bDopeSheet *)(ptr->data);
	if (value.data)
		id_lib_extern((ID *)value.data);

	data->filter_grp = value.data;
}

int DopeSheet_show_only_matching_fcurves_get(PointerRNA *ptr)
{
	bDopeSheet *data = (bDopeSheet *)(ptr->data);
	return (((data->filterflag) & 134217728) != 0);
}

void DopeSheet_show_only_matching_fcurves_set(PointerRNA *ptr, int value)
{
	bDopeSheet *data = (bDopeSheet *)(ptr->data);
	if (value) data->filterflag |= 134217728;
	else data->filterflag &= ~134217728;
}

void DopeSheet_filter_fcurve_name_get(PointerRNA *ptr, char *value)
{
	bDopeSheet *data = (bDopeSheet *)(ptr->data);
	BLI_strncpy_utf8(value, data->searchstr, 64);
}

int DopeSheet_filter_fcurve_name_length(PointerRNA *ptr)
{
	bDopeSheet *data = (bDopeSheet *)(ptr->data);
	return strlen(data->searchstr);
}

void DopeSheet_filter_fcurve_name_set(PointerRNA *ptr, const char *value)
{
	bDopeSheet *data = (bDopeSheet *)(ptr->data);
	BLI_strncpy_utf8(data->searchstr, value, 64);
}

int DopeSheet_show_missing_nla_get(PointerRNA *ptr)
{
	bDopeSheet *data = (bDopeSheet *)(ptr->data);
	return !(((data->filterflag) & 33554432) != 0);
}

void DopeSheet_show_missing_nla_set(PointerRNA *ptr, int value)
{
	bDopeSheet *data = (bDopeSheet *)(ptr->data);
	if (!value) data->filterflag |= 33554432;
	else data->filterflag &= ~33554432;
}

int DopeSheet_show_summary_get(PointerRNA *ptr)
{
	bDopeSheet *data = (bDopeSheet *)(ptr->data);
	return (((data->filterflag) & 16) != 0);
}

void DopeSheet_show_summary_set(PointerRNA *ptr, int value)
{
	bDopeSheet *data = (bDopeSheet *)(ptr->data);
	if (value) data->filterflag |= 16;
	else data->filterflag &= ~16;
}

int DopeSheet_show_expanded_summary_get(PointerRNA *ptr)
{
	bDopeSheet *data = (bDopeSheet *)(ptr->data);
	return !(((data->flag) & 1) != 0);
}

void DopeSheet_show_expanded_summary_set(PointerRNA *ptr, int value)
{
	bDopeSheet *data = (bDopeSheet *)(ptr->data);
	if (!value) data->flag |= 1;
	else data->flag &= ~1;
}

int DopeSheet_show_transforms_get(PointerRNA *ptr)
{
	bDopeSheet *data = (bDopeSheet *)(ptr->data);
	return !(((data->filterflag) & 256) != 0);
}

void DopeSheet_show_transforms_set(PointerRNA *ptr, int value)
{
	bDopeSheet *data = (bDopeSheet *)(ptr->data);
	if (!value) data->filterflag |= 256;
	else data->filterflag &= ~256;
}

int DopeSheet_show_shapekeys_get(PointerRNA *ptr)
{
	bDopeSheet *data = (bDopeSheet *)(ptr->data);
	return !(((data->filterflag) & 64) != 0);
}

void DopeSheet_show_shapekeys_set(PointerRNA *ptr, int value)
{
	bDopeSheet *data = (bDopeSheet *)(ptr->data);
	if (!value) data->filterflag |= 64;
	else data->filterflag &= ~64;
}

int DopeSheet_show_modifiers_get(PointerRNA *ptr)
{
	bDopeSheet *data = (bDopeSheet *)(ptr->data);
	return !(((data->filterflag) & 8388608) != 0);
}

void DopeSheet_show_modifiers_set(PointerRNA *ptr, int value)
{
	bDopeSheet *data = (bDopeSheet *)(ptr->data);
	if (!value) data->filterflag |= 8388608;
	else data->filterflag &= ~8388608;
}

int DopeSheet_show_meshes_get(PointerRNA *ptr)
{
	bDopeSheet *data = (bDopeSheet *)(ptr->data);
	return !(((data->filterflag) & 128) != 0);
}

void DopeSheet_show_meshes_set(PointerRNA *ptr, int value)
{
	bDopeSheet *data = (bDopeSheet *)(ptr->data);
	if (!value) data->filterflag |= 128;
	else data->filterflag &= ~128;
}

int DopeSheet_show_lattices_get(PointerRNA *ptr)
{
	bDopeSheet *data = (bDopeSheet *)(ptr->data);
	return !(((data->filterflag) & 512) != 0);
}

void DopeSheet_show_lattices_set(PointerRNA *ptr, int value)
{
	bDopeSheet *data = (bDopeSheet *)(ptr->data);
	if (!value) data->filterflag |= 512;
	else data->filterflag &= ~512;
}

int DopeSheet_show_cameras_get(PointerRNA *ptr)
{
	bDopeSheet *data = (bDopeSheet *)(ptr->data);
	return !(((data->filterflag) & 1024) != 0);
}

void DopeSheet_show_cameras_set(PointerRNA *ptr, int value)
{
	bDopeSheet *data = (bDopeSheet *)(ptr->data);
	if (!value) data->filterflag |= 1024;
	else data->filterflag &= ~1024;
}

int DopeSheet_show_materials_get(PointerRNA *ptr)
{
	bDopeSheet *data = (bDopeSheet *)(ptr->data);
	return !(((data->filterflag) & 2048) != 0);
}

void DopeSheet_show_materials_set(PointerRNA *ptr, int value)
{
	bDopeSheet *data = (bDopeSheet *)(ptr->data);
	if (!value) data->filterflag |= 2048;
	else data->filterflag &= ~2048;
}

int DopeSheet_show_lamps_get(PointerRNA *ptr)
{
	bDopeSheet *data = (bDopeSheet *)(ptr->data);
	return !(((data->filterflag) & 4096) != 0);
}

void DopeSheet_show_lamps_set(PointerRNA *ptr, int value)
{
	bDopeSheet *data = (bDopeSheet *)(ptr->data);
	if (!value) data->filterflag |= 4096;
	else data->filterflag &= ~4096;
}

int DopeSheet_show_linestyles_get(PointerRNA *ptr)
{
	bDopeSheet *data = (bDopeSheet *)(ptr->data);
	return !(((data->filterflag) & 4194304) != 0);
}

void DopeSheet_show_linestyles_set(PointerRNA *ptr, int value)
{
	bDopeSheet *data = (bDopeSheet *)(ptr->data);
	if (!value) data->filterflag |= 4194304;
	else data->filterflag &= ~4194304;
}

int DopeSheet_show_textures_get(PointerRNA *ptr)
{
	bDopeSheet *data = (bDopeSheet *)(ptr->data);
	return !(((data->filterflag) & 1048576) != 0);
}

void DopeSheet_show_textures_set(PointerRNA *ptr, int value)
{
	bDopeSheet *data = (bDopeSheet *)(ptr->data);
	if (!value) data->filterflag |= 1048576;
	else data->filterflag &= ~1048576;
}

int DopeSheet_show_curves_get(PointerRNA *ptr)
{
	bDopeSheet *data = (bDopeSheet *)(ptr->data);
	return !(((data->filterflag) & 8192) != 0);
}

void DopeSheet_show_curves_set(PointerRNA *ptr, int value)
{
	bDopeSheet *data = (bDopeSheet *)(ptr->data);
	if (!value) data->filterflag |= 8192;
	else data->filterflag &= ~8192;
}

int DopeSheet_show_worlds_get(PointerRNA *ptr)
{
	bDopeSheet *data = (bDopeSheet *)(ptr->data);
	return !(((data->filterflag) & 16384) != 0);
}

void DopeSheet_show_worlds_set(PointerRNA *ptr, int value)
{
	bDopeSheet *data = (bDopeSheet *)(ptr->data);
	if (!value) data->filterflag |= 16384;
	else data->filterflag &= ~16384;
}

int DopeSheet_show_scenes_get(PointerRNA *ptr)
{
	bDopeSheet *data = (bDopeSheet *)(ptr->data);
	return !(((data->filterflag) & 32768) != 0);
}

void DopeSheet_show_scenes_set(PointerRNA *ptr, int value)
{
	bDopeSheet *data = (bDopeSheet *)(ptr->data);
	if (!value) data->filterflag |= 32768;
	else data->filterflag &= ~32768;
}

int DopeSheet_show_particles_get(PointerRNA *ptr)
{
	bDopeSheet *data = (bDopeSheet *)(ptr->data);
	return !(((data->filterflag) & 65536) != 0);
}

void DopeSheet_show_particles_set(PointerRNA *ptr, int value)
{
	bDopeSheet *data = (bDopeSheet *)(ptr->data);
	if (!value) data->filterflag |= 65536;
	else data->filterflag &= ~65536;
}

int DopeSheet_show_metaballs_get(PointerRNA *ptr)
{
	bDopeSheet *data = (bDopeSheet *)(ptr->data);
	return !(((data->filterflag) & 131072) != 0);
}

void DopeSheet_show_metaballs_set(PointerRNA *ptr, int value)
{
	bDopeSheet *data = (bDopeSheet *)(ptr->data);
	if (!value) data->filterflag |= 131072;
	else data->filterflag &= ~131072;
}

int DopeSheet_show_armatures_get(PointerRNA *ptr)
{
	bDopeSheet *data = (bDopeSheet *)(ptr->data);
	return !(((data->filterflag) & 262144) != 0);
}

void DopeSheet_show_armatures_set(PointerRNA *ptr, int value)
{
	bDopeSheet *data = (bDopeSheet *)(ptr->data);
	if (!value) data->filterflag |= 262144;
	else data->filterflag &= ~262144;
}

int DopeSheet_show_nodes_get(PointerRNA *ptr)
{
	bDopeSheet *data = (bDopeSheet *)(ptr->data);
	return !(((data->filterflag) & 524288) != 0);
}

void DopeSheet_show_nodes_set(PointerRNA *ptr, int value)
{
	bDopeSheet *data = (bDopeSheet *)(ptr->data);
	if (!value) data->filterflag |= 524288;
	else data->filterflag &= ~524288;
}

int DopeSheet_show_speakers_get(PointerRNA *ptr)
{
	bDopeSheet *data = (bDopeSheet *)(ptr->data);
	return !(((data->filterflag) & 2097152) != 0);
}

void DopeSheet_show_speakers_set(PointerRNA *ptr, int value)
{
	bDopeSheet *data = (bDopeSheet *)(ptr->data);
	if (!value) data->filterflag |= 2097152;
	else data->filterflag &= ~2097152;
}


struct FCurve *ActionFCurves_new(struct bAction *_self, ReportList *reports, const char * data_path, int index, const char * action_group)
{
	return rna_Action_fcurve_new(_self, reports, data_path, index, action_group);
}

void ActionFCurves_new_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	struct bAction *_self;
	const char * data_path;
	int index;
	const char * action_group;
	struct FCurve *fcurve;
	char *_data, *_retdata;
	
	_self = (struct bAction *)_ptr->data;
	_data = (char *)_parms->data;
	data_path = *((const char * *)_data);
#if defined(SPEC_ILP32)
        _data += 4;
#else	
        _data += 8;
#endif
	index = *((int *)_data);
	_data += 4;
	action_group = *((const char * *)_data);
#if defined(SPEC_ILP32)
        _data += 4;
#else	
        _data += 8;
#endif
	_retdata = _data;
	
	fcurve = rna_Action_fcurve_new(_self, reports, data_path, index, action_group);
	*((struct FCurve **)_retdata) = fcurve;
}

void ActionFCurves_remove(struct bAction *_self, ReportList *reports, struct PointerRNA *fcurve)
{
	rna_Action_fcurve_remove(_self, reports, fcurve);
}

void ActionFCurves_remove_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	struct bAction *_self;
	struct PointerRNA *fcurve;
	char *_data;
	
	_self = (struct bAction *)_ptr->data;
	_data = (char *)_parms->data;
	fcurve = *((struct PointerRNA **)_data);
	
	rna_Action_fcurve_remove(_self, reports, fcurve);
}

/* Repeated prototypes to detect errors */

struct FCurve *rna_Action_fcurve_new(struct bAction *_self, ReportList *reports, const char * data_path, int index, const char * action_group);
void rna_Action_fcurve_remove(struct bAction *_self, ReportList *reports, struct PointerRNA *fcurve);

struct bActionGroup *ActionGroups_new(struct bAction *_self, const char * name)
{
	return rna_Action_groups_new(_self, name);
}

void ActionGroups_new_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	struct bAction *_self;
	const char * name;
	struct bActionGroup *action_group;
	char *_data, *_retdata;
	
	_self = (struct bAction *)_ptr->data;
	_data = (char *)_parms->data;
	name = *((const char * *)_data);
#if defined(SPEC_ILP32)
        _data += 4;
#else
        _data += 8;
#endif
	_retdata = _data;
	
	action_group = rna_Action_groups_new(_self, name);
	*((struct bActionGroup **)_retdata) = action_group;
}

void ActionGroups_remove(struct bAction *_self, ReportList *reports, struct PointerRNA *action_group)
{
	rna_Action_groups_remove(_self, reports, action_group);
}

void ActionGroups_remove_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	struct bAction *_self;
	struct PointerRNA *action_group;
	char *_data;
	
	_self = (struct bAction *)_ptr->data;
	_data = (char *)_parms->data;
	action_group = *((struct PointerRNA **)_data);
	
	rna_Action_groups_remove(_self, reports, action_group);
}

/* Repeated prototypes to detect errors */

struct bActionGroup *rna_Action_groups_new(struct bAction *_self, const char * name);
void rna_Action_groups_remove(struct bAction *_self, ReportList *reports, struct PointerRNA *action_group);

struct TimeMarker *ActionPoseMarkers_new(struct bAction *_self, const char * name)
{
	return rna_Action_pose_markers_new(_self, name);
}

void ActionPoseMarkers_new_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	struct bAction *_self;
	const char * name;
	struct TimeMarker *marker;
	char *_data, *_retdata;
	
	_self = (struct bAction *)_ptr->data;
	_data = (char *)_parms->data;
	name = *((const char * *)_data);
#if defined(SPEC_ILP32)
        _data += 4;
#else
        _data += 8;
#endif
	_retdata = _data;
	
	marker = rna_Action_pose_markers_new(_self, name);
	*((struct TimeMarker **)_retdata) = marker;
}

void ActionPoseMarkers_remove(struct bAction *_self, ReportList *reports, struct PointerRNA *marker)
{
	rna_Action_pose_markers_remove(_self, reports, marker);
}

void ActionPoseMarkers_remove_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	struct bAction *_self;
	struct PointerRNA *marker;
	char *_data;
	
	_self = (struct bAction *)_ptr->data;
	_data = (char *)_parms->data;
	marker = *((struct PointerRNA **)_data);
	
	rna_Action_pose_markers_remove(_self, reports, marker);
}

/* Repeated prototypes to detect errors */

struct TimeMarker *rna_Action_pose_markers_new(struct bAction *_self, const char * name);
void rna_Action_pose_markers_remove(struct bAction *_self, ReportList *reports, struct PointerRNA *marker);



/* Action */
CollectionPropertyRNA rna_Action_fcurves = {
	{(PropertyRNA *)&rna_Action_groups, NULL,
	-1, "fcurves", 0, "F-Curves",
	"The individual F-Curves that make up the action",
	0, "*",
	PROP_COLLECTION, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, &RNA_ActionFCurves},
	Action_fcurves_begin, Action_fcurves_next, Action_fcurves_end, Action_fcurves_get, NULL, Action_fcurves_lookup_int, NULL, NULL, &RNA_FCurve
};

CollectionPropertyRNA rna_Action_groups = {
	{(PropertyRNA *)&rna_Action_pose_markers, (PropertyRNA *)&rna_Action_fcurves,
	-1, "groups", 0, "Groups",
	"Convenient groupings of F-Curves",
	0, "*",
	PROP_COLLECTION, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, &RNA_ActionGroups},
	Action_groups_begin, Action_groups_next, Action_groups_end, Action_groups_get, NULL, Action_groups_lookup_int, Action_groups_lookup_string, NULL, &RNA_ActionGroup
};

CollectionPropertyRNA rna_Action_pose_markers = {
	{(PropertyRNA *)&rna_Action_frame_range, (PropertyRNA *)&rna_Action_groups,
	-1, "pose_markers", 0, "Pose Markers",
	"Markers specific to this action, for labeling poses",
	0, "*",
	PROP_COLLECTION, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, &RNA_ActionPoseMarkers},
	Action_pose_markers_begin, Action_pose_markers_next, Action_pose_markers_end, Action_pose_markers_get, NULL, Action_pose_markers_lookup_int, Action_pose_markers_lookup_string, NULL, &RNA_TimelineMarker
};

static float rna_Action_frame_range_default[2] = {
	0.0f,
	0.0f
};

FloatPropertyRNA rna_Action_frame_range = {
	{(PropertyRNA *)&rna_Action_id_root, (PropertyRNA *)&rna_Action_pose_markers,
	-1, "frame_range", 2, "Frame Range",
	"The final frame range of all F-Curves within this action",
	0, "*",
	PROP_FLOAT, PROP_XYZ | PROP_UNIT_NONE, NULL, 1, {2, 0, 0}, 2,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	NULL, NULL, Action_frame_range_get, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 0.0f, -FLT_MAX, FLT_MAX, 1.0f, 3, 0.0f, rna_Action_frame_range_default
};

static EnumPropertyItem rna_Action_id_root_items[32] = {
	{17217, "ACTION", 115, "Action", ""},
	{21057, "ARMATURE", 172, "Armature", ""},
	{21058, "BRUSH", 182, "Brush", ""},
	{16707, "CAMERA", 168, "Camera", ""},
	{21827, "CURVE", 161, "Curve", ""},
	{18006, "FONT", 186, "Font", ""},
	{17479, "GREASEPENCIL", 197, "Grease Pencil", ""},
	{21063, "GROUP", 171, "Group", ""},
	{19785, "IMAGE", 183, "Image", ""},
	{17739, "KEY", 176, "Key", ""},
	{16716, "LAMP", 164, "Lamp", ""},
	{18764, "LIBRARY", 170, "Library", ""},
	{21324, "LINESTYLE", 198, "Line Style", ""},
	{21580, "LATTICE", 163, "Lattice", ""},
	{21325, "MASK", 467, "Mask", ""},
	{16717, "MATERIAL", 165, "Material", ""},
	{16973, "META", 162, "MetaBall", ""},
	{17741, "MESH", 160, "Mesh", ""},
	{21582, "NODETREE", 119, "NodeTree", ""},
	{16975, "OBJECT", 159, "Object", ""},
	{17232, "PAINTCURVE", 321, "Paint Curve", ""},
	{19536, "PALETTE", 54, "Palette", ""},
	{16720, "PARTICLE", 169, "Particle", ""},
	{17235, "SCENE", 156, "Scene", ""},
	{21075, "SCREEN", 27, "Screen", ""},
	{19283, "SPEAKER", 90, "Speaker", ""},
	{20307, "SOUND", 501, "Sound", ""},
	{22612, "TEXT", 112, "Text", ""},
	{17748, "TEXTURE", 166, "Texture", ""},
	{20311, "WORLD", 158, "World", ""},
	{19799, "WINDOWMANAGER", 26, "Window Manager", ""},
	{0, NULL, 0, NULL, NULL}
};

EnumPropertyRNA rna_Action_id_root = {
	{NULL, (PropertyRNA *)&rna_Action_frame_range,
	-1, "id_root", 3, "ID Root Type",
	"Type of ID block that action can be used on - DO NOT CHANGE UNLESS YOU KNOW WHAT YOU ARE DOING",
	0, "*",
	PROP_ENUM, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	Action_id_root_get, Action_id_root_set, NULL, NULL, NULL, NULL, rna_Action_id_root_items, 31, 17217
};

StructRNA RNA_Action = {
	{(ContainerRNA *)&RNA_ActionFCurves, (ContainerRNA *)&RNA_ColorMapping,
	NULL,
	{(PropertyRNA *)&rna_Action_fcurves, (PropertyRNA *)&rna_Action_id_root}},
	"Action", NULL, NULL, 7, "Action",
	"A collection of F-Curves for animation",
	"*", 115,
	(PropertyRNA *)&rna_ID_name, (PropertyRNA *)&rna_ID_rna_properties,
	&RNA_ID,
	NULL,
	rna_ID_refine,
	NULL,
	NULL,
	NULL,
	NULL,
	rna_ID_idprops,
	{NULL, NULL}
};

/* Action F-Curves */
CollectionPropertyRNA rna_ActionFCurves_rna_properties = {
	{(PropertyRNA *)&rna_ActionFCurves_rna_type, NULL,
	-1, "rna_properties", 128, "Properties",
	"RNA property collection",
	0, "*",
	PROP_COLLECTION, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	ActionFCurves_rna_properties_begin, ActionFCurves_rna_properties_next, ActionFCurves_rna_properties_end, ActionFCurves_rna_properties_get, NULL, NULL, ActionFCurves_rna_properties_lookup_string, NULL, &RNA_Property
};

PointerPropertyRNA rna_ActionFCurves_rna_type = {
	{NULL, (PropertyRNA *)&rna_ActionFCurves_rna_properties,
	-1, "rna_type", 8912896, "RNA",
	"RNA type definition",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	ActionFCurves_rna_type_get, NULL, NULL, NULL,&RNA_Struct
};

StringPropertyRNA rna_ActionFCurves_new_data_path = {
	{(PropertyRNA *)&rna_ActionFCurves_new_index, NULL,
	-1, "data_path", 262149, "Data Path",
	"F-Curve data path to use",
	0, "*",
	PROP_STRING, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	NULL, NULL, NULL, NULL, NULL, NULL, 0, ""
};

IntPropertyRNA rna_ActionFCurves_new_index = {
	{(PropertyRNA *)&rna_ActionFCurves_new_action_group, (PropertyRNA *)&rna_ActionFCurves_new_data_path,
	-1, "index", 3, "Index",
	"Array index",
	0, "*",
	PROP_INT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL,
	0, INT_MAX, 0, INT_MAX, 1, 0, NULL
};

StringPropertyRNA rna_ActionFCurves_new_action_group = {
	{(PropertyRNA *)&rna_ActionFCurves_new_fcurve, (PropertyRNA *)&rna_ActionFCurves_new_index,
	-1, "action_group", 262145, "Action Group",
	"Acton group to add this F-Curve into",
	0, "*",
	PROP_STRING, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	NULL, NULL, NULL, NULL, NULL, NULL, 0, ""
};

PointerPropertyRNA rna_ActionFCurves_new_fcurve = {
	{NULL, (PropertyRNA *)&rna_ActionFCurves_new_action_group,
	-1, "fcurve", 8388616, "",
	"Newly created F-Curve",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	NULL, NULL, NULL, NULL,&RNA_FCurve
};

FunctionRNA rna_ActionFCurves_new_func = {
	{(FunctionRNA *)&rna_ActionFCurves_remove_func, NULL,
	NULL,
	{(PropertyRNA *)&rna_ActionFCurves_new_data_path, (PropertyRNA *)&rna_ActionFCurves_new_fcurve}},
	"new", 16, "Add a keyframe to the F-Curve",
	ActionFCurves_new_call,
	(PropertyRNA *)&rna_ActionFCurves_new_fcurve
};

PointerPropertyRNA rna_ActionFCurves_remove_fcurve = {
	{NULL, NULL,
	-1, "fcurve", 264196, "",
	"F-Curve to remove",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	NULL, NULL, NULL, NULL,&RNA_FCurve
};

FunctionRNA rna_ActionFCurves_remove_func = {
	{NULL, (FunctionRNA *)&rna_ActionFCurves_new_func,
	NULL,
	{(PropertyRNA *)&rna_ActionFCurves_remove_fcurve, (PropertyRNA *)&rna_ActionFCurves_remove_fcurve}},
	"remove", 16, "Remove action group",
	ActionFCurves_remove_call,
	NULL
};

StructRNA RNA_ActionFCurves = {
	{(ContainerRNA *)&RNA_ActionGroups, (ContainerRNA *)&RNA_Action,
	NULL,
	{(PropertyRNA *)&rna_ActionFCurves_rna_properties, (PropertyRNA *)&rna_ActionFCurves_rna_type}},
	"ActionFCurves", NULL, NULL, 4, "Action F-Curves",
	"Collection of action F-Curves",
	"*", 17,
	NULL, (PropertyRNA *)&rna_ActionFCurves_rna_properties,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	{(FunctionRNA *)&rna_ActionFCurves_new_func, (FunctionRNA *)&rna_ActionFCurves_remove_func}
};

/* Action Groups */
CollectionPropertyRNA rna_ActionGroups_rna_properties = {
	{(PropertyRNA *)&rna_ActionGroups_rna_type, NULL,
	-1, "rna_properties", 128, "Properties",
	"RNA property collection",
	0, "*",
	PROP_COLLECTION, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	ActionGroups_rna_properties_begin, ActionGroups_rna_properties_next, ActionGroups_rna_properties_end, ActionGroups_rna_properties_get, NULL, NULL, ActionGroups_rna_properties_lookup_string, NULL, &RNA_Property
};

PointerPropertyRNA rna_ActionGroups_rna_type = {
	{NULL, (PropertyRNA *)&rna_ActionGroups_rna_properties,
	-1, "rna_type", 8912896, "RNA",
	"RNA type definition",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	ActionGroups_rna_type_get, NULL, NULL, NULL,&RNA_Struct
};

StringPropertyRNA rna_ActionGroups_new_name = {
	{(PropertyRNA *)&rna_ActionGroups_new_action_group, NULL,
	-1, "name", 262149, "",
	"New name for the action group",
	0, "*",
	PROP_STRING, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	NULL, NULL, NULL, NULL, NULL, NULL, 0, "Group"
};

PointerPropertyRNA rna_ActionGroups_new_action_group = {
	{NULL, (PropertyRNA *)&rna_ActionGroups_new_name,
	-1, "action_group", 8388616, "",
	"Newly created action group",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	NULL, NULL, NULL, NULL,&RNA_ActionGroup
};

FunctionRNA rna_ActionGroups_new_func = {
	{(FunctionRNA *)&rna_ActionGroups_remove_func, NULL,
	NULL,
	{(PropertyRNA *)&rna_ActionGroups_new_name, (PropertyRNA *)&rna_ActionGroups_new_action_group}},
	"new", 0, "Add a keyframe to the curve",
	ActionGroups_new_call,
	(PropertyRNA *)&rna_ActionGroups_new_action_group
};

PointerPropertyRNA rna_ActionGroups_remove_action_group = {
	{NULL, NULL,
	-1, "action_group", 264196, "",
	"Action group to remove",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	NULL, NULL, NULL, NULL,&RNA_ActionGroup
};

FunctionRNA rna_ActionGroups_remove_func = {
	{NULL, (FunctionRNA *)&rna_ActionGroups_new_func,
	NULL,
	{(PropertyRNA *)&rna_ActionGroups_remove_action_group, (PropertyRNA *)&rna_ActionGroups_remove_action_group}},
	"remove", 16, "Remove action group",
	ActionGroups_remove_call,
	NULL
};

StructRNA RNA_ActionGroups = {
	{(ContainerRNA *)&RNA_ActionPoseMarkers, (ContainerRNA *)&RNA_ActionFCurves,
	NULL,
	{(PropertyRNA *)&rna_ActionGroups_rna_properties, (PropertyRNA *)&rna_ActionGroups_rna_type}},
	"ActionGroups", NULL, NULL, 4, "Action Groups",
	"Collection of action groups",
	"*", 17,
	NULL, (PropertyRNA *)&rna_ActionGroups_rna_properties,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	{(FunctionRNA *)&rna_ActionGroups_new_func, (FunctionRNA *)&rna_ActionGroups_remove_func}
};

/* Action Pose Markers */
CollectionPropertyRNA rna_ActionPoseMarkers_rna_properties = {
	{(PropertyRNA *)&rna_ActionPoseMarkers_rna_type, NULL,
	-1, "rna_properties", 128, "Properties",
	"RNA property collection",
	0, "*",
	PROP_COLLECTION, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	ActionPoseMarkers_rna_properties_begin, ActionPoseMarkers_rna_properties_next, ActionPoseMarkers_rna_properties_end, ActionPoseMarkers_rna_properties_get, NULL, NULL, ActionPoseMarkers_rna_properties_lookup_string, NULL, &RNA_Property
};

PointerPropertyRNA rna_ActionPoseMarkers_rna_type = {
	{(PropertyRNA *)&rna_ActionPoseMarkers_active, (PropertyRNA *)&rna_ActionPoseMarkers_rna_properties,
	-1, "rna_type", 8912896, "RNA",
	"RNA type definition",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	ActionPoseMarkers_rna_type_get, NULL, NULL, NULL,&RNA_Struct
};

PointerPropertyRNA rna_ActionPoseMarkers_active = {
	{(PropertyRNA *)&rna_ActionPoseMarkers_active_index, (PropertyRNA *)&rna_ActionPoseMarkers_rna_type,
	-1, "active", 8388609, "Active Pose Marker",
	"Active pose marker for this action",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	ActionPoseMarkers_active_get, ActionPoseMarkers_active_set, NULL, NULL,&RNA_TimelineMarker
};

IntPropertyRNA rna_ActionPoseMarkers_active_index = {
	{NULL, (PropertyRNA *)&rna_ActionPoseMarkers_active,
	-1, "active_index", 3, "Active Pose Marker Index",
	"Index of active pose marker",
	0, "*",
	PROP_INT, PROP_UNSIGNED | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	ActionPoseMarkers_active_index_get, ActionPoseMarkers_active_index_set, NULL, NULL, rna_Action_active_pose_marker_index_range, NULL, NULL, NULL, NULL, NULL,
	0, 10000, 0, INT_MAX, 1, 0, NULL
};

StringPropertyRNA rna_ActionPoseMarkers_new_name = {
	{(PropertyRNA *)&rna_ActionPoseMarkers_new_marker, NULL,
	-1, "name", 262149, NULL,
	"New name for the marker (not unique)",
	0, "*",
	PROP_STRING, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	NULL, NULL, NULL, NULL, NULL, NULL, 0, "Marker"
};

PointerPropertyRNA rna_ActionPoseMarkers_new_marker = {
	{NULL, (PropertyRNA *)&rna_ActionPoseMarkers_new_name,
	-1, "marker", 8388616, "",
	"Newly created marker",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	NULL, NULL, NULL, NULL,&RNA_TimelineMarker
};

FunctionRNA rna_ActionPoseMarkers_new_func = {
	{(FunctionRNA *)&rna_ActionPoseMarkers_remove_func, NULL,
	NULL,
	{(PropertyRNA *)&rna_ActionPoseMarkers_new_name, (PropertyRNA *)&rna_ActionPoseMarkers_new_marker}},
	"new", 0, "Add a pose marker to the action",
	ActionPoseMarkers_new_call,
	(PropertyRNA *)&rna_ActionPoseMarkers_new_marker
};

PointerPropertyRNA rna_ActionPoseMarkers_remove_marker = {
	{NULL, NULL,
	-1, "marker", 264196, "",
	"Timeline marker to remove",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	NULL, NULL, NULL, NULL,&RNA_TimelineMarker
};

FunctionRNA rna_ActionPoseMarkers_remove_func = {
	{NULL, (FunctionRNA *)&rna_ActionPoseMarkers_new_func,
	NULL,
	{(PropertyRNA *)&rna_ActionPoseMarkers_remove_marker, (PropertyRNA *)&rna_ActionPoseMarkers_remove_marker}},
	"remove", 16, "Remove a timeline marker",
	ActionPoseMarkers_remove_call,
	NULL
};

StructRNA RNA_ActionPoseMarkers = {
	{(ContainerRNA *)&RNA_ActionGroup, (ContainerRNA *)&RNA_ActionGroups,
	NULL,
	{(PropertyRNA *)&rna_ActionPoseMarkers_rna_properties, (PropertyRNA *)&rna_ActionPoseMarkers_active_index}},
	"ActionPoseMarkers", NULL, NULL, 4, "Action Pose Markers",
	"Collection of timeline markers",
	"*", 17,
	NULL, (PropertyRNA *)&rna_ActionPoseMarkers_rna_properties,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	{(FunctionRNA *)&rna_ActionPoseMarkers_new_func, (FunctionRNA *)&rna_ActionPoseMarkers_remove_func}
};

/* Action Group */
CollectionPropertyRNA rna_ActionGroup_rna_properties = {
	{(PropertyRNA *)&rna_ActionGroup_rna_type, NULL,
	-1, "rna_properties", 128, "Properties",
	"RNA property collection",
	0, "*",
	PROP_COLLECTION, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	ActionGroup_rna_properties_begin, ActionGroup_rna_properties_next, ActionGroup_rna_properties_end, ActionGroup_rna_properties_get, NULL, NULL, ActionGroup_rna_properties_lookup_string, NULL, &RNA_Property
};

PointerPropertyRNA rna_ActionGroup_rna_type = {
	{(PropertyRNA *)&rna_ActionGroup_name, (PropertyRNA *)&rna_ActionGroup_rna_properties,
	-1, "rna_type", 8912896, "RNA",
	"RNA type definition",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	ActionGroup_rna_type_get, NULL, NULL, NULL,&RNA_Struct
};

StringPropertyRNA rna_ActionGroup_name = {
	{(PropertyRNA *)&rna_ActionGroup_channels, (PropertyRNA *)&rna_ActionGroup_rna_type,
	-1, "name", 262145, "Name",
	"",
	0, "*",
	PROP_STRING, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {64, 0, 0}, 0,
	NULL, 239599617, NULL, NULL,
	0, -1, NULL},
	ActionGroup_name_get, ActionGroup_name_length, ActionGroup_name_set, NULL, NULL, NULL, 64, ""
};

CollectionPropertyRNA rna_ActionGroup_channels = {
	{(PropertyRNA *)&rna_ActionGroup_select, (PropertyRNA *)&rna_ActionGroup_name,
	-1, "channels", 0, "Channels",
	"F-Curves in this group",
	0, "*",
	PROP_COLLECTION, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	ActionGroup_channels_begin, ActionGroup_channels_next, ActionGroup_channels_end, ActionGroup_channels_get, NULL, NULL, NULL, NULL, &RNA_FCurve
};

BoolPropertyRNA rna_ActionGroup_select = {
	{(PropertyRNA *)&rna_ActionGroup_lock, (PropertyRNA *)&rna_ActionGroup_channels,
	-1, "select", 3, "Select",
	"Action group is selected",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 239599622, NULL, NULL,
	0, -1, NULL},
	ActionGroup_select_get, ActionGroup_select_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_ActionGroup_lock = {
	{(PropertyRNA *)&rna_ActionGroup_show_expanded, (PropertyRNA *)&rna_ActionGroup_select,
	-1, "lock", 3, "Lock",
	"Action group is locked",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 239599617, NULL, NULL,
	0, -1, NULL},
	ActionGroup_lock_get, ActionGroup_lock_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_ActionGroup_show_expanded = {
	{(PropertyRNA *)&rna_ActionGroup_color_set, (PropertyRNA *)&rna_ActionGroup_lock,
	-1, "show_expanded", 3, "Expanded",
	"Action group is expanded",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 239599617, NULL, NULL,
	0, -1, NULL},
	ActionGroup_show_expanded_get, ActionGroup_show_expanded_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

static EnumPropertyItem rna_ActionGroup_color_set_items[23] = {
	{0, "DEFAULT", 0, "Default Colors", ""},
	{1, "THEME01", 0, "01 - Theme Color Set", ""},
	{2, "THEME02", 0, "02 - Theme Color Set", ""},
	{3, "THEME03", 0, "03 - Theme Color Set", ""},
	{4, "THEME04", 0, "04 - Theme Color Set", ""},
	{5, "THEME05", 0, "05 - Theme Color Set", ""},
	{6, "THEME06", 0, "06 - Theme Color Set", ""},
	{7, "THEME07", 0, "07 - Theme Color Set", ""},
	{8, "THEME08", 0, "08 - Theme Color Set", ""},
	{9, "THEME09", 0, "09 - Theme Color Set", ""},
	{10, "THEME10", 0, "10 - Theme Color Set", ""},
	{11, "THEME11", 0, "11 - Theme Color Set", ""},
	{12, "THEME12", 0, "12 - Theme Color Set", ""},
	{13, "THEME13", 0, "13 - Theme Color Set", ""},
	{14, "THEME14", 0, "14 - Theme Color Set", ""},
	{15, "THEME15", 0, "15 - Theme Color Set", ""},
	{16, "THEME16", 0, "16 - Theme Color Set", ""},
	{17, "THEME17", 0, "17 - Theme Color Set", ""},
	{18, "THEME18", 0, "18 - Theme Color Set", ""},
	{19, "THEME19", 0, "19 - Theme Color Set", ""},
	{20, "THEME20", 0, "20 - Theme Color Set", ""},
	{-1, "CUSTOM", 0, "Custom Color Set", ""},
	{0, NULL, 0, NULL, NULL}
};

EnumPropertyRNA rna_ActionGroup_color_set = {
	{(PropertyRNA *)&rna_ActionGroup_is_custom_color_set, (PropertyRNA *)&rna_ActionGroup_show_expanded,
	-1, "color_set", 3, "Color Set",
	"Custom color set to use",
	0, "*",
	PROP_ENUM, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 239599617, NULL, NULL,
	0, -1, NULL},
	ActionGroup_color_set_get, ActionGroup_color_set_set, NULL, NULL, NULL, NULL, rna_ActionGroup_color_set_items, 22, 0
};

BoolPropertyRNA rna_ActionGroup_is_custom_color_set = {
	{(PropertyRNA *)&rna_ActionGroup_colors, (PropertyRNA *)&rna_ActionGroup_color_set,
	-1, "is_custom_color_set", 2, "Custom Color Set",
	"Color set is user-defined instead of a fixed theme color set",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	ActionGroup_is_custom_color_set_get, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

PointerPropertyRNA rna_ActionGroup_colors = {
	{NULL, (PropertyRNA *)&rna_ActionGroup_is_custom_color_set,
	-1, "colors", 8650752, "Colors",
	"Copy of the colors associated with the group\'s color set",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 239599617, NULL, NULL,
	0, -1, NULL},
	ActionGroup_colors_get, NULL, NULL, NULL,&RNA_ThemeBoneColorSet
};

StructRNA RNA_ActionGroup = {
	{(ContainerRNA *)&RNA_DopeSheet, (ContainerRNA *)&RNA_ActionPoseMarkers,
	NULL,
	{(PropertyRNA *)&rna_ActionGroup_rna_properties, (PropertyRNA *)&rna_ActionGroup_colors}},
	"ActionGroup", NULL, NULL, 4, "Action Group",
	"Groups of F-Curves",
	"*", 17,
	(PropertyRNA *)&rna_ActionGroup_name, (PropertyRNA *)&rna_ActionGroup_rna_properties,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	{NULL, NULL}
};

/* Dope Sheet */
CollectionPropertyRNA rna_DopeSheet_rna_properties = {
	{(PropertyRNA *)&rna_DopeSheet_rna_type, NULL,
	-1, "rna_properties", 128, "Properties",
	"RNA property collection",
	0, "*",
	PROP_COLLECTION, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	DopeSheet_rna_properties_begin, DopeSheet_rna_properties_next, DopeSheet_rna_properties_end, DopeSheet_rna_properties_get, NULL, NULL, DopeSheet_rna_properties_lookup_string, NULL, &RNA_Property
};

PointerPropertyRNA rna_DopeSheet_rna_type = {
	{(PropertyRNA *)&rna_DopeSheet_source, (PropertyRNA *)&rna_DopeSheet_rna_properties,
	-1, "rna_type", 8912896, "RNA",
	"RNA type definition",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	DopeSheet_rna_type_get, NULL, NULL, NULL,&RNA_Struct
};

PointerPropertyRNA rna_DopeSheet_source = {
	{(PropertyRNA *)&rna_DopeSheet_show_datablock_filters, (PropertyRNA *)&rna_DopeSheet_rna_type,
	-1, "source", 8388672, "Source",
	"ID-Block representing source data, usually ID_SCE (i.e. Scene)",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	DopeSheet_source_get, NULL, NULL, NULL,&RNA_ID
};

BoolPropertyRNA rna_DopeSheet_show_datablock_filters = {
	{(PropertyRNA *)&rna_DopeSheet_show_only_selected, (PropertyRNA *)&rna_DopeSheet_source,
	-1, "show_datablock_filters", 4099, "Show Datablock Filters",
	"Show options for whether channels related to certain types of data are included",
	11, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 239599616, NULL, NULL,
	0, -1, NULL},
	DopeSheet_show_datablock_filters_get, DopeSheet_show_datablock_filters_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_DopeSheet_show_only_selected = {
	{(PropertyRNA *)&rna_DopeSheet_show_hidden, (PropertyRNA *)&rna_DopeSheet_show_datablock_filters,
	-1, "show_only_selected", 3, "Only Selected",
	"Only include channels relating to selected objects and data",
	255, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 239599617, NULL, NULL,
	0, -1, NULL},
	DopeSheet_show_only_selected_get, DopeSheet_show_only_selected_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_DopeSheet_show_hidden = {
	{(PropertyRNA *)&rna_DopeSheet_show_only_errors, (PropertyRNA *)&rna_DopeSheet_show_only_selected,
	-1, "show_hidden", 3, "Display Hidden",
	"Include channels from objects/bone that are not visible",
	53, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 239599617, NULL, NULL,
	0, -1, NULL},
	DopeSheet_show_hidden_get, DopeSheet_show_hidden_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_DopeSheet_show_only_errors = {
	{(PropertyRNA *)&rna_DopeSheet_show_only_group_objects, (PropertyRNA *)&rna_DopeSheet_show_hidden,
	-1, "show_only_errors", 3, "Show Errors",
	"Only include F-Curves and drivers that are disabled or have errors",
	52, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 239599617, NULL, NULL,
	0, -1, NULL},
	DopeSheet_show_only_errors_get, DopeSheet_show_only_errors_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_DopeSheet_show_only_group_objects = {
	{(PropertyRNA *)&rna_DopeSheet_filter_group, (PropertyRNA *)&rna_DopeSheet_show_only_errors,
	-1, "show_only_group_objects", 3, "Only Objects in Group",
	"Only include channels from objects in the specified group",
	171, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 239599617, NULL, NULL,
	0, -1, NULL},
	DopeSheet_show_only_group_objects_get, DopeSheet_show_only_group_objects_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

PointerPropertyRNA rna_DopeSheet_filter_group = {
	{(PropertyRNA *)&rna_DopeSheet_show_only_matching_fcurves, (PropertyRNA *)&rna_DopeSheet_show_only_group_objects,
	-1, "filter_group", 8388609, "Filtering Group",
	"Group that included object should be a member of",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 239599617, NULL, NULL,
	0, -1, NULL},
	DopeSheet_filter_group_get, DopeSheet_filter_group_set, NULL, NULL,&RNA_Group
};

BoolPropertyRNA rna_DopeSheet_show_only_matching_fcurves = {
	{(PropertyRNA *)&rna_DopeSheet_filter_fcurve_name, (PropertyRNA *)&rna_DopeSheet_filter_group,
	-1, "show_only_matching_fcurves", 3, "Only Matching F-Curves",
	"Only include F-Curves with names containing search text",
	30, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 239599617, NULL, NULL,
	0, -1, NULL},
	DopeSheet_show_only_matching_fcurves_get, DopeSheet_show_only_matching_fcurves_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

StringPropertyRNA rna_DopeSheet_filter_fcurve_name = {
	{(PropertyRNA *)&rna_DopeSheet_show_missing_nla, (PropertyRNA *)&rna_DopeSheet_show_only_matching_fcurves,
	-1, "filter_fcurve_name", 262145, "F-Curve Name Filter",
	"F-Curve live filtering string",
	0, "*",
	PROP_STRING, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {64, 0, 0}, 0,
	NULL, 239599617, NULL, NULL,
	0, -1, NULL},
	DopeSheet_filter_fcurve_name_get, DopeSheet_filter_fcurve_name_length, DopeSheet_filter_fcurve_name_set, NULL, NULL, NULL, 64, ""
};

BoolPropertyRNA rna_DopeSheet_show_missing_nla = {
	{(PropertyRNA *)&rna_DopeSheet_show_summary, (PropertyRNA *)&rna_DopeSheet_filter_fcurve_name,
	-1, "show_missing_nla", 3, "Include Missing NLA",
	"Include animation data blocks with no NLA data (NLA editor only)",
	115, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 239599617, NULL, NULL,
	0, -1, NULL},
	DopeSheet_show_missing_nla_get, DopeSheet_show_missing_nla_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_DopeSheet_show_summary = {
	{(PropertyRNA *)&rna_DopeSheet_show_expanded_summary, (PropertyRNA *)&rna_DopeSheet_show_missing_nla,
	-1, "show_summary", 3, "Display Summary",
	"Display an additional \'summary\' line (Dope Sheet editors only)",
	29, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 239599617, NULL, NULL,
	0, -1, NULL},
	DopeSheet_show_summary_get, DopeSheet_show_summary_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_DopeSheet_show_expanded_summary = {
	{(PropertyRNA *)&rna_DopeSheet_show_transforms, (PropertyRNA *)&rna_DopeSheet_show_summary,
	-1, "show_expanded_summary", 3, "Collapse Summary",
	"Collapse summary when shown, so all other channels get hidden (Dope Sheet editors only)",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 239599617, NULL, NULL,
	0, -1, NULL},
	DopeSheet_show_expanded_summary_get, DopeSheet_show_expanded_summary_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_DopeSheet_show_transforms = {
	{(PropertyRNA *)&rna_DopeSheet_show_shapekeys, (PropertyRNA *)&rna_DopeSheet_show_expanded_summary,
	-1, "show_transforms", 3, "Display Transforms",
	"Include visualization of object-level animation data (mostly transforms)",
	575, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 239599617, NULL, NULL,
	0, -1, NULL},
	DopeSheet_show_transforms_get, DopeSheet_show_transforms_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_DopeSheet_show_shapekeys = {
	{(PropertyRNA *)&rna_DopeSheet_show_modifiers, (PropertyRNA *)&rna_DopeSheet_show_transforms,
	-1, "show_shapekeys", 3, "Display Shapekeys",
	"Include visualization of shape key related animation data",
	176, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 239599617, NULL, NULL,
	0, -1, NULL},
	DopeSheet_show_shapekeys_get, DopeSheet_show_shapekeys_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_DopeSheet_show_modifiers = {
	{(PropertyRNA *)&rna_DopeSheet_show_meshes, (PropertyRNA *)&rna_DopeSheet_show_shapekeys,
	-1, "show_modifiers", 3, "Display Modifier Data",
	"Include visualization of animation data related to datablocks linked to modifiers",
	442, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 239599617, NULL, NULL,
	0, -1, NULL},
	DopeSheet_show_modifiers_get, DopeSheet_show_modifiers_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_DopeSheet_show_meshes = {
	{(PropertyRNA *)&rna_DopeSheet_show_lattices, (PropertyRNA *)&rna_DopeSheet_show_modifiers,
	-1, "show_meshes", 3, "Display Meshes",
	"Include visualization of mesh related animation data",
	160, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 239599617, NULL, NULL,
	0, -1, NULL},
	DopeSheet_show_meshes_get, DopeSheet_show_meshes_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_DopeSheet_show_lattices = {
	{(PropertyRNA *)&rna_DopeSheet_show_cameras, (PropertyRNA *)&rna_DopeSheet_show_meshes,
	-1, "show_lattices", 3, "Display Lattices",
	"Include visualization of lattice related animation data",
	163, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 239599617, NULL, NULL,
	0, -1, NULL},
	DopeSheet_show_lattices_get, DopeSheet_show_lattices_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_DopeSheet_show_cameras = {
	{(PropertyRNA *)&rna_DopeSheet_show_materials, (PropertyRNA *)&rna_DopeSheet_show_lattices,
	-1, "show_cameras", 3, "Display Camera",
	"Include visualization of camera related animation data",
	168, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 239599617, NULL, NULL,
	0, -1, NULL},
	DopeSheet_show_cameras_get, DopeSheet_show_cameras_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_DopeSheet_show_materials = {
	{(PropertyRNA *)&rna_DopeSheet_show_lamps, (PropertyRNA *)&rna_DopeSheet_show_cameras,
	-1, "show_materials", 3, "Display Material",
	"Include visualization of material related animation data",
	165, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 239599617, NULL, NULL,
	0, -1, NULL},
	DopeSheet_show_materials_get, DopeSheet_show_materials_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_DopeSheet_show_lamps = {
	{(PropertyRNA *)&rna_DopeSheet_show_linestyles, (PropertyRNA *)&rna_DopeSheet_show_materials,
	-1, "show_lamps", 3, "Display Lamp",
	"Include visualization of lamp related animation data",
	164, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 239599617, NULL, NULL,
	0, -1, NULL},
	DopeSheet_show_lamps_get, DopeSheet_show_lamps_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_DopeSheet_show_linestyles = {
	{(PropertyRNA *)&rna_DopeSheet_show_textures, (PropertyRNA *)&rna_DopeSheet_show_lamps,
	-1, "show_linestyles", 3, "Display Line Style",
	"Include visualization of Line Style related Animation data",
	198, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 239599617, NULL, NULL,
	0, -1, NULL},
	DopeSheet_show_linestyles_get, DopeSheet_show_linestyles_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_DopeSheet_show_textures = {
	{(PropertyRNA *)&rna_DopeSheet_show_curves, (PropertyRNA *)&rna_DopeSheet_show_linestyles,
	-1, "show_textures", 3, "Display Texture",
	"Include visualization of texture related animation data",
	166, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 239599617, NULL, NULL,
	0, -1, NULL},
	DopeSheet_show_textures_get, DopeSheet_show_textures_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_DopeSheet_show_curves = {
	{(PropertyRNA *)&rna_DopeSheet_show_worlds, (PropertyRNA *)&rna_DopeSheet_show_textures,
	-1, "show_curves", 3, "Display Curve",
	"Include visualization of curve related animation data",
	161, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 239599617, NULL, NULL,
	0, -1, NULL},
	DopeSheet_show_curves_get, DopeSheet_show_curves_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_DopeSheet_show_worlds = {
	{(PropertyRNA *)&rna_DopeSheet_show_scenes, (PropertyRNA *)&rna_DopeSheet_show_curves,
	-1, "show_worlds", 3, "Display World",
	"Include visualization of world related animation data",
	158, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 239599617, NULL, NULL,
	0, -1, NULL},
	DopeSheet_show_worlds_get, DopeSheet_show_worlds_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_DopeSheet_show_scenes = {
	{(PropertyRNA *)&rna_DopeSheet_show_particles, (PropertyRNA *)&rna_DopeSheet_show_worlds,
	-1, "show_scenes", 3, "Display Scene",
	"Include visualization of scene related animation data",
	156, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 239599617, NULL, NULL,
	0, -1, NULL},
	DopeSheet_show_scenes_get, DopeSheet_show_scenes_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_DopeSheet_show_particles = {
	{(PropertyRNA *)&rna_DopeSheet_show_metaballs, (PropertyRNA *)&rna_DopeSheet_show_scenes,
	-1, "show_particles", 3, "Display Particle",
	"Include visualization of particle related animation data",
	169, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 239599617, NULL, NULL,
	0, -1, NULL},
	DopeSheet_show_particles_get, DopeSheet_show_particles_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_DopeSheet_show_metaballs = {
	{(PropertyRNA *)&rna_DopeSheet_show_armatures, (PropertyRNA *)&rna_DopeSheet_show_particles,
	-1, "show_metaballs", 3, "Display Metaball",
	"Include visualization of metaball related animation data",
	162, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 239599617, NULL, NULL,
	0, -1, NULL},
	DopeSheet_show_metaballs_get, DopeSheet_show_metaballs_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_DopeSheet_show_armatures = {
	{(PropertyRNA *)&rna_DopeSheet_show_nodes, (PropertyRNA *)&rna_DopeSheet_show_metaballs,
	-1, "show_armatures", 3, "Display Armature",
	"Include visualization of armature related animation data",
	172, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 239599617, NULL, NULL,
	0, -1, NULL},
	DopeSheet_show_armatures_get, DopeSheet_show_armatures_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_DopeSheet_show_nodes = {
	{(PropertyRNA *)&rna_DopeSheet_show_speakers, (PropertyRNA *)&rna_DopeSheet_show_armatures,
	-1, "show_nodes", 3, "Display Node",
	"Include visualization of node related animation data",
	119, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 239599617, NULL, NULL,
	0, -1, NULL},
	DopeSheet_show_nodes_get, DopeSheet_show_nodes_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_DopeSheet_show_speakers = {
	{NULL, (PropertyRNA *)&rna_DopeSheet_show_nodes,
	-1, "show_speakers", 3, "Display Speaker",
	"Include visualization of speaker related animation data",
	90, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 239599617, NULL, NULL,
	0, -1, NULL},
	DopeSheet_show_speakers_get, DopeSheet_show_speakers_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

StructRNA RNA_DopeSheet = {
	{(ContainerRNA *)&RNA_AnimData, (ContainerRNA *)&RNA_ActionGroup,
	NULL,
	{(PropertyRNA *)&rna_DopeSheet_rna_properties, (PropertyRNA *)&rna_DopeSheet_show_speakers}},
	"DopeSheet", NULL, NULL, 4, "Dope Sheet",
	"Settings for filtering the channels shown in animation editors",
	"*", 17,
	NULL, (PropertyRNA *)&rna_DopeSheet_rna_properties,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	{NULL, NULL}
};

