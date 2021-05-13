
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

#include "rna_dynamicpaint.c"

#pragma GCC diagnostic ignored "-Wunused-parameter"

/* Autogenerated Functions */


CollectionPropertyRNA rna_DynamicPaintCanvasSettings_rna_properties;
PointerPropertyRNA rna_DynamicPaintCanvasSettings_rna_type;
CollectionPropertyRNA rna_DynamicPaintCanvasSettings_canvas_surfaces;


CollectionPropertyRNA rna_DynamicPaintSurfaces_rna_properties;
PointerPropertyRNA rna_DynamicPaintSurfaces_rna_type;
IntPropertyRNA rna_DynamicPaintSurfaces_active_index;
PointerPropertyRNA rna_DynamicPaintSurfaces_active;


CollectionPropertyRNA rna_DynamicPaintBrushSettings_rna_properties;
PointerPropertyRNA rna_DynamicPaintBrushSettings_rna_type;
FloatPropertyRNA rna_DynamicPaintBrushSettings_paint_color;
FloatPropertyRNA rna_DynamicPaintBrushSettings_paint_alpha;
BoolPropertyRNA rna_DynamicPaintBrushSettings_use_material;
PointerPropertyRNA rna_DynamicPaintBrushSettings_material;
BoolPropertyRNA rna_DynamicPaintBrushSettings_use_absolute_alpha;
FloatPropertyRNA rna_DynamicPaintBrushSettings_paint_wetness;
BoolPropertyRNA rna_DynamicPaintBrushSettings_use_paint_erase;
EnumPropertyRNA rna_DynamicPaintBrushSettings_wave_type;
FloatPropertyRNA rna_DynamicPaintBrushSettings_wave_factor;
FloatPropertyRNA rna_DynamicPaintBrushSettings_wave_clamp;
BoolPropertyRNA rna_DynamicPaintBrushSettings_use_smudge;
FloatPropertyRNA rna_DynamicPaintBrushSettings_smudge_strength;
FloatPropertyRNA rna_DynamicPaintBrushSettings_velocity_max;
BoolPropertyRNA rna_DynamicPaintBrushSettings_use_velocity_alpha;
BoolPropertyRNA rna_DynamicPaintBrushSettings_use_velocity_depth;
BoolPropertyRNA rna_DynamicPaintBrushSettings_use_velocity_color;
EnumPropertyRNA rna_DynamicPaintBrushSettings_paint_source;
FloatPropertyRNA rna_DynamicPaintBrushSettings_paint_distance;
BoolPropertyRNA rna_DynamicPaintBrushSettings_use_proximity_ramp_alpha;
EnumPropertyRNA rna_DynamicPaintBrushSettings_proximity_falloff;
BoolPropertyRNA rna_DynamicPaintBrushSettings_use_proximity_project;
EnumPropertyRNA rna_DynamicPaintBrushSettings_ray_direction;
BoolPropertyRNA rna_DynamicPaintBrushSettings_invert_proximity;
BoolPropertyRNA rna_DynamicPaintBrushSettings_use_negative_volume;
PointerPropertyRNA rna_DynamicPaintBrushSettings_particle_system;
BoolPropertyRNA rna_DynamicPaintBrushSettings_use_particle_radius;
FloatPropertyRNA rna_DynamicPaintBrushSettings_solid_radius;
FloatPropertyRNA rna_DynamicPaintBrushSettings_smooth_radius;
PointerPropertyRNA rna_DynamicPaintBrushSettings_paint_ramp;
PointerPropertyRNA rna_DynamicPaintBrushSettings_velocity_ramp;


CollectionPropertyRNA rna_DynamicPaintSurface_rna_properties;
PointerPropertyRNA rna_DynamicPaintSurface_rna_type;
EnumPropertyRNA rna_DynamicPaintSurface_surface_format;
EnumPropertyRNA rna_DynamicPaintSurface_surface_type;
BoolPropertyRNA rna_DynamicPaintSurface_is_active;
BoolPropertyRNA rna_DynamicPaintSurface_show_preview;
StringPropertyRNA rna_DynamicPaintSurface_name;
PointerPropertyRNA rna_DynamicPaintSurface_brush_group;
BoolPropertyRNA rna_DynamicPaintSurface_use_dissolve;
IntPropertyRNA rna_DynamicPaintSurface_dissolve_speed;
BoolPropertyRNA rna_DynamicPaintSurface_use_drying;
IntPropertyRNA rna_DynamicPaintSurface_dry_speed;
IntPropertyRNA rna_DynamicPaintSurface_image_resolution;
StringPropertyRNA rna_DynamicPaintSurface_uv_layer;
IntPropertyRNA rna_DynamicPaintSurface_frame_start;
IntPropertyRNA rna_DynamicPaintSurface_frame_end;
IntPropertyRNA rna_DynamicPaintSurface_frame_substeps;
BoolPropertyRNA rna_DynamicPaintSurface_use_antialiasing;
FloatPropertyRNA rna_DynamicPaintSurface_brush_influence_scale;
FloatPropertyRNA rna_DynamicPaintSurface_brush_radius_scale;
EnumPropertyRNA rna_DynamicPaintSurface_init_color_type;
FloatPropertyRNA rna_DynamicPaintSurface_init_color;
PointerPropertyRNA rna_DynamicPaintSurface_init_texture;
StringPropertyRNA rna_DynamicPaintSurface_init_layername;
EnumPropertyRNA rna_DynamicPaintSurface_effect_ui;
BoolPropertyRNA rna_DynamicPaintSurface_use_dry_log;
BoolPropertyRNA rna_DynamicPaintSurface_use_dissolve_log;
BoolPropertyRNA rna_DynamicPaintSurface_use_spread;
FloatPropertyRNA rna_DynamicPaintSurface_spread_speed;
FloatPropertyRNA rna_DynamicPaintSurface_color_dry_threshold;
FloatPropertyRNA rna_DynamicPaintSurface_color_spread_speed;
BoolPropertyRNA rna_DynamicPaintSurface_use_drip;
BoolPropertyRNA rna_DynamicPaintSurface_use_shrink;
FloatPropertyRNA rna_DynamicPaintSurface_shrink_speed;
PointerPropertyRNA rna_DynamicPaintSurface_effector_weights;
FloatPropertyRNA rna_DynamicPaintSurface_drip_velocity;
FloatPropertyRNA rna_DynamicPaintSurface_drip_acceleration;
BoolPropertyRNA rna_DynamicPaintSurface_use_premultiply;
StringPropertyRNA rna_DynamicPaintSurface_image_output_path;
StringPropertyRNA rna_DynamicPaintSurface_output_name_a;
BoolPropertyRNA rna_DynamicPaintSurface_use_output_a;
StringPropertyRNA rna_DynamicPaintSurface_output_name_b;
BoolPropertyRNA rna_DynamicPaintSurface_use_output_b;
EnumPropertyRNA rna_DynamicPaintSurface_preview_id;
FloatPropertyRNA rna_DynamicPaintSurface_depth_clamp;
FloatPropertyRNA rna_DynamicPaintSurface_displace_factor;
EnumPropertyRNA rna_DynamicPaintSurface_image_fileformat;
EnumPropertyRNA rna_DynamicPaintSurface_displace_type;
BoolPropertyRNA rna_DynamicPaintSurface_use_incremental_displace;
FloatPropertyRNA rna_DynamicPaintSurface_wave_damping;
FloatPropertyRNA rna_DynamicPaintSurface_wave_speed;
FloatPropertyRNA rna_DynamicPaintSurface_wave_timescale;
FloatPropertyRNA rna_DynamicPaintSurface_wave_spring;
FloatPropertyRNA rna_DynamicPaintSurface_wave_smoothness;
BoolPropertyRNA rna_DynamicPaintSurface_use_wave_open_border;
PointerPropertyRNA rna_DynamicPaintSurface_point_cache;
BoolPropertyRNA rna_DynamicPaintSurface_is_cache_user;
BoolPropertyRNA rna_DynamicPaintSurface_use_color_preview;

extern FunctionRNA rna_DynamicPaintSurface_output_exists_func;
extern PointerPropertyRNA rna_DynamicPaintSurface_output_exists_object;
extern IntPropertyRNA rna_DynamicPaintSurface_output_exists_index;
extern BoolPropertyRNA rna_DynamicPaintSurface_output_exists_exists;


static PointerRNA DynamicPaintCanvasSettings_rna_properties_get(CollectionPropertyIterator *iter)
{
	return rna_builtin_properties_get(iter);
}

void DynamicPaintCanvasSettings_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

	memset(iter, 0, sizeof(*iter));
	iter->parent = *ptr;
	iter->prop = (PropertyRNA *)&rna_DynamicPaintCanvasSettings_rna_properties;

	rna_builtin_properties_begin(iter, ptr);

	if (iter->valid)
		iter->ptr = DynamicPaintCanvasSettings_rna_properties_get(iter);
}

void DynamicPaintCanvasSettings_rna_properties_next(CollectionPropertyIterator *iter)
{
	rna_builtin_properties_next(iter);

	if (iter->valid)
		iter->ptr = DynamicPaintCanvasSettings_rna_properties_get(iter);
}

void DynamicPaintCanvasSettings_rna_properties_end(CollectionPropertyIterator *iter)
{
	rna_iterator_listbase_end(iter);
}

int DynamicPaintCanvasSettings_rna_properties_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
	return rna_builtin_properties_lookup_string(ptr, key, r_ptr);
}

PointerRNA DynamicPaintCanvasSettings_rna_type_get(PointerRNA *ptr)
{
	return rna_builtin_type_get(ptr);
}

static PointerRNA DynamicPaintCanvasSettings_canvas_surfaces_get(CollectionPropertyIterator *iter)
{
	return rna_pointer_inherit_refine(&iter->parent, &RNA_DynamicPaintSurface, rna_iterator_listbase_get(iter));
}

void DynamicPaintCanvasSettings_canvas_surfaces_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

	memset(iter, 0, sizeof(*iter));
	iter->parent = *ptr;
	iter->prop = (PropertyRNA *)&rna_DynamicPaintCanvasSettings_canvas_surfaces;

	rna_DynamicPaint_surfaces_begin(iter, ptr);

	if (iter->valid)
		iter->ptr = DynamicPaintCanvasSettings_canvas_surfaces_get(iter);
}

void DynamicPaintCanvasSettings_canvas_surfaces_next(CollectionPropertyIterator *iter)
{
	rna_iterator_listbase_next(iter);

	if (iter->valid)
		iter->ptr = DynamicPaintCanvasSettings_canvas_surfaces_get(iter);
}

void DynamicPaintCanvasSettings_canvas_surfaces_end(CollectionPropertyIterator *iter)
{
	rna_iterator_listbase_end(iter);
}

static PointerRNA DynamicPaintSurfaces_rna_properties_get(CollectionPropertyIterator *iter)
{
	return rna_builtin_properties_get(iter);
}

void DynamicPaintSurfaces_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

	memset(iter, 0, sizeof(*iter));
	iter->parent = *ptr;
	iter->prop = (PropertyRNA *)&rna_DynamicPaintSurfaces_rna_properties;

	rna_builtin_properties_begin(iter, ptr);

	if (iter->valid)
		iter->ptr = DynamicPaintSurfaces_rna_properties_get(iter);
}

void DynamicPaintSurfaces_rna_properties_next(CollectionPropertyIterator *iter)
{
	rna_builtin_properties_next(iter);

	if (iter->valid)
		iter->ptr = DynamicPaintSurfaces_rna_properties_get(iter);
}

void DynamicPaintSurfaces_rna_properties_end(CollectionPropertyIterator *iter)
{
	rna_iterator_listbase_end(iter);
}

int DynamicPaintSurfaces_rna_properties_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
	return rna_builtin_properties_lookup_string(ptr, key, r_ptr);
}

PointerRNA DynamicPaintSurfaces_rna_type_get(PointerRNA *ptr)
{
	return rna_builtin_type_get(ptr);
}

int DynamicPaintSurfaces_active_index_get(PointerRNA *ptr)
{
	return rna_Surface_active_point_index_get(ptr);
}

void DynamicPaintSurfaces_active_index_set(PointerRNA *ptr, int value)
{
	rna_Surface_active_point_index_set(ptr, value);
}

PointerRNA DynamicPaintSurfaces_active_get(PointerRNA *ptr)
{
	return rna_PaintSurface_active_get(ptr);
}

static PointerRNA DynamicPaintBrushSettings_rna_properties_get(CollectionPropertyIterator *iter)
{
	return rna_builtin_properties_get(iter);
}

void DynamicPaintBrushSettings_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

	memset(iter, 0, sizeof(*iter));
	iter->parent = *ptr;
	iter->prop = (PropertyRNA *)&rna_DynamicPaintBrushSettings_rna_properties;

	rna_builtin_properties_begin(iter, ptr);

	if (iter->valid)
		iter->ptr = DynamicPaintBrushSettings_rna_properties_get(iter);
}

void DynamicPaintBrushSettings_rna_properties_next(CollectionPropertyIterator *iter)
{
	rna_builtin_properties_next(iter);

	if (iter->valid)
		iter->ptr = DynamicPaintBrushSettings_rna_properties_get(iter);
}

void DynamicPaintBrushSettings_rna_properties_end(CollectionPropertyIterator *iter)
{
	rna_iterator_listbase_end(iter);
}

int DynamicPaintBrushSettings_rna_properties_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
	return rna_builtin_properties_lookup_string(ptr, key, r_ptr);
}

PointerRNA DynamicPaintBrushSettings_rna_type_get(PointerRNA *ptr)
{
	return rna_builtin_type_get(ptr);
}

void DynamicPaintBrushSettings_paint_color_get(PointerRNA *ptr, float values[3])
{
	DynamicPaintBrushSettings *data = (DynamicPaintBrushSettings *)(ptr->data);
	unsigned int i;

	for (i = 0; i < 3; i++) {
		values[i] = (float)((&data->r)[i]);
	}
}

void DynamicPaintBrushSettings_paint_color_set(PointerRNA *ptr, const float values[3])
{
	DynamicPaintBrushSettings *data = (DynamicPaintBrushSettings *)(ptr->data);
	unsigned int i;

	for (i = 0; i < 3; i++) {
		(&data->r)[i] = CLAMPIS(values[i], 0.0f, FLT_MAX);
	}
}

float DynamicPaintBrushSettings_paint_alpha_get(PointerRNA *ptr)
{
	DynamicPaintBrushSettings *data = (DynamicPaintBrushSettings *)(ptr->data);
	return (float)(data->alpha);
}

void DynamicPaintBrushSettings_paint_alpha_set(PointerRNA *ptr, float value)
{
	DynamicPaintBrushSettings *data = (DynamicPaintBrushSettings *)(ptr->data);
	data->alpha = CLAMPIS(value, 0.0f, 1.0f);
}

int DynamicPaintBrushSettings_use_material_get(PointerRNA *ptr)
{
	DynamicPaintBrushSettings *data = (DynamicPaintBrushSettings *)(ptr->data);
	return (((data->flags) & 2) != 0);
}

void DynamicPaintBrushSettings_use_material_set(PointerRNA *ptr, int value)
{
	DynamicPaintBrushSettings *data = (DynamicPaintBrushSettings *)(ptr->data);
	if (value) data->flags |= 2;
	else data->flags &= ~2;
}

PointerRNA DynamicPaintBrushSettings_material_get(PointerRNA *ptr)
{
	DynamicPaintBrushSettings *data = (DynamicPaintBrushSettings *)(ptr->data);
	return rna_pointer_inherit_refine(ptr, &RNA_Material, data->mat);
}

