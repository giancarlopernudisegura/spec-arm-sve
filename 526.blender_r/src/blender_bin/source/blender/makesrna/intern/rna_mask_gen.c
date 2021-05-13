
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

#include "rna_mask.c"

#pragma GCC diagnostic ignored "-Wunused-parameter"

/* Autogenerated Functions */


CollectionPropertyRNA rna_MaskParent_rna_properties;
PointerPropertyRNA rna_MaskParent_rna_type;
PointerPropertyRNA rna_MaskParent_id;
EnumPropertyRNA rna_MaskParent_id_type;
EnumPropertyRNA rna_MaskParent_type;
StringPropertyRNA rna_MaskParent_parent;
StringPropertyRNA rna_MaskParent_sub_parent;


CollectionPropertyRNA rna_MaskSplinePointUW_rna_properties;
PointerPropertyRNA rna_MaskSplinePointUW_rna_type;
FloatPropertyRNA rna_MaskSplinePointUW_u;
FloatPropertyRNA rna_MaskSplinePointUW_weight;
BoolPropertyRNA rna_MaskSplinePointUW_select;


CollectionPropertyRNA rna_MaskSplinePoint_rna_properties;
PointerPropertyRNA rna_MaskSplinePoint_rna_type;
FloatPropertyRNA rna_MaskSplinePoint_handle_left;
FloatPropertyRNA rna_MaskSplinePoint_co;
FloatPropertyRNA rna_MaskSplinePoint_handle_right;
EnumPropertyRNA rna_MaskSplinePoint_handle_type;
EnumPropertyRNA rna_MaskSplinePoint_handle_left_type;
EnumPropertyRNA rna_MaskSplinePoint_handle_right_type;
FloatPropertyRNA rna_MaskSplinePoint_weight;
BoolPropertyRNA rna_MaskSplinePoint_select;
PointerPropertyRNA rna_MaskSplinePoint_parent;
CollectionPropertyRNA rna_MaskSplinePoint_feather_points;


CollectionPropertyRNA rna_MaskSpline_rna_properties;
PointerPropertyRNA rna_MaskSpline_rna_type;
EnumPropertyRNA rna_MaskSpline_offset_mode;
EnumPropertyRNA rna_MaskSpline_weight_interpolation;
BoolPropertyRNA rna_MaskSpline_use_cyclic;
BoolPropertyRNA rna_MaskSpline_use_fill;
BoolPropertyRNA rna_MaskSpline_use_self_intersection_check;
CollectionPropertyRNA rna_MaskSpline_points;


CollectionPropertyRNA rna_MaskSplines_rna_properties;
PointerPropertyRNA rna_MaskSplines_rna_type;
PointerPropertyRNA rna_MaskSplines_active;
PointerPropertyRNA rna_MaskSplines_active_point;

extern FunctionRNA rna_MaskSplines_new_func;
extern PointerPropertyRNA rna_MaskSplines_new_spline;

extern FunctionRNA rna_MaskSplines_remove_func;
extern PointerPropertyRNA rna_MaskSplines_remove_spline;



CollectionPropertyRNA rna_MaskSplinePoints_rna_properties;
PointerPropertyRNA rna_MaskSplinePoints_rna_type;

extern FunctionRNA rna_MaskSplinePoints_add_func;
extern IntPropertyRNA rna_MaskSplinePoints_add_count;

extern FunctionRNA rna_MaskSplinePoints_remove_func;
extern PointerPropertyRNA rna_MaskSplinePoints_remove_point;



CollectionPropertyRNA rna_MaskLayer_rna_properties;
PointerPropertyRNA rna_MaskLayer_rna_type;
StringPropertyRNA rna_MaskLayer_name;
CollectionPropertyRNA rna_MaskLayer_splines;
BoolPropertyRNA rna_MaskLayer_hide;
BoolPropertyRNA rna_MaskLayer_hide_select;
BoolPropertyRNA rna_MaskLayer_hide_render;
BoolPropertyRNA rna_MaskLayer_select;
FloatPropertyRNA rna_MaskLayer_alpha;
EnumPropertyRNA rna_MaskLayer_blend;
BoolPropertyRNA rna_MaskLayer_invert;
EnumPropertyRNA rna_MaskLayer_falloff;
BoolPropertyRNA rna_MaskLayer_use_fill_holes;
BoolPropertyRNA rna_MaskLayer_use_fill_overlap;


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

CollectionPropertyRNA rna_Mask_layers;
IntPropertyRNA rna_Mask_active_layer_index;
IntPropertyRNA rna_Mask_frame_start;
IntPropertyRNA rna_Mask_frame_end;
PointerPropertyRNA rna_Mask_animation_data;

extern FunctionRNA rna_ID_copy_func;
extern PointerPropertyRNA rna_ID_copy_id;

extern FunctionRNA rna_ID_user_clear_func;
extern FunctionRNA rna_ID_animation_data_create_func;
extern PointerPropertyRNA rna_ID_animation_data_create_anim_data;

extern FunctionRNA rna_ID_animation_data_clear_func;
extern FunctionRNA rna_ID_update_tag_func;
extern EnumPropertyRNA rna_ID_update_tag_refresh;



CollectionPropertyRNA rna_MaskLayers_rna_properties;
PointerPropertyRNA rna_MaskLayers_rna_type;
PointerPropertyRNA rna_MaskLayers_active;

extern FunctionRNA rna_MaskLayers_new_func;
extern StringPropertyRNA rna_MaskLayers_new_name;
extern PointerPropertyRNA rna_MaskLayers_new_layer;

extern FunctionRNA rna_MaskLayers_remove_func;
extern PointerPropertyRNA rna_MaskLayers_remove_layer;

extern FunctionRNA rna_MaskLayers_clear_func;

static PointerRNA MaskParent_rna_properties_get(CollectionPropertyIterator *iter)
{
	return rna_builtin_properties_get(iter);
}

void MaskParent_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

	memset(iter, 0, sizeof(*iter));
	iter->parent = *ptr;
	iter->prop = (PropertyRNA *)&rna_MaskParent_rna_properties;

	rna_builtin_properties_begin(iter, ptr);

	if (iter->valid)
		iter->ptr = MaskParent_rna_properties_get(iter);
}

void MaskParent_rna_properties_next(CollectionPropertyIterator *iter)
{
	rna_builtin_properties_next(iter);

	if (iter->valid)
		iter->ptr = MaskParent_rna_properties_get(iter);
}

void MaskParent_rna_properties_end(CollectionPropertyIterator *iter)
{
	rna_iterator_listbase_end(iter);
}

int MaskParent_rna_properties_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
	return rna_builtin_properties_lookup_string(ptr, key, r_ptr);
}

PointerRNA MaskParent_rna_type_get(PointerRNA *ptr)
{
	return rna_builtin_type_get(ptr);
}

PointerRNA MaskParent_id_get(PointerRNA *ptr)
{
	MaskParent *data = (MaskParent *)(ptr->data);
	return rna_pointer_inherit_refine(ptr, &RNA_ID, data->id);
}

void MaskParent_id_set(PointerRNA *ptr, PointerRNA value)
{
	rna_MaskParent_id_set(ptr, value);
}

int MaskParent_id_type_get(PointerRNA *ptr)
{
	MaskParent *data = (MaskParent *)(ptr->data);
	return (int)(data->id_type);
}

void MaskParent_id_type_set(PointerRNA *ptr, int value)
{
	rna_MaskParent_id_type_set(ptr, value);
}

int MaskParent_type_get(PointerRNA *ptr)
{
	MaskParent *data = (MaskParent *)(ptr->data);
	return (int)(data->type);
}

void MaskParent_type_set(PointerRNA *ptr, int value)
{
	MaskParent *data = (MaskParent *)(ptr->data);
	data->type = value;
}

void MaskParent_parent_get(PointerRNA *ptr, char *value)
{
	MaskParent *data = (MaskParent *)(ptr->data);
	BLI_strncpy_utf8(value, data->parent, 64);
}

int MaskParent_parent_length(PointerRNA *ptr)
{
	MaskParent *data = (MaskParent *)(ptr->data);
	return strlen(data->parent);
}

void MaskParent_parent_set(PointerRNA *ptr, const char *value)
{
	MaskParent *data = (MaskParent *)(ptr->data);
	BLI_strncpy_utf8(data->parent, value, 64);
}

void MaskParent_sub_parent_get(PointerRNA *ptr, char *value)
{
	MaskParent *data = (MaskParent *)(ptr->data);
	BLI_strncpy_utf8(value, data->sub_parent, 64);
}

int MaskParent_sub_parent_length(PointerRNA *ptr)
{
	MaskParent *data = (MaskParent *)(ptr->data);
	return strlen(data->sub_parent);
}

void MaskParent_sub_parent_set(PointerRNA *ptr, const char *value)
{
	MaskParent *data = (MaskParent *)(ptr->data);
	BLI_strncpy_utf8(data->sub_parent, value, 64);
}

static PointerRNA MaskSplinePointUW_rna_properties_get(CollectionPropertyIterator *iter)
{
	return rna_builtin_properties_get(iter);
}

void MaskSplinePointUW_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

	memset(iter, 0, sizeof(*iter));
	iter->parent = *ptr;
	iter->prop = (PropertyRNA *)&rna_MaskSplinePointUW_rna_properties;

	rna_builtin_properties_begin(iter, ptr);

	if (iter->valid)
		iter->ptr = MaskSplinePointUW_rna_properties_get(iter);
}

void MaskSplinePointUW_rna_properties_next(CollectionPropertyIterator *iter)
{
	rna_builtin_properties_next(iter);

	if (iter->valid)
		iter->ptr = MaskSplinePointUW_rna_properties_get(iter);
}

void MaskSplinePointUW_rna_properties_end(CollectionPropertyIterator *iter)
{
	rna_iterator_listbase_end(iter);
}

int MaskSplinePointUW_rna_properties_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
	return rna_builtin_properties_lookup_string(ptr, key, r_ptr);
}

PointerRNA MaskSplinePointUW_rna_type_get(PointerRNA *ptr)
{
	return rna_builtin_type_get(ptr);
}

float MaskSplinePointUW_u_get(PointerRNA *ptr)
{
	MaskSplinePointUW *data = (MaskSplinePointUW *)(ptr->data);
	return (float)(data->u);
}

void MaskSplinePointUW_u_set(PointerRNA *ptr, float value)
{
	MaskSplinePointUW *data = (MaskSplinePointUW *)(ptr->data);
	data->u = CLAMPIS(value, 0.0f, 1.0f);
}

float MaskSplinePointUW_weight_get(PointerRNA *ptr)
{
	MaskSplinePointUW *data = (MaskSplinePointUW *)(ptr->data);
	return (float)(data->w);
}

