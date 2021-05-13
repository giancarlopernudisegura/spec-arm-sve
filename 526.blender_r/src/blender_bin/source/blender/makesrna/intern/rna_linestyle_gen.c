
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

#include "rna_linestyle.c"

#pragma GCC diagnostic ignored "-Wunused-parameter"

/* Autogenerated Functions */


CollectionPropertyRNA rna_LineStyleModifier_rna_properties;
PointerPropertyRNA rna_LineStyleModifier_rna_type;


extern CollectionPropertyRNA rna_LineStyleModifier_rna_properties;
extern PointerPropertyRNA rna_LineStyleModifier_rna_type;



extern CollectionPropertyRNA rna_LineStyleModifier_rna_properties;
extern PointerPropertyRNA rna_LineStyleModifier_rna_type;

EnumPropertyRNA rna_LineStyleColorModifier_AlongStroke_type;
StringPropertyRNA rna_LineStyleColorModifier_AlongStroke_name;
EnumPropertyRNA rna_LineStyleColorModifier_AlongStroke_blend;
FloatPropertyRNA rna_LineStyleColorModifier_AlongStroke_influence;
BoolPropertyRNA rna_LineStyleColorModifier_AlongStroke_use;
BoolPropertyRNA rna_LineStyleColorModifier_AlongStroke_expanded;
PointerPropertyRNA rna_LineStyleColorModifier_AlongStroke_color_ramp;



extern CollectionPropertyRNA rna_LineStyleModifier_rna_properties;
extern PointerPropertyRNA rna_LineStyleModifier_rna_type;

EnumPropertyRNA rna_LineStyleColorModifier_DistanceFromCamera_type;
StringPropertyRNA rna_LineStyleColorModifier_DistanceFromCamera_name;
EnumPropertyRNA rna_LineStyleColorModifier_DistanceFromCamera_blend;
FloatPropertyRNA rna_LineStyleColorModifier_DistanceFromCamera_influence;
BoolPropertyRNA rna_LineStyleColorModifier_DistanceFromCamera_use;
BoolPropertyRNA rna_LineStyleColorModifier_DistanceFromCamera_expanded;
PointerPropertyRNA rna_LineStyleColorModifier_DistanceFromCamera_color_ramp;
FloatPropertyRNA rna_LineStyleColorModifier_DistanceFromCamera_range_min;
FloatPropertyRNA rna_LineStyleColorModifier_DistanceFromCamera_range_max;



extern CollectionPropertyRNA rna_LineStyleModifier_rna_properties;
extern PointerPropertyRNA rna_LineStyleModifier_rna_type;

EnumPropertyRNA rna_LineStyleColorModifier_DistanceFromObject_type;
StringPropertyRNA rna_LineStyleColorModifier_DistanceFromObject_name;
EnumPropertyRNA rna_LineStyleColorModifier_DistanceFromObject_blend;
FloatPropertyRNA rna_LineStyleColorModifier_DistanceFromObject_influence;
BoolPropertyRNA rna_LineStyleColorModifier_DistanceFromObject_use;
BoolPropertyRNA rna_LineStyleColorModifier_DistanceFromObject_expanded;
PointerPropertyRNA rna_LineStyleColorModifier_DistanceFromObject_color_ramp;
FloatPropertyRNA rna_LineStyleColorModifier_DistanceFromObject_range_min;
FloatPropertyRNA rna_LineStyleColorModifier_DistanceFromObject_range_max;
PointerPropertyRNA rna_LineStyleColorModifier_DistanceFromObject_target;



extern CollectionPropertyRNA rna_LineStyleModifier_rna_properties;
extern PointerPropertyRNA rna_LineStyleModifier_rna_type;

EnumPropertyRNA rna_LineStyleColorModifier_Material_type;
StringPropertyRNA rna_LineStyleColorModifier_Material_name;
EnumPropertyRNA rna_LineStyleColorModifier_Material_blend;
FloatPropertyRNA rna_LineStyleColorModifier_Material_influence;
BoolPropertyRNA rna_LineStyleColorModifier_Material_use;
BoolPropertyRNA rna_LineStyleColorModifier_Material_expanded;
EnumPropertyRNA rna_LineStyleColorModifier_Material_material_attribute;
PointerPropertyRNA rna_LineStyleColorModifier_Material_color_ramp;
BoolPropertyRNA rna_LineStyleColorModifier_Material_use_ramp;


extern CollectionPropertyRNA rna_LineStyleModifier_rna_properties;
extern PointerPropertyRNA rna_LineStyleModifier_rna_type;



extern CollectionPropertyRNA rna_LineStyleModifier_rna_properties;
extern PointerPropertyRNA rna_LineStyleModifier_rna_type;

EnumPropertyRNA rna_LineStyleAlphaModifier_AlongStroke_type;
StringPropertyRNA rna_LineStyleAlphaModifier_AlongStroke_name;
EnumPropertyRNA rna_LineStyleAlphaModifier_AlongStroke_blend;
FloatPropertyRNA rna_LineStyleAlphaModifier_AlongStroke_influence;
BoolPropertyRNA rna_LineStyleAlphaModifier_AlongStroke_use;
BoolPropertyRNA rna_LineStyleAlphaModifier_AlongStroke_expanded;
EnumPropertyRNA rna_LineStyleAlphaModifier_AlongStroke_mapping;
BoolPropertyRNA rna_LineStyleAlphaModifier_AlongStroke_invert;
PointerPropertyRNA rna_LineStyleAlphaModifier_AlongStroke_curve;



extern CollectionPropertyRNA rna_LineStyleModifier_rna_properties;
extern PointerPropertyRNA rna_LineStyleModifier_rna_type;

EnumPropertyRNA rna_LineStyleAlphaModifier_DistanceFromCamera_type;
StringPropertyRNA rna_LineStyleAlphaModifier_DistanceFromCamera_name;
EnumPropertyRNA rna_LineStyleAlphaModifier_DistanceFromCamera_blend;
FloatPropertyRNA rna_LineStyleAlphaModifier_DistanceFromCamera_influence;
BoolPropertyRNA rna_LineStyleAlphaModifier_DistanceFromCamera_use;
BoolPropertyRNA rna_LineStyleAlphaModifier_DistanceFromCamera_expanded;
EnumPropertyRNA rna_LineStyleAlphaModifier_DistanceFromCamera_mapping;
BoolPropertyRNA rna_LineStyleAlphaModifier_DistanceFromCamera_invert;
PointerPropertyRNA rna_LineStyleAlphaModifier_DistanceFromCamera_curve;
FloatPropertyRNA rna_LineStyleAlphaModifier_DistanceFromCamera_range_min;
FloatPropertyRNA rna_LineStyleAlphaModifier_DistanceFromCamera_range_max;



extern CollectionPropertyRNA rna_LineStyleModifier_rna_properties;
extern PointerPropertyRNA rna_LineStyleModifier_rna_type;

EnumPropertyRNA rna_LineStyleAlphaModifier_DistanceFromObject_type;
StringPropertyRNA rna_LineStyleAlphaModifier_DistanceFromObject_name;
EnumPropertyRNA rna_LineStyleAlphaModifier_DistanceFromObject_blend;
FloatPropertyRNA rna_LineStyleAlphaModifier_DistanceFromObject_influence;
BoolPropertyRNA rna_LineStyleAlphaModifier_DistanceFromObject_use;
BoolPropertyRNA rna_LineStyleAlphaModifier_DistanceFromObject_expanded;
EnumPropertyRNA rna_LineStyleAlphaModifier_DistanceFromObject_mapping;
BoolPropertyRNA rna_LineStyleAlphaModifier_DistanceFromObject_invert;
PointerPropertyRNA rna_LineStyleAlphaModifier_DistanceFromObject_curve;
FloatPropertyRNA rna_LineStyleAlphaModifier_DistanceFromObject_range_min;
FloatPropertyRNA rna_LineStyleAlphaModifier_DistanceFromObject_range_max;
PointerPropertyRNA rna_LineStyleAlphaModifier_DistanceFromObject_target;



extern CollectionPropertyRNA rna_LineStyleModifier_rna_properties;
extern PointerPropertyRNA rna_LineStyleModifier_rna_type;

EnumPropertyRNA rna_LineStyleAlphaModifier_Material_type;
StringPropertyRNA rna_LineStyleAlphaModifier_Material_name;
EnumPropertyRNA rna_LineStyleAlphaModifier_Material_blend;
FloatPropertyRNA rna_LineStyleAlphaModifier_Material_influence;
BoolPropertyRNA rna_LineStyleAlphaModifier_Material_use;
BoolPropertyRNA rna_LineStyleAlphaModifier_Material_expanded;
EnumPropertyRNA rna_LineStyleAlphaModifier_Material_material_attribute;
EnumPropertyRNA rna_LineStyleAlphaModifier_Material_mapping;
BoolPropertyRNA rna_LineStyleAlphaModifier_Material_invert;
PointerPropertyRNA rna_LineStyleAlphaModifier_Material_curve;


extern CollectionPropertyRNA rna_LineStyleModifier_rna_properties;
extern PointerPropertyRNA rna_LineStyleModifier_rna_type;



extern CollectionPropertyRNA rna_LineStyleModifier_rna_properties;
extern PointerPropertyRNA rna_LineStyleModifier_rna_type;

EnumPropertyRNA rna_LineStyleThicknessModifier_AlongStroke_type;
StringPropertyRNA rna_LineStyleThicknessModifier_AlongStroke_name;
EnumPropertyRNA rna_LineStyleThicknessModifier_AlongStroke_blend;
FloatPropertyRNA rna_LineStyleThicknessModifier_AlongStroke_influence;
BoolPropertyRNA rna_LineStyleThicknessModifier_AlongStroke_use;
BoolPropertyRNA rna_LineStyleThicknessModifier_AlongStroke_expanded;
EnumPropertyRNA rna_LineStyleThicknessModifier_AlongStroke_mapping;
BoolPropertyRNA rna_LineStyleThicknessModifier_AlongStroke_invert;
PointerPropertyRNA rna_LineStyleThicknessModifier_AlongStroke_curve;
FloatPropertyRNA rna_LineStyleThicknessModifier_AlongStroke_value_min;
FloatPropertyRNA rna_LineStyleThicknessModifier_AlongStroke_value_max;



extern CollectionPropertyRNA rna_LineStyleModifier_rna_properties;
extern PointerPropertyRNA rna_LineStyleModifier_rna_type;

EnumPropertyRNA rna_LineStyleThicknessModifier_DistanceFromCamera_type;
StringPropertyRNA rna_LineStyleThicknessModifier_DistanceFromCamera_name;
EnumPropertyRNA rna_LineStyleThicknessModifier_DistanceFromCamera_blend;
FloatPropertyRNA rna_LineStyleThicknessModifier_DistanceFromCamera_influence;
BoolPropertyRNA rna_LineStyleThicknessModifier_DistanceFromCamera_use;
BoolPropertyRNA rna_LineStyleThicknessModifier_DistanceFromCamera_expanded;
EnumPropertyRNA rna_LineStyleThicknessModifier_DistanceFromCamera_mapping;
BoolPropertyRNA rna_LineStyleThicknessModifier_DistanceFromCamera_invert;
PointerPropertyRNA rna_LineStyleThicknessModifier_DistanceFromCamera_curve;
FloatPropertyRNA rna_LineStyleThicknessModifier_DistanceFromCamera_range_min;
FloatPropertyRNA rna_LineStyleThicknessModifier_DistanceFromCamera_range_max;
FloatPropertyRNA rna_LineStyleThicknessModifier_DistanceFromCamera_value_min;
FloatPropertyRNA rna_LineStyleThicknessModifier_DistanceFromCamera_value_max;



extern CollectionPropertyRNA rna_LineStyleModifier_rna_properties;
extern PointerPropertyRNA rna_LineStyleModifier_rna_type;

EnumPropertyRNA rna_LineStyleThicknessModifier_DistanceFromObject_type;
StringPropertyRNA rna_LineStyleThicknessModifier_DistanceFromObject_name;
EnumPropertyRNA rna_LineStyleThicknessModifier_DistanceFromObject_blend;
FloatPropertyRNA rna_LineStyleThicknessModifier_DistanceFromObject_influence;
BoolPropertyRNA rna_LineStyleThicknessModifier_DistanceFromObject_use;
BoolPropertyRNA rna_LineStyleThicknessModifier_DistanceFromObject_expanded;
EnumPropertyRNA rna_LineStyleThicknessModifier_DistanceFromObject_mapping;
BoolPropertyRNA rna_LineStyleThicknessModifier_DistanceFromObject_invert;
PointerPropertyRNA rna_LineStyleThicknessModifier_DistanceFromObject_curve;
FloatPropertyRNA rna_LineStyleThicknessModifier_DistanceFromObject_range_min;
FloatPropertyRNA rna_LineStyleThicknessModifier_DistanceFromObject_range_max;
FloatPropertyRNA rna_LineStyleThicknessModifier_DistanceFromObject_value_min;
FloatPropertyRNA rna_LineStyleThicknessModifier_DistanceFromObject_value_max;
PointerPropertyRNA rna_LineStyleThicknessModifier_DistanceFromObject_target;



extern CollectionPropertyRNA rna_LineStyleModifier_rna_properties;
extern PointerPropertyRNA rna_LineStyleModifier_rna_type;

EnumPropertyRNA rna_LineStyleThicknessModifier_Material_type;
StringPropertyRNA rna_LineStyleThicknessModifier_Material_name;
EnumPropertyRNA rna_LineStyleThicknessModifier_Material_blend;
FloatPropertyRNA rna_LineStyleThicknessModifier_Material_influence;
BoolPropertyRNA rna_LineStyleThicknessModifier_Material_use;
BoolPropertyRNA rna_LineStyleThicknessModifier_Material_expanded;
EnumPropertyRNA rna_LineStyleThicknessModifier_Material_material_attribute;
EnumPropertyRNA rna_LineStyleThicknessModifier_Material_mapping;
BoolPropertyRNA rna_LineStyleThicknessModifier_Material_invert;
PointerPropertyRNA rna_LineStyleThicknessModifier_Material_curve;
FloatPropertyRNA rna_LineStyleThicknessModifier_Material_value_min;
FloatPropertyRNA rna_LineStyleThicknessModifier_Material_value_max;



extern CollectionPropertyRNA rna_LineStyleModifier_rna_properties;
extern PointerPropertyRNA rna_LineStyleModifier_rna_type;

EnumPropertyRNA rna_LineStyleThicknessModifier_Calligraphy_type;
StringPropertyRNA rna_LineStyleThicknessModifier_Calligraphy_name;
EnumPropertyRNA rna_LineStyleThicknessModifier_Calligraphy_blend;
FloatPropertyRNA rna_LineStyleThicknessModifier_Calligraphy_influence;
BoolPropertyRNA rna_LineStyleThicknessModifier_Calligraphy_use;
BoolPropertyRNA rna_LineStyleThicknessModifier_Calligraphy_expanded;
FloatPropertyRNA rna_LineStyleThicknessModifier_Calligraphy_orientation;
FloatPropertyRNA rna_LineStyleThicknessModifier_Calligraphy_thickness_min;
FloatPropertyRNA rna_LineStyleThicknessModifier_Calligraphy_thickness_max;


extern CollectionPropertyRNA rna_LineStyleModifier_rna_properties;
extern PointerPropertyRNA rna_LineStyleModifier_rna_type;



extern CollectionPropertyRNA rna_LineStyleModifier_rna_properties;
extern PointerPropertyRNA rna_LineStyleModifier_rna_type;

EnumPropertyRNA rna_LineStyleGeometryModifier_Sampling_type;
StringPropertyRNA rna_LineStyleGeometryModifier_Sampling_name;
BoolPropertyRNA rna_LineStyleGeometryModifier_Sampling_use;
BoolPropertyRNA rna_LineStyleGeometryModifier_Sampling_expanded;
FloatPropertyRNA rna_LineStyleGeometryModifier_Sampling_sampling;



extern CollectionPropertyRNA rna_LineStyleModifier_rna_properties;
extern PointerPropertyRNA rna_LineStyleModifier_rna_type;

EnumPropertyRNA rna_LineStyleGeometryModifier_BezierCurve_type;
StringPropertyRNA rna_LineStyleGeometryModifier_BezierCurve_name;
BoolPropertyRNA rna_LineStyleGeometryModifier_BezierCurve_use;
BoolPropertyRNA rna_LineStyleGeometryModifier_BezierCurve_expanded;
FloatPropertyRNA rna_LineStyleGeometryModifier_BezierCurve_error;



extern CollectionPropertyRNA rna_LineStyleModifier_rna_properties;
extern PointerPropertyRNA rna_LineStyleModifier_rna_type;

EnumPropertyRNA rna_LineStyleGeometryModifier_SinusDisplacement_type;
StringPropertyRNA rna_LineStyleGeometryModifier_SinusDisplacement_name;
BoolPropertyRNA rna_LineStyleGeometryModifier_SinusDisplacement_use;
BoolPropertyRNA rna_LineStyleGeometryModifier_SinusDisplacement_expanded;
FloatPropertyRNA rna_LineStyleGeometryModifier_SinusDisplacement_wavelength;
FloatPropertyRNA rna_LineStyleGeometryModifier_SinusDisplacement_amplitude;
FloatPropertyRNA rna_LineStyleGeometryModifier_SinusDisplacement_phase;



extern CollectionPropertyRNA rna_LineStyleModifier_rna_properties;
extern PointerPropertyRNA rna_LineStyleModifier_rna_type;

EnumPropertyRNA rna_LineStyleGeometryModifier_SpatialNoise_type;
StringPropertyRNA rna_LineStyleGeometryModifier_SpatialNoise_name;
BoolPropertyRNA rna_LineStyleGeometryModifier_SpatialNoise_use;
BoolPropertyRNA rna_LineStyleGeometryModifier_SpatialNoise_expanded;
FloatPropertyRNA rna_LineStyleGeometryModifier_SpatialNoise_amplitude;
FloatPropertyRNA rna_LineStyleGeometryModifier_SpatialNoise_scale;
IntPropertyRNA rna_LineStyleGeometryModifier_SpatialNoise_octaves;
BoolPropertyRNA rna_LineStyleGeometryModifier_SpatialNoise_smooth;
BoolPropertyRNA rna_LineStyleGeometryModifier_SpatialNoise_use_pure_random;



extern CollectionPropertyRNA rna_LineStyleModifier_rna_properties;
extern PointerPropertyRNA rna_LineStyleModifier_rna_type;

EnumPropertyRNA rna_LineStyleGeometryModifier_PerlinNoise1D_type;
StringPropertyRNA rna_LineStyleGeometryModifier_PerlinNoise1D_name;
BoolPropertyRNA rna_LineStyleGeometryModifier_PerlinNoise1D_use;
BoolPropertyRNA rna_LineStyleGeometryModifier_PerlinNoise1D_expanded;
FloatPropertyRNA rna_LineStyleGeometryModifier_PerlinNoise1D_frequency;
FloatPropertyRNA rna_LineStyleGeometryModifier_PerlinNoise1D_amplitude;
IntPropertyRNA rna_LineStyleGeometryModifier_PerlinNoise1D_octaves;
FloatPropertyRNA rna_LineStyleGeometryModifier_PerlinNoise1D_angle;
IntPropertyRNA rna_LineStyleGeometryModifier_PerlinNoise1D_seed;



extern CollectionPropertyRNA rna_LineStyleModifier_rna_properties;
extern PointerPropertyRNA rna_LineStyleModifier_rna_type;

EnumPropertyRNA rna_LineStyleGeometryModifier_PerlinNoise2D_type;
StringPropertyRNA rna_LineStyleGeometryModifier_PerlinNoise2D_name;
BoolPropertyRNA rna_LineStyleGeometryModifier_PerlinNoise2D_use;
BoolPropertyRNA rna_LineStyleGeometryModifier_PerlinNoise2D_expanded;
FloatPropertyRNA rna_LineStyleGeometryModifier_PerlinNoise2D_frequency;
FloatPropertyRNA rna_LineStyleGeometryModifier_PerlinNoise2D_amplitude;
IntPropertyRNA rna_LineStyleGeometryModifier_PerlinNoise2D_octaves;
FloatPropertyRNA rna_LineStyleGeometryModifier_PerlinNoise2D_angle;
IntPropertyRNA rna_LineStyleGeometryModifier_PerlinNoise2D_seed;



extern CollectionPropertyRNA rna_LineStyleModifier_rna_properties;
extern PointerPropertyRNA rna_LineStyleModifier_rna_type;

EnumPropertyRNA rna_LineStyleGeometryModifier_BackboneStretcher_type;
StringPropertyRNA rna_LineStyleGeometryModifier_BackboneStretcher_name;
BoolPropertyRNA rna_LineStyleGeometryModifier_BackboneStretcher_use;
BoolPropertyRNA rna_LineStyleGeometryModifier_BackboneStretcher_expanded;
FloatPropertyRNA rna_LineStyleGeometryModifier_BackboneStretcher_backbone_length;



extern CollectionPropertyRNA rna_LineStyleModifier_rna_properties;
extern PointerPropertyRNA rna_LineStyleModifier_rna_type;

EnumPropertyRNA rna_LineStyleGeometryModifier_TipRemover_type;
StringPropertyRNA rna_LineStyleGeometryModifier_TipRemover_name;
BoolPropertyRNA rna_LineStyleGeometryModifier_TipRemover_use;
BoolPropertyRNA rna_LineStyleGeometryModifier_TipRemover_expanded;
FloatPropertyRNA rna_LineStyleGeometryModifier_TipRemover_tip_length;



extern CollectionPropertyRNA rna_LineStyleModifier_rna_properties;
extern PointerPropertyRNA rna_LineStyleModifier_rna_type;

EnumPropertyRNA rna_LineStyleGeometryModifier_Polygonalization_type;
StringPropertyRNA rna_LineStyleGeometryModifier_Polygonalization_name;
BoolPropertyRNA rna_LineStyleGeometryModifier_Polygonalization_use;
BoolPropertyRNA rna_LineStyleGeometryModifier_Polygonalization_expanded;
FloatPropertyRNA rna_LineStyleGeometryModifier_Polygonalization_error;



extern CollectionPropertyRNA rna_LineStyleModifier_rna_properties;
extern PointerPropertyRNA rna_LineStyleModifier_rna_type;

EnumPropertyRNA rna_LineStyleGeometryModifier_GuidingLines_type;
StringPropertyRNA rna_LineStyleGeometryModifier_GuidingLines_name;
BoolPropertyRNA rna_LineStyleGeometryModifier_GuidingLines_use;
BoolPropertyRNA rna_LineStyleGeometryModifier_GuidingLines_expanded;
FloatPropertyRNA rna_LineStyleGeometryModifier_GuidingLines_offset;



extern CollectionPropertyRNA rna_LineStyleModifier_rna_properties;
extern PointerPropertyRNA rna_LineStyleModifier_rna_type;

EnumPropertyRNA rna_LineStyleGeometryModifier_Blueprint_type;
StringPropertyRNA rna_LineStyleGeometryModifier_Blueprint_name;
BoolPropertyRNA rna_LineStyleGeometryModifier_Blueprint_use;
BoolPropertyRNA rna_LineStyleGeometryModifier_Blueprint_expanded;
EnumPropertyRNA rna_LineStyleGeometryModifier_Blueprint_shape;
IntPropertyRNA rna_LineStyleGeometryModifier_Blueprint_rounds;
FloatPropertyRNA rna_LineStyleGeometryModifier_Blueprint_backbone_length;
IntPropertyRNA rna_LineStyleGeometryModifier_Blueprint_random_radius;
IntPropertyRNA rna_LineStyleGeometryModifier_Blueprint_random_center;
IntPropertyRNA rna_LineStyleGeometryModifier_Blueprint_random_backbone;



extern CollectionPropertyRNA rna_LineStyleModifier_rna_properties;
extern PointerPropertyRNA rna_LineStyleModifier_rna_type;

EnumPropertyRNA rna_LineStyleGeometryModifier_2DOffset_type;
StringPropertyRNA rna_LineStyleGeometryModifier_2DOffset_name;
BoolPropertyRNA rna_LineStyleGeometryModifier_2DOffset_use;
BoolPropertyRNA rna_LineStyleGeometryModifier_2DOffset_expanded;
FloatPropertyRNA rna_LineStyleGeometryModifier_2DOffset_start;
FloatPropertyRNA rna_LineStyleGeometryModifier_2DOffset_end;
FloatPropertyRNA rna_LineStyleGeometryModifier_2DOffset_x;
FloatPropertyRNA rna_LineStyleGeometryModifier_2DOffset_y;



extern CollectionPropertyRNA rna_LineStyleModifier_rna_properties;
extern PointerPropertyRNA rna_LineStyleModifier_rna_type;

EnumPropertyRNA rna_LineStyleGeometryModifier_2DTransform_type;
StringPropertyRNA rna_LineStyleGeometryModifier_2DTransform_name;
BoolPropertyRNA rna_LineStyleGeometryModifier_2DTransform_use;
BoolPropertyRNA rna_LineStyleGeometryModifier_2DTransform_expanded;
EnumPropertyRNA rna_LineStyleGeometryModifier_2DTransform_pivot;
FloatPropertyRNA rna_LineStyleGeometryModifier_2DTransform_scale_x;
FloatPropertyRNA rna_LineStyleGeometryModifier_2DTransform_scale_y;
FloatPropertyRNA rna_LineStyleGeometryModifier_2DTransform_angle;
FloatPropertyRNA rna_LineStyleGeometryModifier_2DTransform_pivot_u;
FloatPropertyRNA rna_LineStyleGeometryModifier_2DTransform_pivot_x;
FloatPropertyRNA rna_LineStyleGeometryModifier_2DTransform_pivot_y;


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

CollectionPropertyRNA rna_FreestyleLineStyle_texture_slots;
PointerPropertyRNA rna_FreestyleLineStyle_active_texture;
IntPropertyRNA rna_FreestyleLineStyle_active_texture_index;
EnumPropertyRNA rna_FreestyleLineStyle_panel;
FloatPropertyRNA rna_FreestyleLineStyle_color;
FloatPropertyRNA rna_FreestyleLineStyle_alpha;
FloatPropertyRNA rna_FreestyleLineStyle_thickness;
EnumPropertyRNA rna_FreestyleLineStyle_thickness_position;
FloatPropertyRNA rna_FreestyleLineStyle_thickness_ratio;
CollectionPropertyRNA rna_FreestyleLineStyle_color_modifiers;
CollectionPropertyRNA rna_FreestyleLineStyle_alpha_modifiers;
CollectionPropertyRNA rna_FreestyleLineStyle_thickness_modifiers;
CollectionPropertyRNA rna_FreestyleLineStyle_geometry_modifiers;
BoolPropertyRNA rna_FreestyleLineStyle_use_chaining;
EnumPropertyRNA rna_FreestyleLineStyle_chaining;
IntPropertyRNA rna_FreestyleLineStyle_rounds;
BoolPropertyRNA rna_FreestyleLineStyle_use_same_object;
BoolPropertyRNA rna_FreestyleLineStyle_use_split_length;
FloatPropertyRNA rna_FreestyleLineStyle_split_length;
BoolPropertyRNA rna_FreestyleLineStyle_use_angle_min;
FloatPropertyRNA rna_FreestyleLineStyle_angle_min;
BoolPropertyRNA rna_FreestyleLineStyle_use_angle_max;
FloatPropertyRNA rna_FreestyleLineStyle_angle_max;
BoolPropertyRNA rna_FreestyleLineStyle_use_length_min;
FloatPropertyRNA rna_FreestyleLineStyle_length_min;
BoolPropertyRNA rna_FreestyleLineStyle_use_length_max;
FloatPropertyRNA rna_FreestyleLineStyle_length_max;
BoolPropertyRNA rna_FreestyleLineStyle_use_chain_count;
IntPropertyRNA rna_FreestyleLineStyle_chain_count;
BoolPropertyRNA rna_FreestyleLineStyle_use_split_pattern;
IntPropertyRNA rna_FreestyleLineStyle_split_dash1;
IntPropertyRNA rna_FreestyleLineStyle_split_gap1;
IntPropertyRNA rna_FreestyleLineStyle_split_dash2;
IntPropertyRNA rna_FreestyleLineStyle_split_gap2;
IntPropertyRNA rna_FreestyleLineStyle_split_dash3;
IntPropertyRNA rna_FreestyleLineStyle_split_gap3;
BoolPropertyRNA rna_FreestyleLineStyle_material_boundary;
BoolPropertyRNA rna_FreestyleLineStyle_use_sorting;
EnumPropertyRNA rna_FreestyleLineStyle_sort_key;
EnumPropertyRNA rna_FreestyleLineStyle_sort_order;
EnumPropertyRNA rna_FreestyleLineStyle_integration_type;
BoolPropertyRNA rna_FreestyleLineStyle_use_dashed_line;
EnumPropertyRNA rna_FreestyleLineStyle_caps;
IntPropertyRNA rna_FreestyleLineStyle_dash1;
IntPropertyRNA rna_FreestyleLineStyle_gap1;
IntPropertyRNA rna_FreestyleLineStyle_dash2;
IntPropertyRNA rna_FreestyleLineStyle_gap2;
IntPropertyRNA rna_FreestyleLineStyle_dash3;
IntPropertyRNA rna_FreestyleLineStyle_gap3;
BoolPropertyRNA rna_FreestyleLineStyle_use_texture;
FloatPropertyRNA rna_FreestyleLineStyle_texture_spacing;
PointerPropertyRNA rna_FreestyleLineStyle_node_tree;
BoolPropertyRNA rna_FreestyleLineStyle_use_nodes;

extern FunctionRNA rna_ID_copy_func;
extern PointerPropertyRNA rna_ID_copy_id;

extern FunctionRNA rna_ID_user_clear_func;
extern FunctionRNA rna_ID_animation_data_create_func;
extern PointerPropertyRNA rna_ID_animation_data_create_anim_data;

extern FunctionRNA rna_ID_animation_data_clear_func;
extern FunctionRNA rna_ID_update_tag_func;
extern EnumPropertyRNA rna_ID_update_tag_refresh;



CollectionPropertyRNA rna_LineStyleTextureSlots_rna_properties;
PointerPropertyRNA rna_LineStyleTextureSlots_rna_type;

extern FunctionRNA rna_LineStyleTextureSlots_add_func;
extern PointerPropertyRNA rna_LineStyleTextureSlots_add_mtex;

extern FunctionRNA rna_LineStyleTextureSlots_create_func;
extern IntPropertyRNA rna_LineStyleTextureSlots_create_index;
extern PointerPropertyRNA rna_LineStyleTextureSlots_create_mtex;

extern FunctionRNA rna_LineStyleTextureSlots_clear_func;
extern IntPropertyRNA rna_LineStyleTextureSlots_clear_index;



CollectionPropertyRNA rna_LineStyleColorModifiers_rna_properties;
PointerPropertyRNA rna_LineStyleColorModifiers_rna_type;

extern FunctionRNA rna_LineStyleColorModifiers_new_func;
extern StringPropertyRNA rna_LineStyleColorModifiers_new_name;
extern EnumPropertyRNA rna_LineStyleColorModifiers_new_type;
extern PointerPropertyRNA rna_LineStyleColorModifiers_new_modifier;

extern FunctionRNA rna_LineStyleColorModifiers_remove_func;
extern PointerPropertyRNA rna_LineStyleColorModifiers_remove_modifier;



CollectionPropertyRNA rna_LineStyleAlphaModifiers_rna_properties;
PointerPropertyRNA rna_LineStyleAlphaModifiers_rna_type;

extern FunctionRNA rna_LineStyleAlphaModifiers_new_func;
extern StringPropertyRNA rna_LineStyleAlphaModifiers_new_name;
extern EnumPropertyRNA rna_LineStyleAlphaModifiers_new_type;
extern PointerPropertyRNA rna_LineStyleAlphaModifiers_new_modifier;

extern FunctionRNA rna_LineStyleAlphaModifiers_remove_func;
extern PointerPropertyRNA rna_LineStyleAlphaModifiers_remove_modifier;



CollectionPropertyRNA rna_LineStyleThicknessModifiers_rna_properties;
PointerPropertyRNA rna_LineStyleThicknessModifiers_rna_type;

extern FunctionRNA rna_LineStyleThicknessModifiers_new_func;
extern StringPropertyRNA rna_LineStyleThicknessModifiers_new_name;
extern EnumPropertyRNA rna_LineStyleThicknessModifiers_new_type;
extern PointerPropertyRNA rna_LineStyleThicknessModifiers_new_modifier;

extern FunctionRNA rna_LineStyleThicknessModifiers_remove_func;
extern PointerPropertyRNA rna_LineStyleThicknessModifiers_remove_modifier;



CollectionPropertyRNA rna_LineStyleGeometryModifiers_rna_properties;
PointerPropertyRNA rna_LineStyleGeometryModifiers_rna_type;

extern FunctionRNA rna_LineStyleGeometryModifiers_new_func;
extern StringPropertyRNA rna_LineStyleGeometryModifiers_new_name;
extern EnumPropertyRNA rna_LineStyleGeometryModifiers_new_type;
extern PointerPropertyRNA rna_LineStyleGeometryModifiers_new_modifier;

extern FunctionRNA rna_LineStyleGeometryModifiers_remove_func;
extern PointerPropertyRNA rna_LineStyleGeometryModifiers_remove_modifier;



extern CollectionPropertyRNA rna_TextureSlot_rna_properties;
extern PointerPropertyRNA rna_TextureSlot_rna_type;
extern PointerPropertyRNA rna_TextureSlot_texture;
extern StringPropertyRNA rna_TextureSlot_name;
extern FloatPropertyRNA rna_TextureSlot_offset;
extern FloatPropertyRNA rna_TextureSlot_scale;
extern FloatPropertyRNA rna_TextureSlot_color;
extern EnumPropertyRNA rna_TextureSlot_blend_type;
extern BoolPropertyRNA rna_TextureSlot_use_stencil;
extern BoolPropertyRNA rna_TextureSlot_invert;
extern BoolPropertyRNA rna_TextureSlot_use_rgb_to_intensity;
extern FloatPropertyRNA rna_TextureSlot_default_value;
extern EnumPropertyRNA rna_TextureSlot_output_node;

EnumPropertyRNA rna_LineStyleTextureSlot_mapping_x;
EnumPropertyRNA rna_LineStyleTextureSlot_mapping_y;
EnumPropertyRNA rna_LineStyleTextureSlot_mapping_z;
EnumPropertyRNA rna_LineStyleTextureSlot_mapping;
BoolPropertyRNA rna_LineStyleTextureSlot_use_map_color_diffuse;
BoolPropertyRNA rna_LineStyleTextureSlot_use_map_alpha;
BoolPropertyRNA rna_LineStyleTextureSlot_use_tips;
EnumPropertyRNA rna_LineStyleTextureSlot_texture_coords;
FloatPropertyRNA rna_LineStyleTextureSlot_alpha_factor;
FloatPropertyRNA rna_LineStyleTextureSlot_diffuse_color_factor;

static PointerRNA LineStyleModifier_rna_properties_get(CollectionPropertyIterator *iter)
{
	return rna_builtin_properties_get(iter);
}

void LineStyleModifier_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

	memset(iter, 0, sizeof(*iter));
	iter->parent = *ptr;
	iter->prop = (PropertyRNA *)&rna_LineStyleModifier_rna_properties;

	rna_builtin_properties_begin(iter, ptr);

	if (iter->valid)
		iter->ptr = LineStyleModifier_rna_properties_get(iter);
}

void LineStyleModifier_rna_properties_next(CollectionPropertyIterator *iter)
{
	rna_builtin_properties_next(iter);

	if (iter->valid)
		iter->ptr = LineStyleModifier_rna_properties_get(iter);
}

void LineStyleModifier_rna_properties_end(CollectionPropertyIterator *iter)
{
	rna_iterator_listbase_end(iter);
}

int LineStyleModifier_rna_properties_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
	return rna_builtin_properties_lookup_string(ptr, key, r_ptr);
}

PointerRNA LineStyleModifier_rna_type_get(PointerRNA *ptr)
{
	return rna_builtin_type_get(ptr);
}

int LineStyleColorModifier_AlongStroke_type_get(PointerRNA *ptr)
{
	LineStyleColorModifier_AlongStroke *data = (LineStyleColorModifier_AlongStroke *)(ptr->data);
	return (int)(data->modifier.type);
}

void LineStyleColorModifier_AlongStroke_name_get(PointerRNA *ptr, char *value)
{
	LineStyleColorModifier_AlongStroke *data = (LineStyleColorModifier_AlongStroke *)(ptr->data);
	BLI_strncpy_utf8(value, data->modifier.name, 64);
}

int LineStyleColorModifier_AlongStroke_name_length(PointerRNA *ptr)
{
	LineStyleColorModifier_AlongStroke *data = (LineStyleColorModifier_AlongStroke *)(ptr->data);
	return strlen(data->modifier.name);
}

void LineStyleColorModifier_AlongStroke_name_set(PointerRNA *ptr, const char *value)
{
	rna_LineStyleColorModifier_name_set(ptr, value);
}

int LineStyleColorModifier_AlongStroke_blend_get(PointerRNA *ptr)
{
	LineStyleColorModifier_AlongStroke *data = (LineStyleColorModifier_AlongStroke *)(ptr->data);
	return (int)(data->modifier.blend);
}

void LineStyleColorModifier_AlongStroke_blend_set(PointerRNA *ptr, int value)
{
	LineStyleColorModifier_AlongStroke *data = (LineStyleColorModifier_AlongStroke *)(ptr->data);
	data->modifier.blend = value;
}

float LineStyleColorModifier_AlongStroke_influence_get(PointerRNA *ptr)
{
	LineStyleColorModifier_AlongStroke *data = (LineStyleColorModifier_AlongStroke *)(ptr->data);
	return (float)(data->modifier.influence);
}

void LineStyleColorModifier_AlongStroke_influence_set(PointerRNA *ptr, float value)
{
	LineStyleColorModifier_AlongStroke *data = (LineStyleColorModifier_AlongStroke *)(ptr->data);
	data->modifier.influence = CLAMPIS(value, 0.0f, 1.0f);
}

int LineStyleColorModifier_AlongStroke_use_get(PointerRNA *ptr)
{
	LineStyleColorModifier_AlongStroke *data = (LineStyleColorModifier_AlongStroke *)(ptr->data);
	return (((data->modifier.flags) & 1) != 0);
}

void LineStyleColorModifier_AlongStroke_use_set(PointerRNA *ptr, int value)
{
	LineStyleColorModifier_AlongStroke *data = (LineStyleColorModifier_AlongStroke *)(ptr->data);
	if (value) data->modifier.flags |= 1;
	else data->modifier.flags &= ~1;
}

int LineStyleColorModifier_AlongStroke_expanded_get(PointerRNA *ptr)
{
	LineStyleColorModifier_AlongStroke *data = (LineStyleColorModifier_AlongStroke *)(ptr->data);
	return (((data->modifier.flags) & 2) != 0);
}

void LineStyleColorModifier_AlongStroke_expanded_set(PointerRNA *ptr, int value)
{
	LineStyleColorModifier_AlongStroke *data = (LineStyleColorModifier_AlongStroke *)(ptr->data);
	if (value) data->modifier.flags |= 2;
	else data->modifier.flags &= ~2;
}

PointerRNA LineStyleColorModifier_AlongStroke_color_ramp_get(PointerRNA *ptr)
{
	LineStyleColorModifier_AlongStroke *data = (LineStyleColorModifier_AlongStroke *)(ptr->data);
	return rna_pointer_inherit_refine(ptr, &RNA_ColorRamp, data->color_ramp);
}

int LineStyleColorModifier_DistanceFromCamera_type_get(PointerRNA *ptr)
{
	LineStyleColorModifier_DistanceFromCamera *data = (LineStyleColorModifier_DistanceFromCamera *)(ptr->data);
	return (int)(data->modifier.type);
}

void LineStyleColorModifier_DistanceFromCamera_name_get(PointerRNA *ptr, char *value)
{
	LineStyleColorModifier_DistanceFromCamera *data = (LineStyleColorModifier_DistanceFromCamera *)(ptr->data);
	BLI_strncpy_utf8(value, data->modifier.name, 64);
}

int LineStyleColorModifier_DistanceFromCamera_name_length(PointerRNA *ptr)
{
	LineStyleColorModifier_DistanceFromCamera *data = (LineStyleColorModifier_DistanceFromCamera *)(ptr->data);
	return strlen(data->modifier.name);
}

void LineStyleColorModifier_DistanceFromCamera_name_set(PointerRNA *ptr, const char *value)
{
	rna_LineStyleColorModifier_name_set(ptr, value);
}

int LineStyleColorModifier_DistanceFromCamera_blend_get(PointerRNA *ptr)
{
	LineStyleColorModifier_DistanceFromCamera *data = (LineStyleColorModifier_DistanceFromCamera *)(ptr->data);
	return (int)(data->modifier.blend);
}

void LineStyleColorModifier_DistanceFromCamera_blend_set(PointerRNA *ptr, int value)
{
	LineStyleColorModifier_DistanceFromCamera *data = (LineStyleColorModifier_DistanceFromCamera *)(ptr->data);
	data->modifier.blend = value;
}

float LineStyleColorModifier_DistanceFromCamera_influence_get(PointerRNA *ptr)
{
	LineStyleColorModifier_DistanceFromCamera *data = (LineStyleColorModifier_DistanceFromCamera *)(ptr->data);
	return (float)(data->modifier.influence);
}

void LineStyleColorModifier_DistanceFromCamera_influence_set(PointerRNA *ptr, float value)
{
	LineStyleColorModifier_DistanceFromCamera *data = (LineStyleColorModifier_DistanceFromCamera *)(ptr->data);
	data->modifier.influence = CLAMPIS(value, 0.0f, 1.0f);
}

int LineStyleColorModifier_DistanceFromCamera_use_get(PointerRNA *ptr)
{
	LineStyleColorModifier_DistanceFromCamera *data = (LineStyleColorModifier_DistanceFromCamera *)(ptr->data);
	return (((data->modifier.flags) & 1) != 0);
}

void LineStyleColorModifier_DistanceFromCamera_use_set(PointerRNA *ptr, int value)
{
	LineStyleColorModifier_DistanceFromCamera *data = (LineStyleColorModifier_DistanceFromCamera *)(ptr->data);
	if (value) data->modifier.flags |= 1;
	else data->modifier.flags &= ~1;
}

int LineStyleColorModifier_DistanceFromCamera_expanded_get(PointerRNA *ptr)
{
	LineStyleColorModifier_DistanceFromCamera *data = (LineStyleColorModifier_DistanceFromCamera *)(ptr->data);
	return (((data->modifier.flags) & 2) != 0);
}

void LineStyleColorModifier_DistanceFromCamera_expanded_set(PointerRNA *ptr, int value)
{
	LineStyleColorModifier_DistanceFromCamera *data = (LineStyleColorModifier_DistanceFromCamera *)(ptr->data);
	if (value) data->modifier.flags |= 2;
	else data->modifier.flags &= ~2;
}

PointerRNA LineStyleColorModifier_DistanceFromCamera_color_ramp_get(PointerRNA *ptr)
{
	LineStyleColorModifier_DistanceFromCamera *data = (LineStyleColorModifier_DistanceFromCamera *)(ptr->data);
	return rna_pointer_inherit_refine(ptr, &RNA_ColorRamp, data->color_ramp);
}

float LineStyleColorModifier_DistanceFromCamera_range_min_get(PointerRNA *ptr)
{
	LineStyleColorModifier_DistanceFromCamera *data = (LineStyleColorModifier_DistanceFromCamera *)(ptr->data);
	return (float)(data->range_min);
}

void LineStyleColorModifier_DistanceFromCamera_range_min_set(PointerRNA *ptr, float value)
{
	LineStyleColorModifier_DistanceFromCamera *data = (LineStyleColorModifier_DistanceFromCamera *)(ptr->data);
	data->range_min = value;
}

float LineStyleColorModifier_DistanceFromCamera_range_max_get(PointerRNA *ptr)
{
	LineStyleColorModifier_DistanceFromCamera *data = (LineStyleColorModifier_DistanceFromCamera *)(ptr->data);
	return (float)(data->range_max);
}

void LineStyleColorModifier_DistanceFromCamera_range_max_set(PointerRNA *ptr, float value)
{
	LineStyleColorModifier_DistanceFromCamera *data = (LineStyleColorModifier_DistanceFromCamera *)(ptr->data);
	data->range_max = value;
}

int LineStyleColorModifier_DistanceFromObject_type_get(PointerRNA *ptr)
{
	LineStyleColorModifier_DistanceFromObject *data = (LineStyleColorModifier_DistanceFromObject *)(ptr->data);
	return (int)(data->modifier.type);
}

void LineStyleColorModifier_DistanceFromObject_name_get(PointerRNA *ptr, char *value)
{
	LineStyleColorModifier_DistanceFromObject *data = (LineStyleColorModifier_DistanceFromObject *)(ptr->data);
	BLI_strncpy_utf8(value, data->modifier.name, 64);
}

int LineStyleColorModifier_DistanceFromObject_name_length(PointerRNA *ptr)
{
	LineStyleColorModifier_DistanceFromObject *data = (LineStyleColorModifier_DistanceFromObject *)(ptr->data);
	return strlen(data->modifier.name);
}

void LineStyleColorModifier_DistanceFromObject_name_set(PointerRNA *ptr, const char *value)
{
	rna_LineStyleColorModifier_name_set(ptr, value);
}

int LineStyleColorModifier_DistanceFromObject_blend_get(PointerRNA *ptr)
{
	LineStyleColorModifier_DistanceFromObject *data = (LineStyleColorModifier_DistanceFromObject *)(ptr->data);
	return (int)(data->modifier.blend);
}

void LineStyleColorModifier_DistanceFromObject_blend_set(PointerRNA *ptr, int value)
{
	LineStyleColorModifier_DistanceFromObject *data = (LineStyleColorModifier_DistanceFromObject *)(ptr->data);
	data->modifier.blend = value;
}

float LineStyleColorModifier_DistanceFromObject_influence_get(PointerRNA *ptr)
{
	LineStyleColorModifier_DistanceFromObject *data = (LineStyleColorModifier_DistanceFromObject *)(ptr->data);
	return (float)(data->modifier.influence);
}

void LineStyleColorModifier_DistanceFromObject_influence_set(PointerRNA *ptr, float value)
{
	LineStyleColorModifier_DistanceFromObject *data = (LineStyleColorModifier_DistanceFromObject *)(ptr->data);
	data->modifier.influence = CLAMPIS(value, 0.0f, 1.0f);
}

int LineStyleColorModifier_DistanceFromObject_use_get(PointerRNA *ptr)
{
	LineStyleColorModifier_DistanceFromObject *data = (LineStyleColorModifier_DistanceFromObject *)(ptr->data);
	return (((data->modifier.flags) & 1) != 0);
}

void LineStyleColorModifier_DistanceFromObject_use_set(PointerRNA *ptr, int value)
{
	LineStyleColorModifier_DistanceFromObject *data = (LineStyleColorModifier_DistanceFromObject *)(ptr->data);
	if (value) data->modifier.flags |= 1;
	else data->modifier.flags &= ~1;
}

int LineStyleColorModifier_DistanceFromObject_expanded_get(PointerRNA *ptr)
{
	LineStyleColorModifier_DistanceFromObject *data = (LineStyleColorModifier_DistanceFromObject *)(ptr->data);
	return (((data->modifier.flags) & 2) != 0);
}

void LineStyleColorModifier_DistanceFromObject_expanded_set(PointerRNA *ptr, int value)
{
	LineStyleColorModifier_DistanceFromObject *data = (LineStyleColorModifier_DistanceFromObject *)(ptr->data);
	if (value) data->modifier.flags |= 2;
	else data->modifier.flags &= ~2;
}

PointerRNA LineStyleColorModifier_DistanceFromObject_color_ramp_get(PointerRNA *ptr)
{
	LineStyleColorModifier_DistanceFromObject *data = (LineStyleColorModifier_DistanceFromObject *)(ptr->data);
	return rna_pointer_inherit_refine(ptr, &RNA_ColorRamp, data->color_ramp);
}

float LineStyleColorModifier_DistanceFromObject_range_min_get(PointerRNA *ptr)
{
	LineStyleColorModifier_DistanceFromObject *data = (LineStyleColorModifier_DistanceFromObject *)(ptr->data);
	return (float)(data->range_min);
}

void LineStyleColorModifier_DistanceFromObject_range_min_set(PointerRNA *ptr, float value)
{
	LineStyleColorModifier_DistanceFromObject *data = (LineStyleColorModifier_DistanceFromObject *)(ptr->data);
	data->range_min = value;
}

float LineStyleColorModifier_DistanceFromObject_range_max_get(PointerRNA *ptr)
{
	LineStyleColorModifier_DistanceFromObject *data = (LineStyleColorModifier_DistanceFromObject *)(ptr->data);
	return (float)(data->range_max);
}

void LineStyleColorModifier_DistanceFromObject_range_max_set(PointerRNA *ptr, float value)
{
	LineStyleColorModifier_DistanceFromObject *data = (LineStyleColorModifier_DistanceFromObject *)(ptr->data);
	data->range_max = value;
}

PointerRNA LineStyleColorModifier_DistanceFromObject_target_get(PointerRNA *ptr)
{
	LineStyleColorModifier_DistanceFromObject *data = (LineStyleColorModifier_DistanceFromObject *)(ptr->data);
	return rna_pointer_inherit_refine(ptr, &RNA_Object, data->target);
}

void LineStyleColorModifier_DistanceFromObject_target_set(PointerRNA *ptr, PointerRNA value)
{
	LineStyleColorModifier_DistanceFromObject *data = (LineStyleColorModifier_DistanceFromObject *)(ptr->data);
	if (value.data)
		id_lib_extern((ID *)value.data);

	data->target = value.data;
}

int LineStyleColorModifier_Material_type_get(PointerRNA *ptr)
{
	LineStyleColorModifier_Material *data = (LineStyleColorModifier_Material *)(ptr->data);
	return (int)(data->modifier.type);
}

void LineStyleColorModifier_Material_name_get(PointerRNA *ptr, char *value)
{
	LineStyleColorModifier_Material *data = (LineStyleColorModifier_Material *)(ptr->data);
	BLI_strncpy_utf8(value, data->modifier.name, 64);
}

int LineStyleColorModifier_Material_name_length(PointerRNA *ptr)
{
	LineStyleColorModifier_Material *data = (LineStyleColorModifier_Material *)(ptr->data);
	return strlen(data->modifier.name);
}

void LineStyleColorModifier_Material_name_set(PointerRNA *ptr, const char *value)
{
	rna_LineStyleColorModifier_name_set(ptr, value);
}

int LineStyleColorModifier_Material_blend_get(PointerRNA *ptr)
{
	LineStyleColorModifier_Material *data = (LineStyleColorModifier_Material *)(ptr->data);
	return (int)(data->modifier.blend);
}

void LineStyleColorModifier_Material_blend_set(PointerRNA *ptr, int value)
{
	LineStyleColorModifier_Material *data = (LineStyleColorModifier_Material *)(ptr->data);
	data->modifier.blend = value;
}

float LineStyleColorModifier_Material_influence_get(PointerRNA *ptr)
{
	LineStyleColorModifier_Material *data = (LineStyleColorModifier_Material *)(ptr->data);
	return (float)(data->modifier.influence);
}

void LineStyleColorModifier_Material_influence_set(PointerRNA *ptr, float value)
{
	LineStyleColorModifier_Material *data = (LineStyleColorModifier_Material *)(ptr->data);
	data->modifier.influence = CLAMPIS(value, 0.0f, 1.0f);
}

int LineStyleColorModifier_Material_use_get(PointerRNA *ptr)
{
	LineStyleColorModifier_Material *data = (LineStyleColorModifier_Material *)(ptr->data);
	return (((data->modifier.flags) & 1) != 0);
}

void LineStyleColorModifier_Material_use_set(PointerRNA *ptr, int value)
{
	LineStyleColorModifier_Material *data = (LineStyleColorModifier_Material *)(ptr->data);
	if (value) data->modifier.flags |= 1;
	else data->modifier.flags &= ~1;
}

int LineStyleColorModifier_Material_expanded_get(PointerRNA *ptr)
{
	LineStyleColorModifier_Material *data = (LineStyleColorModifier_Material *)(ptr->data);
	return (((data->modifier.flags) & 2) != 0);
}

void LineStyleColorModifier_Material_expanded_set(PointerRNA *ptr, int value)
{
	LineStyleColorModifier_Material *data = (LineStyleColorModifier_Material *)(ptr->data);
	if (value) data->modifier.flags |= 2;
	else data->modifier.flags &= ~2;
}

int LineStyleColorModifier_Material_material_attribute_get(PointerRNA *ptr)
{
	LineStyleColorModifier_Material *data = (LineStyleColorModifier_Material *)(ptr->data);
	return (int)(data->mat_attr);
}

void LineStyleColorModifier_Material_material_attribute_set(PointerRNA *ptr, int value)
{
	LineStyleColorModifier_Material *data = (LineStyleColorModifier_Material *)(ptr->data);
	data->mat_attr = value;
}

PointerRNA LineStyleColorModifier_Material_color_ramp_get(PointerRNA *ptr)
{
	LineStyleColorModifier_Material *data = (LineStyleColorModifier_Material *)(ptr->data);
	return rna_pointer_inherit_refine(ptr, &RNA_ColorRamp, data->color_ramp);
}

int LineStyleColorModifier_Material_use_ramp_get(PointerRNA *ptr)
{
	LineStyleColorModifier_Material *data = (LineStyleColorModifier_Material *)(ptr->data);
	return (((data->flags) & 1) != 0);
}

void LineStyleColorModifier_Material_use_ramp_set(PointerRNA *ptr, int value)
{
	LineStyleColorModifier_Material *data = (LineStyleColorModifier_Material *)(ptr->data);
	if (value) data->flags |= 1;
	else data->flags &= ~1;
}

int LineStyleAlphaModifier_AlongStroke_type_get(PointerRNA *ptr)
{
	LineStyleAlphaModifier_AlongStroke *data = (LineStyleAlphaModifier_AlongStroke *)(ptr->data);
	return (int)(data->modifier.type);
}

void LineStyleAlphaModifier_AlongStroke_name_get(PointerRNA *ptr, char *value)
{
	LineStyleAlphaModifier_AlongStroke *data = (LineStyleAlphaModifier_AlongStroke *)(ptr->data);
	BLI_strncpy_utf8(value, data->modifier.name, 64);
}

int LineStyleAlphaModifier_AlongStroke_name_length(PointerRNA *ptr)
{
	LineStyleAlphaModifier_AlongStroke *data = (LineStyleAlphaModifier_AlongStroke *)(ptr->data);
	return strlen(data->modifier.name);
}

void LineStyleAlphaModifier_AlongStroke_name_set(PointerRNA *ptr, const char *value)
{
	rna_LineStyleAlphaModifier_name_set(ptr, value);
}

int LineStyleAlphaModifier_AlongStroke_blend_get(PointerRNA *ptr)
{
	LineStyleAlphaModifier_AlongStroke *data = (LineStyleAlphaModifier_AlongStroke *)(ptr->data);
	return (int)(data->modifier.blend);
}

void LineStyleAlphaModifier_AlongStroke_blend_set(PointerRNA *ptr, int value)
{
	LineStyleAlphaModifier_AlongStroke *data = (LineStyleAlphaModifier_AlongStroke *)(ptr->data);
	data->modifier.blend = value;
}

float LineStyleAlphaModifier_AlongStroke_influence_get(PointerRNA *ptr)
{
	LineStyleAlphaModifier_AlongStroke *data = (LineStyleAlphaModifier_AlongStroke *)(ptr->data);
	return (float)(data->modifier.influence);
}

void LineStyleAlphaModifier_AlongStroke_influence_set(PointerRNA *ptr, float value)
{
	LineStyleAlphaModifier_AlongStroke *data = (LineStyleAlphaModifier_AlongStroke *)(ptr->data);
	data->modifier.influence = CLAMPIS(value, 0.0f, 1.0f);
}

int LineStyleAlphaModifier_AlongStroke_use_get(PointerRNA *ptr)
{
	LineStyleAlphaModifier_AlongStroke *data = (LineStyleAlphaModifier_AlongStroke *)(ptr->data);
	return (((data->modifier.flags) & 1) != 0);
}

void LineStyleAlphaModifier_AlongStroke_use_set(PointerRNA *ptr, int value)
{
	LineStyleAlphaModifier_AlongStroke *data = (LineStyleAlphaModifier_AlongStroke *)(ptr->data);
	if (value) data->modifier.flags |= 1;
	else data->modifier.flags &= ~1;
}

int LineStyleAlphaModifier_AlongStroke_expanded_get(PointerRNA *ptr)
{
	LineStyleAlphaModifier_AlongStroke *data = (LineStyleAlphaModifier_AlongStroke *)(ptr->data);
	return (((data->modifier.flags) & 2) != 0);
}

void LineStyleAlphaModifier_AlongStroke_expanded_set(PointerRNA *ptr, int value)
{
	LineStyleAlphaModifier_AlongStroke *data = (LineStyleAlphaModifier_AlongStroke *)(ptr->data);
	if (value) data->modifier.flags |= 2;
	else data->modifier.flags &= ~2;
}

int LineStyleAlphaModifier_AlongStroke_mapping_get(PointerRNA *ptr)
{
	LineStyleAlphaModifier_AlongStroke *data = (LineStyleAlphaModifier_AlongStroke *)(ptr->data);
	return ((data->flags) & 1);
}

void LineStyleAlphaModifier_AlongStroke_mapping_set(PointerRNA *ptr, int value)
{
	LineStyleAlphaModifier_AlongStroke *data = (LineStyleAlphaModifier_AlongStroke *)(ptr->data);
	data->flags &= ~1;
	data->flags |= value;
}

int LineStyleAlphaModifier_AlongStroke_invert_get(PointerRNA *ptr)
{
	LineStyleAlphaModifier_AlongStroke *data = (LineStyleAlphaModifier_AlongStroke *)(ptr->data);
	return (((data->flags) & 2) != 0);
}

void LineStyleAlphaModifier_AlongStroke_invert_set(PointerRNA *ptr, int value)
{
	LineStyleAlphaModifier_AlongStroke *data = (LineStyleAlphaModifier_AlongStroke *)(ptr->data);
	if (value) data->flags |= 2;
	else data->flags &= ~2;
}

PointerRNA LineStyleAlphaModifier_AlongStroke_curve_get(PointerRNA *ptr)
{
	LineStyleAlphaModifier_AlongStroke *data = (LineStyleAlphaModifier_AlongStroke *)(ptr->data);
	return rna_pointer_inherit_refine(ptr, &RNA_CurveMapping, data->curve);
}

int LineStyleAlphaModifier_DistanceFromCamera_type_get(PointerRNA *ptr)
{
	LineStyleAlphaModifier_DistanceFromCamera *data = (LineStyleAlphaModifier_DistanceFromCamera *)(ptr->data);
	return (int)(data->modifier.type);
}

void LineStyleAlphaModifier_DistanceFromCamera_name_get(PointerRNA *ptr, char *value)
{
	LineStyleAlphaModifier_DistanceFromCamera *data = (LineStyleAlphaModifier_DistanceFromCamera *)(ptr->data);
	BLI_strncpy_utf8(value, data->modifier.name, 64);
}

int LineStyleAlphaModifier_DistanceFromCamera_name_length(PointerRNA *ptr)
{
	LineStyleAlphaModifier_DistanceFromCamera *data = (LineStyleAlphaModifier_DistanceFromCamera *)(ptr->data);
	return strlen(data->modifier.name);
}

void LineStyleAlphaModifier_DistanceFromCamera_name_set(PointerRNA *ptr, const char *value)
{
	rna_LineStyleAlphaModifier_name_set(ptr, value);
}

int LineStyleAlphaModifier_DistanceFromCamera_blend_get(PointerRNA *ptr)
{
	LineStyleAlphaModifier_DistanceFromCamera *data = (LineStyleAlphaModifier_DistanceFromCamera *)(ptr->data);
	return (int)(data->modifier.blend);
}

void LineStyleAlphaModifier_DistanceFromCamera_blend_set(PointerRNA *ptr, int value)
{
	LineStyleAlphaModifier_DistanceFromCamera *data = (LineStyleAlphaModifier_DistanceFromCamera *)(ptr->data);
	data->modifier.blend = value;
}

float LineStyleAlphaModifier_DistanceFromCamera_influence_get(PointerRNA *ptr)
{
	LineStyleAlphaModifier_DistanceFromCamera *data = (LineStyleAlphaModifier_DistanceFromCamera *)(ptr->data);
	return (float)(data->modifier.influence);
}

void LineStyleAlphaModifier_DistanceFromCamera_influence_set(PointerRNA *ptr, float value)
{
	LineStyleAlphaModifier_DistanceFromCamera *data = (LineStyleAlphaModifier_DistanceFromCamera *)(ptr->data);
	data->modifier.influence = CLAMPIS(value, 0.0f, 1.0f);
}

int LineStyleAlphaModifier_DistanceFromCamera_use_get(PointerRNA *ptr)
{
	LineStyleAlphaModifier_DistanceFromCamera *data = (LineStyleAlphaModifier_DistanceFromCamera *)(ptr->data);
	return (((data->modifier.flags) & 1) != 0);
}

void LineStyleAlphaModifier_DistanceFromCamera_use_set(PointerRNA *ptr, int value)
{
	LineStyleAlphaModifier_DistanceFromCamera *data = (LineStyleAlphaModifier_DistanceFromCamera *)(ptr->data);
	if (value) data->modifier.flags |= 1;
	else data->modifier.flags &= ~1;
}

int LineStyleAlphaModifier_DistanceFromCamera_expanded_get(PointerRNA *ptr)
{
	LineStyleAlphaModifier_DistanceFromCamera *data = (LineStyleAlphaModifier_DistanceFromCamera *)(ptr->data);
	return (((data->modifier.flags) & 2) != 0);
}

void LineStyleAlphaModifier_DistanceFromCamera_expanded_set(PointerRNA *ptr, int value)
{
	LineStyleAlphaModifier_DistanceFromCamera *data = (LineStyleAlphaModifier_DistanceFromCamera *)(ptr->data);
	if (value) data->modifier.flags |= 2;
	else data->modifier.flags &= ~2;
}

int LineStyleAlphaModifier_DistanceFromCamera_mapping_get(PointerRNA *ptr)
{
	LineStyleAlphaModifier_DistanceFromCamera *data = (LineStyleAlphaModifier_DistanceFromCamera *)(ptr->data);
	return ((data->flags) & 1);
}

void LineStyleAlphaModifier_DistanceFromCamera_mapping_set(PointerRNA *ptr, int value)
{
	LineStyleAlphaModifier_DistanceFromCamera *data = (LineStyleAlphaModifier_DistanceFromCamera *)(ptr->data);
	data->flags &= ~1;
	data->flags |= value;
}

int LineStyleAlphaModifier_DistanceFromCamera_invert_get(PointerRNA *ptr)
{
	LineStyleAlphaModifier_DistanceFromCamera *data = (LineStyleAlphaModifier_DistanceFromCamera *)(ptr->data);
	return (((data->flags) & 2) != 0);
}

void LineStyleAlphaModifier_DistanceFromCamera_invert_set(PointerRNA *ptr, int value)
{
	LineStyleAlphaModifier_DistanceFromCamera *data = (LineStyleAlphaModifier_DistanceFromCamera *)(ptr->data);
	if (value) data->flags |= 2;
	else data->flags &= ~2;
}

PointerRNA LineStyleAlphaModifier_DistanceFromCamera_curve_get(PointerRNA *ptr)
{
	LineStyleAlphaModifier_DistanceFromCamera *data = (LineStyleAlphaModifier_DistanceFromCamera *)(ptr->data);
	return rna_pointer_inherit_refine(ptr, &RNA_CurveMapping, data->curve);
}

float LineStyleAlphaModifier_DistanceFromCamera_range_min_get(PointerRNA *ptr)
{
	LineStyleAlphaModifier_DistanceFromCamera *data = (LineStyleAlphaModifier_DistanceFromCamera *)(ptr->data);
	return (float)(data->range_min);
}

void LineStyleAlphaModifier_DistanceFromCamera_range_min_set(PointerRNA *ptr, float value)
{
	LineStyleAlphaModifier_DistanceFromCamera *data = (LineStyleAlphaModifier_DistanceFromCamera *)(ptr->data);
	data->range_min = value;
}

float LineStyleAlphaModifier_DistanceFromCamera_range_max_get(PointerRNA *ptr)
{
	LineStyleAlphaModifier_DistanceFromCamera *data = (LineStyleAlphaModifier_DistanceFromCamera *)(ptr->data);
	return (float)(data->range_max);
}

void LineStyleAlphaModifier_DistanceFromCamera_range_max_set(PointerRNA *ptr, float value)
{
	LineStyleAlphaModifier_DistanceFromCamera *data = (LineStyleAlphaModifier_DistanceFromCamera *)(ptr->data);
	data->range_max = value;
}

int LineStyleAlphaModifier_DistanceFromObject_type_get(PointerRNA *ptr)
{
	LineStyleAlphaModifier_DistanceFromObject *data = (LineStyleAlphaModifier_DistanceFromObject *)(ptr->data);
	return (int)(data->modifier.type);
}

void LineStyleAlphaModifier_DistanceFromObject_name_get(PointerRNA *ptr, char *value)
{
	LineStyleAlphaModifier_DistanceFromObject *data = (LineStyleAlphaModifier_DistanceFromObject *)(ptr->data);
	BLI_strncpy_utf8(value, data->modifier.name, 64);
}

int LineStyleAlphaModifier_DistanceFromObject_name_length(PointerRNA *ptr)
{
	LineStyleAlphaModifier_DistanceFromObject *data = (LineStyleAlphaModifier_DistanceFromObject *)(ptr->data);
	return strlen(data->modifier.name);
}

void LineStyleAlphaModifier_DistanceFromObject_name_set(PointerRNA *ptr, const char *value)
{
	rna_LineStyleAlphaModifier_name_set(ptr, value);
}

int LineStyleAlphaModifier_DistanceFromObject_blend_get(PointerRNA *ptr)
{
	LineStyleAlphaModifier_DistanceFromObject *data = (LineStyleAlphaModifier_DistanceFromObject *)(ptr->data);
	return (int)(data->modifier.blend);
}

void LineStyleAlphaModifier_DistanceFromObject_blend_set(PointerRNA *ptr, int value)
{
	LineStyleAlphaModifier_DistanceFromObject *data = (LineStyleAlphaModifier_DistanceFromObject *)(ptr->data);
	data->modifier.blend = value;
}

float LineStyleAlphaModifier_DistanceFromObject_influence_get(PointerRNA *ptr)
{
	LineStyleAlphaModifier_DistanceFromObject *data = (LineStyleAlphaModifier_DistanceFromObject *)(ptr->data);
	return (float)(data->modifier.influence);
}

void LineStyleAlphaModifier_DistanceFromObject_influence_set(PointerRNA *ptr, float value)
{
	LineStyleAlphaModifier_DistanceFromObject *data = (LineStyleAlphaModifier_DistanceFromObject *)(ptr->data);
	data->modifier.influence = CLAMPIS(value, 0.0f, 1.0f);
}

int LineStyleAlphaModifier_DistanceFromObject_use_get(PointerRNA *ptr)
{
	LineStyleAlphaModifier_DistanceFromObject *data = (LineStyleAlphaModifier_DistanceFromObject *)(ptr->data);
	return (((data->modifier.flags) & 1) != 0);
}

void LineStyleAlphaModifier_DistanceFromObject_use_set(PointerRNA *ptr, int value)
{
	LineStyleAlphaModifier_DistanceFromObject *data = (LineStyleAlphaModifier_DistanceFromObject *)(ptr->data);
	if (value) data->modifier.flags |= 1;
	else data->modifier.flags &= ~1;
}

int LineStyleAlphaModifier_DistanceFromObject_expanded_get(PointerRNA *ptr)
{
	LineStyleAlphaModifier_DistanceFromObject *data = (LineStyleAlphaModifier_DistanceFromObject *)(ptr->data);
	return (((data->modifier.flags) & 2) != 0);
}

void LineStyleAlphaModifier_DistanceFromObject_expanded_set(PointerRNA *ptr, int value)
{
	LineStyleAlphaModifier_DistanceFromObject *data = (LineStyleAlphaModifier_DistanceFromObject *)(ptr->data);
	if (value) data->modifier.flags |= 2;
	else data->modifier.flags &= ~2;
}

int LineStyleAlphaModifier_DistanceFromObject_mapping_get(PointerRNA *ptr)
{
	LineStyleAlphaModifier_DistanceFromObject *data = (LineStyleAlphaModifier_DistanceFromObject *)(ptr->data);
	return ((data->flags) & 1);
}

void LineStyleAlphaModifier_DistanceFromObject_mapping_set(PointerRNA *ptr, int value)
{
	LineStyleAlphaModifier_DistanceFromObject *data = (LineStyleAlphaModifier_DistanceFromObject *)(ptr->data);
	data->flags &= ~1;
	data->flags |= value;
}

int LineStyleAlphaModifier_DistanceFromObject_invert_get(PointerRNA *ptr)
{
	LineStyleAlphaModifier_DistanceFromObject *data = (LineStyleAlphaModifier_DistanceFromObject *)(ptr->data);
	return (((data->flags) & 2) != 0);
}

void LineStyleAlphaModifier_DistanceFromObject_invert_set(PointerRNA *ptr, int value)
{
	LineStyleAlphaModifier_DistanceFromObject *data = (LineStyleAlphaModifier_DistanceFromObject *)(ptr->data);
	if (value) data->flags |= 2;
	else data->flags &= ~2;
}

PointerRNA LineStyleAlphaModifier_DistanceFromObject_curve_get(PointerRNA *ptr)
{
	LineStyleAlphaModifier_DistanceFromObject *data = (LineStyleAlphaModifier_DistanceFromObject *)(ptr->data);
	return rna_pointer_inherit_refine(ptr, &RNA_CurveMapping, data->curve);
}

float LineStyleAlphaModifier_DistanceFromObject_range_min_get(PointerRNA *ptr)
{
	LineStyleAlphaModifier_DistanceFromObject *data = (LineStyleAlphaModifier_DistanceFromObject *)(ptr->data);
	return (float)(data->range_min);
}

void LineStyleAlphaModifier_DistanceFromObject_range_min_set(PointerRNA *ptr, float value)
{
	LineStyleAlphaModifier_DistanceFromObject *data = (LineStyleAlphaModifier_DistanceFromObject *)(ptr->data);
	data->range_min = value;
}

float LineStyleAlphaModifier_DistanceFromObject_range_max_get(PointerRNA *ptr)
{
	LineStyleAlphaModifier_DistanceFromObject *data = (LineStyleAlphaModifier_DistanceFromObject *)(ptr->data);
	return (float)(data->range_max);
}

void LineStyleAlphaModifier_DistanceFromObject_range_max_set(PointerRNA *ptr, float value)
{
	LineStyleAlphaModifier_DistanceFromObject *data = (LineStyleAlphaModifier_DistanceFromObject *)(ptr->data);
	data->range_max = value;
}

PointerRNA LineStyleAlphaModifier_DistanceFromObject_target_get(PointerRNA *ptr)
{
	LineStyleAlphaModifier_DistanceFromObject *data = (LineStyleAlphaModifier_DistanceFromObject *)(ptr->data);
	return rna_pointer_inherit_refine(ptr, &RNA_Object, data->target);
}

void LineStyleAlphaModifier_DistanceFromObject_target_set(PointerRNA *ptr, PointerRNA value)
{
	LineStyleAlphaModifier_DistanceFromObject *data = (LineStyleAlphaModifier_DistanceFromObject *)(ptr->data);
	if (value.data)
		id_lib_extern((ID *)value.data);

	data->target = value.data;
}

int LineStyleAlphaModifier_Material_type_get(PointerRNA *ptr)
{
	LineStyleAlphaModifier_Material *data = (LineStyleAlphaModifier_Material *)(ptr->data);
	return (int)(data->modifier.type);
}

void LineStyleAlphaModifier_Material_name_get(PointerRNA *ptr, char *value)
{
	LineStyleAlphaModifier_Material *data = (LineStyleAlphaModifier_Material *)(ptr->data);
	BLI_strncpy_utf8(value, data->modifier.name, 64);
}

int LineStyleAlphaModifier_Material_name_length(PointerRNA *ptr)
{
	LineStyleAlphaModifier_Material *data = (LineStyleAlphaModifier_Material *)(ptr->data);
	return strlen(data->modifier.name);
}

void LineStyleAlphaModifier_Material_name_set(PointerRNA *ptr, const char *value)
{
	rna_LineStyleAlphaModifier_name_set(ptr, value);
}

int LineStyleAlphaModifier_Material_blend_get(PointerRNA *ptr)
{
	LineStyleAlphaModifier_Material *data = (LineStyleAlphaModifier_Material *)(ptr->data);
	return (int)(data->modifier.blend);
}

void LineStyleAlphaModifier_Material_blend_set(PointerRNA *ptr, int value)
{
	LineStyleAlphaModifier_Material *data = (LineStyleAlphaModifier_Material *)(ptr->data);
	data->modifier.blend = value;
}

float LineStyleAlphaModifier_Material_influence_get(PointerRNA *ptr)
{
	LineStyleAlphaModifier_Material *data = (LineStyleAlphaModifier_Material *)(ptr->data);
	return (float)(data->modifier.influence);
}

void LineStyleAlphaModifier_Material_influence_set(PointerRNA *ptr, float value)
{
	LineStyleAlphaModifier_Material *data = (LineStyleAlphaModifier_Material *)(ptr->data);
	data->modifier.influence = CLAMPIS(value, 0.0f, 1.0f);
}

int LineStyleAlphaModifier_Material_use_get(PointerRNA *ptr)
{
	LineStyleAlphaModifier_Material *data = (LineStyleAlphaModifier_Material *)(ptr->data);
	return (((data->modifier.flags) & 1) != 0);
}

void LineStyleAlphaModifier_Material_use_set(PointerRNA *ptr, int value)
{
	LineStyleAlphaModifier_Material *data = (LineStyleAlphaModifier_Material *)(ptr->data);
	if (value) data->modifier.flags |= 1;
	else data->modifier.flags &= ~1;
}

int LineStyleAlphaModifier_Material_expanded_get(PointerRNA *ptr)
{
	LineStyleAlphaModifier_Material *data = (LineStyleAlphaModifier_Material *)(ptr->data);
	return (((data->modifier.flags) & 2) != 0);
}

void LineStyleAlphaModifier_Material_expanded_set(PointerRNA *ptr, int value)
{
	LineStyleAlphaModifier_Material *data = (LineStyleAlphaModifier_Material *)(ptr->data);
	if (value) data->modifier.flags |= 2;
	else data->modifier.flags &= ~2;
}

int LineStyleAlphaModifier_Material_material_attribute_get(PointerRNA *ptr)
{
	LineStyleAlphaModifier_Material *data = (LineStyleAlphaModifier_Material *)(ptr->data);
	return (int)(data->mat_attr);
}

void LineStyleAlphaModifier_Material_material_attribute_set(PointerRNA *ptr, int value)
{
	LineStyleAlphaModifier_Material *data = (LineStyleAlphaModifier_Material *)(ptr->data);
	data->mat_attr = value;
}

int LineStyleAlphaModifier_Material_mapping_get(PointerRNA *ptr)
{
	LineStyleAlphaModifier_Material *data = (LineStyleAlphaModifier_Material *)(ptr->data);
	return ((data->flags) & 1);
}

void LineStyleAlphaModifier_Material_mapping_set(PointerRNA *ptr, int value)
{
	LineStyleAlphaModifier_Material *data = (LineStyleAlphaModifier_Material *)(ptr->data);
	data->flags &= ~1;
	data->flags |= value;
}

int LineStyleAlphaModifier_Material_invert_get(PointerRNA *ptr)
{
	LineStyleAlphaModifier_Material *data = (LineStyleAlphaModifier_Material *)(ptr->data);
	return (((data->flags) & 2) != 0);
}

void LineStyleAlphaModifier_Material_invert_set(PointerRNA *ptr, int value)
{
	LineStyleAlphaModifier_Material *data = (LineStyleAlphaModifier_Material *)(ptr->data);
	if (value) data->flags |= 2;
	else data->flags &= ~2;
}

PointerRNA LineStyleAlphaModifier_Material_curve_get(PointerRNA *ptr)
{
	LineStyleAlphaModifier_Material *data = (LineStyleAlphaModifier_Material *)(ptr->data);
	return rna_pointer_inherit_refine(ptr, &RNA_CurveMapping, data->curve);
}

int LineStyleThicknessModifier_AlongStroke_type_get(PointerRNA *ptr)
{
	LineStyleThicknessModifier_AlongStroke *data = (LineStyleThicknessModifier_AlongStroke *)(ptr->data);
	return (int)(data->modifier.type);
}

void LineStyleThicknessModifier_AlongStroke_name_get(PointerRNA *ptr, char *value)
{
	LineStyleThicknessModifier_AlongStroke *data = (LineStyleThicknessModifier_AlongStroke *)(ptr->data);
	BLI_strncpy_utf8(value, data->modifier.name, 64);
}

int LineStyleThicknessModifier_AlongStroke_name_length(PointerRNA *ptr)
{
	LineStyleThicknessModifier_AlongStroke *data = (LineStyleThicknessModifier_AlongStroke *)(ptr->data);
	return strlen(data->modifier.name);
}

void LineStyleThicknessModifier_AlongStroke_name_set(PointerRNA *ptr, const char *value)
{
	rna_LineStyleThicknessModifier_name_set(ptr, value);
}

int LineStyleThicknessModifier_AlongStroke_blend_get(PointerRNA *ptr)
{
	LineStyleThicknessModifier_AlongStroke *data = (LineStyleThicknessModifier_AlongStroke *)(ptr->data);
	return (int)(data->modifier.blend);
}

void LineStyleThicknessModifier_AlongStroke_blend_set(PointerRNA *ptr, int value)
{
	LineStyleThicknessModifier_AlongStroke *data = (LineStyleThicknessModifier_AlongStroke *)(ptr->data);
	data->modifier.blend = value;
}

float LineStyleThicknessModifier_AlongStroke_influence_get(PointerRNA *ptr)
{
	LineStyleThicknessModifier_AlongStroke *data = (LineStyleThicknessModifier_AlongStroke *)(ptr->data);
	return (float)(data->modifier.influence);
}

void LineStyleThicknessModifier_AlongStroke_influence_set(PointerRNA *ptr, float value)
{
	LineStyleThicknessModifier_AlongStroke *data = (LineStyleThicknessModifier_AlongStroke *)(ptr->data);
	data->modifier.influence = CLAMPIS(value, 0.0f, 1.0f);
}

int LineStyleThicknessModifier_AlongStroke_use_get(PointerRNA *ptr)
{
	LineStyleThicknessModifier_AlongStroke *data = (LineStyleThicknessModifier_AlongStroke *)(ptr->data);
	return (((data->modifier.flags) & 1) != 0);
}

void LineStyleThicknessModifier_AlongStroke_use_set(PointerRNA *ptr, int value)
{
	LineStyleThicknessModifier_AlongStroke *data = (LineStyleThicknessModifier_AlongStroke *)(ptr->data);
	if (value) data->modifier.flags |= 1;
	else data->modifier.flags &= ~1;
}

int LineStyleThicknessModifier_AlongStroke_expanded_get(PointerRNA *ptr)
{
	LineStyleThicknessModifier_AlongStroke *data = (LineStyleThicknessModifier_AlongStroke *)(ptr->data);
	return (((data->modifier.flags) & 2) != 0);
}

void LineStyleThicknessModifier_AlongStroke_expanded_set(PointerRNA *ptr, int value)
{
	LineStyleThicknessModifier_AlongStroke *data = (LineStyleThicknessModifier_AlongStroke *)(ptr->data);
	if (value) data->modifier.flags |= 2;
	else data->modifier.flags &= ~2;
}

int LineStyleThicknessModifier_AlongStroke_mapping_get(PointerRNA *ptr)
{
	LineStyleThicknessModifier_AlongStroke *data = (LineStyleThicknessModifier_AlongStroke *)(ptr->data);
	return ((data->flags) & 1);
}

void LineStyleThicknessModifier_AlongStroke_mapping_set(PointerRNA *ptr, int value)
{
	LineStyleThicknessModifier_AlongStroke *data = (LineStyleThicknessModifier_AlongStroke *)(ptr->data);
	data->flags &= ~1;
	data->flags |= value;
}

int LineStyleThicknessModifier_AlongStroke_invert_get(PointerRNA *ptr)
{
	LineStyleThicknessModifier_AlongStroke *data = (LineStyleThicknessModifier_AlongStroke *)(ptr->data);
	return (((data->flags) & 2) != 0);
}

void LineStyleThicknessModifier_AlongStroke_invert_set(PointerRNA *ptr, int value)
{
	LineStyleThicknessModifier_AlongStroke *data = (LineStyleThicknessModifier_AlongStroke *)(ptr->data);
	if (value) data->flags |= 2;
	else data->flags &= ~2;
}

PointerRNA LineStyleThicknessModifier_AlongStroke_curve_get(PointerRNA *ptr)
{
	LineStyleThicknessModifier_AlongStroke *data = (LineStyleThicknessModifier_AlongStroke *)(ptr->data);
	return rna_pointer_inherit_refine(ptr, &RNA_CurveMapping, data->curve);
}

float LineStyleThicknessModifier_AlongStroke_value_min_get(PointerRNA *ptr)
{
	LineStyleThicknessModifier_AlongStroke *data = (LineStyleThicknessModifier_AlongStroke *)(ptr->data);
	return (float)(data->value_min);
}

void LineStyleThicknessModifier_AlongStroke_value_min_set(PointerRNA *ptr, float value)
{
	LineStyleThicknessModifier_AlongStroke *data = (LineStyleThicknessModifier_AlongStroke *)(ptr->data);
	data->value_min = value;
}

float LineStyleThicknessModifier_AlongStroke_value_max_get(PointerRNA *ptr)
{
	LineStyleThicknessModifier_AlongStroke *data = (LineStyleThicknessModifier_AlongStroke *)(ptr->data);
	return (float)(data->value_max);
}

void LineStyleThicknessModifier_AlongStroke_value_max_set(PointerRNA *ptr, float value)
{
	LineStyleThicknessModifier_AlongStroke *data = (LineStyleThicknessModifier_AlongStroke *)(ptr->data);
	data->value_max = value;
}

int LineStyleThicknessModifier_DistanceFromCamera_type_get(PointerRNA *ptr)
{
	LineStyleThicknessModifier_DistanceFromCamera *data = (LineStyleThicknessModifier_DistanceFromCamera *)(ptr->data);
	return (int)(data->modifier.type);
}

void LineStyleThicknessModifier_DistanceFromCamera_name_get(PointerRNA *ptr, char *value)
{
	LineStyleThicknessModifier_DistanceFromCamera *data = (LineStyleThicknessModifier_DistanceFromCamera *)(ptr->data);
	BLI_strncpy_utf8(value, data->modifier.name, 64);
}

int LineStyleThicknessModifier_DistanceFromCamera_name_length(PointerRNA *ptr)
{
	LineStyleThicknessModifier_DistanceFromCamera *data = (LineStyleThicknessModifier_DistanceFromCamera *)(ptr->data);
	return strlen(data->modifier.name);
}

void LineStyleThicknessModifier_DistanceFromCamera_name_set(PointerRNA *ptr, const char *value)
{
	rna_LineStyleThicknessModifier_name_set(ptr, value);
}

int LineStyleThicknessModifier_DistanceFromCamera_blend_get(PointerRNA *ptr)
{
	LineStyleThicknessModifier_DistanceFromCamera *data = (LineStyleThicknessModifier_DistanceFromCamera *)(ptr->data);
	return (int)(data->modifier.blend);
}

void LineStyleThicknessModifier_DistanceFromCamera_blend_set(PointerRNA *ptr, int value)
{
	LineStyleThicknessModifier_DistanceFromCamera *data = (LineStyleThicknessModifier_DistanceFromCamera *)(ptr->data);
	data->modifier.blend = value;
}

float LineStyleThicknessModifier_DistanceFromCamera_influence_get(PointerRNA *ptr)
{
	LineStyleThicknessModifier_DistanceFromCamera *data = (LineStyleThicknessModifier_DistanceFromCamera *)(ptr->data);
	return (float)(data->modifier.influence);
}

void LineStyleThicknessModifier_DistanceFromCamera_influence_set(PointerRNA *ptr, float value)
{
	LineStyleThicknessModifier_DistanceFromCamera *data = (LineStyleThicknessModifier_DistanceFromCamera *)(ptr->data);
	data->modifier.influence = CLAMPIS(value, 0.0f, 1.0f);
}

int LineStyleThicknessModifier_DistanceFromCamera_use_get(PointerRNA *ptr)
{
	LineStyleThicknessModifier_DistanceFromCamera *data = (LineStyleThicknessModifier_DistanceFromCamera *)(ptr->data);
	return (((data->modifier.flags) & 1) != 0);
}

void LineStyleThicknessModifier_DistanceFromCamera_use_set(PointerRNA *ptr, int value)
{
	LineStyleThicknessModifier_DistanceFromCamera *data = (LineStyleThicknessModifier_DistanceFromCamera *)(ptr->data);
	if (value) data->modifier.flags |= 1;
	else data->modifier.flags &= ~1;
}

int LineStyleThicknessModifier_DistanceFromCamera_expanded_get(PointerRNA *ptr)
{
	LineStyleThicknessModifier_DistanceFromCamera *data = (LineStyleThicknessModifier_DistanceFromCamera *)(ptr->data);
	return (((data->modifier.flags) & 2) != 0);
}

void LineStyleThicknessModifier_DistanceFromCamera_expanded_set(PointerRNA *ptr, int value)
{
	LineStyleThicknessModifier_DistanceFromCamera *data = (LineStyleThicknessModifier_DistanceFromCamera *)(ptr->data);
	if (value) data->modifier.flags |= 2;
	else data->modifier.flags &= ~2;
}

int LineStyleThicknessModifier_DistanceFromCamera_mapping_get(PointerRNA *ptr)
{
	LineStyleThicknessModifier_DistanceFromCamera *data = (LineStyleThicknessModifier_DistanceFromCamera *)(ptr->data);
	return ((data->flags) & 1);
}

void LineStyleThicknessModifier_DistanceFromCamera_mapping_set(PointerRNA *ptr, int value)
{
	LineStyleThicknessModifier_DistanceFromCamera *data = (LineStyleThicknessModifier_DistanceFromCamera *)(ptr->data);
	data->flags &= ~1;
	data->flags |= value;
}

int LineStyleThicknessModifier_DistanceFromCamera_invert_get(PointerRNA *ptr)
{
	LineStyleThicknessModifier_DistanceFromCamera *data = (LineStyleThicknessModifier_DistanceFromCamera *)(ptr->data);
	return (((data->flags) & 2) != 0);
}

void LineStyleThicknessModifier_DistanceFromCamera_invert_set(PointerRNA *ptr, int value)
{
	LineStyleThicknessModifier_DistanceFromCamera *data = (LineStyleThicknessModifier_DistanceFromCamera *)(ptr->data);
	if (value) data->flags |= 2;
	else data->flags &= ~2;
}

PointerRNA LineStyleThicknessModifier_DistanceFromCamera_curve_get(PointerRNA *ptr)
{
	LineStyleThicknessModifier_DistanceFromCamera *data = (LineStyleThicknessModifier_DistanceFromCamera *)(ptr->data);
	return rna_pointer_inherit_refine(ptr, &RNA_CurveMapping, data->curve);
}

float LineStyleThicknessModifier_DistanceFromCamera_range_min_get(PointerRNA *ptr)
{
	LineStyleThicknessModifier_DistanceFromCamera *data = (LineStyleThicknessModifier_DistanceFromCamera *)(ptr->data);
	return (float)(data->range_min);
}

void LineStyleThicknessModifier_DistanceFromCamera_range_min_set(PointerRNA *ptr, float value)
{
	LineStyleThicknessModifier_DistanceFromCamera *data = (LineStyleThicknessModifier_DistanceFromCamera *)(ptr->data);
	data->range_min = value;
}

float LineStyleThicknessModifier_DistanceFromCamera_range_max_get(PointerRNA *ptr)
{
	LineStyleThicknessModifier_DistanceFromCamera *data = (LineStyleThicknessModifier_DistanceFromCamera *)(ptr->data);
	return (float)(data->range_max);
}

void LineStyleThicknessModifier_DistanceFromCamera_range_max_set(PointerRNA *ptr, float value)
{
	LineStyleThicknessModifier_DistanceFromCamera *data = (LineStyleThicknessModifier_DistanceFromCamera *)(ptr->data);
	data->range_max = value;
}

float LineStyleThicknessModifier_DistanceFromCamera_value_min_get(PointerRNA *ptr)
{
	LineStyleThicknessModifier_DistanceFromCamera *data = (LineStyleThicknessModifier_DistanceFromCamera *)(ptr->data);
	return (float)(data->value_min);
}

void LineStyleThicknessModifier_DistanceFromCamera_value_min_set(PointerRNA *ptr, float value)
{
	LineStyleThicknessModifier_DistanceFromCamera *data = (LineStyleThicknessModifier_DistanceFromCamera *)(ptr->data);
	data->value_min = value;
}

float LineStyleThicknessModifier_DistanceFromCamera_value_max_get(PointerRNA *ptr)
{
	LineStyleThicknessModifier_DistanceFromCamera *data = (LineStyleThicknessModifier_DistanceFromCamera *)(ptr->data);
	return (float)(data->value_max);
}

void LineStyleThicknessModifier_DistanceFromCamera_value_max_set(PointerRNA *ptr, float value)
{
	LineStyleThicknessModifier_DistanceFromCamera *data = (LineStyleThicknessModifier_DistanceFromCamera *)(ptr->data);
	data->value_max = value;
}

int LineStyleThicknessModifier_DistanceFromObject_type_get(PointerRNA *ptr)
{
	LineStyleThicknessModifier_DistanceFromObject *data = (LineStyleThicknessModifier_DistanceFromObject *)(ptr->data);
	return (int)(data->modifier.type);
}

void LineStyleThicknessModifier_DistanceFromObject_name_get(PointerRNA *ptr, char *value)
{
	LineStyleThicknessModifier_DistanceFromObject *data = (LineStyleThicknessModifier_DistanceFromObject *)(ptr->data);
	BLI_strncpy_utf8(value, data->modifier.name, 64);
}

int LineStyleThicknessModifier_DistanceFromObject_name_length(PointerRNA *ptr)
{
	LineStyleThicknessModifier_DistanceFromObject *data = (LineStyleThicknessModifier_DistanceFromObject *)(ptr->data);
	return strlen(data->modifier.name);
}

void LineStyleThicknessModifier_DistanceFromObject_name_set(PointerRNA *ptr, const char *value)
{
	rna_LineStyleThicknessModifier_name_set(ptr, value);
}

int LineStyleThicknessModifier_DistanceFromObject_blend_get(PointerRNA *ptr)
{
	LineStyleThicknessModifier_DistanceFromObject *data = (LineStyleThicknessModifier_DistanceFromObject *)(ptr->data);
	return (int)(data->modifier.blend);
}

void LineStyleThicknessModifier_DistanceFromObject_blend_set(PointerRNA *ptr, int value)
{
	LineStyleThicknessModifier_DistanceFromObject *data = (LineStyleThicknessModifier_DistanceFromObject *)(ptr->data);
	data->modifier.blend = value;
}

float LineStyleThicknessModifier_DistanceFromObject_influence_get(PointerRNA *ptr)
{
	LineStyleThicknessModifier_DistanceFromObject *data = (LineStyleThicknessModifier_DistanceFromObject *)(ptr->data);
	return (float)(data->modifier.influence);
}

void LineStyleThicknessModifier_DistanceFromObject_influence_set(PointerRNA *ptr, float value)
{
	LineStyleThicknessModifier_DistanceFromObject *data = (LineStyleThicknessModifier_DistanceFromObject *)(ptr->data);
	data->modifier.influence = CLAMPIS(value, 0.0f, 1.0f);
}

int LineStyleThicknessModifier_DistanceFromObject_use_get(PointerRNA *ptr)
{
	LineStyleThicknessModifier_DistanceFromObject *data = (LineStyleThicknessModifier_DistanceFromObject *)(ptr->data);
	return (((data->modifier.flags) & 1) != 0);
}

void LineStyleThicknessModifier_DistanceFromObject_use_set(PointerRNA *ptr, int value)
{
	LineStyleThicknessModifier_DistanceFromObject *data = (LineStyleThicknessModifier_DistanceFromObject *)(ptr->data);
	if (value) data->modifier.flags |= 1;
	else data->modifier.flags &= ~1;
}

int LineStyleThicknessModifier_DistanceFromObject_expanded_get(PointerRNA *ptr)
{
	LineStyleThicknessModifier_DistanceFromObject *data = (LineStyleThicknessModifier_DistanceFromObject *)(ptr->data);
	return (((data->modifier.flags) & 2) != 0);
}

void LineStyleThicknessModifier_DistanceFromObject_expanded_set(PointerRNA *ptr, int value)
{
	LineStyleThicknessModifier_DistanceFromObject *data = (LineStyleThicknessModifier_DistanceFromObject *)(ptr->data);
	if (value) data->modifier.flags |= 2;
	else data->modifier.flags &= ~2;
}

int LineStyleThicknessModifier_DistanceFromObject_mapping_get(PointerRNA *ptr)
{
	LineStyleThicknessModifier_DistanceFromObject *data = (LineStyleThicknessModifier_DistanceFromObject *)(ptr->data);
	return ((data->flags) & 1);
}

void LineStyleThicknessModifier_DistanceFromObject_mapping_set(PointerRNA *ptr, int value)
{
	LineStyleThicknessModifier_DistanceFromObject *data = (LineStyleThicknessModifier_DistanceFromObject *)(ptr->data);
	data->flags &= ~1;
	data->flags |= value;
}

int LineStyleThicknessModifier_DistanceFromObject_invert_get(PointerRNA *ptr)
{
	LineStyleThicknessModifier_DistanceFromObject *data = (LineStyleThicknessModifier_DistanceFromObject *)(ptr->data);
	return (((data->flags) & 2) != 0);
}

void LineStyleThicknessModifier_DistanceFromObject_invert_set(PointerRNA *ptr, int value)
{
	LineStyleThicknessModifier_DistanceFromObject *data = (LineStyleThicknessModifier_DistanceFromObject *)(ptr->data);
	if (value) data->flags |= 2;
	else data->flags &= ~2;
}

PointerRNA LineStyleThicknessModifier_DistanceFromObject_curve_get(PointerRNA *ptr)
{
	LineStyleThicknessModifier_DistanceFromObject *data = (LineStyleThicknessModifier_DistanceFromObject *)(ptr->data);
	return rna_pointer_inherit_refine(ptr, &RNA_CurveMapping, data->curve);
}

float LineStyleThicknessModifier_DistanceFromObject_range_min_get(PointerRNA *ptr)
{
	LineStyleThicknessModifier_DistanceFromObject *data = (LineStyleThicknessModifier_DistanceFromObject *)(ptr->data);
	return (float)(data->range_min);
}

void LineStyleThicknessModifier_DistanceFromObject_range_min_set(PointerRNA *ptr, float value)
{
	LineStyleThicknessModifier_DistanceFromObject *data = (LineStyleThicknessModifier_DistanceFromObject *)(ptr->data);
	data->range_min = value;
}

float LineStyleThicknessModifier_DistanceFromObject_range_max_get(PointerRNA *ptr)
{
	LineStyleThicknessModifier_DistanceFromObject *data = (LineStyleThicknessModifier_DistanceFromObject *)(ptr->data);
	return (float)(data->range_max);
}

void LineStyleThicknessModifier_DistanceFromObject_range_max_set(PointerRNA *ptr, float value)
{
	LineStyleThicknessModifier_DistanceFromObject *data = (LineStyleThicknessModifier_DistanceFromObject *)(ptr->data);
	data->range_max = value;
}

float LineStyleThicknessModifier_DistanceFromObject_value_min_get(PointerRNA *ptr)
{
	LineStyleThicknessModifier_DistanceFromObject *data = (LineStyleThicknessModifier_DistanceFromObject *)(ptr->data);
	return (float)(data->value_min);
}

void LineStyleThicknessModifier_DistanceFromObject_value_min_set(PointerRNA *ptr, float value)
{
	LineStyleThicknessModifier_DistanceFromObject *data = (LineStyleThicknessModifier_DistanceFromObject *)(ptr->data);
	data->value_min = value;
}

float LineStyleThicknessModifier_DistanceFromObject_value_max_get(PointerRNA *ptr)
{
	LineStyleThicknessModifier_DistanceFromObject *data = (LineStyleThicknessModifier_DistanceFromObject *)(ptr->data);
	return (float)(data->value_max);
}

void LineStyleThicknessModifier_DistanceFromObject_value_max_set(PointerRNA *ptr, float value)
{
	LineStyleThicknessModifier_DistanceFromObject *data = (LineStyleThicknessModifier_DistanceFromObject *)(ptr->data);
	data->value_max = value;
}

PointerRNA LineStyleThicknessModifier_DistanceFromObject_target_get(PointerRNA *ptr)
{
	LineStyleThicknessModifier_DistanceFromObject *data = (LineStyleThicknessModifier_DistanceFromObject *)(ptr->data);
	return rna_pointer_inherit_refine(ptr, &RNA_Object, data->target);
}

void LineStyleThicknessModifier_DistanceFromObject_target_set(PointerRNA *ptr, PointerRNA value)
{
	LineStyleThicknessModifier_DistanceFromObject *data = (LineStyleThicknessModifier_DistanceFromObject *)(ptr->data);
	if (value.data)
		id_lib_extern((ID *)value.data);

	data->target = value.data;
}

int LineStyleThicknessModifier_Material_type_get(PointerRNA *ptr)
{
	LineStyleThicknessModifier_Material *data = (LineStyleThicknessModifier_Material *)(ptr->data);
	return (int)(data->modifier.type);
}

void LineStyleThicknessModifier_Material_name_get(PointerRNA *ptr, char *value)
{
	LineStyleThicknessModifier_Material *data = (LineStyleThicknessModifier_Material *)(ptr->data);
	BLI_strncpy_utf8(value, data->modifier.name, 64);
}

int LineStyleThicknessModifier_Material_name_length(PointerRNA *ptr)
{
	LineStyleThicknessModifier_Material *data = (LineStyleThicknessModifier_Material *)(ptr->data);
	return strlen(data->modifier.name);
}

void LineStyleThicknessModifier_Material_name_set(PointerRNA *ptr, const char *value)
{
	rna_LineStyleThicknessModifier_name_set(ptr, value);
}

int LineStyleThicknessModifier_Material_blend_get(PointerRNA *ptr)
{
	LineStyleThicknessModifier_Material *data = (LineStyleThicknessModifier_Material *)(ptr->data);
	return (int)(data->modifier.blend);
}

void LineStyleThicknessModifier_Material_blend_set(PointerRNA *ptr, int value)
{
	LineStyleThicknessModifier_Material *data = (LineStyleThicknessModifier_Material *)(ptr->data);
	data->modifier.blend = value;
}

float LineStyleThicknessModifier_Material_influence_get(PointerRNA *ptr)
{
	LineStyleThicknessModifier_Material *data = (LineStyleThicknessModifier_Material *)(ptr->data);
	return (float)(data->modifier.influence);
}

void LineStyleThicknessModifier_Material_influence_set(PointerRNA *ptr, float value)
{
	LineStyleThicknessModifier_Material *data = (LineStyleThicknessModifier_Material *)(ptr->data);
	data->modifier.influence = CLAMPIS(value, 0.0f, 1.0f);
}

int LineStyleThicknessModifier_Material_use_get(PointerRNA *ptr)
{
	LineStyleThicknessModifier_Material *data = (LineStyleThicknessModifier_Material *)(ptr->data);
	return (((data->modifier.flags) & 1) != 0);
}

void LineStyleThicknessModifier_Material_use_set(PointerRNA *ptr, int value)
{
	LineStyleThicknessModifier_Material *data = (LineStyleThicknessModifier_Material *)(ptr->data);
	if (value) data->modifier.flags |= 1;
	else data->modifier.flags &= ~1;
}

int LineStyleThicknessModifier_Material_expanded_get(PointerRNA *ptr)
{
	LineStyleThicknessModifier_Material *data = (LineStyleThicknessModifier_Material *)(ptr->data);
	return (((data->modifier.flags) & 2) != 0);
}

void LineStyleThicknessModifier_Material_expanded_set(PointerRNA *ptr, int value)
{
	LineStyleThicknessModifier_Material *data = (LineStyleThicknessModifier_Material *)(ptr->data);
	if (value) data->modifier.flags |= 2;
	else data->modifier.flags &= ~2;
}

int LineStyleThicknessModifier_Material_material_attribute_get(PointerRNA *ptr)
{
	LineStyleThicknessModifier_Material *data = (LineStyleThicknessModifier_Material *)(ptr->data);
	return (int)(data->mat_attr);
}

void LineStyleThicknessModifier_Material_material_attribute_set(PointerRNA *ptr, int value)
{
	LineStyleThicknessModifier_Material *data = (LineStyleThicknessModifier_Material *)(ptr->data);
	data->mat_attr = value;
}

int LineStyleThicknessModifier_Material_mapping_get(PointerRNA *ptr)
{
	LineStyleThicknessModifier_Material *data = (LineStyleThicknessModifier_Material *)(ptr->data);
	return ((data->flags) & 1);
}

void LineStyleThicknessModifier_Material_mapping_set(PointerRNA *ptr, int value)
{
	LineStyleThicknessModifier_Material *data = (LineStyleThicknessModifier_Material *)(ptr->data);
	data->flags &= ~1;
	data->flags |= value;
}

int LineStyleThicknessModifier_Material_invert_get(PointerRNA *ptr)
{
	LineStyleThicknessModifier_Material *data = (LineStyleThicknessModifier_Material *)(ptr->data);
	return (((data->flags) & 2) != 0);
}

void LineStyleThicknessModifier_Material_invert_set(PointerRNA *ptr, int value)
{
	LineStyleThicknessModifier_Material *data = (LineStyleThicknessModifier_Material *)(ptr->data);
	if (value) data->flags |= 2;
	else data->flags &= ~2;
}

PointerRNA LineStyleThicknessModifier_Material_curve_get(PointerRNA *ptr)
{
	LineStyleThicknessModifier_Material *data = (LineStyleThicknessModifier_Material *)(ptr->data);
	return rna_pointer_inherit_refine(ptr, &RNA_CurveMapping, data->curve);
}

float LineStyleThicknessModifier_Material_value_min_get(PointerRNA *ptr)
{
	LineStyleThicknessModifier_Material *data = (LineStyleThicknessModifier_Material *)(ptr->data);
	return (float)(data->value_min);
}

void LineStyleThicknessModifier_Material_value_min_set(PointerRNA *ptr, float value)
{
	LineStyleThicknessModifier_Material *data = (LineStyleThicknessModifier_Material *)(ptr->data);
	data->value_min = value;
}

float LineStyleThicknessModifier_Material_value_max_get(PointerRNA *ptr)
{
	LineStyleThicknessModifier_Material *data = (LineStyleThicknessModifier_Material *)(ptr->data);
	return (float)(data->value_max);
}

void LineStyleThicknessModifier_Material_value_max_set(PointerRNA *ptr, float value)
{
	LineStyleThicknessModifier_Material *data = (LineStyleThicknessModifier_Material *)(ptr->data);
	data->value_max = value;
}

int LineStyleThicknessModifier_Calligraphy_type_get(PointerRNA *ptr)
{
	LineStyleThicknessModifier_Calligraphy *data = (LineStyleThicknessModifier_Calligraphy *)(ptr->data);
	return (int)(data->modifier.type);
}

void LineStyleThicknessModifier_Calligraphy_name_get(PointerRNA *ptr, char *value)
{
	LineStyleThicknessModifier_Calligraphy *data = (LineStyleThicknessModifier_Calligraphy *)(ptr->data);
	BLI_strncpy_utf8(value, data->modifier.name, 64);
}

int LineStyleThicknessModifier_Calligraphy_name_length(PointerRNA *ptr)
{
	LineStyleThicknessModifier_Calligraphy *data = (LineStyleThicknessModifier_Calligraphy *)(ptr->data);
	return strlen(data->modifier.name);
}

void LineStyleThicknessModifier_Calligraphy_name_set(PointerRNA *ptr, const char *value)
{
	rna_LineStyleThicknessModifier_name_set(ptr, value);
}

int LineStyleThicknessModifier_Calligraphy_blend_get(PointerRNA *ptr)
{
	LineStyleThicknessModifier_Calligraphy *data = (LineStyleThicknessModifier_Calligraphy *)(ptr->data);
	return (int)(data->modifier.blend);
}

void LineStyleThicknessModifier_Calligraphy_blend_set(PointerRNA *ptr, int value)
{
	LineStyleThicknessModifier_Calligraphy *data = (LineStyleThicknessModifier_Calligraphy *)(ptr->data);
	data->modifier.blend = value;
}

float LineStyleThicknessModifier_Calligraphy_influence_get(PointerRNA *ptr)
{
	LineStyleThicknessModifier_Calligraphy *data = (LineStyleThicknessModifier_Calligraphy *)(ptr->data);
	return (float)(data->modifier.influence);
}

void LineStyleThicknessModifier_Calligraphy_influence_set(PointerRNA *ptr, float value)
{
	LineStyleThicknessModifier_Calligraphy *data = (LineStyleThicknessModifier_Calligraphy *)(ptr->data);
	data->modifier.influence = CLAMPIS(value, 0.0f, 1.0f);
}

int LineStyleThicknessModifier_Calligraphy_use_get(PointerRNA *ptr)
{
	LineStyleThicknessModifier_Calligraphy *data = (LineStyleThicknessModifier_Calligraphy *)(ptr->data);
	return (((data->modifier.flags) & 1) != 0);
}

void LineStyleThicknessModifier_Calligraphy_use_set(PointerRNA *ptr, int value)
{
	LineStyleThicknessModifier_Calligraphy *data = (LineStyleThicknessModifier_Calligraphy *)(ptr->data);
	if (value) data->modifier.flags |= 1;
	else data->modifier.flags &= ~1;
}

int LineStyleThicknessModifier_Calligraphy_expanded_get(PointerRNA *ptr)
{
	LineStyleThicknessModifier_Calligraphy *data = (LineStyleThicknessModifier_Calligraphy *)(ptr->data);
	return (((data->modifier.flags) & 2) != 0);
}

void LineStyleThicknessModifier_Calligraphy_expanded_set(PointerRNA *ptr, int value)
{
	LineStyleThicknessModifier_Calligraphy *data = (LineStyleThicknessModifier_Calligraphy *)(ptr->data);
	if (value) data->modifier.flags |= 2;
	else data->modifier.flags &= ~2;
}

float LineStyleThicknessModifier_Calligraphy_orientation_get(PointerRNA *ptr)
{
	LineStyleThicknessModifier_Calligraphy *data = (LineStyleThicknessModifier_Calligraphy *)(ptr->data);
	return (float)(data->orientation);
}

void LineStyleThicknessModifier_Calligraphy_orientation_set(PointerRNA *ptr, float value)
{
	LineStyleThicknessModifier_Calligraphy *data = (LineStyleThicknessModifier_Calligraphy *)(ptr->data);
	data->orientation = value;
}

float LineStyleThicknessModifier_Calligraphy_thickness_min_get(PointerRNA *ptr)
{
	LineStyleThicknessModifier_Calligraphy *data = (LineStyleThicknessModifier_Calligraphy *)(ptr->data);
	return (float)(data->min_thickness);
}

void LineStyleThicknessModifier_Calligraphy_thickness_min_set(PointerRNA *ptr, float value)
{
	LineStyleThicknessModifier_Calligraphy *data = (LineStyleThicknessModifier_Calligraphy *)(ptr->data);
	data->min_thickness = CLAMPIS(value, 0.0f, 10000.0f);
}

float LineStyleThicknessModifier_Calligraphy_thickness_max_get(PointerRNA *ptr)
{
	LineStyleThicknessModifier_Calligraphy *data = (LineStyleThicknessModifier_Calligraphy *)(ptr->data);
	return (float)(data->max_thickness);
}

void LineStyleThicknessModifier_Calligraphy_thickness_max_set(PointerRNA *ptr, float value)
{
	LineStyleThicknessModifier_Calligraphy *data = (LineStyleThicknessModifier_Calligraphy *)(ptr->data);
	data->max_thickness = CLAMPIS(value, 0.0f, 10000.0f);
}

int LineStyleGeometryModifier_Sampling_type_get(PointerRNA *ptr)
{
	LineStyleGeometryModifier_Sampling *data = (LineStyleGeometryModifier_Sampling *)(ptr->data);
	return (int)(data->modifier.type);
}

void LineStyleGeometryModifier_Sampling_name_get(PointerRNA *ptr, char *value)
{
	LineStyleGeometryModifier_Sampling *data = (LineStyleGeometryModifier_Sampling *)(ptr->data);
	BLI_strncpy_utf8(value, data->modifier.name, 64);
}

int LineStyleGeometryModifier_Sampling_name_length(PointerRNA *ptr)
{
	LineStyleGeometryModifier_Sampling *data = (LineStyleGeometryModifier_Sampling *)(ptr->data);
	return strlen(data->modifier.name);
}

void LineStyleGeometryModifier_Sampling_name_set(PointerRNA *ptr, const char *value)
{
	rna_LineStyleGeometryModifier_name_set(ptr, value);
}

int LineStyleGeometryModifier_Sampling_use_get(PointerRNA *ptr)
{
	LineStyleGeometryModifier_Sampling *data = (LineStyleGeometryModifier_Sampling *)(ptr->data);
	return (((data->modifier.flags) & 1) != 0);
}

void LineStyleGeometryModifier_Sampling_use_set(PointerRNA *ptr, int value)
{
	LineStyleGeometryModifier_Sampling *data = (LineStyleGeometryModifier_Sampling *)(ptr->data);
	if (value) data->modifier.flags |= 1;
	else data->modifier.flags &= ~1;
}

int LineStyleGeometryModifier_Sampling_expanded_get(PointerRNA *ptr)
{
	LineStyleGeometryModifier_Sampling *data = (LineStyleGeometryModifier_Sampling *)(ptr->data);
	return (((data->modifier.flags) & 2) != 0);
}

void LineStyleGeometryModifier_Sampling_expanded_set(PointerRNA *ptr, int value)
{
	LineStyleGeometryModifier_Sampling *data = (LineStyleGeometryModifier_Sampling *)(ptr->data);
	if (value) data->modifier.flags |= 2;
	else data->modifier.flags &= ~2;
}

float LineStyleGeometryModifier_Sampling_sampling_get(PointerRNA *ptr)
{
	LineStyleGeometryModifier_Sampling *data = (LineStyleGeometryModifier_Sampling *)(ptr->data);
	return (float)(data->sampling);
}

void LineStyleGeometryModifier_Sampling_sampling_set(PointerRNA *ptr, float value)
{
	LineStyleGeometryModifier_Sampling *data = (LineStyleGeometryModifier_Sampling *)(ptr->data);
	data->sampling = CLAMPIS(value, 0.0f, 10000.0f);
}

int LineStyleGeometryModifier_BezierCurve_type_get(PointerRNA *ptr)
{
	LineStyleGeometryModifier_BezierCurve *data = (LineStyleGeometryModifier_BezierCurve *)(ptr->data);
	return (int)(data->modifier.type);
}

void LineStyleGeometryModifier_BezierCurve_name_get(PointerRNA *ptr, char *value)
{
	LineStyleGeometryModifier_BezierCurve *data = (LineStyleGeometryModifier_BezierCurve *)(ptr->data);
	BLI_strncpy_utf8(value, data->modifier.name, 64);
}

int LineStyleGeometryModifier_BezierCurve_name_length(PointerRNA *ptr)
{
	LineStyleGeometryModifier_BezierCurve *data = (LineStyleGeometryModifier_BezierCurve *)(ptr->data);
	return strlen(data->modifier.name);
}

void LineStyleGeometryModifier_BezierCurve_name_set(PointerRNA *ptr, const char *value)
{
	rna_LineStyleGeometryModifier_name_set(ptr, value);
}

int LineStyleGeometryModifier_BezierCurve_use_get(PointerRNA *ptr)
{
	LineStyleGeometryModifier_BezierCurve *data = (LineStyleGeometryModifier_BezierCurve *)(ptr->data);
	return (((data->modifier.flags) & 1) != 0);
}

void LineStyleGeometryModifier_BezierCurve_use_set(PointerRNA *ptr, int value)
{
	LineStyleGeometryModifier_BezierCurve *data = (LineStyleGeometryModifier_BezierCurve *)(ptr->data);
	if (value) data->modifier.flags |= 1;
	else data->modifier.flags &= ~1;
}

int LineStyleGeometryModifier_BezierCurve_expanded_get(PointerRNA *ptr)
{
	LineStyleGeometryModifier_BezierCurve *data = (LineStyleGeometryModifier_BezierCurve *)(ptr->data);
	return (((data->modifier.flags) & 2) != 0);
}

void LineStyleGeometryModifier_BezierCurve_expanded_set(PointerRNA *ptr, int value)
{
	LineStyleGeometryModifier_BezierCurve *data = (LineStyleGeometryModifier_BezierCurve *)(ptr->data);
	if (value) data->modifier.flags |= 2;
	else data->modifier.flags &= ~2;
}

float LineStyleGeometryModifier_BezierCurve_error_get(PointerRNA *ptr)
{
	LineStyleGeometryModifier_BezierCurve *data = (LineStyleGeometryModifier_BezierCurve *)(ptr->data);
	return (float)(data->error);
}

void LineStyleGeometryModifier_BezierCurve_error_set(PointerRNA *ptr, float value)
{
	LineStyleGeometryModifier_BezierCurve *data = (LineStyleGeometryModifier_BezierCurve *)(ptr->data);
	data->error = value;
}

int LineStyleGeometryModifier_SinusDisplacement_type_get(PointerRNA *ptr)
{
	LineStyleGeometryModifier_SinusDisplacement *data = (LineStyleGeometryModifier_SinusDisplacement *)(ptr->data);
	return (int)(data->modifier.type);
}

void LineStyleGeometryModifier_SinusDisplacement_name_get(PointerRNA *ptr, char *value)
{
	LineStyleGeometryModifier_SinusDisplacement *data = (LineStyleGeometryModifier_SinusDisplacement *)(ptr->data);
	BLI_strncpy_utf8(value, data->modifier.name, 64);
}

int LineStyleGeometryModifier_SinusDisplacement_name_length(PointerRNA *ptr)
{
	LineStyleGeometryModifier_SinusDisplacement *data = (LineStyleGeometryModifier_SinusDisplacement *)(ptr->data);
	return strlen(data->modifier.name);
}

void LineStyleGeometryModifier_SinusDisplacement_name_set(PointerRNA *ptr, const char *value)
{
	rna_LineStyleGeometryModifier_name_set(ptr, value);
}

int LineStyleGeometryModifier_SinusDisplacement_use_get(PointerRNA *ptr)
{
	LineStyleGeometryModifier_SinusDisplacement *data = (LineStyleGeometryModifier_SinusDisplacement *)(ptr->data);
	return (((data->modifier.flags) & 1) != 0);
}

void LineStyleGeometryModifier_SinusDisplacement_use_set(PointerRNA *ptr, int value)
{
	LineStyleGeometryModifier_SinusDisplacement *data = (LineStyleGeometryModifier_SinusDisplacement *)(ptr->data);
	if (value) data->modifier.flags |= 1;
	else data->modifier.flags &= ~1;
}

int LineStyleGeometryModifier_SinusDisplacement_expanded_get(PointerRNA *ptr)
{
	LineStyleGeometryModifier_SinusDisplacement *data = (LineStyleGeometryModifier_SinusDisplacement *)(ptr->data);
	return (((data->modifier.flags) & 2) != 0);
}

void LineStyleGeometryModifier_SinusDisplacement_expanded_set(PointerRNA *ptr, int value)
{
	LineStyleGeometryModifier_SinusDisplacement *data = (LineStyleGeometryModifier_SinusDisplacement *)(ptr->data);
	if (value) data->modifier.flags |= 2;
	else data->modifier.flags &= ~2;
}

float LineStyleGeometryModifier_SinusDisplacement_wavelength_get(PointerRNA *ptr)
{
	LineStyleGeometryModifier_SinusDisplacement *data = (LineStyleGeometryModifier_SinusDisplacement *)(ptr->data);
	return (float)(data->wavelength);
}

void LineStyleGeometryModifier_SinusDisplacement_wavelength_set(PointerRNA *ptr, float value)
{
	LineStyleGeometryModifier_SinusDisplacement *data = (LineStyleGeometryModifier_SinusDisplacement *)(ptr->data);
	data->wavelength = value;
}

float LineStyleGeometryModifier_SinusDisplacement_amplitude_get(PointerRNA *ptr)
{
	LineStyleGeometryModifier_SinusDisplacement *data = (LineStyleGeometryModifier_SinusDisplacement *)(ptr->data);
	return (float)(data->amplitude);
}

void LineStyleGeometryModifier_SinusDisplacement_amplitude_set(PointerRNA *ptr, float value)
{
	LineStyleGeometryModifier_SinusDisplacement *data = (LineStyleGeometryModifier_SinusDisplacement *)(ptr->data);
	data->amplitude = value;
}

float LineStyleGeometryModifier_SinusDisplacement_phase_get(PointerRNA *ptr)
{
	LineStyleGeometryModifier_SinusDisplacement *data = (LineStyleGeometryModifier_SinusDisplacement *)(ptr->data);
	return (float)(data->phase);
}

void LineStyleGeometryModifier_SinusDisplacement_phase_set(PointerRNA *ptr, float value)
{
	LineStyleGeometryModifier_SinusDisplacement *data = (LineStyleGeometryModifier_SinusDisplacement *)(ptr->data);
	data->phase = value;
}

int LineStyleGeometryModifier_SpatialNoise_type_get(PointerRNA *ptr)
{
	LineStyleGeometryModifier_SpatialNoise *data = (LineStyleGeometryModifier_SpatialNoise *)(ptr->data);
	return (int)(data->modifier.type);
}

void LineStyleGeometryModifier_SpatialNoise_name_get(PointerRNA *ptr, char *value)
{
	LineStyleGeometryModifier_SpatialNoise *data = (LineStyleGeometryModifier_SpatialNoise *)(ptr->data);
	BLI_strncpy_utf8(value, data->modifier.name, 64);
}

int LineStyleGeometryModifier_SpatialNoise_name_length(PointerRNA *ptr)
{
	LineStyleGeometryModifier_SpatialNoise *data = (LineStyleGeometryModifier_SpatialNoise *)(ptr->data);
	return strlen(data->modifier.name);
}

void LineStyleGeometryModifier_SpatialNoise_name_set(PointerRNA *ptr, const char *value)
{
	rna_LineStyleGeometryModifier_name_set(ptr, value);
}

int LineStyleGeometryModifier_SpatialNoise_use_get(PointerRNA *ptr)
{
	LineStyleGeometryModifier_SpatialNoise *data = (LineStyleGeometryModifier_SpatialNoise *)(ptr->data);
	return (((data->modifier.flags) & 1) != 0);
}

void LineStyleGeometryModifier_SpatialNoise_use_set(PointerRNA *ptr, int value)
{
	LineStyleGeometryModifier_SpatialNoise *data = (LineStyleGeometryModifier_SpatialNoise *)(ptr->data);
	if (value) data->modifier.flags |= 1;
	else data->modifier.flags &= ~1;
}

int LineStyleGeometryModifier_SpatialNoise_expanded_get(PointerRNA *ptr)
{
	LineStyleGeometryModifier_SpatialNoise *data = (LineStyleGeometryModifier_SpatialNoise *)(ptr->data);
	return (((data->modifier.flags) & 2) != 0);
}

void LineStyleGeometryModifier_SpatialNoise_expanded_set(PointerRNA *ptr, int value)
{
	LineStyleGeometryModifier_SpatialNoise *data = (LineStyleGeometryModifier_SpatialNoise *)(ptr->data);
	if (value) data->modifier.flags |= 2;
	else data->modifier.flags &= ~2;
}

float LineStyleGeometryModifier_SpatialNoise_amplitude_get(PointerRNA *ptr)
{
	LineStyleGeometryModifier_SpatialNoise *data = (LineStyleGeometryModifier_SpatialNoise *)(ptr->data);
	return (float)(data->amplitude);
}

void LineStyleGeometryModifier_SpatialNoise_amplitude_set(PointerRNA *ptr, float value)
{
	LineStyleGeometryModifier_SpatialNoise *data = (LineStyleGeometryModifier_SpatialNoise *)(ptr->data);
	data->amplitude = value;
}

float LineStyleGeometryModifier_SpatialNoise_scale_get(PointerRNA *ptr)
{
	LineStyleGeometryModifier_SpatialNoise *data = (LineStyleGeometryModifier_SpatialNoise *)(ptr->data);
	return (float)(data->scale);
}

void LineStyleGeometryModifier_SpatialNoise_scale_set(PointerRNA *ptr, float value)
{
	LineStyleGeometryModifier_SpatialNoise *data = (LineStyleGeometryModifier_SpatialNoise *)(ptr->data);
	data->scale = value;
}

int LineStyleGeometryModifier_SpatialNoise_octaves_get(PointerRNA *ptr)
{
	LineStyleGeometryModifier_SpatialNoise *data = (LineStyleGeometryModifier_SpatialNoise *)(ptr->data);
	return (int)(data->octaves);
}

void LineStyleGeometryModifier_SpatialNoise_octaves_set(PointerRNA *ptr, int value)
{
	LineStyleGeometryModifier_SpatialNoise *data = (LineStyleGeometryModifier_SpatialNoise *)(ptr->data);
	data->octaves = CLAMPIS(value, 0, INT_MAX);
}

int LineStyleGeometryModifier_SpatialNoise_smooth_get(PointerRNA *ptr)
{
	LineStyleGeometryModifier_SpatialNoise *data = (LineStyleGeometryModifier_SpatialNoise *)(ptr->data);
	return (((data->flags) & 1) != 0);
}

void LineStyleGeometryModifier_SpatialNoise_smooth_set(PointerRNA *ptr, int value)
{
	LineStyleGeometryModifier_SpatialNoise *data = (LineStyleGeometryModifier_SpatialNoise *)(ptr->data);
	if (value) data->flags |= 1;
	else data->flags &= ~1;
}

int LineStyleGeometryModifier_SpatialNoise_use_pure_random_get(PointerRNA *ptr)
{
	LineStyleGeometryModifier_SpatialNoise *data = (LineStyleGeometryModifier_SpatialNoise *)(ptr->data);
	return (((data->flags) & 2) != 0);
}

void LineStyleGeometryModifier_SpatialNoise_use_pure_random_set(PointerRNA *ptr, int value)
{
	LineStyleGeometryModifier_SpatialNoise *data = (LineStyleGeometryModifier_SpatialNoise *)(ptr->data);
	if (value) data->flags |= 2;
	else data->flags &= ~2;
}

int LineStyleGeometryModifier_PerlinNoise1D_type_get(PointerRNA *ptr)
{
	LineStyleGeometryModifier_PerlinNoise1D *data = (LineStyleGeometryModifier_PerlinNoise1D *)(ptr->data);
	return (int)(data->modifier.type);
}

void LineStyleGeometryModifier_PerlinNoise1D_name_get(PointerRNA *ptr, char *value)
{
	LineStyleGeometryModifier_PerlinNoise1D *data = (LineStyleGeometryModifier_PerlinNoise1D *)(ptr->data);
	BLI_strncpy_utf8(value, data->modifier.name, 64);
}

int LineStyleGeometryModifier_PerlinNoise1D_name_length(PointerRNA *ptr)
{
	LineStyleGeometryModifier_PerlinNoise1D *data = (LineStyleGeometryModifier_PerlinNoise1D *)(ptr->data);
	return strlen(data->modifier.name);
}

void LineStyleGeometryModifier_PerlinNoise1D_name_set(PointerRNA *ptr, const char *value)
{
	rna_LineStyleGeometryModifier_name_set(ptr, value);
}

int LineStyleGeometryModifier_PerlinNoise1D_use_get(PointerRNA *ptr)
{
	LineStyleGeometryModifier_PerlinNoise1D *data = (LineStyleGeometryModifier_PerlinNoise1D *)(ptr->data);
	return (((data->modifier.flags) & 1) != 0);
}

void LineStyleGeometryModifier_PerlinNoise1D_use_set(PointerRNA *ptr, int value)
{
	LineStyleGeometryModifier_PerlinNoise1D *data = (LineStyleGeometryModifier_PerlinNoise1D *)(ptr->data);
	if (value) data->modifier.flags |= 1;
	else data->modifier.flags &= ~1;
}

int LineStyleGeometryModifier_PerlinNoise1D_expanded_get(PointerRNA *ptr)
{
	LineStyleGeometryModifier_PerlinNoise1D *data = (LineStyleGeometryModifier_PerlinNoise1D *)(ptr->data);
	return (((data->modifier.flags) & 2) != 0);
}

void LineStyleGeometryModifier_PerlinNoise1D_expanded_set(PointerRNA *ptr, int value)
{
	LineStyleGeometryModifier_PerlinNoise1D *data = (LineStyleGeometryModifier_PerlinNoise1D *)(ptr->data);
	if (value) data->modifier.flags |= 2;
	else data->modifier.flags &= ~2;
}

float LineStyleGeometryModifier_PerlinNoise1D_frequency_get(PointerRNA *ptr)
{
	LineStyleGeometryModifier_PerlinNoise1D *data = (LineStyleGeometryModifier_PerlinNoise1D *)(ptr->data);
	return (float)(data->frequency);
}

void LineStyleGeometryModifier_PerlinNoise1D_frequency_set(PointerRNA *ptr, float value)
{
	LineStyleGeometryModifier_PerlinNoise1D *data = (LineStyleGeometryModifier_PerlinNoise1D *)(ptr->data);
	data->frequency = value;
}

float LineStyleGeometryModifier_PerlinNoise1D_amplitude_get(PointerRNA *ptr)
{
	LineStyleGeometryModifier_PerlinNoise1D *data = (LineStyleGeometryModifier_PerlinNoise1D *)(ptr->data);
	return (float)(data->amplitude);
}

void LineStyleGeometryModifier_PerlinNoise1D_amplitude_set(PointerRNA *ptr, float value)
{
	LineStyleGeometryModifier_PerlinNoise1D *data = (LineStyleGeometryModifier_PerlinNoise1D *)(ptr->data);
	data->amplitude = value;
}

int LineStyleGeometryModifier_PerlinNoise1D_octaves_get(PointerRNA *ptr)
{
	LineStyleGeometryModifier_PerlinNoise1D *data = (LineStyleGeometryModifier_PerlinNoise1D *)(ptr->data);
	return (int)(data->octaves);
}

void LineStyleGeometryModifier_PerlinNoise1D_octaves_set(PointerRNA *ptr, int value)
{
	LineStyleGeometryModifier_PerlinNoise1D *data = (LineStyleGeometryModifier_PerlinNoise1D *)(ptr->data);
	data->octaves = CLAMPIS(value, 0, INT_MAX);
}

float LineStyleGeometryModifier_PerlinNoise1D_angle_get(PointerRNA *ptr)
{
	LineStyleGeometryModifier_PerlinNoise1D *data = (LineStyleGeometryModifier_PerlinNoise1D *)(ptr->data);
	return (float)(data->angle);
}

void LineStyleGeometryModifier_PerlinNoise1D_angle_set(PointerRNA *ptr, float value)
{
	LineStyleGeometryModifier_PerlinNoise1D *data = (LineStyleGeometryModifier_PerlinNoise1D *)(ptr->data);
	data->angle = value;
}

int LineStyleGeometryModifier_PerlinNoise1D_seed_get(PointerRNA *ptr)
{
	LineStyleGeometryModifier_PerlinNoise1D *data = (LineStyleGeometryModifier_PerlinNoise1D *)(ptr->data);
	return (int)(data->seed);
}

void LineStyleGeometryModifier_PerlinNoise1D_seed_set(PointerRNA *ptr, int value)
{
	LineStyleGeometryModifier_PerlinNoise1D *data = (LineStyleGeometryModifier_PerlinNoise1D *)(ptr->data);
	data->seed = value;
}

int LineStyleGeometryModifier_PerlinNoise2D_type_get(PointerRNA *ptr)
{
	LineStyleGeometryModifier_PerlinNoise2D *data = (LineStyleGeometryModifier_PerlinNoise2D *)(ptr->data);
	return (int)(data->modifier.type);
}

void LineStyleGeometryModifier_PerlinNoise2D_name_get(PointerRNA *ptr, char *value)
{
	LineStyleGeometryModifier_PerlinNoise2D *data = (LineStyleGeometryModifier_PerlinNoise2D *)(ptr->data);
	BLI_strncpy_utf8(value, data->modifier.name, 64);
}

int LineStyleGeometryModifier_PerlinNoise2D_name_length(PointerRNA *ptr)
{
	LineStyleGeometryModifier_PerlinNoise2D *data = (LineStyleGeometryModifier_PerlinNoise2D *)(ptr->data);
	return strlen(data->modifier.name);
}

void LineStyleGeometryModifier_PerlinNoise2D_name_set(PointerRNA *ptr, const char *value)
{
	rna_LineStyleGeometryModifier_name_set(ptr, value);
}

int LineStyleGeometryModifier_PerlinNoise2D_use_get(PointerRNA *ptr)
{
	LineStyleGeometryModifier_PerlinNoise2D *data = (LineStyleGeometryModifier_PerlinNoise2D *)(ptr->data);
	return (((data->modifier.flags) & 1) != 0);
}

void LineStyleGeometryModifier_PerlinNoise2D_use_set(PointerRNA *ptr, int value)
{
	LineStyleGeometryModifier_PerlinNoise2D *data = (LineStyleGeometryModifier_PerlinNoise2D *)(ptr->data);
	if (value) data->modifier.flags |= 1;
	else data->modifier.flags &= ~1;
}

int LineStyleGeometryModifier_PerlinNoise2D_expanded_get(PointerRNA *ptr)
{
	LineStyleGeometryModifier_PerlinNoise2D *data = (LineStyleGeometryModifier_PerlinNoise2D *)(ptr->data);
	return (((data->modifier.flags) & 2) != 0);
}

void LineStyleGeometryModifier_PerlinNoise2D_expanded_set(PointerRNA *ptr, int value)
{
	LineStyleGeometryModifier_PerlinNoise2D *data = (LineStyleGeometryModifier_PerlinNoise2D *)(ptr->data);
	if (value) data->modifier.flags |= 2;
	else data->modifier.flags &= ~2;
}

float LineStyleGeometryModifier_PerlinNoise2D_frequency_get(PointerRNA *ptr)
{
	LineStyleGeometryModifier_PerlinNoise2D *data = (LineStyleGeometryModifier_PerlinNoise2D *)(ptr->data);
	return (float)(data->frequency);
}

void LineStyleGeometryModifier_PerlinNoise2D_frequency_set(PointerRNA *ptr, float value)
{
	LineStyleGeometryModifier_PerlinNoise2D *data = (LineStyleGeometryModifier_PerlinNoise2D *)(ptr->data);
	data->frequency = value;
}

float LineStyleGeometryModifier_PerlinNoise2D_amplitude_get(PointerRNA *ptr)
{
	LineStyleGeometryModifier_PerlinNoise2D *data = (LineStyleGeometryModifier_PerlinNoise2D *)(ptr->data);
	return (float)(data->amplitude);
}

void LineStyleGeometryModifier_PerlinNoise2D_amplitude_set(PointerRNA *ptr, float value)
{
	LineStyleGeometryModifier_PerlinNoise2D *data = (LineStyleGeometryModifier_PerlinNoise2D *)(ptr->data);
	data->amplitude = value;
}

int LineStyleGeometryModifier_PerlinNoise2D_octaves_get(PointerRNA *ptr)
{
	LineStyleGeometryModifier_PerlinNoise2D *data = (LineStyleGeometryModifier_PerlinNoise2D *)(ptr->data);
	return (int)(data->octaves);
}

void LineStyleGeometryModifier_PerlinNoise2D_octaves_set(PointerRNA *ptr, int value)
{
	LineStyleGeometryModifier_PerlinNoise2D *data = (LineStyleGeometryModifier_PerlinNoise2D *)(ptr->data);
	data->octaves = CLAMPIS(value, 0, INT_MAX);
}

float LineStyleGeometryModifier_PerlinNoise2D_angle_get(PointerRNA *ptr)
{
	LineStyleGeometryModifier_PerlinNoise2D *data = (LineStyleGeometryModifier_PerlinNoise2D *)(ptr->data);
	return (float)(data->angle);
}

void LineStyleGeometryModifier_PerlinNoise2D_angle_set(PointerRNA *ptr, float value)
{
	LineStyleGeometryModifier_PerlinNoise2D *data = (LineStyleGeometryModifier_PerlinNoise2D *)(ptr->data);
	data->angle = value;
}

int LineStyleGeometryModifier_PerlinNoise2D_seed_get(PointerRNA *ptr)
{
	LineStyleGeometryModifier_PerlinNoise2D *data = (LineStyleGeometryModifier_PerlinNoise2D *)(ptr->data);
	return (int)(data->seed);
}

void LineStyleGeometryModifier_PerlinNoise2D_seed_set(PointerRNA *ptr, int value)
{
	LineStyleGeometryModifier_PerlinNoise2D *data = (LineStyleGeometryModifier_PerlinNoise2D *)(ptr->data);
	data->seed = value;
}

int LineStyleGeometryModifier_BackboneStretcher_type_get(PointerRNA *ptr)
{
	LineStyleGeometryModifier_BackboneStretcher *data = (LineStyleGeometryModifier_BackboneStretcher *)(ptr->data);
	return (int)(data->modifier.type);
}

void LineStyleGeometryModifier_BackboneStretcher_name_get(PointerRNA *ptr, char *value)
{
	LineStyleGeometryModifier_BackboneStretcher *data = (LineStyleGeometryModifier_BackboneStretcher *)(ptr->data);
	BLI_strncpy_utf8(value, data->modifier.name, 64);
}

int LineStyleGeometryModifier_BackboneStretcher_name_length(PointerRNA *ptr)
{
	LineStyleGeometryModifier_BackboneStretcher *data = (LineStyleGeometryModifier_BackboneStretcher *)(ptr->data);
	return strlen(data->modifier.name);
}

void LineStyleGeometryModifier_BackboneStretcher_name_set(PointerRNA *ptr, const char *value)
{
	rna_LineStyleGeometryModifier_name_set(ptr, value);
}

int LineStyleGeometryModifier_BackboneStretcher_use_get(PointerRNA *ptr)
{
	LineStyleGeometryModifier_BackboneStretcher *data = (LineStyleGeometryModifier_BackboneStretcher *)(ptr->data);
	return (((data->modifier.flags) & 1) != 0);
}

void LineStyleGeometryModifier_BackboneStretcher_use_set(PointerRNA *ptr, int value)
{
	LineStyleGeometryModifier_BackboneStretcher *data = (LineStyleGeometryModifier_BackboneStretcher *)(ptr->data);
	if (value) data->modifier.flags |= 1;
	else data->modifier.flags &= ~1;
}

int LineStyleGeometryModifier_BackboneStretcher_expanded_get(PointerRNA *ptr)
{
	LineStyleGeometryModifier_BackboneStretcher *data = (LineStyleGeometryModifier_BackboneStretcher *)(ptr->data);
	return (((data->modifier.flags) & 2) != 0);
}

void LineStyleGeometryModifier_BackboneStretcher_expanded_set(PointerRNA *ptr, int value)
{
	LineStyleGeometryModifier_BackboneStretcher *data = (LineStyleGeometryModifier_BackboneStretcher *)(ptr->data);
	if (value) data->modifier.flags |= 2;
	else data->modifier.flags &= ~2;
}

float LineStyleGeometryModifier_BackboneStretcher_backbone_length_get(PointerRNA *ptr)
{
	LineStyleGeometryModifier_BackboneStretcher *data = (LineStyleGeometryModifier_BackboneStretcher *)(ptr->data);
	return (float)(data->backbone_length);
}

void LineStyleGeometryModifier_BackboneStretcher_backbone_length_set(PointerRNA *ptr, float value)
{
	LineStyleGeometryModifier_BackboneStretcher *data = (LineStyleGeometryModifier_BackboneStretcher *)(ptr->data);
	data->backbone_length = value;
}

int LineStyleGeometryModifier_TipRemover_type_get(PointerRNA *ptr)
{
	LineStyleGeometryModifier_TipRemover *data = (LineStyleGeometryModifier_TipRemover *)(ptr->data);
	return (int)(data->modifier.type);
}

void LineStyleGeometryModifier_TipRemover_name_get(PointerRNA *ptr, char *value)
{
	LineStyleGeometryModifier_TipRemover *data = (LineStyleGeometryModifier_TipRemover *)(ptr->data);
	BLI_strncpy_utf8(value, data->modifier.name, 64);
}

int LineStyleGeometryModifier_TipRemover_name_length(PointerRNA *ptr)
{
	LineStyleGeometryModifier_TipRemover *data = (LineStyleGeometryModifier_TipRemover *)(ptr->data);
	return strlen(data->modifier.name);
}

void LineStyleGeometryModifier_TipRemover_name_set(PointerRNA *ptr, const char *value)
{
	rna_LineStyleGeometryModifier_name_set(ptr, value);
}

int LineStyleGeometryModifier_TipRemover_use_get(PointerRNA *ptr)
{
	LineStyleGeometryModifier_TipRemover *data = (LineStyleGeometryModifier_TipRemover *)(ptr->data);
	return (((data->modifier.flags) & 1) != 0);
}

void LineStyleGeometryModifier_TipRemover_use_set(PointerRNA *ptr, int value)
{
	LineStyleGeometryModifier_TipRemover *data = (LineStyleGeometryModifier_TipRemover *)(ptr->data);
	if (value) data->modifier.flags |= 1;
	else data->modifier.flags &= ~1;
}

int LineStyleGeometryModifier_TipRemover_expanded_get(PointerRNA *ptr)
{
	LineStyleGeometryModifier_TipRemover *data = (LineStyleGeometryModifier_TipRemover *)(ptr->data);
	return (((data->modifier.flags) & 2) != 0);
}

void LineStyleGeometryModifier_TipRemover_expanded_set(PointerRNA *ptr, int value)
{
	LineStyleGeometryModifier_TipRemover *data = (LineStyleGeometryModifier_TipRemover *)(ptr->data);
	if (value) data->modifier.flags |= 2;
	else data->modifier.flags &= ~2;
}

float LineStyleGeometryModifier_TipRemover_tip_length_get(PointerRNA *ptr)
{
	LineStyleGeometryModifier_TipRemover *data = (LineStyleGeometryModifier_TipRemover *)(ptr->data);
	return (float)(data->tip_length);
}

void LineStyleGeometryModifier_TipRemover_tip_length_set(PointerRNA *ptr, float value)
{
	LineStyleGeometryModifier_TipRemover *data = (LineStyleGeometryModifier_TipRemover *)(ptr->data);
	data->tip_length = value;
}

int LineStyleGeometryModifier_Polygonalization_type_get(PointerRNA *ptr)
{
	LineStyleGeometryModifier_Polygonalization *data = (LineStyleGeometryModifier_Polygonalization *)(ptr->data);
	return (int)(data->modifier.type);
}

void LineStyleGeometryModifier_Polygonalization_name_get(PointerRNA *ptr, char *value)
{
	LineStyleGeometryModifier_Polygonalization *data = (LineStyleGeometryModifier_Polygonalization *)(ptr->data);
	BLI_strncpy_utf8(value, data->modifier.name, 64);
}

int LineStyleGeometryModifier_Polygonalization_name_length(PointerRNA *ptr)
{
	LineStyleGeometryModifier_Polygonalization *data = (LineStyleGeometryModifier_Polygonalization *)(ptr->data);
	return strlen(data->modifier.name);
}

void LineStyleGeometryModifier_Polygonalization_name_set(PointerRNA *ptr, const char *value)
{
	rna_LineStyleGeometryModifier_name_set(ptr, value);
}

int LineStyleGeometryModifier_Polygonalization_use_get(PointerRNA *ptr)
{
	LineStyleGeometryModifier_Polygonalization *data = (LineStyleGeometryModifier_Polygonalization *)(ptr->data);
	return (((data->modifier.flags) & 1) != 0);
}

void LineStyleGeometryModifier_Polygonalization_use_set(PointerRNA *ptr, int value)
{
	LineStyleGeometryModifier_Polygonalization *data = (LineStyleGeometryModifier_Polygonalization *)(ptr->data);
	if (value) data->modifier.flags |= 1;
	else data->modifier.flags &= ~1;
}

int LineStyleGeometryModifier_Polygonalization_expanded_get(PointerRNA *ptr)
{
	LineStyleGeometryModifier_Polygonalization *data = (LineStyleGeometryModifier_Polygonalization *)(ptr->data);
	return (((data->modifier.flags) & 2) != 0);
}

void LineStyleGeometryModifier_Polygonalization_expanded_set(PointerRNA *ptr, int value)
{
	LineStyleGeometryModifier_Polygonalization *data = (LineStyleGeometryModifier_Polygonalization *)(ptr->data);
	if (value) data->modifier.flags |= 2;
	else data->modifier.flags &= ~2;
}

float LineStyleGeometryModifier_Polygonalization_error_get(PointerRNA *ptr)
{
	LineStyleGeometryModifier_Polygonalization *data = (LineStyleGeometryModifier_Polygonalization *)(ptr->data);
	return (float)(data->error);
}

void LineStyleGeometryModifier_Polygonalization_error_set(PointerRNA *ptr, float value)
{
	LineStyleGeometryModifier_Polygonalization *data = (LineStyleGeometryModifier_Polygonalization *)(ptr->data);
	data->error = value;
}

int LineStyleGeometryModifier_GuidingLines_type_get(PointerRNA *ptr)
{
	LineStyleGeometryModifier_GuidingLines *data = (LineStyleGeometryModifier_GuidingLines *)(ptr->data);
	return (int)(data->modifier.type);
}

void LineStyleGeometryModifier_GuidingLines_name_get(PointerRNA *ptr, char *value)
{
	LineStyleGeometryModifier_GuidingLines *data = (LineStyleGeometryModifier_GuidingLines *)(ptr->data);
	BLI_strncpy_utf8(value, data->modifier.name, 64);
}

int LineStyleGeometryModifier_GuidingLines_name_length(PointerRNA *ptr)
{
	LineStyleGeometryModifier_GuidingLines *data = (LineStyleGeometryModifier_GuidingLines *)(ptr->data);
	return strlen(data->modifier.name);
}

void LineStyleGeometryModifier_GuidingLines_name_set(PointerRNA *ptr, const char *value)
{
	rna_LineStyleGeometryModifier_name_set(ptr, value);
}

int LineStyleGeometryModifier_GuidingLines_use_get(PointerRNA *ptr)
{
	LineStyleGeometryModifier_GuidingLines *data = (LineStyleGeometryModifier_GuidingLines *)(ptr->data);
	return (((data->modifier.flags) & 1) != 0);
}

void LineStyleGeometryModifier_GuidingLines_use_set(PointerRNA *ptr, int value)
{
	LineStyleGeometryModifier_GuidingLines *data = (LineStyleGeometryModifier_GuidingLines *)(ptr->data);
	if (value) data->modifier.flags |= 1;
	else data->modifier.flags &= ~1;
}

int LineStyleGeometryModifier_GuidingLines_expanded_get(PointerRNA *ptr)
{
	LineStyleGeometryModifier_GuidingLines *data = (LineStyleGeometryModifier_GuidingLines *)(ptr->data);
	return (((data->modifier.flags) & 2) != 0);
}

void LineStyleGeometryModifier_GuidingLines_expanded_set(PointerRNA *ptr, int value)
{
	LineStyleGeometryModifier_GuidingLines *data = (LineStyleGeometryModifier_GuidingLines *)(ptr->data);
	if (value) data->modifier.flags |= 2;
	else data->modifier.flags &= ~2;
}

float LineStyleGeometryModifier_GuidingLines_offset_get(PointerRNA *ptr)
{
	LineStyleGeometryModifier_GuidingLines *data = (LineStyleGeometryModifier_GuidingLines *)(ptr->data);
	return (float)(data->offset);
}

void LineStyleGeometryModifier_GuidingLines_offset_set(PointerRNA *ptr, float value)
{
	LineStyleGeometryModifier_GuidingLines *data = (LineStyleGeometryModifier_GuidingLines *)(ptr->data);
	data->offset = value;
}

int LineStyleGeometryModifier_Blueprint_type_get(PointerRNA *ptr)
{
	LineStyleGeometryModifier_Blueprint *data = (LineStyleGeometryModifier_Blueprint *)(ptr->data);
	return (int)(data->modifier.type);
}

void LineStyleGeometryModifier_Blueprint_name_get(PointerRNA *ptr, char *value)
{
	LineStyleGeometryModifier_Blueprint *data = (LineStyleGeometryModifier_Blueprint *)(ptr->data);
	BLI_strncpy_utf8(value, data->modifier.name, 64);
}

int LineStyleGeometryModifier_Blueprint_name_length(PointerRNA *ptr)
{
	LineStyleGeometryModifier_Blueprint *data = (LineStyleGeometryModifier_Blueprint *)(ptr->data);
	return strlen(data->modifier.name);
}

void LineStyleGeometryModifier_Blueprint_name_set(PointerRNA *ptr, const char *value)
{
	rna_LineStyleGeometryModifier_name_set(ptr, value);
}

int LineStyleGeometryModifier_Blueprint_use_get(PointerRNA *ptr)
{
	LineStyleGeometryModifier_Blueprint *data = (LineStyleGeometryModifier_Blueprint *)(ptr->data);
	return (((data->modifier.flags) & 1) != 0);
}

void LineStyleGeometryModifier_Blueprint_use_set(PointerRNA *ptr, int value)
{
	LineStyleGeometryModifier_Blueprint *data = (LineStyleGeometryModifier_Blueprint *)(ptr->data);
	if (value) data->modifier.flags |= 1;
	else data->modifier.flags &= ~1;
}

int LineStyleGeometryModifier_Blueprint_expanded_get(PointerRNA *ptr)
{
	LineStyleGeometryModifier_Blueprint *data = (LineStyleGeometryModifier_Blueprint *)(ptr->data);
	return (((data->modifier.flags) & 2) != 0);
}

void LineStyleGeometryModifier_Blueprint_expanded_set(PointerRNA *ptr, int value)
{
	LineStyleGeometryModifier_Blueprint *data = (LineStyleGeometryModifier_Blueprint *)(ptr->data);
	if (value) data->modifier.flags |= 2;
	else data->modifier.flags &= ~2;
}

int LineStyleGeometryModifier_Blueprint_shape_get(PointerRNA *ptr)
{
	LineStyleGeometryModifier_Blueprint *data = (LineStyleGeometryModifier_Blueprint *)(ptr->data);
	return ((data->flags) & 7);
}

void LineStyleGeometryModifier_Blueprint_shape_set(PointerRNA *ptr, int value)
{
	LineStyleGeometryModifier_Blueprint *data = (LineStyleGeometryModifier_Blueprint *)(ptr->data);
	data->flags &= ~7;
	data->flags |= value;
}

int LineStyleGeometryModifier_Blueprint_rounds_get(PointerRNA *ptr)
{
	LineStyleGeometryModifier_Blueprint *data = (LineStyleGeometryModifier_Blueprint *)(ptr->data);
	return (int)(data->rounds);
}

void LineStyleGeometryModifier_Blueprint_rounds_set(PointerRNA *ptr, int value)
{
	LineStyleGeometryModifier_Blueprint *data = (LineStyleGeometryModifier_Blueprint *)(ptr->data);
	data->rounds = CLAMPIS(value, 1, 1000);
}

float LineStyleGeometryModifier_Blueprint_backbone_length_get(PointerRNA *ptr)
{
	LineStyleGeometryModifier_Blueprint *data = (LineStyleGeometryModifier_Blueprint *)(ptr->data);
	return (float)(data->backbone_length);
}

void LineStyleGeometryModifier_Blueprint_backbone_length_set(PointerRNA *ptr, float value)
{
	LineStyleGeometryModifier_Blueprint *data = (LineStyleGeometryModifier_Blueprint *)(ptr->data);
	data->backbone_length = value;
}

int LineStyleGeometryModifier_Blueprint_random_radius_get(PointerRNA *ptr)
{
	LineStyleGeometryModifier_Blueprint *data = (LineStyleGeometryModifier_Blueprint *)(ptr->data);
	return (int)(data->random_radius);
}

void LineStyleGeometryModifier_Blueprint_random_radius_set(PointerRNA *ptr, int value)
{
	LineStyleGeometryModifier_Blueprint *data = (LineStyleGeometryModifier_Blueprint *)(ptr->data);
	data->random_radius = CLAMPIS(value, 0, INT_MAX);
}

int LineStyleGeometryModifier_Blueprint_random_center_get(PointerRNA *ptr)
{
	LineStyleGeometryModifier_Blueprint *data = (LineStyleGeometryModifier_Blueprint *)(ptr->data);
	return (int)(data->random_center);
}

void LineStyleGeometryModifier_Blueprint_random_center_set(PointerRNA *ptr, int value)
{
	LineStyleGeometryModifier_Blueprint *data = (LineStyleGeometryModifier_Blueprint *)(ptr->data);
	data->random_center = CLAMPIS(value, 0, INT_MAX);
}

int LineStyleGeometryModifier_Blueprint_random_backbone_get(PointerRNA *ptr)
{
	LineStyleGeometryModifier_Blueprint *data = (LineStyleGeometryModifier_Blueprint *)(ptr->data);
	return (int)(data->random_backbone);
}

void LineStyleGeometryModifier_Blueprint_random_backbone_set(PointerRNA *ptr, int value)
{
	LineStyleGeometryModifier_Blueprint *data = (LineStyleGeometryModifier_Blueprint *)(ptr->data);
	data->random_backbone = CLAMPIS(value, 0, INT_MAX);
}

int LineStyleGeometryModifier_2DOffset_type_get(PointerRNA *ptr)
{
	LineStyleGeometryModifier_2DOffset *data = (LineStyleGeometryModifier_2DOffset *)(ptr->data);
	return (int)(data->modifier.type);
}

void LineStyleGeometryModifier_2DOffset_name_get(PointerRNA *ptr, char *value)
{
	LineStyleGeometryModifier_2DOffset *data = (LineStyleGeometryModifier_2DOffset *)(ptr->data);
	BLI_strncpy_utf8(value, data->modifier.name, 64);
}

int LineStyleGeometryModifier_2DOffset_name_length(PointerRNA *ptr)
{
	LineStyleGeometryModifier_2DOffset *data = (LineStyleGeometryModifier_2DOffset *)(ptr->data);
	return strlen(data->modifier.name);
}

void LineStyleGeometryModifier_2DOffset_name_set(PointerRNA *ptr, const char *value)
{
	rna_LineStyleGeometryModifier_name_set(ptr, value);
}

int LineStyleGeometryModifier_2DOffset_use_get(PointerRNA *ptr)
{
	LineStyleGeometryModifier_2DOffset *data = (LineStyleGeometryModifier_2DOffset *)(ptr->data);
	return (((data->modifier.flags) & 1) != 0);
}

void LineStyleGeometryModifier_2DOffset_use_set(PointerRNA *ptr, int value)
{
	LineStyleGeometryModifier_2DOffset *data = (LineStyleGeometryModifier_2DOffset *)(ptr->data);
	if (value) data->modifier.flags |= 1;
	else data->modifier.flags &= ~1;
}

int LineStyleGeometryModifier_2DOffset_expanded_get(PointerRNA *ptr)
{
	LineStyleGeometryModifier_2DOffset *data = (LineStyleGeometryModifier_2DOffset *)(ptr->data);
	return (((data->modifier.flags) & 2) != 0);
}

void LineStyleGeometryModifier_2DOffset_expanded_set(PointerRNA *ptr, int value)
{
	LineStyleGeometryModifier_2DOffset *data = (LineStyleGeometryModifier_2DOffset *)(ptr->data);
	if (value) data->modifier.flags |= 2;
	else data->modifier.flags &= ~2;
}

float LineStyleGeometryModifier_2DOffset_start_get(PointerRNA *ptr)
{
	LineStyleGeometryModifier_2DOffset *data = (LineStyleGeometryModifier_2DOffset *)(ptr->data);
	return (float)(data->start);
}

void LineStyleGeometryModifier_2DOffset_start_set(PointerRNA *ptr, float value)
{
	LineStyleGeometryModifier_2DOffset *data = (LineStyleGeometryModifier_2DOffset *)(ptr->data);
	data->start = value;
}

float LineStyleGeometryModifier_2DOffset_end_get(PointerRNA *ptr)
{
	LineStyleGeometryModifier_2DOffset *data = (LineStyleGeometryModifier_2DOffset *)(ptr->data);
	return (float)(data->end);
}

void LineStyleGeometryModifier_2DOffset_end_set(PointerRNA *ptr, float value)
{
	LineStyleGeometryModifier_2DOffset *data = (LineStyleGeometryModifier_2DOffset *)(ptr->data);
	data->end = value;
}

float LineStyleGeometryModifier_2DOffset_x_get(PointerRNA *ptr)
{
	LineStyleGeometryModifier_2DOffset *data = (LineStyleGeometryModifier_2DOffset *)(ptr->data);
	return (float)(data->x);
}

void LineStyleGeometryModifier_2DOffset_x_set(PointerRNA *ptr, float value)
{
	LineStyleGeometryModifier_2DOffset *data = (LineStyleGeometryModifier_2DOffset *)(ptr->data);
	data->x = value;
}

float LineStyleGeometryModifier_2DOffset_y_get(PointerRNA *ptr)
{
	LineStyleGeometryModifier_2DOffset *data = (LineStyleGeometryModifier_2DOffset *)(ptr->data);
	return (float)(data->y);
}

void LineStyleGeometryModifier_2DOffset_y_set(PointerRNA *ptr, float value)
{
	LineStyleGeometryModifier_2DOffset *data = (LineStyleGeometryModifier_2DOffset *)(ptr->data);
	data->y = value;
}

int LineStyleGeometryModifier_2DTransform_type_get(PointerRNA *ptr)
{
	LineStyleGeometryModifier_2DTransform *data = (LineStyleGeometryModifier_2DTransform *)(ptr->data);
	return (int)(data->modifier.type);
}

void LineStyleGeometryModifier_2DTransform_name_get(PointerRNA *ptr, char *value)
{
	LineStyleGeometryModifier_2DTransform *data = (LineStyleGeometryModifier_2DTransform *)(ptr->data);
	BLI_strncpy_utf8(value, data->modifier.name, 64);
}

int LineStyleGeometryModifier_2DTransform_name_length(PointerRNA *ptr)
{
	LineStyleGeometryModifier_2DTransform *data = (LineStyleGeometryModifier_2DTransform *)(ptr->data);
	return strlen(data->modifier.name);
}

void LineStyleGeometryModifier_2DTransform_name_set(PointerRNA *ptr, const char *value)
{
	rna_LineStyleGeometryModifier_name_set(ptr, value);
}

int LineStyleGeometryModifier_2DTransform_use_get(PointerRNA *ptr)
{
	LineStyleGeometryModifier_2DTransform *data = (LineStyleGeometryModifier_2DTransform *)(ptr->data);
	return (((data->modifier.flags) & 1) != 0);
}

void LineStyleGeometryModifier_2DTransform_use_set(PointerRNA *ptr, int value)
{
	LineStyleGeometryModifier_2DTransform *data = (LineStyleGeometryModifier_2DTransform *)(ptr->data);
	if (value) data->modifier.flags |= 1;
	else data->modifier.flags &= ~1;
}

int LineStyleGeometryModifier_2DTransform_expanded_get(PointerRNA *ptr)
{
	LineStyleGeometryModifier_2DTransform *data = (LineStyleGeometryModifier_2DTransform *)(ptr->data);
	return (((data->modifier.flags) & 2) != 0);
}

void LineStyleGeometryModifier_2DTransform_expanded_set(PointerRNA *ptr, int value)
{
	LineStyleGeometryModifier_2DTransform *data = (LineStyleGeometryModifier_2DTransform *)(ptr->data);
	if (value) data->modifier.flags |= 2;
	else data->modifier.flags &= ~2;
}

int LineStyleGeometryModifier_2DTransform_pivot_get(PointerRNA *ptr)
{
	LineStyleGeometryModifier_2DTransform *data = (LineStyleGeometryModifier_2DTransform *)(ptr->data);
	return (int)(data->pivot);
}

void LineStyleGeometryModifier_2DTransform_pivot_set(PointerRNA *ptr, int value)
{
	LineStyleGeometryModifier_2DTransform *data = (LineStyleGeometryModifier_2DTransform *)(ptr->data);
	data->pivot = value;
}

float LineStyleGeometryModifier_2DTransform_scale_x_get(PointerRNA *ptr)
{
	LineStyleGeometryModifier_2DTransform *data = (LineStyleGeometryModifier_2DTransform *)(ptr->data);
	return (float)(data->scale_x);
}

void LineStyleGeometryModifier_2DTransform_scale_x_set(PointerRNA *ptr, float value)
{
	LineStyleGeometryModifier_2DTransform *data = (LineStyleGeometryModifier_2DTransform *)(ptr->data);
	data->scale_x = value;
}

float LineStyleGeometryModifier_2DTransform_scale_y_get(PointerRNA *ptr)
{
	LineStyleGeometryModifier_2DTransform *data = (LineStyleGeometryModifier_2DTransform *)(ptr->data);
	return (float)(data->scale_y);
}

void LineStyleGeometryModifier_2DTransform_scale_y_set(PointerRNA *ptr, float value)
{
	LineStyleGeometryModifier_2DTransform *data = (LineStyleGeometryModifier_2DTransform *)(ptr->data);
	data->scale_y = value;
}

float LineStyleGeometryModifier_2DTransform_angle_get(PointerRNA *ptr)
{
	LineStyleGeometryModifier_2DTransform *data = (LineStyleGeometryModifier_2DTransform *)(ptr->data);
	return (float)(data->angle);
}

void LineStyleGeometryModifier_2DTransform_angle_set(PointerRNA *ptr, float value)
{
	LineStyleGeometryModifier_2DTransform *data = (LineStyleGeometryModifier_2DTransform *)(ptr->data);
	data->angle = value;
}

float LineStyleGeometryModifier_2DTransform_pivot_u_get(PointerRNA *ptr)
{
	LineStyleGeometryModifier_2DTransform *data = (LineStyleGeometryModifier_2DTransform *)(ptr->data);
	return (float)(data->pivot_u);
}

void LineStyleGeometryModifier_2DTransform_pivot_u_set(PointerRNA *ptr, float value)
{
	LineStyleGeometryModifier_2DTransform *data = (LineStyleGeometryModifier_2DTransform *)(ptr->data);
	data->pivot_u = CLAMPIS(value, 0.0f, 1.0f);
}

float LineStyleGeometryModifier_2DTransform_pivot_x_get(PointerRNA *ptr)
{
	LineStyleGeometryModifier_2DTransform *data = (LineStyleGeometryModifier_2DTransform *)(ptr->data);
	return (float)(data->pivot_x);
}

void LineStyleGeometryModifier_2DTransform_pivot_x_set(PointerRNA *ptr, float value)
{
	LineStyleGeometryModifier_2DTransform *data = (LineStyleGeometryModifier_2DTransform *)(ptr->data);
	data->pivot_x = value;
}

float LineStyleGeometryModifier_2DTransform_pivot_y_get(PointerRNA *ptr)
{
	LineStyleGeometryModifier_2DTransform *data = (LineStyleGeometryModifier_2DTransform *)(ptr->data);
	return (float)(data->pivot_y);
}

void LineStyleGeometryModifier_2DTransform_pivot_y_set(PointerRNA *ptr, float value)
{
	LineStyleGeometryModifier_2DTransform *data = (LineStyleGeometryModifier_2DTransform *)(ptr->data);
	data->pivot_y = value;
}

static PointerRNA FreestyleLineStyle_texture_slots_get(CollectionPropertyIterator *iter)
{
	return rna_pointer_inherit_refine(&iter->parent, &RNA_LineStyleTextureSlot, rna_iterator_array_dereference_get(iter));
}

void FreestyleLineStyle_texture_slots_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

	memset(iter, 0, sizeof(*iter));
	iter->parent = *ptr;
	iter->prop = (PropertyRNA *)&rna_FreestyleLineStyle_texture_slots;

	rna_LineStyle_mtex_begin(iter, ptr);

	if (iter->valid)
		iter->ptr = FreestyleLineStyle_texture_slots_get(iter);
}

void FreestyleLineStyle_texture_slots_next(CollectionPropertyIterator *iter)
{
	rna_iterator_array_next(iter);

	if (iter->valid)
		iter->ptr = FreestyleLineStyle_texture_slots_get(iter);
}

void FreestyleLineStyle_texture_slots_end(CollectionPropertyIterator *iter)
{
	rna_iterator_array_end(iter);
}

PointerRNA FreestyleLineStyle_active_texture_get(PointerRNA *ptr)
{
	return rna_LineStyle_active_texture_get(ptr);
}

void FreestyleLineStyle_active_texture_set(PointerRNA *ptr, PointerRNA value)
{
	rna_LineStyle_active_texture_set(ptr, value);
}

int FreestyleLineStyle_active_texture_index_get(PointerRNA *ptr)
{
	FreestyleLineStyle *data = (FreestyleLineStyle *)(ptr->data);
	return (int)(data->texact);
}

void FreestyleLineStyle_active_texture_index_set(PointerRNA *ptr, int value)
{
	FreestyleLineStyle *data = (FreestyleLineStyle *)(ptr->data);
	data->texact = CLAMPIS(value, 0, 17);
}

int FreestyleLineStyle_panel_get(PointerRNA *ptr)
{
	FreestyleLineStyle *data = (FreestyleLineStyle *)(ptr->data);
	return ((data->panel) & 7);
}

void FreestyleLineStyle_panel_set(PointerRNA *ptr, int value)
{
	FreestyleLineStyle *data = (FreestyleLineStyle *)(ptr->data);
	data->panel &= ~7;
	data->panel |= value;
}

void FreestyleLineStyle_color_get(PointerRNA *ptr, float values[3])
{
	FreestyleLineStyle *data = (FreestyleLineStyle *)(ptr->data);
	unsigned int i;

	for (i = 0; i < 3; i++) {
		values[i] = (float)((&data->r)[i]);
	}
}

void FreestyleLineStyle_color_set(PointerRNA *ptr, const float values[3])
{
	FreestyleLineStyle *data = (FreestyleLineStyle *)(ptr->data);
	unsigned int i;

	for (i = 0; i < 3; i++) {
		(&data->r)[i] = CLAMPIS(values[i], 0.0f, FLT_MAX);
	}
}

float FreestyleLineStyle_alpha_get(PointerRNA *ptr)
{
	FreestyleLineStyle *data = (FreestyleLineStyle *)(ptr->data);
	return (float)(data->alpha);
}

void FreestyleLineStyle_alpha_set(PointerRNA *ptr, float value)
{
	FreestyleLineStyle *data = (FreestyleLineStyle *)(ptr->data);
	data->alpha = CLAMPIS(value, 0.0f, 1.0f);
}

float FreestyleLineStyle_thickness_get(PointerRNA *ptr)
{
	FreestyleLineStyle *data = (FreestyleLineStyle *)(ptr->data);
	return (float)(data->thickness);
}

void FreestyleLineStyle_thickness_set(PointerRNA *ptr, float value)
{
	FreestyleLineStyle *data = (FreestyleLineStyle *)(ptr->data);
	data->thickness = CLAMPIS(value, 0.0f, 10000.0f);
}

int FreestyleLineStyle_thickness_position_get(PointerRNA *ptr)
{
	FreestyleLineStyle *data = (FreestyleLineStyle *)(ptr->data);
	return ((data->thickness_position) & 7);
}

void FreestyleLineStyle_thickness_position_set(PointerRNA *ptr, int value)
{
	FreestyleLineStyle *data = (FreestyleLineStyle *)(ptr->data);
	data->thickness_position &= ~7;
	data->thickness_position |= value;
}

float FreestyleLineStyle_thickness_ratio_get(PointerRNA *ptr)
{
	FreestyleLineStyle *data = (FreestyleLineStyle *)(ptr->data);
	return (float)(data->thickness_ratio);
}

void FreestyleLineStyle_thickness_ratio_set(PointerRNA *ptr, float value)
{
	FreestyleLineStyle *data = (FreestyleLineStyle *)(ptr->data);
	data->thickness_ratio = CLAMPIS(value, 0.0f, 1.0f);
}

static PointerRNA FreestyleLineStyle_color_modifiers_get(CollectionPropertyIterator *iter)
{
	return rna_pointer_inherit_refine(&iter->parent, &RNA_LineStyleColorModifier, rna_iterator_listbase_get(iter));
}

void FreestyleLineStyle_color_modifiers_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{
	FreestyleLineStyle *data = (FreestyleLineStyle *)(ptr->data);

	memset(iter, 0, sizeof(*iter));
	iter->parent = *ptr;
	iter->prop = (PropertyRNA *)&rna_FreestyleLineStyle_color_modifiers;

	rna_iterator_listbase_begin(iter, &data->color_modifiers, NULL);

	if (iter->valid)
		iter->ptr = FreestyleLineStyle_color_modifiers_get(iter);
}

void FreestyleLineStyle_color_modifiers_next(CollectionPropertyIterator *iter)
{
	rna_iterator_listbase_next(iter);

	if (iter->valid)
		iter->ptr = FreestyleLineStyle_color_modifiers_get(iter);
}

void FreestyleLineStyle_color_modifiers_end(CollectionPropertyIterator *iter)
{
	rna_iterator_listbase_end(iter);
}

int FreestyleLineStyle_color_modifiers_lookup_int(PointerRNA *ptr, int index, PointerRNA *r_ptr)
{
	int found = 0;
	CollectionPropertyIterator iter;

	FreestyleLineStyle_color_modifiers_begin(&iter, ptr);

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
		if (found) *r_ptr = FreestyleLineStyle_color_modifiers_get(&iter);
	}

	FreestyleLineStyle_color_modifiers_end(&iter);

	return found;
}

static PointerRNA FreestyleLineStyle_alpha_modifiers_get(CollectionPropertyIterator *iter)
{
	return rna_pointer_inherit_refine(&iter->parent, &RNA_LineStyleAlphaModifier, rna_iterator_listbase_get(iter));
}

void FreestyleLineStyle_alpha_modifiers_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{
	FreestyleLineStyle *data = (FreestyleLineStyle *)(ptr->data);

	memset(iter, 0, sizeof(*iter));
	iter->parent = *ptr;
	iter->prop = (PropertyRNA *)&rna_FreestyleLineStyle_alpha_modifiers;

	rna_iterator_listbase_begin(iter, &data->alpha_modifiers, NULL);

	if (iter->valid)
		iter->ptr = FreestyleLineStyle_alpha_modifiers_get(iter);
}

void FreestyleLineStyle_alpha_modifiers_next(CollectionPropertyIterator *iter)
{
	rna_iterator_listbase_next(iter);

	if (iter->valid)
		iter->ptr = FreestyleLineStyle_alpha_modifiers_get(iter);
}

void FreestyleLineStyle_alpha_modifiers_end(CollectionPropertyIterator *iter)
{
	rna_iterator_listbase_end(iter);
}

int FreestyleLineStyle_alpha_modifiers_lookup_int(PointerRNA *ptr, int index, PointerRNA *r_ptr)
{
	int found = 0;
	CollectionPropertyIterator iter;

	FreestyleLineStyle_alpha_modifiers_begin(&iter, ptr);

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
		if (found) *r_ptr = FreestyleLineStyle_alpha_modifiers_get(&iter);
	}

	FreestyleLineStyle_alpha_modifiers_end(&iter);

	return found;
}

static PointerRNA FreestyleLineStyle_thickness_modifiers_get(CollectionPropertyIterator *iter)
{
	return rna_pointer_inherit_refine(&iter->parent, &RNA_LineStyleThicknessModifier, rna_iterator_listbase_get(iter));
}

void FreestyleLineStyle_thickness_modifiers_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{
	FreestyleLineStyle *data = (FreestyleLineStyle *)(ptr->data);

	memset(iter, 0, sizeof(*iter));
	iter->parent = *ptr;
	iter->prop = (PropertyRNA *)&rna_FreestyleLineStyle_thickness_modifiers;

	rna_iterator_listbase_begin(iter, &data->thickness_modifiers, NULL);

	if (iter->valid)
		iter->ptr = FreestyleLineStyle_thickness_modifiers_get(iter);
}

void FreestyleLineStyle_thickness_modifiers_next(CollectionPropertyIterator *iter)
{
	rna_iterator_listbase_next(iter);

	if (iter->valid)
		iter->ptr = FreestyleLineStyle_thickness_modifiers_get(iter);
}

void FreestyleLineStyle_thickness_modifiers_end(CollectionPropertyIterator *iter)
{
	rna_iterator_listbase_end(iter);
}

int FreestyleLineStyle_thickness_modifiers_lookup_int(PointerRNA *ptr, int index, PointerRNA *r_ptr)
{
	int found = 0;
	CollectionPropertyIterator iter;

	FreestyleLineStyle_thickness_modifiers_begin(&iter, ptr);

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
		if (found) *r_ptr = FreestyleLineStyle_thickness_modifiers_get(&iter);
	}

	FreestyleLineStyle_thickness_modifiers_end(&iter);

	return found;
}

static PointerRNA FreestyleLineStyle_geometry_modifiers_get(CollectionPropertyIterator *iter)
{
	return rna_pointer_inherit_refine(&iter->parent, &RNA_LineStyleGeometryModifier, rna_iterator_listbase_get(iter));
}

void FreestyleLineStyle_geometry_modifiers_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{
	FreestyleLineStyle *data = (FreestyleLineStyle *)(ptr->data);

	memset(iter, 0, sizeof(*iter));
	iter->parent = *ptr;
	iter->prop = (PropertyRNA *)&rna_FreestyleLineStyle_geometry_modifiers;

	rna_iterator_listbase_begin(iter, &data->geometry_modifiers, NULL);

	if (iter->valid)
		iter->ptr = FreestyleLineStyle_geometry_modifiers_get(iter);
}

void FreestyleLineStyle_geometry_modifiers_next(CollectionPropertyIterator *iter)
{
	rna_iterator_listbase_next(iter);

	if (iter->valid)
		iter->ptr = FreestyleLineStyle_geometry_modifiers_get(iter);
}

void FreestyleLineStyle_geometry_modifiers_end(CollectionPropertyIterator *iter)
{
	rna_iterator_listbase_end(iter);
}

int FreestyleLineStyle_geometry_modifiers_lookup_int(PointerRNA *ptr, int index, PointerRNA *r_ptr)
{
	int found = 0;
	CollectionPropertyIterator iter;

	FreestyleLineStyle_geometry_modifiers_begin(&iter, ptr);

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
		if (found) *r_ptr = FreestyleLineStyle_geometry_modifiers_get(&iter);
	}

	FreestyleLineStyle_geometry_modifiers_end(&iter);

	return found;
}

int FreestyleLineStyle_use_chaining_get(PointerRNA *ptr)
{
	FreestyleLineStyle *data = (FreestyleLineStyle *)(ptr->data);
	return !(((data->flag) & 64) != 0);
}

void FreestyleLineStyle_use_chaining_set(PointerRNA *ptr, int value)
{
	FreestyleLineStyle *data = (FreestyleLineStyle *)(ptr->data);
	if (!value) data->flag |= 64;
	else data->flag &= ~64;
}

int FreestyleLineStyle_chaining_get(PointerRNA *ptr)
{
	FreestyleLineStyle *data = (FreestyleLineStyle *)(ptr->data);
	return (int)(data->chaining);
}

void FreestyleLineStyle_chaining_set(PointerRNA *ptr, int value)
{
	FreestyleLineStyle *data = (FreestyleLineStyle *)(ptr->data);
	data->chaining = value;
}

int FreestyleLineStyle_rounds_get(PointerRNA *ptr)
{
	FreestyleLineStyle *data = (FreestyleLineStyle *)(ptr->data);
	return (int)(data->rounds);
}

void FreestyleLineStyle_rounds_set(PointerRNA *ptr, int value)
{
	FreestyleLineStyle *data = (FreestyleLineStyle *)(ptr->data);
	data->rounds = CLAMPIS(value, 1, 1000);
}

int FreestyleLineStyle_use_same_object_get(PointerRNA *ptr)
{
	FreestyleLineStyle *data = (FreestyleLineStyle *)(ptr->data);
	return (((data->flag) & 2) != 0);
}

void FreestyleLineStyle_use_same_object_set(PointerRNA *ptr, int value)
{
	FreestyleLineStyle *data = (FreestyleLineStyle *)(ptr->data);
	if (value) data->flag |= 2;
	else data->flag &= ~2;
}

int FreestyleLineStyle_use_split_length_get(PointerRNA *ptr)
{
	FreestyleLineStyle *data = (FreestyleLineStyle *)(ptr->data);
	return (((data->flag) & 512) != 0);
}

void FreestyleLineStyle_use_split_length_set(PointerRNA *ptr, int value)
{
	FreestyleLineStyle *data = (FreestyleLineStyle *)(ptr->data);
	if (value) data->flag |= 512;
	else data->flag &= ~512;
}

float FreestyleLineStyle_split_length_get(PointerRNA *ptr)
{
	FreestyleLineStyle *data = (FreestyleLineStyle *)(ptr->data);
	return (float)(data->split_length);
}

void FreestyleLineStyle_split_length_set(PointerRNA *ptr, float value)
{
	FreestyleLineStyle *data = (FreestyleLineStyle *)(ptr->data);
	data->split_length = CLAMPIS(value, 0.0f, 10000.0f);
}

int FreestyleLineStyle_use_angle_min_get(PointerRNA *ptr)
{
	FreestyleLineStyle *data = (FreestyleLineStyle *)(ptr->data);
	return (((data->flag) & 128) != 0);
}

void FreestyleLineStyle_use_angle_min_set(PointerRNA *ptr, int value)
{
	FreestyleLineStyle *data = (FreestyleLineStyle *)(ptr->data);
	if (value) data->flag |= 128;
	else data->flag &= ~128;
}

float FreestyleLineStyle_angle_min_get(PointerRNA *ptr)
{
	FreestyleLineStyle *data = (FreestyleLineStyle *)(ptr->data);
	return (float)(data->min_angle);
}

void FreestyleLineStyle_angle_min_set(PointerRNA *ptr, float value)
{
	FreestyleLineStyle *data = (FreestyleLineStyle *)(ptr->data);
	data->min_angle = CLAMPIS(value, 0.0f, 3.1415927410f);
}

int FreestyleLineStyle_use_angle_max_get(PointerRNA *ptr)
{
	FreestyleLineStyle *data = (FreestyleLineStyle *)(ptr->data);
	return (((data->flag) & 256) != 0);
}

void FreestyleLineStyle_use_angle_max_set(PointerRNA *ptr, int value)
{
	FreestyleLineStyle *data = (FreestyleLineStyle *)(ptr->data);
	if (value) data->flag |= 256;
	else data->flag &= ~256;
}

float FreestyleLineStyle_angle_max_get(PointerRNA *ptr)
{
	FreestyleLineStyle *data = (FreestyleLineStyle *)(ptr->data);
	return (float)(data->max_angle);
}

void FreestyleLineStyle_angle_max_set(PointerRNA *ptr, float value)
{
	FreestyleLineStyle *data = (FreestyleLineStyle *)(ptr->data);
	data->max_angle = CLAMPIS(value, 0.0f, 3.1415927410f);
}

int FreestyleLineStyle_use_length_min_get(PointerRNA *ptr)
{
	FreestyleLineStyle *data = (FreestyleLineStyle *)(ptr->data);
	return (((data->flag) & 16) != 0);
}

void FreestyleLineStyle_use_length_min_set(PointerRNA *ptr, int value)
{
	FreestyleLineStyle *data = (FreestyleLineStyle *)(ptr->data);
	if (value) data->flag |= 16;
	else data->flag &= ~16;
}

float FreestyleLineStyle_length_min_get(PointerRNA *ptr)
{
	FreestyleLineStyle *data = (FreestyleLineStyle *)(ptr->data);
	return (float)(data->min_length);
}

void FreestyleLineStyle_length_min_set(PointerRNA *ptr, float value)
{
	FreestyleLineStyle *data = (FreestyleLineStyle *)(ptr->data);
	data->min_length = CLAMPIS(value, 0.0f, 10000.0f);
}

int FreestyleLineStyle_use_length_max_get(PointerRNA *ptr)
{
	FreestyleLineStyle *data = (FreestyleLineStyle *)(ptr->data);
	return (((data->flag) & 32) != 0);
}

void FreestyleLineStyle_use_length_max_set(PointerRNA *ptr, int value)
{
	FreestyleLineStyle *data = (FreestyleLineStyle *)(ptr->data);
	if (value) data->flag |= 32;
	else data->flag &= ~32;
}

float FreestyleLineStyle_length_max_get(PointerRNA *ptr)
{
	FreestyleLineStyle *data = (FreestyleLineStyle *)(ptr->data);
	return (float)(data->max_length);
}

void FreestyleLineStyle_length_max_set(PointerRNA *ptr, float value)
{
	FreestyleLineStyle *data = (FreestyleLineStyle *)(ptr->data);
	data->max_length = CLAMPIS(value, 0.0f, 10000.0f);
}

int FreestyleLineStyle_use_chain_count_get(PointerRNA *ptr)
{
	FreestyleLineStyle *data = (FreestyleLineStyle *)(ptr->data);
	return (((data->flag) & 16384) != 0);
}

void FreestyleLineStyle_use_chain_count_set(PointerRNA *ptr, int value)
{
	FreestyleLineStyle *data = (FreestyleLineStyle *)(ptr->data);
	if (value) data->flag |= 16384;
	else data->flag &= ~16384;
}

int FreestyleLineStyle_chain_count_get(PointerRNA *ptr)
{
	FreestyleLineStyle *data = (FreestyleLineStyle *)(ptr->data);
	return (int)(data->chain_count);
}

void FreestyleLineStyle_chain_count_set(PointerRNA *ptr, int value)
{
	FreestyleLineStyle *data = (FreestyleLineStyle *)(ptr->data);
	data->chain_count = CLAMPIS(value, 0, INT_MAX);
}

int FreestyleLineStyle_use_split_pattern_get(PointerRNA *ptr)
{
	FreestyleLineStyle *data = (FreestyleLineStyle *)(ptr->data);
	return (((data->flag) & 1024) != 0);
}

void FreestyleLineStyle_use_split_pattern_set(PointerRNA *ptr, int value)
{
	FreestyleLineStyle *data = (FreestyleLineStyle *)(ptr->data);
	if (value) data->flag |= 1024;
	else data->flag &= ~1024;
}

int FreestyleLineStyle_split_dash1_get(PointerRNA *ptr)
{
	FreestyleLineStyle *data = (FreestyleLineStyle *)(ptr->data);
	return (int)(data->split_dash1);
}

void FreestyleLineStyle_split_dash1_set(PointerRNA *ptr, int value)
{
	FreestyleLineStyle *data = (FreestyleLineStyle *)(ptr->data);
	data->split_dash1 = CLAMPIS(value, 0, 65535);
}

int FreestyleLineStyle_split_gap1_get(PointerRNA *ptr)
{
	FreestyleLineStyle *data = (FreestyleLineStyle *)(ptr->data);
	return (int)(data->split_gap1);
}

void FreestyleLineStyle_split_gap1_set(PointerRNA *ptr, int value)
{
	FreestyleLineStyle *data = (FreestyleLineStyle *)(ptr->data);
	data->split_gap1 = CLAMPIS(value, 0, 65535);
}

int FreestyleLineStyle_split_dash2_get(PointerRNA *ptr)
{
	FreestyleLineStyle *data = (FreestyleLineStyle *)(ptr->data);
	return (int)(data->split_dash2);
}

void FreestyleLineStyle_split_dash2_set(PointerRNA *ptr, int value)
{
	FreestyleLineStyle *data = (FreestyleLineStyle *)(ptr->data);
	data->split_dash2 = CLAMPIS(value, 0, 65535);
}

int FreestyleLineStyle_split_gap2_get(PointerRNA *ptr)
{
	FreestyleLineStyle *data = (FreestyleLineStyle *)(ptr->data);
	return (int)(data->split_gap2);
}

void FreestyleLineStyle_split_gap2_set(PointerRNA *ptr, int value)
{
	FreestyleLineStyle *data = (FreestyleLineStyle *)(ptr->data);
	data->split_gap2 = CLAMPIS(value, 0, 65535);
}

int FreestyleLineStyle_split_dash3_get(PointerRNA *ptr)
{
	FreestyleLineStyle *data = (FreestyleLineStyle *)(ptr->data);
	return (int)(data->split_dash3);
}

void FreestyleLineStyle_split_dash3_set(PointerRNA *ptr, int value)
{
	FreestyleLineStyle *data = (FreestyleLineStyle *)(ptr->data);
	data->split_dash3 = CLAMPIS(value, 0, 65535);
}

int FreestyleLineStyle_split_gap3_get(PointerRNA *ptr)
{
	FreestyleLineStyle *data = (FreestyleLineStyle *)(ptr->data);
	return (int)(data->split_gap3);
}

void FreestyleLineStyle_split_gap3_set(PointerRNA *ptr, int value)
{
	FreestyleLineStyle *data = (FreestyleLineStyle *)(ptr->data);
	data->split_gap3 = CLAMPIS(value, 0, 65535);
}

int FreestyleLineStyle_material_boundary_get(PointerRNA *ptr)
{
	FreestyleLineStyle *data = (FreestyleLineStyle *)(ptr->data);
	return (((data->flag) & 8) != 0);
}

void FreestyleLineStyle_material_boundary_set(PointerRNA *ptr, int value)
{
	FreestyleLineStyle *data = (FreestyleLineStyle *)(ptr->data);
	if (value) data->flag |= 8;
	else data->flag &= ~8;
}

int FreestyleLineStyle_use_sorting_get(PointerRNA *ptr)
{
	FreestyleLineStyle *data = (FreestyleLineStyle *)(ptr->data);
	return !(((data->flag) & 2048) != 0);
}

void FreestyleLineStyle_use_sorting_set(PointerRNA *ptr, int value)
{
	FreestyleLineStyle *data = (FreestyleLineStyle *)(ptr->data);
	if (!value) data->flag |= 2048;
	else data->flag &= ~2048;
}

int FreestyleLineStyle_sort_key_get(PointerRNA *ptr)
{
	FreestyleLineStyle *data = (FreestyleLineStyle *)(ptr->data);
	return (int)(data->sort_key);
}

void FreestyleLineStyle_sort_key_set(PointerRNA *ptr, int value)
{
	FreestyleLineStyle *data = (FreestyleLineStyle *)(ptr->data);
	data->sort_key = value;
}

int FreestyleLineStyle_sort_order_get(PointerRNA *ptr)
{
	FreestyleLineStyle *data = (FreestyleLineStyle *)(ptr->data);
	return ((data->flag) & 4096);
}

void FreestyleLineStyle_sort_order_set(PointerRNA *ptr, int value)
{
	FreestyleLineStyle *data = (FreestyleLineStyle *)(ptr->data);
	data->flag &= ~4096;
	data->flag |= value;
}

int FreestyleLineStyle_integration_type_get(PointerRNA *ptr)
{
	FreestyleLineStyle *data = (FreestyleLineStyle *)(ptr->data);
	return (int)(data->integration_type);
}

void FreestyleLineStyle_integration_type_set(PointerRNA *ptr, int value)
{
	FreestyleLineStyle *data = (FreestyleLineStyle *)(ptr->data);
	data->integration_type = value;
}

int FreestyleLineStyle_use_dashed_line_get(PointerRNA *ptr)
{
	FreestyleLineStyle *data = (FreestyleLineStyle *)(ptr->data);
	return (((data->flag) & 4) != 0);
}

void FreestyleLineStyle_use_dashed_line_set(PointerRNA *ptr, int value)
{
	FreestyleLineStyle *data = (FreestyleLineStyle *)(ptr->data);
	if (value) data->flag |= 4;
	else data->flag &= ~4;
}

int FreestyleLineStyle_caps_get(PointerRNA *ptr)
{
	FreestyleLineStyle *data = (FreestyleLineStyle *)(ptr->data);
	return ((data->caps) & 3);
}

void FreestyleLineStyle_caps_set(PointerRNA *ptr, int value)
{
	FreestyleLineStyle *data = (FreestyleLineStyle *)(ptr->data);
	data->caps &= ~3;
	data->caps |= value;
}

int FreestyleLineStyle_dash1_get(PointerRNA *ptr)
{
	FreestyleLineStyle *data = (FreestyleLineStyle *)(ptr->data);
	return (int)(data->dash1);
}

void FreestyleLineStyle_dash1_set(PointerRNA *ptr, int value)
{
	FreestyleLineStyle *data = (FreestyleLineStyle *)(ptr->data);
	data->dash1 = CLAMPIS(value, 0, 65535);
}

int FreestyleLineStyle_gap1_get(PointerRNA *ptr)
{
	FreestyleLineStyle *data = (FreestyleLineStyle *)(ptr->data);
	return (int)(data->gap1);
}

void FreestyleLineStyle_gap1_set(PointerRNA *ptr, int value)
{
	FreestyleLineStyle *data = (FreestyleLineStyle *)(ptr->data);
	data->gap1 = CLAMPIS(value, 0, 65535);
}

int FreestyleLineStyle_dash2_get(PointerRNA *ptr)
{
	FreestyleLineStyle *data = (FreestyleLineStyle *)(ptr->data);
	return (int)(data->dash2);
}

void FreestyleLineStyle_dash2_set(PointerRNA *ptr, int value)
{
	FreestyleLineStyle *data = (FreestyleLineStyle *)(ptr->data);
	data->dash2 = CLAMPIS(value, 0, 65535);
}

int FreestyleLineStyle_gap2_get(PointerRNA *ptr)
{
	FreestyleLineStyle *data = (FreestyleLineStyle *)(ptr->data);
	return (int)(data->gap2);
}

void FreestyleLineStyle_gap2_set(PointerRNA *ptr, int value)
{
	FreestyleLineStyle *data = (FreestyleLineStyle *)(ptr->data);
	data->gap2 = CLAMPIS(value, 0, 65535);
}

int FreestyleLineStyle_dash3_get(PointerRNA *ptr)
{
	FreestyleLineStyle *data = (FreestyleLineStyle *)(ptr->data);
	return (int)(data->dash3);
}

void FreestyleLineStyle_dash3_set(PointerRNA *ptr, int value)
{
	FreestyleLineStyle *data = (FreestyleLineStyle *)(ptr->data);
	data->dash3 = CLAMPIS(value, 0, 65535);
}

int FreestyleLineStyle_gap3_get(PointerRNA *ptr)
{
	FreestyleLineStyle *data = (FreestyleLineStyle *)(ptr->data);
	return (int)(data->gap3);
}

void FreestyleLineStyle_gap3_set(PointerRNA *ptr, int value)
{
	FreestyleLineStyle *data = (FreestyleLineStyle *)(ptr->data);
	data->gap3 = CLAMPIS(value, 0, 65535);
}

int FreestyleLineStyle_use_texture_get(PointerRNA *ptr)
{
	FreestyleLineStyle *data = (FreestyleLineStyle *)(ptr->data);
	return (((data->flag) & 8192) != 0);
}

void FreestyleLineStyle_use_texture_set(PointerRNA *ptr, int value)
{
	FreestyleLineStyle *data = (FreestyleLineStyle *)(ptr->data);
	if (value) data->flag |= 8192;
	else data->flag &= ~8192;
}

float FreestyleLineStyle_texture_spacing_get(PointerRNA *ptr)
{
	FreestyleLineStyle *data = (FreestyleLineStyle *)(ptr->data);
	return (float)(data->texstep);
}

void FreestyleLineStyle_texture_spacing_set(PointerRNA *ptr, float value)
{
	FreestyleLineStyle *data = (FreestyleLineStyle *)(ptr->data);
	data->texstep = CLAMPIS(value, 0.0099999998f, 100.0f);
}

PointerRNA FreestyleLineStyle_node_tree_get(PointerRNA *ptr)
{
	FreestyleLineStyle *data = (FreestyleLineStyle *)(ptr->data);
	return rna_pointer_inherit_refine(ptr, &RNA_NodeTree, data->nodetree);
}

int FreestyleLineStyle_use_nodes_get(PointerRNA *ptr)
{
	FreestyleLineStyle *data = (FreestyleLineStyle *)(ptr->data);
	return (((data->use_nodes) & 1) != 0);
}

void FreestyleLineStyle_use_nodes_set(PointerRNA *ptr, int value)
{
	FreestyleLineStyle *data = (FreestyleLineStyle *)(ptr->data);
	if (value) data->use_nodes |= 1;
	else data->use_nodes &= ~1;
}

static PointerRNA LineStyleTextureSlots_rna_properties_get(CollectionPropertyIterator *iter)
{
	return rna_builtin_properties_get(iter);
}

void LineStyleTextureSlots_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

	memset(iter, 0, sizeof(*iter));
	iter->parent = *ptr;
	iter->prop = (PropertyRNA *)&rna_LineStyleTextureSlots_rna_properties;

	rna_builtin_properties_begin(iter, ptr);

	if (iter->valid)
		iter->ptr = LineStyleTextureSlots_rna_properties_get(iter);
}

void LineStyleTextureSlots_rna_properties_next(CollectionPropertyIterator *iter)
{
	rna_builtin_properties_next(iter);

	if (iter->valid)
		iter->ptr = LineStyleTextureSlots_rna_properties_get(iter);
}

void LineStyleTextureSlots_rna_properties_end(CollectionPropertyIterator *iter)
{
	rna_iterator_listbase_end(iter);
}

int LineStyleTextureSlots_rna_properties_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
	return rna_builtin_properties_lookup_string(ptr, key, r_ptr);
}

PointerRNA LineStyleTextureSlots_rna_type_get(PointerRNA *ptr)
{
	return rna_builtin_type_get(ptr);
}

static PointerRNA LineStyleColorModifiers_rna_properties_get(CollectionPropertyIterator *iter)
{
	return rna_builtin_properties_get(iter);
}

void LineStyleColorModifiers_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

	memset(iter, 0, sizeof(*iter));
	iter->parent = *ptr;
	iter->prop = (PropertyRNA *)&rna_LineStyleColorModifiers_rna_properties;

	rna_builtin_properties_begin(iter, ptr);

	if (iter->valid)
		iter->ptr = LineStyleColorModifiers_rna_properties_get(iter);
}

void LineStyleColorModifiers_rna_properties_next(CollectionPropertyIterator *iter)
{
	rna_builtin_properties_next(iter);

	if (iter->valid)
		iter->ptr = LineStyleColorModifiers_rna_properties_get(iter);
}

void LineStyleColorModifiers_rna_properties_end(CollectionPropertyIterator *iter)
{
	rna_iterator_listbase_end(iter);
}

int LineStyleColorModifiers_rna_properties_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
	return rna_builtin_properties_lookup_string(ptr, key, r_ptr);
}

PointerRNA LineStyleColorModifiers_rna_type_get(PointerRNA *ptr)
{
	return rna_builtin_type_get(ptr);
}

static PointerRNA LineStyleAlphaModifiers_rna_properties_get(CollectionPropertyIterator *iter)
{
	return rna_builtin_properties_get(iter);
}

void LineStyleAlphaModifiers_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

	memset(iter, 0, sizeof(*iter));
	iter->parent = *ptr;
	iter->prop = (PropertyRNA *)&rna_LineStyleAlphaModifiers_rna_properties;

	rna_builtin_properties_begin(iter, ptr);

	if (iter->valid)
		iter->ptr = LineStyleAlphaModifiers_rna_properties_get(iter);
}

void LineStyleAlphaModifiers_rna_properties_next(CollectionPropertyIterator *iter)
{
	rna_builtin_properties_next(iter);

	if (iter->valid)
		iter->ptr = LineStyleAlphaModifiers_rna_properties_get(iter);
}

void LineStyleAlphaModifiers_rna_properties_end(CollectionPropertyIterator *iter)
{
	rna_iterator_listbase_end(iter);
}

int LineStyleAlphaModifiers_rna_properties_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
	return rna_builtin_properties_lookup_string(ptr, key, r_ptr);
}

PointerRNA LineStyleAlphaModifiers_rna_type_get(PointerRNA *ptr)
{
	return rna_builtin_type_get(ptr);
}

static PointerRNA LineStyleThicknessModifiers_rna_properties_get(CollectionPropertyIterator *iter)
{
	return rna_builtin_properties_get(iter);
}

void LineStyleThicknessModifiers_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

	memset(iter, 0, sizeof(*iter));
	iter->parent = *ptr;
	iter->prop = (PropertyRNA *)&rna_LineStyleThicknessModifiers_rna_properties;

	rna_builtin_properties_begin(iter, ptr);

	if (iter->valid)
		iter->ptr = LineStyleThicknessModifiers_rna_properties_get(iter);
}

void LineStyleThicknessModifiers_rna_properties_next(CollectionPropertyIterator *iter)
{
	rna_builtin_properties_next(iter);

	if (iter->valid)
		iter->ptr = LineStyleThicknessModifiers_rna_properties_get(iter);
}

void LineStyleThicknessModifiers_rna_properties_end(CollectionPropertyIterator *iter)
{
	rna_iterator_listbase_end(iter);
}

int LineStyleThicknessModifiers_rna_properties_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
	return rna_builtin_properties_lookup_string(ptr, key, r_ptr);
}

PointerRNA LineStyleThicknessModifiers_rna_type_get(PointerRNA *ptr)
{
	return rna_builtin_type_get(ptr);
}

static PointerRNA LineStyleGeometryModifiers_rna_properties_get(CollectionPropertyIterator *iter)
{
	return rna_builtin_properties_get(iter);
}

void LineStyleGeometryModifiers_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

	memset(iter, 0, sizeof(*iter));
	iter->parent = *ptr;
	iter->prop = (PropertyRNA *)&rna_LineStyleGeometryModifiers_rna_properties;

	rna_builtin_properties_begin(iter, ptr);

	if (iter->valid)
		iter->ptr = LineStyleGeometryModifiers_rna_properties_get(iter);
}

void LineStyleGeometryModifiers_rna_properties_next(CollectionPropertyIterator *iter)
{
	rna_builtin_properties_next(iter);

	if (iter->valid)
		iter->ptr = LineStyleGeometryModifiers_rna_properties_get(iter);
}

void LineStyleGeometryModifiers_rna_properties_end(CollectionPropertyIterator *iter)
{
	rna_iterator_listbase_end(iter);
}

int LineStyleGeometryModifiers_rna_properties_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
	return rna_builtin_properties_lookup_string(ptr, key, r_ptr);
}

PointerRNA LineStyleGeometryModifiers_rna_type_get(PointerRNA *ptr)
{
	return rna_builtin_type_get(ptr);
}

int LineStyleTextureSlot_mapping_x_get(PointerRNA *ptr)
{
	MTex *data = (MTex *)(ptr->data);
	return (int)(data->projx);
}

void LineStyleTextureSlot_mapping_x_set(PointerRNA *ptr, int value)
{
	MTex *data = (MTex *)(ptr->data);
	data->projx = value;
}

int LineStyleTextureSlot_mapping_y_get(PointerRNA *ptr)
{
	MTex *data = (MTex *)(ptr->data);
	return (int)(data->projy);
}

void LineStyleTextureSlot_mapping_y_set(PointerRNA *ptr, int value)
{
	MTex *data = (MTex *)(ptr->data);
	data->projy = value;
}

int LineStyleTextureSlot_mapping_z_get(PointerRNA *ptr)
{
	MTex *data = (MTex *)(ptr->data);
	return (int)(data->projz);
}

void LineStyleTextureSlot_mapping_z_set(PointerRNA *ptr, int value)
{
	MTex *data = (MTex *)(ptr->data);
	data->projz = value;
}

int LineStyleTextureSlot_mapping_get(PointerRNA *ptr)
{
	MTex *data = (MTex *)(ptr->data);
	return (int)(data->mapping);
}

void LineStyleTextureSlot_mapping_set(PointerRNA *ptr, int value)
{
	MTex *data = (MTex *)(ptr->data);
	data->mapping = value;
}

int LineStyleTextureSlot_use_map_color_diffuse_get(PointerRNA *ptr)
{
	MTex *data = (MTex *)(ptr->data);
	return (((data->mapto) & 1) != 0);
}

void LineStyleTextureSlot_use_map_color_diffuse_set(PointerRNA *ptr, int value)
{
	MTex *data = (MTex *)(ptr->data);
	if (value) data->mapto |= 1;
	else data->mapto &= ~1;
}

int LineStyleTextureSlot_use_map_alpha_get(PointerRNA *ptr)
{
	MTex *data = (MTex *)(ptr->data);
	return (((data->mapto) & 128) != 0);
}

void LineStyleTextureSlot_use_map_alpha_set(PointerRNA *ptr, int value)
{
	MTex *data = (MTex *)(ptr->data);
	if (value) data->mapto |= 128;
	else data->mapto &= ~128;
}

int LineStyleTextureSlot_use_tips_get(PointerRNA *ptr)
{
	MTex *data = (MTex *)(ptr->data);
	return (((data->texflag) & 4096) != 0);
}

void LineStyleTextureSlot_use_tips_set(PointerRNA *ptr, int value)
{
	MTex *data = (MTex *)(ptr->data);
	if (value) data->texflag |= 4096;
	else data->texflag &= ~4096;
}

int LineStyleTextureSlot_texture_coords_get(PointerRNA *ptr)
{
	MTex *data = (MTex *)(ptr->data);
	return (int)(data->texco);
}

void LineStyleTextureSlot_texture_coords_set(PointerRNA *ptr, int value)
{
	MTex *data = (MTex *)(ptr->data);
	data->texco = value;
}

float LineStyleTextureSlot_alpha_factor_get(PointerRNA *ptr)
{
	MTex *data = (MTex *)(ptr->data);
	return (float)(data->alphafac);
}

void LineStyleTextureSlot_alpha_factor_set(PointerRNA *ptr, float value)
{
	MTex *data = (MTex *)(ptr->data);
	data->alphafac = value;
}

float LineStyleTextureSlot_diffuse_color_factor_get(PointerRNA *ptr)
{
	MTex *data = (MTex *)(ptr->data);
	return (float)(data->colfac);
}

void LineStyleTextureSlot_diffuse_color_factor_set(PointerRNA *ptr, float value)
{
	MTex *data = (MTex *)(ptr->data);
	data->colfac = value;
}

































struct MTex *LineStyleTextureSlots_add(struct ID *_selfid, bContext *C, ReportList *reports)
{
	return rna_mtex_texture_slots_add(_selfid, C, reports);
}

void LineStyleTextureSlots_add_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	struct ID *_selfid;
	struct MTex *mtex;
	char *_data, *_retdata;
	
	_selfid = (struct ID *)_ptr->id.data;
	_data = (char *)_parms->data;
	_retdata = _data;
	
	mtex = rna_mtex_texture_slots_add(_selfid, C, reports);
	*((struct MTex **)_retdata) = mtex;
}

struct MTex *LineStyleTextureSlots_create(struct ID *_selfid, bContext *C, ReportList *reports, int index)
{
	return rna_mtex_texture_slots_create(_selfid, C, reports, index);
}

void LineStyleTextureSlots_create_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	struct ID *_selfid;
	int index;
	struct MTex *mtex;
	char *_data, *_retdata;
	
	_selfid = (struct ID *)_ptr->id.data;
	_data = (char *)_parms->data;
	index = *((int *)_data);
	_data += 4;
	_retdata = _data;
	
	mtex = rna_mtex_texture_slots_create(_selfid, C, reports, index);
	*((struct MTex **)_retdata) = mtex;
}

void LineStyleTextureSlots_clear(struct ID *_selfid, bContext *C, ReportList *reports, int index)
{
	rna_mtex_texture_slots_clear(_selfid, C, reports, index);
}

void LineStyleTextureSlots_clear_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	struct ID *_selfid;
	int index;
	char *_data;
	
	_selfid = (struct ID *)_ptr->id.data;
	_data = (char *)_parms->data;
	index = *((int *)_data);
	
	rna_mtex_texture_slots_clear(_selfid, C, reports, index);
}

/* Repeated prototypes to detect errors */

struct MTex *rna_mtex_texture_slots_add(struct ID *_selfid, bContext *C, ReportList *reports);
struct MTex *rna_mtex_texture_slots_create(struct ID *_selfid, bContext *C, ReportList *reports, int index);
void rna_mtex_texture_slots_clear(struct ID *_selfid, bContext *C, ReportList *reports, int index);

struct LineStyleModifier *LineStyleColorModifiers_new(struct FreestyleLineStyle *_self, ReportList *reports, const char * name, int type)
{
	return rna_LineStyle_color_modifier_add(_self, reports, name, type);
}

void LineStyleColorModifiers_new_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	struct FreestyleLineStyle *_self;
	const char * name;
	int type;
	struct LineStyleModifier *modifier;
	char *_data, *_retdata;
	
	_self = (struct FreestyleLineStyle *)_ptr->data;
	_data = (char *)_parms->data;
	name = *((const char * *)_data);
#if defined(SPEC_ILP32)
        _data += 4;
#else
        _data += 8;
#endif
	type = *((int *)_data);
	_data += 4;
	_retdata = _data;
	
	modifier = rna_LineStyle_color_modifier_add(_self, reports, name, type);
	*((struct LineStyleModifier **)_retdata) = modifier;
}

void LineStyleColorModifiers_remove(struct FreestyleLineStyle *_self, ReportList *reports, struct PointerRNA *modifier)
{
	rna_LineStyle_color_modifier_remove(_self, reports, modifier);
}

void LineStyleColorModifiers_remove_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	struct FreestyleLineStyle *_self;
	struct PointerRNA *modifier;
	char *_data;
	
	_self = (struct FreestyleLineStyle *)_ptr->data;
	_data = (char *)_parms->data;
	modifier = *((struct PointerRNA **)_data);
	
	rna_LineStyle_color_modifier_remove(_self, reports, modifier);
}

/* Repeated prototypes to detect errors */

struct LineStyleModifier *rna_LineStyle_color_modifier_add(struct FreestyleLineStyle *_self, ReportList *reports, const char * name, int type);
void rna_LineStyle_color_modifier_remove(struct FreestyleLineStyle *_self, ReportList *reports, struct PointerRNA *modifier);

struct LineStyleModifier *LineStyleAlphaModifiers_new(struct FreestyleLineStyle *_self, ReportList *reports, const char * name, int type)
{
	return rna_LineStyle_alpha_modifier_add(_self, reports, name, type);
}

void LineStyleAlphaModifiers_new_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	struct FreestyleLineStyle *_self;
	const char * name;
	int type;
	struct LineStyleModifier *modifier;
	char *_data, *_retdata;
	
	_self = (struct FreestyleLineStyle *)_ptr->data;
	_data = (char *)_parms->data;
	name = *((const char * *)_data);
#if defined(SPEC_ILP32)
        _data += 4;
#else
        _data += 8;
#endif
	type = *((int *)_data);
	_data += 4;
	_retdata = _data;
	
	modifier = rna_LineStyle_alpha_modifier_add(_self, reports, name, type);
	*((struct LineStyleModifier **)_retdata) = modifier;
}

void LineStyleAlphaModifiers_remove(struct FreestyleLineStyle *_self, ReportList *reports, struct PointerRNA *modifier)
{
	rna_LineStyle_alpha_modifier_remove(_self, reports, modifier);
}

void LineStyleAlphaModifiers_remove_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	struct FreestyleLineStyle *_self;
	struct PointerRNA *modifier;
	char *_data;
	
	_self = (struct FreestyleLineStyle *)_ptr->data;
	_data = (char *)_parms->data;
	modifier = *((struct PointerRNA **)_data);
	
	rna_LineStyle_alpha_modifier_remove(_self, reports, modifier);
}

/* Repeated prototypes to detect errors */

struct LineStyleModifier *rna_LineStyle_alpha_modifier_add(struct FreestyleLineStyle *_self, ReportList *reports, const char * name, int type);
void rna_LineStyle_alpha_modifier_remove(struct FreestyleLineStyle *_self, ReportList *reports, struct PointerRNA *modifier);

struct LineStyleModifier *LineStyleThicknessModifiers_new(struct FreestyleLineStyle *_self, ReportList *reports, const char * name, int type)
{
	return rna_LineStyle_thickness_modifier_add(_self, reports, name, type);
}

void LineStyleThicknessModifiers_new_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	struct FreestyleLineStyle *_self;
	const char * name;
	int type;
	struct LineStyleModifier *modifier;
	char *_data, *_retdata;
	
	_self = (struct FreestyleLineStyle *)_ptr->data;
	_data = (char *)_parms->data;
	name = *((const char * *)_data);
#if defined(SPEC_ILP32)
        _data += 4;
#else
        _data += 8;
#endif
	type = *((int *)_data);
	_data += 4;
	_retdata = _data;
	
	modifier = rna_LineStyle_thickness_modifier_add(_self, reports, name, type);
	*((struct LineStyleModifier **)_retdata) = modifier;
}

void LineStyleThicknessModifiers_remove(struct FreestyleLineStyle *_self, ReportList *reports, struct PointerRNA *modifier)
{
	rna_LineStyle_thickness_modifier_remove(_self, reports, modifier);
}

void LineStyleThicknessModifiers_remove_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	struct FreestyleLineStyle *_self;
	struct PointerRNA *modifier;
	char *_data;
	
	_self = (struct FreestyleLineStyle *)_ptr->data;
	_data = (char *)_parms->data;
	modifier = *((struct PointerRNA **)_data);
	
	rna_LineStyle_thickness_modifier_remove(_self, reports, modifier);
}

/* Repeated prototypes to detect errors */

struct LineStyleModifier *rna_LineStyle_thickness_modifier_add(struct FreestyleLineStyle *_self, ReportList *reports, const char * name, int type);
void rna_LineStyle_thickness_modifier_remove(struct FreestyleLineStyle *_self, ReportList *reports, struct PointerRNA *modifier);

struct LineStyleModifier *LineStyleGeometryModifiers_new(struct FreestyleLineStyle *_self, ReportList *reports, const char * name, int type)
{
	return rna_LineStyle_geometry_modifier_add(_self, reports, name, type);
}

void LineStyleGeometryModifiers_new_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	struct FreestyleLineStyle *_self;
	const char * name;
	int type;
	struct LineStyleModifier *modifier;
	char *_data, *_retdata;
	
	_self = (struct FreestyleLineStyle *)_ptr->data;
	_data = (char *)_parms->data;
	name = *((const char * *)_data);
#if defined(SPEC_ILP32)
        _data += 4;
#else
        _data += 8;
#endif
	type = *((int *)_data);
	_data += 4;
	_retdata = _data;
	
	modifier = rna_LineStyle_geometry_modifier_add(_self, reports, name, type);
	*((struct LineStyleModifier **)_retdata) = modifier;
}

void LineStyleGeometryModifiers_remove(struct FreestyleLineStyle *_self, ReportList *reports, struct PointerRNA *modifier)
{
	rna_LineStyle_geometry_modifier_remove(_self, reports, modifier);
}

void LineStyleGeometryModifiers_remove_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	struct FreestyleLineStyle *_self;
	struct PointerRNA *modifier;
	char *_data;
	
	_self = (struct FreestyleLineStyle *)_ptr->data;
	_data = (char *)_parms->data;
	modifier = *((struct PointerRNA **)_data);
	
	rna_LineStyle_geometry_modifier_remove(_self, reports, modifier);
}

/* Repeated prototypes to detect errors */

struct LineStyleModifier *rna_LineStyle_geometry_modifier_add(struct FreestyleLineStyle *_self, ReportList *reports, const char * name, int type);
void rna_LineStyle_geometry_modifier_remove(struct FreestyleLineStyle *_self, ReportList *reports, struct PointerRNA *modifier);


/* Line Style Modifier */
CollectionPropertyRNA rna_LineStyleModifier_rna_properties = {
	{(PropertyRNA *)&rna_LineStyleModifier_rna_type, NULL,
	-1, "rna_properties", 128, "Properties",
	"RNA property collection",
	0, "*",
	PROP_COLLECTION, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	LineStyleModifier_rna_properties_begin, LineStyleModifier_rna_properties_next, LineStyleModifier_rna_properties_end, LineStyleModifier_rna_properties_get, NULL, NULL, LineStyleModifier_rna_properties_lookup_string, NULL, &RNA_Property
};

PointerPropertyRNA rna_LineStyleModifier_rna_type = {
	{NULL, (PropertyRNA *)&rna_LineStyleModifier_rna_properties,
	-1, "rna_type", 8912896, "RNA",
	"RNA type definition",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	LineStyleModifier_rna_type_get, NULL, NULL, NULL,&RNA_Struct
};

StructRNA RNA_LineStyleModifier = {
	{(ContainerRNA *)&RNA_LineStyleColorModifier, (ContainerRNA *)&RNA_LatticePoint,
	NULL,
	{(PropertyRNA *)&rna_LineStyleModifier_rna_properties, (PropertyRNA *)&rna_LineStyleModifier_rna_type}},
	"LineStyleModifier", NULL, NULL, 4, "Line Style Modifier",
	"Base type to define modifiers",
	"*", 17,
	NULL, (PropertyRNA *)&rna_LineStyleModifier_rna_properties,
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

/* Line Style Color Modifier */
StructRNA RNA_LineStyleColorModifier = {
	{(ContainerRNA *)&RNA_LineStyleColorModifier_AlongStroke, (ContainerRNA *)&RNA_LineStyleModifier,
	NULL,
	{NULL, NULL}},
	"LineStyleColorModifier", NULL, NULL, 4, "Line Style Color Modifier",
	"Base type to define line color modifiers",
	"*", 17,
	NULL, (PropertyRNA *)&rna_LineStyleModifier_rna_properties,
	&RNA_LineStyleModifier,
	NULL,
	rna_LineStyle_color_modifier_refine,
	rna_LineStyle_color_modifier_path,
	NULL,
	NULL,
	NULL,
	NULL,
	{NULL, NULL}
};

/* Along Stroke */
static EnumPropertyItem rna_LineStyleColorModifier_AlongStroke_type_items[5] = {
	{1, "ALONG_STROKE", 442, "Along Stroke", ""},
	{2, "DISTANCE_FROM_CAMERA", 442, "Distance from Camera", ""},
	{3, "DISTANCE_FROM_OBJECT", 442, "Distance from Object", ""},
	{4, "MATERIAL", 442, "Material", ""},
	{0, NULL, 0, NULL, NULL}
};

EnumPropertyRNA rna_LineStyleColorModifier_AlongStroke_type = {
	{(PropertyRNA *)&rna_LineStyleColorModifier_AlongStroke_name, NULL,
	-1, "type", 2, "Modifier Type",
	"Type of the modifier",
	0, "*",
	PROP_ENUM, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	LineStyleColorModifier_AlongStroke_type_get, NULL, NULL, NULL, NULL, NULL, rna_LineStyleColorModifier_AlongStroke_type_items, 4, 1
};

StringPropertyRNA rna_LineStyleColorModifier_AlongStroke_name = {
	{(PropertyRNA *)&rna_LineStyleColorModifier_AlongStroke_blend, (PropertyRNA *)&rna_LineStyleColorModifier_AlongStroke_type,
	-1, "name", 262145, "Modifier Name",
	"Name of the modifier",
	0, "*",
	PROP_STRING, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {64, 0, 0}, 0,
	NULL, 385875968, NULL, NULL,
	0, -1, NULL},
	LineStyleColorModifier_AlongStroke_name_get, LineStyleColorModifier_AlongStroke_name_length, LineStyleColorModifier_AlongStroke_name_set, NULL, NULL, NULL, 64, ""
};

static EnumPropertyItem rna_LineStyleColorModifier_AlongStroke_blend_items[19] = {
	{0, "MIX", 0, "Mix", ""},
	{1, "ADD", 0, "Add", ""},
	{2, "MULTIPLY", 0, "Multiply", ""},
	{3, "SUBTRACT", 0, "Subtract", ""},
	{4, "SCREEN", 0, "Screen", ""},
	{5, "DIVIDE", 0, "Divide", ""},
	{6, "DIFFERENCE", 0, "Difference", ""},
	{7, "DARKEN", 0, "Darken", ""},
	{8, "LIGHTEN", 0, "Lighten", ""},
	{9, "OVERLAY", 0, "Overlay", ""},
	{10, "DODGE", 0, "Dodge", ""},
	{11, "BURN", 0, "Burn", ""},
	{12, "HUE", 0, "Hue", ""},
	{13, "SATURATION", 0, "Saturation", ""},
	{14, "VALUE", 0, "Value", ""},
	{15, "COLOR", 0, "Color", ""},
	{16, "SOFT_LIGHT", 0, "Soft Light", ""},
	{17, "LINEAR_LIGHT", 0, "Linear Light", ""},
	{0, NULL, 0, NULL, NULL}
};

EnumPropertyRNA rna_LineStyleColorModifier_AlongStroke_blend = {
	{(PropertyRNA *)&rna_LineStyleColorModifier_AlongStroke_influence, (PropertyRNA *)&rna_LineStyleColorModifier_AlongStroke_name,
	-1, "blend", 3, "Blend",
	"Specify how the modifier value is blended into the base value",
	0, "*",
	PROP_ENUM, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_LineStyle_update, 385875968, NULL, NULL,
	0, -1, NULL},
	LineStyleColorModifier_AlongStroke_blend_get, LineStyleColorModifier_AlongStroke_blend_set, NULL, NULL, NULL, NULL, rna_LineStyleColorModifier_AlongStroke_blend_items, 18, 0
};

FloatPropertyRNA rna_LineStyleColorModifier_AlongStroke_influence = {
	{(PropertyRNA *)&rna_LineStyleColorModifier_AlongStroke_use, (PropertyRNA *)&rna_LineStyleColorModifier_AlongStroke_blend,
	-1, "influence", 8195, "Influence",
	"Influence factor by which the modifier changes the property",
	0, "*",
	PROP_FLOAT, PROP_FACTOR | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_LineStyle_update, 385875968, NULL, NULL,
	offsetof(LineStyleColorModifier_AlongStroke, modifier.influence), 4, NULL},
	LineStyleColorModifier_AlongStroke_influence_get, LineStyleColorModifier_AlongStroke_influence_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 1.0f, 0.0f, 1.0f, 10.0f, 3, 0.0f, NULL
};

BoolPropertyRNA rna_LineStyleColorModifier_AlongStroke_use = {
	{(PropertyRNA *)&rna_LineStyleColorModifier_AlongStroke_expanded, (PropertyRNA *)&rna_LineStyleColorModifier_AlongStroke_influence,
	-1, "use", 3, "Use",
	"Enable or disable this modifier during stroke rendering",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_LineStyle_update, 385875968, NULL, NULL,
	0, -1, NULL},
	LineStyleColorModifier_AlongStroke_use_get, LineStyleColorModifier_AlongStroke_use_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_LineStyleColorModifier_AlongStroke_expanded = {
	{(PropertyRNA *)&rna_LineStyleColorModifier_AlongStroke_color_ramp, (PropertyRNA *)&rna_LineStyleColorModifier_AlongStroke_use,
	-1, "expanded", 3, "Expanded",
	"True if the modifier tab is expanded",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	LineStyleColorModifier_AlongStroke_expanded_get, LineStyleColorModifier_AlongStroke_expanded_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

PointerPropertyRNA rna_LineStyleColorModifier_AlongStroke_color_ramp = {
	{NULL, (PropertyRNA *)&rna_LineStyleColorModifier_AlongStroke_expanded,
	-1, "color_ramp", 8388608, "Color Ramp",
	"Color ramp used to change line color",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_LineStyle_update, 385875968, NULL, NULL,
	0, -1, NULL},
	LineStyleColorModifier_AlongStroke_color_ramp_get, NULL, NULL, NULL,&RNA_ColorRamp
};

StructRNA RNA_LineStyleColorModifier_AlongStroke = {
	{(ContainerRNA *)&RNA_LineStyleColorModifier_DistanceFromCamera, (ContainerRNA *)&RNA_LineStyleColorModifier,
	NULL,
	{(PropertyRNA *)&rna_LineStyleColorModifier_AlongStroke_type, (PropertyRNA *)&rna_LineStyleColorModifier_AlongStroke_color_ramp}},
	"LineStyleColorModifier_AlongStroke", NULL, NULL, 4, "Along Stroke",
	"Change line color along stroke",
	"*", 17,
	(PropertyRNA *)&rna_LineStyleColorModifier_AlongStroke_name, (PropertyRNA *)&rna_LineStyleModifier_rna_properties,
	&RNA_LineStyleColorModifier,
	NULL,
	rna_LineStyle_color_modifier_refine,
	rna_LineStyle_color_modifier_path,
	NULL,
	NULL,
	NULL,
	NULL,
	{NULL, NULL}
};

/* Distance from Camera */
static EnumPropertyItem rna_LineStyleColorModifier_DistanceFromCamera_type_items[5] = {
	{1, "ALONG_STROKE", 442, "Along Stroke", ""},
	{2, "DISTANCE_FROM_CAMERA", 442, "Distance from Camera", ""},
	{3, "DISTANCE_FROM_OBJECT", 442, "Distance from Object", ""},
	{4, "MATERIAL", 442, "Material", ""},
	{0, NULL, 0, NULL, NULL}
};

EnumPropertyRNA rna_LineStyleColorModifier_DistanceFromCamera_type = {
	{(PropertyRNA *)&rna_LineStyleColorModifier_DistanceFromCamera_name, NULL,
	-1, "type", 2, "Modifier Type",
	"Type of the modifier",
	0, "*",
	PROP_ENUM, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	LineStyleColorModifier_DistanceFromCamera_type_get, NULL, NULL, NULL, NULL, NULL, rna_LineStyleColorModifier_DistanceFromCamera_type_items, 4, 1
};

StringPropertyRNA rna_LineStyleColorModifier_DistanceFromCamera_name = {
	{(PropertyRNA *)&rna_LineStyleColorModifier_DistanceFromCamera_blend, (PropertyRNA *)&rna_LineStyleColorModifier_DistanceFromCamera_type,
	-1, "name", 262145, "Modifier Name",
	"Name of the modifier",
	0, "*",
	PROP_STRING, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {64, 0, 0}, 0,
	NULL, 385875968, NULL, NULL,
	0, -1, NULL},
	LineStyleColorModifier_DistanceFromCamera_name_get, LineStyleColorModifier_DistanceFromCamera_name_length, LineStyleColorModifier_DistanceFromCamera_name_set, NULL, NULL, NULL, 64, ""
};

static EnumPropertyItem rna_LineStyleColorModifier_DistanceFromCamera_blend_items[19] = {
	{0, "MIX", 0, "Mix", ""},
	{1, "ADD", 0, "Add", ""},
	{2, "MULTIPLY", 0, "Multiply", ""},
	{3, "SUBTRACT", 0, "Subtract", ""},
	{4, "SCREEN", 0, "Screen", ""},
	{5, "DIVIDE", 0, "Divide", ""},
	{6, "DIFFERENCE", 0, "Difference", ""},
	{7, "DARKEN", 0, "Darken", ""},
	{8, "LIGHTEN", 0, "Lighten", ""},
	{9, "OVERLAY", 0, "Overlay", ""},
	{10, "DODGE", 0, "Dodge", ""},
	{11, "BURN", 0, "Burn", ""},
	{12, "HUE", 0, "Hue", ""},
	{13, "SATURATION", 0, "Saturation", ""},
	{14, "VALUE", 0, "Value", ""},
	{15, "COLOR", 0, "Color", ""},
	{16, "SOFT_LIGHT", 0, "Soft Light", ""},
	{17, "LINEAR_LIGHT", 0, "Linear Light", ""},
	{0, NULL, 0, NULL, NULL}
};

EnumPropertyRNA rna_LineStyleColorModifier_DistanceFromCamera_blend = {
	{(PropertyRNA *)&rna_LineStyleColorModifier_DistanceFromCamera_influence, (PropertyRNA *)&rna_LineStyleColorModifier_DistanceFromCamera_name,
	-1, "blend", 3, "Blend",
	"Specify how the modifier value is blended into the base value",
	0, "*",
	PROP_ENUM, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_LineStyle_update, 385875968, NULL, NULL,
	0, -1, NULL},
	LineStyleColorModifier_DistanceFromCamera_blend_get, LineStyleColorModifier_DistanceFromCamera_blend_set, NULL, NULL, NULL, NULL, rna_LineStyleColorModifier_DistanceFromCamera_blend_items, 18, 0
};

FloatPropertyRNA rna_LineStyleColorModifier_DistanceFromCamera_influence = {
	{(PropertyRNA *)&rna_LineStyleColorModifier_DistanceFromCamera_use, (PropertyRNA *)&rna_LineStyleColorModifier_DistanceFromCamera_blend,
	-1, "influence", 8195, "Influence",
	"Influence factor by which the modifier changes the property",
	0, "*",
	PROP_FLOAT, PROP_FACTOR | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_LineStyle_update, 385875968, NULL, NULL,
	offsetof(LineStyleColorModifier_DistanceFromCamera, modifier.influence), 4, NULL},
	LineStyleColorModifier_DistanceFromCamera_influence_get, LineStyleColorModifier_DistanceFromCamera_influence_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 1.0f, 0.0f, 1.0f, 10.0f, 3, 0.0f, NULL
};

BoolPropertyRNA rna_LineStyleColorModifier_DistanceFromCamera_use = {
	{(PropertyRNA *)&rna_LineStyleColorModifier_DistanceFromCamera_expanded, (PropertyRNA *)&rna_LineStyleColorModifier_DistanceFromCamera_influence,
	-1, "use", 3, "Use",
	"Enable or disable this modifier during stroke rendering",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_LineStyle_update, 385875968, NULL, NULL,
	0, -1, NULL},
	LineStyleColorModifier_DistanceFromCamera_use_get, LineStyleColorModifier_DistanceFromCamera_use_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_LineStyleColorModifier_DistanceFromCamera_expanded = {
	{(PropertyRNA *)&rna_LineStyleColorModifier_DistanceFromCamera_color_ramp, (PropertyRNA *)&rna_LineStyleColorModifier_DistanceFromCamera_use,
	-1, "expanded", 3, "Expanded",
	"True if the modifier tab is expanded",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	LineStyleColorModifier_DistanceFromCamera_expanded_get, LineStyleColorModifier_DistanceFromCamera_expanded_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

PointerPropertyRNA rna_LineStyleColorModifier_DistanceFromCamera_color_ramp = {
	{(PropertyRNA *)&rna_LineStyleColorModifier_DistanceFromCamera_range_min, (PropertyRNA *)&rna_LineStyleColorModifier_DistanceFromCamera_expanded,
	-1, "color_ramp", 8388608, "Color Ramp",
	"Color ramp used to change line color",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_LineStyle_update, 385875968, NULL, NULL,
	0, -1, NULL},
	LineStyleColorModifier_DistanceFromCamera_color_ramp_get, NULL, NULL, NULL,&RNA_ColorRamp
};

FloatPropertyRNA rna_LineStyleColorModifier_DistanceFromCamera_range_min = {
	{(PropertyRNA *)&rna_LineStyleColorModifier_DistanceFromCamera_range_max, (PropertyRNA *)&rna_LineStyleColorModifier_DistanceFromCamera_color_ramp,
	-1, "range_min", 8195, "Range Min",
	"Lower bound of the input range the mapping is applied",
	0, "*",
	PROP_FLOAT, PROP_DISTANCE | PROP_UNIT_LENGTH, NULL, 0, {0, 0, 0}, 0,
	rna_LineStyle_update, 385875968, NULL, NULL,
	offsetof(LineStyleColorModifier_DistanceFromCamera, range_min), 4, NULL},
	LineStyleColorModifier_DistanceFromCamera_range_min_get, LineStyleColorModifier_DistanceFromCamera_range_min_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, -10000.0f, 10000.0f, -FLT_MAX, FLT_MAX, 10.0f, 3, 0.0f, NULL
};

FloatPropertyRNA rna_LineStyleColorModifier_DistanceFromCamera_range_max = {
	{NULL, (PropertyRNA *)&rna_LineStyleColorModifier_DistanceFromCamera_range_min,
	-1, "range_max", 8195, "Range Max",
	"Upper bound of the input range the mapping is applied",
	0, "*",
	PROP_FLOAT, PROP_DISTANCE | PROP_UNIT_LENGTH, NULL, 0, {0, 0, 0}, 0,
	rna_LineStyle_update, 385875968, NULL, NULL,
	offsetof(LineStyleColorModifier_DistanceFromCamera, range_max), 4, NULL},
	LineStyleColorModifier_DistanceFromCamera_range_max_get, LineStyleColorModifier_DistanceFromCamera_range_max_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, -10000.0f, 10000.0f, -FLT_MAX, FLT_MAX, 10.0f, 3, 0.0f, NULL
};

StructRNA RNA_LineStyleColorModifier_DistanceFromCamera = {
	{(ContainerRNA *)&RNA_LineStyleColorModifier_DistanceFromObject, (ContainerRNA *)&RNA_LineStyleColorModifier_AlongStroke,
	NULL,
	{(PropertyRNA *)&rna_LineStyleColorModifier_DistanceFromCamera_type, (PropertyRNA *)&rna_LineStyleColorModifier_DistanceFromCamera_range_max}},
	"LineStyleColorModifier_DistanceFromCamera", NULL, NULL, 4, "Distance from Camera",
	"Change line color based on the distance from the camera",
	"*", 17,
	(PropertyRNA *)&rna_LineStyleColorModifier_DistanceFromCamera_name, (PropertyRNA *)&rna_LineStyleModifier_rna_properties,
	&RNA_LineStyleColorModifier,
	NULL,
	rna_LineStyle_color_modifier_refine,
	rna_LineStyle_color_modifier_path,
	NULL,
	NULL,
	NULL,
	NULL,
	{NULL, NULL}
};

/* Distance from Object */
static EnumPropertyItem rna_LineStyleColorModifier_DistanceFromObject_type_items[5] = {
	{1, "ALONG_STROKE", 442, "Along Stroke", ""},
	{2, "DISTANCE_FROM_CAMERA", 442, "Distance from Camera", ""},
	{3, "DISTANCE_FROM_OBJECT", 442, "Distance from Object", ""},
	{4, "MATERIAL", 442, "Material", ""},
	{0, NULL, 0, NULL, NULL}
};

EnumPropertyRNA rna_LineStyleColorModifier_DistanceFromObject_type = {
	{(PropertyRNA *)&rna_LineStyleColorModifier_DistanceFromObject_name, NULL,
	-1, "type", 2, "Modifier Type",
	"Type of the modifier",
	0, "*",
	PROP_ENUM, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	LineStyleColorModifier_DistanceFromObject_type_get, NULL, NULL, NULL, NULL, NULL, rna_LineStyleColorModifier_DistanceFromObject_type_items, 4, 1
};

StringPropertyRNA rna_LineStyleColorModifier_DistanceFromObject_name = {
	{(PropertyRNA *)&rna_LineStyleColorModifier_DistanceFromObject_blend, (PropertyRNA *)&rna_LineStyleColorModifier_DistanceFromObject_type,
	-1, "name", 262145, "Modifier Name",
	"Name of the modifier",
	0, "*",
	PROP_STRING, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {64, 0, 0}, 0,
	NULL, 385875968, NULL, NULL,
	0, -1, NULL},
	LineStyleColorModifier_DistanceFromObject_name_get, LineStyleColorModifier_DistanceFromObject_name_length, LineStyleColorModifier_DistanceFromObject_name_set, NULL, NULL, NULL, 64, ""
};

static EnumPropertyItem rna_LineStyleColorModifier_DistanceFromObject_blend_items[19] = {
	{0, "MIX", 0, "Mix", ""},
	{1, "ADD", 0, "Add", ""},
	{2, "MULTIPLY", 0, "Multiply", ""},
	{3, "SUBTRACT", 0, "Subtract", ""},
	{4, "SCREEN", 0, "Screen", ""},
	{5, "DIVIDE", 0, "Divide", ""},
	{6, "DIFFERENCE", 0, "Difference", ""},
	{7, "DARKEN", 0, "Darken", ""},
	{8, "LIGHTEN", 0, "Lighten", ""},
	{9, "OVERLAY", 0, "Overlay", ""},
	{10, "DODGE", 0, "Dodge", ""},
	{11, "BURN", 0, "Burn", ""},
	{12, "HUE", 0, "Hue", ""},
	{13, "SATURATION", 0, "Saturation", ""},
	{14, "VALUE", 0, "Value", ""},
	{15, "COLOR", 0, "Color", ""},
	{16, "SOFT_LIGHT", 0, "Soft Light", ""},
	{17, "LINEAR_LIGHT", 0, "Linear Light", ""},
	{0, NULL, 0, NULL, NULL}
};

EnumPropertyRNA rna_LineStyleColorModifier_DistanceFromObject_blend = {
	{(PropertyRNA *)&rna_LineStyleColorModifier_DistanceFromObject_influence, (PropertyRNA *)&rna_LineStyleColorModifier_DistanceFromObject_name,
	-1, "blend", 3, "Blend",
	"Specify how the modifier value is blended into the base value",
	0, "*",
	PROP_ENUM, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_LineStyle_update, 385875968, NULL, NULL,
	0, -1, NULL},
	LineStyleColorModifier_DistanceFromObject_blend_get, LineStyleColorModifier_DistanceFromObject_blend_set, NULL, NULL, NULL, NULL, rna_LineStyleColorModifier_DistanceFromObject_blend_items, 18, 0
};

FloatPropertyRNA rna_LineStyleColorModifier_DistanceFromObject_influence = {
	{(PropertyRNA *)&rna_LineStyleColorModifier_DistanceFromObject_use, (PropertyRNA *)&rna_LineStyleColorModifier_DistanceFromObject_blend,
	-1, "influence", 8195, "Influence",
	"Influence factor by which the modifier changes the property",
	0, "*",
	PROP_FLOAT, PROP_FACTOR | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_LineStyle_update, 385875968, NULL, NULL,
	offsetof(LineStyleColorModifier_DistanceFromObject, modifier.influence), 4, NULL},
	LineStyleColorModifier_DistanceFromObject_influence_get, LineStyleColorModifier_DistanceFromObject_influence_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 1.0f, 0.0f, 1.0f, 10.0f, 3, 0.0f, NULL
};

BoolPropertyRNA rna_LineStyleColorModifier_DistanceFromObject_use = {
	{(PropertyRNA *)&rna_LineStyleColorModifier_DistanceFromObject_expanded, (PropertyRNA *)&rna_LineStyleColorModifier_DistanceFromObject_influence,
	-1, "use", 3, "Use",
	"Enable or disable this modifier during stroke rendering",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_LineStyle_update, 385875968, NULL, NULL,
	0, -1, NULL},
	LineStyleColorModifier_DistanceFromObject_use_get, LineStyleColorModifier_DistanceFromObject_use_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_LineStyleColorModifier_DistanceFromObject_expanded = {
	{(PropertyRNA *)&rna_LineStyleColorModifier_DistanceFromObject_color_ramp, (PropertyRNA *)&rna_LineStyleColorModifier_DistanceFromObject_use,
	-1, "expanded", 3, "Expanded",
	"True if the modifier tab is expanded",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	LineStyleColorModifier_DistanceFromObject_expanded_get, LineStyleColorModifier_DistanceFromObject_expanded_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

PointerPropertyRNA rna_LineStyleColorModifier_DistanceFromObject_color_ramp = {
	{(PropertyRNA *)&rna_LineStyleColorModifier_DistanceFromObject_range_min, (PropertyRNA *)&rna_LineStyleColorModifier_DistanceFromObject_expanded,
	-1, "color_ramp", 8388608, "Color Ramp",
	"Color ramp used to change line color",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_LineStyle_update, 385875968, NULL, NULL,
	0, -1, NULL},
	LineStyleColorModifier_DistanceFromObject_color_ramp_get, NULL, NULL, NULL,&RNA_ColorRamp
};

FloatPropertyRNA rna_LineStyleColorModifier_DistanceFromObject_range_min = {
	{(PropertyRNA *)&rna_LineStyleColorModifier_DistanceFromObject_range_max, (PropertyRNA *)&rna_LineStyleColorModifier_DistanceFromObject_color_ramp,
	-1, "range_min", 8195, "Range Min",
	"Lower bound of the input range the mapping is applied",
	0, "*",
	PROP_FLOAT, PROP_DISTANCE | PROP_UNIT_LENGTH, NULL, 0, {0, 0, 0}, 0,
	rna_LineStyle_update, 385875968, NULL, NULL,
	offsetof(LineStyleColorModifier_DistanceFromObject, range_min), 4, NULL},
	LineStyleColorModifier_DistanceFromObject_range_min_get, LineStyleColorModifier_DistanceFromObject_range_min_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, -10000.0f, 10000.0f, -FLT_MAX, FLT_MAX, 10.0f, 3, 0.0f, NULL
};

FloatPropertyRNA rna_LineStyleColorModifier_DistanceFromObject_range_max = {
	{(PropertyRNA *)&rna_LineStyleColorModifier_DistanceFromObject_target, (PropertyRNA *)&rna_LineStyleColorModifier_DistanceFromObject_range_min,
	-1, "range_max", 8195, "Range Max",
	"Upper bound of the input range the mapping is applied",
	0, "*",
	PROP_FLOAT, PROP_DISTANCE | PROP_UNIT_LENGTH, NULL, 0, {0, 0, 0}, 0,
	rna_LineStyle_update, 385875968, NULL, NULL,
	offsetof(LineStyleColorModifier_DistanceFromObject, range_max), 4, NULL},
	LineStyleColorModifier_DistanceFromObject_range_max_get, LineStyleColorModifier_DistanceFromObject_range_max_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, -10000.0f, 10000.0f, -FLT_MAX, FLT_MAX, 10.0f, 3, 0.0f, NULL
};

PointerPropertyRNA rna_LineStyleColorModifier_DistanceFromObject_target = {
	{NULL, (PropertyRNA *)&rna_LineStyleColorModifier_DistanceFromObject_range_max,
	-1, "target", 8388609, "Target",
	"Target object from which the distance is measured",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_LineStyle_update, 385875968, NULL, NULL,
	0, -1, NULL},
	LineStyleColorModifier_DistanceFromObject_target_get, LineStyleColorModifier_DistanceFromObject_target_set, NULL, NULL,&RNA_Object
};

StructRNA RNA_LineStyleColorModifier_DistanceFromObject = {
	{(ContainerRNA *)&RNA_LineStyleColorModifier_Material, (ContainerRNA *)&RNA_LineStyleColorModifier_DistanceFromCamera,
	NULL,
	{(PropertyRNA *)&rna_LineStyleColorModifier_DistanceFromObject_type, (PropertyRNA *)&rna_LineStyleColorModifier_DistanceFromObject_target}},
	"LineStyleColorModifier_DistanceFromObject", NULL, NULL, 4, "Distance from Object",
	"Change line color based on the distance from an object",
	"*", 17,
	(PropertyRNA *)&rna_LineStyleColorModifier_DistanceFromObject_name, (PropertyRNA *)&rna_LineStyleModifier_rna_properties,
	&RNA_LineStyleColorModifier,
	NULL,
	rna_LineStyle_color_modifier_refine,
	rna_LineStyle_color_modifier_path,
	NULL,
	NULL,
	NULL,
	NULL,
	{NULL, NULL}
};

/* Material */
static EnumPropertyItem rna_LineStyleColorModifier_Material_type_items[5] = {
	{1, "ALONG_STROKE", 442, "Along Stroke", ""},
	{2, "DISTANCE_FROM_CAMERA", 442, "Distance from Camera", ""},
	{3, "DISTANCE_FROM_OBJECT", 442, "Distance from Object", ""},
	{4, "MATERIAL", 442, "Material", ""},
	{0, NULL, 0, NULL, NULL}
};

EnumPropertyRNA rna_LineStyleColorModifier_Material_type = {
	{(PropertyRNA *)&rna_LineStyleColorModifier_Material_name, NULL,
	-1, "type", 2, "Modifier Type",
	"Type of the modifier",
	0, "*",
	PROP_ENUM, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	LineStyleColorModifier_Material_type_get, NULL, NULL, NULL, NULL, NULL, rna_LineStyleColorModifier_Material_type_items, 4, 1
};

StringPropertyRNA rna_LineStyleColorModifier_Material_name = {
	{(PropertyRNA *)&rna_LineStyleColorModifier_Material_blend, (PropertyRNA *)&rna_LineStyleColorModifier_Material_type,
	-1, "name", 262145, "Modifier Name",
	"Name of the modifier",
	0, "*",
	PROP_STRING, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {64, 0, 0}, 0,
	NULL, 385875968, NULL, NULL,
	0, -1, NULL},
	LineStyleColorModifier_Material_name_get, LineStyleColorModifier_Material_name_length, LineStyleColorModifier_Material_name_set, NULL, NULL, NULL, 64, ""
};

static EnumPropertyItem rna_LineStyleColorModifier_Material_blend_items[19] = {
	{0, "MIX", 0, "Mix", ""},
	{1, "ADD", 0, "Add", ""},
	{2, "MULTIPLY", 0, "Multiply", ""},
	{3, "SUBTRACT", 0, "Subtract", ""},
	{4, "SCREEN", 0, "Screen", ""},
	{5, "DIVIDE", 0, "Divide", ""},
	{6, "DIFFERENCE", 0, "Difference", ""},
	{7, "DARKEN", 0, "Darken", ""},
	{8, "LIGHTEN", 0, "Lighten", ""},
	{9, "OVERLAY", 0, "Overlay", ""},
	{10, "DODGE", 0, "Dodge", ""},
	{11, "BURN", 0, "Burn", ""},
	{12, "HUE", 0, "Hue", ""},
	{13, "SATURATION", 0, "Saturation", ""},
	{14, "VALUE", 0, "Value", ""},
	{15, "COLOR", 0, "Color", ""},
	{16, "SOFT_LIGHT", 0, "Soft Light", ""},
	{17, "LINEAR_LIGHT", 0, "Linear Light", ""},
	{0, NULL, 0, NULL, NULL}
};

EnumPropertyRNA rna_LineStyleColorModifier_Material_blend = {
	{(PropertyRNA *)&rna_LineStyleColorModifier_Material_influence, (PropertyRNA *)&rna_LineStyleColorModifier_Material_name,
	-1, "blend", 3, "Blend",
	"Specify how the modifier value is blended into the base value",
	0, "*",
	PROP_ENUM, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_LineStyle_update, 385875968, NULL, NULL,
	0, -1, NULL},
	LineStyleColorModifier_Material_blend_get, LineStyleColorModifier_Material_blend_set, NULL, NULL, NULL, NULL, rna_LineStyleColorModifier_Material_blend_items, 18, 0
};

FloatPropertyRNA rna_LineStyleColorModifier_Material_influence = {
	{(PropertyRNA *)&rna_LineStyleColorModifier_Material_use, (PropertyRNA *)&rna_LineStyleColorModifier_Material_blend,
	-1, "influence", 8195, "Influence",
	"Influence factor by which the modifier changes the property",
	0, "*",
	PROP_FLOAT, PROP_FACTOR | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_LineStyle_update, 385875968, NULL, NULL,
	offsetof(LineStyleColorModifier_Material, modifier.influence), 4, NULL},
	LineStyleColorModifier_Material_influence_get, LineStyleColorModifier_Material_influence_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 1.0f, 0.0f, 1.0f, 10.0f, 3, 0.0f, NULL
};

BoolPropertyRNA rna_LineStyleColorModifier_Material_use = {
	{(PropertyRNA *)&rna_LineStyleColorModifier_Material_expanded, (PropertyRNA *)&rna_LineStyleColorModifier_Material_influence,
	-1, "use", 3, "Use",
	"Enable or disable this modifier during stroke rendering",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_LineStyle_update, 385875968, NULL, NULL,
	0, -1, NULL},
	LineStyleColorModifier_Material_use_get, LineStyleColorModifier_Material_use_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_LineStyleColorModifier_Material_expanded = {
	{(PropertyRNA *)&rna_LineStyleColorModifier_Material_material_attribute, (PropertyRNA *)&rna_LineStyleColorModifier_Material_use,
	-1, "expanded", 3, "Expanded",
	"True if the modifier tab is expanded",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	LineStyleColorModifier_Material_expanded_get, LineStyleColorModifier_Material_expanded_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

static EnumPropertyItem rna_LineStyleColorModifier_Material_material_attribute_items[16] = {
	{11, "LINE", 0, "Line Color", ""},
	{12, "LINE_R", 0, "Line Color Red", ""},
	{13, "LINE_G", 0, "Line Color Green", ""},
	{14, "LINE_B", 0, "Line Color Blue", ""},
	{15, "LINE_A", 0, "Line Color Alpha", ""},
	{1, "DIFF", 0, "Diffuse Color", ""},
	{2, "DIFF_R", 0, "Diffuse Color Red", ""},
	{3, "DIFF_G", 0, "Diffuse Color Green", ""},
	{4, "DIFF_B", 0, "Diffuse Color Blue", ""},
	{5, "SPEC", 0, "Specular Color", ""},
	{6, "SPEC_R", 0, "Specular Color Red", ""},
	{7, "SPEC_G", 0, "Specular Color Green", ""},
	{8, "SPEC_B", 0, "Specular Color Blue", ""},
	{9, "SPEC_HARD", 0, "Specular Hardness", ""},
	{10, "ALPHA", 0, "Alpha Transparency", ""},
	{0, NULL, 0, NULL, NULL}
};

EnumPropertyRNA rna_LineStyleColorModifier_Material_material_attribute = {
	{(PropertyRNA *)&rna_LineStyleColorModifier_Material_color_ramp, (PropertyRNA *)&rna_LineStyleColorModifier_Material_expanded,
	-1, "material_attribute", 3, "Material Attribute",
	"Specify which material attribute is used",
	0, "*",
	PROP_ENUM, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_LineStyle_update, 385875968, NULL, NULL,
	0, -1, NULL},
	LineStyleColorModifier_Material_material_attribute_get, LineStyleColorModifier_Material_material_attribute_set, NULL, NULL, NULL, NULL, rna_LineStyleColorModifier_Material_material_attribute_items, 15, 11
};

PointerPropertyRNA rna_LineStyleColorModifier_Material_color_ramp = {
	{(PropertyRNA *)&rna_LineStyleColorModifier_Material_use_ramp, (PropertyRNA *)&rna_LineStyleColorModifier_Material_material_attribute,
	-1, "color_ramp", 8388608, "Color Ramp",
	"Color ramp used to change line color",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_LineStyle_update, 385875968, NULL, NULL,
	0, -1, NULL},
	LineStyleColorModifier_Material_color_ramp_get, NULL, NULL, NULL,&RNA_ColorRamp
};

BoolPropertyRNA rna_LineStyleColorModifier_Material_use_ramp = {
	{NULL, (PropertyRNA *)&rna_LineStyleColorModifier_Material_color_ramp,
	-1, "use_ramp", 3, "Ramp",
	"Use color ramp to map the BW average into an RGB color",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_LineStyle_update, 385875968, NULL, NULL,
	0, -1, NULL},
	LineStyleColorModifier_Material_use_ramp_get, LineStyleColorModifier_Material_use_ramp_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

StructRNA RNA_LineStyleColorModifier_Material = {
	{(ContainerRNA *)&RNA_LineStyleAlphaModifier, (ContainerRNA *)&RNA_LineStyleColorModifier_DistanceFromObject,
	NULL,
	{(PropertyRNA *)&rna_LineStyleColorModifier_Material_type, (PropertyRNA *)&rna_LineStyleColorModifier_Material_use_ramp}},
	"LineStyleColorModifier_Material", NULL, NULL, 4, "Material",
	"Change line color based on a material attribute",
	"*", 17,
	(PropertyRNA *)&rna_LineStyleColorModifier_Material_name, (PropertyRNA *)&rna_LineStyleModifier_rna_properties,
	&RNA_LineStyleColorModifier,
	NULL,
	rna_LineStyle_color_modifier_refine,
	rna_LineStyle_color_modifier_path,
	NULL,
	NULL,
	NULL,
	NULL,
	{NULL, NULL}
};

/* Line Style Alpha Modifier */
StructRNA RNA_LineStyleAlphaModifier = {
	{(ContainerRNA *)&RNA_LineStyleAlphaModifier_AlongStroke, (ContainerRNA *)&RNA_LineStyleColorModifier_Material,
	NULL,
	{NULL, NULL}},
	"LineStyleAlphaModifier", NULL, NULL, 4, "Line Style Alpha Modifier",
	"Base type to define alpha transparency modifiers",
	"*", 17,
	NULL, (PropertyRNA *)&rna_LineStyleModifier_rna_properties,
	&RNA_LineStyleModifier,
	NULL,
	rna_LineStyle_alpha_modifier_refine,
	rna_LineStyle_alpha_modifier_path,
	NULL,
	NULL,
	NULL,
	NULL,
	{NULL, NULL}
};

/* Along Stroke */
static EnumPropertyItem rna_LineStyleAlphaModifier_AlongStroke_type_items[5] = {
	{1, "ALONG_STROKE", 442, "Along Stroke", ""},
	{2, "DISTANCE_FROM_CAMERA", 442, "Distance from Camera", ""},
	{3, "DISTANCE_FROM_OBJECT", 442, "Distance from Object", ""},
	{4, "MATERIAL", 442, "Material", ""},
	{0, NULL, 0, NULL, NULL}
};

EnumPropertyRNA rna_LineStyleAlphaModifier_AlongStroke_type = {
	{(PropertyRNA *)&rna_LineStyleAlphaModifier_AlongStroke_name, NULL,
	-1, "type", 2, "Modifier Type",
	"Type of the modifier",
	0, "*",
	PROP_ENUM, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	LineStyleAlphaModifier_AlongStroke_type_get, NULL, NULL, NULL, NULL, NULL, rna_LineStyleAlphaModifier_AlongStroke_type_items, 4, 1
};

StringPropertyRNA rna_LineStyleAlphaModifier_AlongStroke_name = {
	{(PropertyRNA *)&rna_LineStyleAlphaModifier_AlongStroke_blend, (PropertyRNA *)&rna_LineStyleAlphaModifier_AlongStroke_type,
	-1, "name", 262145, "Modifier Name",
	"Name of the modifier",
	0, "*",
	PROP_STRING, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {64, 0, 0}, 0,
	NULL, 385875968, NULL, NULL,
	0, -1, NULL},
	LineStyleAlphaModifier_AlongStroke_name_get, LineStyleAlphaModifier_AlongStroke_name_length, LineStyleAlphaModifier_AlongStroke_name_set, NULL, NULL, NULL, 64, ""
};

static EnumPropertyItem rna_LineStyleAlphaModifier_AlongStroke_blend_items[9] = {
	{0, "MIX", 0, "Mix", ""},
	{1, "ADD", 0, "Add", ""},
	{3, "SUBTRACT", 0, "Subtract", ""},
	{2, "MULTIPLY", 0, "Multiply", ""},
	{4, "DIVIDE", 0, "Divide", ""},
	{5, "DIFFERENCE", 0, "Difference", ""},
	{6, "MININUM", 0, "Minimum", ""},
	{7, "MAXIMUM", 0, "Maximum", ""},
	{0, NULL, 0, NULL, NULL}
};

EnumPropertyRNA rna_LineStyleAlphaModifier_AlongStroke_blend = {
	{(PropertyRNA *)&rna_LineStyleAlphaModifier_AlongStroke_influence, (PropertyRNA *)&rna_LineStyleAlphaModifier_AlongStroke_name,
	-1, "blend", 3, "Blend",
	"Specify how the modifier value is blended into the base value",
	0, "*",
	PROP_ENUM, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_LineStyle_update, 385875968, NULL, NULL,
	0, -1, NULL},
	LineStyleAlphaModifier_AlongStroke_blend_get, LineStyleAlphaModifier_AlongStroke_blend_set, NULL, NULL, NULL, NULL, rna_LineStyleAlphaModifier_AlongStroke_blend_items, 8, 0
};

FloatPropertyRNA rna_LineStyleAlphaModifier_AlongStroke_influence = {
	{(PropertyRNA *)&rna_LineStyleAlphaModifier_AlongStroke_use, (PropertyRNA *)&rna_LineStyleAlphaModifier_AlongStroke_blend,
	-1, "influence", 8195, "Influence",
	"Influence factor by which the modifier changes the property",
	0, "*",
	PROP_FLOAT, PROP_FACTOR | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_LineStyle_update, 385875968, NULL, NULL,
	offsetof(LineStyleAlphaModifier_AlongStroke, modifier.influence), 4, NULL},
	LineStyleAlphaModifier_AlongStroke_influence_get, LineStyleAlphaModifier_AlongStroke_influence_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 1.0f, 0.0f, 1.0f, 10.0f, 3, 0.0f, NULL
};

BoolPropertyRNA rna_LineStyleAlphaModifier_AlongStroke_use = {
	{(PropertyRNA *)&rna_LineStyleAlphaModifier_AlongStroke_expanded, (PropertyRNA *)&rna_LineStyleAlphaModifier_AlongStroke_influence,
	-1, "use", 3, "Use",
	"Enable or disable this modifier during stroke rendering",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_LineStyle_update, 385875968, NULL, NULL,
	0, -1, NULL},
	LineStyleAlphaModifier_AlongStroke_use_get, LineStyleAlphaModifier_AlongStroke_use_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_LineStyleAlphaModifier_AlongStroke_expanded = {
	{(PropertyRNA *)&rna_LineStyleAlphaModifier_AlongStroke_mapping, (PropertyRNA *)&rna_LineStyleAlphaModifier_AlongStroke_use,
	-1, "expanded", 3, "Expanded",
	"True if the modifier tab is expanded",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	LineStyleAlphaModifier_AlongStroke_expanded_get, LineStyleAlphaModifier_AlongStroke_expanded_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

static EnumPropertyItem rna_LineStyleAlphaModifier_AlongStroke_mapping_items[3] = {
	{0, "LINEAR", 0, "Linear", "Use linear mapping"},
	{1, "CURVE", 0, "Curve", "Use curve mapping"},
	{0, NULL, 0, NULL, NULL}
};

EnumPropertyRNA rna_LineStyleAlphaModifier_AlongStroke_mapping = {
	{(PropertyRNA *)&rna_LineStyleAlphaModifier_AlongStroke_invert, (PropertyRNA *)&rna_LineStyleAlphaModifier_AlongStroke_expanded,
	-1, "mapping", 3, "Mapping",
	"Select the mapping type",
	0, "*",
	PROP_ENUM, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_LineStyle_update, 385875968, NULL, NULL,
	0, -1, NULL},
	LineStyleAlphaModifier_AlongStroke_mapping_get, LineStyleAlphaModifier_AlongStroke_mapping_set, NULL, NULL, NULL, NULL, rna_LineStyleAlphaModifier_AlongStroke_mapping_items, 2, 0
};

BoolPropertyRNA rna_LineStyleAlphaModifier_AlongStroke_invert = {
	{(PropertyRNA *)&rna_LineStyleAlphaModifier_AlongStroke_curve, (PropertyRNA *)&rna_LineStyleAlphaModifier_AlongStroke_mapping,
	-1, "invert", 3, "Invert",
	"Invert the fade-out direction of the linear mapping",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_LineStyle_update, 385875968, NULL, NULL,
	0, -1, NULL},
	LineStyleAlphaModifier_AlongStroke_invert_get, LineStyleAlphaModifier_AlongStroke_invert_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

PointerPropertyRNA rna_LineStyleAlphaModifier_AlongStroke_curve = {
	{NULL, (PropertyRNA *)&rna_LineStyleAlphaModifier_AlongStroke_invert,
	-1, "curve", 8388608, "Curve",
	"Curve used for the curve mapping",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_LineStyle_update, 385875968, NULL, NULL,
	0, -1, NULL},
	LineStyleAlphaModifier_AlongStroke_curve_get, NULL, NULL, NULL,&RNA_CurveMapping
};

StructRNA RNA_LineStyleAlphaModifier_AlongStroke = {
	{(ContainerRNA *)&RNA_LineStyleAlphaModifier_DistanceFromCamera, (ContainerRNA *)&RNA_LineStyleAlphaModifier,
	NULL,
	{(PropertyRNA *)&rna_LineStyleAlphaModifier_AlongStroke_type, (PropertyRNA *)&rna_LineStyleAlphaModifier_AlongStroke_curve}},
	"LineStyleAlphaModifier_AlongStroke", NULL, NULL, 4, "Along Stroke",
	"Change alpha transparency along stroke",
	"*", 17,
	(PropertyRNA *)&rna_LineStyleAlphaModifier_AlongStroke_name, (PropertyRNA *)&rna_LineStyleModifier_rna_properties,
	&RNA_LineStyleAlphaModifier,
	NULL,
	rna_LineStyle_alpha_modifier_refine,
	rna_LineStyle_alpha_modifier_path,
	NULL,
	NULL,
	NULL,
	NULL,
	{NULL, NULL}
};

/* Distance from Camera */
static EnumPropertyItem rna_LineStyleAlphaModifier_DistanceFromCamera_type_items[5] = {
	{1, "ALONG_STROKE", 442, "Along Stroke", ""},
	{2, "DISTANCE_FROM_CAMERA", 442, "Distance from Camera", ""},
	{3, "DISTANCE_FROM_OBJECT", 442, "Distance from Object", ""},
	{4, "MATERIAL", 442, "Material", ""},
	{0, NULL, 0, NULL, NULL}
};

EnumPropertyRNA rna_LineStyleAlphaModifier_DistanceFromCamera_type = {
	{(PropertyRNA *)&rna_LineStyleAlphaModifier_DistanceFromCamera_name, NULL,
	-1, "type", 2, "Modifier Type",
	"Type of the modifier",
	0, "*",
	PROP_ENUM, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	LineStyleAlphaModifier_DistanceFromCamera_type_get, NULL, NULL, NULL, NULL, NULL, rna_LineStyleAlphaModifier_DistanceFromCamera_type_items, 4, 1
};

StringPropertyRNA rna_LineStyleAlphaModifier_DistanceFromCamera_name = {
	{(PropertyRNA *)&rna_LineStyleAlphaModifier_DistanceFromCamera_blend, (PropertyRNA *)&rna_LineStyleAlphaModifier_DistanceFromCamera_type,
	-1, "name", 262145, "Modifier Name",
	"Name of the modifier",
	0, "*",
	PROP_STRING, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {64, 0, 0}, 0,
	NULL, 385875968, NULL, NULL,
	0, -1, NULL},
	LineStyleAlphaModifier_DistanceFromCamera_name_get, LineStyleAlphaModifier_DistanceFromCamera_name_length, LineStyleAlphaModifier_DistanceFromCamera_name_set, NULL, NULL, NULL, 64, ""
};

static EnumPropertyItem rna_LineStyleAlphaModifier_DistanceFromCamera_blend_items[9] = {
	{0, "MIX", 0, "Mix", ""},
	{1, "ADD", 0, "Add", ""},
	{3, "SUBTRACT", 0, "Subtract", ""},
	{2, "MULTIPLY", 0, "Multiply", ""},
	{4, "DIVIDE", 0, "Divide", ""},
	{5, "DIFFERENCE", 0, "Difference", ""},
	{6, "MININUM", 0, "Minimum", ""},
	{7, "MAXIMUM", 0, "Maximum", ""},
	{0, NULL, 0, NULL, NULL}
};

EnumPropertyRNA rna_LineStyleAlphaModifier_DistanceFromCamera_blend = {
	{(PropertyRNA *)&rna_LineStyleAlphaModifier_DistanceFromCamera_influence, (PropertyRNA *)&rna_LineStyleAlphaModifier_DistanceFromCamera_name,
	-1, "blend", 3, "Blend",
	"Specify how the modifier value is blended into the base value",
	0, "*",
	PROP_ENUM, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_LineStyle_update, 385875968, NULL, NULL,
	0, -1, NULL},
	LineStyleAlphaModifier_DistanceFromCamera_blend_get, LineStyleAlphaModifier_DistanceFromCamera_blend_set, NULL, NULL, NULL, NULL, rna_LineStyleAlphaModifier_DistanceFromCamera_blend_items, 8, 0
};

FloatPropertyRNA rna_LineStyleAlphaModifier_DistanceFromCamera_influence = {
	{(PropertyRNA *)&rna_LineStyleAlphaModifier_DistanceFromCamera_use, (PropertyRNA *)&rna_LineStyleAlphaModifier_DistanceFromCamera_blend,
	-1, "influence", 8195, "Influence",
	"Influence factor by which the modifier changes the property",
	0, "*",
	PROP_FLOAT, PROP_FACTOR | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_LineStyle_update, 385875968, NULL, NULL,
	offsetof(LineStyleAlphaModifier_DistanceFromCamera, modifier.influence), 4, NULL},
	LineStyleAlphaModifier_DistanceFromCamera_influence_get, LineStyleAlphaModifier_DistanceFromCamera_influence_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 1.0f, 0.0f, 1.0f, 10.0f, 3, 0.0f, NULL
};

BoolPropertyRNA rna_LineStyleAlphaModifier_DistanceFromCamera_use = {
	{(PropertyRNA *)&rna_LineStyleAlphaModifier_DistanceFromCamera_expanded, (PropertyRNA *)&rna_LineStyleAlphaModifier_DistanceFromCamera_influence,
	-1, "use", 3, "Use",
	"Enable or disable this modifier during stroke rendering",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_LineStyle_update, 385875968, NULL, NULL,
	0, -1, NULL},
	LineStyleAlphaModifier_DistanceFromCamera_use_get, LineStyleAlphaModifier_DistanceFromCamera_use_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_LineStyleAlphaModifier_DistanceFromCamera_expanded = {
	{(PropertyRNA *)&rna_LineStyleAlphaModifier_DistanceFromCamera_mapping, (PropertyRNA *)&rna_LineStyleAlphaModifier_DistanceFromCamera_use,
	-1, "expanded", 3, "Expanded",
	"True if the modifier tab is expanded",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	LineStyleAlphaModifier_DistanceFromCamera_expanded_get, LineStyleAlphaModifier_DistanceFromCamera_expanded_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

static EnumPropertyItem rna_LineStyleAlphaModifier_DistanceFromCamera_mapping_items[3] = {
	{0, "LINEAR", 0, "Linear", "Use linear mapping"},
	{1, "CURVE", 0, "Curve", "Use curve mapping"},
	{0, NULL, 0, NULL, NULL}
};

EnumPropertyRNA rna_LineStyleAlphaModifier_DistanceFromCamera_mapping = {
	{(PropertyRNA *)&rna_LineStyleAlphaModifier_DistanceFromCamera_invert, (PropertyRNA *)&rna_LineStyleAlphaModifier_DistanceFromCamera_expanded,
	-1, "mapping", 3, "Mapping",
	"Select the mapping type",
	0, "*",
	PROP_ENUM, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_LineStyle_update, 385875968, NULL, NULL,
	0, -1, NULL},
	LineStyleAlphaModifier_DistanceFromCamera_mapping_get, LineStyleAlphaModifier_DistanceFromCamera_mapping_set, NULL, NULL, NULL, NULL, rna_LineStyleAlphaModifier_DistanceFromCamera_mapping_items, 2, 0
};

BoolPropertyRNA rna_LineStyleAlphaModifier_DistanceFromCamera_invert = {
	{(PropertyRNA *)&rna_LineStyleAlphaModifier_DistanceFromCamera_curve, (PropertyRNA *)&rna_LineStyleAlphaModifier_DistanceFromCamera_mapping,
	-1, "invert", 3, "Invert",
	"Invert the fade-out direction of the linear mapping",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_LineStyle_update, 385875968, NULL, NULL,
	0, -1, NULL},
	LineStyleAlphaModifier_DistanceFromCamera_invert_get, LineStyleAlphaModifier_DistanceFromCamera_invert_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

PointerPropertyRNA rna_LineStyleAlphaModifier_DistanceFromCamera_curve = {
	{(PropertyRNA *)&rna_LineStyleAlphaModifier_DistanceFromCamera_range_min, (PropertyRNA *)&rna_LineStyleAlphaModifier_DistanceFromCamera_invert,
	-1, "curve", 8388608, "Curve",
	"Curve used for the curve mapping",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_LineStyle_update, 385875968, NULL, NULL,
	0, -1, NULL},
	LineStyleAlphaModifier_DistanceFromCamera_curve_get, NULL, NULL, NULL,&RNA_CurveMapping
};

FloatPropertyRNA rna_LineStyleAlphaModifier_DistanceFromCamera_range_min = {
	{(PropertyRNA *)&rna_LineStyleAlphaModifier_DistanceFromCamera_range_max, (PropertyRNA *)&rna_LineStyleAlphaModifier_DistanceFromCamera_curve,
	-1, "range_min", 8195, "Range Min",
	"Lower bound of the input range the mapping is applied",
	0, "*",
	PROP_FLOAT, PROP_DISTANCE | PROP_UNIT_LENGTH, NULL, 0, {0, 0, 0}, 0,
	rna_LineStyle_update, 385875968, NULL, NULL,
	offsetof(LineStyleAlphaModifier_DistanceFromCamera, range_min), 4, NULL},
	LineStyleAlphaModifier_DistanceFromCamera_range_min_get, LineStyleAlphaModifier_DistanceFromCamera_range_min_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, -10000.0f, 10000.0f, -FLT_MAX, FLT_MAX, 10.0f, 3, 0.0f, NULL
};

FloatPropertyRNA rna_LineStyleAlphaModifier_DistanceFromCamera_range_max = {
	{NULL, (PropertyRNA *)&rna_LineStyleAlphaModifier_DistanceFromCamera_range_min,
	-1, "range_max", 8195, "Range Max",
	"Upper bound of the input range the mapping is applied",
	0, "*",
	PROP_FLOAT, PROP_DISTANCE | PROP_UNIT_LENGTH, NULL, 0, {0, 0, 0}, 0,
	rna_LineStyle_update, 385875968, NULL, NULL,
	offsetof(LineStyleAlphaModifier_DistanceFromCamera, range_max), 4, NULL},
	LineStyleAlphaModifier_DistanceFromCamera_range_max_get, LineStyleAlphaModifier_DistanceFromCamera_range_max_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, -10000.0f, 10000.0f, -FLT_MAX, FLT_MAX, 10.0f, 3, 0.0f, NULL
};

StructRNA RNA_LineStyleAlphaModifier_DistanceFromCamera = {
	{(ContainerRNA *)&RNA_LineStyleAlphaModifier_DistanceFromObject, (ContainerRNA *)&RNA_LineStyleAlphaModifier_AlongStroke,
	NULL,
	{(PropertyRNA *)&rna_LineStyleAlphaModifier_DistanceFromCamera_type, (PropertyRNA *)&rna_LineStyleAlphaModifier_DistanceFromCamera_range_max}},
	"LineStyleAlphaModifier_DistanceFromCamera", NULL, NULL, 4, "Distance from Camera",
	"Change alpha transparency based on the distance from the camera",
	"*", 17,
	(PropertyRNA *)&rna_LineStyleAlphaModifier_DistanceFromCamera_name, (PropertyRNA *)&rna_LineStyleModifier_rna_properties,
	&RNA_LineStyleAlphaModifier,
	NULL,
	rna_LineStyle_alpha_modifier_refine,
	rna_LineStyle_alpha_modifier_path,
	NULL,
	NULL,
	NULL,
	NULL,
	{NULL, NULL}
};

/* Distance from Object */
static EnumPropertyItem rna_LineStyleAlphaModifier_DistanceFromObject_type_items[5] = {
	{1, "ALONG_STROKE", 442, "Along Stroke", ""},
	{2, "DISTANCE_FROM_CAMERA", 442, "Distance from Camera", ""},
	{3, "DISTANCE_FROM_OBJECT", 442, "Distance from Object", ""},
	{4, "MATERIAL", 442, "Material", ""},
	{0, NULL, 0, NULL, NULL}
};

EnumPropertyRNA rna_LineStyleAlphaModifier_DistanceFromObject_type = {
	{(PropertyRNA *)&rna_LineStyleAlphaModifier_DistanceFromObject_name, NULL,
	-1, "type", 2, "Modifier Type",
	"Type of the modifier",
	0, "*",
	PROP_ENUM, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	LineStyleAlphaModifier_DistanceFromObject_type_get, NULL, NULL, NULL, NULL, NULL, rna_LineStyleAlphaModifier_DistanceFromObject_type_items, 4, 1
};

StringPropertyRNA rna_LineStyleAlphaModifier_DistanceFromObject_name = {
	{(PropertyRNA *)&rna_LineStyleAlphaModifier_DistanceFromObject_blend, (PropertyRNA *)&rna_LineStyleAlphaModifier_DistanceFromObject_type,
	-1, "name", 262145, "Modifier Name",
	"Name of the modifier",
	0, "*",
	PROP_STRING, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {64, 0, 0}, 0,
	NULL, 385875968, NULL, NULL,
	0, -1, NULL},
	LineStyleAlphaModifier_DistanceFromObject_name_get, LineStyleAlphaModifier_DistanceFromObject_name_length, LineStyleAlphaModifier_DistanceFromObject_name_set, NULL, NULL, NULL, 64, ""
};

static EnumPropertyItem rna_LineStyleAlphaModifier_DistanceFromObject_blend_items[9] = {
	{0, "MIX", 0, "Mix", ""},
	{1, "ADD", 0, "Add", ""},
	{3, "SUBTRACT", 0, "Subtract", ""},
	{2, "MULTIPLY", 0, "Multiply", ""},
	{4, "DIVIDE", 0, "Divide", ""},
	{5, "DIFFERENCE", 0, "Difference", ""},
	{6, "MININUM", 0, "Minimum", ""},
	{7, "MAXIMUM", 0, "Maximum", ""},
	{0, NULL, 0, NULL, NULL}
};

EnumPropertyRNA rna_LineStyleAlphaModifier_DistanceFromObject_blend = {
	{(PropertyRNA *)&rna_LineStyleAlphaModifier_DistanceFromObject_influence, (PropertyRNA *)&rna_LineStyleAlphaModifier_DistanceFromObject_name,
	-1, "blend", 3, "Blend",
	"Specify how the modifier value is blended into the base value",
	0, "*",
	PROP_ENUM, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_LineStyle_update, 385875968, NULL, NULL,
	0, -1, NULL},
	LineStyleAlphaModifier_DistanceFromObject_blend_get, LineStyleAlphaModifier_DistanceFromObject_blend_set, NULL, NULL, NULL, NULL, rna_LineStyleAlphaModifier_DistanceFromObject_blend_items, 8, 0
};

FloatPropertyRNA rna_LineStyleAlphaModifier_DistanceFromObject_influence = {
	{(PropertyRNA *)&rna_LineStyleAlphaModifier_DistanceFromObject_use, (PropertyRNA *)&rna_LineStyleAlphaModifier_DistanceFromObject_blend,
	-1, "influence", 8195, "Influence",
	"Influence factor by which the modifier changes the property",
	0, "*",
	PROP_FLOAT, PROP_FACTOR | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_LineStyle_update, 385875968, NULL, NULL,
	offsetof(LineStyleAlphaModifier_DistanceFromObject, modifier.influence), 4, NULL},
	LineStyleAlphaModifier_DistanceFromObject_influence_get, LineStyleAlphaModifier_DistanceFromObject_influence_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 1.0f, 0.0f, 1.0f, 10.0f, 3, 0.0f, NULL
};

BoolPropertyRNA rna_LineStyleAlphaModifier_DistanceFromObject_use = {
	{(PropertyRNA *)&rna_LineStyleAlphaModifier_DistanceFromObject_expanded, (PropertyRNA *)&rna_LineStyleAlphaModifier_DistanceFromObject_influence,
	-1, "use", 3, "Use",
	"Enable or disable this modifier during stroke rendering",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_LineStyle_update, 385875968, NULL, NULL,
	0, -1, NULL},
	LineStyleAlphaModifier_DistanceFromObject_use_get, LineStyleAlphaModifier_DistanceFromObject_use_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_LineStyleAlphaModifier_DistanceFromObject_expanded = {
	{(PropertyRNA *)&rna_LineStyleAlphaModifier_DistanceFromObject_mapping, (PropertyRNA *)&rna_LineStyleAlphaModifier_DistanceFromObject_use,
	-1, "expanded", 3, "Expanded",
	"True if the modifier tab is expanded",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	LineStyleAlphaModifier_DistanceFromObject_expanded_get, LineStyleAlphaModifier_DistanceFromObject_expanded_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

static EnumPropertyItem rna_LineStyleAlphaModifier_DistanceFromObject_mapping_items[3] = {
	{0, "LINEAR", 0, "Linear", "Use linear mapping"},
	{1, "CURVE", 0, "Curve", "Use curve mapping"},
	{0, NULL, 0, NULL, NULL}
};

EnumPropertyRNA rna_LineStyleAlphaModifier_DistanceFromObject_mapping = {
	{(PropertyRNA *)&rna_LineStyleAlphaModifier_DistanceFromObject_invert, (PropertyRNA *)&rna_LineStyleAlphaModifier_DistanceFromObject_expanded,
	-1, "mapping", 3, "Mapping",
	"Select the mapping type",
	0, "*",
	PROP_ENUM, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_LineStyle_update, 385875968, NULL, NULL,
	0, -1, NULL},
	LineStyleAlphaModifier_DistanceFromObject_mapping_get, LineStyleAlphaModifier_DistanceFromObject_mapping_set, NULL, NULL, NULL, NULL, rna_LineStyleAlphaModifier_DistanceFromObject_mapping_items, 2, 0
};

BoolPropertyRNA rna_LineStyleAlphaModifier_DistanceFromObject_invert = {
	{(PropertyRNA *)&rna_LineStyleAlphaModifier_DistanceFromObject_curve, (PropertyRNA *)&rna_LineStyleAlphaModifier_DistanceFromObject_mapping,
	-1, "invert", 3, "Invert",
	"Invert the fade-out direction of the linear mapping",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_LineStyle_update, 385875968, NULL, NULL,
	0, -1, NULL},
	LineStyleAlphaModifier_DistanceFromObject_invert_get, LineStyleAlphaModifier_DistanceFromObject_invert_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

PointerPropertyRNA rna_LineStyleAlphaModifier_DistanceFromObject_curve = {
	{(PropertyRNA *)&rna_LineStyleAlphaModifier_DistanceFromObject_range_min, (PropertyRNA *)&rna_LineStyleAlphaModifier_DistanceFromObject_invert,
	-1, "curve", 8388608, "Curve",
	"Curve used for the curve mapping",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_LineStyle_update, 385875968, NULL, NULL,
	0, -1, NULL},
	LineStyleAlphaModifier_DistanceFromObject_curve_get, NULL, NULL, NULL,&RNA_CurveMapping
};

FloatPropertyRNA rna_LineStyleAlphaModifier_DistanceFromObject_range_min = {
	{(PropertyRNA *)&rna_LineStyleAlphaModifier_DistanceFromObject_range_max, (PropertyRNA *)&rna_LineStyleAlphaModifier_DistanceFromObject_curve,
	-1, "range_min", 8195, "Range Min",
	"Lower bound of the input range the mapping is applied",
	0, "*",
	PROP_FLOAT, PROP_DISTANCE | PROP_UNIT_LENGTH, NULL, 0, {0, 0, 0}, 0,
	rna_LineStyle_update, 385875968, NULL, NULL,
	offsetof(LineStyleAlphaModifier_DistanceFromObject, range_min), 4, NULL},
	LineStyleAlphaModifier_DistanceFromObject_range_min_get, LineStyleAlphaModifier_DistanceFromObject_range_min_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, -10000.0f, 10000.0f, -FLT_MAX, FLT_MAX, 10.0f, 3, 0.0f, NULL
};

FloatPropertyRNA rna_LineStyleAlphaModifier_DistanceFromObject_range_max = {
	{(PropertyRNA *)&rna_LineStyleAlphaModifier_DistanceFromObject_target, (PropertyRNA *)&rna_LineStyleAlphaModifier_DistanceFromObject_range_min,
	-1, "range_max", 8195, "Range Max",
	"Upper bound of the input range the mapping is applied",
	0, "*",
	PROP_FLOAT, PROP_DISTANCE | PROP_UNIT_LENGTH, NULL, 0, {0, 0, 0}, 0,
	rna_LineStyle_update, 385875968, NULL, NULL,
	offsetof(LineStyleAlphaModifier_DistanceFromObject, range_max), 4, NULL},
	LineStyleAlphaModifier_DistanceFromObject_range_max_get, LineStyleAlphaModifier_DistanceFromObject_range_max_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, -10000.0f, 10000.0f, -FLT_MAX, FLT_MAX, 10.0f, 3, 0.0f, NULL
};

PointerPropertyRNA rna_LineStyleAlphaModifier_DistanceFromObject_target = {
	{NULL, (PropertyRNA *)&rna_LineStyleAlphaModifier_DistanceFromObject_range_max,
	-1, "target", 8388609, "Target",
	"Target object from which the distance is measured",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_LineStyle_update, 385875968, NULL, NULL,
	0, -1, NULL},
	LineStyleAlphaModifier_DistanceFromObject_target_get, LineStyleAlphaModifier_DistanceFromObject_target_set, NULL, NULL,&RNA_Object
};

StructRNA RNA_LineStyleAlphaModifier_DistanceFromObject = {
	{(ContainerRNA *)&RNA_LineStyleAlphaModifier_Material, (ContainerRNA *)&RNA_LineStyleAlphaModifier_DistanceFromCamera,
	NULL,
	{(PropertyRNA *)&rna_LineStyleAlphaModifier_DistanceFromObject_type, (PropertyRNA *)&rna_LineStyleAlphaModifier_DistanceFromObject_target}},
	"LineStyleAlphaModifier_DistanceFromObject", NULL, NULL, 4, "Distance from Object",
	"Change alpha transparency based on the distance from an object",
	"*", 17,
	(PropertyRNA *)&rna_LineStyleAlphaModifier_DistanceFromObject_name, (PropertyRNA *)&rna_LineStyleModifier_rna_properties,
	&RNA_LineStyleAlphaModifier,
	NULL,
	rna_LineStyle_alpha_modifier_refine,
	rna_LineStyle_alpha_modifier_path,
	NULL,
	NULL,
	NULL,
	NULL,
	{NULL, NULL}
};

/* Material */
static EnumPropertyItem rna_LineStyleAlphaModifier_Material_type_items[5] = {
	{1, "ALONG_STROKE", 442, "Along Stroke", ""},
	{2, "DISTANCE_FROM_CAMERA", 442, "Distance from Camera", ""},
	{3, "DISTANCE_FROM_OBJECT", 442, "Distance from Object", ""},
	{4, "MATERIAL", 442, "Material", ""},
	{0, NULL, 0, NULL, NULL}
};

EnumPropertyRNA rna_LineStyleAlphaModifier_Material_type = {
	{(PropertyRNA *)&rna_LineStyleAlphaModifier_Material_name, NULL,
	-1, "type", 2, "Modifier Type",
	"Type of the modifier",
	0, "*",
	PROP_ENUM, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	LineStyleAlphaModifier_Material_type_get, NULL, NULL, NULL, NULL, NULL, rna_LineStyleAlphaModifier_Material_type_items, 4, 1
};

StringPropertyRNA rna_LineStyleAlphaModifier_Material_name = {
	{(PropertyRNA *)&rna_LineStyleAlphaModifier_Material_blend, (PropertyRNA *)&rna_LineStyleAlphaModifier_Material_type,
	-1, "name", 262145, "Modifier Name",
	"Name of the modifier",
	0, "*",
	PROP_STRING, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {64, 0, 0}, 0,
	NULL, 385875968, NULL, NULL,
	0, -1, NULL},
	LineStyleAlphaModifier_Material_name_get, LineStyleAlphaModifier_Material_name_length, LineStyleAlphaModifier_Material_name_set, NULL, NULL, NULL, 64, ""
};

static EnumPropertyItem rna_LineStyleAlphaModifier_Material_blend_items[9] = {
	{0, "MIX", 0, "Mix", ""},
	{1, "ADD", 0, "Add", ""},
	{3, "SUBTRACT", 0, "Subtract", ""},
	{2, "MULTIPLY", 0, "Multiply", ""},
	{4, "DIVIDE", 0, "Divide", ""},
	{5, "DIFFERENCE", 0, "Difference", ""},
	{6, "MININUM", 0, "Minimum", ""},
	{7, "MAXIMUM", 0, "Maximum", ""},
	{0, NULL, 0, NULL, NULL}
};

EnumPropertyRNA rna_LineStyleAlphaModifier_Material_blend = {
	{(PropertyRNA *)&rna_LineStyleAlphaModifier_Material_influence, (PropertyRNA *)&rna_LineStyleAlphaModifier_Material_name,
	-1, "blend", 3, "Blend",
	"Specify how the modifier value is blended into the base value",
	0, "*",
	PROP_ENUM, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_LineStyle_update, 385875968, NULL, NULL,
	0, -1, NULL},
	LineStyleAlphaModifier_Material_blend_get, LineStyleAlphaModifier_Material_blend_set, NULL, NULL, NULL, NULL, rna_LineStyleAlphaModifier_Material_blend_items, 8, 0
};

FloatPropertyRNA rna_LineStyleAlphaModifier_Material_influence = {
	{(PropertyRNA *)&rna_LineStyleAlphaModifier_Material_use, (PropertyRNA *)&rna_LineStyleAlphaModifier_Material_blend,
	-1, "influence", 8195, "Influence",
	"Influence factor by which the modifier changes the property",
	0, "*",
	PROP_FLOAT, PROP_FACTOR | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_LineStyle_update, 385875968, NULL, NULL,
	offsetof(LineStyleAlphaModifier_Material, modifier.influence), 4, NULL},
	LineStyleAlphaModifier_Material_influence_get, LineStyleAlphaModifier_Material_influence_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 1.0f, 0.0f, 1.0f, 10.0f, 3, 0.0f, NULL
};

BoolPropertyRNA rna_LineStyleAlphaModifier_Material_use = {
	{(PropertyRNA *)&rna_LineStyleAlphaModifier_Material_expanded, (PropertyRNA *)&rna_LineStyleAlphaModifier_Material_influence,
	-1, "use", 3, "Use",
	"Enable or disable this modifier during stroke rendering",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_LineStyle_update, 385875968, NULL, NULL,
	0, -1, NULL},
	LineStyleAlphaModifier_Material_use_get, LineStyleAlphaModifier_Material_use_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_LineStyleAlphaModifier_Material_expanded = {
	{(PropertyRNA *)&rna_LineStyleAlphaModifier_Material_material_attribute, (PropertyRNA *)&rna_LineStyleAlphaModifier_Material_use,
	-1, "expanded", 3, "Expanded",
	"True if the modifier tab is expanded",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	LineStyleAlphaModifier_Material_expanded_get, LineStyleAlphaModifier_Material_expanded_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

static EnumPropertyItem rna_LineStyleAlphaModifier_Material_material_attribute_items[16] = {
	{11, "LINE", 0, "Line Color", ""},
	{12, "LINE_R", 0, "Line Color Red", ""},
	{13, "LINE_G", 0, "Line Color Green", ""},
	{14, "LINE_B", 0, "Line Color Blue", ""},
	{15, "LINE_A", 0, "Line Color Alpha", ""},
	{1, "DIFF", 0, "Diffuse Color", ""},
	{2, "DIFF_R", 0, "Diffuse Color Red", ""},
	{3, "DIFF_G", 0, "Diffuse Color Green", ""},
	{4, "DIFF_B", 0, "Diffuse Color Blue", ""},
	{5, "SPEC", 0, "Specular Color", ""},
	{6, "SPEC_R", 0, "Specular Color Red", ""},
	{7, "SPEC_G", 0, "Specular Color Green", ""},
	{8, "SPEC_B", 0, "Specular Color Blue", ""},
	{9, "SPEC_HARD", 0, "Specular Hardness", ""},
	{10, "ALPHA", 0, "Alpha Transparency", ""},
	{0, NULL, 0, NULL, NULL}
};

EnumPropertyRNA rna_LineStyleAlphaModifier_Material_material_attribute = {
	{(PropertyRNA *)&rna_LineStyleAlphaModifier_Material_mapping, (PropertyRNA *)&rna_LineStyleAlphaModifier_Material_expanded,
	-1, "material_attribute", 3, "Material Attribute",
	"Specify which material attribute is used",
	0, "*",
	PROP_ENUM, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_LineStyle_update, 385875968, NULL, NULL,
	0, -1, NULL},
	LineStyleAlphaModifier_Material_material_attribute_get, LineStyleAlphaModifier_Material_material_attribute_set, NULL, NULL, NULL, NULL, rna_LineStyleAlphaModifier_Material_material_attribute_items, 15, 11
};

static EnumPropertyItem rna_LineStyleAlphaModifier_Material_mapping_items[3] = {
	{0, "LINEAR", 0, "Linear", "Use linear mapping"},
	{1, "CURVE", 0, "Curve", "Use curve mapping"},
	{0, NULL, 0, NULL, NULL}
};

EnumPropertyRNA rna_LineStyleAlphaModifier_Material_mapping = {
	{(PropertyRNA *)&rna_LineStyleAlphaModifier_Material_invert, (PropertyRNA *)&rna_LineStyleAlphaModifier_Material_material_attribute,
	-1, "mapping", 3, "Mapping",
	"Select the mapping type",
	0, "*",
	PROP_ENUM, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_LineStyle_update, 385875968, NULL, NULL,
	0, -1, NULL},
	LineStyleAlphaModifier_Material_mapping_get, LineStyleAlphaModifier_Material_mapping_set, NULL, NULL, NULL, NULL, rna_LineStyleAlphaModifier_Material_mapping_items, 2, 0
};

BoolPropertyRNA rna_LineStyleAlphaModifier_Material_invert = {
	{(PropertyRNA *)&rna_LineStyleAlphaModifier_Material_curve, (PropertyRNA *)&rna_LineStyleAlphaModifier_Material_mapping,
	-1, "invert", 3, "Invert",
	"Invert the fade-out direction of the linear mapping",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_LineStyle_update, 385875968, NULL, NULL,
	0, -1, NULL},
	LineStyleAlphaModifier_Material_invert_get, LineStyleAlphaModifier_Material_invert_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

PointerPropertyRNA rna_LineStyleAlphaModifier_Material_curve = {
	{NULL, (PropertyRNA *)&rna_LineStyleAlphaModifier_Material_invert,
	-1, "curve", 8388608, "Curve",
	"Curve used for the curve mapping",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_LineStyle_update, 385875968, NULL, NULL,
	0, -1, NULL},
	LineStyleAlphaModifier_Material_curve_get, NULL, NULL, NULL,&RNA_CurveMapping
};

StructRNA RNA_LineStyleAlphaModifier_Material = {
	{(ContainerRNA *)&RNA_LineStyleThicknessModifier, (ContainerRNA *)&RNA_LineStyleAlphaModifier_DistanceFromObject,
	NULL,
	{(PropertyRNA *)&rna_LineStyleAlphaModifier_Material_type, (PropertyRNA *)&rna_LineStyleAlphaModifier_Material_curve}},
	"LineStyleAlphaModifier_Material", NULL, NULL, 4, "Material",
	"Change alpha transparency based on a material attribute",
	"*", 17,
	(PropertyRNA *)&rna_LineStyleAlphaModifier_Material_name, (PropertyRNA *)&rna_LineStyleModifier_rna_properties,
	&RNA_LineStyleAlphaModifier,
	NULL,
	rna_LineStyle_alpha_modifier_refine,
	rna_LineStyle_alpha_modifier_path,
	NULL,
	NULL,
	NULL,
	NULL,
	{NULL, NULL}
};

/* Line Style Thickness Modifier */
StructRNA RNA_LineStyleThicknessModifier = {
	{(ContainerRNA *)&RNA_LineStyleThicknessModifier_AlongStroke, (ContainerRNA *)&RNA_LineStyleAlphaModifier_Material,
	NULL,
	{NULL, NULL}},
	"LineStyleThicknessModifier", NULL, NULL, 4, "Line Style Thickness Modifier",
	"Base type to define line thickness modifiers",
	"*", 17,
	NULL, (PropertyRNA *)&rna_LineStyleModifier_rna_properties,
	&RNA_LineStyleModifier,
	NULL,
	rna_LineStyle_thickness_modifier_refine,
	rna_LineStyle_thickness_modifier_path,
	NULL,
	NULL,
	NULL,
	NULL,
	{NULL, NULL}
};

/* Along Stroke */
static EnumPropertyItem rna_LineStyleThicknessModifier_AlongStroke_type_items[6] = {
	{1, "ALONG_STROKE", 442, "Along Stroke", ""},
	{13, "CALLIGRAPHY", 442, "Calligraphy", ""},
	{2, "DISTANCE_FROM_CAMERA", 442, "Distance from Camera", ""},
	{3, "DISTANCE_FROM_OBJECT", 442, "Distance from Object", ""},
	{4, "MATERIAL", 442, "Material", ""},
	{0, NULL, 0, NULL, NULL}
};

EnumPropertyRNA rna_LineStyleThicknessModifier_AlongStroke_type = {
	{(PropertyRNA *)&rna_LineStyleThicknessModifier_AlongStroke_name, NULL,
	-1, "type", 2, "Modifier Type",
	"Type of the modifier",
	0, "*",
	PROP_ENUM, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	LineStyleThicknessModifier_AlongStroke_type_get, NULL, NULL, NULL, NULL, NULL, rna_LineStyleThicknessModifier_AlongStroke_type_items, 5, 1
};

StringPropertyRNA rna_LineStyleThicknessModifier_AlongStroke_name = {
	{(PropertyRNA *)&rna_LineStyleThicknessModifier_AlongStroke_blend, (PropertyRNA *)&rna_LineStyleThicknessModifier_AlongStroke_type,
	-1, "name", 262145, "Modifier Name",
	"Name of the modifier",
	0, "*",
	PROP_STRING, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {64, 0, 0}, 0,
	NULL, 385875968, NULL, NULL,
	0, -1, NULL},
	LineStyleThicknessModifier_AlongStroke_name_get, LineStyleThicknessModifier_AlongStroke_name_length, LineStyleThicknessModifier_AlongStroke_name_set, NULL, NULL, NULL, 64, ""
};

static EnumPropertyItem rna_LineStyleThicknessModifier_AlongStroke_blend_items[9] = {
	{0, "MIX", 0, "Mix", ""},
	{1, "ADD", 0, "Add", ""},
	{3, "SUBTRACT", 0, "Subtract", ""},
	{2, "MULTIPLY", 0, "Multiply", ""},
	{4, "DIVIDE", 0, "Divide", ""},
	{5, "DIFFERENCE", 0, "Difference", ""},
	{6, "MININUM", 0, "Minimum", ""},
	{7, "MAXIMUM", 0, "Maximum", ""},
	{0, NULL, 0, NULL, NULL}
};

EnumPropertyRNA rna_LineStyleThicknessModifier_AlongStroke_blend = {
	{(PropertyRNA *)&rna_LineStyleThicknessModifier_AlongStroke_influence, (PropertyRNA *)&rna_LineStyleThicknessModifier_AlongStroke_name,
	-1, "blend", 3, "Blend",
	"Specify how the modifier value is blended into the base value",
	0, "*",
	PROP_ENUM, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_LineStyle_update, 385875968, NULL, NULL,
	0, -1, NULL},
	LineStyleThicknessModifier_AlongStroke_blend_get, LineStyleThicknessModifier_AlongStroke_blend_set, NULL, NULL, NULL, NULL, rna_LineStyleThicknessModifier_AlongStroke_blend_items, 8, 0
};

FloatPropertyRNA rna_LineStyleThicknessModifier_AlongStroke_influence = {
	{(PropertyRNA *)&rna_LineStyleThicknessModifier_AlongStroke_use, (PropertyRNA *)&rna_LineStyleThicknessModifier_AlongStroke_blend,
	-1, "influence", 8195, "Influence",
	"Influence factor by which the modifier changes the property",
	0, "*",
	PROP_FLOAT, PROP_FACTOR | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_LineStyle_update, 385875968, NULL, NULL,
	offsetof(LineStyleThicknessModifier_AlongStroke, modifier.influence), 4, NULL},
	LineStyleThicknessModifier_AlongStroke_influence_get, LineStyleThicknessModifier_AlongStroke_influence_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 1.0f, 0.0f, 1.0f, 10.0f, 3, 0.0f, NULL
};

BoolPropertyRNA rna_LineStyleThicknessModifier_AlongStroke_use = {
	{(PropertyRNA *)&rna_LineStyleThicknessModifier_AlongStroke_expanded, (PropertyRNA *)&rna_LineStyleThicknessModifier_AlongStroke_influence,
	-1, "use", 3, "Use",
	"Enable or disable this modifier during stroke rendering",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_LineStyle_update, 385875968, NULL, NULL,
	0, -1, NULL},
	LineStyleThicknessModifier_AlongStroke_use_get, LineStyleThicknessModifier_AlongStroke_use_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_LineStyleThicknessModifier_AlongStroke_expanded = {
	{(PropertyRNA *)&rna_LineStyleThicknessModifier_AlongStroke_mapping, (PropertyRNA *)&rna_LineStyleThicknessModifier_AlongStroke_use,
	-1, "expanded", 3, "Expanded",
	"True if the modifier tab is expanded",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	LineStyleThicknessModifier_AlongStroke_expanded_get, LineStyleThicknessModifier_AlongStroke_expanded_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

static EnumPropertyItem rna_LineStyleThicknessModifier_AlongStroke_mapping_items[3] = {
	{0, "LINEAR", 0, "Linear", "Use linear mapping"},
	{1, "CURVE", 0, "Curve", "Use curve mapping"},
	{0, NULL, 0, NULL, NULL}
};

EnumPropertyRNA rna_LineStyleThicknessModifier_AlongStroke_mapping = {
	{(PropertyRNA *)&rna_LineStyleThicknessModifier_AlongStroke_invert, (PropertyRNA *)&rna_LineStyleThicknessModifier_AlongStroke_expanded,
	-1, "mapping", 3, "Mapping",
	"Select the mapping type",
	0, "*",
	PROP_ENUM, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_LineStyle_update, 385875968, NULL, NULL,
	0, -1, NULL},
	LineStyleThicknessModifier_AlongStroke_mapping_get, LineStyleThicknessModifier_AlongStroke_mapping_set, NULL, NULL, NULL, NULL, rna_LineStyleThicknessModifier_AlongStroke_mapping_items, 2, 0
};

BoolPropertyRNA rna_LineStyleThicknessModifier_AlongStroke_invert = {
	{(PropertyRNA *)&rna_LineStyleThicknessModifier_AlongStroke_curve, (PropertyRNA *)&rna_LineStyleThicknessModifier_AlongStroke_mapping,
	-1, "invert", 3, "Invert",
	"Invert the fade-out direction of the linear mapping",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_LineStyle_update, 385875968, NULL, NULL,
	0, -1, NULL},
	LineStyleThicknessModifier_AlongStroke_invert_get, LineStyleThicknessModifier_AlongStroke_invert_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

PointerPropertyRNA rna_LineStyleThicknessModifier_AlongStroke_curve = {
	{(PropertyRNA *)&rna_LineStyleThicknessModifier_AlongStroke_value_min, (PropertyRNA *)&rna_LineStyleThicknessModifier_AlongStroke_invert,
	-1, "curve", 8388608, "Curve",
	"Curve used for the curve mapping",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_LineStyle_update, 385875968, NULL, NULL,
	0, -1, NULL},
	LineStyleThicknessModifier_AlongStroke_curve_get, NULL, NULL, NULL,&RNA_CurveMapping
};

FloatPropertyRNA rna_LineStyleThicknessModifier_AlongStroke_value_min = {
	{(PropertyRNA *)&rna_LineStyleThicknessModifier_AlongStroke_value_max, (PropertyRNA *)&rna_LineStyleThicknessModifier_AlongStroke_curve,
	-1, "value_min", 8195, "Value Min",
	"Minimum output value of the mapping",
	0, "*",
	PROP_FLOAT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_LineStyle_update, 385875968, NULL, NULL,
	offsetof(LineStyleThicknessModifier_AlongStroke, value_min), 4, NULL},
	LineStyleThicknessModifier_AlongStroke_value_min_get, LineStyleThicknessModifier_AlongStroke_value_min_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, -10000.0f, 10000.0f, -FLT_MAX, FLT_MAX, 10.0f, 3, 0.0f, NULL
};

FloatPropertyRNA rna_LineStyleThicknessModifier_AlongStroke_value_max = {
	{NULL, (PropertyRNA *)&rna_LineStyleThicknessModifier_AlongStroke_value_min,
	-1, "value_max", 8195, "Value Max",
	"Maximum output value of the mapping",
	0, "*",
	PROP_FLOAT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_LineStyle_update, 385875968, NULL, NULL,
	offsetof(LineStyleThicknessModifier_AlongStroke, value_max), 4, NULL},
	LineStyleThicknessModifier_AlongStroke_value_max_get, LineStyleThicknessModifier_AlongStroke_value_max_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, -10000.0f, 10000.0f, -FLT_MAX, FLT_MAX, 10.0f, 3, 0.0f, NULL
};

StructRNA RNA_LineStyleThicknessModifier_AlongStroke = {
	{(ContainerRNA *)&RNA_LineStyleThicknessModifier_DistanceFromCamera, (ContainerRNA *)&RNA_LineStyleThicknessModifier,
	NULL,
	{(PropertyRNA *)&rna_LineStyleThicknessModifier_AlongStroke_type, (PropertyRNA *)&rna_LineStyleThicknessModifier_AlongStroke_value_max}},
	"LineStyleThicknessModifier_AlongStroke", NULL, NULL, 4, "Along Stroke",
	"Change line thickness along stroke",
	"*", 17,
	(PropertyRNA *)&rna_LineStyleThicknessModifier_AlongStroke_name, (PropertyRNA *)&rna_LineStyleModifier_rna_properties,
	&RNA_LineStyleThicknessModifier,
	NULL,
	rna_LineStyle_thickness_modifier_refine,
	rna_LineStyle_thickness_modifier_path,
	NULL,
	NULL,
	NULL,
	NULL,
	{NULL, NULL}
};

/* Distance from Camera */
static EnumPropertyItem rna_LineStyleThicknessModifier_DistanceFromCamera_type_items[6] = {
	{1, "ALONG_STROKE", 442, "Along Stroke", ""},
	{13, "CALLIGRAPHY", 442, "Calligraphy", ""},
	{2, "DISTANCE_FROM_CAMERA", 442, "Distance from Camera", ""},
	{3, "DISTANCE_FROM_OBJECT", 442, "Distance from Object", ""},
	{4, "MATERIAL", 442, "Material", ""},
	{0, NULL, 0, NULL, NULL}
};

EnumPropertyRNA rna_LineStyleThicknessModifier_DistanceFromCamera_type = {
	{(PropertyRNA *)&rna_LineStyleThicknessModifier_DistanceFromCamera_name, NULL,
	-1, "type", 2, "Modifier Type",
	"Type of the modifier",
	0, "*",
	PROP_ENUM, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	LineStyleThicknessModifier_DistanceFromCamera_type_get, NULL, NULL, NULL, NULL, NULL, rna_LineStyleThicknessModifier_DistanceFromCamera_type_items, 5, 1
};

StringPropertyRNA rna_LineStyleThicknessModifier_DistanceFromCamera_name = {
	{(PropertyRNA *)&rna_LineStyleThicknessModifier_DistanceFromCamera_blend, (PropertyRNA *)&rna_LineStyleThicknessModifier_DistanceFromCamera_type,
	-1, "name", 262145, "Modifier Name",
	"Name of the modifier",
	0, "*",
	PROP_STRING, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {64, 0, 0}, 0,
	NULL, 385875968, NULL, NULL,
	0, -1, NULL},
	LineStyleThicknessModifier_DistanceFromCamera_name_get, LineStyleThicknessModifier_DistanceFromCamera_name_length, LineStyleThicknessModifier_DistanceFromCamera_name_set, NULL, NULL, NULL, 64, ""
};

static EnumPropertyItem rna_LineStyleThicknessModifier_DistanceFromCamera_blend_items[9] = {
	{0, "MIX", 0, "Mix", ""},
	{1, "ADD", 0, "Add", ""},
	{3, "SUBTRACT", 0, "Subtract", ""},
	{2, "MULTIPLY", 0, "Multiply", ""},
	{4, "DIVIDE", 0, "Divide", ""},
	{5, "DIFFERENCE", 0, "Difference", ""},
	{6, "MININUM", 0, "Minimum", ""},
	{7, "MAXIMUM", 0, "Maximum", ""},
	{0, NULL, 0, NULL, NULL}
};

EnumPropertyRNA rna_LineStyleThicknessModifier_DistanceFromCamera_blend = {
	{(PropertyRNA *)&rna_LineStyleThicknessModifier_DistanceFromCamera_influence, (PropertyRNA *)&rna_LineStyleThicknessModifier_DistanceFromCamera_name,
	-1, "blend", 3, "Blend",
	"Specify how the modifier value is blended into the base value",
	0, "*",
	PROP_ENUM, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_LineStyle_update, 385875968, NULL, NULL,
	0, -1, NULL},
	LineStyleThicknessModifier_DistanceFromCamera_blend_get, LineStyleThicknessModifier_DistanceFromCamera_blend_set, NULL, NULL, NULL, NULL, rna_LineStyleThicknessModifier_DistanceFromCamera_blend_items, 8, 0
};

FloatPropertyRNA rna_LineStyleThicknessModifier_DistanceFromCamera_influence = {
	{(PropertyRNA *)&rna_LineStyleThicknessModifier_DistanceFromCamera_use, (PropertyRNA *)&rna_LineStyleThicknessModifier_DistanceFromCamera_blend,
	-1, "influence", 8195, "Influence",
	"Influence factor by which the modifier changes the property",
	0, "*",
	PROP_FLOAT, PROP_FACTOR | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_LineStyle_update, 385875968, NULL, NULL,
	offsetof(LineStyleThicknessModifier_DistanceFromCamera, modifier.influence), 4, NULL},
	LineStyleThicknessModifier_DistanceFromCamera_influence_get, LineStyleThicknessModifier_DistanceFromCamera_influence_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 1.0f, 0.0f, 1.0f, 10.0f, 3, 0.0f, NULL
};

BoolPropertyRNA rna_LineStyleThicknessModifier_DistanceFromCamera_use = {
	{(PropertyRNA *)&rna_LineStyleThicknessModifier_DistanceFromCamera_expanded, (PropertyRNA *)&rna_LineStyleThicknessModifier_DistanceFromCamera_influence,
	-1, "use", 3, "Use",
	"Enable or disable this modifier during stroke rendering",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_LineStyle_update, 385875968, NULL, NULL,
	0, -1, NULL},
	LineStyleThicknessModifier_DistanceFromCamera_use_get, LineStyleThicknessModifier_DistanceFromCamera_use_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_LineStyleThicknessModifier_DistanceFromCamera_expanded = {
	{(PropertyRNA *)&rna_LineStyleThicknessModifier_DistanceFromCamera_mapping, (PropertyRNA *)&rna_LineStyleThicknessModifier_DistanceFromCamera_use,
	-1, "expanded", 3, "Expanded",
	"True if the modifier tab is expanded",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	LineStyleThicknessModifier_DistanceFromCamera_expanded_get, LineStyleThicknessModifier_DistanceFromCamera_expanded_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

static EnumPropertyItem rna_LineStyleThicknessModifier_DistanceFromCamera_mapping_items[3] = {
	{0, "LINEAR", 0, "Linear", "Use linear mapping"},
	{1, "CURVE", 0, "Curve", "Use curve mapping"},
	{0, NULL, 0, NULL, NULL}
};

EnumPropertyRNA rna_LineStyleThicknessModifier_DistanceFromCamera_mapping = {
	{(PropertyRNA *)&rna_LineStyleThicknessModifier_DistanceFromCamera_invert, (PropertyRNA *)&rna_LineStyleThicknessModifier_DistanceFromCamera_expanded,
	-1, "mapping", 3, "Mapping",
	"Select the mapping type",
	0, "*",
	PROP_ENUM, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_LineStyle_update, 385875968, NULL, NULL,
	0, -1, NULL},
	LineStyleThicknessModifier_DistanceFromCamera_mapping_get, LineStyleThicknessModifier_DistanceFromCamera_mapping_set, NULL, NULL, NULL, NULL, rna_LineStyleThicknessModifier_DistanceFromCamera_mapping_items, 2, 0
};

BoolPropertyRNA rna_LineStyleThicknessModifier_DistanceFromCamera_invert = {
	{(PropertyRNA *)&rna_LineStyleThicknessModifier_DistanceFromCamera_curve, (PropertyRNA *)&rna_LineStyleThicknessModifier_DistanceFromCamera_mapping,
	-1, "invert", 3, "Invert",
	"Invert the fade-out direction of the linear mapping",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_LineStyle_update, 385875968, NULL, NULL,
	0, -1, NULL},
	LineStyleThicknessModifier_DistanceFromCamera_invert_get, LineStyleThicknessModifier_DistanceFromCamera_invert_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

PointerPropertyRNA rna_LineStyleThicknessModifier_DistanceFromCamera_curve = {
	{(PropertyRNA *)&rna_LineStyleThicknessModifier_DistanceFromCamera_range_min, (PropertyRNA *)&rna_LineStyleThicknessModifier_DistanceFromCamera_invert,
	-1, "curve", 8388608, "Curve",
	"Curve used for the curve mapping",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_LineStyle_update, 385875968, NULL, NULL,
	0, -1, NULL},
	LineStyleThicknessModifier_DistanceFromCamera_curve_get, NULL, NULL, NULL,&RNA_CurveMapping
};

FloatPropertyRNA rna_LineStyleThicknessModifier_DistanceFromCamera_range_min = {
	{(PropertyRNA *)&rna_LineStyleThicknessModifier_DistanceFromCamera_range_max, (PropertyRNA *)&rna_LineStyleThicknessModifier_DistanceFromCamera_curve,
	-1, "range_min", 8195, "Range Min",
	"Lower bound of the input range the mapping is applied",
	0, "*",
	PROP_FLOAT, PROP_DISTANCE | PROP_UNIT_LENGTH, NULL, 0, {0, 0, 0}, 0,
	rna_LineStyle_update, 385875968, NULL, NULL,
	offsetof(LineStyleThicknessModifier_DistanceFromCamera, range_min), 4, NULL},
	LineStyleThicknessModifier_DistanceFromCamera_range_min_get, LineStyleThicknessModifier_DistanceFromCamera_range_min_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, -10000.0f, 10000.0f, -FLT_MAX, FLT_MAX, 10.0f, 3, 0.0f, NULL
};

FloatPropertyRNA rna_LineStyleThicknessModifier_DistanceFromCamera_range_max = {
	{(PropertyRNA *)&rna_LineStyleThicknessModifier_DistanceFromCamera_value_min, (PropertyRNA *)&rna_LineStyleThicknessModifier_DistanceFromCamera_range_min,
	-1, "range_max", 8195, "Range Max",
	"Upper bound of the input range the mapping is applied",
	0, "*",
	PROP_FLOAT, PROP_DISTANCE | PROP_UNIT_LENGTH, NULL, 0, {0, 0, 0}, 0,
	rna_LineStyle_update, 385875968, NULL, NULL,
	offsetof(LineStyleThicknessModifier_DistanceFromCamera, range_max), 4, NULL},
	LineStyleThicknessModifier_DistanceFromCamera_range_max_get, LineStyleThicknessModifier_DistanceFromCamera_range_max_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, -10000.0f, 10000.0f, -FLT_MAX, FLT_MAX, 10.0f, 3, 0.0f, NULL
};

FloatPropertyRNA rna_LineStyleThicknessModifier_DistanceFromCamera_value_min = {
	{(PropertyRNA *)&rna_LineStyleThicknessModifier_DistanceFromCamera_value_max, (PropertyRNA *)&rna_LineStyleThicknessModifier_DistanceFromCamera_range_max,
	-1, "value_min", 8195, "Value Min",
	"Minimum output value of the mapping",
	0, "*",
	PROP_FLOAT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_LineStyle_update, 385875968, NULL, NULL,
	offsetof(LineStyleThicknessModifier_DistanceFromCamera, value_min), 4, NULL},
	LineStyleThicknessModifier_DistanceFromCamera_value_min_get, LineStyleThicknessModifier_DistanceFromCamera_value_min_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, -10000.0f, 10000.0f, -FLT_MAX, FLT_MAX, 10.0f, 3, 0.0f, NULL
};

FloatPropertyRNA rna_LineStyleThicknessModifier_DistanceFromCamera_value_max = {
	{NULL, (PropertyRNA *)&rna_LineStyleThicknessModifier_DistanceFromCamera_value_min,
	-1, "value_max", 8195, "Value Max",
	"Maximum output value of the mapping",
	0, "*",
	PROP_FLOAT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_LineStyle_update, 385875968, NULL, NULL,
	offsetof(LineStyleThicknessModifier_DistanceFromCamera, value_max), 4, NULL},
	LineStyleThicknessModifier_DistanceFromCamera_value_max_get, LineStyleThicknessModifier_DistanceFromCamera_value_max_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, -10000.0f, 10000.0f, -FLT_MAX, FLT_MAX, 10.0f, 3, 0.0f, NULL
};

StructRNA RNA_LineStyleThicknessModifier_DistanceFromCamera = {
	{(ContainerRNA *)&RNA_LineStyleThicknessModifier_DistanceFromObject, (ContainerRNA *)&RNA_LineStyleThicknessModifier_AlongStroke,
	NULL,
	{(PropertyRNA *)&rna_LineStyleThicknessModifier_DistanceFromCamera_type, (PropertyRNA *)&rna_LineStyleThicknessModifier_DistanceFromCamera_value_max}},
	"LineStyleThicknessModifier_DistanceFromCamera", NULL, NULL, 4, "Distance from Camera",
	"Change line thickness based on the distance from the camera",
	"*", 17,
	(PropertyRNA *)&rna_LineStyleThicknessModifier_DistanceFromCamera_name, (PropertyRNA *)&rna_LineStyleModifier_rna_properties,
	&RNA_LineStyleThicknessModifier,
	NULL,
	rna_LineStyle_thickness_modifier_refine,
	rna_LineStyle_thickness_modifier_path,
	NULL,
	NULL,
	NULL,
	NULL,
	{NULL, NULL}
};

/* Distance from Object */
static EnumPropertyItem rna_LineStyleThicknessModifier_DistanceFromObject_type_items[6] = {
	{1, "ALONG_STROKE", 442, "Along Stroke", ""},
	{13, "CALLIGRAPHY", 442, "Calligraphy", ""},
	{2, "DISTANCE_FROM_CAMERA", 442, "Distance from Camera", ""},
	{3, "DISTANCE_FROM_OBJECT", 442, "Distance from Object", ""},
	{4, "MATERIAL", 442, "Material", ""},
	{0, NULL, 0, NULL, NULL}
};

EnumPropertyRNA rna_LineStyleThicknessModifier_DistanceFromObject_type = {
	{(PropertyRNA *)&rna_LineStyleThicknessModifier_DistanceFromObject_name, NULL,
	-1, "type", 2, "Modifier Type",
	"Type of the modifier",
	0, "*",
	PROP_ENUM, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	LineStyleThicknessModifier_DistanceFromObject_type_get, NULL, NULL, NULL, NULL, NULL, rna_LineStyleThicknessModifier_DistanceFromObject_type_items, 5, 1
};

StringPropertyRNA rna_LineStyleThicknessModifier_DistanceFromObject_name = {
	{(PropertyRNA *)&rna_LineStyleThicknessModifier_DistanceFromObject_blend, (PropertyRNA *)&rna_LineStyleThicknessModifier_DistanceFromObject_type,
	-1, "name", 262145, "Modifier Name",
	"Name of the modifier",
	0, "*",
	PROP_STRING, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {64, 0, 0}, 0,
	NULL, 385875968, NULL, NULL,
	0, -1, NULL},
	LineStyleThicknessModifier_DistanceFromObject_name_get, LineStyleThicknessModifier_DistanceFromObject_name_length, LineStyleThicknessModifier_DistanceFromObject_name_set, NULL, NULL, NULL, 64, ""
};

static EnumPropertyItem rna_LineStyleThicknessModifier_DistanceFromObject_blend_items[9] = {
	{0, "MIX", 0, "Mix", ""},
	{1, "ADD", 0, "Add", ""},
	{3, "SUBTRACT", 0, "Subtract", ""},
	{2, "MULTIPLY", 0, "Multiply", ""},
	{4, "DIVIDE", 0, "Divide", ""},
	{5, "DIFFERENCE", 0, "Difference", ""},
	{6, "MININUM", 0, "Minimum", ""},
	{7, "MAXIMUM", 0, "Maximum", ""},
	{0, NULL, 0, NULL, NULL}
};

EnumPropertyRNA rna_LineStyleThicknessModifier_DistanceFromObject_blend = {
	{(PropertyRNA *)&rna_LineStyleThicknessModifier_DistanceFromObject_influence, (PropertyRNA *)&rna_LineStyleThicknessModifier_DistanceFromObject_name,
	-1, "blend", 3, "Blend",
	"Specify how the modifier value is blended into the base value",
	0, "*",
	PROP_ENUM, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_LineStyle_update, 385875968, NULL, NULL,
	0, -1, NULL},
	LineStyleThicknessModifier_DistanceFromObject_blend_get, LineStyleThicknessModifier_DistanceFromObject_blend_set, NULL, NULL, NULL, NULL, rna_LineStyleThicknessModifier_DistanceFromObject_blend_items, 8, 0
};

FloatPropertyRNA rna_LineStyleThicknessModifier_DistanceFromObject_influence = {
	{(PropertyRNA *)&rna_LineStyleThicknessModifier_DistanceFromObject_use, (PropertyRNA *)&rna_LineStyleThicknessModifier_DistanceFromObject_blend,
	-1, "influence", 8195, "Influence",
	"Influence factor by which the modifier changes the property",
	0, "*",
	PROP_FLOAT, PROP_FACTOR | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_LineStyle_update, 385875968, NULL, NULL,
	offsetof(LineStyleThicknessModifier_DistanceFromObject, modifier.influence), 4, NULL},
	LineStyleThicknessModifier_DistanceFromObject_influence_get, LineStyleThicknessModifier_DistanceFromObject_influence_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 1.0f, 0.0f, 1.0f, 10.0f, 3, 0.0f, NULL
};

BoolPropertyRNA rna_LineStyleThicknessModifier_DistanceFromObject_use = {
	{(PropertyRNA *)&rna_LineStyleThicknessModifier_DistanceFromObject_expanded, (PropertyRNA *)&rna_LineStyleThicknessModifier_DistanceFromObject_influence,
	-1, "use", 3, "Use",
	"Enable or disable this modifier during stroke rendering",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_LineStyle_update, 385875968, NULL, NULL,
	0, -1, NULL},
	LineStyleThicknessModifier_DistanceFromObject_use_get, LineStyleThicknessModifier_DistanceFromObject_use_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_LineStyleThicknessModifier_DistanceFromObject_expanded = {
	{(PropertyRNA *)&rna_LineStyleThicknessModifier_DistanceFromObject_mapping, (PropertyRNA *)&rna_LineStyleThicknessModifier_DistanceFromObject_use,
	-1, "expanded", 3, "Expanded",
	"True if the modifier tab is expanded",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	LineStyleThicknessModifier_DistanceFromObject_expanded_get, LineStyleThicknessModifier_DistanceFromObject_expanded_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

static EnumPropertyItem rna_LineStyleThicknessModifier_DistanceFromObject_mapping_items[3] = {
	{0, "LINEAR", 0, "Linear", "Use linear mapping"},
	{1, "CURVE", 0, "Curve", "Use curve mapping"},
	{0, NULL, 0, NULL, NULL}
};

EnumPropertyRNA rna_LineStyleThicknessModifier_DistanceFromObject_mapping = {
	{(PropertyRNA *)&rna_LineStyleThicknessModifier_DistanceFromObject_invert, (PropertyRNA *)&rna_LineStyleThicknessModifier_DistanceFromObject_expanded,
	-1, "mapping", 3, "Mapping",
	"Select the mapping type",
	0, "*",
	PROP_ENUM, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_LineStyle_update, 385875968, NULL, NULL,
	0, -1, NULL},
	LineStyleThicknessModifier_DistanceFromObject_mapping_get, LineStyleThicknessModifier_DistanceFromObject_mapping_set, NULL, NULL, NULL, NULL, rna_LineStyleThicknessModifier_DistanceFromObject_mapping_items, 2, 0
};

BoolPropertyRNA rna_LineStyleThicknessModifier_DistanceFromObject_invert = {
	{(PropertyRNA *)&rna_LineStyleThicknessModifier_DistanceFromObject_curve, (PropertyRNA *)&rna_LineStyleThicknessModifier_DistanceFromObject_mapping,
	-1, "invert", 3, "Invert",
	"Invert the fade-out direction of the linear mapping",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_LineStyle_update, 385875968, NULL, NULL,
	0, -1, NULL},
	LineStyleThicknessModifier_DistanceFromObject_invert_get, LineStyleThicknessModifier_DistanceFromObject_invert_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

PointerPropertyRNA rna_LineStyleThicknessModifier_DistanceFromObject_curve = {
	{(PropertyRNA *)&rna_LineStyleThicknessModifier_DistanceFromObject_range_min, (PropertyRNA *)&rna_LineStyleThicknessModifier_DistanceFromObject_invert,
	-1, "curve", 8388608, "Curve",
	"Curve used for the curve mapping",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_LineStyle_update, 385875968, NULL, NULL,
	0, -1, NULL},
	LineStyleThicknessModifier_DistanceFromObject_curve_get, NULL, NULL, NULL,&RNA_CurveMapping
};

FloatPropertyRNA rna_LineStyleThicknessModifier_DistanceFromObject_range_min = {
	{(PropertyRNA *)&rna_LineStyleThicknessModifier_DistanceFromObject_range_max, (PropertyRNA *)&rna_LineStyleThicknessModifier_DistanceFromObject_curve,
	-1, "range_min", 8195, "Range Min",
	"Lower bound of the input range the mapping is applied",
	0, "*",
	PROP_FLOAT, PROP_DISTANCE | PROP_UNIT_LENGTH, NULL, 0, {0, 0, 0}, 0,
	rna_LineStyle_update, 385875968, NULL, NULL,
	offsetof(LineStyleThicknessModifier_DistanceFromObject, range_min), 4, NULL},
	LineStyleThicknessModifier_DistanceFromObject_range_min_get, LineStyleThicknessModifier_DistanceFromObject_range_min_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, -10000.0f, 10000.0f, -FLT_MAX, FLT_MAX, 10.0f, 3, 0.0f, NULL
};

FloatPropertyRNA rna_LineStyleThicknessModifier_DistanceFromObject_range_max = {
	{(PropertyRNA *)&rna_LineStyleThicknessModifier_DistanceFromObject_value_min, (PropertyRNA *)&rna_LineStyleThicknessModifier_DistanceFromObject_range_min,
	-1, "range_max", 8195, "Range Max",
	"Upper bound of the input range the mapping is applied",
	0, "*",
	PROP_FLOAT, PROP_DISTANCE | PROP_UNIT_LENGTH, NULL, 0, {0, 0, 0}, 0,
	rna_LineStyle_update, 385875968, NULL, NULL,
	offsetof(LineStyleThicknessModifier_DistanceFromObject, range_max), 4, NULL},
	LineStyleThicknessModifier_DistanceFromObject_range_max_get, LineStyleThicknessModifier_DistanceFromObject_range_max_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, -10000.0f, 10000.0f, -FLT_MAX, FLT_MAX, 10.0f, 3, 0.0f, NULL
};

FloatPropertyRNA rna_LineStyleThicknessModifier_DistanceFromObject_value_min = {
	{(PropertyRNA *)&rna_LineStyleThicknessModifier_DistanceFromObject_value_max, (PropertyRNA *)&rna_LineStyleThicknessModifier_DistanceFromObject_range_max,
	-1, "value_min", 8195, "Value Min",
	"Minimum output value of the mapping",
	0, "*",
	PROP_FLOAT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_LineStyle_update, 385875968, NULL, NULL,
	offsetof(LineStyleThicknessModifier_DistanceFromObject, value_min), 4, NULL},
	LineStyleThicknessModifier_DistanceFromObject_value_min_get, LineStyleThicknessModifier_DistanceFromObject_value_min_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, -10000.0f, 10000.0f, -FLT_MAX, FLT_MAX, 10.0f, 3, 0.0f, NULL
};

FloatPropertyRNA rna_LineStyleThicknessModifier_DistanceFromObject_value_max = {
	{(PropertyRNA *)&rna_LineStyleThicknessModifier_DistanceFromObject_target, (PropertyRNA *)&rna_LineStyleThicknessModifier_DistanceFromObject_value_min,
	-1, "value_max", 8195, "Value Max",
	"Maximum output value of the mapping",
	0, "*",
	PROP_FLOAT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_LineStyle_update, 385875968, NULL, NULL,
	offsetof(LineStyleThicknessModifier_DistanceFromObject, value_max), 4, NULL},
	LineStyleThicknessModifier_DistanceFromObject_value_max_get, LineStyleThicknessModifier_DistanceFromObject_value_max_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, -10000.0f, 10000.0f, -FLT_MAX, FLT_MAX, 10.0f, 3, 0.0f, NULL
};

PointerPropertyRNA rna_LineStyleThicknessModifier_DistanceFromObject_target = {
	{NULL, (PropertyRNA *)&rna_LineStyleThicknessModifier_DistanceFromObject_value_max,
	-1, "target", 8388609, "Target",
	"Target object from which the distance is measured",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_LineStyle_update, 385875968, NULL, NULL,
	0, -1, NULL},
	LineStyleThicknessModifier_DistanceFromObject_target_get, LineStyleThicknessModifier_DistanceFromObject_target_set, NULL, NULL,&RNA_Object
};

StructRNA RNA_LineStyleThicknessModifier_DistanceFromObject = {
	{(ContainerRNA *)&RNA_LineStyleThicknessModifier_Material, (ContainerRNA *)&RNA_LineStyleThicknessModifier_DistanceFromCamera,
	NULL,
	{(PropertyRNA *)&rna_LineStyleThicknessModifier_DistanceFromObject_type, (PropertyRNA *)&rna_LineStyleThicknessModifier_DistanceFromObject_target}},
	"LineStyleThicknessModifier_DistanceFromObject", NULL, NULL, 4, "Distance from Object",
	"Change line thickness based on the distance from an object",
	"*", 17,
	(PropertyRNA *)&rna_LineStyleThicknessModifier_DistanceFromObject_name, (PropertyRNA *)&rna_LineStyleModifier_rna_properties,
	&RNA_LineStyleThicknessModifier,
	NULL,
	rna_LineStyle_thickness_modifier_refine,
	rna_LineStyle_thickness_modifier_path,
	NULL,
	NULL,
	NULL,
	NULL,
	{NULL, NULL}
};

/* Material */
static EnumPropertyItem rna_LineStyleThicknessModifier_Material_type_items[6] = {
	{1, "ALONG_STROKE", 442, "Along Stroke", ""},
	{13, "CALLIGRAPHY", 442, "Calligraphy", ""},
	{2, "DISTANCE_FROM_CAMERA", 442, "Distance from Camera", ""},
	{3, "DISTANCE_FROM_OBJECT", 442, "Distance from Object", ""},
	{4, "MATERIAL", 442, "Material", ""},
	{0, NULL, 0, NULL, NULL}
};

EnumPropertyRNA rna_LineStyleThicknessModifier_Material_type = {
	{(PropertyRNA *)&rna_LineStyleThicknessModifier_Material_name, NULL,
	-1, "type", 2, "Modifier Type",
	"Type of the modifier",
	0, "*",
	PROP_ENUM, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	LineStyleThicknessModifier_Material_type_get, NULL, NULL, NULL, NULL, NULL, rna_LineStyleThicknessModifier_Material_type_items, 5, 1
};

StringPropertyRNA rna_LineStyleThicknessModifier_Material_name = {
	{(PropertyRNA *)&rna_LineStyleThicknessModifier_Material_blend, (PropertyRNA *)&rna_LineStyleThicknessModifier_Material_type,
	-1, "name", 262145, "Modifier Name",
	"Name of the modifier",
	0, "*",
	PROP_STRING, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {64, 0, 0}, 0,
	NULL, 385875968, NULL, NULL,
	0, -1, NULL},
	LineStyleThicknessModifier_Material_name_get, LineStyleThicknessModifier_Material_name_length, LineStyleThicknessModifier_Material_name_set, NULL, NULL, NULL, 64, ""
};

static EnumPropertyItem rna_LineStyleThicknessModifier_Material_blend_items[9] = {
	{0, "MIX", 0, "Mix", ""},
	{1, "ADD", 0, "Add", ""},
	{3, "SUBTRACT", 0, "Subtract", ""},
	{2, "MULTIPLY", 0, "Multiply", ""},
	{4, "DIVIDE", 0, "Divide", ""},
	{5, "DIFFERENCE", 0, "Difference", ""},
	{6, "MININUM", 0, "Minimum", ""},
	{7, "MAXIMUM", 0, "Maximum", ""},
	{0, NULL, 0, NULL, NULL}
};

EnumPropertyRNA rna_LineStyleThicknessModifier_Material_blend = {
	{(PropertyRNA *)&rna_LineStyleThicknessModifier_Material_influence, (PropertyRNA *)&rna_LineStyleThicknessModifier_Material_name,
	-1, "blend", 3, "Blend",
	"Specify how the modifier value is blended into the base value",
	0, "*",
	PROP_ENUM, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_LineStyle_update, 385875968, NULL, NULL,
	0, -1, NULL},
	LineStyleThicknessModifier_Material_blend_get, LineStyleThicknessModifier_Material_blend_set, NULL, NULL, NULL, NULL, rna_LineStyleThicknessModifier_Material_blend_items, 8, 0
};

FloatPropertyRNA rna_LineStyleThicknessModifier_Material_influence = {
	{(PropertyRNA *)&rna_LineStyleThicknessModifier_Material_use, (PropertyRNA *)&rna_LineStyleThicknessModifier_Material_blend,
	-1, "influence", 8195, "Influence",
	"Influence factor by which the modifier changes the property",
	0, "*",
	PROP_FLOAT, PROP_FACTOR | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_LineStyle_update, 385875968, NULL, NULL,
	offsetof(LineStyleThicknessModifier_Material, modifier.influence), 4, NULL},
	LineStyleThicknessModifier_Material_influence_get, LineStyleThicknessModifier_Material_influence_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 1.0f, 0.0f, 1.0f, 10.0f, 3, 0.0f, NULL
};

BoolPropertyRNA rna_LineStyleThicknessModifier_Material_use = {
	{(PropertyRNA *)&rna_LineStyleThicknessModifier_Material_expanded, (PropertyRNA *)&rna_LineStyleThicknessModifier_Material_influence,
	-1, "use", 3, "Use",
	"Enable or disable this modifier during stroke rendering",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_LineStyle_update, 385875968, NULL, NULL,
	0, -1, NULL},
	LineStyleThicknessModifier_Material_use_get, LineStyleThicknessModifier_Material_use_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_LineStyleThicknessModifier_Material_expanded = {
	{(PropertyRNA *)&rna_LineStyleThicknessModifier_Material_material_attribute, (PropertyRNA *)&rna_LineStyleThicknessModifier_Material_use,
	-1, "expanded", 3, "Expanded",
	"True if the modifier tab is expanded",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	LineStyleThicknessModifier_Material_expanded_get, LineStyleThicknessModifier_Material_expanded_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

static EnumPropertyItem rna_LineStyleThicknessModifier_Material_material_attribute_items[16] = {
	{11, "LINE", 0, "Line Color", ""},
	{12, "LINE_R", 0, "Line Color Red", ""},
	{13, "LINE_G", 0, "Line Color Green", ""},
	{14, "LINE_B", 0, "Line Color Blue", ""},
	{15, "LINE_A", 0, "Line Color Alpha", ""},
	{1, "DIFF", 0, "Diffuse Color", ""},
	{2, "DIFF_R", 0, "Diffuse Color Red", ""},
	{3, "DIFF_G", 0, "Diffuse Color Green", ""},
	{4, "DIFF_B", 0, "Diffuse Color Blue", ""},
	{5, "SPEC", 0, "Specular Color", ""},
	{6, "SPEC_R", 0, "Specular Color Red", ""},
	{7, "SPEC_G", 0, "Specular Color Green", ""},
	{8, "SPEC_B", 0, "Specular Color Blue", ""},
	{9, "SPEC_HARD", 0, "Specular Hardness", ""},
	{10, "ALPHA", 0, "Alpha Transparency", ""},
	{0, NULL, 0, NULL, NULL}
};

EnumPropertyRNA rna_LineStyleThicknessModifier_Material_material_attribute = {
	{(PropertyRNA *)&rna_LineStyleThicknessModifier_Material_mapping, (PropertyRNA *)&rna_LineStyleThicknessModifier_Material_expanded,
	-1, "material_attribute", 3, "Material Attribute",
	"Specify which material attribute is used",
	0, "*",
	PROP_ENUM, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_LineStyle_update, 385875968, NULL, NULL,
	0, -1, NULL},
	LineStyleThicknessModifier_Material_material_attribute_get, LineStyleThicknessModifier_Material_material_attribute_set, NULL, NULL, NULL, NULL, rna_LineStyleThicknessModifier_Material_material_attribute_items, 15, 11
};

static EnumPropertyItem rna_LineStyleThicknessModifier_Material_mapping_items[3] = {
	{0, "LINEAR", 0, "Linear", "Use linear mapping"},
	{1, "CURVE", 0, "Curve", "Use curve mapping"},
	{0, NULL, 0, NULL, NULL}
};

EnumPropertyRNA rna_LineStyleThicknessModifier_Material_mapping = {
	{(PropertyRNA *)&rna_LineStyleThicknessModifier_Material_invert, (PropertyRNA *)&rna_LineStyleThicknessModifier_Material_material_attribute,
	-1, "mapping", 3, "Mapping",
	"Select the mapping type",
	0, "*",
	PROP_ENUM, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_LineStyle_update, 385875968, NULL, NULL,
	0, -1, NULL},
	LineStyleThicknessModifier_Material_mapping_get, LineStyleThicknessModifier_Material_mapping_set, NULL, NULL, NULL, NULL, rna_LineStyleThicknessModifier_Material_mapping_items, 2, 0
};

BoolPropertyRNA rna_LineStyleThicknessModifier_Material_invert = {
	{(PropertyRNA *)&rna_LineStyleThicknessModifier_Material_curve, (PropertyRNA *)&rna_LineStyleThicknessModifier_Material_mapping,
	-1, "invert", 3, "Invert",
	"Invert the fade-out direction of the linear mapping",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_LineStyle_update, 385875968, NULL, NULL,
	0, -1, NULL},
	LineStyleThicknessModifier_Material_invert_get, LineStyleThicknessModifier_Material_invert_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

PointerPropertyRNA rna_LineStyleThicknessModifier_Material_curve = {
	{(PropertyRNA *)&rna_LineStyleThicknessModifier_Material_value_min, (PropertyRNA *)&rna_LineStyleThicknessModifier_Material_invert,
	-1, "curve", 8388608, "Curve",
	"Curve used for the curve mapping",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_LineStyle_update, 385875968, NULL, NULL,
	0, -1, NULL},
	LineStyleThicknessModifier_Material_curve_get, NULL, NULL, NULL,&RNA_CurveMapping
};

FloatPropertyRNA rna_LineStyleThicknessModifier_Material_value_min = {
	{(PropertyRNA *)&rna_LineStyleThicknessModifier_Material_value_max, (PropertyRNA *)&rna_LineStyleThicknessModifier_Material_curve,
	-1, "value_min", 8195, "Value Min",
	"Minimum output value of the mapping",
	0, "*",
	PROP_FLOAT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_LineStyle_update, 385875968, NULL, NULL,
	offsetof(LineStyleThicknessModifier_Material, value_min), 4, NULL},
	LineStyleThicknessModifier_Material_value_min_get, LineStyleThicknessModifier_Material_value_min_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, -10000.0f, 10000.0f, -FLT_MAX, FLT_MAX, 10.0f, 3, 0.0f, NULL
};

FloatPropertyRNA rna_LineStyleThicknessModifier_Material_value_max = {
	{NULL, (PropertyRNA *)&rna_LineStyleThicknessModifier_Material_value_min,
	-1, "value_max", 8195, "Value Max",
	"Maximum output value of the mapping",
	0, "*",
	PROP_FLOAT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_LineStyle_update, 385875968, NULL, NULL,
	offsetof(LineStyleThicknessModifier_Material, value_max), 4, NULL},
	LineStyleThicknessModifier_Material_value_max_get, LineStyleThicknessModifier_Material_value_max_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, -10000.0f, 10000.0f, -FLT_MAX, FLT_MAX, 10.0f, 3, 0.0f, NULL
};

StructRNA RNA_LineStyleThicknessModifier_Material = {
	{(ContainerRNA *)&RNA_LineStyleThicknessModifier_Calligraphy, (ContainerRNA *)&RNA_LineStyleThicknessModifier_DistanceFromObject,
	NULL,
	{(PropertyRNA *)&rna_LineStyleThicknessModifier_Material_type, (PropertyRNA *)&rna_LineStyleThicknessModifier_Material_value_max}},
	"LineStyleThicknessModifier_Material", NULL, NULL, 4, "Material",
	"Change line thickness based on a material attribute",
	"*", 17,
	(PropertyRNA *)&rna_LineStyleThicknessModifier_Material_name, (PropertyRNA *)&rna_LineStyleModifier_rna_properties,
	&RNA_LineStyleThicknessModifier,
	NULL,
	rna_LineStyle_thickness_modifier_refine,
	rna_LineStyle_thickness_modifier_path,
	NULL,
	NULL,
	NULL,
	NULL,
	{NULL, NULL}
};

/* Calligraphy */
static EnumPropertyItem rna_LineStyleThicknessModifier_Calligraphy_type_items[6] = {
	{1, "ALONG_STROKE", 442, "Along Stroke", ""},
	{13, "CALLIGRAPHY", 442, "Calligraphy", ""},
	{2, "DISTANCE_FROM_CAMERA", 442, "Distance from Camera", ""},
	{3, "DISTANCE_FROM_OBJECT", 442, "Distance from Object", ""},
	{4, "MATERIAL", 442, "Material", ""},
	{0, NULL, 0, NULL, NULL}
};

EnumPropertyRNA rna_LineStyleThicknessModifier_Calligraphy_type = {
	{(PropertyRNA *)&rna_LineStyleThicknessModifier_Calligraphy_name, NULL,
	-1, "type", 2, "Modifier Type",
	"Type of the modifier",
	0, "*",
	PROP_ENUM, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	LineStyleThicknessModifier_Calligraphy_type_get, NULL, NULL, NULL, NULL, NULL, rna_LineStyleThicknessModifier_Calligraphy_type_items, 5, 1
};

StringPropertyRNA rna_LineStyleThicknessModifier_Calligraphy_name = {
	{(PropertyRNA *)&rna_LineStyleThicknessModifier_Calligraphy_blend, (PropertyRNA *)&rna_LineStyleThicknessModifier_Calligraphy_type,
	-1, "name", 262145, "Modifier Name",
	"Name of the modifier",
	0, "*",
	PROP_STRING, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {64, 0, 0}, 0,
	NULL, 385875968, NULL, NULL,
	0, -1, NULL},
	LineStyleThicknessModifier_Calligraphy_name_get, LineStyleThicknessModifier_Calligraphy_name_length, LineStyleThicknessModifier_Calligraphy_name_set, NULL, NULL, NULL, 64, ""
};

static EnumPropertyItem rna_LineStyleThicknessModifier_Calligraphy_blend_items[9] = {
	{0, "MIX", 0, "Mix", ""},
	{1, "ADD", 0, "Add", ""},
	{3, "SUBTRACT", 0, "Subtract", ""},
	{2, "MULTIPLY", 0, "Multiply", ""},
	{4, "DIVIDE", 0, "Divide", ""},
	{5, "DIFFERENCE", 0, "Difference", ""},
	{6, "MININUM", 0, "Minimum", ""},
	{7, "MAXIMUM", 0, "Maximum", ""},
	{0, NULL, 0, NULL, NULL}
};

EnumPropertyRNA rna_LineStyleThicknessModifier_Calligraphy_blend = {
	{(PropertyRNA *)&rna_LineStyleThicknessModifier_Calligraphy_influence, (PropertyRNA *)&rna_LineStyleThicknessModifier_Calligraphy_name,
	-1, "blend", 3, "Blend",
	"Specify how the modifier value is blended into the base value",
	0, "*",
	PROP_ENUM, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_LineStyle_update, 385875968, NULL, NULL,
	0, -1, NULL},
	LineStyleThicknessModifier_Calligraphy_blend_get, LineStyleThicknessModifier_Calligraphy_blend_set, NULL, NULL, NULL, NULL, rna_LineStyleThicknessModifier_Calligraphy_blend_items, 8, 0
};

FloatPropertyRNA rna_LineStyleThicknessModifier_Calligraphy_influence = {
	{(PropertyRNA *)&rna_LineStyleThicknessModifier_Calligraphy_use, (PropertyRNA *)&rna_LineStyleThicknessModifier_Calligraphy_blend,
	-1, "influence", 8195, "Influence",
	"Influence factor by which the modifier changes the property",
	0, "*",
	PROP_FLOAT, PROP_FACTOR | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_LineStyle_update, 385875968, NULL, NULL,
	offsetof(LineStyleThicknessModifier_Calligraphy, modifier.influence), 4, NULL},
	LineStyleThicknessModifier_Calligraphy_influence_get, LineStyleThicknessModifier_Calligraphy_influence_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 1.0f, 0.0f, 1.0f, 10.0f, 3, 0.0f, NULL
};

BoolPropertyRNA rna_LineStyleThicknessModifier_Calligraphy_use = {
	{(PropertyRNA *)&rna_LineStyleThicknessModifier_Calligraphy_expanded, (PropertyRNA *)&rna_LineStyleThicknessModifier_Calligraphy_influence,
	-1, "use", 3, "Use",
	"Enable or disable this modifier during stroke rendering",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_LineStyle_update, 385875968, NULL, NULL,
	0, -1, NULL},
	LineStyleThicknessModifier_Calligraphy_use_get, LineStyleThicknessModifier_Calligraphy_use_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_LineStyleThicknessModifier_Calligraphy_expanded = {
	{(PropertyRNA *)&rna_LineStyleThicknessModifier_Calligraphy_orientation, (PropertyRNA *)&rna_LineStyleThicknessModifier_Calligraphy_use,
	-1, "expanded", 3, "Expanded",
	"True if the modifier tab is expanded",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	LineStyleThicknessModifier_Calligraphy_expanded_get, LineStyleThicknessModifier_Calligraphy_expanded_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

FloatPropertyRNA rna_LineStyleThicknessModifier_Calligraphy_orientation = {
	{(PropertyRNA *)&rna_LineStyleThicknessModifier_Calligraphy_thickness_min, (PropertyRNA *)&rna_LineStyleThicknessModifier_Calligraphy_expanded,
	-1, "orientation", 8195, "Orientation",
	"Angle of the main direction",
	0, "*",
	PROP_FLOAT, PROP_ANGLE | PROP_UNIT_ROTATION, NULL, 0, {0, 0, 0}, 0,
	rna_LineStyle_update, 385875968, NULL, NULL,
	offsetof(LineStyleThicknessModifier_Calligraphy, orientation), 4, NULL},
	LineStyleThicknessModifier_Calligraphy_orientation_get, LineStyleThicknessModifier_Calligraphy_orientation_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, -10000.0f, 10000.0f, -FLT_MAX, FLT_MAX, 10.0f, 3, 0.0f, NULL
};

FloatPropertyRNA rna_LineStyleThicknessModifier_Calligraphy_thickness_min = {
	{(PropertyRNA *)&rna_LineStyleThicknessModifier_Calligraphy_thickness_max, (PropertyRNA *)&rna_LineStyleThicknessModifier_Calligraphy_orientation,
	-1, "thickness_min", 8195, "Min Thickness",
	"Minimum thickness in the direction perpendicular to the main direction",
	0, "*",
	PROP_FLOAT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_LineStyle_update, 385875968, NULL, NULL,
	offsetof(LineStyleThicknessModifier_Calligraphy, min_thickness), 4, NULL},
	LineStyleThicknessModifier_Calligraphy_thickness_min_get, LineStyleThicknessModifier_Calligraphy_thickness_min_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 10000.0f, 0.0f, 10000.0f, 10.0f, 3, 0.0f, NULL
};

FloatPropertyRNA rna_LineStyleThicknessModifier_Calligraphy_thickness_max = {
	{NULL, (PropertyRNA *)&rna_LineStyleThicknessModifier_Calligraphy_thickness_min,
	-1, "thickness_max", 8195, "Max Thickness",
	"Maximum thickness in the main direction",
	0, "*",
	PROP_FLOAT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_LineStyle_update, 385875968, NULL, NULL,
	offsetof(LineStyleThicknessModifier_Calligraphy, max_thickness), 4, NULL},
	LineStyleThicknessModifier_Calligraphy_thickness_max_get, LineStyleThicknessModifier_Calligraphy_thickness_max_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 10000.0f, 0.0f, 10000.0f, 10.0f, 3, 0.0f, NULL
};

StructRNA RNA_LineStyleThicknessModifier_Calligraphy = {
	{(ContainerRNA *)&RNA_LineStyleGeometryModifier, (ContainerRNA *)&RNA_LineStyleThicknessModifier_Material,
	NULL,
	{(PropertyRNA *)&rna_LineStyleThicknessModifier_Calligraphy_type, (PropertyRNA *)&rna_LineStyleThicknessModifier_Calligraphy_thickness_max}},
	"LineStyleThicknessModifier_Calligraphy", NULL, NULL, 4, "Calligraphy",
	"Change line thickness so that stroke looks like made with a calligraphic pen",
	"*", 17,
	(PropertyRNA *)&rna_LineStyleThicknessModifier_Calligraphy_name, (PropertyRNA *)&rna_LineStyleModifier_rna_properties,
	&RNA_LineStyleThicknessModifier,
	NULL,
	rna_LineStyle_thickness_modifier_refine,
	rna_LineStyle_thickness_modifier_path,
	NULL,
	NULL,
	NULL,
	NULL,
	{NULL, NULL}
};

/* Line Style Geometry Modifier */
StructRNA RNA_LineStyleGeometryModifier = {
	{(ContainerRNA *)&RNA_LineStyleGeometryModifier_Sampling, (ContainerRNA *)&RNA_LineStyleThicknessModifier_Calligraphy,
	NULL,
	{NULL, NULL}},
	"LineStyleGeometryModifier", NULL, NULL, 4, "Line Style Geometry Modifier",
	"Base type to define stroke geometry modifiers",
	"*", 17,
	NULL, (PropertyRNA *)&rna_LineStyleModifier_rna_properties,
	&RNA_LineStyleModifier,
	NULL,
	rna_LineStyle_geometry_modifier_refine,
	rna_LineStyle_geometry_modifier_path,
	NULL,
	NULL,
	NULL,
	NULL,
	{NULL, NULL}
};

/* Sampling */
static EnumPropertyItem rna_LineStyleGeometryModifier_Sampling_type_items[14] = {
	{17, "2D_OFFSET", 442, "2D Offset", ""},
	{18, "2D_TRANSFORM", 442, "2D Transform", ""},
	{11, "BACKBONE_STRETCHER", 442, "Backbone Stretcher", ""},
	{6, "BEZIER_CURVE", 442, "Bezier Curve", ""},
	{16, "BLUEPRINT", 442, "Blueprint", ""},
	{15, "GUIDING_LINES", 442, "Guiding Lines", ""},
	{9, "PERLIN_NOISE_1D", 442, "Perlin Noise 1D", ""},
	{10, "PERLIN_NOISE_2D", 442, "Perlin Noise 2D", ""},
	{14, "POLYGONIZATION", 442, "Polygonization", ""},
	{5, "SAMPLING", 442, "Sampling", ""},
	{7, "SINUS_DISPLACEMENT", 442, "Sinus Displacement", ""},
	{8, "SPATIAL_NOISE", 442, "Spatial Noise", ""},
	{12, "TIP_REMOVER", 442, "Tip Remover", ""},
	{0, NULL, 0, NULL, NULL}
};

EnumPropertyRNA rna_LineStyleGeometryModifier_Sampling_type = {
	{(PropertyRNA *)&rna_LineStyleGeometryModifier_Sampling_name, NULL,
	-1, "type", 2, "Modifier Type",
	"Type of the modifier",
	0, "*",
	PROP_ENUM, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	LineStyleGeometryModifier_Sampling_type_get, NULL, NULL, NULL, NULL, NULL, rna_LineStyleGeometryModifier_Sampling_type_items, 13, 17
};

StringPropertyRNA rna_LineStyleGeometryModifier_Sampling_name = {
	{(PropertyRNA *)&rna_LineStyleGeometryModifier_Sampling_use, (PropertyRNA *)&rna_LineStyleGeometryModifier_Sampling_type,
	-1, "name", 262145, "Modifier Name",
	"Name of the modifier",
	0, "*",
	PROP_STRING, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {64, 0, 0}, 0,
	NULL, 385875968, NULL, NULL,
	0, -1, NULL},
	LineStyleGeometryModifier_Sampling_name_get, LineStyleGeometryModifier_Sampling_name_length, LineStyleGeometryModifier_Sampling_name_set, NULL, NULL, NULL, 64, ""
};

BoolPropertyRNA rna_LineStyleGeometryModifier_Sampling_use = {
	{(PropertyRNA *)&rna_LineStyleGeometryModifier_Sampling_expanded, (PropertyRNA *)&rna_LineStyleGeometryModifier_Sampling_name,
	-1, "use", 3, "Use",
	"Enable or disable this modifier during stroke rendering",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_LineStyle_update, 385875968, NULL, NULL,
	0, -1, NULL},
	LineStyleGeometryModifier_Sampling_use_get, LineStyleGeometryModifier_Sampling_use_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_LineStyleGeometryModifier_Sampling_expanded = {
	{(PropertyRNA *)&rna_LineStyleGeometryModifier_Sampling_sampling, (PropertyRNA *)&rna_LineStyleGeometryModifier_Sampling_use,
	-1, "expanded", 3, "Expanded",
	"True if the modifier tab is expanded",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	LineStyleGeometryModifier_Sampling_expanded_get, LineStyleGeometryModifier_Sampling_expanded_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

FloatPropertyRNA rna_LineStyleGeometryModifier_Sampling_sampling = {
	{NULL, (PropertyRNA *)&rna_LineStyleGeometryModifier_Sampling_expanded,
	-1, "sampling", 8195, "Sampling",
	"New sampling value to be used for subsequent modifiers",
	0, "*",
	PROP_FLOAT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_LineStyle_update, 385875968, NULL, NULL,
	offsetof(LineStyleGeometryModifier_Sampling, sampling), 4, NULL},
	LineStyleGeometryModifier_Sampling_sampling_get, LineStyleGeometryModifier_Sampling_sampling_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 10000.0f, 0.0f, 10000.0f, 10.0f, 3, 0.0f, NULL
};

StructRNA RNA_LineStyleGeometryModifier_Sampling = {
	{(ContainerRNA *)&RNA_LineStyleGeometryModifier_BezierCurve, (ContainerRNA *)&RNA_LineStyleGeometryModifier,
	NULL,
	{(PropertyRNA *)&rna_LineStyleGeometryModifier_Sampling_type, (PropertyRNA *)&rna_LineStyleGeometryModifier_Sampling_sampling}},
	"LineStyleGeometryModifier_Sampling", NULL, NULL, 4, "Sampling",
	"Specify a new sampling value that determines the resolution of stroke polylines",
	"*", 17,
	(PropertyRNA *)&rna_LineStyleGeometryModifier_Sampling_name, (PropertyRNA *)&rna_LineStyleModifier_rna_properties,
	&RNA_LineStyleGeometryModifier,
	NULL,
	rna_LineStyle_geometry_modifier_refine,
	rna_LineStyle_geometry_modifier_path,
	NULL,
	NULL,
	NULL,
	NULL,
	{NULL, NULL}
};

/* Bezier Curve */
static EnumPropertyItem rna_LineStyleGeometryModifier_BezierCurve_type_items[14] = {
	{17, "2D_OFFSET", 442, "2D Offset", ""},
	{18, "2D_TRANSFORM", 442, "2D Transform", ""},
	{11, "BACKBONE_STRETCHER", 442, "Backbone Stretcher", ""},
	{6, "BEZIER_CURVE", 442, "Bezier Curve", ""},
	{16, "BLUEPRINT", 442, "Blueprint", ""},
	{15, "GUIDING_LINES", 442, "Guiding Lines", ""},
	{9, "PERLIN_NOISE_1D", 442, "Perlin Noise 1D", ""},
	{10, "PERLIN_NOISE_2D", 442, "Perlin Noise 2D", ""},
	{14, "POLYGONIZATION", 442, "Polygonization", ""},
	{5, "SAMPLING", 442, "Sampling", ""},
	{7, "SINUS_DISPLACEMENT", 442, "Sinus Displacement", ""},
	{8, "SPATIAL_NOISE", 442, "Spatial Noise", ""},
	{12, "TIP_REMOVER", 442, "Tip Remover", ""},
	{0, NULL, 0, NULL, NULL}
};

EnumPropertyRNA rna_LineStyleGeometryModifier_BezierCurve_type = {
	{(PropertyRNA *)&rna_LineStyleGeometryModifier_BezierCurve_name, NULL,
	-1, "type", 2, "Modifier Type",
	"Type of the modifier",
	0, "*",
	PROP_ENUM, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	LineStyleGeometryModifier_BezierCurve_type_get, NULL, NULL, NULL, NULL, NULL, rna_LineStyleGeometryModifier_BezierCurve_type_items, 13, 17
};

StringPropertyRNA rna_LineStyleGeometryModifier_BezierCurve_name = {
	{(PropertyRNA *)&rna_LineStyleGeometryModifier_BezierCurve_use, (PropertyRNA *)&rna_LineStyleGeometryModifier_BezierCurve_type,
	-1, "name", 262145, "Modifier Name",
	"Name of the modifier",
	0, "*",
	PROP_STRING, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {64, 0, 0}, 0,
	NULL, 385875968, NULL, NULL,
	0, -1, NULL},
	LineStyleGeometryModifier_BezierCurve_name_get, LineStyleGeometryModifier_BezierCurve_name_length, LineStyleGeometryModifier_BezierCurve_name_set, NULL, NULL, NULL, 64, ""
};

BoolPropertyRNA rna_LineStyleGeometryModifier_BezierCurve_use = {
	{(PropertyRNA *)&rna_LineStyleGeometryModifier_BezierCurve_expanded, (PropertyRNA *)&rna_LineStyleGeometryModifier_BezierCurve_name,
	-1, "use", 3, "Use",
	"Enable or disable this modifier during stroke rendering",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_LineStyle_update, 385875968, NULL, NULL,
	0, -1, NULL},
	LineStyleGeometryModifier_BezierCurve_use_get, LineStyleGeometryModifier_BezierCurve_use_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_LineStyleGeometryModifier_BezierCurve_expanded = {
	{(PropertyRNA *)&rna_LineStyleGeometryModifier_BezierCurve_error, (PropertyRNA *)&rna_LineStyleGeometryModifier_BezierCurve_use,
	-1, "expanded", 3, "Expanded",
	"True if the modifier tab is expanded",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	LineStyleGeometryModifier_BezierCurve_expanded_get, LineStyleGeometryModifier_BezierCurve_expanded_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

FloatPropertyRNA rna_LineStyleGeometryModifier_BezierCurve_error = {
	{NULL, (PropertyRNA *)&rna_LineStyleGeometryModifier_BezierCurve_expanded,
	-1, "error", 8195, "Error",
	"Maximum distance allowed between the new Bezier curve and the original backbone geometry",
	0, "*",
	PROP_FLOAT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_LineStyle_update, 385875968, NULL, NULL,
	offsetof(LineStyleGeometryModifier_BezierCurve, error), 4, NULL},
	LineStyleGeometryModifier_BezierCurve_error_get, LineStyleGeometryModifier_BezierCurve_error_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, -10000.0f, 10000.0f, -FLT_MAX, FLT_MAX, 10.0f, 3, 0.0f, NULL
};

StructRNA RNA_LineStyleGeometryModifier_BezierCurve = {
	{(ContainerRNA *)&RNA_LineStyleGeometryModifier_SinusDisplacement, (ContainerRNA *)&RNA_LineStyleGeometryModifier_Sampling,
	NULL,
	{(PropertyRNA *)&rna_LineStyleGeometryModifier_BezierCurve_type, (PropertyRNA *)&rna_LineStyleGeometryModifier_BezierCurve_error}},
	"LineStyleGeometryModifier_BezierCurve", NULL, NULL, 4, "Bezier Curve",
	"Replace stroke backbone geometry by a Bezier curve approximation of the original backbone geometry",
	"*", 17,
	(PropertyRNA *)&rna_LineStyleGeometryModifier_BezierCurve_name, (PropertyRNA *)&rna_LineStyleModifier_rna_properties,
	&RNA_LineStyleGeometryModifier,
	NULL,
	rna_LineStyle_geometry_modifier_refine,
	rna_LineStyle_geometry_modifier_path,
	NULL,
	NULL,
	NULL,
	NULL,
	{NULL, NULL}
};

/* Sinus Displacement */
static EnumPropertyItem rna_LineStyleGeometryModifier_SinusDisplacement_type_items[14] = {
	{17, "2D_OFFSET", 442, "2D Offset", ""},
	{18, "2D_TRANSFORM", 442, "2D Transform", ""},
	{11, "BACKBONE_STRETCHER", 442, "Backbone Stretcher", ""},
	{6, "BEZIER_CURVE", 442, "Bezier Curve", ""},
	{16, "BLUEPRINT", 442, "Blueprint", ""},
	{15, "GUIDING_LINES", 442, "Guiding Lines", ""},
	{9, "PERLIN_NOISE_1D", 442, "Perlin Noise 1D", ""},
	{10, "PERLIN_NOISE_2D", 442, "Perlin Noise 2D", ""},
	{14, "POLYGONIZATION", 442, "Polygonization", ""},
	{5, "SAMPLING", 442, "Sampling", ""},
	{7, "SINUS_DISPLACEMENT", 442, "Sinus Displacement", ""},
	{8, "SPATIAL_NOISE", 442, "Spatial Noise", ""},
	{12, "TIP_REMOVER", 442, "Tip Remover", ""},
	{0, NULL, 0, NULL, NULL}
};

EnumPropertyRNA rna_LineStyleGeometryModifier_SinusDisplacement_type = {
	{(PropertyRNA *)&rna_LineStyleGeometryModifier_SinusDisplacement_name, NULL,
	-1, "type", 2, "Modifier Type",
	"Type of the modifier",
	0, "*",
	PROP_ENUM, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	LineStyleGeometryModifier_SinusDisplacement_type_get, NULL, NULL, NULL, NULL, NULL, rna_LineStyleGeometryModifier_SinusDisplacement_type_items, 13, 17
};

StringPropertyRNA rna_LineStyleGeometryModifier_SinusDisplacement_name = {
	{(PropertyRNA *)&rna_LineStyleGeometryModifier_SinusDisplacement_use, (PropertyRNA *)&rna_LineStyleGeometryModifier_SinusDisplacement_type,
	-1, "name", 262145, "Modifier Name",
	"Name of the modifier",
	0, "*",
	PROP_STRING, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {64, 0, 0}, 0,
	NULL, 385875968, NULL, NULL,
	0, -1, NULL},
	LineStyleGeometryModifier_SinusDisplacement_name_get, LineStyleGeometryModifier_SinusDisplacement_name_length, LineStyleGeometryModifier_SinusDisplacement_name_set, NULL, NULL, NULL, 64, ""
};

BoolPropertyRNA rna_LineStyleGeometryModifier_SinusDisplacement_use = {
	{(PropertyRNA *)&rna_LineStyleGeometryModifier_SinusDisplacement_expanded, (PropertyRNA *)&rna_LineStyleGeometryModifier_SinusDisplacement_name,
	-1, "use", 3, "Use",
	"Enable or disable this modifier during stroke rendering",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_LineStyle_update, 385875968, NULL, NULL,
	0, -1, NULL},
	LineStyleGeometryModifier_SinusDisplacement_use_get, LineStyleGeometryModifier_SinusDisplacement_use_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_LineStyleGeometryModifier_SinusDisplacement_expanded = {
	{(PropertyRNA *)&rna_LineStyleGeometryModifier_SinusDisplacement_wavelength, (PropertyRNA *)&rna_LineStyleGeometryModifier_SinusDisplacement_use,
	-1, "expanded", 3, "Expanded",
	"True if the modifier tab is expanded",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	LineStyleGeometryModifier_SinusDisplacement_expanded_get, LineStyleGeometryModifier_SinusDisplacement_expanded_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

FloatPropertyRNA rna_LineStyleGeometryModifier_SinusDisplacement_wavelength = {
	{(PropertyRNA *)&rna_LineStyleGeometryModifier_SinusDisplacement_amplitude, (PropertyRNA *)&rna_LineStyleGeometryModifier_SinusDisplacement_expanded,
	-1, "wavelength", 8195, "Wavelength",
	"Wavelength of the sinus displacement",
	0, "*",
	PROP_FLOAT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_LineStyle_update, 385875968, NULL, NULL,
	offsetof(LineStyleGeometryModifier_SinusDisplacement, wavelength), 4, NULL},
	LineStyleGeometryModifier_SinusDisplacement_wavelength_get, LineStyleGeometryModifier_SinusDisplacement_wavelength_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, -10000.0f, 10000.0f, -FLT_MAX, FLT_MAX, 10.0f, 3, 0.0f, NULL
};

FloatPropertyRNA rna_LineStyleGeometryModifier_SinusDisplacement_amplitude = {
	{(PropertyRNA *)&rna_LineStyleGeometryModifier_SinusDisplacement_phase, (PropertyRNA *)&rna_LineStyleGeometryModifier_SinusDisplacement_wavelength,
	-1, "amplitude", 8195, "Amplitude",
	"Amplitude of the sinus displacement",
	0, "*",
	PROP_FLOAT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_LineStyle_update, 385875968, NULL, NULL,
	offsetof(LineStyleGeometryModifier_SinusDisplacement, amplitude), 4, NULL},
	LineStyleGeometryModifier_SinusDisplacement_amplitude_get, LineStyleGeometryModifier_SinusDisplacement_amplitude_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, -10000.0f, 10000.0f, -FLT_MAX, FLT_MAX, 10.0f, 3, 0.0f, NULL
};

FloatPropertyRNA rna_LineStyleGeometryModifier_SinusDisplacement_phase = {
	{NULL, (PropertyRNA *)&rna_LineStyleGeometryModifier_SinusDisplacement_amplitude,
	-1, "phase", 8195, "Phase",
	"Phase of the sinus displacement",
	0, "*",
	PROP_FLOAT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_LineStyle_update, 385875968, NULL, NULL,
	offsetof(LineStyleGeometryModifier_SinusDisplacement, phase), 4, NULL},
	LineStyleGeometryModifier_SinusDisplacement_phase_get, LineStyleGeometryModifier_SinusDisplacement_phase_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, -10000.0f, 10000.0f, -FLT_MAX, FLT_MAX, 10.0f, 3, 0.0f, NULL
};

StructRNA RNA_LineStyleGeometryModifier_SinusDisplacement = {
	{(ContainerRNA *)&RNA_LineStyleGeometryModifier_SpatialNoise, (ContainerRNA *)&RNA_LineStyleGeometryModifier_BezierCurve,
	NULL,
	{(PropertyRNA *)&rna_LineStyleGeometryModifier_SinusDisplacement_type, (PropertyRNA *)&rna_LineStyleGeometryModifier_SinusDisplacement_phase}},
	"LineStyleGeometryModifier_SinusDisplacement", NULL, NULL, 4, "Sinus Displacement",
	"Add sinus displacement to stroke backbone geometry",
	"*", 17,
	(PropertyRNA *)&rna_LineStyleGeometryModifier_SinusDisplacement_name, (PropertyRNA *)&rna_LineStyleModifier_rna_properties,
	&RNA_LineStyleGeometryModifier,
	NULL,
	rna_LineStyle_geometry_modifier_refine,
	rna_LineStyle_geometry_modifier_path,
	NULL,
	NULL,
	NULL,
	NULL,
	{NULL, NULL}
};

/* Spatial Noise */
static EnumPropertyItem rna_LineStyleGeometryModifier_SpatialNoise_type_items[14] = {
	{17, "2D_OFFSET", 442, "2D Offset", ""},
	{18, "2D_TRANSFORM", 442, "2D Transform", ""},
	{11, "BACKBONE_STRETCHER", 442, "Backbone Stretcher", ""},
	{6, "BEZIER_CURVE", 442, "Bezier Curve", ""},
	{16, "BLUEPRINT", 442, "Blueprint", ""},
	{15, "GUIDING_LINES", 442, "Guiding Lines", ""},
	{9, "PERLIN_NOISE_1D", 442, "Perlin Noise 1D", ""},
	{10, "PERLIN_NOISE_2D", 442, "Perlin Noise 2D", ""},
	{14, "POLYGONIZATION", 442, "Polygonization", ""},
	{5, "SAMPLING", 442, "Sampling", ""},
	{7, "SINUS_DISPLACEMENT", 442, "Sinus Displacement", ""},
	{8, "SPATIAL_NOISE", 442, "Spatial Noise", ""},
	{12, "TIP_REMOVER", 442, "Tip Remover", ""},
	{0, NULL, 0, NULL, NULL}
};

EnumPropertyRNA rna_LineStyleGeometryModifier_SpatialNoise_type = {
	{(PropertyRNA *)&rna_LineStyleGeometryModifier_SpatialNoise_name, NULL,
	-1, "type", 2, "Modifier Type",
	"Type of the modifier",
	0, "*",
	PROP_ENUM, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	LineStyleGeometryModifier_SpatialNoise_type_get, NULL, NULL, NULL, NULL, NULL, rna_LineStyleGeometryModifier_SpatialNoise_type_items, 13, 17
};

StringPropertyRNA rna_LineStyleGeometryModifier_SpatialNoise_name = {
	{(PropertyRNA *)&rna_LineStyleGeometryModifier_SpatialNoise_use, (PropertyRNA *)&rna_LineStyleGeometryModifier_SpatialNoise_type,
	-1, "name", 262145, "Modifier Name",
	"Name of the modifier",
	0, "*",
	PROP_STRING, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {64, 0, 0}, 0,
	NULL, 385875968, NULL, NULL,
	0, -1, NULL},
	LineStyleGeometryModifier_SpatialNoise_name_get, LineStyleGeometryModifier_SpatialNoise_name_length, LineStyleGeometryModifier_SpatialNoise_name_set, NULL, NULL, NULL, 64, ""
};

BoolPropertyRNA rna_LineStyleGeometryModifier_SpatialNoise_use = {
	{(PropertyRNA *)&rna_LineStyleGeometryModifier_SpatialNoise_expanded, (PropertyRNA *)&rna_LineStyleGeometryModifier_SpatialNoise_name,
	-1, "use", 3, "Use",
	"Enable or disable this modifier during stroke rendering",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_LineStyle_update, 385875968, NULL, NULL,
	0, -1, NULL},
	LineStyleGeometryModifier_SpatialNoise_use_get, LineStyleGeometryModifier_SpatialNoise_use_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_LineStyleGeometryModifier_SpatialNoise_expanded = {
	{(PropertyRNA *)&rna_LineStyleGeometryModifier_SpatialNoise_amplitude, (PropertyRNA *)&rna_LineStyleGeometryModifier_SpatialNoise_use,
	-1, "expanded", 3, "Expanded",
	"True if the modifier tab is expanded",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	LineStyleGeometryModifier_SpatialNoise_expanded_get, LineStyleGeometryModifier_SpatialNoise_expanded_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

FloatPropertyRNA rna_LineStyleGeometryModifier_SpatialNoise_amplitude = {
	{(PropertyRNA *)&rna_LineStyleGeometryModifier_SpatialNoise_scale, (PropertyRNA *)&rna_LineStyleGeometryModifier_SpatialNoise_expanded,
	-1, "amplitude", 8195, "Amplitude",
	"Amplitude of the spatial noise",
	0, "*",
	PROP_FLOAT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_LineStyle_update, 385875968, NULL, NULL,
	offsetof(LineStyleGeometryModifier_SpatialNoise, amplitude), 4, NULL},
	LineStyleGeometryModifier_SpatialNoise_amplitude_get, LineStyleGeometryModifier_SpatialNoise_amplitude_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, -10000.0f, 10000.0f, -FLT_MAX, FLT_MAX, 10.0f, 3, 0.0f, NULL
};

FloatPropertyRNA rna_LineStyleGeometryModifier_SpatialNoise_scale = {
	{(PropertyRNA *)&rna_LineStyleGeometryModifier_SpatialNoise_octaves, (PropertyRNA *)&rna_LineStyleGeometryModifier_SpatialNoise_amplitude,
	-1, "scale", 8195, "Scale",
	"Scale of the spatial noise",
	0, "*",
	PROP_FLOAT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_LineStyle_update, 385875968, NULL, NULL,
	offsetof(LineStyleGeometryModifier_SpatialNoise, scale), 4, NULL},
	LineStyleGeometryModifier_SpatialNoise_scale_get, LineStyleGeometryModifier_SpatialNoise_scale_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, -10000.0f, 10000.0f, -FLT_MAX, FLT_MAX, 10.0f, 3, 0.0f, NULL
};

IntPropertyRNA rna_LineStyleGeometryModifier_SpatialNoise_octaves = {
	{(PropertyRNA *)&rna_LineStyleGeometryModifier_SpatialNoise_smooth, (PropertyRNA *)&rna_LineStyleGeometryModifier_SpatialNoise_scale,
	-1, "octaves", 8195, "Octaves",
	"Number of octaves (i.e., the amount of detail of the spatial noise)",
	0, "*",
	PROP_INT, PROP_UNSIGNED | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_LineStyle_update, 385875968, NULL, NULL,
	offsetof(LineStyleGeometryModifier_SpatialNoise, octaves), 0, NULL},
	LineStyleGeometryModifier_SpatialNoise_octaves_get, LineStyleGeometryModifier_SpatialNoise_octaves_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL,
	0, 10000, 0, INT_MAX, 1, 0, NULL
};

BoolPropertyRNA rna_LineStyleGeometryModifier_SpatialNoise_smooth = {
	{(PropertyRNA *)&rna_LineStyleGeometryModifier_SpatialNoise_use_pure_random, (PropertyRNA *)&rna_LineStyleGeometryModifier_SpatialNoise_octaves,
	-1, "smooth", 3, "Smooth",
	"If true, the spatial noise is smooth",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_LineStyle_update, 385875968, NULL, NULL,
	0, -1, NULL},
	LineStyleGeometryModifier_SpatialNoise_smooth_get, LineStyleGeometryModifier_SpatialNoise_smooth_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_LineStyleGeometryModifier_SpatialNoise_use_pure_random = {
	{NULL, (PropertyRNA *)&rna_LineStyleGeometryModifier_SpatialNoise_smooth,
	-1, "use_pure_random", 3, "Pure Random",
	"If true, the spatial noise does not show any coherence",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_LineStyle_update, 385875968, NULL, NULL,
	0, -1, NULL},
	LineStyleGeometryModifier_SpatialNoise_use_pure_random_get, LineStyleGeometryModifier_SpatialNoise_use_pure_random_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

StructRNA RNA_LineStyleGeometryModifier_SpatialNoise = {
	{(ContainerRNA *)&RNA_LineStyleGeometryModifier_PerlinNoise1D, (ContainerRNA *)&RNA_LineStyleGeometryModifier_SinusDisplacement,
	NULL,
	{(PropertyRNA *)&rna_LineStyleGeometryModifier_SpatialNoise_type, (PropertyRNA *)&rna_LineStyleGeometryModifier_SpatialNoise_use_pure_random}},
	"LineStyleGeometryModifier_SpatialNoise", NULL, NULL, 4, "Spatial Noise",
	"Add spatial noise to stroke backbone geometry",
	"*", 17,
	(PropertyRNA *)&rna_LineStyleGeometryModifier_SpatialNoise_name, (PropertyRNA *)&rna_LineStyleModifier_rna_properties,
	&RNA_LineStyleGeometryModifier,
	NULL,
	rna_LineStyle_geometry_modifier_refine,
	rna_LineStyle_geometry_modifier_path,
	NULL,
	NULL,
	NULL,
	NULL,
	{NULL, NULL}
};

/* Perlin Noise 1D */
static EnumPropertyItem rna_LineStyleGeometryModifier_PerlinNoise1D_type_items[14] = {
	{17, "2D_OFFSET", 442, "2D Offset", ""},
	{18, "2D_TRANSFORM", 442, "2D Transform", ""},
	{11, "BACKBONE_STRETCHER", 442, "Backbone Stretcher", ""},
	{6, "BEZIER_CURVE", 442, "Bezier Curve", ""},
	{16, "BLUEPRINT", 442, "Blueprint", ""},
	{15, "GUIDING_LINES", 442, "Guiding Lines", ""},
	{9, "PERLIN_NOISE_1D", 442, "Perlin Noise 1D", ""},
	{10, "PERLIN_NOISE_2D", 442, "Perlin Noise 2D", ""},
	{14, "POLYGONIZATION", 442, "Polygonization", ""},
	{5, "SAMPLING", 442, "Sampling", ""},
	{7, "SINUS_DISPLACEMENT", 442, "Sinus Displacement", ""},
	{8, "SPATIAL_NOISE", 442, "Spatial Noise", ""},
	{12, "TIP_REMOVER", 442, "Tip Remover", ""},
	{0, NULL, 0, NULL, NULL}
};

EnumPropertyRNA rna_LineStyleGeometryModifier_PerlinNoise1D_type = {
	{(PropertyRNA *)&rna_LineStyleGeometryModifier_PerlinNoise1D_name, NULL,
	-1, "type", 2, "Modifier Type",
	"Type of the modifier",
	0, "*",
	PROP_ENUM, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	LineStyleGeometryModifier_PerlinNoise1D_type_get, NULL, NULL, NULL, NULL, NULL, rna_LineStyleGeometryModifier_PerlinNoise1D_type_items, 13, 17
};

StringPropertyRNA rna_LineStyleGeometryModifier_PerlinNoise1D_name = {
	{(PropertyRNA *)&rna_LineStyleGeometryModifier_PerlinNoise1D_use, (PropertyRNA *)&rna_LineStyleGeometryModifier_PerlinNoise1D_type,
	-1, "name", 262145, "Modifier Name",
	"Name of the modifier",
	0, "*",
	PROP_STRING, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {64, 0, 0}, 0,
	NULL, 385875968, NULL, NULL,
	0, -1, NULL},
	LineStyleGeometryModifier_PerlinNoise1D_name_get, LineStyleGeometryModifier_PerlinNoise1D_name_length, LineStyleGeometryModifier_PerlinNoise1D_name_set, NULL, NULL, NULL, 64, ""
};

BoolPropertyRNA rna_LineStyleGeometryModifier_PerlinNoise1D_use = {
	{(PropertyRNA *)&rna_LineStyleGeometryModifier_PerlinNoise1D_expanded, (PropertyRNA *)&rna_LineStyleGeometryModifier_PerlinNoise1D_name,
	-1, "use", 3, "Use",
	"Enable or disable this modifier during stroke rendering",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_LineStyle_update, 385875968, NULL, NULL,
	0, -1, NULL},
	LineStyleGeometryModifier_PerlinNoise1D_use_get, LineStyleGeometryModifier_PerlinNoise1D_use_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_LineStyleGeometryModifier_PerlinNoise1D_expanded = {
	{(PropertyRNA *)&rna_LineStyleGeometryModifier_PerlinNoise1D_frequency, (PropertyRNA *)&rna_LineStyleGeometryModifier_PerlinNoise1D_use,
	-1, "expanded", 3, "Expanded",
	"True if the modifier tab is expanded",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	LineStyleGeometryModifier_PerlinNoise1D_expanded_get, LineStyleGeometryModifier_PerlinNoise1D_expanded_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

FloatPropertyRNA rna_LineStyleGeometryModifier_PerlinNoise1D_frequency = {
	{(PropertyRNA *)&rna_LineStyleGeometryModifier_PerlinNoise1D_amplitude, (PropertyRNA *)&rna_LineStyleGeometryModifier_PerlinNoise1D_expanded,
	-1, "frequency", 8195, "Frequency",
	"Frequency of the Perlin noise",
	0, "*",
	PROP_FLOAT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_LineStyle_update, 385875968, NULL, NULL,
	offsetof(LineStyleGeometryModifier_PerlinNoise1D, frequency), 4, NULL},
	LineStyleGeometryModifier_PerlinNoise1D_frequency_get, LineStyleGeometryModifier_PerlinNoise1D_frequency_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, -10000.0f, 10000.0f, -FLT_MAX, FLT_MAX, 10.0f, 3, 0.0f, NULL
};

FloatPropertyRNA rna_LineStyleGeometryModifier_PerlinNoise1D_amplitude = {
	{(PropertyRNA *)&rna_LineStyleGeometryModifier_PerlinNoise1D_octaves, (PropertyRNA *)&rna_LineStyleGeometryModifier_PerlinNoise1D_frequency,
	-1, "amplitude", 8195, "Amplitude",
	"Amplitude of the Perlin noise",
	0, "*",
	PROP_FLOAT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_LineStyle_update, 385875968, NULL, NULL,
	offsetof(LineStyleGeometryModifier_PerlinNoise1D, amplitude), 4, NULL},
	LineStyleGeometryModifier_PerlinNoise1D_amplitude_get, LineStyleGeometryModifier_PerlinNoise1D_amplitude_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, -10000.0f, 10000.0f, -FLT_MAX, FLT_MAX, 10.0f, 3, 0.0f, NULL
};

IntPropertyRNA rna_LineStyleGeometryModifier_PerlinNoise1D_octaves = {
	{(PropertyRNA *)&rna_LineStyleGeometryModifier_PerlinNoise1D_angle, (PropertyRNA *)&rna_LineStyleGeometryModifier_PerlinNoise1D_amplitude,
	-1, "octaves", 8195, "Octaves",
	"Number of octaves (i.e., the amount of detail of the Perlin noise)",
	0, "*",
	PROP_INT, PROP_UNSIGNED | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_LineStyle_update, 385875968, NULL, NULL,
	offsetof(LineStyleGeometryModifier_PerlinNoise1D, octaves), 0, NULL},
	LineStyleGeometryModifier_PerlinNoise1D_octaves_get, LineStyleGeometryModifier_PerlinNoise1D_octaves_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL,
	0, 10000, 0, INT_MAX, 1, 0, NULL
};

FloatPropertyRNA rna_LineStyleGeometryModifier_PerlinNoise1D_angle = {
	{(PropertyRNA *)&rna_LineStyleGeometryModifier_PerlinNoise1D_seed, (PropertyRNA *)&rna_LineStyleGeometryModifier_PerlinNoise1D_octaves,
	-1, "angle", 8195, "Angle",
	"Displacement direction",
	0, "*",
	PROP_FLOAT, PROP_ANGLE | PROP_UNIT_ROTATION, NULL, 0, {0, 0, 0}, 0,
	rna_LineStyle_update, 385875968, NULL, NULL,
	offsetof(LineStyleGeometryModifier_PerlinNoise1D, angle), 4, NULL},
	LineStyleGeometryModifier_PerlinNoise1D_angle_get, LineStyleGeometryModifier_PerlinNoise1D_angle_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, -10000.0f, 10000.0f, -FLT_MAX, FLT_MAX, 10.0f, 3, 0.0f, NULL
};

IntPropertyRNA rna_LineStyleGeometryModifier_PerlinNoise1D_seed = {
	{NULL, (PropertyRNA *)&rna_LineStyleGeometryModifier_PerlinNoise1D_angle,
	-1, "seed", 8195, "Seed",
	"Seed for random number generation (if negative, time is used as a seed instead)",
	0, "*",
	PROP_INT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_LineStyle_update, 385875968, NULL, NULL,
	offsetof(LineStyleGeometryModifier_PerlinNoise1D, seed), 0, NULL},
	LineStyleGeometryModifier_PerlinNoise1D_seed_get, LineStyleGeometryModifier_PerlinNoise1D_seed_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL,
	-10000, 10000, INT_MIN, INT_MAX, 1, 0, NULL
};

StructRNA RNA_LineStyleGeometryModifier_PerlinNoise1D = {
	{(ContainerRNA *)&RNA_LineStyleGeometryModifier_PerlinNoise2D, (ContainerRNA *)&RNA_LineStyleGeometryModifier_SpatialNoise,
	NULL,
	{(PropertyRNA *)&rna_LineStyleGeometryModifier_PerlinNoise1D_type, (PropertyRNA *)&rna_LineStyleGeometryModifier_PerlinNoise1D_seed}},
	"LineStyleGeometryModifier_PerlinNoise1D", NULL, NULL, 4, "Perlin Noise 1D",
	"Add one-dimensional Perlin noise to stroke backbone geometry",
	"*", 17,
	(PropertyRNA *)&rna_LineStyleGeometryModifier_PerlinNoise1D_name, (PropertyRNA *)&rna_LineStyleModifier_rna_properties,
	&RNA_LineStyleGeometryModifier,
	NULL,
	rna_LineStyle_geometry_modifier_refine,
	rna_LineStyle_geometry_modifier_path,
	NULL,
	NULL,
	NULL,
	NULL,
	{NULL, NULL}
};

/* Perlin Noise 2D */
static EnumPropertyItem rna_LineStyleGeometryModifier_PerlinNoise2D_type_items[14] = {
	{17, "2D_OFFSET", 442, "2D Offset", ""},
	{18, "2D_TRANSFORM", 442, "2D Transform", ""},
	{11, "BACKBONE_STRETCHER", 442, "Backbone Stretcher", ""},
	{6, "BEZIER_CURVE", 442, "Bezier Curve", ""},
	{16, "BLUEPRINT", 442, "Blueprint", ""},
	{15, "GUIDING_LINES", 442, "Guiding Lines", ""},
	{9, "PERLIN_NOISE_1D", 442, "Perlin Noise 1D", ""},
	{10, "PERLIN_NOISE_2D", 442, "Perlin Noise 2D", ""},
	{14, "POLYGONIZATION", 442, "Polygonization", ""},
	{5, "SAMPLING", 442, "Sampling", ""},
	{7, "SINUS_DISPLACEMENT", 442, "Sinus Displacement", ""},
	{8, "SPATIAL_NOISE", 442, "Spatial Noise", ""},
	{12, "TIP_REMOVER", 442, "Tip Remover", ""},
	{0, NULL, 0, NULL, NULL}
};

EnumPropertyRNA rna_LineStyleGeometryModifier_PerlinNoise2D_type = {
	{(PropertyRNA *)&rna_LineStyleGeometryModifier_PerlinNoise2D_name, NULL,
	-1, "type", 2, "Modifier Type",
	"Type of the modifier",
	0, "*",
	PROP_ENUM, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	LineStyleGeometryModifier_PerlinNoise2D_type_get, NULL, NULL, NULL, NULL, NULL, rna_LineStyleGeometryModifier_PerlinNoise2D_type_items, 13, 17
};

StringPropertyRNA rna_LineStyleGeometryModifier_PerlinNoise2D_name = {
	{(PropertyRNA *)&rna_LineStyleGeometryModifier_PerlinNoise2D_use, (PropertyRNA *)&rna_LineStyleGeometryModifier_PerlinNoise2D_type,
	-1, "name", 262145, "Modifier Name",
	"Name of the modifier",
	0, "*",
	PROP_STRING, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {64, 0, 0}, 0,
	NULL, 385875968, NULL, NULL,
	0, -1, NULL},
	LineStyleGeometryModifier_PerlinNoise2D_name_get, LineStyleGeometryModifier_PerlinNoise2D_name_length, LineStyleGeometryModifier_PerlinNoise2D_name_set, NULL, NULL, NULL, 64, ""
};

BoolPropertyRNA rna_LineStyleGeometryModifier_PerlinNoise2D_use = {
	{(PropertyRNA *)&rna_LineStyleGeometryModifier_PerlinNoise2D_expanded, (PropertyRNA *)&rna_LineStyleGeometryModifier_PerlinNoise2D_name,
	-1, "use", 3, "Use",
	"Enable or disable this modifier during stroke rendering",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_LineStyle_update, 385875968, NULL, NULL,
	0, -1, NULL},
	LineStyleGeometryModifier_PerlinNoise2D_use_get, LineStyleGeometryModifier_PerlinNoise2D_use_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_LineStyleGeometryModifier_PerlinNoise2D_expanded = {
	{(PropertyRNA *)&rna_LineStyleGeometryModifier_PerlinNoise2D_frequency, (PropertyRNA *)&rna_LineStyleGeometryModifier_PerlinNoise2D_use,
	-1, "expanded", 3, "Expanded",
	"True if the modifier tab is expanded",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	LineStyleGeometryModifier_PerlinNoise2D_expanded_get, LineStyleGeometryModifier_PerlinNoise2D_expanded_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

FloatPropertyRNA rna_LineStyleGeometryModifier_PerlinNoise2D_frequency = {
	{(PropertyRNA *)&rna_LineStyleGeometryModifier_PerlinNoise2D_amplitude, (PropertyRNA *)&rna_LineStyleGeometryModifier_PerlinNoise2D_expanded,
	-1, "frequency", 8195, "Frequency",
	"Frequency of the Perlin noise",
	0, "*",
	PROP_FLOAT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_LineStyle_update, 385875968, NULL, NULL,
	offsetof(LineStyleGeometryModifier_PerlinNoise2D, frequency), 4, NULL},
	LineStyleGeometryModifier_PerlinNoise2D_frequency_get, LineStyleGeometryModifier_PerlinNoise2D_frequency_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, -10000.0f, 10000.0f, -FLT_MAX, FLT_MAX, 10.0f, 3, 0.0f, NULL
};

FloatPropertyRNA rna_LineStyleGeometryModifier_PerlinNoise2D_amplitude = {
	{(PropertyRNA *)&rna_LineStyleGeometryModifier_PerlinNoise2D_octaves, (PropertyRNA *)&rna_LineStyleGeometryModifier_PerlinNoise2D_frequency,
	-1, "amplitude", 8195, "Amplitude",
	"Amplitude of the Perlin noise",
	0, "*",
	PROP_FLOAT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_LineStyle_update, 385875968, NULL, NULL,
	offsetof(LineStyleGeometryModifier_PerlinNoise2D, amplitude), 4, NULL},
	LineStyleGeometryModifier_PerlinNoise2D_amplitude_get, LineStyleGeometryModifier_PerlinNoise2D_amplitude_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, -10000.0f, 10000.0f, -FLT_MAX, FLT_MAX, 10.0f, 3, 0.0f, NULL
};

IntPropertyRNA rna_LineStyleGeometryModifier_PerlinNoise2D_octaves = {
	{(PropertyRNA *)&rna_LineStyleGeometryModifier_PerlinNoise2D_angle, (PropertyRNA *)&rna_LineStyleGeometryModifier_PerlinNoise2D_amplitude,
	-1, "octaves", 8195, "Octaves",
	"Number of octaves (i.e., the amount of detail of the Perlin noise)",
	0, "*",
	PROP_INT, PROP_UNSIGNED | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_LineStyle_update, 385875968, NULL, NULL,
	offsetof(LineStyleGeometryModifier_PerlinNoise2D, octaves), 0, NULL},
	LineStyleGeometryModifier_PerlinNoise2D_octaves_get, LineStyleGeometryModifier_PerlinNoise2D_octaves_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL,
	0, 10000, 0, INT_MAX, 1, 0, NULL
};

FloatPropertyRNA rna_LineStyleGeometryModifier_PerlinNoise2D_angle = {
	{(PropertyRNA *)&rna_LineStyleGeometryModifier_PerlinNoise2D_seed, (PropertyRNA *)&rna_LineStyleGeometryModifier_PerlinNoise2D_octaves,
	-1, "angle", 8195, "Angle",
	"Displacement direction",
	0, "*",
	PROP_FLOAT, PROP_ANGLE | PROP_UNIT_ROTATION, NULL, 0, {0, 0, 0}, 0,
	rna_LineStyle_update, 385875968, NULL, NULL,
	offsetof(LineStyleGeometryModifier_PerlinNoise2D, angle), 4, NULL},
	LineStyleGeometryModifier_PerlinNoise2D_angle_get, LineStyleGeometryModifier_PerlinNoise2D_angle_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, -10000.0f, 10000.0f, -FLT_MAX, FLT_MAX, 10.0f, 3, 0.0f, NULL
};

IntPropertyRNA rna_LineStyleGeometryModifier_PerlinNoise2D_seed = {
	{NULL, (PropertyRNA *)&rna_LineStyleGeometryModifier_PerlinNoise2D_angle,
	-1, "seed", 8195, "Seed",
	"Seed for random number generation (if negative, time is used as a seed instead)",
	0, "*",
	PROP_INT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_LineStyle_update, 385875968, NULL, NULL,
	offsetof(LineStyleGeometryModifier_PerlinNoise2D, seed), 0, NULL},
	LineStyleGeometryModifier_PerlinNoise2D_seed_get, LineStyleGeometryModifier_PerlinNoise2D_seed_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL,
	-10000, 10000, INT_MIN, INT_MAX, 1, 0, NULL
};

StructRNA RNA_LineStyleGeometryModifier_PerlinNoise2D = {
	{(ContainerRNA *)&RNA_LineStyleGeometryModifier_BackboneStretcher, (ContainerRNA *)&RNA_LineStyleGeometryModifier_PerlinNoise1D,
	NULL,
	{(PropertyRNA *)&rna_LineStyleGeometryModifier_PerlinNoise2D_type, (PropertyRNA *)&rna_LineStyleGeometryModifier_PerlinNoise2D_seed}},
	"LineStyleGeometryModifier_PerlinNoise2D", NULL, NULL, 4, "Perlin Noise 2D",
	"Add two-dimensional Perlin noise to stroke backbone geometry",
	"*", 17,
	(PropertyRNA *)&rna_LineStyleGeometryModifier_PerlinNoise2D_name, (PropertyRNA *)&rna_LineStyleModifier_rna_properties,
	&RNA_LineStyleGeometryModifier,
	NULL,
	rna_LineStyle_geometry_modifier_refine,
	rna_LineStyle_geometry_modifier_path,
	NULL,
	NULL,
	NULL,
	NULL,
	{NULL, NULL}
};

/* Backbone Stretcher */
static EnumPropertyItem rna_LineStyleGeometryModifier_BackboneStretcher_type_items[14] = {
	{17, "2D_OFFSET", 442, "2D Offset", ""},
	{18, "2D_TRANSFORM", 442, "2D Transform", ""},
	{11, "BACKBONE_STRETCHER", 442, "Backbone Stretcher", ""},
	{6, "BEZIER_CURVE", 442, "Bezier Curve", ""},
	{16, "BLUEPRINT", 442, "Blueprint", ""},
	{15, "GUIDING_LINES", 442, "Guiding Lines", ""},
	{9, "PERLIN_NOISE_1D", 442, "Perlin Noise 1D", ""},
	{10, "PERLIN_NOISE_2D", 442, "Perlin Noise 2D", ""},
	{14, "POLYGONIZATION", 442, "Polygonization", ""},
	{5, "SAMPLING", 442, "Sampling", ""},
	{7, "SINUS_DISPLACEMENT", 442, "Sinus Displacement", ""},
	{8, "SPATIAL_NOISE", 442, "Spatial Noise", ""},
	{12, "TIP_REMOVER", 442, "Tip Remover", ""},
	{0, NULL, 0, NULL, NULL}
};

EnumPropertyRNA rna_LineStyleGeometryModifier_BackboneStretcher_type = {
	{(PropertyRNA *)&rna_LineStyleGeometryModifier_BackboneStretcher_name, NULL,
	-1, "type", 2, "Modifier Type",
	"Type of the modifier",
	0, "*",
	PROP_ENUM, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	LineStyleGeometryModifier_BackboneStretcher_type_get, NULL, NULL, NULL, NULL, NULL, rna_LineStyleGeometryModifier_BackboneStretcher_type_items, 13, 17
};

StringPropertyRNA rna_LineStyleGeometryModifier_BackboneStretcher_name = {
	{(PropertyRNA *)&rna_LineStyleGeometryModifier_BackboneStretcher_use, (PropertyRNA *)&rna_LineStyleGeometryModifier_BackboneStretcher_type,
	-1, "name", 262145, "Modifier Name",
	"Name of the modifier",
	0, "*",
	PROP_STRING, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {64, 0, 0}, 0,
	NULL, 385875968, NULL, NULL,
	0, -1, NULL},
	LineStyleGeometryModifier_BackboneStretcher_name_get, LineStyleGeometryModifier_BackboneStretcher_name_length, LineStyleGeometryModifier_BackboneStretcher_name_set, NULL, NULL, NULL, 64, ""
};

BoolPropertyRNA rna_LineStyleGeometryModifier_BackboneStretcher_use = {
	{(PropertyRNA *)&rna_LineStyleGeometryModifier_BackboneStretcher_expanded, (PropertyRNA *)&rna_LineStyleGeometryModifier_BackboneStretcher_name,
	-1, "use", 3, "Use",
	"Enable or disable this modifier during stroke rendering",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_LineStyle_update, 385875968, NULL, NULL,
	0, -1, NULL},
	LineStyleGeometryModifier_BackboneStretcher_use_get, LineStyleGeometryModifier_BackboneStretcher_use_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_LineStyleGeometryModifier_BackboneStretcher_expanded = {
	{(PropertyRNA *)&rna_LineStyleGeometryModifier_BackboneStretcher_backbone_length, (PropertyRNA *)&rna_LineStyleGeometryModifier_BackboneStretcher_use,
	-1, "expanded", 3, "Expanded",
	"True if the modifier tab is expanded",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	LineStyleGeometryModifier_BackboneStretcher_expanded_get, LineStyleGeometryModifier_BackboneStretcher_expanded_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

FloatPropertyRNA rna_LineStyleGeometryModifier_BackboneStretcher_backbone_length = {
	{NULL, (PropertyRNA *)&rna_LineStyleGeometryModifier_BackboneStretcher_expanded,
	-1, "backbone_length", 8195, "Backbone Length",
	"Amount of backbone stretching",
	0, "*",
	PROP_FLOAT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_LineStyle_update, 385875968, NULL, NULL,
	offsetof(LineStyleGeometryModifier_BackboneStretcher, backbone_length), 4, NULL},
	LineStyleGeometryModifier_BackboneStretcher_backbone_length_get, LineStyleGeometryModifier_BackboneStretcher_backbone_length_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, -10000.0f, 10000.0f, -FLT_MAX, FLT_MAX, 10.0f, 3, 0.0f, NULL
};

StructRNA RNA_LineStyleGeometryModifier_BackboneStretcher = {
	{(ContainerRNA *)&RNA_LineStyleGeometryModifier_TipRemover, (ContainerRNA *)&RNA_LineStyleGeometryModifier_PerlinNoise2D,
	NULL,
	{(PropertyRNA *)&rna_LineStyleGeometryModifier_BackboneStretcher_type, (PropertyRNA *)&rna_LineStyleGeometryModifier_BackboneStretcher_backbone_length}},
	"LineStyleGeometryModifier_BackboneStretcher", NULL, NULL, 4, "Backbone Stretcher",
	"Stretch the beginning and the end of stroke backbone",
	"*", 17,
	(PropertyRNA *)&rna_LineStyleGeometryModifier_BackboneStretcher_name, (PropertyRNA *)&rna_LineStyleModifier_rna_properties,
	&RNA_LineStyleGeometryModifier,
	NULL,
	rna_LineStyle_geometry_modifier_refine,
	rna_LineStyle_geometry_modifier_path,
	NULL,
	NULL,
	NULL,
	NULL,
	{NULL, NULL}
};

/* Tip Remover */
static EnumPropertyItem rna_LineStyleGeometryModifier_TipRemover_type_items[14] = {
	{17, "2D_OFFSET", 442, "2D Offset", ""},
	{18, "2D_TRANSFORM", 442, "2D Transform", ""},
	{11, "BACKBONE_STRETCHER", 442, "Backbone Stretcher", ""},
	{6, "BEZIER_CURVE", 442, "Bezier Curve", ""},
	{16, "BLUEPRINT", 442, "Blueprint", ""},
	{15, "GUIDING_LINES", 442, "Guiding Lines", ""},
	{9, "PERLIN_NOISE_1D", 442, "Perlin Noise 1D", ""},
	{10, "PERLIN_NOISE_2D", 442, "Perlin Noise 2D", ""},
	{14, "POLYGONIZATION", 442, "Polygonization", ""},
	{5, "SAMPLING", 442, "Sampling", ""},
	{7, "SINUS_DISPLACEMENT", 442, "Sinus Displacement", ""},
	{8, "SPATIAL_NOISE", 442, "Spatial Noise", ""},
	{12, "TIP_REMOVER", 442, "Tip Remover", ""},
	{0, NULL, 0, NULL, NULL}
};

EnumPropertyRNA rna_LineStyleGeometryModifier_TipRemover_type = {
	{(PropertyRNA *)&rna_LineStyleGeometryModifier_TipRemover_name, NULL,
	-1, "type", 2, "Modifier Type",
	"Type of the modifier",
	0, "*",
	PROP_ENUM, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	LineStyleGeometryModifier_TipRemover_type_get, NULL, NULL, NULL, NULL, NULL, rna_LineStyleGeometryModifier_TipRemover_type_items, 13, 17
};

StringPropertyRNA rna_LineStyleGeometryModifier_TipRemover_name = {
	{(PropertyRNA *)&rna_LineStyleGeometryModifier_TipRemover_use, (PropertyRNA *)&rna_LineStyleGeometryModifier_TipRemover_type,
	-1, "name", 262145, "Modifier Name",
	"Name of the modifier",
	0, "*",
	PROP_STRING, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {64, 0, 0}, 0,
	NULL, 385875968, NULL, NULL,
	0, -1, NULL},
	LineStyleGeometryModifier_TipRemover_name_get, LineStyleGeometryModifier_TipRemover_name_length, LineStyleGeometryModifier_TipRemover_name_set, NULL, NULL, NULL, 64, ""
};

BoolPropertyRNA rna_LineStyleGeometryModifier_TipRemover_use = {
	{(PropertyRNA *)&rna_LineStyleGeometryModifier_TipRemover_expanded, (PropertyRNA *)&rna_LineStyleGeometryModifier_TipRemover_name,
	-1, "use", 3, "Use",
	"Enable or disable this modifier during stroke rendering",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_LineStyle_update, 385875968, NULL, NULL,
	0, -1, NULL},
	LineStyleGeometryModifier_TipRemover_use_get, LineStyleGeometryModifier_TipRemover_use_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_LineStyleGeometryModifier_TipRemover_expanded = {
	{(PropertyRNA *)&rna_LineStyleGeometryModifier_TipRemover_tip_length, (PropertyRNA *)&rna_LineStyleGeometryModifier_TipRemover_use,
	-1, "expanded", 3, "Expanded",
	"True if the modifier tab is expanded",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	LineStyleGeometryModifier_TipRemover_expanded_get, LineStyleGeometryModifier_TipRemover_expanded_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

FloatPropertyRNA rna_LineStyleGeometryModifier_TipRemover_tip_length = {
	{NULL, (PropertyRNA *)&rna_LineStyleGeometryModifier_TipRemover_expanded,
	-1, "tip_length", 8195, "Tip Length",
	"Length of tips to be removed",
	0, "*",
	PROP_FLOAT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_LineStyle_update, 385875968, NULL, NULL,
	offsetof(LineStyleGeometryModifier_TipRemover, tip_length), 4, NULL},
	LineStyleGeometryModifier_TipRemover_tip_length_get, LineStyleGeometryModifier_TipRemover_tip_length_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, -10000.0f, 10000.0f, -FLT_MAX, FLT_MAX, 10.0f, 3, 0.0f, NULL
};

StructRNA RNA_LineStyleGeometryModifier_TipRemover = {
	{(ContainerRNA *)&RNA_LineStyleGeometryModifier_Polygonalization, (ContainerRNA *)&RNA_LineStyleGeometryModifier_BackboneStretcher,
	NULL,
	{(PropertyRNA *)&rna_LineStyleGeometryModifier_TipRemover_type, (PropertyRNA *)&rna_LineStyleGeometryModifier_TipRemover_tip_length}},
	"LineStyleGeometryModifier_TipRemover", NULL, NULL, 4, "Tip Remover",
	"Remove a piece of stroke at the beginning and the end of stroke backbone",
	"*", 17,
	(PropertyRNA *)&rna_LineStyleGeometryModifier_TipRemover_name, (PropertyRNA *)&rna_LineStyleModifier_rna_properties,
	&RNA_LineStyleGeometryModifier,
	NULL,
	rna_LineStyle_geometry_modifier_refine,
	rna_LineStyle_geometry_modifier_path,
	NULL,
	NULL,
	NULL,
	NULL,
	{NULL, NULL}
};

/* Polygonalization */
static EnumPropertyItem rna_LineStyleGeometryModifier_Polygonalization_type_items[14] = {
	{17, "2D_OFFSET", 442, "2D Offset", ""},
	{18, "2D_TRANSFORM", 442, "2D Transform", ""},
	{11, "BACKBONE_STRETCHER", 442, "Backbone Stretcher", ""},
	{6, "BEZIER_CURVE", 442, "Bezier Curve", ""},
	{16, "BLUEPRINT", 442, "Blueprint", ""},
	{15, "GUIDING_LINES", 442, "Guiding Lines", ""},
	{9, "PERLIN_NOISE_1D", 442, "Perlin Noise 1D", ""},
	{10, "PERLIN_NOISE_2D", 442, "Perlin Noise 2D", ""},
	{14, "POLYGONIZATION", 442, "Polygonization", ""},
	{5, "SAMPLING", 442, "Sampling", ""},
	{7, "SINUS_DISPLACEMENT", 442, "Sinus Displacement", ""},
	{8, "SPATIAL_NOISE", 442, "Spatial Noise", ""},
	{12, "TIP_REMOVER", 442, "Tip Remover", ""},
	{0, NULL, 0, NULL, NULL}
};

EnumPropertyRNA rna_LineStyleGeometryModifier_Polygonalization_type = {
	{(PropertyRNA *)&rna_LineStyleGeometryModifier_Polygonalization_name, NULL,
	-1, "type", 2, "Modifier Type",
	"Type of the modifier",
	0, "*",
	PROP_ENUM, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	LineStyleGeometryModifier_Polygonalization_type_get, NULL, NULL, NULL, NULL, NULL, rna_LineStyleGeometryModifier_Polygonalization_type_items, 13, 17
};

StringPropertyRNA rna_LineStyleGeometryModifier_Polygonalization_name = {
	{(PropertyRNA *)&rna_LineStyleGeometryModifier_Polygonalization_use, (PropertyRNA *)&rna_LineStyleGeometryModifier_Polygonalization_type,
	-1, "name", 262145, "Modifier Name",
	"Name of the modifier",
	0, "*",
	PROP_STRING, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {64, 0, 0}, 0,
	NULL, 385875968, NULL, NULL,
	0, -1, NULL},
	LineStyleGeometryModifier_Polygonalization_name_get, LineStyleGeometryModifier_Polygonalization_name_length, LineStyleGeometryModifier_Polygonalization_name_set, NULL, NULL, NULL, 64, ""
};

BoolPropertyRNA rna_LineStyleGeometryModifier_Polygonalization_use = {
	{(PropertyRNA *)&rna_LineStyleGeometryModifier_Polygonalization_expanded, (PropertyRNA *)&rna_LineStyleGeometryModifier_Polygonalization_name,
	-1, "use", 3, "Use",
	"Enable or disable this modifier during stroke rendering",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_LineStyle_update, 385875968, NULL, NULL,
	0, -1, NULL},
	LineStyleGeometryModifier_Polygonalization_use_get, LineStyleGeometryModifier_Polygonalization_use_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_LineStyleGeometryModifier_Polygonalization_expanded = {
	{(PropertyRNA *)&rna_LineStyleGeometryModifier_Polygonalization_error, (PropertyRNA *)&rna_LineStyleGeometryModifier_Polygonalization_use,
	-1, "expanded", 3, "Expanded",
	"True if the modifier tab is expanded",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	LineStyleGeometryModifier_Polygonalization_expanded_get, LineStyleGeometryModifier_Polygonalization_expanded_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

FloatPropertyRNA rna_LineStyleGeometryModifier_Polygonalization_error = {
	{NULL, (PropertyRNA *)&rna_LineStyleGeometryModifier_Polygonalization_expanded,
	-1, "error", 8195, "Error",
	"Maximum distance between the original stroke and its polygonal approximation",
	0, "*",
	PROP_FLOAT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_LineStyle_update, 385875968, NULL, NULL,
	offsetof(LineStyleGeometryModifier_Polygonalization, error), 4, NULL},
	LineStyleGeometryModifier_Polygonalization_error_get, LineStyleGeometryModifier_Polygonalization_error_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, -10000.0f, 10000.0f, -FLT_MAX, FLT_MAX, 10.0f, 3, 0.0f, NULL
};

StructRNA RNA_LineStyleGeometryModifier_Polygonalization = {
	{(ContainerRNA *)&RNA_LineStyleGeometryModifier_GuidingLines, (ContainerRNA *)&RNA_LineStyleGeometryModifier_TipRemover,
	NULL,
	{(PropertyRNA *)&rna_LineStyleGeometryModifier_Polygonalization_type, (PropertyRNA *)&rna_LineStyleGeometryModifier_Polygonalization_error}},
	"LineStyleGeometryModifier_Polygonalization", NULL, NULL, 4, "Polygonalization",
	"Modify the stroke geometry so that it looks more \'polygonal\'",
	"*", 17,
	(PropertyRNA *)&rna_LineStyleGeometryModifier_Polygonalization_name, (PropertyRNA *)&rna_LineStyleModifier_rna_properties,
	&RNA_LineStyleGeometryModifier,
	NULL,
	rna_LineStyle_geometry_modifier_refine,
	rna_LineStyle_geometry_modifier_path,
	NULL,
	NULL,
	NULL,
	NULL,
	{NULL, NULL}
};

/* Guiding Lines */
static EnumPropertyItem rna_LineStyleGeometryModifier_GuidingLines_type_items[14] = {
	{17, "2D_OFFSET", 442, "2D Offset", ""},
	{18, "2D_TRANSFORM", 442, "2D Transform", ""},
	{11, "BACKBONE_STRETCHER", 442, "Backbone Stretcher", ""},
	{6, "BEZIER_CURVE", 442, "Bezier Curve", ""},
	{16, "BLUEPRINT", 442, "Blueprint", ""},
	{15, "GUIDING_LINES", 442, "Guiding Lines", ""},
	{9, "PERLIN_NOISE_1D", 442, "Perlin Noise 1D", ""},
	{10, "PERLIN_NOISE_2D", 442, "Perlin Noise 2D", ""},
	{14, "POLYGONIZATION", 442, "Polygonization", ""},
	{5, "SAMPLING", 442, "Sampling", ""},
	{7, "SINUS_DISPLACEMENT", 442, "Sinus Displacement", ""},
	{8, "SPATIAL_NOISE", 442, "Spatial Noise", ""},
	{12, "TIP_REMOVER", 442, "Tip Remover", ""},
	{0, NULL, 0, NULL, NULL}
};

EnumPropertyRNA rna_LineStyleGeometryModifier_GuidingLines_type = {
	{(PropertyRNA *)&rna_LineStyleGeometryModifier_GuidingLines_name, NULL,
	-1, "type", 2, "Modifier Type",
	"Type of the modifier",
	0, "*",
	PROP_ENUM, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	LineStyleGeometryModifier_GuidingLines_type_get, NULL, NULL, NULL, NULL, NULL, rna_LineStyleGeometryModifier_GuidingLines_type_items, 13, 17
};

StringPropertyRNA rna_LineStyleGeometryModifier_GuidingLines_name = {
	{(PropertyRNA *)&rna_LineStyleGeometryModifier_GuidingLines_use, (PropertyRNA *)&rna_LineStyleGeometryModifier_GuidingLines_type,
	-1, "name", 262145, "Modifier Name",
	"Name of the modifier",
	0, "*",
	PROP_STRING, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {64, 0, 0}, 0,
	NULL, 385875968, NULL, NULL,
	0, -1, NULL},
	LineStyleGeometryModifier_GuidingLines_name_get, LineStyleGeometryModifier_GuidingLines_name_length, LineStyleGeometryModifier_GuidingLines_name_set, NULL, NULL, NULL, 64, ""
};

BoolPropertyRNA rna_LineStyleGeometryModifier_GuidingLines_use = {
	{(PropertyRNA *)&rna_LineStyleGeometryModifier_GuidingLines_expanded, (PropertyRNA *)&rna_LineStyleGeometryModifier_GuidingLines_name,
	-1, "use", 3, "Use",
	"Enable or disable this modifier during stroke rendering",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_LineStyle_update, 385875968, NULL, NULL,
	0, -1, NULL},
	LineStyleGeometryModifier_GuidingLines_use_get, LineStyleGeometryModifier_GuidingLines_use_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_LineStyleGeometryModifier_GuidingLines_expanded = {
	{(PropertyRNA *)&rna_LineStyleGeometryModifier_GuidingLines_offset, (PropertyRNA *)&rna_LineStyleGeometryModifier_GuidingLines_use,
	-1, "expanded", 3, "Expanded",
	"True if the modifier tab is expanded",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	LineStyleGeometryModifier_GuidingLines_expanded_get, LineStyleGeometryModifier_GuidingLines_expanded_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

FloatPropertyRNA rna_LineStyleGeometryModifier_GuidingLines_offset = {
	{NULL, (PropertyRNA *)&rna_LineStyleGeometryModifier_GuidingLines_expanded,
	-1, "offset", 8195, "Offset",
	"Displacement that is applied to the main direction line along its normal",
	0, "*",
	PROP_FLOAT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_LineStyle_update, 385875968, NULL, NULL,
	offsetof(LineStyleGeometryModifier_GuidingLines, offset), 4, NULL},
	LineStyleGeometryModifier_GuidingLines_offset_get, LineStyleGeometryModifier_GuidingLines_offset_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, -10000.0f, 10000.0f, -FLT_MAX, FLT_MAX, 10.0f, 3, 0.0f, NULL
};

StructRNA RNA_LineStyleGeometryModifier_GuidingLines = {
	{(ContainerRNA *)&RNA_LineStyleGeometryModifier_Blueprint, (ContainerRNA *)&RNA_LineStyleGeometryModifier_Polygonalization,
	NULL,
	{(PropertyRNA *)&rna_LineStyleGeometryModifier_GuidingLines_type, (PropertyRNA *)&rna_LineStyleGeometryModifier_GuidingLines_offset}},
	"LineStyleGeometryModifier_GuidingLines", NULL, NULL, 4, "Guiding Lines",
	"Modify the stroke geometry so that it corresponds to its main direction line",
	"*", 17,
	(PropertyRNA *)&rna_LineStyleGeometryModifier_GuidingLines_name, (PropertyRNA *)&rna_LineStyleModifier_rna_properties,
	&RNA_LineStyleGeometryModifier,
	NULL,
	rna_LineStyle_geometry_modifier_refine,
	rna_LineStyle_geometry_modifier_path,
	NULL,
	NULL,
	NULL,
	NULL,
	{NULL, NULL}
};

/* Blueprint */
static EnumPropertyItem rna_LineStyleGeometryModifier_Blueprint_type_items[14] = {
	{17, "2D_OFFSET", 442, "2D Offset", ""},
	{18, "2D_TRANSFORM", 442, "2D Transform", ""},
	{11, "BACKBONE_STRETCHER", 442, "Backbone Stretcher", ""},
	{6, "BEZIER_CURVE", 442, "Bezier Curve", ""},
	{16, "BLUEPRINT", 442, "Blueprint", ""},
	{15, "GUIDING_LINES", 442, "Guiding Lines", ""},
	{9, "PERLIN_NOISE_1D", 442, "Perlin Noise 1D", ""},
	{10, "PERLIN_NOISE_2D", 442, "Perlin Noise 2D", ""},
	{14, "POLYGONIZATION", 442, "Polygonization", ""},
	{5, "SAMPLING", 442, "Sampling", ""},
	{7, "SINUS_DISPLACEMENT", 442, "Sinus Displacement", ""},
	{8, "SPATIAL_NOISE", 442, "Spatial Noise", ""},
	{12, "TIP_REMOVER", 442, "Tip Remover", ""},
	{0, NULL, 0, NULL, NULL}
};

EnumPropertyRNA rna_LineStyleGeometryModifier_Blueprint_type = {
	{(PropertyRNA *)&rna_LineStyleGeometryModifier_Blueprint_name, NULL,
	-1, "type", 2, "Modifier Type",
	"Type of the modifier",
	0, "*",
	PROP_ENUM, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	LineStyleGeometryModifier_Blueprint_type_get, NULL, NULL, NULL, NULL, NULL, rna_LineStyleGeometryModifier_Blueprint_type_items, 13, 17
};

StringPropertyRNA rna_LineStyleGeometryModifier_Blueprint_name = {
	{(PropertyRNA *)&rna_LineStyleGeometryModifier_Blueprint_use, (PropertyRNA *)&rna_LineStyleGeometryModifier_Blueprint_type,
	-1, "name", 262145, "Modifier Name",
	"Name of the modifier",
	0, "*",
	PROP_STRING, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {64, 0, 0}, 0,
	NULL, 385875968, NULL, NULL,
	0, -1, NULL},
	LineStyleGeometryModifier_Blueprint_name_get, LineStyleGeometryModifier_Blueprint_name_length, LineStyleGeometryModifier_Blueprint_name_set, NULL, NULL, NULL, 64, ""
};

BoolPropertyRNA rna_LineStyleGeometryModifier_Blueprint_use = {
	{(PropertyRNA *)&rna_LineStyleGeometryModifier_Blueprint_expanded, (PropertyRNA *)&rna_LineStyleGeometryModifier_Blueprint_name,
	-1, "use", 3, "Use",
	"Enable or disable this modifier during stroke rendering",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_LineStyle_update, 385875968, NULL, NULL,
	0, -1, NULL},
	LineStyleGeometryModifier_Blueprint_use_get, LineStyleGeometryModifier_Blueprint_use_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_LineStyleGeometryModifier_Blueprint_expanded = {
	{(PropertyRNA *)&rna_LineStyleGeometryModifier_Blueprint_shape, (PropertyRNA *)&rna_LineStyleGeometryModifier_Blueprint_use,
	-1, "expanded", 3, "Expanded",
	"True if the modifier tab is expanded",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	LineStyleGeometryModifier_Blueprint_expanded_get, LineStyleGeometryModifier_Blueprint_expanded_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

static EnumPropertyItem rna_LineStyleGeometryModifier_Blueprint_shape_items[4] = {
	{1, "CIRCLES", 0, "Circles", "Draw a blueprint using circular contour strokes"},
	{2, "ELLIPSES", 0, "Ellipses", "Draw a blueprint using elliptic contour strokes"},
	{4, "SQUARES", 0, "Squares", "Draw a blueprint using square contour strokes"},
	{0, NULL, 0, NULL, NULL}
};

EnumPropertyRNA rna_LineStyleGeometryModifier_Blueprint_shape = {
	{(PropertyRNA *)&rna_LineStyleGeometryModifier_Blueprint_rounds, (PropertyRNA *)&rna_LineStyleGeometryModifier_Blueprint_expanded,
	-1, "shape", 3, "Shape",
	"Select the shape of blueprint contour strokes",
	0, "*",
	PROP_ENUM, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_LineStyle_update, 385875968, NULL, NULL,
	0, -1, NULL},
	LineStyleGeometryModifier_Blueprint_shape_get, LineStyleGeometryModifier_Blueprint_shape_set, NULL, NULL, NULL, NULL, rna_LineStyleGeometryModifier_Blueprint_shape_items, 3, 1
};

IntPropertyRNA rna_LineStyleGeometryModifier_Blueprint_rounds = {
	{(PropertyRNA *)&rna_LineStyleGeometryModifier_Blueprint_backbone_length, (PropertyRNA *)&rna_LineStyleGeometryModifier_Blueprint_shape,
	-1, "rounds", 8195, "Rounds",
	"Number of rounds in contour strokes",
	0, "*",
	PROP_INT, PROP_UNSIGNED | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_LineStyle_update, 385875968, NULL, NULL,
	offsetof(LineStyleGeometryModifier_Blueprint, rounds), 0, NULL},
	LineStyleGeometryModifier_Blueprint_rounds_get, LineStyleGeometryModifier_Blueprint_rounds_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL,
	1, 1000, 1, 1000, 1, 0, NULL
};

FloatPropertyRNA rna_LineStyleGeometryModifier_Blueprint_backbone_length = {
	{(PropertyRNA *)&rna_LineStyleGeometryModifier_Blueprint_random_radius, (PropertyRNA *)&rna_LineStyleGeometryModifier_Blueprint_rounds,
	-1, "backbone_length", 8195, "Backbone Length",
	"Amount of backbone stretching",
	0, "*",
	PROP_FLOAT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_LineStyle_update, 385875968, NULL, NULL,
	offsetof(LineStyleGeometryModifier_Blueprint, backbone_length), 4, NULL},
	LineStyleGeometryModifier_Blueprint_backbone_length_get, LineStyleGeometryModifier_Blueprint_backbone_length_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, -10000.0f, 10000.0f, -FLT_MAX, FLT_MAX, 10.0f, 3, 0.0f, NULL
};

IntPropertyRNA rna_LineStyleGeometryModifier_Blueprint_random_radius = {
	{(PropertyRNA *)&rna_LineStyleGeometryModifier_Blueprint_random_center, (PropertyRNA *)&rna_LineStyleGeometryModifier_Blueprint_backbone_length,
	-1, "random_radius", 8195, "Random Radius",
	"Randomness of the radius",
	0, "*",
	PROP_INT, PROP_UNSIGNED | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_LineStyle_update, 385875968, NULL, NULL,
	offsetof(LineStyleGeometryModifier_Blueprint, random_radius), 0, NULL},
	LineStyleGeometryModifier_Blueprint_random_radius_get, LineStyleGeometryModifier_Blueprint_random_radius_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL,
	0, 10000, 0, INT_MAX, 1, 0, NULL
};

IntPropertyRNA rna_LineStyleGeometryModifier_Blueprint_random_center = {
	{(PropertyRNA *)&rna_LineStyleGeometryModifier_Blueprint_random_backbone, (PropertyRNA *)&rna_LineStyleGeometryModifier_Blueprint_random_radius,
	-1, "random_center", 8195, "Random Center",
	"Randomness of the center",
	0, "*",
	PROP_INT, PROP_UNSIGNED | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_LineStyle_update, 385875968, NULL, NULL,
	offsetof(LineStyleGeometryModifier_Blueprint, random_center), 0, NULL},
	LineStyleGeometryModifier_Blueprint_random_center_get, LineStyleGeometryModifier_Blueprint_random_center_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL,
	0, 10000, 0, INT_MAX, 1, 0, NULL
};

IntPropertyRNA rna_LineStyleGeometryModifier_Blueprint_random_backbone = {
	{NULL, (PropertyRNA *)&rna_LineStyleGeometryModifier_Blueprint_random_center,
	-1, "random_backbone", 8195, "Random Backbone",
	"Randomness of the backbone stretching",
	0, "*",
	PROP_INT, PROP_UNSIGNED | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_LineStyle_update, 385875968, NULL, NULL,
	offsetof(LineStyleGeometryModifier_Blueprint, random_backbone), 0, NULL},
	LineStyleGeometryModifier_Blueprint_random_backbone_get, LineStyleGeometryModifier_Blueprint_random_backbone_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL,
	0, 10000, 0, INT_MAX, 1, 0, NULL
};

StructRNA RNA_LineStyleGeometryModifier_Blueprint = {
	{(ContainerRNA *)&RNA_LineStyleGeometryModifier_2DOffset, (ContainerRNA *)&RNA_LineStyleGeometryModifier_GuidingLines,
	NULL,
	{(PropertyRNA *)&rna_LineStyleGeometryModifier_Blueprint_type, (PropertyRNA *)&rna_LineStyleGeometryModifier_Blueprint_random_backbone}},
	"LineStyleGeometryModifier_Blueprint", NULL, NULL, 4, "Blueprint",
	"Produce a blueprint using circular, elliptic, and square contour strokes",
	"*", 17,
	(PropertyRNA *)&rna_LineStyleGeometryModifier_Blueprint_name, (PropertyRNA *)&rna_LineStyleModifier_rna_properties,
	&RNA_LineStyleGeometryModifier,
	NULL,
	rna_LineStyle_geometry_modifier_refine,
	rna_LineStyle_geometry_modifier_path,
	NULL,
	NULL,
	NULL,
	NULL,
	{NULL, NULL}
};

/* 2D Offset */
static EnumPropertyItem rna_LineStyleGeometryModifier_2DOffset_type_items[14] = {
	{17, "2D_OFFSET", 442, "2D Offset", ""},
	{18, "2D_TRANSFORM", 442, "2D Transform", ""},
	{11, "BACKBONE_STRETCHER", 442, "Backbone Stretcher", ""},
	{6, "BEZIER_CURVE", 442, "Bezier Curve", ""},
	{16, "BLUEPRINT", 442, "Blueprint", ""},
	{15, "GUIDING_LINES", 442, "Guiding Lines", ""},
	{9, "PERLIN_NOISE_1D", 442, "Perlin Noise 1D", ""},
	{10, "PERLIN_NOISE_2D", 442, "Perlin Noise 2D", ""},
	{14, "POLYGONIZATION", 442, "Polygonization", ""},
	{5, "SAMPLING", 442, "Sampling", ""},
	{7, "SINUS_DISPLACEMENT", 442, "Sinus Displacement", ""},
	{8, "SPATIAL_NOISE", 442, "Spatial Noise", ""},
	{12, "TIP_REMOVER", 442, "Tip Remover", ""},
	{0, NULL, 0, NULL, NULL}
};

EnumPropertyRNA rna_LineStyleGeometryModifier_2DOffset_type = {
	{(PropertyRNA *)&rna_LineStyleGeometryModifier_2DOffset_name, NULL,
	-1, "type", 2, "Modifier Type",
	"Type of the modifier",
	0, "*",
	PROP_ENUM, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	LineStyleGeometryModifier_2DOffset_type_get, NULL, NULL, NULL, NULL, NULL, rna_LineStyleGeometryModifier_2DOffset_type_items, 13, 17
};

StringPropertyRNA rna_LineStyleGeometryModifier_2DOffset_name = {
	{(PropertyRNA *)&rna_LineStyleGeometryModifier_2DOffset_use, (PropertyRNA *)&rna_LineStyleGeometryModifier_2DOffset_type,
	-1, "name", 262145, "Modifier Name",
	"Name of the modifier",
	0, "*",
	PROP_STRING, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {64, 0, 0}, 0,
	NULL, 385875968, NULL, NULL,
	0, -1, NULL},
	LineStyleGeometryModifier_2DOffset_name_get, LineStyleGeometryModifier_2DOffset_name_length, LineStyleGeometryModifier_2DOffset_name_set, NULL, NULL, NULL, 64, ""
};

BoolPropertyRNA rna_LineStyleGeometryModifier_2DOffset_use = {
	{(PropertyRNA *)&rna_LineStyleGeometryModifier_2DOffset_expanded, (PropertyRNA *)&rna_LineStyleGeometryModifier_2DOffset_name,
	-1, "use", 3, "Use",
	"Enable or disable this modifier during stroke rendering",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_LineStyle_update, 385875968, NULL, NULL,
	0, -1, NULL},
	LineStyleGeometryModifier_2DOffset_use_get, LineStyleGeometryModifier_2DOffset_use_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_LineStyleGeometryModifier_2DOffset_expanded = {
	{(PropertyRNA *)&rna_LineStyleGeometryModifier_2DOffset_start, (PropertyRNA *)&rna_LineStyleGeometryModifier_2DOffset_use,
	-1, "expanded", 3, "Expanded",
	"True if the modifier tab is expanded",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	LineStyleGeometryModifier_2DOffset_expanded_get, LineStyleGeometryModifier_2DOffset_expanded_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

FloatPropertyRNA rna_LineStyleGeometryModifier_2DOffset_start = {
	{(PropertyRNA *)&rna_LineStyleGeometryModifier_2DOffset_end, (PropertyRNA *)&rna_LineStyleGeometryModifier_2DOffset_expanded,
	-1, "start", 8195, "Start",
	"Displacement that is applied from the beginning of the stroke",
	0, "*",
	PROP_FLOAT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_LineStyle_update, 385875968, NULL, NULL,
	offsetof(LineStyleGeometryModifier_2DOffset, start), 4, NULL},
	LineStyleGeometryModifier_2DOffset_start_get, LineStyleGeometryModifier_2DOffset_start_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, -10000.0f, 10000.0f, -FLT_MAX, FLT_MAX, 10.0f, 3, 0.0f, NULL
};

FloatPropertyRNA rna_LineStyleGeometryModifier_2DOffset_end = {
	{(PropertyRNA *)&rna_LineStyleGeometryModifier_2DOffset_x, (PropertyRNA *)&rna_LineStyleGeometryModifier_2DOffset_start,
	-1, "end", 8195, "End",
	"Displacement that is applied from the end of the stroke",
	0, "*",
	PROP_FLOAT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_LineStyle_update, 385875968, NULL, NULL,
	offsetof(LineStyleGeometryModifier_2DOffset, end), 4, NULL},
	LineStyleGeometryModifier_2DOffset_end_get, LineStyleGeometryModifier_2DOffset_end_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, -10000.0f, 10000.0f, -FLT_MAX, FLT_MAX, 10.0f, 3, 0.0f, NULL
};

FloatPropertyRNA rna_LineStyleGeometryModifier_2DOffset_x = {
	{(PropertyRNA *)&rna_LineStyleGeometryModifier_2DOffset_y, (PropertyRNA *)&rna_LineStyleGeometryModifier_2DOffset_end,
	-1, "x", 8195, "X",
	"Displacement that is applied to the X coordinates of stroke vertices",
	0, "*",
	PROP_FLOAT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_LineStyle_update, 385875968, NULL, NULL,
	offsetof(LineStyleGeometryModifier_2DOffset, x), 4, NULL},
	LineStyleGeometryModifier_2DOffset_x_get, LineStyleGeometryModifier_2DOffset_x_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, -10000.0f, 10000.0f, -FLT_MAX, FLT_MAX, 10.0f, 3, 0.0f, NULL
};

FloatPropertyRNA rna_LineStyleGeometryModifier_2DOffset_y = {
	{NULL, (PropertyRNA *)&rna_LineStyleGeometryModifier_2DOffset_x,
	-1, "y", 8195, "Y",
	"Displacement that is applied to the Y coordinates of stroke vertices",
	0, "*",
	PROP_FLOAT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_LineStyle_update, 385875968, NULL, NULL,
	offsetof(LineStyleGeometryModifier_2DOffset, y), 4, NULL},
	LineStyleGeometryModifier_2DOffset_y_get, LineStyleGeometryModifier_2DOffset_y_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, -10000.0f, 10000.0f, -FLT_MAX, FLT_MAX, 10.0f, 3, 0.0f, NULL
};

StructRNA RNA_LineStyleGeometryModifier_2DOffset = {
	{(ContainerRNA *)&RNA_LineStyleGeometryModifier_2DTransform, (ContainerRNA *)&RNA_LineStyleGeometryModifier_Blueprint,
	NULL,
	{(PropertyRNA *)&rna_LineStyleGeometryModifier_2DOffset_type, (PropertyRNA *)&rna_LineStyleGeometryModifier_2DOffset_y}},
	"LineStyleGeometryModifier_2DOffset", NULL, NULL, 4, "2D Offset",
	"Add two-dimensional offsets to stroke backbone geometry",
	"*", 17,
	(PropertyRNA *)&rna_LineStyleGeometryModifier_2DOffset_name, (PropertyRNA *)&rna_LineStyleModifier_rna_properties,
	&RNA_LineStyleGeometryModifier,
	NULL,
	rna_LineStyle_geometry_modifier_refine,
	rna_LineStyle_geometry_modifier_path,
	NULL,
	NULL,
	NULL,
	NULL,
	{NULL, NULL}
};

/* 2D Transform */
static EnumPropertyItem rna_LineStyleGeometryModifier_2DTransform_type_items[14] = {
	{17, "2D_OFFSET", 442, "2D Offset", ""},
	{18, "2D_TRANSFORM", 442, "2D Transform", ""},
	{11, "BACKBONE_STRETCHER", 442, "Backbone Stretcher", ""},
	{6, "BEZIER_CURVE", 442, "Bezier Curve", ""},
	{16, "BLUEPRINT", 442, "Blueprint", ""},
	{15, "GUIDING_LINES", 442, "Guiding Lines", ""},
	{9, "PERLIN_NOISE_1D", 442, "Perlin Noise 1D", ""},
	{10, "PERLIN_NOISE_2D", 442, "Perlin Noise 2D", ""},
	{14, "POLYGONIZATION", 442, "Polygonization", ""},
	{5, "SAMPLING", 442, "Sampling", ""},
	{7, "SINUS_DISPLACEMENT", 442, "Sinus Displacement", ""},
	{8, "SPATIAL_NOISE", 442, "Spatial Noise", ""},
	{12, "TIP_REMOVER", 442, "Tip Remover", ""},
	{0, NULL, 0, NULL, NULL}
};

EnumPropertyRNA rna_LineStyleGeometryModifier_2DTransform_type = {
	{(PropertyRNA *)&rna_LineStyleGeometryModifier_2DTransform_name, NULL,
	-1, "type", 2, "Modifier Type",
	"Type of the modifier",
	0, "*",
	PROP_ENUM, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	LineStyleGeometryModifier_2DTransform_type_get, NULL, NULL, NULL, NULL, NULL, rna_LineStyleGeometryModifier_2DTransform_type_items, 13, 17
};

StringPropertyRNA rna_LineStyleGeometryModifier_2DTransform_name = {
	{(PropertyRNA *)&rna_LineStyleGeometryModifier_2DTransform_use, (PropertyRNA *)&rna_LineStyleGeometryModifier_2DTransform_type,
	-1, "name", 262145, "Modifier Name",
	"Name of the modifier",
	0, "*",
	PROP_STRING, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {64, 0, 0}, 0,
	NULL, 385875968, NULL, NULL,
	0, -1, NULL},
	LineStyleGeometryModifier_2DTransform_name_get, LineStyleGeometryModifier_2DTransform_name_length, LineStyleGeometryModifier_2DTransform_name_set, NULL, NULL, NULL, 64, ""
};

BoolPropertyRNA rna_LineStyleGeometryModifier_2DTransform_use = {
	{(PropertyRNA *)&rna_LineStyleGeometryModifier_2DTransform_expanded, (PropertyRNA *)&rna_LineStyleGeometryModifier_2DTransform_name,
	-1, "use", 3, "Use",
	"Enable or disable this modifier during stroke rendering",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_LineStyle_update, 385875968, NULL, NULL,
	0, -1, NULL},
	LineStyleGeometryModifier_2DTransform_use_get, LineStyleGeometryModifier_2DTransform_use_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_LineStyleGeometryModifier_2DTransform_expanded = {
	{(PropertyRNA *)&rna_LineStyleGeometryModifier_2DTransform_pivot, (PropertyRNA *)&rna_LineStyleGeometryModifier_2DTransform_use,
	-1, "expanded", 3, "Expanded",
	"True if the modifier tab is expanded",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	LineStyleGeometryModifier_2DTransform_expanded_get, LineStyleGeometryModifier_2DTransform_expanded_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

static EnumPropertyItem rna_LineStyleGeometryModifier_2DTransform_pivot_items[6] = {
	{1, "CENTER", 0, "Stroke Center", ""},
	{2, "START", 0, "Stroke Start", ""},
	{3, "END", 0, "Stroke End", ""},
	{4, "PARAM", 0, "Stroke Point Parameter", ""},
	{5, "ABSOLUTE", 0, "Absolute 2D Point", ""},
	{0, NULL, 0, NULL, NULL}
};

EnumPropertyRNA rna_LineStyleGeometryModifier_2DTransform_pivot = {
	{(PropertyRNA *)&rna_LineStyleGeometryModifier_2DTransform_scale_x, (PropertyRNA *)&rna_LineStyleGeometryModifier_2DTransform_expanded,
	-1, "pivot", 3, "Pivot",
	"Pivot of scaling and rotation operations",
	0, "*",
	PROP_ENUM, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_LineStyle_update, 385875968, NULL, NULL,
	0, -1, NULL},
	LineStyleGeometryModifier_2DTransform_pivot_get, LineStyleGeometryModifier_2DTransform_pivot_set, NULL, NULL, NULL, NULL, rna_LineStyleGeometryModifier_2DTransform_pivot_items, 5, 1
};

FloatPropertyRNA rna_LineStyleGeometryModifier_2DTransform_scale_x = {
	{(PropertyRNA *)&rna_LineStyleGeometryModifier_2DTransform_scale_y, (PropertyRNA *)&rna_LineStyleGeometryModifier_2DTransform_pivot,
	-1, "scale_x", 67117059, "Scale X",
	"Scaling factor that is applied along the X axis",
	0, "*",
	PROP_FLOAT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_LineStyle_update, 385875968, NULL, NULL,
	offsetof(LineStyleGeometryModifier_2DTransform, scale_x), 4, NULL},
	LineStyleGeometryModifier_2DTransform_scale_x_get, LineStyleGeometryModifier_2DTransform_scale_x_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, -10000.0f, 10000.0f, -FLT_MAX, FLT_MAX, 10.0f, 3, 0.0f, NULL
};

FloatPropertyRNA rna_LineStyleGeometryModifier_2DTransform_scale_y = {
	{(PropertyRNA *)&rna_LineStyleGeometryModifier_2DTransform_angle, (PropertyRNA *)&rna_LineStyleGeometryModifier_2DTransform_scale_x,
	-1, "scale_y", 67117059, "Scale Y",
	"Scaling factor that is applied along the Y axis",
	0, "*",
	PROP_FLOAT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_LineStyle_update, 385875968, NULL, NULL,
	offsetof(LineStyleGeometryModifier_2DTransform, scale_y), 4, NULL},
	LineStyleGeometryModifier_2DTransform_scale_y_get, LineStyleGeometryModifier_2DTransform_scale_y_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, -10000.0f, 10000.0f, -FLT_MAX, FLT_MAX, 10.0f, 3, 0.0f, NULL
};

FloatPropertyRNA rna_LineStyleGeometryModifier_2DTransform_angle = {
	{(PropertyRNA *)&rna_LineStyleGeometryModifier_2DTransform_pivot_u, (PropertyRNA *)&rna_LineStyleGeometryModifier_2DTransform_scale_y,
	-1, "angle", 8195, "Rotation Angle",
	"Rotation angle",
	0, "*",
	PROP_FLOAT, PROP_ANGLE | PROP_UNIT_ROTATION, NULL, 0, {0, 0, 0}, 0,
	rna_LineStyle_update, 385875968, NULL, NULL,
	offsetof(LineStyleGeometryModifier_2DTransform, angle), 4, NULL},
	LineStyleGeometryModifier_2DTransform_angle_get, LineStyleGeometryModifier_2DTransform_angle_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, -10000.0f, 10000.0f, -FLT_MAX, FLT_MAX, 10.0f, 3, 0.0f, NULL
};

FloatPropertyRNA rna_LineStyleGeometryModifier_2DTransform_pivot_u = {
	{(PropertyRNA *)&rna_LineStyleGeometryModifier_2DTransform_pivot_x, (PropertyRNA *)&rna_LineStyleGeometryModifier_2DTransform_angle,
	-1, "pivot_u", 8195, "Stroke Point Parameter",
	"Pivot in terms of the stroke point parameter u (0 <= u <= 1)",
	0, "*",
	PROP_FLOAT, PROP_FACTOR | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_LineStyle_update, 385875968, NULL, NULL,
	offsetof(LineStyleGeometryModifier_2DTransform, pivot_u), 4, NULL},
	LineStyleGeometryModifier_2DTransform_pivot_u_get, LineStyleGeometryModifier_2DTransform_pivot_u_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 1.0f, 0.0f, 1.0f, 10.0f, 3, 0.0f, NULL
};

FloatPropertyRNA rna_LineStyleGeometryModifier_2DTransform_pivot_x = {
	{(PropertyRNA *)&rna_LineStyleGeometryModifier_2DTransform_pivot_y, (PropertyRNA *)&rna_LineStyleGeometryModifier_2DTransform_pivot_u,
	-1, "pivot_x", 8195, "Pivot X",
	"2D X coordinate of the absolute pivot",
	0, "*",
	PROP_FLOAT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_LineStyle_update, 385875968, NULL, NULL,
	offsetof(LineStyleGeometryModifier_2DTransform, pivot_x), 4, NULL},
	LineStyleGeometryModifier_2DTransform_pivot_x_get, LineStyleGeometryModifier_2DTransform_pivot_x_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, -10000.0f, 10000.0f, -FLT_MAX, FLT_MAX, 10.0f, 3, 0.0f, NULL
};

FloatPropertyRNA rna_LineStyleGeometryModifier_2DTransform_pivot_y = {
	{NULL, (PropertyRNA *)&rna_LineStyleGeometryModifier_2DTransform_pivot_x,
	-1, "pivot_y", 8195, "Pivot Y",
	"2D Y coordinate of the absolute pivot",
	0, "*",
	PROP_FLOAT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_LineStyle_update, 385875968, NULL, NULL,
	offsetof(LineStyleGeometryModifier_2DTransform, pivot_y), 4, NULL},
	LineStyleGeometryModifier_2DTransform_pivot_y_get, LineStyleGeometryModifier_2DTransform_pivot_y_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, -10000.0f, 10000.0f, -FLT_MAX, FLT_MAX, 10.0f, 3, 0.0f, NULL
};

StructRNA RNA_LineStyleGeometryModifier_2DTransform = {
	{(ContainerRNA *)&RNA_FreestyleLineStyle, (ContainerRNA *)&RNA_LineStyleGeometryModifier_2DOffset,
	NULL,
	{(PropertyRNA *)&rna_LineStyleGeometryModifier_2DTransform_type, (PropertyRNA *)&rna_LineStyleGeometryModifier_2DTransform_pivot_y}},
	"LineStyleGeometryModifier_2DTransform", NULL, NULL, 4, "2D Transform",
	"Apply two-dimensional scaling and rotation to stroke backbone geometry",
	"*", 17,
	(PropertyRNA *)&rna_LineStyleGeometryModifier_2DTransform_name, (PropertyRNA *)&rna_LineStyleModifier_rna_properties,
	&RNA_LineStyleGeometryModifier,
	NULL,
	rna_LineStyle_geometry_modifier_refine,
	rna_LineStyle_geometry_modifier_path,
	NULL,
	NULL,
	NULL,
	NULL,
	{NULL, NULL}
};

/* Freestyle Line Style */
CollectionPropertyRNA rna_FreestyleLineStyle_texture_slots = {
	{(PropertyRNA *)&rna_FreestyleLineStyle_active_texture, NULL,
	-1, "texture_slots", 0, "Textures",
	"Texture slots defining the mapping and influence of textures",
	0, "*",
	PROP_COLLECTION, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, &RNA_LineStyleTextureSlots},
	FreestyleLineStyle_texture_slots_begin, FreestyleLineStyle_texture_slots_next, FreestyleLineStyle_texture_slots_end, FreestyleLineStyle_texture_slots_get, NULL, NULL, NULL, NULL, &RNA_LineStyleTextureSlot
};

PointerPropertyRNA rna_FreestyleLineStyle_active_texture = {
	{(PropertyRNA *)&rna_FreestyleLineStyle_active_texture_index, (PropertyRNA *)&rna_FreestyleLineStyle_texture_slots,
	-1, "active_texture", 8388609, "Active Texture",
	"Active texture slot being displayed",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_LineStyle_update, 102760448, NULL, NULL,
	0, -1, NULL},
	FreestyleLineStyle_active_texture_get, FreestyleLineStyle_active_texture_set, NULL, NULL,&RNA_Texture
};

IntPropertyRNA rna_FreestyleLineStyle_active_texture_index = {
	{(PropertyRNA *)&rna_FreestyleLineStyle_panel, (PropertyRNA *)&rna_FreestyleLineStyle_active_texture,
	-1, "active_texture_index", 8195, "Active Texture Index",
	"Index of active texture slot",
	0, "*",
	PROP_INT, PROP_UNSIGNED | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_LineStyle_update, 102760448, NULL, NULL,
	offsetof(FreestyleLineStyle, texact), 1, NULL},
	FreestyleLineStyle_active_texture_index_get, FreestyleLineStyle_active_texture_index_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL,
	0, 17, 0, 17, 1, 0, NULL
};

static EnumPropertyItem rna_FreestyleLineStyle_panel_items[7] = {
	{1, "STROKES", 0, "Strokes", "Show the panel for stroke construction"},
	{2, "COLOR", 0, "Color", "Show the panel for line color options"},
	{3, "ALPHA", 0, "Alpha", "Show the panel for alpha transparency options"},
	{4, "THICKNESS", 0, "Thickness", "Show the panel for line thickness options"},
	{5, "GEOMETRY", 0, "Geometry", "Show the panel for stroke geometry options"},
	{6, "TEXTURE", 0, "Texture", "Show the panel for stroke texture options"},
	{0, NULL, 0, NULL, NULL}
};

EnumPropertyRNA rna_FreestyleLineStyle_panel = {
	{(PropertyRNA *)&rna_FreestyleLineStyle_color, (PropertyRNA *)&rna_FreestyleLineStyle_active_texture_index,
	-1, "panel", 3, "Panel",
	"Select the property panel to be shown",
	0, "*",
	PROP_ENUM, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	FreestyleLineStyle_panel_get, FreestyleLineStyle_panel_set, NULL, NULL, NULL, NULL, rna_FreestyleLineStyle_panel_items, 6, 1
};

static float rna_FreestyleLineStyle_color_default[3] = {
	0.0f,
	0.0f,
	0.0f
};

FloatPropertyRNA rna_FreestyleLineStyle_color = {
	{(PropertyRNA *)&rna_FreestyleLineStyle_alpha, (PropertyRNA *)&rna_FreestyleLineStyle_panel,
	-1, "color", 8195, "Color",
	"Base line color, possibly modified by line color modifiers",
	0, "*",
	PROP_FLOAT, PROP_COLOR | PROP_UNIT_NONE, NULL, 1, {3, 0, 0}, 3,
	rna_LineStyle_update, 385875968, NULL, NULL,
	offsetof(FreestyleLineStyle, r), 4, NULL},
	NULL, NULL, FreestyleLineStyle_color_get, FreestyleLineStyle_color_set, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 1.0f, 0.0f, FLT_MAX, 10.0f, 3, 0.0f, rna_FreestyleLineStyle_color_default
};

FloatPropertyRNA rna_FreestyleLineStyle_alpha = {
	{(PropertyRNA *)&rna_FreestyleLineStyle_thickness, (PropertyRNA *)&rna_FreestyleLineStyle_color,
	-1, "alpha", 8195, "Alpha Transparency",
	"Base alpha transparency, possibly modified by alpha transparency modifiers",
	0, "*",
	PROP_FLOAT, PROP_FACTOR | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_LineStyle_update, 385875968, NULL, NULL,
	offsetof(FreestyleLineStyle, alpha), 4, NULL},
	FreestyleLineStyle_alpha_get, FreestyleLineStyle_alpha_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 1.0f, 0.0f, 1.0f, 10.0f, 3, 0.0f, NULL
};

FloatPropertyRNA rna_FreestyleLineStyle_thickness = {
	{(PropertyRNA *)&rna_FreestyleLineStyle_thickness_position, (PropertyRNA *)&rna_FreestyleLineStyle_alpha,
	-1, "thickness", 8195, "Thickness",
	"Base line thickness, possibly modified by line thickness modifiers",
	0, "*",
	PROP_FLOAT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_LineStyle_update, 385875968, NULL, NULL,
	offsetof(FreestyleLineStyle, thickness), 4, NULL},
	FreestyleLineStyle_thickness_get, FreestyleLineStyle_thickness_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 10000.0f, 0.0f, 10000.0f, 10.0f, 3, 0.0f, NULL
};

static EnumPropertyItem rna_FreestyleLineStyle_thickness_position_items[5] = {
	{1, "CENTER", 0, "Center", "Silhouettes and border edges are centered along stroke geometry"},
	{2, "INSIDE", 0, "Inside", "Silhouettes and border edges are drawn inside of stroke geometry"},
	{3, "OUTSIDE", 0, "Outside", "Silhouettes and border edges are drawn outside of stroke geometry"},
	{4, "RELATIVE", 0, "Relative", "Silhouettes and border edges are shifted by a user-defined ratio"},
	{0, NULL, 0, NULL, NULL}
};

EnumPropertyRNA rna_FreestyleLineStyle_thickness_position = {
	{(PropertyRNA *)&rna_FreestyleLineStyle_thickness_ratio, (PropertyRNA *)&rna_FreestyleLineStyle_thickness,
	-1, "thickness_position", 3, "Thickness Position",
	"Thickness position of silhouettes and border edges (applicable when plain chaining is used with the Same Object option)",
	0, "*",
	PROP_ENUM, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_LineStyle_update, 385875968, NULL, NULL,
	0, -1, NULL},
	FreestyleLineStyle_thickness_position_get, FreestyleLineStyle_thickness_position_set, NULL, NULL, NULL, NULL, rna_FreestyleLineStyle_thickness_position_items, 4, 1
};

FloatPropertyRNA rna_FreestyleLineStyle_thickness_ratio = {
	{(PropertyRNA *)&rna_FreestyleLineStyle_color_modifiers, (PropertyRNA *)&rna_FreestyleLineStyle_thickness_position,
	-1, "thickness_ratio", 8195, "Thickness Ratio",
	"A number between 0 (inside) and 1 (outside) specifying the relative position of stroke thickness",
	0, "*",
	PROP_FLOAT, PROP_FACTOR | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_LineStyle_update, 385875968, NULL, NULL,
	offsetof(FreestyleLineStyle, thickness_ratio), 4, NULL},
	FreestyleLineStyle_thickness_ratio_get, FreestyleLineStyle_thickness_ratio_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 1.0f, 0.0f, 1.0f, 10.0f, 3, 0.0f, NULL
};

CollectionPropertyRNA rna_FreestyleLineStyle_color_modifiers = {
	{(PropertyRNA *)&rna_FreestyleLineStyle_alpha_modifiers, (PropertyRNA *)&rna_FreestyleLineStyle_thickness_ratio,
	-1, "color_modifiers", 0, "Color Modifiers",
	"List of line color modifiers",
	0, "*",
	PROP_COLLECTION, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, &RNA_LineStyleColorModifiers},
	FreestyleLineStyle_color_modifiers_begin, FreestyleLineStyle_color_modifiers_next, FreestyleLineStyle_color_modifiers_end, FreestyleLineStyle_color_modifiers_get, NULL, FreestyleLineStyle_color_modifiers_lookup_int, NULL, NULL, &RNA_LineStyleColorModifier
};

CollectionPropertyRNA rna_FreestyleLineStyle_alpha_modifiers = {
	{(PropertyRNA *)&rna_FreestyleLineStyle_thickness_modifiers, (PropertyRNA *)&rna_FreestyleLineStyle_color_modifiers,
	-1, "alpha_modifiers", 0, "Alpha Modifiers",
	"List of alpha transparency modifiers",
	0, "*",
	PROP_COLLECTION, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, &RNA_LineStyleAlphaModifiers},
	FreestyleLineStyle_alpha_modifiers_begin, FreestyleLineStyle_alpha_modifiers_next, FreestyleLineStyle_alpha_modifiers_end, FreestyleLineStyle_alpha_modifiers_get, NULL, FreestyleLineStyle_alpha_modifiers_lookup_int, NULL, NULL, &RNA_LineStyleAlphaModifier
};

CollectionPropertyRNA rna_FreestyleLineStyle_thickness_modifiers = {
	{(PropertyRNA *)&rna_FreestyleLineStyle_geometry_modifiers, (PropertyRNA *)&rna_FreestyleLineStyle_alpha_modifiers,
	-1, "thickness_modifiers", 0, "Thickness Modifiers",
	"List of line thickness modifiers",
	0, "*",
	PROP_COLLECTION, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, &RNA_LineStyleThicknessModifiers},
	FreestyleLineStyle_thickness_modifiers_begin, FreestyleLineStyle_thickness_modifiers_next, FreestyleLineStyle_thickness_modifiers_end, FreestyleLineStyle_thickness_modifiers_get, NULL, FreestyleLineStyle_thickness_modifiers_lookup_int, NULL, NULL, &RNA_LineStyleThicknessModifier
};

CollectionPropertyRNA rna_FreestyleLineStyle_geometry_modifiers = {
	{(PropertyRNA *)&rna_FreestyleLineStyle_use_chaining, (PropertyRNA *)&rna_FreestyleLineStyle_thickness_modifiers,
	-1, "geometry_modifiers", 0, "Geometry Modifiers",
	"List of stroke geometry modifiers",
	0, "*",
	PROP_COLLECTION, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, &RNA_LineStyleGeometryModifiers},
	FreestyleLineStyle_geometry_modifiers_begin, FreestyleLineStyle_geometry_modifiers_next, FreestyleLineStyle_geometry_modifiers_end, FreestyleLineStyle_geometry_modifiers_get, NULL, FreestyleLineStyle_geometry_modifiers_lookup_int, NULL, NULL, &RNA_LineStyleGeometryModifier
};

BoolPropertyRNA rna_FreestyleLineStyle_use_chaining = {
	{(PropertyRNA *)&rna_FreestyleLineStyle_chaining, (PropertyRNA *)&rna_FreestyleLineStyle_geometry_modifiers,
	-1, "use_chaining", 3, "Chaining",
	"Enable chaining of feature edges",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_LineStyle_update, 385875968, NULL, NULL,
	0, -1, NULL},
	FreestyleLineStyle_use_chaining_get, FreestyleLineStyle_use_chaining_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

static EnumPropertyItem rna_FreestyleLineStyle_chaining_items[3] = {
	{1, "PLAIN", 0, "Plain", "Plain chaining"},
	{2, "SKETCHY", 0, "Sketchy", "Sketchy chaining with a multiple touch"},
	{0, NULL, 0, NULL, NULL}
};

EnumPropertyRNA rna_FreestyleLineStyle_chaining = {
	{(PropertyRNA *)&rna_FreestyleLineStyle_rounds, (PropertyRNA *)&rna_FreestyleLineStyle_use_chaining,
	-1, "chaining", 3, "Chaining Method",
	"Select the way how feature edges are jointed to form chains",
	0, "*",
	PROP_ENUM, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_LineStyle_update, 385875968, NULL, NULL,
	0, -1, NULL},
	FreestyleLineStyle_chaining_get, FreestyleLineStyle_chaining_set, NULL, NULL, NULL, NULL, rna_FreestyleLineStyle_chaining_items, 2, 1
};

IntPropertyRNA rna_FreestyleLineStyle_rounds = {
	{(PropertyRNA *)&rna_FreestyleLineStyle_use_same_object, (PropertyRNA *)&rna_FreestyleLineStyle_chaining,
	-1, "rounds", 8195, "Rounds",
	"Number of rounds in a sketchy multiple touch",
	0, "*",
	PROP_INT, PROP_UNSIGNED | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_LineStyle_update, 385875968, NULL, NULL,
	offsetof(FreestyleLineStyle, rounds), 0, NULL},
	FreestyleLineStyle_rounds_get, FreestyleLineStyle_rounds_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL,
	1, 1000, 1, 1000, 1, 0, NULL
};

BoolPropertyRNA rna_FreestyleLineStyle_use_same_object = {
	{(PropertyRNA *)&rna_FreestyleLineStyle_use_split_length, (PropertyRNA *)&rna_FreestyleLineStyle_rounds,
	-1, "use_same_object", 3, "Same Object",
	"If true, only feature edges of the same object are joined",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_LineStyle_update, 385875968, NULL, NULL,
	0, -1, NULL},
	FreestyleLineStyle_use_same_object_get, FreestyleLineStyle_use_same_object_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_FreestyleLineStyle_use_split_length = {
	{(PropertyRNA *)&rna_FreestyleLineStyle_split_length, (PropertyRNA *)&rna_FreestyleLineStyle_use_same_object,
	-1, "use_split_length", 3, "Use Split Length",
	"Enable chain splitting by curvilinear 2D length",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_LineStyle_update, 385875968, NULL, NULL,
	0, -1, NULL},
	FreestyleLineStyle_use_split_length_get, FreestyleLineStyle_use_split_length_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

FloatPropertyRNA rna_FreestyleLineStyle_split_length = {
	{(PropertyRNA *)&rna_FreestyleLineStyle_use_angle_min, (PropertyRNA *)&rna_FreestyleLineStyle_use_split_length,
	-1, "split_length", 8195, "Split Length",
	"Curvilinear 2D length for chain splitting",
	0, "*",
	PROP_FLOAT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_LineStyle_update, 385875968, NULL, NULL,
	offsetof(FreestyleLineStyle, split_length), 4, NULL},
	FreestyleLineStyle_split_length_get, FreestyleLineStyle_split_length_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 10000.0f, 0.0f, 10000.0f, 10.0f, 3, 0.0f, NULL
};

BoolPropertyRNA rna_FreestyleLineStyle_use_angle_min = {
	{(PropertyRNA *)&rna_FreestyleLineStyle_angle_min, (PropertyRNA *)&rna_FreestyleLineStyle_split_length,
	-1, "use_angle_min", 3, "Use Min 2D Angle",
	"Split chains at points with angles smaller than the minimum 2D angle",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_LineStyle_update, 385875968, NULL, NULL,
	0, -1, NULL},
	FreestyleLineStyle_use_angle_min_get, FreestyleLineStyle_use_angle_min_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

FloatPropertyRNA rna_FreestyleLineStyle_angle_min = {
	{(PropertyRNA *)&rna_FreestyleLineStyle_use_angle_max, (PropertyRNA *)&rna_FreestyleLineStyle_use_angle_min,
	-1, "angle_min", 8195, "Min 2D Angle",
	"Minimum 2D angle for splitting chains",
	0, "*",
	PROP_FLOAT, PROP_ANGLE | PROP_UNIT_ROTATION, NULL, 0, {0, 0, 0}, 0,
	rna_LineStyle_update, 385875968, NULL, NULL,
	offsetof(FreestyleLineStyle, min_angle), 4, NULL},
	FreestyleLineStyle_angle_min_get, FreestyleLineStyle_angle_min_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 3.1415927410f, 0.0f, 3.1415927410f, 10.0f, 3, 0.0f, NULL
};

BoolPropertyRNA rna_FreestyleLineStyle_use_angle_max = {
	{(PropertyRNA *)&rna_FreestyleLineStyle_angle_max, (PropertyRNA *)&rna_FreestyleLineStyle_angle_min,
	-1, "use_angle_max", 3, "Use Max 2D Angle",
	"Split chains at points with angles larger than the maximum 2D angle",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_LineStyle_update, 385875968, NULL, NULL,
	0, -1, NULL},
	FreestyleLineStyle_use_angle_max_get, FreestyleLineStyle_use_angle_max_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

FloatPropertyRNA rna_FreestyleLineStyle_angle_max = {
	{(PropertyRNA *)&rna_FreestyleLineStyle_use_length_min, (PropertyRNA *)&rna_FreestyleLineStyle_use_angle_max,
	-1, "angle_max", 8195, "Max 2D Angle",
	"Maximum 2D angle for splitting chains",
	0, "*",
	PROP_FLOAT, PROP_ANGLE | PROP_UNIT_ROTATION, NULL, 0, {0, 0, 0}, 0,
	rna_LineStyle_update, 385875968, NULL, NULL,
	offsetof(FreestyleLineStyle, max_angle), 4, NULL},
	FreestyleLineStyle_angle_max_get, FreestyleLineStyle_angle_max_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 3.1415927410f, 0.0f, 3.1415927410f, 10.0f, 3, 0.0f, NULL
};

BoolPropertyRNA rna_FreestyleLineStyle_use_length_min = {
	{(PropertyRNA *)&rna_FreestyleLineStyle_length_min, (PropertyRNA *)&rna_FreestyleLineStyle_angle_max,
	-1, "use_length_min", 3, "Use Min 2D Length",
	"Enable the selection of chains by a minimum 2D length",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_LineStyle_update, 385875968, NULL, NULL,
	0, -1, NULL},
	FreestyleLineStyle_use_length_min_get, FreestyleLineStyle_use_length_min_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

FloatPropertyRNA rna_FreestyleLineStyle_length_min = {
	{(PropertyRNA *)&rna_FreestyleLineStyle_use_length_max, (PropertyRNA *)&rna_FreestyleLineStyle_use_length_min,
	-1, "length_min", 8195, "Min 2D Length",
	"Minimum curvilinear 2D length for the selection of chains",
	0, "*",
	PROP_FLOAT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_LineStyle_update, 385875968, NULL, NULL,
	offsetof(FreestyleLineStyle, min_length), 4, NULL},
	FreestyleLineStyle_length_min_get, FreestyleLineStyle_length_min_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 10000.0f, 0.0f, 10000.0f, 10.0f, 3, 0.0f, NULL
};

BoolPropertyRNA rna_FreestyleLineStyle_use_length_max = {
	{(PropertyRNA *)&rna_FreestyleLineStyle_length_max, (PropertyRNA *)&rna_FreestyleLineStyle_length_min,
	-1, "use_length_max", 3, "Use Max 2D Length",
	"Enable the selection of chains by a maximum 2D length",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_LineStyle_update, 385875968, NULL, NULL,
	0, -1, NULL},
	FreestyleLineStyle_use_length_max_get, FreestyleLineStyle_use_length_max_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

FloatPropertyRNA rna_FreestyleLineStyle_length_max = {
	{(PropertyRNA *)&rna_FreestyleLineStyle_use_chain_count, (PropertyRNA *)&rna_FreestyleLineStyle_use_length_max,
	-1, "length_max", 8195, "Max 2D Length",
	"Maximum curvilinear 2D length for the selection of chains",
	0, "*",
	PROP_FLOAT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_LineStyle_update, 385875968, NULL, NULL,
	offsetof(FreestyleLineStyle, max_length), 4, NULL},
	FreestyleLineStyle_length_max_get, FreestyleLineStyle_length_max_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 10000.0f, 0.0f, 10000.0f, 10.0f, 3, 0.0f, NULL
};

BoolPropertyRNA rna_FreestyleLineStyle_use_chain_count = {
	{(PropertyRNA *)&rna_FreestyleLineStyle_chain_count, (PropertyRNA *)&rna_FreestyleLineStyle_length_max,
	-1, "use_chain_count", 3, "Use Chain Count",
	"Enable the selection of first N chains",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_LineStyle_update, 385875968, NULL, NULL,
	0, -1, NULL},
	FreestyleLineStyle_use_chain_count_get, FreestyleLineStyle_use_chain_count_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

IntPropertyRNA rna_FreestyleLineStyle_chain_count = {
	{(PropertyRNA *)&rna_FreestyleLineStyle_use_split_pattern, (PropertyRNA *)&rna_FreestyleLineStyle_use_chain_count,
	-1, "chain_count", 8195, "Chain Count",
	"Chain count for the selection of first N chains",
	0, "*",
	PROP_INT, PROP_UNSIGNED | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_LineStyle_update, 385875968, NULL, NULL,
	offsetof(FreestyleLineStyle, chain_count), 0, NULL},
	FreestyleLineStyle_chain_count_get, FreestyleLineStyle_chain_count_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL,
	0, 10000, 0, INT_MAX, 1, 0, NULL
};

BoolPropertyRNA rna_FreestyleLineStyle_use_split_pattern = {
	{(PropertyRNA *)&rna_FreestyleLineStyle_split_dash1, (PropertyRNA *)&rna_FreestyleLineStyle_chain_count,
	-1, "use_split_pattern", 3, "Use Split Pattern",
	"Enable chain splitting by dashed line patterns",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_LineStyle_update, 385875968, NULL, NULL,
	0, -1, NULL},
	FreestyleLineStyle_use_split_pattern_get, FreestyleLineStyle_use_split_pattern_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

IntPropertyRNA rna_FreestyleLineStyle_split_dash1 = {
	{(PropertyRNA *)&rna_FreestyleLineStyle_split_gap1, (PropertyRNA *)&rna_FreestyleLineStyle_use_split_pattern,
	-1, "split_dash1", 8195, "Split Dash 1",
	"Length of the 1st dash for splitting",
	0, "*",
	PROP_INT, PROP_UNSIGNED | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_LineStyle_update, 385875968, NULL, NULL,
	offsetof(FreestyleLineStyle, split_dash1), 1, NULL},
	FreestyleLineStyle_split_dash1_get, FreestyleLineStyle_split_dash1_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL,
	0, 65535, 0, 65535, 1, 0, NULL
};

IntPropertyRNA rna_FreestyleLineStyle_split_gap1 = {
	{(PropertyRNA *)&rna_FreestyleLineStyle_split_dash2, (PropertyRNA *)&rna_FreestyleLineStyle_split_dash1,
	-1, "split_gap1", 8195, "Split Gap 1",
	"Length of the 1st gap for splitting",
	0, "*",
	PROP_INT, PROP_UNSIGNED | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_LineStyle_update, 385875968, NULL, NULL,
	offsetof(FreestyleLineStyle, split_gap1), 1, NULL},
	FreestyleLineStyle_split_gap1_get, FreestyleLineStyle_split_gap1_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL,
	0, 65535, 0, 65535, 1, 0, NULL
};

IntPropertyRNA rna_FreestyleLineStyle_split_dash2 = {
	{(PropertyRNA *)&rna_FreestyleLineStyle_split_gap2, (PropertyRNA *)&rna_FreestyleLineStyle_split_gap1,
	-1, "split_dash2", 8195, "Split Dash 2",
	"Length of the 2nd dash for splitting",
	0, "*",
	PROP_INT, PROP_UNSIGNED | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_LineStyle_update, 385875968, NULL, NULL,
	offsetof(FreestyleLineStyle, split_dash2), 1, NULL},
	FreestyleLineStyle_split_dash2_get, FreestyleLineStyle_split_dash2_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL,
	0, 65535, 0, 65535, 1, 0, NULL
};

IntPropertyRNA rna_FreestyleLineStyle_split_gap2 = {
	{(PropertyRNA *)&rna_FreestyleLineStyle_split_dash3, (PropertyRNA *)&rna_FreestyleLineStyle_split_dash2,
	-1, "split_gap2", 8195, "Split Gap 2",
	"Length of the 2nd gap for splitting",
	0, "*",
	PROP_INT, PROP_UNSIGNED | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_LineStyle_update, 385875968, NULL, NULL,
	offsetof(FreestyleLineStyle, split_gap2), 1, NULL},
	FreestyleLineStyle_split_gap2_get, FreestyleLineStyle_split_gap2_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL,
	0, 65535, 0, 65535, 1, 0, NULL
};

IntPropertyRNA rna_FreestyleLineStyle_split_dash3 = {
	{(PropertyRNA *)&rna_FreestyleLineStyle_split_gap3, (PropertyRNA *)&rna_FreestyleLineStyle_split_gap2,
	-1, "split_dash3", 8195, "Split Dash 3",
	"Length of the 3rd dash for splitting",
	0, "*",
	PROP_INT, PROP_UNSIGNED | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_LineStyle_update, 385875968, NULL, NULL,
	offsetof(FreestyleLineStyle, split_dash3), 1, NULL},
	FreestyleLineStyle_split_dash3_get, FreestyleLineStyle_split_dash3_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL,
	0, 65535, 0, 65535, 1, 0, NULL
};

IntPropertyRNA rna_FreestyleLineStyle_split_gap3 = {
	{(PropertyRNA *)&rna_FreestyleLineStyle_material_boundary, (PropertyRNA *)&rna_FreestyleLineStyle_split_dash3,
	-1, "split_gap3", 8195, "Split Gap 3",
	"Length of the 3rd gap for splitting",
	0, "*",
	PROP_INT, PROP_UNSIGNED | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_LineStyle_update, 385875968, NULL, NULL,
	offsetof(FreestyleLineStyle, split_gap3), 1, NULL},
	FreestyleLineStyle_split_gap3_get, FreestyleLineStyle_split_gap3_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL,
	0, 65535, 0, 65535, 1, 0, NULL
};

BoolPropertyRNA rna_FreestyleLineStyle_material_boundary = {
	{(PropertyRNA *)&rna_FreestyleLineStyle_use_sorting, (PropertyRNA *)&rna_FreestyleLineStyle_split_gap3,
	-1, "material_boundary", 3, "Material Boundary",
	"If true, chains of feature edges are split at material boundaries",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_LineStyle_update, 385875968, NULL, NULL,
	0, -1, NULL},
	FreestyleLineStyle_material_boundary_get, FreestyleLineStyle_material_boundary_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_FreestyleLineStyle_use_sorting = {
	{(PropertyRNA *)&rna_FreestyleLineStyle_sort_key, (PropertyRNA *)&rna_FreestyleLineStyle_material_boundary,
	-1, "use_sorting", 3, "Sorting",
	"Arrange the stacking order of strokes",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_LineStyle_update, 385875968, NULL, NULL,
	0, -1, NULL},
	FreestyleLineStyle_use_sorting_get, FreestyleLineStyle_use_sorting_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

static EnumPropertyItem rna_FreestyleLineStyle_sort_key_items[5] = {
	{1, "DISTANCE_FROM_CAMERA", 0, "Distance from Camera", "Sort by distance from camera (closer lines lie on top of further lines)"},
	{2, "2D_LENGTH", 0, "2D Length", "Sort by curvilinear 2D length (longer lines lie on top of shorter lines)"},
	{3, "PROJECTED_X", 0, "Projected X", "Sort by the projected X value in the image coordinate system"},
	{4, "PROJECTED_Y", 0, "Projected Y", "Sort by the projected Y value in the image coordinate system"},
	{0, NULL, 0, NULL, NULL}
};

EnumPropertyRNA rna_FreestyleLineStyle_sort_key = {
	{(PropertyRNA *)&rna_FreestyleLineStyle_sort_order, (PropertyRNA *)&rna_FreestyleLineStyle_use_sorting,
	-1, "sort_key", 3, "Sort Key",
	"Select the sort key to determine the stacking order of chains",
	0, "*",
	PROP_ENUM, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_LineStyle_update, 385875968, NULL, NULL,
	0, -1, NULL},
	FreestyleLineStyle_sort_key_get, FreestyleLineStyle_sort_key_set, NULL, NULL, NULL, NULL, rna_FreestyleLineStyle_sort_key_items, 4, 1
};

static EnumPropertyItem rna_FreestyleLineStyle_sort_order_items[3] = {
	{0, "DEFAULT", 0, "Default", "Default order of the sort key"},
	{4096, "REVERSE", 0, "Reverse", "Reverse order"},
	{0, NULL, 0, NULL, NULL}
};

EnumPropertyRNA rna_FreestyleLineStyle_sort_order = {
	{(PropertyRNA *)&rna_FreestyleLineStyle_integration_type, (PropertyRNA *)&rna_FreestyleLineStyle_sort_key,
	-1, "sort_order", 3, "Sort Order",
	"Select the sort order",
	0, "*",
	PROP_ENUM, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_LineStyle_update, 385875968, NULL, NULL,
	0, -1, NULL},
	FreestyleLineStyle_sort_order_get, FreestyleLineStyle_sort_order_set, NULL, NULL, NULL, NULL, rna_FreestyleLineStyle_sort_order_items, 2, 0
};

static EnumPropertyItem rna_FreestyleLineStyle_integration_type_items[6] = {
	{1, "MEAN", 0, "Mean", "The value computed for the chain is the mean of the values obtained for chain vertices"},
	{2, "MIN", 0, "Min", "The value computed for the chain is the minimum of the values obtained for chain vertices"},
	{3, "MAX", 0, "Max", "The value computed for the chain is the maximum of the values obtained for chain vertices"},
	{4, "FIRST", 0, "First", "The value computed for the chain is the value obtained for the first chain vertex"},
	{5, "LAST", 0, "Last", "The value computed for the chain is the value obtained for the last chain vertex"},
	{0, NULL, 0, NULL, NULL}
};

EnumPropertyRNA rna_FreestyleLineStyle_integration_type = {
	{(PropertyRNA *)&rna_FreestyleLineStyle_use_dashed_line, (PropertyRNA *)&rna_FreestyleLineStyle_sort_order,
	-1, "integration_type", 3, "Integration Type",
	"Select the way how the sort key is computed for each chain",
	0, "*",
	PROP_ENUM, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_LineStyle_update, 385875968, NULL, NULL,
	0, -1, NULL},
	FreestyleLineStyle_integration_type_get, FreestyleLineStyle_integration_type_set, NULL, NULL, NULL, NULL, rna_FreestyleLineStyle_integration_type_items, 5, 1
};

BoolPropertyRNA rna_FreestyleLineStyle_use_dashed_line = {
	{(PropertyRNA *)&rna_FreestyleLineStyle_caps, (PropertyRNA *)&rna_FreestyleLineStyle_integration_type,
	-1, "use_dashed_line", 3, "Dashed Line",
	"Enable or disable dashed line",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_LineStyle_update, 385875968, NULL, NULL,
	0, -1, NULL},
	FreestyleLineStyle_use_dashed_line_get, FreestyleLineStyle_use_dashed_line_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

static EnumPropertyItem rna_FreestyleLineStyle_caps_items[4] = {
	{1, "BUTT", 0, "Butt", "Butt cap (flat)"},
	{2, "ROUND", 0, "Round", "Round cap (half-circle)"},
	{3, "SQUARE", 0, "Square", "Square cap (flat and extended)"},
	{0, NULL, 0, NULL, NULL}
};

EnumPropertyRNA rna_FreestyleLineStyle_caps = {
	{(PropertyRNA *)&rna_FreestyleLineStyle_dash1, (PropertyRNA *)&rna_FreestyleLineStyle_use_dashed_line,
	-1, "caps", 3, "Caps",
	"Select the shape of both ends of strokes",
	0, "*",
	PROP_ENUM, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_LineStyle_update, 385875968, NULL, NULL,
	0, -1, NULL},
	FreestyleLineStyle_caps_get, FreestyleLineStyle_caps_set, NULL, NULL, NULL, NULL, rna_FreestyleLineStyle_caps_items, 3, 1
};

IntPropertyRNA rna_FreestyleLineStyle_dash1 = {
	{(PropertyRNA *)&rna_FreestyleLineStyle_gap1, (PropertyRNA *)&rna_FreestyleLineStyle_caps,
	-1, "dash1", 8195, "Dash 1",
	"Length of the 1st dash for dashed lines",
	0, "*",
	PROP_INT, PROP_UNSIGNED | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_LineStyle_update, 385875968, NULL, NULL,
	offsetof(FreestyleLineStyle, dash1), 1, NULL},
	FreestyleLineStyle_dash1_get, FreestyleLineStyle_dash1_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL,
	0, 65535, 0, 65535, 1, 0, NULL
};

IntPropertyRNA rna_FreestyleLineStyle_gap1 = {
	{(PropertyRNA *)&rna_FreestyleLineStyle_dash2, (PropertyRNA *)&rna_FreestyleLineStyle_dash1,
	-1, "gap1", 8195, "Gap 1",
	"Length of the 1st gap for dashed lines",
	0, "*",
	PROP_INT, PROP_UNSIGNED | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_LineStyle_update, 385875968, NULL, NULL,
	offsetof(FreestyleLineStyle, gap1), 1, NULL},
	FreestyleLineStyle_gap1_get, FreestyleLineStyle_gap1_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL,
	0, 65535, 0, 65535, 1, 0, NULL
};

IntPropertyRNA rna_FreestyleLineStyle_dash2 = {
	{(PropertyRNA *)&rna_FreestyleLineStyle_gap2, (PropertyRNA *)&rna_FreestyleLineStyle_gap1,
	-1, "dash2", 8195, "Dash 2",
	"Length of the 2nd dash for dashed lines",
	0, "*",
	PROP_INT, PROP_UNSIGNED | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_LineStyle_update, 385875968, NULL, NULL,
	offsetof(FreestyleLineStyle, dash2), 1, NULL},
	FreestyleLineStyle_dash2_get, FreestyleLineStyle_dash2_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL,
	0, 65535, 0, 65535, 1, 0, NULL
};

IntPropertyRNA rna_FreestyleLineStyle_gap2 = {
	{(PropertyRNA *)&rna_FreestyleLineStyle_dash3, (PropertyRNA *)&rna_FreestyleLineStyle_dash2,
	-1, "gap2", 8195, "Gap 2",
	"Length of the 2nd gap for dashed lines",
	0, "*",
	PROP_INT, PROP_UNSIGNED | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_LineStyle_update, 385875968, NULL, NULL,
	offsetof(FreestyleLineStyle, gap2), 1, NULL},
	FreestyleLineStyle_gap2_get, FreestyleLineStyle_gap2_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL,
	0, 65535, 0, 65535, 1, 0, NULL
};

IntPropertyRNA rna_FreestyleLineStyle_dash3 = {
	{(PropertyRNA *)&rna_FreestyleLineStyle_gap3, (PropertyRNA *)&rna_FreestyleLineStyle_gap2,
	-1, "dash3", 8195, "Dash 3",
	"Length of the 3rd dash for dashed lines",
	0, "*",
	PROP_INT, PROP_UNSIGNED | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_LineStyle_update, 385875968, NULL, NULL,
	offsetof(FreestyleLineStyle, dash3), 1, NULL},
	FreestyleLineStyle_dash3_get, FreestyleLineStyle_dash3_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL,
	0, 65535, 0, 65535, 1, 0, NULL
};

IntPropertyRNA rna_FreestyleLineStyle_gap3 = {
	{(PropertyRNA *)&rna_FreestyleLineStyle_use_texture, (PropertyRNA *)&rna_FreestyleLineStyle_dash3,
	-1, "gap3", 8195, "Gap 3",
	"Length of the 3rd gap for dashed lines",
	0, "*",
	PROP_INT, PROP_UNSIGNED | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_LineStyle_update, 385875968, NULL, NULL,
	offsetof(FreestyleLineStyle, gap3), 1, NULL},
	FreestyleLineStyle_gap3_get, FreestyleLineStyle_gap3_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL,
	0, 65535, 0, 65535, 1, 0, NULL
};

BoolPropertyRNA rna_FreestyleLineStyle_use_texture = {
	{(PropertyRNA *)&rna_FreestyleLineStyle_texture_spacing, (PropertyRNA *)&rna_FreestyleLineStyle_gap3,
	-1, "use_texture", 3, "Use Textures",
	"Enable or disable textured strokes",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_LineStyle_update, 385875968, NULL, NULL,
	0, -1, NULL},
	FreestyleLineStyle_use_texture_get, FreestyleLineStyle_use_texture_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

FloatPropertyRNA rna_FreestyleLineStyle_texture_spacing = {
	{(PropertyRNA *)&rna_FreestyleLineStyle_node_tree, (PropertyRNA *)&rna_FreestyleLineStyle_use_texture,
	-1, "texture_spacing", 8195, "Texture spacing",
	"Spacing for textures along stroke length",
	0, "*",
	PROP_FLOAT, PROP_FACTOR | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_LineStyle_update, 385875968, NULL, NULL,
	offsetof(FreestyleLineStyle, texstep), 4, NULL},
	FreestyleLineStyle_texture_spacing_get, FreestyleLineStyle_texture_spacing_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0099999998f, 100.0f, 0.0099999998f, 100.0f, 10.0f, 3, 0.0f, NULL
};

PointerPropertyRNA rna_FreestyleLineStyle_node_tree = {
	{(PropertyRNA *)&rna_FreestyleLineStyle_use_nodes, (PropertyRNA *)&rna_FreestyleLineStyle_texture_spacing,
	-1, "node_tree", 8388672, "Node Tree",
	"Node tree for node-based shaders",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	FreestyleLineStyle_node_tree_get, NULL, NULL, NULL,&RNA_NodeTree
};

BoolPropertyRNA rna_FreestyleLineStyle_use_nodes = {
	{NULL, (PropertyRNA *)&rna_FreestyleLineStyle_node_tree,
	-1, "use_nodes", 4194305, "Use Nodes",
	"Use shader nodes for the line style",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	(UpdateFunc)rna_LineStyle_use_nodes_update, 385875968, NULL, NULL,
	0, -1, NULL},
	FreestyleLineStyle_use_nodes_get, FreestyleLineStyle_use_nodes_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

StructRNA RNA_FreestyleLineStyle = {
	{(ContainerRNA *)&RNA_LineStyleTextureSlots, (ContainerRNA *)&RNA_LineStyleGeometryModifier_2DTransform,
	NULL,
	{(PropertyRNA *)&rna_FreestyleLineStyle_texture_slots, (PropertyRNA *)&rna_FreestyleLineStyle_use_nodes}},
	"FreestyleLineStyle", NULL, NULL, 7, "Freestyle Line Style",
	"Freestyle line style, reusable by multiple line sets",
	"*", 198,
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

/* Texture Slots */
CollectionPropertyRNA rna_LineStyleTextureSlots_rna_properties = {
	{(PropertyRNA *)&rna_LineStyleTextureSlots_rna_type, NULL,
	-1, "rna_properties", 128, "Properties",
	"RNA property collection",
	0, "*",
	PROP_COLLECTION, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	LineStyleTextureSlots_rna_properties_begin, LineStyleTextureSlots_rna_properties_next, LineStyleTextureSlots_rna_properties_end, LineStyleTextureSlots_rna_properties_get, NULL, NULL, LineStyleTextureSlots_rna_properties_lookup_string, NULL, &RNA_Property
};

PointerPropertyRNA rna_LineStyleTextureSlots_rna_type = {
	{NULL, (PropertyRNA *)&rna_LineStyleTextureSlots_rna_properties,
	-1, "rna_type", 8912896, "RNA",
	"RNA type definition",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	LineStyleTextureSlots_rna_type_get, NULL, NULL, NULL,&RNA_Struct
};

PointerPropertyRNA rna_LineStyleTextureSlots_add_mtex = {
	{NULL, NULL,
	-1, "mtex", 8388616, "",
	"The newly initialized mtex",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	NULL, NULL, NULL, NULL,&RNA_LineStyleTextureSlot
};

FunctionRNA rna_LineStyleTextureSlots_add_func = {
	{(FunctionRNA *)&rna_LineStyleTextureSlots_create_func, NULL,
	NULL,
	{(PropertyRNA *)&rna_LineStyleTextureSlots_add_mtex, (PropertyRNA *)&rna_LineStyleTextureSlots_add_mtex}},
	"add", 2073, "add",
	LineStyleTextureSlots_add_call,
	(PropertyRNA *)&rna_LineStyleTextureSlots_add_mtex
};

IntPropertyRNA rna_LineStyleTextureSlots_create_index = {
	{(PropertyRNA *)&rna_LineStyleTextureSlots_create_mtex, NULL,
	-1, "index", 7, "Index",
	"Slot index to initialize",
	0, "*",
	PROP_INT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL,
	0, INT_MAX, 0, INT_MAX, 1, 0, NULL
};

PointerPropertyRNA rna_LineStyleTextureSlots_create_mtex = {
	{NULL, (PropertyRNA *)&rna_LineStyleTextureSlots_create_index,
	-1, "mtex", 8388616, "",
	"The newly initialized mtex",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	NULL, NULL, NULL, NULL,&RNA_LineStyleTextureSlot
};

FunctionRNA rna_LineStyleTextureSlots_create_func = {
	{(FunctionRNA *)&rna_LineStyleTextureSlots_clear_func, (FunctionRNA *)&rna_LineStyleTextureSlots_add_func,
	NULL,
	{(PropertyRNA *)&rna_LineStyleTextureSlots_create_index, (PropertyRNA *)&rna_LineStyleTextureSlots_create_mtex}},
	"create", 2073, "create",
	LineStyleTextureSlots_create_call,
	(PropertyRNA *)&rna_LineStyleTextureSlots_create_mtex
};

IntPropertyRNA rna_LineStyleTextureSlots_clear_index = {
	{NULL, NULL,
	-1, "index", 7, "Index",
	"Slot index to clear",
	0, "*",
	PROP_INT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL,
	0, INT_MAX, 0, INT_MAX, 1, 0, NULL
};

FunctionRNA rna_LineStyleTextureSlots_clear_func = {
	{NULL, (FunctionRNA *)&rna_LineStyleTextureSlots_create_func,
	NULL,
	{(PropertyRNA *)&rna_LineStyleTextureSlots_clear_index, (PropertyRNA *)&rna_LineStyleTextureSlots_clear_index}},
	"clear", 2073, "clear",
	LineStyleTextureSlots_clear_call,
	NULL
};

StructRNA RNA_LineStyleTextureSlots = {
	{(ContainerRNA *)&RNA_LineStyleColorModifiers, (ContainerRNA *)&RNA_FreestyleLineStyle,
	NULL,
	{(PropertyRNA *)&rna_LineStyleTextureSlots_rna_properties, (PropertyRNA *)&rna_LineStyleTextureSlots_rna_type}},
	"LineStyleTextureSlots", NULL, NULL, 4, "Texture Slots",
	"Collection of texture slots",
	"*", 17,
	NULL, (PropertyRNA *)&rna_LineStyleTextureSlots_rna_properties,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	{(FunctionRNA *)&rna_LineStyleTextureSlots_add_func, (FunctionRNA *)&rna_LineStyleTextureSlots_clear_func}
};

/* Color Modifiers */
CollectionPropertyRNA rna_LineStyleColorModifiers_rna_properties = {
	{(PropertyRNA *)&rna_LineStyleColorModifiers_rna_type, NULL,
	-1, "rna_properties", 128, "Properties",
	"RNA property collection",
	0, "*",
	PROP_COLLECTION, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	LineStyleColorModifiers_rna_properties_begin, LineStyleColorModifiers_rna_properties_next, LineStyleColorModifiers_rna_properties_end, LineStyleColorModifiers_rna_properties_get, NULL, NULL, LineStyleColorModifiers_rna_properties_lookup_string, NULL, &RNA_Property
};

PointerPropertyRNA rna_LineStyleColorModifiers_rna_type = {
	{NULL, (PropertyRNA *)&rna_LineStyleColorModifiers_rna_properties,
	-1, "rna_type", 8912896, "RNA",
	"RNA type definition",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	LineStyleColorModifiers_rna_type_get, NULL, NULL, NULL,&RNA_Struct
};

StringPropertyRNA rna_LineStyleColorModifiers_new_name = {
	{(PropertyRNA *)&rna_LineStyleColorModifiers_new_type, NULL,
	-1, "name", 262149, "",
	"New name for the color modifier (not unique)",
	0, "*",
	PROP_STRING, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	NULL, NULL, NULL, NULL, NULL, NULL, 0, "ColorModifier"
};

static EnumPropertyItem rna_LineStyleColorModifiers_new_type_items[5] = {
	{1, "ALONG_STROKE", 442, "Along Stroke", ""},
	{2, "DISTANCE_FROM_CAMERA", 442, "Distance from Camera", ""},
	{3, "DISTANCE_FROM_OBJECT", 442, "Distance from Object", ""},
	{4, "MATERIAL", 442, "Material", ""},
	{0, NULL, 0, NULL, NULL}
};

EnumPropertyRNA rna_LineStyleColorModifiers_new_type = {
	{(PropertyRNA *)&rna_LineStyleColorModifiers_new_modifier, (PropertyRNA *)&rna_LineStyleColorModifiers_new_name,
	-1, "type", 7, "",
	"Color modifier type to add",
	0, "*",
	PROP_ENUM, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	NULL, NULL, NULL, NULL, NULL, NULL, rna_LineStyleColorModifiers_new_type_items, 4, 1
};

PointerPropertyRNA rna_LineStyleColorModifiers_new_modifier = {
	{NULL, (PropertyRNA *)&rna_LineStyleColorModifiers_new_type,
	-1, "modifier", 8388616, "",
	"Newly added color modifier",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	NULL, NULL, NULL, NULL,&RNA_LineStyleColorModifier
};

FunctionRNA rna_LineStyleColorModifiers_new_func = {
	{(FunctionRNA *)&rna_LineStyleColorModifiers_remove_func, NULL,
	NULL,
	{(PropertyRNA *)&rna_LineStyleColorModifiers_new_name, (PropertyRNA *)&rna_LineStyleColorModifiers_new_modifier}},
	"new", 16, "Add a color modifier to line style",
	LineStyleColorModifiers_new_call,
	(PropertyRNA *)&rna_LineStyleColorModifiers_new_modifier
};

PointerPropertyRNA rna_LineStyleColorModifiers_remove_modifier = {
	{NULL, NULL,
	-1, "modifier", 264196, "",
	"Color modifier to remove",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	NULL, NULL, NULL, NULL,&RNA_LineStyleColorModifier
};

FunctionRNA rna_LineStyleColorModifiers_remove_func = {
	{NULL, (FunctionRNA *)&rna_LineStyleColorModifiers_new_func,
	NULL,
	{(PropertyRNA *)&rna_LineStyleColorModifiers_remove_modifier, (PropertyRNA *)&rna_LineStyleColorModifiers_remove_modifier}},
	"remove", 16, "Remove a color modifier from line style",
	LineStyleColorModifiers_remove_call,
	NULL
};

StructRNA RNA_LineStyleColorModifiers = {
	{(ContainerRNA *)&RNA_LineStyleAlphaModifiers, (ContainerRNA *)&RNA_LineStyleTextureSlots,
	NULL,
	{(PropertyRNA *)&rna_LineStyleColorModifiers_rna_properties, (PropertyRNA *)&rna_LineStyleColorModifiers_rna_type}},
	"LineStyleColorModifiers", NULL, NULL, 4, "Color Modifiers",
	"Color modifiers for changing line colors",
	"*", 17,
	NULL, (PropertyRNA *)&rna_LineStyleColorModifiers_rna_properties,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	{(FunctionRNA *)&rna_LineStyleColorModifiers_new_func, (FunctionRNA *)&rna_LineStyleColorModifiers_remove_func}
};

/* Alpha Modifiers */
CollectionPropertyRNA rna_LineStyleAlphaModifiers_rna_properties = {
	{(PropertyRNA *)&rna_LineStyleAlphaModifiers_rna_type, NULL,
	-1, "rna_properties", 128, "Properties",
	"RNA property collection",
	0, "*",
	PROP_COLLECTION, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	LineStyleAlphaModifiers_rna_properties_begin, LineStyleAlphaModifiers_rna_properties_next, LineStyleAlphaModifiers_rna_properties_end, LineStyleAlphaModifiers_rna_properties_get, NULL, NULL, LineStyleAlphaModifiers_rna_properties_lookup_string, NULL, &RNA_Property
};

PointerPropertyRNA rna_LineStyleAlphaModifiers_rna_type = {
	{NULL, (PropertyRNA *)&rna_LineStyleAlphaModifiers_rna_properties,
	-1, "rna_type", 8912896, "RNA",
	"RNA type definition",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	LineStyleAlphaModifiers_rna_type_get, NULL, NULL, NULL,&RNA_Struct
};

StringPropertyRNA rna_LineStyleAlphaModifiers_new_name = {
	{(PropertyRNA *)&rna_LineStyleAlphaModifiers_new_type, NULL,
	-1, "name", 262149, "",
	"New name for the alpha modifier (not unique)",
	0, "*",
	PROP_STRING, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	NULL, NULL, NULL, NULL, NULL, NULL, 0, "AlphaModifier"
};

static EnumPropertyItem rna_LineStyleAlphaModifiers_new_type_items[5] = {
	{1, "ALONG_STROKE", 442, "Along Stroke", ""},
	{2, "DISTANCE_FROM_CAMERA", 442, "Distance from Camera", ""},
	{3, "DISTANCE_FROM_OBJECT", 442, "Distance from Object", ""},
	{4, "MATERIAL", 442, "Material", ""},
	{0, NULL, 0, NULL, NULL}
};

EnumPropertyRNA rna_LineStyleAlphaModifiers_new_type = {
	{(PropertyRNA *)&rna_LineStyleAlphaModifiers_new_modifier, (PropertyRNA *)&rna_LineStyleAlphaModifiers_new_name,
	-1, "type", 7, "",
	"Alpha modifier type to add",
	0, "*",
	PROP_ENUM, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	NULL, NULL, NULL, NULL, NULL, NULL, rna_LineStyleAlphaModifiers_new_type_items, 4, 1
};

PointerPropertyRNA rna_LineStyleAlphaModifiers_new_modifier = {
	{NULL, (PropertyRNA *)&rna_LineStyleAlphaModifiers_new_type,
	-1, "modifier", 8388616, "",
	"Newly added alpha modifier",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	NULL, NULL, NULL, NULL,&RNA_LineStyleAlphaModifier
};

FunctionRNA rna_LineStyleAlphaModifiers_new_func = {
	{(FunctionRNA *)&rna_LineStyleAlphaModifiers_remove_func, NULL,
	NULL,
	{(PropertyRNA *)&rna_LineStyleAlphaModifiers_new_name, (PropertyRNA *)&rna_LineStyleAlphaModifiers_new_modifier}},
	"new", 16, "Add a alpha modifier to line style",
	LineStyleAlphaModifiers_new_call,
	(PropertyRNA *)&rna_LineStyleAlphaModifiers_new_modifier
};

PointerPropertyRNA rna_LineStyleAlphaModifiers_remove_modifier = {
	{NULL, NULL,
	-1, "modifier", 264196, "",
	"Alpha modifier to remove",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	NULL, NULL, NULL, NULL,&RNA_LineStyleAlphaModifier
};

FunctionRNA rna_LineStyleAlphaModifiers_remove_func = {
	{NULL, (FunctionRNA *)&rna_LineStyleAlphaModifiers_new_func,
	NULL,
	{(PropertyRNA *)&rna_LineStyleAlphaModifiers_remove_modifier, (PropertyRNA *)&rna_LineStyleAlphaModifiers_remove_modifier}},
	"remove", 16, "Remove a alpha modifier from line style",
	LineStyleAlphaModifiers_remove_call,
	NULL
};

StructRNA RNA_LineStyleAlphaModifiers = {
	{(ContainerRNA *)&RNA_LineStyleThicknessModifiers, (ContainerRNA *)&RNA_LineStyleColorModifiers,
	NULL,
	{(PropertyRNA *)&rna_LineStyleAlphaModifiers_rna_properties, (PropertyRNA *)&rna_LineStyleAlphaModifiers_rna_type}},
	"LineStyleAlphaModifiers", NULL, NULL, 4, "Alpha Modifiers",
	"Alpha modifiers for changing line alphas",
	"*", 17,
	NULL, (PropertyRNA *)&rna_LineStyleAlphaModifiers_rna_properties,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	{(FunctionRNA *)&rna_LineStyleAlphaModifiers_new_func, (FunctionRNA *)&rna_LineStyleAlphaModifiers_remove_func}
};

/* Thickness Modifiers */
CollectionPropertyRNA rna_LineStyleThicknessModifiers_rna_properties = {
	{(PropertyRNA *)&rna_LineStyleThicknessModifiers_rna_type, NULL,
	-1, "rna_properties", 128, "Properties",
	"RNA property collection",
	0, "*",
	PROP_COLLECTION, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	LineStyleThicknessModifiers_rna_properties_begin, LineStyleThicknessModifiers_rna_properties_next, LineStyleThicknessModifiers_rna_properties_end, LineStyleThicknessModifiers_rna_properties_get, NULL, NULL, LineStyleThicknessModifiers_rna_properties_lookup_string, NULL, &RNA_Property
};

PointerPropertyRNA rna_LineStyleThicknessModifiers_rna_type = {
	{NULL, (PropertyRNA *)&rna_LineStyleThicknessModifiers_rna_properties,
	-1, "rna_type", 8912896, "RNA",
	"RNA type definition",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	LineStyleThicknessModifiers_rna_type_get, NULL, NULL, NULL,&RNA_Struct
};

StringPropertyRNA rna_LineStyleThicknessModifiers_new_name = {
	{(PropertyRNA *)&rna_LineStyleThicknessModifiers_new_type, NULL,
	-1, "name", 262149, "",
	"New name for the thickness modifier (not unique)",
	0, "*",
	PROP_STRING, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	NULL, NULL, NULL, NULL, NULL, NULL, 0, "ThicknessModifier"
};

static EnumPropertyItem rna_LineStyleThicknessModifiers_new_type_items[6] = {
	{1, "ALONG_STROKE", 442, "Along Stroke", ""},
	{13, "CALLIGRAPHY", 442, "Calligraphy", ""},
	{2, "DISTANCE_FROM_CAMERA", 442, "Distance from Camera", ""},
	{3, "DISTANCE_FROM_OBJECT", 442, "Distance from Object", ""},
	{4, "MATERIAL", 442, "Material", ""},
	{0, NULL, 0, NULL, NULL}
};

EnumPropertyRNA rna_LineStyleThicknessModifiers_new_type = {
	{(PropertyRNA *)&rna_LineStyleThicknessModifiers_new_modifier, (PropertyRNA *)&rna_LineStyleThicknessModifiers_new_name,
	-1, "type", 7, "",
	"Thickness modifier type to add",
	0, "*",
	PROP_ENUM, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	NULL, NULL, NULL, NULL, NULL, NULL, rna_LineStyleThicknessModifiers_new_type_items, 5, 1
};

PointerPropertyRNA rna_LineStyleThicknessModifiers_new_modifier = {
	{NULL, (PropertyRNA *)&rna_LineStyleThicknessModifiers_new_type,
	-1, "modifier", 8388616, "",
	"Newly added thickness modifier",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	NULL, NULL, NULL, NULL,&RNA_LineStyleThicknessModifier
};

FunctionRNA rna_LineStyleThicknessModifiers_new_func = {
	{(FunctionRNA *)&rna_LineStyleThicknessModifiers_remove_func, NULL,
	NULL,
	{(PropertyRNA *)&rna_LineStyleThicknessModifiers_new_name, (PropertyRNA *)&rna_LineStyleThicknessModifiers_new_modifier}},
	"new", 16, "Add a thickness modifier to line style",
	LineStyleThicknessModifiers_new_call,
	(PropertyRNA *)&rna_LineStyleThicknessModifiers_new_modifier
};

PointerPropertyRNA rna_LineStyleThicknessModifiers_remove_modifier = {
	{NULL, NULL,
	-1, "modifier", 264196, "",
	"Thickness modifier to remove",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	NULL, NULL, NULL, NULL,&RNA_LineStyleThicknessModifier
};

FunctionRNA rna_LineStyleThicknessModifiers_remove_func = {
	{NULL, (FunctionRNA *)&rna_LineStyleThicknessModifiers_new_func,
	NULL,
	{(PropertyRNA *)&rna_LineStyleThicknessModifiers_remove_modifier, (PropertyRNA *)&rna_LineStyleThicknessModifiers_remove_modifier}},
	"remove", 16, "Remove a thickness modifier from line style",
	LineStyleThicknessModifiers_remove_call,
	NULL
};

StructRNA RNA_LineStyleThicknessModifiers = {
	{(ContainerRNA *)&RNA_LineStyleGeometryModifiers, (ContainerRNA *)&RNA_LineStyleAlphaModifiers,
	NULL,
	{(PropertyRNA *)&rna_LineStyleThicknessModifiers_rna_properties, (PropertyRNA *)&rna_LineStyleThicknessModifiers_rna_type}},
	"LineStyleThicknessModifiers", NULL, NULL, 4, "Thickness Modifiers",
	"Thickness modifiers for changing line thicknesss",
	"*", 17,
	NULL, (PropertyRNA *)&rna_LineStyleThicknessModifiers_rna_properties,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	{(FunctionRNA *)&rna_LineStyleThicknessModifiers_new_func, (FunctionRNA *)&rna_LineStyleThicknessModifiers_remove_func}
};

/* Geometry Modifiers */
CollectionPropertyRNA rna_LineStyleGeometryModifiers_rna_properties = {
	{(PropertyRNA *)&rna_LineStyleGeometryModifiers_rna_type, NULL,
	-1, "rna_properties", 128, "Properties",
	"RNA property collection",
	0, "*",
	PROP_COLLECTION, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	LineStyleGeometryModifiers_rna_properties_begin, LineStyleGeometryModifiers_rna_properties_next, LineStyleGeometryModifiers_rna_properties_end, LineStyleGeometryModifiers_rna_properties_get, NULL, NULL, LineStyleGeometryModifiers_rna_properties_lookup_string, NULL, &RNA_Property
};

PointerPropertyRNA rna_LineStyleGeometryModifiers_rna_type = {
	{NULL, (PropertyRNA *)&rna_LineStyleGeometryModifiers_rna_properties,
	-1, "rna_type", 8912896, "RNA",
	"RNA type definition",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	LineStyleGeometryModifiers_rna_type_get, NULL, NULL, NULL,&RNA_Struct
};

StringPropertyRNA rna_LineStyleGeometryModifiers_new_name = {
	{(PropertyRNA *)&rna_LineStyleGeometryModifiers_new_type, NULL,
	-1, "name", 262149, "",
	"New name for the geometry modifier (not unique)",
	0, "*",
	PROP_STRING, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	NULL, NULL, NULL, NULL, NULL, NULL, 0, "GeometryModifier"
};

static EnumPropertyItem rna_LineStyleGeometryModifiers_new_type_items[14] = {
	{17, "2D_OFFSET", 442, "2D Offset", ""},
	{18, "2D_TRANSFORM", 442, "2D Transform", ""},
	{11, "BACKBONE_STRETCHER", 442, "Backbone Stretcher", ""},
	{6, "BEZIER_CURVE", 442, "Bezier Curve", ""},
	{16, "BLUEPRINT", 442, "Blueprint", ""},
	{15, "GUIDING_LINES", 442, "Guiding Lines", ""},
	{9, "PERLIN_NOISE_1D", 442, "Perlin Noise 1D", ""},
	{10, "PERLIN_NOISE_2D", 442, "Perlin Noise 2D", ""},
	{14, "POLYGONIZATION", 442, "Polygonization", ""},
	{5, "SAMPLING", 442, "Sampling", ""},
	{7, "SINUS_DISPLACEMENT", 442, "Sinus Displacement", ""},
	{8, "SPATIAL_NOISE", 442, "Spatial Noise", ""},
	{12, "TIP_REMOVER", 442, "Tip Remover", ""},
	{0, NULL, 0, NULL, NULL}
};

EnumPropertyRNA rna_LineStyleGeometryModifiers_new_type = {
	{(PropertyRNA *)&rna_LineStyleGeometryModifiers_new_modifier, (PropertyRNA *)&rna_LineStyleGeometryModifiers_new_name,
	-1, "type", 7, "",
	"Geometry modifier type to add",
	0, "*",
	PROP_ENUM, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	NULL, NULL, NULL, NULL, NULL, NULL, rna_LineStyleGeometryModifiers_new_type_items, 13, 17
};

PointerPropertyRNA rna_LineStyleGeometryModifiers_new_modifier = {
	{NULL, (PropertyRNA *)&rna_LineStyleGeometryModifiers_new_type,
	-1, "modifier", 8388616, "",
	"Newly added geometry modifier",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	NULL, NULL, NULL, NULL,&RNA_LineStyleGeometryModifier
};

FunctionRNA rna_LineStyleGeometryModifiers_new_func = {
	{(FunctionRNA *)&rna_LineStyleGeometryModifiers_remove_func, NULL,
	NULL,
	{(PropertyRNA *)&rna_LineStyleGeometryModifiers_new_name, (PropertyRNA *)&rna_LineStyleGeometryModifiers_new_modifier}},
	"new", 16, "Add a geometry modifier to line style",
	LineStyleGeometryModifiers_new_call,
	(PropertyRNA *)&rna_LineStyleGeometryModifiers_new_modifier
};

PointerPropertyRNA rna_LineStyleGeometryModifiers_remove_modifier = {
	{NULL, NULL,
	-1, "modifier", 264196, "",
	"Geometry modifier to remove",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	NULL, NULL, NULL, NULL,&RNA_LineStyleGeometryModifier
};

FunctionRNA rna_LineStyleGeometryModifiers_remove_func = {
	{NULL, (FunctionRNA *)&rna_LineStyleGeometryModifiers_new_func,
	NULL,
	{(PropertyRNA *)&rna_LineStyleGeometryModifiers_remove_modifier, (PropertyRNA *)&rna_LineStyleGeometryModifiers_remove_modifier}},
	"remove", 16, "Remove a geometry modifier from line style",
	LineStyleGeometryModifiers_remove_call,
	NULL
};

StructRNA RNA_LineStyleGeometryModifiers = {
	{(ContainerRNA *)&RNA_LineStyleTextureSlot, (ContainerRNA *)&RNA_LineStyleThicknessModifiers,
	NULL,
	{(PropertyRNA *)&rna_LineStyleGeometryModifiers_rna_properties, (PropertyRNA *)&rna_LineStyleGeometryModifiers_rna_type}},
	"LineStyleGeometryModifiers", NULL, NULL, 4, "Geometry Modifiers",
	"Geometry modifiers for changing line geometrys",
	"*", 17,
	NULL, (PropertyRNA *)&rna_LineStyleGeometryModifiers_rna_properties,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	{(FunctionRNA *)&rna_LineStyleGeometryModifiers_new_func, (FunctionRNA *)&rna_LineStyleGeometryModifiers_remove_func}
};

/* LineStyle Texture Slot */
static EnumPropertyItem rna_LineStyleTextureSlot_mapping_x_items[5] = {
	{0, "NONE", 0, "None", ""},
	{1, "X", 0, "X", ""},
	{2, "Y", 0, "Y", ""},
	{3, "Z", 0, "Z", ""},
	{0, NULL, 0, NULL, NULL}
};

EnumPropertyRNA rna_LineStyleTextureSlot_mapping_x = {
	{(PropertyRNA *)&rna_LineStyleTextureSlot_mapping_y, NULL,
	-1, "mapping_x", 3, "X Mapping",
	"",
	0, "*",
	PROP_ENUM, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_LineStyle_update, 0, NULL, NULL,
	0, -1, NULL},
	LineStyleTextureSlot_mapping_x_get, LineStyleTextureSlot_mapping_x_set, NULL, NULL, NULL, NULL, rna_LineStyleTextureSlot_mapping_x_items, 4, 0
};

static EnumPropertyItem rna_LineStyleTextureSlot_mapping_y_items[5] = {
	{0, "NONE", 0, "None", ""},
	{1, "X", 0, "X", ""},
	{2, "Y", 0, "Y", ""},
	{3, "Z", 0, "Z", ""},
	{0, NULL, 0, NULL, NULL}
};

EnumPropertyRNA rna_LineStyleTextureSlot_mapping_y = {
	{(PropertyRNA *)&rna_LineStyleTextureSlot_mapping_z, (PropertyRNA *)&rna_LineStyleTextureSlot_mapping_x,
	-1, "mapping_y", 3, "Y Mapping",
	"",
	0, "*",
	PROP_ENUM, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_LineStyle_update, 0, NULL, NULL,
	0, -1, NULL},
	LineStyleTextureSlot_mapping_y_get, LineStyleTextureSlot_mapping_y_set, NULL, NULL, NULL, NULL, rna_LineStyleTextureSlot_mapping_y_items, 4, 0
};

static EnumPropertyItem rna_LineStyleTextureSlot_mapping_z_items[5] = {
	{0, "NONE", 0, "None", ""},
	{1, "X", 0, "X", ""},
	{2, "Y", 0, "Y", ""},
	{3, "Z", 0, "Z", ""},
	{0, NULL, 0, NULL, NULL}
};

EnumPropertyRNA rna_LineStyleTextureSlot_mapping_z = {
	{(PropertyRNA *)&rna_LineStyleTextureSlot_mapping, (PropertyRNA *)&rna_LineStyleTextureSlot_mapping_y,
	-1, "mapping_z", 3, "Z Mapping",
	"",
	0, "*",
	PROP_ENUM, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_LineStyle_update, 0, NULL, NULL,
	0, -1, NULL},
	LineStyleTextureSlot_mapping_z_get, LineStyleTextureSlot_mapping_z_set, NULL, NULL, NULL, NULL, rna_LineStyleTextureSlot_mapping_z_items, 4, 0
};

static EnumPropertyItem rna_LineStyleTextureSlot_mapping_items[5] = {
	{0, "FLAT", 0, "Flat", "Map X and Y coordinates directly"},
	{1, "CUBE", 0, "Cube", "Map using the normal vector"},
	{2, "TUBE", 0, "Tube", "Map with Z as central axis"},
	{3, "SPHERE", 0, "Sphere", "Map with Z as central axis"},
	{0, NULL, 0, NULL, NULL}
};

EnumPropertyRNA rna_LineStyleTextureSlot_mapping = {
	{(PropertyRNA *)&rna_LineStyleTextureSlot_use_map_color_diffuse, (PropertyRNA *)&rna_LineStyleTextureSlot_mapping_z,
	-1, "mapping", 3, "Mapping",
	"",
	0, "*",
	PROP_ENUM, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_LineStyle_update, 0, NULL, NULL,
	0, -1, NULL},
	LineStyleTextureSlot_mapping_get, LineStyleTextureSlot_mapping_set, NULL, NULL, NULL, NULL, rna_LineStyleTextureSlot_mapping_items, 4, 0
};

BoolPropertyRNA rna_LineStyleTextureSlot_use_map_color_diffuse = {
	{(PropertyRNA *)&rna_LineStyleTextureSlot_use_map_alpha, (PropertyRNA *)&rna_LineStyleTextureSlot_mapping,
	-1, "use_map_color_diffuse", 3, "Diffuse Color",
	"The texture affects basic color of the stroke",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_LineStyle_update, 0, NULL, NULL,
	0, -1, NULL},
	LineStyleTextureSlot_use_map_color_diffuse_get, LineStyleTextureSlot_use_map_color_diffuse_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_LineStyleTextureSlot_use_map_alpha = {
	{(PropertyRNA *)&rna_LineStyleTextureSlot_use_tips, (PropertyRNA *)&rna_LineStyleTextureSlot_use_map_color_diffuse,
	-1, "use_map_alpha", 3, "Alpha",
	"The texture affects the alpha value",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_LineStyle_update, 0, NULL, NULL,
	0, -1, NULL},
	LineStyleTextureSlot_use_map_alpha_get, LineStyleTextureSlot_use_map_alpha_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_LineStyleTextureSlot_use_tips = {
	{(PropertyRNA *)&rna_LineStyleTextureSlot_texture_coords, (PropertyRNA *)&rna_LineStyleTextureSlot_use_map_alpha,
	-1, "use_tips", 3, "Use Tips",
	"Lower half of the texture is for tips of the stroke",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_LineStyle_update, 0, NULL, NULL,
	0, -1, NULL},
	LineStyleTextureSlot_use_tips_get, LineStyleTextureSlot_use_tips_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

static EnumPropertyItem rna_LineStyleTextureSlot_texture_coords_items[5] = {
	{1024, "WINDOW", 0, "Window", "Use screen coordinates as texture coordinates"},
	{8, "GLOBAL", 0, "Global", "Use global coordinates for the texture coordinates"},
	{16, "ALONG_STROKE", 0, "Along stroke", "Use stroke length for texture coordinates"},
	{1, "ORCO", 0, "Generated", "Use the original undeformed coordinates of the object"},
	{0, NULL, 0, NULL, NULL}
};

EnumPropertyRNA rna_LineStyleTextureSlot_texture_coords = {
	{(PropertyRNA *)&rna_LineStyleTextureSlot_alpha_factor, (PropertyRNA *)&rna_LineStyleTextureSlot_use_tips,
	-1, "texture_coords", 3, "Texture Coordinates",
	"Texture coordinates used to map the texture onto the background",
	0, "*",
	PROP_ENUM, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_LineStyle_update, 0, NULL, NULL,
	0, -1, NULL},
	LineStyleTextureSlot_texture_coords_get, LineStyleTextureSlot_texture_coords_set, NULL, NULL, NULL, NULL, rna_LineStyleTextureSlot_texture_coords_items, 4, 1024
};

FloatPropertyRNA rna_LineStyleTextureSlot_alpha_factor = {
	{(PropertyRNA *)&rna_LineStyleTextureSlot_diffuse_color_factor, (PropertyRNA *)&rna_LineStyleTextureSlot_texture_coords,
	-1, "alpha_factor", 8195, "Alpha Factor",
	"Amount texture affects alpha",
	0, "*",
	PROP_FLOAT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_LineStyle_update, 0, NULL, NULL,
	offsetof(MTex, alphafac), 4, NULL},
	LineStyleTextureSlot_alpha_factor_get, LineStyleTextureSlot_alpha_factor_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, -1.0f, 1.0f, -FLT_MAX, FLT_MAX, 10.0f, 3, 0.0f, NULL
};

FloatPropertyRNA rna_LineStyleTextureSlot_diffuse_color_factor = {
	{NULL, (PropertyRNA *)&rna_LineStyleTextureSlot_alpha_factor,
	-1, "diffuse_color_factor", 8195, "Diffuse Color Factor",
	"Amount texture affects diffuse color",
	0, "*",
	PROP_FLOAT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_LineStyle_update, 0, NULL, NULL,
	offsetof(MTex, colfac), 4, NULL},
	LineStyleTextureSlot_diffuse_color_factor_get, LineStyleTextureSlot_diffuse_color_factor_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 1.0f, -FLT_MAX, FLT_MAX, 10.0f, 3, 0.0f, NULL
};

StructRNA RNA_LineStyleTextureSlot = {
	{(ContainerRNA *)&RNA_BlendData, (ContainerRNA *)&RNA_LineStyleGeometryModifiers,
	NULL,
	{(PropertyRNA *)&rna_LineStyleTextureSlot_mapping_x, (PropertyRNA *)&rna_LineStyleTextureSlot_diffuse_color_factor}},
	"LineStyleTextureSlot", NULL, NULL, 4, "LineStyle Texture Slot",
	"Texture slot for textures in a LineStyle datablock",
	"*", 166,
	(PropertyRNA *)&rna_TextureSlot_name, (PropertyRNA *)&rna_TextureSlot_rna_properties,
	&RNA_TextureSlot,
	NULL,
	NULL,
	rna_TextureSlot_path,
	NULL,
	NULL,
	NULL,
	NULL,
	{NULL, NULL}
};

