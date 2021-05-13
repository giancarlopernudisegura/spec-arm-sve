
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

#include "rna_gpencil.c"

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

CollectionPropertyRNA rna_GreasePencil_layers;
EnumPropertyRNA rna_GreasePencil_draw_mode;
BoolPropertyRNA rna_GreasePencil_use_stroke_endpoints;

extern FunctionRNA rna_ID_copy_func;
extern PointerPropertyRNA rna_ID_copy_id;

extern FunctionRNA rna_ID_user_clear_func;
extern FunctionRNA rna_ID_animation_data_create_func;
extern PointerPropertyRNA rna_ID_animation_data_create_anim_data;

extern FunctionRNA rna_ID_animation_data_clear_func;
extern FunctionRNA rna_ID_update_tag_func;
extern EnumPropertyRNA rna_ID_update_tag_refresh;


extern FunctionRNA rna_GreasePencil_clear_func;


CollectionPropertyRNA rna_GreasePencilLayers_rna_properties;
PointerPropertyRNA rna_GreasePencilLayers_rna_type;
PointerPropertyRNA rna_GreasePencilLayers_active;

extern FunctionRNA rna_GreasePencilLayers_new_func;
extern StringPropertyRNA rna_GreasePencilLayers_new_name;
extern BoolPropertyRNA rna_GreasePencilLayers_new_set_active;
extern PointerPropertyRNA rna_GreasePencilLayers_new_layer;

extern FunctionRNA rna_GreasePencilLayers_remove_func;
extern PointerPropertyRNA rna_GreasePencilLayers_remove_layer;



CollectionPropertyRNA rna_GPencilLayer_rna_properties;
PointerPropertyRNA rna_GPencilLayer_rna_type;
StringPropertyRNA rna_GPencilLayer_info;
CollectionPropertyRNA rna_GPencilLayer_frames;
PointerPropertyRNA rna_GPencilLayer_active_frame;
FloatPropertyRNA rna_GPencilLayer_color;
FloatPropertyRNA rna_GPencilLayer_alpha;
IntPropertyRNA rna_GPencilLayer_line_width;
BoolPropertyRNA rna_GPencilLayer_use_onion_skinning;
IntPropertyRNA rna_GPencilLayer_ghost_range_max;
BoolPropertyRNA rna_GPencilLayer_hide;
BoolPropertyRNA rna_GPencilLayer_lock;
BoolPropertyRNA rna_GPencilLayer_lock_frame;
BoolPropertyRNA rna_GPencilLayer_select;
BoolPropertyRNA rna_GPencilLayer_show_points;
BoolPropertyRNA rna_GPencilLayer_show_x_ray;

extern FunctionRNA rna_GPencilLayer_clear_func;


CollectionPropertyRNA rna_GPencilFrames_rna_properties;
PointerPropertyRNA rna_GPencilFrames_rna_type;

extern FunctionRNA rna_GPencilFrames_new_func;
extern IntPropertyRNA rna_GPencilFrames_new_frame_number;
extern PointerPropertyRNA rna_GPencilFrames_new_frame;

extern FunctionRNA rna_GPencilFrames_remove_func;
extern PointerPropertyRNA rna_GPencilFrames_remove_frame;

extern FunctionRNA rna_GPencilFrames_copy_func;
extern PointerPropertyRNA rna_GPencilFrames_copy_source;
extern PointerPropertyRNA rna_GPencilFrames_copy_copy;



CollectionPropertyRNA rna_GPencilFrame_rna_properties;
PointerPropertyRNA rna_GPencilFrame_rna_type;
CollectionPropertyRNA rna_GPencilFrame_strokes;
IntPropertyRNA rna_GPencilFrame_frame_number;
BoolPropertyRNA rna_GPencilFrame_is_edited;
BoolPropertyRNA rna_GPencilFrame_select;

extern FunctionRNA rna_GPencilFrame_clear_func;


CollectionPropertyRNA rna_GPencilStrokes_rna_properties;
PointerPropertyRNA rna_GPencilStrokes_rna_type;

extern FunctionRNA rna_GPencilStrokes_new_func;
extern PointerPropertyRNA rna_GPencilStrokes_new_stroke;

extern FunctionRNA rna_GPencilStrokes_remove_func;
extern PointerPropertyRNA rna_GPencilStrokes_remove_stroke;



CollectionPropertyRNA rna_GPencilStroke_rna_properties;
PointerPropertyRNA rna_GPencilStroke_rna_type;
CollectionPropertyRNA rna_GPencilStroke_points;
EnumPropertyRNA rna_GPencilStroke_draw_mode;


CollectionPropertyRNA rna_GPencilStrokePoints_rna_properties;
PointerPropertyRNA rna_GPencilStrokePoints_rna_type;

extern FunctionRNA rna_GPencilStrokePoints_add_func;
extern IntPropertyRNA rna_GPencilStrokePoints_add_count;

extern FunctionRNA rna_GPencilStrokePoints_pop_func;
extern IntPropertyRNA rna_GPencilStrokePoints_pop_index;



CollectionPropertyRNA rna_GPencilStrokePoint_rna_properties;
PointerPropertyRNA rna_GPencilStrokePoint_rna_type;
FloatPropertyRNA rna_GPencilStrokePoint_co;
FloatPropertyRNA rna_GPencilStrokePoint_pressure;

static PointerRNA GreasePencil_layers_get(CollectionPropertyIterator *iter)
{
	return rna_pointer_inherit_refine(&iter->parent, &RNA_GPencilLayer, rna_iterator_listbase_get(iter));
}

void GreasePencil_layers_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{
	bGPdata *data = (bGPdata *)(ptr->data);

	memset(iter, 0, sizeof(*iter));
	iter->parent = *ptr;
	iter->prop = (PropertyRNA *)&rna_GreasePencil_layers;

	rna_iterator_listbase_begin(iter, &data->layers, NULL);

	if (iter->valid)
		iter->ptr = GreasePencil_layers_get(iter);
}

void GreasePencil_layers_next(CollectionPropertyIterator *iter)
{
	rna_iterator_listbase_next(iter);

	if (iter->valid)
		iter->ptr = GreasePencil_layers_get(iter);
}

void GreasePencil_layers_end(CollectionPropertyIterator *iter)
{
	rna_iterator_listbase_end(iter);
}

int GreasePencil_layers_lookup_int(PointerRNA *ptr, int index, PointerRNA *r_ptr)
{
	int found = 0;
	CollectionPropertyIterator iter;

	GreasePencil_layers_begin(&iter, ptr);

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
		if (found) *r_ptr = GreasePencil_layers_get(&iter);
	}

	GreasePencil_layers_end(&iter);

	return found;
}

int GreasePencil_layers_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
	extern int GPencilLayer_info_length(PointerRNA *);
	extern void GPencilLayer_info_get(PointerRNA *, char *);

	bool found = false;
	CollectionPropertyIterator iter;
	char namebuf[1024];
	char *name;

	GreasePencil_layers_begin(&iter, ptr);

	while (iter.valid) {
		if (iter.ptr.data) {
			int namelen = GPencilLayer_info_length(&iter.ptr);
			if (namelen < 1024) {
				GPencilLayer_info_get(&iter.ptr, namebuf);
				if (strcmp(namebuf, key) == 0) {
					found = true;
					*r_ptr = iter.ptr;
					break;
				}
			}
			else {
				name = MEM_mallocN(namelen+1, "name string");
				GPencilLayer_info_get(&iter.ptr, name);
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
		GreasePencil_layers_next(&iter);
	}
	GreasePencil_layers_end(&iter);

	return found;
}

int GreasePencil_draw_mode_get(PointerRNA *ptr)
{
	bGPdata *data = (bGPdata *)(ptr->data);
	return ((data->flag) & 112);
}

void GreasePencil_draw_mode_set(PointerRNA *ptr, int value)
{
	bGPdata *data = (bGPdata *)(ptr->data);
	data->flag &= ~112;
	data->flag |= value;
}

int GreasePencil_use_stroke_endpoints_get(PointerRNA *ptr)
{
	bGPdata *data = (bGPdata *)(ptr->data);
	return (((data->flag) & 128) != 0);
}

void GreasePencil_use_stroke_endpoints_set(PointerRNA *ptr, int value)
{
	bGPdata *data = (bGPdata *)(ptr->data);
	if (value) data->flag |= 128;
	else data->flag &= ~128;
}

static PointerRNA GreasePencilLayers_rna_properties_get(CollectionPropertyIterator *iter)
{
	return rna_builtin_properties_get(iter);
}

void GreasePencilLayers_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

	memset(iter, 0, sizeof(*iter));
	iter->parent = *ptr;
	iter->prop = (PropertyRNA *)&rna_GreasePencilLayers_rna_properties;

	rna_builtin_properties_begin(iter, ptr);

	if (iter->valid)
		iter->ptr = GreasePencilLayers_rna_properties_get(iter);
}

void GreasePencilLayers_rna_properties_next(CollectionPropertyIterator *iter)
{
	rna_builtin_properties_next(iter);

	if (iter->valid)
		iter->ptr = GreasePencilLayers_rna_properties_get(iter);
}

void GreasePencilLayers_rna_properties_end(CollectionPropertyIterator *iter)
{
	rna_iterator_listbase_end(iter);
}

int GreasePencilLayers_rna_properties_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
	return rna_builtin_properties_lookup_string(ptr, key, r_ptr);
}

PointerRNA GreasePencilLayers_rna_type_get(PointerRNA *ptr)
{
	return rna_builtin_type_get(ptr);
}

