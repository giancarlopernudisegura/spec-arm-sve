
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

#include "rna_main.c"
#include "rna_main_api.c"

#pragma GCC diagnostic ignored "-Wunused-parameter"

/* Autogenerated Functions */


CollectionPropertyRNA rna_BlendData_rna_properties;
PointerPropertyRNA rna_BlendData_rna_type;
StringPropertyRNA rna_BlendData_filepath;
BoolPropertyRNA rna_BlendData_is_dirty;
BoolPropertyRNA rna_BlendData_is_saved;
BoolPropertyRNA rna_BlendData_use_autopack;
IntPropertyRNA rna_BlendData_version;
CollectionPropertyRNA rna_BlendData_cameras;
CollectionPropertyRNA rna_BlendData_scenes;
CollectionPropertyRNA rna_BlendData_objects;
CollectionPropertyRNA rna_BlendData_materials;
CollectionPropertyRNA rna_BlendData_node_groups;
CollectionPropertyRNA rna_BlendData_meshes;
CollectionPropertyRNA rna_BlendData_lamps;
CollectionPropertyRNA rna_BlendData_libraries;
CollectionPropertyRNA rna_BlendData_screens;
CollectionPropertyRNA rna_BlendData_window_managers;
CollectionPropertyRNA rna_BlendData_images;
CollectionPropertyRNA rna_BlendData_lattices;
CollectionPropertyRNA rna_BlendData_curves;
CollectionPropertyRNA rna_BlendData_metaballs;
CollectionPropertyRNA rna_BlendData_fonts;
CollectionPropertyRNA rna_BlendData_textures;
CollectionPropertyRNA rna_BlendData_brushes;
CollectionPropertyRNA rna_BlendData_worlds;
CollectionPropertyRNA rna_BlendData_groups;
CollectionPropertyRNA rna_BlendData_shape_keys;
CollectionPropertyRNA rna_BlendData_scripts;
CollectionPropertyRNA rna_BlendData_texts;
CollectionPropertyRNA rna_BlendData_speakers;
CollectionPropertyRNA rna_BlendData_sounds;
CollectionPropertyRNA rna_BlendData_armatures;
CollectionPropertyRNA rna_BlendData_actions;
CollectionPropertyRNA rna_BlendData_particles;
CollectionPropertyRNA rna_BlendData_grease_pencil;
CollectionPropertyRNA rna_BlendData_movieclips;
CollectionPropertyRNA rna_BlendData_masks;
CollectionPropertyRNA rna_BlendData_linestyles;


CollectionPropertyRNA rna_BlendDataCameras_rna_properties;
PointerPropertyRNA rna_BlendDataCameras_rna_type;
BoolPropertyRNA rna_BlendDataCameras_is_updated;

extern FunctionRNA rna_BlendDataCameras_new_func;
extern StringPropertyRNA rna_BlendDataCameras_new_name;
extern PointerPropertyRNA rna_BlendDataCameras_new_camera;

extern FunctionRNA rna_BlendDataCameras_remove_func;
extern PointerPropertyRNA rna_BlendDataCameras_remove_camera;

extern FunctionRNA rna_BlendDataCameras_tag_func;
extern BoolPropertyRNA rna_BlendDataCameras_tag_value;



CollectionPropertyRNA rna_BlendDataScenes_rna_properties;
PointerPropertyRNA rna_BlendDataScenes_rna_type;
BoolPropertyRNA rna_BlendDataScenes_is_updated;

extern FunctionRNA rna_BlendDataScenes_new_func;
extern StringPropertyRNA rna_BlendDataScenes_new_name;
extern PointerPropertyRNA rna_BlendDataScenes_new_scene;

extern FunctionRNA rna_BlendDataScenes_remove_func;
extern PointerPropertyRNA rna_BlendDataScenes_remove_scene;

extern FunctionRNA rna_BlendDataScenes_tag_func;
extern BoolPropertyRNA rna_BlendDataScenes_tag_value;



CollectionPropertyRNA rna_BlendDataObjects_rna_properties;
PointerPropertyRNA rna_BlendDataObjects_rna_type;
BoolPropertyRNA rna_BlendDataObjects_is_updated;

extern FunctionRNA rna_BlendDataObjects_new_func;
extern StringPropertyRNA rna_BlendDataObjects_new_name;
extern PointerPropertyRNA rna_BlendDataObjects_new_object_data;
extern PointerPropertyRNA rna_BlendDataObjects_new_object;

extern FunctionRNA rna_BlendDataObjects_remove_func;
extern PointerPropertyRNA rna_BlendDataObjects_remove_object;

extern FunctionRNA rna_BlendDataObjects_tag_func;
extern BoolPropertyRNA rna_BlendDataObjects_tag_value;



CollectionPropertyRNA rna_BlendDataMaterials_rna_properties;
PointerPropertyRNA rna_BlendDataMaterials_rna_type;
BoolPropertyRNA rna_BlendDataMaterials_is_updated;

extern FunctionRNA rna_BlendDataMaterials_new_func;
extern StringPropertyRNA rna_BlendDataMaterials_new_name;
extern PointerPropertyRNA rna_BlendDataMaterials_new_material;

extern FunctionRNA rna_BlendDataMaterials_remove_func;
extern PointerPropertyRNA rna_BlendDataMaterials_remove_material;

extern FunctionRNA rna_BlendDataMaterials_tag_func;
extern BoolPropertyRNA rna_BlendDataMaterials_tag_value;



CollectionPropertyRNA rna_BlendDataNodeTrees_rna_properties;
PointerPropertyRNA rna_BlendDataNodeTrees_rna_type;
BoolPropertyRNA rna_BlendDataNodeTrees_is_updated;

extern FunctionRNA rna_BlendDataNodeTrees_new_func;
extern StringPropertyRNA rna_BlendDataNodeTrees_new_name;
extern EnumPropertyRNA rna_BlendDataNodeTrees_new_type;
extern PointerPropertyRNA rna_BlendDataNodeTrees_new_tree;

extern FunctionRNA rna_BlendDataNodeTrees_remove_func;
extern PointerPropertyRNA rna_BlendDataNodeTrees_remove_tree;

extern FunctionRNA rna_BlendDataNodeTrees_tag_func;
extern BoolPropertyRNA rna_BlendDataNodeTrees_tag_value;



CollectionPropertyRNA rna_BlendDataMeshes_rna_properties;
PointerPropertyRNA rna_BlendDataMeshes_rna_type;
BoolPropertyRNA rna_BlendDataMeshes_is_updated;

extern FunctionRNA rna_BlendDataMeshes_new_func;
extern StringPropertyRNA rna_BlendDataMeshes_new_name;
extern PointerPropertyRNA rna_BlendDataMeshes_new_mesh;

extern FunctionRNA rna_BlendDataMeshes_new_from_object_func;
extern PointerPropertyRNA rna_BlendDataMeshes_new_from_object_scene;
extern PointerPropertyRNA rna_BlendDataMeshes_new_from_object_object;
extern BoolPropertyRNA rna_BlendDataMeshes_new_from_object_apply_modifiers;
extern EnumPropertyRNA rna_BlendDataMeshes_new_from_object_settings;
extern BoolPropertyRNA rna_BlendDataMeshes_new_from_object_calc_tessface;
extern BoolPropertyRNA rna_BlendDataMeshes_new_from_object_calc_undeformed;
extern PointerPropertyRNA rna_BlendDataMeshes_new_from_object_mesh;

extern FunctionRNA rna_BlendDataMeshes_remove_func;
extern PointerPropertyRNA rna_BlendDataMeshes_remove_mesh;

extern FunctionRNA rna_BlendDataMeshes_tag_func;
extern BoolPropertyRNA rna_BlendDataMeshes_tag_value;



CollectionPropertyRNA rna_BlendDataLamps_rna_properties;
PointerPropertyRNA rna_BlendDataLamps_rna_type;
BoolPropertyRNA rna_BlendDataLamps_is_updated;

extern FunctionRNA rna_BlendDataLamps_new_func;
extern StringPropertyRNA rna_BlendDataLamps_new_name;
extern EnumPropertyRNA rna_BlendDataLamps_new_type;
extern PointerPropertyRNA rna_BlendDataLamps_new_lamp;

extern FunctionRNA rna_BlendDataLamps_remove_func;
extern PointerPropertyRNA rna_BlendDataLamps_remove_lamp;

extern FunctionRNA rna_BlendDataLamps_tag_func;
extern BoolPropertyRNA rna_BlendDataLamps_tag_value;



CollectionPropertyRNA rna_BlendDataLibraries_rna_properties;
PointerPropertyRNA rna_BlendDataLibraries_rna_type;
BoolPropertyRNA rna_BlendDataLibraries_is_updated;

extern FunctionRNA rna_BlendDataLibraries_tag_func;
extern BoolPropertyRNA rna_BlendDataLibraries_tag_value;



CollectionPropertyRNA rna_BlendDataScreens_rna_properties;
PointerPropertyRNA rna_BlendDataScreens_rna_type;
BoolPropertyRNA rna_BlendDataScreens_is_updated;

extern FunctionRNA rna_BlendDataScreens_tag_func;
extern BoolPropertyRNA rna_BlendDataScreens_tag_value;



CollectionPropertyRNA rna_BlendDataWindowManagers_rna_properties;
PointerPropertyRNA rna_BlendDataWindowManagers_rna_type;
BoolPropertyRNA rna_BlendDataWindowManagers_is_updated;

extern FunctionRNA rna_BlendDataWindowManagers_tag_func;
extern BoolPropertyRNA rna_BlendDataWindowManagers_tag_value;



CollectionPropertyRNA rna_BlendDataImages_rna_properties;
PointerPropertyRNA rna_BlendDataImages_rna_type;
BoolPropertyRNA rna_BlendDataImages_is_updated;

extern FunctionRNA rna_BlendDataImages_new_func;
extern StringPropertyRNA rna_BlendDataImages_new_name;
extern IntPropertyRNA rna_BlendDataImages_new_width;
extern IntPropertyRNA rna_BlendDataImages_new_height;
extern BoolPropertyRNA rna_BlendDataImages_new_alpha;
extern BoolPropertyRNA rna_BlendDataImages_new_float_buffer;
extern PointerPropertyRNA rna_BlendDataImages_new_image;

extern FunctionRNA rna_BlendDataImages_load_func;
extern StringPropertyRNA rna_BlendDataImages_load_filepath;
extern PointerPropertyRNA rna_BlendDataImages_load_image;

extern FunctionRNA rna_BlendDataImages_remove_func;
extern PointerPropertyRNA rna_BlendDataImages_remove_image;

extern FunctionRNA rna_BlendDataImages_tag_func;
extern BoolPropertyRNA rna_BlendDataImages_tag_value;



CollectionPropertyRNA rna_BlendDataLattices_rna_properties;
PointerPropertyRNA rna_BlendDataLattices_rna_type;
BoolPropertyRNA rna_BlendDataLattices_is_updated;

extern FunctionRNA rna_BlendDataLattices_new_func;
extern StringPropertyRNA rna_BlendDataLattices_new_name;
extern PointerPropertyRNA rna_BlendDataLattices_new_lattice;

extern FunctionRNA rna_BlendDataLattices_remove_func;
extern PointerPropertyRNA rna_BlendDataLattices_remove_lattice;

extern FunctionRNA rna_BlendDataLattices_tag_func;
extern BoolPropertyRNA rna_BlendDataLattices_tag_value;



CollectionPropertyRNA rna_BlendDataCurves_rna_properties;
PointerPropertyRNA rna_BlendDataCurves_rna_type;
BoolPropertyRNA rna_BlendDataCurves_is_updated;

extern FunctionRNA rna_BlendDataCurves_new_func;
extern StringPropertyRNA rna_BlendDataCurves_new_name;
extern EnumPropertyRNA rna_BlendDataCurves_new_type;
extern PointerPropertyRNA rna_BlendDataCurves_new_curve;

extern FunctionRNA rna_BlendDataCurves_remove_func;
extern PointerPropertyRNA rna_BlendDataCurves_remove_curve;

extern FunctionRNA rna_BlendDataCurves_tag_func;
extern BoolPropertyRNA rna_BlendDataCurves_tag_value;



CollectionPropertyRNA rna_BlendDataMetaBalls_rna_properties;
PointerPropertyRNA rna_BlendDataMetaBalls_rna_type;
BoolPropertyRNA rna_BlendDataMetaBalls_is_updated;

extern FunctionRNA rna_BlendDataMetaBalls_new_func;
extern StringPropertyRNA rna_BlendDataMetaBalls_new_name;
extern PointerPropertyRNA rna_BlendDataMetaBalls_new_metaball;

extern FunctionRNA rna_BlendDataMetaBalls_remove_func;
extern PointerPropertyRNA rna_BlendDataMetaBalls_remove_metaball;

extern FunctionRNA rna_BlendDataMetaBalls_tag_func;
extern BoolPropertyRNA rna_BlendDataMetaBalls_tag_value;



CollectionPropertyRNA rna_BlendDataFonts_rna_properties;
PointerPropertyRNA rna_BlendDataFonts_rna_type;
BoolPropertyRNA rna_BlendDataFonts_is_updated;

extern FunctionRNA rna_BlendDataFonts_load_func;
extern StringPropertyRNA rna_BlendDataFonts_load_filepath;
extern PointerPropertyRNA rna_BlendDataFonts_load_vfont;

extern FunctionRNA rna_BlendDataFonts_remove_func;
extern PointerPropertyRNA rna_BlendDataFonts_remove_vfont;

extern FunctionRNA rna_BlendDataFonts_tag_func;
extern BoolPropertyRNA rna_BlendDataFonts_tag_value;



CollectionPropertyRNA rna_BlendDataTextures_rna_properties;
PointerPropertyRNA rna_BlendDataTextures_rna_type;
BoolPropertyRNA rna_BlendDataTextures_is_updated;

extern FunctionRNA rna_BlendDataTextures_new_func;
extern StringPropertyRNA rna_BlendDataTextures_new_name;
extern EnumPropertyRNA rna_BlendDataTextures_new_type;
extern PointerPropertyRNA rna_BlendDataTextures_new_texture;

extern FunctionRNA rna_BlendDataTextures_remove_func;
extern PointerPropertyRNA rna_BlendDataTextures_remove_texture;

extern FunctionRNA rna_BlendDataTextures_tag_func;
extern BoolPropertyRNA rna_BlendDataTextures_tag_value;



CollectionPropertyRNA rna_BlendDataBrushes_rna_properties;
PointerPropertyRNA rna_BlendDataBrushes_rna_type;
BoolPropertyRNA rna_BlendDataBrushes_is_updated;

extern FunctionRNA rna_BlendDataBrushes_new_func;
extern StringPropertyRNA rna_BlendDataBrushes_new_name;
extern PointerPropertyRNA rna_BlendDataBrushes_new_brush;

extern FunctionRNA rna_BlendDataBrushes_remove_func;
extern PointerPropertyRNA rna_BlendDataBrushes_remove_brush;

extern FunctionRNA rna_BlendDataBrushes_tag_func;
extern BoolPropertyRNA rna_BlendDataBrushes_tag_value;



CollectionPropertyRNA rna_BlendDataWorlds_rna_properties;
PointerPropertyRNA rna_BlendDataWorlds_rna_type;
BoolPropertyRNA rna_BlendDataWorlds_is_updated;

extern FunctionRNA rna_BlendDataWorlds_new_func;
extern StringPropertyRNA rna_BlendDataWorlds_new_name;
extern PointerPropertyRNA rna_BlendDataWorlds_new_world;

extern FunctionRNA rna_BlendDataWorlds_remove_func;
extern PointerPropertyRNA rna_BlendDataWorlds_remove_world;

extern FunctionRNA rna_BlendDataWorlds_tag_func;
extern BoolPropertyRNA rna_BlendDataWorlds_tag_value;



CollectionPropertyRNA rna_BlendDataGroups_rna_properties;
PointerPropertyRNA rna_BlendDataGroups_rna_type;
BoolPropertyRNA rna_BlendDataGroups_is_updated;

extern FunctionRNA rna_BlendDataGroups_new_func;
extern StringPropertyRNA rna_BlendDataGroups_new_name;
extern PointerPropertyRNA rna_BlendDataGroups_new_group;

extern FunctionRNA rna_BlendDataGroups_remove_func;
extern PointerPropertyRNA rna_BlendDataGroups_remove_group;

extern FunctionRNA rna_BlendDataGroups_tag_func;
extern BoolPropertyRNA rna_BlendDataGroups_tag_value;



CollectionPropertyRNA rna_BlendDataTexts_rna_properties;
PointerPropertyRNA rna_BlendDataTexts_rna_type;
BoolPropertyRNA rna_BlendDataTexts_is_updated;

extern FunctionRNA rna_BlendDataTexts_new_func;
extern StringPropertyRNA rna_BlendDataTexts_new_name;
extern PointerPropertyRNA rna_BlendDataTexts_new_text;

extern FunctionRNA rna_BlendDataTexts_remove_func;
extern PointerPropertyRNA rna_BlendDataTexts_remove_text;

extern FunctionRNA rna_BlendDataTexts_load_func;
extern StringPropertyRNA rna_BlendDataTexts_load_filepath;
extern BoolPropertyRNA rna_BlendDataTexts_load_internal;
extern PointerPropertyRNA rna_BlendDataTexts_load_text;

extern FunctionRNA rna_BlendDataTexts_tag_func;
extern BoolPropertyRNA rna_BlendDataTexts_tag_value;



CollectionPropertyRNA rna_BlendDataSpeakers_rna_properties;
PointerPropertyRNA rna_BlendDataSpeakers_rna_type;
BoolPropertyRNA rna_BlendDataSpeakers_is_updated;

extern FunctionRNA rna_BlendDataSpeakers_new_func;
extern StringPropertyRNA rna_BlendDataSpeakers_new_name;
extern PointerPropertyRNA rna_BlendDataSpeakers_new_speaker;

extern FunctionRNA rna_BlendDataSpeakers_remove_func;
extern PointerPropertyRNA rna_BlendDataSpeakers_remove_speaker;

extern FunctionRNA rna_BlendDataSpeakers_tag_func;
extern BoolPropertyRNA rna_BlendDataSpeakers_tag_value;



CollectionPropertyRNA rna_BlendDataSounds_rna_properties;
PointerPropertyRNA rna_BlendDataSounds_rna_type;
BoolPropertyRNA rna_BlendDataSounds_is_updated;

extern FunctionRNA rna_BlendDataSounds_tag_func;
extern BoolPropertyRNA rna_BlendDataSounds_tag_value;



CollectionPropertyRNA rna_BlendDataArmatures_rna_properties;
PointerPropertyRNA rna_BlendDataArmatures_rna_type;
BoolPropertyRNA rna_BlendDataArmatures_is_updated;

extern FunctionRNA rna_BlendDataArmatures_new_func;
extern StringPropertyRNA rna_BlendDataArmatures_new_name;
extern PointerPropertyRNA rna_BlendDataArmatures_new_armature;

extern FunctionRNA rna_BlendDataArmatures_remove_func;
extern PointerPropertyRNA rna_BlendDataArmatures_remove_armature;

extern FunctionRNA rna_BlendDataArmatures_tag_func;
extern BoolPropertyRNA rna_BlendDataArmatures_tag_value;



CollectionPropertyRNA rna_BlendDataActions_rna_properties;
PointerPropertyRNA rna_BlendDataActions_rna_type;
BoolPropertyRNA rna_BlendDataActions_is_updated;

extern FunctionRNA rna_BlendDataActions_new_func;
extern StringPropertyRNA rna_BlendDataActions_new_name;
extern PointerPropertyRNA rna_BlendDataActions_new_action;

extern FunctionRNA rna_BlendDataActions_remove_func;
extern PointerPropertyRNA rna_BlendDataActions_remove_action;

extern FunctionRNA rna_BlendDataActions_tag_func;
extern BoolPropertyRNA rna_BlendDataActions_tag_value;



CollectionPropertyRNA rna_BlendDataParticles_rna_properties;
PointerPropertyRNA rna_BlendDataParticles_rna_type;
BoolPropertyRNA rna_BlendDataParticles_is_updated;

extern FunctionRNA rna_BlendDataParticles_new_func;
extern StringPropertyRNA rna_BlendDataParticles_new_name;
extern PointerPropertyRNA rna_BlendDataParticles_new_particle;

extern FunctionRNA rna_BlendDataParticles_remove_func;
extern PointerPropertyRNA rna_BlendDataParticles_remove_particle;

extern FunctionRNA rna_BlendDataParticles_tag_func;
extern BoolPropertyRNA rna_BlendDataParticles_tag_value;



CollectionPropertyRNA rna_BlendDataGreasePencils_rna_properties;
PointerPropertyRNA rna_BlendDataGreasePencils_rna_type;
BoolPropertyRNA rna_BlendDataGreasePencils_is_updated;

extern FunctionRNA rna_BlendDataGreasePencils_tag_func;
extern BoolPropertyRNA rna_BlendDataGreasePencils_tag_value;

extern FunctionRNA rna_BlendDataGreasePencils_new_func;
extern StringPropertyRNA rna_BlendDataGreasePencils_new_name;
extern PointerPropertyRNA rna_BlendDataGreasePencils_new_grease_pencil;

extern FunctionRNA rna_BlendDataGreasePencils_remove_func;
extern PointerPropertyRNA rna_BlendDataGreasePencils_remove_grease_pencil;



CollectionPropertyRNA rna_BlendDataMovieClips_rna_properties;
PointerPropertyRNA rna_BlendDataMovieClips_rna_type;

extern FunctionRNA rna_BlendDataMovieClips_tag_func;
extern BoolPropertyRNA rna_BlendDataMovieClips_tag_value;

extern FunctionRNA rna_BlendDataMovieClips_remove_func;
extern PointerPropertyRNA rna_BlendDataMovieClips_remove_clip;

extern FunctionRNA rna_BlendDataMovieClips_load_func;
extern StringPropertyRNA rna_BlendDataMovieClips_load_filepath;
extern PointerPropertyRNA rna_BlendDataMovieClips_load_clip;



CollectionPropertyRNA rna_BlendDataMasks_rna_properties;
PointerPropertyRNA rna_BlendDataMasks_rna_type;

extern FunctionRNA rna_BlendDataMasks_tag_func;
extern BoolPropertyRNA rna_BlendDataMasks_tag_value;

extern FunctionRNA rna_BlendDataMasks_new_func;
extern StringPropertyRNA rna_BlendDataMasks_new_name;
extern PointerPropertyRNA rna_BlendDataMasks_new_mask;

extern FunctionRNA rna_BlendDataMasks_remove_func;
extern PointerPropertyRNA rna_BlendDataMasks_remove_mask;



CollectionPropertyRNA rna_BlendDataLineStyles_rna_properties;
PointerPropertyRNA rna_BlendDataLineStyles_rna_type;
BoolPropertyRNA rna_BlendDataLineStyles_is_updated;

extern FunctionRNA rna_BlendDataLineStyles_tag_func;
extern BoolPropertyRNA rna_BlendDataLineStyles_tag_value;

extern FunctionRNA rna_BlendDataLineStyles_new_func;
extern StringPropertyRNA rna_BlendDataLineStyles_new_name;
extern PointerPropertyRNA rna_BlendDataLineStyles_new_linestyle;

extern FunctionRNA rna_BlendDataLineStyles_remove_func;
extern PointerPropertyRNA rna_BlendDataLineStyles_remove_linestyle;


static PointerRNA BlendData_rna_properties_get(CollectionPropertyIterator *iter)
{
	return rna_builtin_properties_get(iter);
}

void BlendData_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

	memset(iter, 0, sizeof(*iter));
	iter->parent = *ptr;
	iter->prop = (PropertyRNA *)&rna_BlendData_rna_properties;

	rna_builtin_properties_begin(iter, ptr);

	if (iter->valid)
		iter->ptr = BlendData_rna_properties_get(iter);
}

void BlendData_rna_properties_next(CollectionPropertyIterator *iter)
{
	rna_builtin_properties_next(iter);

	if (iter->valid)
		iter->ptr = BlendData_rna_properties_get(iter);
}

void BlendData_rna_properties_end(CollectionPropertyIterator *iter)
{
	rna_iterator_listbase_end(iter);
}

int BlendData_rna_properties_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
	return rna_builtin_properties_lookup_string(ptr, key, r_ptr);
}

PointerRNA BlendData_rna_type_get(PointerRNA *ptr)
{
	return rna_builtin_type_get(ptr);
}

void BlendData_filepath_get(PointerRNA *ptr, char *value)
{
	rna_Main_filepath_get(ptr, value);
}

int BlendData_filepath_length(PointerRNA *ptr)
{
	return rna_Main_filepath_length(ptr);
}

int BlendData_is_dirty_get(PointerRNA *ptr)
{
	return rna_Main_is_dirty_get(ptr);
}

int BlendData_is_saved_get(PointerRNA *ptr)
{
	return rna_Main_is_saved_get(ptr);
}

int BlendData_use_autopack_get(PointerRNA *ptr)
{
	return rna_Main_use_autopack_get(ptr);
}

void BlendData_use_autopack_set(PointerRNA *ptr, int value)
{
	rna_Main_use_autopack_set(ptr, value);
}

void BlendData_version_get(PointerRNA *ptr, int values[3])
{
	rna_Main_version_get(ptr, values);
}

static PointerRNA BlendData_cameras_get(CollectionPropertyIterator *iter)
{
	return rna_pointer_inherit_refine(&iter->parent, &RNA_Camera, rna_iterator_listbase_get(iter));
}

void BlendData_cameras_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

	memset(iter, 0, sizeof(*iter));
	iter->parent = *ptr;
	iter->prop = (PropertyRNA *)&rna_BlendData_cameras;

	rna_Main_camera_begin(iter, ptr);

	if (iter->valid)
		iter->ptr = BlendData_cameras_get(iter);
}

void BlendData_cameras_next(CollectionPropertyIterator *iter)
{
	rna_iterator_listbase_next(iter);

	if (iter->valid)
		iter->ptr = BlendData_cameras_get(iter);
}

void BlendData_cameras_end(CollectionPropertyIterator *iter)
{
	rna_iterator_listbase_end(iter);
}

static PointerRNA BlendData_scenes_get(CollectionPropertyIterator *iter)
{
	return rna_pointer_inherit_refine(&iter->parent, &RNA_Scene, rna_iterator_listbase_get(iter));
}

void BlendData_scenes_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

	memset(iter, 0, sizeof(*iter));
	iter->parent = *ptr;
	iter->prop = (PropertyRNA *)&rna_BlendData_scenes;

	rna_Main_scene_begin(iter, ptr);

	if (iter->valid)
		iter->ptr = BlendData_scenes_get(iter);
}

void BlendData_scenes_next(CollectionPropertyIterator *iter)
{
	rna_iterator_listbase_next(iter);

	if (iter->valid)
		iter->ptr = BlendData_scenes_get(iter);
}

void BlendData_scenes_end(CollectionPropertyIterator *iter)
{
	rna_iterator_listbase_end(iter);
}

static PointerRNA BlendData_objects_get(CollectionPropertyIterator *iter)
{
	return rna_pointer_inherit_refine(&iter->parent, &RNA_Object, rna_iterator_listbase_get(iter));
}

void BlendData_objects_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

	memset(iter, 0, sizeof(*iter));
	iter->parent = *ptr;
	iter->prop = (PropertyRNA *)&rna_BlendData_objects;

	rna_Main_object_begin(iter, ptr);

	if (iter->valid)
		iter->ptr = BlendData_objects_get(iter);
}

void BlendData_objects_next(CollectionPropertyIterator *iter)
{
	rna_iterator_listbase_next(iter);

	if (iter->valid)
		iter->ptr = BlendData_objects_get(iter);
}

void BlendData_objects_end(CollectionPropertyIterator *iter)
{
	rna_iterator_listbase_end(iter);
}

static PointerRNA BlendData_materials_get(CollectionPropertyIterator *iter)
{
	return rna_pointer_inherit_refine(&iter->parent, &RNA_Material, rna_iterator_listbase_get(iter));
}

void BlendData_materials_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

	memset(iter, 0, sizeof(*iter));
	iter->parent = *ptr;
	iter->prop = (PropertyRNA *)&rna_BlendData_materials;

	rna_Main_mat_begin(iter, ptr);

	if (iter->valid)
		iter->ptr = BlendData_materials_get(iter);
}

void BlendData_materials_next(CollectionPropertyIterator *iter)
{
	rna_iterator_listbase_next(iter);

	if (iter->valid)
		iter->ptr = BlendData_materials_get(iter);
}

void BlendData_materials_end(CollectionPropertyIterator *iter)
{
	rna_iterator_listbase_end(iter);
}

static PointerRNA BlendData_node_groups_get(CollectionPropertyIterator *iter)
{
	return rna_pointer_inherit_refine(&iter->parent, &RNA_NodeTree, rna_iterator_listbase_get(iter));
}

void BlendData_node_groups_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

	memset(iter, 0, sizeof(*iter));
	iter->parent = *ptr;
	iter->prop = (PropertyRNA *)&rna_BlendData_node_groups;

	rna_Main_nodetree_begin(iter, ptr);

	if (iter->valid)
		iter->ptr = BlendData_node_groups_get(iter);
}

void BlendData_node_groups_next(CollectionPropertyIterator *iter)
{
	rna_iterator_listbase_next(iter);

	if (iter->valid)
		iter->ptr = BlendData_node_groups_get(iter);
}

void BlendData_node_groups_end(CollectionPropertyIterator *iter)
{
	rna_iterator_listbase_end(iter);
}

static PointerRNA BlendData_meshes_get(CollectionPropertyIterator *iter)
{
	return rna_pointer_inherit_refine(&iter->parent, &RNA_Mesh, rna_iterator_listbase_get(iter));
}

void BlendData_meshes_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

	memset(iter, 0, sizeof(*iter));
	iter->parent = *ptr;
	iter->prop = (PropertyRNA *)&rna_BlendData_meshes;

	rna_Main_mesh_begin(iter, ptr);

	if (iter->valid)
		iter->ptr = BlendData_meshes_get(iter);
}

void BlendData_meshes_next(CollectionPropertyIterator *iter)
{
	rna_iterator_listbase_next(iter);

	if (iter->valid)
		iter->ptr = BlendData_meshes_get(iter);
}

void BlendData_meshes_end(CollectionPropertyIterator *iter)
{
	rna_iterator_listbase_end(iter);
}

static PointerRNA BlendData_lamps_get(CollectionPropertyIterator *iter)
{
	return rna_pointer_inherit_refine(&iter->parent, &RNA_Lamp, rna_iterator_listbase_get(iter));
}

void BlendData_lamps_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

	memset(iter, 0, sizeof(*iter));
	iter->parent = *ptr;
	iter->prop = (PropertyRNA *)&rna_BlendData_lamps;

	rna_Main_lamp_begin(iter, ptr);

	if (iter->valid)
		iter->ptr = BlendData_lamps_get(iter);
}

void BlendData_lamps_next(CollectionPropertyIterator *iter)
{
	rna_iterator_listbase_next(iter);

	if (iter->valid)
		iter->ptr = BlendData_lamps_get(iter);
}

void BlendData_lamps_end(CollectionPropertyIterator *iter)
{
	rna_iterator_listbase_end(iter);
}

static PointerRNA BlendData_libraries_get(CollectionPropertyIterator *iter)
{
	return rna_pointer_inherit_refine(&iter->parent, &RNA_Library, rna_iterator_listbase_get(iter));
}

void BlendData_libraries_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

	memset(iter, 0, sizeof(*iter));
	iter->parent = *ptr;
	iter->prop = (PropertyRNA *)&rna_BlendData_libraries;

	rna_Main_library_begin(iter, ptr);

	if (iter->valid)
		iter->ptr = BlendData_libraries_get(iter);
}

void BlendData_libraries_next(CollectionPropertyIterator *iter)
{
	rna_iterator_listbase_next(iter);

	if (iter->valid)
		iter->ptr = BlendData_libraries_get(iter);
}

void BlendData_libraries_end(CollectionPropertyIterator *iter)
{
	rna_iterator_listbase_end(iter);
}

static PointerRNA BlendData_screens_get(CollectionPropertyIterator *iter)
{
	return rna_pointer_inherit_refine(&iter->parent, &RNA_Screen, rna_iterator_listbase_get(iter));
}

void BlendData_screens_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

	memset(iter, 0, sizeof(*iter));
	iter->parent = *ptr;
	iter->prop = (PropertyRNA *)&rna_BlendData_screens;

	rna_Main_screen_begin(iter, ptr);

	if (iter->valid)
		iter->ptr = BlendData_screens_get(iter);
}

void BlendData_screens_next(CollectionPropertyIterator *iter)
{
	rna_iterator_listbase_next(iter);

	if (iter->valid)
		iter->ptr = BlendData_screens_get(iter);
}

void BlendData_screens_end(CollectionPropertyIterator *iter)
{
	rna_iterator_listbase_end(iter);
}

static PointerRNA BlendData_window_managers_get(CollectionPropertyIterator *iter)
{
	return rna_pointer_inherit_refine(&iter->parent, &RNA_WindowManager, rna_iterator_listbase_get(iter));
}

void BlendData_window_managers_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

	memset(iter, 0, sizeof(*iter));
	iter->parent = *ptr;
	iter->prop = (PropertyRNA *)&rna_BlendData_window_managers;

	rna_Main_wm_begin(iter, ptr);

	if (iter->valid)
		iter->ptr = BlendData_window_managers_get(iter);
}

void BlendData_window_managers_next(CollectionPropertyIterator *iter)
{
	rna_iterator_listbase_next(iter);

	if (iter->valid)
		iter->ptr = BlendData_window_managers_get(iter);
}

void BlendData_window_managers_end(CollectionPropertyIterator *iter)
{
	rna_iterator_listbase_end(iter);
}

static PointerRNA BlendData_images_get(CollectionPropertyIterator *iter)
{
	return rna_pointer_inherit_refine(&iter->parent, &RNA_Image, rna_iterator_listbase_get(iter));
}

void BlendData_images_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

	memset(iter, 0, sizeof(*iter));
	iter->parent = *ptr;
	iter->prop = (PropertyRNA *)&rna_BlendData_images;

	rna_Main_image_begin(iter, ptr);

	if (iter->valid)
		iter->ptr = BlendData_images_get(iter);
}

void BlendData_images_next(CollectionPropertyIterator *iter)
{
	rna_iterator_listbase_next(iter);

	if (iter->valid)
		iter->ptr = BlendData_images_get(iter);
}

void BlendData_images_end(CollectionPropertyIterator *iter)
{
	rna_iterator_listbase_end(iter);
}

static PointerRNA BlendData_lattices_get(CollectionPropertyIterator *iter)
{
	return rna_pointer_inherit_refine(&iter->parent, &RNA_Lattice, rna_iterator_listbase_get(iter));
}

void BlendData_lattices_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

	memset(iter, 0, sizeof(*iter));
	iter->parent = *ptr;
	iter->prop = (PropertyRNA *)&rna_BlendData_lattices;

	rna_Main_latt_begin(iter, ptr);

	if (iter->valid)
		iter->ptr = BlendData_lattices_get(iter);
}

void BlendData_lattices_next(CollectionPropertyIterator *iter)
{
	rna_iterator_listbase_next(iter);

	if (iter->valid)
		iter->ptr = BlendData_lattices_get(iter);
}

void BlendData_lattices_end(CollectionPropertyIterator *iter)
{
	rna_iterator_listbase_end(iter);
}

static PointerRNA BlendData_curves_get(CollectionPropertyIterator *iter)
{
	return rna_pointer_inherit_refine(&iter->parent, &RNA_Curve, rna_iterator_listbase_get(iter));
}

void BlendData_curves_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

	memset(iter, 0, sizeof(*iter));
	iter->parent = *ptr;
	iter->prop = (PropertyRNA *)&rna_BlendData_curves;

	rna_Main_curve_begin(iter, ptr);

	if (iter->valid)
		iter->ptr = BlendData_curves_get(iter);
}