void MaskSplinePointUW_weight_set(PointerRNA *ptr, float value)
{
	MaskSplinePointUW *data = (MaskSplinePointUW *)(ptr->data);
	data->w = CLAMPIS(value, 0.0f, 1.0f);
}

int MaskSplinePointUW_select_get(PointerRNA *ptr)
{
	MaskSplinePointUW *data = (MaskSplinePointUW *)(ptr->data);
	return (((data->flag) & 1) != 0);
}

void MaskSplinePointUW_select_set(PointerRNA *ptr, int value)
{
	MaskSplinePointUW *data = (MaskSplinePointUW *)(ptr->data);
	if (value) data->flag |= 1;
	else data->flag &= ~1;
}

static PointerRNA MaskSplinePoint_rna_properties_get(CollectionPropertyIterator *iter)
{
	return rna_builtin_properties_get(iter);
}

void MaskSplinePoint_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

	memset(iter, 0, sizeof(*iter));
	iter->parent = *ptr;
	iter->prop = (PropertyRNA *)&rna_MaskSplinePoint_rna_properties;

	rna_builtin_properties_begin(iter, ptr);

	if (iter->valid)
		iter->ptr = MaskSplinePoint_rna_properties_get(iter);
}

void MaskSplinePoint_rna_properties_next(CollectionPropertyIterator *iter)
{
	rna_builtin_properties_next(iter);

	if (iter->valid)
		iter->ptr = MaskSplinePoint_rna_properties_get(iter);
}

void MaskSplinePoint_rna_properties_end(CollectionPropertyIterator *iter)
{
	rna_iterator_listbase_end(iter);
}

int MaskSplinePoint_rna_properties_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
	return rna_builtin_properties_lookup_string(ptr, key, r_ptr);
}

PointerRNA MaskSplinePoint_rna_type_get(PointerRNA *ptr)
{
	return rna_builtin_type_get(ptr);
}

void MaskSplinePoint_handle_left_get(PointerRNA *ptr, float values[2])
{
	rna_MaskSplinePoint_handle1_get(ptr, values);
}

void MaskSplinePoint_handle_left_set(PointerRNA *ptr, const float values[2])
{
	rna_MaskSplinePoint_handle1_set(ptr, values);
}

void MaskSplinePoint_co_get(PointerRNA *ptr, float values[2])
{
	rna_MaskSplinePoint_ctrlpoint_get(ptr, values);
}

void MaskSplinePoint_co_set(PointerRNA *ptr, const float values[2])
{
	rna_MaskSplinePoint_ctrlpoint_set(ptr, values);
}

void MaskSplinePoint_handle_right_get(PointerRNA *ptr, float values[2])
{
	rna_MaskSplinePoint_handle2_get(ptr, values);
}

void MaskSplinePoint_handle_right_set(PointerRNA *ptr, const float values[2])
{
	rna_MaskSplinePoint_handle2_set(ptr, values);
}

int MaskSplinePoint_handle_type_get(PointerRNA *ptr)
{
	return rna_MaskSplinePoint_handle_type_get(ptr);
}

void MaskSplinePoint_handle_type_set(PointerRNA *ptr, int value)
{
	rna_MaskSplinePoint_handle_type_set(ptr, value);
}

int MaskSplinePoint_handle_left_type_get(PointerRNA *ptr)
{
	return rna_MaskSplinePoint_handle_left_type_get(ptr);
}

void MaskSplinePoint_handle_left_type_set(PointerRNA *ptr, int value)
{
	rna_MaskSplinePoint_handle_left_type_set(ptr, value);
}

int MaskSplinePoint_handle_right_type_get(PointerRNA *ptr)
{
	return rna_MaskSplinePoint_handle_right_type_get(ptr);
}

void MaskSplinePoint_handle_right_type_set(PointerRNA *ptr, int value)
{
	rna_MaskSplinePoint_handle_right_type_set(ptr, value);
}

float MaskSplinePoint_weight_get(PointerRNA *ptr)
{
	MaskSplinePoint *data = (MaskSplinePoint *)(ptr->data);
	return (float)(data->bezt.weight);
}

void MaskSplinePoint_weight_set(PointerRNA *ptr, float value)
{
	MaskSplinePoint *data = (MaskSplinePoint *)(ptr->data);
	data->bezt.weight = CLAMPIS(value, 0.0f, 1.0f);
}

int MaskSplinePoint_select_get(PointerRNA *ptr)
{
	MaskSplinePoint *data = (MaskSplinePoint *)(ptr->data);
	return (((data->bezt.f1) & 1) != 0);
}

void MaskSplinePoint_select_set(PointerRNA *ptr, int value)
{
	MaskSplinePoint *data = (MaskSplinePoint *)(ptr->data);
	if (value) data->bezt.f1 |= 1;
	else data->bezt.f1 &= ~1;
}

PointerRNA MaskSplinePoint_parent_get(PointerRNA *ptr)
{
	MaskSplinePoint *data = (MaskSplinePoint *)(ptr->data);
	return rna_pointer_inherit_refine(ptr, &RNA_MaskParent, &data->parent);
}

int MaskSplinePoint_feather_points_length(PointerRNA *ptr)
{
	MaskSplinePoint *data = (MaskSplinePoint *)(ptr->data);
	return (data->uw == NULL) ? 0 : data->tot_uw;
}

static PointerRNA MaskSplinePoint_feather_points_get(CollectionPropertyIterator *iter)
{
	return rna_pointer_inherit_refine(&iter->parent, &RNA_MaskSplinePointUW, rna_iterator_array_get(iter));
}

void MaskSplinePoint_feather_points_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{
	MaskSplinePoint *data = (MaskSplinePoint *)(ptr->data);

	memset(iter, 0, sizeof(*iter));
	iter->parent = *ptr;
	iter->prop = (PropertyRNA *)&rna_MaskSplinePoint_feather_points;

	rna_iterator_array_begin(iter, data->uw, sizeof(data->uw[0]), data->tot_uw, 0, NULL);

	if (iter->valid)
		iter->ptr = MaskSplinePoint_feather_points_get(iter);
}

void MaskSplinePoint_feather_points_next(CollectionPropertyIterator *iter)
{
	rna_iterator_array_next(iter);

	if (iter->valid)
		iter->ptr = MaskSplinePoint_feather_points_get(iter);
}

void MaskSplinePoint_feather_points_end(CollectionPropertyIterator *iter)
{
	rna_iterator_array_end(iter);
}

int MaskSplinePoint_feather_points_lookup_int(PointerRNA *ptr, int index, PointerRNA *r_ptr)
{
	int found = 0;
	CollectionPropertyIterator iter;

	MaskSplinePoint_feather_points_begin(&iter, ptr);

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
		if (found) *r_ptr = MaskSplinePoint_feather_points_get(&iter);
	}

	MaskSplinePoint_feather_points_end(&iter);

	return found;
}

static PointerRNA MaskSpline_rna_properties_get(CollectionPropertyIterator *iter)
{
	return rna_builtin_properties_get(iter);
}

void MaskSpline_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

	memset(iter, 0, sizeof(*iter));
	iter->parent = *ptr;
	iter->prop = (PropertyRNA *)&rna_MaskSpline_rna_properties;

	rna_builtin_properties_begin(iter, ptr);

	if (iter->valid)
		iter->ptr = MaskSpline_rna_properties_get(iter);
}

void MaskSpline_rna_properties_next(CollectionPropertyIterator *iter)
{
	rna_builtin_properties_next(iter);

	if (iter->valid)
		iter->ptr = MaskSpline_rna_properties_get(iter);
}

void MaskSpline_rna_properties_end(CollectionPropertyIterator *iter)
{
	rna_iterator_listbase_end(iter);
}

int MaskSpline_rna_properties_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
	return rna_builtin_properties_lookup_string(ptr, key, r_ptr);
}

PointerRNA MaskSpline_rna_type_get(PointerRNA *ptr)
{
	return rna_builtin_type_get(ptr);
}

int MaskSpline_offset_mode_get(PointerRNA *ptr)
{
	MaskSpline *data = (MaskSpline *)(ptr->data);
	return (int)(data->offset_mode);
}

void MaskSpline_offset_mode_set(PointerRNA *ptr, int value)
{
	MaskSpline *data = (MaskSpline *)(ptr->data);
	data->offset_mode = value;
}

int MaskSpline_weight_interpolation_get(PointerRNA *ptr)
{
	MaskSpline *data = (MaskSpline *)(ptr->data);
	return (int)(data->weight_interp);
}

void MaskSpline_weight_interpolation_set(PointerRNA *ptr, int value)
{
	MaskSpline *data = (MaskSpline *)(ptr->data);
	data->weight_interp = value;
}

int MaskSpline_use_cyclic_get(PointerRNA *ptr)
{
	MaskSpline *data = (MaskSpline *)(ptr->data);
	return (((data->flag) & 2) != 0);
}

void MaskSpline_use_cyclic_set(PointerRNA *ptr, int value)
{
	MaskSpline *data = (MaskSpline *)(ptr->data);
	if (value) data->flag |= 2;
	else data->flag &= ~2;
}

int MaskSpline_use_fill_get(PointerRNA *ptr)
{
	MaskSpline *data = (MaskSpline *)(ptr->data);
	return !(((data->flag) & 4) != 0);
}

void MaskSpline_use_fill_set(PointerRNA *ptr, int value)
{
	MaskSpline *data = (MaskSpline *)(ptr->data);
	if (!value) data->flag |= 4;
	else data->flag &= ~4;
}

int MaskSpline_use_self_intersection_check_get(PointerRNA *ptr)
{
	MaskSpline *data = (MaskSpline *)(ptr->data);
	return (((data->flag) & 8) != 0);
}

void MaskSpline_use_self_intersection_check_set(PointerRNA *ptr, int value)
{
	MaskSpline *data = (MaskSpline *)(ptr->data);
	if (value) data->flag |= 8;
	else data->flag &= ~8;
}

int MaskSpline_points_length(PointerRNA *ptr)
{
	MaskSpline *data = (MaskSpline *)(ptr->data);
	return (data->points == NULL) ? 0 : data->tot_point;
}

static PointerRNA MaskSpline_points_get(CollectionPropertyIterator *iter)
{
	return rna_pointer_inherit_refine(&iter->parent, &RNA_MaskSplinePoint, rna_iterator_array_get(iter));
}

