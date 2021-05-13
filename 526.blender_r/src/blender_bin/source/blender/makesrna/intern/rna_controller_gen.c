
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

#include "rna_controller.c"
#include "rna_controller_api.c"

#pragma GCC diagnostic ignored "-Wunused-parameter"

/* Autogenerated Functions */


CollectionPropertyRNA rna_Controller_rna_properties;
PointerPropertyRNA rna_Controller_rna_type;
StringPropertyRNA rna_Controller_name;
EnumPropertyRNA rna_Controller_type;
BoolPropertyRNA rna_Controller_show_expanded;
BoolPropertyRNA rna_Controller_active;
BoolPropertyRNA rna_Controller_use_priority;
CollectionPropertyRNA rna_Controller_actuators;
IntPropertyRNA rna_Controller_states;

extern FunctionRNA rna_Controller_link_func;
extern PointerPropertyRNA rna_Controller_link_sensor;
extern PointerPropertyRNA rna_Controller_link_actuator;

extern FunctionRNA rna_Controller_unlink_func;
extern PointerPropertyRNA rna_Controller_unlink_sensor;
extern PointerPropertyRNA rna_Controller_unlink_actuator;



extern CollectionPropertyRNA rna_Controller_rna_properties;
extern PointerPropertyRNA rna_Controller_rna_type;
extern StringPropertyRNA rna_Controller_name;
extern EnumPropertyRNA rna_Controller_type;
extern BoolPropertyRNA rna_Controller_show_expanded;
extern BoolPropertyRNA rna_Controller_active;
extern BoolPropertyRNA rna_Controller_use_priority;
extern CollectionPropertyRNA rna_Controller_actuators;
extern IntPropertyRNA rna_Controller_states;

StringPropertyRNA rna_ExpressionController_expression;

extern FunctionRNA rna_Controller_link_func;
extern PointerPropertyRNA rna_Controller_link_sensor;
extern PointerPropertyRNA rna_Controller_link_actuator;

extern FunctionRNA rna_Controller_unlink_func;
extern PointerPropertyRNA rna_Controller_unlink_sensor;
extern PointerPropertyRNA rna_Controller_unlink_actuator;



extern CollectionPropertyRNA rna_Controller_rna_properties;
extern PointerPropertyRNA rna_Controller_rna_type;
extern StringPropertyRNA rna_Controller_name;
extern EnumPropertyRNA rna_Controller_type;
extern BoolPropertyRNA rna_Controller_show_expanded;
extern BoolPropertyRNA rna_Controller_active;
extern BoolPropertyRNA rna_Controller_use_priority;
extern CollectionPropertyRNA rna_Controller_actuators;
extern IntPropertyRNA rna_Controller_states;

EnumPropertyRNA rna_PythonController_mode;
PointerPropertyRNA rna_PythonController_text;
StringPropertyRNA rna_PythonController_module;
BoolPropertyRNA rna_PythonController_use_debug;

extern FunctionRNA rna_Controller_link_func;
extern PointerPropertyRNA rna_Controller_link_sensor;
extern PointerPropertyRNA rna_Controller_link_actuator;

extern FunctionRNA rna_Controller_unlink_func;
extern PointerPropertyRNA rna_Controller_unlink_sensor;
extern PointerPropertyRNA rna_Controller_unlink_actuator;



extern CollectionPropertyRNA rna_Controller_rna_properties;
extern PointerPropertyRNA rna_Controller_rna_type;
extern StringPropertyRNA rna_Controller_name;
extern EnumPropertyRNA rna_Controller_type;
extern BoolPropertyRNA rna_Controller_show_expanded;
extern BoolPropertyRNA rna_Controller_active;
extern BoolPropertyRNA rna_Controller_use_priority;
extern CollectionPropertyRNA rna_Controller_actuators;
extern IntPropertyRNA rna_Controller_states;

extern FunctionRNA rna_Controller_link_func;
extern PointerPropertyRNA rna_Controller_link_sensor;
extern PointerPropertyRNA rna_Controller_link_actuator;

extern FunctionRNA rna_Controller_unlink_func;
extern PointerPropertyRNA rna_Controller_unlink_sensor;
extern PointerPropertyRNA rna_Controller_unlink_actuator;