void BlendData_curves_next(CollectionPropertyIterator *iter)
{
	rna_iterator_listbase_next(iter);

	if (iter->valid)
		iter->ptr = BlendData_curves_get(iter);
}

void BlendData_curves_end(CollectionPropertyIterator *iter)
{
	rna_iterator_listbase_end(iter);
}

static PointerRNA BlendData_metaballs_get(CollectionPropertyIterator *iter)
{
	return rna_pointer_inherit_refine(&iter->parent, &RNA_MetaBall, rna_iterator_listbase_get(iter));
}

void BlendData_metaballs_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

	memset(iter, 0, sizeof(*iter));
	iter->parent = *ptr;
	iter->prop = (PropertyRNA *)&rna_BlendData_metaballs;

	rna_Main_mball_begin(iter, ptr);

	if (iter->valid)
		iter->ptr = BlendData_metaballs_get(iter);
}

void BlendData_metaballs_next(CollectionPropertyIterator *iter)
{
	rna_iterator_listbase_next(iter);

	if (iter->valid)
		iter->ptr = BlendData_metaballs_get(iter);
}

void BlendData_metaballs_end(CollectionPropertyIterator *iter)
{
	rna_iterator_listbase_end(iter);
}

static PointerRNA BlendData_fonts_get(CollectionPropertyIterator *iter)
{
	return rna_pointer_inherit_refine(&iter->parent, &RNA_VectorFont, rna_iterator_listbase_get(iter));
}

void BlendData_fonts_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

	memset(iter, 0, sizeof(*iter));
	iter->parent = *ptr;
	iter->prop = (PropertyRNA *)&rna_BlendData_fonts;

	rna_Main_font_begin(iter, ptr);

	if (iter->valid)
		iter->ptr = BlendData_fonts_get(iter);
}

void BlendData_fonts_next(CollectionPropertyIterator *iter)
{
	rna_iterator_listbase_next(iter);

	if (iter->valid)
		iter->ptr = BlendData_fonts_get(iter);
}

void BlendData_fonts_end(CollectionPropertyIterator *iter)
{
	rna_iterator_listbase_end(iter);
}

static PointerRNA BlendData_textures_get(CollectionPropertyIterator *iter)
{
	return rna_pointer_inherit_refine(&iter->parent, &RNA_Texture, rna_iterator_listbase_get(iter));
}

void BlendData_textures_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

	memset(iter, 0, sizeof(*iter));
	iter->parent = *ptr;
	iter->prop = (PropertyRNA *)&rna_BlendData_textures;

	rna_Main_tex_begin(iter, ptr);

	if (iter->valid)
		iter->ptr = BlendData_textures_get(iter);
}

void BlendData_textures_next(CollectionPropertyIterator *iter)
{
	rna_iterator_listbase_next(iter);

	if (iter->valid)
		iter->ptr = BlendData_textures_get(iter);
}

void BlendData_textures_end(CollectionPropertyIterator *iter)
{
	rna_iterator_listbase_end(iter);
}

static PointerRNA BlendData_brushes_get(CollectionPropertyIterator *iter)
{
	return rna_pointer_inherit_refine(&iter->parent, &RNA_Brush, rna_iterator_listbase_get(iter));
}

void BlendData_brushes_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

	memset(iter, 0, sizeof(*iter));
	iter->parent = *ptr;
	iter->prop = (PropertyRNA *)&rna_BlendData_brushes;

	rna_Main_brush_begin(iter, ptr);

	if (iter->valid)
		iter->ptr = BlendData_brushes_get(iter);
}

void BlendData_brushes_next(CollectionPropertyIterator *iter)
{
	rna_iterator_listbase_next(iter);

	if (iter->valid)
		iter->ptr = BlendData_brushes_get(iter);
}

void BlendData_brushes_end(CollectionPropertyIterator *iter)
{
	rna_iterator_listbase_end(iter);
}

static PointerRNA BlendData_worlds_get(CollectionPropertyIterator *iter)
{
	return rna_pointer_inherit_refine(&iter->parent, &RNA_World, rna_iterator_listbase_get(iter));
}

void BlendData_worlds_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

	memset(iter, 0, sizeof(*iter));
	iter->parent = *ptr;
	iter->prop = (PropertyRNA *)&rna_BlendData_worlds;

	rna_Main_world_begin(iter, ptr);

	if (iter->valid)
		iter->ptr = BlendData_worlds_get(iter);
}

void BlendData_worlds_next(CollectionPropertyIterator *iter)
{
	rna_iterator_listbase_next(iter);

	if (iter->valid)
		iter->ptr = BlendData_worlds_get(iter);
}

void BlendData_worlds_end(CollectionPropertyIterator *iter)
{
	rna_iterator_listbase_end(iter);
}

static PointerRNA BlendData_groups_get(CollectionPropertyIterator *iter)
{
	return rna_pointer_inherit_refine(&iter->parent, &RNA_Group, rna_iterator_listbase_get(iter));
}

void BlendData_groups_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

	memset(iter, 0, sizeof(*iter));
	iter->parent = *ptr;
	iter->prop = (PropertyRNA *)&rna_BlendData_groups;

	rna_Main_group_begin(iter, ptr);

	if (iter->valid)
		iter->ptr = BlendData_groups_get(iter);
}

void BlendData_groups_next(CollectionPropertyIterator *iter)
{
	rna_iterator_listbase_next(iter);

	if (iter->valid)
		iter->ptr = BlendData_groups_get(iter);
}

void BlendData_groups_end(CollectionPropertyIterator *iter)
{
	rna_iterator_listbase_end(iter);
}

static PointerRNA BlendData_shape_keys_get(CollectionPropertyIterator *iter)
{
	return rna_pointer_inherit_refine(&iter->parent, &RNA_Key, rna_iterator_listbase_get(iter));
}

void BlendData_shape_keys_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

	memset(iter, 0, sizeof(*iter));
	iter->parent = *ptr;
	iter->prop = (PropertyRNA *)&rna_BlendData_shape_keys;

	rna_Main_key_begin(iter, ptr);

	if (iter->valid)
		iter->ptr = BlendData_shape_keys_get(iter);
}

void BlendData_shape_keys_next(CollectionPropertyIterator *iter)
{
	rna_iterator_listbase_next(iter);

	if (iter->valid)
		iter->ptr = BlendData_shape_keys_get(iter);
}

void BlendData_shape_keys_end(CollectionPropertyIterator *iter)
{
	rna_iterator_listbase_end(iter);
}

static PointerRNA BlendData_scripts_get(CollectionPropertyIterator *iter)
{
	return rna_pointer_inherit_refine(&iter->parent, &RNA_ID, rna_iterator_listbase_get(iter));
}

void BlendData_scripts_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

	memset(iter, 0, sizeof(*iter));
	iter->parent = *ptr;
	iter->prop = (PropertyRNA *)&rna_BlendData_scripts;

	rna_Main_script_begin(iter, ptr);

	if (iter->valid)
		iter->ptr = BlendData_scripts_get(iter);
}

void BlendData_scripts_next(CollectionPropertyIterator *iter)
{
	rna_iterator_listbase_next(iter);

	if (iter->valid)
		iter->ptr = BlendData_scripts_get(iter);
}

void BlendData_scripts_end(CollectionPropertyIterator *iter)
{
	rna_iterator_listbase_end(iter);
}

static PointerRNA BlendData_texts_get(CollectionPropertyIterator *iter)
{
	return rna_pointer_inherit_refine(&iter->parent, &RNA_Text, rna_iterator_listbase_get(iter));
}

void BlendData_texts_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

	memset(iter, 0, sizeof(*iter));
	iter->parent = *ptr;
	iter->prop = (PropertyRNA *)&rna_BlendData_texts;

	rna_Main_text_begin(iter, ptr);

	if (iter->valid)
		iter->ptr = BlendData_texts_get(iter);
}

void BlendData_texts_next(CollectionPropertyIterator *iter)
{
	rna_iterator_listbase_next(iter);

	if (iter->valid)
		iter->ptr = BlendData_texts_get(iter);
}

void BlendData_texts_end(CollectionPropertyIterator *iter)
{
	rna_iterator_listbase_end(iter);
}

static PointerRNA BlendData_speakers_get(CollectionPropertyIterator *iter)
{
	return rna_pointer_inherit_refine(&iter->parent, &RNA_Speaker, rna_iterator_listbase_get(iter));
}

void BlendData_speakers_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

	memset(iter, 0, sizeof(*iter));
	iter->parent = *ptr;
	iter->prop = (PropertyRNA *)&rna_BlendData_speakers;

	rna_Main_speaker_begin(iter, ptr);

	if (iter->valid)
		iter->ptr = BlendData_speakers_get(iter);
}

void BlendData_speakers_next(CollectionPropertyIterator *iter)
{
	rna_iterator_listbase_next(iter);

	if (iter->valid)
		iter->ptr = BlendData_speakers_get(iter);
}

void BlendData_speakers_end(CollectionPropertyIterator *iter)
{
	rna_iterator_listbase_end(iter);
}

static PointerRNA BlendData_sounds_get(CollectionPropertyIterator *iter)
{
	return rna_pointer_inherit_refine(&iter->parent, &RNA_Sound, rna_iterator_listbase_get(iter));
}

void BlendData_sounds_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

	memset(iter, 0, sizeof(*iter));
	iter->parent = *ptr;
	iter->prop = (PropertyRNA *)&rna_BlendData_sounds;

	rna_Main_sound_begin(iter, ptr);

	if (iter->valid)
		iter->ptr = BlendData_sounds_get(iter);
}

void BlendData_sounds_next(CollectionPropertyIterator *iter)
{
	rna_iterator_listbase_next(iter);

	if (iter->valid)
		iter->ptr = BlendData_sounds_get(iter);
}

void BlendData_sounds_end(CollectionPropertyIterator *iter)
{
	rna_iterator_listbase_end(iter);
}

static PointerRNA BlendData_armatures_get(CollectionPropertyIterator *iter)
{
	return rna_pointer_inherit_refine(&iter->parent, &RNA_Armature, rna_iterator_listbase_get(iter));
}

void BlendData_armatures_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

	memset(iter, 0, sizeof(*iter));
	iter->parent = *ptr;
	iter->prop = (PropertyRNA *)&rna_BlendData_armatures;

	rna_Main_armature_begin(iter, ptr);

	if (iter->valid)
		iter->ptr = BlendData_armatures_get(iter);
}

void BlendData_armatures_next(CollectionPropertyIterator *iter)
{
	rna_iterator_listbase_next(iter);

	if (iter->valid)
		iter->ptr = BlendData_armatures_get(iter);
}

void BlendData_armatures_end(CollectionPropertyIterator *iter)
{
	rna_iterator_listbase_end(iter);
}

static PointerRNA BlendData_actions_get(CollectionPropertyIterator *iter)
{
	return rna_pointer_inherit_refine(&iter->parent, &RNA_Action, rna_iterator_listbase_get(iter));
}

void BlendData_actions_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

	memset(iter, 0, sizeof(*iter));
	iter->parent = *ptr;
	iter->prop = (PropertyRNA *)&rna_BlendData_actions;

	rna_Main_action_begin(iter, ptr);

	if (iter->valid)
		iter->ptr = BlendData_actions_get(iter);
}

void BlendData_actions_next(CollectionPropertyIterator *iter)
{
	rna_iterator_listbase_next(iter);

	if (iter->valid)
		iter->ptr = BlendData_actions_get(iter);
}

void BlendData_actions_end(CollectionPropertyIterator *iter)
{
	rna_iterator_listbase_end(iter);
}

static PointerRNA BlendData_particles_get(CollectionPropertyIterator *iter)
{
	return rna_pointer_inherit_refine(&iter->parent, &RNA_ParticleSettings, rna_iterator_listbase_get(iter));
}

void BlendData_particles_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

	memset(iter, 0, sizeof(*iter));
	iter->parent = *ptr;
	iter->prop = (PropertyRNA *)&rna_BlendData_particles;

	rna_Main_particle_begin(iter, ptr);

	if (iter->valid)
		iter->ptr = BlendData_particles_get(iter);
}

void BlendData_particles_next(CollectionPropertyIterator *iter)
{
	rna_iterator_listbase_next(iter);

	if (iter->valid)
		iter->ptr = BlendData_particles_get(iter);
}

void BlendData_particles_end(CollectionPropertyIterator *iter)
{
	rna_iterator_listbase_end(iter);
}

static PointerRNA BlendData_grease_pencil_get(CollectionPropertyIterator *iter)
{
	return rna_pointer_inherit_refine(&iter->parent, &RNA_GreasePencil, rna_iterator_listbase_get(iter));
}

void BlendData_grease_pencil_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

	memset(iter, 0, sizeof(*iter));
	iter->parent = *ptr;
	iter->prop = (PropertyRNA *)&rna_BlendData_grease_pencil;

	rna_Main_gpencil_begin(iter, ptr);

	if (iter->valid)
		iter->ptr = BlendData_grease_pencil_get(iter);
}

void BlendData_grease_pencil_next(CollectionPropertyIterator *iter)
{
	rna_iterator_listbase_next(iter);

	if (iter->valid)
		iter->ptr = BlendData_grease_pencil_get(iter);
}

void BlendData_grease_pencil_end(CollectionPropertyIterator *iter)
{
	rna_iterator_listbase_end(iter);
}

static PointerRNA BlendData_movieclips_get(CollectionPropertyIterator *iter)
{
	return rna_pointer_inherit_refine(&iter->parent, &RNA_MovieClip, rna_iterator_listbase_get(iter));
}

void BlendData_movieclips_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

	memset(iter, 0, sizeof(*iter));
	iter->parent = *ptr;
	iter->prop = (PropertyRNA *)&rna_BlendData_movieclips;

	rna_Main_movieclips_begin(iter, ptr);

	if (iter->valid)
		iter->ptr = BlendData_movieclips_get(iter);
}

void BlendData_movieclips_next(CollectionPropertyIterator *iter)
{
	rna_iterator_listbase_next(iter);

	if (iter->valid)
		iter->ptr = BlendData_movieclips_get(iter);
}

void BlendData_movieclips_end(CollectionPropertyIterator *iter)
{
	rna_iterator_listbase_end(iter);
}

static PointerRNA BlendData_masks_get(CollectionPropertyIterator *iter)
{
	return rna_pointer_inherit_refine(&iter->parent, &RNA_Mask, rna_iterator_listbase_get(iter));
}

void BlendData_masks_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

	memset(iter, 0, sizeof(*iter));
	iter->parent = *ptr;
	iter->prop = (PropertyRNA *)&rna_BlendData_masks;

	rna_Main_masks_begin(iter, ptr);

	if (iter->valid)
		iter->ptr = BlendData_masks_get(iter);
}

void BlendData_masks_next(CollectionPropertyIterator *iter)
{
	rna_iterator_listbase_next(iter);

	if (iter->valid)
		iter->ptr = BlendData_masks_get(iter);
}

void BlendData_masks_end(CollectionPropertyIterator *iter)
{
	rna_iterator_listbase_end(iter);
}

static PointerRNA BlendData_linestyles_get(CollectionPropertyIterator *iter)
{
	return rna_pointer_inherit_refine(&iter->parent, &RNA_FreestyleLineStyle, rna_iterator_listbase_get(iter));
}

void BlendData_linestyles_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

	memset(iter, 0, sizeof(*iter));
	iter->parent = *ptr;
	iter->prop = (PropertyRNA *)&rna_BlendData_linestyles;

	rna_Main_linestyle_begin(iter, ptr);

	if (iter->valid)
		iter->ptr = BlendData_linestyles_get(iter);
}

void BlendData_linestyles_next(CollectionPropertyIterator *iter)
{
	rna_iterator_listbase_next(iter);

	if (iter->valid)
		iter->ptr = BlendData_linestyles_get(iter);
}

void BlendData_linestyles_end(CollectionPropertyIterator *iter)
{
	rna_iterator_listbase_end(iter);
}

static PointerRNA BlendDataCameras_rna_properties_get(CollectionPropertyIterator *iter)
{
	return rna_builtin_properties_get(iter);
}

void BlendDataCameras_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

	memset(iter, 0, sizeof(*iter));
	iter->parent = *ptr;
	iter->prop = (PropertyRNA *)&rna_BlendDataCameras_rna_properties;

	rna_builtin_properties_begin(iter, ptr);

	if (iter->valid)
		iter->ptr = BlendDataCameras_rna_properties_get(iter);
}

void BlendDataCameras_rna_properties_next(CollectionPropertyIterator *iter)
{
	rna_builtin_properties_next(iter);

	if (iter->valid)
		iter->ptr = BlendDataCameras_rna_properties_get(iter);
}

void BlendDataCameras_rna_properties_end(CollectionPropertyIterator *iter)
{
	rna_iterator_listbase_end(iter);
}

int BlendDataCameras_rna_properties_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
	return rna_builtin_properties_lookup_string(ptr, key, r_ptr);
}

PointerRNA BlendDataCameras_rna_type_get(PointerRNA *ptr)
{
	return rna_builtin_type_get(ptr);
}

int BlendDataCameras_is_updated_get(PointerRNA *ptr)
{
	return rna_Main_cameras_is_updated_get(ptr);
}

static PointerRNA BlendDataScenes_rna_properties_get(CollectionPropertyIterator *iter)
{
	return rna_builtin_properties_get(iter);
}

void BlendDataScenes_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

	memset(iter, 0, sizeof(*iter));
	iter->parent = *ptr;
	iter->prop = (PropertyRNA *)&rna_BlendDataScenes_rna_properties;

	rna_builtin_properties_begin(iter, ptr);

	if (iter->valid)
		iter->ptr = BlendDataScenes_rna_properties_get(iter);
}

void BlendDataScenes_rna_properties_next(CollectionPropertyIterator *iter)
{
	rna_builtin_properties_next(iter);

	if (iter->valid)
		iter->ptr = BlendDataScenes_rna_properties_get(iter);
}

void BlendDataScenes_rna_properties_end(CollectionPropertyIterator *iter)
{
	rna_iterator_listbase_end(iter);
}

int BlendDataScenes_rna_properties_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
	return rna_builtin_properties_lookup_string(ptr, key, r_ptr);
}

PointerRNA BlendDataScenes_rna_type_get(PointerRNA *ptr)
{
	return rna_builtin_type_get(ptr);
}

int BlendDataScenes_is_updated_get(PointerRNA *ptr)
{
	return rna_Main_scenes_is_updated_get(ptr);
}

static PointerRNA BlendDataObjects_rna_properties_get(CollectionPropertyIterator *iter)
{
	return rna_builtin_properties_get(iter);
}

void BlendDataObjects_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

	memset(iter, 0, sizeof(*iter));
	iter->parent = *ptr;
	iter->prop = (PropertyRNA *)&rna_BlendDataObjects_rna_properties;

	rna_builtin_properties_begin(iter, ptr);

	if (iter->valid)
		iter->ptr = BlendDataObjects_rna_properties_get(iter);
}

void BlendDataObjects_rna_properties_next(CollectionPropertyIterator *iter)
{
	rna_builtin_properties_next(iter);

	if (iter->valid)
		iter->ptr = BlendDataObjects_rna_properties_get(iter);
}

void BlendDataObjects_rna_properties_end(CollectionPropertyIterator *iter)
{
	rna_iterator_listbase_end(iter);
}

int BlendDataObjects_rna_properties_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
	return rna_builtin_properties_lookup_string(ptr, key, r_ptr);
}

PointerRNA BlendDataObjects_rna_type_get(PointerRNA *ptr)
{
	return rna_builtin_type_get(ptr);
}

int BlendDataObjects_is_updated_get(PointerRNA *ptr)
{
	return rna_Main_objects_is_updated_get(ptr);
}

static PointerRNA BlendDataMaterials_rna_properties_get(CollectionPropertyIterator *iter)
{
	return rna_builtin_properties_get(iter);
}

void BlendDataMaterials_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

	memset(iter, 0, sizeof(*iter));
	iter->parent = *ptr;
	iter->prop = (PropertyRNA *)&rna_BlendDataMaterials_rna_properties;

	rna_builtin_properties_begin(iter, ptr);

	if (iter->valid)
		iter->ptr = BlendDataMaterials_rna_properties_get(iter);
}

void BlendDataMaterials_rna_properties_next(CollectionPropertyIterator *iter)
{
	rna_builtin_properties_next(iter);

	if (iter->valid)
		iter->ptr = BlendDataMaterials_rna_properties_get(iter);
}

void BlendDataMaterials_rna_properties_end(CollectionPropertyIterator *iter)
{
	rna_iterator_listbase_end(iter);
}

int BlendDataMaterials_rna_properties_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
	return rna_builtin_properties_lookup_string(ptr, key, r_ptr);
}

PointerRNA BlendDataMaterials_rna_type_get(PointerRNA *ptr)
{
	return rna_builtin_type_get(ptr);
}

int BlendDataMaterials_is_updated_get(PointerRNA *ptr)
{
	return rna_Main_materials_is_updated_get(ptr);
}

static PointerRNA BlendDataNodeTrees_rna_properties_get(CollectionPropertyIterator *iter)
{
	return rna_builtin_properties_get(iter);
}

void BlendDataNodeTrees_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

	memset(iter, 0, sizeof(*iter));
	iter->parent = *ptr;
	iter->prop = (PropertyRNA *)&rna_BlendDataNodeTrees_rna_properties;

	rna_builtin_properties_begin(iter, ptr);

	if (iter->valid)
		iter->ptr = BlendDataNodeTrees_rna_properties_get(iter);
}

void BlendDataNodeTrees_rna_properties_next(CollectionPropertyIterator *iter)
{
	rna_builtin_properties_next(iter);

	if (iter->valid)
		iter->ptr = BlendDataNodeTrees_rna_properties_get(iter);
}

void BlendDataNodeTrees_rna_properties_end(CollectionPropertyIterator *iter)
{
	rna_iterator_listbase_end(iter);
}

int BlendDataNodeTrees_rna_properties_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
	return rna_builtin_properties_lookup_string(ptr, key, r_ptr);
}

PointerRNA BlendDataNodeTrees_rna_type_get(PointerRNA *ptr)
{
	return rna_builtin_type_get(ptr);
}

int BlendDataNodeTrees_is_updated_get(PointerRNA *ptr)
{
	return rna_Main_node_groups_is_updated_get(ptr);
}

static PointerRNA BlendDataMeshes_rna_properties_get(CollectionPropertyIterator *iter)
{
	return rna_builtin_properties_get(iter);
}

void BlendDataMeshes_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

	memset(iter, 0, sizeof(*iter));
	iter->parent = *ptr;
	iter->prop = (PropertyRNA *)&rna_BlendDataMeshes_rna_properties;

	rna_builtin_properties_begin(iter, ptr);

	if (iter->valid)
		iter->ptr = BlendDataMeshes_rna_properties_get(iter);
}

void BlendDataMeshes_rna_properties_next(CollectionPropertyIterator *iter)
{
	rna_builtin_properties_next(iter);

	if (iter->valid)
		iter->ptr = BlendDataMeshes_rna_properties_get(iter);
}

void BlendDataMeshes_rna_properties_end(CollectionPropertyIterator *iter)
{
	rna_iterator_listbase_end(iter);
}

int BlendDataMeshes_rna_properties_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
	return rna_builtin_properties_lookup_string(ptr, key, r_ptr);
}

PointerRNA BlendDataMeshes_rna_type_get(PointerRNA *ptr)
{
	return rna_builtin_type_get(ptr);
}

int BlendDataMeshes_is_updated_get(PointerRNA *ptr)
{
	return rna_Main_meshes_is_updated_get(ptr);
}

static PointerRNA BlendDataLamps_rna_properties_get(CollectionPropertyIterator *iter)
{
	return rna_builtin_properties_get(iter);
}

void BlendDataLamps_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

	memset(iter, 0, sizeof(*iter));
	iter->parent = *ptr;
	iter->prop = (PropertyRNA *)&rna_BlendDataLamps_rna_properties;

	rna_builtin_properties_begin(iter, ptr);

	if (iter->valid)
		iter->ptr = BlendDataLamps_rna_properties_get(iter);
}

void BlendDataLamps_rna_properties_next(CollectionPropertyIterator *iter)
{
	rna_builtin_properties_next(iter);

	if (iter->valid)
		iter->ptr = BlendDataLamps_rna_properties_get(iter);
}

void BlendDataLamps_rna_properties_end(CollectionPropertyIterator *iter)
{
	rna_iterator_listbase_end(iter);
}

int BlendDataLamps_rna_properties_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
	return rna_builtin_properties_lookup_string(ptr, key, r_ptr);
}

PointerRNA BlendDataLamps_rna_type_get(PointerRNA *ptr)
{
	return rna_builtin_type_get(ptr);
}

int BlendDataLamps_is_updated_get(PointerRNA *ptr)
{
	return rna_Main_lamps_is_updated_get(ptr);
}

static PointerRNA BlendDataLibraries_rna_properties_get(CollectionPropertyIterator *iter)
{
	return rna_builtin_properties_get(iter);
}

void BlendDataLibraries_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

	memset(iter, 0, sizeof(*iter));
	iter->parent = *ptr;
	iter->prop = (PropertyRNA *)&rna_BlendDataLibraries_rna_properties;

	rna_builtin_properties_begin(iter, ptr);

	if (iter->valid)
		iter->ptr = BlendDataLibraries_rna_properties_get(iter);
}

void BlendDataLibraries_rna_properties_next(CollectionPropertyIterator *iter)
{
	rna_builtin_properties_next(iter);

	if (iter->valid)
		iter->ptr = BlendDataLibraries_rna_properties_get(iter);
}

void BlendDataLibraries_rna_properties_end(CollectionPropertyIterator *iter)
{
	rna_iterator_listbase_end(iter);
}

int BlendDataLibraries_rna_properties_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
	return rna_builtin_properties_lookup_string(ptr, key, r_ptr);
}

PointerRNA BlendDataLibraries_rna_type_get(PointerRNA *ptr)
{
	return rna_builtin_type_get(ptr);
}

int BlendDataLibraries_is_updated_get(PointerRNA *ptr)
{
	return rna_Main_libraries_is_updated_get(ptr);
}

static PointerRNA BlendDataScreens_rna_properties_get(CollectionPropertyIterator *iter)
{
	return rna_builtin_properties_get(iter);
}

void BlendDataScreens_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

	memset(iter, 0, sizeof(*iter));
	iter->parent = *ptr;
	iter->prop = (PropertyRNA *)&rna_BlendDataScreens_rna_properties;

	rna_builtin_properties_begin(iter, ptr);

	if (iter->valid)
		iter->ptr = BlendDataScreens_rna_properties_get(iter);
}

void BlendDataScreens_rna_properties_next(CollectionPropertyIterator *iter)
{
	rna_builtin_properties_next(iter);

	if (iter->valid)
		iter->ptr = BlendDataScreens_rna_properties_get(iter);
}

void BlendDataScreens_rna_properties_end(CollectionPropertyIterator *iter)
{
	rna_iterator_listbase_end(iter);
}

int BlendDataScreens_rna_properties_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
	return rna_builtin_properties_lookup_string(ptr, key, r_ptr);
}

PointerRNA BlendDataScreens_rna_type_get(PointerRNA *ptr)
{
	return rna_builtin_type_get(ptr);
}

int BlendDataScreens_is_updated_get(PointerRNA *ptr)
{
	return rna_Main_screens_is_updated_get(ptr);
}

static PointerRNA BlendDataWindowManagers_rna_properties_get(CollectionPropertyIterator *iter)
{
	return rna_builtin_properties_get(iter);
}

void BlendDataWindowManagers_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

	memset(iter, 0, sizeof(*iter));
	iter->parent = *ptr;
	iter->prop = (PropertyRNA *)&rna_BlendDataWindowManagers_rna_properties;

	rna_builtin_properties_begin(iter, ptr);

	if (iter->valid)
		iter->ptr = BlendDataWindowManagers_rna_properties_get(iter);
}

void BlendDataWindowManagers_rna_properties_next(CollectionPropertyIterator *iter)
{
	rna_builtin_properties_next(iter);

	if (iter->valid)
		iter->ptr = BlendDataWindowManagers_rna_properties_get(iter);
}

void BlendDataWindowManagers_rna_properties_end(CollectionPropertyIterator *iter)
{
	rna_iterator_listbase_end(iter);
}

int BlendDataWindowManagers_rna_properties_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
	return rna_builtin_properties_lookup_string(ptr, key, r_ptr);
}

PointerRNA BlendDataWindowManagers_rna_type_get(PointerRNA *ptr)
{
	return rna_builtin_type_get(ptr);
}

int BlendDataWindowManagers_is_updated_get(PointerRNA *ptr)
{
	return rna_Main_window_managers_is_updated_get(ptr);
}

static PointerRNA BlendDataImages_rna_properties_get(CollectionPropertyIterator *iter)
{
	return rna_builtin_properties_get(iter);
}

void BlendDataImages_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

	memset(iter, 0, sizeof(*iter));
	iter->parent = *ptr;
	iter->prop = (PropertyRNA *)&rna_BlendDataImages_rna_properties;

	rna_builtin_properties_begin(iter, ptr);

	if (iter->valid)
		iter->ptr = BlendDataImages_rna_properties_get(iter);
}

void BlendDataImages_rna_properties_next(CollectionPropertyIterator *iter)
{
	rna_builtin_properties_next(iter);

	if (iter->valid)
		iter->ptr = BlendDataImages_rna_properties_get(iter);
}

void BlendDataImages_rna_properties_end(CollectionPropertyIterator *iter)
{
	rna_iterator_listbase_end(iter);
}

int BlendDataImages_rna_properties_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
	return rna_builtin_properties_lookup_string(ptr, key, r_ptr);
}

PointerRNA BlendDataImages_rna_type_get(PointerRNA *ptr)
{
	return rna_builtin_type_get(ptr);
}

int BlendDataImages_is_updated_get(PointerRNA *ptr)
{
	return rna_Main_images_is_updated_get(ptr);
}

static PointerRNA BlendDataLattices_rna_properties_get(CollectionPropertyIterator *iter)
{
	return rna_builtin_properties_get(iter);
}

void BlendDataLattices_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

	memset(iter, 0, sizeof(*iter));
	iter->parent = *ptr;
	iter->prop = (PropertyRNA *)&rna_BlendDataLattices_rna_properties;

	rna_builtin_properties_begin(iter, ptr);

	if (iter->valid)
		iter->ptr = BlendDataLattices_rna_properties_get(iter);
}

void BlendDataLattices_rna_properties_next(CollectionPropertyIterator *iter)
{
	rna_builtin_properties_next(iter);

	if (iter->valid)
		iter->ptr = BlendDataLattices_rna_properties_get(iter);
}

void BlendDataLattices_rna_properties_end(CollectionPropertyIterator *iter)
{
	rna_iterator_listbase_end(iter);
}

int BlendDataLattices_rna_properties_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
	return rna_builtin_properties_lookup_string(ptr, key, r_ptr);
}

PointerRNA BlendDataLattices_rna_type_get(PointerRNA *ptr)
{
	return rna_builtin_type_get(ptr);
}

int BlendDataLattices_is_updated_get(PointerRNA *ptr)
{
	return rna_Main_lattices_is_updated_get(ptr);
}

static PointerRNA BlendDataCurves_rna_properties_get(CollectionPropertyIterator *iter)
{
	return rna_builtin_properties_get(iter);
}

void BlendDataCurves_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

	memset(iter, 0, sizeof(*iter));
	iter->parent = *ptr;
	iter->prop = (PropertyRNA *)&rna_BlendDataCurves_rna_properties;

	rna_builtin_properties_begin(iter, ptr);

	if (iter->valid)
		iter->ptr = BlendDataCurves_rna_properties_get(iter);
}

void BlendDataCurves_rna_properties_next(CollectionPropertyIterator *iter)
{
	rna_builtin_properties_next(iter);

	if (iter->valid)
		iter->ptr = BlendDataCurves_rna_properties_get(iter);
}

void BlendDataCurves_rna_properties_end(CollectionPropertyIterator *iter)
{
	rna_iterator_listbase_end(iter);
}

int BlendDataCurves_rna_properties_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
	return rna_builtin_properties_lookup_string(ptr, key, r_ptr);
}

PointerRNA BlendDataCurves_rna_type_get(PointerRNA *ptr)
{
	return rna_builtin_type_get(ptr);
}

int BlendDataCurves_is_updated_get(PointerRNA *ptr)
{
	return rna_Main_curves_is_updated_get(ptr);
}

static PointerRNA BlendDataMetaBalls_rna_properties_get(CollectionPropertyIterator *iter)
{
	return rna_builtin_properties_get(iter);
}

void BlendDataMetaBalls_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

	memset(iter, 0, sizeof(*iter));
	iter->parent = *ptr;
	iter->prop = (PropertyRNA *)&rna_BlendDataMetaBalls_rna_properties;

	rna_builtin_properties_begin(iter, ptr);

	if (iter->valid)
		iter->ptr = BlendDataMetaBalls_rna_properties_get(iter);
}

void BlendDataMetaBalls_rna_properties_next(CollectionPropertyIterator *iter)
{
	rna_builtin_properties_next(iter);

	if (iter->valid)
		iter->ptr = BlendDataMetaBalls_rna_properties_get(iter);
}

void BlendDataMetaBalls_rna_properties_end(CollectionPropertyIterator *iter)
{
	rna_iterator_listbase_end(iter);
}

int BlendDataMetaBalls_rna_properties_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
	return rna_builtin_properties_lookup_string(ptr, key, r_ptr);
}

PointerRNA BlendDataMetaBalls_rna_type_get(PointerRNA *ptr)
{
	return rna_builtin_type_get(ptr);
}

int BlendDataMetaBalls_is_updated_get(PointerRNA *ptr)
{
	return rna_Main_metaballs_is_updated_get(ptr);
}

static PointerRNA BlendDataFonts_rna_properties_get(CollectionPropertyIterator *iter)
{
	return rna_builtin_properties_get(iter);
}

void BlendDataFonts_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

	memset(iter, 0, sizeof(*iter));
	iter->parent = *ptr;
	iter->prop = (PropertyRNA *)&rna_BlendDataFonts_rna_properties;

	rna_builtin_properties_begin(iter, ptr);

	if (iter->valid)
		iter->ptr = BlendDataFonts_rna_properties_get(iter);
}

void BlendDataFonts_rna_properties_next(CollectionPropertyIterator *iter)
{
	rna_builtin_properties_next(iter);

	if (iter->valid)
		iter->ptr = BlendDataFonts_rna_properties_get(iter);
}

void BlendDataFonts_rna_properties_end(CollectionPropertyIterator *iter)
{
	rna_iterator_listbase_end(iter);
}

int BlendDataFonts_rna_properties_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
	return rna_builtin_properties_lookup_string(ptr, key, r_ptr);
}

PointerRNA BlendDataFonts_rna_type_get(PointerRNA *ptr)
{
	return rna_builtin_type_get(ptr);
}

int BlendDataFonts_is_updated_get(PointerRNA *ptr)
{
	return rna_Main_fonts_is_updated_get(ptr);
}

static PointerRNA BlendDataTextures_rna_properties_get(CollectionPropertyIterator *iter)
{
	return rna_builtin_properties_get(iter);
}

void BlendDataTextures_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

	memset(iter, 0, sizeof(*iter));
	iter->parent = *ptr;
	iter->prop = (PropertyRNA *)&rna_BlendDataTextures_rna_properties;

	rna_builtin_properties_begin(iter, ptr);

	if (iter->valid)
		iter->ptr = BlendDataTextures_rna_properties_get(iter);
}

void BlendDataTextures_rna_properties_next(CollectionPropertyIterator *iter)
{
	rna_builtin_properties_next(iter);

	if (iter->valid)
		iter->ptr = BlendDataTextures_rna_properties_get(iter);
}

void BlendDataTextures_rna_properties_end(CollectionPropertyIterator *iter)
{
	rna_iterator_listbase_end(iter);
}

int BlendDataTextures_rna_properties_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
	return rna_builtin_properties_lookup_string(ptr, key, r_ptr);
}

PointerRNA BlendDataTextures_rna_type_get(PointerRNA *ptr)
{
	return rna_builtin_type_get(ptr);
}