void DynamicPaintBrushSettings_material_set(PointerRNA *ptr, PointerRNA value)
{
	DynamicPaintBrushSettings *data = (DynamicPaintBrushSettings *)(ptr->data);

	if (data->mat)
		id_us_min((ID *)data->mat);
	if (value.data)
		id_us_plus((ID *)value.data);

	data->mat = value.data;
}

int DynamicPaintBrushSettings_use_absolute_alpha_get(PointerRNA *ptr)
{
	DynamicPaintBrushSettings *data = (DynamicPaintBrushSettings *)(ptr->data);
	return (((data->flags) & 4) != 0);
}

void DynamicPaintBrushSettings_use_absolute_alpha_set(PointerRNA *ptr, int value)
{
	DynamicPaintBrushSettings *data = (DynamicPaintBrushSettings *)(ptr->data);
	if (value) data->flags |= 4;
	else data->flags &= ~4;
}

float DynamicPaintBrushSettings_paint_wetness_get(PointerRNA *ptr)
{
	DynamicPaintBrushSettings *data = (DynamicPaintBrushSettings *)(ptr->data);
	return (float)(data->wetness);
}

void DynamicPaintBrushSettings_paint_wetness_set(PointerRNA *ptr, float value)
{
	DynamicPaintBrushSettings *data = (DynamicPaintBrushSettings *)(ptr->data);
	data->wetness = CLAMPIS(value, 0.0f, 1.0f);
}

int DynamicPaintBrushSettings_use_paint_erase_get(PointerRNA *ptr)
{
	DynamicPaintBrushSettings *data = (DynamicPaintBrushSettings *)(ptr->data);
	return (((data->flags) & 8) != 0);
}

void DynamicPaintBrushSettings_use_paint_erase_set(PointerRNA *ptr, int value)
{
	DynamicPaintBrushSettings *data = (DynamicPaintBrushSettings *)(ptr->data);
	if (value) data->flags |= 8;
	else data->flags &= ~8;
}

int DynamicPaintBrushSettings_wave_type_get(PointerRNA *ptr)
{
	DynamicPaintBrushSettings *data = (DynamicPaintBrushSettings *)(ptr->data);
	return (int)(data->wave_type);
}

void DynamicPaintBrushSettings_wave_type_set(PointerRNA *ptr, int value)
{
	DynamicPaintBrushSettings *data = (DynamicPaintBrushSettings *)(ptr->data);
	data->wave_type = value;
}

float DynamicPaintBrushSettings_wave_factor_get(PointerRNA *ptr)
{
	DynamicPaintBrushSettings *data = (DynamicPaintBrushSettings *)(ptr->data);
	return (float)(data->wave_factor);
}

void DynamicPaintBrushSettings_wave_factor_set(PointerRNA *ptr, float value)
{
	DynamicPaintBrushSettings *data = (DynamicPaintBrushSettings *)(ptr->data);
	data->wave_factor = CLAMPIS(value, -2.0f, 2.0f);
}

float DynamicPaintBrushSettings_wave_clamp_get(PointerRNA *ptr)
{
	DynamicPaintBrushSettings *data = (DynamicPaintBrushSettings *)(ptr->data);
	return (float)(data->wave_clamp);
}

void DynamicPaintBrushSettings_wave_clamp_set(PointerRNA *ptr, float value)
{
	DynamicPaintBrushSettings *data = (DynamicPaintBrushSettings *)(ptr->data);
	data->wave_clamp = CLAMPIS(value, 0.0f, 50.0f);
}

int DynamicPaintBrushSettings_use_smudge_get(PointerRNA *ptr)
{
	DynamicPaintBrushSettings *data = (DynamicPaintBrushSettings *)(ptr->data);
	return (((data->flags) & 256) != 0);
}

void DynamicPaintBrushSettings_use_smudge_set(PointerRNA *ptr, int value)
{
	DynamicPaintBrushSettings *data = (DynamicPaintBrushSettings *)(ptr->data);
	if (value) data->flags |= 256;
	else data->flags &= ~256;
}

float DynamicPaintBrushSettings_smudge_strength_get(PointerRNA *ptr)
{
	DynamicPaintBrushSettings *data = (DynamicPaintBrushSettings *)(ptr->data);
	return (float)(data->smudge_strength);
}

void DynamicPaintBrushSettings_smudge_strength_set(PointerRNA *ptr, float value)
{
	DynamicPaintBrushSettings *data = (DynamicPaintBrushSettings *)(ptr->data);
	data->smudge_strength = CLAMPIS(value, 0.0f, 1.0f);
}

float DynamicPaintBrushSettings_velocity_max_get(PointerRNA *ptr)
{
	DynamicPaintBrushSettings *data = (DynamicPaintBrushSettings *)(ptr->data);
	return (float)(data->max_velocity);
}

void DynamicPaintBrushSettings_velocity_max_set(PointerRNA *ptr, float value)
{
	DynamicPaintBrushSettings *data = (DynamicPaintBrushSettings *)(ptr->data);
	data->max_velocity = CLAMPIS(value, 0.0001000000f, 10.0f);
}

int DynamicPaintBrushSettings_use_velocity_alpha_get(PointerRNA *ptr)
{
	DynamicPaintBrushSettings *data = (DynamicPaintBrushSettings *)(ptr->data);
	return (((data->flags) & 512) != 0);
}

void DynamicPaintBrushSettings_use_velocity_alpha_set(PointerRNA *ptr, int value)
{
	DynamicPaintBrushSettings *data = (DynamicPaintBrushSettings *)(ptr->data);
	if (value) data->flags |= 512;
	else data->flags &= ~512;
}

int DynamicPaintBrushSettings_use_velocity_depth_get(PointerRNA *ptr)
{
	DynamicPaintBrushSettings *data = (DynamicPaintBrushSettings *)(ptr->data);
	return (((data->flags) & 2048) != 0);
}

void DynamicPaintBrushSettings_use_velocity_depth_set(PointerRNA *ptr, int value)
{
	DynamicPaintBrushSettings *data = (DynamicPaintBrushSettings *)(ptr->data);
	if (value) data->flags |= 2048;
	else data->flags &= ~2048;
}

int DynamicPaintBrushSettings_use_velocity_color_get(PointerRNA *ptr)
{
	DynamicPaintBrushSettings *data = (DynamicPaintBrushSettings *)(ptr->data);
	return (((data->flags) & 1024) != 0);
}

void DynamicPaintBrushSettings_use_velocity_color_set(PointerRNA *ptr, int value)
{
	DynamicPaintBrushSettings *data = (DynamicPaintBrushSettings *)(ptr->data);
	if (value) data->flags |= 1024;
	else data->flags &= ~1024;
}

int DynamicPaintBrushSettings_paint_source_get(PointerRNA *ptr)
{
	DynamicPaintBrushSettings *data = (DynamicPaintBrushSettings *)(ptr->data);
	return (int)(data->collision);
}

void DynamicPaintBrushSettings_paint_source_set(PointerRNA *ptr, int value)
{
	DynamicPaintBrushSettings *data = (DynamicPaintBrushSettings *)(ptr->data);
	data->collision = value;
}

float DynamicPaintBrushSettings_paint_distance_get(PointerRNA *ptr)
{
	DynamicPaintBrushSettings *data = (DynamicPaintBrushSettings *)(ptr->data);
	return (float)(data->paint_distance);
}

void DynamicPaintBrushSettings_paint_distance_set(PointerRNA *ptr, float value)
{
	DynamicPaintBrushSettings *data = (DynamicPaintBrushSettings *)(ptr->data);
	data->paint_distance = CLAMPIS(value, 0.0f, 500.0f);
}

int DynamicPaintBrushSettings_use_proximity_ramp_alpha_get(PointerRNA *ptr)
{
	DynamicPaintBrushSettings *data = (DynamicPaintBrushSettings *)(ptr->data);
	return (((data->flags) & 16) != 0);
}

void DynamicPaintBrushSettings_use_proximity_ramp_alpha_set(PointerRNA *ptr, int value)
{
	DynamicPaintBrushSettings *data = (DynamicPaintBrushSettings *)(ptr->data);
	if (value) data->flags |= 16;
	else data->flags &= ~16;
}

int DynamicPaintBrushSettings_proximity_falloff_get(PointerRNA *ptr)
{
	DynamicPaintBrushSettings *data = (DynamicPaintBrushSettings *)(ptr->data);
	return (int)(data->proximity_falloff);
}

void DynamicPaintBrushSettings_proximity_falloff_set(PointerRNA *ptr, int value)
{
	DynamicPaintBrushSettings *data = (DynamicPaintBrushSettings *)(ptr->data);
	data->proximity_falloff = value;
}

int DynamicPaintBrushSettings_use_proximity_project_get(PointerRNA *ptr)
{
	DynamicPaintBrushSettings *data = (DynamicPaintBrushSettings *)(ptr->data);
	return (((data->flags) & 32) != 0);
}

void DynamicPaintBrushSettings_use_proximity_project_set(PointerRNA *ptr, int value)
{
	DynamicPaintBrushSettings *data = (DynamicPaintBrushSettings *)(ptr->data);
	if (value) data->flags |= 32;
	else data->flags &= ~32;
}

int DynamicPaintBrushSettings_ray_direction_get(PointerRNA *ptr)
{
	DynamicPaintBrushSettings *data = (DynamicPaintBrushSettings *)(ptr->data);
	return (int)(data->ray_dir);
}

void DynamicPaintBrushSettings_ray_direction_set(PointerRNA *ptr, int value)
{
	DynamicPaintBrushSettings *data = (DynamicPaintBrushSettings *)(ptr->data);
	data->ray_dir = value;
}

int DynamicPaintBrushSettings_invert_proximity_get(PointerRNA *ptr)
{
	DynamicPaintBrushSettings *data = (DynamicPaintBrushSettings *)(ptr->data);
	return (((data->flags) & 64) != 0);
}

void DynamicPaintBrushSettings_invert_proximity_set(PointerRNA *ptr, int value)
{
	DynamicPaintBrushSettings *data = (DynamicPaintBrushSettings *)(ptr->data);
	if (value) data->flags |= 64;
	else data->flags &= ~64;
}

int DynamicPaintBrushSettings_use_negative_volume_get(PointerRNA *ptr)
{
	DynamicPaintBrushSettings *data = (DynamicPaintBrushSettings *)(ptr->data);
	return (((data->flags) & 128) != 0);
}

void DynamicPaintBrushSettings_use_negative_volume_set(PointerRNA *ptr, int value)
{
	DynamicPaintBrushSettings *data = (DynamicPaintBrushSettings *)(ptr->data);
	if (value) data->flags |= 128;
	else data->flags &= ~128;
}

PointerRNA DynamicPaintBrushSettings_particle_system_get(PointerRNA *ptr)
{
	DynamicPaintBrushSettings *data = (DynamicPaintBrushSettings *)(ptr->data);
	return rna_pointer_inherit_refine(ptr, &RNA_ParticleSystem, data->psys);
}

void DynamicPaintBrushSettings_particle_system_set(PointerRNA *ptr, PointerRNA value)
{
	DynamicPaintBrushSettings *data = (DynamicPaintBrushSettings *)(ptr->data);
	data->psys = value.data;
}

int DynamicPaintBrushSettings_use_particle_radius_get(PointerRNA *ptr)
{
	DynamicPaintBrushSettings *data = (DynamicPaintBrushSettings *)(ptr->data);
	return (((data->flags) & 1) != 0);
}

void DynamicPaintBrushSettings_use_particle_radius_set(PointerRNA *ptr, int value)
{
	DynamicPaintBrushSettings *data = (DynamicPaintBrushSettings *)(ptr->data);
	if (value) data->flags |= 1;
	else data->flags &= ~1;
}

float DynamicPaintBrushSettings_solid_radius_get(PointerRNA *ptr)
{
	DynamicPaintBrushSettings *data = (DynamicPaintBrushSettings *)(ptr->data);
	return (float)(data->particle_radius);
}

void DynamicPaintBrushSettings_solid_radius_set(PointerRNA *ptr, float value)
{
	DynamicPaintBrushSettings *data = (DynamicPaintBrushSettings *)(ptr->data);
	data->particle_radius = CLAMPIS(value, 0.0099999998f, 10.0f);
}

float DynamicPaintBrushSettings_smooth_radius_get(PointerRNA *ptr)
{
	DynamicPaintBrushSettings *data = (DynamicPaintBrushSettings *)(ptr->data);
	return (float)(data->particle_smooth);
}

void DynamicPaintBrushSettings_smooth_radius_set(PointerRNA *ptr, float value)
{
	DynamicPaintBrushSettings *data = (DynamicPaintBrushSettings *)(ptr->data);
	data->particle_smooth = CLAMPIS(value, 0.0f, 10.0f);
}

PointerRNA DynamicPaintBrushSettings_paint_ramp_get(PointerRNA *ptr)
{
	DynamicPaintBrushSettings *data = (DynamicPaintBrushSettings *)(ptr->data);
	return rna_pointer_inherit_refine(ptr, &RNA_ColorRamp, data->paint_ramp);
}

PointerRNA DynamicPaintBrushSettings_velocity_ramp_get(PointerRNA *ptr)
{
	DynamicPaintBrushSettings *data = (DynamicPaintBrushSettings *)(ptr->data);
	return rna_pointer_inherit_refine(ptr, &RNA_ColorRamp, data->vel_ramp);
}

static PointerRNA DynamicPaintSurface_rna_properties_get(CollectionPropertyIterator *iter)
{
	return rna_builtin_properties_get(iter);
}

void DynamicPaintSurface_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

	memset(iter, 0, sizeof(*iter));
	iter->parent = *ptr;
	iter->prop = (PropertyRNA *)&rna_DynamicPaintSurface_rna_properties;

	rna_builtin_properties_begin(iter, ptr);

	if (iter->valid)
		iter->ptr = DynamicPaintSurface_rna_properties_get(iter);
}

void DynamicPaintSurface_rna_properties_next(CollectionPropertyIterator *iter)
{
	rna_builtin_properties_next(iter);

	if (iter->valid)
		iter->ptr = DynamicPaintSurface_rna_properties_get(iter);
}

void DynamicPaintSurface_rna_properties_end(CollectionPropertyIterator *iter)
{
	rna_iterator_listbase_end(iter);
}

int DynamicPaintSurface_rna_properties_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
	return rna_builtin_properties_lookup_string(ptr, key, r_ptr);
}

PointerRNA DynamicPaintSurface_rna_type_get(PointerRNA *ptr)
{
	return rna_builtin_type_get(ptr);
}

int DynamicPaintSurface_surface_format_get(PointerRNA *ptr)
{
	DynamicPaintSurface *data = (DynamicPaintSurface *)(ptr->data);
	return (int)(data->format);
}

void DynamicPaintSurface_surface_format_set(PointerRNA *ptr, int value)
{
	DynamicPaintSurface *data = (DynamicPaintSurface *)(ptr->data);
	data->format = value;
}

int DynamicPaintSurface_surface_type_get(PointerRNA *ptr)
{
	DynamicPaintSurface *data = (DynamicPaintSurface *)(ptr->data);
	return (int)(data->type);
}

void DynamicPaintSurface_surface_type_set(PointerRNA *ptr, int value)
{
	DynamicPaintSurface *data = (DynamicPaintSurface *)(ptr->data);
	data->type = value;
}

int DynamicPaintSurface_is_active_get(PointerRNA *ptr)
{
	DynamicPaintSurface *data = (DynamicPaintSurface *)(ptr->data);
	return (((data->flags) & 1) != 0);
}

void DynamicPaintSurface_is_active_set(PointerRNA *ptr, int value)
{
	DynamicPaintSurface *data = (DynamicPaintSurface *)(ptr->data);
	if (value) data->flags |= 1;
	else data->flags &= ~1;
}