extern CollectionPropertyRNA rna_Controller_rna_properties;
extern PointerPropertyRNA rna_Controller_rna_type;
extern StringPropertyRNA rna_Controller_name;
extern EnumPropertyRNA rna_Controller_type;
extern BoolPropertyRNA rna_Controller_show_expanded;
extern BoolPropertyRNA rna_Controller_active;
extern BoolPropertyRNA rna_Controller_use_priority;
extern CollectionPropertyRNA rna_Controller_actuators;
extern IntPropertyRNA rna_Controller_states;

extern FunctionRNA rna_Controller_link_func;
extern PointerPropertyRNA rna_Controller_link_sensor;
extern PointerPropertyRNA rna_Controller_link_actuator;

extern FunctionRNA rna_Controller_unlink_func;
extern PointerPropertyRNA rna_Controller_unlink_sensor;
extern PointerPropertyRNA rna_Controller_unlink_actuator;



extern CollectionPropertyRNA rna_Controller_rna_properties;
extern PointerPropertyRNA rna_Controller_rna_type;
extern StringPropertyRNA rna_Controller_name;
extern EnumPropertyRNA rna_Controller_type;
extern BoolPropertyRNA rna_Controller_show_expanded;
extern BoolPropertyRNA rna_Controller_active;
extern BoolPropertyRNA rna_Controller_use_priority;
extern CollectionPropertyRNA rna_Controller_actuators;
extern IntPropertyRNA rna_Controller_states;

extern FunctionRNA rna_Controller_link_func;
extern PointerPropertyRNA rna_Controller_link_sensor;
extern PointerPropertyRNA rna_Controller_link_actuator;

extern FunctionRNA rna_Controller_unlink_func;
extern PointerPropertyRNA rna_Controller_unlink_sensor;
extern PointerPropertyRNA rna_Controller_unlink_actuator;



extern CollectionPropertyRNA rna_Controller_rna_properties;
extern PointerPropertyRNA rna_Controller_rna_type;
extern StringPropertyRNA rna_Controller_name;
extern EnumPropertyRNA rna_Controller_type;
extern BoolPropertyRNA rna_Controller_show_expanded;
extern BoolPropertyRNA rna_Controller_active;
extern BoolPropertyRNA rna_Controller_use_priority;
extern CollectionPropertyRNA rna_Controller_actuators;
extern IntPropertyRNA rna_Controller_states;

extern FunctionRNA rna_Controller_link_func;
extern PointerPropertyRNA rna_Controller_link_sensor;
extern PointerPropertyRNA rna_Controller_link_actuator;

extern FunctionRNA rna_Controller_unlink_func;
extern PointerPropertyRNA rna_Controller_unlink_sensor;
extern PointerPropertyRNA rna_Controller_unlink_actuator;



extern CollectionPropertyRNA rna_Controller_rna_properties;
extern PointerPropertyRNA rna_Controller_rna_type;
extern StringPropertyRNA rna_Controller_name;
extern EnumPropertyRNA rna_Controller_type;
extern BoolPropertyRNA rna_Controller_show_expanded;
extern BoolPropertyRNA rna_Controller_active;
extern BoolPropertyRNA rna_Controller_use_priority;
extern CollectionPropertyRNA rna_Controller_actuators;
extern IntPropertyRNA rna_Controller_states;

extern FunctionRNA rna_Controller_link_func;
extern PointerPropertyRNA rna_Controller_link_sensor;
extern PointerPropertyRNA rna_Controller_link_actuator;

extern FunctionRNA rna_Controller_unlink_func;
extern PointerPropertyRNA rna_Controller_unlink_sensor;
extern PointerPropertyRNA rna_Controller_unlink_actuator;



extern CollectionPropertyRNA rna_Controller_rna_properties;
extern PointerPropertyRNA rna_Controller_rna_type;
extern StringPropertyRNA rna_Controller_name;
extern EnumPropertyRNA rna_Controller_type;
extern BoolPropertyRNA rna_Controller_show_expanded;
extern BoolPropertyRNA rna_Controller_active;
extern BoolPropertyRNA rna_Controller_use_priority;
extern CollectionPropertyRNA rna_Controller_actuators;
extern IntPropertyRNA rna_Controller_states;