int BlendDataTextures_is_updated_get(PointerRNA *ptr)
{
	return rna_Main_textures_is_updated_get(ptr);
}

static PointerRNA BlendDataBrushes_rna_properties_get(CollectionPropertyIterator *iter)
{
	return rna_builtin_properties_get(iter);
}

void BlendDataBrushes_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

	memset(iter, 0, sizeof(*iter));
	iter->parent = *ptr;
	iter->prop = (PropertyRNA *)&rna_BlendDataBrushes_rna_properties;

	rna_builtin_properties_begin(iter, ptr);

	if (iter->valid)
		iter->ptr = BlendDataBrushes_rna_properties_get(iter);
}

void BlendDataBrushes_rna_properties_next(CollectionPropertyIterator *iter)
{
	rna_builtin_properties_next(iter);

	if (iter->valid)
		iter->ptr = BlendDataBrushes_rna_properties_get(iter);
}

void BlendDataBrushes_rna_properties_end(CollectionPropertyIterator *iter)
{
	rna_iterator_listbase_end(iter);
}

int BlendDataBrushes_rna_properties_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
	return rna_builtin_properties_lookup_string(ptr, key, r_ptr);
}

PointerRNA BlendDataBrushes_rna_type_get(PointerRNA *ptr)
{
	return rna_builtin_type_get(ptr);
}

int BlendDataBrushes_is_updated_get(PointerRNA *ptr)
{
	return rna_Main_brushes_is_updated_get(ptr);
}

static PointerRNA BlendDataWorlds_rna_properties_get(CollectionPropertyIterator *iter)
{
	return rna_builtin_properties_get(iter);
}

void BlendDataWorlds_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

	memset(iter, 0, sizeof(*iter));
	iter->parent = *ptr;
	iter->prop = (PropertyRNA *)&rna_BlendDataWorlds_rna_properties;

	rna_builtin_properties_begin(iter, ptr);

	if (iter->valid)
		iter->ptr = BlendDataWorlds_rna_properties_get(iter);
}

void BlendDataWorlds_rna_properties_next(CollectionPropertyIterator *iter)
{
	rna_builtin_properties_next(iter);

	if (iter->valid)
		iter->ptr = BlendDataWorlds_rna_properties_get(iter);
}

void BlendDataWorlds_rna_properties_end(CollectionPropertyIterator *iter)
{
	rna_iterator_listbase_end(iter);
}

int BlendDataWorlds_rna_properties_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
	return rna_builtin_properties_lookup_string(ptr, key, r_ptr);
}

PointerRNA BlendDataWorlds_rna_type_get(PointerRNA *ptr)
{
	return rna_builtin_type_get(ptr);
}

int BlendDataWorlds_is_updated_get(PointerRNA *ptr)
{
	return rna_Main_worlds_is_updated_get(ptr);
}

static PointerRNA BlendDataGroups_rna_properties_get(CollectionPropertyIterator *iter)
{
	return rna_builtin_properties_get(iter);
}

void BlendDataGroups_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

	memset(iter, 0, sizeof(*iter));
	iter->parent = *ptr;
	iter->prop = (PropertyRNA *)&rna_BlendDataGroups_rna_properties;

	rna_builtin_properties_begin(iter, ptr);

	if (iter->valid)
		iter->ptr = BlendDataGroups_rna_properties_get(iter);
}

void BlendDataGroups_rna_properties_next(CollectionPropertyIterator *iter)
{
	rna_builtin_properties_next(iter);

	if (iter->valid)
		iter->ptr = BlendDataGroups_rna_properties_get(iter);
}

void BlendDataGroups_rna_properties_end(CollectionPropertyIterator *iter)
{
	rna_iterator_listbase_end(iter);
}

int BlendDataGroups_rna_properties_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
	return rna_builtin_properties_lookup_string(ptr, key, r_ptr);
}

PointerRNA BlendDataGroups_rna_type_get(PointerRNA *ptr)
{
	return rna_builtin_type_get(ptr);
}

int BlendDataGroups_is_updated_get(PointerRNA *ptr)
{
	return rna_Main_groups_is_updated_get(ptr);
}

static PointerRNA BlendDataTexts_rna_properties_get(CollectionPropertyIterator *iter)
{
	return rna_builtin_properties_get(iter);
}

void BlendDataTexts_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

	memset(iter, 0, sizeof(*iter));
	iter->parent = *ptr;
	iter->prop = (PropertyRNA *)&rna_BlendDataTexts_rna_properties;

	rna_builtin_properties_begin(iter, ptr);

	if (iter->valid)
		iter->ptr = BlendDataTexts_rna_properties_get(iter);
}

void BlendDataTexts_rna_properties_next(CollectionPropertyIterator *iter)
{
	rna_builtin_properties_next(iter);

	if (iter->valid)
		iter->ptr = BlendDataTexts_rna_properties_get(iter);
}

void BlendDataTexts_rna_properties_end(CollectionPropertyIterator *iter)
{
	rna_iterator_listbase_end(iter);
}

int BlendDataTexts_rna_properties_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
	return rna_builtin_properties_lookup_string(ptr, key, r_ptr);
}

PointerRNA BlendDataTexts_rna_type_get(PointerRNA *ptr)
{
	return rna_builtin_type_get(ptr);
}

int BlendDataTexts_is_updated_get(PointerRNA *ptr)
{
	return rna_Main_texts_is_updated_get(ptr);
}

static PointerRNA BlendDataSpeakers_rna_properties_get(CollectionPropertyIterator *iter)
{
	return rna_builtin_properties_get(iter);
}

void BlendDataSpeakers_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

	memset(iter, 0, sizeof(*iter));
	iter->parent = *ptr;
	iter->prop = (PropertyRNA *)&rna_BlendDataSpeakers_rna_properties;

	rna_builtin_properties_begin(iter, ptr);

	if (iter->valid)
		iter->ptr = BlendDataSpeakers_rna_properties_get(iter);
}

void BlendDataSpeakers_rna_properties_next(CollectionPropertyIterator *iter)
{
	rna_builtin_properties_next(iter);

	if (iter->valid)
		iter->ptr = BlendDataSpeakers_rna_properties_get(iter);
}

void BlendDataSpeakers_rna_properties_end(CollectionPropertyIterator *iter)
{
	rna_iterator_listbase_end(iter);
}

int BlendDataSpeakers_rna_properties_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
	return rna_builtin_properties_lookup_string(ptr, key, r_ptr);
}

PointerRNA BlendDataSpeakers_rna_type_get(PointerRNA *ptr)
{
	return rna_builtin_type_get(ptr);
}

int BlendDataSpeakers_is_updated_get(PointerRNA *ptr)
{
	return rna_Main_speakers_is_updated_get(ptr);
}

static PointerRNA BlendDataSounds_rna_properties_get(CollectionPropertyIterator *iter)
{
	return rna_builtin_properties_get(iter);
}

void BlendDataSounds_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

	memset(iter, 0, sizeof(*iter));
	iter->parent = *ptr;
	iter->prop = (PropertyRNA *)&rna_BlendDataSounds_rna_properties;

	rna_builtin_properties_begin(iter, ptr);

	if (iter->valid)
		iter->ptr = BlendDataSounds_rna_properties_get(iter);
}

void BlendDataSounds_rna_properties_next(CollectionPropertyIterator *iter)
{
	rna_builtin_properties_next(iter);

	if (iter->valid)
		iter->ptr = BlendDataSounds_rna_properties_get(iter);
}

void BlendDataSounds_rna_properties_end(CollectionPropertyIterator *iter)
{
	rna_iterator_listbase_end(iter);
}

int BlendDataSounds_rna_properties_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
	return rna_builtin_properties_lookup_string(ptr, key, r_ptr);
}

PointerRNA BlendDataSounds_rna_type_get(PointerRNA *ptr)
{
	return rna_builtin_type_get(ptr);
}

int BlendDataSounds_is_updated_get(PointerRNA *ptr)
{
	return rna_Main_sounds_is_updated_get(ptr);
}

static PointerRNA BlendDataArmatures_rna_properties_get(CollectionPropertyIterator *iter)
{
	return rna_builtin_properties_get(iter);
}

void BlendDataArmatures_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

	memset(iter, 0, sizeof(*iter));
	iter->parent = *ptr;
	iter->prop = (PropertyRNA *)&rna_BlendDataArmatures_rna_properties;

	rna_builtin_properties_begin(iter, ptr);

	if (iter->valid)
		iter->ptr = BlendDataArmatures_rna_properties_get(iter);
}

void BlendDataArmatures_rna_properties_next(CollectionPropertyIterator *iter)
{
	rna_builtin_properties_next(iter);

	if (iter->valid)
		iter->ptr = BlendDataArmatures_rna_properties_get(iter);
}

void BlendDataArmatures_rna_properties_end(CollectionPropertyIterator *iter)
{
	rna_iterator_listbase_end(iter);
}

int BlendDataArmatures_rna_properties_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
	return rna_builtin_properties_lookup_string(ptr, key, r_ptr);
}

PointerRNA BlendDataArmatures_rna_type_get(PointerRNA *ptr)
{
	return rna_builtin_type_get(ptr);
}

int BlendDataArmatures_is_updated_get(PointerRNA *ptr)
{
	return rna_Main_armatures_is_updated_get(ptr);
}

static PointerRNA BlendDataActions_rna_properties_get(CollectionPropertyIterator *iter)
{
	return rna_builtin_properties_get(iter);
}

void BlendDataActions_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

	memset(iter, 0, sizeof(*iter));
	iter->parent = *ptr;
	iter->prop = (PropertyRNA *)&rna_BlendDataActions_rna_properties;

	rna_builtin_properties_begin(iter, ptr);

	if (iter->valid)
		iter->ptr = BlendDataActions_rna_properties_get(iter);
}

void BlendDataActions_rna_properties_next(CollectionPropertyIterator *iter)
{
	rna_builtin_properties_next(iter);

	if (iter->valid)
		iter->ptr = BlendDataActions_rna_properties_get(iter);
}

void BlendDataActions_rna_properties_end(CollectionPropertyIterator *iter)
{
	rna_iterator_listbase_end(iter);
}

int BlendDataActions_rna_properties_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
	return rna_builtin_properties_lookup_string(ptr, key, r_ptr);
}

PointerRNA BlendDataActions_rna_type_get(PointerRNA *ptr)
{
	return rna_builtin_type_get(ptr);
}

int BlendDataActions_is_updated_get(PointerRNA *ptr)
{
	return rna_Main_actions_is_updated_get(ptr);
}

static PointerRNA BlendDataParticles_rna_properties_get(CollectionPropertyIterator *iter)
{
	return rna_builtin_properties_get(iter);
}

void BlendDataParticles_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

	memset(iter, 0, sizeof(*iter));
	iter->parent = *ptr;
	iter->prop = (PropertyRNA *)&rna_BlendDataParticles_rna_properties;

	rna_builtin_properties_begin(iter, ptr);

	if (iter->valid)
		iter->ptr = BlendDataParticles_rna_properties_get(iter);
}

void BlendDataParticles_rna_properties_next(CollectionPropertyIterator *iter)
{
	rna_builtin_properties_next(iter);

	if (iter->valid)
		iter->ptr = BlendDataParticles_rna_properties_get(iter);
}

void BlendDataParticles_rna_properties_end(CollectionPropertyIterator *iter)
{
	rna_iterator_listbase_end(iter);
}

int BlendDataParticles_rna_properties_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
	return rna_builtin_properties_lookup_string(ptr, key, r_ptr);
}

PointerRNA BlendDataParticles_rna_type_get(PointerRNA *ptr)
{
	return rna_builtin_type_get(ptr);
}

int BlendDataParticles_is_updated_get(PointerRNA *ptr)
{
	return rna_Main_particles_is_updated_get(ptr);
}

static PointerRNA BlendDataGreasePencils_rna_properties_get(CollectionPropertyIterator *iter)
{
	return rna_builtin_properties_get(iter);
}

void BlendDataGreasePencils_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

	memset(iter, 0, sizeof(*iter));
	iter->parent = *ptr;
	iter->prop = (PropertyRNA *)&rna_BlendDataGreasePencils_rna_properties;

	rna_builtin_properties_begin(iter, ptr);

	if (iter->valid)
		iter->ptr = BlendDataGreasePencils_rna_properties_get(iter);
}

void BlendDataGreasePencils_rna_properties_next(CollectionPropertyIterator *iter)
{
	rna_builtin_properties_next(iter);

	if (iter->valid)
		iter->ptr = BlendDataGreasePencils_rna_properties_get(iter);
}

void BlendDataGreasePencils_rna_properties_end(CollectionPropertyIterator *iter)
{
	rna_iterator_listbase_end(iter);
}

int BlendDataGreasePencils_rna_properties_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
	return rna_builtin_properties_lookup_string(ptr, key, r_ptr);
}

PointerRNA BlendDataGreasePencils_rna_type_get(PointerRNA *ptr)
{
	return rna_builtin_type_get(ptr);
}

int BlendDataGreasePencils_is_updated_get(PointerRNA *ptr)
{
	return rna_Main_gpencil_is_updated_get(ptr);
}

static PointerRNA BlendDataMovieClips_rna_properties_get(CollectionPropertyIterator *iter)
{
	return rna_builtin_properties_get(iter);
}

void BlendDataMovieClips_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

	memset(iter, 0, sizeof(*iter));
	iter->parent = *ptr;
	iter->prop = (PropertyRNA *)&rna_BlendDataMovieClips_rna_properties;

	rna_builtin_properties_begin(iter, ptr);

	if (iter->valid)
		iter->ptr = BlendDataMovieClips_rna_properties_get(iter);
}

void BlendDataMovieClips_rna_properties_next(CollectionPropertyIterator *iter)
{
	rna_builtin_properties_next(iter);

	if (iter->valid)
		iter->ptr = BlendDataMovieClips_rna_properties_get(iter);
}

void BlendDataMovieClips_rna_properties_end(CollectionPropertyIterator *iter)
{
	rna_iterator_listbase_end(iter);
}

int BlendDataMovieClips_rna_properties_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
	return rna_builtin_properties_lookup_string(ptr, key, r_ptr);
}

PointerRNA BlendDataMovieClips_rna_type_get(PointerRNA *ptr)
{
	return rna_builtin_type_get(ptr);
}

static PointerRNA BlendDataMasks_rna_properties_get(CollectionPropertyIterator *iter)
{
	return rna_builtin_properties_get(iter);
}

void BlendDataMasks_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

	memset(iter, 0, sizeof(*iter));
	iter->parent = *ptr;
	iter->prop = (PropertyRNA *)&rna_BlendDataMasks_rna_properties;

	rna_builtin_properties_begin(iter, ptr);

	if (iter->valid)
		iter->ptr = BlendDataMasks_rna_properties_get(iter);
}

void BlendDataMasks_rna_properties_next(CollectionPropertyIterator *iter)
{
	rna_builtin_properties_next(iter);

	if (iter->valid)
		iter->ptr = BlendDataMasks_rna_properties_get(iter);
}

void BlendDataMasks_rna_properties_end(CollectionPropertyIterator *iter)
{
	rna_iterator_listbase_end(iter);
}

int BlendDataMasks_rna_properties_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
	return rna_builtin_properties_lookup_string(ptr, key, r_ptr);
}

PointerRNA BlendDataMasks_rna_type_get(PointerRNA *ptr)
{
	return rna_builtin_type_get(ptr);
}

static PointerRNA BlendDataLineStyles_rna_properties_get(CollectionPropertyIterator *iter)
{
	return rna_builtin_properties_get(iter);
}

void BlendDataLineStyles_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

	memset(iter, 0, sizeof(*iter));
	iter->parent = *ptr;
	iter->prop = (PropertyRNA *)&rna_BlendDataLineStyles_rna_properties;

	rna_builtin_properties_begin(iter, ptr);

	if (iter->valid)
		iter->ptr = BlendDataLineStyles_rna_properties_get(iter);
}

void BlendDataLineStyles_rna_properties_next(CollectionPropertyIterator *iter)
{
	rna_builtin_properties_next(iter);

	if (iter->valid)
		iter->ptr = BlendDataLineStyles_rna_properties_get(iter);
}

void BlendDataLineStyles_rna_properties_end(CollectionPropertyIterator *iter)
{
	rna_iterator_listbase_end(iter);
}

int BlendDataLineStyles_rna_properties_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
	return rna_builtin_properties_lookup_string(ptr, key, r_ptr);
}

PointerRNA BlendDataLineStyles_rna_type_get(PointerRNA *ptr)
{
	return rna_builtin_type_get(ptr);
}

int BlendDataLineStyles_is_updated_get(PointerRNA *ptr)
{
	return rna_Main_linestyle_is_updated_get(ptr);
}


struct Camera *BlendDataCameras_new(struct Main *_self, const char * name)
{
	return rna_Main_cameras_new(_self, name);
}

void BlendDataCameras_new_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	struct Main *_self;
	const char * name;
	struct Camera *camera;
	char *_data, *_retdata;
	
	_self = (struct Main *)_ptr->data;
	_data = (char *)_parms->data;
	name = *((const char * *)_data);
#if defined(SPEC_ILP32)
        _data += 4;
#else
        _data += 8;
#endif
	_retdata = _data;
	
	camera = rna_Main_cameras_new(_self, name);
	*((struct Camera **)_retdata) = camera;
}

void BlendDataCameras_remove(struct Main *_self, ReportList *reports, struct PointerRNA *camera)
{
	rna_Main_cameras_remove(_self, reports, camera);
}

void BlendDataCameras_remove_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	struct Main *_self;
	struct PointerRNA *camera;
	char *_data;
	
	_self = (struct Main *)_ptr->data;
	_data = (char *)_parms->data;
	camera = *((struct PointerRNA **)_data);
	
	rna_Main_cameras_remove(_self, reports, camera);
}

void BlendDataCameras_tag(struct Main *_self, int value)
{
	rna_Main_cameras_tag(_self, value);
}

void BlendDataCameras_tag_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	struct Main *_self;
	int value;
	char *_data;
	
	_self = (struct Main *)_ptr->data;
	_data = (char *)_parms->data;
	value = *((int *)_data);
	
	rna_Main_cameras_tag(_self, value);
}

/* Repeated prototypes to detect errors */

struct Camera *rna_Main_cameras_new(struct Main *_self, const char * name);
void rna_Main_cameras_remove(struct Main *_self, ReportList *reports, struct PointerRNA *camera);
void rna_Main_cameras_tag(struct Main *_self, int value);

struct Scene *BlendDataScenes_new(struct Main *_self, const char * name)
{
	return rna_Main_scenes_new(_self, name);
}

void BlendDataScenes_new_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	struct Main *_self;
	const char * name;
	struct Scene *scene;
	char *_data, *_retdata;
	
	_self = (struct Main *)_ptr->data;
	_data = (char *)_parms->data;
	name = *((const char * *)_data);
#if defined(SPEC_ILP32)
        _data += 4;
#else
        _data += 8;
#endif
	_retdata = _data;
	
	scene = rna_Main_scenes_new(_self, name);
	*((struct Scene **)_retdata) = scene;
}

void BlendDataScenes_remove(struct Main *_self, bContext *C, ReportList *reports, struct PointerRNA *scene)
{
	rna_Main_scenes_remove(_self, C, reports, scene);
}

void BlendDataScenes_remove_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	struct Main *_self;
	struct PointerRNA *scene;
	char *_data;
	
	_self = (struct Main *)_ptr->data;
	_data = (char *)_parms->data;
	scene = *((struct PointerRNA **)_data);
	
	rna_Main_scenes_remove(_self, C, reports, scene);
}

void BlendDataScenes_tag(struct Main *_self, int value)
{
	rna_Main_scenes_tag(_self, value);
}

void BlendDataScenes_tag_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	struct Main *_self;
	int value;
	char *_data;
	
	_self = (struct Main *)_ptr->data;
	_data = (char *)_parms->data;
	value = *((int *)_data);
	
	rna_Main_scenes_tag(_self, value);
}

/* Repeated prototypes to detect errors */

struct Scene *rna_Main_scenes_new(struct Main *_self, const char * name);
void rna_Main_scenes_remove(struct Main *_self, bContext *C, ReportList *reports, struct PointerRNA *scene);
void rna_Main_scenes_tag(struct Main *_self, int value);

struct Object *BlendDataObjects_new(struct Main *_self, ReportList *reports, const char * name, struct ID *object_data)
{
	return rna_Main_objects_new(_self, reports, name, object_data);
}

void BlendDataObjects_new_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	struct Main *_self;
	const char * name;
	struct ID *object_data;
	struct Object *object;
	char *_data, *_retdata;
	
	_self = (struct Main *)_ptr->data;
	_data = (char *)_parms->data;
	name = *((const char * *)_data);
#if defined(SPEC_ILP32)
        _data += 4;
#else
        _data += 8;
#endif
	object_data = *((struct ID **)_data);
#if defined(SPEC_ILP32)
        _data += 4;
#else
        _data += 8;
#endif
	_retdata = _data;
	
	object = rna_Main_objects_new(_self, reports, name, object_data);
	*((struct Object **)_retdata) = object;
}

void BlendDataObjects_remove(struct Main *_self, ReportList *reports, struct PointerRNA *object)
{
	rna_Main_objects_remove(_self, reports, object);
}

void BlendDataObjects_remove_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	struct Main *_self;
	struct PointerRNA *object;
	char *_data;
	
	_self = (struct Main *)_ptr->data;
	_data = (char *)_parms->data;
	object = *((struct PointerRNA **)_data);
	
	rna_Main_objects_remove(_self, reports, object);
}

void BlendDataObjects_tag(struct Main *_self, int value)
{
	rna_Main_objects_tag(_self, value);
}

void BlendDataObjects_tag_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	struct Main *_self;
	int value;
	char *_data;
	
	_self = (struct Main *)_ptr->data;
	_data = (char *)_parms->data;
	value = *((int *)_data);
	
	rna_Main_objects_tag(_self, value);
}

/* Repeated prototypes to detect errors */

struct Object *rna_Main_objects_new(struct Main *_self, ReportList *reports, const char * name, struct ID *object_data);
void rna_Main_objects_remove(struct Main *_self, ReportList *reports, struct PointerRNA *object);
void rna_Main_objects_tag(struct Main *_self, int value);

struct Material *BlendDataMaterials_new(struct Main *_self, const char * name)
{
	return rna_Main_materials_new(_self, name);
}

void BlendDataMaterials_new_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	struct Main *_self;
	const char * name;
	struct Material *material;
	char *_data, *_retdata;
	
	_self = (struct Main *)_ptr->data;
	_data = (char *)_parms->data;
	name = *((const char * *)_data);
#if defined(SPEC_ILP32)
        _data += 4;
#else
        _data += 8;
#endif
	_retdata = _data;
	
	material = rna_Main_materials_new(_self, name);
	*((struct Material **)_retdata) = material;
}

void BlendDataMaterials_remove(struct Main *_self, ReportList *reports, struct PointerRNA *material)
{
	rna_Main_materials_remove(_self, reports, material);
}

void BlendDataMaterials_remove_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	struct Main *_self;
	struct PointerRNA *material;
	char *_data;
	
	_self = (struct Main *)_ptr->data;
	_data = (char *)_parms->data;
	material = *((struct PointerRNA **)_data);
	
	rna_Main_materials_remove(_self, reports, material);
}

void BlendDataMaterials_tag(struct Main *_self, int value)
{
	rna_Main_materials_tag(_self, value);
}

void BlendDataMaterials_tag_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	struct Main *_self;
	int value;
	char *_data;
	
	_self = (struct Main *)_ptr->data;
	_data = (char *)_parms->data;
	value = *((int *)_data);
	
	rna_Main_materials_tag(_self, value);
}

/* Repeated prototypes to detect errors */

struct Material *rna_Main_materials_new(struct Main *_self, const char * name);
void rna_Main_materials_remove(struct Main *_self, ReportList *reports, struct PointerRNA *material);
void rna_Main_materials_tag(struct Main *_self, int value);

struct bNodeTree *BlendDataNodeTrees_new(struct Main *_self, const char * name, int type)
{
	return rna_Main_nodetree_new(_self, name, type);
}

void BlendDataNodeTrees_new_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	struct Main *_self;
	const char * name;
	int type;
	struct bNodeTree *tree;
	char *_data, *_retdata;
	
	_self = (struct Main *)_ptr->data;
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
	
	tree = rna_Main_nodetree_new(_self, name, type);
	*((struct bNodeTree **)_retdata) = tree;
}

void BlendDataNodeTrees_remove(struct Main *_self, ReportList *reports, struct PointerRNA *tree)
{
	rna_Main_nodetree_remove(_self, reports, tree);
}

void BlendDataNodeTrees_remove_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	struct Main *_self;
	struct PointerRNA *tree;
	char *_data;
	
	_self = (struct Main *)_ptr->data;
	_data = (char *)_parms->data;
	tree = *((struct PointerRNA **)_data);
	
	rna_Main_nodetree_remove(_self, reports, tree);
}

void BlendDataNodeTrees_tag(struct Main *_self, int value)
{
	rna_Main_node_groups_tag(_self, value);
}

void BlendDataNodeTrees_tag_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	struct Main *_self;
	int value;
	char *_data;
	
	_self = (struct Main *)_ptr->data;
	_data = (char *)_parms->data;
	value = *((int *)_data);
	
	rna_Main_node_groups_tag(_self, value);
}

/* Repeated prototypes to detect errors */

struct bNodeTree *rna_Main_nodetree_new(struct Main *_self, const char * name, int type);
void rna_Main_nodetree_remove(struct Main *_self, ReportList *reports, struct PointerRNA *tree);
void rna_Main_node_groups_tag(struct Main *_self, int value);

struct Mesh *BlendDataMeshes_new(struct Main *_self, const char * name)
{
	return rna_Main_meshes_new(_self, name);
}

void BlendDataMeshes_new_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	struct Main *_self;
	const char * name;
	struct Mesh *mesh;
	char *_data, *_retdata;
	
	_self = (struct Main *)_ptr->data;
	_data = (char *)_parms->data;
	name = *((const char * *)_data);
#if defined(SPEC_ILP32)
        _data += 4;
#else
        _data += 8;
#endif
	_retdata = _data;
	
	mesh = rna_Main_meshes_new(_self, name);
	*((struct Mesh **)_retdata) = mesh;
}

struct Mesh *BlendDataMeshes_new_from_object(struct Main *_self, ReportList *reports, struct Scene *scene, struct Object *object, int apply_modifiers, int settings, int calc_tessface, int calc_undeformed)
{
	return rna_Main_meshes_new_from_object(_self, reports, scene, object, apply_modifiers, settings, calc_tessface, calc_undeformed);
}

void BlendDataMeshes_new_from_object_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	struct Main *_self;
	struct Scene *scene;
	struct Object *object;
	int apply_modifiers;
	int settings;
	int calc_tessface;
	int calc_undeformed;
	struct Mesh *mesh;
	char *_data, *_retdata;
	
	_self = (struct Main *)_ptr->data;
	_data = (char *)_parms->data;
	scene = *((struct Scene **)_data);
#if defined(SPEC_ILP32)
        _data += 4;
#else
        _data += 8;
#endif
	object = *((struct Object **)_data);
#if defined(SPEC_ILP32)
        _data += 4;
#else
        _data += 8;
#endif
	apply_modifiers = *((int *)_data);
	_data += 4;
	settings = *((int *)_data);
	_data += 4;
	calc_tessface = *((int *)_data);
	_data += 4;
	calc_undeformed = *((int *)_data);
	_data += 4;
	_retdata = _data;
	
	mesh = rna_Main_meshes_new_from_object(_self, reports, scene, object, apply_modifiers, settings, calc_tessface, calc_undeformed);
	*((struct Mesh **)_retdata) = mesh;
}

void BlendDataMeshes_remove(struct Main *_self, ReportList *reports, struct PointerRNA *mesh)
{
	rna_Main_meshes_remove(_self, reports, mesh);
}

void BlendDataMeshes_remove_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	struct Main *_self;
	struct PointerRNA *mesh;
	char *_data;
	
	_self = (struct Main *)_ptr->data;
	_data = (char *)_parms->data;
	mesh = *((struct PointerRNA **)_data);
	
	rna_Main_meshes_remove(_self, reports, mesh);
}

void BlendDataMeshes_tag(struct Main *_self, int value)
{
	rna_Main_meshes_tag(_self, value);
}

void BlendDataMeshes_tag_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	struct Main *_self;
	int value;
	char *_data;
	
	_self = (struct Main *)_ptr->data;
	_data = (char *)_parms->data;
	value = *((int *)_data);
	
	rna_Main_meshes_tag(_self, value);
}

/* Repeated prototypes to detect errors */

struct Mesh *rna_Main_meshes_new(struct Main *_self, const char * name);
struct Mesh *rna_Main_meshes_new_from_object(struct Main *_self, ReportList *reports, struct Scene *scene, struct Object *object, int apply_modifiers, int settings, int calc_tessface, int calc_undeformed);
void rna_Main_meshes_remove(struct Main *_self, ReportList *reports, struct PointerRNA *mesh);
void rna_Main_meshes_tag(struct Main *_self, int value);

struct Lamp *BlendDataLamps_new(struct Main *_self, const char * name, int type)
{
	return rna_Main_lamps_new(_self, name, type);
}

void BlendDataLamps_new_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	struct Main *_self;
	const char * name;
	int type;
	struct Lamp *lamp;
	char *_data, *_retdata;
	
	_self = (struct Main *)_ptr->data;
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
	
	lamp = rna_Main_lamps_new(_self, name, type);
	*((struct Lamp **)_retdata) = lamp;
}

void BlendDataLamps_remove(struct Main *_self, ReportList *reports, struct PointerRNA *lamp)
{
	rna_Main_lamps_remove(_self, reports, lamp);
}

void BlendDataLamps_remove_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	struct Main *_self;
	struct PointerRNA *lamp;
	char *_data;
	
	_self = (struct Main *)_ptr->data;
	_data = (char *)_parms->data;
	lamp = *((struct PointerRNA **)_data);
	
	rna_Main_lamps_remove(_self, reports, lamp);
}

void BlendDataLamps_tag(struct Main *_self, int value)
{
	rna_Main_lamps_tag(_self, value);
}

void BlendDataLamps_tag_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	struct Main *_self;
	int value;
	char *_data;
	
	_self = (struct Main *)_ptr->data;
	_data = (char *)_parms->data;
	value = *((int *)_data);
	
	rna_Main_lamps_tag(_self, value);
}

/* Repeated prototypes to detect errors */

struct Lamp *rna_Main_lamps_new(struct Main *_self, const char * name, int type);
void rna_Main_lamps_remove(struct Main *_self, ReportList *reports, struct PointerRNA *lamp);
void rna_Main_lamps_tag(struct Main *_self, int value);

void BlendDataLibraries_tag(struct Main *_self, int value)
{
	rna_Main_libraries_tag(_self, value);
}

void BlendDataLibraries_tag_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	struct Main *_self;
	int value;
	char *_data;
	
	_self = (struct Main *)_ptr->data;
	_data = (char *)_parms->data;
	value = *((int *)_data);
	
	rna_Main_libraries_tag(_self, value);
}

/* Repeated prototypes to detect errors */

void rna_Main_libraries_tag(struct Main *_self, int value);

void BlendDataScreens_tag(struct Main *_self, int value)
{
	rna_Main_screens_tag(_self, value);
}

void BlendDataScreens_tag_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	struct Main *_self;
	int value;
	char *_data;
	
	_self = (struct Main *)_ptr->data;
	_data = (char *)_parms->data;
	value = *((int *)_data);
	
	rna_Main_screens_tag(_self, value);
}

/* Repeated prototypes to detect errors */

void rna_Main_screens_tag(struct Main *_self, int value);

void BlendDataWindowManagers_tag(struct Main *_self, int value)
{
	rna_Main_window_managers_tag(_self, value);
}

void BlendDataWindowManagers_tag_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	struct Main *_self;
	int value;
	char *_data;
	
	_self = (struct Main *)_ptr->data;
	_data = (char *)_parms->data;
	value = *((int *)_data);
	
	rna_Main_window_managers_tag(_self, value);
}

/* Repeated prototypes to detect errors */

void rna_Main_window_managers_tag(struct Main *_self, int value);

struct Image *BlendDataImages_new(struct Main *_self, const char * name, int width, int height, int alpha, int float_buffer)
{
	return rna_Main_images_new(_self, name, width, height, alpha, float_buffer);
}

void BlendDataImages_new_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	struct Main *_self;
	const char * name;
	int width;
	int height;
	int alpha;
	int float_buffer;
	struct Image *image;
	char *_data, *_retdata;
	
	_self = (struct Main *)_ptr->data;
	_data = (char *)_parms->data;
	name = *((const char * *)_data);
#if defined(SPEC_ILP32)
        _data += 4;
#else
        _data += 8;
#endif
	width = *((int *)_data);
	_data += 4;
	height = *((int *)_data);
	_data += 4;
	alpha = *((int *)_data);
	_data += 4;
	float_buffer = *((int *)_data);
	_data += 4;
	_retdata = _data;
	
	image = rna_Main_images_new(_self, name, width, height, alpha, float_buffer);
	*((struct Image **)_retdata) = image;
}

struct Image *BlendDataImages_load(struct Main *_self, ReportList *reports, const char * filepath)
{
	return rna_Main_images_load(_self, reports, filepath);
}

void BlendDataImages_load_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	struct Main *_self;
	const char * filepath;
	struct Image *image;
	char *_data, *_retdata;
	
	_self = (struct Main *)_ptr->data;
	_data = (char *)_parms->data;
	filepath = *((const char * *)_data);
#if defined(SPEC_ILP32)
        _data += 4;
#else
        _data += 8;
#endif
	_retdata = _data;
	
	image = rna_Main_images_load(_self, reports, filepath);
	*((struct Image **)_retdata) = image;
}

void BlendDataImages_remove(struct Main *_self, ReportList *reports, struct PointerRNA *image)
{
	rna_Main_images_remove(_self, reports, image);
}

void BlendDataImages_remove_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	struct Main *_self;
	struct PointerRNA *image;
	char *_data;
	
	_self = (struct Main *)_ptr->data;
	_data = (char *)_parms->data;
	image = *((struct PointerRNA **)_data);
	
	rna_Main_images_remove(_self, reports, image);
}

void BlendDataImages_tag(struct Main *_self, int value)
{
	rna_Main_images_tag(_self, value);
}

void BlendDataImages_tag_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	struct Main *_self;
	int value;
	char *_data;
	
	_self = (struct Main *)_ptr->data;
	_data = (char *)_parms->data;
	value = *((int *)_data);
	
	rna_Main_images_tag(_self, value);
}

/* Repeated prototypes to detect errors */

struct Image *rna_Main_images_new(struct Main *_self, const char * name, int width, int height, int alpha, int float_buffer);
struct Image *rna_Main_images_load(struct Main *_self, ReportList *reports, const char * filepath);
void rna_Main_images_remove(struct Main *_self, ReportList *reports, struct PointerRNA *image);
void rna_Main_images_tag(struct Main *_self, int value);

struct Lattice *BlendDataLattices_new(struct Main *_self, const char * name)
{
	return rna_Main_lattices_new(_self, name);
}

void BlendDataLattices_new_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	struct Main *_self;
	const char * name;
	struct Lattice *lattice;
	char *_data, *_retdata;
	
	_self = (struct Main *)_ptr->data;
	_data = (char *)_parms->data;
	name = *((const char * *)_data);
#if defined(SPEC_ILP32)
        _data += 4;
#else
        _data += 8;
#endif
	_retdata = _data;
	
	lattice = rna_Main_lattices_new(_self, name);
	*((struct Lattice **)_retdata) = lattice;
}

void BlendDataLattices_remove(struct Main *_self, ReportList *reports, struct PointerRNA *lattice)
{
	rna_Main_lattices_remove(_self, reports, lattice);
}

void BlendDataLattices_remove_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	struct Main *_self;
	struct PointerRNA *lattice;
	char *_data;
	
	_self = (struct Main *)_ptr->data;
	_data = (char *)_parms->data;
	lattice = *((struct PointerRNA **)_data);
	
	rna_Main_lattices_remove(_self, reports, lattice);
}

