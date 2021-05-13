
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

#include "rna_animation.c"
#include "rna_animation_api.c"

#pragma GCC diagnostic ignored "-Wunused-parameter"

/* Autogenerated Functions */


CollectionPropertyRNA rna_AnimData_rna_properties;
PointerPropertyRNA rna_AnimData_rna_type;
CollectionPropertyRNA rna_AnimData_nla_tracks;
PointerPropertyRNA rna_AnimData_action;
EnumPropertyRNA rna_AnimData_action_extrapolation;
EnumPropertyRNA rna_AnimData_action_blend_type;
FloatPropertyRNA rna_AnimData_action_influence;
CollectionPropertyRNA rna_AnimData_drivers;
BoolPropertyRNA rna_AnimData_use_nla;


CollectionPropertyRNA rna_NlaTracks_rna_properties;
PointerPropertyRNA rna_NlaTracks_rna_type;
PointerPropertyRNA rna_NlaTracks_active;

extern FunctionRNA rna_NlaTracks_new_func;
extern PointerPropertyRNA rna_NlaTracks_new_prev;
extern PointerPropertyRNA rna_NlaTracks_new_track;

extern FunctionRNA rna_NlaTracks_remove_func;
extern PointerPropertyRNA rna_NlaTracks_remove_track;



CollectionPropertyRNA rna_AnimDataDrivers_rna_properties;
PointerPropertyRNA rna_AnimDataDrivers_rna_type;

extern FunctionRNA rna_AnimDataDrivers_from_existing_func;
extern PointerPropertyRNA rna_AnimDataDrivers_from_existing_src_driver;
extern PointerPropertyRNA rna_AnimDataDrivers_from_existing_driver;



CollectionPropertyRNA rna_KeyingSet_rna_properties;
PointerPropertyRNA rna_KeyingSet_rna_type;
StringPropertyRNA rna_KeyingSet_bl_idname;
StringPropertyRNA rna_KeyingSet_bl_label;
StringPropertyRNA rna_KeyingSet_bl_description;
PointerPropertyRNA rna_KeyingSet_type_info;
CollectionPropertyRNA rna_KeyingSet_paths;
BoolPropertyRNA rna_KeyingSet_is_path_absolute;
EnumPropertyRNA rna_KeyingSet_bl_options;

extern FunctionRNA rna_KeyingSet_refresh_func;


CollectionPropertyRNA rna_KeyingSetPaths_rna_properties;
PointerPropertyRNA rna_KeyingSetPaths_rna_type;
PointerPropertyRNA rna_KeyingSetPaths_active;
IntPropertyRNA rna_KeyingSetPaths_active_index;

extern FunctionRNA rna_KeyingSetPaths_add_func;
extern PointerPropertyRNA rna_KeyingSetPaths_add_ksp;
extern PointerPropertyRNA rna_KeyingSetPaths_add_target_id;
extern StringPropertyRNA rna_KeyingSetPaths_add_data_path;
extern IntPropertyRNA rna_KeyingSetPaths_add_index;
extern EnumPropertyRNA rna_KeyingSetPaths_add_group_method;
extern StringPropertyRNA rna_KeyingSetPaths_add_group_name;

extern FunctionRNA rna_KeyingSetPaths_remove_func;
extern PointerPropertyRNA rna_KeyingSetPaths_remove_path;

extern FunctionRNA rna_KeyingSetPaths_clear_func;


CollectionPropertyRNA rna_KeyingSetPath_rna_properties;
PointerPropertyRNA rna_KeyingSetPath_rna_type;
PointerPropertyRNA rna_KeyingSetPath_id;
EnumPropertyRNA rna_KeyingSetPath_id_type;
StringPropertyRNA rna_KeyingSetPath_group;
EnumPropertyRNA rna_KeyingSetPath_group_method;
StringPropertyRNA rna_KeyingSetPath_data_path;
IntPropertyRNA rna_KeyingSetPath_array_index;
BoolPropertyRNA rna_KeyingSetPath_use_entire_array;
EnumPropertyRNA rna_KeyingSetPath_bl_options;


CollectionPropertyRNA rna_KeyingSetInfo_rna_properties;
PointerPropertyRNA rna_KeyingSetInfo_rna_type;
StringPropertyRNA rna_KeyingSetInfo_bl_idname;
StringPropertyRNA rna_KeyingSetInfo_bl_label;
StringPropertyRNA rna_KeyingSetInfo_bl_description;
EnumPropertyRNA rna_KeyingSetInfo_bl_options;

extern FunctionRNA rna_KeyingSetInfo_poll_func;
extern BoolPropertyRNA rna_KeyingSetInfo_poll_ok;
extern PointerPropertyRNA rna_KeyingSetInfo_poll_context;

extern FunctionRNA rna_KeyingSetInfo_iterator_func;
extern PointerPropertyRNA rna_KeyingSetInfo_iterator_context;
extern PointerPropertyRNA rna_KeyingSetInfo_iterator_ks;

extern FunctionRNA rna_KeyingSetInfo_generate_func;
extern PointerPropertyRNA rna_KeyingSetInfo_generate_context;
extern PointerPropertyRNA rna_KeyingSetInfo_generate_ks;
extern PointerPropertyRNA rna_KeyingSetInfo_generate_data;


static PointerRNA AnimData_rna_properties_get(CollectionPropertyIterator *iter)
{
	return rna_builtin_properties_get(iter);
}

void AnimData_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

	memset(iter, 0, sizeof(*iter));
	iter->parent = *ptr;
	iter->prop = (PropertyRNA *)&rna_AnimData_rna_properties;

	rna_builtin_properties_begin(iter, ptr);

	if (iter->valid)
		iter->ptr = AnimData_rna_properties_get(iter);
}

void AnimData_rna_properties_next(CollectionPropertyIterator *iter)
{
	rna_builtin_properties_next(iter);

	if (iter->valid)
		iter->ptr = AnimData_rna_properties_get(iter);
}

void AnimData_rna_properties_end(CollectionPropertyIterator *iter)
{
	rna_iterator_listbase_end(iter);
}

int AnimData_rna_properties_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
	return rna_builtin_properties_lookup_string(ptr, key, r_ptr);
}

PointerRNA AnimData_rna_type_get(PointerRNA *ptr)
{
	return rna_builtin_type_get(ptr);
}

static PointerRNA AnimData_nla_tracks_get(CollectionPropertyIterator *iter)
{
	return rna_pointer_inherit_refine(&iter->parent, &RNA_NlaTrack, rna_iterator_listbase_get(iter));
}

void AnimData_nla_tracks_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{
	AnimData *data = (AnimData *)(ptr->data);

	memset(iter, 0, sizeof(*iter));
	iter->parent = *ptr;
	iter->prop = (PropertyRNA *)&rna_AnimData_nla_tracks;

	rna_iterator_listbase_begin(iter, &data->nla_tracks, NULL);

	if (iter->valid)
		iter->ptr = AnimData_nla_tracks_get(iter);
}

void AnimData_nla_tracks_next(CollectionPropertyIterator *iter)
{
	rna_iterator_listbase_next(iter);

	if (iter->valid)
		iter->ptr = AnimData_nla_tracks_get(iter);
}

void AnimData_nla_tracks_end(CollectionPropertyIterator *iter)
{
	rna_iterator_listbase_end(iter);
}

int AnimData_nla_tracks_lookup_int(PointerRNA *ptr, int index, PointerRNA *r_ptr)
{
	int found = 0;
	CollectionPropertyIterator iter;

	AnimData_nla_tracks_begin(&iter, ptr);

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
		if (found) *r_ptr = AnimData_nla_tracks_get(&iter);
	}

	AnimData_nla_tracks_end(&iter);

	return found;
}

int AnimData_nla_tracks_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
	extern int NlaTrack_name_length(PointerRNA *);
	extern void NlaTrack_name_get(PointerRNA *, char *);

	bool found = false;
	CollectionPropertyIterator iter;
	char namebuf[1024];
	char *name;

	AnimData_nla_tracks_begin(&iter, ptr);

	while (iter.valid) {
		if (iter.ptr.data) {
			int namelen = NlaTrack_name_length(&iter.ptr);
			if (namelen < 1024) {
				NlaTrack_name_get(&iter.ptr, namebuf);
				if (strcmp(namebuf, key) == 0) {
					found = true;
					*r_ptr = iter.ptr;
					break;
				}
			}
			else {
				name = MEM_mallocN(namelen+1, "name string");
				NlaTrack_name_get(&iter.ptr, name);
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
		AnimData_nla_tracks_next(&iter);
	}
	AnimData_nla_tracks_end(&iter);

	return found;
}

PointerRNA AnimData_action_get(PointerRNA *ptr)
{
	AnimData *data = (AnimData *)(ptr->data);
	return rna_pointer_inherit_refine(ptr, &RNA_Action, data->action);
}

void AnimData_action_set(PointerRNA *ptr, PointerRNA value)
{
	rna_AnimData_action_set(ptr, value);
}

int AnimData_action_extrapolation_get(PointerRNA *ptr)
{
	AnimData *data = (AnimData *)(ptr->data);
	return (int)(data->act_extendmode);
}

void AnimData_action_extrapolation_set(PointerRNA *ptr, int value)
{
	AnimData *data = (AnimData *)(ptr->data);
	data->act_extendmode = value;
}

int AnimData_action_blend_type_get(PointerRNA *ptr)
{
	AnimData *data = (AnimData *)(ptr->data);
	return (int)(data->act_blendmode);
}

void AnimData_action_blend_type_set(PointerRNA *ptr, int value)
{
	AnimData *data = (AnimData *)(ptr->data);
	data->act_blendmode = value;
}

float AnimData_action_influence_get(PointerRNA *ptr)
{
	AnimData *data = (AnimData *)(ptr->data);
	return (float)(data->act_influence);
}

void AnimData_action_influence_set(PointerRNA *ptr, float value)
{
	AnimData *data = (AnimData *)(ptr->data);
	data->act_influence = CLAMPIS(value, 0.0f, 1.0f);
}

static PointerRNA AnimData_drivers_get(CollectionPropertyIterator *iter)
{
	return rna_pointer_inherit_refine(&iter->parent, &RNA_FCurve, rna_iterator_listbase_get(iter));
}

void AnimData_drivers_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{
	AnimData *data = (AnimData *)(ptr->data);

	memset(iter, 0, sizeof(*iter));
	iter->parent = *ptr;
	iter->prop = (PropertyRNA *)&rna_AnimData_drivers;

	rna_iterator_listbase_begin(iter, &data->drivers, NULL);

	if (iter->valid)
		iter->ptr = AnimData_drivers_get(iter);
}

void AnimData_drivers_next(CollectionPropertyIterator *iter)
{
	rna_iterator_listbase_next(iter);

	if (iter->valid)
		iter->ptr = AnimData_drivers_get(iter);
}

void AnimData_drivers_end(CollectionPropertyIterator *iter)
{
	rna_iterator_listbase_end(iter);
}

int AnimData_drivers_lookup_int(PointerRNA *ptr, int index, PointerRNA *r_ptr)
{
	int found = 0;
	CollectionPropertyIterator iter;

	AnimData_drivers_begin(&iter, ptr);

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
		if (found) *r_ptr = AnimData_drivers_get(&iter);
	}

	AnimData_drivers_end(&iter);

	return found;
}