extern FunctionRNA rna_Controller_link_func;
extern PointerPropertyRNA rna_Controller_link_sensor;
extern PointerPropertyRNA rna_Controller_link_actuator;

extern FunctionRNA rna_Controller_unlink_func;
extern PointerPropertyRNA rna_Controller_unlink_sensor;
extern PointerPropertyRNA rna_Controller_unlink_actuator;


static PointerRNA Controller_rna_properties_get(CollectionPropertyIterator *iter)
{
	return rna_builtin_properties_get(iter);
}

void Controller_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

	memset(iter, 0, sizeof(*iter));
	iter->parent = *ptr;
	iter->prop = (PropertyRNA *)&rna_Controller_rna_properties;

	rna_builtin_properties_begin(iter, ptr);

	if (iter->valid)
		iter->ptr = Controller_rna_properties_get(iter);
}

void Controller_rna_properties_next(CollectionPropertyIterator *iter)
{
	rna_builtin_properties_next(iter);

	if (iter->valid)
		iter->ptr = Controller_rna_properties_get(iter);
}

void Controller_rna_properties_end(CollectionPropertyIterator *iter)
{
	rna_iterator_listbase_end(iter);
}

int Controller_rna_properties_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
	return rna_builtin_properties_lookup_string(ptr, key, r_ptr);
}

PointerRNA Controller_rna_type_get(PointerRNA *ptr)
{
	return rna_builtin_type_get(ptr);
}

void Controller_name_get(PointerRNA *ptr, char *value)
{
	bController *data = (bController *)(ptr->data);
	BLI_strncpy_utf8(value, data->name, 64);
}

int Controller_name_length(PointerRNA *ptr)
{
	bController *data = (bController *)(ptr->data);
	return strlen(data->name);
}

void Controller_name_set(PointerRNA *ptr, const char *value)
{
	rna_Constroller_name_set(ptr, value);
}

int Controller_type_get(PointerRNA *ptr)
{
	bController *data = (bController *)(ptr->data);
	return (int)(data->type);
}

void Controller_type_set(PointerRNA *ptr, int value)
{
	rna_Controller_type_set(ptr, value);
}

int Controller_show_expanded_get(PointerRNA *ptr)
{
	bController *data = (bController *)(ptr->data);
	return (((data->flag) & 1) != 0);
}

void Controller_show_expanded_set(PointerRNA *ptr, int value)
{
	bController *data = (bController *)(ptr->data);
	if (value) data->flag |= 1;
	else data->flag &= ~1;
}

int Controller_active_get(PointerRNA *ptr)
{
	bController *data = (bController *)(ptr->data);
	return !(((data->flag) & 32) != 0);
}

void Controller_active_set(PointerRNA *ptr, int value)
{
	bController *data = (bController *)(ptr->data);
	if (!value) data->flag |= 32;
	else data->flag &= ~32;
}

int Controller_use_priority_get(PointerRNA *ptr)
{
	bController *data = (bController *)(ptr->data);
	return (((data->flag) & 16) != 0);
}

void Controller_use_priority_set(PointerRNA *ptr, int value)
{
	bController *data = (bController *)(ptr->data);
	if (value) data->flag |= 16;
	else data->flag &= ~16;
}

static PointerRNA Controller_actuators_get(CollectionPropertyIterator *iter)
{
	return rna_pointer_inherit_refine(&iter->parent, &RNA_Actuator, rna_iterator_array_dereference_get(iter));
}

void Controller_actuators_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

	memset(iter, 0, sizeof(*iter));
	iter->parent = *ptr;
	iter->prop = (PropertyRNA *)&rna_Controller_actuators;

	rna_Controller_actuators_begin(iter, ptr);

	if (iter->valid)
		iter->ptr = Controller_actuators_get(iter);
}

void Controller_actuators_next(CollectionPropertyIterator *iter)
{
	rna_iterator_array_next(iter);

	if (iter->valid)
		iter->ptr = Controller_actuators_get(iter);
}

void Controller_actuators_end(CollectionPropertyIterator *iter)
{
	rna_iterator_array_end(iter);
}