PointerRNA GreasePencilLayers_active_get(PointerRNA *ptr)
{
	return rna_GPencil_active_layer_get(ptr);
}

void GreasePencilLayers_active_set(PointerRNA *ptr, PointerRNA value)
{
	rna_GPencil_active_layer_set(ptr, value);
}

static PointerRNA GPencilLayer_rna_properties_get(CollectionPropertyIterator *iter)
{
	return rna_builtin_properties_get(iter);
}

void GPencilLayer_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

	memset(iter, 0, sizeof(*iter));
	iter->parent = *ptr;
	iter->prop = (PropertyRNA *)&rna_GPencilLayer_rna_properties;

	rna_builtin_properties_begin(iter, ptr);

	if (iter->valid)
		iter->ptr = GPencilLayer_rna_properties_get(iter);
}

void GPencilLayer_rna_properties_next(CollectionPropertyIterator *iter)
{
	rna_builtin_properties_next(iter);

	if (iter->valid)
		iter->ptr = GPencilLayer_rna_properties_get(iter);
}

void GPencilLayer_rna_properties_end(CollectionPropertyIterator *iter)
{
	rna_iterator_listbase_end(iter);
}

int GPencilLayer_rna_properties_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
	return rna_builtin_properties_lookup_string(ptr, key, r_ptr);
}

PointerRNA GPencilLayer_rna_type_get(PointerRNA *ptr)
{
	return rna_builtin_type_get(ptr);
}

void GPencilLayer_info_get(PointerRNA *ptr, char *value)
{
	bGPDlayer *data = (bGPDlayer *)(ptr->data);
	BLI_strncpy_utf8(value, data->info, 128);
}

int GPencilLayer_info_length(PointerRNA *ptr)
{
	bGPDlayer *data = (bGPDlayer *)(ptr->data);
	return strlen(data->info);
}

void GPencilLayer_info_set(PointerRNA *ptr, const char *value)
{
	rna_GPencilLayer_info_set(ptr, value);
}

static PointerRNA GPencilLayer_frames_get(CollectionPropertyIterator *iter)
{
	return rna_pointer_inherit_refine(&iter->parent, &RNA_GPencilFrame, rna_iterator_listbase_get(iter));
}

void GPencilLayer_frames_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{
	bGPDlayer *data = (bGPDlayer *)(ptr->data);

	memset(iter, 0, sizeof(*iter));
	iter->parent = *ptr;
	iter->prop = (PropertyRNA *)&rna_GPencilLayer_frames;

	rna_iterator_listbase_begin(iter, &data->frames, NULL);

	if (iter->valid)
		iter->ptr = GPencilLayer_frames_get(iter);
}

void GPencilLayer_frames_next(CollectionPropertyIterator *iter)
{
	rna_iterator_listbase_next(iter);

	if (iter->valid)
		iter->ptr = GPencilLayer_frames_get(iter);
}

void GPencilLayer_frames_end(CollectionPropertyIterator *iter)
{
	rna_iterator_listbase_end(iter);
}

int GPencilLayer_frames_lookup_int(PointerRNA *ptr, int index, PointerRNA *r_ptr)
{
	int found = 0;
	CollectionPropertyIterator iter;

	GPencilLayer_frames_begin(&iter, ptr);

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
		if (found) *r_ptr = GPencilLayer_frames_get(&iter);
	}

	GPencilLayer_frames_end(&iter);

	return found;
}

PointerRNA GPencilLayer_active_frame_get(PointerRNA *ptr)
{
	bGPDlayer *data = (bGPDlayer *)(ptr->data);
	return rna_pointer_inherit_refine(ptr, &RNA_GPencilFrame, data->actframe);
}

void GPencilLayer_color_get(PointerRNA *ptr, float values[3])
{
	bGPDlayer *data = (bGPDlayer *)(ptr->data);
	unsigned int i;

	for (i = 0; i < 3; i++) {
		values[i] = (float)(((float *)data->color)[i]);
	}
}

void GPencilLayer_color_set(PointerRNA *ptr, const float values[3])
{
	bGPDlayer *data = (bGPDlayer *)(ptr->data);
	unsigned int i;

	for (i = 0; i < 3; i++) {
		((float *)data->color)[i] = CLAMPIS(values[i], 0.0f, 1.0f);
	}
}

float GPencilLayer_alpha_get(PointerRNA *ptr)
{
	bGPDlayer *data = (bGPDlayer *)(ptr->data);
	return (float)(data->color[3]);
}

void GPencilLayer_alpha_set(PointerRNA *ptr, float value)
{
	bGPDlayer *data = (bGPDlayer *)(ptr->data);
	data->color[3] = CLAMPIS(value, 0.3000000119f, 1.0f);
}

int GPencilLayer_line_width_get(PointerRNA *ptr)
{
	bGPDlayer *data = (bGPDlayer *)(ptr->data);
	return (int)(data->thickness);
}

void GPencilLayer_line_width_set(PointerRNA *ptr, int value)
{
	bGPDlayer *data = (bGPDlayer *)(ptr->data);
	data->thickness = CLAMPIS(value, 1, 10);
}

int GPencilLayer_use_onion_skinning_get(PointerRNA *ptr)
{
	bGPDlayer *data = (bGPDlayer *)(ptr->data);
	return (((data->flag) & 16) != 0);
}

void GPencilLayer_use_onion_skinning_set(PointerRNA *ptr, int value)
{
	bGPDlayer *data = (bGPDlayer *)(ptr->data);
	if (value) data->flag |= 16;
	else data->flag &= ~16;
}

int GPencilLayer_ghost_range_max_get(PointerRNA *ptr)
{
	bGPDlayer *data = (bGPDlayer *)(ptr->data);
	return (int)(data->gstep);
}

void GPencilLayer_ghost_range_max_set(PointerRNA *ptr, int value)
{
	bGPDlayer *data = (bGPDlayer *)(ptr->data);
	data->gstep = CLAMPIS(value, 0, 120);
}

int GPencilLayer_hide_get(PointerRNA *ptr)
{
	bGPDlayer *data = (bGPDlayer *)(ptr->data);
	return (((data->flag) & 1) != 0);
}

void GPencilLayer_hide_set(PointerRNA *ptr, int value)
{
	bGPDlayer *data = (bGPDlayer *)(ptr->data);
	if (value) data->flag |= 1;
	else data->flag &= ~1;
}

int GPencilLayer_lock_get(PointerRNA *ptr)
{
	bGPDlayer *data = (bGPDlayer *)(ptr->data);
	return (((data->flag) & 2) != 0);
}

void GPencilLayer_lock_set(PointerRNA *ptr, int value)
{
	bGPDlayer *data = (bGPDlayer *)(ptr->data);
	if (value) data->flag |= 2;
	else data->flag &= ~2;
}

int GPencilLayer_lock_frame_get(PointerRNA *ptr)
{
	bGPDlayer *data = (bGPDlayer *)(ptr->data);
	return (((data->flag) & 64) != 0);
}

void GPencilLayer_lock_frame_set(PointerRNA *ptr, int value)
{
	bGPDlayer *data = (bGPDlayer *)(ptr->data);
	if (value) data->flag |= 64;
	else data->flag &= ~64;
}

int GPencilLayer_select_get(PointerRNA *ptr)
{
	bGPDlayer *data = (bGPDlayer *)(ptr->data);
	return (((data->flag) & 32) != 0);
}

void GPencilLayer_select_set(PointerRNA *ptr, int value)
{
	bGPDlayer *data = (bGPDlayer *)(ptr->data);
	if (value) data->flag |= 32;
	else data->flag &= ~32;
}

int GPencilLayer_show_points_get(PointerRNA *ptr)
{
	bGPDlayer *data = (bGPDlayer *)(ptr->data);
	return (((data->flag) & 8) != 0);
}

void GPencilLayer_show_points_set(PointerRNA *ptr, int value)
{
	bGPDlayer *data = (bGPDlayer *)(ptr->data);
	if (value) data->flag |= 8;
	else data->flag &= ~8;
}

int GPencilLayer_show_x_ray_get(PointerRNA *ptr)
{
	bGPDlayer *data = (bGPDlayer *)(ptr->data);
	return !(((data->flag) & 128) != 0);
}

void GPencilLayer_show_x_ray_set(PointerRNA *ptr, int value)
{
	bGPDlayer *data = (bGPDlayer *)(ptr->data);
	if (!value) data->flag |= 128;
	else data->flag &= ~128;
}

static PointerRNA GPencilFrames_rna_properties_get(CollectionPropertyIterator *iter)
{
	return rna_builtin_properties_get(iter);
}

void GPencilFrames_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

	memset(iter, 0, sizeof(*iter));
	iter->parent = *ptr;
	iter->prop = (PropertyRNA *)&rna_GPencilFrames_rna_properties;

	rna_builtin_properties_begin(iter, ptr);

	if (iter->valid)
		iter->ptr = GPencilFrames_rna_properties_get(iter);
}

void GPencilFrames_rna_properties_next(CollectionPropertyIterator *iter)
{
	rna_builtin_properties_next(iter);

	if (iter->valid)
		iter->ptr = GPencilFrames_rna_properties_get(iter);
}

void GPencilFrames_rna_properties_end(CollectionPropertyIterator *iter)
{
	rna_iterator_listbase_end(iter);
}

int GPencilFrames_rna_properties_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
	return rna_builtin_properties_lookup_string(ptr, key, r_ptr);
}

PointerRNA GPencilFrames_rna_type_get(PointerRNA *ptr)
{
	return rna_builtin_type_get(ptr);
}