void MaskSpline_points_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{
	MaskSpline *data = (MaskSpline *)(ptr->data);

	memset(iter, 0, sizeof(*iter));
	iter->parent = *ptr;
	iter->prop = (PropertyRNA *)&rna_MaskSpline_points;

	rna_iterator_array_begin(iter, data->points, sizeof(data->points[0]), data->tot_point, 0, NULL);

	if (iter->valid)
		iter->ptr = MaskSpline_points_get(iter);
}

void MaskSpline_points_next(CollectionPropertyIterator *iter)
{
	rna_iterator_array_next(iter);

	if (iter->valid)
		iter->ptr = MaskSpline_points_get(iter);
}

void MaskSpline_points_end(CollectionPropertyIterator *iter)
{
	rna_iterator_array_end(iter);
}

int MaskSpline_points_lookup_int(PointerRNA *ptr, int index, PointerRNA *r_ptr)
{
	int found = 0;
	CollectionPropertyIterator iter;

	MaskSpline_points_begin(&iter, ptr);

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
		if (found) *r_ptr = MaskSpline_points_get(&iter);
	}

	MaskSpline_points_end(&iter);

	return found;
}

static PointerRNA MaskSplines_rna_properties_get(CollectionPropertyIterator *iter)
{
	return rna_builtin_properties_get(iter);
}

void MaskSplines_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

	memset(iter, 0, sizeof(*iter));
	iter->parent = *ptr;
	iter->prop = (PropertyRNA *)&rna_MaskSplines_rna_properties;

	rna_builtin_properties_begin(iter, ptr);

	if (iter->valid)
		iter->ptr = MaskSplines_rna_properties_get(iter);
}

void MaskSplines_rna_properties_next(CollectionPropertyIterator *iter)
{
	rna_builtin_properties_next(iter);

	if (iter->valid)
		iter->ptr = MaskSplines_rna_properties_get(iter);
}

void MaskSplines_rna_properties_end(CollectionPropertyIterator *iter)
{
	rna_iterator_listbase_end(iter);
}

int MaskSplines_rna_properties_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
	return rna_builtin_properties_lookup_string(ptr, key, r_ptr);
}

PointerRNA MaskSplines_rna_type_get(PointerRNA *ptr)
{
	return rna_builtin_type_get(ptr);
}

PointerRNA MaskSplines_active_get(PointerRNA *ptr)
{
	return rna_MaskLayer_active_spline_get(ptr);
}

void MaskSplines_active_set(PointerRNA *ptr, PointerRNA value)
{
	rna_MaskLayer_active_spline_set(ptr, value);
}

PointerRNA MaskSplines_active_point_get(PointerRNA *ptr)
{
	return rna_MaskLayer_active_spline_point_get(ptr);
}

void MaskSplines_active_point_set(PointerRNA *ptr, PointerRNA value)
{
	rna_MaskLayer_active_spline_point_set(ptr, value);
}

static PointerRNA MaskSplinePoints_rna_properties_get(CollectionPropertyIterator *iter)
{
	return rna_builtin_properties_get(iter);
}

void MaskSplinePoints_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

	memset(iter, 0, sizeof(*iter));
	iter->parent = *ptr;
	iter->prop = (PropertyRNA *)&rna_MaskSplinePoints_rna_properties;

	rna_builtin_properties_begin(iter, ptr);

	if (iter->valid)
		iter->ptr = MaskSplinePoints_rna_properties_get(iter);
}

void MaskSplinePoints_rna_properties_next(CollectionPropertyIterator *iter)
{
	rna_builtin_properties_next(iter);

	if (iter->valid)
		iter->ptr = MaskSplinePoints_rna_properties_get(iter);
}

void MaskSplinePoints_rna_properties_end(CollectionPropertyIterator *iter)
{
	rna_iterator_listbase_end(iter);
}

int MaskSplinePoints_rna_properties_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
	return rna_builtin_properties_lookup_string(ptr, key, r_ptr);
}

PointerRNA MaskSplinePoints_rna_type_get(PointerRNA *ptr)
{
	return rna_builtin_type_get(ptr);
}

static PointerRNA MaskLayer_rna_properties_get(CollectionPropertyIterator *iter)
{
	return rna_builtin_properties_get(iter);
}

void MaskLayer_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

	memset(iter, 0, sizeof(*iter));
	iter->parent = *ptr;
	iter->prop = (PropertyRNA *)&rna_MaskLayer_rna_properties;

	rna_builtin_properties_begin(iter, ptr);

	if (iter->valid)
		iter->ptr = MaskLayer_rna_properties_get(iter);
}

void MaskLayer_rna_properties_next(CollectionPropertyIterator *iter)
{
	rna_builtin_properties_next(iter);

	if (iter->valid)
		iter->ptr = MaskLayer_rna_properties_get(iter);
}

void MaskLayer_rna_properties_end(CollectionPropertyIterator *iter)
{
	rna_iterator_listbase_end(iter);
}

int MaskLayer_rna_properties_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
	return rna_builtin_properties_lookup_string(ptr, key, r_ptr);
}

PointerRNA MaskLayer_rna_type_get(PointerRNA *ptr)
{
	return rna_builtin_type_get(ptr);
}

void MaskLayer_name_get(PointerRNA *ptr, char *value)
{
	MaskLayer *data = (MaskLayer *)(ptr->data);
	BLI_strncpy_utf8(value, data->name, 64);
}

int MaskLayer_name_length(PointerRNA *ptr)
{
	MaskLayer *data = (MaskLayer *)(ptr->data);
	return strlen(data->name);
}

void MaskLayer_name_set(PointerRNA *ptr, const char *value)
{
	rna_MaskLayer_name_set(ptr, value);
}

static PointerRNA MaskLayer_splines_get(CollectionPropertyIterator *iter)
{
	return rna_pointer_inherit_refine(&iter->parent, &RNA_MaskSpline, rna_iterator_listbase_get(iter));
}

void MaskLayer_splines_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

	memset(iter, 0, sizeof(*iter));
	iter->parent = *ptr;
	iter->prop = (PropertyRNA *)&rna_MaskLayer_splines;

	rna_MaskLayer_splines_begin(iter, ptr);

	if (iter->valid)
		iter->ptr = MaskLayer_splines_get(iter);
}

void MaskLayer_splines_next(CollectionPropertyIterator *iter)
{
	rna_iterator_listbase_next(iter);

	if (iter->valid)
		iter->ptr = MaskLayer_splines_get(iter);
}

void MaskLayer_splines_end(CollectionPropertyIterator *iter)
{
	rna_iterator_listbase_end(iter);
}

int MaskLayer_splines_lookup_int(PointerRNA *ptr, int index, PointerRNA *r_ptr)
{
	int found = 0;
	CollectionPropertyIterator iter;

	MaskLayer_splines_begin(&iter, ptr);

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
		if (found) *r_ptr = MaskLayer_splines_get(&iter);
	}

	MaskLayer_splines_end(&iter);

	return found;
}

int MaskLayer_hide_get(PointerRNA *ptr)
{
	MaskLayer *data = (MaskLayer *)(ptr->data);
	return (((data->restrictflag) & 1) != 0);
}

void MaskLayer_hide_set(PointerRNA *ptr, int value)
{
	MaskLayer *data = (MaskLayer *)(ptr->data);
	if (value) data->restrictflag |= 1;
	else data->restrictflag &= ~1;
}

int MaskLayer_hide_select_get(PointerRNA *ptr)
{
	MaskLayer *data = (MaskLayer *)(ptr->data);
	return (((data->restrictflag) & 2) != 0);
}

void MaskLayer_hide_select_set(PointerRNA *ptr, int value)
{
	MaskLayer *data = (MaskLayer *)(ptr->data);
	if (value) data->restrictflag |= 2;
	else data->restrictflag &= ~2;
}

int MaskLayer_hide_render_get(PointerRNA *ptr)
{
	MaskLayer *data = (MaskLayer *)(ptr->data);
	return (((data->restrictflag) & 4) != 0);
}

void MaskLayer_hide_render_set(PointerRNA *ptr, int value)
{
	MaskLayer *data = (MaskLayer *)(ptr->data);
	if (value) data->restrictflag |= 4;
	else data->restrictflag &= ~4;
}

int MaskLayer_select_get(PointerRNA *ptr)
{
	MaskLayer *data = (MaskLayer *)(ptr->data);
	return (((data->flag) & 32) != 0);
}

void MaskLayer_select_set(PointerRNA *ptr, int value)
{
	MaskLayer *data = (MaskLayer *)(ptr->data);
	if (value) data->flag |= 32;
	else data->flag &= ~32;
}

float MaskLayer_alpha_get(PointerRNA *ptr)
{
	MaskLayer *data = (MaskLayer *)(ptr->data);
	return (float)(data->alpha);
}

void MaskLayer_alpha_set(PointerRNA *ptr, float value)
{
	MaskLayer *data = (MaskLayer *)(ptr->data);
	data->alpha = value;
}

int MaskLayer_blend_get(PointerRNA *ptr)
{
	MaskLayer *data = (MaskLayer *)(ptr->data);
	return (int)(data->blend);
}

void MaskLayer_blend_set(PointerRNA *ptr, int value)
{
	MaskLayer *data = (MaskLayer *)(ptr->data);
	data->blend = value;
}

int MaskLayer_invert_get(PointerRNA *ptr)
{
	MaskLayer *data = (MaskLayer *)(ptr->data);
	return (((data->blend_flag) & 1) != 0);
}

void MaskLayer_invert_set(PointerRNA *ptr, int value)
{
	MaskLayer *data = (MaskLayer *)(ptr->data);
	if (value) data->blend_flag |= 1;
	else data->blend_flag &= ~1;
}

int MaskLayer_falloff_get(PointerRNA *ptr)
{
	MaskLayer *data = (MaskLayer *)(ptr->data);
	return (int)(data->falloff);
}

void MaskLayer_falloff_set(PointerRNA *ptr, int value)
{
	MaskLayer *data = (MaskLayer *)(ptr->data);
	data->falloff = value;
}

int MaskLayer_use_fill_holes_get(PointerRNA *ptr)
{
	MaskLayer *data = (MaskLayer *)(ptr->data);
	return !(((data->flag) & 64) != 0);
}

void MaskLayer_use_fill_holes_set(PointerRNA *ptr, int value)
{
	MaskLayer *data = (MaskLayer *)(ptr->data);
	if (!value) data->flag |= 64;
	else data->flag &= ~64;
}

int MaskLayer_use_fill_overlap_get(PointerRNA *ptr)
{
	MaskLayer *data = (MaskLayer *)(ptr->data);
	return (((data->flag) & 128) != 0);
}

void MaskLayer_use_fill_overlap_set(PointerRNA *ptr, int value)
{
	MaskLayer *data = (MaskLayer *)(ptr->data);
	if (value) data->flag |= 128;
	else data->flag &= ~128;
}