int Controller_actuators_lookup_int(PointerRNA *ptr, int index, PointerRNA *r_ptr)
{
	int found = 0;
	CollectionPropertyIterator iter;

	Controller_actuators_begin(&iter, ptr);

	if (iter.valid) {
		ArrayIterator *internal = &iter.internal.array;
		if (index < 0 || index >= internal->length) {
#ifdef __GNUC__
			printf("Array iterator out of range: %s (index %d)\n", __func__, index);
#else
			printf("Array iterator out of range: (index %d)\n", index);
#endif
		}
		else if (internal->skip) {
			while (index-- > 0 && iter.valid) {
				rna_iterator_array_next(&iter);
			}
			found = (index == -1 && iter.valid);
		}
		else {
			internal->ptr += internal->itemsize * index;
			found = 1;
		}
		if (found) *r_ptr = Controller_actuators_get(&iter);
	}

	Controller_actuators_end(&iter);

	return found;
}

int Controller_actuators_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
	extern int Actuator_name_length(PointerRNA *);
	extern void Actuator_name_get(PointerRNA *, char *);

	bool found = false;
	CollectionPropertyIterator iter;
	char namebuf[1024];
	char *name;

	Controller_actuators_begin(&iter, ptr);

	while (iter.valid) {
		if (iter.ptr.data) {
			int namelen = Actuator_name_length(&iter.ptr);
			if (namelen < 1024) {
				Actuator_name_get(&iter.ptr, namebuf);
				if (strcmp(namebuf, key) == 0) {
					found = true;
					*r_ptr = iter.ptr;
					break;
				}
			}
			else {
				name = MEM_mallocN(namelen+1, "name string");
				Actuator_name_get(&iter.ptr, name);
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
		Controller_actuators_next(&iter);
	}
	Controller_actuators_end(&iter);

	return found;
}

int Controller_states_get(PointerRNA *ptr)
{
	return rna_Controller_state_number_get(ptr);
}

void Controller_states_set(PointerRNA *ptr, int value)
{
	rna_Controller_state_number_set(ptr, value);
}

void ExpressionController_expression_get(PointerRNA *ptr, char *value)
{
	bExpressionCont *data = (bExpressionCont *)(((bController *)ptr->data)->data);
	BLI_strncpy_utf8(value, data->str, 128);
}

int ExpressionController_expression_length(PointerRNA *ptr)
{
	bExpressionCont *data = (bExpressionCont *)(((bController *)ptr->data)->data);
	return strlen(data->str);
}

void ExpressionController_expression_set(PointerRNA *ptr, const char *value)
{
	bExpressionCont *data = (bExpressionCont *)(((bController *)ptr->data)->data);
	BLI_strncpy_utf8(data->str, value, 128);
}

int PythonController_mode_get(PointerRNA *ptr)
{
	bPythonCont *data = (bPythonCont *)(((bController *)ptr->data)->data);
	return (int)(data->mode);
}

void PythonController_mode_set(PointerRNA *ptr, int value)
{
	rna_Controller_mode_set(ptr, value);
}

PointerRNA PythonController_text_get(PointerRNA *ptr)
{
	bPythonCont *data = (bPythonCont *)(((bController *)ptr->data)->data);
	return rna_pointer_inherit_refine(ptr, &RNA_Text, data->text);
}

void PythonController_text_set(PointerRNA *ptr, PointerRNA value)
{
	bPythonCont *data = (bPythonCont *)(((bController *)ptr->data)->data);
	if (value.data)
		id_lib_extern((ID *)value.data);

	data->text = value.data;
}

void PythonController_module_get(PointerRNA *ptr, char *value)
{
	bPythonCont *data = (bPythonCont *)(((bController *)ptr->data)->data);
	BLI_strncpy_utf8(value, data->module, 64);
}

int PythonController_module_length(PointerRNA *ptr)
{
	bPythonCont *data = (bPythonCont *)(((bController *)ptr->data)->data);
	return strlen(data->module);
}

void PythonController_module_set(PointerRNA *ptr, const char *value)
{
	bPythonCont *data = (bPythonCont *)(((bController *)ptr->data)->data);
	BLI_strncpy_utf8(data->module, value, 64);
}

int PythonController_use_debug_get(PointerRNA *ptr)
{
	bPythonCont *data = (bPythonCont *)(((bController *)ptr->data)->data);
	return (((data->flag) & 1) != 0);
}

void PythonController_use_debug_set(PointerRNA *ptr, int value)
{
	bPythonCont *data = (bPythonCont *)(((bController *)ptr->data)->data);
	if (value) data->flag |= 1;
	else data->flag &= ~1;
}

void Controller_link(struct bController *_self, struct bSensor *sensor, struct bActuator *actuator)
{
	rna_Controller_link(_self, sensor, actuator);
}

void Controller_link_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	struct bController *_self;
	struct bSensor *sensor;
	struct bActuator *actuator;
	char *_data;
	
	_self = (struct bController *)_ptr->data;
	_data = (char *)_parms->data;
	sensor = *((struct bSensor **)_data);
#if defined(SPEC_ILP32)
	_data += 4;
#else
	_data += 8;
#endif
	actuator = *((struct bActuator **)_data);
	
	rna_Controller_link(_self, sensor, actuator);
}