static PointerRNA GPencilFrame_rna_properties_get(CollectionPropertyIterator *iter)
{
	return rna_builtin_properties_get(iter);
}

void GPencilFrame_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

	memset(iter, 0, sizeof(*iter));
	iter->parent = *ptr;
	iter->prop = (PropertyRNA *)&rna_GPencilFrame_rna_properties;

	rna_builtin_properties_begin(iter, ptr);

	if (iter->valid)
		iter->ptr = GPencilFrame_rna_properties_get(iter);
}

void GPencilFrame_rna_properties_next(CollectionPropertyIterator *iter)
{
	rna_builtin_properties_next(iter);

	if (iter->valid)
		iter->ptr = GPencilFrame_rna_properties_get(iter);
}

void GPencilFrame_rna_properties_end(CollectionPropertyIterator *iter)
{
	rna_iterator_listbase_end(iter);
}

int GPencilFrame_rna_properties_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
	return rna_builtin_properties_lookup_string(ptr, key, r_ptr);
}

PointerRNA GPencilFrame_rna_type_get(PointerRNA *ptr)
{
	return rna_builtin_type_get(ptr);
}

static PointerRNA GPencilFrame_strokes_get(CollectionPropertyIterator *iter)
{
	return rna_pointer_inherit_refine(&iter->parent, &RNA_GPencilStroke, rna_iterator_listbase_get(iter));
}

void GPencilFrame_strokes_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{
	bGPDframe *data = (bGPDframe *)(ptr->data);

	memset(iter, 0, sizeof(*iter));
	iter->parent = *ptr;
	iter->prop = (PropertyRNA *)&rna_GPencilFrame_strokes;

	rna_iterator_listbase_begin(iter, &data->strokes, NULL);

	if (iter->valid)
		iter->ptr = GPencilFrame_strokes_get(iter);
}

void GPencilFrame_strokes_next(CollectionPropertyIterator *iter)
{
	rna_iterator_listbase_next(iter);

	if (iter->valid)
		iter->ptr = GPencilFrame_strokes_get(iter);
}

void GPencilFrame_strokes_end(CollectionPropertyIterator *iter)
{
	rna_iterator_listbase_end(iter);
}

int GPencilFrame_strokes_lookup_int(PointerRNA *ptr, int index, PointerRNA *r_ptr)
{
	int found = 0;
	CollectionPropertyIterator iter;

	GPencilFrame_strokes_begin(&iter, ptr);

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
		if (found) *r_ptr = GPencilFrame_strokes_get(&iter);
	}

	GPencilFrame_strokes_end(&iter);

	return found;
}

int GPencilFrame_frame_number_get(PointerRNA *ptr)
{
	bGPDframe *data = (bGPDframe *)(ptr->data);
	return (int)(data->framenum);
}

void GPencilFrame_frame_number_set(PointerRNA *ptr, int value)
{
	bGPDframe *data = (bGPDframe *)(ptr->data);
	data->framenum = CLAMPIS(value, -300000, 300000);
}

int GPencilFrame_is_edited_get(PointerRNA *ptr)
{
	bGPDframe *data = (bGPDframe *)(ptr->data);
	return (((data->flag) & 1) != 0);
}

void GPencilFrame_is_edited_set(PointerRNA *ptr, int value)
{
	bGPDframe *data = (bGPDframe *)(ptr->data);
	if (value) data->flag |= 1;
	else data->flag &= ~1;
}

int GPencilFrame_select_get(PointerRNA *ptr)
{
	bGPDframe *data = (bGPDframe *)(ptr->data);
	return (((data->flag) & 2) != 0);
}

void GPencilFrame_select_set(PointerRNA *ptr, int value)
{
	bGPDframe *data = (bGPDframe *)(ptr->data);
	if (value) data->flag |= 2;
	else data->flag &= ~2;
}

static PointerRNA GPencilStrokes_rna_properties_get(CollectionPropertyIterator *iter)
{
	return rna_builtin_properties_get(iter);
}

void GPencilStrokes_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

	memset(iter, 0, sizeof(*iter));
	iter->parent = *ptr;
	iter->prop = (PropertyRNA *)&rna_GPencilStrokes_rna_properties;

	rna_builtin_properties_begin(iter, ptr);

	if (iter->valid)
		iter->ptr = GPencilStrokes_rna_properties_get(iter);
}

void GPencilStrokes_rna_properties_next(CollectionPropertyIterator *iter)
{
	rna_builtin_properties_next(iter);

	if (iter->valid)
		iter->ptr = GPencilStrokes_rna_properties_get(iter);
}

void GPencilStrokes_rna_properties_end(CollectionPropertyIterator *iter)
{
	rna_iterator_listbase_end(iter);
}

int GPencilStrokes_rna_properties_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
	return rna_builtin_properties_lookup_string(ptr, key, r_ptr);
}

PointerRNA GPencilStrokes_rna_type_get(PointerRNA *ptr)
{
	return rna_builtin_type_get(ptr);
}

static PointerRNA GPencilStroke_rna_properties_get(CollectionPropertyIterator *iter)
{
	return rna_builtin_properties_get(iter);
}

void GPencilStroke_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

	memset(iter, 0, sizeof(*iter));
	iter->parent = *ptr;
	iter->prop = (PropertyRNA *)&rna_GPencilStroke_rna_properties;

	rna_builtin_properties_begin(iter, ptr);

	if (iter->valid)
		iter->ptr = GPencilStroke_rna_properties_get(iter);
}

void GPencilStroke_rna_properties_next(CollectionPropertyIterator *iter)
{
	rna_builtin_properties_next(iter);

	if (iter->valid)
		iter->ptr = GPencilStroke_rna_properties_get(iter);
}

void GPencilStroke_rna_properties_end(CollectionPropertyIterator *iter)
{
	rna_iterator_listbase_end(iter);
}

int GPencilStroke_rna_properties_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
	return rna_builtin_properties_lookup_string(ptr, key, r_ptr);
}

PointerRNA GPencilStroke_rna_type_get(PointerRNA *ptr)
{
	return rna_builtin_type_get(ptr);
}

int GPencilStroke_points_length(PointerRNA *ptr)
{
	bGPDstroke *data = (bGPDstroke *)(ptr->data);
	return (data->points == NULL) ? 0 : data->totpoints;
}

static PointerRNA GPencilStroke_points_get(CollectionPropertyIterator *iter)
{
	return rna_pointer_inherit_refine(&iter->parent, &RNA_GPencilStrokePoint, rna_iterator_array_get(iter));
}

void GPencilStroke_points_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{
	bGPDstroke *data = (bGPDstroke *)(ptr->data);

	memset(iter, 0, sizeof(*iter));
	iter->parent = *ptr;
	iter->prop = (PropertyRNA *)&rna_GPencilStroke_points;

	rna_iterator_array_begin(iter, data->points, sizeof(data->points[0]), data->totpoints, 0, NULL);

	if (iter->valid)
		iter->ptr = GPencilStroke_points_get(iter);
}

void GPencilStroke_points_next(CollectionPropertyIterator *iter)
{
	rna_iterator_array_next(iter);

	if (iter->valid)
		iter->ptr = GPencilStroke_points_get(iter);
}

void GPencilStroke_points_end(CollectionPropertyIterator *iter)
{
	rna_iterator_array_end(iter);
}

int GPencilStroke_points_lookup_int(PointerRNA *ptr, int index, PointerRNA *r_ptr)
{
	int found = 0;
	CollectionPropertyIterator iter;

	GPencilStroke_points_begin(&iter, ptr);

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
		if (found) *r_ptr = GPencilStroke_points_get(&iter);
	}

	GPencilStroke_points_end(&iter);

	return found;
}

int GPencilStroke_draw_mode_get(PointerRNA *ptr)
{
	bGPDstroke *data = (bGPDstroke *)(ptr->data);
	return ((data->flag) & 7);
}

void GPencilStroke_draw_mode_set(PointerRNA *ptr, int value)
{
	bGPDstroke *data = (bGPDstroke *)(ptr->data);
	data->flag &= ~7;
	data->flag |= value;
}

static PointerRNA GPencilStrokePoints_rna_properties_get(CollectionPropertyIterator *iter)
{
	return rna_builtin_properties_get(iter);
}

void GPencilStrokePoints_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

	memset(iter, 0, sizeof(*iter));
	iter->parent = *ptr;
	iter->prop = (PropertyRNA *)&rna_GPencilStrokePoints_rna_properties;

	rna_builtin_properties_begin(iter, ptr);

	if (iter->valid)
		iter->ptr = GPencilStrokePoints_rna_properties_get(iter);
}

void GPencilStrokePoints_rna_properties_next(CollectionPropertyIterator *iter)
{
	rna_builtin_properties_next(iter);

	if (iter->valid)
		iter->ptr = GPencilStrokePoints_rna_properties_get(iter);
}

void GPencilStrokePoints_rna_properties_end(CollectionPropertyIterator *iter)
{
	rna_iterator_listbase_end(iter);
}

int GPencilStrokePoints_rna_properties_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
	return rna_builtin_properties_lookup_string(ptr, key, r_ptr);
}

PointerRNA GPencilStrokePoints_rna_type_get(PointerRNA *ptr)
{
	return rna_builtin_type_get(ptr);
}

static PointerRNA GPencilStrokePoint_rna_properties_get(CollectionPropertyIterator *iter)
{
	return rna_builtin_properties_get(iter);
}

