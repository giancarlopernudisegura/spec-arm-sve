
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

#include "rna_image.c"
#include "rna_image_api.c"

#pragma GCC diagnostic ignored "-Wunused-parameter"

/* Autogenerated Functions */


CollectionPropertyRNA rna_RenderSlot_rna_properties;
PointerPropertyRNA rna_RenderSlot_rna_type;
StringPropertyRNA rna_RenderSlot_name;


CollectionPropertyRNA rna_RenderSlots_rna_properties;
PointerPropertyRNA rna_RenderSlots_rna_type;
PointerPropertyRNA rna_RenderSlots_active;
IntPropertyRNA rna_RenderSlots_active_index;


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

StringPropertyRNA rna_Image_filepath;
StringPropertyRNA rna_Image_filepath_raw;
EnumPropertyRNA rna_Image_file_format;
EnumPropertyRNA rna_Image_source;
EnumPropertyRNA rna_Image_type;
PointerPropertyRNA rna_Image_packed_file;
EnumPropertyRNA rna_Image_field_order;
BoolPropertyRNA rna_Image_use_fields;
BoolPropertyRNA rna_Image_use_view_as_render;
BoolPropertyRNA rna_Image_use_alpha;
BoolPropertyRNA rna_Image_is_dirty;
EnumPropertyRNA rna_Image_generated_type;
IntPropertyRNA rna_Image_generated_width;
IntPropertyRNA rna_Image_generated_height;
BoolPropertyRNA rna_Image_use_generated_float;
FloatPropertyRNA rna_Image_generated_color;
EnumPropertyRNA rna_Image_mapping;
FloatPropertyRNA rna_Image_display_aspect;
BoolPropertyRNA rna_Image_use_animation;
IntPropertyRNA rna_Image_frame_start;
IntPropertyRNA rna_Image_frame_end;
IntPropertyRNA rna_Image_fps;
BoolPropertyRNA rna_Image_use_tiles;
IntPropertyRNA rna_Image_tiles_x;
IntPropertyRNA rna_Image_tiles_y;
BoolPropertyRNA rna_Image_use_clamp_x;
BoolPropertyRNA rna_Image_use_clamp_y;
IntPropertyRNA rna_Image_bindcode;
CollectionPropertyRNA rna_Image_render_slots;
BoolPropertyRNA rna_Image_has_data;
IntPropertyRNA rna_Image_depth;
IntPropertyRNA rna_Image_size;
FloatPropertyRNA rna_Image_resolution;
IntPropertyRNA rna_Image_frame_duration;
FloatPropertyRNA rna_Image_pixels;
IntPropertyRNA rna_Image_channels;
BoolPropertyRNA rna_Image_is_float;
PointerPropertyRNA rna_Image_colorspace_settings;
EnumPropertyRNA rna_Image_alpha_mode;

extern FunctionRNA rna_ID_copy_func;
extern PointerPropertyRNA rna_ID_copy_id;

extern FunctionRNA rna_ID_user_clear_func;
extern FunctionRNA rna_ID_animation_data_create_func;
extern PointerPropertyRNA rna_ID_animation_data_create_anim_data;

extern FunctionRNA rna_ID_animation_data_clear_func;
extern FunctionRNA rna_ID_update_tag_func;
extern EnumPropertyRNA rna_ID_update_tag_refresh;


extern FunctionRNA rna_Image_save_render_func;
extern StringPropertyRNA rna_Image_save_render_filepath;
extern PointerPropertyRNA rna_Image_save_render_scene;

extern FunctionRNA rna_Image_save_func;
extern FunctionRNA rna_Image_pack_func;
extern BoolPropertyRNA rna_Image_pack_as_png;

extern FunctionRNA rna_Image_unpack_func;
extern EnumPropertyRNA rna_Image_unpack_method;

extern FunctionRNA rna_Image_reload_func;
extern FunctionRNA rna_Image_update_func;
extern FunctionRNA rna_Image_scale_func;
extern IntPropertyRNA rna_Image_scale_width;
extern IntPropertyRNA rna_Image_scale_height;

extern FunctionRNA rna_Image_gl_touch_func;
extern IntPropertyRNA rna_Image_gl_touch_frame;
extern IntPropertyRNA rna_Image_gl_touch_filter;
extern IntPropertyRNA rna_Image_gl_touch_mag;
extern IntPropertyRNA rna_Image_gl_touch_error;

extern FunctionRNA rna_Image_gl_load_func;
extern IntPropertyRNA rna_Image_gl_load_frame;
extern IntPropertyRNA rna_Image_gl_load_filter;
extern IntPropertyRNA rna_Image_gl_load_mag;
extern IntPropertyRNA rna_Image_gl_load_error;

extern FunctionRNA rna_Image_gl_free_func;
extern FunctionRNA rna_Image_filepath_from_user_func;
extern PointerPropertyRNA rna_Image_filepath_from_user_image_user;
extern StringPropertyRNA rna_Image_filepath_from_user_filepath;



CollectionPropertyRNA rna_ImageUser_rna_properties;
PointerPropertyRNA rna_ImageUser_rna_type;
BoolPropertyRNA rna_ImageUser_use_auto_refresh;
IntPropertyRNA rna_ImageUser_frame_current;
BoolPropertyRNA rna_ImageUser_use_cyclic;
IntPropertyRNA rna_ImageUser_frame_duration;
IntPropertyRNA rna_ImageUser_frame_offset;
IntPropertyRNA rna_ImageUser_frame_start;
IntPropertyRNA rna_ImageUser_fields_per_frame;
IntPropertyRNA rna_ImageUser_multilayer_layer;
IntPropertyRNA rna_ImageUser_multilayer_pass;

static PointerRNA RenderSlot_rna_properties_get(CollectionPropertyIterator *iter)
{
	return rna_builtin_properties_get(iter);
}

void RenderSlot_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

	memset(iter, 0, sizeof(*iter));
	iter->parent = *ptr;
	iter->prop = (PropertyRNA *)&rna_RenderSlot_rna_properties;

	rna_builtin_properties_begin(iter, ptr);

	if (iter->valid)
		iter->ptr = RenderSlot_rna_properties_get(iter);
}

void RenderSlot_rna_properties_next(CollectionPropertyIterator *iter)
{
	rna_builtin_properties_next(iter);

	if (iter->valid)
		iter->ptr = RenderSlot_rna_properties_get(iter);
}

void RenderSlot_rna_properties_end(CollectionPropertyIterator *iter)
{
	rna_iterator_listbase_end(iter);
}

int RenderSlot_rna_properties_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
	return rna_builtin_properties_lookup_string(ptr, key, r_ptr);
}

PointerRNA RenderSlot_rna_type_get(PointerRNA *ptr)
{
	return rna_builtin_type_get(ptr);
}

void RenderSlot_name_get(PointerRNA *ptr, char *value)
{
	RenderSlot *data = (RenderSlot *)(ptr->data);
	BLI_strncpy_utf8(value, data->name, 64);
}

int RenderSlot_name_length(PointerRNA *ptr)
{
	RenderSlot *data = (RenderSlot *)(ptr->data);
	return strlen(data->name);
}

void RenderSlot_name_set(PointerRNA *ptr, const char *value)
{
	RenderSlot *data = (RenderSlot *)(ptr->data);
	BLI_strncpy_utf8(data->name, value, 64);
}

static PointerRNA RenderSlots_rna_properties_get(CollectionPropertyIterator *iter)
{
	return rna_builtin_properties_get(iter);
}

void RenderSlots_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

	memset(iter, 0, sizeof(*iter));
	iter->parent = *ptr;
	iter->prop = (PropertyRNA *)&rna_RenderSlots_rna_properties;

	rna_builtin_properties_begin(iter, ptr);

	if (iter->valid)
		iter->ptr = RenderSlots_rna_properties_get(iter);
}

void RenderSlots_rna_properties_next(CollectionPropertyIterator *iter)
{
	rna_builtin_properties_next(iter);

	if (iter->valid)
		iter->ptr = RenderSlots_rna_properties_get(iter);
}

void RenderSlots_rna_properties_end(CollectionPropertyIterator *iter)
{
	rna_iterator_listbase_end(iter);
}

int RenderSlots_rna_properties_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
	return rna_builtin_properties_lookup_string(ptr, key, r_ptr);
}

PointerRNA RenderSlots_rna_type_get(PointerRNA *ptr)
{
	return rna_builtin_type_get(ptr);
}

PointerRNA RenderSlots_active_get(PointerRNA *ptr)
{
	return rna_render_slots_active_get(ptr);
}

void RenderSlots_active_set(PointerRNA *ptr, PointerRNA value)
{
	rna_render_slots_active_set(ptr, value);
}

int RenderSlots_active_index_get(PointerRNA *ptr)
{
	return rna_render_slots_active_index_get(ptr);
}

void RenderSlots_active_index_set(PointerRNA *ptr, int value)
{
	rna_render_slots_active_index_set(ptr, value);
}

void Image_filepath_get(PointerRNA *ptr, char *value)
{
	Image *data = (Image *)(ptr->data);
	BLI_strncpy(value, data->name, 1024);
}

int Image_filepath_length(PointerRNA *ptr)
{
	Image *data = (Image *)(ptr->data);
	return strlen(data->name);
}

void Image_filepath_set(PointerRNA *ptr, const char *value)
{
	Image *data = (Image *)(ptr->data);
	BLI_strncpy(data->name, value, 1024);
}