static PointerRNA Mask_layers_get(CollectionPropertyIterator *iter)
{
	return rna_pointer_inherit_refine(&iter->parent, &RNA_MaskLayer, rna_iterator_listbase_get(iter));
}

void Mask_layers_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

	memset(iter, 0, sizeof(*iter));
	iter->parent = *ptr;
	iter->prop = (PropertyRNA *)&rna_Mask_layers;

	rna_Mask_layers_begin(iter, ptr);

	if (iter->valid)
		iter->ptr = Mask_layers_get(iter);
}

void Mask_layers_next(CollectionPropertyIterator *iter)
{
	rna_iterator_listbase_next(iter);

	if (iter->valid)
		iter->ptr = Mask_layers_get(iter);
}

void Mask_layers_end(CollectionPropertyIterator *iter)
{
	rna_iterator_listbase_end(iter);
}

int Mask_active_layer_index_get(PointerRNA *ptr)
{
	return rna_Mask_layer_active_index_get(ptr);
}

void Mask_active_layer_index_set(PointerRNA *ptr, int value)
{
	rna_Mask_layer_active_index_set(ptr, value);
}

int Mask_frame_start_get(PointerRNA *ptr)
{
	Mask *data = (Mask *)(ptr->data);
	return (int)(data->sfra);
}

void Mask_frame_start_set(PointerRNA *ptr, int value)
{
	rna_Mask_start_frame_set(ptr, value);
}

int Mask_frame_end_get(PointerRNA *ptr)
{
	Mask *data = (Mask *)(ptr->data);
	return (int)(data->efra);
}

void Mask_frame_end_set(PointerRNA *ptr, int value)
{
	rna_Mask_end_frame_set(ptr, value);
}

PointerRNA Mask_animation_data_get(PointerRNA *ptr)
{
	Mask *data = (Mask *)(ptr->data);
	return rna_pointer_inherit_refine(ptr, &RNA_AnimData, data->adt);
}

static PointerRNA MaskLayers_rna_properties_get(CollectionPropertyIterator *iter)
{
	return rna_builtin_properties_get(iter);
}

void MaskLayers_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

	memset(iter, 0, sizeof(*iter));
	iter->parent = *ptr;
	iter->prop = (PropertyRNA *)&rna_MaskLayers_rna_properties;

	rna_builtin_properties_begin(iter, ptr);

	if (iter->valid)
		iter->ptr = MaskLayers_rna_properties_get(iter);
}

void MaskLayers_rna_properties_next(CollectionPropertyIterator *iter)
{
	rna_builtin_properties_next(iter);

	if (iter->valid)
		iter->ptr = MaskLayers_rna_properties_get(iter);
}

void MaskLayers_rna_properties_end(CollectionPropertyIterator *iter)
{
	rna_iterator_listbase_end(iter);
}

int MaskLayers_rna_properties_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
	return rna_builtin_properties_lookup_string(ptr, key, r_ptr);
}

PointerRNA MaskLayers_rna_type_get(PointerRNA *ptr)
{
	return rna_builtin_type_get(ptr);
}

PointerRNA MaskLayers_active_get(PointerRNA *ptr)
{
	return rna_Mask_layer_active_get(ptr);
}

void MaskLayers_active_set(PointerRNA *ptr, PointerRNA value)
{
	rna_Mask_layer_active_set(ptr, value);
}





struct MaskSpline *MaskSplines_new(struct ID *_selfid, struct MaskLayer *_self)
{
	return rna_MaskLayer_spline_new(_selfid, _self);
}

void MaskSplines_new_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	struct ID *_selfid;
	struct MaskLayer *_self;
	struct MaskSpline *spline;
	char *_data, *_retdata;
	
	_selfid = (struct ID *)_ptr->id.data;
	_self = (struct MaskLayer *)_ptr->data;
	_data = (char *)_parms->data;
	_retdata = _data;
	
	spline = rna_MaskLayer_spline_new(_selfid, _self);
	*((struct MaskSpline **)_retdata) = spline;
}

void MaskSplines_remove(struct ID *_selfid, struct MaskLayer *_self, ReportList *reports, struct PointerRNA *spline)
{
	rna_MaskLayer_spline_remove(_selfid, _self, reports, spline);
}

void MaskSplines_remove_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	struct ID *_selfid;
	struct MaskLayer *_self;
	struct PointerRNA *spline;
	char *_data;
	
	_selfid = (struct ID *)_ptr->id.data;
	_self = (struct MaskLayer *)_ptr->data;
	_data = (char *)_parms->data;
	spline = *((struct PointerRNA **)_data);
	
	rna_MaskLayer_spline_remove(_selfid, _self, reports, spline);
}

/* Repeated prototypes to detect errors */

struct MaskSpline *rna_MaskLayer_spline_new(struct ID *_selfid, struct MaskLayer *_self);
void rna_MaskLayer_spline_remove(struct ID *_selfid, struct MaskLayer *_self, ReportList *reports, struct PointerRNA *spline);

void MaskSplinePoints_add(struct ID *_selfid, struct MaskSpline *_self, int count)
{
	rna_MaskSpline_points_add(_selfid, _self, count);
}

void MaskSplinePoints_add_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	struct ID *_selfid;
	struct MaskSpline *_self;
	int count;
	char *_data;
	
	_selfid = (struct ID *)_ptr->id.data;
	_self = (struct MaskSpline *)_ptr->data;
	_data = (char *)_parms->data;
	count = *((int *)_data);
	
	rna_MaskSpline_points_add(_selfid, _self, count);
}

void MaskSplinePoints_remove(struct ID *_selfid, struct MaskSpline *_self, ReportList *reports, struct PointerRNA *point)
{
	rna_MaskSpline_point_remove(_selfid, _self, reports, point);
}

void MaskSplinePoints_remove_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	struct ID *_selfid;
	struct MaskSpline *_self;
	struct PointerRNA *point;
	char *_data;
	
	_selfid = (struct ID *)_ptr->id.data;
	_self = (struct MaskSpline *)_ptr->data;
	_data = (char *)_parms->data;
	point = *((struct PointerRNA **)_data);
	
	rna_MaskSpline_point_remove(_selfid, _self, reports, point);
}

/* Repeated prototypes to detect errors */

void rna_MaskSpline_points_add(struct ID *_selfid, struct MaskSpline *_self, int count);
void rna_MaskSpline_point_remove(struct ID *_selfid, struct MaskSpline *_self, ReportList *reports, struct PointerRNA *point);



struct MaskLayer *MaskLayers_new(struct Mask *_self, const char * name)
{
	return rna_Mask_layers_new(_self, name);
}

void MaskLayers_new_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	struct Mask *_self;
	const char * name;
	struct MaskLayer *layer;
	char *_data, *_retdata;
	
	_self = (struct Mask *)_ptr->data;
	_data = (char *)_parms->data;
	name = *((const char * *)_data);
#if defined(SPEC_ILP32)
        _data += 4;
#else
        _data += 8;
#endif
	_retdata = _data;
	
	layer = rna_Mask_layers_new(_self, name);
	*((struct MaskLayer **)_retdata) = layer;
}

void MaskLayers_remove(struct Mask *_self, ReportList *reports, struct PointerRNA *layer)
{
	rna_Mask_layers_remove(_self, reports, layer);
}

void MaskLayers_remove_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	struct Mask *_self;
	struct PointerRNA *layer;
	char *_data;
	
	_self = (struct Mask *)_ptr->data;
	_data = (char *)_parms->data;
	layer = *((struct PointerRNA **)_data);
	
	rna_Mask_layers_remove(_self, reports, layer);
}

void MaskLayers_clear(struct Mask *_self)
{
	rna_Mask_layers_clear(_self);
}

void MaskLayers_clear_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	struct Mask *_self;
	_self = (struct Mask *)_ptr->data;
	
	rna_Mask_layers_clear(_self);
}

/* Repeated prototypes to detect errors */

struct MaskLayer *rna_Mask_layers_new(struct Mask *_self, const char * name);
void rna_Mask_layers_remove(struct Mask *_self, ReportList *reports, struct PointerRNA *layer);
void rna_Mask_layers_clear(struct Mask *_self);