void GPencilStrokePoint_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

	memset(iter, 0, sizeof(*iter));
	iter->parent = *ptr;
	iter->prop = (PropertyRNA *)&rna_GPencilStrokePoint_rna_properties;

	rna_builtin_properties_begin(iter, ptr);

	if (iter->valid)
		iter->ptr = GPencilStrokePoint_rna_properties_get(iter);
}

void GPencilStrokePoint_rna_properties_next(CollectionPropertyIterator *iter)
{
	rna_builtin_properties_next(iter);

	if (iter->valid)
		iter->ptr = GPencilStrokePoint_rna_properties_get(iter);
}

void GPencilStrokePoint_rna_properties_end(CollectionPropertyIterator *iter)
{
	rna_iterator_listbase_end(iter);
}

int GPencilStrokePoint_rna_properties_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
	return rna_builtin_properties_lookup_string(ptr, key, r_ptr);
}

PointerRNA GPencilStrokePoint_rna_type_get(PointerRNA *ptr)
{
	return rna_builtin_type_get(ptr);
}

void GPencilStrokePoint_co_get(PointerRNA *ptr, float values[3])
{
	bGPDspoint *data = (bGPDspoint *)(ptr->data);
	unsigned int i;

	for (i = 0; i < 3; i++) {
		values[i] = (float)((&data->x)[i]);
	}
}

void GPencilStrokePoint_co_set(PointerRNA *ptr, const float values[3])
{
	bGPDspoint *data = (bGPDspoint *)(ptr->data);
	unsigned int i;

	for (i = 0; i < 3; i++) {
		(&data->x)[i] = values[i];
	}
}

float GPencilStrokePoint_pressure_get(PointerRNA *ptr)
{
	bGPDspoint *data = (bGPDspoint *)(ptr->data);
	return (float)(data->pressure);
}

void GPencilStrokePoint_pressure_set(PointerRNA *ptr, float value)
{
	bGPDspoint *data = (bGPDspoint *)(ptr->data);
	data->pressure = CLAMPIS(value, 0.0f, 1.0f);
}

void GreasePencil_clear(struct bGPdata *_self)
{
	rna_GPencil_clear(_self);
}

void GreasePencil_clear_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	struct bGPdata *_self;
	_self = (struct bGPdata *)_ptr->data;
	
	rna_GPencil_clear(_self);
}

/* Repeated prototypes to detect errors */

void rna_GPencil_clear(struct bGPdata *_self);

struct bGPDlayer *GreasePencilLayers_new(struct bGPdata *_self, const char * name, int set_active)
{
	return rna_GPencil_layer_new(_self, name, set_active);
}

void GreasePencilLayers_new_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	struct bGPdata *_self;
	const char * name;
	int set_active;
	struct bGPDlayer *layer;
	char *_data, *_retdata;
	
	_self = (struct bGPdata *)_ptr->data;
	_data = (char *)_parms->data;
	name = *((const char * *)_data);
#if defined(SPEC_ILP32)
        _data += 4;
#else
        _data += 8;
#endif
	set_active = *((int *)_data);
	_data += 4;
	_retdata = _data;
	
	layer = rna_GPencil_layer_new(_self, name, set_active);
	*((struct bGPDlayer **)_retdata) = layer;
}

void GreasePencilLayers_remove(struct bGPdata *_self, ReportList *reports, struct PointerRNA *layer)
{
	rna_GPencil_layer_remove(_self, reports, layer);
}

void GreasePencilLayers_remove_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	struct bGPdata *_self;
	struct PointerRNA *layer;
	char *_data;
	
	_self = (struct bGPdata *)_ptr->data;
	_data = (char *)_parms->data;
	layer = *((struct PointerRNA **)_data);
	
	rna_GPencil_layer_remove(_self, reports, layer);
}

/* Repeated prototypes to detect errors */

struct bGPDlayer *rna_GPencil_layer_new(struct bGPdata *_self, const char * name, int set_active);
void rna_GPencil_layer_remove(struct bGPdata *_self, ReportList *reports, struct PointerRNA *layer);

void GPencilLayer_clear(struct bGPDlayer *_self)
{
	rna_GPencil_layer_clear(_self);
}

void GPencilLayer_clear_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	struct bGPDlayer *_self;
	_self = (struct bGPDlayer *)_ptr->data;
	
	rna_GPencil_layer_clear(_self);
}

/* Repeated prototypes to detect errors */

void rna_GPencil_layer_clear(struct bGPDlayer *_self);

struct bGPDframe *GPencilFrames_new(struct bGPDlayer *_self, ReportList *reports, int frame_number)
{
	return rna_GPencil_frame_new(_self, reports, frame_number);
}

void GPencilFrames_new_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	struct bGPDlayer *_self;
	int frame_number;
	struct bGPDframe *frame;
	char *_data, *_retdata;
	
	_self = (struct bGPDlayer *)_ptr->data;
	_data = (char *)_parms->data;
	frame_number = *((int *)_data);
	_data += 4;
	_retdata = _data;
	
	frame = rna_GPencil_frame_new(_self, reports, frame_number);
	*((struct bGPDframe **)_retdata) = frame;
}

void GPencilFrames_remove(struct bGPDlayer *_self, ReportList *reports, struct PointerRNA *frame)
{
	rna_GPencil_frame_remove(_self, reports, frame);
}

void GPencilFrames_remove_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	struct bGPDlayer *_self;
	struct PointerRNA *frame;
	char *_data;
	
	_self = (struct bGPDlayer *)_ptr->data;
	_data = (char *)_parms->data;
	frame = *((struct PointerRNA **)_data);
	
	rna_GPencil_frame_remove(_self, reports, frame);
}

struct bGPDframe *GPencilFrames_copy(struct bGPDlayer *_self, struct bGPDframe *source)
{
	return rna_GPencil_frame_copy(_self, source);
}

void GPencilFrames_copy_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	struct bGPDlayer *_self;
	struct bGPDframe *source;
	struct bGPDframe *copy;
	char *_data, *_retdata;
	
	_self = (struct bGPDlayer *)_ptr->data;
	_data = (char *)_parms->data;
	source = *((struct bGPDframe **)_data);
#if defined(SPEC_ILP32)
        _data += 4;
#else
        _data += 8;
#endif
	_retdata = _data;
	
	copy = rna_GPencil_frame_copy(_self, source);
	*((struct bGPDframe **)_retdata) = copy;
}

/* Repeated prototypes to detect errors */

struct bGPDframe *rna_GPencil_frame_new(struct bGPDlayer *_self, ReportList *reports, int frame_number);
void rna_GPencil_frame_remove(struct bGPDlayer *_self, ReportList *reports, struct PointerRNA *frame);
struct bGPDframe *rna_GPencil_frame_copy(struct bGPDlayer *_self, struct bGPDframe *source);

void GPencilFrame_clear(struct bGPDframe *_self)
{
	rna_GPencil_frame_clear(_self);
}

void GPencilFrame_clear_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	struct bGPDframe *_self;
	_self = (struct bGPDframe *)_ptr->data;
	
	rna_GPencil_frame_clear(_self);
}

/* Repeated prototypes to detect errors */

void rna_GPencil_frame_clear(struct bGPDframe *_self);

struct bGPDstroke *GPencilStrokes_new(struct bGPDframe *_self)
{
	return rna_GPencil_stroke_new(_self);
}

void GPencilStrokes_new_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	struct bGPDframe *_self;
	struct bGPDstroke *stroke;
	char *_data, *_retdata;
	
	_self = (struct bGPDframe *)_ptr->data;
	_data = (char *)_parms->data;
	_retdata = _data;
	
	stroke = rna_GPencil_stroke_new(_self);
	*((struct bGPDstroke **)_retdata) = stroke;
}

void GPencilStrokes_remove(struct bGPDframe *_self, ReportList *reports, struct PointerRNA *stroke)
{
	rna_GPencil_stroke_remove(_self, reports, stroke);
}

void GPencilStrokes_remove_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	struct bGPDframe *_self;
	struct PointerRNA *stroke;
	char *_data;
	
	_self = (struct bGPDframe *)_ptr->data;
	_data = (char *)_parms->data;
	stroke = *((struct PointerRNA **)_data);
	
	rna_GPencil_stroke_remove(_self, reports, stroke);
}

/* Repeated prototypes to detect errors */

struct bGPDstroke *rna_GPencil_stroke_new(struct bGPDframe *_self);
void rna_GPencil_stroke_remove(struct bGPDframe *_self, ReportList *reports, struct PointerRNA *stroke);


void GPencilStrokePoints_add(struct bGPDstroke *_self, int count)
{
	rna_GPencil_stroke_point_add(_self, count);
}

void GPencilStrokePoints_add_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	struct bGPDstroke *_self;
	int count;
	char *_data;
	
	_self = (struct bGPDstroke *)_ptr->data;
	_data = (char *)_parms->data;
	count = *((int *)_data);
	
	rna_GPencil_stroke_point_add(_self, count);
}

void GPencilStrokePoints_pop(struct bGPDstroke *_self, ReportList *reports, int index)
{
	rna_GPencil_stroke_point_pop(_self, reports, index);
}

void GPencilStrokePoints_pop_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	struct bGPDstroke *_self;
	int index;
	char *_data;
	
	_self = (struct bGPDstroke *)_ptr->data;
	_data = (char *)_parms->data;
	index = *((int *)_data);
	
	rna_GPencil_stroke_point_pop(_self, reports, index);
}

/* Repeated prototypes to detect errors */

void rna_GPencil_stroke_point_add(struct bGPDstroke *_self, int count);
void rna_GPencil_stroke_point_pop(struct bGPDstroke *_self, ReportList *reports, int index);