void Image_filepath_raw_get(PointerRNA *ptr, char *value)
{
	Image *data = (Image *)(ptr->data);
	BLI_strncpy(value, data->name, 1024);
}

int Image_filepath_raw_length(PointerRNA *ptr)
{
	Image *data = (Image *)(ptr->data);
	return strlen(data->name);
}

void Image_filepath_raw_set(PointerRNA *ptr, const char *value)
{
	Image *data = (Image *)(ptr->data);
	BLI_strncpy(data->name, value, 1024);
}

int Image_file_format_get(PointerRNA *ptr)
{
	return rna_Image_file_format_get(ptr);
}

void Image_file_format_set(PointerRNA *ptr, int value)
{
	rna_Image_file_format_set(ptr, value);
}

int Image_source_get(PointerRNA *ptr)
{
	Image *data = (Image *)(ptr->data);
	return (int)(data->source);
}

void Image_source_set(PointerRNA *ptr, int value)
{
	rna_Image_source_set(ptr, value);
}

int Image_type_get(PointerRNA *ptr)
{
	Image *data = (Image *)(ptr->data);
	return (int)(data->type);
}

PointerRNA Image_packed_file_get(PointerRNA *ptr)
{
	Image *data = (Image *)(ptr->data);
	return rna_pointer_inherit_refine(ptr, &RNA_PackedFile, data->packedfile);
}

int Image_field_order_get(PointerRNA *ptr)
{
	Image *data = (Image *)(ptr->data);
	return ((data->flag) & 2);
}

void Image_field_order_set(PointerRNA *ptr, int value)
{
	Image *data = (Image *)(ptr->data);
	data->flag &= ~2;
	data->flag |= value;
}

int Image_use_fields_get(PointerRNA *ptr)
{
	Image *data = (Image *)(ptr->data);
	return (((data->flag) & 1) != 0);
}

void Image_use_fields_set(PointerRNA *ptr, int value)
{
	Image *data = (Image *)(ptr->data);
	if (value) data->flag |= 1;
	else data->flag &= ~1;
}

int Image_use_view_as_render_get(PointerRNA *ptr)
{
	Image *data = (Image *)(ptr->data);
	return (((data->flag) & 2048) != 0);
}

void Image_use_view_as_render_set(PointerRNA *ptr, int value)
{
	Image *data = (Image *)(ptr->data);
	if (value) data->flag |= 2048;
	else data->flag &= ~2048;
}

int Image_use_alpha_get(PointerRNA *ptr)
{
	Image *data = (Image *)(ptr->data);
	return !(((data->flag) & 4096) != 0);
}

void Image_use_alpha_set(PointerRNA *ptr, int value)
{
	Image *data = (Image *)(ptr->data);
	if (!value) data->flag |= 4096;
	else data->flag &= ~4096;
}

int Image_is_dirty_get(PointerRNA *ptr)
{
	return rna_Image_dirty_get(ptr);
}

int Image_generated_type_get(PointerRNA *ptr)
{
	Image *data = (Image *)(ptr->data);
	return (int)(data->gen_type);
}

void Image_generated_type_set(PointerRNA *ptr, int value)
{
	Image *data = (Image *)(ptr->data);
	data->gen_type = value;
}

int Image_generated_width_get(PointerRNA *ptr)
{
	Image *data = (Image *)(ptr->data);
	return (int)(data->gen_x);
}

void Image_generated_width_set(PointerRNA *ptr, int value)
{
	Image *data = (Image *)(ptr->data);
	data->gen_x = CLAMPIS(value, 1, 65536);
}

int Image_generated_height_get(PointerRNA *ptr)
{
	Image *data = (Image *)(ptr->data);
	return (int)(data->gen_y);
}

void Image_generated_height_set(PointerRNA *ptr, int value)
{
	Image *data = (Image *)(ptr->data);
	data->gen_y = CLAMPIS(value, 1, 65536);
}

int Image_use_generated_float_get(PointerRNA *ptr)
{
	Image *data = (Image *)(ptr->data);
	return (((data->gen_flag) & 1) != 0);
}

void Image_use_generated_float_set(PointerRNA *ptr, int value)
{
	Image *data = (Image *)(ptr->data);
	if (value) data->gen_flag |= 1;
	else data->gen_flag &= ~1;
}

void Image_generated_color_get(PointerRNA *ptr, float values[4])
{
	Image *data = (Image *)(ptr->data);
	unsigned int i;

	for (i = 0; i < 4; i++) {
		values[i] = (float)(((float *)data->gen_color)[i]);
	}
}

void Image_generated_color_set(PointerRNA *ptr, const float values[4])
{
	Image *data = (Image *)(ptr->data);
	unsigned int i;

	for (i = 0; i < 4; i++) {
		((float *)data->gen_color)[i] = CLAMPIS(values[i], 0.0f, FLT_MAX);
	}
}

int Image_mapping_get(PointerRNA *ptr)
{
	Image *data = (Image *)(ptr->data);
	return ((data->flag) & 16);
}

void Image_mapping_set(PointerRNA *ptr, int value)
{
	Image *data = (Image *)(ptr->data);
	data->flag &= ~16;
	data->flag |= value;
}

void Image_display_aspect_get(PointerRNA *ptr, float values[2])
{
	Image *data = (Image *)(ptr->data);
	unsigned int i;

	for (i = 0; i < 2; i++) {
		values[i] = (float)((&data->aspx)[i]);
	}
}

void Image_display_aspect_set(PointerRNA *ptr, const float values[2])
{
	Image *data = (Image *)(ptr->data);
	unsigned int i;

	for (i = 0; i < 2; i++) {
		(&data->aspx)[i] = CLAMPIS(values[i], 0.1000000015f, FLT_MAX);
	}
}

int Image_use_animation_get(PointerRNA *ptr)
{
	Image *data = (Image *)(ptr->data);
	return (((data->tpageflag) & 2) != 0);
}

void Image_use_animation_set(PointerRNA *ptr, int value)
{
	Image *data = (Image *)(ptr->data);
	if (value) data->tpageflag |= 2;
	else data->tpageflag &= ~2;
}

int Image_frame_start_get(PointerRNA *ptr)
{
	Image *data = (Image *)(ptr->data);
	return (int)(data->twsta);
}

void Image_frame_start_set(PointerRNA *ptr, int value)
{
	Image *data = (Image *)(ptr->data);
	data->twsta = CLAMPIS(value, 0, 128);
}

int Image_frame_end_get(PointerRNA *ptr)
{
	Image *data = (Image *)(ptr->data);
	return (int)(data->twend);
}

void Image_frame_end_set(PointerRNA *ptr, int value)
{
	Image *data = (Image *)(ptr->data);
	data->twend = CLAMPIS(value, 0, 128);
}

int Image_fps_get(PointerRNA *ptr)
{
	Image *data = (Image *)(ptr->data);
	return (int)(data->animspeed);
}

void Image_fps_set(PointerRNA *ptr, int value)
{
	Image *data = (Image *)(ptr->data);
	data->animspeed = CLAMPIS(value, 1, 100);
}

int Image_use_tiles_get(PointerRNA *ptr)
{
	Image *data = (Image *)(ptr->data);
	return (((data->tpageflag) & 1) != 0);
}

void Image_use_tiles_set(PointerRNA *ptr, int value)
{
	Image *data = (Image *)(ptr->data);
	if (value) data->tpageflag |= 1;
	else data->tpageflag &= ~1;
}

int Image_tiles_x_get(PointerRNA *ptr)
{
	Image *data = (Image *)(ptr->data);
	return (int)(data->xrep);
}

void Image_tiles_x_set(PointerRNA *ptr, int value)
{
	Image *data = (Image *)(ptr->data);
	data->xrep = CLAMPIS(value, 1, 16);
}

int Image_tiles_y_get(PointerRNA *ptr)
{
	Image *data = (Image *)(ptr->data);
	return (int)(data->yrep);
}

void Image_tiles_y_set(PointerRNA *ptr, int value)
{
	Image *data = (Image *)(ptr->data);
	data->yrep = CLAMPIS(value, 1, 16);
}

int Image_use_clamp_x_get(PointerRNA *ptr)
{
	Image *data = (Image *)(ptr->data);
	return (((data->tpageflag) & 16) != 0);
}

void Image_use_clamp_x_set(PointerRNA *ptr, int value)
{
	Image *data = (Image *)(ptr->data);
	if (value) data->tpageflag |= 16;
	else data->tpageflag &= ~16;
}

int Image_use_clamp_y_get(PointerRNA *ptr)
{
	Image *data = (Image *)(ptr->data);
	return (((data->tpageflag) & 32) != 0);
}

void Image_use_clamp_y_set(PointerRNA *ptr, int value)
{
	Image *data = (Image *)(ptr->data);
	if (value) data->tpageflag |= 32;
	else data->tpageflag &= ~32;
}

int Image_bindcode_get(PointerRNA *ptr)
{
	Image *data = (Image *)(ptr->data);
	return (int)(data->bindcode);
}

static PointerRNA Image_render_slots_get(CollectionPropertyIterator *iter)
{
	return rna_pointer_inherit_refine(&iter->parent, &RNA_RenderSlot, rna_iterator_array_get(iter));
}

void Image_render_slots_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

	memset(iter, 0, sizeof(*iter));
	iter->parent = *ptr;
	iter->prop = (PropertyRNA *)&rna_Image_render_slots;

	rna_Image_render_slots_begin(iter, ptr);

	if (iter->valid)
		iter->ptr = Image_render_slots_get(iter);
}