int DynamicPaintSurface_show_preview_get(PointerRNA *ptr)
{
	DynamicPaintSurface *data = (DynamicPaintSurface *)(ptr->data);
	return (((data->flags) & 64) != 0);
}

void DynamicPaintSurface_show_preview_set(PointerRNA *ptr, int value)
{
	DynamicPaintSurface *data = (DynamicPaintSurface *)(ptr->data);
	if (value) data->flags |= 64;
	else data->flags &= ~64;
}

void DynamicPaintSurface_name_get(PointerRNA *ptr, char *value)
{
	DynamicPaintSurface *data = (DynamicPaintSurface *)(ptr->data);
	BLI_strncpy_utf8(value, data->name, 64);
}

int DynamicPaintSurface_name_length(PointerRNA *ptr)
{
	DynamicPaintSurface *data = (DynamicPaintSurface *)(ptr->data);
	return strlen(data->name);
}

void DynamicPaintSurface_name_set(PointerRNA *ptr, const char *value)
{
	DynamicPaintSurface *data = (DynamicPaintSurface *)(ptr->data);
	BLI_strncpy_utf8(data->name, value, 64);
}

PointerRNA DynamicPaintSurface_brush_group_get(PointerRNA *ptr)
{
	DynamicPaintSurface *data = (DynamicPaintSurface *)(ptr->data);
	return rna_pointer_inherit_refine(ptr, &RNA_Group, data->brush_group);
}

void DynamicPaintSurface_brush_group_set(PointerRNA *ptr, PointerRNA value)
{
	DynamicPaintSurface *data = (DynamicPaintSurface *)(ptr->data);
	if (value.data)
		id_lib_extern((ID *)value.data);

	data->brush_group = value.data;
}

int DynamicPaintSurface_use_dissolve_get(PointerRNA *ptr)
{
	DynamicPaintSurface *data = (DynamicPaintSurface *)(ptr->data);
	return (((data->flags) & 4) != 0);
}

void DynamicPaintSurface_use_dissolve_set(PointerRNA *ptr, int value)
{
	DynamicPaintSurface *data = (DynamicPaintSurface *)(ptr->data);
	if (value) data->flags |= 4;
	else data->flags &= ~4;
}

int DynamicPaintSurface_dissolve_speed_get(PointerRNA *ptr)
{
	DynamicPaintSurface *data = (DynamicPaintSurface *)(ptr->data);
	return (int)(data->diss_speed);
}

void DynamicPaintSurface_dissolve_speed_set(PointerRNA *ptr, int value)
{
	DynamicPaintSurface *data = (DynamicPaintSurface *)(ptr->data);
	data->diss_speed = CLAMPIS(value, 1, 10000);
}

int DynamicPaintSurface_use_drying_get(PointerRNA *ptr)
{
	DynamicPaintSurface *data = (DynamicPaintSurface *)(ptr->data);
	return (((data->flags) & 512) != 0);
}

void DynamicPaintSurface_use_drying_set(PointerRNA *ptr, int value)
{
	DynamicPaintSurface *data = (DynamicPaintSurface *)(ptr->data);
	if (value) data->flags |= 512;
	else data->flags &= ~512;
}

int DynamicPaintSurface_dry_speed_get(PointerRNA *ptr)
{
	DynamicPaintSurface *data = (DynamicPaintSurface *)(ptr->data);
	return (int)(data->dry_speed);
}

void DynamicPaintSurface_dry_speed_set(PointerRNA *ptr, int value)
{
	DynamicPaintSurface *data = (DynamicPaintSurface *)(ptr->data);
	data->dry_speed = CLAMPIS(value, 1, 10000);
}

int DynamicPaintSurface_image_resolution_get(PointerRNA *ptr)
{
	DynamicPaintSurface *data = (DynamicPaintSurface *)(ptr->data);
	return (int)(data->image_resolution);
}

void DynamicPaintSurface_image_resolution_set(PointerRNA *ptr, int value)
{
	DynamicPaintSurface *data = (DynamicPaintSurface *)(ptr->data);
	data->image_resolution = CLAMPIS(value, 16, 4096);
}

void DynamicPaintSurface_uv_layer_get(PointerRNA *ptr, char *value)
{
	DynamicPaintSurface *data = (DynamicPaintSurface *)(ptr->data);
	BLI_strncpy_utf8(value, data->uvlayer_name, 64);
}

int DynamicPaintSurface_uv_layer_length(PointerRNA *ptr)
{
	DynamicPaintSurface *data = (DynamicPaintSurface *)(ptr->data);
	return strlen(data->uvlayer_name);
}

void DynamicPaintSurface_uv_layer_set(PointerRNA *ptr, const char *value)
{
	rna_DynamicPaint_uvlayer_set(ptr, value);
}

int DynamicPaintSurface_frame_start_get(PointerRNA *ptr)
{
	DynamicPaintSurface *data = (DynamicPaintSurface *)(ptr->data);
	return (int)(data->start_frame);
}

void DynamicPaintSurface_frame_start_set(PointerRNA *ptr, int value)
{
	DynamicPaintSurface *data = (DynamicPaintSurface *)(ptr->data);
	data->start_frame = CLAMPIS(value, 1, 300000);
}

int DynamicPaintSurface_frame_end_get(PointerRNA *ptr)
{
	DynamicPaintSurface *data = (DynamicPaintSurface *)(ptr->data);
	return (int)(data->end_frame);
}

void DynamicPaintSurface_frame_end_set(PointerRNA *ptr, int value)
{
	DynamicPaintSurface *data = (DynamicPaintSurface *)(ptr->data);
	data->end_frame = CLAMPIS(value, 1, 300000);
}

int DynamicPaintSurface_frame_substeps_get(PointerRNA *ptr)
{
	DynamicPaintSurface *data = (DynamicPaintSurface *)(ptr->data);
	return (int)(data->substeps);
}

void DynamicPaintSurface_frame_substeps_set(PointerRNA *ptr, int value)
{
	DynamicPaintSurface *data = (DynamicPaintSurface *)(ptr->data);
	data->substeps = CLAMPIS(value, 0, 20);
}

int DynamicPaintSurface_use_antialiasing_get(PointerRNA *ptr)
{
	DynamicPaintSurface *data = (DynamicPaintSurface *)(ptr->data);
	return (((data->flags) & 2) != 0);
}

void DynamicPaintSurface_use_antialiasing_set(PointerRNA *ptr, int value)
{
	DynamicPaintSurface *data = (DynamicPaintSurface *)(ptr->data);
	if (value) data->flags |= 2;
	else data->flags &= ~2;
}

float DynamicPaintSurface_brush_influence_scale_get(PointerRNA *ptr)
{
	DynamicPaintSurface *data = (DynamicPaintSurface *)(ptr->data);
	return (float)(data->influence_scale);
}

void DynamicPaintSurface_brush_influence_scale_set(PointerRNA *ptr, float value)
{
	DynamicPaintSurface *data = (DynamicPaintSurface *)(ptr->data);
	data->influence_scale = CLAMPIS(value, 0.0f, 1.0f);
}

float DynamicPaintSurface_brush_radius_scale_get(PointerRNA *ptr)
{
	DynamicPaintSurface *data = (DynamicPaintSurface *)(ptr->data);
	return (float)(data->radius_scale);
}

void DynamicPaintSurface_brush_radius_scale_set(PointerRNA *ptr, float value)
{
	DynamicPaintSurface *data = (DynamicPaintSurface *)(ptr->data);
	data->radius_scale = CLAMPIS(value, 0.0f, 10.0f);
}

int DynamicPaintSurface_init_color_type_get(PointerRNA *ptr)
{
	DynamicPaintSurface *data = (DynamicPaintSurface *)(ptr->data);
	return (int)(data->init_color_type);
}

void DynamicPaintSurface_init_color_type_set(PointerRNA *ptr, int value)
{
	DynamicPaintSurface *data = (DynamicPaintSurface *)(ptr->data);
	data->init_color_type = value;
}

void DynamicPaintSurface_init_color_get(PointerRNA *ptr, float values[4])
{
	DynamicPaintSurface *data = (DynamicPaintSurface *)(ptr->data);
	unsigned int i;

	for (i = 0; i < 4; i++) {
		values[i] = (float)(((float *)data->init_color)[i]);
	}
}

void DynamicPaintSurface_init_color_set(PointerRNA *ptr, const float values[4])
{
	DynamicPaintSurface *data = (DynamicPaintSurface *)(ptr->data);
	unsigned int i;

	for (i = 0; i < 4; i++) {
		((float *)data->init_color)[i] = CLAMPIS(values[i], 0.0f, FLT_MAX);
	}
}

PointerRNA DynamicPaintSurface_init_texture_get(PointerRNA *ptr)
{
	DynamicPaintSurface *data = (DynamicPaintSurface *)(ptr->data);
	return rna_pointer_inherit_refine(ptr, &RNA_Texture, data->init_texture);
}

void DynamicPaintSurface_init_texture_set(PointerRNA *ptr, PointerRNA value)
{
	DynamicPaintSurface *data = (DynamicPaintSurface *)(ptr->data);

	if (data->init_texture)
		id_us_min((ID *)data->init_texture);
	if (value.data)
		id_us_plus((ID *)value.data);

	data->init_texture = value.data;
}

void DynamicPaintSurface_init_layername_get(PointerRNA *ptr, char *value)
{
	DynamicPaintSurface *data = (DynamicPaintSurface *)(ptr->data);
	BLI_strncpy_utf8(value, data->init_layername, 64);
}

int DynamicPaintSurface_init_layername_length(PointerRNA *ptr)
{
	DynamicPaintSurface *data = (DynamicPaintSurface *)(ptr->data);
	return strlen(data->init_layername);
}

void DynamicPaintSurface_init_layername_set(PointerRNA *ptr, const char *value)
{
	DynamicPaintSurface *data = (DynamicPaintSurface *)(ptr->data);
	BLI_strncpy_utf8(data->init_layername, value, 64);
}

int DynamicPaintSurface_effect_ui_get(PointerRNA *ptr)
{
	DynamicPaintSurface *data = (DynamicPaintSurface *)(ptr->data);
	return (int)(data->effect_ui);
}

void DynamicPaintSurface_effect_ui_set(PointerRNA *ptr, int value)
{
	DynamicPaintSurface *data = (DynamicPaintSurface *)(ptr->data);
	data->effect_ui = value;
}

int DynamicPaintSurface_use_dry_log_get(PointerRNA *ptr)
{
	DynamicPaintSurface *data = (DynamicPaintSurface *)(ptr->data);
	return (((data->flags) & 32) != 0);
}

void DynamicPaintSurface_use_dry_log_set(PointerRNA *ptr, int value)
{
	DynamicPaintSurface *data = (DynamicPaintSurface *)(ptr->data);
	if (value) data->flags |= 32;
	else data->flags &= ~32;
}

int DynamicPaintSurface_use_dissolve_log_get(PointerRNA *ptr)
{
	DynamicPaintSurface *data = (DynamicPaintSurface *)(ptr->data);
	return (((data->flags) & 16) != 0);
}

void DynamicPaintSurface_use_dissolve_log_set(PointerRNA *ptr, int value)
{
	DynamicPaintSurface *data = (DynamicPaintSurface *)(ptr->data);
	if (value) data->flags |= 16;
	else data->flags &= ~16;
}

int DynamicPaintSurface_use_spread_get(PointerRNA *ptr)
{
	DynamicPaintSurface *data = (DynamicPaintSurface *)(ptr->data);
	return (((data->effect) & 1) != 0);
}

void DynamicPaintSurface_use_spread_set(PointerRNA *ptr, int value)
{
	DynamicPaintSurface *data = (DynamicPaintSurface *)(ptr->data);
	if (value) data->effect |= 1;
	else data->effect &= ~1;
}

float DynamicPaintSurface_spread_speed_get(PointerRNA *ptr)
{
	DynamicPaintSurface *data = (DynamicPaintSurface *)(ptr->data);
	return (float)(data->spread_speed);
}

void DynamicPaintSurface_spread_speed_set(PointerRNA *ptr, float value)
{
	DynamicPaintSurface *data = (DynamicPaintSurface *)(ptr->data);
	data->spread_speed = CLAMPIS(value, 0.0010000000f, 10.0f);
}

float DynamicPaintSurface_color_dry_threshold_get(PointerRNA *ptr)
{
	DynamicPaintSurface *data = (DynamicPaintSurface *)(ptr->data);
	return (float)(data->color_dry_threshold);
}

void DynamicPaintSurface_color_dry_threshold_set(PointerRNA *ptr, float value)
{
	DynamicPaintSurface *data = (DynamicPaintSurface *)(ptr->data);
	data->color_dry_threshold = CLAMPIS(value, 0.0f, 1.0f);
}

float DynamicPaintSurface_color_spread_speed_get(PointerRNA *ptr)
{
	DynamicPaintSurface *data = (DynamicPaintSurface *)(ptr->data);
	return (float)(data->color_spread_speed);
}

void DynamicPaintSurface_color_spread_speed_set(PointerRNA *ptr, float value)
{
	DynamicPaintSurface *data = (DynamicPaintSurface *)(ptr->data);
	data->color_spread_speed = CLAMPIS(value, 0.0f, 2.0f);
}

int DynamicPaintSurface_use_drip_get(PointerRNA *ptr)
{
	DynamicPaintSurface *data = (DynamicPaintSurface *)(ptr->data);
	return (((data->effect) & 2) != 0);
}

void DynamicPaintSurface_use_drip_set(PointerRNA *ptr, int value)
{
	DynamicPaintSurface *data = (DynamicPaintSurface *)(ptr->data);
	if (value) data->effect |= 2;
	else data->effect &= ~2;
}

int DynamicPaintSurface_use_shrink_get(PointerRNA *ptr)
{
	DynamicPaintSurface *data = (DynamicPaintSurface *)(ptr->data);
	return (((data->effect) & 4) != 0);
}

void DynamicPaintSurface_use_shrink_set(PointerRNA *ptr, int value)
{
	DynamicPaintSurface *data = (DynamicPaintSurface *)(ptr->data);
	if (value) data->effect |= 4;
	else data->effect &= ~4;
}

float DynamicPaintSurface_shrink_speed_get(PointerRNA *ptr)
{
	DynamicPaintSurface *data = (DynamicPaintSurface *)(ptr->data);
	return (float)(data->shrink_speed);
}

void DynamicPaintSurface_shrink_speed_set(PointerRNA *ptr, float value)
{
	DynamicPaintSurface *data = (DynamicPaintSurface *)(ptr->data);
	data->shrink_speed = CLAMPIS(value, 0.0010000000f, 10.0f);
}

PointerRNA DynamicPaintSurface_effector_weights_get(PointerRNA *ptr)
{
	DynamicPaintSurface *data = (DynamicPaintSurface *)(ptr->data);
	return rna_pointer_inherit_refine(ptr, &RNA_EffectorWeights, data->effector_weights);
}

float DynamicPaintSurface_drip_velocity_get(PointerRNA *ptr)
{
	DynamicPaintSurface *data = (DynamicPaintSurface *)(ptr->data);
	return (float)(data->drip_vel);
}

void DynamicPaintSurface_drip_velocity_set(PointerRNA *ptr, float value)
{
	DynamicPaintSurface *data = (DynamicPaintSurface *)(ptr->data);
	data->drip_vel = CLAMPIS(value, -200.0f, 200.0f);
}

float DynamicPaintSurface_drip_acceleration_get(PointerRNA *ptr)
{
	DynamicPaintSurface *data = (DynamicPaintSurface *)(ptr->data);
	return (float)(data->drip_acc);
}