/* Grease Pencil */
CollectionPropertyRNA rna_GreasePencil_layers = {
	{(PropertyRNA *)&rna_GreasePencil_draw_mode, NULL,
	-1, "layers", 0, "Layers",
	"",
	0, "*",
	PROP_COLLECTION, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, &RNA_GreasePencilLayers},
	GreasePencil_layers_begin, GreasePencil_layers_next, GreasePencil_layers_end, GreasePencil_layers_get, NULL, GreasePencil_layers_lookup_int, GreasePencil_layers_lookup_string, NULL, &RNA_GPencilLayer
};

static EnumPropertyItem rna_GreasePencil_draw_mode_items[5] = {
	{16, "CURSOR", 0, "Cursor", "Draw stroke at the 3D cursor"},
	{0, "VIEW", 0, "View", "Stick stroke to the view "},
	{48, "SURFACE", 0, "Surface", "Stick stroke to surfaces"},
	{80, "STROKE", 0, "Stroke", "Stick stroke to other strokes"},
	{0, NULL, 0, NULL, NULL}
};

EnumPropertyRNA rna_GreasePencil_draw_mode = {
	{(PropertyRNA *)&rna_GreasePencil_use_stroke_endpoints, (PropertyRNA *)&rna_GreasePencil_layers,
	-1, "draw_mode", 3, "Draw Mode",
	"",
	0, "*",
	PROP_ENUM, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 375062528, NULL, NULL,
	0, -1, NULL},
	GreasePencil_draw_mode_get, GreasePencil_draw_mode_set, NULL, NULL, NULL, NULL, rna_GreasePencil_draw_mode_items, 4, 0
};