void Image_render_slots_next(CollectionPropertyIterator *iter)
{
	rna_iterator_array_next(iter);

	if (iter->valid)
		iter->ptr = Image_render_slots_get(iter);
}

void Image_render_slots_end(CollectionPropertyIterator *iter)
{
	rna_iterator_array_end(iter);
}

int Image_render_slots_lookup_int(PointerRNA *ptr, int index, PointerRNA *r_ptr)
{
	int found = 0;
	CollectionPropertyIterator iter;

	Image_render_slots_begin(&iter, ptr);

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
		if (found) *r_ptr = Image_render_slots_get(&iter);
	}

	Image_render_slots_end(&iter);

	return found;
}

int Image_has_data_get(PointerRNA *ptr)
{
	return rna_Image_has_data_get(ptr);
}

int Image_depth_get(PointerRNA *ptr)
{
	return rna_Image_depth_get(ptr);
}

void Image_size_get(PointerRNA *ptr, int values[2])
{
	rna_Image_size_get(ptr, values);
}

void Image_resolution_get(PointerRNA *ptr, float values[2])
{
	rna_Image_resolution_get(ptr, values);
}

void Image_resolution_set(PointerRNA *ptr, const float values[2])
{
	rna_Image_resolution_set(ptr, values);
}

int Image_frame_duration_get(PointerRNA *ptr)
{
	return rna_Image_frame_duration_get(ptr);
}

void Image_pixels_get(PointerRNA *ptr, float values[])
{
	rna_Image_pixels_get(ptr, values);
}

void Image_pixels_set(PointerRNA *ptr, const float values[])
{
	rna_Image_pixels_set(ptr, values);
}

int Image_channels_get(PointerRNA *ptr)
{
	return rna_Image_channels_get(ptr);
}

int Image_is_float_get(PointerRNA *ptr)
{
	return rna_Image_is_float_get(ptr);
}

PointerRNA Image_colorspace_settings_get(PointerRNA *ptr)
{
	Image *data = (Image *)(ptr->data);
	return rna_pointer_inherit_refine(ptr, &RNA_ColorManagedInputColorspaceSettings, &data->colorspace_settings);
}

int Image_alpha_mode_get(PointerRNA *ptr)
{
	Image *data = (Image *)(ptr->data);
	return (int)(data->alpha_mode);
}

void Image_alpha_mode_set(PointerRNA *ptr, int value)
{
	Image *data = (Image *)(ptr->data);
	data->alpha_mode = value;
}

static PointerRNA ImageUser_rna_properties_get(CollectionPropertyIterator *iter)
{
	return rna_builtin_properties_get(iter);
}

void ImageUser_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

	memset(iter, 0, sizeof(*iter));
	iter->parent = *ptr;
	iter->prop = (PropertyRNA *)&rna_ImageUser_rna_properties;

	rna_builtin_properties_begin(iter, ptr);

	if (iter->valid)
		iter->ptr = ImageUser_rna_properties_get(iter);
}

void ImageUser_rna_properties_next(CollectionPropertyIterator *iter)
{
	rna_builtin_properties_next(iter);

	if (iter->valid)
		iter->ptr = ImageUser_rna_properties_get(iter);
}

void ImageUser_rna_properties_end(CollectionPropertyIterator *iter)
{
	rna_iterator_listbase_end(iter);
}

int ImageUser_rna_properties_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
	return rna_builtin_properties_lookup_string(ptr, key, r_ptr);
}

PointerRNA ImageUser_rna_type_get(PointerRNA *ptr)
{
	return rna_builtin_type_get(ptr);
}

int ImageUser_use_auto_refresh_get(PointerRNA *ptr)
{
	ImageUser *data = (ImageUser *)(ptr->data);
	return (((data->flag) & 1) != 0);
}

void ImageUser_use_auto_refresh_set(PointerRNA *ptr, int value)
{
	ImageUser *data = (ImageUser *)(ptr->data);
	if (value) data->flag |= 1;
	else data->flag &= ~1;
}

int ImageUser_frame_current_get(PointerRNA *ptr)
{
	ImageUser *data = (ImageUser *)(ptr->data);
	return (int)(data->framenr);
}

void ImageUser_frame_current_set(PointerRNA *ptr, int value)
{
	ImageUser *data = (ImageUser *)(ptr->data);
	data->framenr = CLAMPIS(value, -300000, 300000);
}

int ImageUser_use_cyclic_get(PointerRNA *ptr)
{
	ImageUser *data = (ImageUser *)(ptr->data);
	return (int)(data->cycl);
}

void ImageUser_use_cyclic_set(PointerRNA *ptr, int value)
{
	ImageUser *data = (ImageUser *)(ptr->data);
	data->cycl = value;
}

int ImageUser_frame_duration_get(PointerRNA *ptr)
{
	ImageUser *data = (ImageUser *)(ptr->data);
	return (int)(data->frames);
}

void ImageUser_frame_duration_set(PointerRNA *ptr, int value)
{
	ImageUser *data = (ImageUser *)(ptr->data);
	data->frames = CLAMPIS(value, 0, 300000);
}

int ImageUser_frame_offset_get(PointerRNA *ptr)
{
	ImageUser *data = (ImageUser *)(ptr->data);
	return (int)(data->offset);
}

void ImageUser_frame_offset_set(PointerRNA *ptr, int value)
{
	ImageUser *data = (ImageUser *)(ptr->data);
	data->offset = value;
}

int ImageUser_frame_start_get(PointerRNA *ptr)
{
	ImageUser *data = (ImageUser *)(ptr->data);
	return (int)(data->sfra);
}

void ImageUser_frame_start_set(PointerRNA *ptr, int value)
{
	ImageUser *data = (ImageUser *)(ptr->data);
	data->sfra = CLAMPIS(value, -300000, 300000);
}

int ImageUser_fields_per_frame_get(PointerRNA *ptr)
{
	ImageUser *data = (ImageUser *)(ptr->data);
	return (int)(data->fie_ima);
}

void ImageUser_fields_per_frame_set(PointerRNA *ptr, int value)
{
	ImageUser *data = (ImageUser *)(ptr->data);
	data->fie_ima = CLAMPIS(value, 1, 200);
}

int ImageUser_multilayer_layer_get(PointerRNA *ptr)
{
	ImageUser *data = (ImageUser *)(ptr->data);
	return (int)(data->layer);
}

int ImageUser_multilayer_pass_get(PointerRNA *ptr)
{
	ImageUser *data = (ImageUser *)(ptr->data);
	return (int)(data->pass);
}



int Image_pixels_get_length(PointerRNA *ptr, int *arraylen)
{
	return rna_Image_pixels_get_length(ptr, arraylen);
}

void Image_save_render(struct Image *_self, bContext *C, ReportList *reports, const char * filepath, struct Scene *scene)
{
	rna_Image_save_render(_self, C, reports, filepath, scene);
}

void Image_save_render_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	struct Image *_self;
	const char * filepath;
	struct Scene *scene;
	char *_data;
	
	_self = (struct Image *)_ptr->data;
	_data = (char *)_parms->data;
	filepath = *((const char * *)_data);
#if defined(SPEC_ILP32)
        _data += 4;
#else
        _data += 8;
#endif
	scene = *((struct Scene **)_data);
	
	rna_Image_save_render(_self, C, reports, filepath, scene);
}

void Image_save(struct Image *_self, bContext *C, ReportList *reports)
{
	rna_Image_save(_self, C, reports);
}

void Image_save_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	struct Image *_self;
	_self = (struct Image *)_ptr->data;
	
	rna_Image_save(_self, C, reports);
}

void Image_pack(struct Image *_self, bContext *C, ReportList *reports, int as_png)
{
	rna_Image_pack(_self, C, reports, as_png);
}

void Image_pack_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	struct Image *_self;
	int as_png;
	char *_data;
	
	_self = (struct Image *)_ptr->data;
	_data = (char *)_parms->data;
	as_png = *((int *)_data);
	
	rna_Image_pack(_self, C, reports, as_png);
}

void Image_unpack(struct Image *_self, ReportList *reports, int method)
{
	rna_Image_unpack(_self, reports, method);
}

void Image_unpack_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	struct Image *_self;
	int method;
	char *_data;
	
	_self = (struct Image *)_ptr->data;
	_data = (char *)_parms->data;
	method = *((int *)_data);
	
	rna_Image_unpack(_self, reports, method);
}

void Image_reload(struct Image *_self)
{
	rna_Image_reload(_self);
}

void Image_reload_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	struct Image *_self;
	_self = (struct Image *)_ptr->data;
	
	rna_Image_reload(_self);
}

void Image_update(struct Image *_self, ReportList *reports)
{
	rna_Image_update(_self, reports);
}

void Image_update_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	struct Image *_self;
	_self = (struct Image *)_ptr->data;
	
	rna_Image_update(_self, reports);
}

void Image_scale(struct Image *_self, ReportList *reports, int width, int height)
{
	rna_Image_scale(_self, reports, width, height);
}

void Image_scale_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	struct Image *_self;
	int width;
	int height;
	char *_data;
	
	_self = (struct Image *)_ptr->data;
	_data = (char *)_parms->data;
	width = *((int *)_data);
	_data += 4;
	height = *((int *)_data);
	
	rna_Image_scale(_self, reports, width, height);
}

int Image_gl_touch(struct Image *_self, ReportList *reports, int frame, int filter, int mag)
{
	return rna_Image_gl_touch(_self, reports, frame, filter, mag);
}