int AnimData_use_nla_get(PointerRNA *ptr)
{
	AnimData *data = (AnimData *)(ptr->data);
	return !(((data->flag) & 2) != 0);
}

void AnimData_use_nla_set(PointerRNA *ptr, int value)
{
	AnimData *data = (AnimData *)(ptr->data);
	if (!value) data->flag |= 2;
	else data->flag &= ~2;
}

static PointerRNA NlaTracks_rna_properties_get(CollectionPropertyIterator *iter)
{
	return rna_builtin_properties_get(iter);
}

void NlaTracks_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

	memset(iter, 0, sizeof(*iter));
	iter->parent = *ptr;
	iter->prop = (PropertyRNA *)&rna_NlaTracks_rna_properties;

	rna_builtin_properties_begin(iter, ptr);

	if (iter->valid)
		iter->ptr = NlaTracks_rna_properties_get(iter);
}

void NlaTracks_rna_properties_next(CollectionPropertyIterator *iter)
{
	rna_builtin_properties_next(iter);

	if (iter->valid)
		iter->ptr = NlaTracks_rna_properties_get(iter);
}

void NlaTracks_rna_properties_end(CollectionPropertyIterator *iter)
{
	rna_iterator_listbase_end(iter);
}

int NlaTracks_rna_properties_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
	return rna_builtin_properties_lookup_string(ptr, key, r_ptr);
}

PointerRNA NlaTracks_rna_type_get(PointerRNA *ptr)
{
	return rna_builtin_type_get(ptr);
}

PointerRNA NlaTracks_active_get(PointerRNA *ptr)
{
	return rna_NlaTrack_active_get(ptr);
}

void NlaTracks_active_set(PointerRNA *ptr, PointerRNA value)
{
	rna_NlaTrack_active_set(ptr, value);
}

static PointerRNA AnimDataDrivers_rna_properties_get(CollectionPropertyIterator *iter)
{
	return rna_builtin_properties_get(iter);
}

void AnimDataDrivers_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

	memset(iter, 0, sizeof(*iter));
	iter->parent = *ptr;
	iter->prop = (PropertyRNA *)&rna_AnimDataDrivers_rna_properties;

	rna_builtin_properties_begin(iter, ptr);

	if (iter->valid)
		iter->ptr = AnimDataDrivers_rna_properties_get(iter);
}

void AnimDataDrivers_rna_properties_next(CollectionPropertyIterator *iter)
{
	rna_builtin_properties_next(iter);

	if (iter->valid)
		iter->ptr = AnimDataDrivers_rna_properties_get(iter);
}

void AnimDataDrivers_rna_properties_end(CollectionPropertyIterator *iter)
{
	rna_iterator_listbase_end(iter);
}

int AnimDataDrivers_rna_properties_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
	return rna_builtin_properties_lookup_string(ptr, key, r_ptr);
}

PointerRNA AnimDataDrivers_rna_type_get(PointerRNA *ptr)
{
	return rna_builtin_type_get(ptr);
}

static PointerRNA KeyingSet_rna_properties_get(CollectionPropertyIterator *iter)
{
	return rna_builtin_properties_get(iter);
}

void KeyingSet_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

	memset(iter, 0, sizeof(*iter));
	iter->parent = *ptr;
	iter->prop = (PropertyRNA *)&rna_KeyingSet_rna_properties;

	rna_builtin_properties_begin(iter, ptr);

	if (iter->valid)
		iter->ptr = KeyingSet_rna_properties_get(iter);
}

void KeyingSet_rna_properties_next(CollectionPropertyIterator *iter)
{
	rna_builtin_properties_next(iter);

	if (iter->valid)
		iter->ptr = KeyingSet_rna_properties_get(iter);
}

void KeyingSet_rna_properties_end(CollectionPropertyIterator *iter)
{
	rna_iterator_listbase_end(iter);
}

int KeyingSet_rna_properties_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
	return rna_builtin_properties_lookup_string(ptr, key, r_ptr);
}

PointerRNA KeyingSet_rna_type_get(PointerRNA *ptr)
{
	return rna_builtin_type_get(ptr);
}

void KeyingSet_bl_idname_get(PointerRNA *ptr, char *value)
{
	KeyingSet *data = (KeyingSet *)(ptr->data);
	BLI_strncpy_utf8(value, data->idname, 64);
}

int KeyingSet_bl_idname_length(PointerRNA *ptr)
{
	KeyingSet *data = (KeyingSet *)(ptr->data);
	return strlen(data->idname);
}

void KeyingSet_bl_idname_set(PointerRNA *ptr, const char *value)
{
	KeyingSet *data = (KeyingSet *)(ptr->data);
	BLI_strncpy_utf8(data->idname, value, 64);
}

void KeyingSet_bl_label_get(PointerRNA *ptr, char *value)
{
	KeyingSet *data = (KeyingSet *)(ptr->data);
	BLI_strncpy_utf8(value, data->name, 64);
}

int KeyingSet_bl_label_length(PointerRNA *ptr)
{
	KeyingSet *data = (KeyingSet *)(ptr->data);
	return strlen(data->name);
}

void KeyingSet_bl_label_set(PointerRNA *ptr, const char *value)
{
	rna_KeyingSet_name_set(ptr, value);
}

void KeyingSet_bl_description_get(PointerRNA *ptr, char *value)
{
	KeyingSet *data = (KeyingSet *)(ptr->data);
	BLI_strncpy_utf8(value, data->description, 240);
}

int KeyingSet_bl_description_length(PointerRNA *ptr)
{
	KeyingSet *data = (KeyingSet *)(ptr->data);
	return strlen(data->description);
}

void KeyingSet_bl_description_set(PointerRNA *ptr, const char *value)
{
	KeyingSet *data = (KeyingSet *)(ptr->data);
	BLI_strncpy_utf8(data->description, value, 240);
}

PointerRNA KeyingSet_type_info_get(PointerRNA *ptr)
{
	return rna_KeyingSet_typeinfo_get(ptr);
}

static PointerRNA KeyingSet_paths_get(CollectionPropertyIterator *iter)
{
	return rna_pointer_inherit_refine(&iter->parent, &RNA_KeyingSetPath, rna_iterator_listbase_get(iter));
}

void KeyingSet_paths_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{
	KeyingSet *data = (KeyingSet *)(ptr->data);

	memset(iter, 0, sizeof(*iter));
	iter->parent = *ptr;
	iter->prop = (PropertyRNA *)&rna_KeyingSet_paths;

	rna_iterator_listbase_begin(iter, &data->paths, NULL);

	if (iter->valid)
		iter->ptr = KeyingSet_paths_get(iter);
}

void KeyingSet_paths_next(CollectionPropertyIterator *iter)
{
	rna_iterator_listbase_next(iter);

	if (iter->valid)
		iter->ptr = KeyingSet_paths_get(iter);
}

void KeyingSet_paths_end(CollectionPropertyIterator *iter)
{
	rna_iterator_listbase_end(iter);
}

int KeyingSet_paths_lookup_int(PointerRNA *ptr, int index, PointerRNA *r_ptr)
{
	int found = 0;
	CollectionPropertyIterator iter;

	KeyingSet_paths_begin(&iter, ptr);

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
		if (found) *r_ptr = KeyingSet_paths_get(&iter);
	}

	KeyingSet_paths_end(&iter);

	return found;
}