void DynamicPaintSurface_drip_acceleration_set(PointerRNA *ptr, float value)
{
	DynamicPaintSurface *data = (DynamicPaintSurface *)(ptr->data);
	data->drip_acc = CLAMPIS(value, -200.0f, 200.0f);
}

int DynamicPaintSurface_use_premultiply_get(PointerRNA *ptr)
{
	DynamicPaintSurface *data = (DynamicPaintSurface *)(ptr->data);
	return (((data->flags) & 8) != 0);
}

void DynamicPaintSurface_use_premultiply_set(PointerRNA *ptr, int value)
{
	DynamicPaintSurface *data = (DynamicPaintSurface *)(ptr->data);
	if (value) data->flags |= 8;
	else data->flags &= ~8;
}

void DynamicPaintSurface_image_output_path_get(PointerRNA *ptr, char *value)
{
	DynamicPaintSurface *data = (DynamicPaintSurface *)(ptr->data);
	BLI_strncpy(value, data->image_output_path, 1024);
}

int DynamicPaintSurface_image_output_path_length(PointerRNA *ptr)
{
	DynamicPaintSurface *data = (DynamicPaintSurface *)(ptr->data);
	return strlen(data->image_output_path);
}

void DynamicPaintSurface_image_output_path_set(PointerRNA *ptr, const char *value)
{
	DynamicPaintSurface *data = (DynamicPaintSurface *)(ptr->data);
	BLI_strncpy(data->image_output_path, value, 1024);
}

void DynamicPaintSurface_output_name_a_get(PointerRNA *ptr, char *value)
{
	DynamicPaintSurface *data = (DynamicPaintSurface *)(ptr->data);
	BLI_strncpy_utf8(value, data->output_name, 64);
}

int DynamicPaintSurface_output_name_a_length(PointerRNA *ptr)
{
	DynamicPaintSurface *data = (DynamicPaintSurface *)(ptr->data);
	return strlen(data->output_name);
}

void DynamicPaintSurface_output_name_a_set(PointerRNA *ptr, const char *value)
{
	DynamicPaintSurface *data = (DynamicPaintSurface *)(ptr->data);
	BLI_strncpy_utf8(data->output_name, value, 64);
}

int DynamicPaintSurface_use_output_a_get(PointerRNA *ptr)
{
	DynamicPaintSurface *data = (DynamicPaintSurface *)(ptr->data);
	return (((data->flags) & 1024) != 0);
}

void DynamicPaintSurface_use_output_a_set(PointerRNA *ptr, int value)
{
	DynamicPaintSurface *data = (DynamicPaintSurface *)(ptr->data);
	if (value) data->flags |= 1024;
	else data->flags &= ~1024;
}

void DynamicPaintSurface_output_name_b_get(PointerRNA *ptr, char *value)
{
	DynamicPaintSurface *data = (DynamicPaintSurface *)(ptr->data);
	BLI_strncpy_utf8(value, data->output_name2, 64);
}

int DynamicPaintSurface_output_name_b_length(PointerRNA *ptr)
{
	DynamicPaintSurface *data = (DynamicPaintSurface *)(ptr->data);
	return strlen(data->output_name2);
}

void DynamicPaintSurface_output_name_b_set(PointerRNA *ptr, const char *value)
{
	DynamicPaintSurface *data = (DynamicPaintSurface *)(ptr->data);
	BLI_strncpy_utf8(data->output_name2, value, 64);
}

int DynamicPaintSurface_use_output_b_get(PointerRNA *ptr)
{
	DynamicPaintSurface *data = (DynamicPaintSurface *)(ptr->data);
	return (((data->flags) & 2048) != 0);
}

void DynamicPaintSurface_use_output_b_set(PointerRNA *ptr, int value)
{
	DynamicPaintSurface *data = (DynamicPaintSurface *)(ptr->data);
	if (value) data->flags |= 2048;
	else data->flags &= ~2048;
}

int DynamicPaintSurface_preview_id_get(PointerRNA *ptr)
{
	DynamicPaintSurface *data = (DynamicPaintSurface *)(ptr->data);
	return (int)(data->preview_id);
}

void DynamicPaintSurface_preview_id_set(PointerRNA *ptr, int value)
{
	DynamicPaintSurface *data = (DynamicPaintSurface *)(ptr->data);
	data->preview_id = value;
}

float DynamicPaintSurface_depth_clamp_get(PointerRNA *ptr)
{
	DynamicPaintSurface *data = (DynamicPaintSurface *)(ptr->data);
	return (float)(data->depth_clamp);
}

void DynamicPaintSurface_depth_clamp_set(PointerRNA *ptr, float value)
{
	DynamicPaintSurface *data = (DynamicPaintSurface *)(ptr->data);
	data->depth_clamp = CLAMPIS(value, 0.0f, 50.0f);
}

float DynamicPaintSurface_displace_factor_get(PointerRNA *ptr)
{
	DynamicPaintSurface *data = (DynamicPaintSurface *)(ptr->data);
	return (float)(data->disp_factor);
}

void DynamicPaintSurface_displace_factor_set(PointerRNA *ptr, float value)
{
	DynamicPaintSurface *data = (DynamicPaintSurface *)(ptr->data);
	data->disp_factor = CLAMPIS(value, -50.0f, 50.0f);
}

int DynamicPaintSurface_image_fileformat_get(PointerRNA *ptr)
{
	DynamicPaintSurface *data = (DynamicPaintSurface *)(ptr->data);
	return (int)(data->image_fileformat);
}

void DynamicPaintSurface_image_fileformat_set(PointerRNA *ptr, int value)
{
	DynamicPaintSurface *data = (DynamicPaintSurface *)(ptr->data);
	data->image_fileformat = value;
}

int DynamicPaintSurface_displace_type_get(PointerRNA *ptr)
{
	DynamicPaintSurface *data = (DynamicPaintSurface *)(ptr->data);
	return (int)(data->disp_type);
}

void DynamicPaintSurface_displace_type_set(PointerRNA *ptr, int value)
{
	DynamicPaintSurface *data = (DynamicPaintSurface *)(ptr->data);
	data->disp_type = value;
}

int DynamicPaintSurface_use_incremental_displace_get(PointerRNA *ptr)
{
	DynamicPaintSurface *data = (DynamicPaintSurface *)(ptr->data);
	return (((data->flags) & 256) != 0);
}

void DynamicPaintSurface_use_incremental_displace_set(PointerRNA *ptr, int value)
{
	DynamicPaintSurface *data = (DynamicPaintSurface *)(ptr->data);
	if (value) data->flags |= 256;
	else data->flags &= ~256;
}

float DynamicPaintSurface_wave_damping_get(PointerRNA *ptr)
{
	DynamicPaintSurface *data = (DynamicPaintSurface *)(ptr->data);
	return (float)(data->wave_damping);
}

void DynamicPaintSurface_wave_damping_set(PointerRNA *ptr, float value)
{
	DynamicPaintSurface *data = (DynamicPaintSurface *)(ptr->data);
	data->wave_damping = CLAMPIS(value, 0.0f, 1.0f);
}

float DynamicPaintSurface_wave_speed_get(PointerRNA *ptr)
{
	DynamicPaintSurface *data = (DynamicPaintSurface *)(ptr->data);
	return (float)(data->wave_speed);
}

void DynamicPaintSurface_wave_speed_set(PointerRNA *ptr, float value)
{
	DynamicPaintSurface *data = (DynamicPaintSurface *)(ptr->data);
	data->wave_speed = CLAMPIS(value, 0.0099999998f, 5.0f);
}

float DynamicPaintSurface_wave_timescale_get(PointerRNA *ptr)
{
	DynamicPaintSurface *data = (DynamicPaintSurface *)(ptr->data);
	return (float)(data->wave_timescale);
}

void DynamicPaintSurface_wave_timescale_set(PointerRNA *ptr, float value)
{
	DynamicPaintSurface *data = (DynamicPaintSurface *)(ptr->data);
	data->wave_timescale = CLAMPIS(value, 0.0099999998f, 3.0f);
}

float DynamicPaintSurface_wave_spring_get(PointerRNA *ptr)
{
	DynamicPaintSurface *data = (DynamicPaintSurface *)(ptr->data);
	return (float)(data->wave_spring);
}

void DynamicPaintSurface_wave_spring_set(PointerRNA *ptr, float value)
{
	DynamicPaintSurface *data = (DynamicPaintSurface *)(ptr->data);
	data->wave_spring = CLAMPIS(value, 0.0f, 1.0f);
}

float DynamicPaintSurface_wave_smoothness_get(PointerRNA *ptr)
{
	DynamicPaintSurface *data = (DynamicPaintSurface *)(ptr->data);
	return (float)(data->wave_smoothness);
}

void DynamicPaintSurface_wave_smoothness_set(PointerRNA *ptr, float value)
{
	DynamicPaintSurface *data = (DynamicPaintSurface *)(ptr->data);
	data->wave_smoothness = CLAMPIS(value, 0.0f, 10.0f);
}

int DynamicPaintSurface_use_wave_open_border_get(PointerRNA *ptr)
{
	DynamicPaintSurface *data = (DynamicPaintSurface *)(ptr->data);
	return (((data->flags) & 128) != 0);
}

void DynamicPaintSurface_use_wave_open_border_set(PointerRNA *ptr, int value)
{
	DynamicPaintSurface *data = (DynamicPaintSurface *)(ptr->data);
	if (value) data->flags |= 128;
	else data->flags &= ~128;
}

PointerRNA DynamicPaintSurface_point_cache_get(PointerRNA *ptr)
{
	DynamicPaintSurface *data = (DynamicPaintSurface *)(ptr->data);
	return rna_pointer_inherit_refine(ptr, &RNA_PointCache, data->pointcache);
}

int DynamicPaintSurface_is_cache_user_get(PointerRNA *ptr)
{
	return rna_DynamicPaint_is_cache_user_get(ptr);
}

int DynamicPaintSurface_use_color_preview_get(PointerRNA *ptr)
{
	return rna_DynamicPaint_use_color_preview_get(ptr);
}




int DynamicPaintSurface_output_exists(struct DynamicPaintSurface *_self, struct Object *object, int index)
{
	return rna_DynamicPaint_is_output_exists(_self, object, index);
}

void DynamicPaintSurface_output_exists_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	struct DynamicPaintSurface *_self;
	struct Object *object;
	int index;
	int exists;
	char *_data, *_retdata;
	
	_self = (struct DynamicPaintSurface *)_ptr->data;
	_data = (char *)_parms->data;
	object = *((struct Object **)_data);
#if defined(SPEC_ILP32)
        _data += 4;
#else
        _data += 8;
#endif
	index = *((int *)_data);
	_data += 4;
	_retdata = _data;
	
	exists = rna_DynamicPaint_is_output_exists(_self, object, index);
	*((int *)_retdata) = exists;
}

/* Repeated prototypes to detect errors */

int rna_DynamicPaint_is_output_exists(struct DynamicPaintSurface *_self, struct Object *object, int index);