/* Mask Parent */
CollectionPropertyRNA rna_MaskParent_rna_properties = {
	{(PropertyRNA *)&rna_MaskParent_rna_type, NULL,
	-1, "rna_properties", 128, "Properties",
	"RNA property collection",
	0, "*",
	PROP_COLLECTION, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	MaskParent_rna_properties_begin, MaskParent_rna_properties_next, MaskParent_rna_properties_end, MaskParent_rna_properties_get, NULL, NULL, MaskParent_rna_properties_lookup_string, NULL, &RNA_Property
};

PointerPropertyRNA rna_MaskParent_rna_type = {
	{(PropertyRNA *)&rna_MaskParent_id, (PropertyRNA *)&rna_MaskParent_rna_properties,
	-1, "rna_type", 8912896, "RNA",
	"RNA type definition",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	MaskParent_rna_type_get, NULL, NULL, NULL,&RNA_Struct
};

PointerPropertyRNA rna_MaskParent_id = {
	{(PropertyRNA *)&rna_MaskParent_id_type, (PropertyRNA *)&rna_MaskParent_rna_type,
	-1, "id", 8388673, "ID",
	"ID-block to which masking element would be parented to or to it\'s property",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Mask_update_parent, 0, NULL, NULL,
	0, -1, NULL},
	MaskParent_id_get, MaskParent_id_set, rna_MaskParent_id_typef, NULL,&RNA_ID
};

static EnumPropertyItem rna_MaskParent_id_type_items[2] = {
	{17229, "MOVIECLIP", 111, "Movie Clip", ""},
	{0, NULL, 0, NULL, NULL}
};

EnumPropertyRNA rna_MaskParent_id_type = {
	{(PropertyRNA *)&rna_MaskParent_type, (PropertyRNA *)&rna_MaskParent_id,
	-1, "id_type", 3, "ID Type",
	"Type of ID-block that can be used",
	0, "*",
	PROP_ENUM, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Mask_update_parent, 0, NULL, NULL,
	0, -1, NULL},
	MaskParent_id_type_get, MaskParent_id_type_set, NULL, NULL, NULL, NULL, rna_MaskParent_id_type_items, 1, 17229
};

static EnumPropertyItem rna_MaskParent_type_items[3] = {
	{0, "POINT_TRACK", 0, "Point Track", ""},
	{1, "PLANE_TRACK", 0, "Plane Track", ""},
	{0, NULL, 0, NULL, NULL}
};

EnumPropertyRNA rna_MaskParent_type = {
	{(PropertyRNA *)&rna_MaskParent_parent, (PropertyRNA *)&rna_MaskParent_id_type,
	-1, "type", 3, "Parent Type",
	"Parent Type",
	0, "*",
	PROP_ENUM, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Mask_update_parent, 0, NULL, NULL,
	0, -1, NULL},
	MaskParent_type_get, MaskParent_type_set, NULL, NULL, NULL, NULL, rna_MaskParent_type_items, 2, 0
};

StringPropertyRNA rna_MaskParent_parent = {
	{(PropertyRNA *)&rna_MaskParent_sub_parent, (PropertyRNA *)&rna_MaskParent_type,
	-1, "parent", 262145, "Parent",
	"Name of parent object in specified data block to which parenting happens",
	0, "*",
	PROP_STRING, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {64, 0, 0}, 0,
	rna_Mask_update_parent, 0, NULL, NULL,
	0, -1, NULL},
	MaskParent_parent_get, MaskParent_parent_length, MaskParent_parent_set, NULL, NULL, NULL, 64, ""
};

StringPropertyRNA rna_MaskParent_sub_parent = {
	{NULL, (PropertyRNA *)&rna_MaskParent_parent,
	-1, "sub_parent", 262145, "Sub Parent",
	"Name of parent sub-object in specified data block to which parenting happens",
	0, "*",
	PROP_STRING, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {64, 0, 0}, 0,
	rna_Mask_update_parent, 0, NULL, NULL,
	0, -1, NULL},
	MaskParent_sub_parent_get, MaskParent_sub_parent_length, MaskParent_sub_parent_set, NULL, NULL, NULL, 64, ""
};

StructRNA RNA_MaskParent = {
	{(ContainerRNA *)&RNA_MaskSplinePointUW, (ContainerRNA *)&RNA_MovieTrackingObjects,
	NULL,
	{(PropertyRNA *)&rna_MaskParent_rna_properties, (PropertyRNA *)&rna_MaskParent_sub_parent}},
	"MaskParent", NULL, NULL, 4, "Mask Parent",
	"Parenting settings for masking element",
	"*", 17,
	NULL, (PropertyRNA *)&rna_MaskParent_rna_properties,
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

/* Mask Spline UW Point */
CollectionPropertyRNA rna_MaskSplinePointUW_rna_properties = {
	{(PropertyRNA *)&rna_MaskSplinePointUW_rna_type, NULL,
	-1, "rna_properties", 128, "Properties",
	"RNA property collection",
	0, "*",
	PROP_COLLECTION, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	MaskSplinePointUW_rna_properties_begin, MaskSplinePointUW_rna_properties_next, MaskSplinePointUW_rna_properties_end, MaskSplinePointUW_rna_properties_get, NULL, NULL, MaskSplinePointUW_rna_properties_lookup_string, NULL, &RNA_Property
};

PointerPropertyRNA rna_MaskSplinePointUW_rna_type = {
	{(PropertyRNA *)&rna_MaskSplinePointUW_u, (PropertyRNA *)&rna_MaskSplinePointUW_rna_properties,
	-1, "rna_type", 8912896, "RNA",
	"RNA type definition",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	MaskSplinePointUW_rna_type_get, NULL, NULL, NULL,&RNA_Struct
};

FloatPropertyRNA rna_MaskSplinePointUW_u = {
	{(PropertyRNA *)&rna_MaskSplinePointUW_weight, (PropertyRNA *)&rna_MaskSplinePointUW_rna_type,
	-1, "u", 8195, "U",
	"U coordinate of point along spline segment",
	0, "*",
	PROP_FLOAT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Mask_update_data, 0, NULL, NULL,
	offsetof(MaskSplinePointUW, u), 4, NULL},
	MaskSplinePointUW_u_get, MaskSplinePointUW_u_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 1.0f, 0.0f, 1.0f, 10.0f, 3, 0.0f, NULL
};

FloatPropertyRNA rna_MaskSplinePointUW_weight = {
	{(PropertyRNA *)&rna_MaskSplinePointUW_select, (PropertyRNA *)&rna_MaskSplinePointUW_u,
	-1, "weight", 8195, "Weight",
	"Weight of feather point",
	0, "*",
	PROP_FLOAT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Mask_update_data, 0, NULL, NULL,
	offsetof(MaskSplinePointUW, w), 4, NULL},
	MaskSplinePointUW_weight_get, MaskSplinePointUW_weight_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 1.0f, 0.0f, 1.0f, 10.0f, 3, 0.0f, NULL
};

BoolPropertyRNA rna_MaskSplinePointUW_select = {
	{NULL, (PropertyRNA *)&rna_MaskSplinePointUW_weight,
	-1, "select", 3, "Select",
	"Selection status",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Mask_update_data, 0, NULL, NULL,
	0, -1, NULL},
	MaskSplinePointUW_select_get, MaskSplinePointUW_select_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

StructRNA RNA_MaskSplinePointUW = {
	{(ContainerRNA *)&RNA_MaskSplinePoint, (ContainerRNA *)&RNA_MaskParent,
	NULL,
	{(PropertyRNA *)&rna_MaskSplinePointUW_rna_properties, (PropertyRNA *)&rna_MaskSplinePointUW_select}},
	"MaskSplinePointUW", NULL, NULL, 4, "Mask Spline UW Point",
	"Single point in spline segment defining feather",
	"*", 17,
	NULL, (PropertyRNA *)&rna_MaskSplinePointUW_rna_properties,
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

/* Mask Spline Point */
CollectionPropertyRNA rna_MaskSplinePoint_rna_properties = {
	{(PropertyRNA *)&rna_MaskSplinePoint_rna_type, NULL,
	-1, "rna_properties", 128, "Properties",
	"RNA property collection",
	0, "*",
	PROP_COLLECTION, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	MaskSplinePoint_rna_properties_begin, MaskSplinePoint_rna_properties_next, MaskSplinePoint_rna_properties_end, MaskSplinePoint_rna_properties_get, NULL, NULL, MaskSplinePoint_rna_properties_lookup_string, NULL, &RNA_Property
};

PointerPropertyRNA rna_MaskSplinePoint_rna_type = {
	{(PropertyRNA *)&rna_MaskSplinePoint_handle_left, (PropertyRNA *)&rna_MaskSplinePoint_rna_properties,
	-1, "rna_type", 8912896, "RNA",
	"RNA type definition",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	MaskSplinePoint_rna_type_get, NULL, NULL, NULL,&RNA_Struct
};

static float rna_MaskSplinePoint_handle_left_default[2] = {
	0.0f,
	0.0f
};

FloatPropertyRNA rna_MaskSplinePoint_handle_left = {
	{(PropertyRNA *)&rna_MaskSplinePoint_co, (PropertyRNA *)&rna_MaskSplinePoint_rna_type,
	-1, "handle_left", 3, "Handle 1",
	"Coordinates of the first handle",
	0, "*",
	PROP_FLOAT, PROP_TRANSLATION | PROP_UNIT_LENGTH, NULL, 1, {2, 0, 0}, 2,
	rna_Mask_update_data, 0, NULL, NULL,
	0, -1, NULL},
	NULL, NULL, MaskSplinePoint_handle_left_get, MaskSplinePoint_handle_left_set, NULL, NULL, NULL, NULL, NULL, NULL, -10000.0f, 10000.0f, -FLT_MAX, FLT_MAX, 10.0f, 3, 0.0f, rna_MaskSplinePoint_handle_left_default
};

static float rna_MaskSplinePoint_co_default[2] = {
	0.0f,
	0.0f
};

FloatPropertyRNA rna_MaskSplinePoint_co = {
	{(PropertyRNA *)&rna_MaskSplinePoint_handle_right, (PropertyRNA *)&rna_MaskSplinePoint_handle_left,
	-1, "co", 3, "Control Point",
	"Coordinates of the control point",
	0, "*",
	PROP_FLOAT, PROP_TRANSLATION | PROP_UNIT_LENGTH, NULL, 1, {2, 0, 0}, 2,
	rna_Mask_update_data, 0, NULL, NULL,
	0, -1, NULL},
	NULL, NULL, MaskSplinePoint_co_get, MaskSplinePoint_co_set, NULL, NULL, NULL, NULL, NULL, NULL, -10000.0f, 10000.0f, -FLT_MAX, FLT_MAX, 10.0f, 3, 0.0f, rna_MaskSplinePoint_co_default
};

static float rna_MaskSplinePoint_handle_right_default[2] = {
	0.0f,
	0.0f
};

FloatPropertyRNA rna_MaskSplinePoint_handle_right = {
	{(PropertyRNA *)&rna_MaskSplinePoint_handle_type, (PropertyRNA *)&rna_MaskSplinePoint_co,
	-1, "handle_right", 3, "Handle 2",
	"Coordinates of the second handle",
	0, "*",
	PROP_FLOAT, PROP_TRANSLATION | PROP_UNIT_LENGTH, NULL, 1, {2, 0, 0}, 2,
	rna_Mask_update_data, 0, NULL, NULL,
	0, -1, NULL},
	NULL, NULL, MaskSplinePoint_handle_right_get, MaskSplinePoint_handle_right_set, NULL, NULL, NULL, NULL, NULL, NULL, -10000.0f, 10000.0f, -FLT_MAX, FLT_MAX, 10.0f, 3, 0.0f, rna_MaskSplinePoint_handle_right_default
};

static EnumPropertyItem rna_MaskSplinePoint_handle_type_items[6] = {
	{1, "AUTO", 0, "Auto", ""},
	{2, "VECTOR", 0, "Vector", ""},
	{3, "ALIGNED", 0, "Aligned Single", ""},
	{5, "ALIGNED_DOUBLESIDE", 0, "Aligned", ""},
	{0, "FREE", 0, "Free", ""},
	{0, NULL, 0, NULL, NULL}
};

EnumPropertyRNA rna_MaskSplinePoint_handle_type = {
	{(PropertyRNA *)&rna_MaskSplinePoint_handle_left_type, (PropertyRNA *)&rna_MaskSplinePoint_handle_right,
	-1, "handle_type", 3, "Handle Type",
	"Handle type",
	0, "*",
	PROP_ENUM, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Mask_update_data, 0, NULL, NULL,
	0, -1, NULL},
	MaskSplinePoint_handle_type_get, MaskSplinePoint_handle_type_set, NULL, NULL, NULL, NULL, rna_MaskSplinePoint_handle_type_items, 5, 0
};

static EnumPropertyItem rna_MaskSplinePoint_handle_left_type_items[6] = {
	{1, "AUTO", 0, "Auto", ""},
	{2, "VECTOR", 0, "Vector", ""},
	{3, "ALIGNED", 0, "Aligned Single", ""},
	{5, "ALIGNED_DOUBLESIDE", 0, "Aligned", ""},
	{0, "FREE", 0, "Free", ""},
	{0, NULL, 0, NULL, NULL}
};

EnumPropertyRNA rna_MaskSplinePoint_handle_left_type = {
	{(PropertyRNA *)&rna_MaskSplinePoint_handle_right_type, (PropertyRNA *)&rna_MaskSplinePoint_handle_type,
	-1, "handle_left_type", 3, "Handle 1 Type",
	"Handle type",
	0, "*",
	PROP_ENUM, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Mask_update_data, 0, NULL, NULL,
	0, -1, NULL},
	MaskSplinePoint_handle_left_type_get, MaskSplinePoint_handle_left_type_set, NULL, NULL, NULL, NULL, rna_MaskSplinePoint_handle_left_type_items, 5, 0
};

static EnumPropertyItem rna_MaskSplinePoint_handle_right_type_items[6] = {
	{1, "AUTO", 0, "Auto", ""},
	{2, "VECTOR", 0, "Vector", ""},
	{3, "ALIGNED", 0, "Aligned Single", ""},
	{5, "ALIGNED_DOUBLESIDE", 0, "Aligned", ""},
	{0, "FREE", 0, "Free", ""},
	{0, NULL, 0, NULL, NULL}
};

EnumPropertyRNA rna_MaskSplinePoint_handle_right_type = {
	{(PropertyRNA *)&rna_MaskSplinePoint_weight, (PropertyRNA *)&rna_MaskSplinePoint_handle_left_type,
	-1, "handle_right_type", 3, "Handle 2 Type",
	"Handle type",
	0, "*",
	PROP_ENUM, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Mask_update_data, 0, NULL, NULL,
	0, -1, NULL},
	MaskSplinePoint_handle_right_type_get, MaskSplinePoint_handle_right_type_set, NULL, NULL, NULL, NULL, rna_MaskSplinePoint_handle_right_type_items, 5, 0
};

FloatPropertyRNA rna_MaskSplinePoint_weight = {
	{(PropertyRNA *)&rna_MaskSplinePoint_select, (PropertyRNA *)&rna_MaskSplinePoint_handle_right_type,
	-1, "weight", 8195, "Weight",
	"Weight of the point",
	0, "*",
	PROP_FLOAT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Mask_update_data, 0, NULL, NULL,
	offsetof(MaskSplinePoint, bezt.weight), 4, NULL},
	MaskSplinePoint_weight_get, MaskSplinePoint_weight_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 1.0f, 0.0f, 1.0f, 10.0f, 3, 0.0f, NULL
};

BoolPropertyRNA rna_MaskSplinePoint_select = {
	{(PropertyRNA *)&rna_MaskSplinePoint_parent, (PropertyRNA *)&rna_MaskSplinePoint_weight,
	-1, "select", 3, "Select",
	"Selection status",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Mask_update_data, 0, NULL, NULL,
	0, -1, NULL},
	MaskSplinePoint_select_get, MaskSplinePoint_select_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

PointerPropertyRNA rna_MaskSplinePoint_parent = {
	{(PropertyRNA *)&rna_MaskSplinePoint_feather_points, (PropertyRNA *)&rna_MaskSplinePoint_select,
	-1, "parent", 8388608, "parent",
	"",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	MaskSplinePoint_parent_get, NULL, NULL, NULL,&RNA_MaskParent
};

CollectionPropertyRNA rna_MaskSplinePoint_feather_points = {
	{NULL, (PropertyRNA *)&rna_MaskSplinePoint_parent,
	-1, "feather_points", 16384, "Feather Points",
	"Points defining feather",
	0, "*",
	PROP_COLLECTION, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	MaskSplinePoint_feather_points_begin, MaskSplinePoint_feather_points_next, MaskSplinePoint_feather_points_end, MaskSplinePoint_feather_points_get, MaskSplinePoint_feather_points_length, MaskSplinePoint_feather_points_lookup_int, NULL, NULL, &RNA_MaskSplinePointUW
};

StructRNA RNA_MaskSplinePoint = {
	{(ContainerRNA *)&RNA_MaskSpline, (ContainerRNA *)&RNA_MaskSplinePointUW,
	NULL,
	{(PropertyRNA *)&rna_MaskSplinePoint_rna_properties, (PropertyRNA *)&rna_MaskSplinePoint_feather_points}},
	"MaskSplinePoint", NULL, NULL, 4, "Mask Spline Point",
	"Single point in spline used for defining mask",
	"*", 17,
	NULL, (PropertyRNA *)&rna_MaskSplinePoint_rna_properties,
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

/* Mask spline */
CollectionPropertyRNA rna_MaskSpline_rna_properties = {
	{(PropertyRNA *)&rna_MaskSpline_rna_type, NULL,
	-1, "rna_properties", 128, "Properties",
	"RNA property collection",
	0, "*",
	PROP_COLLECTION, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	MaskSpline_rna_properties_begin, MaskSpline_rna_properties_next, MaskSpline_rna_properties_end, MaskSpline_rna_properties_get, NULL, NULL, MaskSpline_rna_properties_lookup_string, NULL, &RNA_Property
};

PointerPropertyRNA rna_MaskSpline_rna_type = {
	{(PropertyRNA *)&rna_MaskSpline_offset_mode, (PropertyRNA *)&rna_MaskSpline_rna_properties,
	-1, "rna_type", 8912896, "RNA",
	"RNA type definition",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	MaskSpline_rna_type_get, NULL, NULL, NULL,&RNA_Struct
};

static EnumPropertyItem rna_MaskSpline_offset_mode_items[3] = {
	{0, "EVEN", 0, "Even", "Calculate even feather offset"},
	{1, "SMOOTH", 0, "Smooth", "Calculate feather offset as a second curve"},
	{0, NULL, 0, NULL, NULL}
};

EnumPropertyRNA rna_MaskSpline_offset_mode = {
	{(PropertyRNA *)&rna_MaskSpline_weight_interpolation, (PropertyRNA *)&rna_MaskSpline_rna_type,
	-1, "offset_mode", 3, "Feather Offset",
	"The method used for calculating the feather offset",
	0, "*",
	PROP_ENUM, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Mask_update_data, 0, NULL, NULL,
	0, -1, NULL},
	MaskSpline_offset_mode_get, MaskSpline_offset_mode_set, NULL, NULL, NULL, NULL, rna_MaskSpline_offset_mode_items, 2, 0
};

static EnumPropertyItem rna_MaskSpline_weight_interpolation_items[3] = {
	{1, "LINEAR", 0, "Linear", ""},
	{2, "EASE", 0, "Ease", ""},
	{0, NULL, 0, NULL, NULL}
};

EnumPropertyRNA rna_MaskSpline_weight_interpolation = {
	{(PropertyRNA *)&rna_MaskSpline_use_cyclic, (PropertyRNA *)&rna_MaskSpline_offset_mode,
	-1, "weight_interpolation", 3, "Weight Interpolation",
	"The type of weight interpolation for spline",
	0, "*",
	PROP_ENUM, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Mask_update_data, 0, NULL, NULL,
	0, -1, NULL},
	MaskSpline_weight_interpolation_get, MaskSpline_weight_interpolation_set, NULL, NULL, NULL, NULL, rna_MaskSpline_weight_interpolation_items, 2, 1
};

BoolPropertyRNA rna_MaskSpline_use_cyclic = {
	{(PropertyRNA *)&rna_MaskSpline_use_fill, (PropertyRNA *)&rna_MaskSpline_weight_interpolation,
	-1, "use_cyclic", 1, "Cyclic",
	"Make this spline a closed loop",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Mask_update_data, 352321537, NULL, NULL,
	0, -1, NULL},
	MaskSpline_use_cyclic_get, MaskSpline_use_cyclic_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_MaskSpline_use_fill = {
	{(PropertyRNA *)&rna_MaskSpline_use_self_intersection_check, (PropertyRNA *)&rna_MaskSpline_use_cyclic,
	-1, "use_fill", 1, "Fill",
	"Make this spline filled",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Mask_update_data, 352321537, NULL, NULL,
	0, -1, NULL},
	MaskSpline_use_fill_get, MaskSpline_use_fill_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_MaskSpline_use_self_intersection_check = {
	{(PropertyRNA *)&rna_MaskSpline_points, (PropertyRNA *)&rna_MaskSpline_use_fill,
	-1, "use_self_intersection_check", 1, "Self Intersection Check",
	"Prevent feather from self-intersections",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Mask_update_data, 352321537, NULL, NULL,
	0, -1, NULL},
	MaskSpline_use_self_intersection_check_get, MaskSpline_use_self_intersection_check_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

CollectionPropertyRNA rna_MaskSpline_points = {
	{NULL, (PropertyRNA *)&rna_MaskSpline_use_self_intersection_check,
	-1, "points", 16384, "Points",
	"Collection of points",
	0, "*",
	PROP_COLLECTION, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, &RNA_MaskSplinePoints},
	MaskSpline_points_begin, MaskSpline_points_next, MaskSpline_points_end, MaskSpline_points_get, MaskSpline_points_length, MaskSpline_points_lookup_int, NULL, NULL, &RNA_MaskSplinePoint
};

StructRNA RNA_MaskSpline = {
	{(ContainerRNA *)&RNA_MaskSplines, (ContainerRNA *)&RNA_MaskSplinePoint,
	NULL,
	{(PropertyRNA *)&rna_MaskSpline_rna_properties, (PropertyRNA *)&rna_MaskSpline_points}},
	"MaskSpline", NULL, NULL, 4, "Mask spline",
	"Single spline used for defining mask shape",
	"*", 17,
	NULL, (PropertyRNA *)&rna_MaskSpline_rna_properties,
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

/* Mask Splines */
CollectionPropertyRNA rna_MaskSplines_rna_properties = {
	{(PropertyRNA *)&rna_MaskSplines_rna_type, NULL,
	-1, "rna_properties", 128, "Properties",
	"RNA property collection",
	0, "*",
	PROP_COLLECTION, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	MaskSplines_rna_properties_begin, MaskSplines_rna_properties_next, MaskSplines_rna_properties_end, MaskSplines_rna_properties_get, NULL, NULL, MaskSplines_rna_properties_lookup_string, NULL, &RNA_Property
};

PointerPropertyRNA rna_MaskSplines_rna_type = {
	{(PropertyRNA *)&rna_MaskSplines_active, (PropertyRNA *)&rna_MaskSplines_rna_properties,
	-1, "rna_type", 8912896, "RNA",
	"RNA type definition",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	MaskSplines_rna_type_get, NULL, NULL, NULL,&RNA_Struct
};

PointerPropertyRNA rna_MaskSplines_active = {
	{(PropertyRNA *)&rna_MaskSplines_active_point, (PropertyRNA *)&rna_MaskSplines_rna_type,
	-1, "active", 41943041, "Active Spline",
	"Active spline of masking layer",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	MaskSplines_active_get, MaskSplines_active_set, NULL, NULL,&RNA_MaskSpline
};

PointerPropertyRNA rna_MaskSplines_active_point = {
	{NULL, (PropertyRNA *)&rna_MaskSplines_active,
	-1, "active_point", 41943041, "Active Spline",
	"Active spline of masking layer",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	MaskSplines_active_point_get, MaskSplines_active_point_set, NULL, NULL,&RNA_MaskSplinePoint
};

PointerPropertyRNA rna_MaskSplines_new_spline = {
	{NULL, NULL,
	-1, "spline", 8388616, "",
	"The newly created spline",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	NULL, NULL, NULL, NULL,&RNA_MaskSpline
};

FunctionRNA rna_MaskSplines_new_func = {
	{(FunctionRNA *)&rna_MaskSplines_remove_func, NULL,
	NULL,
	{(PropertyRNA *)&rna_MaskSplines_new_spline, (PropertyRNA *)&rna_MaskSplines_new_spline}},
	"new", 2048, "Add a new spline to the layer",
	MaskSplines_new_call,
	(PropertyRNA *)&rna_MaskSplines_new_spline
};

PointerPropertyRNA rna_MaskSplines_remove_spline = {
	{NULL, NULL,
	-1, "spline", 264196, "",
	"The spline to remove",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	NULL, NULL, NULL, NULL,&RNA_MaskSpline
};

FunctionRNA rna_MaskSplines_remove_func = {
	{NULL, (FunctionRNA *)&rna_MaskSplines_new_func,
	NULL,
	{(PropertyRNA *)&rna_MaskSplines_remove_spline, (PropertyRNA *)&rna_MaskSplines_remove_spline}},
	"remove", 2064, "Remove a spline from a layer",
	MaskSplines_remove_call,
	NULL
};

StructRNA RNA_MaskSplines = {
	{(ContainerRNA *)&RNA_MaskSplinePoints, (ContainerRNA *)&RNA_MaskSpline,
	NULL,
	{(PropertyRNA *)&rna_MaskSplines_rna_properties, (PropertyRNA *)&rna_MaskSplines_active_point}},
	"MaskSplines", NULL, NULL, 4, "Mask Splines",
	"Collection of masking splines",
	"*", 17,
	NULL, (PropertyRNA *)&rna_MaskSplines_rna_properties,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	{(FunctionRNA *)&rna_MaskSplines_new_func, (FunctionRNA *)&rna_MaskSplines_remove_func}
};

/* Mask Spline Points */
CollectionPropertyRNA rna_MaskSplinePoints_rna_properties = {
	{(PropertyRNA *)&rna_MaskSplinePoints_rna_type, NULL,
	-1, "rna_properties", 128, "Properties",
	"RNA property collection",
	0, "*",
	PROP_COLLECTION, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	MaskSplinePoints_rna_properties_begin, MaskSplinePoints_rna_properties_next, MaskSplinePoints_rna_properties_end, MaskSplinePoints_rna_properties_get, NULL, NULL, MaskSplinePoints_rna_properties_lookup_string, NULL, &RNA_Property
};

PointerPropertyRNA rna_MaskSplinePoints_rna_type = {
	{NULL, (PropertyRNA *)&rna_MaskSplinePoints_rna_properties,
	-1, "rna_type", 8912896, "RNA",
	"RNA type definition",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	MaskSplinePoints_rna_type_get, NULL, NULL, NULL,&RNA_Struct
};

IntPropertyRNA rna_MaskSplinePoints_add_count = {
	{NULL, NULL,
	-1, "count", 3, "Number",
	"Number of points to add to the spline",
	0, "*",
	PROP_INT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL,
	0, INT_MAX, 0, INT_MAX, 1, 1, NULL
};

FunctionRNA rna_MaskSplinePoints_add_func = {
	{(FunctionRNA *)&rna_MaskSplinePoints_remove_func, NULL,
	NULL,
	{(PropertyRNA *)&rna_MaskSplinePoints_add_count, (PropertyRNA *)&rna_MaskSplinePoints_add_count}},
	"add", 2048, "Add a number of point to this spline",
	MaskSplinePoints_add_call,
	NULL
};

PointerPropertyRNA rna_MaskSplinePoints_remove_point = {
	{NULL, NULL,
	-1, "point", 264196, "",
	"The point to remove",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	NULL, NULL, NULL, NULL,&RNA_MaskSplinePoint
};

FunctionRNA rna_MaskSplinePoints_remove_func = {
	{NULL, (FunctionRNA *)&rna_MaskSplinePoints_add_func,
	NULL,
	{(PropertyRNA *)&rna_MaskSplinePoints_remove_point, (PropertyRNA *)&rna_MaskSplinePoints_remove_point}},
	"remove", 2064, "Remove a point from a spline",
	MaskSplinePoints_remove_call,
	NULL
};

StructRNA RNA_MaskSplinePoints = {
	{(ContainerRNA *)&RNA_MaskLayer, (ContainerRNA *)&RNA_MaskSplines,
	NULL,
	{(PropertyRNA *)&rna_MaskSplinePoints_rna_properties, (PropertyRNA *)&rna_MaskSplinePoints_rna_type}},
	"MaskSplinePoints", NULL, NULL, 4, "Mask Spline Points",
	"Collection of masking spline points",
	"*", 17,
	NULL, (PropertyRNA *)&rna_MaskSplinePoints_rna_properties,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	{(FunctionRNA *)&rna_MaskSplinePoints_add_func, (FunctionRNA *)&rna_MaskSplinePoints_remove_func}
};

/* Mask Layer */
CollectionPropertyRNA rna_MaskLayer_rna_properties = {
	{(PropertyRNA *)&rna_MaskLayer_rna_type, NULL,
	-1, "rna_properties", 128, "Properties",
	"RNA property collection",
	0, "*",
	PROP_COLLECTION, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	MaskLayer_rna_properties_begin, MaskLayer_rna_properties_next, MaskLayer_rna_properties_end, MaskLayer_rna_properties_get, NULL, NULL, MaskLayer_rna_properties_lookup_string, NULL, &RNA_Property
};

PointerPropertyRNA rna_MaskLayer_rna_type = {
	{(PropertyRNA *)&rna_MaskLayer_name, (PropertyRNA *)&rna_MaskLayer_rna_properties,
	-1, "rna_type", 8912896, "RNA",
	"RNA type definition",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	MaskLayer_rna_type_get, NULL, NULL, NULL,&RNA_Struct
};

StringPropertyRNA rna_MaskLayer_name = {
	{(PropertyRNA *)&rna_MaskLayer_splines, (PropertyRNA *)&rna_MaskLayer_rna_type,
	-1, "name", 262145, "Name",
	"Unique name of layer",
	0, "*",
	PROP_STRING, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {64, 0, 0}, 0,
	rna_Mask_update_data, 0, NULL, NULL,
	0, -1, NULL},
	MaskLayer_name_get, MaskLayer_name_length, MaskLayer_name_set, NULL, NULL, NULL, 64, ""
};

CollectionPropertyRNA rna_MaskLayer_splines = {
	{(PropertyRNA *)&rna_MaskLayer_hide, (PropertyRNA *)&rna_MaskLayer_name,
	-1, "splines", 0, "Splines",
	"Collection of splines which defines this layer",
	0, "*",
	PROP_COLLECTION, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, &RNA_MaskSplines},
	MaskLayer_splines_begin, MaskLayer_splines_next, MaskLayer_splines_end, MaskLayer_splines_get, NULL, MaskLayer_splines_lookup_int, NULL, NULL, &RNA_MaskSpline
};

BoolPropertyRNA rna_MaskLayer_hide = {
	{(PropertyRNA *)&rna_MaskLayer_hide_select, (PropertyRNA *)&rna_MaskLayer_splines,
	-1, "hide", 4099, "Restrict View",
	"Restrict visibility in the viewport",
	253, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 353828864, NULL, NULL,
	0, -1, NULL},
	MaskLayer_hide_get, MaskLayer_hide_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_MaskLayer_hide_select = {
	{(PropertyRNA *)&rna_MaskLayer_hide_render, (PropertyRNA *)&rna_MaskLayer_hide,
	-1, "hide_select", 4099, "Restrict Select",
	"Restrict selection in the viewport",
	255, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 353828864, NULL, NULL,
	0, -1, NULL},
	MaskLayer_hide_select_get, MaskLayer_hide_select_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_MaskLayer_hide_render = {
	{(PropertyRNA *)&rna_MaskLayer_select, (PropertyRNA *)&rna_MaskLayer_hide_select,
	-1, "hide_render", 4099, "Restrict Render",
	"Restrict renderability",
	257, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 352321537, NULL, NULL,
	0, -1, NULL},
	MaskLayer_hide_render_get, MaskLayer_hide_render_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_MaskLayer_select = {
	{(PropertyRNA *)&rna_MaskLayer_alpha, (PropertyRNA *)&rna_MaskLayer_hide_render,
	-1, "select", 3, "Select",
	"Layer is selected for editing in the Dope Sheet",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	MaskLayer_select_get, MaskLayer_select_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

FloatPropertyRNA rna_MaskLayer_alpha = {
	{(PropertyRNA *)&rna_MaskLayer_blend, (PropertyRNA *)&rna_MaskLayer_select,
	-1, "alpha", 8195, "Opacity",
	"Render Opacity",
	0, "*",
	PROP_FLOAT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 352321537, NULL, NULL,
	offsetof(MaskLayer, alpha), 4, NULL},
	MaskLayer_alpha_get, MaskLayer_alpha_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 1.0f, -FLT_MAX, FLT_MAX, 0.1000000015f, 3, 0.0f, NULL
};

static EnumPropertyItem rna_MaskLayer_blend_items[10] = {
	{7, "MERGE_ADD", 0, "Merge Add", ""},
	{8, "MERGE_SUBTRACT", 0, "Merge Subtract", ""},
	{0, "ADD", 0, "Add", ""},
	{1, "SUBTRACT", 0, "Subtract", ""},
	{2, "LIGHTEN", 0, "Lighten", ""},
	{3, "DARKEN", 0, "Darken", ""},
	{4, "MUL", 0, "Multiply", ""},
	{5, "REPLACE", 0, "Replace", ""},
	{6, "DIFFERENCE", 0, "Difference", ""},
	{0, NULL, 0, NULL, NULL}
};

EnumPropertyRNA rna_MaskLayer_blend = {
	{(PropertyRNA *)&rna_MaskLayer_invert, (PropertyRNA *)&rna_MaskLayer_alpha,
	-1, "blend", 3, "Blend",
	"Method of blending mask layers",
	0, "*",
	PROP_ENUM, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 352321537, NULL, NULL,
	0, -1, NULL},
	MaskLayer_blend_get, MaskLayer_blend_set, NULL, NULL, NULL, NULL, rna_MaskLayer_blend_items, 9, 0
};

BoolPropertyRNA rna_MaskLayer_invert = {
	{(PropertyRNA *)&rna_MaskLayer_falloff, (PropertyRNA *)&rna_MaskLayer_blend,
	-1, "invert", 3, "Restrict View",
	"Invert the mask black/white",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 352321537, NULL, NULL,
	0, -1, NULL},
	MaskLayer_invert_get, MaskLayer_invert_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

static EnumPropertyItem rna_MaskLayer_falloff_items[6] = {
	{0, "SMOOTH", 558, "Smooth", "Smooth falloff"},
	{1, "SPHERE", 559, "Sphere", "Spherical falloff"},
	{2, "ROOT", 560, "Root", "Root falloff"},
	{3, "SHARP", 561, "Sharp", "Sharp falloff"},
	{4, "LINEAR", 562, "Linear", "Linear falloff"},
	{0, NULL, 0, NULL, NULL}
};

EnumPropertyRNA rna_MaskLayer_falloff = {
	{(PropertyRNA *)&rna_MaskLayer_use_fill_holes, (PropertyRNA *)&rna_MaskLayer_invert,
	-1, "falloff", 3, "Falloff",
	"Falloff type the feather",
	0, "Curve",
	PROP_ENUM, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 352321537, NULL, NULL,
	0, -1, NULL},
	MaskLayer_falloff_get, MaskLayer_falloff_set, NULL, NULL, NULL, NULL, rna_MaskLayer_falloff_items, 5, 0
};

BoolPropertyRNA rna_MaskLayer_use_fill_holes = {
	{(PropertyRNA *)&rna_MaskLayer_use_fill_overlap, (PropertyRNA *)&rna_MaskLayer_falloff,
	-1, "use_fill_holes", 3, "Calculate Holes",
	"Calculate holes when filling overlapping curves",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 352321537, NULL, NULL,
	0, -1, NULL},
	MaskLayer_use_fill_holes_get, MaskLayer_use_fill_holes_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_MaskLayer_use_fill_overlap = {
	{NULL, (PropertyRNA *)&rna_MaskLayer_use_fill_holes,
	-1, "use_fill_overlap", 3, "Calculate Overlap",
	"Calculate self intersections and overlap before filling",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 352321537, NULL, NULL,
	0, -1, NULL},
	MaskLayer_use_fill_overlap_get, MaskLayer_use_fill_overlap_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

StructRNA RNA_MaskLayer = {
	{(ContainerRNA *)&RNA_Mask, (ContainerRNA *)&RNA_MaskSplinePoints,
	NULL,
	{(PropertyRNA *)&rna_MaskLayer_rna_properties, (PropertyRNA *)&rna_MaskLayer_use_fill_overlap}},
	"MaskLayer", NULL, NULL, 4, "Mask Layer",
	"Single layer used for masking pixels",
	"*", 17,
	(PropertyRNA *)&rna_MaskLayer_name, (PropertyRNA *)&rna_MaskLayer_rna_properties,
	NULL,
	NULL,
	NULL,
	rna_MaskLayer_path,
	NULL,
	NULL,
	NULL,
	NULL,
	{NULL, NULL}
};

/* Mask */
CollectionPropertyRNA rna_Mask_layers = {
	{(PropertyRNA *)&rna_Mask_active_layer_index, NULL,
	-1, "layers", 0, "Layers",
	"Collection of layers which defines this mask",
	0, "*",
	PROP_COLLECTION, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, &RNA_MaskLayers},
	Mask_layers_begin, Mask_layers_next, Mask_layers_end, Mask_layers_get, NULL, NULL, NULL, NULL, &RNA_MaskLayer
};

IntPropertyRNA rna_Mask_active_layer_index = {
	{(PropertyRNA *)&rna_Mask_frame_start, (PropertyRNA *)&rna_Mask_layers,
	-1, "active_layer_index", 1, "Active Shape Index",
	"Index of active layer in list of all mask\'s layers",
	0, "*",
	PROP_INT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 353828864, NULL, NULL,
	0, -1, NULL},
	Mask_active_layer_index_get, Mask_active_layer_index_set, NULL, NULL, rna_Mask_layer_active_index_range, NULL, NULL, NULL, NULL, NULL,
	-10000, 10000, INT_MIN, INT_MAX, 1, 0, NULL
};

IntPropertyRNA rna_Mask_frame_start = {
	{(PropertyRNA *)&rna_Mask_frame_end, (PropertyRNA *)&rna_Mask_active_layer_index,
	-1, "frame_start", 1, "Start Frame",
	"First frame of the mask (used for sequencer)",
	0, "*",
	PROP_INT, PROP_TIME | PROP_UNIT_TIME, NULL, 0, {0, 0, 0}, 0,
	NULL, 353828864, NULL, NULL,
	0, -1, NULL},
	Mask_frame_start_get, Mask_frame_start_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL,
	0, 300000, 0, 300000, 1, 0, NULL
};

IntPropertyRNA rna_Mask_frame_end = {
	{(PropertyRNA *)&rna_Mask_animation_data, (PropertyRNA *)&rna_Mask_frame_start,
	-1, "frame_end", 1, "End Frame",
	"Final frame of the mask (used for sequencer)",
	0, "*",
	PROP_INT, PROP_TIME | PROP_UNIT_TIME, NULL, 0, {0, 0, 0}, 0,
	NULL, 353828864, NULL, NULL,
	0, -1, NULL},
	Mask_frame_end_get, Mask_frame_end_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL,
	0, 300000, 0, 300000, 1, 0, NULL
};

PointerPropertyRNA rna_Mask_animation_data = {
	{NULL, (PropertyRNA *)&rna_Mask_frame_end,
	-1, "animation_data", 8388608, "Animation Data",
	"Animation data for this datablock",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	Mask_animation_data_get, NULL, NULL, NULL,&RNA_AnimData
};

StructRNA RNA_Mask = {
	{(ContainerRNA *)&RNA_MaskLayers, (ContainerRNA *)&RNA_MaskLayer,
	NULL,
	{(PropertyRNA *)&rna_Mask_layers, (PropertyRNA *)&rna_Mask_animation_data}},
	"Mask", NULL, NULL, 7, "Mask",
	"Mask datablock defining mask for compositing",
	"*", 467,
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

/* Mask Layers */
CollectionPropertyRNA rna_MaskLayers_rna_properties = {
	{(PropertyRNA *)&rna_MaskLayers_rna_type, NULL,
	-1, "rna_properties", 128, "Properties",
	"RNA property collection",
	0, "*",
	PROP_COLLECTION, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	MaskLayers_rna_properties_begin, MaskLayers_rna_properties_next, MaskLayers_rna_properties_end, MaskLayers_rna_properties_get, NULL, NULL, MaskLayers_rna_properties_lookup_string, NULL, &RNA_Property
};

PointerPropertyRNA rna_MaskLayers_rna_type = {
	{(PropertyRNA *)&rna_MaskLayers_active, (PropertyRNA *)&rna_MaskLayers_rna_properties,
	-1, "rna_type", 8912896, "RNA",
	"RNA type definition",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	MaskLayers_rna_type_get, NULL, NULL, NULL,&RNA_Struct
};

PointerPropertyRNA rna_MaskLayers_active = {
	{NULL, (PropertyRNA *)&rna_MaskLayers_rna_type,
	-1, "active", 41943041, "Active Shape",
	"Active layer in this mask",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	MaskLayers_active_get, MaskLayers_active_set, NULL, NULL,&RNA_MaskLayer
};

StringPropertyRNA rna_MaskLayers_new_name = {
	{(PropertyRNA *)&rna_MaskLayers_new_layer, NULL,
	-1, "name", 262145, "Name",
	"Name of new layer",
	0, "*",
	PROP_STRING, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	NULL, NULL, NULL, NULL, NULL, NULL, 0, ""
};

PointerPropertyRNA rna_MaskLayers_new_layer = {
	{NULL, (PropertyRNA *)&rna_MaskLayers_new_name,
	-1, "layer", 8388616, "",
	"New mask layer",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	NULL, NULL, NULL, NULL,&RNA_MaskLayer
};

FunctionRNA rna_MaskLayers_new_func = {
	{(FunctionRNA *)&rna_MaskLayers_remove_func, NULL,
	NULL,
	{(PropertyRNA *)&rna_MaskLayers_new_name, (PropertyRNA *)&rna_MaskLayers_new_layer}},
	"new", 0, "Add layer to this mask",
	MaskLayers_new_call,
	(PropertyRNA *)&rna_MaskLayers_new_layer
};

PointerPropertyRNA rna_MaskLayers_remove_layer = {
	{NULL, NULL,
	-1, "layer", 264196, "",
	"Shape to be removed",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	NULL, NULL, NULL, NULL,&RNA_MaskLayer
};

FunctionRNA rna_MaskLayers_remove_func = {
	{(FunctionRNA *)&rna_MaskLayers_clear_func, (FunctionRNA *)&rna_MaskLayers_new_func,
	NULL,
	{(PropertyRNA *)&rna_MaskLayers_remove_layer, (PropertyRNA *)&rna_MaskLayers_remove_layer}},
	"remove", 16, "Remove layer from this mask",
	MaskLayers_remove_call,
	NULL
};

FunctionRNA rna_MaskLayers_clear_func = {
	{NULL, (FunctionRNA *)&rna_MaskLayers_remove_func,
	NULL,
	{NULL, NULL}},
	"clear", 0, "Remove all mask layers",
	MaskLayers_clear_call,
	NULL
};

StructRNA RNA_MaskLayers = {
	{NULL, (ContainerRNA *)&RNA_Mask,
	NULL,
	{(PropertyRNA *)&rna_MaskLayers_rna_properties, (PropertyRNA *)&rna_MaskLayers_active}},
	"MaskLayers", NULL, NULL, 4, "Mask Layers",
	"Collection of layers used by mask",
	"*", 17,
	NULL, (PropertyRNA *)&rna_MaskLayers_rna_properties,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	{(FunctionRNA *)&rna_MaskLayers_new_func, (FunctionRNA *)&rna_MaskLayers_clear_func}
};