int KeyingSet_paths_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
	extern int KeyingSetPath_data_path_length(PointerRNA *);
	extern void KeyingSetPath_data_path_get(PointerRNA *, char *);

	bool found = false;
	CollectionPropertyIterator iter;
	char namebuf[1024];
	char *name;

	KeyingSet_paths_begin(&iter, ptr);

	while (iter.valid) {
		if (iter.ptr.data) {
			int namelen = KeyingSetPath_data_path_length(&iter.ptr);
			if (namelen < 1024) {
				KeyingSetPath_data_path_get(&iter.ptr, namebuf);
				if (strcmp(namebuf, key) == 0) {
					found = true;
					*r_ptr = iter.ptr;
					break;
				}
			}
			else {
				name = MEM_mallocN(namelen+1, "name string");
				KeyingSetPath_data_path_get(&iter.ptr, name);
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
		KeyingSet_paths_next(&iter);
	}
	KeyingSet_paths_end(&iter);

	return found;
}

int KeyingSet_is_path_absolute_get(PointerRNA *ptr)
{
	KeyingSet *data = (KeyingSet *)(ptr->data);
	return (((data->flag) & 2) != 0);
}

int KeyingSet_bl_options_get(PointerRNA *ptr)
{
	KeyingSet *data = (KeyingSet *)(ptr->data);
	return (int)(data->keyingflag);
}

void KeyingSet_bl_options_set(PointerRNA *ptr, int value)
{
	KeyingSet *data = (KeyingSet *)(ptr->data);
	data->keyingflag = value;
}

static PointerRNA KeyingSetPaths_rna_properties_get(CollectionPropertyIterator *iter)
{
	return rna_builtin_properties_get(iter);
}

void KeyingSetPaths_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

	memset(iter, 0, sizeof(*iter));
	iter->parent = *ptr;
	iter->prop = (PropertyRNA *)&rna_KeyingSetPaths_rna_properties;

	rna_builtin_properties_begin(iter, ptr);

	if (iter->valid)
		iter->ptr = KeyingSetPaths_rna_properties_get(iter);
}

void KeyingSetPaths_rna_properties_next(CollectionPropertyIterator *iter)
{
	rna_builtin_properties_next(iter);

	if (iter->valid)
		iter->ptr = KeyingSetPaths_rna_properties_get(iter);
}

void KeyingSetPaths_rna_properties_end(CollectionPropertyIterator *iter)
{
	rna_iterator_listbase_end(iter);
}

int KeyingSetPaths_rna_properties_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
	return rna_builtin_properties_lookup_string(ptr, key, r_ptr);
}

PointerRNA KeyingSetPaths_rna_type_get(PointerRNA *ptr)
{
	return rna_builtin_type_get(ptr);
}

PointerRNA KeyingSetPaths_active_get(PointerRNA *ptr)
{
	return rna_KeyingSet_active_ksPath_get(ptr);
}

void KeyingSetPaths_active_set(PointerRNA *ptr, PointerRNA value)
{
	rna_KeyingSet_active_ksPath_set(ptr, value);
}

int KeyingSetPaths_active_index_get(PointerRNA *ptr)
{
	return rna_KeyingSet_active_ksPath_index_get(ptr);
}

void KeyingSetPaths_active_index_set(PointerRNA *ptr, int value)
{
	rna_KeyingSet_active_ksPath_index_set(ptr, value);
}

static PointerRNA KeyingSetPath_rna_properties_get(CollectionPropertyIterator *iter)
{
	return rna_builtin_properties_get(iter);
}

void KeyingSetPath_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

	memset(iter, 0, sizeof(*iter));
	iter->parent = *ptr;
	iter->prop = (PropertyRNA *)&rna_KeyingSetPath_rna_properties;

	rna_builtin_properties_begin(iter, ptr);

	if (iter->valid)
		iter->ptr = KeyingSetPath_rna_properties_get(iter);
}

void KeyingSetPath_rna_properties_next(CollectionPropertyIterator *iter)
{
	rna_builtin_properties_next(iter);

	if (iter->valid)
		iter->ptr = KeyingSetPath_rna_properties_get(iter);
}

void KeyingSetPath_rna_properties_end(CollectionPropertyIterator *iter)
{
	rna_iterator_listbase_end(iter);
}

int KeyingSetPath_rna_properties_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
	return rna_builtin_properties_lookup_string(ptr, key, r_ptr);
}

PointerRNA KeyingSetPath_rna_type_get(PointerRNA *ptr)
{
	return rna_builtin_type_get(ptr);
}

PointerRNA KeyingSetPath_id_get(PointerRNA *ptr)
{
	KS_Path *data = (KS_Path *)(ptr->data);
	return rna_pointer_inherit_refine(ptr, &RNA_ID, data->id);
}

void KeyingSetPath_id_set(PointerRNA *ptr, PointerRNA value)
{
	KS_Path *data = (KS_Path *)(ptr->data);

	if (data->id)
		id_us_min((ID *)data->id);
	if (value.data)
		id_us_plus((ID *)value.data);

	data->id = value.data;
}

int KeyingSetPath_id_type_get(PointerRNA *ptr)
{
	KS_Path *data = (KS_Path *)(ptr->data);
	return (int)(data->idtype);
}

void KeyingSetPath_id_type_set(PointerRNA *ptr, int value)
{
	rna_ksPath_id_type_set(ptr, value);
}

void KeyingSetPath_group_get(PointerRNA *ptr, char *value)
{
	KS_Path *data = (KS_Path *)(ptr->data);
	BLI_strncpy_utf8(value, data->group, 64);
}

int KeyingSetPath_group_length(PointerRNA *ptr)
{
	KS_Path *data = (KS_Path *)(ptr->data);
	return strlen(data->group);
}

void KeyingSetPath_group_set(PointerRNA *ptr, const char *value)
{
	KS_Path *data = (KS_Path *)(ptr->data);
	BLI_strncpy_utf8(data->group, value, 64);
}

int KeyingSetPath_group_method_get(PointerRNA *ptr)
{
	KS_Path *data = (KS_Path *)(ptr->data);
	return (int)(data->groupmode);
}

void KeyingSetPath_group_method_set(PointerRNA *ptr, int value)
{
	KS_Path *data = (KS_Path *)(ptr->data);
	data->groupmode = value;
}

void KeyingSetPath_data_path_get(PointerRNA *ptr, char *value)
{
	rna_ksPath_RnaPath_get(ptr, value);
}

int KeyingSetPath_data_path_length(PointerRNA *ptr)
{
	return rna_ksPath_RnaPath_length(ptr);
}

void KeyingSetPath_data_path_set(PointerRNA *ptr, const char *value)
{
	rna_ksPath_RnaPath_set(ptr, value);
}

int KeyingSetPath_array_index_get(PointerRNA *ptr)
{
	KS_Path *data = (KS_Path *)(ptr->data);
	return (int)(data->array_index);
}

void KeyingSetPath_array_index_set(PointerRNA *ptr, int value)
{
	KS_Path *data = (KS_Path *)(ptr->data);
	data->array_index = value;
}

int KeyingSetPath_use_entire_array_get(PointerRNA *ptr)
{
	KS_Path *data = (KS_Path *)(ptr->data);
	return (((data->flag) & 1) != 0);
}

void KeyingSetPath_use_entire_array_set(PointerRNA *ptr, int value)
{
	KS_Path *data = (KS_Path *)(ptr->data);
	if (value) data->flag |= 1;
	else data->flag &= ~1;
}

int KeyingSetPath_bl_options_get(PointerRNA *ptr)
{
	KS_Path *data = (KS_Path *)(ptr->data);
	return (int)(data->keyingflag);
}

void KeyingSetPath_bl_options_set(PointerRNA *ptr, int value)
{
	KS_Path *data = (KS_Path *)(ptr->data);
	data->keyingflag = value;
}

static PointerRNA KeyingSetInfo_rna_properties_get(CollectionPropertyIterator *iter)
{
	return rna_builtin_properties_get(iter);
}

void KeyingSetInfo_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

	memset(iter, 0, sizeof(*iter));
	iter->parent = *ptr;
	iter->prop = (PropertyRNA *)&rna_KeyingSetInfo_rna_properties;

	rna_builtin_properties_begin(iter, ptr);

	if (iter->valid)
		iter->ptr = KeyingSetInfo_rna_properties_get(iter);
}

void KeyingSetInfo_rna_properties_next(CollectionPropertyIterator *iter)
{
	rna_builtin_properties_next(iter);

	if (iter->valid)
		iter->ptr = KeyingSetInfo_rna_properties_get(iter);
}

void KeyingSetInfo_rna_properties_end(CollectionPropertyIterator *iter)
{
	rna_iterator_listbase_end(iter);
}

int KeyingSetInfo_rna_properties_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
	return rna_builtin_properties_lookup_string(ptr, key, r_ptr);
}

PointerRNA KeyingSetInfo_rna_type_get(PointerRNA *ptr)
{
	return rna_builtin_type_get(ptr);
}

void KeyingSetInfo_bl_idname_get(PointerRNA *ptr, char *value)
{
	KeyingSetInfo *data = (KeyingSetInfo *)(ptr->data);
	BLI_strncpy_utf8(value, data->idname, sizeof(data->idname));
}

int KeyingSetInfo_bl_idname_length(PointerRNA *ptr)
{
	KeyingSetInfo *data = (KeyingSetInfo *)(ptr->data);
	return strlen(data->idname);
}

void KeyingSetInfo_bl_idname_set(PointerRNA *ptr, const char *value)
{
	KeyingSetInfo *data = (KeyingSetInfo *)(ptr->data);
	BLI_strncpy_utf8(data->idname, value, sizeof(data->idname));
}

void KeyingSetInfo_bl_label_get(PointerRNA *ptr, char *value)
{
	KeyingSetInfo *data = (KeyingSetInfo *)(ptr->data);
	BLI_strncpy_utf8(value, data->name, sizeof(data->name));
}

int KeyingSetInfo_bl_label_length(PointerRNA *ptr)
{
	KeyingSetInfo *data = (KeyingSetInfo *)(ptr->data);
	return strlen(data->name);
}

void KeyingSetInfo_bl_label_set(PointerRNA *ptr, const char *value)
{
	KeyingSetInfo *data = (KeyingSetInfo *)(ptr->data);
	BLI_strncpy_utf8(data->name, value, sizeof(data->name));
}