/* Canvas Settings */
CollectionPropertyRNA rna_DynamicPaintCanvasSettings_rna_properties = {
	{(PropertyRNA *)&rna_DynamicPaintCanvasSettings_rna_type, NULL,
	-1, "rna_properties", 128, "Properties",
	"RNA property collection",
	0, "*",
	PROP_COLLECTION, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	DynamicPaintCanvasSettings_rna_properties_begin, DynamicPaintCanvasSettings_rna_properties_next, DynamicPaintCanvasSettings_rna_properties_end, DynamicPaintCanvasSettings_rna_properties_get, NULL, NULL, DynamicPaintCanvasSettings_rna_properties_lookup_string, NULL, &RNA_Property
};

PointerPropertyRNA rna_DynamicPaintCanvasSettings_rna_type = {
	{(PropertyRNA *)&rna_DynamicPaintCanvasSettings_canvas_surfaces, (PropertyRNA *)&rna_DynamicPaintCanvasSettings_rna_properties,
	-1, "rna_type", 8912896, "RNA",
	"RNA type definition",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	DynamicPaintCanvasSettings_rna_type_get, NULL, NULL, NULL,&RNA_Struct
};

CollectionPropertyRNA rna_DynamicPaintCanvasSettings_canvas_surfaces = {
	{NULL, (PropertyRNA *)&rna_DynamicPaintCanvasSettings_rna_type,
	-1, "canvas_surfaces", 0, "Paint Surface List",
	"Paint surface list",
	0, "*",
	PROP_COLLECTION, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, &RNA_DynamicPaintSurfaces},
	DynamicPaintCanvasSettings_canvas_surfaces_begin, DynamicPaintCanvasSettings_canvas_surfaces_next, DynamicPaintCanvasSettings_canvas_surfaces_end, DynamicPaintCanvasSettings_canvas_surfaces_get, NULL, NULL, NULL, NULL, &RNA_DynamicPaintSurface
};

StructRNA RNA_DynamicPaintCanvasSettings = {
	{(ContainerRNA *)&RNA_DynamicPaintSurfaces, (ContainerRNA *)&RNA_SplineBezierPoints,
	NULL,
	{(PropertyRNA *)&rna_DynamicPaintCanvasSettings_rna_properties, (PropertyRNA *)&rna_DynamicPaintCanvasSettings_canvas_surfaces}},
	"DynamicPaintCanvasSettings", NULL, NULL, 4, "Canvas Settings",
	"Dynamic Paint canvas settings",
	"*", 17,
	NULL, (PropertyRNA *)&rna_DynamicPaintCanvasSettings_rna_properties,
	NULL,
	NULL,
	NULL,
	rna_DynamicPaintCanvasSettings_path,
	NULL,
	NULL,
	NULL,
	NULL,
	{NULL, NULL}
};

/* Canvas Surfaces */
CollectionPropertyRNA rna_DynamicPaintSurfaces_rna_properties = {
	{(PropertyRNA *)&rna_DynamicPaintSurfaces_rna_type, NULL,
	-1, "rna_properties", 128, "Properties",
	"RNA property collection",
	0, "*",
	PROP_COLLECTION, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	DynamicPaintSurfaces_rna_properties_begin, DynamicPaintSurfaces_rna_properties_next, DynamicPaintSurfaces_rna_properties_end, DynamicPaintSurfaces_rna_properties_get, NULL, NULL, DynamicPaintSurfaces_rna_properties_lookup_string, NULL, &RNA_Property
};

PointerPropertyRNA rna_DynamicPaintSurfaces_rna_type = {
	{(PropertyRNA *)&rna_DynamicPaintSurfaces_active_index, (PropertyRNA *)&rna_DynamicPaintSurfaces_rna_properties,
	-1, "rna_type", 8912896, "RNA",
	"RNA type definition",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	DynamicPaintSurfaces_rna_type_get, NULL, NULL, NULL,&RNA_Struct
};

IntPropertyRNA rna_DynamicPaintSurfaces_active_index = {
	{(PropertyRNA *)&rna_DynamicPaintSurfaces_active, (PropertyRNA *)&rna_DynamicPaintSurfaces_rna_type,
	-1, "active_index", 1, "Active Point Cache Index",
	"",
	0, "*",
	PROP_INT, PROP_UNSIGNED | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	DynamicPaintSurfaces_active_index_get, DynamicPaintSurfaces_active_index_set, NULL, NULL, rna_Surface_active_point_range, NULL, NULL, NULL, NULL, NULL,
	0, 10000, 0, INT_MAX, 1, 0, NULL
};

PointerPropertyRNA rna_DynamicPaintSurfaces_active = {
	{NULL, (PropertyRNA *)&rna_DynamicPaintSurfaces_active_index,
	-1, "active", 8388608, "Active Surface",
	"Active Dynamic Paint surface being displayed",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 85393408, NULL, NULL,
	0, -1, NULL},
	DynamicPaintSurfaces_active_get, NULL, NULL, NULL,&RNA_DynamicPaintSurface
};

StructRNA RNA_DynamicPaintSurfaces = {
	{(ContainerRNA *)&RNA_DynamicPaintBrushSettings, (ContainerRNA *)&RNA_DynamicPaintCanvasSettings,
	NULL,
	{(PropertyRNA *)&rna_DynamicPaintSurfaces_rna_properties, (PropertyRNA *)&rna_DynamicPaintSurfaces_active}},
	"DynamicPaintSurfaces", NULL, NULL, 4, "Canvas Surfaces",
	"Collection of Dynamic Paint Canvas surfaces",
	"*", 17,
	NULL, (PropertyRNA *)&rna_DynamicPaintSurfaces_rna_properties,
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

/* Brush Settings */
CollectionPropertyRNA rna_DynamicPaintBrushSettings_rna_properties = {
	{(PropertyRNA *)&rna_DynamicPaintBrushSettings_rna_type, NULL,
	-1, "rna_properties", 128, "Properties",
	"RNA property collection",
	0, "*",
	PROP_COLLECTION, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	DynamicPaintBrushSettings_rna_properties_begin, DynamicPaintBrushSettings_rna_properties_next, DynamicPaintBrushSettings_rna_properties_end, DynamicPaintBrushSettings_rna_properties_get, NULL, NULL, DynamicPaintBrushSettings_rna_properties_lookup_string, NULL, &RNA_Property
};

PointerPropertyRNA rna_DynamicPaintBrushSettings_rna_type = {
	{(PropertyRNA *)&rna_DynamicPaintBrushSettings_paint_color, (PropertyRNA *)&rna_DynamicPaintBrushSettings_rna_properties,
	-1, "rna_type", 8912896, "RNA",
	"RNA type definition",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	DynamicPaintBrushSettings_rna_type_get, NULL, NULL, NULL,&RNA_Struct
};

static float rna_DynamicPaintBrushSettings_paint_color_default[3] = {
	0.0f,
	0.0f,
	0.0f
};

FloatPropertyRNA rna_DynamicPaintBrushSettings_paint_color = {
	{(PropertyRNA *)&rna_DynamicPaintBrushSettings_paint_alpha, (PropertyRNA *)&rna_DynamicPaintBrushSettings_rna_type,
	-1, "paint_color", 8195, "Paint Color",
	"Color of the paint",
	0, "*",
	PROP_FLOAT, PROP_COLOR_GAMMA | PROP_UNIT_NONE, NULL, 1, {3, 0, 0}, 3,
	rna_DynamicPaint_redoModifier, 85458944, NULL, NULL,
	offsetof(DynamicPaintBrushSettings, r), 4, NULL},
	NULL, NULL, DynamicPaintBrushSettings_paint_color_get, DynamicPaintBrushSettings_paint_color_set, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 1.0f, 0.0f, FLT_MAX, 10.0f, 3, 0.0f, rna_DynamicPaintBrushSettings_paint_color_default
};

FloatPropertyRNA rna_DynamicPaintBrushSettings_paint_alpha = {
	{(PropertyRNA *)&rna_DynamicPaintBrushSettings_use_material, (PropertyRNA *)&rna_DynamicPaintBrushSettings_paint_color,
	-1, "paint_alpha", 8195, "Paint Alpha",
	"Paint alpha",
	0, "*",
	PROP_FLOAT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_DynamicPaint_redoModifier, 85458944, NULL, NULL,
	offsetof(DynamicPaintBrushSettings, alpha), 4, NULL},
	DynamicPaintBrushSettings_paint_alpha_get, DynamicPaintBrushSettings_paint_alpha_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 1.0f, 0.0f, 1.0f, 5.0f, 2, 0.0f, NULL
};

BoolPropertyRNA rna_DynamicPaintBrushSettings_use_material = {
	{(PropertyRNA *)&rna_DynamicPaintBrushSettings_material, (PropertyRNA *)&rna_DynamicPaintBrushSettings_paint_alpha,
	-1, "use_material", 3, "Use object material",
	"Use object material to define color and influence",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_DynamicPaint_redoModifier, 85458944, NULL, NULL,
	0, -1, NULL},
	DynamicPaintBrushSettings_use_material_get, DynamicPaintBrushSettings_use_material_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

PointerPropertyRNA rna_DynamicPaintBrushSettings_material = {
	{(PropertyRNA *)&rna_DynamicPaintBrushSettings_use_absolute_alpha, (PropertyRNA *)&rna_DynamicPaintBrushSettings_use_material,
	-1, "material", 8388673, "Material",
	"Material to use (if not defined, material linked to the mesh is used)",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_DynamicPaint_redoModifier, 85458944, NULL, NULL,
	0, -1, NULL},
	DynamicPaintBrushSettings_material_get, DynamicPaintBrushSettings_material_set, NULL, NULL,&RNA_Material
};

BoolPropertyRNA rna_DynamicPaintBrushSettings_use_absolute_alpha = {
	{(PropertyRNA *)&rna_DynamicPaintBrushSettings_paint_wetness, (PropertyRNA *)&rna_DynamicPaintBrushSettings_material,
	-1, "use_absolute_alpha", 3, "Absolute Alpha",
	"Only increase alpha value if paint alpha is higher than existing",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	DynamicPaintBrushSettings_use_absolute_alpha_get, DynamicPaintBrushSettings_use_absolute_alpha_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

FloatPropertyRNA rna_DynamicPaintBrushSettings_paint_wetness = {
	{(PropertyRNA *)&rna_DynamicPaintBrushSettings_use_paint_erase, (PropertyRNA *)&rna_DynamicPaintBrushSettings_use_absolute_alpha,
	-1, "paint_wetness", 8195, "Paint Wetness",
	"Paint wetness, visible in wetmap (some effects only affect wet paint)",
	0, "*",
	PROP_FLOAT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_DynamicPaint_redoModifier, 85458944, NULL, NULL,
	offsetof(DynamicPaintBrushSettings, wetness), 4, NULL},
	DynamicPaintBrushSettings_paint_wetness_get, DynamicPaintBrushSettings_paint_wetness_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 1.0f, 0.0f, 1.0f, 5.0f, 2, 0.0f, NULL
};

BoolPropertyRNA rna_DynamicPaintBrushSettings_use_paint_erase = {
	{(PropertyRNA *)&rna_DynamicPaintBrushSettings_wave_type, (PropertyRNA *)&rna_DynamicPaintBrushSettings_paint_wetness,
	-1, "use_paint_erase", 3, "Erase Paint",
	"Erase / remove paint instead of adding it",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_DynamicPaint_redoModifier, 85458944, NULL, NULL,
	0, -1, NULL},
	DynamicPaintBrushSettings_use_paint_erase_get, DynamicPaintBrushSettings_use_paint_erase_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

static EnumPropertyItem rna_DynamicPaintBrushSettings_wave_type_items[5] = {
	{3, "CHANGE", 0, "Depth Change", ""},
	{0, "DEPTH", 0, "Obstacle", ""},
	{1, "FORCE", 0, "Force", ""},
	{2, "REFLECT", 0, "Reflect Only", ""},
	{0, NULL, 0, NULL, NULL}
};

EnumPropertyRNA rna_DynamicPaintBrushSettings_wave_type = {
	{(PropertyRNA *)&rna_DynamicPaintBrushSettings_wave_factor, (PropertyRNA *)&rna_DynamicPaintBrushSettings_use_paint_erase,
	-1, "wave_type", 1, "Wave Type",
	"",
	0, "*",
	PROP_ENUM, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	DynamicPaintBrushSettings_wave_type_get, DynamicPaintBrushSettings_wave_type_set, NULL, NULL, NULL, NULL, rna_DynamicPaintBrushSettings_wave_type_items, 4, 0
};

FloatPropertyRNA rna_DynamicPaintBrushSettings_wave_factor = {
	{(PropertyRNA *)&rna_DynamicPaintBrushSettings_wave_clamp, (PropertyRNA *)&rna_DynamicPaintBrushSettings_wave_type,
	-1, "wave_factor", 8195, "Factor",
	"Multiplier for wave influence of this brush",
	0, "*",
	PROP_FLOAT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	offsetof(DynamicPaintBrushSettings, wave_factor), 4, NULL},
	DynamicPaintBrushSettings_wave_factor_get, DynamicPaintBrushSettings_wave_factor_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, -1.0f, 1.0f, -2.0f, 2.0f, 5.0f, 2, 0.0f, NULL
};

FloatPropertyRNA rna_DynamicPaintBrushSettings_wave_clamp = {
	{(PropertyRNA *)&rna_DynamicPaintBrushSettings_use_smudge, (PropertyRNA *)&rna_DynamicPaintBrushSettings_wave_factor,
	-1, "wave_clamp", 8195, "Clamp Waves",
	"Maximum level of surface intersection used to influence waves (use 0.0 to disable)",
	0, "*",
	PROP_FLOAT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	offsetof(DynamicPaintBrushSettings, wave_clamp), 4, NULL},
	DynamicPaintBrushSettings_wave_clamp_get, DynamicPaintBrushSettings_wave_clamp_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 5.0f, 0.0f, 50.0f, 1.0f, 2, 0.0f, NULL
};

BoolPropertyRNA rna_DynamicPaintBrushSettings_use_smudge = {
	{(PropertyRNA *)&rna_DynamicPaintBrushSettings_smudge_strength, (PropertyRNA *)&rna_DynamicPaintBrushSettings_wave_clamp,
	-1, "use_smudge", 3, "Do Smudge",
	"Make this brush to smudge existing paint as it moves",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	DynamicPaintBrushSettings_use_smudge_get, DynamicPaintBrushSettings_use_smudge_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

FloatPropertyRNA rna_DynamicPaintBrushSettings_smudge_strength = {
	{(PropertyRNA *)&rna_DynamicPaintBrushSettings_velocity_max, (PropertyRNA *)&rna_DynamicPaintBrushSettings_use_smudge,
	-1, "smudge_strength", 8195, "Smudge Strength",
	"Smudge effect strength",
	0, "*",
	PROP_FLOAT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	offsetof(DynamicPaintBrushSettings, smudge_strength), 4, NULL},
	DynamicPaintBrushSettings_smudge_strength_get, DynamicPaintBrushSettings_smudge_strength_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 1.0f, 0.0f, 1.0f, 5.0f, 2, 0.0f, NULL
};

FloatPropertyRNA rna_DynamicPaintBrushSettings_velocity_max = {
	{(PropertyRNA *)&rna_DynamicPaintBrushSettings_use_velocity_alpha, (PropertyRNA *)&rna_DynamicPaintBrushSettings_smudge_strength,
	-1, "velocity_max", 8195, "Max Velocity",
	"Velocity considered as maximum influence (Blender units per frame)",
	0, "*",
	PROP_FLOAT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	offsetof(DynamicPaintBrushSettings, max_velocity), 4, NULL},
	DynamicPaintBrushSettings_velocity_max_get, DynamicPaintBrushSettings_velocity_max_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.1000000015f, 2.0f, 0.0001000000f, 10.0f, 5.0f, 2, 0.0f, NULL
};

BoolPropertyRNA rna_DynamicPaintBrushSettings_use_velocity_alpha = {
	{(PropertyRNA *)&rna_DynamicPaintBrushSettings_use_velocity_depth, (PropertyRNA *)&rna_DynamicPaintBrushSettings_velocity_max,
	-1, "use_velocity_alpha", 3, "Multiply Alpha",
	"Multiply brush influence by velocity color ramp alpha",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_DynamicPaint_redoModifier, 85458944, NULL, NULL,
	0, -1, NULL},
	DynamicPaintBrushSettings_use_velocity_alpha_get, DynamicPaintBrushSettings_use_velocity_alpha_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_DynamicPaintBrushSettings_use_velocity_depth = {
	{(PropertyRNA *)&rna_DynamicPaintBrushSettings_use_velocity_color, (PropertyRNA *)&rna_DynamicPaintBrushSettings_use_velocity_alpha,
	-1, "use_velocity_depth", 3, "Multiply Depth",
	"Multiply brush intersection depth (displace, waves) by velocity ramp alpha",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_DynamicPaint_redoModifier, 85458944, NULL, NULL,
	0, -1, NULL},
	DynamicPaintBrushSettings_use_velocity_depth_get, DynamicPaintBrushSettings_use_velocity_depth_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_DynamicPaintBrushSettings_use_velocity_color = {
	{(PropertyRNA *)&rna_DynamicPaintBrushSettings_paint_source, (PropertyRNA *)&rna_DynamicPaintBrushSettings_use_velocity_depth,
	-1, "use_velocity_color", 3, "Replace Color",
	"Replace brush color by velocity color ramp",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_DynamicPaint_redoModifier, 85458944, NULL, NULL,
	0, -1, NULL},
	DynamicPaintBrushSettings_use_velocity_color_get, DynamicPaintBrushSettings_use_velocity_color_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

static EnumPropertyItem rna_DynamicPaintBrushSettings_paint_source_items[6] = {
	{3, "PARTICLE_SYSTEM", 88, "Particle System", ""},
	{4, "POINT", 305, "Object Center", ""},
	{1, "DISTANCE", 305, "Proximity", ""},
	{2, "VOLUME_DISTANCE", 307, "Mesh Volume + Proximity", ""},
	{0, "VOLUME", 287, "Mesh Volume", ""},
	{0, NULL, 0, NULL, NULL}
};

EnumPropertyRNA rna_DynamicPaintBrushSettings_paint_source = {
	{(PropertyRNA *)&rna_DynamicPaintBrushSettings_paint_distance, (PropertyRNA *)&rna_DynamicPaintBrushSettings_use_velocity_color,
	-1, "paint_source", 1, "Paint Source",
	"",
	0, "*",
	PROP_ENUM, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_DynamicPaint_redoModifier, 85458944, NULL, NULL,
	0, -1, NULL},
	DynamicPaintBrushSettings_paint_source_get, DynamicPaintBrushSettings_paint_source_set, NULL, NULL, NULL, NULL, rna_DynamicPaintBrushSettings_paint_source_items, 5, 0
};

FloatPropertyRNA rna_DynamicPaintBrushSettings_paint_distance = {
	{(PropertyRNA *)&rna_DynamicPaintBrushSettings_use_proximity_ramp_alpha, (PropertyRNA *)&rna_DynamicPaintBrushSettings_paint_source,
	-1, "paint_distance", 8195, "Proximity Distance",
	"Maximum distance from brush to mesh surface to affect paint",
	0, "*",
	PROP_FLOAT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_DynamicPaint_redoModifier, 85458944, NULL, NULL,
	offsetof(DynamicPaintBrushSettings, paint_distance), 4, NULL},
	DynamicPaintBrushSettings_paint_distance_get, DynamicPaintBrushSettings_paint_distance_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 500.0f, 0.0f, 500.0f, 10.0f, 3, 0.0f, NULL
};

BoolPropertyRNA rna_DynamicPaintBrushSettings_use_proximity_ramp_alpha = {
	{(PropertyRNA *)&rna_DynamicPaintBrushSettings_proximity_falloff, (PropertyRNA *)&rna_DynamicPaintBrushSettings_paint_distance,
	-1, "use_proximity_ramp_alpha", 3, "Only Use Alpha",
	"Only read color ramp alpha",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_DynamicPaint_redoModifier, 85458944, NULL, NULL,
	0, -1, NULL},
	DynamicPaintBrushSettings_use_proximity_ramp_alpha_get, DynamicPaintBrushSettings_use_proximity_ramp_alpha_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

static EnumPropertyItem rna_DynamicPaintBrushSettings_proximity_falloff_items[4] = {
	{1, "SMOOTH", 559, "Smooth", ""},
	{0, "CONSTANT", 563, "Constant", ""},
	{2, "RAMP", 54, "Color Ramp", ""},
	{0, NULL, 0, NULL, NULL}
};

EnumPropertyRNA rna_DynamicPaintBrushSettings_proximity_falloff = {
	{(PropertyRNA *)&rna_DynamicPaintBrushSettings_use_proximity_project, (PropertyRNA *)&rna_DynamicPaintBrushSettings_use_proximity_ramp_alpha,
	-1, "proximity_falloff", 1, "Falloff",
	"Proximity falloff type",
	0, "*",
	PROP_ENUM, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_DynamicPaint_redoModifier, 85458944, NULL, NULL,
	0, -1, NULL},
	DynamicPaintBrushSettings_proximity_falloff_get, DynamicPaintBrushSettings_proximity_falloff_set, NULL, NULL, NULL, NULL, rna_DynamicPaintBrushSettings_proximity_falloff_items, 3, 0
};

BoolPropertyRNA rna_DynamicPaintBrushSettings_use_proximity_project = {
	{(PropertyRNA *)&rna_DynamicPaintBrushSettings_ray_direction, (PropertyRNA *)&rna_DynamicPaintBrushSettings_proximity_falloff,
	-1, "use_proximity_project", 3, "Project",
	"Brush is projected to canvas from defined direction within brush proximity",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_DynamicPaint_redoModifier, 85458944, NULL, NULL,
	0, -1, NULL},
	DynamicPaintBrushSettings_use_proximity_project_get, DynamicPaintBrushSettings_use_proximity_project_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

static EnumPropertyItem rna_DynamicPaintBrushSettings_ray_direction_items[4] = {
	{0, "CANVAS", 0, "Canvas Normal", ""},
	{1, "BRUSH", 0, "Brush Normal", ""},
	{2, "Z_AXIS", 0, "Z-Axis", ""},
	{0, NULL, 0, NULL, NULL}
};

EnumPropertyRNA rna_DynamicPaintBrushSettings_ray_direction = {
	{(PropertyRNA *)&rna_DynamicPaintBrushSettings_invert_proximity, (PropertyRNA *)&rna_DynamicPaintBrushSettings_use_proximity_project,
	-1, "ray_direction", 3, "Ray Direction",
	"Ray direction to use for projection (if brush object is located in that direction it\'s painted)",
	0, "*",
	PROP_ENUM, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_DynamicPaint_redoModifier, 85458944, NULL, NULL,
	0, -1, NULL},
	DynamicPaintBrushSettings_ray_direction_get, DynamicPaintBrushSettings_ray_direction_set, NULL, NULL, NULL, NULL, rna_DynamicPaintBrushSettings_ray_direction_items, 3, 0
};

BoolPropertyRNA rna_DynamicPaintBrushSettings_invert_proximity = {
	{(PropertyRNA *)&rna_DynamicPaintBrushSettings_use_negative_volume, (PropertyRNA *)&rna_DynamicPaintBrushSettings_ray_direction,
	-1, "invert_proximity", 3, "Inner Proximity",
	"Proximity falloff is applied inside the volume",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_DynamicPaint_redoModifier, 85458944, NULL, NULL,
	0, -1, NULL},
	DynamicPaintBrushSettings_invert_proximity_get, DynamicPaintBrushSettings_invert_proximity_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_DynamicPaintBrushSettings_use_negative_volume = {
	{(PropertyRNA *)&rna_DynamicPaintBrushSettings_particle_system, (PropertyRNA *)&rna_DynamicPaintBrushSettings_invert_proximity,
	-1, "use_negative_volume", 3, "Negate Volume",
	"Negate influence inside the volume",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_DynamicPaint_redoModifier, 85458944, NULL, NULL,
	0, -1, NULL},
	DynamicPaintBrushSettings_use_negative_volume_get, DynamicPaintBrushSettings_use_negative_volume_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

PointerPropertyRNA rna_DynamicPaintBrushSettings_particle_system = {
	{(PropertyRNA *)&rna_DynamicPaintBrushSettings_use_particle_radius, (PropertyRNA *)&rna_DynamicPaintBrushSettings_use_negative_volume,
	-1, "particle_system", 8388609, "Particle Systems",
	"The particle system to paint with",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_DynamicPaint_reset_dependency, 85458944, NULL, NULL,
	0, -1, NULL},
	DynamicPaintBrushSettings_particle_system_get, DynamicPaintBrushSettings_particle_system_set, NULL, NULL,&RNA_ParticleSystem
};

BoolPropertyRNA rna_DynamicPaintBrushSettings_use_particle_radius = {
	{(PropertyRNA *)&rna_DynamicPaintBrushSettings_solid_radius, (PropertyRNA *)&rna_DynamicPaintBrushSettings_particle_system,
	-1, "use_particle_radius", 3, "Use Particle Radius",
	"Use radius from particle settings",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_DynamicPaint_redoModifier, 85458944, NULL, NULL,
	0, -1, NULL},
	DynamicPaintBrushSettings_use_particle_radius_get, DynamicPaintBrushSettings_use_particle_radius_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

FloatPropertyRNA rna_DynamicPaintBrushSettings_solid_radius = {
	{(PropertyRNA *)&rna_DynamicPaintBrushSettings_smooth_radius, (PropertyRNA *)&rna_DynamicPaintBrushSettings_use_particle_radius,
	-1, "solid_radius", 8195, "Solid Radius",
	"Radius that will be painted solid",
	0, "*",
	PROP_FLOAT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_DynamicPaint_redoModifier, 85458944, NULL, NULL,
	offsetof(DynamicPaintBrushSettings, particle_radius), 4, NULL},
	DynamicPaintBrushSettings_solid_radius_get, DynamicPaintBrushSettings_solid_radius_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0099999998f, 2.0f, 0.0099999998f, 10.0f, 5.0f, 3, 0.0f, NULL
};

FloatPropertyRNA rna_DynamicPaintBrushSettings_smooth_radius = {
	{(PropertyRNA *)&rna_DynamicPaintBrushSettings_paint_ramp, (PropertyRNA *)&rna_DynamicPaintBrushSettings_solid_radius,
	-1, "smooth_radius", 8195, "Smooth Radius",
	"Smooth falloff added after solid radius",
	0, "*",
	PROP_FLOAT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_DynamicPaint_redoModifier, 85458944, NULL, NULL,
	offsetof(DynamicPaintBrushSettings, particle_smooth), 4, NULL},
	DynamicPaintBrushSettings_smooth_radius_get, DynamicPaintBrushSettings_smooth_radius_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 1.0f, 0.0f, 10.0f, 5.0f, -1, 0.0f, NULL
};

PointerPropertyRNA rna_DynamicPaintBrushSettings_paint_ramp = {
	{(PropertyRNA *)&rna_DynamicPaintBrushSettings_velocity_ramp, (PropertyRNA *)&rna_DynamicPaintBrushSettings_smooth_radius,
	-1, "paint_ramp", 8388608, "Paint Color Ramp",
	"Color ramp used to define proximity falloff",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_DynamicPaint_redoModifier, 85458944, NULL, NULL,
	0, -1, NULL},
	DynamicPaintBrushSettings_paint_ramp_get, NULL, NULL, NULL,&RNA_ColorRamp
};

PointerPropertyRNA rna_DynamicPaintBrushSettings_velocity_ramp = {
	{NULL, (PropertyRNA *)&rna_DynamicPaintBrushSettings_paint_ramp,
	-1, "velocity_ramp", 8388608, "Velocity Color Ramp",
	"Color ramp used to define brush velocity effect",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_DynamicPaint_redoModifier, 85458944, NULL, NULL,
	0, -1, NULL},
	DynamicPaintBrushSettings_velocity_ramp_get, NULL, NULL, NULL,&RNA_ColorRamp
};

StructRNA RNA_DynamicPaintBrushSettings = {
	{(ContainerRNA *)&RNA_DynamicPaintSurface, (ContainerRNA *)&RNA_DynamicPaintSurfaces,
	NULL,
	{(PropertyRNA *)&rna_DynamicPaintBrushSettings_rna_properties, (PropertyRNA *)&rna_DynamicPaintBrushSettings_velocity_ramp}},
	"DynamicPaintBrushSettings", NULL, NULL, 4, "Brush Settings",
	"Brush settings",
	"*", 17,
	NULL, (PropertyRNA *)&rna_DynamicPaintBrushSettings_rna_properties,
	NULL,
	NULL,
	NULL,
	rna_DynamicPaintBrushSettings_path,
	NULL,
	NULL,
	NULL,
	NULL,
	{NULL, NULL}
};

/* Paint Surface */
CollectionPropertyRNA rna_DynamicPaintSurface_rna_properties = {
	{(PropertyRNA *)&rna_DynamicPaintSurface_rna_type, NULL,
	-1, "rna_properties", 128, "Properties",
	"RNA property collection",
	0, "*",
	PROP_COLLECTION, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	DynamicPaintSurface_rna_properties_begin, DynamicPaintSurface_rna_properties_next, DynamicPaintSurface_rna_properties_end, DynamicPaintSurface_rna_properties_get, NULL, NULL, DynamicPaintSurface_rna_properties_lookup_string, NULL, &RNA_Property
};

PointerPropertyRNA rna_DynamicPaintSurface_rna_type = {
	{(PropertyRNA *)&rna_DynamicPaintSurface_surface_format, (PropertyRNA *)&rna_DynamicPaintSurface_rna_properties,
	-1, "rna_type", 8912896, "RNA",
	"RNA type definition",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	DynamicPaintSurface_rna_type_get, NULL, NULL, NULL,&RNA_Struct
};

static EnumPropertyItem rna_DynamicPaintSurface_surface_format_items[3] = {
	{1, "VERTEX", 261, "Vertex", ""},
	{2, "IMAGE", 696, "Image Sequence", ""},
	{0, NULL, 0, NULL, NULL}
};

EnumPropertyRNA rna_DynamicPaintSurface_surface_format = {
	{(PropertyRNA *)&rna_DynamicPaintSurface_surface_type, (PropertyRNA *)&rna_DynamicPaintSurface_rna_type,
	-1, "surface_format", 1, "Format",
	"Surface Format",
	0, "*",
	PROP_ENUM, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_DynamicPaintSurfaces_changeFormat, 85458944, NULL, NULL,
	0, -1, NULL},
	DynamicPaintSurface_surface_format_get, DynamicPaintSurface_surface_format_set, NULL, NULL, NULL, NULL, rna_DynamicPaintSurface_surface_format_items, 2, 1
};

static EnumPropertyItem rna_DynamicPaintSurface_surface_type_items[2] = {
	{0, "PAINT", 0, "Paint", ""},
	{0, NULL, 0, NULL, NULL}
};

EnumPropertyRNA rna_DynamicPaintSurface_surface_type = {
	{(PropertyRNA *)&rna_DynamicPaintSurface_is_active, (PropertyRNA *)&rna_DynamicPaintSurface_surface_format,
	-1, "surface_type", 1, "Surface Type",
	"Surface Type",
	0, "*",
	PROP_ENUM, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_DynamicPaintSurface_changeType, 85458944, NULL, NULL,
	0, -1, NULL},
	DynamicPaintSurface_surface_type_get, DynamicPaintSurface_surface_type_set, rna_DynamicPaint_surface_type_itemf, NULL, NULL, NULL, rna_DynamicPaintSurface_surface_type_items, 1, 0
};

BoolPropertyRNA rna_DynamicPaintSurface_is_active = {
	{(PropertyRNA *)&rna_DynamicPaintSurface_show_preview, (PropertyRNA *)&rna_DynamicPaintSurface_surface_type,
	-1, "is_active", 3, "Is Active",
	"Toggle whether surface is processed or ignored",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_DynamicPaint_redoModifier, 85458944, NULL, NULL,
	0, -1, NULL},
	DynamicPaintSurface_is_active_get, DynamicPaintSurface_is_active_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_DynamicPaintSurface_show_preview = {
	{(PropertyRNA *)&rna_DynamicPaintSurface_name, (PropertyRNA *)&rna_DynamicPaintSurface_is_active,
	-1, "show_preview", 3, "Show Preview",
	"Display surface preview in 3D-views",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_DynamicPaintSurface_changePreview, 85458944, NULL, NULL,
	0, -1, NULL},
	DynamicPaintSurface_show_preview_get, DynamicPaintSurface_show_preview_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

StringPropertyRNA rna_DynamicPaintSurface_name = {
	{(PropertyRNA *)&rna_DynamicPaintSurface_brush_group, (PropertyRNA *)&rna_DynamicPaintSurface_show_preview,
	-1, "name", 262145, "Name",
	"Surface name",
	0, "*",
	PROP_STRING, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {64, 0, 0}, 0,
	rna_DynamicPaintSurface_uniqueName, 83886080, NULL, NULL,
	0, -1, NULL},
	DynamicPaintSurface_name_get, DynamicPaintSurface_name_length, DynamicPaintSurface_name_set, NULL, NULL, NULL, 64, ""
};

PointerPropertyRNA rna_DynamicPaintSurface_brush_group = {
	{(PropertyRNA *)&rna_DynamicPaintSurface_use_dissolve, (PropertyRNA *)&rna_DynamicPaintSurface_name,
	-1, "brush_group", 8388609, "Brush Group",
	"Only use brush objects from this group",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_DynamicPaint_reset_dependency, 85458944, NULL, NULL,
	0, -1, NULL},
	DynamicPaintSurface_brush_group_get, DynamicPaintSurface_brush_group_set, NULL, NULL,&RNA_Group
};

BoolPropertyRNA rna_DynamicPaintSurface_use_dissolve = {
	{(PropertyRNA *)&rna_DynamicPaintSurface_dissolve_speed, (PropertyRNA *)&rna_DynamicPaintSurface_brush_group,
	-1, "use_dissolve", 3, "Dissolve",
	"Enable to make surface changes disappear over time",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	DynamicPaintSurface_use_dissolve_get, DynamicPaintSurface_use_dissolve_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

IntPropertyRNA rna_DynamicPaintSurface_dissolve_speed = {
	{(PropertyRNA *)&rna_DynamicPaintSurface_use_drying, (PropertyRNA *)&rna_DynamicPaintSurface_use_dissolve,
	-1, "dissolve_speed", 8195, "Dissolve Speed",
	"Approximately in how many frames should dissolve happen",
	0, "*",
	PROP_INT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	offsetof(DynamicPaintSurface, diss_speed), 0, NULL},
	DynamicPaintSurface_dissolve_speed_get, DynamicPaintSurface_dissolve_speed_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL,
	1, 10000, 1, 10000, 5, 0, NULL
};

BoolPropertyRNA rna_DynamicPaintSurface_use_drying = {
	{(PropertyRNA *)&rna_DynamicPaintSurface_dry_speed, (PropertyRNA *)&rna_DynamicPaintSurface_dissolve_speed,
	-1, "use_drying", 3, "Dry",
	"Enable to make surface wetness dry over time",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	DynamicPaintSurface_use_drying_get, DynamicPaintSurface_use_drying_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

IntPropertyRNA rna_DynamicPaintSurface_dry_speed = {
	{(PropertyRNA *)&rna_DynamicPaintSurface_image_resolution, (PropertyRNA *)&rna_DynamicPaintSurface_use_drying,
	-1, "dry_speed", 8195, "Dry Speed",
	"Approximately in how many frames should drying happen",
	0, "*",
	PROP_INT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	offsetof(DynamicPaintSurface, dry_speed), 0, NULL},
	DynamicPaintSurface_dry_speed_get, DynamicPaintSurface_dry_speed_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL,
	1, 10000, 1, 10000, 5, 0, NULL
};

IntPropertyRNA rna_DynamicPaintSurface_image_resolution = {
	{(PropertyRNA *)&rna_DynamicPaintSurface_uv_layer, (PropertyRNA *)&rna_DynamicPaintSurface_dry_speed,
	-1, "image_resolution", 8193, "Resolution",
	"Output image resolution",
	0, "*",
	PROP_INT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	offsetof(DynamicPaintSurface, image_resolution), 0, NULL},
	DynamicPaintSurface_image_resolution_get, DynamicPaintSurface_image_resolution_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL,
	16, 4096, 16, 4096, 1, 0, NULL
};

StringPropertyRNA rna_DynamicPaintSurface_uv_layer = {
	{(PropertyRNA *)&rna_DynamicPaintSurface_frame_start, (PropertyRNA *)&rna_DynamicPaintSurface_image_resolution,
	-1, "uv_layer", 262145, "UV Map",
	"UV map name",
	0, "*",
	PROP_STRING, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {64, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	DynamicPaintSurface_uv_layer_get, DynamicPaintSurface_uv_layer_length, DynamicPaintSurface_uv_layer_set, NULL, NULL, NULL, 64, ""
};

IntPropertyRNA rna_DynamicPaintSurface_frame_start = {
	{(PropertyRNA *)&rna_DynamicPaintSurface_frame_end, (PropertyRNA *)&rna_DynamicPaintSurface_uv_layer,
	-1, "frame_start", 8193, "Start Frame",
	"Simulation start frame",
	0, "*",
	PROP_INT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_DynamicPaintSurfaces_updateFrames, 85458944, NULL, NULL,
	offsetof(DynamicPaintSurface, start_frame), 0, NULL},
	DynamicPaintSurface_frame_start_get, DynamicPaintSurface_frame_start_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL,
	1, 9999, 1, 300000, 1, 0, NULL
};

IntPropertyRNA rna_DynamicPaintSurface_frame_end = {
	{(PropertyRNA *)&rna_DynamicPaintSurface_frame_substeps, (PropertyRNA *)&rna_DynamicPaintSurface_frame_start,
	-1, "frame_end", 8193, "End Frame",
	"Simulation end frame",
	0, "*",
	PROP_INT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_DynamicPaintSurfaces_updateFrames, 85458944, NULL, NULL,
	offsetof(DynamicPaintSurface, end_frame), 0, NULL},
	DynamicPaintSurface_frame_end_get, DynamicPaintSurface_frame_end_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL,
	1, 9999, 1, 300000, 1, 0, NULL
};

IntPropertyRNA rna_DynamicPaintSurface_frame_substeps = {
	{(PropertyRNA *)&rna_DynamicPaintSurface_use_antialiasing, (PropertyRNA *)&rna_DynamicPaintSurface_frame_end,
	-1, "frame_substeps", 8195, "Sub-Steps",
	"Do extra frames between scene frames to ensure smooth motion",
	0, "*",
	PROP_INT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	offsetof(DynamicPaintSurface, substeps), 0, NULL},
	DynamicPaintSurface_frame_substeps_get, DynamicPaintSurface_frame_substeps_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL,
	0, 10, 0, 20, 1, 0, NULL
};

BoolPropertyRNA rna_DynamicPaintSurface_use_antialiasing = {
	{(PropertyRNA *)&rna_DynamicPaintSurface_brush_influence_scale, (PropertyRNA *)&rna_DynamicPaintSurface_frame_substeps,
	-1, "use_antialiasing", 1, "Anti-aliasing",
	"Use 5x multisampling to smooth paint edges",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_DynamicPaintSurface_reset, 85458944, NULL, NULL,
	0, -1, NULL},
	DynamicPaintSurface_use_antialiasing_get, DynamicPaintSurface_use_antialiasing_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

FloatPropertyRNA rna_DynamicPaintSurface_brush_influence_scale = {
	{(PropertyRNA *)&rna_DynamicPaintSurface_brush_radius_scale, (PropertyRNA *)&rna_DynamicPaintSurface_use_antialiasing,
	-1, "brush_influence_scale", 8195, "Influence Scale",
	"Adjust influence brush objects have on this surface",
	0, "*",
	PROP_FLOAT, PROP_FACTOR | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_DynamicPaint_redoModifier, 85458944, NULL, NULL,
	offsetof(DynamicPaintSurface, influence_scale), 4, NULL},
	DynamicPaintSurface_brush_influence_scale_get, DynamicPaintSurface_brush_influence_scale_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 1.0f, 0.0f, 1.0f, 1.0f, 2, 0.0f, NULL
};

FloatPropertyRNA rna_DynamicPaintSurface_brush_radius_scale = {
	{(PropertyRNA *)&rna_DynamicPaintSurface_init_color_type, (PropertyRNA *)&rna_DynamicPaintSurface_brush_influence_scale,
	-1, "brush_radius_scale", 8195, "Radius Scale",
	"Adjust radius of proximity brushes or particles for this surface",
	0, "*",
	PROP_FLOAT, PROP_FACTOR | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_DynamicPaint_redoModifier, 85458944, NULL, NULL,
	offsetof(DynamicPaintSurface, radius_scale), 4, NULL},
	DynamicPaintSurface_brush_radius_scale_get, DynamicPaintSurface_brush_radius_scale_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 1.0f, 0.0f, 10.0f, 1.0f, 2, 0.0f, NULL
};

static EnumPropertyItem rna_DynamicPaintSurface_init_color_type_items[5] = {
	{0, "NONE", 0, "None", ""},
	{1, "COLOR", 54, "Color", ""},
	{2, "TEXTURE", 80, "UV Texture", ""},
	{3, "VERTEX_COLOR", 202, "Vertex Color", ""},
	{0, NULL, 0, NULL, NULL}
};

EnumPropertyRNA rna_DynamicPaintSurface_init_color_type = {
	{(PropertyRNA *)&rna_DynamicPaintSurface_init_color, (PropertyRNA *)&rna_DynamicPaintSurface_brush_radius_scale,
	-1, "init_color_type", 1, "Initial Color",
	"",
	0, "*",
	PROP_ENUM, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_DynamicPaintSurface_initialcolortype, 102694912, NULL, NULL,
	0, -1, NULL},
	DynamicPaintSurface_init_color_type_get, DynamicPaintSurface_init_color_type_set, NULL, NULL, NULL, NULL, rna_DynamicPaintSurface_init_color_type_items, 4, 0
};

static float rna_DynamicPaintSurface_init_color_default[4] = {
	0.0f,
	0.0f,
	0.0f,
	0.0f
};

FloatPropertyRNA rna_DynamicPaintSurface_init_color = {
	{(PropertyRNA *)&rna_DynamicPaintSurface_init_texture, (PropertyRNA *)&rna_DynamicPaintSurface_init_color_type,
	-1, "init_color", 8193, "Color",
	"Initial color of the surface",
	0, "*",
	PROP_FLOAT, PROP_COLOR_GAMMA | PROP_UNIT_NONE, NULL, 1, {4, 0, 0}, 4,
	rna_DynamicPaintSurface_reset, 102694912, NULL, NULL,
	offsetof(DynamicPaintSurface, init_color), 4, NULL},
	NULL, NULL, DynamicPaintSurface_init_color_get, DynamicPaintSurface_init_color_set, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 1.0f, 0.0f, FLT_MAX, 10.0f, 3, 0.0f, rna_DynamicPaintSurface_init_color_default
};

PointerPropertyRNA rna_DynamicPaintSurface_init_texture = {
	{(PropertyRNA *)&rna_DynamicPaintSurface_init_layername, (PropertyRNA *)&rna_DynamicPaintSurface_init_color,
	-1, "init_texture", 8388673, "Texture",
	"",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_DynamicPaintSurface_reset, 102694912, NULL, NULL,
	0, -1, NULL},
	DynamicPaintSurface_init_texture_get, DynamicPaintSurface_init_texture_set, NULL, NULL,&RNA_Texture
};

StringPropertyRNA rna_DynamicPaintSurface_init_layername = {
	{(PropertyRNA *)&rna_DynamicPaintSurface_effect_ui, (PropertyRNA *)&rna_DynamicPaintSurface_init_texture,
	-1, "init_layername", 262145, "Data Layer",
	"",
	0, "*",
	PROP_STRING, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {64, 0, 0}, 0,
	rna_DynamicPaintSurface_reset, 102694912, NULL, NULL,
	0, -1, NULL},
	DynamicPaintSurface_init_layername_get, DynamicPaintSurface_init_layername_length, DynamicPaintSurface_init_layername_set, NULL, NULL, NULL, 64, ""
};

static EnumPropertyItem rna_DynamicPaintSurface_effect_ui_items[4] = {
	{1, "SPREAD", 0, "Spread", ""},
	{2, "DRIP", 0, "Drip", ""},
	{3, "SHRINK", 0, "Shrink", ""},
	{0, NULL, 0, NULL, NULL}
};

EnumPropertyRNA rna_DynamicPaintSurface_effect_ui = {
	{(PropertyRNA *)&rna_DynamicPaintSurface_use_dry_log, (PropertyRNA *)&rna_DynamicPaintSurface_init_layername,
	-1, "effect_ui", 1, "Effect Type",
	"",
	0, "*",
	PROP_ENUM, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	DynamicPaintSurface_effect_ui_get, DynamicPaintSurface_effect_ui_set, NULL, NULL, NULL, NULL, rna_DynamicPaintSurface_effect_ui_items, 3, 1
};

BoolPropertyRNA rna_DynamicPaintSurface_use_dry_log = {
	{(PropertyRNA *)&rna_DynamicPaintSurface_use_dissolve_log, (PropertyRNA *)&rna_DynamicPaintSurface_effect_ui,
	-1, "use_dry_log", 3, "Slow",
	"Use logarithmic drying (makes high values to dry faster than low values)",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	DynamicPaintSurface_use_dry_log_get, DynamicPaintSurface_use_dry_log_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_DynamicPaintSurface_use_dissolve_log = {
	{(PropertyRNA *)&rna_DynamicPaintSurface_use_spread, (PropertyRNA *)&rna_DynamicPaintSurface_use_dry_log,
	-1, "use_dissolve_log", 3, "Slow",
	"Use logarithmic dissolve (makes high values to fade faster than low values)",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	DynamicPaintSurface_use_dissolve_log_get, DynamicPaintSurface_use_dissolve_log_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_DynamicPaintSurface_use_spread = {
	{(PropertyRNA *)&rna_DynamicPaintSurface_spread_speed, (PropertyRNA *)&rna_DynamicPaintSurface_use_dissolve_log,
	-1, "use_spread", 1, "Use Spread",
	"Process spread effect (spread wet paint around surface)",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_DynamicPaintSurface_reset, 85458944, NULL, NULL,
	0, -1, NULL},
	DynamicPaintSurface_use_spread_get, DynamicPaintSurface_use_spread_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

FloatPropertyRNA rna_DynamicPaintSurface_spread_speed = {
	{(PropertyRNA *)&rna_DynamicPaintSurface_color_dry_threshold, (PropertyRNA *)&rna_DynamicPaintSurface_use_spread,
	-1, "spread_speed", 8195, "Spread Speed",
	"How fast spread effect moves on the canvas surface",
	0, "*",
	PROP_FLOAT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	offsetof(DynamicPaintSurface, spread_speed), 4, NULL},
	DynamicPaintSurface_spread_speed_get, DynamicPaintSurface_spread_speed_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0099999998f, 5.0f, 0.0010000000f, 10.0f, 1.0f, 2, 0.0f, NULL
};

FloatPropertyRNA rna_DynamicPaintSurface_color_dry_threshold = {
	{(PropertyRNA *)&rna_DynamicPaintSurface_color_spread_speed, (PropertyRNA *)&rna_DynamicPaintSurface_spread_speed,
	-1, "color_dry_threshold", 8195, "Color Dry",
	"The wetness level when colors start to shift to the background",
	0, "*",
	PROP_FLOAT, PROP_FACTOR | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	offsetof(DynamicPaintSurface, color_dry_threshold), 4, NULL},
	DynamicPaintSurface_color_dry_threshold_get, DynamicPaintSurface_color_dry_threshold_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 1.0f, 0.0f, 1.0f, 1.0f, 2, 0.0f, NULL
};

FloatPropertyRNA rna_DynamicPaintSurface_color_spread_speed = {
	{(PropertyRNA *)&rna_DynamicPaintSurface_use_drip, (PropertyRNA *)&rna_DynamicPaintSurface_color_dry_threshold,
	-1, "color_spread_speed", 8195, "Color Spread",
	"How fast colors get mixed within wet paint",
	0, "*",
	PROP_FLOAT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	offsetof(DynamicPaintSurface, color_spread_speed), 4, NULL},
	DynamicPaintSurface_color_spread_speed_get, DynamicPaintSurface_color_spread_speed_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 2.0f, 0.0f, 2.0f, 1.0f, 2, 0.0f, NULL
};

BoolPropertyRNA rna_DynamicPaintSurface_use_drip = {
	{(PropertyRNA *)&rna_DynamicPaintSurface_use_shrink, (PropertyRNA *)&rna_DynamicPaintSurface_color_spread_speed,
	-1, "use_drip", 1, "Use Drip",
	"Process drip effect (drip wet paint to gravity direction)",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_DynamicPaintSurface_reset, 85458944, NULL, NULL,
	0, -1, NULL},
	DynamicPaintSurface_use_drip_get, DynamicPaintSurface_use_drip_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_DynamicPaintSurface_use_shrink = {
	{(PropertyRNA *)&rna_DynamicPaintSurface_shrink_speed, (PropertyRNA *)&rna_DynamicPaintSurface_use_drip,
	-1, "use_shrink", 1, "Use Shrink",
	"Process shrink effect (shrink paint areas)",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_DynamicPaintSurface_reset, 85458944, NULL, NULL,
	0, -1, NULL},
	DynamicPaintSurface_use_shrink_get, DynamicPaintSurface_use_shrink_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

FloatPropertyRNA rna_DynamicPaintSurface_shrink_speed = {
	{(PropertyRNA *)&rna_DynamicPaintSurface_effector_weights, (PropertyRNA *)&rna_DynamicPaintSurface_use_shrink,
	-1, "shrink_speed", 8195, "Shrink Speed",
	"How fast shrink effect moves on the canvas surface",
	0, "*",
	PROP_FLOAT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	offsetof(DynamicPaintSurface, shrink_speed), 4, NULL},
	DynamicPaintSurface_shrink_speed_get, DynamicPaintSurface_shrink_speed_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0099999998f, 5.0f, 0.0010000000f, 10.0f, 1.0f, 2, 0.0f, NULL
};

PointerPropertyRNA rna_DynamicPaintSurface_effector_weights = {
	{(PropertyRNA *)&rna_DynamicPaintSurface_drip_velocity, (PropertyRNA *)&rna_DynamicPaintSurface_shrink_speed,
	-1, "effector_weights", 8388608, "Effector Weights",
	"",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	DynamicPaintSurface_effector_weights_get, NULL, NULL, NULL,&RNA_EffectorWeights
};

FloatPropertyRNA rna_DynamicPaintSurface_drip_velocity = {
	{(PropertyRNA *)&rna_DynamicPaintSurface_drip_acceleration, (PropertyRNA *)&rna_DynamicPaintSurface_effector_weights,
	-1, "drip_velocity", 8195, "Velocity",
	"How much surface velocity affects dripping",
	0, "*",
	PROP_FLOAT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	offsetof(DynamicPaintSurface, drip_vel), 4, NULL},
	DynamicPaintSurface_drip_velocity_get, DynamicPaintSurface_drip_velocity_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 1.0f, -200.0f, 200.0f, 0.1000000015f, 3, 0.0f, NULL
};

FloatPropertyRNA rna_DynamicPaintSurface_drip_acceleration = {
	{(PropertyRNA *)&rna_DynamicPaintSurface_use_premultiply, (PropertyRNA *)&rna_DynamicPaintSurface_drip_velocity,
	-1, "drip_acceleration", 8195, "Acceleration",
	"How much surface acceleration affects dripping",
	0, "*",
	PROP_FLOAT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	offsetof(DynamicPaintSurface, drip_acc), 4, NULL},
	DynamicPaintSurface_drip_acceleration_get, DynamicPaintSurface_drip_acceleration_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 1.0f, -200.0f, 200.0f, 0.1000000015f, 3, 0.0f, NULL
};

BoolPropertyRNA rna_DynamicPaintSurface_use_premultiply = {
	{(PropertyRNA *)&rna_DynamicPaintSurface_image_output_path, (PropertyRNA *)&rna_DynamicPaintSurface_drip_acceleration,
	-1, "use_premultiply", 1, "Premultiply alpha",
	"Multiply color by alpha (recommended for Blender input)",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	DynamicPaintSurface_use_premultiply_get, DynamicPaintSurface_use_premultiply_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

StringPropertyRNA rna_DynamicPaintSurface_image_output_path = {
	{(PropertyRNA *)&rna_DynamicPaintSurface_output_name_a, (PropertyRNA *)&rna_DynamicPaintSurface_use_premultiply,
	-1, "image_output_path", 262145, "Output Path",
	"Directory to save the textures",
	0, "*",
	PROP_STRING, PROP_DIRPATH | PROP_UNIT_NONE, NULL, 0, {1024, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	DynamicPaintSurface_image_output_path_get, DynamicPaintSurface_image_output_path_length, DynamicPaintSurface_image_output_path_set, NULL, NULL, NULL, 1024, ""
};

StringPropertyRNA rna_DynamicPaintSurface_output_name_a = {
	{(PropertyRNA *)&rna_DynamicPaintSurface_use_output_a, (PropertyRNA *)&rna_DynamicPaintSurface_image_output_path,
	-1, "output_name_a", 262145, "Output Name",
	"Name used to save output from this surface",
	0, "*",
	PROP_STRING, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {64, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	DynamicPaintSurface_output_name_a_get, DynamicPaintSurface_output_name_a_length, DynamicPaintSurface_output_name_a_set, NULL, NULL, NULL, 64, ""
};

BoolPropertyRNA rna_DynamicPaintSurface_use_output_a = {
	{(PropertyRNA *)&rna_DynamicPaintSurface_output_name_b, (PropertyRNA *)&rna_DynamicPaintSurface_output_name_a,
	-1, "use_output_a", 3, "Use Output",
	"Save this output layer",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	DynamicPaintSurface_use_output_a_get, DynamicPaintSurface_use_output_a_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

StringPropertyRNA rna_DynamicPaintSurface_output_name_b = {
	{(PropertyRNA *)&rna_DynamicPaintSurface_use_output_b, (PropertyRNA *)&rna_DynamicPaintSurface_use_output_a,
	-1, "output_name_b", 262145, "Output Name",
	"Name used to save output from this surface",
	0, "*",
	PROP_STRING, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {64, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	DynamicPaintSurface_output_name_b_get, DynamicPaintSurface_output_name_b_length, DynamicPaintSurface_output_name_b_set, NULL, NULL, NULL, 64, ""
};

BoolPropertyRNA rna_DynamicPaintSurface_use_output_b = {
	{(PropertyRNA *)&rna_DynamicPaintSurface_preview_id, (PropertyRNA *)&rna_DynamicPaintSurface_output_name_b,
	-1, "use_output_b", 3, "Use Output",
	"Save this output layer",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	DynamicPaintSurface_use_output_b_get, DynamicPaintSurface_use_output_b_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

static EnumPropertyItem rna_DynamicPaintSurface_preview_id_items[3] = {
	{0, "PAINT", 0, "Paint", ""},
	{1, "WETMAP", 0, "Wetmap", ""},
	{0, NULL, 0, NULL, NULL}
};

EnumPropertyRNA rna_DynamicPaintSurface_preview_id = {
	{(PropertyRNA *)&rna_DynamicPaintSurface_depth_clamp, (PropertyRNA *)&rna_DynamicPaintSurface_use_output_b,
	-1, "preview_id", 1, "Preview",
	"",
	0, "*",
	PROP_ENUM, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_DynamicPaint_redoModifier, 85458944, NULL, NULL,
	0, -1, NULL},
	DynamicPaintSurface_preview_id_get, DynamicPaintSurface_preview_id_set, NULL, NULL, NULL, NULL, rna_DynamicPaintSurface_preview_id_items, 2, 0
};

FloatPropertyRNA rna_DynamicPaintSurface_depth_clamp = {
	{(PropertyRNA *)&rna_DynamicPaintSurface_displace_factor, (PropertyRNA *)&rna_DynamicPaintSurface_preview_id,
	-1, "depth_clamp", 8193, "Max Displace",
	"Maximum level of depth intersection in object space (use 0.0 to disable)",
	0, "*",
	PROP_FLOAT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_DynamicPaint_redoModifier, 85458944, NULL, NULL,
	offsetof(DynamicPaintSurface, depth_clamp), 4, NULL},
	DynamicPaintSurface_depth_clamp_get, DynamicPaintSurface_depth_clamp_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 5.0f, 0.0f, 50.0f, 1.0f, 2, 0.0f, NULL
};

FloatPropertyRNA rna_DynamicPaintSurface_displace_factor = {
	{(PropertyRNA *)&rna_DynamicPaintSurface_image_fileformat, (PropertyRNA *)&rna_DynamicPaintSurface_depth_clamp,
	-1, "displace_factor", 8193, "Displace Factor",
	"Strength of displace when applied to the mesh",
	0, "*",
	PROP_FLOAT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_DynamicPaint_redoModifier, 85458944, NULL, NULL,
	offsetof(DynamicPaintSurface, disp_factor), 4, NULL},
	DynamicPaintSurface_displace_factor_get, DynamicPaintSurface_displace_factor_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, -5.0f, 5.0f, -50.0f, 50.0f, 1.0f, 2, 0.0f, NULL
};

static EnumPropertyItem rna_DynamicPaintSurface_image_fileformat_items[2] = {
	{0, "PNG", 0, "PNG", ""},
	{0, NULL, 0, NULL, NULL}
};

EnumPropertyRNA rna_DynamicPaintSurface_image_fileformat = {
	{(PropertyRNA *)&rna_DynamicPaintSurface_displace_type, (PropertyRNA *)&rna_DynamicPaintSurface_displace_factor,
	-1, "image_fileformat", 1, "File Format",
	"",
	0, "*",
	PROP_ENUM, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	DynamicPaintSurface_image_fileformat_get, DynamicPaintSurface_image_fileformat_set, NULL, NULL, NULL, NULL, rna_DynamicPaintSurface_image_fileformat_items, 1, 0
};

static EnumPropertyItem rna_DynamicPaintSurface_displace_type_items[3] = {
	{0, "DISPLACE", 0, "Displacement", ""},
	{1, "DEPTH", 0, "Depth", ""},
	{0, NULL, 0, NULL, NULL}
};

EnumPropertyRNA rna_DynamicPaintSurface_displace_type = {
	{(PropertyRNA *)&rna_DynamicPaintSurface_use_incremental_displace, (PropertyRNA *)&rna_DynamicPaintSurface_image_fileformat,
	-1, "displace_type", 1, "Data Type",
	"",
	0, "*",
	PROP_ENUM, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	DynamicPaintSurface_displace_type_get, DynamicPaintSurface_displace_type_set, NULL, NULL, NULL, NULL, rna_DynamicPaintSurface_displace_type_items, 2, 0
};

BoolPropertyRNA rna_DynamicPaintSurface_use_incremental_displace = {
	{(PropertyRNA *)&rna_DynamicPaintSurface_wave_damping, (PropertyRNA *)&rna_DynamicPaintSurface_displace_type,
	-1, "use_incremental_displace", 1, "Incremental",
	"New displace is added cumulatively on top of existing",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_DynamicPaintSurface_reset, 85458944, NULL, NULL,
	0, -1, NULL},
	DynamicPaintSurface_use_incremental_displace_get, DynamicPaintSurface_use_incremental_displace_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

FloatPropertyRNA rna_DynamicPaintSurface_wave_damping = {
	{(PropertyRNA *)&rna_DynamicPaintSurface_wave_speed, (PropertyRNA *)&rna_DynamicPaintSurface_use_incremental_displace,
	-1, "wave_damping", 8195, "Damping",
	"Wave damping factor",
	0, "*",
	PROP_FLOAT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	offsetof(DynamicPaintSurface, wave_damping), 4, NULL},
	DynamicPaintSurface_wave_damping_get, DynamicPaintSurface_wave_damping_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0099999998f, 1.0f, 0.0f, 1.0f, 1.0f, 2, 0.0f, NULL
};

FloatPropertyRNA rna_DynamicPaintSurface_wave_speed = {
	{(PropertyRNA *)&rna_DynamicPaintSurface_wave_timescale, (PropertyRNA *)&rna_DynamicPaintSurface_wave_damping,
	-1, "wave_speed", 8195, "Speed",
	"Wave propagation speed",
	0, "*",
	PROP_FLOAT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	offsetof(DynamicPaintSurface, wave_speed), 4, NULL},
	DynamicPaintSurface_wave_speed_get, DynamicPaintSurface_wave_speed_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.2000000030f, 4.0f, 0.0099999998f, 5.0f, 1.0f, 2, 0.0f, NULL
};

FloatPropertyRNA rna_DynamicPaintSurface_wave_timescale = {
	{(PropertyRNA *)&rna_DynamicPaintSurface_wave_spring, (PropertyRNA *)&rna_DynamicPaintSurface_wave_speed,
	-1, "wave_timescale", 8195, "Timescale",
	"Wave time scaling factor",
	0, "*",
	PROP_FLOAT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	offsetof(DynamicPaintSurface, wave_timescale), 4, NULL},
	DynamicPaintSurface_wave_timescale_get, DynamicPaintSurface_wave_timescale_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0099999998f, 1.5000000000f, 0.0099999998f, 3.0f, 1.0f, 2, 0.0f, NULL
};

FloatPropertyRNA rna_DynamicPaintSurface_wave_spring = {
	{(PropertyRNA *)&rna_DynamicPaintSurface_wave_smoothness, (PropertyRNA *)&rna_DynamicPaintSurface_wave_timescale,
	-1, "wave_spring", 8195, "Spring",
	"Spring force that pulls water level back to zero",
	0, "*",
	PROP_FLOAT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	offsetof(DynamicPaintSurface, wave_spring), 4, NULL},
	DynamicPaintSurface_wave_spring_get, DynamicPaintSurface_wave_spring_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0099999998f, 1.0f, 0.0f, 1.0f, 1.0f, 2, 0.0f, NULL
};

FloatPropertyRNA rna_DynamicPaintSurface_wave_smoothness = {
	{(PropertyRNA *)&rna_DynamicPaintSurface_use_wave_open_border, (PropertyRNA *)&rna_DynamicPaintSurface_wave_spring,
	-1, "wave_smoothness", 8195, "Smoothness",
	"Limit maximum steepness of wave slope between simulation points (use higher values for smoother waves at expense of reduced detail)",
	0, "*",
	PROP_FLOAT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	offsetof(DynamicPaintSurface, wave_smoothness), 4, NULL},
	DynamicPaintSurface_wave_smoothness_get, DynamicPaintSurface_wave_smoothness_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.1000000015f, 5.0f, 0.0f, 10.0f, 1.0f, 2, 0.0f, NULL
};

BoolPropertyRNA rna_DynamicPaintSurface_use_wave_open_border = {
	{(PropertyRNA *)&rna_DynamicPaintSurface_point_cache, (PropertyRNA *)&rna_DynamicPaintSurface_wave_smoothness,
	-1, "use_wave_open_border", 3, "Open Borders",
	"Pass waves through mesh edges",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	DynamicPaintSurface_use_wave_open_border_get, DynamicPaintSurface_use_wave_open_border_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

PointerPropertyRNA rna_DynamicPaintSurface_point_cache = {
	{(PropertyRNA *)&rna_DynamicPaintSurface_is_cache_user, (PropertyRNA *)&rna_DynamicPaintSurface_use_wave_open_border,
	-1, "point_cache", 8650752, "Point Cache",
	"",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	DynamicPaintSurface_point_cache_get, NULL, NULL, NULL,&RNA_PointCache
};

BoolPropertyRNA rna_DynamicPaintSurface_is_cache_user = {
	{(PropertyRNA *)&rna_DynamicPaintSurface_use_color_preview, (PropertyRNA *)&rna_DynamicPaintSurface_point_cache,
	-1, "is_cache_user", 0, "Use Cache",
	"",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	DynamicPaintSurface_is_cache_user_get, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_DynamicPaintSurface_use_color_preview = {
	{NULL, (PropertyRNA *)&rna_DynamicPaintSurface_is_cache_user,
	-1, "use_color_preview", 0, "Use Color Preview",
	"Whether this surface has some color preview for 3D view",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	DynamicPaintSurface_use_color_preview_get, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

PointerPropertyRNA rna_DynamicPaintSurface_output_exists_object = {
	{(PropertyRNA *)&rna_DynamicPaintSurface_output_exists_index, NULL,
	-1, "object", 8650756, "",
	"",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	NULL, NULL, NULL, NULL,&RNA_Object
};

IntPropertyRNA rna_DynamicPaintSurface_output_exists_index = {
	{(PropertyRNA *)&rna_DynamicPaintSurface_output_exists_exists, (PropertyRNA *)&rna_DynamicPaintSurface_output_exists_object,
	-1, "index", 7, "Index",
	"",
	0, "*",
	PROP_INT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL,
	0, 1, 0, 1, 1, 0, NULL
};

BoolPropertyRNA rna_DynamicPaintSurface_output_exists_exists = {
	{NULL, (PropertyRNA *)&rna_DynamicPaintSurface_output_exists_index,
	-1, "exists", 11, "",
	"",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

FunctionRNA rna_DynamicPaintSurface_output_exists_func = {
	{NULL, NULL,
	NULL,
	{(PropertyRNA *)&rna_DynamicPaintSurface_output_exists_object, (PropertyRNA *)&rna_DynamicPaintSurface_output_exists_exists}},
	"output_exists", 0, "Checks if surface output layer of given name exists",
	DynamicPaintSurface_output_exists_call,
	(PropertyRNA *)&rna_DynamicPaintSurface_output_exists_exists
};

StructRNA RNA_DynamicPaintSurface = {
	{(ContainerRNA *)&RNA_FCurve, (ContainerRNA *)&RNA_DynamicPaintBrushSettings,
	NULL,
	{(PropertyRNA *)&rna_DynamicPaintSurface_rna_properties, (PropertyRNA *)&rna_DynamicPaintSurface_use_color_preview}},
	"DynamicPaintSurface", NULL, NULL, 4, "Paint Surface",
	"A canvas surface layer",
	"*", 17,
	(PropertyRNA *)&rna_DynamicPaintSurface_name, (PropertyRNA *)&rna_DynamicPaintSurface_rna_properties,
	NULL,
	NULL,
	NULL,
	rna_DynamicPaintSurface_path,
	NULL,
	NULL,
	NULL,
	NULL,
	{(FunctionRNA *)&rna_DynamicPaintSurface_output_exists_func, (FunctionRNA *)&rna_DynamicPaintSurface_output_exists_func}
};