void BlendDataLattices_tag(struct Main *_self, int value)
{
	rna_Main_lattices_tag(_self, value);
}

void BlendDataLattices_tag_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	struct Main *_self;
	int value;
	char *_data;
	
	_self = (struct Main *)_ptr->data;
	_data = (char *)_parms->data;
	value = *((int *)_data);
	
	rna_Main_lattices_tag(_self, value);
}

/* Repeated prototypes to detect errors */

struct Lattice *rna_Main_lattices_new(struct Main *_self, const char * name);
void rna_Main_lattices_remove(struct Main *_self, ReportList *reports, struct PointerRNA *lattice);
void rna_Main_lattices_tag(struct Main *_self, int value);

struct Curve *BlendDataCurves_new(struct Main *_self, const char * name, int type)
{
	return rna_Main_curves_new(_self, name, type);
}

void BlendDataCurves_new_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	struct Main *_self;
	const char * name;
	int type;
	struct Curve *curve;
	char *_data, *_retdata;
	
	_self = (struct Main *)_ptr->data;
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
	
	curve = rna_Main_curves_new(_self, name, type);
	*((struct Curve **)_retdata) = curve;
}

void BlendDataCurves_remove(struct Main *_self, ReportList *reports, struct PointerRNA *curve)
{
	rna_Main_curves_remove(_self, reports, curve);
}

void BlendDataCurves_remove_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	struct Main *_self;
	struct PointerRNA *curve;
	char *_data;
	
	_self = (struct Main *)_ptr->data;
	_data = (char *)_parms->data;
	curve = *((struct PointerRNA **)_data);
	
	rna_Main_curves_remove(_self, reports, curve);
}

void BlendDataCurves_tag(struct Main *_self, int value)
{
	rna_Main_curves_tag(_self, value);
}

void BlendDataCurves_tag_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	struct Main *_self;
	int value;
	char *_data;
	
	_self = (struct Main *)_ptr->data;
	_data = (char *)_parms->data;
	value = *((int *)_data);
	
	rna_Main_curves_tag(_self, value);
}

/* Repeated prototypes to detect errors */

struct Curve *rna_Main_curves_new(struct Main *_self, const char * name, int type);
void rna_Main_curves_remove(struct Main *_self, ReportList *reports, struct PointerRNA *curve);
void rna_Main_curves_tag(struct Main *_self, int value);

struct MetaBall *BlendDataMetaBalls_new(struct Main *_self, const char * name)
{
	return rna_Main_metaballs_new(_self, name);
}

void BlendDataMetaBalls_new_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	struct Main *_self;
	const char * name;
	struct MetaBall *metaball;
	char *_data, *_retdata;
	
	_self = (struct Main *)_ptr->data;
	_data = (char *)_parms->data;
	name = *((const char * *)_data);
#if defined(SPEC_ILP32)
        _data += 4;
#else
        _data += 8;
#endif
	_retdata = _data;
	
	metaball = rna_Main_metaballs_new(_self, name);
	*((struct MetaBall **)_retdata) = metaball;
}

void BlendDataMetaBalls_remove(struct Main *_self, ReportList *reports, struct PointerRNA *metaball)
{
	rna_Main_metaballs_remove(_self, reports, metaball);
}

void BlendDataMetaBalls_remove_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	struct Main *_self;
	struct PointerRNA *metaball;
	char *_data;
	
	_self = (struct Main *)_ptr->data;
	_data = (char *)_parms->data;
	metaball = *((struct PointerRNA **)_data);
	
	rna_Main_metaballs_remove(_self, reports, metaball);
}

void BlendDataMetaBalls_tag(struct Main *_self, int value)
{
	rna_Main_metaballs_tag(_self, value);
}

void BlendDataMetaBalls_tag_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	struct Main *_self;
	int value;
	char *_data;
	
	_self = (struct Main *)_ptr->data;
	_data = (char *)_parms->data;
	value = *((int *)_data);
	
	rna_Main_metaballs_tag(_self, value);
}

/* Repeated prototypes to detect errors */

struct MetaBall *rna_Main_metaballs_new(struct Main *_self, const char * name);
void rna_Main_metaballs_remove(struct Main *_self, ReportList *reports, struct PointerRNA *metaball);
void rna_Main_metaballs_tag(struct Main *_self, int value);

struct VFont *BlendDataFonts_load(struct Main *_self, ReportList *reports, const char * filepath)
{
	return rna_Main_fonts_load(_self, reports, filepath);
}

void BlendDataFonts_load_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	struct Main *_self;
	const char * filepath;
	struct VFont *vfont;
	char *_data, *_retdata;
	
	_self = (struct Main *)_ptr->data;
	_data = (char *)_parms->data;
	filepath = *((const char * *)_data);
#if defined(SPEC_ILP32)
        _data += 4;
#else
        _data += 8;
#endif
	_retdata = _data;
	
	vfont = rna_Main_fonts_load(_self, reports, filepath);
	*((struct VFont **)_retdata) = vfont;
}

void BlendDataFonts_remove(struct Main *_self, ReportList *reports, struct PointerRNA *vfont)
{
	rna_Main_fonts_remove(_self, reports, vfont);
}

void BlendDataFonts_remove_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	struct Main *_self;
	struct PointerRNA *vfont;
	char *_data;
	
	_self = (struct Main *)_ptr->data;
	_data = (char *)_parms->data;
	vfont = *((struct PointerRNA **)_data);
	
	rna_Main_fonts_remove(_self, reports, vfont);
}

void BlendDataFonts_tag(struct Main *_self, int value)
{
	rna_Main_fonts_tag(_self, value);
}

void BlendDataFonts_tag_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	struct Main *_self;
	int value;
	char *_data;
	
	_self = (struct Main *)_ptr->data;
	_data = (char *)_parms->data;
	value = *((int *)_data);
	
	rna_Main_fonts_tag(_self, value);
}

/* Repeated prototypes to detect errors */

struct VFont *rna_Main_fonts_load(struct Main *_self, ReportList *reports, const char * filepath);
void rna_Main_fonts_remove(struct Main *_self, ReportList *reports, struct PointerRNA *vfont);
void rna_Main_fonts_tag(struct Main *_self, int value);

struct Tex *BlendDataTextures_new(struct Main *_self, const char * name, int type)
{
	return rna_Main_textures_new(_self, name, type);
}

void BlendDataTextures_new_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	struct Main *_self;
	const char * name;
	int type;
	struct Tex *texture;
	char *_data, *_retdata;
	
	_self = (struct Main *)_ptr->data;
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
	
	texture = rna_Main_textures_new(_self, name, type);
	*((struct Tex **)_retdata) = texture;
}

void BlendDataTextures_remove(struct Main *_self, ReportList *reports, struct PointerRNA *texture)
{
	rna_Main_textures_remove(_self, reports, texture);
}

void BlendDataTextures_remove_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	struct Main *_self;
	struct PointerRNA *texture;
	char *_data;
	
	_self = (struct Main *)_ptr->data;
	_data = (char *)_parms->data;
	texture = *((struct PointerRNA **)_data);
	
	rna_Main_textures_remove(_self, reports, texture);
}

void BlendDataTextures_tag(struct Main *_self, int value)
{
	rna_Main_textures_tag(_self, value);
}

void BlendDataTextures_tag_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	struct Main *_self;
	int value;
	char *_data;
	
	_self = (struct Main *)_ptr->data;
	_data = (char *)_parms->data;
	value = *((int *)_data);
	
	rna_Main_textures_tag(_self, value);
}

/* Repeated prototypes to detect errors */

struct Tex *rna_Main_textures_new(struct Main *_self, const char * name, int type);
void rna_Main_textures_remove(struct Main *_self, ReportList *reports, struct PointerRNA *texture);
void rna_Main_textures_tag(struct Main *_self, int value);

struct Brush *BlendDataBrushes_new(struct Main *_self, const char * name)
{
	return rna_Main_brushes_new(_self, name);
}

void BlendDataBrushes_new_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	struct Main *_self;
	const char * name;
	struct Brush *brush;
	char *_data, *_retdata;
	
	_self = (struct Main *)_ptr->data;
	_data = (char *)_parms->data;
	name = *((const char * *)_data);
#if defined(SPEC_ILP32)
        _data += 4;
#else
        _data += 8;
#endif
	_retdata = _data;
	
	brush = rna_Main_brushes_new(_self, name);
	*((struct Brush **)_retdata) = brush;
}

void BlendDataBrushes_remove(struct Main *_self, ReportList *reports, struct PointerRNA *brush)
{
	rna_Main_brushes_remove(_self, reports, brush);
}

void BlendDataBrushes_remove_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	struct Main *_self;
	struct PointerRNA *brush;
	char *_data;
	
	_self = (struct Main *)_ptr->data;
	_data = (char *)_parms->data;
	brush = *((struct PointerRNA **)_data);
	
	rna_Main_brushes_remove(_self, reports, brush);
}

void BlendDataBrushes_tag(struct Main *_self, int value)
{
	rna_Main_brushes_tag(_self, value);
}

void BlendDataBrushes_tag_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	struct Main *_self;
	int value;
	char *_data;
	
	_self = (struct Main *)_ptr->data;
	_data = (char *)_parms->data;
	value = *((int *)_data);
	
	rna_Main_brushes_tag(_self, value);
}

/* Repeated prototypes to detect errors */

struct Brush *rna_Main_brushes_new(struct Main *_self, const char * name);
void rna_Main_brushes_remove(struct Main *_self, ReportList *reports, struct PointerRNA *brush);
void rna_Main_brushes_tag(struct Main *_self, int value);

struct World *BlendDataWorlds_new(struct Main *_self, const char * name)
{
	return rna_Main_worlds_new(_self, name);
}

void BlendDataWorlds_new_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	struct Main *_self;
	const char * name;
	struct World *world;
	char *_data, *_retdata;
	
	_self = (struct Main *)_ptr->data;
	_data = (char *)_parms->data;
	name = *((const char * *)_data);
#if defined(SPEC_ILP32)
        _data += 4;
#else
        _data += 8;
#endif
	_retdata = _data;
	
	world = rna_Main_worlds_new(_self, name);
	*((struct World **)_retdata) = world;
}

void BlendDataWorlds_remove(struct Main *_self, ReportList *reports, struct PointerRNA *world)
{
	rna_Main_worlds_remove(_self, reports, world);
}

void BlendDataWorlds_remove_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	struct Main *_self;
	struct PointerRNA *world;
	char *_data;
	
	_self = (struct Main *)_ptr->data;
	_data = (char *)_parms->data;
	world = *((struct PointerRNA **)_data);
	
	rna_Main_worlds_remove(_self, reports, world);
}

void BlendDataWorlds_tag(struct Main *_self, int value)
{
	rna_Main_worlds_tag(_self, value);
}

void BlendDataWorlds_tag_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	struct Main *_self;
	int value;
	char *_data;
	
	_self = (struct Main *)_ptr->data;
	_data = (char *)_parms->data;
	value = *((int *)_data);
	
	rna_Main_worlds_tag(_self, value);
}

/* Repeated prototypes to detect errors */

struct World *rna_Main_worlds_new(struct Main *_self, const char * name);
void rna_Main_worlds_remove(struct Main *_self, ReportList *reports, struct PointerRNA *world);
void rna_Main_worlds_tag(struct Main *_self, int value);

struct Group *BlendDataGroups_new(struct Main *_self, const char * name)
{
	return rna_Main_groups_new(_self, name);
}

void BlendDataGroups_new_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	struct Main *_self;
	const char * name;
	struct Group *group;
	char *_data, *_retdata;
	
	_self = (struct Main *)_ptr->data;
	_data = (char *)_parms->data;
	name = *((const char * *)_data);
#if defined(SPEC_ILP32)
        _data += 4;
#else
        _data += 8;
#endif
	_retdata = _data;
	
	group = rna_Main_groups_new(_self, name);
	*((struct Group **)_retdata) = group;
}

void BlendDataGroups_remove(struct Main *_self, struct PointerRNA *group)
{
	rna_Main_groups_remove(_self, group);
}

void BlendDataGroups_remove_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	struct Main *_self;
	struct PointerRNA *group;
	char *_data;
	
	_self = (struct Main *)_ptr->data;
	_data = (char *)_parms->data;
	group = *((struct PointerRNA **)_data);
	
	rna_Main_groups_remove(_self, group);
}

void BlendDataGroups_tag(struct Main *_self, int value)
{
	rna_Main_groups_tag(_self, value);
}

void BlendDataGroups_tag_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	struct Main *_self;
	int value;
	char *_data;
	
	_self = (struct Main *)_ptr->data;
	_data = (char *)_parms->data;
	value = *((int *)_data);
	
	rna_Main_groups_tag(_self, value);
}

/* Repeated prototypes to detect errors */

struct Group *rna_Main_groups_new(struct Main *_self, const char * name);
void rna_Main_groups_remove(struct Main *_self, struct PointerRNA *group);
void rna_Main_groups_tag(struct Main *_self, int value);

struct Text *BlendDataTexts_new(struct Main *_self, const char * name)
{
	return rna_Main_texts_new(_self, name);
}

void BlendDataTexts_new_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	struct Main *_self;
	const char * name;
	struct Text *text;
	char *_data, *_retdata;
	
	_self = (struct Main *)_ptr->data;
	_data = (char *)_parms->data;
	name = *((const char * *)_data);
#if defined(SPEC_ILP32)
        _data += 4;
#else
        _data += 8;
#endif
	_retdata = _data;
	
	text = rna_Main_texts_new(_self, name);
	*((struct Text **)_retdata) = text;
}

void BlendDataTexts_remove(struct Main *_self, struct PointerRNA *text)
{
	rna_Main_texts_remove(_self, text);
}

void BlendDataTexts_remove_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	struct Main *_self;
	struct PointerRNA *text;
	char *_data;
	
	_self = (struct Main *)_ptr->data;
	_data = (char *)_parms->data;
	text = *((struct PointerRNA **)_data);
	
	rna_Main_texts_remove(_self, text);
}

struct Text *BlendDataTexts_load(struct Main *_self, ReportList *reports, const char * filepath, int internal)
{
	return rna_Main_texts_load(_self, reports, filepath, internal);
}

void BlendDataTexts_load_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	struct Main *_self;
	const char * filepath;
	int internal;
	struct Text *text;
	char *_data, *_retdata;
	
	_self = (struct Main *)_ptr->data;
	_data = (char *)_parms->data;
	filepath = *((const char * *)_data);
#if defined(SPEC_ILP32)
        _data += 4;
#else
        _data += 8;
#endif
	internal = *((int *)_data);
	_data += 4;
	_retdata = _data;
	
	text = rna_Main_texts_load(_self, reports, filepath, internal);
	*((struct Text **)_retdata) = text;
}

void BlendDataTexts_tag(struct Main *_self, int value)
{
	rna_Main_texts_tag(_self, value);
}

void BlendDataTexts_tag_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	struct Main *_self;
	int value;
	char *_data;
	
	_self = (struct Main *)_ptr->data;
	_data = (char *)_parms->data;
	value = *((int *)_data);
	
	rna_Main_texts_tag(_self, value);
}

/* Repeated prototypes to detect errors */

struct Text *rna_Main_texts_new(struct Main *_self, const char * name);
void rna_Main_texts_remove(struct Main *_self, struct PointerRNA *text);
struct Text *rna_Main_texts_load(struct Main *_self, ReportList *reports, const char * filepath, int internal);
void rna_Main_texts_tag(struct Main *_self, int value);

struct Speaker *BlendDataSpeakers_new(struct Main *_self, const char * name)
{
	return rna_Main_speakers_new(_self, name);
}

void BlendDataSpeakers_new_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	struct Main *_self;
	const char * name;
	struct Speaker *speaker;
	char *_data, *_retdata;
	
	_self = (struct Main *)_ptr->data;
	_data = (char *)_parms->data;
	name = *((const char * *)_data);
#if defined(SPEC_ILP32)
        _data += 4;
#else
        _data += 8;
#endif
	_retdata = _data;
	
	speaker = rna_Main_speakers_new(_self, name);
	*((struct Speaker **)_retdata) = speaker;
}

void BlendDataSpeakers_remove(struct Main *_self, ReportList *reports, struct PointerRNA *speaker)
{
	rna_Main_speakers_remove(_self, reports, speaker);
}

void BlendDataSpeakers_remove_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	struct Main *_self;
	struct PointerRNA *speaker;
	char *_data;
	
	_self = (struct Main *)_ptr->data;
	_data = (char *)_parms->data;
	speaker = *((struct PointerRNA **)_data);
	
	rna_Main_speakers_remove(_self, reports, speaker);
}

void BlendDataSpeakers_tag(struct Main *_self, int value)
{
	rna_Main_speakers_tag(_self, value);
}

void BlendDataSpeakers_tag_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	struct Main *_self;
	int value;
	char *_data;
	
	_self = (struct Main *)_ptr->data;
	_data = (char *)_parms->data;
	value = *((int *)_data);
	
	rna_Main_speakers_tag(_self, value);
}

/* Repeated prototypes to detect errors */

struct Speaker *rna_Main_speakers_new(struct Main *_self, const char * name);
void rna_Main_speakers_remove(struct Main *_self, ReportList *reports, struct PointerRNA *speaker);
void rna_Main_speakers_tag(struct Main *_self, int value);

void BlendDataSounds_tag(struct Main *_self, int value)
{
	rna_Main_sounds_tag(_self, value);
}

void BlendDataSounds_tag_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	struct Main *_self;
	int value;
	char *_data;
	
	_self = (struct Main *)_ptr->data;
	_data = (char *)_parms->data;
	value = *((int *)_data);
	
	rna_Main_sounds_tag(_self, value);
}

/* Repeated prototypes to detect errors */

void rna_Main_sounds_tag(struct Main *_self, int value);

struct bArmature *BlendDataArmatures_new(struct Main *_self, const char * name)
{
	return rna_Main_armatures_new(_self, name);
}

void BlendDataArmatures_new_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	struct Main *_self;
	const char * name;
	struct bArmature *armature;
	char *_data, *_retdata;
	
	_self = (struct Main *)_ptr->data;
	_data = (char *)_parms->data;
	name = *((const char * *)_data);
#if defined(SPEC_ILP32)
        _data += 4;
#else
        _data += 8;
#endif
	_retdata = _data;
	
	armature = rna_Main_armatures_new(_self, name);
	*((struct bArmature **)_retdata) = armature;
}

void BlendDataArmatures_remove(struct Main *_self, ReportList *reports, struct PointerRNA *armature)
{
	rna_Main_armatures_remove(_self, reports, armature);
}

void BlendDataArmatures_remove_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	struct Main *_self;
	struct PointerRNA *armature;
	char *_data;
	
	_self = (struct Main *)_ptr->data;
	_data = (char *)_parms->data;
	armature = *((struct PointerRNA **)_data);
	
	rna_Main_armatures_remove(_self, reports, armature);
}

void BlendDataArmatures_tag(struct Main *_self, int value)
{
	rna_Main_armatures_tag(_self, value);
}

void BlendDataArmatures_tag_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	struct Main *_self;
	int value;
	char *_data;
	
	_self = (struct Main *)_ptr->data;
	_data = (char *)_parms->data;
	value = *((int *)_data);
	
	rna_Main_armatures_tag(_self, value);
}

/* Repeated prototypes to detect errors */

struct bArmature *rna_Main_armatures_new(struct Main *_self, const char * name);
void rna_Main_armatures_remove(struct Main *_self, ReportList *reports, struct PointerRNA *armature);
void rna_Main_armatures_tag(struct Main *_self, int value);

struct bAction *BlendDataActions_new(struct Main *_self, const char * name)
{
	return rna_Main_actions_new(_self, name);
}

void BlendDataActions_new_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	struct Main *_self;
	const char * name;
	struct bAction *action;
	char *_data, *_retdata;
	
	_self = (struct Main *)_ptr->data;
	_data = (char *)_parms->data;
	name = *((const char * *)_data);
#if defined(SPEC_ILP32)
        _data += 4;
#else
        _data += 8;
#endif
	_retdata = _data;
	
	action = rna_Main_actions_new(_self, name);
	*((struct bAction **)_retdata) = action;
}

void BlendDataActions_remove(struct Main *_self, ReportList *reports, struct PointerRNA *action)
{
	rna_Main_actions_remove(_self, reports, action);
}

void BlendDataActions_remove_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	struct Main *_self;
	struct PointerRNA *action;
	char *_data;
	
	_self = (struct Main *)_ptr->data;
	_data = (char *)_parms->data;
	action = *((struct PointerRNA **)_data);
	
	rna_Main_actions_remove(_self, reports, action);
}

void BlendDataActions_tag(struct Main *_self, int value)
{
	rna_Main_actions_tag(_self, value);
}

void BlendDataActions_tag_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	struct Main *_self;
	int value;
	char *_data;
	
	_self = (struct Main *)_ptr->data;
	_data = (char *)_parms->data;
	value = *((int *)_data);
	
	rna_Main_actions_tag(_self, value);
}

/* Repeated prototypes to detect errors */

struct bAction *rna_Main_actions_new(struct Main *_self, const char * name);
void rna_Main_actions_remove(struct Main *_self, ReportList *reports, struct PointerRNA *action);
void rna_Main_actions_tag(struct Main *_self, int value);

struct ParticleSettings *BlendDataParticles_new(struct Main *_self, const char * name)
{
	return rna_Main_particles_new(_self, name);
}

void BlendDataParticles_new_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	struct Main *_self;
	const char * name;
	struct ParticleSettings *particle;
	char *_data, *_retdata;
	
	_self = (struct Main *)_ptr->data;
	_data = (char *)_parms->data;
	name = *((const char * *)_data);
#if defined(SPEC_ILP32)
        _data += 4;
#else
        _data += 8;
#endif
	_retdata = _data;
	
	particle = rna_Main_particles_new(_self, name);
	*((struct ParticleSettings **)_retdata) = particle;
}

void BlendDataParticles_remove(struct Main *_self, ReportList *reports, struct PointerRNA *particle)
{
	rna_Main_particles_remove(_self, reports, particle);
}

void BlendDataParticles_remove_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	struct Main *_self;
	struct PointerRNA *particle;
	char *_data;
	
	_self = (struct Main *)_ptr->data;
	_data = (char *)_parms->data;
	particle = *((struct PointerRNA **)_data);
	
	rna_Main_particles_remove(_self, reports, particle);
}

void BlendDataParticles_tag(struct Main *_self, int value)
{
	rna_Main_particles_tag(_self, value);
}

void BlendDataParticles_tag_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	struct Main *_self;
	int value;
	char *_data;
	
	_self = (struct Main *)_ptr->data;
	_data = (char *)_parms->data;
	value = *((int *)_data);
	
	rna_Main_particles_tag(_self, value);
}

/* Repeated prototypes to detect errors */

struct ParticleSettings *rna_Main_particles_new(struct Main *_self, const char * name);
void rna_Main_particles_remove(struct Main *_self, ReportList *reports, struct PointerRNA *particle);
void rna_Main_particles_tag(struct Main *_self, int value);

void BlendDataGreasePencils_tag(struct Main *_self, int value)
{
	rna_Main_gpencil_tag(_self, value);
}

void BlendDataGreasePencils_tag_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	struct Main *_self;
	int value;
	char *_data;
	
	_self = (struct Main *)_ptr->data;
	_data = (char *)_parms->data;
	value = *((int *)_data);
	
	rna_Main_gpencil_tag(_self, value);
}

struct bGPdata *BlendDataGreasePencils_new(const char * name)
{
	return gpencil_data_addnew(name);
}

void BlendDataGreasePencils_new_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	const char * name;
	struct bGPdata *grease_pencil;
	char *_data, *_retdata;
	
	_data = (char *)_parms->data;
	name = *((const char * *)_data);
#if defined(SPEC_ILP32)
        _data += 4;
#else
        _data += 8;
#endif
	_retdata = _data;
	
	grease_pencil = gpencil_data_addnew(name);
	*((struct bGPdata **)_retdata) = grease_pencil;
}

void BlendDataGreasePencils_remove(struct Main *_self, ReportList *reports, struct PointerRNA *grease_pencil)
{
	rna_Main_grease_pencil_remove(_self, reports, grease_pencil);
}

void BlendDataGreasePencils_remove_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	struct Main *_self;
	struct PointerRNA *grease_pencil;
	char *_data;
	
	_self = (struct Main *)_ptr->data;
	_data = (char *)_parms->data;
	grease_pencil = *((struct PointerRNA **)_data);
	
	rna_Main_grease_pencil_remove(_self, reports, grease_pencil);
}

/* Repeated prototypes to detect errors */

void rna_Main_gpencil_tag(struct Main *_self, int value);
struct bGPdata *gpencil_data_addnew(const char * name);
void rna_Main_grease_pencil_remove(struct Main *_self, ReportList *reports, struct PointerRNA *grease_pencil);

void BlendDataMovieClips_tag(struct Main *_self, int value)
{
	rna_Main_movieclips_tag(_self, value);
}

void BlendDataMovieClips_tag_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	struct Main *_self;
	int value;
	char *_data;
	
	_self = (struct Main *)_ptr->data;
	_data = (char *)_parms->data;
	value = *((int *)_data);
	
	rna_Main_movieclips_tag(_self, value);
}

void BlendDataMovieClips_remove(struct Main *_self, struct PointerRNA *clip)
{
	rna_Main_movieclips_remove(_self, clip);
}

void BlendDataMovieClips_remove_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	struct Main *_self;
	struct PointerRNA *clip;
	char *_data;
	
	_self = (struct Main *)_ptr->data;
	_data = (char *)_parms->data;
	clip = *((struct PointerRNA **)_data);
	
	rna_Main_movieclips_remove(_self, clip);
}

struct MovieClip *BlendDataMovieClips_load(struct Main *_self, ReportList *reports, const char * filepath)
{
	return rna_Main_movieclip_load(_self, reports, filepath);
}

void BlendDataMovieClips_load_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	struct Main *_self;
	const char * filepath;
	struct MovieClip *clip;
	char *_data, *_retdata;
	
	_self = (struct Main *)_ptr->data;
	_data = (char *)_parms->data;
	filepath = *((const char * *)_data);
#if defined(SPEC_ILP32)
        _data += 4;
#else
        _data += 8;
#endif
	_retdata = _data;
	
	clip = rna_Main_movieclip_load(_self, reports, filepath);
	*((struct MovieClip **)_retdata) = clip;
}

/* Repeated prototypes to detect errors */

void rna_Main_movieclips_tag(struct Main *_self, int value);
void rna_Main_movieclips_remove(struct Main *_self, struct PointerRNA *clip);
struct MovieClip *rna_Main_movieclip_load(struct Main *_self, ReportList *reports, const char * filepath);

void BlendDataMasks_tag(struct Main *_self, int value)
{
	rna_Main_masks_tag(_self, value);
}

void BlendDataMasks_tag_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	struct Main *_self;
	int value;
	char *_data;
	
	_self = (struct Main *)_ptr->data;
	_data = (char *)_parms->data;
	value = *((int *)_data);
	
	rna_Main_masks_tag(_self, value);
}

struct Mask *BlendDataMasks_new(struct Main *_self, const char * name)
{
	return rna_Main_mask_new(_self, name);
}

void BlendDataMasks_new_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	struct Main *_self;
	const char * name;
	struct Mask *mask;
	char *_data, *_retdata;
	
	_self = (struct Main *)_ptr->data;
	_data = (char *)_parms->data;
	name = *((const char * *)_data);
#if defined(SPEC_ILP32)
        _data += 4;
#else
        _data += 8;
#endif
	_retdata = _data;
	
	mask = rna_Main_mask_new(_self, name);
	*((struct Mask **)_retdata) = mask;
}

void BlendDataMasks_remove(struct Main *_self, struct PointerRNA *mask)
{
	rna_Main_masks_remove(_self, mask);
}

void BlendDataMasks_remove_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	struct Main *_self;
	struct PointerRNA *mask;
	char *_data;
	
	_self = (struct Main *)_ptr->data;
	_data = (char *)_parms->data;
	mask = *((struct PointerRNA **)_data);
	
	rna_Main_masks_remove(_self, mask);
}

/* Repeated prototypes to detect errors */

void rna_Main_masks_tag(struct Main *_self, int value);
struct Mask *rna_Main_mask_new(struct Main *_self, const char * name);
void rna_Main_masks_remove(struct Main *_self, struct PointerRNA *mask);

void BlendDataLineStyles_tag(struct Main *_self, int value)
{
	rna_Main_linestyle_tag(_self, value);
}

void BlendDataLineStyles_tag_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	struct Main *_self;
	int value;
	char *_data;
	
	_self = (struct Main *)_ptr->data;
	_data = (char *)_parms->data;
	value = *((int *)_data);
	
	rna_Main_linestyle_tag(_self, value);
}

struct FreestyleLineStyle *BlendDataLineStyles_new(struct Main *_self, const char * name)
{
	return rna_Main_linestyles_new(_self, name);
}

void BlendDataLineStyles_new_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	struct Main *_self;
	const char * name;
	struct FreestyleLineStyle *linestyle;
	char *_data, *_retdata;
	
	_self = (struct Main *)_ptr->data;
	_data = (char *)_parms->data;
	name = *((const char * *)_data);
#if defined(SPEC_ILP32)
        _data += 4;
#else
        _data += 8;
#endif
	_retdata = _data;
	
	linestyle = rna_Main_linestyles_new(_self, name);
	*((struct FreestyleLineStyle **)_retdata) = linestyle;
}

void BlendDataLineStyles_remove(struct Main *_self, ReportList *reports, struct FreestyleLineStyle *linestyle)
{
	rna_Main_linestyles_remove(_self, reports, linestyle);
}

void BlendDataLineStyles_remove_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	struct Main *_self;
	struct FreestyleLineStyle *linestyle;
	char *_data;
	
	_self = (struct Main *)_ptr->data;
	_data = (char *)_parms->data;
	linestyle = *((struct FreestyleLineStyle **)_data);
	
	rna_Main_linestyles_remove(_self, reports, linestyle);
}

/* Repeated prototypes to detect errors */

void rna_Main_linestyle_tag(struct Main *_self, int value);
struct FreestyleLineStyle *rna_Main_linestyles_new(struct Main *_self, const char * name);
void rna_Main_linestyles_remove(struct Main *_self, ReportList *reports, struct FreestyleLineStyle *linestyle);