void KeyingSetInfo_bl_description_get(PointerRNA *ptr, char *value)
{
	KeyingSetInfo *data = (KeyingSetInfo *)(ptr->data);
	BLI_strncpy_utf8(value, data->description, 240);
}

int KeyingSetInfo_bl_description_length(PointerRNA *ptr)
{
	KeyingSetInfo *data = (KeyingSetInfo *)(ptr->data);
	return strlen(data->description);
}

void KeyingSetInfo_bl_description_set(PointerRNA *ptr, const char *value)
{
	KeyingSetInfo *data = (KeyingSetInfo *)(ptr->data);
	BLI_strncpy_utf8(data->description, value, 240);
}

int KeyingSetInfo_bl_options_get(PointerRNA *ptr)
{
	KeyingSetInfo *data = (KeyingSetInfo *)(ptr->data);
	return (int)(data->keyingflag);
}

void KeyingSetInfo_bl_options_set(PointerRNA *ptr, int value)
{
	KeyingSetInfo *data = (KeyingSetInfo *)(ptr->data);
	data->keyingflag = value;
}


struct NlaTrack *NlaTracks_new(struct AnimData *_self, bContext *C, struct NlaTrack *prev)
{
	return rna_NlaTrack_new(_self, C, prev);
}

void NlaTracks_new_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	struct AnimData *_self;
	struct NlaTrack *prev;
	struct NlaTrack *track;
	char *_data, *_retdata;
	
	_self = (struct AnimData *)_ptr->data;
	_data = (char *)_parms->data;
	prev = *((struct NlaTrack **)_data);
#if defined(SPEC_ILP32)
        _data += 4;
#else
	_data += 8;
#endif
	_retdata = _data;
	
	track = rna_NlaTrack_new(_self, C, prev);
	*((struct NlaTrack **)_retdata) = track;
}

void NlaTracks_remove(struct AnimData *_self, bContext *C, ReportList *reports, struct PointerRNA *track)
{
	rna_NlaTrack_remove(_self, C, reports, track);
}

void NlaTracks_remove_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	struct AnimData *_self;
	struct PointerRNA *track;
	char *_data;
	
	_self = (struct AnimData *)_ptr->data;
	_data = (char *)_parms->data;
	track = *((struct PointerRNA **)_data);
	
	rna_NlaTrack_remove(_self, C, reports, track);
}

/* Repeated prototypes to detect errors */

struct NlaTrack *rna_NlaTrack_new(struct AnimData *_self, bContext *C, struct NlaTrack *prev);
void rna_NlaTrack_remove(struct AnimData *_self, bContext *C, ReportList *reports, struct PointerRNA *track);

struct FCurve *AnimDataDrivers_from_existing(struct AnimData *_self, bContext *C, struct FCurve *src_driver)
{
	return rna_Driver_from_existing(_self, C, src_driver);
}

void AnimDataDrivers_from_existing_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	struct AnimData *_self;
	struct FCurve *src_driver;
	struct FCurve *driver;
	char *_data, *_retdata;
	
	_self = (struct AnimData *)_ptr->data;
	_data = (char *)_parms->data;
	src_driver = *((struct FCurve **)_data);
#if defined(SPEC_ILP32)
        _data += 4;
#else
        _data += 8;
#endif
	_retdata = _data;
	
	driver = rna_Driver_from_existing(_self, C, src_driver);
	*((struct FCurve **)_retdata) = driver;
}

/* Repeated prototypes to detect errors */

struct FCurve *rna_Driver_from_existing(struct AnimData *_self, bContext *C, struct FCurve *src_driver);

void KeyingSet_refresh(struct KeyingSet *_self, bContext *C, ReportList *reports)
{
	rna_KeyingSet_context_refresh(_self, C, reports);
}

void KeyingSet_refresh_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	struct KeyingSet *_self;
	_self = (struct KeyingSet *)_ptr->data;
	
	rna_KeyingSet_context_refresh(_self, C, reports);
}

/* Repeated prototypes to detect errors */

void rna_KeyingSet_context_refresh(struct KeyingSet *_self, bContext *C, ReportList *reports);

struct KS_Path *KeyingSetPaths_add(struct KeyingSet *_self, ReportList *reports, struct ID *target_id, const char * data_path, int index, int group_method, const char * group_name)
{
	return rna_KeyingSet_paths_add(_self, reports, target_id, data_path, index, group_method, group_name);
}

void KeyingSetPaths_add_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	struct KeyingSet *_self;
	struct KS_Path *ksp;
	struct ID *target_id;
	const char * data_path;
	int index;
	int group_method;
	const char * group_name;
	char *_data, *_retdata;
	
	_self = (struct KeyingSet *)_ptr->data;
	_data = (char *)_parms->data;
	_retdata = _data;
#if defined(SPEC_ILP32)
        _data += 4;
#else
        _data += 8;
#endif
	target_id = *((struct ID **)_data);
#if defined(SPEC_ILP32)
        _data += 4;
#else
        _data += 8;
#endif
	data_path = *((const char * *)_data);
#if defined(SPEC_ILP32)
        _data += 4;
#else
        _data += 8;
#endif
	index = *((int *)_data);
	_data += 4;
	group_method = *((int *)_data);
	_data += 4;
	group_name = *((const char * *)_data);
	
	ksp = rna_KeyingSet_paths_add(_self, reports, target_id, data_path, index, group_method, group_name);
	*((struct KS_Path **)_retdata) = ksp;
}

void KeyingSetPaths_remove(struct KeyingSet *_self, ReportList *reports, struct PointerRNA *path)
{
	rna_KeyingSet_paths_remove(_self, reports, path);
}

void KeyingSetPaths_remove_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	struct KeyingSet *_self;
	struct PointerRNA *path;
	char *_data;
	
	_self = (struct KeyingSet *)_ptr->data;
	_data = (char *)_parms->data;
	path = *((struct PointerRNA **)_data);
	
	rna_KeyingSet_paths_remove(_self, reports, path);
}

void KeyingSetPaths_clear(struct KeyingSet *_self, ReportList *reports)
{
	rna_KeyingSet_paths_clear(_self, reports);
}

void KeyingSetPaths_clear_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	struct KeyingSet *_self;
	_self = (struct KeyingSet *)_ptr->data;
	
	rna_KeyingSet_paths_clear(_self, reports);
}

/* Repeated prototypes to detect errors */

struct KS_Path *rna_KeyingSet_paths_add(struct KeyingSet *_self, ReportList *reports, struct ID *target_id, const char * data_path, int index, int group_method, const char * group_name);
void rna_KeyingSet_paths_remove(struct KeyingSet *_self, ReportList *reports, struct PointerRNA *path);
void rna_KeyingSet_paths_clear(struct KeyingSet *_self, ReportList *reports);