void Image_gl_touch_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	struct Image *_self;
	int frame;
	int filter;
	int mag;
	int error;
	char *_data, *_retdata;
	
	_self = (struct Image *)_ptr->data;
	_data = (char *)_parms->data;
	frame = *((int *)_data);
	_data += 4;
	filter = *((int *)_data);
	_data += 4;
	mag = *((int *)_data);
	_data += 4;
	_retdata = _data;
	
	error = rna_Image_gl_touch(_self, reports, frame, filter, mag);
	*((int *)_retdata) = error;
}

int Image_gl_load(struct Image *_self, ReportList *reports, int frame, int filter, int mag)
{
	return rna_Image_gl_load(_self, reports, frame, filter, mag);
}

void Image_gl_load_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	struct Image *_self;
	int frame;
	int filter;
	int mag;
	int error;
	char *_data, *_retdata;
	
	_self = (struct Image *)_ptr->data;
	_data = (char *)_parms->data;
	frame = *((int *)_data);
	_data += 4;
	filter = *((int *)_data);
	_data += 4;
	mag = *((int *)_data);
	_data += 4;
	_retdata = _data;
	
	error = rna_Image_gl_load(_self, reports, frame, filter, mag);
	*((int *)_retdata) = error;
}

void Image_gl_free(struct Image *_self)
{
	rna_Image_gl_free(_self);
}

void Image_gl_free_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	struct Image *_self;
	_self = (struct Image *)_ptr->data;
	
	rna_Image_gl_free(_self);
}

void Image_filepath_from_user(struct Image *_self, struct ImageUser *image_user, char * filepath)
{
	rna_Image_filepath_from_user(_self, image_user, filepath);
}

void Image_filepath_from_user_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	struct Image *_self;
	struct ImageUser *image_user;
	char * filepath;
	char *_data;
	
	_self = (struct Image *)_ptr->data;
	_data = (char *)_parms->data;
	image_user = *((struct ImageUser **)_data);
#if defined(SPEC_ILP32)
        _data += 4;
#else
        _data += 8;
#endif
	filepath = ((char * )_data);
	
	rna_Image_filepath_from_user(_self, image_user, filepath);
}

/* Repeated prototypes to detect errors */

void rna_Image_save_render(struct Image *_self, bContext *C, ReportList *reports, const char * filepath, struct Scene *scene);
void rna_Image_save(struct Image *_self, bContext *C, ReportList *reports);
void rna_Image_pack(struct Image *_self, bContext *C, ReportList *reports, int as_png);
void rna_Image_unpack(struct Image *_self, ReportList *reports, int method);
void rna_Image_reload(struct Image *_self);
void rna_Image_update(struct Image *_self, ReportList *reports);
void rna_Image_scale(struct Image *_self, ReportList *reports, int width, int height);
int rna_Image_gl_touch(struct Image *_self, ReportList *reports, int frame, int filter, int mag);
int rna_Image_gl_load(struct Image *_self, ReportList *reports, int frame, int filter, int mag);
void rna_Image_gl_free(struct Image *_self);
void rna_Image_filepath_from_user(struct Image *_self, struct ImageUser *image_user, char * filepath);