BoolPropertyRNA rna_GreasePencil_use_stroke_endpoints = {
	{NULL, (PropertyRNA *)&rna_GreasePencil_draw_mode,
	-1, "use_stroke_endpoints", 3, "Only Endpoints",
	"Only use the first and last parts of the stroke for snapping",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 375062528, NULL, NULL,
	0, -1, NULL},
	GreasePencil_use_stroke_endpoints_get, GreasePencil_use_stroke_endpoints_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

FunctionRNA rna_GreasePencil_clear_func = {
	{NULL, NULL,
	NULL,
	{NULL, NULL}},
	"clear", 0, "Remove all the grease pencil data",
	GreasePencil_clear_call,
	NULL
};

StructRNA RNA_GreasePencil = {
	{(ContainerRNA *)&RNA_GreasePencilLayers, (ContainerRNA *)&RNA_ControlFluidSettings,
	NULL,
	{(PropertyRNA *)&rna_GreasePencil_layers, (PropertyRNA *)&rna_GreasePencil_use_stroke_endpoints}},
	"GreasePencil", NULL, NULL, 7, "Grease Pencil",
	"Freehand annotation sketchbook",
	"*", 197,
	(PropertyRNA *)&rna_ID_name, (PropertyRNA *)&rna_ID_rna_properties,
	&RNA_ID,
	NULL,
	rna_ID_refine,
	NULL,
	NULL,
	NULL,
	NULL,
	rna_ID_idprops,
	{(FunctionRNA *)&rna_GreasePencil_clear_func, (FunctionRNA *)&rna_GreasePencil_clear_func}
};

/* Grease Pencil Layers */
CollectionPropertyRNA rna_GreasePencilLayers_rna_properties = {
	{(PropertyRNA *)&rna_GreasePencilLayers_rna_type, NULL,
	-1, "rna_properties", 128, "Properties",
	"RNA property collection",
	0, "*",
	PROP_COLLECTION, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	GreasePencilLayers_rna_properties_begin, GreasePencilLayers_rna_properties_next, GreasePencilLayers_rna_properties_end, GreasePencilLayers_rna_properties_get, NULL, NULL, GreasePencilLayers_rna_properties_lookup_string, NULL, &RNA_Property
};

PointerPropertyRNA rna_GreasePencilLayers_rna_type = {
	{(PropertyRNA *)&rna_GreasePencilLayers_active, (PropertyRNA *)&rna_GreasePencilLayers_rna_properties,
	-1, "rna_type", 8912896, "RNA",
	"RNA type definition",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	GreasePencilLayers_rna_type_get, NULL, NULL, NULL,&RNA_Struct
};

PointerPropertyRNA rna_GreasePencilLayers_active = {
	{NULL, (PropertyRNA *)&rna_GreasePencilLayers_rna_type,
	-1, "active", 8388609, "Active Layer",
	"Active grease pencil layer",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	GreasePencilLayers_active_get, GreasePencilLayers_active_set, NULL, NULL,&RNA_GPencilLayer
};

StringPropertyRNA rna_GreasePencilLayers_new_name = {
	{(PropertyRNA *)&rna_GreasePencilLayers_new_set_active, NULL,
	-1, "name", 262149, "Name",
	"Name of the layer",
	0, "*",
	PROP_STRING, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	NULL, NULL, NULL, NULL, NULL, NULL, 64, "GPencilLayer"
};

BoolPropertyRNA rna_GreasePencilLayers_new_set_active = {
	{(PropertyRNA *)&rna_GreasePencilLayers_new_layer, (PropertyRNA *)&rna_GreasePencilLayers_new_name,
	-1, "set_active", 3, "Set Active",
	"Set the newly created layer to the active layer",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

PointerPropertyRNA rna_GreasePencilLayers_new_layer = {
	{NULL, (PropertyRNA *)&rna_GreasePencilLayers_new_set_active,
	-1, "layer", 8388616, "",
	"The newly created layer",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	NULL, NULL, NULL, NULL,&RNA_GPencilLayer
};

FunctionRNA rna_GreasePencilLayers_new_func = {
	{(FunctionRNA *)&rna_GreasePencilLayers_remove_func, NULL,
	NULL,
	{(PropertyRNA *)&rna_GreasePencilLayers_new_name, (PropertyRNA *)&rna_GreasePencilLayers_new_layer}},
	"new", 0, "Add a new grease pencil layer",
	GreasePencilLayers_new_call,
	(PropertyRNA *)&rna_GreasePencilLayers_new_layer
};

PointerPropertyRNA rna_GreasePencilLayers_remove_layer = {
	{NULL, NULL,
	-1, "layer", 264196, "",
	"The layer to remove",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	NULL, NULL, NULL, NULL,&RNA_GPencilLayer
};

FunctionRNA rna_GreasePencilLayers_remove_func = {
	{NULL, (FunctionRNA *)&rna_GreasePencilLayers_new_func,
	NULL,
	{(PropertyRNA *)&rna_GreasePencilLayers_remove_layer, (PropertyRNA *)&rna_GreasePencilLayers_remove_layer}},
	"remove", 16, "Remove a grease pencil layer",
	GreasePencilLayers_remove_call,
	NULL
};

StructRNA RNA_GreasePencilLayers = {
	{(ContainerRNA *)&RNA_GPencilLayer, (ContainerRNA *)&RNA_GreasePencil,
	NULL,
	{(PropertyRNA *)&rna_GreasePencilLayers_rna_properties, (PropertyRNA *)&rna_GreasePencilLayers_active}},
	"GreasePencilLayers", NULL, NULL, 4, "Grease Pencil Layers",
	"Collection of grease pencil layers",
	"*", 17,
	NULL, (PropertyRNA *)&rna_GreasePencilLayers_rna_properties,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	{(FunctionRNA *)&rna_GreasePencilLayers_new_func, (FunctionRNA *)&rna_GreasePencilLayers_remove_func}
};

/* Grease Pencil Layer */
CollectionPropertyRNA rna_GPencilLayer_rna_properties = {
	{(PropertyRNA *)&rna_GPencilLayer_rna_type, NULL,
	-1, "rna_properties", 128, "Properties",
	"RNA property collection",
	0, "*",
	PROP_COLLECTION, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	GPencilLayer_rna_properties_begin, GPencilLayer_rna_properties_next, GPencilLayer_rna_properties_end, GPencilLayer_rna_properties_get, NULL, NULL, GPencilLayer_rna_properties_lookup_string, NULL, &RNA_Property
};

PointerPropertyRNA rna_GPencilLayer_rna_type = {
	{(PropertyRNA *)&rna_GPencilLayer_info, (PropertyRNA *)&rna_GPencilLayer_rna_properties,
	-1, "rna_type", 8912896, "RNA",
	"RNA type definition",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	GPencilLayer_rna_type_get, NULL, NULL, NULL,&RNA_Struct
};

StringPropertyRNA rna_GPencilLayer_info = {
	{(PropertyRNA *)&rna_GPencilLayer_frames, (PropertyRNA *)&rna_GPencilLayer_rna_type,
	-1, "info", 262145, "Info",
	"Layer name",
	0, "*",
	PROP_STRING, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {128, 0, 0}, 0,
	NULL, 375062528, NULL, NULL,
	0, -1, NULL},
	GPencilLayer_info_get, GPencilLayer_info_length, GPencilLayer_info_set, NULL, NULL, NULL, 128, ""
};

CollectionPropertyRNA rna_GPencilLayer_frames = {
	{(PropertyRNA *)&rna_GPencilLayer_active_frame, (PropertyRNA *)&rna_GPencilLayer_info,
	-1, "frames", 0, "Frames",
	"Sketches for this layer on different frames",
	0, "*",
	PROP_COLLECTION, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, &RNA_GPencilFrames},
	GPencilLayer_frames_begin, GPencilLayer_frames_next, GPencilLayer_frames_end, GPencilLayer_frames_get, NULL, GPencilLayer_frames_lookup_int, NULL, NULL, &RNA_GPencilFrame
};

PointerPropertyRNA rna_GPencilLayer_active_frame = {
	{(PropertyRNA *)&rna_GPencilLayer_color, (PropertyRNA *)&rna_GPencilLayer_frames,
	-1, "active_frame", 8388608, "Active Frame",
	"Frame currently being displayed for this layer",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 375062528, rna_GPencilLayer_active_frame_editable, NULL,
	0, -1, NULL},
	GPencilLayer_active_frame_get, NULL, NULL, NULL,&RNA_GPencilFrame
};

static float rna_GPencilLayer_color_default[3] = {
	0.0f,
	0.0f,
	0.0f
};

FloatPropertyRNA rna_GPencilLayer_color = {
	{(PropertyRNA *)&rna_GPencilLayer_alpha, (PropertyRNA *)&rna_GPencilLayer_active_frame,
	-1, "color", 8195, "Color",
	"Color for all strokes in this layer",
	0, "*",
	PROP_FLOAT, PROP_COLOR_GAMMA | PROP_UNIT_NONE, NULL, 1, {3, 0, 0}, 3,
	rna_GPencil_update, 375062528, NULL, NULL,
	offsetof(bGPDlayer, color), 4, NULL},
	NULL, NULL, GPencilLayer_color_get, GPencilLayer_color_set, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 1.0f, 0.0f, 1.0f, 10.0f, 3, 0.0f, rna_GPencilLayer_color_default
};

FloatPropertyRNA rna_GPencilLayer_alpha = {
	{(PropertyRNA *)&rna_GPencilLayer_line_width, (PropertyRNA *)&rna_GPencilLayer_color,
	-1, "alpha", 8195, "Opacity",
	"Layer Opacity",
	0, "*",
	PROP_FLOAT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_GPencil_update, 375062528, NULL, NULL,
	offsetof(bGPDlayer, color[3]), 4, NULL},
	GPencilLayer_alpha_get, GPencilLayer_alpha_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.3000000119f, 1.0f, 0.3000000119f, 1.0f, 10.0f, 3, 0.0f, NULL
};

IntPropertyRNA rna_GPencilLayer_line_width = {
	{(PropertyRNA *)&rna_GPencilLayer_use_onion_skinning, (PropertyRNA *)&rna_GPencilLayer_alpha,
	-1, "line_width", 8195, "Thickness",
	"Thickness of strokes (in pixels)",
	0, "*",
	PROP_INT, PROP_PIXEL | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_GPencil_update, 375062528, NULL, NULL,
	offsetof(bGPDlayer, thickness), 1, NULL},
	GPencilLayer_line_width_get, GPencilLayer_line_width_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL,
	1, 10, 1, 10, 1, 0, NULL
};

BoolPropertyRNA rna_GPencilLayer_use_onion_skinning = {
	{(PropertyRNA *)&rna_GPencilLayer_ghost_range_max, (PropertyRNA *)&rna_GPencilLayer_line_width,
	-1, "use_onion_skinning", 3, "Onion Skinning",
	"Ghost frames on either side of frame",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_GPencil_update, 375062528, NULL, NULL,
	0, -1, NULL},
	GPencilLayer_use_onion_skinning_get, GPencilLayer_use_onion_skinning_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

IntPropertyRNA rna_GPencilLayer_ghost_range_max = {
	{(PropertyRNA *)&rna_GPencilLayer_hide, (PropertyRNA *)&rna_GPencilLayer_use_onion_skinning,
	-1, "ghost_range_max", 8195, "Max Ghost Range",
	"Maximum number of frames on either side of the active frame to show (0 = show the \'first\' available sketch on either side)",
	0, "*",
	PROP_INT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_GPencil_update, 375062528, NULL, NULL,
	offsetof(bGPDlayer, gstep), 1, NULL},
	GPencilLayer_ghost_range_max_get, GPencilLayer_ghost_range_max_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL,
	0, 120, 0, 120, 1, 0, NULL
};

BoolPropertyRNA rna_GPencilLayer_hide = {
	{(PropertyRNA *)&rna_GPencilLayer_lock, (PropertyRNA *)&rna_GPencilLayer_ghost_range_max,
	-1, "hide", 3, "Hide",
	"Set layer Visibility",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_GPencil_update, 375062528, NULL, NULL,
	0, -1, NULL},
	GPencilLayer_hide_get, GPencilLayer_hide_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_GPencilLayer_lock = {
	{(PropertyRNA *)&rna_GPencilLayer_lock_frame, (PropertyRNA *)&rna_GPencilLayer_hide,
	-1, "lock", 3, "Locked",
	"Protect layer from further editing and/or frame changes",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 375062528, NULL, NULL,
	0, -1, NULL},
	GPencilLayer_lock_get, GPencilLayer_lock_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_GPencilLayer_lock_frame = {
	{(PropertyRNA *)&rna_GPencilLayer_select, (PropertyRNA *)&rna_GPencilLayer_lock,
	-1, "lock_frame", 3, "Frame Locked",
	"Lock current frame displayed by layer",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 375062528, NULL, NULL,
	0, -1, NULL},
	GPencilLayer_lock_frame_get, GPencilLayer_lock_frame_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_GPencilLayer_select = {
	{(PropertyRNA *)&rna_GPencilLayer_show_points, (PropertyRNA *)&rna_GPencilLayer_lock_frame,
	-1, "select", 3, "Select",
	"Layer is selected for editing in the Dope Sheet",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 375062528, NULL, NULL,
	0, -1, NULL},
	GPencilLayer_select_get, GPencilLayer_select_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_GPencilLayer_show_points = {
	{(PropertyRNA *)&rna_GPencilLayer_show_x_ray, (PropertyRNA *)&rna_GPencilLayer_select,
	-1, "show_points", 3, "Show Points",
	"Draw the points which make up the strokes (for debugging purposes)",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_GPencil_update, 0, NULL, NULL,
	0, -1, NULL},
	GPencilLayer_show_points_get, GPencilLayer_show_points_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_GPencilLayer_show_x_ray = {
	{NULL, (PropertyRNA *)&rna_GPencilLayer_show_points,
	-1, "show_x_ray", 3, "X Ray",
	"Make the layer draw in front of objects",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_GPencil_update, 375062528, NULL, NULL,
	0, -1, NULL},
	GPencilLayer_show_x_ray_get, GPencilLayer_show_x_ray_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

FunctionRNA rna_GPencilLayer_clear_func = {
	{NULL, NULL,
	NULL,
	{NULL, NULL}},
	"clear", 0, "Remove all the grease pencil layer data",
	GPencilLayer_clear_call,
	NULL
};

StructRNA RNA_GPencilLayer = {
	{(ContainerRNA *)&RNA_GPencilFrames, (ContainerRNA *)&RNA_GreasePencilLayers,
	NULL,
	{(PropertyRNA *)&rna_GPencilLayer_rna_properties, (PropertyRNA *)&rna_GPencilLayer_show_x_ray}},
	"GPencilLayer", NULL, NULL, 4, "Grease Pencil Layer",
	"Collection of related sketches",
	"*", 17,
	(PropertyRNA *)&rna_GPencilLayer_info, (PropertyRNA *)&rna_GPencilLayer_rna_properties,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	{(FunctionRNA *)&rna_GPencilLayer_clear_func, (FunctionRNA *)&rna_GPencilLayer_clear_func}
};

/* Grease Pencil Frames */
CollectionPropertyRNA rna_GPencilFrames_rna_properties = {
	{(PropertyRNA *)&rna_GPencilFrames_rna_type, NULL,
	-1, "rna_properties", 128, "Properties",
	"RNA property collection",
	0, "*",
	PROP_COLLECTION, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	GPencilFrames_rna_properties_begin, GPencilFrames_rna_properties_next, GPencilFrames_rna_properties_end, GPencilFrames_rna_properties_get, NULL, NULL, GPencilFrames_rna_properties_lookup_string, NULL, &RNA_Property
};

PointerPropertyRNA rna_GPencilFrames_rna_type = {
	{NULL, (PropertyRNA *)&rna_GPencilFrames_rna_properties,
	-1, "rna_type", 8912896, "RNA",
	"RNA type definition",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	GPencilFrames_rna_type_get, NULL, NULL, NULL,&RNA_Struct
};

IntPropertyRNA rna_GPencilFrames_new_frame_number = {
	{(PropertyRNA *)&rna_GPencilFrames_new_frame, NULL,
	-1, "frame_number", 7, "Frame Number",
	"The frame on which this sketch appears",
	0, "*",
	PROP_INT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL,
	-300000, 300000, -300000, 300000, 1, 1, NULL
};

PointerPropertyRNA rna_GPencilFrames_new_frame = {
	{NULL, (PropertyRNA *)&rna_GPencilFrames_new_frame_number,
	-1, "frame", 8388616, "",
	"The newly created frame",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	NULL, NULL, NULL, NULL,&RNA_GPencilFrame
};

FunctionRNA rna_GPencilFrames_new_func = {
	{(FunctionRNA *)&rna_GPencilFrames_remove_func, NULL,
	NULL,
	{(PropertyRNA *)&rna_GPencilFrames_new_frame_number, (PropertyRNA *)&rna_GPencilFrames_new_frame}},
	"new", 16, "Add a new grease pencil frame",
	GPencilFrames_new_call,
	(PropertyRNA *)&rna_GPencilFrames_new_frame
};

PointerPropertyRNA rna_GPencilFrames_remove_frame = {
	{NULL, NULL,
	-1, "frame", 264196, "Frame",
	"The frame to remove",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	NULL, NULL, NULL, NULL,&RNA_GPencilFrame
};

FunctionRNA rna_GPencilFrames_remove_func = {
	{(FunctionRNA *)&rna_GPencilFrames_copy_func, (FunctionRNA *)&rna_GPencilFrames_new_func,
	NULL,
	{(PropertyRNA *)&rna_GPencilFrames_remove_frame, (PropertyRNA *)&rna_GPencilFrames_remove_frame}},
	"remove", 16, "Remove a grease pencil frame",
	GPencilFrames_remove_call,
	NULL
};

PointerPropertyRNA rna_GPencilFrames_copy_source = {
	{(PropertyRNA *)&rna_GPencilFrames_copy_copy, NULL,
	-1, "source", 8650756, "Source",
	"The source frame",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	NULL, NULL, NULL, NULL,&RNA_GPencilFrame
};

PointerPropertyRNA rna_GPencilFrames_copy_copy = {
	{NULL, (PropertyRNA *)&rna_GPencilFrames_copy_source,
	-1, "copy", 8388616, "",
	"The newly copied frame",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	NULL, NULL, NULL, NULL,&RNA_GPencilFrame
};

FunctionRNA rna_GPencilFrames_copy_func = {
	{NULL, (FunctionRNA *)&rna_GPencilFrames_remove_func,
	NULL,
	{(PropertyRNA *)&rna_GPencilFrames_copy_source, (PropertyRNA *)&rna_GPencilFrames_copy_copy}},
	"copy", 0, "Copy a grease pencil frame",
	GPencilFrames_copy_call,
	(PropertyRNA *)&rna_GPencilFrames_copy_copy
};

StructRNA RNA_GPencilFrames = {
	{(ContainerRNA *)&RNA_GPencilFrame, (ContainerRNA *)&RNA_GPencilLayer,
	NULL,
	{(PropertyRNA *)&rna_GPencilFrames_rna_properties, (PropertyRNA *)&rna_GPencilFrames_rna_type}},
	"GPencilFrames", NULL, NULL, 4, "Grease Pencil Frames",
	"Collection of grease pencil frames",
	"*", 17,
	NULL, (PropertyRNA *)&rna_GPencilFrames_rna_properties,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	{(FunctionRNA *)&rna_GPencilFrames_new_func, (FunctionRNA *)&rna_GPencilFrames_copy_func}
};

/* Grease Pencil Frame */
CollectionPropertyRNA rna_GPencilFrame_rna_properties = {
	{(PropertyRNA *)&rna_GPencilFrame_rna_type, NULL,
	-1, "rna_properties", 128, "Properties",
	"RNA property collection",
	0, "*",
	PROP_COLLECTION, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	GPencilFrame_rna_properties_begin, GPencilFrame_rna_properties_next, GPencilFrame_rna_properties_end, GPencilFrame_rna_properties_get, NULL, NULL, GPencilFrame_rna_properties_lookup_string, NULL, &RNA_Property
};

PointerPropertyRNA rna_GPencilFrame_rna_type = {
	{(PropertyRNA *)&rna_GPencilFrame_strokes, (PropertyRNA *)&rna_GPencilFrame_rna_properties,
	-1, "rna_type", 8912896, "RNA",
	"RNA type definition",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	GPencilFrame_rna_type_get, NULL, NULL, NULL,&RNA_Struct
};

CollectionPropertyRNA rna_GPencilFrame_strokes = {
	{(PropertyRNA *)&rna_GPencilFrame_frame_number, (PropertyRNA *)&rna_GPencilFrame_rna_type,
	-1, "strokes", 0, "Strokes",
	"Freehand curves defining the sketch on this frame",
	0, "*",
	PROP_COLLECTION, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, &RNA_GPencilStrokes},
	GPencilFrame_strokes_begin, GPencilFrame_strokes_next, GPencilFrame_strokes_end, GPencilFrame_strokes_get, NULL, GPencilFrame_strokes_lookup_int, NULL, NULL, &RNA_GPencilStroke
};

IntPropertyRNA rna_GPencilFrame_frame_number = {
	{(PropertyRNA *)&rna_GPencilFrame_is_edited, (PropertyRNA *)&rna_GPencilFrame_strokes,
	-1, "frame_number", 8195, "Frame Number",
	"The frame on which this sketch appears",
	0, "*",
	PROP_INT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	offsetof(bGPDframe, framenum), 0, NULL},
	GPencilFrame_frame_number_get, GPencilFrame_frame_number_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL,
	-300000, 300000, -300000, 300000, 1, 0, NULL
};

BoolPropertyRNA rna_GPencilFrame_is_edited = {
	{(PropertyRNA *)&rna_GPencilFrame_select, (PropertyRNA *)&rna_GPencilFrame_frame_number,
	-1, "is_edited", 3, "Paint Lock",
	"Frame is being edited (painted on)",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	GPencilFrame_is_edited_get, GPencilFrame_is_edited_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_GPencilFrame_select = {
	{NULL, (PropertyRNA *)&rna_GPencilFrame_is_edited,
	-1, "select", 3, "Select",
	"Frame is selected for editing in the Dope Sheet",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	GPencilFrame_select_get, GPencilFrame_select_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

FunctionRNA rna_GPencilFrame_clear_func = {
	{NULL, NULL,
	NULL,
	{NULL, NULL}},
	"clear", 0, "Remove all the grease pencil frame data",
	GPencilFrame_clear_call,
	NULL
};

StructRNA RNA_GPencilFrame = {
	{(ContainerRNA *)&RNA_GPencilStrokes, (ContainerRNA *)&RNA_GPencilFrames,
	NULL,
	{(PropertyRNA *)&rna_GPencilFrame_rna_properties, (PropertyRNA *)&rna_GPencilFrame_select}},
	"GPencilFrame", NULL, NULL, 4, "Grease Pencil Frame",
	"Collection of related sketches on a particular frame",
	"*", 17,
	NULL, (PropertyRNA *)&rna_GPencilFrame_rna_properties,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	{(FunctionRNA *)&rna_GPencilFrame_clear_func, (FunctionRNA *)&rna_GPencilFrame_clear_func}
};

/* Grease Pencil Frames */
CollectionPropertyRNA rna_GPencilStrokes_rna_properties = {
	{(PropertyRNA *)&rna_GPencilStrokes_rna_type, NULL,
	-1, "rna_properties", 128, "Properties",
	"RNA property collection",
	0, "*",
	PROP_COLLECTION, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	GPencilStrokes_rna_properties_begin, GPencilStrokes_rna_properties_next, GPencilStrokes_rna_properties_end, GPencilStrokes_rna_properties_get, NULL, NULL, GPencilStrokes_rna_properties_lookup_string, NULL, &RNA_Property
};

PointerPropertyRNA rna_GPencilStrokes_rna_type = {
	{NULL, (PropertyRNA *)&rna_GPencilStrokes_rna_properties,
	-1, "rna_type", 8912896, "RNA",
	"RNA type definition",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	GPencilStrokes_rna_type_get, NULL, NULL, NULL,&RNA_Struct
};

PointerPropertyRNA rna_GPencilStrokes_new_stroke = {
	{NULL, NULL,
	-1, "stroke", 8388616, "",
	"The newly created stroke",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	NULL, NULL, NULL, NULL,&RNA_GPencilStroke
};

FunctionRNA rna_GPencilStrokes_new_func = {
	{(FunctionRNA *)&rna_GPencilStrokes_remove_func, NULL,
	NULL,
	{(PropertyRNA *)&rna_GPencilStrokes_new_stroke, (PropertyRNA *)&rna_GPencilStrokes_new_stroke}},
	"new", 0, "Add a new grease pencil stroke",
	GPencilStrokes_new_call,
	(PropertyRNA *)&rna_GPencilStrokes_new_stroke
};

PointerPropertyRNA rna_GPencilStrokes_remove_stroke = {
	{NULL, NULL,
	-1, "stroke", 264196, "Stroke",
	"The stroke to remove",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	NULL, NULL, NULL, NULL,&RNA_GPencilStroke
};

FunctionRNA rna_GPencilStrokes_remove_func = {
	{NULL, (FunctionRNA *)&rna_GPencilStrokes_new_func,
	NULL,
	{(PropertyRNA *)&rna_GPencilStrokes_remove_stroke, (PropertyRNA *)&rna_GPencilStrokes_remove_stroke}},
	"remove", 16, "Remove a grease pencil stroke",
	GPencilStrokes_remove_call,
	NULL
};

StructRNA RNA_GPencilStrokes = {
	{(ContainerRNA *)&RNA_GPencilStroke, (ContainerRNA *)&RNA_GPencilFrame,
	NULL,
	{(PropertyRNA *)&rna_GPencilStrokes_rna_properties, (PropertyRNA *)&rna_GPencilStrokes_rna_type}},
	"GPencilStrokes", NULL, NULL, 4, "Grease Pencil Frames",
	"Collection of grease pencil stroke",
	"*", 17,
	NULL, (PropertyRNA *)&rna_GPencilStrokes_rna_properties,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	{(FunctionRNA *)&rna_GPencilStrokes_new_func, (FunctionRNA *)&rna_GPencilStrokes_remove_func}
};

/* Grease Pencil Stroke */
CollectionPropertyRNA rna_GPencilStroke_rna_properties = {
	{(PropertyRNA *)&rna_GPencilStroke_rna_type, NULL,
	-1, "rna_properties", 128, "Properties",
	"RNA property collection",
	0, "*",
	PROP_COLLECTION, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	GPencilStroke_rna_properties_begin, GPencilStroke_rna_properties_next, GPencilStroke_rna_properties_end, GPencilStroke_rna_properties_get, NULL, NULL, GPencilStroke_rna_properties_lookup_string, NULL, &RNA_Property
};

PointerPropertyRNA rna_GPencilStroke_rna_type = {
	{(PropertyRNA *)&rna_GPencilStroke_points, (PropertyRNA *)&rna_GPencilStroke_rna_properties,
	-1, "rna_type", 8912896, "RNA",
	"RNA type definition",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	GPencilStroke_rna_type_get, NULL, NULL, NULL,&RNA_Struct
};

CollectionPropertyRNA rna_GPencilStroke_points = {
	{(PropertyRNA *)&rna_GPencilStroke_draw_mode, (PropertyRNA *)&rna_GPencilStroke_rna_type,
	-1, "points", 16384, "Stroke Points",
	"Stroke data points",
	0, "*",
	PROP_COLLECTION, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, &RNA_GPencilStrokePoints},
	GPencilStroke_points_begin, GPencilStroke_points_next, GPencilStroke_points_end, GPencilStroke_points_get, GPencilStroke_points_length, GPencilStroke_points_lookup_int, NULL, NULL, &RNA_GPencilStrokePoint
};

static EnumPropertyItem rna_GPencilStroke_draw_mode_items[5] = {
	{0, "SCREEN", 0, "Screen", "Stroke is in screen-space"},
	{1, "3DSPACE", 0, "3D Space", "Stroke is in 3D-space"},
	{2, "2DSPACE", 0, "2D Space", "Stroke is in 2D-space"},
	{4, "2DIMAGE", 0, "2D Image", "Stroke is in 2D-space (but with special \'image\' scaling)"},
	{0, NULL, 0, NULL, NULL}
};

EnumPropertyRNA rna_GPencilStroke_draw_mode = {
	{NULL, (PropertyRNA *)&rna_GPencilStroke_points,
	-1, "draw_mode", 3, "Draw Mode",
	"",
	0, "*",
	PROP_ENUM, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_GPencil_update, 0, NULL, NULL,
	0, -1, NULL},
	GPencilStroke_draw_mode_get, GPencilStroke_draw_mode_set, NULL, NULL, NULL, NULL, rna_GPencilStroke_draw_mode_items, 4, 0
};

StructRNA RNA_GPencilStroke = {
	{(ContainerRNA *)&RNA_GPencilStrokePoints, (ContainerRNA *)&RNA_GPencilStrokes,
	NULL,
	{(PropertyRNA *)&rna_GPencilStroke_rna_properties, (PropertyRNA *)&rna_GPencilStroke_draw_mode}},
	"GPencilStroke", NULL, NULL, 4, "Grease Pencil Stroke",
	"Freehand curve defining part of a sketch",
	"*", 17,
	NULL, (PropertyRNA *)&rna_GPencilStroke_rna_properties,
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

/* Grease Pencil Stroke Points */
CollectionPropertyRNA rna_GPencilStrokePoints_rna_properties = {
	{(PropertyRNA *)&rna_GPencilStrokePoints_rna_type, NULL,
	-1, "rna_properties", 128, "Properties",
	"RNA property collection",
	0, "*",
	PROP_COLLECTION, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	GPencilStrokePoints_rna_properties_begin, GPencilStrokePoints_rna_properties_next, GPencilStrokePoints_rna_properties_end, GPencilStrokePoints_rna_properties_get, NULL, NULL, GPencilStrokePoints_rna_properties_lookup_string, NULL, &RNA_Property
};

PointerPropertyRNA rna_GPencilStrokePoints_rna_type = {
	{NULL, (PropertyRNA *)&rna_GPencilStrokePoints_rna_properties,
	-1, "rna_type", 8912896, "RNA",
	"RNA type definition",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	GPencilStrokePoints_rna_type_get, NULL, NULL, NULL,&RNA_Struct
};

IntPropertyRNA rna_GPencilStrokePoints_add_count = {
	{NULL, NULL,
	-1, "count", 3, "Number",
	"Number of points to add to the stroke",
	0, "*",
	PROP_INT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL,
	0, INT_MAX, 0, INT_MAX, 1, 1, NULL
};

FunctionRNA rna_GPencilStrokePoints_add_func = {
	{(FunctionRNA *)&rna_GPencilStrokePoints_pop_func, NULL,
	NULL,
	{(PropertyRNA *)&rna_GPencilStrokePoints_add_count, (PropertyRNA *)&rna_GPencilStrokePoints_add_count}},
	"add", 0, "Add a new grease pencil stroke point",
	GPencilStrokePoints_add_call,
	NULL
};

IntPropertyRNA rna_GPencilStrokePoints_pop_index = {
	{NULL, NULL,
	-1, "index", 3, "Index",
	"point index",
	0, "*",
	PROP_INT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL,
	INT_MIN, INT_MAX, INT_MIN, INT_MAX, 1, -1, NULL
};

FunctionRNA rna_GPencilStrokePoints_pop_func = {
	{NULL, (FunctionRNA *)&rna_GPencilStrokePoints_add_func,
	NULL,
	{(PropertyRNA *)&rna_GPencilStrokePoints_pop_index, (PropertyRNA *)&rna_GPencilStrokePoints_pop_index}},
	"pop", 16, "Remove a grease pencil stroke point",
	GPencilStrokePoints_pop_call,
	NULL
};

StructRNA RNA_GPencilStrokePoints = {
	{(ContainerRNA *)&RNA_GPencilStrokePoint, (ContainerRNA *)&RNA_GPencilStroke,
	NULL,
	{(PropertyRNA *)&rna_GPencilStrokePoints_rna_properties, (PropertyRNA *)&rna_GPencilStrokePoints_rna_type}},
	"GPencilStrokePoints", NULL, NULL, 4, "Grease Pencil Stroke Points",
	"Collection of grease pencil stroke points",
	"*", 17,
	NULL, (PropertyRNA *)&rna_GPencilStrokePoints_rna_properties,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	{(FunctionRNA *)&rna_GPencilStrokePoints_add_func, (FunctionRNA *)&rna_GPencilStrokePoints_pop_func}
};

/* Grease Pencil Stroke Point */
CollectionPropertyRNA rna_GPencilStrokePoint_rna_properties = {
	{(PropertyRNA *)&rna_GPencilStrokePoint_rna_type, NULL,
	-1, "rna_properties", 128, "Properties",
	"RNA property collection",
	0, "*",
	PROP_COLLECTION, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	GPencilStrokePoint_rna_properties_begin, GPencilStrokePoint_rna_properties_next, GPencilStrokePoint_rna_properties_end, GPencilStrokePoint_rna_properties_get, NULL, NULL, GPencilStrokePoint_rna_properties_lookup_string, NULL, &RNA_Property
};

PointerPropertyRNA rna_GPencilStrokePoint_rna_type = {
	{(PropertyRNA *)&rna_GPencilStrokePoint_co, (PropertyRNA *)&rna_GPencilStrokePoint_rna_properties,
	-1, "rna_type", 8912896, "RNA",
	"RNA type definition",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	GPencilStrokePoint_rna_type_get, NULL, NULL, NULL,&RNA_Struct
};

static float rna_GPencilStrokePoint_co_default[3] = {
	0.0f,
	0.0f,
	0.0f
};

FloatPropertyRNA rna_GPencilStrokePoint_co = {
	{(PropertyRNA *)&rna_GPencilStrokePoint_pressure, (PropertyRNA *)&rna_GPencilStrokePoint_rna_type,
	-1, "co", 8195, "Coordinates",
	"",
	0, "*",
	PROP_FLOAT, PROP_XYZ | PROP_UNIT_NONE, NULL, 1, {3, 0, 0}, 3,
	rna_GPencil_update, 375062528, NULL, NULL,
	offsetof(bGPDspoint, x), 4, NULL},
	NULL, NULL, GPencilStrokePoint_co_get, GPencilStrokePoint_co_set, NULL, NULL, NULL, NULL, NULL, NULL, -10000.0f, 10000.0f, -FLT_MAX, FLT_MAX, 10.0f, 3, 0.0f, rna_GPencilStrokePoint_co_default
};

FloatPropertyRNA rna_GPencilStrokePoint_pressure = {
	{NULL, (PropertyRNA *)&rna_GPencilStrokePoint_co,
	-1, "pressure", 8195, "Pressure",
	"Pressure of tablet at point when drawing it",
	0, "*",
	PROP_FLOAT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_GPencil_update, 375062528, NULL, NULL,
	offsetof(bGPDspoint, pressure), 4, NULL},
	GPencilStrokePoint_pressure_get, GPencilStrokePoint_pressure_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 1.0f, 0.0f, 1.0f, 10.0f, 3, 0.0f, NULL
};

StructRNA RNA_GPencilStrokePoint = {
	{(ContainerRNA *)&RNA_Group, (ContainerRNA *)&RNA_GPencilStrokePoints,
	NULL,
	{(PropertyRNA *)&rna_GPencilStrokePoint_rna_properties, (PropertyRNA *)&rna_GPencilStrokePoint_pressure}},
	"GPencilStrokePoint", NULL, NULL, 4, "Grease Pencil Stroke Point",
	"Data point for freehand stroke curve",
	"*", 17,
	NULL, (PropertyRNA *)&rna_GPencilStrokePoint_rna_properties,
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