/* Blendfile Data */
CollectionPropertyRNA rna_BlendData_rna_properties = {
	{(PropertyRNA *)&rna_BlendData_rna_type, NULL,
	-1, "rna_properties", 128, "Properties",
	"RNA property collection",
	0, "*",
	PROP_COLLECTION, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	BlendData_rna_properties_begin, BlendData_rna_properties_next, BlendData_rna_properties_end, BlendData_rna_properties_get, NULL, NULL, BlendData_rna_properties_lookup_string, NULL, &RNA_Property
};

PointerPropertyRNA rna_BlendData_rna_type = {
	{(PropertyRNA *)&rna_BlendData_filepath, (PropertyRNA *)&rna_BlendData_rna_properties,
	-1, "rna_type", 8912896, "RNA",
	"RNA type definition",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	BlendData_rna_type_get, NULL, NULL, NULL,&RNA_Struct
};

StringPropertyRNA rna_BlendData_filepath = {
	{(PropertyRNA *)&rna_BlendData_is_dirty, (PropertyRNA *)&rna_BlendData_rna_type,
	-1, "filepath", 262144, "Filename",
	"Path to the .blend file",
	0, "*",
	PROP_STRING, PROP_FILEPATH | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	BlendData_filepath_get, BlendData_filepath_length, NULL, NULL, NULL, NULL, 1024, ""
};

BoolPropertyRNA rna_BlendData_is_dirty = {
	{(PropertyRNA *)&rna_BlendData_is_saved, (PropertyRNA *)&rna_BlendData_filepath,
	-1, "is_dirty", 2, "File Has Unsaved Changes",
	"Have recent edits been saved to disk",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	BlendData_is_dirty_get, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_BlendData_is_saved = {
	{(PropertyRNA *)&rna_BlendData_use_autopack, (PropertyRNA *)&rna_BlendData_is_dirty,
	-1, "is_saved", 2, "File is Saved",
	"Has the current session been saved to disk as a .blend file",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	BlendData_is_saved_get, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_BlendData_use_autopack = {
	{(PropertyRNA *)&rna_BlendData_version, (PropertyRNA *)&rna_BlendData_is_saved,
	-1, "use_autopack", 3, "Use Autopack",
	"Automatically pack all external data into .blend file",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	BlendData_use_autopack_get, BlendData_use_autopack_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

static int rna_BlendData_version_default[3] = {
	0,
	0,
	0
};

IntPropertyRNA rna_BlendData_version = {
	{(PropertyRNA *)&rna_BlendData_cameras, (PropertyRNA *)&rna_BlendData_use_autopack,
	-1, "version", 8388610, "Version",
	"Version of the blender the .blend was saved with",
	0, "*",
	PROP_INT, PROP_XYZ | PROP_UNIT_NONE, NULL, 1, {3, 0, 0}, 3,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	NULL, NULL, BlendData_version_get, NULL, NULL, NULL, NULL, NULL, NULL, NULL,
	0, INT_MAX, 0, INT_MAX, 1, 0, rna_BlendData_version_default
};

CollectionPropertyRNA rna_BlendData_cameras = {
	{(PropertyRNA *)&rna_BlendData_scenes, (PropertyRNA *)&rna_BlendData_version,
	-1, "cameras", 0, "Cameras",
	"Camera datablocks",
	0, "*",
	PROP_COLLECTION, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, &RNA_BlendDataCameras},
	BlendData_cameras_begin, BlendData_cameras_next, BlendData_cameras_end, BlendData_cameras_get, NULL, NULL, NULL, NULL, &RNA_Camera
};

CollectionPropertyRNA rna_BlendData_scenes = {
	{(PropertyRNA *)&rna_BlendData_objects, (PropertyRNA *)&rna_BlendData_cameras,
	-1, "scenes", 0, "Scenes",
	"Scene datablocks",
	0, "*",
	PROP_COLLECTION, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, &RNA_BlendDataScenes},
	BlendData_scenes_begin, BlendData_scenes_next, BlendData_scenes_end, BlendData_scenes_get, NULL, NULL, NULL, NULL, &RNA_Scene
};

CollectionPropertyRNA rna_BlendData_objects = {
	{(PropertyRNA *)&rna_BlendData_materials, (PropertyRNA *)&rna_BlendData_scenes,
	-1, "objects", 0, "Objects",
	"Object datablocks",
	0, "*",
	PROP_COLLECTION, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, &RNA_BlendDataObjects},
	BlendData_objects_begin, BlendData_objects_next, BlendData_objects_end, BlendData_objects_get, NULL, NULL, NULL, NULL, &RNA_Object
};

CollectionPropertyRNA rna_BlendData_materials = {
	{(PropertyRNA *)&rna_BlendData_node_groups, (PropertyRNA *)&rna_BlendData_objects,
	-1, "materials", 0, "Materials",
	"Material datablocks",
	0, "*",
	PROP_COLLECTION, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, &RNA_BlendDataMaterials},
	BlendData_materials_begin, BlendData_materials_next, BlendData_materials_end, BlendData_materials_get, NULL, NULL, NULL, NULL, &RNA_Material
};

CollectionPropertyRNA rna_BlendData_node_groups = {
	{(PropertyRNA *)&rna_BlendData_meshes, (PropertyRNA *)&rna_BlendData_materials,
	-1, "node_groups", 0, "Node Groups",
	"Node group datablocks",
	0, "*",
	PROP_COLLECTION, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, &RNA_BlendDataNodeTrees},
	BlendData_node_groups_begin, BlendData_node_groups_next, BlendData_node_groups_end, BlendData_node_groups_get, NULL, NULL, NULL, NULL, &RNA_NodeTree
};

CollectionPropertyRNA rna_BlendData_meshes = {
	{(PropertyRNA *)&rna_BlendData_lamps, (PropertyRNA *)&rna_BlendData_node_groups,
	-1, "meshes", 0, "Meshes",
	"Mesh datablocks",
	0, "*",
	PROP_COLLECTION, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, &RNA_BlendDataMeshes},
	BlendData_meshes_begin, BlendData_meshes_next, BlendData_meshes_end, BlendData_meshes_get, NULL, NULL, NULL, NULL, &RNA_Mesh
};

CollectionPropertyRNA rna_BlendData_lamps = {
	{(PropertyRNA *)&rna_BlendData_libraries, (PropertyRNA *)&rna_BlendData_meshes,
	-1, "lamps", 0, "Lamps",
	"Lamp datablocks",
	0, "*",
	PROP_COLLECTION, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, &RNA_BlendDataLamps},
	BlendData_lamps_begin, BlendData_lamps_next, BlendData_lamps_end, BlendData_lamps_get, NULL, NULL, NULL, NULL, &RNA_Lamp
};

CollectionPropertyRNA rna_BlendData_libraries = {
	{(PropertyRNA *)&rna_BlendData_screens, (PropertyRNA *)&rna_BlendData_lamps,
	-1, "libraries", 0, "Libraries",
	"Library datablocks",
	0, "*",
	PROP_COLLECTION, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, &RNA_BlendDataLibraries},
	BlendData_libraries_begin, BlendData_libraries_next, BlendData_libraries_end, BlendData_libraries_get, NULL, NULL, NULL, NULL, &RNA_Library
};

CollectionPropertyRNA rna_BlendData_screens = {
	{(PropertyRNA *)&rna_BlendData_window_managers, (PropertyRNA *)&rna_BlendData_libraries,
	-1, "screens", 0, "Screens",
	"Screen datablocks",
	0, "*",
	PROP_COLLECTION, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, &RNA_BlendDataScreens},
	BlendData_screens_begin, BlendData_screens_next, BlendData_screens_end, BlendData_screens_get, NULL, NULL, NULL, NULL, &RNA_Screen
};

CollectionPropertyRNA rna_BlendData_window_managers = {
	{(PropertyRNA *)&rna_BlendData_images, (PropertyRNA *)&rna_BlendData_screens,
	-1, "window_managers", 0, "Window Managers",
	"Window manager datablocks",
	0, "*",
	PROP_COLLECTION, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, &RNA_BlendDataWindowManagers},
	BlendData_window_managers_begin, BlendData_window_managers_next, BlendData_window_managers_end, BlendData_window_managers_get, NULL, NULL, NULL, NULL, &RNA_WindowManager
};

CollectionPropertyRNA rna_BlendData_images = {
	{(PropertyRNA *)&rna_BlendData_lattices, (PropertyRNA *)&rna_BlendData_window_managers,
	-1, "images", 0, "Images",
	"Image datablocks",
	0, "*",
	PROP_COLLECTION, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, &RNA_BlendDataImages},
	BlendData_images_begin, BlendData_images_next, BlendData_images_end, BlendData_images_get, NULL, NULL, NULL, NULL, &RNA_Image
};

CollectionPropertyRNA rna_BlendData_lattices = {
	{(PropertyRNA *)&rna_BlendData_curves, (PropertyRNA *)&rna_BlendData_images,
	-1, "lattices", 0, "Lattices",
	"Lattice datablocks",
	0, "*",
	PROP_COLLECTION, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, &RNA_BlendDataLattices},
	BlendData_lattices_begin, BlendData_lattices_next, BlendData_lattices_end, BlendData_lattices_get, NULL, NULL, NULL, NULL, &RNA_Lattice
};

CollectionPropertyRNA rna_BlendData_curves = {
	{(PropertyRNA *)&rna_BlendData_metaballs, (PropertyRNA *)&rna_BlendData_lattices,
	-1, "curves", 0, "Curves",
	"Curve datablocks",
	0, "*",
	PROP_COLLECTION, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, &RNA_BlendDataCurves},
	BlendData_curves_begin, BlendData_curves_next, BlendData_curves_end, BlendData_curves_get, NULL, NULL, NULL, NULL, &RNA_Curve
};

CollectionPropertyRNA rna_BlendData_metaballs = {
	{(PropertyRNA *)&rna_BlendData_fonts, (PropertyRNA *)&rna_BlendData_curves,
	-1, "metaballs", 0, "Metaballs",
	"Metaball datablocks",
	0, "*",
	PROP_COLLECTION, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, &RNA_BlendDataMetaBalls},
	BlendData_metaballs_begin, BlendData_metaballs_next, BlendData_metaballs_end, BlendData_metaballs_get, NULL, NULL, NULL, NULL, &RNA_MetaBall
};

CollectionPropertyRNA rna_BlendData_fonts = {
	{(PropertyRNA *)&rna_BlendData_textures, (PropertyRNA *)&rna_BlendData_metaballs,
	-1, "fonts", 0, "Vector Fonts",
	"Vector font datablocks",
	0, "*",
	PROP_COLLECTION, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, &RNA_BlendDataFonts},
	BlendData_fonts_begin, BlendData_fonts_next, BlendData_fonts_end, BlendData_fonts_get, NULL, NULL, NULL, NULL, &RNA_VectorFont
};

CollectionPropertyRNA rna_BlendData_textures = {
	{(PropertyRNA *)&rna_BlendData_brushes, (PropertyRNA *)&rna_BlendData_fonts,
	-1, "textures", 0, "Textures",
	"Texture datablocks",
	0, "*",
	PROP_COLLECTION, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, &RNA_BlendDataTextures},
	BlendData_textures_begin, BlendData_textures_next, BlendData_textures_end, BlendData_textures_get, NULL, NULL, NULL, NULL, &RNA_Texture
};

CollectionPropertyRNA rna_BlendData_brushes = {
	{(PropertyRNA *)&rna_BlendData_worlds, (PropertyRNA *)&rna_BlendData_textures,
	-1, "brushes", 0, "Brushes",
	"Brush datablocks",
	0, "*",
	PROP_COLLECTION, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, &RNA_BlendDataBrushes},
	BlendData_brushes_begin, BlendData_brushes_next, BlendData_brushes_end, BlendData_brushes_get, NULL, NULL, NULL, NULL, &RNA_Brush
};

CollectionPropertyRNA rna_BlendData_worlds = {
	{(PropertyRNA *)&rna_BlendData_groups, (PropertyRNA *)&rna_BlendData_brushes,
	-1, "worlds", 0, "Worlds",
	"World datablocks",
	0, "*",
	PROP_COLLECTION, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, &RNA_BlendDataWorlds},
	BlendData_worlds_begin, BlendData_worlds_next, BlendData_worlds_end, BlendData_worlds_get, NULL, NULL, NULL, NULL, &RNA_World
};

CollectionPropertyRNA rna_BlendData_groups = {
	{(PropertyRNA *)&rna_BlendData_shape_keys, (PropertyRNA *)&rna_BlendData_worlds,
	-1, "groups", 0, "Groups",
	"Group datablocks",
	0, "*",
	PROP_COLLECTION, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, &RNA_BlendDataGroups},
	BlendData_groups_begin, BlendData_groups_next, BlendData_groups_end, BlendData_groups_get, NULL, NULL, NULL, NULL, &RNA_Group
};

CollectionPropertyRNA rna_BlendData_shape_keys = {
	{(PropertyRNA *)&rna_BlendData_scripts, (PropertyRNA *)&rna_BlendData_groups,
	-1, "shape_keys", 0, "Shape Keys",
	"Shape Key datablocks",
	0, "*",
	PROP_COLLECTION, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	BlendData_shape_keys_begin, BlendData_shape_keys_next, BlendData_shape_keys_end, BlendData_shape_keys_get, NULL, NULL, NULL, NULL, &RNA_Key
};

CollectionPropertyRNA rna_BlendData_scripts = {
	{(PropertyRNA *)&rna_BlendData_texts, (PropertyRNA *)&rna_BlendData_shape_keys,
	-1, "scripts", 0, "Scripts",
	"Script datablocks (DEPRECATED)",
	0, "*",
	PROP_COLLECTION, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	BlendData_scripts_begin, BlendData_scripts_next, BlendData_scripts_end, BlendData_scripts_get, NULL, NULL, NULL, NULL, &RNA_ID
};

CollectionPropertyRNA rna_BlendData_texts = {
	{(PropertyRNA *)&rna_BlendData_speakers, (PropertyRNA *)&rna_BlendData_scripts,
	-1, "texts", 0, "Texts",
	"Text datablocks",
	0, "*",
	PROP_COLLECTION, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, &RNA_BlendDataTexts},
	BlendData_texts_begin, BlendData_texts_next, BlendData_texts_end, BlendData_texts_get, NULL, NULL, NULL, NULL, &RNA_Text
};

CollectionPropertyRNA rna_BlendData_speakers = {
	{(PropertyRNA *)&rna_BlendData_sounds, (PropertyRNA *)&rna_BlendData_texts,
	-1, "speakers", 0, "Speakers",
	"Speaker datablocks",
	0, "*",
	PROP_COLLECTION, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, &RNA_BlendDataSpeakers},
	BlendData_speakers_begin, BlendData_speakers_next, BlendData_speakers_end, BlendData_speakers_get, NULL, NULL, NULL, NULL, &RNA_Speaker
};

CollectionPropertyRNA rna_BlendData_sounds = {
	{(PropertyRNA *)&rna_BlendData_armatures, (PropertyRNA *)&rna_BlendData_speakers,
	-1, "sounds", 0, "Sounds",
	"Sound datablocks",
	0, "*",
	PROP_COLLECTION, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, &RNA_BlendDataSounds},
	BlendData_sounds_begin, BlendData_sounds_next, BlendData_sounds_end, BlendData_sounds_get, NULL, NULL, NULL, NULL, &RNA_Sound
};

CollectionPropertyRNA rna_BlendData_armatures = {
	{(PropertyRNA *)&rna_BlendData_actions, (PropertyRNA *)&rna_BlendData_sounds,
	-1, "armatures", 0, "Armatures",
	"Armature datablocks",
	0, "*",
	PROP_COLLECTION, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, &RNA_BlendDataArmatures},
	BlendData_armatures_begin, BlendData_armatures_next, BlendData_armatures_end, BlendData_armatures_get, NULL, NULL, NULL, NULL, &RNA_Armature
};

CollectionPropertyRNA rna_BlendData_actions = {
	{(PropertyRNA *)&rna_BlendData_particles, (PropertyRNA *)&rna_BlendData_armatures,
	-1, "actions", 0, "Actions",
	"Action datablocks",
	0, "*",
	PROP_COLLECTION, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, &RNA_BlendDataActions},
	BlendData_actions_begin, BlendData_actions_next, BlendData_actions_end, BlendData_actions_get, NULL, NULL, NULL, NULL, &RNA_Action
};

CollectionPropertyRNA rna_BlendData_particles = {
	{(PropertyRNA *)&rna_BlendData_grease_pencil, (PropertyRNA *)&rna_BlendData_actions,
	-1, "particles", 0, "Particles",
	"Particle datablocks",
	0, "*",
	PROP_COLLECTION, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, &RNA_BlendDataParticles},
	BlendData_particles_begin, BlendData_particles_next, BlendData_particles_end, BlendData_particles_get, NULL, NULL, NULL, NULL, &RNA_ParticleSettings
};

CollectionPropertyRNA rna_BlendData_grease_pencil = {
	{(PropertyRNA *)&rna_BlendData_movieclips, (PropertyRNA *)&rna_BlendData_particles,
	-1, "grease_pencil", 0, "Grease Pencil",
	"Grease Pencil datablocks",
	0, "*",
	PROP_COLLECTION, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, &RNA_BlendDataGreasePencils},
	BlendData_grease_pencil_begin, BlendData_grease_pencil_next, BlendData_grease_pencil_end, BlendData_grease_pencil_get, NULL, NULL, NULL, NULL, &RNA_GreasePencil
};

CollectionPropertyRNA rna_BlendData_movieclips = {
	{(PropertyRNA *)&rna_BlendData_masks, (PropertyRNA *)&rna_BlendData_grease_pencil,
	-1, "movieclips", 0, "Movie Clips",
	"Movie Clip datablocks",
	0, "*",
	PROP_COLLECTION, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, &RNA_BlendDataMovieClips},
	BlendData_movieclips_begin, BlendData_movieclips_next, BlendData_movieclips_end, BlendData_movieclips_get, NULL, NULL, NULL, NULL, &RNA_MovieClip
};

CollectionPropertyRNA rna_BlendData_masks = {
	{(PropertyRNA *)&rna_BlendData_linestyles, (PropertyRNA *)&rna_BlendData_movieclips,
	-1, "masks", 0, "Masks",
	"Masks datablocks",
	0, "*",
	PROP_COLLECTION, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, &RNA_BlendDataMasks},
	BlendData_masks_begin, BlendData_masks_next, BlendData_masks_end, BlendData_masks_get, NULL, NULL, NULL, NULL, &RNA_Mask
};

CollectionPropertyRNA rna_BlendData_linestyles = {
	{NULL, (PropertyRNA *)&rna_BlendData_masks,
	-1, "linestyles", 0, "Line Styles",
	"Line Style datablocks",
	0, "*",
	PROP_COLLECTION, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, &RNA_BlendDataLineStyles},
	BlendData_linestyles_begin, BlendData_linestyles_next, BlendData_linestyles_end, BlendData_linestyles_get, NULL, NULL, NULL, NULL, &RNA_FreestyleLineStyle
};

StructRNA RNA_BlendData = {
	{(ContainerRNA *)&RNA_BlendDataCameras, (ContainerRNA *)&RNA_LineStyleTextureSlot,
	NULL,
	{(PropertyRNA *)&rna_BlendData_rna_properties, (PropertyRNA *)&rna_BlendData_linestyles}},
	"BlendData", NULL, NULL, 4, "Blendfile Data",
	"Main data structure representing a .blend file and all its datablocks",
	"*", 15,
	NULL, (PropertyRNA *)&rna_BlendData_rna_properties,
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

/* Main Cameras */
CollectionPropertyRNA rna_BlendDataCameras_rna_properties = {
	{(PropertyRNA *)&rna_BlendDataCameras_rna_type, NULL,
	-1, "rna_properties", 128, "Properties",
	"RNA property collection",
	0, "*",
	PROP_COLLECTION, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	BlendDataCameras_rna_properties_begin, BlendDataCameras_rna_properties_next, BlendDataCameras_rna_properties_end, BlendDataCameras_rna_properties_get, NULL, NULL, BlendDataCameras_rna_properties_lookup_string, NULL, &RNA_Property
};

PointerPropertyRNA rna_BlendDataCameras_rna_type = {
	{(PropertyRNA *)&rna_BlendDataCameras_is_updated, (PropertyRNA *)&rna_BlendDataCameras_rna_properties,
	-1, "rna_type", 8912896, "RNA",
	"RNA type definition",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	BlendDataCameras_rna_type_get, NULL, NULL, NULL,&RNA_Struct
};

BoolPropertyRNA rna_BlendDataCameras_is_updated = {
	{NULL, (PropertyRNA *)&rna_BlendDataCameras_rna_type,
	-1, "is_updated", 2, "is_updated",
	"",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	BlendDataCameras_is_updated_get, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

StringPropertyRNA rna_BlendDataCameras_new_name = {
	{(PropertyRNA *)&rna_BlendDataCameras_new_camera, NULL,
	-1, "name", 262149, "",
	"New name for the datablock",
	0, "*",
	PROP_STRING, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	NULL, NULL, NULL, NULL, NULL, NULL, 0, "Camera"
};

PointerPropertyRNA rna_BlendDataCameras_new_camera = {
	{NULL, (PropertyRNA *)&rna_BlendDataCameras_new_name,
	-1, "camera", 8388616, "",
	"New camera datablock",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	NULL, NULL, NULL, NULL,&RNA_Camera
};

FunctionRNA rna_BlendDataCameras_new_func = {
	{(FunctionRNA *)&rna_BlendDataCameras_remove_func, NULL,
	NULL,
	{(PropertyRNA *)&rna_BlendDataCameras_new_name, (PropertyRNA *)&rna_BlendDataCameras_new_camera}},
	"new", 0, "Add a new camera to the main database",
	BlendDataCameras_new_call,
	(PropertyRNA *)&rna_BlendDataCameras_new_camera
};

PointerPropertyRNA rna_BlendDataCameras_remove_camera = {
	{NULL, NULL,
	-1, "camera", 264196, "",
	"Camera to remove",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	NULL, NULL, NULL, NULL,&RNA_Camera
};

FunctionRNA rna_BlendDataCameras_remove_func = {
	{(FunctionRNA *)&rna_BlendDataCameras_tag_func, (FunctionRNA *)&rna_BlendDataCameras_new_func,
	NULL,
	{(PropertyRNA *)&rna_BlendDataCameras_remove_camera, (PropertyRNA *)&rna_BlendDataCameras_remove_camera}},
	"remove", 16, "Remove a camera from the current blendfile",
	BlendDataCameras_remove_call,
	NULL
};

BoolPropertyRNA rna_BlendDataCameras_tag_value = {
	{NULL, NULL,
	-1, "value", 7, "Value",
	"",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

FunctionRNA rna_BlendDataCameras_tag_func = {
	{NULL, (FunctionRNA *)&rna_BlendDataCameras_remove_func,
	NULL,
	{(PropertyRNA *)&rna_BlendDataCameras_tag_value, (PropertyRNA *)&rna_BlendDataCameras_tag_value}},
	"tag", 0, "tag",
	BlendDataCameras_tag_call,
	NULL
};

StructRNA RNA_BlendDataCameras = {
	{(ContainerRNA *)&RNA_BlendDataScenes, (ContainerRNA *)&RNA_BlendData,
	NULL,
	{(PropertyRNA *)&rna_BlendDataCameras_rna_properties, (PropertyRNA *)&rna_BlendDataCameras_is_updated}},
	"BlendDataCameras", NULL, NULL, 4, "Main Cameras",
	"Collection of cameras",
	"*", 17,
	NULL, (PropertyRNA *)&rna_BlendDataCameras_rna_properties,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	{(FunctionRNA *)&rna_BlendDataCameras_new_func, (FunctionRNA *)&rna_BlendDataCameras_tag_func}
};

/* Main Scenes */
CollectionPropertyRNA rna_BlendDataScenes_rna_properties = {
	{(PropertyRNA *)&rna_BlendDataScenes_rna_type, NULL,
	-1, "rna_properties", 128, "Properties",
	"RNA property collection",
	0, "*",
	PROP_COLLECTION, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	BlendDataScenes_rna_properties_begin, BlendDataScenes_rna_properties_next, BlendDataScenes_rna_properties_end, BlendDataScenes_rna_properties_get, NULL, NULL, BlendDataScenes_rna_properties_lookup_string, NULL, &RNA_Property
};

PointerPropertyRNA rna_BlendDataScenes_rna_type = {
	{(PropertyRNA *)&rna_BlendDataScenes_is_updated, (PropertyRNA *)&rna_BlendDataScenes_rna_properties,
	-1, "rna_type", 8912896, "RNA",
	"RNA type definition",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	BlendDataScenes_rna_type_get, NULL, NULL, NULL,&RNA_Struct
};

BoolPropertyRNA rna_BlendDataScenes_is_updated = {
	{NULL, (PropertyRNA *)&rna_BlendDataScenes_rna_type,
	-1, "is_updated", 2, "is_updated",
	"",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	BlendDataScenes_is_updated_get, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

StringPropertyRNA rna_BlendDataScenes_new_name = {
	{(PropertyRNA *)&rna_BlendDataScenes_new_scene, NULL,
	-1, "name", 262149, "",
	"New name for the datablock",
	0, "*",
	PROP_STRING, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	NULL, NULL, NULL, NULL, NULL, NULL, 0, "Scene"
};

PointerPropertyRNA rna_BlendDataScenes_new_scene = {
	{NULL, (PropertyRNA *)&rna_BlendDataScenes_new_name,
	-1, "scene", 8388616, "",
	"New scene datablock",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	NULL, NULL, NULL, NULL,&RNA_Scene
};

FunctionRNA rna_BlendDataScenes_new_func = {
	{(FunctionRNA *)&rna_BlendDataScenes_remove_func, NULL,
	NULL,
	{(PropertyRNA *)&rna_BlendDataScenes_new_name, (PropertyRNA *)&rna_BlendDataScenes_new_scene}},
	"new", 0, "Add a new scene to the main database",
	BlendDataScenes_new_call,
	(PropertyRNA *)&rna_BlendDataScenes_new_scene
};

PointerPropertyRNA rna_BlendDataScenes_remove_scene = {
	{NULL, NULL,
	-1, "scene", 264196, "",
	"Scene to remove",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	NULL, NULL, NULL, NULL,&RNA_Scene
};

FunctionRNA rna_BlendDataScenes_remove_func = {
	{(FunctionRNA *)&rna_BlendDataScenes_tag_func, (FunctionRNA *)&rna_BlendDataScenes_new_func,
	NULL,
	{(PropertyRNA *)&rna_BlendDataScenes_remove_scene, (PropertyRNA *)&rna_BlendDataScenes_remove_scene}},
	"remove", 24, "Remove a scene from the current blendfile",
	BlendDataScenes_remove_call,
	NULL
};

BoolPropertyRNA rna_BlendDataScenes_tag_value = {
	{NULL, NULL,
	-1, "value", 7, "Value",
	"",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

FunctionRNA rna_BlendDataScenes_tag_func = {
	{NULL, (FunctionRNA *)&rna_BlendDataScenes_remove_func,
	NULL,
	{(PropertyRNA *)&rna_BlendDataScenes_tag_value, (PropertyRNA *)&rna_BlendDataScenes_tag_value}},
	"tag", 0, "tag",
	BlendDataScenes_tag_call,
	NULL
};

StructRNA RNA_BlendDataScenes = {
	{(ContainerRNA *)&RNA_BlendDataObjects, (ContainerRNA *)&RNA_BlendDataCameras,
	NULL,
	{(PropertyRNA *)&rna_BlendDataScenes_rna_properties, (PropertyRNA *)&rna_BlendDataScenes_is_updated}},
	"BlendDataScenes", NULL, NULL, 4, "Main Scenes",
	"Collection of scenes",
	"*", 17,
	NULL, (PropertyRNA *)&rna_BlendDataScenes_rna_properties,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	{(FunctionRNA *)&rna_BlendDataScenes_new_func, (FunctionRNA *)&rna_BlendDataScenes_tag_func}
};

/* Main Objects */
CollectionPropertyRNA rna_BlendDataObjects_rna_properties = {
	{(PropertyRNA *)&rna_BlendDataObjects_rna_type, NULL,
	-1, "rna_properties", 128, "Properties",
	"RNA property collection",
	0, "*",
	PROP_COLLECTION, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	BlendDataObjects_rna_properties_begin, BlendDataObjects_rna_properties_next, BlendDataObjects_rna_properties_end, BlendDataObjects_rna_properties_get, NULL, NULL, BlendDataObjects_rna_properties_lookup_string, NULL, &RNA_Property
};

PointerPropertyRNA rna_BlendDataObjects_rna_type = {
	{(PropertyRNA *)&rna_BlendDataObjects_is_updated, (PropertyRNA *)&rna_BlendDataObjects_rna_properties,
	-1, "rna_type", 8912896, "RNA",
	"RNA type definition",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	BlendDataObjects_rna_type_get, NULL, NULL, NULL,&RNA_Struct
};

BoolPropertyRNA rna_BlendDataObjects_is_updated = {
	{NULL, (PropertyRNA *)&rna_BlendDataObjects_rna_type,
	-1, "is_updated", 2, "is_updated",
	"",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	BlendDataObjects_is_updated_get, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

StringPropertyRNA rna_BlendDataObjects_new_name = {
	{(PropertyRNA *)&rna_BlendDataObjects_new_object_data, NULL,
	-1, "name", 262149, "",
	"New name for the datablock",
	0, "*",
	PROP_STRING, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	NULL, NULL, NULL, NULL, NULL, NULL, 0, "Object"
};

PointerPropertyRNA rna_BlendDataObjects_new_object_data = {
	{(PropertyRNA *)&rna_BlendDataObjects_new_object, (PropertyRNA *)&rna_BlendDataObjects_new_name,
	-1, "object_data", 8388612, "",
	"Object data or None for an empty object",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	NULL, NULL, NULL, NULL,&RNA_ID
};

PointerPropertyRNA rna_BlendDataObjects_new_object = {
	{NULL, (PropertyRNA *)&rna_BlendDataObjects_new_object_data,
	-1, "object", 8388616, "",
	"New object datablock",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	NULL, NULL, NULL, NULL,&RNA_Object
};

FunctionRNA rna_BlendDataObjects_new_func = {
	{(FunctionRNA *)&rna_BlendDataObjects_remove_func, NULL,
	NULL,
	{(PropertyRNA *)&rna_BlendDataObjects_new_name, (PropertyRNA *)&rna_BlendDataObjects_new_object}},
	"new", 16, "Add a new object to the main database",
	BlendDataObjects_new_call,
	(PropertyRNA *)&rna_BlendDataObjects_new_object
};

PointerPropertyRNA rna_BlendDataObjects_remove_object = {
	{NULL, NULL,
	-1, "object", 264196, "",
	"Object to remove",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	NULL, NULL, NULL, NULL,&RNA_Object
};

FunctionRNA rna_BlendDataObjects_remove_func = {
	{(FunctionRNA *)&rna_BlendDataObjects_tag_func, (FunctionRNA *)&rna_BlendDataObjects_new_func,
	NULL,
	{(PropertyRNA *)&rna_BlendDataObjects_remove_object, (PropertyRNA *)&rna_BlendDataObjects_remove_object}},
	"remove", 16, "Remove a object from the current blendfile",
	BlendDataObjects_remove_call,
	NULL
};

BoolPropertyRNA rna_BlendDataObjects_tag_value = {
	{NULL, NULL,
	-1, "value", 7, "Value",
	"",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

FunctionRNA rna_BlendDataObjects_tag_func = {
	{NULL, (FunctionRNA *)&rna_BlendDataObjects_remove_func,
	NULL,
	{(PropertyRNA *)&rna_BlendDataObjects_tag_value, (PropertyRNA *)&rna_BlendDataObjects_tag_value}},
	"tag", 0, "tag",
	BlendDataObjects_tag_call,
	NULL
};

StructRNA RNA_BlendDataObjects = {
	{(ContainerRNA *)&RNA_BlendDataMaterials, (ContainerRNA *)&RNA_BlendDataScenes,
	NULL,
	{(PropertyRNA *)&rna_BlendDataObjects_rna_properties, (PropertyRNA *)&rna_BlendDataObjects_is_updated}},
	"BlendDataObjects", NULL, NULL, 4, "Main Objects",
	"Collection of objects",
	"*", 17,
	NULL, (PropertyRNA *)&rna_BlendDataObjects_rna_properties,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	{(FunctionRNA *)&rna_BlendDataObjects_new_func, (FunctionRNA *)&rna_BlendDataObjects_tag_func}
};

/* Main Materials */
CollectionPropertyRNA rna_BlendDataMaterials_rna_properties = {
	{(PropertyRNA *)&rna_BlendDataMaterials_rna_type, NULL,
	-1, "rna_properties", 128, "Properties",
	"RNA property collection",
	0, "*",
	PROP_COLLECTION, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	BlendDataMaterials_rna_properties_begin, BlendDataMaterials_rna_properties_next, BlendDataMaterials_rna_properties_end, BlendDataMaterials_rna_properties_get, NULL, NULL, BlendDataMaterials_rna_properties_lookup_string, NULL, &RNA_Property
};

PointerPropertyRNA rna_BlendDataMaterials_rna_type = {
	{(PropertyRNA *)&rna_BlendDataMaterials_is_updated, (PropertyRNA *)&rna_BlendDataMaterials_rna_properties,
	-1, "rna_type", 8912896, "RNA",
	"RNA type definition",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	BlendDataMaterials_rna_type_get, NULL, NULL, NULL,&RNA_Struct
};

BoolPropertyRNA rna_BlendDataMaterials_is_updated = {
	{NULL, (PropertyRNA *)&rna_BlendDataMaterials_rna_type,
	-1, "is_updated", 2, "is_updated",
	"",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	BlendDataMaterials_is_updated_get, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

StringPropertyRNA rna_BlendDataMaterials_new_name = {
	{(PropertyRNA *)&rna_BlendDataMaterials_new_material, NULL,
	-1, "name", 262149, "",
	"New name for the datablock",
	0, "*",
	PROP_STRING, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	NULL, NULL, NULL, NULL, NULL, NULL, 0, "Material"
};

PointerPropertyRNA rna_BlendDataMaterials_new_material = {
	{NULL, (PropertyRNA *)&rna_BlendDataMaterials_new_name,
	-1, "material", 8388616, "",
	"New material datablock",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	NULL, NULL, NULL, NULL,&RNA_Material
};

FunctionRNA rna_BlendDataMaterials_new_func = {
	{(FunctionRNA *)&rna_BlendDataMaterials_remove_func, NULL,
	NULL,
	{(PropertyRNA *)&rna_BlendDataMaterials_new_name, (PropertyRNA *)&rna_BlendDataMaterials_new_material}},
	"new", 0, "Add a new material to the main database",
	BlendDataMaterials_new_call,
	(PropertyRNA *)&rna_BlendDataMaterials_new_material
};

PointerPropertyRNA rna_BlendDataMaterials_remove_material = {
	{NULL, NULL,
	-1, "material", 264196, "",
	"Material to remove",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	NULL, NULL, NULL, NULL,&RNA_Material
};

FunctionRNA rna_BlendDataMaterials_remove_func = {
	{(FunctionRNA *)&rna_BlendDataMaterials_tag_func, (FunctionRNA *)&rna_BlendDataMaterials_new_func,
	NULL,
	{(PropertyRNA *)&rna_BlendDataMaterials_remove_material, (PropertyRNA *)&rna_BlendDataMaterials_remove_material}},
	"remove", 16, "Remove a material from the current blendfile",
	BlendDataMaterials_remove_call,
	NULL
};

BoolPropertyRNA rna_BlendDataMaterials_tag_value = {
	{NULL, NULL,
	-1, "value", 7, "Value",
	"",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

FunctionRNA rna_BlendDataMaterials_tag_func = {
	{NULL, (FunctionRNA *)&rna_BlendDataMaterials_remove_func,
	NULL,
	{(PropertyRNA *)&rna_BlendDataMaterials_tag_value, (PropertyRNA *)&rna_BlendDataMaterials_tag_value}},
	"tag", 0, "tag",
	BlendDataMaterials_tag_call,
	NULL
};

StructRNA RNA_BlendDataMaterials = {
	{(ContainerRNA *)&RNA_BlendDataNodeTrees, (ContainerRNA *)&RNA_BlendDataObjects,
	NULL,
	{(PropertyRNA *)&rna_BlendDataMaterials_rna_properties, (PropertyRNA *)&rna_BlendDataMaterials_is_updated}},
	"BlendDataMaterials", NULL, NULL, 4, "Main Materials",
	"Collection of materials",
	"*", 17,
	NULL, (PropertyRNA *)&rna_BlendDataMaterials_rna_properties,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	{(FunctionRNA *)&rna_BlendDataMaterials_new_func, (FunctionRNA *)&rna_BlendDataMaterials_tag_func}
};

/* Main Node Trees */
CollectionPropertyRNA rna_BlendDataNodeTrees_rna_properties = {
	{(PropertyRNA *)&rna_BlendDataNodeTrees_rna_type, NULL,
	-1, "rna_properties", 128, "Properties",
	"RNA property collection",
	0, "*",
	PROP_COLLECTION, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	BlendDataNodeTrees_rna_properties_begin, BlendDataNodeTrees_rna_properties_next, BlendDataNodeTrees_rna_properties_end, BlendDataNodeTrees_rna_properties_get, NULL, NULL, BlendDataNodeTrees_rna_properties_lookup_string, NULL, &RNA_Property
};

PointerPropertyRNA rna_BlendDataNodeTrees_rna_type = {
	{(PropertyRNA *)&rna_BlendDataNodeTrees_is_updated, (PropertyRNA *)&rna_BlendDataNodeTrees_rna_properties,
	-1, "rna_type", 8912896, "RNA",
	"RNA type definition",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	BlendDataNodeTrees_rna_type_get, NULL, NULL, NULL,&RNA_Struct
};

BoolPropertyRNA rna_BlendDataNodeTrees_is_updated = {
	{NULL, (PropertyRNA *)&rna_BlendDataNodeTrees_rna_type,
	-1, "is_updated", 2, "is_updated",
	"",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	BlendDataNodeTrees_is_updated_get, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

StringPropertyRNA rna_BlendDataNodeTrees_new_name = {
	{(PropertyRNA *)&rna_BlendDataNodeTrees_new_type, NULL,
	-1, "name", 262149, "",
	"New name for the datablock",
	0, "*",
	PROP_STRING, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	NULL, NULL, NULL, NULL, NULL, NULL, 0, "NodeGroup"
};

static EnumPropertyItem rna_BlendDataNodeTrees_new_type_items[2] = {
	{0, "DUMMY", 0, "", ""},
	{0, NULL, 0, NULL, NULL}
};

EnumPropertyRNA rna_BlendDataNodeTrees_new_type = {
	{(PropertyRNA *)&rna_BlendDataNodeTrees_new_tree, (PropertyRNA *)&rna_BlendDataNodeTrees_new_name,
	-1, "type", 7, "Type",
	"The type of node_group to add",
	0, "*",
	PROP_ENUM, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	NULL, NULL, rna_Main_nodetree_type_itemf, NULL, NULL, NULL, rna_BlendDataNodeTrees_new_type_items, 1, 0
};

PointerPropertyRNA rna_BlendDataNodeTrees_new_tree = {
	{NULL, (PropertyRNA *)&rna_BlendDataNodeTrees_new_type,
	-1, "tree", 8388616, "",
	"New node tree datablock",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	NULL, NULL, NULL, NULL,&RNA_NodeTree
};

FunctionRNA rna_BlendDataNodeTrees_new_func = {
	{(FunctionRNA *)&rna_BlendDataNodeTrees_remove_func, NULL,
	NULL,
	{(PropertyRNA *)&rna_BlendDataNodeTrees_new_name, (PropertyRNA *)&rna_BlendDataNodeTrees_new_tree}},
	"new", 0, "Add a new node tree to the main database",
	BlendDataNodeTrees_new_call,
	(PropertyRNA *)&rna_BlendDataNodeTrees_new_tree
};

PointerPropertyRNA rna_BlendDataNodeTrees_remove_tree = {
	{NULL, NULL,
	-1, "tree", 264196, "",
	"Node tree to remove",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	NULL, NULL, NULL, NULL,&RNA_NodeTree
};

FunctionRNA rna_BlendDataNodeTrees_remove_func = {
	{(FunctionRNA *)&rna_BlendDataNodeTrees_tag_func, (FunctionRNA *)&rna_BlendDataNodeTrees_new_func,
	NULL,
	{(PropertyRNA *)&rna_BlendDataNodeTrees_remove_tree, (PropertyRNA *)&rna_BlendDataNodeTrees_remove_tree}},
	"remove", 16, "Remove a node tree from the current blendfile",
	BlendDataNodeTrees_remove_call,
	NULL
};

BoolPropertyRNA rna_BlendDataNodeTrees_tag_value = {
	{NULL, NULL,
	-1, "value", 7, "Value",
	"",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

FunctionRNA rna_BlendDataNodeTrees_tag_func = {
	{NULL, (FunctionRNA *)&rna_BlendDataNodeTrees_remove_func,
	NULL,
	{(PropertyRNA *)&rna_BlendDataNodeTrees_tag_value, (PropertyRNA *)&rna_BlendDataNodeTrees_tag_value}},
	"tag", 0, "tag",
	BlendDataNodeTrees_tag_call,
	NULL
};

StructRNA RNA_BlendDataNodeTrees = {
	{(ContainerRNA *)&RNA_BlendDataMeshes, (ContainerRNA *)&RNA_BlendDataMaterials,
	NULL,
	{(PropertyRNA *)&rna_BlendDataNodeTrees_rna_properties, (PropertyRNA *)&rna_BlendDataNodeTrees_is_updated}},
	"BlendDataNodeTrees", NULL, NULL, 4, "Main Node Trees",
	"Collection of node trees",
	"*", 17,
	NULL, (PropertyRNA *)&rna_BlendDataNodeTrees_rna_properties,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	{(FunctionRNA *)&rna_BlendDataNodeTrees_new_func, (FunctionRNA *)&rna_BlendDataNodeTrees_tag_func}
};

/* Main Meshes */
CollectionPropertyRNA rna_BlendDataMeshes_rna_properties = {
	{(PropertyRNA *)&rna_BlendDataMeshes_rna_type, NULL,
	-1, "rna_properties", 128, "Properties",
	"RNA property collection",
	0, "*",
	PROP_COLLECTION, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	BlendDataMeshes_rna_properties_begin, BlendDataMeshes_rna_properties_next, BlendDataMeshes_rna_properties_end, BlendDataMeshes_rna_properties_get, NULL, NULL, BlendDataMeshes_rna_properties_lookup_string, NULL, &RNA_Property
};

PointerPropertyRNA rna_BlendDataMeshes_rna_type = {
	{(PropertyRNA *)&rna_BlendDataMeshes_is_updated, (PropertyRNA *)&rna_BlendDataMeshes_rna_properties,
	-1, "rna_type", 8912896, "RNA",
	"RNA type definition",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	BlendDataMeshes_rna_type_get, NULL, NULL, NULL,&RNA_Struct
};

BoolPropertyRNA rna_BlendDataMeshes_is_updated = {
	{NULL, (PropertyRNA *)&rna_BlendDataMeshes_rna_type,
	-1, "is_updated", 2, "is_updated",
	"",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	BlendDataMeshes_is_updated_get, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

StringPropertyRNA rna_BlendDataMeshes_new_name = {
	{(PropertyRNA *)&rna_BlendDataMeshes_new_mesh, NULL,
	-1, "name", 262149, "",
	"New name for the datablock",
	0, "*",
	PROP_STRING, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	NULL, NULL, NULL, NULL, NULL, NULL, 0, "Mesh"
};

PointerPropertyRNA rna_BlendDataMeshes_new_mesh = {
	{NULL, (PropertyRNA *)&rna_BlendDataMeshes_new_name,
	-1, "mesh", 8388616, "",
	"New mesh datablock",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	NULL, NULL, NULL, NULL,&RNA_Mesh
};

FunctionRNA rna_BlendDataMeshes_new_func = {
	{(FunctionRNA *)&rna_BlendDataMeshes_new_from_object_func, NULL,
	NULL,
	{(PropertyRNA *)&rna_BlendDataMeshes_new_name, (PropertyRNA *)&rna_BlendDataMeshes_new_mesh}},
	"new", 0, "Add a new mesh to the main database",
	BlendDataMeshes_new_call,
	(PropertyRNA *)&rna_BlendDataMeshes_new_mesh
};

PointerPropertyRNA rna_BlendDataMeshes_new_from_object_scene = {
	{(PropertyRNA *)&rna_BlendDataMeshes_new_from_object_object, NULL,
	-1, "scene", 8650756, "",
	"Scene within which to evaluate modifiers",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	NULL, NULL, NULL, NULL,&RNA_Scene
};

PointerPropertyRNA rna_BlendDataMeshes_new_from_object_object = {
	{(PropertyRNA *)&rna_BlendDataMeshes_new_from_object_apply_modifiers, (PropertyRNA *)&rna_BlendDataMeshes_new_from_object_scene,
	-1, "object", 8650756, "",
	"Object to create mesh from",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	NULL, NULL, NULL, NULL,&RNA_Object
};

BoolPropertyRNA rna_BlendDataMeshes_new_from_object_apply_modifiers = {
	{(PropertyRNA *)&rna_BlendDataMeshes_new_from_object_settings, (PropertyRNA *)&rna_BlendDataMeshes_new_from_object_object,
	-1, "apply_modifiers", 7, "",
	"Apply modifiers",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

static EnumPropertyItem rna_BlendDataMeshes_new_from_object_settings_items[3] = {
	{1, "PREVIEW", 0, "Preview", "Apply modifier preview settings"},
	{2, "RENDER", 0, "Render", "Apply modifier render settings"},
	{0, NULL, 0, NULL, NULL}
};

EnumPropertyRNA rna_BlendDataMeshes_new_from_object_settings = {
	{(PropertyRNA *)&rna_BlendDataMeshes_new_from_object_calc_tessface, (PropertyRNA *)&rna_BlendDataMeshes_new_from_object_apply_modifiers,
	-1, "settings", 7, "",
	"Modifier settings to apply",
	0, "*",
	PROP_ENUM, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	NULL, NULL, NULL, NULL, NULL, NULL, rna_BlendDataMeshes_new_from_object_settings_items, 2, 1
};

BoolPropertyRNA rna_BlendDataMeshes_new_from_object_calc_tessface = {
	{(PropertyRNA *)&rna_BlendDataMeshes_new_from_object_calc_undeformed, (PropertyRNA *)&rna_BlendDataMeshes_new_from_object_settings,
	-1, "calc_tessface", 3, "Calculate Tessellation",
	"Calculate tessellation faces",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 1, NULL
};

BoolPropertyRNA rna_BlendDataMeshes_new_from_object_calc_undeformed = {
	{(PropertyRNA *)&rna_BlendDataMeshes_new_from_object_mesh, (PropertyRNA *)&rna_BlendDataMeshes_new_from_object_calc_tessface,
	-1, "calc_undeformed", 3, "Calculate Undeformed",
	"Calculate undeformed vertex coordinates",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

PointerPropertyRNA rna_BlendDataMeshes_new_from_object_mesh = {
	{NULL, (PropertyRNA *)&rna_BlendDataMeshes_new_from_object_calc_undeformed,
	-1, "mesh", 8388616, "",
	"Mesh created from object, remove it if it is only used for export",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	NULL, NULL, NULL, NULL,&RNA_Mesh
};

FunctionRNA rna_BlendDataMeshes_new_from_object_func = {
	{(FunctionRNA *)&rna_BlendDataMeshes_remove_func, (FunctionRNA *)&rna_BlendDataMeshes_new_func,
	NULL,
	{(PropertyRNA *)&rna_BlendDataMeshes_new_from_object_scene, (PropertyRNA *)&rna_BlendDataMeshes_new_from_object_mesh}},
	"new_from_object", 16, "Add a new mesh created from object with modifiers applied",
	BlendDataMeshes_new_from_object_call,
	(PropertyRNA *)&rna_BlendDataMeshes_new_from_object_mesh
};

PointerPropertyRNA rna_BlendDataMeshes_remove_mesh = {
	{NULL, NULL,
	-1, "mesh", 264196, "",
	"Mesh to remove",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	NULL, NULL, NULL, NULL,&RNA_Mesh
};

FunctionRNA rna_BlendDataMeshes_remove_func = {
	{(FunctionRNA *)&rna_BlendDataMeshes_tag_func, (FunctionRNA *)&rna_BlendDataMeshes_new_from_object_func,
	NULL,
	{(PropertyRNA *)&rna_BlendDataMeshes_remove_mesh, (PropertyRNA *)&rna_BlendDataMeshes_remove_mesh}},
	"remove", 16, "Remove a mesh from the current blendfile",
	BlendDataMeshes_remove_call,
	NULL
};

BoolPropertyRNA rna_BlendDataMeshes_tag_value = {
	{NULL, NULL,
	-1, "value", 7, "Value",
	"",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

FunctionRNA rna_BlendDataMeshes_tag_func = {
	{NULL, (FunctionRNA *)&rna_BlendDataMeshes_remove_func,
	NULL,
	{(PropertyRNA *)&rna_BlendDataMeshes_tag_value, (PropertyRNA *)&rna_BlendDataMeshes_tag_value}},
	"tag", 0, "tag",
	BlendDataMeshes_tag_call,
	NULL
};

StructRNA RNA_BlendDataMeshes = {
	{(ContainerRNA *)&RNA_BlendDataLamps, (ContainerRNA *)&RNA_BlendDataNodeTrees,
	NULL,
	{(PropertyRNA *)&rna_BlendDataMeshes_rna_properties, (PropertyRNA *)&rna_BlendDataMeshes_is_updated}},
	"BlendDataMeshes", NULL, NULL, 4, "Main Meshes",
	"Collection of meshes",
	"*", 17,
	NULL, (PropertyRNA *)&rna_BlendDataMeshes_rna_properties,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	{(FunctionRNA *)&rna_BlendDataMeshes_new_func, (FunctionRNA *)&rna_BlendDataMeshes_tag_func}
};

/* Main Lamps */
CollectionPropertyRNA rna_BlendDataLamps_rna_properties = {
	{(PropertyRNA *)&rna_BlendDataLamps_rna_type, NULL,
	-1, "rna_properties", 128, "Properties",
	"RNA property collection",
	0, "*",
	PROP_COLLECTION, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	BlendDataLamps_rna_properties_begin, BlendDataLamps_rna_properties_next, BlendDataLamps_rna_properties_end, BlendDataLamps_rna_properties_get, NULL, NULL, BlendDataLamps_rna_properties_lookup_string, NULL, &RNA_Property
};

PointerPropertyRNA rna_BlendDataLamps_rna_type = {
	{(PropertyRNA *)&rna_BlendDataLamps_is_updated, (PropertyRNA *)&rna_BlendDataLamps_rna_properties,
	-1, "rna_type", 8912896, "RNA",
	"RNA type definition",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	BlendDataLamps_rna_type_get, NULL, NULL, NULL,&RNA_Struct
};

BoolPropertyRNA rna_BlendDataLamps_is_updated = {
	{NULL, (PropertyRNA *)&rna_BlendDataLamps_rna_type,
	-1, "is_updated", 2, "is_updated",
	"",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	BlendDataLamps_is_updated_get, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

StringPropertyRNA rna_BlendDataLamps_new_name = {
	{(PropertyRNA *)&rna_BlendDataLamps_new_type, NULL,
	-1, "name", 262149, "",
	"New name for the datablock",
	0, "*",
	PROP_STRING, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	NULL, NULL, NULL, NULL, NULL, NULL, 0, "Lamp"
};

static EnumPropertyItem rna_BlendDataLamps_new_type_items[6] = {
	{0, "POINT", 0, "Point", "Omnidirectional point light source"},
	{1, "SUN", 0, "Sun", "Constant direction parallel ray light source"},
	{2, "SPOT", 0, "Spot", "Directional cone light source"},
	{3, "HEMI", 0, "Hemi", "180 degree constant light source"},
	{4, "AREA", 0, "Area", "Directional area light source"},
	{0, NULL, 0, NULL, NULL}
};

EnumPropertyRNA rna_BlendDataLamps_new_type = {
	{(PropertyRNA *)&rna_BlendDataLamps_new_lamp, (PropertyRNA *)&rna_BlendDataLamps_new_name,
	-1, "type", 7, "Type",
	"The type of texture to add",
	0, "*",
	PROP_ENUM, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	NULL, NULL, NULL, NULL, NULL, NULL, rna_BlendDataLamps_new_type_items, 5, 0
};

PointerPropertyRNA rna_BlendDataLamps_new_lamp = {
	{NULL, (PropertyRNA *)&rna_BlendDataLamps_new_type,
	-1, "lamp", 8388616, "",
	"New lamp datablock",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	NULL, NULL, NULL, NULL,&RNA_Lamp
};

FunctionRNA rna_BlendDataLamps_new_func = {
	{(FunctionRNA *)&rna_BlendDataLamps_remove_func, NULL,
	NULL,
	{(PropertyRNA *)&rna_BlendDataLamps_new_name, (PropertyRNA *)&rna_BlendDataLamps_new_lamp}},
	"new", 0, "Add a new lamp to the main database",
	BlendDataLamps_new_call,
	(PropertyRNA *)&rna_BlendDataLamps_new_lamp
};

PointerPropertyRNA rna_BlendDataLamps_remove_lamp = {
	{NULL, NULL,
	-1, "lamp", 264196, "",
	"Lamp to remove",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	NULL, NULL, NULL, NULL,&RNA_Lamp
};

FunctionRNA rna_BlendDataLamps_remove_func = {
	{(FunctionRNA *)&rna_BlendDataLamps_tag_func, (FunctionRNA *)&rna_BlendDataLamps_new_func,
	NULL,
	{(PropertyRNA *)&rna_BlendDataLamps_remove_lamp, (PropertyRNA *)&rna_BlendDataLamps_remove_lamp}},
	"remove", 16, "Remove a lamp from the current blendfile",
	BlendDataLamps_remove_call,
	NULL
};

BoolPropertyRNA rna_BlendDataLamps_tag_value = {
	{NULL, NULL,
	-1, "value", 7, "Value",
	"",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

FunctionRNA rna_BlendDataLamps_tag_func = {
	{NULL, (FunctionRNA *)&rna_BlendDataLamps_remove_func,
	NULL,
	{(PropertyRNA *)&rna_BlendDataLamps_tag_value, (PropertyRNA *)&rna_BlendDataLamps_tag_value}},
	"tag", 0, "tag",
	BlendDataLamps_tag_call,
	NULL
};

StructRNA RNA_BlendDataLamps = {
	{(ContainerRNA *)&RNA_BlendDataLibraries, (ContainerRNA *)&RNA_BlendDataMeshes,
	NULL,
	{(PropertyRNA *)&rna_BlendDataLamps_rna_properties, (PropertyRNA *)&rna_BlendDataLamps_is_updated}},
	"BlendDataLamps", NULL, NULL, 4, "Main Lamps",
	"Collection of lamps",
	"*", 17,
	NULL, (PropertyRNA *)&rna_BlendDataLamps_rna_properties,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	{(FunctionRNA *)&rna_BlendDataLamps_new_func, (FunctionRNA *)&rna_BlendDataLamps_tag_func}
};

/* Main Libraries */
CollectionPropertyRNA rna_BlendDataLibraries_rna_properties = {
	{(PropertyRNA *)&rna_BlendDataLibraries_rna_type, NULL,
	-1, "rna_properties", 128, "Properties",
	"RNA property collection",
	0, "*",
	PROP_COLLECTION, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	BlendDataLibraries_rna_properties_begin, BlendDataLibraries_rna_properties_next, BlendDataLibraries_rna_properties_end, BlendDataLibraries_rna_properties_get, NULL, NULL, BlendDataLibraries_rna_properties_lookup_string, NULL, &RNA_Property
};

PointerPropertyRNA rna_BlendDataLibraries_rna_type = {
	{(PropertyRNA *)&rna_BlendDataLibraries_is_updated, (PropertyRNA *)&rna_BlendDataLibraries_rna_properties,
	-1, "rna_type", 8912896, "RNA",
	"RNA type definition",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	BlendDataLibraries_rna_type_get, NULL, NULL, NULL,&RNA_Struct
};

BoolPropertyRNA rna_BlendDataLibraries_is_updated = {
	{NULL, (PropertyRNA *)&rna_BlendDataLibraries_rna_type,
	-1, "is_updated", 2, "is_updated",
	"",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	BlendDataLibraries_is_updated_get, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_BlendDataLibraries_tag_value = {
	{NULL, NULL,
	-1, "value", 7, "Value",
	"",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

FunctionRNA rna_BlendDataLibraries_tag_func = {
	{NULL, NULL,
	NULL,
	{(PropertyRNA *)&rna_BlendDataLibraries_tag_value, (PropertyRNA *)&rna_BlendDataLibraries_tag_value}},
	"tag", 0, "tag",
	BlendDataLibraries_tag_call,
	NULL
};

StructRNA RNA_BlendDataLibraries = {
	{(ContainerRNA *)&RNA_BlendDataScreens, (ContainerRNA *)&RNA_BlendDataLamps,
	NULL,
	{(PropertyRNA *)&rna_BlendDataLibraries_rna_properties, (PropertyRNA *)&rna_BlendDataLibraries_is_updated}},
	"BlendDataLibraries", NULL, NULL, 4, "Main Libraries",
	"Collection of libraries",
	"*", 17,
	NULL, (PropertyRNA *)&rna_BlendDataLibraries_rna_properties,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	{(FunctionRNA *)&rna_BlendDataLibraries_tag_func, (FunctionRNA *)&rna_BlendDataLibraries_tag_func}
};

/* Main Screens */
CollectionPropertyRNA rna_BlendDataScreens_rna_properties = {
	{(PropertyRNA *)&rna_BlendDataScreens_rna_type, NULL,
	-1, "rna_properties", 128, "Properties",
	"RNA property collection",
	0, "*",
	PROP_COLLECTION, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	BlendDataScreens_rna_properties_begin, BlendDataScreens_rna_properties_next, BlendDataScreens_rna_properties_end, BlendDataScreens_rna_properties_get, NULL, NULL, BlendDataScreens_rna_properties_lookup_string, NULL, &RNA_Property
};

PointerPropertyRNA rna_BlendDataScreens_rna_type = {
	{(PropertyRNA *)&rna_BlendDataScreens_is_updated, (PropertyRNA *)&rna_BlendDataScreens_rna_properties,
	-1, "rna_type", 8912896, "RNA",
	"RNA type definition",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	BlendDataScreens_rna_type_get, NULL, NULL, NULL,&RNA_Struct
};

BoolPropertyRNA rna_BlendDataScreens_is_updated = {
	{NULL, (PropertyRNA *)&rna_BlendDataScreens_rna_type,
	-1, "is_updated", 2, "is_updated",
	"",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	BlendDataScreens_is_updated_get, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_BlendDataScreens_tag_value = {
	{NULL, NULL,
	-1, "value", 7, "Value",
	"",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

FunctionRNA rna_BlendDataScreens_tag_func = {
	{NULL, NULL,
	NULL,
	{(PropertyRNA *)&rna_BlendDataScreens_tag_value, (PropertyRNA *)&rna_BlendDataScreens_tag_value}},
	"tag", 0, "tag",
	BlendDataScreens_tag_call,
	NULL
};

StructRNA RNA_BlendDataScreens = {
	{(ContainerRNA *)&RNA_BlendDataWindowManagers, (ContainerRNA *)&RNA_BlendDataLibraries,
	NULL,
	{(PropertyRNA *)&rna_BlendDataScreens_rna_properties, (PropertyRNA *)&rna_BlendDataScreens_is_updated}},
	"BlendDataScreens", NULL, NULL, 4, "Main Screens",
	"Collection of screens",
	"*", 17,
	NULL, (PropertyRNA *)&rna_BlendDataScreens_rna_properties,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	{(FunctionRNA *)&rna_BlendDataScreens_tag_func, (FunctionRNA *)&rna_BlendDataScreens_tag_func}
};

/* Main Window Managers */
CollectionPropertyRNA rna_BlendDataWindowManagers_rna_properties = {
	{(PropertyRNA *)&rna_BlendDataWindowManagers_rna_type, NULL,
	-1, "rna_properties", 128, "Properties",
	"RNA property collection",
	0, "*",
	PROP_COLLECTION, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	BlendDataWindowManagers_rna_properties_begin, BlendDataWindowManagers_rna_properties_next, BlendDataWindowManagers_rna_properties_end, BlendDataWindowManagers_rna_properties_get, NULL, NULL, BlendDataWindowManagers_rna_properties_lookup_string, NULL, &RNA_Property
};

PointerPropertyRNA rna_BlendDataWindowManagers_rna_type = {
	{(PropertyRNA *)&rna_BlendDataWindowManagers_is_updated, (PropertyRNA *)&rna_BlendDataWindowManagers_rna_properties,
	-1, "rna_type", 8912896, "RNA",
	"RNA type definition",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	BlendDataWindowManagers_rna_type_get, NULL, NULL, NULL,&RNA_Struct
};

BoolPropertyRNA rna_BlendDataWindowManagers_is_updated = {
	{NULL, (PropertyRNA *)&rna_BlendDataWindowManagers_rna_type,
	-1, "is_updated", 2, "is_updated",
	"",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	BlendDataWindowManagers_is_updated_get, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_BlendDataWindowManagers_tag_value = {
	{NULL, NULL,
	-1, "value", 7, "Value",
	"",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

FunctionRNA rna_BlendDataWindowManagers_tag_func = {
	{NULL, NULL,
	NULL,
	{(PropertyRNA *)&rna_BlendDataWindowManagers_tag_value, (PropertyRNA *)&rna_BlendDataWindowManagers_tag_value}},
	"tag", 0, "tag",
	BlendDataWindowManagers_tag_call,
	NULL
};

StructRNA RNA_BlendDataWindowManagers = {
	{(ContainerRNA *)&RNA_BlendDataImages, (ContainerRNA *)&RNA_BlendDataScreens,
	NULL,
	{(PropertyRNA *)&rna_BlendDataWindowManagers_rna_properties, (PropertyRNA *)&rna_BlendDataWindowManagers_is_updated}},
	"BlendDataWindowManagers", NULL, NULL, 4, "Main Window Managers",
	"Collection of window managers",
	"*", 17,
	NULL, (PropertyRNA *)&rna_BlendDataWindowManagers_rna_properties,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	{(FunctionRNA *)&rna_BlendDataWindowManagers_tag_func, (FunctionRNA *)&rna_BlendDataWindowManagers_tag_func}
};

/* Main Images */
CollectionPropertyRNA rna_BlendDataImages_rna_properties = {
	{(PropertyRNA *)&rna_BlendDataImages_rna_type, NULL,
	-1, "rna_properties", 128, "Properties",
	"RNA property collection",
	0, "*",
	PROP_COLLECTION, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	BlendDataImages_rna_properties_begin, BlendDataImages_rna_properties_next, BlendDataImages_rna_properties_end, BlendDataImages_rna_properties_get, NULL, NULL, BlendDataImages_rna_properties_lookup_string, NULL, &RNA_Property
};

PointerPropertyRNA rna_BlendDataImages_rna_type = {
	{(PropertyRNA *)&rna_BlendDataImages_is_updated, (PropertyRNA *)&rna_BlendDataImages_rna_properties,
	-1, "rna_type", 8912896, "RNA",
	"RNA type definition",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	BlendDataImages_rna_type_get, NULL, NULL, NULL,&RNA_Struct
};

BoolPropertyRNA rna_BlendDataImages_is_updated = {
	{NULL, (PropertyRNA *)&rna_BlendDataImages_rna_type,
	-1, "is_updated", 2, "is_updated",
	"",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	BlendDataImages_is_updated_get, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

StringPropertyRNA rna_BlendDataImages_new_name = {
	{(PropertyRNA *)&rna_BlendDataImages_new_width, NULL,
	-1, "name", 262149, "",
	"New name for the datablock",
	0, "*",
	PROP_STRING, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	NULL, NULL, NULL, NULL, NULL, NULL, 0, "Image"
};

IntPropertyRNA rna_BlendDataImages_new_width = {
	{(PropertyRNA *)&rna_BlendDataImages_new_height, (PropertyRNA *)&rna_BlendDataImages_new_name,
	-1, "width", 7, "",
	"Width of the image",
	0, "*",
	PROP_INT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL,
	1, INT_MAX, 1, INT_MAX, 1, 1024, NULL
};

IntPropertyRNA rna_BlendDataImages_new_height = {
	{(PropertyRNA *)&rna_BlendDataImages_new_alpha, (PropertyRNA *)&rna_BlendDataImages_new_width,
	-1, "height", 7, "",
	"Height of the image",
	0, "*",
	PROP_INT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL,
	1, INT_MAX, 1, INT_MAX, 1, 1024, NULL
};

BoolPropertyRNA rna_BlendDataImages_new_alpha = {
	{(PropertyRNA *)&rna_BlendDataImages_new_float_buffer, (PropertyRNA *)&rna_BlendDataImages_new_height,
	-1, "alpha", 3, "Alpha",
	"Use alpha channel",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_BlendDataImages_new_float_buffer = {
	{(PropertyRNA *)&rna_BlendDataImages_new_image, (PropertyRNA *)&rna_BlendDataImages_new_alpha,
	-1, "float_buffer", 3, "Float Buffer",
	"Create an image with floating point color",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

PointerPropertyRNA rna_BlendDataImages_new_image = {
	{NULL, (PropertyRNA *)&rna_BlendDataImages_new_float_buffer,
	-1, "image", 8388616, "",
	"New image datablock",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	NULL, NULL, NULL, NULL,&RNA_Image
};

FunctionRNA rna_BlendDataImages_new_func = {
	{(FunctionRNA *)&rna_BlendDataImages_load_func, NULL,
	NULL,
	{(PropertyRNA *)&rna_BlendDataImages_new_name, (PropertyRNA *)&rna_BlendDataImages_new_image}},
	"new", 0, "Add a new image to the main database",
	BlendDataImages_new_call,
	(PropertyRNA *)&rna_BlendDataImages_new_image
};

StringPropertyRNA rna_BlendDataImages_load_filepath = {
	{(PropertyRNA *)&rna_BlendDataImages_load_image, NULL,
	-1, "filepath", 262149, "",
	"path of the file to load",
	0, "*",
	PROP_STRING, PROP_FILEPATH | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	NULL, NULL, NULL, NULL, NULL, NULL, 0, "File Path"
};

PointerPropertyRNA rna_BlendDataImages_load_image = {
	{NULL, (PropertyRNA *)&rna_BlendDataImages_load_filepath,
	-1, "image", 8388616, "",
	"New image datablock",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	NULL, NULL, NULL, NULL,&RNA_Image
};

FunctionRNA rna_BlendDataImages_load_func = {
	{(FunctionRNA *)&rna_BlendDataImages_remove_func, (FunctionRNA *)&rna_BlendDataImages_new_func,
	NULL,
	{(PropertyRNA *)&rna_BlendDataImages_load_filepath, (PropertyRNA *)&rna_BlendDataImages_load_image}},
	"load", 16, "Load a new image into the main database",
	BlendDataImages_load_call,
	(PropertyRNA *)&rna_BlendDataImages_load_image
};

PointerPropertyRNA rna_BlendDataImages_remove_image = {
	{NULL, NULL,
	-1, "image", 264196, "",
	"Image to remove",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	NULL, NULL, NULL, NULL,&RNA_Image
};

FunctionRNA rna_BlendDataImages_remove_func = {
	{(FunctionRNA *)&rna_BlendDataImages_tag_func, (FunctionRNA *)&rna_BlendDataImages_load_func,
	NULL,
	{(PropertyRNA *)&rna_BlendDataImages_remove_image, (PropertyRNA *)&rna_BlendDataImages_remove_image}},
	"remove", 16, "Remove an image from the current blendfile",
	BlendDataImages_remove_call,
	NULL
};

BoolPropertyRNA rna_BlendDataImages_tag_value = {
	{NULL, NULL,
	-1, "value", 7, "Value",
	"",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

FunctionRNA rna_BlendDataImages_tag_func = {
	{NULL, (FunctionRNA *)&rna_BlendDataImages_remove_func,
	NULL,
	{(PropertyRNA *)&rna_BlendDataImages_tag_value, (PropertyRNA *)&rna_BlendDataImages_tag_value}},
	"tag", 0, "tag",
	BlendDataImages_tag_call,
	NULL
};

StructRNA RNA_BlendDataImages = {
	{(ContainerRNA *)&RNA_BlendDataLattices, (ContainerRNA *)&RNA_BlendDataWindowManagers,
	NULL,
	{(PropertyRNA *)&rna_BlendDataImages_rna_properties, (PropertyRNA *)&rna_BlendDataImages_is_updated}},
	"BlendDataImages", NULL, NULL, 4, "Main Images",
	"Collection of images",
	"*", 17,
	NULL, (PropertyRNA *)&rna_BlendDataImages_rna_properties,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	{(FunctionRNA *)&rna_BlendDataImages_new_func, (FunctionRNA *)&rna_BlendDataImages_tag_func}
};

/* Main Lattices */
CollectionPropertyRNA rna_BlendDataLattices_rna_properties = {
	{(PropertyRNA *)&rna_BlendDataLattices_rna_type, NULL,
	-1, "rna_properties", 128, "Properties",
	"RNA property collection",
	0, "*",
	PROP_COLLECTION, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	BlendDataLattices_rna_properties_begin, BlendDataLattices_rna_properties_next, BlendDataLattices_rna_properties_end, BlendDataLattices_rna_properties_get, NULL, NULL, BlendDataLattices_rna_properties_lookup_string, NULL, &RNA_Property
};

PointerPropertyRNA rna_BlendDataLattices_rna_type = {
	{(PropertyRNA *)&rna_BlendDataLattices_is_updated, (PropertyRNA *)&rna_BlendDataLattices_rna_properties,
	-1, "rna_type", 8912896, "RNA",
	"RNA type definition",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	BlendDataLattices_rna_type_get, NULL, NULL, NULL,&RNA_Struct
};

BoolPropertyRNA rna_BlendDataLattices_is_updated = {
	{NULL, (PropertyRNA *)&rna_BlendDataLattices_rna_type,
	-1, "is_updated", 2, "is_updated",
	"",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	BlendDataLattices_is_updated_get, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

StringPropertyRNA rna_BlendDataLattices_new_name = {
	{(PropertyRNA *)&rna_BlendDataLattices_new_lattice, NULL,
	-1, "name", 262149, "",
	"New name for the datablock",
	0, "*",
	PROP_STRING, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	NULL, NULL, NULL, NULL, NULL, NULL, 0, "Lattice"
};

PointerPropertyRNA rna_BlendDataLattices_new_lattice = {
	{NULL, (PropertyRNA *)&rna_BlendDataLattices_new_name,
	-1, "lattice", 8388616, "",
	"New lattices datablock",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	NULL, NULL, NULL, NULL,&RNA_Lattice
};

FunctionRNA rna_BlendDataLattices_new_func = {
	{(FunctionRNA *)&rna_BlendDataLattices_remove_func, NULL,
	NULL,
	{(PropertyRNA *)&rna_BlendDataLattices_new_name, (PropertyRNA *)&rna_BlendDataLattices_new_lattice}},
	"new", 0, "Add a new lattice to the main database",
	BlendDataLattices_new_call,
	(PropertyRNA *)&rna_BlendDataLattices_new_lattice
};

PointerPropertyRNA rna_BlendDataLattices_remove_lattice = {
	{NULL, NULL,
	-1, "lattice", 264196, "",
	"Lattice to remove",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	NULL, NULL, NULL, NULL,&RNA_Lattice
};

FunctionRNA rna_BlendDataLattices_remove_func = {
	{(FunctionRNA *)&rna_BlendDataLattices_tag_func, (FunctionRNA *)&rna_BlendDataLattices_new_func,
	NULL,
	{(PropertyRNA *)&rna_BlendDataLattices_remove_lattice, (PropertyRNA *)&rna_BlendDataLattices_remove_lattice}},
	"remove", 16, "Remove a lattice from the current blendfile",
	BlendDataLattices_remove_call,
	NULL
};

BoolPropertyRNA rna_BlendDataLattices_tag_value = {
	{NULL, NULL,
	-1, "value", 7, "Value",
	"",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

FunctionRNA rna_BlendDataLattices_tag_func = {
	{NULL, (FunctionRNA *)&rna_BlendDataLattices_remove_func,
	NULL,
	{(PropertyRNA *)&rna_BlendDataLattices_tag_value, (PropertyRNA *)&rna_BlendDataLattices_tag_value}},
	"tag", 0, "tag",
	BlendDataLattices_tag_call,
	NULL
};

StructRNA RNA_BlendDataLattices = {
	{(ContainerRNA *)&RNA_BlendDataCurves, (ContainerRNA *)&RNA_BlendDataImages,
	NULL,
	{(PropertyRNA *)&rna_BlendDataLattices_rna_properties, (PropertyRNA *)&rna_BlendDataLattices_is_updated}},
	"BlendDataLattices", NULL, NULL, 4, "Main Lattices",
	"Collection of lattices",
	"*", 17,
	NULL, (PropertyRNA *)&rna_BlendDataLattices_rna_properties,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	{(FunctionRNA *)&rna_BlendDataLattices_new_func, (FunctionRNA *)&rna_BlendDataLattices_tag_func}
};

/* Main Curves */
CollectionPropertyRNA rna_BlendDataCurves_rna_properties = {
	{(PropertyRNA *)&rna_BlendDataCurves_rna_type, NULL,
	-1, "rna_properties", 128, "Properties",
	"RNA property collection",
	0, "*",
	PROP_COLLECTION, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	BlendDataCurves_rna_properties_begin, BlendDataCurves_rna_properties_next, BlendDataCurves_rna_properties_end, BlendDataCurves_rna_properties_get, NULL, NULL, BlendDataCurves_rna_properties_lookup_string, NULL, &RNA_Property
};

PointerPropertyRNA rna_BlendDataCurves_rna_type = {
	{(PropertyRNA *)&rna_BlendDataCurves_is_updated, (PropertyRNA *)&rna_BlendDataCurves_rna_properties,
	-1, "rna_type", 8912896, "RNA",
	"RNA type definition",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	BlendDataCurves_rna_type_get, NULL, NULL, NULL,&RNA_Struct
};

BoolPropertyRNA rna_BlendDataCurves_is_updated = {
	{NULL, (PropertyRNA *)&rna_BlendDataCurves_rna_type,
	-1, "is_updated", 2, "is_updated",
	"",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	BlendDataCurves_is_updated_get, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

StringPropertyRNA rna_BlendDataCurves_new_name = {
	{(PropertyRNA *)&rna_BlendDataCurves_new_type, NULL,
	-1, "name", 262149, "",
	"New name for the datablock",
	0, "*",
	PROP_STRING, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	NULL, NULL, NULL, NULL, NULL, NULL, 0, "Curve"
};

static EnumPropertyItem rna_BlendDataCurves_new_type_items[4] = {
	{2, "CURVE", 0, "Curve", ""},
	{3, "SURFACE", 0, "Surface", ""},
	{4, "FONT", 0, "Font", ""},
	{0, NULL, 0, NULL, NULL}
};

EnumPropertyRNA rna_BlendDataCurves_new_type = {
	{(PropertyRNA *)&rna_BlendDataCurves_new_curve, (PropertyRNA *)&rna_BlendDataCurves_new_name,
	-1, "type", 7, "Type",
	"The type of curve to add",
	0, "*",
	PROP_ENUM, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	NULL, NULL, NULL, NULL, NULL, NULL, rna_BlendDataCurves_new_type_items, 3, 2
};

PointerPropertyRNA rna_BlendDataCurves_new_curve = {
	{NULL, (PropertyRNA *)&rna_BlendDataCurves_new_type,
	-1, "curve", 8388616, "",
	"New curve datablock",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	NULL, NULL, NULL, NULL,&RNA_Curve
};

FunctionRNA rna_BlendDataCurves_new_func = {
	{(FunctionRNA *)&rna_BlendDataCurves_remove_func, NULL,
	NULL,
	{(PropertyRNA *)&rna_BlendDataCurves_new_name, (PropertyRNA *)&rna_BlendDataCurves_new_curve}},
	"new", 0, "Add a new curve to the main database",
	BlendDataCurves_new_call,
	(PropertyRNA *)&rna_BlendDataCurves_new_curve
};

PointerPropertyRNA rna_BlendDataCurves_remove_curve = {
	{NULL, NULL,
	-1, "curve", 264196, "",
	"Curve to remove",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	NULL, NULL, NULL, NULL,&RNA_Curve
};

FunctionRNA rna_BlendDataCurves_remove_func = {
	{(FunctionRNA *)&rna_BlendDataCurves_tag_func, (FunctionRNA *)&rna_BlendDataCurves_new_func,
	NULL,
	{(PropertyRNA *)&rna_BlendDataCurves_remove_curve, (PropertyRNA *)&rna_BlendDataCurves_remove_curve}},
	"remove", 16, "Remove a curve from the current blendfile",
	BlendDataCurves_remove_call,
	NULL
};

BoolPropertyRNA rna_BlendDataCurves_tag_value = {
	{NULL, NULL,
	-1, "value", 7, "Value",
	"",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

FunctionRNA rna_BlendDataCurves_tag_func = {
	{NULL, (FunctionRNA *)&rna_BlendDataCurves_remove_func,
	NULL,
	{(PropertyRNA *)&rna_BlendDataCurves_tag_value, (PropertyRNA *)&rna_BlendDataCurves_tag_value}},
	"tag", 0, "tag",
	BlendDataCurves_tag_call,
	NULL
};

StructRNA RNA_BlendDataCurves = {
	{(ContainerRNA *)&RNA_BlendDataMetaBalls, (ContainerRNA *)&RNA_BlendDataLattices,
	NULL,
	{(PropertyRNA *)&rna_BlendDataCurves_rna_properties, (PropertyRNA *)&rna_BlendDataCurves_is_updated}},
	"BlendDataCurves", NULL, NULL, 4, "Main Curves",
	"Collection of curves",
	"*", 17,
	NULL, (PropertyRNA *)&rna_BlendDataCurves_rna_properties,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	{(FunctionRNA *)&rna_BlendDataCurves_new_func, (FunctionRNA *)&rna_BlendDataCurves_tag_func}
};

/* Main Metaballs */
CollectionPropertyRNA rna_BlendDataMetaBalls_rna_properties = {
	{(PropertyRNA *)&rna_BlendDataMetaBalls_rna_type, NULL,
	-1, "rna_properties", 128, "Properties",
	"RNA property collection",
	0, "*",
	PROP_COLLECTION, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	BlendDataMetaBalls_rna_properties_begin, BlendDataMetaBalls_rna_properties_next, BlendDataMetaBalls_rna_properties_end, BlendDataMetaBalls_rna_properties_get, NULL, NULL, BlendDataMetaBalls_rna_properties_lookup_string, NULL, &RNA_Property
};

PointerPropertyRNA rna_BlendDataMetaBalls_rna_type = {
	{(PropertyRNA *)&rna_BlendDataMetaBalls_is_updated, (PropertyRNA *)&rna_BlendDataMetaBalls_rna_properties,
	-1, "rna_type", 8912896, "RNA",
	"RNA type definition",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	BlendDataMetaBalls_rna_type_get, NULL, NULL, NULL,&RNA_Struct
};

BoolPropertyRNA rna_BlendDataMetaBalls_is_updated = {
	{NULL, (PropertyRNA *)&rna_BlendDataMetaBalls_rna_type,
	-1, "is_updated", 2, "is_updated",
	"",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	BlendDataMetaBalls_is_updated_get, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

StringPropertyRNA rna_BlendDataMetaBalls_new_name = {
	{(PropertyRNA *)&rna_BlendDataMetaBalls_new_metaball, NULL,
	-1, "name", 262149, "",
	"New name for the datablock",
	0, "*",
	PROP_STRING, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	NULL, NULL, NULL, NULL, NULL, NULL, 0, "MetaBall"
};

PointerPropertyRNA rna_BlendDataMetaBalls_new_metaball = {
	{NULL, (PropertyRNA *)&rna_BlendDataMetaBalls_new_name,
	-1, "metaball", 8388616, "",
	"New metaball datablock",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	NULL, NULL, NULL, NULL,&RNA_MetaBall
};

FunctionRNA rna_BlendDataMetaBalls_new_func = {
	{(FunctionRNA *)&rna_BlendDataMetaBalls_remove_func, NULL,
	NULL,
	{(PropertyRNA *)&rna_BlendDataMetaBalls_new_name, (PropertyRNA *)&rna_BlendDataMetaBalls_new_metaball}},
	"new", 0, "Add a new metaball to the main database",
	BlendDataMetaBalls_new_call,
	(PropertyRNA *)&rna_BlendDataMetaBalls_new_metaball
};

PointerPropertyRNA rna_BlendDataMetaBalls_remove_metaball = {
	{NULL, NULL,
	-1, "metaball", 264196, "",
	"Metaball to remove",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	NULL, NULL, NULL, NULL,&RNA_MetaBall
};

FunctionRNA rna_BlendDataMetaBalls_remove_func = {
	{(FunctionRNA *)&rna_BlendDataMetaBalls_tag_func, (FunctionRNA *)&rna_BlendDataMetaBalls_new_func,
	NULL,
	{(PropertyRNA *)&rna_BlendDataMetaBalls_remove_metaball, (PropertyRNA *)&rna_BlendDataMetaBalls_remove_metaball}},
	"remove", 16, "Remove a metaball from the current blendfile",
	BlendDataMetaBalls_remove_call,
	NULL
};

BoolPropertyRNA rna_BlendDataMetaBalls_tag_value = {
	{NULL, NULL,
	-1, "value", 7, "Value",
	"",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

FunctionRNA rna_BlendDataMetaBalls_tag_func = {
	{NULL, (FunctionRNA *)&rna_BlendDataMetaBalls_remove_func,
	NULL,
	{(PropertyRNA *)&rna_BlendDataMetaBalls_tag_value, (PropertyRNA *)&rna_BlendDataMetaBalls_tag_value}},
	"tag", 0, "tag",
	BlendDataMetaBalls_tag_call,
	NULL
};

StructRNA RNA_BlendDataMetaBalls = {
	{(ContainerRNA *)&RNA_BlendDataFonts, (ContainerRNA *)&RNA_BlendDataCurves,
	NULL,
	{(PropertyRNA *)&rna_BlendDataMetaBalls_rna_properties, (PropertyRNA *)&rna_BlendDataMetaBalls_is_updated}},
	"BlendDataMetaBalls", NULL, NULL, 4, "Main Metaballs",
	"Collection of metaballs",
	"*", 17,
	NULL, (PropertyRNA *)&rna_BlendDataMetaBalls_rna_properties,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	{(FunctionRNA *)&rna_BlendDataMetaBalls_new_func, (FunctionRNA *)&rna_BlendDataMetaBalls_tag_func}
};

/* Main Fonts */
CollectionPropertyRNA rna_BlendDataFonts_rna_properties = {
	{(PropertyRNA *)&rna_BlendDataFonts_rna_type, NULL,
	-1, "rna_properties", 128, "Properties",
	"RNA property collection",
	0, "*",
	PROP_COLLECTION, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	BlendDataFonts_rna_properties_begin, BlendDataFonts_rna_properties_next, BlendDataFonts_rna_properties_end, BlendDataFonts_rna_properties_get, NULL, NULL, BlendDataFonts_rna_properties_lookup_string, NULL, &RNA_Property
};

PointerPropertyRNA rna_BlendDataFonts_rna_type = {
	{(PropertyRNA *)&rna_BlendDataFonts_is_updated, (PropertyRNA *)&rna_BlendDataFonts_rna_properties,
	-1, "rna_type", 8912896, "RNA",
	"RNA type definition",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	BlendDataFonts_rna_type_get, NULL, NULL, NULL,&RNA_Struct
};

BoolPropertyRNA rna_BlendDataFonts_is_updated = {
	{NULL, (PropertyRNA *)&rna_BlendDataFonts_rna_type,
	-1, "is_updated", 2, "is_updated",
	"",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	BlendDataFonts_is_updated_get, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

StringPropertyRNA rna_BlendDataFonts_load_filepath = {
	{(PropertyRNA *)&rna_BlendDataFonts_load_vfont, NULL,
	-1, "filepath", 262149, "",
	"path of the font to load",
	0, "*",
	PROP_STRING, PROP_FILEPATH | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	NULL, NULL, NULL, NULL, NULL, NULL, 0, "File Path"
};

PointerPropertyRNA rna_BlendDataFonts_load_vfont = {
	{NULL, (PropertyRNA *)&rna_BlendDataFonts_load_filepath,
	-1, "vfont", 8388616, "",
	"New font datablock",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	NULL, NULL, NULL, NULL,&RNA_VectorFont
};

FunctionRNA rna_BlendDataFonts_load_func = {
	{(FunctionRNA *)&rna_BlendDataFonts_remove_func, NULL,
	NULL,
	{(PropertyRNA *)&rna_BlendDataFonts_load_filepath, (PropertyRNA *)&rna_BlendDataFonts_load_vfont}},
	"load", 16, "Load a new font into the main database",
	BlendDataFonts_load_call,
	(PropertyRNA *)&rna_BlendDataFonts_load_vfont
};

PointerPropertyRNA rna_BlendDataFonts_remove_vfont = {
	{NULL, NULL,
	-1, "vfont", 264196, "",
	"Font to remove",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	NULL, NULL, NULL, NULL,&RNA_VectorFont
};

FunctionRNA rna_BlendDataFonts_remove_func = {
	{(FunctionRNA *)&rna_BlendDataFonts_tag_func, (FunctionRNA *)&rna_BlendDataFonts_load_func,
	NULL,
	{(PropertyRNA *)&rna_BlendDataFonts_remove_vfont, (PropertyRNA *)&rna_BlendDataFonts_remove_vfont}},
	"remove", 16, "Remove a font from the current blendfile",
	BlendDataFonts_remove_call,
	NULL
};

BoolPropertyRNA rna_BlendDataFonts_tag_value = {
	{NULL, NULL,
	-1, "value", 7, "Value",
	"",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

FunctionRNA rna_BlendDataFonts_tag_func = {
	{NULL, (FunctionRNA *)&rna_BlendDataFonts_remove_func,
	NULL,
	{(PropertyRNA *)&rna_BlendDataFonts_tag_value, (PropertyRNA *)&rna_BlendDataFonts_tag_value}},
	"tag", 0, "tag",
	BlendDataFonts_tag_call,
	NULL
};

StructRNA RNA_BlendDataFonts = {
	{(ContainerRNA *)&RNA_BlendDataTextures, (ContainerRNA *)&RNA_BlendDataMetaBalls,
	NULL,
	{(PropertyRNA *)&rna_BlendDataFonts_rna_properties, (PropertyRNA *)&rna_BlendDataFonts_is_updated}},
	"BlendDataFonts", NULL, NULL, 4, "Main Fonts",
	"Collection of fonts",
	"*", 17,
	NULL, (PropertyRNA *)&rna_BlendDataFonts_rna_properties,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	{(FunctionRNA *)&rna_BlendDataFonts_load_func, (FunctionRNA *)&rna_BlendDataFonts_tag_func}
};

/* Main Textures */
CollectionPropertyRNA rna_BlendDataTextures_rna_properties = {
	{(PropertyRNA *)&rna_BlendDataTextures_rna_type, NULL,
	-1, "rna_properties", 128, "Properties",
	"RNA property collection",
	0, "*",
	PROP_COLLECTION, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	BlendDataTextures_rna_properties_begin, BlendDataTextures_rna_properties_next, BlendDataTextures_rna_properties_end, BlendDataTextures_rna_properties_get, NULL, NULL, BlendDataTextures_rna_properties_lookup_string, NULL, &RNA_Property
};

PointerPropertyRNA rna_BlendDataTextures_rna_type = {
	{(PropertyRNA *)&rna_BlendDataTextures_is_updated, (PropertyRNA *)&rna_BlendDataTextures_rna_properties,
	-1, "rna_type", 8912896, "RNA",
	"RNA type definition",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	BlendDataTextures_rna_type_get, NULL, NULL, NULL,&RNA_Struct
};

BoolPropertyRNA rna_BlendDataTextures_is_updated = {
	{NULL, (PropertyRNA *)&rna_BlendDataTextures_rna_type,
	-1, "is_updated", 2, "is_updated",
	"",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	BlendDataTextures_is_updated_get, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

StringPropertyRNA rna_BlendDataTextures_new_name = {
	{(PropertyRNA *)&rna_BlendDataTextures_new_type, NULL,
	-1, "name", 262149, "",
	"New name for the datablock",
	0, "*",
	PROP_STRING, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	NULL, NULL, NULL, NULL, NULL, NULL, 0, "Texture"
};

static EnumPropertyItem rna_BlendDataTextures_new_type_items[17] = {
	{0, "NONE", 0, "None", ""},
	{5, "BLEND", 80, "Blend", "Procedural - create a ramp texture"},
	{1, "CLOUDS", 80, "Clouds", "Procedural - create a cloud-like fractal noise texture"},
	{13, "DISTORTED_NOISE", 80, "Distorted Noise", "Procedural - noise texture distorted by two noise algorithms"},
	{10, "ENVIRONMENT_MAP", 183, "Environment Map", "Create a render of the environment mapped to a texture"},
	{8, "IMAGE", 183, "Image or Movie", "Allow for images or movies to be used as textures"},
	{4, "MAGIC", 80, "Magic", "Procedural - color texture based on trigonometric functions"},
	{3, "MARBLE", 80, "Marble", "Procedural - marble-like noise texture with wave generated bands"},
	{11, "MUSGRAVE", 80, "Musgrave", "Procedural - highly flexible fractal noise texture"},
	{7, "NOISE", 80, "Noise", "Procedural - random noise, gives a different result every time, for every frame, for every pixel"},
	{16, "OCEAN", 80, "Ocean", "Use a texture generated by an Ocean modifier"},
	{14, "POINT_DENSITY", 80, "Point Density", ""},
	{6, "STUCCI", 80, "Stucci", "Procedural - create a fractal noise texture"},
	{12, "VORONOI", 80, "Voronoi", "Procedural - create cell-like patterns based on Worley noise"},
	{15, "VOXEL_DATA", 80, "Voxel Data", "Create a 3D texture based on volumetric data"},
	{2, "WOOD", 80, "Wood", "Procedural - wave generated bands or rings, with optional noise"},
	{0, NULL, 0, NULL, NULL}
};

EnumPropertyRNA rna_BlendDataTextures_new_type = {
	{(PropertyRNA *)&rna_BlendDataTextures_new_texture, (PropertyRNA *)&rna_BlendDataTextures_new_name,
	-1, "type", 7, "Type",
	"The type of texture to add",
	0, "*",
	PROP_ENUM, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	NULL, NULL, NULL, NULL, NULL, NULL, rna_BlendDataTextures_new_type_items, 16, 0
};

PointerPropertyRNA rna_BlendDataTextures_new_texture = {
	{NULL, (PropertyRNA *)&rna_BlendDataTextures_new_type,
	-1, "texture", 8388616, "",
	"New texture datablock",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	NULL, NULL, NULL, NULL,&RNA_Texture
};

FunctionRNA rna_BlendDataTextures_new_func = {
	{(FunctionRNA *)&rna_BlendDataTextures_remove_func, NULL,
	NULL,
	{(PropertyRNA *)&rna_BlendDataTextures_new_name, (PropertyRNA *)&rna_BlendDataTextures_new_texture}},
	"new", 0, "Add a new texture to the main database",
	BlendDataTextures_new_call,
	(PropertyRNA *)&rna_BlendDataTextures_new_texture
};

PointerPropertyRNA rna_BlendDataTextures_remove_texture = {
	{NULL, NULL,
	-1, "texture", 264196, "",
	"Texture to remove",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	NULL, NULL, NULL, NULL,&RNA_Texture
};

FunctionRNA rna_BlendDataTextures_remove_func = {
	{(FunctionRNA *)&rna_BlendDataTextures_tag_func, (FunctionRNA *)&rna_BlendDataTextures_new_func,
	NULL,
	{(PropertyRNA *)&rna_BlendDataTextures_remove_texture, (PropertyRNA *)&rna_BlendDataTextures_remove_texture}},
	"remove", 16, "Remove a texture from the current blendfile",
	BlendDataTextures_remove_call,
	NULL
};

BoolPropertyRNA rna_BlendDataTextures_tag_value = {
	{NULL, NULL,
	-1, "value", 7, "Value",
	"",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

FunctionRNA rna_BlendDataTextures_tag_func = {
	{NULL, (FunctionRNA *)&rna_BlendDataTextures_remove_func,
	NULL,
	{(PropertyRNA *)&rna_BlendDataTextures_tag_value, (PropertyRNA *)&rna_BlendDataTextures_tag_value}},
	"tag", 0, "tag",
	BlendDataTextures_tag_call,
	NULL
};

StructRNA RNA_BlendDataTextures = {
	{(ContainerRNA *)&RNA_BlendDataBrushes, (ContainerRNA *)&RNA_BlendDataFonts,
	NULL,
	{(PropertyRNA *)&rna_BlendDataTextures_rna_properties, (PropertyRNA *)&rna_BlendDataTextures_is_updated}},
	"BlendDataTextures", NULL, NULL, 4, "Main Textures",
	"Collection of groups",
	"*", 17,
	NULL, (PropertyRNA *)&rna_BlendDataTextures_rna_properties,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	{(FunctionRNA *)&rna_BlendDataTextures_new_func, (FunctionRNA *)&rna_BlendDataTextures_tag_func}
};

/* Main Brushes */
CollectionPropertyRNA rna_BlendDataBrushes_rna_properties = {
	{(PropertyRNA *)&rna_BlendDataBrushes_rna_type, NULL,
	-1, "rna_properties", 128, "Properties",
	"RNA property collection",
	0, "*",
	PROP_COLLECTION, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	BlendDataBrushes_rna_properties_begin, BlendDataBrushes_rna_properties_next, BlendDataBrushes_rna_properties_end, BlendDataBrushes_rna_properties_get, NULL, NULL, BlendDataBrushes_rna_properties_lookup_string, NULL, &RNA_Property
};

PointerPropertyRNA rna_BlendDataBrushes_rna_type = {
	{(PropertyRNA *)&rna_BlendDataBrushes_is_updated, (PropertyRNA *)&rna_BlendDataBrushes_rna_properties,
	-1, "rna_type", 8912896, "RNA",
	"RNA type definition",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	BlendDataBrushes_rna_type_get, NULL, NULL, NULL,&RNA_Struct
};

BoolPropertyRNA rna_BlendDataBrushes_is_updated = {
	{NULL, (PropertyRNA *)&rna_BlendDataBrushes_rna_type,
	-1, "is_updated", 2, "is_updated",
	"",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	BlendDataBrushes_is_updated_get, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

StringPropertyRNA rna_BlendDataBrushes_new_name = {
	{(PropertyRNA *)&rna_BlendDataBrushes_new_brush, NULL,
	-1, "name", 262149, "",
	"New name for the datablock",
	0, "*",
	PROP_STRING, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	NULL, NULL, NULL, NULL, NULL, NULL, 0, "Brush"
};

PointerPropertyRNA rna_BlendDataBrushes_new_brush = {
	{NULL, (PropertyRNA *)&rna_BlendDataBrushes_new_name,
	-1, "brush", 8388616, "",
	"New brush datablock",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	NULL, NULL, NULL, NULL,&RNA_Brush
};

FunctionRNA rna_BlendDataBrushes_new_func = {
	{(FunctionRNA *)&rna_BlendDataBrushes_remove_func, NULL,
	NULL,
	{(PropertyRNA *)&rna_BlendDataBrushes_new_name, (PropertyRNA *)&rna_BlendDataBrushes_new_brush}},
	"new", 0, "Add a new brush to the main database",
	BlendDataBrushes_new_call,
	(PropertyRNA *)&rna_BlendDataBrushes_new_brush
};

PointerPropertyRNA rna_BlendDataBrushes_remove_brush = {
	{NULL, NULL,
	-1, "brush", 264196, "",
	"Brush to remove",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	NULL, NULL, NULL, NULL,&RNA_Brush
};

FunctionRNA rna_BlendDataBrushes_remove_func = {
	{(FunctionRNA *)&rna_BlendDataBrushes_tag_func, (FunctionRNA *)&rna_BlendDataBrushes_new_func,
	NULL,
	{(PropertyRNA *)&rna_BlendDataBrushes_remove_brush, (PropertyRNA *)&rna_BlendDataBrushes_remove_brush}},
	"remove", 16, "Remove a brush from the current blendfile",
	BlendDataBrushes_remove_call,
	NULL
};

BoolPropertyRNA rna_BlendDataBrushes_tag_value = {
	{NULL, NULL,
	-1, "value", 7, "Value",
	"",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

FunctionRNA rna_BlendDataBrushes_tag_func = {
	{NULL, (FunctionRNA *)&rna_BlendDataBrushes_remove_func,
	NULL,
	{(PropertyRNA *)&rna_BlendDataBrushes_tag_value, (PropertyRNA *)&rna_BlendDataBrushes_tag_value}},
	"tag", 0, "tag",
	BlendDataBrushes_tag_call,
	NULL
};

StructRNA RNA_BlendDataBrushes = {
	{(ContainerRNA *)&RNA_BlendDataWorlds, (ContainerRNA *)&RNA_BlendDataTextures,
	NULL,
	{(PropertyRNA *)&rna_BlendDataBrushes_rna_properties, (PropertyRNA *)&rna_BlendDataBrushes_is_updated}},
	"BlendDataBrushes", NULL, NULL, 4, "Main Brushes",
	"Collection of brushes",
	"*", 17,
	NULL, (PropertyRNA *)&rna_BlendDataBrushes_rna_properties,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	{(FunctionRNA *)&rna_BlendDataBrushes_new_func, (FunctionRNA *)&rna_BlendDataBrushes_tag_func}
};

/* Main Worlds */
CollectionPropertyRNA rna_BlendDataWorlds_rna_properties = {
	{(PropertyRNA *)&rna_BlendDataWorlds_rna_type, NULL,
	-1, "rna_properties", 128, "Properties",
	"RNA property collection",
	0, "*",
	PROP_COLLECTION, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	BlendDataWorlds_rna_properties_begin, BlendDataWorlds_rna_properties_next, BlendDataWorlds_rna_properties_end, BlendDataWorlds_rna_properties_get, NULL, NULL, BlendDataWorlds_rna_properties_lookup_string, NULL, &RNA_Property
};

PointerPropertyRNA rna_BlendDataWorlds_rna_type = {
	{(PropertyRNA *)&rna_BlendDataWorlds_is_updated, (PropertyRNA *)&rna_BlendDataWorlds_rna_properties,
	-1, "rna_type", 8912896, "RNA",
	"RNA type definition",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	BlendDataWorlds_rna_type_get, NULL, NULL, NULL,&RNA_Struct
};

BoolPropertyRNA rna_BlendDataWorlds_is_updated = {
	{NULL, (PropertyRNA *)&rna_BlendDataWorlds_rna_type,
	-1, "is_updated", 2, "is_updated",
	"",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	BlendDataWorlds_is_updated_get, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

StringPropertyRNA rna_BlendDataWorlds_new_name = {
	{(PropertyRNA *)&rna_BlendDataWorlds_new_world, NULL,
	-1, "name", 262149, "",
	"New name for the datablock",
	0, "*",
	PROP_STRING, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	NULL, NULL, NULL, NULL, NULL, NULL, 0, "World"
};

PointerPropertyRNA rna_BlendDataWorlds_new_world = {
	{NULL, (PropertyRNA *)&rna_BlendDataWorlds_new_name,
	-1, "world", 8388616, "",
	"New world datablock",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	NULL, NULL, NULL, NULL,&RNA_World
};

FunctionRNA rna_BlendDataWorlds_new_func = {
	{(FunctionRNA *)&rna_BlendDataWorlds_remove_func, NULL,
	NULL,
	{(PropertyRNA *)&rna_BlendDataWorlds_new_name, (PropertyRNA *)&rna_BlendDataWorlds_new_world}},
	"new", 0, "Add a new world to the main database",
	BlendDataWorlds_new_call,
	(PropertyRNA *)&rna_BlendDataWorlds_new_world
};

PointerPropertyRNA rna_BlendDataWorlds_remove_world = {
	{NULL, NULL,
	-1, "world", 264196, "",
	"World to remove",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	NULL, NULL, NULL, NULL,&RNA_World
};

FunctionRNA rna_BlendDataWorlds_remove_func = {
	{(FunctionRNA *)&rna_BlendDataWorlds_tag_func, (FunctionRNA *)&rna_BlendDataWorlds_new_func,
	NULL,
	{(PropertyRNA *)&rna_BlendDataWorlds_remove_world, (PropertyRNA *)&rna_BlendDataWorlds_remove_world}},
	"remove", 16, "Remove a world from the current blendfile",
	BlendDataWorlds_remove_call,
	NULL
};

BoolPropertyRNA rna_BlendDataWorlds_tag_value = {
	{NULL, NULL,
	-1, "value", 7, "Value",
	"",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

FunctionRNA rna_BlendDataWorlds_tag_func = {
	{NULL, (FunctionRNA *)&rna_BlendDataWorlds_remove_func,
	NULL,
	{(PropertyRNA *)&rna_BlendDataWorlds_tag_value, (PropertyRNA *)&rna_BlendDataWorlds_tag_value}},
	"tag", 0, "tag",
	BlendDataWorlds_tag_call,
	NULL
};

StructRNA RNA_BlendDataWorlds = {
	{(ContainerRNA *)&RNA_BlendDataGroups, (ContainerRNA *)&RNA_BlendDataBrushes,
	NULL,
	{(PropertyRNA *)&rna_BlendDataWorlds_rna_properties, (PropertyRNA *)&rna_BlendDataWorlds_is_updated}},
	"BlendDataWorlds", NULL, NULL, 4, "Main Worlds",
	"Collection of worlds",
	"*", 17,
	NULL, (PropertyRNA *)&rna_BlendDataWorlds_rna_properties,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	{(FunctionRNA *)&rna_BlendDataWorlds_new_func, (FunctionRNA *)&rna_BlendDataWorlds_tag_func}
};

/* Main Groups */
CollectionPropertyRNA rna_BlendDataGroups_rna_properties = {
	{(PropertyRNA *)&rna_BlendDataGroups_rna_type, NULL,
	-1, "rna_properties", 128, "Properties",
	"RNA property collection",
	0, "*",
	PROP_COLLECTION, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	BlendDataGroups_rna_properties_begin, BlendDataGroups_rna_properties_next, BlendDataGroups_rna_properties_end, BlendDataGroups_rna_properties_get, NULL, NULL, BlendDataGroups_rna_properties_lookup_string, NULL, &RNA_Property
};

PointerPropertyRNA rna_BlendDataGroups_rna_type = {
	{(PropertyRNA *)&rna_BlendDataGroups_is_updated, (PropertyRNA *)&rna_BlendDataGroups_rna_properties,
	-1, "rna_type", 8912896, "RNA",
	"RNA type definition",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	BlendDataGroups_rna_type_get, NULL, NULL, NULL,&RNA_Struct
};

BoolPropertyRNA rna_BlendDataGroups_is_updated = {
	{NULL, (PropertyRNA *)&rna_BlendDataGroups_rna_type,
	-1, "is_updated", 2, "is_updated",
	"",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	BlendDataGroups_is_updated_get, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

StringPropertyRNA rna_BlendDataGroups_new_name = {
	{(PropertyRNA *)&rna_BlendDataGroups_new_group, NULL,
	-1, "name", 262149, "",
	"New name for the datablock",
	0, "*",
	PROP_STRING, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	NULL, NULL, NULL, NULL, NULL, NULL, 0, "Group"
};

PointerPropertyRNA rna_BlendDataGroups_new_group = {
	{NULL, (PropertyRNA *)&rna_BlendDataGroups_new_name,
	-1, "group", 8388616, "",
	"New group datablock",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	NULL, NULL, NULL, NULL,&RNA_Group
};

FunctionRNA rna_BlendDataGroups_new_func = {
	{(FunctionRNA *)&rna_BlendDataGroups_remove_func, NULL,
	NULL,
	{(PropertyRNA *)&rna_BlendDataGroups_new_name, (PropertyRNA *)&rna_BlendDataGroups_new_group}},
	"new", 0, "Add a new group to the main database",
	BlendDataGroups_new_call,
	(PropertyRNA *)&rna_BlendDataGroups_new_group
};

PointerPropertyRNA rna_BlendDataGroups_remove_group = {
	{NULL, NULL,
	-1, "group", 264196, "",
	"Group to remove",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	NULL, NULL, NULL, NULL,&RNA_Group
};

FunctionRNA rna_BlendDataGroups_remove_func = {
	{(FunctionRNA *)&rna_BlendDataGroups_tag_func, (FunctionRNA *)&rna_BlendDataGroups_new_func,
	NULL,
	{(PropertyRNA *)&rna_BlendDataGroups_remove_group, (PropertyRNA *)&rna_BlendDataGroups_remove_group}},
	"remove", 0, "Remove a group from the current blendfile",
	BlendDataGroups_remove_call,
	NULL
};

BoolPropertyRNA rna_BlendDataGroups_tag_value = {
	{NULL, NULL,
	-1, "value", 7, "Value",
	"",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

FunctionRNA rna_BlendDataGroups_tag_func = {
	{NULL, (FunctionRNA *)&rna_BlendDataGroups_remove_func,
	NULL,
	{(PropertyRNA *)&rna_BlendDataGroups_tag_value, (PropertyRNA *)&rna_BlendDataGroups_tag_value}},
	"tag", 0, "tag",
	BlendDataGroups_tag_call,
	NULL
};

StructRNA RNA_BlendDataGroups = {
	{(ContainerRNA *)&RNA_BlendDataTexts, (ContainerRNA *)&RNA_BlendDataWorlds,
	NULL,
	{(PropertyRNA *)&rna_BlendDataGroups_rna_properties, (PropertyRNA *)&rna_BlendDataGroups_is_updated}},
	"BlendDataGroups", NULL, NULL, 4, "Main Groups",
	"Collection of groups",
	"*", 17,
	NULL, (PropertyRNA *)&rna_BlendDataGroups_rna_properties,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	{(FunctionRNA *)&rna_BlendDataGroups_new_func, (FunctionRNA *)&rna_BlendDataGroups_tag_func}
};

/* Main Texts */
CollectionPropertyRNA rna_BlendDataTexts_rna_properties = {
	{(PropertyRNA *)&rna_BlendDataTexts_rna_type, NULL,
	-1, "rna_properties", 128, "Properties",
	"RNA property collection",
	0, "*",
	PROP_COLLECTION, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	BlendDataTexts_rna_properties_begin, BlendDataTexts_rna_properties_next, BlendDataTexts_rna_properties_end, BlendDataTexts_rna_properties_get, NULL, NULL, BlendDataTexts_rna_properties_lookup_string, NULL, &RNA_Property
};

PointerPropertyRNA rna_BlendDataTexts_rna_type = {
	{(PropertyRNA *)&rna_BlendDataTexts_is_updated, (PropertyRNA *)&rna_BlendDataTexts_rna_properties,
	-1, "rna_type", 8912896, "RNA",
	"RNA type definition",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	BlendDataTexts_rna_type_get, NULL, NULL, NULL,&RNA_Struct
};

BoolPropertyRNA rna_BlendDataTexts_is_updated = {
	{NULL, (PropertyRNA *)&rna_BlendDataTexts_rna_type,
	-1, "is_updated", 2, "is_updated",
	"",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	BlendDataTexts_is_updated_get, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

StringPropertyRNA rna_BlendDataTexts_new_name = {
	{(PropertyRNA *)&rna_BlendDataTexts_new_text, NULL,
	-1, "name", 262149, "",
	"New name for the datablock",
	0, "*",
	PROP_STRING, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	NULL, NULL, NULL, NULL, NULL, NULL, 0, "Text"
};

PointerPropertyRNA rna_BlendDataTexts_new_text = {
	{NULL, (PropertyRNA *)&rna_BlendDataTexts_new_name,
	-1, "text", 8388616, "",
	"New text datablock",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	NULL, NULL, NULL, NULL,&RNA_Text
};

FunctionRNA rna_BlendDataTexts_new_func = {
	{(FunctionRNA *)&rna_BlendDataTexts_remove_func, NULL,
	NULL,
	{(PropertyRNA *)&rna_BlendDataTexts_new_name, (PropertyRNA *)&rna_BlendDataTexts_new_text}},
	"new", 0, "Add a new text to the main database",
	BlendDataTexts_new_call,
	(PropertyRNA *)&rna_BlendDataTexts_new_text
};

PointerPropertyRNA rna_BlendDataTexts_remove_text = {
	{NULL, NULL,
	-1, "text", 264196, "",
	"Text to remove",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	NULL, NULL, NULL, NULL,&RNA_Text
};

FunctionRNA rna_BlendDataTexts_remove_func = {
	{(FunctionRNA *)&rna_BlendDataTexts_load_func, (FunctionRNA *)&rna_BlendDataTexts_new_func,
	NULL,
	{(PropertyRNA *)&rna_BlendDataTexts_remove_text, (PropertyRNA *)&rna_BlendDataTexts_remove_text}},
	"remove", 0, "Remove a text from the current blendfile",
	BlendDataTexts_remove_call,
	NULL
};

StringPropertyRNA rna_BlendDataTexts_load_filepath = {
	{(PropertyRNA *)&rna_BlendDataTexts_load_internal, NULL,
	-1, "filepath", 262149, "",
	"path for the datablock",
	0, "*",
	PROP_STRING, PROP_FILEPATH | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	NULL, NULL, NULL, NULL, NULL, NULL, 1024, "Path"
};

BoolPropertyRNA rna_BlendDataTexts_load_internal = {
	{(PropertyRNA *)&rna_BlendDataTexts_load_text, (PropertyRNA *)&rna_BlendDataTexts_load_filepath,
	-1, "internal", 3, "Make internal",
	"Make text file internal after loading",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

PointerPropertyRNA rna_BlendDataTexts_load_text = {
	{NULL, (PropertyRNA *)&rna_BlendDataTexts_load_internal,
	-1, "text", 8388616, "",
	"New text datablock",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	NULL, NULL, NULL, NULL,&RNA_Text
};

FunctionRNA rna_BlendDataTexts_load_func = {
	{(FunctionRNA *)&rna_BlendDataTexts_tag_func, (FunctionRNA *)&rna_BlendDataTexts_remove_func,
	NULL,
	{(PropertyRNA *)&rna_BlendDataTexts_load_filepath, (PropertyRNA *)&rna_BlendDataTexts_load_text}},
	"load", 16, "Add a new text to the main database from a file",
	BlendDataTexts_load_call,
	(PropertyRNA *)&rna_BlendDataTexts_load_text
};

BoolPropertyRNA rna_BlendDataTexts_tag_value = {
	{NULL, NULL,
	-1, "value", 7, "Value",
	"",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

FunctionRNA rna_BlendDataTexts_tag_func = {
	{NULL, (FunctionRNA *)&rna_BlendDataTexts_load_func,
	NULL,
	{(PropertyRNA *)&rna_BlendDataTexts_tag_value, (PropertyRNA *)&rna_BlendDataTexts_tag_value}},
	"tag", 0, "tag",
	BlendDataTexts_tag_call,
	NULL
};

StructRNA RNA_BlendDataTexts = {
	{(ContainerRNA *)&RNA_BlendDataSpeakers, (ContainerRNA *)&RNA_BlendDataGroups,
	NULL,
	{(PropertyRNA *)&rna_BlendDataTexts_rna_properties, (PropertyRNA *)&rna_BlendDataTexts_is_updated}},
	"BlendDataTexts", NULL, NULL, 4, "Main Texts",
	"Collection of texts",
	"*", 17,
	NULL, (PropertyRNA *)&rna_BlendDataTexts_rna_properties,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	{(FunctionRNA *)&rna_BlendDataTexts_new_func, (FunctionRNA *)&rna_BlendDataTexts_tag_func}
};

/* Main Speakers */
CollectionPropertyRNA rna_BlendDataSpeakers_rna_properties = {
	{(PropertyRNA *)&rna_BlendDataSpeakers_rna_type, NULL,
	-1, "rna_properties", 128, "Properties",
	"RNA property collection",
	0, "*",
	PROP_COLLECTION, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	BlendDataSpeakers_rna_properties_begin, BlendDataSpeakers_rna_properties_next, BlendDataSpeakers_rna_properties_end, BlendDataSpeakers_rna_properties_get, NULL, NULL, BlendDataSpeakers_rna_properties_lookup_string, NULL, &RNA_Property
};

PointerPropertyRNA rna_BlendDataSpeakers_rna_type = {
	{(PropertyRNA *)&rna_BlendDataSpeakers_is_updated, (PropertyRNA *)&rna_BlendDataSpeakers_rna_properties,
	-1, "rna_type", 8912896, "RNA",
	"RNA type definition",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	BlendDataSpeakers_rna_type_get, NULL, NULL, NULL,&RNA_Struct
};

BoolPropertyRNA rna_BlendDataSpeakers_is_updated = {
	{NULL, (PropertyRNA *)&rna_BlendDataSpeakers_rna_type,
	-1, "is_updated", 2, "is_updated",
	"",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	BlendDataSpeakers_is_updated_get, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

StringPropertyRNA rna_BlendDataSpeakers_new_name = {
	{(PropertyRNA *)&rna_BlendDataSpeakers_new_speaker, NULL,
	-1, "name", 262149, "",
	"New name for the datablock",
	0, "*",
	PROP_STRING, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	NULL, NULL, NULL, NULL, NULL, NULL, 0, "Speaker"
};

PointerPropertyRNA rna_BlendDataSpeakers_new_speaker = {
	{NULL, (PropertyRNA *)&rna_BlendDataSpeakers_new_name,
	-1, "speaker", 8388616, "",
	"New speaker datablock",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	NULL, NULL, NULL, NULL,&RNA_Speaker
};

FunctionRNA rna_BlendDataSpeakers_new_func = {
	{(FunctionRNA *)&rna_BlendDataSpeakers_remove_func, NULL,
	NULL,
	{(PropertyRNA *)&rna_BlendDataSpeakers_new_name, (PropertyRNA *)&rna_BlendDataSpeakers_new_speaker}},
	"new", 0, "Add a new speaker to the main database",
	BlendDataSpeakers_new_call,
	(PropertyRNA *)&rna_BlendDataSpeakers_new_speaker
};

PointerPropertyRNA rna_BlendDataSpeakers_remove_speaker = {
	{NULL, NULL,
	-1, "speaker", 264196, "",
	"Speaker to remove",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	NULL, NULL, NULL, NULL,&RNA_Speaker
};

FunctionRNA rna_BlendDataSpeakers_remove_func = {
	{(FunctionRNA *)&rna_BlendDataSpeakers_tag_func, (FunctionRNA *)&rna_BlendDataSpeakers_new_func,
	NULL,
	{(PropertyRNA *)&rna_BlendDataSpeakers_remove_speaker, (PropertyRNA *)&rna_BlendDataSpeakers_remove_speaker}},
	"remove", 16, "Remove a speaker from the current blendfile",
	BlendDataSpeakers_remove_call,
	NULL
};

BoolPropertyRNA rna_BlendDataSpeakers_tag_value = {
	{NULL, NULL,
	-1, "value", 7, "Value",
	"",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

FunctionRNA rna_BlendDataSpeakers_tag_func = {
	{NULL, (FunctionRNA *)&rna_BlendDataSpeakers_remove_func,
	NULL,
	{(PropertyRNA *)&rna_BlendDataSpeakers_tag_value, (PropertyRNA *)&rna_BlendDataSpeakers_tag_value}},
	"tag", 0, "tag",
	BlendDataSpeakers_tag_call,
	NULL
};

StructRNA RNA_BlendDataSpeakers = {
	{(ContainerRNA *)&RNA_BlendDataSounds, (ContainerRNA *)&RNA_BlendDataTexts,
	NULL,
	{(PropertyRNA *)&rna_BlendDataSpeakers_rna_properties, (PropertyRNA *)&rna_BlendDataSpeakers_is_updated}},
	"BlendDataSpeakers", NULL, NULL, 4, "Main Speakers",
	"Collection of speakers",
	"*", 17,
	NULL, (PropertyRNA *)&rna_BlendDataSpeakers_rna_properties,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	{(FunctionRNA *)&rna_BlendDataSpeakers_new_func, (FunctionRNA *)&rna_BlendDataSpeakers_tag_func}
};

/* Main Sounds */
CollectionPropertyRNA rna_BlendDataSounds_rna_properties = {
	{(PropertyRNA *)&rna_BlendDataSounds_rna_type, NULL,
	-1, "rna_properties", 128, "Properties",
	"RNA property collection",
	0, "*",
	PROP_COLLECTION, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	BlendDataSounds_rna_properties_begin, BlendDataSounds_rna_properties_next, BlendDataSounds_rna_properties_end, BlendDataSounds_rna_properties_get, NULL, NULL, BlendDataSounds_rna_properties_lookup_string, NULL, &RNA_Property
};

PointerPropertyRNA rna_BlendDataSounds_rna_type = {
	{(PropertyRNA *)&rna_BlendDataSounds_is_updated, (PropertyRNA *)&rna_BlendDataSounds_rna_properties,
	-1, "rna_type", 8912896, "RNA",
	"RNA type definition",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	BlendDataSounds_rna_type_get, NULL, NULL, NULL,&RNA_Struct
};

BoolPropertyRNA rna_BlendDataSounds_is_updated = {
	{NULL, (PropertyRNA *)&rna_BlendDataSounds_rna_type,
	-1, "is_updated", 2, "is_updated",
	"",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	BlendDataSounds_is_updated_get, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_BlendDataSounds_tag_value = {
	{NULL, NULL,
	-1, "value", 7, "Value",
	"",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

FunctionRNA rna_BlendDataSounds_tag_func = {
	{NULL, NULL,
	NULL,
	{(PropertyRNA *)&rna_BlendDataSounds_tag_value, (PropertyRNA *)&rna_BlendDataSounds_tag_value}},
	"tag", 0, "tag",
	BlendDataSounds_tag_call,
	NULL
};

StructRNA RNA_BlendDataSounds = {
	{(ContainerRNA *)&RNA_BlendDataArmatures, (ContainerRNA *)&RNA_BlendDataSpeakers,
	NULL,
	{(PropertyRNA *)&rna_BlendDataSounds_rna_properties, (PropertyRNA *)&rna_BlendDataSounds_is_updated}},
	"BlendDataSounds", NULL, NULL, 4, "Main Sounds",
	"Collection of sounds",
	"*", 17,
	NULL, (PropertyRNA *)&rna_BlendDataSounds_rna_properties,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	{(FunctionRNA *)&rna_BlendDataSounds_tag_func, (FunctionRNA *)&rna_BlendDataSounds_tag_func}
};

/* Main Armatures */
CollectionPropertyRNA rna_BlendDataArmatures_rna_properties = {
	{(PropertyRNA *)&rna_BlendDataArmatures_rna_type, NULL,
	-1, "rna_properties", 128, "Properties",
	"RNA property collection",
	0, "*",
	PROP_COLLECTION, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	BlendDataArmatures_rna_properties_begin, BlendDataArmatures_rna_properties_next, BlendDataArmatures_rna_properties_end, BlendDataArmatures_rna_properties_get, NULL, NULL, BlendDataArmatures_rna_properties_lookup_string, NULL, &RNA_Property
};

PointerPropertyRNA rna_BlendDataArmatures_rna_type = {
	{(PropertyRNA *)&rna_BlendDataArmatures_is_updated, (PropertyRNA *)&rna_BlendDataArmatures_rna_properties,
	-1, "rna_type", 8912896, "RNA",
	"RNA type definition",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	BlendDataArmatures_rna_type_get, NULL, NULL, NULL,&RNA_Struct
};

BoolPropertyRNA rna_BlendDataArmatures_is_updated = {
	{NULL, (PropertyRNA *)&rna_BlendDataArmatures_rna_type,
	-1, "is_updated", 2, "is_updated",
	"",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	BlendDataArmatures_is_updated_get, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

StringPropertyRNA rna_BlendDataArmatures_new_name = {
	{(PropertyRNA *)&rna_BlendDataArmatures_new_armature, NULL,
	-1, "name", 262149, "",
	"New name for the datablock",
	0, "*",
	PROP_STRING, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	NULL, NULL, NULL, NULL, NULL, NULL, 0, "Armature"
};

PointerPropertyRNA rna_BlendDataArmatures_new_armature = {
	{NULL, (PropertyRNA *)&rna_BlendDataArmatures_new_name,
	-1, "armature", 8388616, "",
	"New armature datablock",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	NULL, NULL, NULL, NULL,&RNA_Armature
};

FunctionRNA rna_BlendDataArmatures_new_func = {
	{(FunctionRNA *)&rna_BlendDataArmatures_remove_func, NULL,
	NULL,
	{(PropertyRNA *)&rna_BlendDataArmatures_new_name, (PropertyRNA *)&rna_BlendDataArmatures_new_armature}},
	"new", 0, "Add a new armature to the main database",
	BlendDataArmatures_new_call,
	(PropertyRNA *)&rna_BlendDataArmatures_new_armature
};

PointerPropertyRNA rna_BlendDataArmatures_remove_armature = {
	{NULL, NULL,
	-1, "armature", 264196, "",
	"Armature to remove",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	NULL, NULL, NULL, NULL,&RNA_Armature
};

FunctionRNA rna_BlendDataArmatures_remove_func = {
	{(FunctionRNA *)&rna_BlendDataArmatures_tag_func, (FunctionRNA *)&rna_BlendDataArmatures_new_func,
	NULL,
	{(PropertyRNA *)&rna_BlendDataArmatures_remove_armature, (PropertyRNA *)&rna_BlendDataArmatures_remove_armature}},
	"remove", 16, "Remove a armature from the current blendfile",
	BlendDataArmatures_remove_call,
	NULL
};

BoolPropertyRNA rna_BlendDataArmatures_tag_value = {
	{NULL, NULL,
	-1, "value", 7, "Value",
	"",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

FunctionRNA rna_BlendDataArmatures_tag_func = {
	{NULL, (FunctionRNA *)&rna_BlendDataArmatures_remove_func,
	NULL,
	{(PropertyRNA *)&rna_BlendDataArmatures_tag_value, (PropertyRNA *)&rna_BlendDataArmatures_tag_value}},
	"tag", 0, "tag",
	BlendDataArmatures_tag_call,
	NULL
};

StructRNA RNA_BlendDataArmatures = {
	{(ContainerRNA *)&RNA_BlendDataActions, (ContainerRNA *)&RNA_BlendDataSounds,
	NULL,
	{(PropertyRNA *)&rna_BlendDataArmatures_rna_properties, (PropertyRNA *)&rna_BlendDataArmatures_is_updated}},
	"BlendDataArmatures", NULL, NULL, 4, "Main Armatures",
	"Collection of armatures",
	"*", 17,
	NULL, (PropertyRNA *)&rna_BlendDataArmatures_rna_properties,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	{(FunctionRNA *)&rna_BlendDataArmatures_new_func, (FunctionRNA *)&rna_BlendDataArmatures_tag_func}
};

/* Main Actions */
CollectionPropertyRNA rna_BlendDataActions_rna_properties = {
	{(PropertyRNA *)&rna_BlendDataActions_rna_type, NULL,
	-1, "rna_properties", 128, "Properties",
	"RNA property collection",
	0, "*",
	PROP_COLLECTION, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	BlendDataActions_rna_properties_begin, BlendDataActions_rna_properties_next, BlendDataActions_rna_properties_end, BlendDataActions_rna_properties_get, NULL, NULL, BlendDataActions_rna_properties_lookup_string, NULL, &RNA_Property
};

PointerPropertyRNA rna_BlendDataActions_rna_type = {
	{(PropertyRNA *)&rna_BlendDataActions_is_updated, (PropertyRNA *)&rna_BlendDataActions_rna_properties,
	-1, "rna_type", 8912896, "RNA",
	"RNA type definition",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	BlendDataActions_rna_type_get, NULL, NULL, NULL,&RNA_Struct
};

BoolPropertyRNA rna_BlendDataActions_is_updated = {
	{NULL, (PropertyRNA *)&rna_BlendDataActions_rna_type,
	-1, "is_updated", 2, "is_updated",
	"",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	BlendDataActions_is_updated_get, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

StringPropertyRNA rna_BlendDataActions_new_name = {
	{(PropertyRNA *)&rna_BlendDataActions_new_action, NULL,
	-1, "name", 262149, "",
	"New name for the datablock",
	0, "*",
	PROP_STRING, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	NULL, NULL, NULL, NULL, NULL, NULL, 0, "Action"
};

PointerPropertyRNA rna_BlendDataActions_new_action = {
	{NULL, (PropertyRNA *)&rna_BlendDataActions_new_name,
	-1, "action", 8388616, "",
	"New action datablock",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	NULL, NULL, NULL, NULL,&RNA_Action
};

FunctionRNA rna_BlendDataActions_new_func = {
	{(FunctionRNA *)&rna_BlendDataActions_remove_func, NULL,
	NULL,
	{(PropertyRNA *)&rna_BlendDataActions_new_name, (PropertyRNA *)&rna_BlendDataActions_new_action}},
	"new", 0, "Add a new action to the main database",
	BlendDataActions_new_call,
	(PropertyRNA *)&rna_BlendDataActions_new_action
};

PointerPropertyRNA rna_BlendDataActions_remove_action = {
	{NULL, NULL,
	-1, "action", 264196, "",
	"Action to remove",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	NULL, NULL, NULL, NULL,&RNA_Action
};

FunctionRNA rna_BlendDataActions_remove_func = {
	{(FunctionRNA *)&rna_BlendDataActions_tag_func, (FunctionRNA *)&rna_BlendDataActions_new_func,
	NULL,
	{(PropertyRNA *)&rna_BlendDataActions_remove_action, (PropertyRNA *)&rna_BlendDataActions_remove_action}},
	"remove", 16, "Remove a action from the current blendfile",
	BlendDataActions_remove_call,
	NULL
};

BoolPropertyRNA rna_BlendDataActions_tag_value = {
	{NULL, NULL,
	-1, "value", 7, "Value",
	"",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

FunctionRNA rna_BlendDataActions_tag_func = {
	{NULL, (FunctionRNA *)&rna_BlendDataActions_remove_func,
	NULL,
	{(PropertyRNA *)&rna_BlendDataActions_tag_value, (PropertyRNA *)&rna_BlendDataActions_tag_value}},
	"tag", 0, "tag",
	BlendDataActions_tag_call,
	NULL
};

StructRNA RNA_BlendDataActions = {
	{(ContainerRNA *)&RNA_BlendDataParticles, (ContainerRNA *)&RNA_BlendDataArmatures,
	NULL,
	{(PropertyRNA *)&rna_BlendDataActions_rna_properties, (PropertyRNA *)&rna_BlendDataActions_is_updated}},
	"BlendDataActions", NULL, NULL, 4, "Main Actions",
	"Collection of actions",
	"*", 17,
	NULL, (PropertyRNA *)&rna_BlendDataActions_rna_properties,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	{(FunctionRNA *)&rna_BlendDataActions_new_func, (FunctionRNA *)&rna_BlendDataActions_tag_func}
};

/* Main Particle Settings */
CollectionPropertyRNA rna_BlendDataParticles_rna_properties = {
	{(PropertyRNA *)&rna_BlendDataParticles_rna_type, NULL,
	-1, "rna_properties", 128, "Properties",
	"RNA property collection",
	0, "*",
	PROP_COLLECTION, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	BlendDataParticles_rna_properties_begin, BlendDataParticles_rna_properties_next, BlendDataParticles_rna_properties_end, BlendDataParticles_rna_properties_get, NULL, NULL, BlendDataParticles_rna_properties_lookup_string, NULL, &RNA_Property
};

PointerPropertyRNA rna_BlendDataParticles_rna_type = {
	{(PropertyRNA *)&rna_BlendDataParticles_is_updated, (PropertyRNA *)&rna_BlendDataParticles_rna_properties,
	-1, "rna_type", 8912896, "RNA",
	"RNA type definition",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	BlendDataParticles_rna_type_get, NULL, NULL, NULL,&RNA_Struct
};

BoolPropertyRNA rna_BlendDataParticles_is_updated = {
	{NULL, (PropertyRNA *)&rna_BlendDataParticles_rna_type,
	-1, "is_updated", 2, "is_updated",
	"",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	BlendDataParticles_is_updated_get, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

StringPropertyRNA rna_BlendDataParticles_new_name = {
	{(PropertyRNA *)&rna_BlendDataParticles_new_particle, NULL,
	-1, "name", 262149, "",
	"New name for the datablock",
	0, "*",
	PROP_STRING, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	NULL, NULL, NULL, NULL, NULL, NULL, 0, "ParticleSettings"
};

PointerPropertyRNA rna_BlendDataParticles_new_particle = {
	{NULL, (PropertyRNA *)&rna_BlendDataParticles_new_name,
	-1, "particle", 8388616, "",
	"New particle settings datablock",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	NULL, NULL, NULL, NULL,&RNA_ParticleSettings
};

FunctionRNA rna_BlendDataParticles_new_func = {
	{(FunctionRNA *)&rna_BlendDataParticles_remove_func, NULL,
	NULL,
	{(PropertyRNA *)&rna_BlendDataParticles_new_name, (PropertyRNA *)&rna_BlendDataParticles_new_particle}},
	"new", 0, "Add a new particle settings instance to the main database",
	BlendDataParticles_new_call,
	(PropertyRNA *)&rna_BlendDataParticles_new_particle
};

PointerPropertyRNA rna_BlendDataParticles_remove_particle = {
	{NULL, NULL,
	-1, "particle", 264196, "",
	"Particle Settings to remove",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	NULL, NULL, NULL, NULL,&RNA_ParticleSettings
};

FunctionRNA rna_BlendDataParticles_remove_func = {
	{(FunctionRNA *)&rna_BlendDataParticles_tag_func, (FunctionRNA *)&rna_BlendDataParticles_new_func,
	NULL,
	{(PropertyRNA *)&rna_BlendDataParticles_remove_particle, (PropertyRNA *)&rna_BlendDataParticles_remove_particle}},
	"remove", 16, "Remove a particle settings instance from the current blendfile",
	BlendDataParticles_remove_call,
	NULL
};

BoolPropertyRNA rna_BlendDataParticles_tag_value = {
	{NULL, NULL,
	-1, "value", 7, "Value",
	"",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

FunctionRNA rna_BlendDataParticles_tag_func = {
	{NULL, (FunctionRNA *)&rna_BlendDataParticles_remove_func,
	NULL,
	{(PropertyRNA *)&rna_BlendDataParticles_tag_value, (PropertyRNA *)&rna_BlendDataParticles_tag_value}},
	"tag", 0, "tag",
	BlendDataParticles_tag_call,
	NULL
};

StructRNA RNA_BlendDataParticles = {
	{(ContainerRNA *)&RNA_BlendDataGreasePencils, (ContainerRNA *)&RNA_BlendDataActions,
	NULL,
	{(PropertyRNA *)&rna_BlendDataParticles_rna_properties, (PropertyRNA *)&rna_BlendDataParticles_is_updated}},
	"BlendDataParticles", NULL, NULL, 4, "Main Particle Settings",
	"Collection of particle settings",
	"*", 17,
	NULL, (PropertyRNA *)&rna_BlendDataParticles_rna_properties,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	{(FunctionRNA *)&rna_BlendDataParticles_new_func, (FunctionRNA *)&rna_BlendDataParticles_tag_func}
};

/* Main Grease Pencils */
CollectionPropertyRNA rna_BlendDataGreasePencils_rna_properties = {
	{(PropertyRNA *)&rna_BlendDataGreasePencils_rna_type, NULL,
	-1, "rna_properties", 128, "Properties",
	"RNA property collection",
	0, "*",
	PROP_COLLECTION, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	BlendDataGreasePencils_rna_properties_begin, BlendDataGreasePencils_rna_properties_next, BlendDataGreasePencils_rna_properties_end, BlendDataGreasePencils_rna_properties_get, NULL, NULL, BlendDataGreasePencils_rna_properties_lookup_string, NULL, &RNA_Property
};

PointerPropertyRNA rna_BlendDataGreasePencils_rna_type = {
	{(PropertyRNA *)&rna_BlendDataGreasePencils_is_updated, (PropertyRNA *)&rna_BlendDataGreasePencils_rna_properties,
	-1, "rna_type", 8912896, "RNA",
	"RNA type definition",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	BlendDataGreasePencils_rna_type_get, NULL, NULL, NULL,&RNA_Struct
};

BoolPropertyRNA rna_BlendDataGreasePencils_is_updated = {
	{NULL, (PropertyRNA *)&rna_BlendDataGreasePencils_rna_type,
	-1, "is_updated", 2, "is_updated",
	"",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	BlendDataGreasePencils_is_updated_get, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_BlendDataGreasePencils_tag_value = {
	{NULL, NULL,
	-1, "value", 7, "Value",
	"",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

FunctionRNA rna_BlendDataGreasePencils_tag_func = {
	{(FunctionRNA *)&rna_BlendDataGreasePencils_new_func, NULL,
	NULL,
	{(PropertyRNA *)&rna_BlendDataGreasePencils_tag_value, (PropertyRNA *)&rna_BlendDataGreasePencils_tag_value}},
	"tag", 0, "tag",
	BlendDataGreasePencils_tag_call,
	NULL
};

StringPropertyRNA rna_BlendDataGreasePencils_new_name = {
	{(PropertyRNA *)&rna_BlendDataGreasePencils_new_grease_pencil, NULL,
	-1, "name", 262149, "",
	"New name for the datablock",
	0, "*",
	PROP_STRING, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	NULL, NULL, NULL, NULL, NULL, NULL, 0, "GreasePencil"
};

PointerPropertyRNA rna_BlendDataGreasePencils_new_grease_pencil = {
	{NULL, (PropertyRNA *)&rna_BlendDataGreasePencils_new_name,
	-1, "grease_pencil", 8388616, "",
	"New grease pencil datablock",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	NULL, NULL, NULL, NULL,&RNA_GreasePencil
};

FunctionRNA rna_BlendDataGreasePencils_new_func = {
	{(FunctionRNA *)&rna_BlendDataGreasePencils_remove_func, (FunctionRNA *)&rna_BlendDataGreasePencils_tag_func,
	NULL,
	{(PropertyRNA *)&rna_BlendDataGreasePencils_new_name, (PropertyRNA *)&rna_BlendDataGreasePencils_new_grease_pencil}},
	"new", 1, "new",
	BlendDataGreasePencils_new_call,
	(PropertyRNA *)&rna_BlendDataGreasePencils_new_grease_pencil
};

PointerPropertyRNA rna_BlendDataGreasePencils_remove_grease_pencil = {
	{NULL, NULL,
	-1, "grease_pencil", 264196, "",
	"Grease Pencil to remove",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	NULL, NULL, NULL, NULL,&RNA_GreasePencil
};

FunctionRNA rna_BlendDataGreasePencils_remove_func = {
	{NULL, (FunctionRNA *)&rna_BlendDataGreasePencils_new_func,
	NULL,
	{(PropertyRNA *)&rna_BlendDataGreasePencils_remove_grease_pencil, (PropertyRNA *)&rna_BlendDataGreasePencils_remove_grease_pencil}},
	"remove", 16, "Remove a grease pencil instance from the current blendfile",
	BlendDataGreasePencils_remove_call,
	NULL
};

StructRNA RNA_BlendDataGreasePencils = {
	{(ContainerRNA *)&RNA_BlendDataMovieClips, (ContainerRNA *)&RNA_BlendDataParticles,
	NULL,
	{(PropertyRNA *)&rna_BlendDataGreasePencils_rna_properties, (PropertyRNA *)&rna_BlendDataGreasePencils_is_updated}},
	"BlendDataGreasePencils", NULL, NULL, 4, "Main Grease Pencils",
	"Collection of grease pencils",
	"*", 17,
	NULL, (PropertyRNA *)&rna_BlendDataGreasePencils_rna_properties,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	{(FunctionRNA *)&rna_BlendDataGreasePencils_tag_func, (FunctionRNA *)&rna_BlendDataGreasePencils_remove_func}
};

/* Main Movie Clips */
CollectionPropertyRNA rna_BlendDataMovieClips_rna_properties = {
	{(PropertyRNA *)&rna_BlendDataMovieClips_rna_type, NULL,
	-1, "rna_properties", 128, "Properties",
	"RNA property collection",
	0, "*",
	PROP_COLLECTION, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	BlendDataMovieClips_rna_properties_begin, BlendDataMovieClips_rna_properties_next, BlendDataMovieClips_rna_properties_end, BlendDataMovieClips_rna_properties_get, NULL, NULL, BlendDataMovieClips_rna_properties_lookup_string, NULL, &RNA_Property
};

PointerPropertyRNA rna_BlendDataMovieClips_rna_type = {
	{NULL, (PropertyRNA *)&rna_BlendDataMovieClips_rna_properties,
	-1, "rna_type", 8912896, "RNA",
	"RNA type definition",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	BlendDataMovieClips_rna_type_get, NULL, NULL, NULL,&RNA_Struct
};

BoolPropertyRNA rna_BlendDataMovieClips_tag_value = {
	{NULL, NULL,
	-1, "value", 7, "Value",
	"",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

FunctionRNA rna_BlendDataMovieClips_tag_func = {
	{(FunctionRNA *)&rna_BlendDataMovieClips_remove_func, NULL,
	NULL,
	{(PropertyRNA *)&rna_BlendDataMovieClips_tag_value, (PropertyRNA *)&rna_BlendDataMovieClips_tag_value}},
	"tag", 0, "tag",
	BlendDataMovieClips_tag_call,
	NULL
};

PointerPropertyRNA rna_BlendDataMovieClips_remove_clip = {
	{NULL, NULL,
	-1, "clip", 264196, "",
	"Movie clip to remove",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	NULL, NULL, NULL, NULL,&RNA_MovieClip
};

FunctionRNA rna_BlendDataMovieClips_remove_func = {
	{(FunctionRNA *)&rna_BlendDataMovieClips_load_func, (FunctionRNA *)&rna_BlendDataMovieClips_tag_func,
	NULL,
	{(PropertyRNA *)&rna_BlendDataMovieClips_remove_clip, (PropertyRNA *)&rna_BlendDataMovieClips_remove_clip}},
	"remove", 0, "Remove a movie clip from the current blendfile.",
	BlendDataMovieClips_remove_call,
	NULL
};

StringPropertyRNA rna_BlendDataMovieClips_load_filepath = {
	{(PropertyRNA *)&rna_BlendDataMovieClips_load_clip, NULL,
	-1, "filepath", 262149, "",
	"path for the datablock",
	0, "*",
	PROP_STRING, PROP_FILEPATH | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	NULL, NULL, NULL, NULL, NULL, NULL, 1024, "Path"
};

PointerPropertyRNA rna_BlendDataMovieClips_load_clip = {
	{NULL, (PropertyRNA *)&rna_BlendDataMovieClips_load_filepath,
	-1, "clip", 8388616, "",
	"New movie clip datablock",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	NULL, NULL, NULL, NULL,&RNA_MovieClip
};

FunctionRNA rna_BlendDataMovieClips_load_func = {
	{NULL, (FunctionRNA *)&rna_BlendDataMovieClips_remove_func,
	NULL,
	{(PropertyRNA *)&rna_BlendDataMovieClips_load_filepath, (PropertyRNA *)&rna_BlendDataMovieClips_load_clip}},
	"load", 16, "Add a new movie clip to the main database from a file",
	BlendDataMovieClips_load_call,
	(PropertyRNA *)&rna_BlendDataMovieClips_load_clip
};

StructRNA RNA_BlendDataMovieClips = {
	{(ContainerRNA *)&RNA_BlendDataMasks, (ContainerRNA *)&RNA_BlendDataGreasePencils,
	NULL,
	{(PropertyRNA *)&rna_BlendDataMovieClips_rna_properties, (PropertyRNA *)&rna_BlendDataMovieClips_rna_type}},
	"BlendDataMovieClips", NULL, NULL, 4, "Main Movie Clips",
	"Collection of movie clips",
	"*", 17,
	NULL, (PropertyRNA *)&rna_BlendDataMovieClips_rna_properties,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	{(FunctionRNA *)&rna_BlendDataMovieClips_tag_func, (FunctionRNA *)&rna_BlendDataMovieClips_load_func}
};

/* Main Masks */
CollectionPropertyRNA rna_BlendDataMasks_rna_properties = {
	{(PropertyRNA *)&rna_BlendDataMasks_rna_type, NULL,
	-1, "rna_properties", 128, "Properties",
	"RNA property collection",
	0, "*",
	PROP_COLLECTION, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	BlendDataMasks_rna_properties_begin, BlendDataMasks_rna_properties_next, BlendDataMasks_rna_properties_end, BlendDataMasks_rna_properties_get, NULL, NULL, BlendDataMasks_rna_properties_lookup_string, NULL, &RNA_Property
};

PointerPropertyRNA rna_BlendDataMasks_rna_type = {
	{NULL, (PropertyRNA *)&rna_BlendDataMasks_rna_properties,
	-1, "rna_type", 8912896, "RNA",
	"RNA type definition",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	BlendDataMasks_rna_type_get, NULL, NULL, NULL,&RNA_Struct
};

BoolPropertyRNA rna_BlendDataMasks_tag_value = {
	{NULL, NULL,
	-1, "value", 7, "Value",
	"",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

FunctionRNA rna_BlendDataMasks_tag_func = {
	{(FunctionRNA *)&rna_BlendDataMasks_new_func, NULL,
	NULL,
	{(PropertyRNA *)&rna_BlendDataMasks_tag_value, (PropertyRNA *)&rna_BlendDataMasks_tag_value}},
	"tag", 0, "tag",
	BlendDataMasks_tag_call,
	NULL
};

StringPropertyRNA rna_BlendDataMasks_new_name = {
	{(PropertyRNA *)&rna_BlendDataMasks_new_mask, NULL,
	-1, "name", 262145, "Mask",
	"Name of new mask datablock",
	0, "*",
	PROP_STRING, PROP_FILEPATH | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	NULL, NULL, NULL, NULL, NULL, NULL, 64, ""
};

PointerPropertyRNA rna_BlendDataMasks_new_mask = {
	{NULL, (PropertyRNA *)&rna_BlendDataMasks_new_name,
	-1, "mask", 8388616, "",
	"New mask datablock",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	NULL, NULL, NULL, NULL,&RNA_Mask
};

FunctionRNA rna_BlendDataMasks_new_func = {
	{(FunctionRNA *)&rna_BlendDataMasks_remove_func, (FunctionRNA *)&rna_BlendDataMasks_tag_func,
	NULL,
	{(PropertyRNA *)&rna_BlendDataMasks_new_name, (PropertyRNA *)&rna_BlendDataMasks_new_mask}},
	"new", 0, "Add a new mask with a given name to the main database",
	BlendDataMasks_new_call,
	(PropertyRNA *)&rna_BlendDataMasks_new_mask
};

PointerPropertyRNA rna_BlendDataMasks_remove_mask = {
	{NULL, NULL,
	-1, "mask", 264196, "",
	"Mask to remove",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	NULL, NULL, NULL, NULL,&RNA_Mask
};

FunctionRNA rna_BlendDataMasks_remove_func = {
	{NULL, (FunctionRNA *)&rna_BlendDataMasks_new_func,
	NULL,
	{(PropertyRNA *)&rna_BlendDataMasks_remove_mask, (PropertyRNA *)&rna_BlendDataMasks_remove_mask}},
	"remove", 0, "Remove a masks from the current blendfile.",
	BlendDataMasks_remove_call,
	NULL
};

StructRNA RNA_BlendDataMasks = {
	{(ContainerRNA *)&RNA_BlendDataLineStyles, (ContainerRNA *)&RNA_BlendDataMovieClips,
	NULL,
	{(PropertyRNA *)&rna_BlendDataMasks_rna_properties, (PropertyRNA *)&rna_BlendDataMasks_rna_type}},
	"BlendDataMasks", NULL, NULL, 4, "Main Masks",
	"Collection of masks",
	"*", 17,
	NULL, (PropertyRNA *)&rna_BlendDataMasks_rna_properties,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	{(FunctionRNA *)&rna_BlendDataMasks_tag_func, (FunctionRNA *)&rna_BlendDataMasks_remove_func}
};

/* Main Line Styles */
CollectionPropertyRNA rna_BlendDataLineStyles_rna_properties = {
	{(PropertyRNA *)&rna_BlendDataLineStyles_rna_type, NULL,
	-1, "rna_properties", 128, "Properties",
	"RNA property collection",
	0, "*",
	PROP_COLLECTION, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	BlendDataLineStyles_rna_properties_begin, BlendDataLineStyles_rna_properties_next, BlendDataLineStyles_rna_properties_end, BlendDataLineStyles_rna_properties_get, NULL, NULL, BlendDataLineStyles_rna_properties_lookup_string, NULL, &RNA_Property
};

PointerPropertyRNA rna_BlendDataLineStyles_rna_type = {
	{(PropertyRNA *)&rna_BlendDataLineStyles_is_updated, (PropertyRNA *)&rna_BlendDataLineStyles_rna_properties,
	-1, "rna_type", 8912896, "RNA",
	"RNA type definition",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	BlendDataLineStyles_rna_type_get, NULL, NULL, NULL,&RNA_Struct
};

BoolPropertyRNA rna_BlendDataLineStyles_is_updated = {
	{NULL, (PropertyRNA *)&rna_BlendDataLineStyles_rna_type,
	-1, "is_updated", 2, "is_updated",
	"",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	BlendDataLineStyles_is_updated_get, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_BlendDataLineStyles_tag_value = {
	{NULL, NULL,
	-1, "value", 7, "Value",
	"",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

FunctionRNA rna_BlendDataLineStyles_tag_func = {
	{(FunctionRNA *)&rna_BlendDataLineStyles_new_func, NULL,
	NULL,
	{(PropertyRNA *)&rna_BlendDataLineStyles_tag_value, (PropertyRNA *)&rna_BlendDataLineStyles_tag_value}},
	"tag", 0, "tag",
	BlendDataLineStyles_tag_call,
	NULL
};

StringPropertyRNA rna_BlendDataLineStyles_new_name = {
	{(PropertyRNA *)&rna_BlendDataLineStyles_new_linestyle, NULL,
	-1, "name", 262149, "",
	"New name for the datablock",
	0, "*",
	PROP_STRING, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	NULL, NULL, NULL, NULL, NULL, NULL, 0, "FreestyleLineStyle"
};

PointerPropertyRNA rna_BlendDataLineStyles_new_linestyle = {
	{NULL, (PropertyRNA *)&rna_BlendDataLineStyles_new_name,
	-1, "linestyle", 8388616, "",
	"New line style datablock",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	NULL, NULL, NULL, NULL,&RNA_FreestyleLineStyle
};

FunctionRNA rna_BlendDataLineStyles_new_func = {
	{(FunctionRNA *)&rna_BlendDataLineStyles_remove_func, (FunctionRNA *)&rna_BlendDataLineStyles_tag_func,
	NULL,
	{(PropertyRNA *)&rna_BlendDataLineStyles_new_name, (PropertyRNA *)&rna_BlendDataLineStyles_new_linestyle}},
	"new", 0, "Add a new line style instance to the main database",
	BlendDataLineStyles_new_call,
	(PropertyRNA *)&rna_BlendDataLineStyles_new_linestyle
};

PointerPropertyRNA rna_BlendDataLineStyles_remove_linestyle = {
	{NULL, NULL,
	-1, "linestyle", 8388612, "",
	"Line style to remove",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	NULL, NULL, NULL, NULL,&RNA_FreestyleLineStyle
};

FunctionRNA rna_BlendDataLineStyles_remove_func = {
	{NULL, (FunctionRNA *)&rna_BlendDataLineStyles_new_func,
	NULL,
	{(PropertyRNA *)&rna_BlendDataLineStyles_remove_linestyle, (PropertyRNA *)&rna_BlendDataLineStyles_remove_linestyle}},
	"remove", 16, "Remove a line style instance from the current blendfile",
	BlendDataLineStyles_remove_call,
	NULL
};

StructRNA RNA_BlendDataLineStyles = {
	{(ContainerRNA *)&RNA_Material, (ContainerRNA *)&RNA_BlendDataMasks,
	NULL,
	{(PropertyRNA *)&rna_BlendDataLineStyles_rna_properties, (PropertyRNA *)&rna_BlendDataLineStyles_is_updated}},
	"BlendDataLineStyles", NULL, NULL, 4, "Main Line Styles",
	"Collection of line styles",
	"*", 17,
	NULL, (PropertyRNA *)&rna_BlendDataLineStyles_rna_properties,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	{(FunctionRNA *)&rna_BlendDataLineStyles_tag_func, (FunctionRNA *)&rna_BlendDataLineStyles_remove_func}
};