void Controller_unlink(struct bController *_self, struct bSensor *sensor, struct bActuator *actuator)
{
	rna_Controller_unlink(_self, sensor, actuator);
}

void Controller_unlink_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	struct bController *_self;
	struct bSensor *sensor;
	struct bActuator *actuator;
	char *_data;
	
	_self = (struct bController *)_ptr->data;
	_data = (char *)_parms->data;
	sensor = *((struct bSensor **)_data);
#if defined(SPEC_ILP32)
        _data += 4;
#else
        _data += 8;
#endif
	actuator = *((struct bActuator **)_data);
	
	rna_Controller_unlink(_self, sensor, actuator);
}

/* Repeated prototypes to detect errors */

void rna_Controller_link(struct bController *_self, struct bSensor *sensor, struct bActuator *actuator);
void rna_Controller_unlink(struct bController *_self, struct bSensor *sensor, struct bActuator *actuator);









/* Controller */
CollectionPropertyRNA rna_Controller_rna_properties = {
	{(PropertyRNA *)&rna_Controller_rna_type, NULL,
	-1, "rna_properties", 128, "Properties",
	"RNA property collection",
	0, "*",
	PROP_COLLECTION, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	Controller_rna_properties_begin, Controller_rna_properties_next, Controller_rna_properties_end, Controller_rna_properties_get, NULL, NULL, Controller_rna_properties_lookup_string, NULL, &RNA_Property
};

PointerPropertyRNA rna_Controller_rna_type = {
	{(PropertyRNA *)&rna_Controller_name, (PropertyRNA *)&rna_Controller_rna_properties,
	-1, "rna_type", 8912896, "RNA",
	"RNA type definition",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	Controller_rna_type_get, NULL, NULL, NULL,&RNA_Struct
};

StringPropertyRNA rna_Controller_name = {
	{(PropertyRNA *)&rna_Controller_type, (PropertyRNA *)&rna_Controller_rna_type,
	-1, "name", 262145, "Name",
	"",
	0, "*",
	PROP_STRING, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {64, 0, 0}, 0,
	NULL, 318767104, NULL, NULL,
	0, -1, NULL},
	Controller_name_get, Controller_name_length, Controller_name_set, NULL, NULL, NULL, 64, ""
};

static EnumPropertyItem rna_Controller_type_items[9] = {
	{0, "LOGIC_AND", 0, "And", "Logic And"},
	{1, "LOGIC_OR", 0, "Or", "Logic Or"},
	{4, "LOGIC_NAND", 0, "Nand", "Logic Nand"},
	{5, "LOGIC_NOR", 0, "Nor", "Logic Nor"},
	{6, "LOGIC_XOR", 0, "Xor", "Logic Xor"},
	{7, "LOGIC_XNOR", 0, "Xnor", "Logic Xnor"},
	{2, "EXPRESSION", 0, "Expression", ""},
	{3, "PYTHON", 0, "Python", ""},
	{0, NULL, 0, NULL, NULL}
};

EnumPropertyRNA rna_Controller_type = {
	{(PropertyRNA *)&rna_Controller_show_expanded, (PropertyRNA *)&rna_Controller_name,
	-1, "type", 1, "Type",
	"",
	0, "*",
	PROP_ENUM, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 318767104, NULL, NULL,
	0, -1, NULL},
	Controller_type_get, Controller_type_set, NULL, NULL, NULL, NULL, rna_Controller_type_items, 8, 0
};

BoolPropertyRNA rna_Controller_show_expanded = {
	{(PropertyRNA *)&rna_Controller_active, (PropertyRNA *)&rna_Controller_type,
	-1, "show_expanded", 4099, "Expanded",
	"Set controller expanded in the user interface",
	4, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 318767104, NULL, NULL,
	0, -1, NULL},
	Controller_show_expanded_get, Controller_show_expanded_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_Controller_active = {
	{(PropertyRNA *)&rna_Controller_use_priority, (PropertyRNA *)&rna_Controller_show_expanded,
	-1, "active", 3, "Active",
	"Set the active state of the controller",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 318767104, NULL, NULL,
	0, -1, NULL},
	Controller_active_get, Controller_active_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_Controller_use_priority = {
	{(PropertyRNA *)&rna_Controller_actuators, (PropertyRNA *)&rna_Controller_active,
	-1, "use_priority", 4099, "Priority",
	"Mark controller for execution before all non-marked controllers (good for startup scripts)",
	686, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 318767104, NULL, NULL,
	0, -1, NULL},
	Controller_use_priority_get, Controller_use_priority_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

CollectionPropertyRNA rna_Controller_actuators = {
	{(PropertyRNA *)&rna_Controller_states, (PropertyRNA *)&rna_Controller_use_priority,
	-1, "actuators", 0, "Actuators",
	"The list containing the actuators connected to the controller",
	0, "*",
	PROP_COLLECTION, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	Controller_actuators_begin, Controller_actuators_next, Controller_actuators_end, Controller_actuators_get, rna_Controller_actuators_length, Controller_actuators_lookup_int, Controller_actuators_lookup_string, NULL, &RNA_Actuator
};

IntPropertyRNA rna_Controller_states = {
	{NULL, (PropertyRNA *)&rna_Controller_actuators,
	-1, "states", 3, "",
	"Set Controller state index (1 to 30)",
	0, "*",
	PROP_INT, PROP_UNSIGNED | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 318767104, NULL, NULL,
	0, -1, NULL},
	Controller_states_get, Controller_states_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL,
	1, 30, 1, 30, 1, 0, NULL
};

PointerPropertyRNA rna_Controller_link_sensor = {
	{(PropertyRNA *)&rna_Controller_link_actuator, NULL,
	-1, "sensor", 8388608, "",
	"Sensor to link the controller to",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 318767104, NULL, NULL,
	0, -1, NULL},
	NULL, NULL, NULL, NULL,&RNA_Sensor
};

PointerPropertyRNA rna_Controller_link_actuator = {
	{NULL, (PropertyRNA *)&rna_Controller_link_sensor,
	-1, "actuator", 8388608, "",
	"Actuator to link the controller to",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 318767104, NULL, NULL,
	0, -1, NULL},
	NULL, NULL, NULL, NULL,&RNA_Actuator
};

FunctionRNA rna_Controller_link_func = {
	{(FunctionRNA *)&rna_Controller_unlink_func, NULL,
	NULL,
	{(PropertyRNA *)&rna_Controller_link_sensor, (PropertyRNA *)&rna_Controller_link_actuator}},
	"link", 0, "Link the controller with a sensor/actuator",
	Controller_link_call,
	NULL
};

PointerPropertyRNA rna_Controller_unlink_sensor = {
	{(PropertyRNA *)&rna_Controller_unlink_actuator, NULL,
	-1, "sensor", 8388608, "",
	"Sensor to unlink the controller from",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 318767104, NULL, NULL,
	0, -1, NULL},
	NULL, NULL, NULL, NULL,&RNA_Sensor
};

PointerPropertyRNA rna_Controller_unlink_actuator = {
	{NULL, (PropertyRNA *)&rna_Controller_unlink_sensor,
	-1, "actuator", 8388608, "",
	"Actuator to unlink the controller from",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 318767104, NULL, NULL,
	0, -1, NULL},
	NULL, NULL, NULL, NULL,&RNA_Actuator
};

FunctionRNA rna_Controller_unlink_func = {
	{NULL, (FunctionRNA *)&rna_Controller_link_func,
	NULL,
	{(PropertyRNA *)&rna_Controller_unlink_sensor, (PropertyRNA *)&rna_Controller_unlink_actuator}},
	"unlink", 0, "Unlink the controller from a sensor/actuator",
	Controller_unlink_call,
	NULL
};

StructRNA RNA_Controller = {
	{(ContainerRNA *)&RNA_ExpressionController, (ContainerRNA *)&RNA_Context,
	NULL,
	{(PropertyRNA *)&rna_Controller_rna_properties, (PropertyRNA *)&rna_Controller_states}},
	"Controller", NULL, NULL, 4, "Controller",
	"Game engine logic brick to process events, connecting sensors to actuators",
	"*", 17,
	(PropertyRNA *)&rna_Controller_name, (PropertyRNA *)&rna_Controller_rna_properties,
	NULL,
	NULL,
	rna_Controller_refine,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	{(FunctionRNA *)&rna_Controller_link_func, (FunctionRNA *)&rna_Controller_unlink_func}
};

/* Expression Controller */
StringPropertyRNA rna_ExpressionController_expression = {
	{NULL, NULL,
	-1, "expression", 262145, "Expression",
	"",
	0, "*",
	PROP_STRING, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {128, 0, 0}, 0,
	NULL, 318767104, NULL, NULL,
	0, -1, NULL},
	ExpressionController_expression_get, ExpressionController_expression_length, ExpressionController_expression_set, NULL, NULL, NULL, 128, ""
};

StructRNA RNA_ExpressionController = {
	{(ContainerRNA *)&RNA_PythonController, (ContainerRNA *)&RNA_Controller,
	NULL,
	{(PropertyRNA *)&rna_ExpressionController_expression, (PropertyRNA *)&rna_ExpressionController_expression}},
	"ExpressionController", NULL, NULL, 4, "Expression Controller",
	"Controller passing on events based on the evaluation of an expression",
	"*", 17,
	(PropertyRNA *)&rna_Controller_name, (PropertyRNA *)&rna_Controller_rna_properties,
	&RNA_Controller,
	NULL,
	rna_Controller_refine,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	{NULL, NULL}
};

/* Python Controller */
static EnumPropertyItem rna_PythonController_mode_items[3] = {
	{0, "SCRIPT", 0, "Script", ""},
	{1, "MODULE", 0, "Module", ""},
	{0, NULL, 0, NULL, NULL}
};

EnumPropertyRNA rna_PythonController_mode = {
	{(PropertyRNA *)&rna_PythonController_text, NULL,
	-1, "mode", 3, "Execution Method",
	"Python script type (textblock or module - faster)",
	0, "*",
	PROP_ENUM, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 318767104, NULL, NULL,
	0, -1, NULL},
	PythonController_mode_get, PythonController_mode_set, NULL, NULL, NULL, NULL, rna_PythonController_mode_items, 2, 0
};

PointerPropertyRNA rna_PythonController_text = {
	{(PropertyRNA *)&rna_PythonController_module, (PropertyRNA *)&rna_PythonController_mode,
	-1, "text", 8388609, "Text",
	"Text datablock with the python script",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 318767104, NULL, NULL,
	0, -1, NULL},
	PythonController_text_get, PythonController_text_set, NULL, NULL,&RNA_Text
};

StringPropertyRNA rna_PythonController_module = {
	{(PropertyRNA *)&rna_PythonController_use_debug, (PropertyRNA *)&rna_PythonController_text,
	-1, "module", 262145, "Module",
	"Module name and function to run, e.g. \"someModule.main\" (internal texts and external python files can be used)",
	0, "*",
	PROP_STRING, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {64, 0, 0}, 0,
	NULL, 318767104, NULL, NULL,
	0, -1, NULL},
	PythonController_module_get, PythonController_module_length, PythonController_module_set, NULL, NULL, NULL, 64, ""
};

BoolPropertyRNA rna_PythonController_use_debug = {
	{NULL, (PropertyRNA *)&rna_PythonController_module,
	-1, "use_debug", 3, "D",
	"Continuously reload the module from disk for editing external modules without restarting",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 318767104, NULL, NULL,
	0, -1, NULL},
	PythonController_use_debug_get, PythonController_use_debug_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

StructRNA RNA_PythonController = {
	{(ContainerRNA *)&RNA_AndController, (ContainerRNA *)&RNA_ExpressionController,
	NULL,
	{(PropertyRNA *)&rna_PythonController_mode, (PropertyRNA *)&rna_PythonController_use_debug}},
	"PythonController", NULL, NULL, 4, "Python Controller",
	"Controller executing a python script",
	"*", 17,
	(PropertyRNA *)&rna_Controller_name, (PropertyRNA *)&rna_Controller_rna_properties,
	&RNA_Controller,
	NULL,
	rna_Controller_refine,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	{NULL, NULL}
};

/* And Controller */
StructRNA RNA_AndController = {
	{(ContainerRNA *)&RNA_OrController, (ContainerRNA *)&RNA_PythonController,
	NULL,
	{NULL, NULL}},
	"AndController", NULL, NULL, 4, "And Controller",
	"Controller passing on events based on a logical AND operation",
	"*", 17,
	(PropertyRNA *)&rna_Controller_name, (PropertyRNA *)&rna_Controller_rna_properties,
	&RNA_Controller,
	NULL,
	rna_Controller_refine,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	{NULL, NULL}
};

/* Or Controller */
StructRNA RNA_OrController = {
	{(ContainerRNA *)&RNA_NorController, (ContainerRNA *)&RNA_AndController,
	NULL,
	{NULL, NULL}},
	"OrController", NULL, NULL, 4, "Or Controller",
	"Controller passing on events based on a logical OR operation",
	"*", 17,
	(PropertyRNA *)&rna_Controller_name, (PropertyRNA *)&rna_Controller_rna_properties,
	&RNA_Controller,
	NULL,
	rna_Controller_refine,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	{NULL, NULL}
};

/* Nor Controller */
StructRNA RNA_NorController = {
	{(ContainerRNA *)&RNA_NandController, (ContainerRNA *)&RNA_OrController,
	NULL,
	{NULL, NULL}},
	"NorController", NULL, NULL, 4, "Nor Controller",
	"Controller passing on events based on a logical NOR operation",
	"*", 17,
	(PropertyRNA *)&rna_Controller_name, (PropertyRNA *)&rna_Controller_rna_properties,
	&RNA_Controller,
	NULL,
	rna_Controller_refine,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	{NULL, NULL}
};

/* Nand Controller */
StructRNA RNA_NandController = {
	{(ContainerRNA *)&RNA_XorController, (ContainerRNA *)&RNA_NorController,
	NULL,
	{NULL, NULL}},
	"NandController", NULL, NULL, 4, "Nand Controller",
	"Controller passing on events based on a logical NAND operation",
	"*", 17,
	(PropertyRNA *)&rna_Controller_name, (PropertyRNA *)&rna_Controller_rna_properties,
	&RNA_Controller,
	NULL,
	rna_Controller_refine,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	{NULL, NULL}
};

/* Xor Controller */
StructRNA RNA_XorController = {
	{(ContainerRNA *)&RNA_XnorController, (ContainerRNA *)&RNA_NandController,
	NULL,
	{NULL, NULL}},
	"XorController", NULL, NULL, 4, "Xor Controller",
	"Controller passing on events based on a logical XOR operation",
	"*", 17,
	(PropertyRNA *)&rna_Controller_name, (PropertyRNA *)&rna_Controller_rna_properties,
	&RNA_Controller,
	NULL,
	rna_Controller_refine,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	{NULL, NULL}
};

/* Xnor Controller */
StructRNA RNA_XnorController = {
	{(ContainerRNA *)&RNA_Curve, (ContainerRNA *)&RNA_XorController,
	NULL,
	{NULL, NULL}},
	"XnorController", NULL, NULL, 4, "Xnor Controller",
	"Controller passing on events based on a logical XNOR operation",
	"*", 17,
	(PropertyRNA *)&rna_Controller_name, (PropertyRNA *)&rna_Controller_rna_properties,
	&RNA_Controller,
	NULL,
	rna_Controller_refine,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	{NULL, NULL}
};