/* Animation Data */
CollectionPropertyRNA rna_AnimData_rna_properties = {
	{(PropertyRNA *)&rna_AnimData_rna_type, NULL,
	-1, "rna_properties", 128, "Properties",
	"RNA property collection",
	0, "*",
	PROP_COLLECTION, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	AnimData_rna_properties_begin, AnimData_rna_properties_next, AnimData_rna_properties_end, AnimData_rna_properties_get, NULL, NULL, AnimData_rna_properties_lookup_string, NULL, &RNA_Property
};

PointerPropertyRNA rna_AnimData_rna_type = {
	{(PropertyRNA *)&rna_AnimData_nla_tracks, (PropertyRNA *)&rna_AnimData_rna_properties,
	-1, "rna_type", 8912896, "RNA",
	"RNA type definition",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	AnimData_rna_type_get, NULL, NULL, NULL,&RNA_Struct
};

CollectionPropertyRNA rna_AnimData_nla_tracks = {
	{(PropertyRNA *)&rna_AnimData_action, (PropertyRNA *)&rna_AnimData_rna_type,
	-1, "nla_tracks", 0, "NLA Tracks",
	"NLA Tracks (i.e. Animation Layers)",
	0, "*",
	PROP_COLLECTION, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, &RNA_NlaTracks},
	AnimData_nla_tracks_begin, AnimData_nla_tracks_next, AnimData_nla_tracks_end, AnimData_nla_tracks_get, NULL, AnimData_nla_tracks_lookup_int, AnimData_nla_tracks_lookup_string, NULL, &RNA_NlaTrack
};

PointerPropertyRNA rna_AnimData_action = {
	{(PropertyRNA *)&rna_AnimData_action_extrapolation, (PropertyRNA *)&rna_AnimData_nla_tracks,
	-1, "action", 8388673, "Action",
	"Active Action for this datablock",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_AnimData_update, 239730688, rna_AnimData_action_editable, NULL,
	0, -1, NULL},
	AnimData_action_get, AnimData_action_set, NULL, rna_Action_id_poll,&RNA_Action
};

static EnumPropertyItem rna_AnimData_action_extrapolation_items[4] = {
	{2, "NOTHING", 0, "Nothing", "Strip has no influence past its extents"},
	{0, "HOLD", 0, "Hold", "Hold the first frame if no previous strips in track, and always hold last frame"},
	{1, "HOLD_FORWARD", 0, "Hold Forward", "Only hold last frame"},
	{0, NULL, 0, NULL, NULL}
};

EnumPropertyRNA rna_AnimData_action_extrapolation = {
	{(PropertyRNA *)&rna_AnimData_action_blend_type, (PropertyRNA *)&rna_AnimData_action,
	-1, "action_extrapolation", 3, "Action Extrapolation",
	"Action to take for gaps past the Active Action\'s range (when evaluating with NLA)",
	0, "*",
	PROP_ENUM, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 239665152, NULL, NULL,
	0, -1, NULL},
	AnimData_action_extrapolation_get, AnimData_action_extrapolation_set, NULL, NULL, NULL, NULL, rna_AnimData_action_extrapolation_items, 3, 0
};

static EnumPropertyItem rna_AnimData_action_blend_type_items[5] = {
	{0, "REPLACE", 0, "Replace", "Result strip replaces the accumulated results by amount specified by influence"},
	{1, "ADD", 0, "Add", "Weighted result of strip is added to the accumulated results"},
	{2, "SUBTRACT", 0, "Subtract", "Weighted result of strip is removed from the accumulated results"},
	{3, "MULTIPLY", 0, "Multiply", "Weighted result of strip is multiplied with the accumulated results"},
	{0, NULL, 0, NULL, NULL}
};

EnumPropertyRNA rna_AnimData_action_blend_type = {
	{(PropertyRNA *)&rna_AnimData_action_influence, (PropertyRNA *)&rna_AnimData_action_extrapolation,
	-1, "action_blend_type", 3, "Action Blending",
	"Method used for combining Active Action\'s result with result of NLA stack",
	0, "*",
	PROP_ENUM, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 239665152, NULL, NULL,
	0, -1, NULL},
	AnimData_action_blend_type_get, AnimData_action_blend_type_set, NULL, NULL, NULL, NULL, rna_AnimData_action_blend_type_items, 4, 0
};

FloatPropertyRNA rna_AnimData_action_influence = {
	{(PropertyRNA *)&rna_AnimData_drivers, (PropertyRNA *)&rna_AnimData_action_blend_type,
	-1, "action_influence", 8195, "Action Influence",
	"Amount the Active Action contributes to the result of the NLA stack",
	0, "*",
	PROP_FLOAT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 239665152, NULL, NULL,
	offsetof(AnimData, act_influence), 4, NULL},
	AnimData_action_influence_get, AnimData_action_influence_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 1.0f, 0.0f, 1.0f, 10.0f, 3, 1.0f, NULL
};

CollectionPropertyRNA rna_AnimData_drivers = {
	{(PropertyRNA *)&rna_AnimData_use_nla, (PropertyRNA *)&rna_AnimData_action_influence,
	-1, "drivers", 0, "Drivers",
	"The Drivers/Expressions for this datablock",
	0, "*",
	PROP_COLLECTION, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, &RNA_AnimDataDrivers},
	AnimData_drivers_begin, AnimData_drivers_next, AnimData_drivers_end, AnimData_drivers_get, NULL, AnimData_drivers_lookup_int, NULL, NULL, &RNA_FCurve
};

BoolPropertyRNA rna_AnimData_use_nla = {
	{NULL, (PropertyRNA *)&rna_AnimData_drivers,
	-1, "use_nla", 3, "NLA Evaluation Enabled",
	"NLA stack is evaluated when evaluating this block",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 239665152, NULL, NULL,
	0, -1, NULL},
	AnimData_use_nla_get, AnimData_use_nla_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

StructRNA RNA_AnimData = {
	{(ContainerRNA *)&RNA_NlaTracks, (ContainerRNA *)&RNA_DopeSheet,
	NULL,
	{(PropertyRNA *)&rna_AnimData_rna_properties, (PropertyRNA *)&rna_AnimData_use_nla}},
	"AnimData", NULL, NULL, 4, "Animation Data",
	"Animation data for datablock",
	"*", 167,
	NULL, (PropertyRNA *)&rna_AnimData_rna_properties,
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

/* NLA Tracks */
CollectionPropertyRNA rna_NlaTracks_rna_properties = {
	{(PropertyRNA *)&rna_NlaTracks_rna_type, NULL,
	-1, "rna_properties", 128, "Properties",
	"RNA property collection",
	0, "*",
	PROP_COLLECTION, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	NlaTracks_rna_properties_begin, NlaTracks_rna_properties_next, NlaTracks_rna_properties_end, NlaTracks_rna_properties_get, NULL, NULL, NlaTracks_rna_properties_lookup_string, NULL, &RNA_Property
};

PointerPropertyRNA rna_NlaTracks_rna_type = {
	{(PropertyRNA *)&rna_NlaTracks_active, (PropertyRNA *)&rna_NlaTracks_rna_properties,
	-1, "rna_type", 8912896, "RNA",
	"RNA type definition",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	NlaTracks_rna_type_get, NULL, NULL, NULL,&RNA_Struct
};

PointerPropertyRNA rna_NlaTracks_active = {
	{NULL, (PropertyRNA *)&rna_NlaTracks_rna_type,
	-1, "active", 8388609, "Active Constraint",
	"Active Object constraint",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 239665158, NULL, NULL,
	0, -1, NULL},
	NlaTracks_active_get, NlaTracks_active_set, NULL, NULL,&RNA_NlaTrack
};

PointerPropertyRNA rna_NlaTracks_new_prev = {
	{(PropertyRNA *)&rna_NlaTracks_new_track, NULL,
	-1, "prev", 8388608, "",
	"NLA Track to add the new one after",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	NULL, NULL, NULL, NULL,&RNA_NlaTrack
};

PointerPropertyRNA rna_NlaTracks_new_track = {
	{NULL, (PropertyRNA *)&rna_NlaTracks_new_prev,
	-1, "track", 8388616, "",
	"New NLA Track",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	NULL, NULL, NULL, NULL,&RNA_NlaTrack
};

FunctionRNA rna_NlaTracks_new_func = {
	{(FunctionRNA *)&rna_NlaTracks_remove_func, NULL,
	NULL,
	{(PropertyRNA *)&rna_NlaTracks_new_prev, (PropertyRNA *)&rna_NlaTracks_new_track}},
	"new", 8, "Add a new NLA Track",
	NlaTracks_new_call,
	(PropertyRNA *)&rna_NlaTracks_new_track
};

PointerPropertyRNA rna_NlaTracks_remove_track = {
	{NULL, NULL,
	-1, "track", 264196, "",
	"NLA Track to remove",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	NULL, NULL, NULL, NULL,&RNA_NlaTrack
};

FunctionRNA rna_NlaTracks_remove_func = {
	{NULL, (FunctionRNA *)&rna_NlaTracks_new_func,
	NULL,
	{(PropertyRNA *)&rna_NlaTracks_remove_track, (PropertyRNA *)&rna_NlaTracks_remove_track}},
	"remove", 24, "Remove a NLA Track",
	NlaTracks_remove_call,
	NULL
};

StructRNA RNA_NlaTracks = {
	{(ContainerRNA *)&RNA_AnimDataDrivers, (ContainerRNA *)&RNA_AnimData,
	NULL,
	{(PropertyRNA *)&rna_NlaTracks_rna_properties, (PropertyRNA *)&rna_NlaTracks_active}},
	"NlaTracks", NULL, NULL, 4, "NLA Tracks",
	"Collection of NLA Tracks",
	"*", 17,
	NULL, (PropertyRNA *)&rna_NlaTracks_rna_properties,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	{(FunctionRNA *)&rna_NlaTracks_new_func, (FunctionRNA *)&rna_NlaTracks_remove_func}
};

/* Drivers */
CollectionPropertyRNA rna_AnimDataDrivers_rna_properties = {
	{(PropertyRNA *)&rna_AnimDataDrivers_rna_type, NULL,
	-1, "rna_properties", 128, "Properties",
	"RNA property collection",
	0, "*",
	PROP_COLLECTION, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	AnimDataDrivers_rna_properties_begin, AnimDataDrivers_rna_properties_next, AnimDataDrivers_rna_properties_end, AnimDataDrivers_rna_properties_get, NULL, NULL, AnimDataDrivers_rna_properties_lookup_string, NULL, &RNA_Property
};

PointerPropertyRNA rna_AnimDataDrivers_rna_type = {
	{NULL, (PropertyRNA *)&rna_AnimDataDrivers_rna_properties,
	-1, "rna_type", 8912896, "RNA",
	"RNA type definition",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	AnimDataDrivers_rna_type_get, NULL, NULL, NULL,&RNA_Struct
};

PointerPropertyRNA rna_AnimDataDrivers_from_existing_src_driver = {
	{(PropertyRNA *)&rna_AnimDataDrivers_from_existing_driver, NULL,
	-1, "src_driver", 8388608, "",
	"Existing Driver F-Curve to use as template for a new one",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	NULL, NULL, NULL, NULL,&RNA_FCurve
};

PointerPropertyRNA rna_AnimDataDrivers_from_existing_driver = {
	{NULL, (PropertyRNA *)&rna_AnimDataDrivers_from_existing_src_driver,
	-1, "driver", 8388616, "",
	"New Driver F-Curve",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	NULL, NULL, NULL, NULL,&RNA_FCurve
};

FunctionRNA rna_AnimDataDrivers_from_existing_func = {
	{NULL, NULL,
	NULL,
	{(PropertyRNA *)&rna_AnimDataDrivers_from_existing_src_driver, (PropertyRNA *)&rna_AnimDataDrivers_from_existing_driver}},
	"from_existing", 8, "Add a new driver given an existing one",
	AnimDataDrivers_from_existing_call,
	(PropertyRNA *)&rna_AnimDataDrivers_from_existing_driver
};

StructRNA RNA_AnimDataDrivers = {
	{(ContainerRNA *)&RNA_KeyingSet, (ContainerRNA *)&RNA_NlaTracks,
	NULL,
	{(PropertyRNA *)&rna_AnimDataDrivers_rna_properties, (PropertyRNA *)&rna_AnimDataDrivers_rna_type}},
	"AnimDataDrivers", NULL, NULL, 4, "Drivers",
	"Collection of Driver F-Curves",
	"*", 17,
	NULL, (PropertyRNA *)&rna_AnimDataDrivers_rna_properties,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	{(FunctionRNA *)&rna_AnimDataDrivers_from_existing_func, (FunctionRNA *)&rna_AnimDataDrivers_from_existing_func}
};

/* Keying Set */
CollectionPropertyRNA rna_KeyingSet_rna_properties = {
	{(PropertyRNA *)&rna_KeyingSet_rna_type, NULL,
	-1, "rna_properties", 128, "Properties",
	"RNA property collection",
	0, "*",
	PROP_COLLECTION, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	KeyingSet_rna_properties_begin, KeyingSet_rna_properties_next, KeyingSet_rna_properties_end, KeyingSet_rna_properties_get, NULL, NULL, KeyingSet_rna_properties_lookup_string, NULL, &RNA_Property
};

PointerPropertyRNA rna_KeyingSet_rna_type = {
	{(PropertyRNA *)&rna_KeyingSet_bl_idname, (PropertyRNA *)&rna_KeyingSet_rna_properties,
	-1, "rna_type", 8912896, "RNA",
	"RNA type definition",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	KeyingSet_rna_type_get, NULL, NULL, NULL,&RNA_Struct
};

StringPropertyRNA rna_KeyingSet_bl_idname = {
	{(PropertyRNA *)&rna_KeyingSet_bl_label, (PropertyRNA *)&rna_KeyingSet_rna_type,
	-1, "bl_idname", 262161, "ID Name",
	"If this is set, the Keying Set gets a custom ID, otherwise it takes the name of the class used to define the Keying Set (for example, if the class name is \"BUILTIN_KSI_location\", and bl_idname is not set by the script, then bl_idname = \"BUILTIN_KSI_location\")",
	0, "*",
	PROP_STRING, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {64, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	KeyingSet_bl_idname_get, KeyingSet_bl_idname_length, KeyingSet_bl_idname_set, NULL, NULL, NULL, 64, ""
};

StringPropertyRNA rna_KeyingSet_bl_label = {
	{(PropertyRNA *)&rna_KeyingSet_bl_description, (PropertyRNA *)&rna_KeyingSet_bl_idname,
	-1, "bl_label", 262145, "UI Name",
	"",
	0, "*",
	PROP_STRING, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {64, 0, 0}, 0,
	NULL, 68026373, NULL, NULL,
	0, -1, NULL},
	KeyingSet_bl_label_get, KeyingSet_bl_label_length, KeyingSet_bl_label_set, NULL, NULL, NULL, 64, ""
};

StringPropertyRNA rna_KeyingSet_bl_description = {
	{(PropertyRNA *)&rna_KeyingSet_type_info, (PropertyRNA *)&rna_KeyingSet_bl_label,
	-1, "bl_description", 262193, "Description",
	"A short description of the keying set",
	0, "*",
	PROP_STRING, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {240, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	KeyingSet_bl_description_get, KeyingSet_bl_description_length, KeyingSet_bl_description_set, NULL, NULL, NULL, 240, ""
};

PointerPropertyRNA rna_KeyingSet_type_info = {
	{(PropertyRNA *)&rna_KeyingSet_paths, (PropertyRNA *)&rna_KeyingSet_bl_description,
	-1, "type_info", 8388608, "Type Info",
	"Callback function defines for built-in Keying Sets",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	KeyingSet_type_info_get, NULL, NULL, NULL,&RNA_KeyingSetInfo
};

CollectionPropertyRNA rna_KeyingSet_paths = {
	{(PropertyRNA *)&rna_KeyingSet_is_path_absolute, (PropertyRNA *)&rna_KeyingSet_type_info,
	-1, "paths", 0, "Paths",
	"Keying Set Paths to define settings that get keyframed together",
	0, "*",
	PROP_COLLECTION, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, &RNA_KeyingSetPaths},
	KeyingSet_paths_begin, KeyingSet_paths_next, KeyingSet_paths_end, KeyingSet_paths_get, NULL, KeyingSet_paths_lookup_int, KeyingSet_paths_lookup_string, NULL, &RNA_KeyingSetPath
};

BoolPropertyRNA rna_KeyingSet_is_path_absolute = {
	{(PropertyRNA *)&rna_KeyingSet_bl_options, (PropertyRNA *)&rna_KeyingSet_paths,
	-1, "is_path_absolute", 2, "Absolute",
	"Keying Set defines specific paths/settings to be keyframed (i.e. is not reliant on context info)",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	KeyingSet_is_path_absolute_get, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

static EnumPropertyItem rna_KeyingSet_bl_options_items[4] = {
	{1, "INSERTKEY_NEEDED", 0, "Only Needed", "Only insert keyframes where they\'re needed in the relevant F-Curves"},
	{2, "INSERTKEY_VISUAL", 0, "Visual Keying", "Insert keyframes based on \'visual transforms\'"},
	{32, "INSERTKEY_XYZ_TO_RGB", 0, "XYZ=RGB Colors", "Color for newly added transformation F-Curves (Location, Rotation, Scale) and also Color is based on the transform axis"},
	{0, NULL, 0, NULL, NULL}
};

EnumPropertyRNA rna_KeyingSet_bl_options = {
	{NULL, (PropertyRNA *)&rna_KeyingSet_is_path_absolute,
	-1, "bl_options", 2097203, "Options",
	"Keying set options",
	0, "*",
	PROP_ENUM, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	KeyingSet_bl_options_get, KeyingSet_bl_options_set, NULL, NULL, NULL, NULL, rna_KeyingSet_bl_options_items, 3, 1
};

FunctionRNA rna_KeyingSet_refresh_func = {
	{NULL, NULL,
	NULL,
	{NULL, NULL}},
	"refresh", 24, "Refresh Keying Set to ensure that it is valid for the current context (call before each use of one)",
	KeyingSet_refresh_call,
	NULL
};

StructRNA RNA_KeyingSet = {
	{(ContainerRNA *)&RNA_KeyingSetPaths, (ContainerRNA *)&RNA_AnimDataDrivers,
	NULL,
	{(PropertyRNA *)&rna_KeyingSet_rna_properties, (PropertyRNA *)&rna_KeyingSet_bl_options}},
	"KeyingSet", NULL, NULL, 4, "Keying Set",
	"Settings that should be keyframed together",
	"*", 512,
	(PropertyRNA *)&rna_KeyingSet_bl_label, (PropertyRNA *)&rna_KeyingSet_rna_properties,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	{(FunctionRNA *)&rna_KeyingSet_refresh_func, (FunctionRNA *)&rna_KeyingSet_refresh_func}
};

/* Keying set paths */
CollectionPropertyRNA rna_KeyingSetPaths_rna_properties = {
	{(PropertyRNA *)&rna_KeyingSetPaths_rna_type, NULL,
	-1, "rna_properties", 128, "Properties",
	"RNA property collection",
	0, "*",
	PROP_COLLECTION, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	KeyingSetPaths_rna_properties_begin, KeyingSetPaths_rna_properties_next, KeyingSetPaths_rna_properties_end, KeyingSetPaths_rna_properties_get, NULL, NULL, KeyingSetPaths_rna_properties_lookup_string, NULL, &RNA_Property
};

PointerPropertyRNA rna_KeyingSetPaths_rna_type = {
	{(PropertyRNA *)&rna_KeyingSetPaths_active, (PropertyRNA *)&rna_KeyingSetPaths_rna_properties,
	-1, "rna_type", 8912896, "RNA",
	"RNA type definition",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	KeyingSetPaths_rna_type_get, NULL, NULL, NULL,&RNA_Struct
};

PointerPropertyRNA rna_KeyingSetPaths_active = {
	{(PropertyRNA *)&rna_KeyingSetPaths_active_index, (PropertyRNA *)&rna_KeyingSetPaths_rna_type,
	-1, "active", 8388609, "Active Keying Set",
	"Active Keying Set used to insert/delete keyframes",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, rna_KeyingSet_active_ksPath_editable, NULL,
	0, -1, NULL},
	KeyingSetPaths_active_get, KeyingSetPaths_active_set, NULL, NULL,&RNA_KeyingSetPath
};

IntPropertyRNA rna_KeyingSetPaths_active_index = {
	{NULL, (PropertyRNA *)&rna_KeyingSetPaths_active,
	-1, "active_index", 3, "Active Path Index",
	"Current Keying Set index",
	0, "*",
	PROP_INT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	KeyingSetPaths_active_index_get, KeyingSetPaths_active_index_set, NULL, NULL, rna_KeyingSet_active_ksPath_index_range, NULL, NULL, NULL, NULL, NULL,
	-10000, 10000, INT_MIN, INT_MAX, 1, 0, NULL
};

PointerPropertyRNA rna_KeyingSetPaths_add_ksp = {
	{(PropertyRNA *)&rna_KeyingSetPaths_add_target_id, NULL,
	-1, "ksp", 8388616, "New Path",
	"Path created and added to the Keying Set",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	NULL, NULL, NULL, NULL,&RNA_KeyingSetPath
};

PointerPropertyRNA rna_KeyingSetPaths_add_target_id = {
	{(PropertyRNA *)&rna_KeyingSetPaths_add_data_path, (PropertyRNA *)&rna_KeyingSetPaths_add_ksp,
	-1, "target_id", 8388612, "Target ID",
	"ID-Datablock for the destination",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	NULL, NULL, NULL, NULL,&RNA_ID
};

StringPropertyRNA rna_KeyingSetPaths_add_data_path = {
	{(PropertyRNA *)&rna_KeyingSetPaths_add_index, (PropertyRNA *)&rna_KeyingSetPaths_add_target_id,
	-1, "data_path", 262149, "Data-Path",
	"RNA-Path to destination property",
	0, "*",
	PROP_STRING, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	NULL, NULL, NULL, NULL, NULL, NULL, 256, ""
};

IntPropertyRNA rna_KeyingSetPaths_add_index = {
	{(PropertyRNA *)&rna_KeyingSetPaths_add_group_method, (PropertyRNA *)&rna_KeyingSetPaths_add_data_path,
	-1, "index", 3, "Index",
	"The index of the destination property (i.e. axis of Location/Rotation/etc.), or -1 for the entire array",
	0, "*",
	PROP_INT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL,
	0, INT_MAX, -1, INT_MAX, 1, -1, NULL
};

static EnumPropertyItem rna_KeyingSetPaths_add_group_method_items[4] = {
	{0, "NAMED", 0, "Named Group", ""},
	{1, "NONE", 0, "None", ""},
	{2, "KEYINGSET", 0, "Keying Set Name", ""},
	{0, NULL, 0, NULL, NULL}
};

EnumPropertyRNA rna_KeyingSetPaths_add_group_method = {
	{(PropertyRNA *)&rna_KeyingSetPaths_add_group_name, (PropertyRNA *)&rna_KeyingSetPaths_add_index,
	-1, "group_method", 3, "Grouping Method",
	"Method used to define which Group-name to use",
	0, "*",
	PROP_ENUM, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	NULL, NULL, NULL, NULL, NULL, NULL, rna_KeyingSetPaths_add_group_method_items, 3, 2
};

StringPropertyRNA rna_KeyingSetPaths_add_group_name = {
	{NULL, (PropertyRNA *)&rna_KeyingSetPaths_add_group_method,
	-1, "group_name", 262145, "Group Name",
	"Name of Action Group to assign destination to (only if grouping mode is to use this name)",
	0, "*",
	PROP_STRING, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	NULL, NULL, NULL, NULL, NULL, NULL, 64, ""
};

FunctionRNA rna_KeyingSetPaths_add_func = {
	{(FunctionRNA *)&rna_KeyingSetPaths_remove_func, NULL,
	NULL,
	{(PropertyRNA *)&rna_KeyingSetPaths_add_ksp, (PropertyRNA *)&rna_KeyingSetPaths_add_group_name}},
	"add", 16, "Add a new path for the Keying Set",
	KeyingSetPaths_add_call,
	(PropertyRNA *)&rna_KeyingSetPaths_add_ksp
};

PointerPropertyRNA rna_KeyingSetPaths_remove_path = {
	{NULL, NULL,
	-1, "path", 264196, "Path",
	"",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	NULL, NULL, NULL, NULL,&RNA_KeyingSetPath
};

FunctionRNA rna_KeyingSetPaths_remove_func = {
	{(FunctionRNA *)&rna_KeyingSetPaths_clear_func, (FunctionRNA *)&rna_KeyingSetPaths_add_func,
	NULL,
	{(PropertyRNA *)&rna_KeyingSetPaths_remove_path, (PropertyRNA *)&rna_KeyingSetPaths_remove_path}},
	"remove", 16, "Remove the given path from the Keying Set",
	KeyingSetPaths_remove_call,
	NULL
};

FunctionRNA rna_KeyingSetPaths_clear_func = {
	{NULL, (FunctionRNA *)&rna_KeyingSetPaths_remove_func,
	NULL,
	{NULL, NULL}},
	"clear", 16, "Remove all the paths from the Keying Set",
	KeyingSetPaths_clear_call,
	NULL
};

StructRNA RNA_KeyingSetPaths = {
	{(ContainerRNA *)&RNA_KeyingSetPath, (ContainerRNA *)&RNA_KeyingSet,
	NULL,
	{(PropertyRNA *)&rna_KeyingSetPaths_rna_properties, (PropertyRNA *)&rna_KeyingSetPaths_active_index}},
	"KeyingSetPaths", NULL, NULL, 4, "Keying set paths",
	"Collection of keying set paths",
	"*", 17,
	NULL, (PropertyRNA *)&rna_KeyingSetPaths_rna_properties,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	{(FunctionRNA *)&rna_KeyingSetPaths_add_func, (FunctionRNA *)&rna_KeyingSetPaths_clear_func}
};

/* Keying Set Path */
CollectionPropertyRNA rna_KeyingSetPath_rna_properties = {
	{(PropertyRNA *)&rna_KeyingSetPath_rna_type, NULL,
	-1, "rna_properties", 128, "Properties",
	"RNA property collection",
	0, "*",
	PROP_COLLECTION, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	KeyingSetPath_rna_properties_begin, KeyingSetPath_rna_properties_next, KeyingSetPath_rna_properties_end, KeyingSetPath_rna_properties_get, NULL, NULL, KeyingSetPath_rna_properties_lookup_string, NULL, &RNA_Property
};

PointerPropertyRNA rna_KeyingSetPath_rna_type = {
	{(PropertyRNA *)&rna_KeyingSetPath_id, (PropertyRNA *)&rna_KeyingSetPath_rna_properties,
	-1, "rna_type", 8912896, "RNA",
	"RNA type definition",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	KeyingSetPath_rna_type_get, NULL, NULL, NULL,&RNA_Struct
};

PointerPropertyRNA rna_KeyingSetPath_id = {
	{(PropertyRNA *)&rna_KeyingSetPath_id_type, (PropertyRNA *)&rna_KeyingSetPath_rna_type,
	-1, "id", 8388673, "ID-Block",
	"ID-Block that keyframes for Keying Set should be added to (for Absolute Keying Sets only)",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 68026369, rna_ksPath_id_editable, NULL,
	0, -1, NULL},
	KeyingSetPath_id_get, KeyingSetPath_id_set, rna_ksPath_id_typef, NULL,&RNA_ID
};

static EnumPropertyItem rna_KeyingSetPath_id_type_items[32] = {
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

EnumPropertyRNA rna_KeyingSetPath_id_type = {
	{(PropertyRNA *)&rna_KeyingSetPath_group, (PropertyRNA *)&rna_KeyingSetPath_id,
	-1, "id_type", 3, "ID Type",
	"Type of ID-block that can be used",
	0, "*",
	PROP_ENUM, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 68026369, NULL, NULL,
	0, -1, NULL},
	KeyingSetPath_id_type_get, KeyingSetPath_id_type_set, NULL, NULL, NULL, NULL, rna_KeyingSetPath_id_type_items, 31, 16975
};

StringPropertyRNA rna_KeyingSetPath_group = {
	{(PropertyRNA *)&rna_KeyingSetPath_group_method, (PropertyRNA *)&rna_KeyingSetPath_id_type,
	-1, "group", 262145, "Group Name",
	"Name of Action Group to assign setting(s) for this path to",
	0, "*",
	PROP_STRING, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {64, 0, 0}, 0,
	NULL, 68026369, NULL, NULL,
	0, -1, NULL},
	KeyingSetPath_group_get, KeyingSetPath_group_length, KeyingSetPath_group_set, NULL, NULL, NULL, 64, ""
};

static EnumPropertyItem rna_KeyingSetPath_group_method_items[4] = {
	{0, "NAMED", 0, "Named Group", ""},
	{1, "NONE", 0, "None", ""},
	{2, "KEYINGSET", 0, "Keying Set Name", ""},
	{0, NULL, 0, NULL, NULL}
};

EnumPropertyRNA rna_KeyingSetPath_group_method = {
	{(PropertyRNA *)&rna_KeyingSetPath_data_path, (PropertyRNA *)&rna_KeyingSetPath_group,
	-1, "group_method", 3, "Grouping Method",
	"Method used to define which Group-name to use",
	0, "*",
	PROP_ENUM, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 68026369, NULL, NULL,
	0, -1, NULL},
	KeyingSetPath_group_method_get, KeyingSetPath_group_method_set, NULL, NULL, NULL, NULL, rna_KeyingSetPath_group_method_items, 3, 0
};

StringPropertyRNA rna_KeyingSetPath_data_path = {
	{(PropertyRNA *)&rna_KeyingSetPath_array_index, (PropertyRNA *)&rna_KeyingSetPath_group_method,
	-1, "data_path", 262145, "Data Path",
	"Path to property setting",
	0, "*",
	PROP_STRING, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 68026369, NULL, NULL,
	0, -1, NULL},
	KeyingSetPath_data_path_get, KeyingSetPath_data_path_length, KeyingSetPath_data_path_set, NULL, NULL, NULL, 0, ""
};

IntPropertyRNA rna_KeyingSetPath_array_index = {
	{(PropertyRNA *)&rna_KeyingSetPath_use_entire_array, (PropertyRNA *)&rna_KeyingSetPath_data_path,
	-1, "array_index", 8195, "RNA Array Index",
	"Index to the specific setting if applicable",
	0, "*",
	PROP_INT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 68026369, NULL, NULL,
	offsetof(KS_Path, array_index), 0, NULL},
	KeyingSetPath_array_index_get, KeyingSetPath_array_index_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL,
	-10000, 10000, INT_MIN, INT_MAX, 1, 0, NULL
};

BoolPropertyRNA rna_KeyingSetPath_use_entire_array = {
	{(PropertyRNA *)&rna_KeyingSetPath_bl_options, (PropertyRNA *)&rna_KeyingSetPath_array_index,
	-1, "use_entire_array", 3, "Entire Array",
	"When an \'array/vector\' type is chosen (Location, Rotation, Color, etc.), entire array is to be used",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 68026369, NULL, NULL,
	0, -1, NULL},
	KeyingSetPath_use_entire_array_get, KeyingSetPath_use_entire_array_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

static EnumPropertyItem rna_KeyingSetPath_bl_options_items[4] = {
	{1, "INSERTKEY_NEEDED", 0, "Only Needed", "Only insert keyframes where they\'re needed in the relevant F-Curves"},
	{2, "INSERTKEY_VISUAL", 0, "Visual Keying", "Insert keyframes based on \'visual transforms\'"},
	{32, "INSERTKEY_XYZ_TO_RGB", 0, "XYZ=RGB Colors", "Color for newly added transformation F-Curves (Location, Rotation, Scale) and also Color is based on the transform axis"},
	{0, NULL, 0, NULL, NULL}
};

EnumPropertyRNA rna_KeyingSetPath_bl_options = {
	{NULL, (PropertyRNA *)&rna_KeyingSetPath_use_entire_array,
	-1, "bl_options", 2097203, "Options",
	"Keying set options",
	0, "*",
	PROP_ENUM, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	KeyingSetPath_bl_options_get, KeyingSetPath_bl_options_set, NULL, NULL, NULL, NULL, rna_KeyingSetPath_bl_options_items, 3, 1
};

StructRNA RNA_KeyingSetPath = {
	{(ContainerRNA *)&RNA_KeyingSetInfo, (ContainerRNA *)&RNA_KeyingSetPaths,
	NULL,
	{(PropertyRNA *)&rna_KeyingSetPath_rna_properties, (PropertyRNA *)&rna_KeyingSetPath_bl_options}},
	"KeyingSetPath", NULL, NULL, 4, "Keying Set Path",
	"Path to a setting for use in a Keying Set",
	"*", 17,
	(PropertyRNA *)&rna_KeyingSetPath_data_path, (PropertyRNA *)&rna_KeyingSetPath_rna_properties,
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

/* Keying Set Info */
CollectionPropertyRNA rna_KeyingSetInfo_rna_properties = {
	{(PropertyRNA *)&rna_KeyingSetInfo_rna_type, NULL,
	-1, "rna_properties", 128, "Properties",
	"RNA property collection",
	0, "*",
	PROP_COLLECTION, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	KeyingSetInfo_rna_properties_begin, KeyingSetInfo_rna_properties_next, KeyingSetInfo_rna_properties_end, KeyingSetInfo_rna_properties_get, NULL, NULL, KeyingSetInfo_rna_properties_lookup_string, NULL, &RNA_Property
};

PointerPropertyRNA rna_KeyingSetInfo_rna_type = {
	{(PropertyRNA *)&rna_KeyingSetInfo_bl_idname, (PropertyRNA *)&rna_KeyingSetInfo_rna_properties,
	-1, "rna_type", 8912896, "RNA",
	"RNA type definition",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	KeyingSetInfo_rna_type_get, NULL, NULL, NULL,&RNA_Struct
};

StringPropertyRNA rna_KeyingSetInfo_bl_idname = {
	{(PropertyRNA *)&rna_KeyingSetInfo_bl_label, (PropertyRNA *)&rna_KeyingSetInfo_rna_type,
	-1, "bl_idname", 262161, "ID Name",
	"If this is set, the Keying Set gets a custom ID, otherwise it takes the name of the class used to define the Keying Set (for example, if the class name is \"BUILTIN_KSI_location\", and bl_idname is not set by the script, then bl_idname = \"BUILTIN_KSI_location\")",
	0, "*",
	PROP_STRING, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	KeyingSetInfo_bl_idname_get, KeyingSetInfo_bl_idname_length, KeyingSetInfo_bl_idname_set, NULL, NULL, NULL, 0, ""
};

StringPropertyRNA rna_KeyingSetInfo_bl_label = {
	{(PropertyRNA *)&rna_KeyingSetInfo_bl_description, (PropertyRNA *)&rna_KeyingSetInfo_bl_idname,
	-1, "bl_label", 262161, "UI Name",
	"",
	0, "*",
	PROP_STRING, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	KeyingSetInfo_bl_label_get, KeyingSetInfo_bl_label_length, KeyingSetInfo_bl_label_set, NULL, NULL, NULL, 0, ""
};

StringPropertyRNA rna_KeyingSetInfo_bl_description = {
	{(PropertyRNA *)&rna_KeyingSetInfo_bl_options, (PropertyRNA *)&rna_KeyingSetInfo_bl_label,
	-1, "bl_description", 262193, "Description",
	"A short description of the keying set",
	0, "*",
	PROP_STRING, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	KeyingSetInfo_bl_description_get, KeyingSetInfo_bl_description_length, KeyingSetInfo_bl_description_set, NULL, NULL, NULL, 240, ""
};

static EnumPropertyItem rna_KeyingSetInfo_bl_options_items[4] = {
	{1, "INSERTKEY_NEEDED", 0, "Only Needed", "Only insert keyframes where they\'re needed in the relevant F-Curves"},
	{2, "INSERTKEY_VISUAL", 0, "Visual Keying", "Insert keyframes based on \'visual transforms\'"},
	{32, "INSERTKEY_XYZ_TO_RGB", 0, "XYZ=RGB Colors", "Color for newly added transformation F-Curves (Location, Rotation, Scale) and also Color is based on the transform axis"},
	{0, NULL, 0, NULL, NULL}
};

EnumPropertyRNA rna_KeyingSetInfo_bl_options = {
	{NULL, (PropertyRNA *)&rna_KeyingSetInfo_bl_description,
	-1, "bl_options", 2097203, "Options",
	"Keying set options",
	0, "*",
	PROP_ENUM, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	KeyingSetInfo_bl_options_get, KeyingSetInfo_bl_options_set, NULL, NULL, NULL, NULL, rna_KeyingSetInfo_bl_options_items, 3, 1
};

BoolPropertyRNA rna_KeyingSetInfo_poll_ok = {
	{(PropertyRNA *)&rna_KeyingSetInfo_poll_context, NULL,
	-1, "ok", 11, "",
	"",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 1, NULL
};

PointerPropertyRNA rna_KeyingSetInfo_poll_context = {
	{NULL, (PropertyRNA *)&rna_KeyingSetInfo_poll_ok,
	-1, "context", 8388612, "",
	"",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	NULL, NULL, NULL, NULL,&RNA_Context
};

FunctionRNA rna_KeyingSetInfo_poll_func = {
	{(FunctionRNA *)&rna_KeyingSetInfo_iterator_func, NULL,
	NULL,
	{(PropertyRNA *)&rna_KeyingSetInfo_poll_ok, (PropertyRNA *)&rna_KeyingSetInfo_poll_context}},
	"poll", 32, "Test if Keying Set can be used or not",
	NULL,
	(PropertyRNA *)&rna_KeyingSetInfo_poll_ok
};

PointerPropertyRNA rna_KeyingSetInfo_iterator_context = {
	{(PropertyRNA *)&rna_KeyingSetInfo_iterator_ks, NULL,
	-1, "context", 8388612, "",
	"",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	NULL, NULL, NULL, NULL,&RNA_Context
};

PointerPropertyRNA rna_KeyingSetInfo_iterator_ks = {
	{NULL, (PropertyRNA *)&rna_KeyingSetInfo_iterator_context,
	-1, "ks", 8388612, "",
	"",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	NULL, NULL, NULL, NULL,&RNA_KeyingSet
};

FunctionRNA rna_KeyingSetInfo_iterator_func = {
	{(FunctionRNA *)&rna_KeyingSetInfo_generate_func, (FunctionRNA *)&rna_KeyingSetInfo_poll_func,
	NULL,
	{(PropertyRNA *)&rna_KeyingSetInfo_iterator_context, (PropertyRNA *)&rna_KeyingSetInfo_iterator_ks}},
	"iterator", 32, "Call generate() on the structs which have properties to be keyframed",
	NULL,
	NULL
};

PointerPropertyRNA rna_KeyingSetInfo_generate_context = {
	{(PropertyRNA *)&rna_KeyingSetInfo_generate_ks, NULL,
	-1, "context", 8388612, "",
	"",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	NULL, NULL, NULL, NULL,&RNA_Context
};

PointerPropertyRNA rna_KeyingSetInfo_generate_ks = {
	{(PropertyRNA *)&rna_KeyingSetInfo_generate_data, (PropertyRNA *)&rna_KeyingSetInfo_generate_context,
	-1, "ks", 8388612, "",
	"",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	NULL, NULL, NULL, NULL,&RNA_KeyingSet
};

PointerPropertyRNA rna_KeyingSetInfo_generate_data = {
	{NULL, (PropertyRNA *)&rna_KeyingSetInfo_generate_ks,
	-1, "data", 8652804, "",
	"",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	NULL, NULL, NULL, NULL,&RNA_AnyType
};

FunctionRNA rna_KeyingSetInfo_generate_func = {
	{NULL, (FunctionRNA *)&rna_KeyingSetInfo_iterator_func,
	NULL,
	{(PropertyRNA *)&rna_KeyingSetInfo_generate_context, (PropertyRNA *)&rna_KeyingSetInfo_generate_data}},
	"generate", 32, "Add Paths to the Keying Set to keyframe the properties of the given data",
	NULL,
	NULL
};

StructRNA RNA_KeyingSetInfo = {
	{(ContainerRNA *)&RNA_AnimViz, (ContainerRNA *)&RNA_KeyingSetPath,
	NULL,
	{(PropertyRNA *)&rna_KeyingSetInfo_rna_properties, (PropertyRNA *)&rna_KeyingSetInfo_bl_options}},
	"KeyingSetInfo", NULL, NULL, 4, "Keying Set Info",
	"Callback function defines for builtin Keying Sets",
	"*", 17,
	(PropertyRNA *)&rna_KeyingSetInfo_bl_label, (PropertyRNA *)&rna_KeyingSetInfo_rna_properties,
	NULL,
	NULL,
	rna_KeyingSetInfo_refine,
	NULL,
	rna_KeyingSetInfo_register,
	rna_KeyingSetInfo_unregister,
	NULL,
	NULL,
	{(FunctionRNA *)&rna_KeyingSetInfo_poll_func, (FunctionRNA *)&rna_KeyingSetInfo_generate_func}
};