/* Render Slot */
CollectionPropertyRNA rna_RenderSlot_rna_properties = {
	{(PropertyRNA *)&rna_RenderSlot_rna_type, NULL,
	-1, "rna_properties", 128, "Properties",
	"RNA property collection",
	0, "*",
	PROP_COLLECTION, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	RenderSlot_rna_properties_begin, RenderSlot_rna_properties_next, RenderSlot_rna_properties_end, RenderSlot_rna_properties_get, NULL, NULL, RenderSlot_rna_properties_lookup_string, NULL, &RNA_Property
};

PointerPropertyRNA rna_RenderSlot_rna_type = {
	{(PropertyRNA *)&rna_RenderSlot_name, (PropertyRNA *)&rna_RenderSlot_rna_properties,
	-1, "rna_type", 8912896, "RNA",
	"RNA type definition",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	RenderSlot_rna_type_get, NULL, NULL, NULL,&RNA_Struct
};

StringPropertyRNA rna_RenderSlot_name = {
	{NULL, (PropertyRNA *)&rna_RenderSlot_rna_type,
	-1, "name", 262145, "Name",
	"Render slot name",
	0, "*",
	PROP_STRING, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {64, 0, 0}, 0,
	NULL, 171114496, NULL, NULL,
	0, -1, NULL},
	RenderSlot_name_get, RenderSlot_name_length, RenderSlot_name_set, NULL, NULL, NULL, 64, ""
};

StructRNA RNA_RenderSlot = {
	{(ContainerRNA *)&RNA_RenderSlots, (ContainerRNA *)&RNA_GroupObjects,
	NULL,
	{(PropertyRNA *)&rna_RenderSlot_rna_properties, (PropertyRNA *)&rna_RenderSlot_name}},
	"RenderSlot", NULL, NULL, 4, "Render Slot",
	"Parameters defining the render slot",
	"*", 17,
	NULL, (PropertyRNA *)&rna_RenderSlot_rna_properties,
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

/* Render Slots */
CollectionPropertyRNA rna_RenderSlots_rna_properties = {
	{(PropertyRNA *)&rna_RenderSlots_rna_type, NULL,
	-1, "rna_properties", 128, "Properties",
	"RNA property collection",
	0, "*",
	PROP_COLLECTION, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	RenderSlots_rna_properties_begin, RenderSlots_rna_properties_next, RenderSlots_rna_properties_end, RenderSlots_rna_properties_get, NULL, NULL, RenderSlots_rna_properties_lookup_string, NULL, &RNA_Property
};

PointerPropertyRNA rna_RenderSlots_rna_type = {
	{(PropertyRNA *)&rna_RenderSlots_active, (PropertyRNA *)&rna_RenderSlots_rna_properties,
	-1, "rna_type", 8912896, "RNA",
	"RNA type definition",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	RenderSlots_rna_type_get, NULL, NULL, NULL,&RNA_Struct
};

PointerPropertyRNA rna_RenderSlots_active = {
	{(PropertyRNA *)&rna_RenderSlots_active_index, (PropertyRNA *)&rna_RenderSlots_rna_type,
	-1, "active", 41943041, "Active",
	"Active render slot of the image",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 171114496, NULL, NULL,
	0, -1, NULL},
	RenderSlots_active_get, RenderSlots_active_set, NULL, NULL,&RNA_RenderSlot
};

IntPropertyRNA rna_RenderSlots_active_index = {
	{NULL, (PropertyRNA *)&rna_RenderSlots_active,
	-1, "active_index", 1, "Active Index",
	"Index of an active render slot of the image",
	0, "*",
	PROP_INT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 171114496, NULL, NULL,
	0, -1, NULL},
	RenderSlots_active_index_get, RenderSlots_active_index_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL,
	0, 8, 0, 8, 1, 0, NULL
};

StructRNA RNA_RenderSlots = {
	{(ContainerRNA *)&RNA_Image, (ContainerRNA *)&RNA_RenderSlot,
	NULL,
	{(PropertyRNA *)&rna_RenderSlots_rna_properties, (PropertyRNA *)&rna_RenderSlots_active_index}},
	"RenderSlots", NULL, NULL, 4, "Render Slots",
	"Collection of the render slots",
	"*", 17,
	NULL, (PropertyRNA *)&rna_RenderSlots_rna_properties,
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

/* Image */
StringPropertyRNA rna_Image_filepath = {
	{(PropertyRNA *)&rna_Image_filepath_raw, NULL,
	-1, "filepath", 262145, "File Name",
	"Image/Movie file name",
	0, "*",
	PROP_STRING, PROP_FILEPATH | PROP_UNIT_NONE, NULL, 0, {1024, 0, 0}, 0,
	rna_Image_reload_update, 171114496, NULL, NULL,
	0, -1, NULL},
	Image_filepath_get, Image_filepath_length, Image_filepath_set, NULL, NULL, NULL, 1024, ""
};

StringPropertyRNA rna_Image_filepath_raw = {
	{(PropertyRNA *)&rna_Image_file_format, (PropertyRNA *)&rna_Image_filepath,
	-1, "filepath_raw", 262145, "File Name",
	"Image/Movie file name (without data refreshing)",
	0, "*",
	PROP_STRING, PROP_FILEPATH | PROP_UNIT_NONE, NULL, 0, {1024, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	Image_filepath_raw_get, Image_filepath_raw_length, Image_filepath_raw_set, NULL, NULL, NULL, 1024, ""
};

static EnumPropertyItem rna_Image_file_format_items[12] = {
	{0, "", 0, "Image", NULL},
	{20, "BMP", 696, "BMP", "Output image in bitmap format"},
	{1, "IRIS", 696, "Iris", "Output image in (old!) SGI IRIS format"},
	{17, "PNG", 696, "PNG", "Output image in PNG format"},
	{4, "JPEG", 696, "JPEG", "Output image in JPEG format"},
	{0, "TARGA", 696, "Targa", "Output image in Targa format"},
	{14, "TARGA_RAW", 696, "Targa Raw", "Output image in uncompressed Targa format"},
	{0, "", 0, " ", NULL},
	{0, "", 0, "Movie", NULL},
	{16, "AVI_JPEG", 697, "AVI JPEG", "Output video in AVI JPEG format"},
	{15, "AVI_RAW", 697, "AVI Raw", "Output video in AVI Raw format"},
	{0, NULL, 0, NULL, NULL}
};

EnumPropertyRNA rna_Image_file_format = {
	{(PropertyRNA *)&rna_Image_source, (PropertyRNA *)&rna_Image_filepath_raw,
	-1, "file_format", 3, "File Format",
	"Format used for re-saving this file",
	0, "*",
	PROP_ENUM, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	Image_file_format_get, Image_file_format_set, NULL, NULL, NULL, NULL, rna_Image_file_format_items, 11, 0
};

static EnumPropertyItem rna_Image_source_items[6] = {
	{1, "FILE", 0, "Single Image", "Single image file"},
	{2, "SEQUENCE", 0, "Image Sequence", "Multiple image files, as a sequence"},
	{3, "MOVIE", 0, "Movie", "Movie file"},
	{4, "GENERATED", 0, "Generated", "Generated image"},
	{5, "VIEWER", 0, "Viewer", "Compositing node viewer"},
	{0, NULL, 0, NULL, NULL}
};

EnumPropertyRNA rna_Image_source = {
	{(PropertyRNA *)&rna_Image_type, (PropertyRNA *)&rna_Image_file_format,
	-1, "source", 3, "Source",
	"Where the image comes from",
	0, "*",
	PROP_ENUM, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 171114496, NULL, NULL,
	0, -1, NULL},
	Image_source_get, Image_source_set, rna_Image_source_itemf, NULL, NULL, NULL, rna_Image_source_items, 5, 1
};

static EnumPropertyItem rna_Image_type_items[6] = {
	{0, "IMAGE", 0, "Image", ""},
	{1, "MULTILAYER", 0, "Multilayer", ""},
	{2, "UV_TEST", 0, "UV Test", ""},
	{4, "RENDER_RESULT", 0, "Render Result", ""},
	{5, "COMPOSITING", 0, "Compositing", ""},
	{0, NULL, 0, NULL, NULL}
};

EnumPropertyRNA rna_Image_type = {
	{(PropertyRNA *)&rna_Image_packed_file, (PropertyRNA *)&rna_Image_source,
	-1, "type", 2, "Type",
	"How to generate the image",
	0, "*",
	PROP_ENUM, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 171114496, NULL, NULL,
	0, -1, NULL},
	Image_type_get, NULL, NULL, NULL, NULL, NULL, rna_Image_type_items, 5, 0
};

PointerPropertyRNA rna_Image_packed_file = {
	{(PropertyRNA *)&rna_Image_field_order, (PropertyRNA *)&rna_Image_type,
	-1, "packed_file", 8388608, "Packed File",
	"",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	Image_packed_file_get, NULL, NULL, NULL,&RNA_PackedFile
};

static EnumPropertyItem rna_Image_field_order_items[3] = {
	{0, "EVEN", 0, "Upper First", "Upper field first"},
	{2, "ODD", 0, "Lower First", "Lower field first"},
	{0, NULL, 0, NULL, NULL}
};

EnumPropertyRNA rna_Image_field_order = {
	{(PropertyRNA *)&rna_Image_use_fields, (PropertyRNA *)&rna_Image_packed_file,
	-1, "field_order", 3, "Field Order",
	"Order of video fields (select which lines are displayed first)",
	0, "*",
	PROP_ENUM, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 171114496, NULL, NULL,
	0, -1, NULL},
	Image_field_order_get, Image_field_order_set, NULL, NULL, NULL, NULL, rna_Image_field_order_items, 2, 0
};

BoolPropertyRNA rna_Image_use_fields = {
	{(PropertyRNA *)&rna_Image_use_view_as_render, (PropertyRNA *)&rna_Image_field_order,
	-1, "use_fields", 1, "Fields",
	"Use fields of the image",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Image_fields_update, 171114496, NULL, NULL,
	0, -1, NULL},
	Image_use_fields_get, Image_use_fields_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_Image_use_view_as_render = {
	{(PropertyRNA *)&rna_Image_use_alpha, (PropertyRNA *)&rna_Image_use_fields,
	-1, "use_view_as_render", 3, "View as Render",
	"Apply render part of display transformation when displaying this image on the screen",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 171114496, NULL, NULL,
	0, -1, NULL},
	Image_use_view_as_render_get, Image_use_view_as_render_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_Image_use_alpha = {
	{(PropertyRNA *)&rna_Image_is_dirty, (PropertyRNA *)&rna_Image_use_view_as_render,
	-1, "use_alpha", 3, "Use Alpha",
	"Use the alpha channel information from the image or make image fully opaque",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Image_colormanage_update, 171114496, NULL, NULL,
	0, -1, NULL},
	Image_use_alpha_get, Image_use_alpha_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_Image_is_dirty = {
	{(PropertyRNA *)&rna_Image_generated_type, (PropertyRNA *)&rna_Image_use_alpha,
	-1, "is_dirty", 2, "Dirty",
	"Image has changed and is not saved",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	Image_is_dirty_get, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

static EnumPropertyItem rna_Image_generated_type_items[4] = {
	{0, "BLANK", 0, "Blank", "Generate a blank image"},
	{1, "UV_GRID", 0, "UV Grid", "Generated grid to test UV mappings"},
	{2, "COLOR_GRID", 0, "Color Grid", "Generated improved UV grid to test UV mappings"},
	{0, NULL, 0, NULL, NULL}
};

EnumPropertyRNA rna_Image_generated_type = {
	{(PropertyRNA *)&rna_Image_generated_width, (PropertyRNA *)&rna_Image_is_dirty,
	-1, "generated_type", 1, "Generated Type",
	"Generated image type",
	0, "*",
	PROP_ENUM, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Image_generated_update, 171114496, NULL, NULL,
	0, -1, NULL},
	Image_generated_type_get, Image_generated_type_set, NULL, NULL, NULL, NULL, rna_Image_generated_type_items, 3, 0
};

IntPropertyRNA rna_Image_generated_width = {
	{(PropertyRNA *)&rna_Image_generated_height, (PropertyRNA *)&rna_Image_generated_type,
	-1, "generated_width", 67117057, "Generated Width",
	"Generated image width",
	0, "*",
	PROP_INT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Image_generated_update, 171114496, NULL, NULL,
	offsetof(Image, gen_x), 0, NULL},
	Image_generated_width_get, Image_generated_width_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL,
	1, 65536, 1, 65536, 1, 0, NULL
};

IntPropertyRNA rna_Image_generated_height = {
	{(PropertyRNA *)&rna_Image_use_generated_float, (PropertyRNA *)&rna_Image_generated_width,
	-1, "generated_height", 67117057, "Generated Height",
	"Generated image height",
	0, "*",
	PROP_INT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Image_generated_update, 171114496, NULL, NULL,
	offsetof(Image, gen_y), 0, NULL},
	Image_generated_height_get, Image_generated_height_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL,
	1, 65536, 1, 65536, 1, 0, NULL
};

BoolPropertyRNA rna_Image_use_generated_float = {
	{(PropertyRNA *)&rna_Image_generated_color, (PropertyRNA *)&rna_Image_generated_height,
	-1, "use_generated_float", 1, "Float Buffer",
	"Generate floating point buffer",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Image_generated_update, 171114496, NULL, NULL,
	0, -1, NULL},
	Image_use_generated_float_get, Image_use_generated_float_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

static float rna_Image_generated_color_default[4] = {
	0.0f,
	0.0f,
	0.0f,
	0.0f
};

FloatPropertyRNA rna_Image_generated_color = {
	{(PropertyRNA *)&rna_Image_mapping, (PropertyRNA *)&rna_Image_use_generated_float,
	-1, "generated_color", 8193, "Color",
	"Fill color for the generated image",
	0, "*",
	PROP_FLOAT, PROP_COLOR | PROP_UNIT_NONE, NULL, 1, {4, 0, 0}, 4,
	rna_Image_generated_update, 171114496, NULL, NULL,
	offsetof(Image, gen_color), 4, NULL},
	NULL, NULL, Image_generated_color_get, Image_generated_color_set, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 1.0f, 0.0f, FLT_MAX, 10.0f, 3, 0.0f, rna_Image_generated_color_default
};

static EnumPropertyItem rna_Image_mapping_items[3] = {
	{0, "UV", 0, "UV Coordinates", "Use UV coordinates for mapping the image"},
	{16, "REFLECTION", 0, "Reflection", "Use reflection mapping for mapping the image"},
	{0, NULL, 0, NULL, NULL}
};

EnumPropertyRNA rna_Image_mapping = {
	{(PropertyRNA *)&rna_Image_display_aspect, (PropertyRNA *)&rna_Image_generated_color,
	-1, "mapping", 3, "Mapping",
	"Mapping type to use for this image in the game engine",
	0, "*",
	PROP_ENUM, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 171114496, NULL, NULL,
	0, -1, NULL},
	Image_mapping_get, Image_mapping_set, NULL, NULL, NULL, NULL, rna_Image_mapping_items, 2, 0
};

static float rna_Image_display_aspect_default[2] = {
	0.0f,
	0.0f
};

FloatPropertyRNA rna_Image_display_aspect = {
	{(PropertyRNA *)&rna_Image_use_animation, (PropertyRNA *)&rna_Image_mapping,
	-1, "display_aspect", 8195, "Display Aspect",
	"Display Aspect for this image, does not affect rendering",
	0, "*",
	PROP_FLOAT, PROP_XYZ | PROP_UNIT_NONE, NULL, 1, {2, 0, 0}, 2,
	NULL, 171114496, NULL, NULL,
	offsetof(Image, aspx), 4, NULL},
	NULL, NULL, Image_display_aspect_get, Image_display_aspect_set, NULL, NULL, NULL, NULL, NULL, NULL, 0.1000000015f, 5000.0f, 0.1000000015f, FLT_MAX, 1.0f, 2, 0.0f, rna_Image_display_aspect_default
};

BoolPropertyRNA rna_Image_use_animation = {
	{(PropertyRNA *)&rna_Image_frame_start, (PropertyRNA *)&rna_Image_display_aspect,
	-1, "use_animation", 3, "Animated",
	"Use as animated texture in the game engine",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Image_animated_update, 171114496, NULL, NULL,
	0, -1, NULL},
	Image_use_animation_get, Image_use_animation_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

IntPropertyRNA rna_Image_frame_start = {
	{(PropertyRNA *)&rna_Image_frame_end, (PropertyRNA *)&rna_Image_use_animation,
	-1, "frame_start", 8195, "Animation Start",
	"Start frame of an animated texture",
	0, "*",
	PROP_INT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Image_animated_update, 171114496, NULL, NULL,
	offsetof(Image, twsta), 1, NULL},
	Image_frame_start_get, Image_frame_start_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL,
	0, 128, 0, 128, 1, 0, NULL
};

IntPropertyRNA rna_Image_frame_end = {
	{(PropertyRNA *)&rna_Image_fps, (PropertyRNA *)&rna_Image_frame_start,
	-1, "frame_end", 8195, "Animation End",
	"End frame of an animated texture",
	0, "*",
	PROP_INT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Image_animated_update, 171114496, NULL, NULL,
	offsetof(Image, twend), 1, NULL},
	Image_frame_end_get, Image_frame_end_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL,
	0, 128, 0, 128, 1, 0, NULL
};

IntPropertyRNA rna_Image_fps = {
	{(PropertyRNA *)&rna_Image_use_tiles, (PropertyRNA *)&rna_Image_frame_end,
	-1, "fps", 8195, "Animation Speed",
	"Speed of the animation in frames per second",
	0, "*",
	PROP_INT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 171114496, NULL, NULL,
	offsetof(Image, animspeed), 1, NULL},
	Image_fps_get, Image_fps_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL,
	1, 100, 1, 100, 1, 0, NULL
};

BoolPropertyRNA rna_Image_use_tiles = {
	{(PropertyRNA *)&rna_Image_tiles_x, (PropertyRNA *)&rna_Image_fps,
	-1, "use_tiles", 3, "Tiles",
	"Use of tilemode for faces (default shift-LMB to pick the tile for selected faces)",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 171114496, NULL, NULL,
	0, -1, NULL},
	Image_use_tiles_get, Image_use_tiles_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

IntPropertyRNA rna_Image_tiles_x = {
	{(PropertyRNA *)&rna_Image_tiles_y, (PropertyRNA *)&rna_Image_use_tiles,
	-1, "tiles_x", 8195, "Tiles X",
	"Degree of repetition in the X direction",
	0, "*",
	PROP_INT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 171114496, NULL, NULL,
	offsetof(Image, xrep), 1, NULL},
	Image_tiles_x_get, Image_tiles_x_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL,
	1, 16, 1, 16, 1, 0, NULL
};

IntPropertyRNA rna_Image_tiles_y = {
	{(PropertyRNA *)&rna_Image_use_clamp_x, (PropertyRNA *)&rna_Image_tiles_x,
	-1, "tiles_y", 8195, "Tiles Y",
	"Degree of repetition in the Y direction",
	0, "*",
	PROP_INT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 171114496, NULL, NULL,
	offsetof(Image, yrep), 1, NULL},
	Image_tiles_y_get, Image_tiles_y_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL,
	1, 16, 1, 16, 1, 0, NULL
};

BoolPropertyRNA rna_Image_use_clamp_x = {
	{(PropertyRNA *)&rna_Image_use_clamp_y, (PropertyRNA *)&rna_Image_tiles_y,
	-1, "use_clamp_x", 3, "Clamp X",
	"Disable texture repeating horizontally",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 171114496, NULL, NULL,
	0, -1, NULL},
	Image_use_clamp_x_get, Image_use_clamp_x_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_Image_use_clamp_y = {
	{(PropertyRNA *)&rna_Image_bindcode, (PropertyRNA *)&rna_Image_use_clamp_x,
	-1, "use_clamp_y", 3, "Clamp Y",
	"Disable texture repeating vertically",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 171114496, NULL, NULL,
	0, -1, NULL},
	Image_use_clamp_y_get, Image_use_clamp_y_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

IntPropertyRNA rna_Image_bindcode = {
	{(PropertyRNA *)&rna_Image_render_slots, (PropertyRNA *)&rna_Image_use_clamp_y,
	-1, "bindcode", 8194, "Bindcode",
	"OpenGL bindcode",
	0, "*",
	PROP_INT, PROP_UNSIGNED | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 171114496, NULL, NULL,
	offsetof(Image, bindcode), 0, NULL},
	Image_bindcode_get, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL,
	0, 10000, 0, INT_MAX, 1, 0, NULL
};

CollectionPropertyRNA rna_Image_render_slots = {
	{(PropertyRNA *)&rna_Image_has_data, (PropertyRNA *)&rna_Image_bindcode,
	-1, "render_slots", 16384, "Render Slots",
	"Render slots of the image",
	0, "*",
	PROP_COLLECTION, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {8, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, &RNA_RenderSlots},
	Image_render_slots_begin, Image_render_slots_next, Image_render_slots_end, Image_render_slots_get, NULL, Image_render_slots_lookup_int, NULL, NULL, &RNA_RenderSlot
};

BoolPropertyRNA rna_Image_has_data = {
	{(PropertyRNA *)&rna_Image_depth, (PropertyRNA *)&rna_Image_render_slots,
	-1, "has_data", 2, "Has data",
	"True if this image has data",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	Image_has_data_get, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

IntPropertyRNA rna_Image_depth = {
	{(PropertyRNA *)&rna_Image_size, (PropertyRNA *)&rna_Image_has_data,
	-1, "depth", 2, "Depth",
	"Image bit depth",
	0, "*",
	PROP_INT, PROP_UNSIGNED | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	Image_depth_get, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL,
	0, 10000, 0, INT_MAX, 1, 0, NULL
};

static int rna_Image_size_default[2] = {
	0,
	0
};

IntPropertyRNA rna_Image_size = {
	{(PropertyRNA *)&rna_Image_resolution, (PropertyRNA *)&rna_Image_depth,
	-1, "size", 2, "Size",
	"Width and height in pixels, zero when image data cant be loaded",
	0, "*",
	PROP_INT, PROP_PIXEL | PROP_UNIT_NONE, NULL, 1, {2, 0, 0}, 2,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	NULL, NULL, Image_size_get, NULL, NULL, NULL, NULL, NULL, NULL, NULL,
	0, 0, INT_MIN, INT_MAX, 1, 0, rna_Image_size_default
};

static float rna_Image_resolution_default[2] = {
	0.0f,
	0.0f
};

FloatPropertyRNA rna_Image_resolution = {
	{(PropertyRNA *)&rna_Image_frame_duration, (PropertyRNA *)&rna_Image_size,
	-1, "resolution", 3, "Resolution",
	"X/Y pixels per meter",
	0, "*",
	PROP_FLOAT, PROP_XYZ | PROP_UNIT_NONE, NULL, 1, {2, 0, 0}, 2,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	NULL, NULL, Image_resolution_get, Image_resolution_set, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 0.0f, -FLT_MAX, FLT_MAX, 1.0f, 3, 0.0f, rna_Image_resolution_default
};

IntPropertyRNA rna_Image_frame_duration = {
	{(PropertyRNA *)&rna_Image_pixels, (PropertyRNA *)&rna_Image_resolution,
	-1, "frame_duration", 2, "Duration",
	"Duration (in frames) of the image (1 when not a video/sequence)",
	0, "*",
	PROP_INT, PROP_UNSIGNED | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	Image_frame_duration_get, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL,
	0, 10000, 0, INT_MAX, 1, 0, NULL
};

FloatPropertyRNA rna_Image_pixels = {
	{(PropertyRNA *)&rna_Image_channels, (PropertyRNA *)&rna_Image_frame_duration,
	-1, "pixels", 131075, "Pixels",
	"Image pixels in floating point values",
	0, "*",
	PROP_FLOAT, PROP_NONE | PROP_UNIT_NONE, rna_Image_pixels_get_length, 1, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	NULL, NULL, Image_pixels_get, Image_pixels_set, NULL, NULL, NULL, NULL, NULL, NULL, -10000.0f, 10000.0f, -FLT_MAX, FLT_MAX, 10.0f, 3, 0.0f, NULL
};

IntPropertyRNA rna_Image_channels = {
	{(PropertyRNA *)&rna_Image_is_float, (PropertyRNA *)&rna_Image_pixels,
	-1, "channels", 2, "Channels",
	"Number of channels in pixels buffer",
	0, "*",
	PROP_INT, PROP_UNSIGNED | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	Image_channels_get, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL,
	0, 10000, 0, INT_MAX, 1, 0, NULL
};

BoolPropertyRNA rna_Image_is_float = {
	{(PropertyRNA *)&rna_Image_colorspace_settings, (PropertyRNA *)&rna_Image_channels,
	-1, "is_float", 2, "Is Float",
	"True if this image is stored in float buffer",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	Image_is_float_get, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

PointerPropertyRNA rna_Image_colorspace_settings = {
	{(PropertyRNA *)&rna_Image_alpha_mode, (PropertyRNA *)&rna_Image_is_float,
	-1, "colorspace_settings", 8388608, "Color Space Settings",
	"Input color space settings",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	Image_colorspace_settings_get, NULL, NULL, NULL,&RNA_ColorManagedInputColorspaceSettings
};

static EnumPropertyItem rna_Image_alpha_mode_items[3] = {
	{0, "STRAIGHT", 0, "Straight", "Transparent RGB and alpha pixels are unmodified"},
	{1, "PREMUL", 0, "Premultiplied", "Transparent RGB pixels are multiplied by the alpha channel"},
	{0, NULL, 0, NULL, NULL}
};

EnumPropertyRNA rna_Image_alpha_mode = {
	{NULL, (PropertyRNA *)&rna_Image_colorspace_settings,
	-1, "alpha_mode", 3, "Alpha Mode",
	"Representation of alpha information in the RGBA pixels",
	0, "*",
	PROP_ENUM, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Image_colormanage_update, 171114496, NULL, NULL,
	0, -1, NULL},
	Image_alpha_mode_get, Image_alpha_mode_set, NULL, NULL, NULL, NULL, rna_Image_alpha_mode_items, 2, 0
};

StringPropertyRNA rna_Image_save_render_filepath = {
	{(PropertyRNA *)&rna_Image_save_render_scene, NULL,
	-1, "filepath", 262149, "",
	"Save path",
	0, "*",
	PROP_STRING, PROP_FILEPATH | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	NULL, NULL, NULL, NULL, NULL, NULL, 0, ""
};

PointerPropertyRNA rna_Image_save_render_scene = {
	{NULL, (PropertyRNA *)&rna_Image_save_render_filepath,
	-1, "scene", 8388608, "",
	"Scene to take image parameters from",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	NULL, NULL, NULL, NULL,&RNA_Scene
};

FunctionRNA rna_Image_save_render_func = {
	{(FunctionRNA *)&rna_Image_save_func, NULL,
	NULL,
	{(PropertyRNA *)&rna_Image_save_render_filepath, (PropertyRNA *)&rna_Image_save_render_scene}},
	"save_render", 24, "Save image to a specific path using a scenes render settings",
	Image_save_render_call,
	NULL
};

FunctionRNA rna_Image_save_func = {
	{(FunctionRNA *)&rna_Image_pack_func, (FunctionRNA *)&rna_Image_save_render_func,
	NULL,
	{NULL, NULL}},
	"save", 24, "Save image to its source path",
	Image_save_call,
	NULL
};

BoolPropertyRNA rna_Image_pack_as_png = {
	{NULL, NULL,
	-1, "as_png", 3, "as_png",
	"Pack the image as PNG (needed for generated/dirty images)",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

FunctionRNA rna_Image_pack_func = {
	{(FunctionRNA *)&rna_Image_unpack_func, (FunctionRNA *)&rna_Image_save_func,
	NULL,
	{(PropertyRNA *)&rna_Image_pack_as_png, (PropertyRNA *)&rna_Image_pack_as_png}},
	"pack", 24, "Pack an image as embedded data into the .blend file",
	Image_pack_call,
	NULL
};

static EnumPropertyItem rna_Image_unpack_method_items[5] = {
	{5, "USE_LOCAL", 0, "Use Local File", ""},
	{4, "WRITE_LOCAL", 0, "Write Local File (overwrite existing)", ""},
	{6, "USE_ORIGINAL", 0, "Use Original File", ""},
	{3, "WRITE_ORIGINAL", 0, "Write Original File (overwrite existing)", ""},
	{0, NULL, 0, NULL, NULL}
};

EnumPropertyRNA rna_Image_unpack_method = {
	{NULL, NULL,
	-1, "method", 3, "method",
	"How to unpack",
	0, "*",
	PROP_ENUM, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	NULL, NULL, NULL, NULL, NULL, NULL, rna_Image_unpack_method_items, 4, 5
};

FunctionRNA rna_Image_unpack_func = {
	{(FunctionRNA *)&rna_Image_reload_func, (FunctionRNA *)&rna_Image_pack_func,
	NULL,
	{(PropertyRNA *)&rna_Image_unpack_method, (PropertyRNA *)&rna_Image_unpack_method}},
	"unpack", 16, "Save an image packed in the .blend file to disk",
	Image_unpack_call,
	NULL
};

FunctionRNA rna_Image_reload_func = {
	{(FunctionRNA *)&rna_Image_update_func, (FunctionRNA *)&rna_Image_unpack_func,
	NULL,
	{NULL, NULL}},
	"reload", 0, "Reload the image from its source path",
	Image_reload_call,
	NULL
};

FunctionRNA rna_Image_update_func = {
	{(FunctionRNA *)&rna_Image_scale_func, (FunctionRNA *)&rna_Image_reload_func,
	NULL,
	{NULL, NULL}},
	"update", 16, "Update the display image from the floating point buffer",
	Image_update_call,
	NULL
};

IntPropertyRNA rna_Image_scale_width = {
	{(PropertyRNA *)&rna_Image_scale_height, NULL,
	-1, "width", 7, "",
	"Width",
	0, "*",
	PROP_INT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL,
	1, 10000, 1, 10000, 1, 1, NULL
};

IntPropertyRNA rna_Image_scale_height = {
	{NULL, (PropertyRNA *)&rna_Image_scale_width,
	-1, "height", 7, "",
	"Height",
	0, "*",
	PROP_INT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL,
	1, 10000, 1, 10000, 1, 1, NULL
};

FunctionRNA rna_Image_scale_func = {
	{(FunctionRNA *)&rna_Image_gl_touch_func, (FunctionRNA *)&rna_Image_update_func,
	NULL,
	{(PropertyRNA *)&rna_Image_scale_width, (PropertyRNA *)&rna_Image_scale_height}},
	"scale", 16, "Scale the image in pixels",
	Image_scale_call,
	NULL
};

IntPropertyRNA rna_Image_gl_touch_frame = {
	{(PropertyRNA *)&rna_Image_gl_touch_filter, NULL,
	-1, "frame", 3, "Frame",
	"Frame of image sequence or movie",
	0, "*",
	PROP_INT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL,
	0, INT_MAX, 0, INT_MAX, 1, 0, NULL
};

IntPropertyRNA rna_Image_gl_touch_filter = {
	{(PropertyRNA *)&rna_Image_gl_touch_mag, (PropertyRNA *)&rna_Image_gl_touch_frame,
	-1, "filter", 3, "Filter",
	"The texture minifying function to use if the image wasn\'t loaded",
	0, "*",
	PROP_INT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL,
	-2147483647, INT_MAX, -2147483647, INT_MAX, 1, 9985, NULL
};

IntPropertyRNA rna_Image_gl_touch_mag = {
	{(PropertyRNA *)&rna_Image_gl_touch_error, (PropertyRNA *)&rna_Image_gl_touch_filter,
	-1, "mag", 3, "Magnification",
	"The texture magnification function to use if the image wasn\'t loaded",
	0, "*",
	PROP_INT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL,
	-2147483647, INT_MAX, -2147483647, INT_MAX, 1, 9729, NULL
};

IntPropertyRNA rna_Image_gl_touch_error = {
	{NULL, (PropertyRNA *)&rna_Image_gl_touch_mag,
	-1, "error", 11, "Error",
	"OpenGL error value",
	0, "*",
	PROP_INT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL,
	-2147483647, INT_MAX, -2147483647, INT_MAX, 1, 0, NULL
};

FunctionRNA rna_Image_gl_touch_func = {
	{(FunctionRNA *)&rna_Image_gl_load_func, (FunctionRNA *)&rna_Image_scale_func,
	NULL,
	{(PropertyRNA *)&rna_Image_gl_touch_frame, (PropertyRNA *)&rna_Image_gl_touch_error}},
	"gl_touch", 16, "Delay the image from being cleaned from the cache due inactivity",
	Image_gl_touch_call,
	(PropertyRNA *)&rna_Image_gl_touch_error
};

IntPropertyRNA rna_Image_gl_load_frame = {
	{(PropertyRNA *)&rna_Image_gl_load_filter, NULL,
	-1, "frame", 3, "Frame",
	"Frame of image sequence or movie",
	0, "*",
	PROP_INT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL,
	0, INT_MAX, 0, INT_MAX, 1, 0, NULL
};

IntPropertyRNA rna_Image_gl_load_filter = {
	{(PropertyRNA *)&rna_Image_gl_load_mag, (PropertyRNA *)&rna_Image_gl_load_frame,
	-1, "filter", 3, "Filter",
	"The texture minifying function",
	0, "*",
	PROP_INT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL,
	-2147483647, INT_MAX, -2147483647, INT_MAX, 1, 9985, NULL
};

IntPropertyRNA rna_Image_gl_load_mag = {
	{(PropertyRNA *)&rna_Image_gl_load_error, (PropertyRNA *)&rna_Image_gl_load_filter,
	-1, "mag", 3, "Magnification",
	"The texture magnification function",
	0, "*",
	PROP_INT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL,
	-2147483647, INT_MAX, -2147483647, INT_MAX, 1, 9729, NULL
};

IntPropertyRNA rna_Image_gl_load_error = {
	{NULL, (PropertyRNA *)&rna_Image_gl_load_mag,
	-1, "error", 11, "Error",
	"OpenGL error value",
	0, "*",
	PROP_INT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL,
	-2147483647, INT_MAX, -2147483647, INT_MAX, 1, 0, NULL
};

FunctionRNA rna_Image_gl_load_func = {
	{(FunctionRNA *)&rna_Image_gl_free_func, (FunctionRNA *)&rna_Image_gl_touch_func,
	NULL,
	{(PropertyRNA *)&rna_Image_gl_load_frame, (PropertyRNA *)&rna_Image_gl_load_error}},
	"gl_load", 16, "Load the image into OpenGL graphics memory",
	Image_gl_load_call,
	(PropertyRNA *)&rna_Image_gl_load_error
};

FunctionRNA rna_Image_gl_free_func = {
	{(FunctionRNA *)&rna_Image_filepath_from_user_func, (FunctionRNA *)&rna_Image_gl_load_func,
	NULL,
	{NULL, NULL}},
	"gl_free", 0, "Free the image from OpenGL graphics memory",
	Image_gl_free_call,
	NULL
};

PointerPropertyRNA rna_Image_filepath_from_user_image_user = {
	{(PropertyRNA *)&rna_Image_filepath_from_user_filepath, NULL,
	-1, "image_user", 8388608, "",
	"Image user of the image to get filepath for",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	NULL, NULL, NULL, NULL,&RNA_ImageUser
};

StringPropertyRNA rna_Image_filepath_from_user_filepath = {
	{NULL, (PropertyRNA *)&rna_Image_filepath_from_user_image_user,
	-1, "filepath", 8650761, "File Path",
	"The resulting filepath from the image and it\'s user",
	0, "*",
	PROP_STRING, PROP_FILEPATH | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	NULL, NULL, NULL, NULL, NULL, NULL, 1024, ""
};

FunctionRNA rna_Image_filepath_from_user_func = {
	{NULL, (FunctionRNA *)&rna_Image_gl_free_func,
	NULL,
	{(PropertyRNA *)&rna_Image_filepath_from_user_image_user, (PropertyRNA *)&rna_Image_filepath_from_user_filepath}},
	"filepath_from_user", 0, "Return the absolute path to the filepath of an image frame specified by the image user",
	Image_filepath_from_user_call,
	NULL
};

StructRNA RNA_Image = {
	{(ContainerRNA *)&RNA_ImageUser, (ContainerRNA *)&RNA_RenderSlots,
	NULL,
	{(PropertyRNA *)&rna_Image_filepath, (PropertyRNA *)&rna_Image_alpha_mode}},
	"Image", NULL, NULL, 7, "Image",
	"Image datablock referencing an external or packed image",
	"*", 183,
	(PropertyRNA *)&rna_ID_name, (PropertyRNA *)&rna_ID_rna_properties,
	&RNA_ID,
	NULL,
	rna_ID_refine,
	NULL,
	NULL,
	NULL,
	NULL,
	rna_ID_idprops,
	{(FunctionRNA *)&rna_Image_save_render_func, (FunctionRNA *)&rna_Image_filepath_from_user_func}
};

/* Image User */
CollectionPropertyRNA rna_ImageUser_rna_properties = {
	{(PropertyRNA *)&rna_ImageUser_rna_type, NULL,
	-1, "rna_properties", 128, "Properties",
	"RNA property collection",
	0, "*",
	PROP_COLLECTION, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	ImageUser_rna_properties_begin, ImageUser_rna_properties_next, ImageUser_rna_properties_end, ImageUser_rna_properties_get, NULL, NULL, ImageUser_rna_properties_lookup_string, NULL, &RNA_Property
};

PointerPropertyRNA rna_ImageUser_rna_type = {
	{(PropertyRNA *)&rna_ImageUser_use_auto_refresh, (PropertyRNA *)&rna_ImageUser_rna_properties,
	-1, "rna_type", 8912896, "RNA",
	"RNA type definition",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	ImageUser_rna_type_get, NULL, NULL, NULL,&RNA_Struct
};

BoolPropertyRNA rna_ImageUser_use_auto_refresh = {
	{(PropertyRNA *)&rna_ImageUser_frame_current, (PropertyRNA *)&rna_ImageUser_rna_type,
	-1, "use_auto_refresh", 1, "Auto Refresh",
	"Always refresh image on frame changes",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_ImageUser_update, 0, NULL, NULL,
	0, -1, NULL},
	ImageUser_use_auto_refresh_get, ImageUser_use_auto_refresh_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

IntPropertyRNA rna_ImageUser_frame_current = {
	{(PropertyRNA *)&rna_ImageUser_use_cyclic, (PropertyRNA *)&rna_ImageUser_use_auto_refresh,
	-1, "frame_current", 8195, "Current Frame",
	"Current frame number in image sequence or movie",
	0, "*",
	PROP_INT, PROP_TIME | PROP_UNIT_TIME, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	offsetof(ImageUser, framenr), 0, NULL},
	ImageUser_frame_current_get, ImageUser_frame_current_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL,
	-300000, 300000, -300000, 300000, 1, 0, NULL
};

BoolPropertyRNA rna_ImageUser_use_cyclic = {
	{(PropertyRNA *)&rna_ImageUser_frame_duration, (PropertyRNA *)&rna_ImageUser_frame_current,
	-1, "use_cyclic", 8193, "Cyclic",
	"Cycle the images in the movie",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_ImageUser_update, 0, NULL, NULL,
	offsetof(ImageUser, cycl), 2, NULL},
	ImageUser_use_cyclic_get, ImageUser_use_cyclic_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

IntPropertyRNA rna_ImageUser_frame_duration = {
	{(PropertyRNA *)&rna_ImageUser_frame_offset, (PropertyRNA *)&rna_ImageUser_use_cyclic,
	-1, "frame_duration", 8193, "Frames",
	"Number of images of a movie to use",
	0, "*",
	PROP_INT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_ImageUser_update, 0, NULL, NULL,
	offsetof(ImageUser, frames), 0, NULL},
	ImageUser_frame_duration_get, ImageUser_frame_duration_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL,
	0, 300000, 0, 300000, 1, 0, NULL
};

IntPropertyRNA rna_ImageUser_frame_offset = {
	{(PropertyRNA *)&rna_ImageUser_frame_start, (PropertyRNA *)&rna_ImageUser_frame_duration,
	-1, "frame_offset", 8195, "Offset",
	"Offset the number of the frame to use in the animation",
	0, "*",
	PROP_INT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_ImageUser_update, 0, NULL, NULL,
	offsetof(ImageUser, offset), 0, NULL},
	ImageUser_frame_offset_get, ImageUser_frame_offset_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL,
	-10000, 10000, INT_MIN, INT_MAX, 1, 0, NULL
};

IntPropertyRNA rna_ImageUser_frame_start = {
	{(PropertyRNA *)&rna_ImageUser_fields_per_frame, (PropertyRNA *)&rna_ImageUser_frame_offset,
	-1, "frame_start", 8193, "Start Frame",
	"Global starting frame of the movie/sequence, assuming first picture has a #1",
	0, "*",
	PROP_INT, PROP_TIME | PROP_UNIT_TIME, NULL, 0, {0, 0, 0}, 0,
	rna_ImageUser_update, 0, NULL, NULL,
	offsetof(ImageUser, sfra), 0, NULL},
	ImageUser_frame_start_get, ImageUser_frame_start_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL,
	-300000, 300000, -300000, 300000, 1, 0, NULL
};

IntPropertyRNA rna_ImageUser_fields_per_frame = {
	{(PropertyRNA *)&rna_ImageUser_multilayer_layer, (PropertyRNA *)&rna_ImageUser_frame_start,
	-1, "fields_per_frame", 8193, "Fields per Frame",
	"Number of fields per rendered frame (2 fields is 1 image)",
	0, "*",
	PROP_INT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_ImageUser_update, 0, NULL, NULL,
	offsetof(ImageUser, fie_ima), 2, NULL},
	ImageUser_fields_per_frame_get, ImageUser_fields_per_frame_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL,
	1, 200, 1, 200, 1, 0, NULL
};

IntPropertyRNA rna_ImageUser_multilayer_layer = {
	{(PropertyRNA *)&rna_ImageUser_multilayer_pass, (PropertyRNA *)&rna_ImageUser_fields_per_frame,
	-1, "multilayer_layer", 8194, "Layer",
	"Layer in multilayer image",
	0, "*",
	PROP_INT, PROP_UNSIGNED | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	offsetof(ImageUser, layer), 1, NULL},
	ImageUser_multilayer_layer_get, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL,
	0, 32767, 0, 32767, 1, 0, NULL
};

IntPropertyRNA rna_ImageUser_multilayer_pass = {
	{NULL, (PropertyRNA *)&rna_ImageUser_multilayer_layer,
	-1, "multilayer_pass", 8194, "Pass",
	"Pass in multilayer image",
	0, "*",
	PROP_INT, PROP_UNSIGNED | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	offsetof(ImageUser, pass), 1, NULL},
	ImageUser_multilayer_pass_get, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL,
	0, 32767, 0, 32767, 1, 0, NULL
};

StructRNA RNA_ImageUser = {
	{(ContainerRNA *)&RNA_Key, (ContainerRNA *)&RNA_Image,
	NULL,
	{(PropertyRNA *)&rna_ImageUser_rna_properties, (PropertyRNA *)&rna_ImageUser_multilayer_pass}},
	"ImageUser", NULL, NULL, 4, "Image User",
	"Parameters defining how an Image datablock is used by another datablock",
	"*", 17,
	NULL, (PropertyRNA *)&rna_ImageUser_rna_properties,
	NULL,
	NULL,
	NULL,
	rna_ImageUser_path,
	NULL,
	NULL,
	NULL,
	NULL,
	{NULL, NULL}
};

