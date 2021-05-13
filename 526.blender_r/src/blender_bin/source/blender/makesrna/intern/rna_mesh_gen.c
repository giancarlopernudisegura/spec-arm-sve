
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

#include "rna_mesh.c"
#include "rna_mesh_api.c"

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

CollectionPropertyRNA rna_Mesh_vertices;
CollectionPropertyRNA rna_Mesh_edges;
CollectionPropertyRNA rna_Mesh_tessfaces;
CollectionPropertyRNA rna_Mesh_loops;
CollectionPropertyRNA rna_Mesh_polygons;
PointerPropertyRNA rna_Mesh_texture_mesh;
CollectionPropertyRNA rna_Mesh_uv_layers;
PointerPropertyRNA rna_Mesh_uv_layer_clone;
IntPropertyRNA rna_Mesh_uv_layer_clone_index;
PointerPropertyRNA rna_Mesh_uv_layer_stencil;
IntPropertyRNA rna_Mesh_uv_layer_stencil_index;
CollectionPropertyRNA rna_Mesh_tessface_uv_textures;
CollectionPropertyRNA rna_Mesh_uv_textures;
PointerPropertyRNA rna_Mesh_uv_texture_clone;
IntPropertyRNA rna_Mesh_uv_texture_clone_index;
PointerPropertyRNA rna_Mesh_uv_texture_stencil;
IntPropertyRNA rna_Mesh_uv_texture_stencil_index;
CollectionPropertyRNA rna_Mesh_tessface_vertex_colors;
CollectionPropertyRNA rna_Mesh_vertex_colors;
CollectionPropertyRNA rna_Mesh_polygon_layers_float;
CollectionPropertyRNA rna_Mesh_polygon_layers_int;
CollectionPropertyRNA rna_Mesh_polygon_layers_string;
CollectionPropertyRNA rna_Mesh_skin_vertices;
BoolPropertyRNA rna_Mesh_use_auto_smooth;
FloatPropertyRNA rna_Mesh_auto_smooth_angle;
BoolPropertyRNA rna_Mesh_show_double_sided;
PointerPropertyRNA rna_Mesh_texco_mesh;
PointerPropertyRNA rna_Mesh_shape_keys;
BoolPropertyRNA rna_Mesh_use_auto_texspace;
BoolPropertyRNA rna_Mesh_show_edges;
BoolPropertyRNA rna_Mesh_show_faces;
BoolPropertyRNA rna_Mesh_show_normal_face;
BoolPropertyRNA rna_Mesh_show_normal_loop;
BoolPropertyRNA rna_Mesh_show_normal_vertex;
BoolPropertyRNA rna_Mesh_show_weight;
BoolPropertyRNA rna_Mesh_show_edge_crease;
BoolPropertyRNA rna_Mesh_show_edge_bevel_weight;
BoolPropertyRNA rna_Mesh_show_edge_seams;
BoolPropertyRNA rna_Mesh_show_edge_sharp;
BoolPropertyRNA rna_Mesh_show_freestyle_edge_marks;
BoolPropertyRNA rna_Mesh_show_freestyle_face_marks;
BoolPropertyRNA rna_Mesh_show_statvis;
BoolPropertyRNA rna_Mesh_show_extra_edge_length;
BoolPropertyRNA rna_Mesh_show_extra_edge_angle;
BoolPropertyRNA rna_Mesh_show_extra_face_angle;
BoolPropertyRNA rna_Mesh_show_extra_face_area;
BoolPropertyRNA rna_Mesh_show_extra_indices;
BoolPropertyRNA rna_Mesh_use_mirror_x;
BoolPropertyRNA rna_Mesh_use_mirror_topology;
BoolPropertyRNA rna_Mesh_use_paint_mask;
BoolPropertyRNA rna_Mesh_use_paint_mask_vertex;
BoolPropertyRNA rna_Mesh_use_customdata_vertex_bevel;
BoolPropertyRNA rna_Mesh_use_customdata_edge_bevel;
BoolPropertyRNA rna_Mesh_use_customdata_edge_crease;
IntPropertyRNA rna_Mesh_total_vert_sel;
IntPropertyRNA rna_Mesh_total_edge_sel;
IntPropertyRNA rna_Mesh_total_face_sel;
BoolPropertyRNA rna_Mesh_is_editmode;
PointerPropertyRNA rna_Mesh_animation_data;
BoolPropertyRNA rna_Mesh_auto_texspace;
FloatPropertyRNA rna_Mesh_texspace_location;
FloatPropertyRNA rna_Mesh_texspace_size;
CollectionPropertyRNA rna_Mesh_materials;

extern FunctionRNA rna_ID_copy_func;
extern PointerPropertyRNA rna_ID_copy_id;

extern FunctionRNA rna_ID_user_clear_func;
extern FunctionRNA rna_ID_animation_data_create_func;
extern PointerPropertyRNA rna_ID_animation_data_create_anim_data;

extern FunctionRNA rna_ID_animation_data_clear_func;
extern FunctionRNA rna_ID_update_tag_func;
extern EnumPropertyRNA rna_ID_update_tag_refresh;


extern FunctionRNA rna_Mesh_transform_func;
extern FloatPropertyRNA rna_Mesh_transform_matrix;
extern BoolPropertyRNA rna_Mesh_transform_shape_keys;

extern FunctionRNA rna_Mesh_calc_normals_func;
extern FunctionRNA rna_Mesh_calc_normals_split_func;
extern FloatPropertyRNA rna_Mesh_calc_normals_split_split_angle;

extern FunctionRNA rna_Mesh_free_normals_split_func;
extern FunctionRNA rna_Mesh_calc_tangents_func;
extern StringPropertyRNA rna_Mesh_calc_tangents_uvmap;

extern FunctionRNA rna_Mesh_free_tangents_func;
extern FunctionRNA rna_Mesh_calc_tessface_func;
extern FunctionRNA rna_Mesh_calc_smooth_groups_func;
extern BoolPropertyRNA rna_Mesh_calc_smooth_groups_use_bitflags;
extern IntPropertyRNA rna_Mesh_calc_smooth_groups_poly_groups;
extern IntPropertyRNA rna_Mesh_calc_smooth_groups_groups;

extern FunctionRNA rna_Mesh_update_func;
extern BoolPropertyRNA rna_Mesh_update_calc_edges;
extern BoolPropertyRNA rna_Mesh_update_calc_tessface;

extern FunctionRNA rna_Mesh_unit_test_compare_func;
extern PointerPropertyRNA rna_Mesh_unit_test_compare_mesh;
extern StringPropertyRNA rna_Mesh_unit_test_compare_result;

extern FunctionRNA rna_Mesh_validate_func;
extern BoolPropertyRNA rna_Mesh_validate_verbose;
extern BoolPropertyRNA rna_Mesh_validate_result;

extern FunctionRNA rna_Mesh_validate_material_indices_func;
extern BoolPropertyRNA rna_Mesh_validate_material_indices_result;



CollectionPropertyRNA rna_MeshVertices_rna_properties;
PointerPropertyRNA rna_MeshVertices_rna_type;

extern FunctionRNA rna_MeshVertices_add_func;
extern IntPropertyRNA rna_MeshVertices_add_count;



CollectionPropertyRNA rna_MeshEdges_rna_properties;
PointerPropertyRNA rna_MeshEdges_rna_type;

extern FunctionRNA rna_MeshEdges_add_func;
extern IntPropertyRNA rna_MeshEdges_add_count;



CollectionPropertyRNA rna_MeshTessFaces_rna_properties;
PointerPropertyRNA rna_MeshTessFaces_rna_type;
IntPropertyRNA rna_MeshTessFaces_active;

extern FunctionRNA rna_MeshTessFaces_add_func;
extern IntPropertyRNA rna_MeshTessFaces_add_count;



CollectionPropertyRNA rna_MeshLoops_rna_properties;
PointerPropertyRNA rna_MeshLoops_rna_type;

extern FunctionRNA rna_MeshLoops_add_func;
extern IntPropertyRNA rna_MeshLoops_add_count;



CollectionPropertyRNA rna_MeshPolygons_rna_properties;
PointerPropertyRNA rna_MeshPolygons_rna_type;
IntPropertyRNA rna_MeshPolygons_active;

extern FunctionRNA rna_MeshPolygons_add_func;
extern IntPropertyRNA rna_MeshPolygons_add_count;



CollectionPropertyRNA rna_UVLoopLayers_rna_properties;
PointerPropertyRNA rna_UVLoopLayers_rna_type;
PointerPropertyRNA rna_UVLoopLayers_active;
IntPropertyRNA rna_UVLoopLayers_active_index;


CollectionPropertyRNA rna_TessfaceUVTextures_rna_properties;
PointerPropertyRNA rna_TessfaceUVTextures_rna_type;
PointerPropertyRNA rna_TessfaceUVTextures_active;
IntPropertyRNA rna_TessfaceUVTextures_active_index;

extern FunctionRNA rna_TessfaceUVTextures_new_func;
extern StringPropertyRNA rna_TessfaceUVTextures_new_name;
extern PointerPropertyRNA rna_TessfaceUVTextures_new_layer;



CollectionPropertyRNA rna_UVTextures_rna_properties;
PointerPropertyRNA rna_UVTextures_rna_type;
PointerPropertyRNA rna_UVTextures_active;
IntPropertyRNA rna_UVTextures_active_index;

extern FunctionRNA rna_UVTextures_new_func;
extern StringPropertyRNA rna_UVTextures_new_name;
extern PointerPropertyRNA rna_UVTextures_new_layer;

extern FunctionRNA rna_UVTextures_remove_func;
extern PointerPropertyRNA rna_UVTextures_remove_layer;



CollectionPropertyRNA rna_VertexColors_rna_properties;
PointerPropertyRNA rna_VertexColors_rna_type;
PointerPropertyRNA rna_VertexColors_active;
IntPropertyRNA rna_VertexColors_active_index;

extern FunctionRNA rna_VertexColors_new_func;
extern StringPropertyRNA rna_VertexColors_new_name;
extern PointerPropertyRNA rna_VertexColors_new_layer;



CollectionPropertyRNA rna_LoopColors_rna_properties;
PointerPropertyRNA rna_LoopColors_rna_type;
PointerPropertyRNA rna_LoopColors_active;
IntPropertyRNA rna_LoopColors_active_index;

extern FunctionRNA rna_LoopColors_new_func;
extern StringPropertyRNA rna_LoopColors_new_name;
extern PointerPropertyRNA rna_LoopColors_new_layer;

extern FunctionRNA rna_LoopColors_remove_func;
extern PointerPropertyRNA rna_LoopColors_remove_layer;



CollectionPropertyRNA rna_FloatProperties_rna_properties;
PointerPropertyRNA rna_FloatProperties_rna_type;

extern FunctionRNA rna_FloatProperties_new_func;
extern StringPropertyRNA rna_FloatProperties_new_name;
extern PointerPropertyRNA rna_FloatProperties_new_layer;



CollectionPropertyRNA rna_IntProperties_rna_properties;
PointerPropertyRNA rna_IntProperties_rna_type;

extern FunctionRNA rna_IntProperties_new_func;
extern StringPropertyRNA rna_IntProperties_new_name;
extern PointerPropertyRNA rna_IntProperties_new_layer;



CollectionPropertyRNA rna_StringProperties_rna_properties;
PointerPropertyRNA rna_StringProperties_rna_type;

extern FunctionRNA rna_StringProperties_new_func;
extern StringPropertyRNA rna_StringProperties_new_name;
extern PointerPropertyRNA rna_StringProperties_new_layer;



CollectionPropertyRNA rna_MeshSkinVertexLayer_rna_properties;
PointerPropertyRNA rna_MeshSkinVertexLayer_rna_type;
StringPropertyRNA rna_MeshSkinVertexLayer_name;
CollectionPropertyRNA rna_MeshSkinVertexLayer_data;


CollectionPropertyRNA rna_MeshSkinVertex_rna_properties;
PointerPropertyRNA rna_MeshSkinVertex_rna_type;
FloatPropertyRNA rna_MeshSkinVertex_radius;
BoolPropertyRNA rna_MeshSkinVertex_use_root;
BoolPropertyRNA rna_MeshSkinVertex_use_loose;


CollectionPropertyRNA rna_MeshVertex_rna_properties;
PointerPropertyRNA rna_MeshVertex_rna_type;
FloatPropertyRNA rna_MeshVertex_co;
FloatPropertyRNA rna_MeshVertex_normal;
BoolPropertyRNA rna_MeshVertex_select;
BoolPropertyRNA rna_MeshVertex_hide;
FloatPropertyRNA rna_MeshVertex_bevel_weight;
CollectionPropertyRNA rna_MeshVertex_groups;
IntPropertyRNA rna_MeshVertex_index;
FloatPropertyRNA rna_MeshVertex_undeformed_co;


CollectionPropertyRNA rna_VertexGroupElement_rna_properties;
PointerPropertyRNA rna_VertexGroupElement_rna_type;
IntPropertyRNA rna_VertexGroupElement_group;
FloatPropertyRNA rna_VertexGroupElement_weight;


CollectionPropertyRNA rna_MeshEdge_rna_properties;
PointerPropertyRNA rna_MeshEdge_rna_type;
IntPropertyRNA rna_MeshEdge_vertices;
FloatPropertyRNA rna_MeshEdge_crease;
FloatPropertyRNA rna_MeshEdge_bevel_weight;
BoolPropertyRNA rna_MeshEdge_select;
BoolPropertyRNA rna_MeshEdge_hide;
BoolPropertyRNA rna_MeshEdge_use_seam;
BoolPropertyRNA rna_MeshEdge_use_edge_sharp;
BoolPropertyRNA rna_MeshEdge_is_loose;
BoolPropertyRNA rna_MeshEdge_use_freestyle_mark;
IntPropertyRNA rna_MeshEdge_index;


CollectionPropertyRNA rna_MeshTessFace_rna_properties;
PointerPropertyRNA rna_MeshTessFace_rna_type;
IntPropertyRNA rna_MeshTessFace_vertices;
IntPropertyRNA rna_MeshTessFace_vertices_raw;
IntPropertyRNA rna_MeshTessFace_material_index;
BoolPropertyRNA rna_MeshTessFace_select;
BoolPropertyRNA rna_MeshTessFace_hide;
BoolPropertyRNA rna_MeshTessFace_use_smooth;
FloatPropertyRNA rna_MeshTessFace_normal;
FloatPropertyRNA rna_MeshTessFace_split_normals;
FloatPropertyRNA rna_MeshTessFace_area;
IntPropertyRNA rna_MeshTessFace_index;


CollectionPropertyRNA rna_MeshLoop_rna_properties;
PointerPropertyRNA rna_MeshLoop_rna_type;
IntPropertyRNA rna_MeshLoop_vertex_index;
IntPropertyRNA rna_MeshLoop_edge_index;
IntPropertyRNA rna_MeshLoop_index;
FloatPropertyRNA rna_MeshLoop_normal;
FloatPropertyRNA rna_MeshLoop_tangent;
FloatPropertyRNA rna_MeshLoop_bitangent_sign;
FloatPropertyRNA rna_MeshLoop_bitangent;


CollectionPropertyRNA rna_MeshPolygon_rna_properties;
PointerPropertyRNA rna_MeshPolygon_rna_type;
IntPropertyRNA rna_MeshPolygon_vertices;
IntPropertyRNA rna_MeshPolygon_loop_start;
IntPropertyRNA rna_MeshPolygon_loop_total;
IntPropertyRNA rna_MeshPolygon_material_index;
BoolPropertyRNA rna_MeshPolygon_select;
BoolPropertyRNA rna_MeshPolygon_hide;
BoolPropertyRNA rna_MeshPolygon_use_smooth;
BoolPropertyRNA rna_MeshPolygon_use_freestyle_mark;
FloatPropertyRNA rna_MeshPolygon_normal;
FloatPropertyRNA rna_MeshPolygon_center;
FloatPropertyRNA rna_MeshPolygon_area;
IntPropertyRNA rna_MeshPolygon_index;


CollectionPropertyRNA rna_MeshUVLoopLayer_rna_properties;
PointerPropertyRNA rna_MeshUVLoopLayer_rna_type;
CollectionPropertyRNA rna_MeshUVLoopLayer_data;
StringPropertyRNA rna_MeshUVLoopLayer_name;


CollectionPropertyRNA rna_MeshUVLoop_rna_properties;
PointerPropertyRNA rna_MeshUVLoop_rna_type;
FloatPropertyRNA rna_MeshUVLoop_uv;
BoolPropertyRNA rna_MeshUVLoop_pin_uv;
BoolPropertyRNA rna_MeshUVLoop_select;
BoolPropertyRNA rna_MeshUVLoop_select_edge;


CollectionPropertyRNA rna_MeshTextureFaceLayer_rna_properties;
PointerPropertyRNA rna_MeshTextureFaceLayer_rna_type;
StringPropertyRNA rna_MeshTextureFaceLayer_name;
BoolPropertyRNA rna_MeshTextureFaceLayer_active;
BoolPropertyRNA rna_MeshTextureFaceLayer_active_render;
BoolPropertyRNA rna_MeshTextureFaceLayer_active_clone;
CollectionPropertyRNA rna_MeshTextureFaceLayer_data;


CollectionPropertyRNA rna_MeshTextureFace_rna_properties;
PointerPropertyRNA rna_MeshTextureFace_rna_type;
PointerPropertyRNA rna_MeshTextureFace_image;
FloatPropertyRNA rna_MeshTextureFace_uv1;
FloatPropertyRNA rna_MeshTextureFace_uv2;
FloatPropertyRNA rna_MeshTextureFace_uv3;
FloatPropertyRNA rna_MeshTextureFace_uv4;
FloatPropertyRNA rna_MeshTextureFace_uv;
FloatPropertyRNA rna_MeshTextureFace_uv_raw;


CollectionPropertyRNA rna_MeshTexturePolyLayer_rna_properties;
PointerPropertyRNA rna_MeshTexturePolyLayer_rna_type;
StringPropertyRNA rna_MeshTexturePolyLayer_name;
BoolPropertyRNA rna_MeshTexturePolyLayer_active;
BoolPropertyRNA rna_MeshTexturePolyLayer_active_render;
BoolPropertyRNA rna_MeshTexturePolyLayer_active_clone;
CollectionPropertyRNA rna_MeshTexturePolyLayer_data;


CollectionPropertyRNA rna_MeshTexturePoly_rna_properties;
PointerPropertyRNA rna_MeshTexturePoly_rna_type;
PointerPropertyRNA rna_MeshTexturePoly_image;


CollectionPropertyRNA rna_MeshColorLayer_rna_properties;
PointerPropertyRNA rna_MeshColorLayer_rna_type;
StringPropertyRNA rna_MeshColorLayer_name;
BoolPropertyRNA rna_MeshColorLayer_active;
BoolPropertyRNA rna_MeshColorLayer_active_render;
CollectionPropertyRNA rna_MeshColorLayer_data;


CollectionPropertyRNA rna_MeshColor_rna_properties;
PointerPropertyRNA rna_MeshColor_rna_type;
FloatPropertyRNA rna_MeshColor_color1;
FloatPropertyRNA rna_MeshColor_color2;
FloatPropertyRNA rna_MeshColor_color3;
FloatPropertyRNA rna_MeshColor_color4;


CollectionPropertyRNA rna_MeshLoopColorLayer_rna_properties;
PointerPropertyRNA rna_MeshLoopColorLayer_rna_type;
StringPropertyRNA rna_MeshLoopColorLayer_name;
BoolPropertyRNA rna_MeshLoopColorLayer_active;
BoolPropertyRNA rna_MeshLoopColorLayer_active_render;
CollectionPropertyRNA rna_MeshLoopColorLayer_data;


CollectionPropertyRNA rna_MeshLoopColor_rna_properties;
PointerPropertyRNA rna_MeshLoopColor_rna_type;
FloatPropertyRNA rna_MeshLoopColor_color;


CollectionPropertyRNA rna_MeshFloatPropertyLayer_rna_properties;
PointerPropertyRNA rna_MeshFloatPropertyLayer_rna_type;
StringPropertyRNA rna_MeshFloatPropertyLayer_name;
CollectionPropertyRNA rna_MeshFloatPropertyLayer_data;


CollectionPropertyRNA rna_MeshFloatProperty_rna_properties;
PointerPropertyRNA rna_MeshFloatProperty_rna_type;
FloatPropertyRNA rna_MeshFloatProperty_value;


CollectionPropertyRNA rna_MeshIntPropertyLayer_rna_properties;
PointerPropertyRNA rna_MeshIntPropertyLayer_rna_type;
StringPropertyRNA rna_MeshIntPropertyLayer_name;
CollectionPropertyRNA rna_MeshIntPropertyLayer_data;


CollectionPropertyRNA rna_MeshIntProperty_rna_properties;
PointerPropertyRNA rna_MeshIntProperty_rna_type;
IntPropertyRNA rna_MeshIntProperty_value;


CollectionPropertyRNA rna_MeshStringPropertyLayer_rna_properties;
PointerPropertyRNA rna_MeshStringPropertyLayer_rna_type;
StringPropertyRNA rna_MeshStringPropertyLayer_name;
CollectionPropertyRNA rna_MeshStringPropertyLayer_data;


CollectionPropertyRNA rna_MeshStringProperty_rna_properties;
PointerPropertyRNA rna_MeshStringProperty_rna_type;
StringPropertyRNA rna_MeshStringProperty_value;

int Mesh_vertices_length(PointerRNA *ptr)
{
	Mesh *data = (Mesh *)(ptr->data);
	return (data->mvert == NULL) ? 0 : data->totvert;
}

static PointerRNA Mesh_vertices_get(CollectionPropertyIterator *iter)
{
	return rna_pointer_inherit_refine(&iter->parent, &RNA_MeshVertex, rna_iterator_array_get(iter));
}

void Mesh_vertices_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{
	Mesh *data = (Mesh *)(ptr->data);

	memset(iter, 0, sizeof(*iter));
	iter->parent = *ptr;
	iter->prop = (PropertyRNA *)&rna_Mesh_vertices;

	rna_iterator_array_begin(iter, data->mvert, sizeof(data->mvert[0]), data->totvert, 0, NULL);

	if (iter->valid)
		iter->ptr = Mesh_vertices_get(iter);
}

void Mesh_vertices_next(CollectionPropertyIterator *iter)
{
	rna_iterator_array_next(iter);

	if (iter->valid)
		iter->ptr = Mesh_vertices_get(iter);
}

void Mesh_vertices_end(CollectionPropertyIterator *iter)
{
	rna_iterator_array_end(iter);
}

int Mesh_vertices_lookup_int(PointerRNA *ptr, int index, PointerRNA *r_ptr)
{
	int found = 0;
	CollectionPropertyIterator iter;

	Mesh_vertices_begin(&iter, ptr);

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
		if (found) *r_ptr = Mesh_vertices_get(&iter);
	}

	Mesh_vertices_end(&iter);

	return found;
}

int Mesh_edges_length(PointerRNA *ptr)
{
	Mesh *data = (Mesh *)(ptr->data);
	return (data->medge == NULL) ? 0 : data->totedge;
}

static PointerRNA Mesh_edges_get(CollectionPropertyIterator *iter)
{
	return rna_pointer_inherit_refine(&iter->parent, &RNA_MeshEdge, rna_iterator_array_get(iter));
}

void Mesh_edges_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{
	Mesh *data = (Mesh *)(ptr->data);

	memset(iter, 0, sizeof(*iter));
	iter->parent = *ptr;
	iter->prop = (PropertyRNA *)&rna_Mesh_edges;

	rna_iterator_array_begin(iter, data->medge, sizeof(data->medge[0]), data->totedge, 0, NULL);

	if (iter->valid)
		iter->ptr = Mesh_edges_get(iter);
}

void Mesh_edges_next(CollectionPropertyIterator *iter)
{
	rna_iterator_array_next(iter);

	if (iter->valid)
		iter->ptr = Mesh_edges_get(iter);
}

void Mesh_edges_end(CollectionPropertyIterator *iter)
{
	rna_iterator_array_end(iter);
}

int Mesh_edges_lookup_int(PointerRNA *ptr, int index, PointerRNA *r_ptr)
{
	int found = 0;
	CollectionPropertyIterator iter;

	Mesh_edges_begin(&iter, ptr);

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
		if (found) *r_ptr = Mesh_edges_get(&iter);
	}

	Mesh_edges_end(&iter);

	return found;
}

int Mesh_tessfaces_length(PointerRNA *ptr)
{
	Mesh *data = (Mesh *)(ptr->data);
	return (data->mface == NULL) ? 0 : data->totface;
}

static PointerRNA Mesh_tessfaces_get(CollectionPropertyIterator *iter)
{
	return rna_pointer_inherit_refine(&iter->parent, &RNA_MeshTessFace, rna_iterator_array_get(iter));
}

void Mesh_tessfaces_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{
	Mesh *data = (Mesh *)(ptr->data);

	memset(iter, 0, sizeof(*iter));
	iter->parent = *ptr;
	iter->prop = (PropertyRNA *)&rna_Mesh_tessfaces;

	rna_iterator_array_begin(iter, data->mface, sizeof(data->mface[0]), data->totface, 0, NULL);

	if (iter->valid)
		iter->ptr = Mesh_tessfaces_get(iter);
}

void Mesh_tessfaces_next(CollectionPropertyIterator *iter)
{
	rna_iterator_array_next(iter);

	if (iter->valid)
		iter->ptr = Mesh_tessfaces_get(iter);
}

void Mesh_tessfaces_end(CollectionPropertyIterator *iter)
{
	rna_iterator_array_end(iter);
}

int Mesh_tessfaces_lookup_int(PointerRNA *ptr, int index, PointerRNA *r_ptr)
{
	int found = 0;
	CollectionPropertyIterator iter;

	Mesh_tessfaces_begin(&iter, ptr);

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
		if (found) *r_ptr = Mesh_tessfaces_get(&iter);
	}

	Mesh_tessfaces_end(&iter);

	return found;
}

int Mesh_loops_length(PointerRNA *ptr)
{
	Mesh *data = (Mesh *)(ptr->data);
	return (data->mloop == NULL) ? 0 : data->totloop;
}

static PointerRNA Mesh_loops_get(CollectionPropertyIterator *iter)
{
	return rna_pointer_inherit_refine(&iter->parent, &RNA_MeshLoop, rna_iterator_array_get(iter));
}

void Mesh_loops_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{
	Mesh *data = (Mesh *)(ptr->data);

	memset(iter, 0, sizeof(*iter));
	iter->parent = *ptr;
	iter->prop = (PropertyRNA *)&rna_Mesh_loops;

	rna_iterator_array_begin(iter, data->mloop, sizeof(data->mloop[0]), data->totloop, 0, NULL);

	if (iter->valid)
		iter->ptr = Mesh_loops_get(iter);
}

void Mesh_loops_next(CollectionPropertyIterator *iter)
{
	rna_iterator_array_next(iter);

	if (iter->valid)
		iter->ptr = Mesh_loops_get(iter);
}

void Mesh_loops_end(CollectionPropertyIterator *iter)
{
	rna_iterator_array_end(iter);
}

int Mesh_loops_lookup_int(PointerRNA *ptr, int index, PointerRNA *r_ptr)
{
	int found = 0;
	CollectionPropertyIterator iter;

	Mesh_loops_begin(&iter, ptr);

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
		if (found) *r_ptr = Mesh_loops_get(&iter);
	}

	Mesh_loops_end(&iter);

	return found;
}

int Mesh_polygons_length(PointerRNA *ptr)
{
	Mesh *data = (Mesh *)(ptr->data);
	return (data->mpoly == NULL) ? 0 : data->totpoly;
}

static PointerRNA Mesh_polygons_get(CollectionPropertyIterator *iter)
{
	return rna_pointer_inherit_refine(&iter->parent, &RNA_MeshPolygon, rna_iterator_array_get(iter));
}

void Mesh_polygons_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{
	Mesh *data = (Mesh *)(ptr->data);

	memset(iter, 0, sizeof(*iter));
	iter->parent = *ptr;
	iter->prop = (PropertyRNA *)&rna_Mesh_polygons;

	rna_iterator_array_begin(iter, data->mpoly, sizeof(data->mpoly[0]), data->totpoly, 0, NULL);

	if (iter->valid)
		iter->ptr = Mesh_polygons_get(iter);
}

void Mesh_polygons_next(CollectionPropertyIterator *iter)
{
	rna_iterator_array_next(iter);

	if (iter->valid)
		iter->ptr = Mesh_polygons_get(iter);
}

void Mesh_polygons_end(CollectionPropertyIterator *iter)
{
	rna_iterator_array_end(iter);
}

int Mesh_polygons_lookup_int(PointerRNA *ptr, int index, PointerRNA *r_ptr)
{
	int found = 0;
	CollectionPropertyIterator iter;

	Mesh_polygons_begin(&iter, ptr);

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
		if (found) *r_ptr = Mesh_polygons_get(&iter);
	}

	Mesh_polygons_end(&iter);

	return found;
}

PointerRNA Mesh_texture_mesh_get(PointerRNA *ptr)
{
	Mesh *data = (Mesh *)(ptr->data);
	return rna_pointer_inherit_refine(ptr, &RNA_Mesh, data->texcomesh);
}

void Mesh_texture_mesh_set(PointerRNA *ptr, PointerRNA value)
{
	Mesh *data = (Mesh *)(ptr->data);
	ID *id = ptr->id.data;
	if (id == value.data) return;


	if (data->texcomesh)
		id_us_min((ID *)data->texcomesh);
	if (value.data)
		id_us_plus((ID *)value.data);

	data->texcomesh = value.data;
}

int Mesh_uv_layers_length(PointerRNA *ptr)
{
	return rna_Mesh_uv_layers_length(ptr);
}

static PointerRNA Mesh_uv_layers_get(CollectionPropertyIterator *iter)
{
	return rna_pointer_inherit_refine(&iter->parent, &RNA_MeshUVLoopLayer, rna_iterator_array_get(iter));
}

void Mesh_uv_layers_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

	memset(iter, 0, sizeof(*iter));
	iter->parent = *ptr;
	iter->prop = (PropertyRNA *)&rna_Mesh_uv_layers;

	rna_Mesh_uv_layers_begin(iter, ptr);

	if (iter->valid)
		iter->ptr = Mesh_uv_layers_get(iter);
}

void Mesh_uv_layers_next(CollectionPropertyIterator *iter)
{
	rna_iterator_array_next(iter);

	if (iter->valid)
		iter->ptr = Mesh_uv_layers_get(iter);
}

void Mesh_uv_layers_end(CollectionPropertyIterator *iter)
{
	rna_iterator_array_end(iter);
}

int Mesh_uv_layers_lookup_int(PointerRNA *ptr, int index, PointerRNA *r_ptr)
{
	int found = 0;
	CollectionPropertyIterator iter;

	Mesh_uv_layers_begin(&iter, ptr);

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
		if (found) *r_ptr = Mesh_uv_layers_get(&iter);
	}

	Mesh_uv_layers_end(&iter);

	return found;
}

int Mesh_uv_layers_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
	extern int MeshUVLoopLayer_name_length(PointerRNA *);
	extern void MeshUVLoopLayer_name_get(PointerRNA *, char *);

	bool found = false;
	CollectionPropertyIterator iter;
	char namebuf[1024];
	char *name;

	Mesh_uv_layers_begin(&iter, ptr);

	while (iter.valid) {
		if (iter.ptr.data) {
			int namelen = MeshUVLoopLayer_name_length(&iter.ptr);
			if (namelen < 1024) {
				MeshUVLoopLayer_name_get(&iter.ptr, namebuf);
				if (strcmp(namebuf, key) == 0) {
					found = true;
					*r_ptr = iter.ptr;
					break;
				}
			}
			else {
				name = MEM_mallocN(namelen+1, "name string");
				MeshUVLoopLayer_name_get(&iter.ptr, name);
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
		Mesh_uv_layers_next(&iter);
	}
	Mesh_uv_layers_end(&iter);

	return found;
}

PointerRNA Mesh_uv_layer_clone_get(PointerRNA *ptr)
{
	return rna_Mesh_uv_layer_clone_get(ptr);
}

void Mesh_uv_layer_clone_set(PointerRNA *ptr, PointerRNA value)
{
	rna_Mesh_uv_layer_clone_set(ptr, value);
}

int Mesh_uv_layer_clone_index_get(PointerRNA *ptr)
{
	return rna_Mesh_uv_layer_clone_index_get(ptr);
}

void Mesh_uv_layer_clone_index_set(PointerRNA *ptr, int value)
{
	rna_Mesh_uv_layer_clone_index_set(ptr, value);
}

PointerRNA Mesh_uv_layer_stencil_get(PointerRNA *ptr)
{
	return rna_Mesh_uv_layer_stencil_get(ptr);
}

void Mesh_uv_layer_stencil_set(PointerRNA *ptr, PointerRNA value)
{
	rna_Mesh_uv_layer_stencil_set(ptr, value);
}

int Mesh_uv_layer_stencil_index_get(PointerRNA *ptr)
{
	return rna_Mesh_uv_layer_stencil_index_get(ptr);
}

void Mesh_uv_layer_stencil_index_set(PointerRNA *ptr, int value)
{
	rna_Mesh_uv_layer_stencil_index_set(ptr, value);
}

int Mesh_tessface_uv_textures_length(PointerRNA *ptr)
{
	return rna_Mesh_tessface_uv_textures_length(ptr);
}

static PointerRNA Mesh_tessface_uv_textures_get(CollectionPropertyIterator *iter)
{
	return rna_pointer_inherit_refine(&iter->parent, &RNA_MeshTextureFaceLayer, rna_iterator_array_get(iter));
}

void Mesh_tessface_uv_textures_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

	memset(iter, 0, sizeof(*iter));
	iter->parent = *ptr;
	iter->prop = (PropertyRNA *)&rna_Mesh_tessface_uv_textures;

	rna_Mesh_tessface_uv_textures_begin(iter, ptr);

	if (iter->valid)
		iter->ptr = Mesh_tessface_uv_textures_get(iter);
}

void Mesh_tessface_uv_textures_next(CollectionPropertyIterator *iter)
{
	rna_iterator_array_next(iter);

	if (iter->valid)
		iter->ptr = Mesh_tessface_uv_textures_get(iter);
}

void Mesh_tessface_uv_textures_end(CollectionPropertyIterator *iter)
{
	rna_iterator_array_end(iter);
}

int Mesh_tessface_uv_textures_lookup_int(PointerRNA *ptr, int index, PointerRNA *r_ptr)
{
	int found = 0;
	CollectionPropertyIterator iter;

	Mesh_tessface_uv_textures_begin(&iter, ptr);

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
		if (found) *r_ptr = Mesh_tessface_uv_textures_get(&iter);
	}

	Mesh_tessface_uv_textures_end(&iter);

	return found;
}

int Mesh_tessface_uv_textures_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
	extern int MeshTextureFaceLayer_name_length(PointerRNA *);
	extern void MeshTextureFaceLayer_name_get(PointerRNA *, char *);

	bool found = false;
	CollectionPropertyIterator iter;
	char namebuf[1024];
	char *name;

	Mesh_tessface_uv_textures_begin(&iter, ptr);

	while (iter.valid) {
		if (iter.ptr.data) {
			int namelen = MeshTextureFaceLayer_name_length(&iter.ptr);
			if (namelen < 1024) {
				MeshTextureFaceLayer_name_get(&iter.ptr, namebuf);
				if (strcmp(namebuf, key) == 0) {
					found = true;
					*r_ptr = iter.ptr;
					break;
				}
			}
			else {
				name = MEM_mallocN(namelen+1, "name string");
				MeshTextureFaceLayer_name_get(&iter.ptr, name);
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
		Mesh_tessface_uv_textures_next(&iter);
	}
	Mesh_tessface_uv_textures_end(&iter);

	return found;
}

int Mesh_uv_textures_length(PointerRNA *ptr)
{
	return rna_Mesh_uv_textures_length(ptr);
}

static PointerRNA Mesh_uv_textures_get(CollectionPropertyIterator *iter)
{
	return rna_pointer_inherit_refine(&iter->parent, &RNA_MeshTexturePolyLayer, rna_iterator_array_get(iter));
}

void Mesh_uv_textures_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

	memset(iter, 0, sizeof(*iter));
	iter->parent = *ptr;
	iter->prop = (PropertyRNA *)&rna_Mesh_uv_textures;

	rna_Mesh_uv_textures_begin(iter, ptr);

	if (iter->valid)
		iter->ptr = Mesh_uv_textures_get(iter);
}

void Mesh_uv_textures_next(CollectionPropertyIterator *iter)
{
	rna_iterator_array_next(iter);

	if (iter->valid)
		iter->ptr = Mesh_uv_textures_get(iter);
}

void Mesh_uv_textures_end(CollectionPropertyIterator *iter)
{
	rna_iterator_array_end(iter);
}

int Mesh_uv_textures_lookup_int(PointerRNA *ptr, int index, PointerRNA *r_ptr)
{
	int found = 0;
	CollectionPropertyIterator iter;

	Mesh_uv_textures_begin(&iter, ptr);

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
		if (found) *r_ptr = Mesh_uv_textures_get(&iter);
	}

	Mesh_uv_textures_end(&iter);

	return found;
}

int Mesh_uv_textures_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
	extern int MeshTexturePolyLayer_name_length(PointerRNA *);
	extern void MeshTexturePolyLayer_name_get(PointerRNA *, char *);

	bool found = false;
	CollectionPropertyIterator iter;
	char namebuf[1024];
	char *name;

	Mesh_uv_textures_begin(&iter, ptr);

	while (iter.valid) {
		if (iter.ptr.data) {
			int namelen = MeshTexturePolyLayer_name_length(&iter.ptr);
			if (namelen < 1024) {
				MeshTexturePolyLayer_name_get(&iter.ptr, namebuf);
				if (strcmp(namebuf, key) == 0) {
					found = true;
					*r_ptr = iter.ptr;
					break;
				}
			}
			else {
				name = MEM_mallocN(namelen+1, "name string");
				MeshTexturePolyLayer_name_get(&iter.ptr, name);
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
		Mesh_uv_textures_next(&iter);
	}
	Mesh_uv_textures_end(&iter);

	return found;
}

PointerRNA Mesh_uv_texture_clone_get(PointerRNA *ptr)
{
	return rna_Mesh_uv_texture_clone_get(ptr);
}

void Mesh_uv_texture_clone_set(PointerRNA *ptr, PointerRNA value)
{
	rna_Mesh_uv_texture_clone_set(ptr, value);
}

int Mesh_uv_texture_clone_index_get(PointerRNA *ptr)
{
	return rna_Mesh_uv_texture_clone_index_get(ptr);
}

void Mesh_uv_texture_clone_index_set(PointerRNA *ptr, int value)
{
	rna_Mesh_uv_texture_clone_index_set(ptr, value);
}

PointerRNA Mesh_uv_texture_stencil_get(PointerRNA *ptr)
{
	return rna_Mesh_uv_texture_stencil_get(ptr);
}

void Mesh_uv_texture_stencil_set(PointerRNA *ptr, PointerRNA value)
{
	rna_Mesh_uv_texture_stencil_set(ptr, value);
}

int Mesh_uv_texture_stencil_index_get(PointerRNA *ptr)
{
	return rna_Mesh_uv_texture_stencil_index_get(ptr);
}

void Mesh_uv_texture_stencil_index_set(PointerRNA *ptr, int value)
{
	rna_Mesh_uv_texture_stencil_index_set(ptr, value);
}

int Mesh_tessface_vertex_colors_length(PointerRNA *ptr)
{
	return rna_Mesh_tessface_vertex_colors_length(ptr);
}

static PointerRNA Mesh_tessface_vertex_colors_get(CollectionPropertyIterator *iter)
{
	return rna_pointer_inherit_refine(&iter->parent, &RNA_MeshColorLayer, rna_iterator_array_get(iter));
}

void Mesh_tessface_vertex_colors_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

	memset(iter, 0, sizeof(*iter));
	iter->parent = *ptr;
	iter->prop = (PropertyRNA *)&rna_Mesh_tessface_vertex_colors;

	rna_Mesh_tessface_vertex_colors_begin(iter, ptr);

	if (iter->valid)
		iter->ptr = Mesh_tessface_vertex_colors_get(iter);
}

void Mesh_tessface_vertex_colors_next(CollectionPropertyIterator *iter)
{
	rna_iterator_array_next(iter);

	if (iter->valid)
		iter->ptr = Mesh_tessface_vertex_colors_get(iter);
}

void Mesh_tessface_vertex_colors_end(CollectionPropertyIterator *iter)
{
	rna_iterator_array_end(iter);
}

int Mesh_tessface_vertex_colors_lookup_int(PointerRNA *ptr, int index, PointerRNA *r_ptr)
{
	int found = 0;
	CollectionPropertyIterator iter;

	Mesh_tessface_vertex_colors_begin(&iter, ptr);

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
		if (found) *r_ptr = Mesh_tessface_vertex_colors_get(&iter);
	}

	Mesh_tessface_vertex_colors_end(&iter);

	return found;
}

int Mesh_tessface_vertex_colors_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
	extern int MeshColorLayer_name_length(PointerRNA *);
	extern void MeshColorLayer_name_get(PointerRNA *, char *);

	bool found = false;
	CollectionPropertyIterator iter;
	char namebuf[1024];
	char *name;

	Mesh_tessface_vertex_colors_begin(&iter, ptr);

	while (iter.valid) {
		if (iter.ptr.data) {
			int namelen = MeshColorLayer_name_length(&iter.ptr);
			if (namelen < 1024) {
				MeshColorLayer_name_get(&iter.ptr, namebuf);
				if (strcmp(namebuf, key) == 0) {
					found = true;
					*r_ptr = iter.ptr;
					break;
				}
			}
			else {
				name = MEM_mallocN(namelen+1, "name string");
				MeshColorLayer_name_get(&iter.ptr, name);
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
		Mesh_tessface_vertex_colors_next(&iter);
	}
	Mesh_tessface_vertex_colors_end(&iter);

	return found;
}

int Mesh_vertex_colors_length(PointerRNA *ptr)
{
	return rna_Mesh_vertex_colors_length(ptr);
}

static PointerRNA Mesh_vertex_colors_get(CollectionPropertyIterator *iter)
{
	return rna_pointer_inherit_refine(&iter->parent, &RNA_MeshLoopColorLayer, rna_iterator_array_get(iter));
}

void Mesh_vertex_colors_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

	memset(iter, 0, sizeof(*iter));
	iter->parent = *ptr;
	iter->prop = (PropertyRNA *)&rna_Mesh_vertex_colors;

	rna_Mesh_vertex_colors_begin(iter, ptr);

	if (iter->valid)
		iter->ptr = Mesh_vertex_colors_get(iter);
}

void Mesh_vertex_colors_next(CollectionPropertyIterator *iter)
{
	rna_iterator_array_next(iter);

	if (iter->valid)
		iter->ptr = Mesh_vertex_colors_get(iter);
}

void Mesh_vertex_colors_end(CollectionPropertyIterator *iter)
{
	rna_iterator_array_end(iter);
}

int Mesh_vertex_colors_lookup_int(PointerRNA *ptr, int index, PointerRNA *r_ptr)
{
	int found = 0;
	CollectionPropertyIterator iter;

	Mesh_vertex_colors_begin(&iter, ptr);

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
		if (found) *r_ptr = Mesh_vertex_colors_get(&iter);
	}

	Mesh_vertex_colors_end(&iter);

	return found;
}

int Mesh_vertex_colors_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
	extern int MeshLoopColorLayer_name_length(PointerRNA *);
	extern void MeshLoopColorLayer_name_get(PointerRNA *, char *);

	bool found = false;
	CollectionPropertyIterator iter;
	char namebuf[1024];
	char *name;

	Mesh_vertex_colors_begin(&iter, ptr);

	while (iter.valid) {
		if (iter.ptr.data) {
			int namelen = MeshLoopColorLayer_name_length(&iter.ptr);
			if (namelen < 1024) {
				MeshLoopColorLayer_name_get(&iter.ptr, namebuf);
				if (strcmp(namebuf, key) == 0) {
					found = true;
					*r_ptr = iter.ptr;
					break;
				}
			}
			else {
				name = MEM_mallocN(namelen+1, "name string");
				MeshLoopColorLayer_name_get(&iter.ptr, name);
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
		Mesh_vertex_colors_next(&iter);
	}
	Mesh_vertex_colors_end(&iter);

	return found;
}

int Mesh_polygon_layers_float_length(PointerRNA *ptr)
{
	return rna_Mesh_polygon_float_layers_length(ptr);
}

static PointerRNA Mesh_polygon_layers_float_get(CollectionPropertyIterator *iter)
{
	return rna_pointer_inherit_refine(&iter->parent, &RNA_MeshFloatPropertyLayer, rna_iterator_array_get(iter));
}

void Mesh_polygon_layers_float_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

	memset(iter, 0, sizeof(*iter));
	iter->parent = *ptr;
	iter->prop = (PropertyRNA *)&rna_Mesh_polygon_layers_float;

	rna_Mesh_polygon_float_layers_begin(iter, ptr);

	if (iter->valid)
		iter->ptr = Mesh_polygon_layers_float_get(iter);
}

void Mesh_polygon_layers_float_next(CollectionPropertyIterator *iter)
{
	rna_iterator_array_next(iter);

	if (iter->valid)
		iter->ptr = Mesh_polygon_layers_float_get(iter);
}

void Mesh_polygon_layers_float_end(CollectionPropertyIterator *iter)
{
	rna_iterator_array_end(iter);
}

int Mesh_polygon_layers_float_lookup_int(PointerRNA *ptr, int index, PointerRNA *r_ptr)
{
	int found = 0;
	CollectionPropertyIterator iter;

	Mesh_polygon_layers_float_begin(&iter, ptr);

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
		if (found) *r_ptr = Mesh_polygon_layers_float_get(&iter);
	}

	Mesh_polygon_layers_float_end(&iter);

	return found;
}

int Mesh_polygon_layers_float_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
	extern int MeshFloatPropertyLayer_name_length(PointerRNA *);
	extern void MeshFloatPropertyLayer_name_get(PointerRNA *, char *);

	bool found = false;
	CollectionPropertyIterator iter;
	char namebuf[1024];
	char *name;

	Mesh_polygon_layers_float_begin(&iter, ptr);

	while (iter.valid) {
		if (iter.ptr.data) {
			int namelen = MeshFloatPropertyLayer_name_length(&iter.ptr);
			if (namelen < 1024) {
				MeshFloatPropertyLayer_name_get(&iter.ptr, namebuf);
				if (strcmp(namebuf, key) == 0) {
					found = true;
					*r_ptr = iter.ptr;
					break;
				}
			}
			else {
				name = MEM_mallocN(namelen+1, "name string");
				MeshFloatPropertyLayer_name_get(&iter.ptr, name);
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
		Mesh_polygon_layers_float_next(&iter);
	}
	Mesh_polygon_layers_float_end(&iter);

	return found;
}

int Mesh_polygon_layers_int_length(PointerRNA *ptr)
{
	return rna_Mesh_polygon_int_layers_length(ptr);
}

static PointerRNA Mesh_polygon_layers_int_get(CollectionPropertyIterator *iter)
{
	return rna_pointer_inherit_refine(&iter->parent, &RNA_MeshIntPropertyLayer, rna_iterator_array_get(iter));
}

void Mesh_polygon_layers_int_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

	memset(iter, 0, sizeof(*iter));
	iter->parent = *ptr;
	iter->prop = (PropertyRNA *)&rna_Mesh_polygon_layers_int;

	rna_Mesh_polygon_int_layers_begin(iter, ptr);

	if (iter->valid)
		iter->ptr = Mesh_polygon_layers_int_get(iter);
}

void Mesh_polygon_layers_int_next(CollectionPropertyIterator *iter)
{
	rna_iterator_array_next(iter);

	if (iter->valid)
		iter->ptr = Mesh_polygon_layers_int_get(iter);
}

void Mesh_polygon_layers_int_end(CollectionPropertyIterator *iter)
{
	rna_iterator_array_end(iter);
}

int Mesh_polygon_layers_int_lookup_int(PointerRNA *ptr, int index, PointerRNA *r_ptr)
{
	int found = 0;
	CollectionPropertyIterator iter;

	Mesh_polygon_layers_int_begin(&iter, ptr);

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
		if (found) *r_ptr = Mesh_polygon_layers_int_get(&iter);
	}

	Mesh_polygon_layers_int_end(&iter);

	return found;
}

int Mesh_polygon_layers_int_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
	extern int MeshIntPropertyLayer_name_length(PointerRNA *);
	extern void MeshIntPropertyLayer_name_get(PointerRNA *, char *);

	bool found = false;
	CollectionPropertyIterator iter;
	char namebuf[1024];
	char *name;

	Mesh_polygon_layers_int_begin(&iter, ptr);

	while (iter.valid) {
		if (iter.ptr.data) {
			int namelen = MeshIntPropertyLayer_name_length(&iter.ptr);
			if (namelen < 1024) {
				MeshIntPropertyLayer_name_get(&iter.ptr, namebuf);
				if (strcmp(namebuf, key) == 0) {
					found = true;
					*r_ptr = iter.ptr;
					break;
				}
			}
			else {
				name = MEM_mallocN(namelen+1, "name string");
				MeshIntPropertyLayer_name_get(&iter.ptr, name);
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
		Mesh_polygon_layers_int_next(&iter);
	}
	Mesh_polygon_layers_int_end(&iter);

	return found;
}

int Mesh_polygon_layers_string_length(PointerRNA *ptr)
{
	return rna_Mesh_polygon_string_layers_length(ptr);
}

static PointerRNA Mesh_polygon_layers_string_get(CollectionPropertyIterator *iter)
{
	return rna_pointer_inherit_refine(&iter->parent, &RNA_MeshStringPropertyLayer, rna_iterator_array_get(iter));
}

void Mesh_polygon_layers_string_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

	memset(iter, 0, sizeof(*iter));
	iter->parent = *ptr;
	iter->prop = (PropertyRNA *)&rna_Mesh_polygon_layers_string;

	rna_Mesh_polygon_string_layers_begin(iter, ptr);

	if (iter->valid)
		iter->ptr = Mesh_polygon_layers_string_get(iter);
}

void Mesh_polygon_layers_string_next(CollectionPropertyIterator *iter)
{
	rna_iterator_array_next(iter);

	if (iter->valid)
		iter->ptr = Mesh_polygon_layers_string_get(iter);
}

void Mesh_polygon_layers_string_end(CollectionPropertyIterator *iter)
{
	rna_iterator_array_end(iter);
}

int Mesh_polygon_layers_string_lookup_int(PointerRNA *ptr, int index, PointerRNA *r_ptr)
{
	int found = 0;
	CollectionPropertyIterator iter;

	Mesh_polygon_layers_string_begin(&iter, ptr);

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
		if (found) *r_ptr = Mesh_polygon_layers_string_get(&iter);
	}

	Mesh_polygon_layers_string_end(&iter);

	return found;
}

int Mesh_polygon_layers_string_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
	extern int MeshStringPropertyLayer_name_length(PointerRNA *);
	extern void MeshStringPropertyLayer_name_get(PointerRNA *, char *);

	bool found = false;
	CollectionPropertyIterator iter;
	char namebuf[1024];
	char *name;

	Mesh_polygon_layers_string_begin(&iter, ptr);

	while (iter.valid) {
		if (iter.ptr.data) {
			int namelen = MeshStringPropertyLayer_name_length(&iter.ptr);
			if (namelen < 1024) {
				MeshStringPropertyLayer_name_get(&iter.ptr, namebuf);
				if (strcmp(namebuf, key) == 0) {
					found = true;
					*r_ptr = iter.ptr;
					break;
				}
			}
			else {
				name = MEM_mallocN(namelen+1, "name string");
				MeshStringPropertyLayer_name_get(&iter.ptr, name);
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
		Mesh_polygon_layers_string_next(&iter);
	}
	Mesh_polygon_layers_string_end(&iter);

	return found;
}

int Mesh_skin_vertices_length(PointerRNA *ptr)
{
	return rna_Mesh_skin_vertices_length(ptr);
}

static PointerRNA Mesh_skin_vertices_get(CollectionPropertyIterator *iter)
{
	return rna_pointer_inherit_refine(&iter->parent, &RNA_MeshSkinVertexLayer, rna_iterator_array_get(iter));
}

void Mesh_skin_vertices_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

	memset(iter, 0, sizeof(*iter));
	iter->parent = *ptr;
	iter->prop = (PropertyRNA *)&rna_Mesh_skin_vertices;

	rna_Mesh_skin_vertices_begin(iter, ptr);

	if (iter->valid)
		iter->ptr = Mesh_skin_vertices_get(iter);
}

void Mesh_skin_vertices_next(CollectionPropertyIterator *iter)
{
	rna_iterator_array_next(iter);

	if (iter->valid)
		iter->ptr = Mesh_skin_vertices_get(iter);
}

void Mesh_skin_vertices_end(CollectionPropertyIterator *iter)
{
	rna_iterator_array_end(iter);
}

int Mesh_skin_vertices_lookup_int(PointerRNA *ptr, int index, PointerRNA *r_ptr)
{
	int found = 0;
	CollectionPropertyIterator iter;

	Mesh_skin_vertices_begin(&iter, ptr);

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
		if (found) *r_ptr = Mesh_skin_vertices_get(&iter);
	}

	Mesh_skin_vertices_end(&iter);

	return found;
}

int Mesh_skin_vertices_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
	extern int MeshSkinVertexLayer_name_length(PointerRNA *);
	extern void MeshSkinVertexLayer_name_get(PointerRNA *, char *);

	bool found = false;
	CollectionPropertyIterator iter;
	char namebuf[1024];
	char *name;

	Mesh_skin_vertices_begin(&iter, ptr);

	while (iter.valid) {
		if (iter.ptr.data) {
			int namelen = MeshSkinVertexLayer_name_length(&iter.ptr);
			if (namelen < 1024) {
				MeshSkinVertexLayer_name_get(&iter.ptr, namebuf);
				if (strcmp(namebuf, key) == 0) {
					found = true;
					*r_ptr = iter.ptr;
					break;
				}
			}
			else {
				name = MEM_mallocN(namelen+1, "name string");
				MeshSkinVertexLayer_name_get(&iter.ptr, name);
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
		Mesh_skin_vertices_next(&iter);
	}
	Mesh_skin_vertices_end(&iter);

	return found;
}

int Mesh_use_auto_smooth_get(PointerRNA *ptr)
{
	Mesh *data = (Mesh *)(ptr->data);
	return (((data->flag) & 32) != 0);
}

void Mesh_use_auto_smooth_set(PointerRNA *ptr, int value)
{
	Mesh *data = (Mesh *)(ptr->data);
	if (value) data->flag |= 32;
	else data->flag &= ~32;
}

float Mesh_auto_smooth_angle_get(PointerRNA *ptr)
{
	Mesh *data = (Mesh *)(ptr->data);
	return (float)(data->smoothresh);
}

void Mesh_auto_smooth_angle_set(PointerRNA *ptr, float value)
{
	Mesh *data = (Mesh *)(ptr->data);
	data->smoothresh = CLAMPIS(value, 0.0f, 3.1415927410f);
}

int Mesh_show_double_sided_get(PointerRNA *ptr)
{
	Mesh *data = (Mesh *)(ptr->data);
	return (((data->flag) & 4) != 0);
}

void Mesh_show_double_sided_set(PointerRNA *ptr, int value)
{
	Mesh *data = (Mesh *)(ptr->data);
	if (value) data->flag |= 4;
	else data->flag &= ~4;
}

PointerRNA Mesh_texco_mesh_get(PointerRNA *ptr)
{
	Mesh *data = (Mesh *)(ptr->data);
	return rna_pointer_inherit_refine(ptr, &RNA_Mesh, data->texcomesh);
}

void Mesh_texco_mesh_set(PointerRNA *ptr, PointerRNA value)
{
	Mesh *data = (Mesh *)(ptr->data);

	if (data->texcomesh)
		id_us_min((ID *)data->texcomesh);
	if (value.data)
		id_us_plus((ID *)value.data);

	data->texcomesh = value.data;
}

PointerRNA Mesh_shape_keys_get(PointerRNA *ptr)
{
	Mesh *data = (Mesh *)(ptr->data);
	return rna_pointer_inherit_refine(ptr, &RNA_Key, data->key);
}

int Mesh_use_auto_texspace_get(PointerRNA *ptr)
{
	Mesh *data = (Mesh *)(ptr->data);
	return (((data->texflag) & 1) != 0);
}

void Mesh_use_auto_texspace_set(PointerRNA *ptr, int value)
{
	Mesh *data = (Mesh *)(ptr->data);
	if (value) data->texflag |= 1;
	else data->texflag &= ~1;
}

int Mesh_show_edges_get(PointerRNA *ptr)
{
	Mesh *data = (Mesh *)(ptr->data);
	return (((data->drawflag) & 1) != 0);
}

void Mesh_show_edges_set(PointerRNA *ptr, int value)
{
	Mesh *data = (Mesh *)(ptr->data);
	if (value) data->drawflag |= 1;
	else data->drawflag &= ~1;
}

int Mesh_show_faces_get(PointerRNA *ptr)
{
	Mesh *data = (Mesh *)(ptr->data);
	return (((data->drawflag) & 2) != 0);
}

void Mesh_show_faces_set(PointerRNA *ptr, int value)
{
	Mesh *data = (Mesh *)(ptr->data);
	if (value) data->drawflag |= 2;
	else data->drawflag &= ~2;
}

int Mesh_show_normal_face_get(PointerRNA *ptr)
{
	Mesh *data = (Mesh *)(ptr->data);
	return (((data->drawflag) & 4) != 0);
}

void Mesh_show_normal_face_set(PointerRNA *ptr, int value)
{
	Mesh *data = (Mesh *)(ptr->data);
	if (value) data->drawflag |= 4;
	else data->drawflag &= ~4;
}

int Mesh_show_normal_loop_get(PointerRNA *ptr)
{
	Mesh *data = (Mesh *)(ptr->data);
	return (((data->drawflag) & 262144) != 0);
}

void Mesh_show_normal_loop_set(PointerRNA *ptr, int value)
{
	Mesh *data = (Mesh *)(ptr->data);
	if (value) data->drawflag |= 262144;
	else data->drawflag &= ~262144;
}

int Mesh_show_normal_vertex_get(PointerRNA *ptr)
{
	Mesh *data = (Mesh *)(ptr->data);
	return (((data->drawflag) & 8) != 0);
}

void Mesh_show_normal_vertex_set(PointerRNA *ptr, int value)
{
	Mesh *data = (Mesh *)(ptr->data);
	if (value) data->drawflag |= 8;
	else data->drawflag &= ~8;
}

int Mesh_show_weight_get(PointerRNA *ptr)
{
	Mesh *data = (Mesh *)(ptr->data);
	return (((data->drawflag) & 16) != 0);
}

void Mesh_show_weight_set(PointerRNA *ptr, int value)
{
	Mesh *data = (Mesh *)(ptr->data);
	if (value) data->drawflag |= 16;
	else data->drawflag &= ~16;
}

int Mesh_show_edge_crease_get(PointerRNA *ptr)
{
	Mesh *data = (Mesh *)(ptr->data);
	return (((data->drawflag) & 64) != 0);
}

void Mesh_show_edge_crease_set(PointerRNA *ptr, int value)
{
	Mesh *data = (Mesh *)(ptr->data);
	if (value) data->drawflag |= 64;
	else data->drawflag &= ~64;
}

int Mesh_show_edge_bevel_weight_get(PointerRNA *ptr)
{
	Mesh *data = (Mesh *)(ptr->data);
	return (((data->drawflag) & 512) != 0);
}

void Mesh_show_edge_bevel_weight_set(PointerRNA *ptr, int value)
{
	Mesh *data = (Mesh *)(ptr->data);
	if (value) data->drawflag |= 512;
	else data->drawflag &= ~512;
}

int Mesh_show_edge_seams_get(PointerRNA *ptr)
{
	Mesh *data = (Mesh *)(ptr->data);
	return (((data->drawflag) & 128) != 0);
}

void Mesh_show_edge_seams_set(PointerRNA *ptr, int value)
{
	Mesh *data = (Mesh *)(ptr->data);
	if (value) data->drawflag |= 128;
	else data->drawflag &= ~128;
}

int Mesh_show_edge_sharp_get(PointerRNA *ptr)
{
	Mesh *data = (Mesh *)(ptr->data);
	return (((data->drawflag) & 256) != 0);
}

void Mesh_show_edge_sharp_set(PointerRNA *ptr, int value)
{
	Mesh *data = (Mesh *)(ptr->data);
	if (value) data->drawflag |= 256;
	else data->drawflag &= ~256;
}

int Mesh_show_freestyle_edge_marks_get(PointerRNA *ptr)
{
	Mesh *data = (Mesh *)(ptr->data);
	return (((data->drawflag) & 32768) != 0);
}

void Mesh_show_freestyle_edge_marks_set(PointerRNA *ptr, int value)
{
	Mesh *data = (Mesh *)(ptr->data);
	if (value) data->drawflag |= 32768;
	else data->drawflag &= ~32768;
}

int Mesh_show_freestyle_face_marks_get(PointerRNA *ptr)
{
	Mesh *data = (Mesh *)(ptr->data);
	return (((data->drawflag) & 65536) != 0);
}

void Mesh_show_freestyle_face_marks_set(PointerRNA *ptr, int value)
{
	Mesh *data = (Mesh *)(ptr->data);
	if (value) data->drawflag |= 65536;
	else data->drawflag &= ~65536;
}

int Mesh_show_statvis_get(PointerRNA *ptr)
{
	Mesh *data = (Mesh *)(ptr->data);
	return (((data->drawflag) & 131072) != 0);
}

void Mesh_show_statvis_set(PointerRNA *ptr, int value)
{
	Mesh *data = (Mesh *)(ptr->data);
	if (value) data->drawflag |= 131072;
	else data->drawflag &= ~131072;
}

int Mesh_show_extra_edge_length_get(PointerRNA *ptr)
{
	Mesh *data = (Mesh *)(ptr->data);
	return (((data->drawflag) & 1024) != 0);
}

void Mesh_show_extra_edge_length_set(PointerRNA *ptr, int value)
{
	Mesh *data = (Mesh *)(ptr->data);
	if (value) data->drawflag |= 1024;
	else data->drawflag &= ~1024;
}

int Mesh_show_extra_edge_angle_get(PointerRNA *ptr)
{
	Mesh *data = (Mesh *)(ptr->data);
	return (((data->drawflag) & 8192) != 0);
}

void Mesh_show_extra_edge_angle_set(PointerRNA *ptr, int value)
{
	Mesh *data = (Mesh *)(ptr->data);
	if (value) data->drawflag |= 8192;
	else data->drawflag &= ~8192;
}

int Mesh_show_extra_face_angle_get(PointerRNA *ptr)
{
	Mesh *data = (Mesh *)(ptr->data);
	return (((data->drawflag) & 4096) != 0);
}

void Mesh_show_extra_face_angle_set(PointerRNA *ptr, int value)
{
	Mesh *data = (Mesh *)(ptr->data);
	if (value) data->drawflag |= 4096;
	else data->drawflag &= ~4096;
}

int Mesh_show_extra_face_area_get(PointerRNA *ptr)
{
	Mesh *data = (Mesh *)(ptr->data);
	return (((data->drawflag) & 2048) != 0);
}

void Mesh_show_extra_face_area_set(PointerRNA *ptr, int value)
{
	Mesh *data = (Mesh *)(ptr->data);
	if (value) data->drawflag |= 2048;
	else data->drawflag &= ~2048;
}

int Mesh_show_extra_indices_get(PointerRNA *ptr)
{
	Mesh *data = (Mesh *)(ptr->data);
	return (((data->drawflag) & 16384) != 0);
}

void Mesh_show_extra_indices_set(PointerRNA *ptr, int value)
{
	Mesh *data = (Mesh *)(ptr->data);
	if (value) data->drawflag |= 16384;
	else data->drawflag &= ~16384;
}

int Mesh_use_mirror_x_get(PointerRNA *ptr)
{
	Mesh *data = (Mesh *)(ptr->data);
	return (((data->editflag) & 1) != 0);
}

void Mesh_use_mirror_x_set(PointerRNA *ptr, int value)
{
	Mesh *data = (Mesh *)(ptr->data);
	if (value) data->editflag |= 1;
	else data->editflag &= ~1;
}

int Mesh_use_mirror_topology_get(PointerRNA *ptr)
{
	Mesh *data = (Mesh *)(ptr->data);
	return (((data->editflag) & 16) != 0);
}

void Mesh_use_mirror_topology_set(PointerRNA *ptr, int value)
{
	Mesh *data = (Mesh *)(ptr->data);
	if (value) data->editflag |= 16;
	else data->editflag &= ~16;
}

int Mesh_use_paint_mask_get(PointerRNA *ptr)
{
	Mesh *data = (Mesh *)(ptr->data);
	return (((data->editflag) & 8) != 0);
}

void Mesh_use_paint_mask_set(PointerRNA *ptr, int value)
{
	Mesh *data = (Mesh *)(ptr->data);
	if (value) data->editflag |= 8;
	else data->editflag &= ~8;
}

int Mesh_use_paint_mask_vertex_get(PointerRNA *ptr)
{
	Mesh *data = (Mesh *)(ptr->data);
	return (((data->editflag) & 32) != 0);
}

void Mesh_use_paint_mask_vertex_set(PointerRNA *ptr, int value)
{
	Mesh *data = (Mesh *)(ptr->data);
	if (value) data->editflag |= 32;
	else data->editflag &= ~32;
}

int Mesh_use_customdata_vertex_bevel_get(PointerRNA *ptr)
{
	Mesh *data = (Mesh *)(ptr->data);
	return (((data->cd_flag) & 1) != 0);
}

void Mesh_use_customdata_vertex_bevel_set(PointerRNA *ptr, int value)
{
	Mesh *data = (Mesh *)(ptr->data);
	if (value) data->cd_flag |= 1;
	else data->cd_flag &= ~1;
}

int Mesh_use_customdata_edge_bevel_get(PointerRNA *ptr)
{
	Mesh *data = (Mesh *)(ptr->data);
	return (((data->cd_flag) & 2) != 0);
}

void Mesh_use_customdata_edge_bevel_set(PointerRNA *ptr, int value)
{
	Mesh *data = (Mesh *)(ptr->data);
	if (value) data->cd_flag |= 2;
	else data->cd_flag &= ~2;
}

int Mesh_use_customdata_edge_crease_get(PointerRNA *ptr)
{
	Mesh *data = (Mesh *)(ptr->data);
	return (((data->cd_flag) & 4) != 0);
}

void Mesh_use_customdata_edge_crease_set(PointerRNA *ptr, int value)
{
	Mesh *data = (Mesh *)(ptr->data);
	if (value) data->cd_flag |= 4;
	else data->cd_flag &= ~4;
}

int Mesh_total_vert_sel_get(PointerRNA *ptr)
{
	return rna_Mesh_tot_vert_get(ptr);
}

int Mesh_total_edge_sel_get(PointerRNA *ptr)
{
	return rna_Mesh_tot_edge_get(ptr);
}

int Mesh_total_face_sel_get(PointerRNA *ptr)
{
	return rna_Mesh_tot_face_get(ptr);
}

int Mesh_is_editmode_get(PointerRNA *ptr)
{
	return rna_Mesh_is_editmode_get(ptr);
}

PointerRNA Mesh_animation_data_get(PointerRNA *ptr)
{
	Mesh *data = (Mesh *)(ptr->data);
	return rna_pointer_inherit_refine(ptr, &RNA_AnimData, data->adt);
}

int Mesh_auto_texspace_get(PointerRNA *ptr)
{
	Mesh *data = (Mesh *)(ptr->data);
	return (((data->texflag) & 1) != 0);
}

void Mesh_auto_texspace_set(PointerRNA *ptr, int value)
{
	Mesh *data = (Mesh *)(ptr->data);
	if (value) data->texflag |= 1;
	else data->texflag &= ~1;
}

void Mesh_texspace_location_get(PointerRNA *ptr, float values[3])
{
	rna_Mesh_texspace_loc_get(ptr, values);
}

void Mesh_texspace_location_set(PointerRNA *ptr, const float values[3])
{
	Mesh *data = (Mesh *)(ptr->data);
	unsigned int i;

	for (i = 0; i < 3; i++) {
		((float *)data->loc)[i] = values[i];
	}
}

void Mesh_texspace_size_get(PointerRNA *ptr, float values[3])
{
	rna_Mesh_texspace_size_get(ptr, values);
}

void Mesh_texspace_size_set(PointerRNA *ptr, const float values[3])
{
	Mesh *data = (Mesh *)(ptr->data);
	unsigned int i;

	for (i = 0; i < 3; i++) {
		((float *)data->size)[i] = values[i];
	}
}

int Mesh_materials_length(PointerRNA *ptr)
{
	Mesh *data = (Mesh *)(ptr->data);
	return (data->mat == NULL) ? 0 : data->totcol;
}

static PointerRNA Mesh_materials_get(CollectionPropertyIterator *iter)
{
	return rna_pointer_inherit_refine(&iter->parent, &RNA_Material, rna_iterator_array_dereference_get(iter));
}

void Mesh_materials_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{
	Mesh *data = (Mesh *)(ptr->data);

	memset(iter, 0, sizeof(*iter));
	iter->parent = *ptr;
	iter->prop = (PropertyRNA *)&rna_Mesh_materials;

	rna_iterator_array_begin(iter, data->mat, sizeof(data->mat[0]), data->totcol, 0, NULL);

	if (iter->valid)
		iter->ptr = Mesh_materials_get(iter);
}

void Mesh_materials_next(CollectionPropertyIterator *iter)
{
	rna_iterator_array_next(iter);

	if (iter->valid)
		iter->ptr = Mesh_materials_get(iter);
}

void Mesh_materials_end(CollectionPropertyIterator *iter)
{
	rna_iterator_array_end(iter);
}

int Mesh_materials_lookup_int(PointerRNA *ptr, int index, PointerRNA *r_ptr)
{
	int found = 0;
	CollectionPropertyIterator iter;

	Mesh_materials_begin(&iter, ptr);

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
		if (found) *r_ptr = Mesh_materials_get(&iter);
	}

	Mesh_materials_end(&iter);

	return found;
}

int Mesh_materials_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
	extern int ID_name_length(PointerRNA *);
	extern void ID_name_get(PointerRNA *, char *);

	bool found = false;
	CollectionPropertyIterator iter;
	char namebuf[1024];
	char *name;

	Mesh_materials_begin(&iter, ptr);

	while (iter.valid) {
		if (iter.ptr.data) {
			int namelen = ID_name_length(&iter.ptr);
			if (namelen < 1024) {
				ID_name_get(&iter.ptr, namebuf);
				if (strcmp(namebuf, key) == 0) {
					found = true;
					*r_ptr = iter.ptr;
					break;
				}
			}
			else {
				name = MEM_mallocN(namelen+1, "name string");
				ID_name_get(&iter.ptr, name);
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
		Mesh_materials_next(&iter);
	}
	Mesh_materials_end(&iter);

	return found;
}

static PointerRNA MeshVertices_rna_properties_get(CollectionPropertyIterator *iter)
{
	return rna_builtin_properties_get(iter);
}

void MeshVertices_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

	memset(iter, 0, sizeof(*iter));
	iter->parent = *ptr;
	iter->prop = (PropertyRNA *)&rna_MeshVertices_rna_properties;

	rna_builtin_properties_begin(iter, ptr);

	if (iter->valid)
		iter->ptr = MeshVertices_rna_properties_get(iter);
}

void MeshVertices_rna_properties_next(CollectionPropertyIterator *iter)
{
	rna_builtin_properties_next(iter);

	if (iter->valid)
		iter->ptr = MeshVertices_rna_properties_get(iter);
}

void MeshVertices_rna_properties_end(CollectionPropertyIterator *iter)
{
	rna_iterator_listbase_end(iter);
}

int MeshVertices_rna_properties_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
	return rna_builtin_properties_lookup_string(ptr, key, r_ptr);
}

PointerRNA MeshVertices_rna_type_get(PointerRNA *ptr)
{
	return rna_builtin_type_get(ptr);
}

static PointerRNA MeshEdges_rna_properties_get(CollectionPropertyIterator *iter)
{
	return rna_builtin_properties_get(iter);
}

void MeshEdges_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

	memset(iter, 0, sizeof(*iter));
	iter->parent = *ptr;
	iter->prop = (PropertyRNA *)&rna_MeshEdges_rna_properties;

	rna_builtin_properties_begin(iter, ptr);

	if (iter->valid)
		iter->ptr = MeshEdges_rna_properties_get(iter);
}

void MeshEdges_rna_properties_next(CollectionPropertyIterator *iter)
{
	rna_builtin_properties_next(iter);

	if (iter->valid)
		iter->ptr = MeshEdges_rna_properties_get(iter);
}

void MeshEdges_rna_properties_end(CollectionPropertyIterator *iter)
{
	rna_iterator_listbase_end(iter);
}

int MeshEdges_rna_properties_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
	return rna_builtin_properties_lookup_string(ptr, key, r_ptr);
}

PointerRNA MeshEdges_rna_type_get(PointerRNA *ptr)
{
	return rna_builtin_type_get(ptr);
}

static PointerRNA MeshTessFaces_rna_properties_get(CollectionPropertyIterator *iter)
{
	return rna_builtin_properties_get(iter);
}

void MeshTessFaces_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

	memset(iter, 0, sizeof(*iter));
	iter->parent = *ptr;
	iter->prop = (PropertyRNA *)&rna_MeshTessFaces_rna_properties;

	rna_builtin_properties_begin(iter, ptr);

	if (iter->valid)
		iter->ptr = MeshTessFaces_rna_properties_get(iter);
}

void MeshTessFaces_rna_properties_next(CollectionPropertyIterator *iter)
{
	rna_builtin_properties_next(iter);

	if (iter->valid)
		iter->ptr = MeshTessFaces_rna_properties_get(iter);
}

void MeshTessFaces_rna_properties_end(CollectionPropertyIterator *iter)
{
	rna_iterator_listbase_end(iter);
}

int MeshTessFaces_rna_properties_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
	return rna_builtin_properties_lookup_string(ptr, key, r_ptr);
}

PointerRNA MeshTessFaces_rna_type_get(PointerRNA *ptr)
{
	return rna_builtin_type_get(ptr);
}

int MeshTessFaces_active_get(PointerRNA *ptr)
{
	Mesh *data = (Mesh *)(ptr->data);
	return (int)(data->act_face);
}

void MeshTessFaces_active_set(PointerRNA *ptr, int value)
{
	Mesh *data = (Mesh *)(ptr->data);
	data->act_face = value;
}

static PointerRNA MeshLoops_rna_properties_get(CollectionPropertyIterator *iter)
{
	return rna_builtin_properties_get(iter);
}

void MeshLoops_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

	memset(iter, 0, sizeof(*iter));
	iter->parent = *ptr;
	iter->prop = (PropertyRNA *)&rna_MeshLoops_rna_properties;

	rna_builtin_properties_begin(iter, ptr);

	if (iter->valid)
		iter->ptr = MeshLoops_rna_properties_get(iter);
}

void MeshLoops_rna_properties_next(CollectionPropertyIterator *iter)
{
	rna_builtin_properties_next(iter);

	if (iter->valid)
		iter->ptr = MeshLoops_rna_properties_get(iter);
}

void MeshLoops_rna_properties_end(CollectionPropertyIterator *iter)
{
	rna_iterator_listbase_end(iter);
}

int MeshLoops_rna_properties_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
	return rna_builtin_properties_lookup_string(ptr, key, r_ptr);
}

PointerRNA MeshLoops_rna_type_get(PointerRNA *ptr)
{
	return rna_builtin_type_get(ptr);
}

static PointerRNA MeshPolygons_rna_properties_get(CollectionPropertyIterator *iter)
{
	return rna_builtin_properties_get(iter);
}

void MeshPolygons_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

	memset(iter, 0, sizeof(*iter));
	iter->parent = *ptr;
	iter->prop = (PropertyRNA *)&rna_MeshPolygons_rna_properties;

	rna_builtin_properties_begin(iter, ptr);

	if (iter->valid)
		iter->ptr = MeshPolygons_rna_properties_get(iter);
}

void MeshPolygons_rna_properties_next(CollectionPropertyIterator *iter)
{
	rna_builtin_properties_next(iter);

	if (iter->valid)
		iter->ptr = MeshPolygons_rna_properties_get(iter);
}

void MeshPolygons_rna_properties_end(CollectionPropertyIterator *iter)
{
	rna_iterator_listbase_end(iter);
}

int MeshPolygons_rna_properties_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
	return rna_builtin_properties_lookup_string(ptr, key, r_ptr);
}

PointerRNA MeshPolygons_rna_type_get(PointerRNA *ptr)
{
	return rna_builtin_type_get(ptr);
}

int MeshPolygons_active_get(PointerRNA *ptr)
{
	Mesh *data = (Mesh *)(ptr->data);
	return (int)(data->act_face);
}

void MeshPolygons_active_set(PointerRNA *ptr, int value)
{
	Mesh *data = (Mesh *)(ptr->data);
	data->act_face = value;
}

static PointerRNA UVLoopLayers_rna_properties_get(CollectionPropertyIterator *iter)
{
	return rna_builtin_properties_get(iter);
}

void UVLoopLayers_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

	memset(iter, 0, sizeof(*iter));
	iter->parent = *ptr;
	iter->prop = (PropertyRNA *)&rna_UVLoopLayers_rna_properties;

	rna_builtin_properties_begin(iter, ptr);

	if (iter->valid)
		iter->ptr = UVLoopLayers_rna_properties_get(iter);
}

void UVLoopLayers_rna_properties_next(CollectionPropertyIterator *iter)
{
	rna_builtin_properties_next(iter);

	if (iter->valid)
		iter->ptr = UVLoopLayers_rna_properties_get(iter);
}

void UVLoopLayers_rna_properties_end(CollectionPropertyIterator *iter)
{
	rna_iterator_listbase_end(iter);
}

int UVLoopLayers_rna_properties_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
	return rna_builtin_properties_lookup_string(ptr, key, r_ptr);
}

PointerRNA UVLoopLayers_rna_type_get(PointerRNA *ptr)
{
	return rna_builtin_type_get(ptr);
}

PointerRNA UVLoopLayers_active_get(PointerRNA *ptr)
{
	return rna_Mesh_uv_layer_active_get(ptr);
}

void UVLoopLayers_active_set(PointerRNA *ptr, PointerRNA value)
{
	rna_Mesh_uv_layer_active_set(ptr, value);
}

int UVLoopLayers_active_index_get(PointerRNA *ptr)
{
	return rna_Mesh_uv_layer_active_index_get(ptr);
}

void UVLoopLayers_active_index_set(PointerRNA *ptr, int value)
{
	rna_Mesh_uv_layer_active_index_set(ptr, value);
}

static PointerRNA TessfaceUVTextures_rna_properties_get(CollectionPropertyIterator *iter)
{
	return rna_builtin_properties_get(iter);
}

void TessfaceUVTextures_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

	memset(iter, 0, sizeof(*iter));
	iter->parent = *ptr;
	iter->prop = (PropertyRNA *)&rna_TessfaceUVTextures_rna_properties;

	rna_builtin_properties_begin(iter, ptr);

	if (iter->valid)
		iter->ptr = TessfaceUVTextures_rna_properties_get(iter);
}

void TessfaceUVTextures_rna_properties_next(CollectionPropertyIterator *iter)
{
	rna_builtin_properties_next(iter);

	if (iter->valid)
		iter->ptr = TessfaceUVTextures_rna_properties_get(iter);
}

void TessfaceUVTextures_rna_properties_end(CollectionPropertyIterator *iter)
{
	rna_iterator_listbase_end(iter);
}

int TessfaceUVTextures_rna_properties_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
	return rna_builtin_properties_lookup_string(ptr, key, r_ptr);
}

PointerRNA TessfaceUVTextures_rna_type_get(PointerRNA *ptr)
{
	return rna_builtin_type_get(ptr);
}

PointerRNA TessfaceUVTextures_active_get(PointerRNA *ptr)
{
	return rna_Mesh_tessface_uv_texture_active_get(ptr);
}

int TessfaceUVTextures_active_index_get(PointerRNA *ptr)
{
	return rna_Mesh_tessface_uv_texture_active_index_get(ptr);
}

void TessfaceUVTextures_active_index_set(PointerRNA *ptr, int value)
{
	rna_Mesh_tessface_uv_texture_active_index_set(ptr, value);
}

static PointerRNA UVTextures_rna_properties_get(CollectionPropertyIterator *iter)
{
	return rna_builtin_properties_get(iter);
}

void UVTextures_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

	memset(iter, 0, sizeof(*iter));
	iter->parent = *ptr;
	iter->prop = (PropertyRNA *)&rna_UVTextures_rna_properties;

	rna_builtin_properties_begin(iter, ptr);

	if (iter->valid)
		iter->ptr = UVTextures_rna_properties_get(iter);
}

void UVTextures_rna_properties_next(CollectionPropertyIterator *iter)
{
	rna_builtin_properties_next(iter);

	if (iter->valid)
		iter->ptr = UVTextures_rna_properties_get(iter);
}

void UVTextures_rna_properties_end(CollectionPropertyIterator *iter)
{
	rna_iterator_listbase_end(iter);
}

int UVTextures_rna_properties_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
	return rna_builtin_properties_lookup_string(ptr, key, r_ptr);
}

PointerRNA UVTextures_rna_type_get(PointerRNA *ptr)
{
	return rna_builtin_type_get(ptr);
}

PointerRNA UVTextures_active_get(PointerRNA *ptr)
{
	return rna_Mesh_uv_texture_active_get(ptr);
}

void UVTextures_active_set(PointerRNA *ptr, PointerRNA value)
{
	rna_Mesh_uv_texture_active_set(ptr, value);
}

int UVTextures_active_index_get(PointerRNA *ptr)
{
	return rna_Mesh_uv_texture_active_index_get(ptr);
}

void UVTextures_active_index_set(PointerRNA *ptr, int value)
{
	rna_Mesh_uv_texture_active_index_set(ptr, value);
}

static PointerRNA VertexColors_rna_properties_get(CollectionPropertyIterator *iter)
{
	return rna_builtin_properties_get(iter);
}

void VertexColors_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

	memset(iter, 0, sizeof(*iter));
	iter->parent = *ptr;
	iter->prop = (PropertyRNA *)&rna_VertexColors_rna_properties;

	rna_builtin_properties_begin(iter, ptr);

	if (iter->valid)
		iter->ptr = VertexColors_rna_properties_get(iter);
}

void VertexColors_rna_properties_next(CollectionPropertyIterator *iter)
{
	rna_builtin_properties_next(iter);

	if (iter->valid)
		iter->ptr = VertexColors_rna_properties_get(iter);
}

void VertexColors_rna_properties_end(CollectionPropertyIterator *iter)
{
	rna_iterator_listbase_end(iter);
}

int VertexColors_rna_properties_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
	return rna_builtin_properties_lookup_string(ptr, key, r_ptr);
}

PointerRNA VertexColors_rna_type_get(PointerRNA *ptr)
{
	return rna_builtin_type_get(ptr);
}

PointerRNA VertexColors_active_get(PointerRNA *ptr)
{
	return rna_Mesh_tessface_vertex_color_active_get(ptr);
}

int VertexColors_active_index_get(PointerRNA *ptr)
{
	return rna_Mesh_tessface_vertex_color_active_index_get(ptr);
}

void VertexColors_active_index_set(PointerRNA *ptr, int value)
{
	rna_Mesh_tessface_vertex_color_active_index_set(ptr, value);
}

static PointerRNA LoopColors_rna_properties_get(CollectionPropertyIterator *iter)
{
	return rna_builtin_properties_get(iter);
}

void LoopColors_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

	memset(iter, 0, sizeof(*iter));
	iter->parent = *ptr;
	iter->prop = (PropertyRNA *)&rna_LoopColors_rna_properties;

	rna_builtin_properties_begin(iter, ptr);

	if (iter->valid)
		iter->ptr = LoopColors_rna_properties_get(iter);
}

void LoopColors_rna_properties_next(CollectionPropertyIterator *iter)
{
	rna_builtin_properties_next(iter);

	if (iter->valid)
		iter->ptr = LoopColors_rna_properties_get(iter);
}

void LoopColors_rna_properties_end(CollectionPropertyIterator *iter)
{
	rna_iterator_listbase_end(iter);
}

int LoopColors_rna_properties_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
	return rna_builtin_properties_lookup_string(ptr, key, r_ptr);
}

PointerRNA LoopColors_rna_type_get(PointerRNA *ptr)
{
	return rna_builtin_type_get(ptr);
}

PointerRNA LoopColors_active_get(PointerRNA *ptr)
{
	return rna_Mesh_vertex_color_active_get(ptr);
}

void LoopColors_active_set(PointerRNA *ptr, PointerRNA value)
{
	rna_Mesh_vertex_color_active_set(ptr, value);
}

int LoopColors_active_index_get(PointerRNA *ptr)
{
	return rna_Mesh_vertex_color_active_index_get(ptr);
}

void LoopColors_active_index_set(PointerRNA *ptr, int value)
{
	rna_Mesh_vertex_color_active_index_set(ptr, value);
}

static PointerRNA FloatProperties_rna_properties_get(CollectionPropertyIterator *iter)
{
	return rna_builtin_properties_get(iter);
}

void FloatProperties_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

	memset(iter, 0, sizeof(*iter));
	iter->parent = *ptr;
	iter->prop = (PropertyRNA *)&rna_FloatProperties_rna_properties;

	rna_builtin_properties_begin(iter, ptr);

	if (iter->valid)
		iter->ptr = FloatProperties_rna_properties_get(iter);
}

void FloatProperties_rna_properties_next(CollectionPropertyIterator *iter)
{
	rna_builtin_properties_next(iter);

	if (iter->valid)
		iter->ptr = FloatProperties_rna_properties_get(iter);
}

void FloatProperties_rna_properties_end(CollectionPropertyIterator *iter)
{
	rna_iterator_listbase_end(iter);
}

int FloatProperties_rna_properties_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
	return rna_builtin_properties_lookup_string(ptr, key, r_ptr);
}

PointerRNA FloatProperties_rna_type_get(PointerRNA *ptr)
{
	return rna_builtin_type_get(ptr);
}

static PointerRNA IntProperties_rna_properties_get(CollectionPropertyIterator *iter)
{
	return rna_builtin_properties_get(iter);
}

void IntProperties_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

	memset(iter, 0, sizeof(*iter));
	iter->parent = *ptr;
	iter->prop = (PropertyRNA *)&rna_IntProperties_rna_properties;

	rna_builtin_properties_begin(iter, ptr);

	if (iter->valid)
		iter->ptr = IntProperties_rna_properties_get(iter);
}

void IntProperties_rna_properties_next(CollectionPropertyIterator *iter)
{
	rna_builtin_properties_next(iter);

	if (iter->valid)
		iter->ptr = IntProperties_rna_properties_get(iter);
}

void IntProperties_rna_properties_end(CollectionPropertyIterator *iter)
{
	rna_iterator_listbase_end(iter);
}

int IntProperties_rna_properties_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
	return rna_builtin_properties_lookup_string(ptr, key, r_ptr);
}

PointerRNA IntProperties_rna_type_get(PointerRNA *ptr)
{
	return rna_builtin_type_get(ptr);
}

static PointerRNA StringProperties_rna_properties_get(CollectionPropertyIterator *iter)
{
	return rna_builtin_properties_get(iter);
}

void StringProperties_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

	memset(iter, 0, sizeof(*iter));
	iter->parent = *ptr;
	iter->prop = (PropertyRNA *)&rna_StringProperties_rna_properties;

	rna_builtin_properties_begin(iter, ptr);

	if (iter->valid)
		iter->ptr = StringProperties_rna_properties_get(iter);
}

void StringProperties_rna_properties_next(CollectionPropertyIterator *iter)
{
	rna_builtin_properties_next(iter);

	if (iter->valid)
		iter->ptr = StringProperties_rna_properties_get(iter);
}

void StringProperties_rna_properties_end(CollectionPropertyIterator *iter)
{
	rna_iterator_listbase_end(iter);
}

int StringProperties_rna_properties_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
	return rna_builtin_properties_lookup_string(ptr, key, r_ptr);
}

PointerRNA StringProperties_rna_type_get(PointerRNA *ptr)
{
	return rna_builtin_type_get(ptr);
}

static PointerRNA MeshSkinVertexLayer_rna_properties_get(CollectionPropertyIterator *iter)
{
	return rna_builtin_properties_get(iter);
}

void MeshSkinVertexLayer_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

	memset(iter, 0, sizeof(*iter));
	iter->parent = *ptr;
	iter->prop = (PropertyRNA *)&rna_MeshSkinVertexLayer_rna_properties;

	rna_builtin_properties_begin(iter, ptr);

	if (iter->valid)
		iter->ptr = MeshSkinVertexLayer_rna_properties_get(iter);
}

void MeshSkinVertexLayer_rna_properties_next(CollectionPropertyIterator *iter)
{
	rna_builtin_properties_next(iter);

	if (iter->valid)
		iter->ptr = MeshSkinVertexLayer_rna_properties_get(iter);
}

void MeshSkinVertexLayer_rna_properties_end(CollectionPropertyIterator *iter)
{
	rna_iterator_listbase_end(iter);
}

int MeshSkinVertexLayer_rna_properties_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
	return rna_builtin_properties_lookup_string(ptr, key, r_ptr);
}

PointerRNA MeshSkinVertexLayer_rna_type_get(PointerRNA *ptr)
{
	return rna_builtin_type_get(ptr);
}

void MeshSkinVertexLayer_name_get(PointerRNA *ptr, char *value)
{
	CustomDataLayer *data = (CustomDataLayer *)(ptr->data);
	BLI_strncpy_utf8(value, data->name, 64);
}

int MeshSkinVertexLayer_name_length(PointerRNA *ptr)
{
	CustomDataLayer *data = (CustomDataLayer *)(ptr->data);
	return strlen(data->name);
}

void MeshSkinVertexLayer_name_set(PointerRNA *ptr, const char *value)
{
	rna_MeshVertexLayer_name_set(ptr, value);
}

static PointerRNA MeshSkinVertexLayer_data_get(CollectionPropertyIterator *iter)
{
	return rna_pointer_inherit_refine(&iter->parent, &RNA_MeshSkinVertex, rna_iterator_array_get(iter));
}

void MeshSkinVertexLayer_data_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

	memset(iter, 0, sizeof(*iter));
	iter->parent = *ptr;
	iter->prop = (PropertyRNA *)&rna_MeshSkinVertexLayer_data;

	rna_MeshSkinVertexLayer_data_begin(iter, ptr);

	if (iter->valid)
		iter->ptr = MeshSkinVertexLayer_data_get(iter);
}

void MeshSkinVertexLayer_data_next(CollectionPropertyIterator *iter)
{
	rna_iterator_array_next(iter);

	if (iter->valid)
		iter->ptr = MeshSkinVertexLayer_data_get(iter);
}

void MeshSkinVertexLayer_data_end(CollectionPropertyIterator *iter)
{
	rna_iterator_array_end(iter);
}

int MeshSkinVertexLayer_data_lookup_int(PointerRNA *ptr, int index, PointerRNA *r_ptr)
{
	int found = 0;
	CollectionPropertyIterator iter;

	MeshSkinVertexLayer_data_begin(&iter, ptr);

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
		if (found) *r_ptr = MeshSkinVertexLayer_data_get(&iter);
	}

	MeshSkinVertexLayer_data_end(&iter);

	return found;
}

static PointerRNA MeshSkinVertex_rna_properties_get(CollectionPropertyIterator *iter)
{
	return rna_builtin_properties_get(iter);
}

void MeshSkinVertex_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

	memset(iter, 0, sizeof(*iter));
	iter->parent = *ptr;
	iter->prop = (PropertyRNA *)&rna_MeshSkinVertex_rna_properties;

	rna_builtin_properties_begin(iter, ptr);

	if (iter->valid)
		iter->ptr = MeshSkinVertex_rna_properties_get(iter);
}

void MeshSkinVertex_rna_properties_next(CollectionPropertyIterator *iter)
{
	rna_builtin_properties_next(iter);

	if (iter->valid)
		iter->ptr = MeshSkinVertex_rna_properties_get(iter);
}

void MeshSkinVertex_rna_properties_end(CollectionPropertyIterator *iter)
{
	rna_iterator_listbase_end(iter);
}

int MeshSkinVertex_rna_properties_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
	return rna_builtin_properties_lookup_string(ptr, key, r_ptr);
}

PointerRNA MeshSkinVertex_rna_type_get(PointerRNA *ptr)
{
	return rna_builtin_type_get(ptr);
}

void MeshSkinVertex_radius_get(PointerRNA *ptr, float values[2])
{
	MVertSkin *data = (MVertSkin *)(ptr->data);
	unsigned int i;

	for (i = 0; i < 2; i++) {
		values[i] = (float)(((float *)data->radius)[i]);
	}
}

void MeshSkinVertex_radius_set(PointerRNA *ptr, const float values[2])
{
	MVertSkin *data = (MVertSkin *)(ptr->data);
	unsigned int i;

	for (i = 0; i < 2; i++) {
		((float *)data->radius)[i] = values[i];
	}
}

int MeshSkinVertex_use_root_get(PointerRNA *ptr)
{
	MVertSkin *data = (MVertSkin *)(ptr->data);
	return (((data->flag) & 1) != 0);
}

void MeshSkinVertex_use_root_set(PointerRNA *ptr, int value)
{
	MVertSkin *data = (MVertSkin *)(ptr->data);
	if (value) data->flag |= 1;
	else data->flag &= ~1;
}

int MeshSkinVertex_use_loose_get(PointerRNA *ptr)
{
	MVertSkin *data = (MVertSkin *)(ptr->data);
	return (((data->flag) & 2) != 0);
}

void MeshSkinVertex_use_loose_set(PointerRNA *ptr, int value)
{
	MVertSkin *data = (MVertSkin *)(ptr->data);
	if (value) data->flag |= 2;
	else data->flag &= ~2;
}

static PointerRNA MeshVertex_rna_properties_get(CollectionPropertyIterator *iter)
{
	return rna_builtin_properties_get(iter);
}

void MeshVertex_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

	memset(iter, 0, sizeof(*iter));
	iter->parent = *ptr;
	iter->prop = (PropertyRNA *)&rna_MeshVertex_rna_properties;

	rna_builtin_properties_begin(iter, ptr);

	if (iter->valid)
		iter->ptr = MeshVertex_rna_properties_get(iter);
}

void MeshVertex_rna_properties_next(CollectionPropertyIterator *iter)
{
	rna_builtin_properties_next(iter);

	if (iter->valid)
		iter->ptr = MeshVertex_rna_properties_get(iter);
}

void MeshVertex_rna_properties_end(CollectionPropertyIterator *iter)
{
	rna_iterator_listbase_end(iter);
}

int MeshVertex_rna_properties_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
	return rna_builtin_properties_lookup_string(ptr, key, r_ptr);
}

PointerRNA MeshVertex_rna_type_get(PointerRNA *ptr)
{
	return rna_builtin_type_get(ptr);
}

void MeshVertex_co_get(PointerRNA *ptr, float values[3])
{
	MVert *data = (MVert *)(ptr->data);
	unsigned int i;

	for (i = 0; i < 3; i++) {
		values[i] = (float)(((float *)data->co)[i]);
	}
}

void MeshVertex_co_set(PointerRNA *ptr, const float values[3])
{
	MVert *data = (MVert *)(ptr->data);
	unsigned int i;

	for (i = 0; i < 3; i++) {
		((float *)data->co)[i] = values[i];
	}
}

void MeshVertex_normal_get(PointerRNA *ptr, float values[3])
{
	rna_MeshVertex_normal_get(ptr, values);
}

void MeshVertex_normal_set(PointerRNA *ptr, const float values[3])
{
	rna_MeshVertex_normal_set(ptr, values);
}

int MeshVertex_select_get(PointerRNA *ptr)
{
	MVert *data = (MVert *)(ptr->data);
	return (((data->flag) & 1) != 0);
}

void MeshVertex_select_set(PointerRNA *ptr, int value)
{
	MVert *data = (MVert *)(ptr->data);
	if (value) data->flag |= 1;
	else data->flag &= ~1;
}

int MeshVertex_hide_get(PointerRNA *ptr)
{
	MVert *data = (MVert *)(ptr->data);
	return (((data->flag) & 16) != 0);
}

void MeshVertex_hide_set(PointerRNA *ptr, int value)
{
	MVert *data = (MVert *)(ptr->data);
	if (value) data->flag |= 16;
	else data->flag &= ~16;
}

float MeshVertex_bevel_weight_get(PointerRNA *ptr)
{
	return rna_MeshVertex_bevel_weight_get(ptr);
}

void MeshVertex_bevel_weight_set(PointerRNA *ptr, float value)
{
	rna_MeshVertex_bevel_weight_set(ptr, value);
}

static PointerRNA MeshVertex_groups_get(CollectionPropertyIterator *iter)
{
	return rna_pointer_inherit_refine(&iter->parent, &RNA_VertexGroupElement, rna_iterator_array_get(iter));
}

void MeshVertex_groups_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

	memset(iter, 0, sizeof(*iter));
	iter->parent = *ptr;
	iter->prop = (PropertyRNA *)&rna_MeshVertex_groups;

	rna_MeshVertex_groups_begin(iter, ptr);

	if (iter->valid)
		iter->ptr = MeshVertex_groups_get(iter);
}

void MeshVertex_groups_next(CollectionPropertyIterator *iter)
{
	rna_iterator_array_next(iter);

	if (iter->valid)
		iter->ptr = MeshVertex_groups_get(iter);
}

void MeshVertex_groups_end(CollectionPropertyIterator *iter)
{
	rna_iterator_array_end(iter);
}

int MeshVertex_index_get(PointerRNA *ptr)
{
	return rna_MeshVertex_index_get(ptr);
}

void MeshVertex_undeformed_co_get(PointerRNA *ptr, float values[3])
{
	rna_MeshVertex_undeformed_co_get(ptr, values);
}

static PointerRNA VertexGroupElement_rna_properties_get(CollectionPropertyIterator *iter)
{
	return rna_builtin_properties_get(iter);
}

void VertexGroupElement_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

	memset(iter, 0, sizeof(*iter));
	iter->parent = *ptr;
	iter->prop = (PropertyRNA *)&rna_VertexGroupElement_rna_properties;

	rna_builtin_properties_begin(iter, ptr);

	if (iter->valid)
		iter->ptr = VertexGroupElement_rna_properties_get(iter);
}

void VertexGroupElement_rna_properties_next(CollectionPropertyIterator *iter)
{
	rna_builtin_properties_next(iter);

	if (iter->valid)
		iter->ptr = VertexGroupElement_rna_properties_get(iter);
}

void VertexGroupElement_rna_properties_end(CollectionPropertyIterator *iter)
{
	rna_iterator_listbase_end(iter);
}

int VertexGroupElement_rna_properties_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
	return rna_builtin_properties_lookup_string(ptr, key, r_ptr);
}

PointerRNA VertexGroupElement_rna_type_get(PointerRNA *ptr)
{
	return rna_builtin_type_get(ptr);
}

int VertexGroupElement_group_get(PointerRNA *ptr)
{
	MDeformWeight *data = (MDeformWeight *)(ptr->data);
	return (int)(data->def_nr);
}

float VertexGroupElement_weight_get(PointerRNA *ptr)
{
	MDeformWeight *data = (MDeformWeight *)(ptr->data);
	return (float)(data->weight);
}

void VertexGroupElement_weight_set(PointerRNA *ptr, float value)
{
	MDeformWeight *data = (MDeformWeight *)(ptr->data);
	data->weight = CLAMPIS(value, 0.0f, 1.0f);
}

static PointerRNA MeshEdge_rna_properties_get(CollectionPropertyIterator *iter)
{
	return rna_builtin_properties_get(iter);
}

void MeshEdge_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

	memset(iter, 0, sizeof(*iter));
	iter->parent = *ptr;
	iter->prop = (PropertyRNA *)&rna_MeshEdge_rna_properties;

	rna_builtin_properties_begin(iter, ptr);

	if (iter->valid)
		iter->ptr = MeshEdge_rna_properties_get(iter);
}

void MeshEdge_rna_properties_next(CollectionPropertyIterator *iter)
{
	rna_builtin_properties_next(iter);

	if (iter->valid)
		iter->ptr = MeshEdge_rna_properties_get(iter);
}

void MeshEdge_rna_properties_end(CollectionPropertyIterator *iter)
{
	rna_iterator_listbase_end(iter);
}

int MeshEdge_rna_properties_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
	return rna_builtin_properties_lookup_string(ptr, key, r_ptr);
}

PointerRNA MeshEdge_rna_type_get(PointerRNA *ptr)
{
	return rna_builtin_type_get(ptr);
}

void MeshEdge_vertices_get(PointerRNA *ptr, int values[2])
{
	MEdge *data = (MEdge *)(ptr->data);
	unsigned int i;

	for (i = 0; i < 2; i++) {
		values[i] = (int)((&data->v1)[i]);
	}
}

void MeshEdge_vertices_set(PointerRNA *ptr, const int values[2])
{
	MEdge *data = (MEdge *)(ptr->data);
	unsigned int i;

	for (i = 0; i < 2; i++) {
		(&data->v1)[i] = CLAMPIS(values[i], 0, INT_MAX);
	}
}

float MeshEdge_crease_get(PointerRNA *ptr)
{
	return rna_MEdge_crease_get(ptr);
}

void MeshEdge_crease_set(PointerRNA *ptr, float value)
{
	rna_MEdge_crease_set(ptr, value);
}

float MeshEdge_bevel_weight_get(PointerRNA *ptr)
{
	return rna_MEdge_bevel_weight_get(ptr);
}

void MeshEdge_bevel_weight_set(PointerRNA *ptr, float value)
{
	rna_MEdge_bevel_weight_set(ptr, value);
}

int MeshEdge_select_get(PointerRNA *ptr)
{
	MEdge *data = (MEdge *)(ptr->data);
	return (((data->flag) & 1) != 0);
}

void MeshEdge_select_set(PointerRNA *ptr, int value)
{
	MEdge *data = (MEdge *)(ptr->data);
	if (value) data->flag |= 1;
	else data->flag &= ~1;
}

int MeshEdge_hide_get(PointerRNA *ptr)
{
	MEdge *data = (MEdge *)(ptr->data);
	return (((data->flag) & 16) != 0);
}

void MeshEdge_hide_set(PointerRNA *ptr, int value)
{
	MEdge *data = (MEdge *)(ptr->data);
	if (value) data->flag |= 16;
	else data->flag &= ~16;
}

int MeshEdge_use_seam_get(PointerRNA *ptr)
{
	MEdge *data = (MEdge *)(ptr->data);
	return (((data->flag) & 4) != 0);
}

void MeshEdge_use_seam_set(PointerRNA *ptr, int value)
{
	MEdge *data = (MEdge *)(ptr->data);
	if (value) data->flag |= 4;
	else data->flag &= ~4;
}

int MeshEdge_use_edge_sharp_get(PointerRNA *ptr)
{
	MEdge *data = (MEdge *)(ptr->data);
	return (((data->flag) & 512) != 0);
}

void MeshEdge_use_edge_sharp_set(PointerRNA *ptr, int value)
{
	MEdge *data = (MEdge *)(ptr->data);
	if (value) data->flag |= 512;
	else data->flag &= ~512;
}

int MeshEdge_is_loose_get(PointerRNA *ptr)
{
	MEdge *data = (MEdge *)(ptr->data);
	return (((data->flag) & 128) != 0);
}

void MeshEdge_is_loose_set(PointerRNA *ptr, int value)
{
	MEdge *data = (MEdge *)(ptr->data);
	if (value) data->flag |= 128;
	else data->flag &= ~128;
}

int MeshEdge_use_freestyle_mark_get(PointerRNA *ptr)
{
	return rna_MEdge_freestyle_edge_mark_get(ptr);
}

void MeshEdge_use_freestyle_mark_set(PointerRNA *ptr, int value)
{
	rna_MEdge_freestyle_edge_mark_set(ptr, value);
}

int MeshEdge_index_get(PointerRNA *ptr)
{
	return rna_MeshEdge_index_get(ptr);
}

static PointerRNA MeshTessFace_rna_properties_get(CollectionPropertyIterator *iter)
{
	return rna_builtin_properties_get(iter);
}

void MeshTessFace_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

	memset(iter, 0, sizeof(*iter));
	iter->parent = *ptr;
	iter->prop = (PropertyRNA *)&rna_MeshTessFace_rna_properties;

	rna_builtin_properties_begin(iter, ptr);

	if (iter->valid)
		iter->ptr = MeshTessFace_rna_properties_get(iter);
}

void MeshTessFace_rna_properties_next(CollectionPropertyIterator *iter)
{
	rna_builtin_properties_next(iter);

	if (iter->valid)
		iter->ptr = MeshTessFace_rna_properties_get(iter);
}

void MeshTessFace_rna_properties_end(CollectionPropertyIterator *iter)
{
	rna_iterator_listbase_end(iter);
}

int MeshTessFace_rna_properties_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
	return rna_builtin_properties_lookup_string(ptr, key, r_ptr);
}

PointerRNA MeshTessFace_rna_type_get(PointerRNA *ptr)
{
	return rna_builtin_type_get(ptr);
}

void MeshTessFace_vertices_get(PointerRNA *ptr, int values[])
{
	rna_MeshTessFace_verts_get(ptr, values);
}

void MeshTessFace_vertices_set(PointerRNA *ptr, const int values[])
{
	rna_MeshTessFace_verts_set(ptr, values);
}

void MeshTessFace_vertices_raw_get(PointerRNA *ptr, int values[4])
{
	MFace *data = (MFace *)(ptr->data);
	unsigned int i;

	for (i = 0; i < 4; i++) {
		values[i] = (int)((&data->v1)[i]);
	}
}

void MeshTessFace_vertices_raw_set(PointerRNA *ptr, const int values[4])
{
	MFace *data = (MFace *)(ptr->data);
	unsigned int i;

	for (i = 0; i < 4; i++) {
		(&data->v1)[i] = CLAMPIS(values[i], 0, INT_MAX);
	}
}

int MeshTessFace_material_index_get(PointerRNA *ptr)
{
	MFace *data = (MFace *)(ptr->data);
	return (int)(data->mat_nr);
}

void MeshTessFace_material_index_set(PointerRNA *ptr, int value)
{
	MFace *data = (MFace *)(ptr->data);
	data->mat_nr = CLAMPIS(value, 0, 32767);
}

int MeshTessFace_select_get(PointerRNA *ptr)
{
	MFace *data = (MFace *)(ptr->data);
	return (((data->flag) & 2) != 0);
}

void MeshTessFace_select_set(PointerRNA *ptr, int value)
{
	MFace *data = (MFace *)(ptr->data);
	if (value) data->flag |= 2;
	else data->flag &= ~2;
}

int MeshTessFace_hide_get(PointerRNA *ptr)
{
	MFace *data = (MFace *)(ptr->data);
	return (((data->flag) & 16) != 0);
}

void MeshTessFace_hide_set(PointerRNA *ptr, int value)
{
	MFace *data = (MFace *)(ptr->data);
	if (value) data->flag |= 16;
	else data->flag &= ~16;
}

int MeshTessFace_use_smooth_get(PointerRNA *ptr)
{
	MFace *data = (MFace *)(ptr->data);
	return (((data->flag) & 1) != 0);
}

void MeshTessFace_use_smooth_set(PointerRNA *ptr, int value)
{
	MFace *data = (MFace *)(ptr->data);
	if (value) data->flag |= 1;
	else data->flag &= ~1;
}

void MeshTessFace_normal_get(PointerRNA *ptr, float values[3])
{
	rna_MeshTessFace_normal_get(ptr, values);
}

void MeshTessFace_split_normals_get(PointerRNA *ptr, float values[12])
{
	rna_MeshTessFace_split_normals_get(ptr, values);
}

float MeshTessFace_area_get(PointerRNA *ptr)
{
	return rna_MeshTessFace_area_get(ptr);
}

int MeshTessFace_index_get(PointerRNA *ptr)
{
	return rna_MeshTessFace_index_get(ptr);
}

static PointerRNA MeshLoop_rna_properties_get(CollectionPropertyIterator *iter)
{
	return rna_builtin_properties_get(iter);
}

void MeshLoop_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

	memset(iter, 0, sizeof(*iter));
	iter->parent = *ptr;
	iter->prop = (PropertyRNA *)&rna_MeshLoop_rna_properties;

	rna_builtin_properties_begin(iter, ptr);

	if (iter->valid)
		iter->ptr = MeshLoop_rna_properties_get(iter);
}

void MeshLoop_rna_properties_next(CollectionPropertyIterator *iter)
{
	rna_builtin_properties_next(iter);

	if (iter->valid)
		iter->ptr = MeshLoop_rna_properties_get(iter);
}

void MeshLoop_rna_properties_end(CollectionPropertyIterator *iter)
{
	rna_iterator_listbase_end(iter);
}

int MeshLoop_rna_properties_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
	return rna_builtin_properties_lookup_string(ptr, key, r_ptr);
}

PointerRNA MeshLoop_rna_type_get(PointerRNA *ptr)
{
	return rna_builtin_type_get(ptr);
}

int MeshLoop_vertex_index_get(PointerRNA *ptr)
{
	MLoop *data = (MLoop *)(ptr->data);
	return (int)(data->v);
}

void MeshLoop_vertex_index_set(PointerRNA *ptr, int value)
{
	MLoop *data = (MLoop *)(ptr->data);
	data->v = CLAMPIS(value, 0, INT_MAX);
}

int MeshLoop_edge_index_get(PointerRNA *ptr)
{
	MLoop *data = (MLoop *)(ptr->data);
	return (int)(data->e);
}

void MeshLoop_edge_index_set(PointerRNA *ptr, int value)
{
	MLoop *data = (MLoop *)(ptr->data);
	data->e = CLAMPIS(value, 0, INT_MAX);
}

int MeshLoop_index_get(PointerRNA *ptr)
{
	return rna_MeshLoop_index_get(ptr);
}

void MeshLoop_normal_get(PointerRNA *ptr, float values[3])
{
	rna_MeshLoop_normal_get(ptr, values);
}

void MeshLoop_tangent_get(PointerRNA *ptr, float values[3])
{
	rna_MeshLoop_tangent_get(ptr, values);
}

float MeshLoop_bitangent_sign_get(PointerRNA *ptr)
{
	return rna_MeshLoop_bitangent_sign_get(ptr);
}

void MeshLoop_bitangent_get(PointerRNA *ptr, float values[3])
{
	rna_MeshLoop_bitangent_get(ptr, values);
}

static PointerRNA MeshPolygon_rna_properties_get(CollectionPropertyIterator *iter)
{
	return rna_builtin_properties_get(iter);
}

void MeshPolygon_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

	memset(iter, 0, sizeof(*iter));
	iter->parent = *ptr;
	iter->prop = (PropertyRNA *)&rna_MeshPolygon_rna_properties;

	rna_builtin_properties_begin(iter, ptr);

	if (iter->valid)
		iter->ptr = MeshPolygon_rna_properties_get(iter);
}

void MeshPolygon_rna_properties_next(CollectionPropertyIterator *iter)
{
	rna_builtin_properties_next(iter);

	if (iter->valid)
		iter->ptr = MeshPolygon_rna_properties_get(iter);
}

void MeshPolygon_rna_properties_end(CollectionPropertyIterator *iter)
{
	rna_iterator_listbase_end(iter);
}

int MeshPolygon_rna_properties_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
	return rna_builtin_properties_lookup_string(ptr, key, r_ptr);
}

PointerRNA MeshPolygon_rna_type_get(PointerRNA *ptr)
{
	return rna_builtin_type_get(ptr);
}

void MeshPolygon_vertices_get(PointerRNA *ptr, int values[])
{
	rna_MeshPoly_vertices_get(ptr, values);
}

void MeshPolygon_vertices_set(PointerRNA *ptr, const int values[])
{
	rna_MeshPoly_vertices_set(ptr, values);
}

int MeshPolygon_loop_start_get(PointerRNA *ptr)
{
	MPoly *data = (MPoly *)(ptr->data);
	return (int)(data->loopstart);
}

void MeshPolygon_loop_start_set(PointerRNA *ptr, int value)
{
	MPoly *data = (MPoly *)(ptr->data);
	data->loopstart = CLAMPIS(value, 0, INT_MAX);
}

int MeshPolygon_loop_total_get(PointerRNA *ptr)
{
	MPoly *data = (MPoly *)(ptr->data);
	return (int)(data->totloop);
}

void MeshPolygon_loop_total_set(PointerRNA *ptr, int value)
{
	MPoly *data = (MPoly *)(ptr->data);
	data->totloop = CLAMPIS(value, 0, INT_MAX);
}

int MeshPolygon_material_index_get(PointerRNA *ptr)
{
	MPoly *data = (MPoly *)(ptr->data);
	return (int)(data->mat_nr);
}

void MeshPolygon_material_index_set(PointerRNA *ptr, int value)
{
	MPoly *data = (MPoly *)(ptr->data);
	data->mat_nr = CLAMPIS(value, 0, 32767);
}

int MeshPolygon_select_get(PointerRNA *ptr)
{
	MPoly *data = (MPoly *)(ptr->data);
	return (((data->flag) & 2) != 0);
}

void MeshPolygon_select_set(PointerRNA *ptr, int value)
{
	MPoly *data = (MPoly *)(ptr->data);
	if (value) data->flag |= 2;
	else data->flag &= ~2;
}

int MeshPolygon_hide_get(PointerRNA *ptr)
{
	MPoly *data = (MPoly *)(ptr->data);
	return (((data->flag) & 16) != 0);
}

void MeshPolygon_hide_set(PointerRNA *ptr, int value)
{
	MPoly *data = (MPoly *)(ptr->data);
	if (value) data->flag |= 16;
	else data->flag &= ~16;
}

int MeshPolygon_use_smooth_get(PointerRNA *ptr)
{
	MPoly *data = (MPoly *)(ptr->data);
	return (((data->flag) & 1) != 0);
}

void MeshPolygon_use_smooth_set(PointerRNA *ptr, int value)
{
	MPoly *data = (MPoly *)(ptr->data);
	if (value) data->flag |= 1;
	else data->flag &= ~1;
}

int MeshPolygon_use_freestyle_mark_get(PointerRNA *ptr)
{
	return rna_MPoly_freestyle_face_mark_get(ptr);
}

void MeshPolygon_use_freestyle_mark_set(PointerRNA *ptr, int value)
{
	rna_MPoly_freestyle_face_mark_set(ptr, value);
}

void MeshPolygon_normal_get(PointerRNA *ptr, float values[3])
{
	rna_MeshPolygon_normal_get(ptr, values);
}

void MeshPolygon_center_get(PointerRNA *ptr, float values[3])
{
	rna_MeshPolygon_center_get(ptr, values);
}

float MeshPolygon_area_get(PointerRNA *ptr)
{
	return rna_MeshPolygon_area_get(ptr);
}

int MeshPolygon_index_get(PointerRNA *ptr)
{
	return rna_MeshPolygon_index_get(ptr);
}

static PointerRNA MeshUVLoopLayer_rna_properties_get(CollectionPropertyIterator *iter)
{
	return rna_builtin_properties_get(iter);
}

void MeshUVLoopLayer_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

	memset(iter, 0, sizeof(*iter));
	iter->parent = *ptr;
	iter->prop = (PropertyRNA *)&rna_MeshUVLoopLayer_rna_properties;

	rna_builtin_properties_begin(iter, ptr);

	if (iter->valid)
		iter->ptr = MeshUVLoopLayer_rna_properties_get(iter);
}

void MeshUVLoopLayer_rna_properties_next(CollectionPropertyIterator *iter)
{
	rna_builtin_properties_next(iter);

	if (iter->valid)
		iter->ptr = MeshUVLoopLayer_rna_properties_get(iter);
}

void MeshUVLoopLayer_rna_properties_end(CollectionPropertyIterator *iter)
{
	rna_iterator_listbase_end(iter);
}

int MeshUVLoopLayer_rna_properties_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
	return rna_builtin_properties_lookup_string(ptr, key, r_ptr);
}

PointerRNA MeshUVLoopLayer_rna_type_get(PointerRNA *ptr)
{
	return rna_builtin_type_get(ptr);
}

static PointerRNA MeshUVLoopLayer_data_get(CollectionPropertyIterator *iter)
{
	return rna_pointer_inherit_refine(&iter->parent, &RNA_MeshUVLoop, rna_iterator_array_get(iter));
}

void MeshUVLoopLayer_data_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

	memset(iter, 0, sizeof(*iter));
	iter->parent = *ptr;
	iter->prop = (PropertyRNA *)&rna_MeshUVLoopLayer_data;

	rna_MeshUVLoopLayer_data_begin(iter, ptr);

	if (iter->valid)
		iter->ptr = MeshUVLoopLayer_data_get(iter);
}

void MeshUVLoopLayer_data_next(CollectionPropertyIterator *iter)
{
	rna_iterator_array_next(iter);

	if (iter->valid)
		iter->ptr = MeshUVLoopLayer_data_get(iter);
}

void MeshUVLoopLayer_data_end(CollectionPropertyIterator *iter)
{
	rna_iterator_array_end(iter);
}

int MeshUVLoopLayer_data_lookup_int(PointerRNA *ptr, int index, PointerRNA *r_ptr)
{
	int found = 0;
	CollectionPropertyIterator iter;

	MeshUVLoopLayer_data_begin(&iter, ptr);

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
		if (found) *r_ptr = MeshUVLoopLayer_data_get(&iter);
	}

	MeshUVLoopLayer_data_end(&iter);

	return found;
}

void MeshUVLoopLayer_name_get(PointerRNA *ptr, char *value)
{
	CustomDataLayer *data = (CustomDataLayer *)(ptr->data);
	BLI_strncpy_utf8(value, data->name, 64);
}

int MeshUVLoopLayer_name_length(PointerRNA *ptr)
{
	CustomDataLayer *data = (CustomDataLayer *)(ptr->data);
	return strlen(data->name);
}

void MeshUVLoopLayer_name_set(PointerRNA *ptr, const char *value)
{
	rna_MeshUVLayer_name_set(ptr, value);
}

static PointerRNA MeshUVLoop_rna_properties_get(CollectionPropertyIterator *iter)
{
	return rna_builtin_properties_get(iter);
}

void MeshUVLoop_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

	memset(iter, 0, sizeof(*iter));
	iter->parent = *ptr;
	iter->prop = (PropertyRNA *)&rna_MeshUVLoop_rna_properties;

	rna_builtin_properties_begin(iter, ptr);

	if (iter->valid)
		iter->ptr = MeshUVLoop_rna_properties_get(iter);
}

void MeshUVLoop_rna_properties_next(CollectionPropertyIterator *iter)
{
	rna_builtin_properties_next(iter);

	if (iter->valid)
		iter->ptr = MeshUVLoop_rna_properties_get(iter);
}

void MeshUVLoop_rna_properties_end(CollectionPropertyIterator *iter)
{
	rna_iterator_listbase_end(iter);
}

int MeshUVLoop_rna_properties_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
	return rna_builtin_properties_lookup_string(ptr, key, r_ptr);
}

PointerRNA MeshUVLoop_rna_type_get(PointerRNA *ptr)
{
	return rna_builtin_type_get(ptr);
}

void MeshUVLoop_uv_get(PointerRNA *ptr, float values[2])
{
	MLoopUV *data = (MLoopUV *)(ptr->data);
	unsigned int i;

	for (i = 0; i < 2; i++) {
		values[i] = (float)(((float *)data->uv)[i]);
	}
}

void MeshUVLoop_uv_set(PointerRNA *ptr, const float values[2])
{
	MLoopUV *data = (MLoopUV *)(ptr->data);
	unsigned int i;

	for (i = 0; i < 2; i++) {
		((float *)data->uv)[i] = values[i];
	}
}

int MeshUVLoop_pin_uv_get(PointerRNA *ptr)
{
	MLoopUV *data = (MLoopUV *)(ptr->data);
	return (((data->flag) & 4) != 0);
}

void MeshUVLoop_pin_uv_set(PointerRNA *ptr, int value)
{
	MLoopUV *data = (MLoopUV *)(ptr->data);
	if (value) data->flag |= 4;
	else data->flag &= ~4;
}

int MeshUVLoop_select_get(PointerRNA *ptr)
{
	MLoopUV *data = (MLoopUV *)(ptr->data);
	return (((data->flag) & 2) != 0);
}

void MeshUVLoop_select_set(PointerRNA *ptr, int value)
{
	MLoopUV *data = (MLoopUV *)(ptr->data);
	if (value) data->flag |= 2;
	else data->flag &= ~2;
}

int MeshUVLoop_select_edge_get(PointerRNA *ptr)
{
	MLoopUV *data = (MLoopUV *)(ptr->data);
	return (((data->flag) & 1) != 0);
}

void MeshUVLoop_select_edge_set(PointerRNA *ptr, int value)
{
	MLoopUV *data = (MLoopUV *)(ptr->data);
	if (value) data->flag |= 1;
	else data->flag &= ~1;
}

static PointerRNA MeshTextureFaceLayer_rna_properties_get(CollectionPropertyIterator *iter)
{
	return rna_builtin_properties_get(iter);
}

void MeshTextureFaceLayer_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

	memset(iter, 0, sizeof(*iter));
	iter->parent = *ptr;
	iter->prop = (PropertyRNA *)&rna_MeshTextureFaceLayer_rna_properties;

	rna_builtin_properties_begin(iter, ptr);

	if (iter->valid)
		iter->ptr = MeshTextureFaceLayer_rna_properties_get(iter);
}

void MeshTextureFaceLayer_rna_properties_next(CollectionPropertyIterator *iter)
{
	rna_builtin_properties_next(iter);

	if (iter->valid)
		iter->ptr = MeshTextureFaceLayer_rna_properties_get(iter);
}

void MeshTextureFaceLayer_rna_properties_end(CollectionPropertyIterator *iter)
{
	rna_iterator_listbase_end(iter);
}

int MeshTextureFaceLayer_rna_properties_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
	return rna_builtin_properties_lookup_string(ptr, key, r_ptr);
}

PointerRNA MeshTextureFaceLayer_rna_type_get(PointerRNA *ptr)
{
	return rna_builtin_type_get(ptr);
}

void MeshTextureFaceLayer_name_get(PointerRNA *ptr, char *value)
{
	CustomDataLayer *data = (CustomDataLayer *)(ptr->data);
	BLI_strncpy_utf8(value, data->name, 64);
}

int MeshTextureFaceLayer_name_length(PointerRNA *ptr)
{
	CustomDataLayer *data = (CustomDataLayer *)(ptr->data);
	return strlen(data->name);
}

void MeshTextureFaceLayer_name_set(PointerRNA *ptr, const char *value)
{
	rna_MeshUVLayer_name_set(ptr, value);
}

int MeshTextureFaceLayer_active_get(PointerRNA *ptr)
{
	return rna_MeshTextureFaceLayer_active_get(ptr);
}

void MeshTextureFaceLayer_active_set(PointerRNA *ptr, int value)
{
	rna_MeshTextureFaceLayer_active_set(ptr, value);
}

int MeshTextureFaceLayer_active_render_get(PointerRNA *ptr)
{
	return rna_MeshTextureFaceLayer_active_render_get(ptr);
}

void MeshTextureFaceLayer_active_render_set(PointerRNA *ptr, int value)
{
	rna_MeshTextureFaceLayer_active_render_set(ptr, value);
}

int MeshTextureFaceLayer_active_clone_get(PointerRNA *ptr)
{
	return rna_MeshTextureFaceLayer_clone_get(ptr);
}

void MeshTextureFaceLayer_active_clone_set(PointerRNA *ptr, int value)
{
	rna_MeshTextureFaceLayer_clone_set(ptr, value);
}

static PointerRNA MeshTextureFaceLayer_data_get(CollectionPropertyIterator *iter)
{
	return rna_pointer_inherit_refine(&iter->parent, &RNA_MeshTextureFace, rna_iterator_array_get(iter));
}

void MeshTextureFaceLayer_data_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

	memset(iter, 0, sizeof(*iter));
	iter->parent = *ptr;
	iter->prop = (PropertyRNA *)&rna_MeshTextureFaceLayer_data;

	rna_MeshTextureFaceLayer_data_begin(iter, ptr);

	if (iter->valid)
		iter->ptr = MeshTextureFaceLayer_data_get(iter);
}

void MeshTextureFaceLayer_data_next(CollectionPropertyIterator *iter)
{
	rna_iterator_array_next(iter);

	if (iter->valid)
		iter->ptr = MeshTextureFaceLayer_data_get(iter);
}

void MeshTextureFaceLayer_data_end(CollectionPropertyIterator *iter)
{
	rna_iterator_array_end(iter);
}

int MeshTextureFaceLayer_data_lookup_int(PointerRNA *ptr, int index, PointerRNA *r_ptr)
{
	int found = 0;
	CollectionPropertyIterator iter;

	MeshTextureFaceLayer_data_begin(&iter, ptr);

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
		if (found) *r_ptr = MeshTextureFaceLayer_data_get(&iter);
	}

	MeshTextureFaceLayer_data_end(&iter);

	return found;
}

static PointerRNA MeshTextureFace_rna_properties_get(CollectionPropertyIterator *iter)
{
	return rna_builtin_properties_get(iter);
}

void MeshTextureFace_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

	memset(iter, 0, sizeof(*iter));
	iter->parent = *ptr;
	iter->prop = (PropertyRNA *)&rna_MeshTextureFace_rna_properties;

	rna_builtin_properties_begin(iter, ptr);

	if (iter->valid)
		iter->ptr = MeshTextureFace_rna_properties_get(iter);
}

void MeshTextureFace_rna_properties_next(CollectionPropertyIterator *iter)
{
	rna_builtin_properties_next(iter);

	if (iter->valid)
		iter->ptr = MeshTextureFace_rna_properties_get(iter);
}

void MeshTextureFace_rna_properties_end(CollectionPropertyIterator *iter)
{
	rna_iterator_listbase_end(iter);
}

int MeshTextureFace_rna_properties_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
	return rna_builtin_properties_lookup_string(ptr, key, r_ptr);
}

PointerRNA MeshTextureFace_rna_type_get(PointerRNA *ptr)
{
	return rna_builtin_type_get(ptr);
}

PointerRNA MeshTextureFace_image_get(PointerRNA *ptr)
{
	MTFace *data = (MTFace *)(ptr->data);
	return rna_pointer_inherit_refine(ptr, &RNA_Image, data->tpage);
}

void MeshTextureFace_image_set(PointerRNA *ptr, PointerRNA value)
{
	rna_TextureFace_image_set(ptr, value);
}

void MeshTextureFace_uv1_get(PointerRNA *ptr, float values[2])
{
	rna_MeshTextureFace_uv1_get(ptr, values);
}

void MeshTextureFace_uv1_set(PointerRNA *ptr, const float values[2])
{
	rna_MeshTextureFace_uv1_set(ptr, values);
}

void MeshTextureFace_uv2_get(PointerRNA *ptr, float values[2])
{
	rna_MeshTextureFace_uv2_get(ptr, values);
}

void MeshTextureFace_uv2_set(PointerRNA *ptr, const float values[2])
{
	rna_MeshTextureFace_uv2_set(ptr, values);
}

void MeshTextureFace_uv3_get(PointerRNA *ptr, float values[2])
{
	rna_MeshTextureFace_uv3_get(ptr, values);
}

void MeshTextureFace_uv3_set(PointerRNA *ptr, const float values[2])
{
	rna_MeshTextureFace_uv3_set(ptr, values);
}

void MeshTextureFace_uv4_get(PointerRNA *ptr, float values[2])
{
	rna_MeshTextureFace_uv4_get(ptr, values);
}

void MeshTextureFace_uv4_set(PointerRNA *ptr, const float values[2])
{
	rna_MeshTextureFace_uv4_set(ptr, values);
}

void MeshTextureFace_uv_get(PointerRNA *ptr, float values[])
{
	rna_MeshTextureFace_uv_get(ptr, values);
}

void MeshTextureFace_uv_set(PointerRNA *ptr, const float values[])
{
	rna_MeshTextureFace_uv_set(ptr, values);
}

void MeshTextureFace_uv_raw_get(PointerRNA *ptr, float values[8])
{
	MTFace *data = (MTFace *)(ptr->data);
	unsigned int i;

	for (i = 0; i < 8; i++) {
		values[i] = (float)(((float *)data->uv)[i]);
	}
}

void MeshTextureFace_uv_raw_set(PointerRNA *ptr, const float values[8])
{
	MTFace *data = (MTFace *)(ptr->data);
	unsigned int i;

	for (i = 0; i < 8; i++) {
		((float *)data->uv)[i] = values[i];
	}
}

static PointerRNA MeshTexturePolyLayer_rna_properties_get(CollectionPropertyIterator *iter)
{
	return rna_builtin_properties_get(iter);
}

void MeshTexturePolyLayer_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

	memset(iter, 0, sizeof(*iter));
	iter->parent = *ptr;
	iter->prop = (PropertyRNA *)&rna_MeshTexturePolyLayer_rna_properties;

	rna_builtin_properties_begin(iter, ptr);

	if (iter->valid)
		iter->ptr = MeshTexturePolyLayer_rna_properties_get(iter);
}

void MeshTexturePolyLayer_rna_properties_next(CollectionPropertyIterator *iter)
{
	rna_builtin_properties_next(iter);

	if (iter->valid)
		iter->ptr = MeshTexturePolyLayer_rna_properties_get(iter);
}

void MeshTexturePolyLayer_rna_properties_end(CollectionPropertyIterator *iter)
{
	rna_iterator_listbase_end(iter);
}

int MeshTexturePolyLayer_rna_properties_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
	return rna_builtin_properties_lookup_string(ptr, key, r_ptr);
}

PointerRNA MeshTexturePolyLayer_rna_type_get(PointerRNA *ptr)
{
	return rna_builtin_type_get(ptr);
}

void MeshTexturePolyLayer_name_get(PointerRNA *ptr, char *value)
{
	CustomDataLayer *data = (CustomDataLayer *)(ptr->data);
	BLI_strncpy_utf8(value, data->name, 64);
}

int MeshTexturePolyLayer_name_length(PointerRNA *ptr)
{
	CustomDataLayer *data = (CustomDataLayer *)(ptr->data);
	return strlen(data->name);
}

void MeshTexturePolyLayer_name_set(PointerRNA *ptr, const char *value)
{
	rna_MeshUVLayer_name_set(ptr, value);
}

int MeshTexturePolyLayer_active_get(PointerRNA *ptr)
{
	return rna_MeshTexturePolyLayer_active_get(ptr);
}

void MeshTexturePolyLayer_active_set(PointerRNA *ptr, int value)
{
	rna_MeshTexturePolyLayer_active_set(ptr, value);
}

int MeshTexturePolyLayer_active_render_get(PointerRNA *ptr)
{
	return rna_MeshTexturePolyLayer_active_render_get(ptr);
}

void MeshTexturePolyLayer_active_render_set(PointerRNA *ptr, int value)
{
	rna_MeshTexturePolyLayer_active_render_set(ptr, value);
}

int MeshTexturePolyLayer_active_clone_get(PointerRNA *ptr)
{
	return rna_MeshTexturePolyLayer_clone_get(ptr);
}

void MeshTexturePolyLayer_active_clone_set(PointerRNA *ptr, int value)
{
	rna_MeshTexturePolyLayer_clone_set(ptr, value);
}

static PointerRNA MeshTexturePolyLayer_data_get(CollectionPropertyIterator *iter)
{
	return rna_pointer_inherit_refine(&iter->parent, &RNA_MeshTexturePoly, rna_iterator_array_get(iter));
}

void MeshTexturePolyLayer_data_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

	memset(iter, 0, sizeof(*iter));
	iter->parent = *ptr;
	iter->prop = (PropertyRNA *)&rna_MeshTexturePolyLayer_data;

	rna_MeshTexturePolyLayer_data_begin(iter, ptr);

	if (iter->valid)
		iter->ptr = MeshTexturePolyLayer_data_get(iter);
}

void MeshTexturePolyLayer_data_next(CollectionPropertyIterator *iter)
{
	rna_iterator_array_next(iter);

	if (iter->valid)
		iter->ptr = MeshTexturePolyLayer_data_get(iter);
}

void MeshTexturePolyLayer_data_end(CollectionPropertyIterator *iter)
{
	rna_iterator_array_end(iter);
}

int MeshTexturePolyLayer_data_lookup_int(PointerRNA *ptr, int index, PointerRNA *r_ptr)
{
	int found = 0;
	CollectionPropertyIterator iter;

	MeshTexturePolyLayer_data_begin(&iter, ptr);

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
		if (found) *r_ptr = MeshTexturePolyLayer_data_get(&iter);
	}

	MeshTexturePolyLayer_data_end(&iter);

	return found;
}

static PointerRNA MeshTexturePoly_rna_properties_get(CollectionPropertyIterator *iter)
{
	return rna_builtin_properties_get(iter);
}

void MeshTexturePoly_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

	memset(iter, 0, sizeof(*iter));
	iter->parent = *ptr;
	iter->prop = (PropertyRNA *)&rna_MeshTexturePoly_rna_properties;

	rna_builtin_properties_begin(iter, ptr);

	if (iter->valid)
		iter->ptr = MeshTexturePoly_rna_properties_get(iter);
}

void MeshTexturePoly_rna_properties_next(CollectionPropertyIterator *iter)
{
	rna_builtin_properties_next(iter);

	if (iter->valid)
		iter->ptr = MeshTexturePoly_rna_properties_get(iter);
}

void MeshTexturePoly_rna_properties_end(CollectionPropertyIterator *iter)
{
	rna_iterator_listbase_end(iter);
}

int MeshTexturePoly_rna_properties_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
	return rna_builtin_properties_lookup_string(ptr, key, r_ptr);
}

PointerRNA MeshTexturePoly_rna_type_get(PointerRNA *ptr)
{
	return rna_builtin_type_get(ptr);
}

PointerRNA MeshTexturePoly_image_get(PointerRNA *ptr)
{
	MTexPoly *data = (MTexPoly *)(ptr->data);
	return rna_pointer_inherit_refine(ptr, &RNA_Image, data->tpage);
}

void MeshTexturePoly_image_set(PointerRNA *ptr, PointerRNA value)
{
	rna_TexturePoly_image_set(ptr, value);
}

static PointerRNA MeshColorLayer_rna_properties_get(CollectionPropertyIterator *iter)
{
	return rna_builtin_properties_get(iter);
}

void MeshColorLayer_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

	memset(iter, 0, sizeof(*iter));
	iter->parent = *ptr;
	iter->prop = (PropertyRNA *)&rna_MeshColorLayer_rna_properties;

	rna_builtin_properties_begin(iter, ptr);

	if (iter->valid)
		iter->ptr = MeshColorLayer_rna_properties_get(iter);
}

void MeshColorLayer_rna_properties_next(CollectionPropertyIterator *iter)
{
	rna_builtin_properties_next(iter);

	if (iter->valid)
		iter->ptr = MeshColorLayer_rna_properties_get(iter);
}

void MeshColorLayer_rna_properties_end(CollectionPropertyIterator *iter)
{
	rna_iterator_listbase_end(iter);
}

int MeshColorLayer_rna_properties_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
	return rna_builtin_properties_lookup_string(ptr, key, r_ptr);
}

PointerRNA MeshColorLayer_rna_type_get(PointerRNA *ptr)
{
	return rna_builtin_type_get(ptr);
}

void MeshColorLayer_name_get(PointerRNA *ptr, char *value)
{
	CustomDataLayer *data = (CustomDataLayer *)(ptr->data);
	BLI_strncpy_utf8(value, data->name, 64);
}

int MeshColorLayer_name_length(PointerRNA *ptr)
{
	CustomDataLayer *data = (CustomDataLayer *)(ptr->data);
	return strlen(data->name);
}

void MeshColorLayer_name_set(PointerRNA *ptr, const char *value)
{
	CustomDataLayer *data = (CustomDataLayer *)(ptr->data);
	BLI_strncpy_utf8(data->name, value, 64);
}

int MeshColorLayer_active_get(PointerRNA *ptr)
{
	return rna_MeshColorLayer_active_get(ptr);
}

void MeshColorLayer_active_set(PointerRNA *ptr, int value)
{
	rna_MeshColorLayer_active_set(ptr, value);
}

int MeshColorLayer_active_render_get(PointerRNA *ptr)
{
	return rna_MeshColorLayer_active_render_get(ptr);
}

void MeshColorLayer_active_render_set(PointerRNA *ptr, int value)
{
	rna_MeshColorLayer_active_render_set(ptr, value);
}

static PointerRNA MeshColorLayer_data_get(CollectionPropertyIterator *iter)
{
	return rna_pointer_inherit_refine(&iter->parent, &RNA_MeshColor, rna_iterator_array_get(iter));
}

void MeshColorLayer_data_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

	memset(iter, 0, sizeof(*iter));
	iter->parent = *ptr;
	iter->prop = (PropertyRNA *)&rna_MeshColorLayer_data;

	rna_MeshColorLayer_data_begin(iter, ptr);

	if (iter->valid)
		iter->ptr = MeshColorLayer_data_get(iter);
}

void MeshColorLayer_data_next(CollectionPropertyIterator *iter)
{
	rna_iterator_array_next(iter);

	if (iter->valid)
		iter->ptr = MeshColorLayer_data_get(iter);
}

void MeshColorLayer_data_end(CollectionPropertyIterator *iter)
{
	rna_iterator_array_end(iter);
}

int MeshColorLayer_data_lookup_int(PointerRNA *ptr, int index, PointerRNA *r_ptr)
{
	int found = 0;
	CollectionPropertyIterator iter;

	MeshColorLayer_data_begin(&iter, ptr);

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
		if (found) *r_ptr = MeshColorLayer_data_get(&iter);
	}

	MeshColorLayer_data_end(&iter);

	return found;
}

static PointerRNA MeshColor_rna_properties_get(CollectionPropertyIterator *iter)
{
	return rna_builtin_properties_get(iter);
}

void MeshColor_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

	memset(iter, 0, sizeof(*iter));
	iter->parent = *ptr;
	iter->prop = (PropertyRNA *)&rna_MeshColor_rna_properties;

	rna_builtin_properties_begin(iter, ptr);

	if (iter->valid)
		iter->ptr = MeshColor_rna_properties_get(iter);
}

void MeshColor_rna_properties_next(CollectionPropertyIterator *iter)
{
	rna_builtin_properties_next(iter);

	if (iter->valid)
		iter->ptr = MeshColor_rna_properties_get(iter);
}

void MeshColor_rna_properties_end(CollectionPropertyIterator *iter)
{
	rna_iterator_listbase_end(iter);
}

int MeshColor_rna_properties_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
	return rna_builtin_properties_lookup_string(ptr, key, r_ptr);
}

PointerRNA MeshColor_rna_type_get(PointerRNA *ptr)
{
	return rna_builtin_type_get(ptr);
}

void MeshColor_color1_get(PointerRNA *ptr, float values[3])
{
	rna_MeshColor_color1_get(ptr, values);
}

void MeshColor_color1_set(PointerRNA *ptr, const float values[3])
{
	rna_MeshColor_color1_set(ptr, values);
}

void MeshColor_color2_get(PointerRNA *ptr, float values[3])
{
	rna_MeshColor_color2_get(ptr, values);
}

void MeshColor_color2_set(PointerRNA *ptr, const float values[3])
{
	rna_MeshColor_color2_set(ptr, values);
}

void MeshColor_color3_get(PointerRNA *ptr, float values[3])
{
	rna_MeshColor_color3_get(ptr, values);
}

void MeshColor_color3_set(PointerRNA *ptr, const float values[3])
{
	rna_MeshColor_color3_set(ptr, values);
}

void MeshColor_color4_get(PointerRNA *ptr, float values[3])
{
	rna_MeshColor_color4_get(ptr, values);
}

void MeshColor_color4_set(PointerRNA *ptr, const float values[3])
{
	rna_MeshColor_color4_set(ptr, values);
}

static PointerRNA MeshLoopColorLayer_rna_properties_get(CollectionPropertyIterator *iter)
{
	return rna_builtin_properties_get(iter);
}

void MeshLoopColorLayer_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

	memset(iter, 0, sizeof(*iter));
	iter->parent = *ptr;
	iter->prop = (PropertyRNA *)&rna_MeshLoopColorLayer_rna_properties;

	rna_builtin_properties_begin(iter, ptr);

	if (iter->valid)
		iter->ptr = MeshLoopColorLayer_rna_properties_get(iter);
}

void MeshLoopColorLayer_rna_properties_next(CollectionPropertyIterator *iter)
{
	rna_builtin_properties_next(iter);

	if (iter->valid)
		iter->ptr = MeshLoopColorLayer_rna_properties_get(iter);
}

void MeshLoopColorLayer_rna_properties_end(CollectionPropertyIterator *iter)
{
	rna_iterator_listbase_end(iter);
}

int MeshLoopColorLayer_rna_properties_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
	return rna_builtin_properties_lookup_string(ptr, key, r_ptr);
}

PointerRNA MeshLoopColorLayer_rna_type_get(PointerRNA *ptr)
{
	return rna_builtin_type_get(ptr);
}

void MeshLoopColorLayer_name_get(PointerRNA *ptr, char *value)
{
	CustomDataLayer *data = (CustomDataLayer *)(ptr->data);
	BLI_strncpy_utf8(value, data->name, 64);
}

int MeshLoopColorLayer_name_length(PointerRNA *ptr)
{
	CustomDataLayer *data = (CustomDataLayer *)(ptr->data);
	return strlen(data->name);
}

void MeshLoopColorLayer_name_set(PointerRNA *ptr, const char *value)
{
	rna_MeshLoopLayer_name_set(ptr, value);
}

int MeshLoopColorLayer_active_get(PointerRNA *ptr)
{
	return rna_MeshLoopColorLayer_active_get(ptr);
}

void MeshLoopColorLayer_active_set(PointerRNA *ptr, int value)
{
	rna_MeshLoopColorLayer_active_set(ptr, value);
}

int MeshLoopColorLayer_active_render_get(PointerRNA *ptr)
{
	return rna_MeshLoopColorLayer_active_render_get(ptr);
}

void MeshLoopColorLayer_active_render_set(PointerRNA *ptr, int value)
{
	rna_MeshLoopColorLayer_active_render_set(ptr, value);
}

static PointerRNA MeshLoopColorLayer_data_get(CollectionPropertyIterator *iter)
{
	return rna_pointer_inherit_refine(&iter->parent, &RNA_MeshLoopColor, rna_iterator_array_get(iter));
}

void MeshLoopColorLayer_data_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

	memset(iter, 0, sizeof(*iter));
	iter->parent = *ptr;
	iter->prop = (PropertyRNA *)&rna_MeshLoopColorLayer_data;

	rna_MeshLoopColorLayer_data_begin(iter, ptr);

	if (iter->valid)
		iter->ptr = MeshLoopColorLayer_data_get(iter);
}

void MeshLoopColorLayer_data_next(CollectionPropertyIterator *iter)
{
	rna_iterator_array_next(iter);

	if (iter->valid)
		iter->ptr = MeshLoopColorLayer_data_get(iter);
}

void MeshLoopColorLayer_data_end(CollectionPropertyIterator *iter)
{
	rna_iterator_array_end(iter);
}

int MeshLoopColorLayer_data_lookup_int(PointerRNA *ptr, int index, PointerRNA *r_ptr)
{
	int found = 0;
	CollectionPropertyIterator iter;

	MeshLoopColorLayer_data_begin(&iter, ptr);

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
		if (found) *r_ptr = MeshLoopColorLayer_data_get(&iter);
	}

	MeshLoopColorLayer_data_end(&iter);

	return found;
}

static PointerRNA MeshLoopColor_rna_properties_get(CollectionPropertyIterator *iter)
{
	return rna_builtin_properties_get(iter);
}

void MeshLoopColor_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

	memset(iter, 0, sizeof(*iter));
	iter->parent = *ptr;
	iter->prop = (PropertyRNA *)&rna_MeshLoopColor_rna_properties;

	rna_builtin_properties_begin(iter, ptr);

	if (iter->valid)
		iter->ptr = MeshLoopColor_rna_properties_get(iter);
}

void MeshLoopColor_rna_properties_next(CollectionPropertyIterator *iter)
{
	rna_builtin_properties_next(iter);

	if (iter->valid)
		iter->ptr = MeshLoopColor_rna_properties_get(iter);
}

void MeshLoopColor_rna_properties_end(CollectionPropertyIterator *iter)
{
	rna_iterator_listbase_end(iter);
}

int MeshLoopColor_rna_properties_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
	return rna_builtin_properties_lookup_string(ptr, key, r_ptr);
}

PointerRNA MeshLoopColor_rna_type_get(PointerRNA *ptr)
{
	return rna_builtin_type_get(ptr);
}

void MeshLoopColor_color_get(PointerRNA *ptr, float values[3])
{
	rna_MeshLoopColor_color_get(ptr, values);
}

void MeshLoopColor_color_set(PointerRNA *ptr, const float values[3])
{
	rna_MeshLoopColor_color_set(ptr, values);
}

static PointerRNA MeshFloatPropertyLayer_rna_properties_get(CollectionPropertyIterator *iter)
{
	return rna_builtin_properties_get(iter);
}

void MeshFloatPropertyLayer_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

	memset(iter, 0, sizeof(*iter));
	iter->parent = *ptr;
	iter->prop = (PropertyRNA *)&rna_MeshFloatPropertyLayer_rna_properties;

	rna_builtin_properties_begin(iter, ptr);

	if (iter->valid)
		iter->ptr = MeshFloatPropertyLayer_rna_properties_get(iter);
}

void MeshFloatPropertyLayer_rna_properties_next(CollectionPropertyIterator *iter)
{
	rna_builtin_properties_next(iter);

	if (iter->valid)
		iter->ptr = MeshFloatPropertyLayer_rna_properties_get(iter);
}

void MeshFloatPropertyLayer_rna_properties_end(CollectionPropertyIterator *iter)
{
	rna_iterator_listbase_end(iter);
}

int MeshFloatPropertyLayer_rna_properties_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
	return rna_builtin_properties_lookup_string(ptr, key, r_ptr);
}

PointerRNA MeshFloatPropertyLayer_rna_type_get(PointerRNA *ptr)
{
	return rna_builtin_type_get(ptr);
}

void MeshFloatPropertyLayer_name_get(PointerRNA *ptr, char *value)
{
	CustomDataLayer *data = (CustomDataLayer *)(ptr->data);
	BLI_strncpy_utf8(value, data->name, 64);
}

int MeshFloatPropertyLayer_name_length(PointerRNA *ptr)
{
	CustomDataLayer *data = (CustomDataLayer *)(ptr->data);
	return strlen(data->name);
}

void MeshFloatPropertyLayer_name_set(PointerRNA *ptr, const char *value)
{
	rna_MeshAnyLayer_name_set(ptr, value);
}

static PointerRNA MeshFloatPropertyLayer_data_get(CollectionPropertyIterator *iter)
{
	return rna_pointer_inherit_refine(&iter->parent, &RNA_MeshFloatProperty, rna_iterator_array_get(iter));
}

void MeshFloatPropertyLayer_data_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

	memset(iter, 0, sizeof(*iter));
	iter->parent = *ptr;
	iter->prop = (PropertyRNA *)&rna_MeshFloatPropertyLayer_data;

	rna_MeshFloatPropertyLayer_data_begin(iter, ptr);

	if (iter->valid)
		iter->ptr = MeshFloatPropertyLayer_data_get(iter);
}

void MeshFloatPropertyLayer_data_next(CollectionPropertyIterator *iter)
{
	rna_iterator_array_next(iter);

	if (iter->valid)
		iter->ptr = MeshFloatPropertyLayer_data_get(iter);
}

void MeshFloatPropertyLayer_data_end(CollectionPropertyIterator *iter)
{
	rna_iterator_array_end(iter);
}

int MeshFloatPropertyLayer_data_lookup_int(PointerRNA *ptr, int index, PointerRNA *r_ptr)
{
	int found = 0;
	CollectionPropertyIterator iter;

	MeshFloatPropertyLayer_data_begin(&iter, ptr);

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
		if (found) *r_ptr = MeshFloatPropertyLayer_data_get(&iter);
	}

	MeshFloatPropertyLayer_data_end(&iter);

	return found;
}

static PointerRNA MeshFloatProperty_rna_properties_get(CollectionPropertyIterator *iter)
{
	return rna_builtin_properties_get(iter);
}

void MeshFloatProperty_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

	memset(iter, 0, sizeof(*iter));
	iter->parent = *ptr;
	iter->prop = (PropertyRNA *)&rna_MeshFloatProperty_rna_properties;

	rna_builtin_properties_begin(iter, ptr);

	if (iter->valid)
		iter->ptr = MeshFloatProperty_rna_properties_get(iter);
}

void MeshFloatProperty_rna_properties_next(CollectionPropertyIterator *iter)
{
	rna_builtin_properties_next(iter);

	if (iter->valid)
		iter->ptr = MeshFloatProperty_rna_properties_get(iter);
}

void MeshFloatProperty_rna_properties_end(CollectionPropertyIterator *iter)
{
	rna_iterator_listbase_end(iter);
}

int MeshFloatProperty_rna_properties_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
	return rna_builtin_properties_lookup_string(ptr, key, r_ptr);
}

PointerRNA MeshFloatProperty_rna_type_get(PointerRNA *ptr)
{
	return rna_builtin_type_get(ptr);
}

float MeshFloatProperty_value_get(PointerRNA *ptr)
{
	MFloatProperty *data = (MFloatProperty *)(ptr->data);
	return (float)(data->f);
}

void MeshFloatProperty_value_set(PointerRNA *ptr, float value)
{
	MFloatProperty *data = (MFloatProperty *)(ptr->data);
	data->f = value;
}

static PointerRNA MeshIntPropertyLayer_rna_properties_get(CollectionPropertyIterator *iter)
{
	return rna_builtin_properties_get(iter);
}

void MeshIntPropertyLayer_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

	memset(iter, 0, sizeof(*iter));
	iter->parent = *ptr;
	iter->prop = (PropertyRNA *)&rna_MeshIntPropertyLayer_rna_properties;

	rna_builtin_properties_begin(iter, ptr);

	if (iter->valid)
		iter->ptr = MeshIntPropertyLayer_rna_properties_get(iter);
}

void MeshIntPropertyLayer_rna_properties_next(CollectionPropertyIterator *iter)
{
	rna_builtin_properties_next(iter);

	if (iter->valid)
		iter->ptr = MeshIntPropertyLayer_rna_properties_get(iter);
}

void MeshIntPropertyLayer_rna_properties_end(CollectionPropertyIterator *iter)
{
	rna_iterator_listbase_end(iter);
}

int MeshIntPropertyLayer_rna_properties_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
	return rna_builtin_properties_lookup_string(ptr, key, r_ptr);
}

PointerRNA MeshIntPropertyLayer_rna_type_get(PointerRNA *ptr)
{
	return rna_builtin_type_get(ptr);
}

void MeshIntPropertyLayer_name_get(PointerRNA *ptr, char *value)
{
	CustomDataLayer *data = (CustomDataLayer *)(ptr->data);
	BLI_strncpy_utf8(value, data->name, 64);
}

int MeshIntPropertyLayer_name_length(PointerRNA *ptr)
{
	CustomDataLayer *data = (CustomDataLayer *)(ptr->data);
	return strlen(data->name);
}

void MeshIntPropertyLayer_name_set(PointerRNA *ptr, const char *value)
{
	rna_MeshAnyLayer_name_set(ptr, value);
}

static PointerRNA MeshIntPropertyLayer_data_get(CollectionPropertyIterator *iter)
{
	return rna_pointer_inherit_refine(&iter->parent, &RNA_MeshIntProperty, rna_iterator_array_get(iter));
}

void MeshIntPropertyLayer_data_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

	memset(iter, 0, sizeof(*iter));
	iter->parent = *ptr;
	iter->prop = (PropertyRNA *)&rna_MeshIntPropertyLayer_data;

	rna_MeshIntPropertyLayer_data_begin(iter, ptr);

	if (iter->valid)
		iter->ptr = MeshIntPropertyLayer_data_get(iter);
}

void MeshIntPropertyLayer_data_next(CollectionPropertyIterator *iter)
{
	rna_iterator_array_next(iter);

	if (iter->valid)
		iter->ptr = MeshIntPropertyLayer_data_get(iter);
}

void MeshIntPropertyLayer_data_end(CollectionPropertyIterator *iter)
{
	rna_iterator_array_end(iter);
}

int MeshIntPropertyLayer_data_lookup_int(PointerRNA *ptr, int index, PointerRNA *r_ptr)
{
	int found = 0;
	CollectionPropertyIterator iter;

	MeshIntPropertyLayer_data_begin(&iter, ptr);

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
		if (found) *r_ptr = MeshIntPropertyLayer_data_get(&iter);
	}

	MeshIntPropertyLayer_data_end(&iter);

	return found;
}

static PointerRNA MeshIntProperty_rna_properties_get(CollectionPropertyIterator *iter)
{
	return rna_builtin_properties_get(iter);
}

void MeshIntProperty_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

	memset(iter, 0, sizeof(*iter));
	iter->parent = *ptr;
	iter->prop = (PropertyRNA *)&rna_MeshIntProperty_rna_properties;

	rna_builtin_properties_begin(iter, ptr);

	if (iter->valid)
		iter->ptr = MeshIntProperty_rna_properties_get(iter);
}

void MeshIntProperty_rna_properties_next(CollectionPropertyIterator *iter)
{
	rna_builtin_properties_next(iter);

	if (iter->valid)
		iter->ptr = MeshIntProperty_rna_properties_get(iter);
}

void MeshIntProperty_rna_properties_end(CollectionPropertyIterator *iter)
{
	rna_iterator_listbase_end(iter);
}

int MeshIntProperty_rna_properties_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
	return rna_builtin_properties_lookup_string(ptr, key, r_ptr);
}

PointerRNA MeshIntProperty_rna_type_get(PointerRNA *ptr)
{
	return rna_builtin_type_get(ptr);
}

int MeshIntProperty_value_get(PointerRNA *ptr)
{
	MIntProperty *data = (MIntProperty *)(ptr->data);
	return (int)(data->i);
}

void MeshIntProperty_value_set(PointerRNA *ptr, int value)
{
	MIntProperty *data = (MIntProperty *)(ptr->data);
	data->i = value;
}

static PointerRNA MeshStringPropertyLayer_rna_properties_get(CollectionPropertyIterator *iter)
{
	return rna_builtin_properties_get(iter);
}

void MeshStringPropertyLayer_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

	memset(iter, 0, sizeof(*iter));
	iter->parent = *ptr;
	iter->prop = (PropertyRNA *)&rna_MeshStringPropertyLayer_rna_properties;

	rna_builtin_properties_begin(iter, ptr);

	if (iter->valid)
		iter->ptr = MeshStringPropertyLayer_rna_properties_get(iter);
}

void MeshStringPropertyLayer_rna_properties_next(CollectionPropertyIterator *iter)
{
	rna_builtin_properties_next(iter);

	if (iter->valid)
		iter->ptr = MeshStringPropertyLayer_rna_properties_get(iter);
}

void MeshStringPropertyLayer_rna_properties_end(CollectionPropertyIterator *iter)
{
	rna_iterator_listbase_end(iter);
}

int MeshStringPropertyLayer_rna_properties_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
	return rna_builtin_properties_lookup_string(ptr, key, r_ptr);
}

PointerRNA MeshStringPropertyLayer_rna_type_get(PointerRNA *ptr)
{
	return rna_builtin_type_get(ptr);
}

void MeshStringPropertyLayer_name_get(PointerRNA *ptr, char *value)
{
	CustomDataLayer *data = (CustomDataLayer *)(ptr->data);
	BLI_strncpy_utf8(value, data->name, 64);
}

int MeshStringPropertyLayer_name_length(PointerRNA *ptr)
{
	CustomDataLayer *data = (CustomDataLayer *)(ptr->data);
	return strlen(data->name);
}

void MeshStringPropertyLayer_name_set(PointerRNA *ptr, const char *value)
{
	rna_MeshAnyLayer_name_set(ptr, value);
}

static PointerRNA MeshStringPropertyLayer_data_get(CollectionPropertyIterator *iter)
{
	return rna_pointer_inherit_refine(&iter->parent, &RNA_MeshStringProperty, rna_iterator_array_get(iter));
}

void MeshStringPropertyLayer_data_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

	memset(iter, 0, sizeof(*iter));
	iter->parent = *ptr;
	iter->prop = (PropertyRNA *)&rna_MeshStringPropertyLayer_data;

	rna_MeshStringPropertyLayer_data_begin(iter, ptr);

	if (iter->valid)
		iter->ptr = MeshStringPropertyLayer_data_get(iter);
}

void MeshStringPropertyLayer_data_next(CollectionPropertyIterator *iter)
{
	rna_iterator_array_next(iter);

	if (iter->valid)
		iter->ptr = MeshStringPropertyLayer_data_get(iter);
}

void MeshStringPropertyLayer_data_end(CollectionPropertyIterator *iter)
{
	rna_iterator_array_end(iter);
}

int MeshStringPropertyLayer_data_lookup_int(PointerRNA *ptr, int index, PointerRNA *r_ptr)
{
	int found = 0;
	CollectionPropertyIterator iter;

	MeshStringPropertyLayer_data_begin(&iter, ptr);

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
		if (found) *r_ptr = MeshStringPropertyLayer_data_get(&iter);
	}

	MeshStringPropertyLayer_data_end(&iter);

	return found;
}

static PointerRNA MeshStringProperty_rna_properties_get(CollectionPropertyIterator *iter)
{
	return rna_builtin_properties_get(iter);
}

void MeshStringProperty_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

	memset(iter, 0, sizeof(*iter));
	iter->parent = *ptr;
	iter->prop = (PropertyRNA *)&rna_MeshStringProperty_rna_properties;

	rna_builtin_properties_begin(iter, ptr);

	if (iter->valid)
		iter->ptr = MeshStringProperty_rna_properties_get(iter);
}

void MeshStringProperty_rna_properties_next(CollectionPropertyIterator *iter)
{
	rna_builtin_properties_next(iter);

	if (iter->valid)
		iter->ptr = MeshStringProperty_rna_properties_get(iter);
}

void MeshStringProperty_rna_properties_end(CollectionPropertyIterator *iter)
{
	rna_iterator_listbase_end(iter);
}

int MeshStringProperty_rna_properties_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
	return rna_builtin_properties_lookup_string(ptr, key, r_ptr);
}

PointerRNA MeshStringProperty_rna_type_get(PointerRNA *ptr)
{
	return rna_builtin_type_get(ptr);
}

void MeshStringProperty_value_get(PointerRNA *ptr, char *value)
{
	rna_MeshStringProperty_s_get(ptr, value);
}

int MeshStringProperty_value_length(PointerRNA *ptr)
{
	return rna_MeshStringProperty_s_length(ptr);
}

void MeshStringProperty_value_set(PointerRNA *ptr, const char *value)
{
	rna_MeshStringProperty_s_set(ptr, value);
}

void Mesh_transform(struct Mesh *_self, float matrix[16], int shape_keys)
{
	rna_Mesh_transform(_self, matrix, shape_keys);
}

void Mesh_transform_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	struct Mesh *_self;
	float *matrix;
	int shape_keys;
	char *_data;
	
	_self = (struct Mesh *)_ptr->data;
	_data = (char *)_parms->data;
	matrix = ((float *)_data);
	_data += 64;
	shape_keys = *((int *)_data);
	
	rna_Mesh_transform(_self, matrix, shape_keys);
}

void Mesh_calc_normals(struct Mesh *_self)
{
	BKE_mesh_calc_normals(_self);
}

void Mesh_calc_normals_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	struct Mesh *_self;
	_self = (struct Mesh *)_ptr->data;
	
	BKE_mesh_calc_normals(_self);
}

void Mesh_calc_normals_split(struct Mesh *_self, float split_angle)
{
	rna_Mesh_calc_normals_split(_self, split_angle);
}

void Mesh_calc_normals_split_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	struct Mesh *_self;
	float split_angle;
	char *_data;
	
	_self = (struct Mesh *)_ptr->data;
	_data = (char *)_parms->data;
	split_angle = *((float *)_data);
	
	rna_Mesh_calc_normals_split(_self, split_angle);
}

void Mesh_free_normals_split(struct Mesh *_self)
{
	rna_Mesh_free_normals_split(_self);
}

void Mesh_free_normals_split_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	struct Mesh *_self;
	_self = (struct Mesh *)_ptr->data;
	
	rna_Mesh_free_normals_split(_self);
}

void Mesh_calc_tangents(struct Mesh *_self, ReportList *reports, const char * uvmap)
{
	rna_Mesh_calc_tangents(_self, reports, uvmap);
}

void Mesh_calc_tangents_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	struct Mesh *_self;
	const char * uvmap;
	char *_data;
	
	_self = (struct Mesh *)_ptr->data;
	_data = (char *)_parms->data;
	uvmap = *((const char * *)_data);
	
	rna_Mesh_calc_tangents(_self, reports, uvmap);
}

void Mesh_free_tangents(struct Mesh *_self)
{
	rna_Mesh_free_tangents(_self);
}

void Mesh_free_tangents_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	struct Mesh *_self;
	_self = (struct Mesh *)_ptr->data;
	
	rna_Mesh_free_tangents(_self);
}

void Mesh_calc_tessface(struct Mesh *_self)
{
	ED_mesh_calc_tessface(_self);
}

void Mesh_calc_tessface_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	struct Mesh *_self;
	_self = (struct Mesh *)_ptr->data;
	
	ED_mesh_calc_tessface(_self);
}

void Mesh_calc_smooth_groups(struct Mesh *_self, int use_bitflags, int *poly_groups_len, int **poly_groups, int *groups)
{
	rna_Mesh_calc_smooth_groups(_self, use_bitflags, poly_groups_len, poly_groups, groups);
}

void Mesh_calc_smooth_groups_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	struct Mesh *_self;
	int use_bitflags;
	int *poly_groups_len;
	int **poly_groups;
	int *groups;
	char *_data;
	
	_self = (struct Mesh *)_ptr->data;
	_data = (char *)_parms->data;
	use_bitflags = *((int *)_data);
	_data += 4;
	poly_groups_len = (int *)&((ParameterDynAlloc *)_data)->array_tot;
	poly_groups = ((int **)(&(((ParameterDynAlloc *)_data)->array)));
#if defined(SPEC_ILP32)
	_data += 8;
#else
	_data += 16;
#endif
	groups = ((int *)_data);
	
	rna_Mesh_calc_smooth_groups(_self, use_bitflags, poly_groups_len, poly_groups, groups);
}

void Mesh_update(struct Mesh *_self, bContext *C, int calc_edges, int calc_tessface)
{
	ED_mesh_update(_self, C, calc_edges, calc_tessface);
}

void Mesh_update_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	struct Mesh *_self;
	int calc_edges;
	int calc_tessface;
	char *_data;
	
	_self = (struct Mesh *)_ptr->data;
	_data = (char *)_parms->data;
	calc_edges = *((int *)_data);
	_data += 4;
	calc_tessface = *((int *)_data);
	
	ED_mesh_update(_self, C, calc_edges, calc_tessface);
}

const char * Mesh_unit_test_compare(struct Mesh *_self, struct Mesh *mesh)
{
	return rna_Mesh_unit_test_compare(_self, mesh);
}

void Mesh_unit_test_compare_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	struct Mesh *_self;
	struct Mesh *mesh;
	const char * result;
	char *_data, *_retdata;
	
	_self = (struct Mesh *)_ptr->data;
	_data = (char *)_parms->data;
	mesh = *((struct Mesh **)_data);
#if defined(SPEC_ILP32)
	_data += 4;
#else
	_data += 8;
#endif
	_retdata = _data;
	
	result = rna_Mesh_unit_test_compare(_self, mesh);
	*((const char * *)_retdata) = result;
}

int Mesh_validate(struct Mesh *_self, int verbose)
{
	return BKE_mesh_validate(_self, verbose);
}

void Mesh_validate_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	struct Mesh *_self;
	int verbose;
	int result;
	char *_data, *_retdata;
	
	_self = (struct Mesh *)_ptr->data;
	_data = (char *)_parms->data;
	verbose = *((int *)_data);
	_data += 4;
	_retdata = _data;
	
	result = BKE_mesh_validate(_self, verbose);
	*((int *)_retdata) = result;
}

int Mesh_validate_material_indices(struct Mesh *_self)
{
	return BKE_mesh_validate_material_indices(_self);
}

void Mesh_validate_material_indices_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	struct Mesh *_self;
	int result;
	char *_data, *_retdata;
	
	_self = (struct Mesh *)_ptr->data;
	_data = (char *)_parms->data;
	_retdata = _data;
	
	result = BKE_mesh_validate_material_indices(_self);
	*((int *)_retdata) = result;
}

/* Repeated prototypes to detect errors */

void rna_Mesh_transform(struct Mesh *_self, float matrix[16], int shape_keys);
void BKE_mesh_calc_normals(struct Mesh *_self);
void rna_Mesh_calc_normals_split(struct Mesh *_self, float split_angle);
void rna_Mesh_free_normals_split(struct Mesh *_self);
void rna_Mesh_calc_tangents(struct Mesh *_self, ReportList *reports, const char * uvmap);
void rna_Mesh_free_tangents(struct Mesh *_self);
void ED_mesh_calc_tessface(struct Mesh *_self);
void rna_Mesh_calc_smooth_groups(struct Mesh *_self, int use_bitflags, int *poly_groups_len, int **poly_groups, int *groups);
void ED_mesh_update(struct Mesh *_self, bContext *C, int calc_edges, int calc_tessface);
const char * rna_Mesh_unit_test_compare(struct Mesh *_self, struct Mesh *mesh);
int BKE_mesh_validate(struct Mesh *_self, int verbose);
int BKE_mesh_validate_material_indices(struct Mesh *_self);

void MeshVertices_add(struct Mesh *_self, ReportList *reports, int count)
{
	ED_mesh_vertices_add(_self, reports, count);
}

void MeshVertices_add_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	struct Mesh *_self;
	int count;
	char *_data;
	
	_self = (struct Mesh *)_ptr->data;
	_data = (char *)_parms->data;
	count = *((int *)_data);
	
	ED_mesh_vertices_add(_self, reports, count);
}

/* Repeated prototypes to detect errors */

void ED_mesh_vertices_add(struct Mesh *_self, ReportList *reports, int count);

void MeshEdges_add(struct Mesh *_self, ReportList *reports, int count)
{
	ED_mesh_edges_add(_self, reports, count);
}

void MeshEdges_add_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	struct Mesh *_self;
	int count;
	char *_data;
	
	_self = (struct Mesh *)_ptr->data;
	_data = (char *)_parms->data;
	count = *((int *)_data);
	
	ED_mesh_edges_add(_self, reports, count);
}

/* Repeated prototypes to detect errors */

void ED_mesh_edges_add(struct Mesh *_self, ReportList *reports, int count);

void MeshTessFaces_add(struct Mesh *_self, ReportList *reports, int count)
{
	ED_mesh_tessfaces_add(_self, reports, count);
}

void MeshTessFaces_add_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	struct Mesh *_self;
	int count;
	char *_data;
	
	_self = (struct Mesh *)_ptr->data;
	_data = (char *)_parms->data;
	count = *((int *)_data);
	
	ED_mesh_tessfaces_add(_self, reports, count);
}

/* Repeated prototypes to detect errors */

void ED_mesh_tessfaces_add(struct Mesh *_self, ReportList *reports, int count);

void MeshLoops_add(struct Mesh *_self, ReportList *reports, int count)
{
	ED_mesh_loops_add(_self, reports, count);
}

void MeshLoops_add_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	struct Mesh *_self;
	int count;
	char *_data;
	
	_self = (struct Mesh *)_ptr->data;
	_data = (char *)_parms->data;
	count = *((int *)_data);
	
	ED_mesh_loops_add(_self, reports, count);
}

/* Repeated prototypes to detect errors */

void ED_mesh_loops_add(struct Mesh *_self, ReportList *reports, int count);

void MeshPolygons_add(struct Mesh *_self, ReportList *reports, int count)
{
	ED_mesh_polys_add(_self, reports, count);
}

void MeshPolygons_add_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	struct Mesh *_self;
	int count;
	char *_data;
	
	_self = (struct Mesh *)_ptr->data;
	_data = (char *)_parms->data;
	count = *((int *)_data);
	
	ED_mesh_polys_add(_self, reports, count);
}

/* Repeated prototypes to detect errors */

void ED_mesh_polys_add(struct Mesh *_self, ReportList *reports, int count);


struct PointerRNA TessfaceUVTextures_new(struct Mesh *_self, ReportList *reports, const char * name)
{
	return rna_Mesh_tessface_uv_texture_new(_self, reports, name);
}

void TessfaceUVTextures_new_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	struct Mesh *_self;
	const char * name;
	struct PointerRNA layer;
	char *_data, *_retdata;
	
	_self = (struct Mesh *)_ptr->data;
	_data = (char *)_parms->data;
	name = *((const char * *)_data);
#if defined(SPEC_ILP32)
	_data += 4;
#else
	_data += 8;
#endif
	_retdata = _data;
	
	layer = rna_Mesh_tessface_uv_texture_new(_self, reports, name);
	*((struct PointerRNA *)_retdata) = layer;
}

/* Repeated prototypes to detect errors */

struct PointerRNA rna_Mesh_tessface_uv_texture_new(struct Mesh *_self, ReportList *reports, const char * name);

struct PointerRNA UVTextures_new(struct Mesh *_self, const char * name)
{
	return rna_Mesh_uv_texture_new(_self, name);
}

void UVTextures_new_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	struct Mesh *_self;
	const char * name;
	struct PointerRNA layer;
	char *_data, *_retdata;
	
	_self = (struct Mesh *)_ptr->data;
	_data = (char *)_parms->data;
	name = *((const char * *)_data);
#if defined(SPEC_ILP32)
	_data += 4;
#else
	_data += 8;
#endif
	_retdata = _data;
	
	layer = rna_Mesh_uv_texture_new(_self, name);
	*((struct PointerRNA *)_retdata) = layer;
}

void UVTextures_remove(struct Mesh *_self, ReportList *reports, struct CustomDataLayer *layer)
{
	rna_Mesh_uv_texture_layers_remove(_self, reports, layer);
}

void UVTextures_remove_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	struct Mesh *_self;
	struct CustomDataLayer *layer;
	char *_data;
	
	_self = (struct Mesh *)_ptr->data;
	_data = (char *)_parms->data;
	layer = *((struct CustomDataLayer **)_data);
	
	rna_Mesh_uv_texture_layers_remove(_self, reports, layer);
}

/* Repeated prototypes to detect errors */

struct PointerRNA rna_Mesh_uv_texture_new(struct Mesh *_self, const char * name);
void rna_Mesh_uv_texture_layers_remove(struct Mesh *_self, ReportList *reports, struct CustomDataLayer *layer);

struct PointerRNA VertexColors_new(struct Mesh *_self, ReportList *reports, const char * name)
{
	return rna_Mesh_tessface_vertex_color_new(_self, reports, name);
}

void VertexColors_new_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	struct Mesh *_self;
	const char * name;
	struct PointerRNA layer;
	char *_data, *_retdata;
	
	_self = (struct Mesh *)_ptr->data;
	_data = (char *)_parms->data;
	name = *((const char * *)_data);
#if defined(SPEC_ILP32)
	_data += 4;
#else
	_data += 8;
#endif
	_retdata = _data;
	
	layer = rna_Mesh_tessface_vertex_color_new(_self, reports, name);
	*((struct PointerRNA *)_retdata) = layer;
}

/* Repeated prototypes to detect errors */

struct PointerRNA rna_Mesh_tessface_vertex_color_new(struct Mesh *_self, ReportList *reports, const char * name);

struct PointerRNA LoopColors_new(struct Mesh *_self, const char * name)
{
	return rna_Mesh_vertex_color_new(_self, name);
}

void LoopColors_new_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	struct Mesh *_self;
	const char * name;
	struct PointerRNA layer;
	char *_data, *_retdata;
	
	_self = (struct Mesh *)_ptr->data;
	_data = (char *)_parms->data;
	name = *((const char * *)_data);
#if defined(SPEC_ILP32)
	_data += 4;
#else
	_data += 8;
#endif
	_retdata = _data;
	
	layer = rna_Mesh_vertex_color_new(_self, name);
	*((struct PointerRNA *)_retdata) = layer;
}

void LoopColors_remove(struct Mesh *_self, ReportList *reports, struct CustomDataLayer *layer)
{
	rna_Mesh_vertex_color_remove(_self, reports, layer);
}

void LoopColors_remove_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	struct Mesh *_self;
	struct CustomDataLayer *layer;
	char *_data;
	
	_self = (struct Mesh *)_ptr->data;
	_data = (char *)_parms->data;
	layer = *((struct CustomDataLayer **)_data);
	
	rna_Mesh_vertex_color_remove(_self, reports, layer);
}

/* Repeated prototypes to detect errors */

struct PointerRNA rna_Mesh_vertex_color_new(struct Mesh *_self, const char * name);
void rna_Mesh_vertex_color_remove(struct Mesh *_self, ReportList *reports, struct CustomDataLayer *layer);

struct PointerRNA FloatProperties_new(struct Mesh *_self, const char * name)
{
	return rna_Mesh_polygon_float_property_new(_self, name);
}

void FloatProperties_new_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	struct Mesh *_self;
	const char * name;
	struct PointerRNA layer;
	char *_data, *_retdata;
	
	_self = (struct Mesh *)_ptr->data;
	_data = (char *)_parms->data;
	name = *((const char * *)_data);
#if defined(SPEC_ILP32)
	_data += 4;
#else
	_data += 8;
#endif
	_retdata = _data;
	
	layer = rna_Mesh_polygon_float_property_new(_self, name);
	*((struct PointerRNA *)_retdata) = layer;
}

/* Repeated prototypes to detect errors */

struct PointerRNA rna_Mesh_polygon_float_property_new(struct Mesh *_self, const char * name);

struct PointerRNA IntProperties_new(struct Mesh *_self, const char * name)
{
	return rna_Mesh_polygon_int_property_new(_self, name);
}

void IntProperties_new_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	struct Mesh *_self;
	const char * name;
	struct PointerRNA layer;
	char *_data, *_retdata;
	
	_self = (struct Mesh *)_ptr->data;
	_data = (char *)_parms->data;
	name = *((const char * *)_data);
#if defined(SPEC_ILP32)
	_data += 4;
#else
	_data += 8;
#endif
	_retdata = _data;
	
	layer = rna_Mesh_polygon_int_property_new(_self, name);
	*((struct PointerRNA *)_retdata) = layer;
}

/* Repeated prototypes to detect errors */

struct PointerRNA rna_Mesh_polygon_int_property_new(struct Mesh *_self, const char * name);

struct PointerRNA StringProperties_new(struct Mesh *_self, const char * name)
{
	return rna_Mesh_polygon_string_property_new(_self, name);
}

void StringProperties_new_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	struct Mesh *_self;
	const char * name;
	struct PointerRNA layer;
	char *_data, *_retdata;
	
	_self = (struct Mesh *)_ptr->data;
	_data = (char *)_parms->data;
	name = *((const char * *)_data);
#if defined(SPEC_ILP32)
	_data += 4;
#else
	_data += 8;
#endif
	_retdata = _data;
	
	layer = rna_Mesh_polygon_string_property_new(_self, name);
	*((struct PointerRNA *)_retdata) = layer;
}

/* Repeated prototypes to detect errors */

struct PointerRNA rna_Mesh_polygon_string_property_new(struct Mesh *_self, const char * name);






int MeshTessFace_vertices_get_length(PointerRNA *ptr, int *arraylen)
{
	return rna_MeshTessFace_verts_get_length(ptr, arraylen);
}



int MeshPolygon_vertices_get_length(PointerRNA *ptr, int *arraylen)
{
	return rna_MeshPoly_vertices_get_length(ptr, arraylen);
}





int MeshTextureFace_uv_get_length(PointerRNA *ptr, int *arraylen)
{
	return rna_MeshTextureFace_uv_get_length(ptr, arraylen);
}














/* Mesh */
CollectionPropertyRNA rna_Mesh_vertices = {
	{(PropertyRNA *)&rna_Mesh_edges, NULL,
	-1, "vertices", 16384, "Vertices",
	"Vertices of the mesh",
	0, "*",
	PROP_COLLECTION, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, &RNA_MeshVertices},
	Mesh_vertices_begin, Mesh_vertices_next, Mesh_vertices_end, Mesh_vertices_get, Mesh_vertices_length, Mesh_vertices_lookup_int, NULL, NULL, &RNA_MeshVertex
};

CollectionPropertyRNA rna_Mesh_edges = {
	{(PropertyRNA *)&rna_Mesh_tessfaces, (PropertyRNA *)&rna_Mesh_vertices,
	-1, "edges", 16384, "Edges",
	"Edges of the mesh",
	0, "*",
	PROP_COLLECTION, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, &RNA_MeshEdges},
	Mesh_edges_begin, Mesh_edges_next, Mesh_edges_end, Mesh_edges_get, Mesh_edges_length, Mesh_edges_lookup_int, NULL, NULL, &RNA_MeshEdge
};

CollectionPropertyRNA rna_Mesh_tessfaces = {
	{(PropertyRNA *)&rna_Mesh_loops, (PropertyRNA *)&rna_Mesh_edges,
	-1, "tessfaces", 16384, "TessFaces",
	"Tessellated faces of the mesh (derived from polygons)",
	0, "*",
	PROP_COLLECTION, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, &RNA_MeshTessFaces},
	Mesh_tessfaces_begin, Mesh_tessfaces_next, Mesh_tessfaces_end, Mesh_tessfaces_get, Mesh_tessfaces_length, Mesh_tessfaces_lookup_int, NULL, NULL, &RNA_MeshTessFace
};

CollectionPropertyRNA rna_Mesh_loops = {
	{(PropertyRNA *)&rna_Mesh_polygons, (PropertyRNA *)&rna_Mesh_tessfaces,
	-1, "loops", 16384, "Loops",
	"Loops of the mesh (polygon corners)",
	0, "*",
	PROP_COLLECTION, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, &RNA_MeshLoops},
	Mesh_loops_begin, Mesh_loops_next, Mesh_loops_end, Mesh_loops_get, Mesh_loops_length, Mesh_loops_lookup_int, NULL, NULL, &RNA_MeshLoop
};

CollectionPropertyRNA rna_Mesh_polygons = {
	{(PropertyRNA *)&rna_Mesh_texture_mesh, (PropertyRNA *)&rna_Mesh_loops,
	-1, "polygons", 16384, "Polygons",
	"Polygons of the mesh",
	0, "*",
	PROP_COLLECTION, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, &RNA_MeshPolygons},
	Mesh_polygons_begin, Mesh_polygons_next, Mesh_polygons_end, Mesh_polygons_get, Mesh_polygons_length, Mesh_polygons_lookup_int, NULL, NULL, &RNA_MeshPolygon
};

PointerPropertyRNA rna_Mesh_texture_mesh = {
	{(PropertyRNA *)&rna_Mesh_uv_layers, (PropertyRNA *)&rna_Mesh_polygons,
	-1, "texture_mesh", 9437249, "Texture Mesh",
	"Use another mesh for texture indices (vertex indices must be aligned)",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	Mesh_texture_mesh_get, Mesh_texture_mesh_set, NULL, NULL,&RNA_Mesh
};

CollectionPropertyRNA rna_Mesh_uv_layers = {
	{(PropertyRNA *)&rna_Mesh_uv_layer_clone, (PropertyRNA *)&rna_Mesh_texture_mesh,
	-1, "uv_layers", 16384, "UV Loop Layers",
	"All UV loop layers",
	0, "*",
	PROP_COLLECTION, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, &RNA_UVLoopLayers},
	Mesh_uv_layers_begin, Mesh_uv_layers_next, Mesh_uv_layers_end, Mesh_uv_layers_get, Mesh_uv_layers_length, Mesh_uv_layers_lookup_int, Mesh_uv_layers_lookup_string, NULL, &RNA_MeshUVLoopLayer
};

PointerPropertyRNA rna_Mesh_uv_layer_clone = {
	{(PropertyRNA *)&rna_Mesh_uv_layer_clone_index, (PropertyRNA *)&rna_Mesh_uv_layers,
	-1, "uv_layer_clone", 8388609, "Clone UV loop layer",
	"UV loop layer to be used as cloning source",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	Mesh_uv_layer_clone_get, Mesh_uv_layer_clone_set, NULL, NULL,&RNA_MeshUVLoopLayer
};

IntPropertyRNA rna_Mesh_uv_layer_clone_index = {
	{(PropertyRNA *)&rna_Mesh_uv_layer_stencil, (PropertyRNA *)&rna_Mesh_uv_layer_clone,
	-1, "uv_layer_clone_index", 3, "Clone UV loop layer Index",
	"Clone UV loop layer index",
	0, "*",
	PROP_INT, PROP_UNSIGNED | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	Mesh_uv_layer_clone_index_get, Mesh_uv_layer_clone_index_set, NULL, NULL, rna_Mesh_uv_layer_index_range, NULL, NULL, NULL, NULL, NULL,
	0, 10000, 0, INT_MAX, 1, 0, NULL
};

PointerPropertyRNA rna_Mesh_uv_layer_stencil = {
	{(PropertyRNA *)&rna_Mesh_uv_layer_stencil_index, (PropertyRNA *)&rna_Mesh_uv_layer_clone_index,
	-1, "uv_layer_stencil", 8388609, "Mask UV loop layer",
	"UV loop layer to mask the painted area",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	Mesh_uv_layer_stencil_get, Mesh_uv_layer_stencil_set, NULL, NULL,&RNA_MeshUVLoopLayer
};

IntPropertyRNA rna_Mesh_uv_layer_stencil_index = {
	{(PropertyRNA *)&rna_Mesh_tessface_uv_textures, (PropertyRNA *)&rna_Mesh_uv_layer_stencil,
	-1, "uv_layer_stencil_index", 3, "Mask UV loop layer Index",
	"Mask UV loop layer index",
	0, "*",
	PROP_INT, PROP_UNSIGNED | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	Mesh_uv_layer_stencil_index_get, Mesh_uv_layer_stencil_index_set, NULL, NULL, rna_Mesh_uv_layer_index_range, NULL, NULL, NULL, NULL, NULL,
	0, 10000, 0, INT_MAX, 1, 0, NULL
};

CollectionPropertyRNA rna_Mesh_tessface_uv_textures = {
	{(PropertyRNA *)&rna_Mesh_uv_textures, (PropertyRNA *)&rna_Mesh_uv_layer_stencil_index,
	-1, "tessface_uv_textures", 16384, "Tessellated Face UV Maps",
	"All UV maps for tessellated faces (read-only, for use by renderers)",
	0, "*",
	PROP_COLLECTION, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, &RNA_TessfaceUVTextures},
	Mesh_tessface_uv_textures_begin, Mesh_tessface_uv_textures_next, Mesh_tessface_uv_textures_end, Mesh_tessface_uv_textures_get, Mesh_tessface_uv_textures_length, Mesh_tessface_uv_textures_lookup_int, Mesh_tessface_uv_textures_lookup_string, NULL, &RNA_MeshTextureFaceLayer
};

CollectionPropertyRNA rna_Mesh_uv_textures = {
	{(PropertyRNA *)&rna_Mesh_uv_texture_clone, (PropertyRNA *)&rna_Mesh_tessface_uv_textures,
	-1, "uv_textures", 16384, "UV Maps",
	"All UV maps",
	0, "*",
	PROP_COLLECTION, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, &RNA_UVTextures},
	Mesh_uv_textures_begin, Mesh_uv_textures_next, Mesh_uv_textures_end, Mesh_uv_textures_get, Mesh_uv_textures_length, Mesh_uv_textures_lookup_int, Mesh_uv_textures_lookup_string, NULL, &RNA_MeshTexturePolyLayer
};

PointerPropertyRNA rna_Mesh_uv_texture_clone = {
	{(PropertyRNA *)&rna_Mesh_uv_texture_clone_index, (PropertyRNA *)&rna_Mesh_uv_textures,
	-1, "uv_texture_clone", 8388609, "Clone UV Map",
	"UV map to be used as cloning source",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	Mesh_uv_texture_clone_get, Mesh_uv_texture_clone_set, NULL, NULL,&RNA_MeshTexturePolyLayer
};

IntPropertyRNA rna_Mesh_uv_texture_clone_index = {
	{(PropertyRNA *)&rna_Mesh_uv_texture_stencil, (PropertyRNA *)&rna_Mesh_uv_texture_clone,
	-1, "uv_texture_clone_index", 3, "Clone UV Map Index",
	"Clone UV map index",
	0, "*",
	PROP_INT, PROP_UNSIGNED | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	Mesh_uv_texture_clone_index_get, Mesh_uv_texture_clone_index_set, NULL, NULL, rna_Mesh_uv_texture_index_range, NULL, NULL, NULL, NULL, NULL,
	0, 10000, 0, INT_MAX, 1, 0, NULL
};

PointerPropertyRNA rna_Mesh_uv_texture_stencil = {
	{(PropertyRNA *)&rna_Mesh_uv_texture_stencil_index, (PropertyRNA *)&rna_Mesh_uv_texture_clone_index,
	-1, "uv_texture_stencil", 8388609, "Mask UV Map",
	"UV map to mask the painted area",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Mesh_update_data, 0, NULL, NULL,
	0, -1, NULL},
	Mesh_uv_texture_stencil_get, Mesh_uv_texture_stencil_set, NULL, NULL,&RNA_MeshTexturePolyLayer
};

IntPropertyRNA rna_Mesh_uv_texture_stencil_index = {
	{(PropertyRNA *)&rna_Mesh_tessface_vertex_colors, (PropertyRNA *)&rna_Mesh_uv_texture_stencil,
	-1, "uv_texture_stencil_index", 3, "Mask UV Map Index",
	"Mask UV map index",
	0, "*",
	PROP_INT, PROP_UNSIGNED | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Mesh_update_data, 0, NULL, NULL,
	0, -1, NULL},
	Mesh_uv_texture_stencil_index_get, Mesh_uv_texture_stencil_index_set, NULL, NULL, rna_Mesh_uv_texture_index_range, NULL, NULL, NULL, NULL, NULL,
	0, 10000, 0, INT_MAX, 1, 0, NULL
};

CollectionPropertyRNA rna_Mesh_tessface_vertex_colors = {
	{(PropertyRNA *)&rna_Mesh_vertex_colors, (PropertyRNA *)&rna_Mesh_uv_texture_stencil_index,
	-1, "tessface_vertex_colors", 16384, "Tessellated Face Colors",
	"All tessellated face colors (read-only, for use by renderers)",
	0, "*",
	PROP_COLLECTION, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, &RNA_VertexColors},
	Mesh_tessface_vertex_colors_begin, Mesh_tessface_vertex_colors_next, Mesh_tessface_vertex_colors_end, Mesh_tessface_vertex_colors_get, Mesh_tessface_vertex_colors_length, Mesh_tessface_vertex_colors_lookup_int, Mesh_tessface_vertex_colors_lookup_string, NULL, &RNA_MeshColorLayer
};

CollectionPropertyRNA rna_Mesh_vertex_colors = {
	{(PropertyRNA *)&rna_Mesh_polygon_layers_float, (PropertyRNA *)&rna_Mesh_tessface_vertex_colors,
	-1, "vertex_colors", 16384, "Vertex Colors",
	"All vertex colors",
	0, "*",
	PROP_COLLECTION, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, &RNA_LoopColors},
	Mesh_vertex_colors_begin, Mesh_vertex_colors_next, Mesh_vertex_colors_end, Mesh_vertex_colors_get, Mesh_vertex_colors_length, Mesh_vertex_colors_lookup_int, Mesh_vertex_colors_lookup_string, NULL, &RNA_MeshLoopColorLayer
};

CollectionPropertyRNA rna_Mesh_polygon_layers_float = {
	{(PropertyRNA *)&rna_Mesh_polygon_layers_int, (PropertyRNA *)&rna_Mesh_vertex_colors,
	-1, "polygon_layers_float", 16384, "Float Property Layers",
	"",
	0, "*",
	PROP_COLLECTION, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, &RNA_FloatProperties},
	Mesh_polygon_layers_float_begin, Mesh_polygon_layers_float_next, Mesh_polygon_layers_float_end, Mesh_polygon_layers_float_get, Mesh_polygon_layers_float_length, Mesh_polygon_layers_float_lookup_int, Mesh_polygon_layers_float_lookup_string, NULL, &RNA_MeshFloatPropertyLayer
};

CollectionPropertyRNA rna_Mesh_polygon_layers_int = {
	{(PropertyRNA *)&rna_Mesh_polygon_layers_string, (PropertyRNA *)&rna_Mesh_polygon_layers_float,
	-1, "polygon_layers_int", 16384, "Int Property Layers",
	"",
	0, "*",
	PROP_COLLECTION, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, &RNA_IntProperties},
	Mesh_polygon_layers_int_begin, Mesh_polygon_layers_int_next, Mesh_polygon_layers_int_end, Mesh_polygon_layers_int_get, Mesh_polygon_layers_int_length, Mesh_polygon_layers_int_lookup_int, Mesh_polygon_layers_int_lookup_string, NULL, &RNA_MeshIntPropertyLayer
};

CollectionPropertyRNA rna_Mesh_polygon_layers_string = {
	{(PropertyRNA *)&rna_Mesh_skin_vertices, (PropertyRNA *)&rna_Mesh_polygon_layers_int,
	-1, "polygon_layers_string", 16384, "String Property Layers",
	"",
	0, "*",
	PROP_COLLECTION, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, &RNA_StringProperties},
	Mesh_polygon_layers_string_begin, Mesh_polygon_layers_string_next, Mesh_polygon_layers_string_end, Mesh_polygon_layers_string_get, Mesh_polygon_layers_string_length, Mesh_polygon_layers_string_lookup_int, Mesh_polygon_layers_string_lookup_string, NULL, &RNA_MeshStringPropertyLayer
};

CollectionPropertyRNA rna_Mesh_skin_vertices = {
	{(PropertyRNA *)&rna_Mesh_use_auto_smooth, (PropertyRNA *)&rna_Mesh_polygon_layers_string,
	-1, "skin_vertices", 16384, "Skin Vertices",
	"All skin vertices",
	0, "*",
	PROP_COLLECTION, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	Mesh_skin_vertices_begin, Mesh_skin_vertices_next, Mesh_skin_vertices_end, Mesh_skin_vertices_get, Mesh_skin_vertices_length, Mesh_skin_vertices_lookup_int, Mesh_skin_vertices_lookup_string, NULL, &RNA_MeshSkinVertexLayer
};

BoolPropertyRNA rna_Mesh_use_auto_smooth = {
	{(PropertyRNA *)&rna_Mesh_auto_smooth_angle, (PropertyRNA *)&rna_Mesh_skin_vertices,
	-1, "use_auto_smooth", 3, "Auto Smooth",
	"Treat all set-smoothed faces with angles less than the specified angle as \'smooth\', unless they are linked by a sharp edge",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Mesh_update_data, 0, NULL, NULL,
	0, -1, NULL},
	Mesh_use_auto_smooth_get, Mesh_use_auto_smooth_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

FloatPropertyRNA rna_Mesh_auto_smooth_angle = {
	{(PropertyRNA *)&rna_Mesh_show_double_sided, (PropertyRNA *)&rna_Mesh_use_auto_smooth,
	-1, "auto_smooth_angle", 8195, "Auto Smooth Angle",
	"Maximum angle between face normals that \'Auto Smooth\' will operate on",
	0, "*",
	PROP_FLOAT, PROP_ANGLE | PROP_UNIT_ROTATION, NULL, 0, {0, 0, 0}, 0,
	rna_Mesh_update_data, 0, NULL, NULL,
	offsetof(Mesh, smoothresh), 4, NULL},
	Mesh_auto_smooth_angle_get, Mesh_auto_smooth_angle_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 3.1415927410f, 0.0f, 3.1415927410f, 1.0f, 1, 3.1415927410f, NULL
};

BoolPropertyRNA rna_Mesh_show_double_sided = {
	{(PropertyRNA *)&rna_Mesh_texco_mesh, (PropertyRNA *)&rna_Mesh_auto_smooth_angle,
	-1, "show_double_sided", 3, "Double Sided",
	"Render/display the mesh with double or single sided lighting",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Mesh_update_data, 0, NULL, NULL,
	0, -1, NULL},
	Mesh_show_double_sided_get, Mesh_show_double_sided_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

PointerPropertyRNA rna_Mesh_texco_mesh = {
	{(PropertyRNA *)&rna_Mesh_shape_keys, (PropertyRNA *)&rna_Mesh_show_double_sided,
	-1, "texco_mesh", 8388673, "Texture Space Mesh",
	"Derive texture coordinates from another mesh",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	Mesh_texco_mesh_get, Mesh_texco_mesh_set, NULL, NULL,&RNA_Mesh
};

PointerPropertyRNA rna_Mesh_shape_keys = {
	{(PropertyRNA *)&rna_Mesh_use_auto_texspace, (PropertyRNA *)&rna_Mesh_texco_mesh,
	-1, "shape_keys", 8388672, "Shape Keys",
	"",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	Mesh_shape_keys_get, NULL, NULL, NULL,&RNA_Key
};

BoolPropertyRNA rna_Mesh_use_auto_texspace = {
	{(PropertyRNA *)&rna_Mesh_show_edges, (PropertyRNA *)&rna_Mesh_shape_keys,
	-1, "use_auto_texspace", 3, "Auto Texture Space",
	"Adjust active object\'s texture space automatically when transforming object",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	Mesh_use_auto_texspace_get, Mesh_use_auto_texspace_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_Mesh_show_edges = {
	{(PropertyRNA *)&rna_Mesh_show_faces, (PropertyRNA *)&rna_Mesh_use_auto_texspace,
	-1, "show_edges", 3, "Draw Edges",
	"Display selected edges using highlights in the 3D view and UV editor",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Mesh_update_draw, 0, NULL, NULL,
	0, -1, NULL},
	Mesh_show_edges_get, Mesh_show_edges_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_Mesh_show_faces = {
	{(PropertyRNA *)&rna_Mesh_show_normal_face, (PropertyRNA *)&rna_Mesh_show_edges,
	-1, "show_faces", 3, "Draw Faces",
	"Display all faces as shades in the 3D view and UV editor",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Mesh_update_draw, 0, NULL, NULL,
	0, -1, NULL},
	Mesh_show_faces_get, Mesh_show_faces_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_Mesh_show_normal_face = {
	{(PropertyRNA *)&rna_Mesh_show_normal_loop, (PropertyRNA *)&rna_Mesh_show_faces,
	-1, "show_normal_face", 3, "Draw Normals",
	"Display face normals as lines",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Mesh_update_draw, 0, NULL, NULL,
	0, -1, NULL},
	Mesh_show_normal_face_get, Mesh_show_normal_face_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_Mesh_show_normal_loop = {
	{(PropertyRNA *)&rna_Mesh_show_normal_vertex, (PropertyRNA *)&rna_Mesh_show_normal_face,
	-1, "show_normal_loop", 3, "Draw Split Normals",
	"Display vertex-per-face normals as lines",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Mesh_update_draw, 0, NULL, NULL,
	0, -1, NULL},
	Mesh_show_normal_loop_get, Mesh_show_normal_loop_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_Mesh_show_normal_vertex = {
	{(PropertyRNA *)&rna_Mesh_show_weight, (PropertyRNA *)&rna_Mesh_show_normal_loop,
	-1, "show_normal_vertex", 3, "Draw Vertex Normals",
	"Display vertex normals as lines",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Mesh_update_draw, 0, NULL, NULL,
	0, -1, NULL},
	Mesh_show_normal_vertex_get, Mesh_show_normal_vertex_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_Mesh_show_weight = {
	{(PropertyRNA *)&rna_Mesh_show_edge_crease, (PropertyRNA *)&rna_Mesh_show_normal_vertex,
	-1, "show_weight", 3, "Show Weights",
	"Draw weights in editmode",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Mesh_update_data_edit_color, 0, NULL, NULL,
	0, -1, NULL},
	Mesh_show_weight_get, Mesh_show_weight_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_Mesh_show_edge_crease = {
	{(PropertyRNA *)&rna_Mesh_show_edge_bevel_weight, (PropertyRNA *)&rna_Mesh_show_weight,
	-1, "show_edge_crease", 3, "Draw Creases",
	"Display creases created for subsurf weighting",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Mesh_update_draw, 0, NULL, NULL,
	0, -1, NULL},
	Mesh_show_edge_crease_get, Mesh_show_edge_crease_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_Mesh_show_edge_bevel_weight = {
	{(PropertyRNA *)&rna_Mesh_show_edge_seams, (PropertyRNA *)&rna_Mesh_show_edge_crease,
	-1, "show_edge_bevel_weight", 3, "Draw Bevel Weights",
	"Display weights created for the Bevel modifier",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Mesh_update_draw, 0, NULL, NULL,
	0, -1, NULL},
	Mesh_show_edge_bevel_weight_get, Mesh_show_edge_bevel_weight_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_Mesh_show_edge_seams = {
	{(PropertyRNA *)&rna_Mesh_show_edge_sharp, (PropertyRNA *)&rna_Mesh_show_edge_bevel_weight,
	-1, "show_edge_seams", 3, "Draw Seams",
	"Display UV unwrapping seams",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Mesh_update_draw, 0, NULL, NULL,
	0, -1, NULL},
	Mesh_show_edge_seams_get, Mesh_show_edge_seams_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_Mesh_show_edge_sharp = {
	{(PropertyRNA *)&rna_Mesh_show_freestyle_edge_marks, (PropertyRNA *)&rna_Mesh_show_edge_seams,
	-1, "show_edge_sharp", 3, "Draw Sharp",
	"Display sharp edges, used with the EdgeSplit modifier",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Mesh_update_draw, 0, NULL, NULL,
	0, -1, NULL},
	Mesh_show_edge_sharp_get, Mesh_show_edge_sharp_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_Mesh_show_freestyle_edge_marks = {
	{(PropertyRNA *)&rna_Mesh_show_freestyle_face_marks, (PropertyRNA *)&rna_Mesh_show_edge_sharp,
	-1, "show_freestyle_edge_marks", 3, "Draw Freestyle Edge Marks",
	"Display Freestyle edge marks, used with the Freestyle renderer",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Mesh_update_draw, 0, NULL, NULL,
	0, -1, NULL},
	Mesh_show_freestyle_edge_marks_get, Mesh_show_freestyle_edge_marks_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_Mesh_show_freestyle_face_marks = {
	{(PropertyRNA *)&rna_Mesh_show_statvis, (PropertyRNA *)&rna_Mesh_show_freestyle_edge_marks,
	-1, "show_freestyle_face_marks", 3, "Draw Freestyle Face Marks",
	"Display Freestyle face marks, used with the Freestyle renderer",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Mesh_update_draw, 0, NULL, NULL,
	0, -1, NULL},
	Mesh_show_freestyle_face_marks_get, Mesh_show_freestyle_face_marks_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_Mesh_show_statvis = {
	{(PropertyRNA *)&rna_Mesh_show_extra_edge_length, (PropertyRNA *)&rna_Mesh_show_freestyle_face_marks,
	-1, "show_statvis", 3, "Stat Vis",
	"Display statistical information about the mesh",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Mesh_update_data_edit_color, 0, NULL, NULL,
	0, -1, NULL},
	Mesh_show_statvis_get, Mesh_show_statvis_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_Mesh_show_extra_edge_length = {
	{(PropertyRNA *)&rna_Mesh_show_extra_edge_angle, (PropertyRNA *)&rna_Mesh_show_statvis,
	-1, "show_extra_edge_length", 3, "Edge Length",
	"Display selected edge lengths, using global values when set in the transform panel",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Mesh_update_draw, 0, NULL, NULL,
	0, -1, NULL},
	Mesh_show_extra_edge_length_get, Mesh_show_extra_edge_length_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_Mesh_show_extra_edge_angle = {
	{(PropertyRNA *)&rna_Mesh_show_extra_face_angle, (PropertyRNA *)&rna_Mesh_show_extra_edge_length,
	-1, "show_extra_edge_angle", 3, "Edge Angle",
	"Display selected edge angle, using global values when set in the transform panel",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Mesh_update_draw, 0, NULL, NULL,
	0, -1, NULL},
	Mesh_show_extra_edge_angle_get, Mesh_show_extra_edge_angle_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_Mesh_show_extra_face_angle = {
	{(PropertyRNA *)&rna_Mesh_show_extra_face_area, (PropertyRNA *)&rna_Mesh_show_extra_edge_angle,
	-1, "show_extra_face_angle", 3, "Face Angles",
	"Display the angles in the selected edges, using global values when set in the transform panel",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Mesh_update_draw, 0, NULL, NULL,
	0, -1, NULL},
	Mesh_show_extra_face_angle_get, Mesh_show_extra_face_angle_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_Mesh_show_extra_face_area = {
	{(PropertyRNA *)&rna_Mesh_show_extra_indices, (PropertyRNA *)&rna_Mesh_show_extra_face_angle,
	-1, "show_extra_face_area", 3, "Face Area",
	"Display the area of selected faces, using global values when set in the transform panel",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Mesh_update_draw, 0, NULL, NULL,
	0, -1, NULL},
	Mesh_show_extra_face_area_get, Mesh_show_extra_face_area_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_Mesh_show_extra_indices = {
	{(PropertyRNA *)&rna_Mesh_use_mirror_x, (PropertyRNA *)&rna_Mesh_show_extra_face_area,
	-1, "show_extra_indices", 3, "Indices",
	"Display the index numbers of selected vertices, edges, and faces",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Mesh_update_draw, 0, NULL, NULL,
	0, -1, NULL},
	Mesh_show_extra_indices_get, Mesh_show_extra_indices_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_Mesh_use_mirror_x = {
	{(PropertyRNA *)&rna_Mesh_use_mirror_topology, (PropertyRNA *)&rna_Mesh_show_extra_indices,
	-1, "use_mirror_x", 3, "X Mirror",
	"X Axis mirror editing",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	Mesh_use_mirror_x_get, Mesh_use_mirror_x_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_Mesh_use_mirror_topology = {
	{(PropertyRNA *)&rna_Mesh_use_paint_mask, (PropertyRNA *)&rna_Mesh_use_mirror_x,
	-1, "use_mirror_topology", 3, "Topology Mirror",
	"Use topology based mirroring (for when both sides of mesh have matching, unique topology)",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	Mesh_use_mirror_topology_get, Mesh_use_mirror_topology_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_Mesh_use_paint_mask = {
	{(PropertyRNA *)&rna_Mesh_use_paint_mask_vertex, (PropertyRNA *)&rna_Mesh_use_mirror_topology,
	-1, "use_paint_mask", 3, "Paint Mask",
	"Face selection masking for painting",
	132, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Mesh_update_facemask, 252248064, NULL, NULL,
	0, -1, NULL},
	Mesh_use_paint_mask_get, Mesh_use_paint_mask_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_Mesh_use_paint_mask_vertex = {
	{(PropertyRNA *)&rna_Mesh_use_customdata_vertex_bevel, (PropertyRNA *)&rna_Mesh_use_paint_mask,
	-1, "use_paint_mask_vertex", 3, "Vertex Selection",
	"Vertex selection masking for painting (weight paint only)",
	546, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Mesh_update_vertmask, 252248064, NULL, NULL,
	0, -1, NULL},
	Mesh_use_paint_mask_vertex_get, Mesh_use_paint_mask_vertex_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_Mesh_use_customdata_vertex_bevel = {
	{(PropertyRNA *)&rna_Mesh_use_customdata_edge_bevel, (PropertyRNA *)&rna_Mesh_use_paint_mask_vertex,
	-1, "use_customdata_vertex_bevel", 3, "Store Vertex Bevel Weight",
	"",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	Mesh_use_customdata_vertex_bevel_get, Mesh_use_customdata_vertex_bevel_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_Mesh_use_customdata_edge_bevel = {
	{(PropertyRNA *)&rna_Mesh_use_customdata_edge_crease, (PropertyRNA *)&rna_Mesh_use_customdata_vertex_bevel,
	-1, "use_customdata_edge_bevel", 3, "Store Edge Bevel Weight",
	"",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	Mesh_use_customdata_edge_bevel_get, Mesh_use_customdata_edge_bevel_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_Mesh_use_customdata_edge_crease = {
	{(PropertyRNA *)&rna_Mesh_total_vert_sel, (PropertyRNA *)&rna_Mesh_use_customdata_edge_bevel,
	-1, "use_customdata_edge_crease", 3, "Store Edge Crease",
	"",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	Mesh_use_customdata_edge_crease_get, Mesh_use_customdata_edge_crease_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

IntPropertyRNA rna_Mesh_total_vert_sel = {
	{(PropertyRNA *)&rna_Mesh_total_edge_sel, (PropertyRNA *)&rna_Mesh_use_customdata_edge_crease,
	-1, "total_vert_sel", 2, "Selected Vert Total",
	"Selected vertex count in editmode",
	0, "*",
	PROP_INT, PROP_UNSIGNED | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	Mesh_total_vert_sel_get, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL,
	0, 10000, 0, INT_MAX, 1, 0, NULL
};

IntPropertyRNA rna_Mesh_total_edge_sel = {
	{(PropertyRNA *)&rna_Mesh_total_face_sel, (PropertyRNA *)&rna_Mesh_total_vert_sel,
	-1, "total_edge_sel", 2, "Selected Edge Total",
	"Selected edge count in editmode",
	0, "*",
	PROP_INT, PROP_UNSIGNED | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	Mesh_total_edge_sel_get, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL,
	0, 10000, 0, INT_MAX, 1, 0, NULL
};

IntPropertyRNA rna_Mesh_total_face_sel = {
	{(PropertyRNA *)&rna_Mesh_is_editmode, (PropertyRNA *)&rna_Mesh_total_edge_sel,
	-1, "total_face_sel", 2, "Selected Face Total",
	"Selected face count in editmode",
	0, "*",
	PROP_INT, PROP_UNSIGNED | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	Mesh_total_face_sel_get, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL,
	0, 10000, 0, INT_MAX, 1, 0, NULL
};

BoolPropertyRNA rna_Mesh_is_editmode = {
	{(PropertyRNA *)&rna_Mesh_animation_data, (PropertyRNA *)&rna_Mesh_total_face_sel,
	-1, "is_editmode", 2, "Is Editmode",
	"True when used in editmode",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	Mesh_is_editmode_get, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

PointerPropertyRNA rna_Mesh_animation_data = {
	{(PropertyRNA *)&rna_Mesh_auto_texspace, (PropertyRNA *)&rna_Mesh_is_editmode,
	-1, "animation_data", 8388608, "Animation Data",
	"Animation data for this datablock",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	Mesh_animation_data_get, NULL, NULL, NULL,&RNA_AnimData
};

BoolPropertyRNA rna_Mesh_auto_texspace = {
	{(PropertyRNA *)&rna_Mesh_texspace_location, (PropertyRNA *)&rna_Mesh_animation_data,
	-1, "auto_texspace", 3, "Auto Texture Space",
	"Adjust active object\'s texture space automatically when transforming object",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	Mesh_auto_texspace_get, Mesh_auto_texspace_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

static float rna_Mesh_texspace_location_default[3] = {
	0.0f,
	0.0f,
	0.0f
};

FloatPropertyRNA rna_Mesh_texspace_location = {
	{(PropertyRNA *)&rna_Mesh_texspace_size, (PropertyRNA *)&rna_Mesh_auto_texspace,
	-1, "texspace_location", 3, "Texture Space Location",
	"Texture space location",
	0, "*",
	PROP_FLOAT, PROP_TRANSLATION | PROP_UNIT_LENGTH, NULL, 1, {3, 0, 0}, 3,
	rna_Mesh_update_data, 0, rna_Mesh_texspace_editable, NULL,
	0, -1, NULL},
	NULL, NULL, Mesh_texspace_location_get, Mesh_texspace_location_set, NULL, NULL, NULL, NULL, NULL, NULL, -10000.0f, 10000.0f, -FLT_MAX, FLT_MAX, 10.0f, 3, 0.0f, rna_Mesh_texspace_location_default
};

static float rna_Mesh_texspace_size_default[3] = {
	0.0f,
	0.0f,
	0.0f
};

FloatPropertyRNA rna_Mesh_texspace_size = {
	{(PropertyRNA *)&rna_Mesh_materials, (PropertyRNA *)&rna_Mesh_texspace_location,
	-1, "texspace_size", 67108867, "Texture Space Size",
	"Texture space size",
	0, "*",
	PROP_FLOAT, PROP_XYZ | PROP_UNIT_NONE, NULL, 1, {3, 0, 0}, 3,
	rna_Mesh_update_data, 0, rna_Mesh_texspace_editable, NULL,
	0, -1, NULL},
	NULL, NULL, Mesh_texspace_size_get, Mesh_texspace_size_set, NULL, NULL, NULL, NULL, NULL, NULL, -10000.0f, 10000.0f, -FLT_MAX, FLT_MAX, 10.0f, 3, 0.0f, rna_Mesh_texspace_size_default
};

CollectionPropertyRNA rna_Mesh_materials = {
	{NULL, (PropertyRNA *)&rna_Mesh_texspace_size,
	-1, "materials", 0, "Materials",
	"",
	0, "*",
	PROP_COLLECTION, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, &RNA_IDMaterials},
	Mesh_materials_begin, Mesh_materials_next, Mesh_materials_end, Mesh_materials_get, Mesh_materials_length, Mesh_materials_lookup_int, Mesh_materials_lookup_string, rna_IDMaterials_assign_int, &RNA_Material
};

static float rna_Mesh_transform_matrix_default[16] = {
	0.0f,
	0.0f,
	0.0f,
	0.0f,
	0.0f,
	0.0f,
	0.0f,
	0.0f,
	0.0f,
	0.0f,
	0.0f,
	0.0f,
	0.0f,
	0.0f,
	0.0f,
	0.0f
};

FloatPropertyRNA rna_Mesh_transform_matrix = {
	{(PropertyRNA *)&rna_Mesh_transform_shape_keys, NULL,
	-1, "matrix", 7, "",
	"Matrix",
	0, "*",
	PROP_FLOAT, PROP_MATRIX | PROP_UNIT_NONE, NULL, 2, {4, 4, 0}, 16,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 0.0f, -FLT_MAX, FLT_MAX, 1.0f, 3, 0.0f, rna_Mesh_transform_matrix_default
};

BoolPropertyRNA rna_Mesh_transform_shape_keys = {
	{NULL, (PropertyRNA *)&rna_Mesh_transform_matrix,
	-1, "shape_keys", 3, "",
	"Transform Shape Keys",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

FunctionRNA rna_Mesh_transform_func = {
	{(FunctionRNA *)&rna_Mesh_calc_normals_func, NULL,
	NULL,
	{(PropertyRNA *)&rna_Mesh_transform_matrix, (PropertyRNA *)&rna_Mesh_transform_shape_keys}},
	"transform", 0, "Transform mesh vertices by a matrix",
	Mesh_transform_call,
	NULL
};

FunctionRNA rna_Mesh_calc_normals_func = {
	{(FunctionRNA *)&rna_Mesh_calc_normals_split_func, (FunctionRNA *)&rna_Mesh_transform_func,
	NULL,
	{NULL, NULL}},
	"calc_normals", 0, "Calculate vertex normals",
	Mesh_calc_normals_call,
	NULL
};

FloatPropertyRNA rna_Mesh_calc_normals_split_split_angle = {
	{NULL, NULL,
	-1, "split_angle", 3, "",
	"Angle between polys\' normals above which an edge is always sharp (180° to disable)",
	0, "*",
	PROP_FLOAT, PROP_NONE | PROP_UNIT_ROTATION, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 3.1415927410f, 0.0f, 3.1415927410f, 1.0f, 3, 3.1415927410f, NULL
};

FunctionRNA rna_Mesh_calc_normals_split_func = {
	{(FunctionRNA *)&rna_Mesh_free_normals_split_func, (FunctionRNA *)&rna_Mesh_calc_normals_func,
	NULL,
	{(PropertyRNA *)&rna_Mesh_calc_normals_split_split_angle, (PropertyRNA *)&rna_Mesh_calc_normals_split_split_angle}},
	"calc_normals_split", 0, "Calculate split vertex normals, which preserve sharp edges",
	Mesh_calc_normals_split_call,
	NULL
};

FunctionRNA rna_Mesh_free_normals_split_func = {
	{(FunctionRNA *)&rna_Mesh_calc_tangents_func, (FunctionRNA *)&rna_Mesh_calc_normals_split_func,
	NULL,
	{NULL, NULL}},
	"free_normals_split", 0, "Free split vertex normals",
	Mesh_free_normals_split_call,
	NULL
};

StringPropertyRNA rna_Mesh_calc_tangents_uvmap = {
	{NULL, NULL,
	-1, "uvmap", 262145, "",
	"Name of the UV map to use for tangent space computation",
	0, "*",
	PROP_STRING, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	NULL, NULL, NULL, NULL, NULL, NULL, 64, ""
};

FunctionRNA rna_Mesh_calc_tangents_func = {
	{(FunctionRNA *)&rna_Mesh_free_tangents_func, (FunctionRNA *)&rna_Mesh_free_normals_split_func,
	NULL,
	{(PropertyRNA *)&rna_Mesh_calc_tangents_uvmap, (PropertyRNA *)&rna_Mesh_calc_tangents_uvmap}},
	"calc_tangents", 16, "Compute tangents and bitangent signs, to be used together with the split normals to get a complete tangent space for normal mapping (split normals are also computed if not yet present)",
	Mesh_calc_tangents_call,
	NULL
};

FunctionRNA rna_Mesh_free_tangents_func = {
	{(FunctionRNA *)&rna_Mesh_calc_tessface_func, (FunctionRNA *)&rna_Mesh_calc_tangents_func,
	NULL,
	{NULL, NULL}},
	"free_tangents", 0, "Free tangents",
	Mesh_free_tangents_call,
	NULL
};

FunctionRNA rna_Mesh_calc_tessface_func = {
	{(FunctionRNA *)&rna_Mesh_calc_smooth_groups_func, (FunctionRNA *)&rna_Mesh_free_tangents_func,
	NULL,
	{NULL, NULL}},
	"calc_tessface", 0, "Calculate face tessellation (supports editmode too)",
	Mesh_calc_tessface_call,
	NULL
};

BoolPropertyRNA rna_Mesh_calc_smooth_groups_use_bitflags = {
	{(PropertyRNA *)&rna_Mesh_calc_smooth_groups_poly_groups, NULL,
	-1, "use_bitflags", 3, "",
	"Produce bitflags groups instead of simple numeric values",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

static int rna_Mesh_calc_smooth_groups_poly_groups_default[1] = {
	0
};

IntPropertyRNA rna_Mesh_calc_smooth_groups_poly_groups = {
	{(PropertyRNA *)&rna_Mesh_calc_smooth_groups_groups, (PropertyRNA *)&rna_Mesh_calc_smooth_groups_use_bitflags,
	-1, "poly_groups", 131083, "",
	"Smooth Groups",
	0, "*",
	PROP_INT, PROP_NONE | PROP_UNIT_NONE, NULL, 1, {1, 0, 0}, 1,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL,
	0, 0, INT_MIN, INT_MAX, 1, 0, rna_Mesh_calc_smooth_groups_poly_groups_default
};

IntPropertyRNA rna_Mesh_calc_smooth_groups_groups = {
	{NULL, (PropertyRNA *)&rna_Mesh_calc_smooth_groups_poly_groups,
	-1, "groups", 11, "groups",
	"Total number of groups",
	0, "*",
	PROP_INT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL,
	0, INT_MAX, 0, INT_MAX, 1, 0, NULL
};

FunctionRNA rna_Mesh_calc_smooth_groups_func = {
	{(FunctionRNA *)&rna_Mesh_update_func, (FunctionRNA *)&rna_Mesh_calc_tessface_func,
	NULL,
	{(PropertyRNA *)&rna_Mesh_calc_smooth_groups_use_bitflags, (PropertyRNA *)&rna_Mesh_calc_smooth_groups_groups}},
	"calc_smooth_groups", 0, "Calculate smooth groups from sharp edges",
	Mesh_calc_smooth_groups_call,
	NULL
};

BoolPropertyRNA rna_Mesh_update_calc_edges = {
	{(PropertyRNA *)&rna_Mesh_update_calc_tessface, NULL,
	-1, "calc_edges", 3, "Calculate Edges",
	"Force recalculation of edges",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_Mesh_update_calc_tessface = {
	{NULL, (PropertyRNA *)&rna_Mesh_update_calc_edges,
	-1, "calc_tessface", 3, "Calculate Tessellation",
	"Force recalculation of tessellation faces",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

FunctionRNA rna_Mesh_update_func = {
	{(FunctionRNA *)&rna_Mesh_unit_test_compare_func, (FunctionRNA *)&rna_Mesh_calc_smooth_groups_func,
	NULL,
	{(PropertyRNA *)&rna_Mesh_update_calc_edges, (PropertyRNA *)&rna_Mesh_update_calc_tessface}},
	"update", 8, "update",
	Mesh_update_call,
	NULL
};

PointerPropertyRNA rna_Mesh_unit_test_compare_mesh = {
	{(PropertyRNA *)&rna_Mesh_unit_test_compare_result, NULL,
	-1, "mesh", 8388608, "",
	"Mesh to compare to",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	NULL, NULL, NULL, NULL,&RNA_Mesh
};

StringPropertyRNA rna_Mesh_unit_test_compare_result = {
	{NULL, (PropertyRNA *)&rna_Mesh_unit_test_compare_mesh,
	-1, "result", 262153, "Return value",
	"String description of result of comparison",
	0, "*",
	PROP_STRING, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	NULL, NULL, NULL, NULL, NULL, NULL, 64, "nothing"
};

FunctionRNA rna_Mesh_unit_test_compare_func = {
	{(FunctionRNA *)&rna_Mesh_validate_func, (FunctionRNA *)&rna_Mesh_update_func,
	NULL,
	{(PropertyRNA *)&rna_Mesh_unit_test_compare_mesh, (PropertyRNA *)&rna_Mesh_unit_test_compare_result}},
	"unit_test_compare", 0, "unit_test_compare",
	Mesh_unit_test_compare_call,
	(PropertyRNA *)&rna_Mesh_unit_test_compare_result
};

BoolPropertyRNA rna_Mesh_validate_verbose = {
	{(PropertyRNA *)&rna_Mesh_validate_result, NULL,
	-1, "verbose", 3, "Verbose",
	"Output information about the errors found",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_Mesh_validate_result = {
	{NULL, (PropertyRNA *)&rna_Mesh_validate_verbose,
	-1, "result", 11, "Result",
	"",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

FunctionRNA rna_Mesh_validate_func = {
	{(FunctionRNA *)&rna_Mesh_validate_material_indices_func, (FunctionRNA *)&rna_Mesh_unit_test_compare_func,
	NULL,
	{(PropertyRNA *)&rna_Mesh_validate_verbose, (PropertyRNA *)&rna_Mesh_validate_result}},
	"validate", 0, "Validate geometry, return True when the mesh has had invalid geometry corrected/removed",
	Mesh_validate_call,
	(PropertyRNA *)&rna_Mesh_validate_result
};

BoolPropertyRNA rna_Mesh_validate_material_indices_result = {
	{NULL, NULL,
	-1, "result", 11, "Result",
	"",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

FunctionRNA rna_Mesh_validate_material_indices_func = {
	{NULL, (FunctionRNA *)&rna_Mesh_validate_func,
	NULL,
	{(PropertyRNA *)&rna_Mesh_validate_material_indices_result, (PropertyRNA *)&rna_Mesh_validate_material_indices_result}},
	"validate_material_indices", 0, "Validate material indices of polygons, return True when the mesh has had invalid indices corrected (to default 0)",
	Mesh_validate_material_indices_call,
	(PropertyRNA *)&rna_Mesh_validate_material_indices_result
};

StructRNA RNA_Mesh = {
	{(ContainerRNA *)&RNA_MeshVertices, (ContainerRNA *)&RNA_MaterialGameSettings,
	NULL,
	{(PropertyRNA *)&rna_Mesh_vertices, (PropertyRNA *)&rna_Mesh_materials}},
	"Mesh", NULL, NULL, 7, "Mesh",
	"Mesh datablock defining geometric surfaces",
	"*", 160,
	(PropertyRNA *)&rna_ID_name, (PropertyRNA *)&rna_ID_rna_properties,
	&RNA_ID,
	NULL,
	rna_ID_refine,
	NULL,
	NULL,
	NULL,
	NULL,
	rna_ID_idprops,
	{(FunctionRNA *)&rna_Mesh_transform_func, (FunctionRNA *)&rna_Mesh_validate_material_indices_func}
};

/* Mesh Vertices */
CollectionPropertyRNA rna_MeshVertices_rna_properties = {
	{(PropertyRNA *)&rna_MeshVertices_rna_type, NULL,
	-1, "rna_properties", 128, "Properties",
	"RNA property collection",
	0, "*",
	PROP_COLLECTION, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	MeshVertices_rna_properties_begin, MeshVertices_rna_properties_next, MeshVertices_rna_properties_end, MeshVertices_rna_properties_get, NULL, NULL, MeshVertices_rna_properties_lookup_string, NULL, &RNA_Property
};

PointerPropertyRNA rna_MeshVertices_rna_type = {
	{NULL, (PropertyRNA *)&rna_MeshVertices_rna_properties,
	-1, "rna_type", 8912896, "RNA",
	"RNA type definition",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	MeshVertices_rna_type_get, NULL, NULL, NULL,&RNA_Struct
};

IntPropertyRNA rna_MeshVertices_add_count = {
	{NULL, NULL,
	-1, "count", 3, "Count",
	"Number of vertices to add",
	0, "*",
	PROP_INT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL,
	0, INT_MAX, 0, INT_MAX, 1, 0, NULL
};

FunctionRNA rna_MeshVertices_add_func = {
	{NULL, NULL,
	NULL,
	{(PropertyRNA *)&rna_MeshVertices_add_count, (PropertyRNA *)&rna_MeshVertices_add_count}},
	"add", 16, "add",
	MeshVertices_add_call,
	NULL
};

StructRNA RNA_MeshVertices = {
	{(ContainerRNA *)&RNA_MeshEdges, (ContainerRNA *)&RNA_Mesh,
	NULL,
	{(PropertyRNA *)&rna_MeshVertices_rna_properties, (PropertyRNA *)&rna_MeshVertices_rna_type}},
	"MeshVertices", NULL, NULL, 4, "Mesh Vertices",
	"Collection of mesh vertices",
	"*", 17,
	NULL, (PropertyRNA *)&rna_MeshVertices_rna_properties,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	{(FunctionRNA *)&rna_MeshVertices_add_func, (FunctionRNA *)&rna_MeshVertices_add_func}
};

/* Mesh Edges */
CollectionPropertyRNA rna_MeshEdges_rna_properties = {
	{(PropertyRNA *)&rna_MeshEdges_rna_type, NULL,
	-1, "rna_properties", 128, "Properties",
	"RNA property collection",
	0, "*",
	PROP_COLLECTION, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	MeshEdges_rna_properties_begin, MeshEdges_rna_properties_next, MeshEdges_rna_properties_end, MeshEdges_rna_properties_get, NULL, NULL, MeshEdges_rna_properties_lookup_string, NULL, &RNA_Property
};

PointerPropertyRNA rna_MeshEdges_rna_type = {
	{NULL, (PropertyRNA *)&rna_MeshEdges_rna_properties,
	-1, "rna_type", 8912896, "RNA",
	"RNA type definition",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	MeshEdges_rna_type_get, NULL, NULL, NULL,&RNA_Struct
};

IntPropertyRNA rna_MeshEdges_add_count = {
	{NULL, NULL,
	-1, "count", 3, "Count",
	"Number of edges to add",
	0, "*",
	PROP_INT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL,
	0, INT_MAX, 0, INT_MAX, 1, 0, NULL
};

FunctionRNA rna_MeshEdges_add_func = {
	{NULL, NULL,
	NULL,
	{(PropertyRNA *)&rna_MeshEdges_add_count, (PropertyRNA *)&rna_MeshEdges_add_count}},
	"add", 16, "add",
	MeshEdges_add_call,
	NULL
};

StructRNA RNA_MeshEdges = {
	{(ContainerRNA *)&RNA_MeshTessFaces, (ContainerRNA *)&RNA_MeshVertices,
	NULL,
	{(PropertyRNA *)&rna_MeshEdges_rna_properties, (PropertyRNA *)&rna_MeshEdges_rna_type}},
	"MeshEdges", NULL, NULL, 4, "Mesh Edges",
	"Collection of mesh edges",
	"*", 17,
	NULL, (PropertyRNA *)&rna_MeshEdges_rna_properties,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	{(FunctionRNA *)&rna_MeshEdges_add_func, (FunctionRNA *)&rna_MeshEdges_add_func}
};

/* Mesh Faces */
CollectionPropertyRNA rna_MeshTessFaces_rna_properties = {
	{(PropertyRNA *)&rna_MeshTessFaces_rna_type, NULL,
	-1, "rna_properties", 128, "Properties",
	"RNA property collection",
	0, "*",
	PROP_COLLECTION, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	MeshTessFaces_rna_properties_begin, MeshTessFaces_rna_properties_next, MeshTessFaces_rna_properties_end, MeshTessFaces_rna_properties_get, NULL, NULL, MeshTessFaces_rna_properties_lookup_string, NULL, &RNA_Property
};

PointerPropertyRNA rna_MeshTessFaces_rna_type = {
	{(PropertyRNA *)&rna_MeshTessFaces_active, (PropertyRNA *)&rna_MeshTessFaces_rna_properties,
	-1, "rna_type", 8912896, "RNA",
	"RNA type definition",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	MeshTessFaces_rna_type_get, NULL, NULL, NULL,&RNA_Struct
};

IntPropertyRNA rna_MeshTessFaces_active = {
	{NULL, (PropertyRNA *)&rna_MeshTessFaces_rna_type,
	-1, "active", 8195, "Active Face",
	"The active face for this mesh",
	0, "*",
	PROP_INT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	offsetof(Mesh, act_face), 0, NULL},
	MeshTessFaces_active_get, MeshTessFaces_active_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL,
	-10000, 10000, INT_MIN, INT_MAX, 1, 0, NULL
};

IntPropertyRNA rna_MeshTessFaces_add_count = {
	{NULL, NULL,
	-1, "count", 3, "Count",
	"Number of faces to add",
	0, "*",
	PROP_INT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL,
	0, INT_MAX, 0, INT_MAX, 1, 0, NULL
};

FunctionRNA rna_MeshTessFaces_add_func = {
	{NULL, NULL,
	NULL,
	{(PropertyRNA *)&rna_MeshTessFaces_add_count, (PropertyRNA *)&rna_MeshTessFaces_add_count}},
	"add", 16, "add",
	MeshTessFaces_add_call,
	NULL
};

StructRNA RNA_MeshTessFaces = {
	{(ContainerRNA *)&RNA_MeshLoops, (ContainerRNA *)&RNA_MeshEdges,
	NULL,
	{(PropertyRNA *)&rna_MeshTessFaces_rna_properties, (PropertyRNA *)&rna_MeshTessFaces_active}},
	"MeshTessFaces", NULL, NULL, 4, "Mesh Faces",
	"Collection of mesh faces",
	"*", 17,
	NULL, (PropertyRNA *)&rna_MeshTessFaces_rna_properties,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	{(FunctionRNA *)&rna_MeshTessFaces_add_func, (FunctionRNA *)&rna_MeshTessFaces_add_func}
};

/* Mesh Loops */
CollectionPropertyRNA rna_MeshLoops_rna_properties = {
	{(PropertyRNA *)&rna_MeshLoops_rna_type, NULL,
	-1, "rna_properties", 128, "Properties",
	"RNA property collection",
	0, "*",
	PROP_COLLECTION, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	MeshLoops_rna_properties_begin, MeshLoops_rna_properties_next, MeshLoops_rna_properties_end, MeshLoops_rna_properties_get, NULL, NULL, MeshLoops_rna_properties_lookup_string, NULL, &RNA_Property
};

PointerPropertyRNA rna_MeshLoops_rna_type = {
	{NULL, (PropertyRNA *)&rna_MeshLoops_rna_properties,
	-1, "rna_type", 8912896, "RNA",
	"RNA type definition",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	MeshLoops_rna_type_get, NULL, NULL, NULL,&RNA_Struct
};

IntPropertyRNA rna_MeshLoops_add_count = {
	{NULL, NULL,
	-1, "count", 3, "Count",
	"Number of loops to add",
	0, "*",
	PROP_INT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL,
	0, INT_MAX, 0, INT_MAX, 1, 0, NULL
};

FunctionRNA rna_MeshLoops_add_func = {
	{NULL, NULL,
	NULL,
	{(PropertyRNA *)&rna_MeshLoops_add_count, (PropertyRNA *)&rna_MeshLoops_add_count}},
	"add", 16, "add",
	MeshLoops_add_call,
	NULL
};

StructRNA RNA_MeshLoops = {
	{(ContainerRNA *)&RNA_MeshPolygons, (ContainerRNA *)&RNA_MeshTessFaces,
	NULL,
	{(PropertyRNA *)&rna_MeshLoops_rna_properties, (PropertyRNA *)&rna_MeshLoops_rna_type}},
	"MeshLoops", NULL, NULL, 4, "Mesh Loops",
	"Collection of mesh loops",
	"*", 17,
	NULL, (PropertyRNA *)&rna_MeshLoops_rna_properties,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	{(FunctionRNA *)&rna_MeshLoops_add_func, (FunctionRNA *)&rna_MeshLoops_add_func}
};

/* Mesh Polygons */
CollectionPropertyRNA rna_MeshPolygons_rna_properties = {
	{(PropertyRNA *)&rna_MeshPolygons_rna_type, NULL,
	-1, "rna_properties", 128, "Properties",
	"RNA property collection",
	0, "*",
	PROP_COLLECTION, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	MeshPolygons_rna_properties_begin, MeshPolygons_rna_properties_next, MeshPolygons_rna_properties_end, MeshPolygons_rna_properties_get, NULL, NULL, MeshPolygons_rna_properties_lookup_string, NULL, &RNA_Property
};

PointerPropertyRNA rna_MeshPolygons_rna_type = {
	{(PropertyRNA *)&rna_MeshPolygons_active, (PropertyRNA *)&rna_MeshPolygons_rna_properties,
	-1, "rna_type", 8912896, "RNA",
	"RNA type definition",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	MeshPolygons_rna_type_get, NULL, NULL, NULL,&RNA_Struct
};

IntPropertyRNA rna_MeshPolygons_active = {
	{NULL, (PropertyRNA *)&rna_MeshPolygons_rna_type,
	-1, "active", 8195, "Active Polygon",
	"The active polygon for this mesh",
	0, "*",
	PROP_INT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	offsetof(Mesh, act_face), 0, NULL},
	MeshPolygons_active_get, MeshPolygons_active_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL,
	-10000, 10000, INT_MIN, INT_MAX, 1, 0, NULL
};

IntPropertyRNA rna_MeshPolygons_add_count = {
	{NULL, NULL,
	-1, "count", 3, "Count",
	"Number of polygons to add",
	0, "*",
	PROP_INT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL,
	0, INT_MAX, 0, INT_MAX, 1, 0, NULL
};

FunctionRNA rna_MeshPolygons_add_func = {
	{NULL, NULL,
	NULL,
	{(PropertyRNA *)&rna_MeshPolygons_add_count, (PropertyRNA *)&rna_MeshPolygons_add_count}},
	"add", 16, "add",
	MeshPolygons_add_call,
	NULL
};

StructRNA RNA_MeshPolygons = {
	{(ContainerRNA *)&RNA_UVLoopLayers, (ContainerRNA *)&RNA_MeshLoops,
	NULL,
	{(PropertyRNA *)&rna_MeshPolygons_rna_properties, (PropertyRNA *)&rna_MeshPolygons_active}},
	"MeshPolygons", NULL, NULL, 4, "Mesh Polygons",
	"Collection of mesh polygons",
	"*", 17,
	NULL, (PropertyRNA *)&rna_MeshPolygons_rna_properties,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	{(FunctionRNA *)&rna_MeshPolygons_add_func, (FunctionRNA *)&rna_MeshPolygons_add_func}
};

/* UV Loop Layers */
CollectionPropertyRNA rna_UVLoopLayers_rna_properties = {
	{(PropertyRNA *)&rna_UVLoopLayers_rna_type, NULL,
	-1, "rna_properties", 128, "Properties",
	"RNA property collection",
	0, "*",
	PROP_COLLECTION, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	UVLoopLayers_rna_properties_begin, UVLoopLayers_rna_properties_next, UVLoopLayers_rna_properties_end, UVLoopLayers_rna_properties_get, NULL, NULL, UVLoopLayers_rna_properties_lookup_string, NULL, &RNA_Property
};

PointerPropertyRNA rna_UVLoopLayers_rna_type = {
	{(PropertyRNA *)&rna_UVLoopLayers_active, (PropertyRNA *)&rna_UVLoopLayers_rna_properties,
	-1, "rna_type", 8912896, "RNA",
	"RNA type definition",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	UVLoopLayers_rna_type_get, NULL, NULL, NULL,&RNA_Struct
};

PointerPropertyRNA rna_UVLoopLayers_active = {
	{(PropertyRNA *)&rna_UVLoopLayers_active_index, (PropertyRNA *)&rna_UVLoopLayers_rna_type,
	-1, "active", 41943041, "Active UV loop layer",
	"Active UV loop layer",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Mesh_update_data, 0, NULL, NULL,
	0, -1, NULL},
	UVLoopLayers_active_get, UVLoopLayers_active_set, NULL, NULL,&RNA_MeshUVLoopLayer
};

IntPropertyRNA rna_UVLoopLayers_active_index = {
	{NULL, (PropertyRNA *)&rna_UVLoopLayers_active,
	-1, "active_index", 3, "Active UV loop layer Index",
	"Active UV loop layer index",
	0, "*",
	PROP_INT, PROP_UNSIGNED | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Mesh_update_data, 0, NULL, NULL,
	0, -1, NULL},
	UVLoopLayers_active_index_get, UVLoopLayers_active_index_set, NULL, NULL, rna_Mesh_uv_layer_index_range, NULL, NULL, NULL, NULL, NULL,
	0, 10000, 0, INT_MAX, 1, 0, NULL
};

StructRNA RNA_UVLoopLayers = {
	{(ContainerRNA *)&RNA_TessfaceUVTextures, (ContainerRNA *)&RNA_MeshPolygons,
	NULL,
	{(PropertyRNA *)&rna_UVLoopLayers_rna_properties, (PropertyRNA *)&rna_UVLoopLayers_active_index}},
	"UVLoopLayers", NULL, NULL, 4, "UV Loop Layers",
	"Collection of uv loop layers",
	"*", 17,
	NULL, (PropertyRNA *)&rna_UVLoopLayers_rna_properties,
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

/* UV Maps */
CollectionPropertyRNA rna_TessfaceUVTextures_rna_properties = {
	{(PropertyRNA *)&rna_TessfaceUVTextures_rna_type, NULL,
	-1, "rna_properties", 128, "Properties",
	"RNA property collection",
	0, "*",
	PROP_COLLECTION, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	TessfaceUVTextures_rna_properties_begin, TessfaceUVTextures_rna_properties_next, TessfaceUVTextures_rna_properties_end, TessfaceUVTextures_rna_properties_get, NULL, NULL, TessfaceUVTextures_rna_properties_lookup_string, NULL, &RNA_Property
};

PointerPropertyRNA rna_TessfaceUVTextures_rna_type = {
	{(PropertyRNA *)&rna_TessfaceUVTextures_active, (PropertyRNA *)&rna_TessfaceUVTextures_rna_properties,
	-1, "rna_type", 8912896, "RNA",
	"RNA type definition",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	TessfaceUVTextures_rna_type_get, NULL, NULL, NULL,&RNA_Struct
};

PointerPropertyRNA rna_TessfaceUVTextures_active = {
	{(PropertyRNA *)&rna_TessfaceUVTextures_active_index, (PropertyRNA *)&rna_TessfaceUVTextures_rna_type,
	-1, "active", 8388608, "Active UV Map",
	"Active UV Map",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Mesh_update_data, 0, NULL, NULL,
	0, -1, NULL},
	TessfaceUVTextures_active_get, NULL, NULL, NULL,&RNA_MeshTextureFaceLayer
};

IntPropertyRNA rna_TessfaceUVTextures_active_index = {
	{NULL, (PropertyRNA *)&rna_TessfaceUVTextures_active,
	-1, "active_index", 3, "Active UV Map Index",
	"Active UV Map index",
	0, "*",
	PROP_INT, PROP_UNSIGNED | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Mesh_update_data, 0, NULL, NULL,
	0, -1, NULL},
	TessfaceUVTextures_active_index_get, TessfaceUVTextures_active_index_set, NULL, NULL, rna_Mesh_uv_texture_index_range, NULL, NULL, NULL, NULL, NULL,
	0, 10000, 0, INT_MAX, 1, 0, NULL
};

StringPropertyRNA rna_TessfaceUVTextures_new_name = {
	{(PropertyRNA *)&rna_TessfaceUVTextures_new_layer, NULL,
	-1, "name", 262145, "",
	"UV map name",
	0, "*",
	PROP_STRING, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	NULL, NULL, NULL, NULL, NULL, NULL, 0, "UVMap"
};

PointerPropertyRNA rna_TessfaceUVTextures_new_layer = {
	{NULL, (PropertyRNA *)&rna_TessfaceUVTextures_new_name,
	-1, "layer", 8390664, "",
	"The newly created layer",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	NULL, NULL, NULL, NULL,&RNA_MeshTextureFaceLayer
};

FunctionRNA rna_TessfaceUVTextures_new_func = {
	{NULL, NULL,
	NULL,
	{(PropertyRNA *)&rna_TessfaceUVTextures_new_name, (PropertyRNA *)&rna_TessfaceUVTextures_new_layer}},
	"new", 16, "Add a UV tessface-texture layer to Mesh (only for meshes with no polygons)",
	TessfaceUVTextures_new_call,
	(PropertyRNA *)&rna_TessfaceUVTextures_new_layer
};

StructRNA RNA_TessfaceUVTextures = {
	{(ContainerRNA *)&RNA_UVTextures, (ContainerRNA *)&RNA_UVLoopLayers,
	NULL,
	{(PropertyRNA *)&rna_TessfaceUVTextures_rna_properties, (PropertyRNA *)&rna_TessfaceUVTextures_active_index}},
	"TessfaceUVTextures", NULL, NULL, 4, "UV Maps",
	"Collection of UV maps for tessellated faces",
	"*", 17,
	NULL, (PropertyRNA *)&rna_TessfaceUVTextures_rna_properties,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	{(FunctionRNA *)&rna_TessfaceUVTextures_new_func, (FunctionRNA *)&rna_TessfaceUVTextures_new_func}
};

/* UV Maps */
CollectionPropertyRNA rna_UVTextures_rna_properties = {
	{(PropertyRNA *)&rna_UVTextures_rna_type, NULL,
	-1, "rna_properties", 128, "Properties",
	"RNA property collection",
	0, "*",
	PROP_COLLECTION, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	UVTextures_rna_properties_begin, UVTextures_rna_properties_next, UVTextures_rna_properties_end, UVTextures_rna_properties_get, NULL, NULL, UVTextures_rna_properties_lookup_string, NULL, &RNA_Property
};

PointerPropertyRNA rna_UVTextures_rna_type = {
	{(PropertyRNA *)&rna_UVTextures_active, (PropertyRNA *)&rna_UVTextures_rna_properties,
	-1, "rna_type", 8912896, "RNA",
	"RNA type definition",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	UVTextures_rna_type_get, NULL, NULL, NULL,&RNA_Struct
};

PointerPropertyRNA rna_UVTextures_active = {
	{(PropertyRNA *)&rna_UVTextures_active_index, (PropertyRNA *)&rna_UVTextures_rna_type,
	-1, "active", 41943041, "Active UV Map",
	"Active UV Map",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Mesh_update_data, 0, NULL, NULL,
	0, -1, NULL},
	UVTextures_active_get, UVTextures_active_set, NULL, NULL,&RNA_MeshTexturePolyLayer
};

IntPropertyRNA rna_UVTextures_active_index = {
	{NULL, (PropertyRNA *)&rna_UVTextures_active,
	-1, "active_index", 3, "Active UV Map Index",
	"Active UV Map index",
	0, "*",
	PROP_INT, PROP_UNSIGNED | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Mesh_update_data, 0, NULL, NULL,
	0, -1, NULL},
	UVTextures_active_index_get, UVTextures_active_index_set, NULL, NULL, rna_Mesh_uv_texture_index_range, NULL, NULL, NULL, NULL, NULL,
	0, 10000, 0, INT_MAX, 1, 0, NULL
};

StringPropertyRNA rna_UVTextures_new_name = {
	{(PropertyRNA *)&rna_UVTextures_new_layer, NULL,
	-1, "name", 262145, "",
	"UV map name",
	0, "*",
	PROP_STRING, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	NULL, NULL, NULL, NULL, NULL, NULL, 0, "UVMap"
};

PointerPropertyRNA rna_UVTextures_new_layer = {
	{NULL, (PropertyRNA *)&rna_UVTextures_new_name,
	-1, "layer", 8390664, "",
	"The newly created layer",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	NULL, NULL, NULL, NULL,&RNA_MeshTexturePolyLayer
};

FunctionRNA rna_UVTextures_new_func = {
	{(FunctionRNA *)&rna_UVTextures_remove_func, NULL,
	NULL,
	{(PropertyRNA *)&rna_UVTextures_new_name, (PropertyRNA *)&rna_UVTextures_new_layer}},
	"new", 0, "Add a UV map layer to Mesh",
	UVTextures_new_call,
	(PropertyRNA *)&rna_UVTextures_new_layer
};

PointerPropertyRNA rna_UVTextures_remove_layer = {
	{NULL, NULL,
	-1, "layer", 8650756, "",
	"The layer to remove",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	NULL, NULL, NULL, NULL,&RNA_MeshTexturePolyLayer
};

FunctionRNA rna_UVTextures_remove_func = {
	{NULL, (FunctionRNA *)&rna_UVTextures_new_func,
	NULL,
	{(PropertyRNA *)&rna_UVTextures_remove_layer, (PropertyRNA *)&rna_UVTextures_remove_layer}},
	"remove", 16, "Remove a vertex color layer",
	UVTextures_remove_call,
	NULL
};

StructRNA RNA_UVTextures = {
	{(ContainerRNA *)&RNA_VertexColors, (ContainerRNA *)&RNA_TessfaceUVTextures,
	NULL,
	{(PropertyRNA *)&rna_UVTextures_rna_properties, (PropertyRNA *)&rna_UVTextures_active_index}},
	"UVTextures", NULL, NULL, 4, "UV Maps",
	"Collection of UV maps",
	"*", 17,
	NULL, (PropertyRNA *)&rna_UVTextures_rna_properties,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	{(FunctionRNA *)&rna_UVTextures_new_func, (FunctionRNA *)&rna_UVTextures_remove_func}
};

/* Vertex Colors */
CollectionPropertyRNA rna_VertexColors_rna_properties = {
	{(PropertyRNA *)&rna_VertexColors_rna_type, NULL,
	-1, "rna_properties", 128, "Properties",
	"RNA property collection",
	0, "*",
	PROP_COLLECTION, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	VertexColors_rna_properties_begin, VertexColors_rna_properties_next, VertexColors_rna_properties_end, VertexColors_rna_properties_get, NULL, NULL, VertexColors_rna_properties_lookup_string, NULL, &RNA_Property
};

PointerPropertyRNA rna_VertexColors_rna_type = {
	{(PropertyRNA *)&rna_VertexColors_active, (PropertyRNA *)&rna_VertexColors_rna_properties,
	-1, "rna_type", 8912896, "RNA",
	"RNA type definition",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	VertexColors_rna_type_get, NULL, NULL, NULL,&RNA_Struct
};

PointerPropertyRNA rna_VertexColors_active = {
	{(PropertyRNA *)&rna_VertexColors_active_index, (PropertyRNA *)&rna_VertexColors_rna_type,
	-1, "active", 8388608, "Active Vertex Color Layer",
	"Active vertex color layer",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Mesh_update_data, 0, NULL, NULL,
	0, -1, NULL},
	VertexColors_active_get, NULL, NULL, NULL,&RNA_MeshColorLayer
};

IntPropertyRNA rna_VertexColors_active_index = {
	{NULL, (PropertyRNA *)&rna_VertexColors_active,
	-1, "active_index", 3, "Active Vertex Color Index",
	"Active vertex color index",
	0, "*",
	PROP_INT, PROP_UNSIGNED | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Mesh_update_data, 0, NULL, NULL,
	0, -1, NULL},
	VertexColors_active_index_get, VertexColors_active_index_set, NULL, NULL, rna_Mesh_vertex_color_index_range, NULL, NULL, NULL, NULL, NULL,
	0, 10000, 0, INT_MAX, 1, 0, NULL
};

StringPropertyRNA rna_VertexColors_new_name = {
	{(PropertyRNA *)&rna_VertexColors_new_layer, NULL,
	-1, "name", 262145, "",
	"Vertex color name",
	0, "*",
	PROP_STRING, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	NULL, NULL, NULL, NULL, NULL, NULL, 0, "Col"
};

PointerPropertyRNA rna_VertexColors_new_layer = {
	{NULL, (PropertyRNA *)&rna_VertexColors_new_name,
	-1, "layer", 8390664, "",
	"The newly created layer",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	NULL, NULL, NULL, NULL,&RNA_MeshColorLayer
};

FunctionRNA rna_VertexColors_new_func = {
	{NULL, NULL,
	NULL,
	{(PropertyRNA *)&rna_VertexColors_new_name, (PropertyRNA *)&rna_VertexColors_new_layer}},
	"new", 16, "Add a vertex color layer to Mesh",
	VertexColors_new_call,
	(PropertyRNA *)&rna_VertexColors_new_layer
};

StructRNA RNA_VertexColors = {
	{(ContainerRNA *)&RNA_LoopColors, (ContainerRNA *)&RNA_UVTextures,
	NULL,
	{(PropertyRNA *)&rna_VertexColors_rna_properties, (PropertyRNA *)&rna_VertexColors_active_index}},
	"VertexColors", NULL, NULL, 4, "Vertex Colors",
	"Collection of vertex colors",
	"*", 17,
	NULL, (PropertyRNA *)&rna_VertexColors_rna_properties,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	{(FunctionRNA *)&rna_VertexColors_new_func, (FunctionRNA *)&rna_VertexColors_new_func}
};

/* Loop Colors */
CollectionPropertyRNA rna_LoopColors_rna_properties = {
	{(PropertyRNA *)&rna_LoopColors_rna_type, NULL,
	-1, "rna_properties", 128, "Properties",
	"RNA property collection",
	0, "*",
	PROP_COLLECTION, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	LoopColors_rna_properties_begin, LoopColors_rna_properties_next, LoopColors_rna_properties_end, LoopColors_rna_properties_get, NULL, NULL, LoopColors_rna_properties_lookup_string, NULL, &RNA_Property
};

PointerPropertyRNA rna_LoopColors_rna_type = {
	{(PropertyRNA *)&rna_LoopColors_active, (PropertyRNA *)&rna_LoopColors_rna_properties,
	-1, "rna_type", 8912896, "RNA",
	"RNA type definition",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	LoopColors_rna_type_get, NULL, NULL, NULL,&RNA_Struct
};

PointerPropertyRNA rna_LoopColors_active = {
	{(PropertyRNA *)&rna_LoopColors_active_index, (PropertyRNA *)&rna_LoopColors_rna_type,
	-1, "active", 41943041, "Active Vertex Color Layer",
	"Active vertex color layer",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Mesh_update_data, 0, NULL, NULL,
	0, -1, NULL},
	LoopColors_active_get, LoopColors_active_set, NULL, NULL,&RNA_MeshLoopColorLayer
};

IntPropertyRNA rna_LoopColors_active_index = {
	{NULL, (PropertyRNA *)&rna_LoopColors_active,
	-1, "active_index", 3, "Active Vertex Color Index",
	"Active vertex color index",
	0, "*",
	PROP_INT, PROP_UNSIGNED | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Mesh_update_data, 0, NULL, NULL,
	0, -1, NULL},
	LoopColors_active_index_get, LoopColors_active_index_set, NULL, NULL, rna_Mesh_vertex_color_index_range, NULL, NULL, NULL, NULL, NULL,
	0, 10000, 0, INT_MAX, 1, 0, NULL
};

StringPropertyRNA rna_LoopColors_new_name = {
	{(PropertyRNA *)&rna_LoopColors_new_layer, NULL,
	-1, "name", 262145, "",
	"Vertex color name",
	0, "*",
	PROP_STRING, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	NULL, NULL, NULL, NULL, NULL, NULL, 0, "Col"
};

PointerPropertyRNA rna_LoopColors_new_layer = {
	{NULL, (PropertyRNA *)&rna_LoopColors_new_name,
	-1, "layer", 8390664, "",
	"The newly created layer",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	NULL, NULL, NULL, NULL,&RNA_MeshLoopColorLayer
};

FunctionRNA rna_LoopColors_new_func = {
	{(FunctionRNA *)&rna_LoopColors_remove_func, NULL,
	NULL,
	{(PropertyRNA *)&rna_LoopColors_new_name, (PropertyRNA *)&rna_LoopColors_new_layer}},
	"new", 0, "Add a vertex color layer to Mesh",
	LoopColors_new_call,
	(PropertyRNA *)&rna_LoopColors_new_layer
};

PointerPropertyRNA rna_LoopColors_remove_layer = {
	{NULL, NULL,
	-1, "layer", 262148, "",
	"The layer to remove",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	NULL, NULL, NULL, NULL,&RNA_MeshLoopColorLayer
};

FunctionRNA rna_LoopColors_remove_func = {
	{NULL, (FunctionRNA *)&rna_LoopColors_new_func,
	NULL,
	{(PropertyRNA *)&rna_LoopColors_remove_layer, (PropertyRNA *)&rna_LoopColors_remove_layer}},
	"remove", 16, "Remove a vertex color layer",
	LoopColors_remove_call,
	NULL
};

StructRNA RNA_LoopColors = {
	{(ContainerRNA *)&RNA_FloatProperties, (ContainerRNA *)&RNA_VertexColors,
	NULL,
	{(PropertyRNA *)&rna_LoopColors_rna_properties, (PropertyRNA *)&rna_LoopColors_active_index}},
	"LoopColors", NULL, NULL, 4, "Loop Colors",
	"Collection of vertex colors",
	"*", 17,
	NULL, (PropertyRNA *)&rna_LoopColors_rna_properties,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	{(FunctionRNA *)&rna_LoopColors_new_func, (FunctionRNA *)&rna_LoopColors_remove_func}
};

/* Float Properties */
CollectionPropertyRNA rna_FloatProperties_rna_properties = {
	{(PropertyRNA *)&rna_FloatProperties_rna_type, NULL,
	-1, "rna_properties", 128, "Properties",
	"RNA property collection",
	0, "*",
	PROP_COLLECTION, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	FloatProperties_rna_properties_begin, FloatProperties_rna_properties_next, FloatProperties_rna_properties_end, FloatProperties_rna_properties_get, NULL, NULL, FloatProperties_rna_properties_lookup_string, NULL, &RNA_Property
};

PointerPropertyRNA rna_FloatProperties_rna_type = {
	{NULL, (PropertyRNA *)&rna_FloatProperties_rna_properties,
	-1, "rna_type", 8912896, "RNA",
	"RNA type definition",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	FloatProperties_rna_type_get, NULL, NULL, NULL,&RNA_Struct
};

StringPropertyRNA rna_FloatProperties_new_name = {
	{(PropertyRNA *)&rna_FloatProperties_new_layer, NULL,
	-1, "name", 262145, "",
	"Float property name",
	0, "*",
	PROP_STRING, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	NULL, NULL, NULL, NULL, NULL, NULL, 0, "Float Prop"
};

PointerPropertyRNA rna_FloatProperties_new_layer = {
	{NULL, (PropertyRNA *)&rna_FloatProperties_new_name,
	-1, "layer", 8390664, "",
	"The newly created layer",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	NULL, NULL, NULL, NULL,&RNA_MeshFloatPropertyLayer
};

FunctionRNA rna_FloatProperties_new_func = {
	{NULL, NULL,
	NULL,
	{(PropertyRNA *)&rna_FloatProperties_new_name, (PropertyRNA *)&rna_FloatProperties_new_layer}},
	"new", 0, "Add a float property layer to Mesh",
	FloatProperties_new_call,
	(PropertyRNA *)&rna_FloatProperties_new_layer
};

StructRNA RNA_FloatProperties = {
	{(ContainerRNA *)&RNA_IntProperties, (ContainerRNA *)&RNA_LoopColors,
	NULL,
	{(PropertyRNA *)&rna_FloatProperties_rna_properties, (PropertyRNA *)&rna_FloatProperties_rna_type}},
	"FloatProperties", NULL, NULL, 4, "Float Properties",
	"Collection of float properties",
	"*", 17,
	NULL, (PropertyRNA *)&rna_FloatProperties_rna_properties,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	{(FunctionRNA *)&rna_FloatProperties_new_func, (FunctionRNA *)&rna_FloatProperties_new_func}
};

/* Int Properties */
CollectionPropertyRNA rna_IntProperties_rna_properties = {
	{(PropertyRNA *)&rna_IntProperties_rna_type, NULL,
	-1, "rna_properties", 128, "Properties",
	"RNA property collection",
	0, "*",
	PROP_COLLECTION, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	IntProperties_rna_properties_begin, IntProperties_rna_properties_next, IntProperties_rna_properties_end, IntProperties_rna_properties_get, NULL, NULL, IntProperties_rna_properties_lookup_string, NULL, &RNA_Property
};

PointerPropertyRNA rna_IntProperties_rna_type = {
	{NULL, (PropertyRNA *)&rna_IntProperties_rna_properties,
	-1, "rna_type", 8912896, "RNA",
	"RNA type definition",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	IntProperties_rna_type_get, NULL, NULL, NULL,&RNA_Struct
};

StringPropertyRNA rna_IntProperties_new_name = {
	{(PropertyRNA *)&rna_IntProperties_new_layer, NULL,
	-1, "name", 262145, "",
	"Int property name",
	0, "*",
	PROP_STRING, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	NULL, NULL, NULL, NULL, NULL, NULL, 0, "Int Prop"
};

PointerPropertyRNA rna_IntProperties_new_layer = {
	{NULL, (PropertyRNA *)&rna_IntProperties_new_name,
	-1, "layer", 8390664, "",
	"The newly created layer",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	NULL, NULL, NULL, NULL,&RNA_MeshIntPropertyLayer
};

FunctionRNA rna_IntProperties_new_func = {
	{NULL, NULL,
	NULL,
	{(PropertyRNA *)&rna_IntProperties_new_name, (PropertyRNA *)&rna_IntProperties_new_layer}},
	"new", 0, "Add a integer property layer to Mesh",
	IntProperties_new_call,
	(PropertyRNA *)&rna_IntProperties_new_layer
};

StructRNA RNA_IntProperties = {
	{(ContainerRNA *)&RNA_StringProperties, (ContainerRNA *)&RNA_FloatProperties,
	NULL,
	{(PropertyRNA *)&rna_IntProperties_rna_properties, (PropertyRNA *)&rna_IntProperties_rna_type}},
	"IntProperties", NULL, NULL, 4, "Int Properties",
	"Collection of int properties",
	"*", 17,
	NULL, (PropertyRNA *)&rna_IntProperties_rna_properties,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	{(FunctionRNA *)&rna_IntProperties_new_func, (FunctionRNA *)&rna_IntProperties_new_func}
};

/* String Properties */
CollectionPropertyRNA rna_StringProperties_rna_properties = {
	{(PropertyRNA *)&rna_StringProperties_rna_type, NULL,
	-1, "rna_properties", 128, "Properties",
	"RNA property collection",
	0, "*",
	PROP_COLLECTION, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	StringProperties_rna_properties_begin, StringProperties_rna_properties_next, StringProperties_rna_properties_end, StringProperties_rna_properties_get, NULL, NULL, StringProperties_rna_properties_lookup_string, NULL, &RNA_Property
};

PointerPropertyRNA rna_StringProperties_rna_type = {
	{NULL, (PropertyRNA *)&rna_StringProperties_rna_properties,
	-1, "rna_type", 8912896, "RNA",
	"RNA type definition",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	StringProperties_rna_type_get, NULL, NULL, NULL,&RNA_Struct
};

StringPropertyRNA rna_StringProperties_new_name = {
	{(PropertyRNA *)&rna_StringProperties_new_layer, NULL,
	-1, "name", 262145, "",
	"String property name",
	0, "*",
	PROP_STRING, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	NULL, NULL, NULL, NULL, NULL, NULL, 0, "String Prop"
};

PointerPropertyRNA rna_StringProperties_new_layer = {
	{NULL, (PropertyRNA *)&rna_StringProperties_new_name,
	-1, "layer", 8390664, "",
	"The newly created layer",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	NULL, NULL, NULL, NULL,&RNA_MeshStringPropertyLayer
};

FunctionRNA rna_StringProperties_new_func = {
	{NULL, NULL,
	NULL,
	{(PropertyRNA *)&rna_StringProperties_new_name, (PropertyRNA *)&rna_StringProperties_new_layer}},
	"new", 0, "Add a string property layer to Mesh",
	StringProperties_new_call,
	(PropertyRNA *)&rna_StringProperties_new_layer
};

StructRNA RNA_StringProperties = {
	{(ContainerRNA *)&RNA_MeshSkinVertexLayer, (ContainerRNA *)&RNA_IntProperties,
	NULL,
	{(PropertyRNA *)&rna_StringProperties_rna_properties, (PropertyRNA *)&rna_StringProperties_rna_type}},
	"StringProperties", NULL, NULL, 4, "String Properties",
	"Collection of string properties",
	"*", 17,
	NULL, (PropertyRNA *)&rna_StringProperties_rna_properties,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	{(FunctionRNA *)&rna_StringProperties_new_func, (FunctionRNA *)&rna_StringProperties_new_func}
};

/* Mesh Skin Vertex Layer */
CollectionPropertyRNA rna_MeshSkinVertexLayer_rna_properties = {
	{(PropertyRNA *)&rna_MeshSkinVertexLayer_rna_type, NULL,
	-1, "rna_properties", 128, "Properties",
	"RNA property collection",
	0, "*",
	PROP_COLLECTION, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	MeshSkinVertexLayer_rna_properties_begin, MeshSkinVertexLayer_rna_properties_next, MeshSkinVertexLayer_rna_properties_end, MeshSkinVertexLayer_rna_properties_get, NULL, NULL, MeshSkinVertexLayer_rna_properties_lookup_string, NULL, &RNA_Property
};

PointerPropertyRNA rna_MeshSkinVertexLayer_rna_type = {
	{(PropertyRNA *)&rna_MeshSkinVertexLayer_name, (PropertyRNA *)&rna_MeshSkinVertexLayer_rna_properties,
	-1, "rna_type", 8912896, "RNA",
	"RNA type definition",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	MeshSkinVertexLayer_rna_type_get, NULL, NULL, NULL,&RNA_Struct
};

StringPropertyRNA rna_MeshSkinVertexLayer_name = {
	{(PropertyRNA *)&rna_MeshSkinVertexLayer_data, (PropertyRNA *)&rna_MeshSkinVertexLayer_rna_type,
	-1, "name", 262145, "Name",
	"Name of skin layer",
	0, "*",
	PROP_STRING, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {64, 0, 0}, 0,
	rna_Mesh_update_data, 0, NULL, NULL,
	0, -1, NULL},
	MeshSkinVertexLayer_name_get, MeshSkinVertexLayer_name_length, MeshSkinVertexLayer_name_set, NULL, NULL, NULL, 64, ""
};

CollectionPropertyRNA rna_MeshSkinVertexLayer_data = {
	{NULL, (PropertyRNA *)&rna_MeshSkinVertexLayer_name,
	-1, "data", 16384, "Data",
	"",
	0, "*",
	PROP_COLLECTION, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	MeshSkinVertexLayer_data_begin, MeshSkinVertexLayer_data_next, MeshSkinVertexLayer_data_end, MeshSkinVertexLayer_data_get, rna_MeshSkinVertexLayer_data_length, MeshSkinVertexLayer_data_lookup_int, NULL, NULL, &RNA_MeshSkinVertex
};

StructRNA RNA_MeshSkinVertexLayer = {
	{(ContainerRNA *)&RNA_MeshSkinVertex, (ContainerRNA *)&RNA_StringProperties,
	NULL,
	{(PropertyRNA *)&rna_MeshSkinVertexLayer_rna_properties, (PropertyRNA *)&rna_MeshSkinVertexLayer_data}},
	"MeshSkinVertexLayer", NULL, NULL, 4, "Mesh Skin Vertex Layer",
	"Per-vertex skin data for use with the Skin modifier",
	"*", 17,
	(PropertyRNA *)&rna_MeshSkinVertexLayer_name, (PropertyRNA *)&rna_MeshSkinVertexLayer_rna_properties,
	NULL,
	NULL,
	NULL,
	rna_MeshSkinVertexLayer_path,
	NULL,
	NULL,
	NULL,
	NULL,
	{NULL, NULL}
};

/* Skin Vertex */
CollectionPropertyRNA rna_MeshSkinVertex_rna_properties = {
	{(PropertyRNA *)&rna_MeshSkinVertex_rna_type, NULL,
	-1, "rna_properties", 128, "Properties",
	"RNA property collection",
	0, "*",
	PROP_COLLECTION, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	MeshSkinVertex_rna_properties_begin, MeshSkinVertex_rna_properties_next, MeshSkinVertex_rna_properties_end, MeshSkinVertex_rna_properties_get, NULL, NULL, MeshSkinVertex_rna_properties_lookup_string, NULL, &RNA_Property
};

PointerPropertyRNA rna_MeshSkinVertex_rna_type = {
	{(PropertyRNA *)&rna_MeshSkinVertex_radius, (PropertyRNA *)&rna_MeshSkinVertex_rna_properties,
	-1, "rna_type", 8912896, "RNA",
	"RNA type definition",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	MeshSkinVertex_rna_type_get, NULL, NULL, NULL,&RNA_Struct
};

static float rna_MeshSkinVertex_radius_default[2] = {
	0.0f,
	0.0f
};

FloatPropertyRNA rna_MeshSkinVertex_radius = {
	{(PropertyRNA *)&rna_MeshSkinVertex_use_root, (PropertyRNA *)&rna_MeshSkinVertex_rna_type,
	-1, "radius", 8195, "Radius",
	"Radius of the skin",
	0, "*",
	PROP_FLOAT, PROP_NONE | PROP_UNIT_NONE, NULL, 1, {2, 0, 0}, 2,
	rna_Mesh_update_data, 0, NULL, NULL,
	offsetof(MVertSkin, radius), 4, NULL},
	NULL, NULL, MeshSkinVertex_radius_get, MeshSkinVertex_radius_set, NULL, NULL, NULL, NULL, NULL, NULL, 0.0010000000f, 100.0f, -FLT_MAX, FLT_MAX, 1.0f, 3, 0.0f, rna_MeshSkinVertex_radius_default
};

BoolPropertyRNA rna_MeshSkinVertex_use_root = {
	{(PropertyRNA *)&rna_MeshSkinVertex_use_loose, (PropertyRNA *)&rna_MeshSkinVertex_radius,
	-1, "use_root", 3, "Root",
	"Vertex is a root for rotation calculations and armature generation",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Mesh_update_data, 0, NULL, NULL,
	0, -1, NULL},
	MeshSkinVertex_use_root_get, MeshSkinVertex_use_root_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_MeshSkinVertex_use_loose = {
	{NULL, (PropertyRNA *)&rna_MeshSkinVertex_use_root,
	-1, "use_loose", 3, "Loose",
	"If vertex has multiple adjacent edges, it is hulled to them directly",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Mesh_update_data, 0, NULL, NULL,
	0, -1, NULL},
	MeshSkinVertex_use_loose_get, MeshSkinVertex_use_loose_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

StructRNA RNA_MeshSkinVertex = {
	{(ContainerRNA *)&RNA_MeshVertex, (ContainerRNA *)&RNA_MeshSkinVertexLayer,
	NULL,
	{(PropertyRNA *)&rna_MeshSkinVertex_rna_properties, (PropertyRNA *)&rna_MeshSkinVertex_use_loose}},
	"MeshSkinVertex", NULL, NULL, 4, "Skin Vertex",
	"Per-vertex skin data for use with the Skin modifier",
	"*", 17,
	NULL, (PropertyRNA *)&rna_MeshSkinVertex_rna_properties,
	NULL,
	NULL,
	NULL,
	rna_MeshSkinVertex_path,
	NULL,
	NULL,
	NULL,
	NULL,
	{NULL, NULL}
};

/* Mesh Vertex */
CollectionPropertyRNA rna_MeshVertex_rna_properties = {
	{(PropertyRNA *)&rna_MeshVertex_rna_type, NULL,
	-1, "rna_properties", 128, "Properties",
	"RNA property collection",
	0, "*",
	PROP_COLLECTION, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	MeshVertex_rna_properties_begin, MeshVertex_rna_properties_next, MeshVertex_rna_properties_end, MeshVertex_rna_properties_get, NULL, NULL, MeshVertex_rna_properties_lookup_string, NULL, &RNA_Property
};

PointerPropertyRNA rna_MeshVertex_rna_type = {
	{(PropertyRNA *)&rna_MeshVertex_co, (PropertyRNA *)&rna_MeshVertex_rna_properties,
	-1, "rna_type", 8912896, "RNA",
	"RNA type definition",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	MeshVertex_rna_type_get, NULL, NULL, NULL,&RNA_Struct
};

static float rna_MeshVertex_co_default[3] = {
	0.0f,
	0.0f,
	0.0f
};

FloatPropertyRNA rna_MeshVertex_co = {
	{(PropertyRNA *)&rna_MeshVertex_normal, (PropertyRNA *)&rna_MeshVertex_rna_type,
	-1, "co", 8195, "Location",
	"",
	0, "*",
	PROP_FLOAT, PROP_TRANSLATION | PROP_UNIT_LENGTH, NULL, 1, {3, 0, 0}, 3,
	rna_Mesh_update_data, 0, NULL, NULL,
	offsetof(MVert, co), 4, NULL},
	NULL, NULL, MeshVertex_co_get, MeshVertex_co_set, NULL, NULL, NULL, NULL, NULL, NULL, -10000.0f, 10000.0f, -FLT_MAX, FLT_MAX, 10.0f, 3, 0.0f, rna_MeshVertex_co_default
};

static float rna_MeshVertex_normal_default[3] = {
	0.0f,
	0.0f,
	0.0f
};

FloatPropertyRNA rna_MeshVertex_normal = {
	{(PropertyRNA *)&rna_MeshVertex_select, (PropertyRNA *)&rna_MeshVertex_co,
	-1, "normal", 3, "Normal",
	"Vertex Normal",
	0, "*",
	PROP_FLOAT, PROP_DIRECTION | PROP_UNIT_NONE, NULL, 1, {3, 0, 0}, 3,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	NULL, NULL, MeshVertex_normal_get, MeshVertex_normal_set, NULL, NULL, NULL, NULL, NULL, NULL, -1.0f, 1.0f, -1.0f, 1.0f, 10.0f, 3, 0.0f, rna_MeshVertex_normal_default
};

BoolPropertyRNA rna_MeshVertex_select = {
	{(PropertyRNA *)&rna_MeshVertex_hide, (PropertyRNA *)&rna_MeshVertex_normal,
	-1, "select", 3, "Select",
	"",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Mesh_update_select, 0, NULL, NULL,
	0, -1, NULL},
	MeshVertex_select_get, MeshVertex_select_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_MeshVertex_hide = {
	{(PropertyRNA *)&rna_MeshVertex_bevel_weight, (PropertyRNA *)&rna_MeshVertex_select,
	-1, "hide", 3, "Hide",
	"",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Mesh_update_select, 0, NULL, NULL,
	0, -1, NULL},
	MeshVertex_hide_get, MeshVertex_hide_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

FloatPropertyRNA rna_MeshVertex_bevel_weight = {
	{(PropertyRNA *)&rna_MeshVertex_groups, (PropertyRNA *)&rna_MeshVertex_hide,
	-1, "bevel_weight", 3, "Bevel Weight",
	"Weight used by the Bevel modifier \'Only Vertices\' option",
	0, "*",
	PROP_FLOAT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Mesh_update_data, 0, NULL, NULL,
	0, -1, NULL},
	MeshVertex_bevel_weight_get, MeshVertex_bevel_weight_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, -10000.0f, 10000.0f, -FLT_MAX, FLT_MAX, 10.0f, 3, 0.0f, NULL
};

CollectionPropertyRNA rna_MeshVertex_groups = {
	{(PropertyRNA *)&rna_MeshVertex_index, (PropertyRNA *)&rna_MeshVertex_bevel_weight,
	-1, "groups", 16384, "Groups",
	"Weights for the vertex groups this vertex is member of",
	0, "*",
	PROP_COLLECTION, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	MeshVertex_groups_begin, MeshVertex_groups_next, MeshVertex_groups_end, MeshVertex_groups_get, NULL, NULL, NULL, NULL, &RNA_VertexGroupElement
};

IntPropertyRNA rna_MeshVertex_index = {
	{(PropertyRNA *)&rna_MeshVertex_undeformed_co, (PropertyRNA *)&rna_MeshVertex_groups,
	-1, "index", 2, "Index",
	"Index of this vertex",
	0, "*",
	PROP_INT, PROP_UNSIGNED | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	MeshVertex_index_get, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL,
	0, 10000, 0, INT_MAX, 1, 0, NULL
};

static float rna_MeshVertex_undeformed_co_default[3] = {
	0.0f,
	0.0f,
	0.0f
};

FloatPropertyRNA rna_MeshVertex_undeformed_co = {
	{NULL, (PropertyRNA *)&rna_MeshVertex_index,
	-1, "undeformed_co", 2, "Undeformed Location",
	"For meshes with modifiers applied, the coordinate of the vertex with no deforming modifiers applied, as used for generated texture coordinates",
	0, "*",
	PROP_FLOAT, PROP_TRANSLATION | PROP_UNIT_LENGTH, NULL, 1, {3, 0, 0}, 3,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	NULL, NULL, MeshVertex_undeformed_co_get, NULL, NULL, NULL, NULL, NULL, NULL, NULL, -10000.0f, 10000.0f, -FLT_MAX, FLT_MAX, 10.0f, 3, 0.0f, rna_MeshVertex_undeformed_co_default
};

StructRNA RNA_MeshVertex = {
	{(ContainerRNA *)&RNA_VertexGroupElement, (ContainerRNA *)&RNA_MeshSkinVertex,
	NULL,
	{(PropertyRNA *)&rna_MeshVertex_rna_properties, (PropertyRNA *)&rna_MeshVertex_undeformed_co}},
	"MeshVertex", NULL, NULL, 4, "Mesh Vertex",
	"Vertex in a Mesh datablock",
	"*", 546,
	NULL, (PropertyRNA *)&rna_MeshVertex_rna_properties,
	NULL,
	NULL,
	NULL,
	rna_MeshVertex_path,
	NULL,
	NULL,
	NULL,
	NULL,
	{NULL, NULL}
};

/* Vertex Group Element */
CollectionPropertyRNA rna_VertexGroupElement_rna_properties = {
	{(PropertyRNA *)&rna_VertexGroupElement_rna_type, NULL,
	-1, "rna_properties", 128, "Properties",
	"RNA property collection",
	0, "*",
	PROP_COLLECTION, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	VertexGroupElement_rna_properties_begin, VertexGroupElement_rna_properties_next, VertexGroupElement_rna_properties_end, VertexGroupElement_rna_properties_get, NULL, NULL, VertexGroupElement_rna_properties_lookup_string, NULL, &RNA_Property
};

PointerPropertyRNA rna_VertexGroupElement_rna_type = {
	{(PropertyRNA *)&rna_VertexGroupElement_group, (PropertyRNA *)&rna_VertexGroupElement_rna_properties,
	-1, "rna_type", 8912896, "RNA",
	"RNA type definition",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	VertexGroupElement_rna_type_get, NULL, NULL, NULL,&RNA_Struct
};

IntPropertyRNA rna_VertexGroupElement_group = {
	{(PropertyRNA *)&rna_VertexGroupElement_weight, (PropertyRNA *)&rna_VertexGroupElement_rna_type,
	-1, "group", 8194, "Group Index",
	"",
	0, "*",
	PROP_INT, PROP_UNSIGNED | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Mesh_update_data, 0, NULL, NULL,
	offsetof(MDeformWeight, def_nr), 0, NULL},
	VertexGroupElement_group_get, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL,
	0, 10000, 0, INT_MAX, 1, 0, NULL
};

FloatPropertyRNA rna_VertexGroupElement_weight = {
	{NULL, (PropertyRNA *)&rna_VertexGroupElement_group,
	-1, "weight", 8195, "Weight",
	"Vertex Weight",
	0, "*",
	PROP_FLOAT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Mesh_update_data, 0, NULL, NULL,
	offsetof(MDeformWeight, weight), 4, NULL},
	VertexGroupElement_weight_get, VertexGroupElement_weight_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 1.0f, 0.0f, 1.0f, 10.0f, 3, 0.0f, NULL
};

StructRNA RNA_VertexGroupElement = {
	{(ContainerRNA *)&RNA_MeshEdge, (ContainerRNA *)&RNA_MeshVertex,
	NULL,
	{(PropertyRNA *)&rna_VertexGroupElement_rna_properties, (PropertyRNA *)&rna_VertexGroupElement_weight}},
	"VertexGroupElement", NULL, NULL, 4, "Vertex Group Element",
	"Weight value of a vertex in a vertex group",
	"*", 201,
	NULL, (PropertyRNA *)&rna_VertexGroupElement_rna_properties,
	NULL,
	NULL,
	NULL,
	rna_VertexGroupElement_path,
	NULL,
	NULL,
	NULL,
	NULL,
	{NULL, NULL}
};

/* Mesh Edge */
CollectionPropertyRNA rna_MeshEdge_rna_properties = {
	{(PropertyRNA *)&rna_MeshEdge_rna_type, NULL,
	-1, "rna_properties", 128, "Properties",
	"RNA property collection",
	0, "*",
	PROP_COLLECTION, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	MeshEdge_rna_properties_begin, MeshEdge_rna_properties_next, MeshEdge_rna_properties_end, MeshEdge_rna_properties_get, NULL, NULL, MeshEdge_rna_properties_lookup_string, NULL, &RNA_Property
};

PointerPropertyRNA rna_MeshEdge_rna_type = {
	{(PropertyRNA *)&rna_MeshEdge_vertices, (PropertyRNA *)&rna_MeshEdge_rna_properties,
	-1, "rna_type", 8912896, "RNA",
	"RNA type definition",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	MeshEdge_rna_type_get, NULL, NULL, NULL,&RNA_Struct
};

static int rna_MeshEdge_vertices_default[2] = {
	0,
	0
};

IntPropertyRNA rna_MeshEdge_vertices = {
	{(PropertyRNA *)&rna_MeshEdge_crease, (PropertyRNA *)&rna_MeshEdge_rna_type,
	-1, "vertices", 8195, "Vertices",
	"Vertex indices",
	0, "*",
	PROP_INT, PROP_UNSIGNED | PROP_UNIT_NONE, NULL, 1, {2, 0, 0}, 2,
	NULL, 0, NULL, NULL,
	offsetof(MEdge, v1), 0, NULL},
	NULL, NULL, MeshEdge_vertices_get, MeshEdge_vertices_set, NULL, NULL, NULL, NULL, NULL, NULL,
	0, 10000, 0, INT_MAX, 1, 0, rna_MeshEdge_vertices_default
};

FloatPropertyRNA rna_MeshEdge_crease = {
	{(PropertyRNA *)&rna_MeshEdge_bevel_weight, (PropertyRNA *)&rna_MeshEdge_vertices,
	-1, "crease", 3, "Crease",
	"Weight used by the Subsurf modifier for creasing",
	0, "*",
	PROP_FLOAT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Mesh_update_data, 0, NULL, NULL,
	0, -1, NULL},
	MeshEdge_crease_get, MeshEdge_crease_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 1.0f, 0.0f, 1.0f, 10.0f, 3, 0.0f, NULL
};

FloatPropertyRNA rna_MeshEdge_bevel_weight = {
	{(PropertyRNA *)&rna_MeshEdge_select, (PropertyRNA *)&rna_MeshEdge_crease,
	-1, "bevel_weight", 3, "Bevel Weight",
	"Weight used by the Bevel modifier",
	0, "*",
	PROP_FLOAT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Mesh_update_data, 0, NULL, NULL,
	0, -1, NULL},
	MeshEdge_bevel_weight_get, MeshEdge_bevel_weight_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, -10000.0f, 10000.0f, -FLT_MAX, FLT_MAX, 10.0f, 3, 0.0f, NULL
};

BoolPropertyRNA rna_MeshEdge_select = {
	{(PropertyRNA *)&rna_MeshEdge_hide, (PropertyRNA *)&rna_MeshEdge_bevel_weight,
	-1, "select", 3, "Select",
	"",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Mesh_update_select, 0, NULL, NULL,
	0, -1, NULL},
	MeshEdge_select_get, MeshEdge_select_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_MeshEdge_hide = {
	{(PropertyRNA *)&rna_MeshEdge_use_seam, (PropertyRNA *)&rna_MeshEdge_select,
	-1, "hide", 3, "Hide",
	"",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Mesh_update_select, 0, NULL, NULL,
	0, -1, NULL},
	MeshEdge_hide_get, MeshEdge_hide_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_MeshEdge_use_seam = {
	{(PropertyRNA *)&rna_MeshEdge_use_edge_sharp, (PropertyRNA *)&rna_MeshEdge_hide,
	-1, "use_seam", 3, "Seam",
	"Seam edge for UV unwrapping",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Mesh_update_select, 0, NULL, NULL,
	0, -1, NULL},
	MeshEdge_use_seam_get, MeshEdge_use_seam_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_MeshEdge_use_edge_sharp = {
	{(PropertyRNA *)&rna_MeshEdge_is_loose, (PropertyRNA *)&rna_MeshEdge_use_seam,
	-1, "use_edge_sharp", 3, "Sharp",
	"Sharp edge for the EdgeSplit modifier",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Mesh_update_data, 0, NULL, NULL,
	0, -1, NULL},
	MeshEdge_use_edge_sharp_get, MeshEdge_use_edge_sharp_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_MeshEdge_is_loose = {
	{(PropertyRNA *)&rna_MeshEdge_use_freestyle_mark, (PropertyRNA *)&rna_MeshEdge_use_edge_sharp,
	-1, "is_loose", 3, "Loose",
	"Loose edge",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	MeshEdge_is_loose_get, MeshEdge_is_loose_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_MeshEdge_use_freestyle_mark = {
	{(PropertyRNA *)&rna_MeshEdge_index, (PropertyRNA *)&rna_MeshEdge_is_loose,
	-1, "use_freestyle_mark", 3, "Freestyle Edge Mark",
	"Edge mark for Freestyle line rendering",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Mesh_update_data, 0, NULL, NULL,
	0, -1, NULL},
	MeshEdge_use_freestyle_mark_get, MeshEdge_use_freestyle_mark_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

IntPropertyRNA rna_MeshEdge_index = {
	{NULL, (PropertyRNA *)&rna_MeshEdge_use_freestyle_mark,
	-1, "index", 2, "Index",
	"Index of this edge",
	0, "*",
	PROP_INT, PROP_UNSIGNED | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	MeshEdge_index_get, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL,
	0, 10000, 0, INT_MAX, 1, 0, NULL
};

StructRNA RNA_MeshEdge = {
	{(ContainerRNA *)&RNA_MeshTessFace, (ContainerRNA *)&RNA_VertexGroupElement,
	NULL,
	{(PropertyRNA *)&rna_MeshEdge_rna_properties, (PropertyRNA *)&rna_MeshEdge_index}},
	"MeshEdge", NULL, NULL, 4, "Mesh Edge",
	"Edge in a Mesh datablock",
	"*", 547,
	NULL, (PropertyRNA *)&rna_MeshEdge_rna_properties,
	NULL,
	NULL,
	NULL,
	rna_MeshEdge_path,
	NULL,
	NULL,
	NULL,
	NULL,
	{NULL, NULL}
};

/* Mesh TessFace */
CollectionPropertyRNA rna_MeshTessFace_rna_properties = {
	{(PropertyRNA *)&rna_MeshTessFace_rna_type, NULL,
	-1, "rna_properties", 128, "Properties",
	"RNA property collection",
	0, "*",
	PROP_COLLECTION, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	MeshTessFace_rna_properties_begin, MeshTessFace_rna_properties_next, MeshTessFace_rna_properties_end, MeshTessFace_rna_properties_get, NULL, NULL, MeshTessFace_rna_properties_lookup_string, NULL, &RNA_Property
};

PointerPropertyRNA rna_MeshTessFace_rna_type = {
	{(PropertyRNA *)&rna_MeshTessFace_vertices, (PropertyRNA *)&rna_MeshTessFace_rna_properties,
	-1, "rna_type", 8912896, "RNA",
	"RNA type definition",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	MeshTessFace_rna_type_get, NULL, NULL, NULL,&RNA_Struct
};

static int rna_MeshTessFace_vertices_default[4] = {
	0,
	0,
	0,
	0
};

IntPropertyRNA rna_MeshTessFace_vertices = {
	{(PropertyRNA *)&rna_MeshTessFace_vertices_raw, (PropertyRNA *)&rna_MeshTessFace_rna_type,
	-1, "vertices", 131075, "Vertices",
	"Vertex indices",
	0, "*",
	PROP_INT, PROP_UNSIGNED | PROP_UNIT_NONE, rna_MeshTessFace_verts_get_length, 1, {4, 0, 0}, 4,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	NULL, NULL, MeshTessFace_vertices_get, MeshTessFace_vertices_set, NULL, NULL, NULL, NULL, NULL, NULL,
	0, 10000, 0, INT_MAX, 1, 0, rna_MeshTessFace_vertices_default
};

static int rna_MeshTessFace_vertices_raw_default[4] = {
	0,
	0,
	0,
	0
};

IntPropertyRNA rna_MeshTessFace_vertices_raw = {
	{(PropertyRNA *)&rna_MeshTessFace_material_index, (PropertyRNA *)&rna_MeshTessFace_vertices,
	-1, "vertices_raw", 8195, "Vertices",
	"Fixed size vertex indices array",
	0, "*",
	PROP_INT, PROP_UNSIGNED | PROP_UNIT_NONE, NULL, 1, {4, 0, 0}, 4,
	NULL, 0, NULL, NULL,
	offsetof(MFace, v1), 0, NULL},
	NULL, NULL, MeshTessFace_vertices_raw_get, MeshTessFace_vertices_raw_set, NULL, NULL, NULL, NULL, NULL, NULL,
	0, 10000, 0, INT_MAX, 1, 0, rna_MeshTessFace_vertices_raw_default
};

IntPropertyRNA rna_MeshTessFace_material_index = {
	{(PropertyRNA *)&rna_MeshTessFace_select, (PropertyRNA *)&rna_MeshTessFace_vertices_raw,
	-1, "material_index", 8195, "Material Index",
	"",
	0, "*",
	PROP_INT, PROP_UNSIGNED | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Mesh_update_data, 0, NULL, NULL,
	offsetof(MFace, mat_nr), 1, NULL},
	MeshTessFace_material_index_get, MeshTessFace_material_index_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL,
	0, 32767, 0, 32767, 1, 0, NULL
};

BoolPropertyRNA rna_MeshTessFace_select = {
	{(PropertyRNA *)&rna_MeshTessFace_hide, (PropertyRNA *)&rna_MeshTessFace_material_index,
	-1, "select", 3, "Select",
	"",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Mesh_update_select, 0, NULL, NULL,
	0, -1, NULL},
	MeshTessFace_select_get, MeshTessFace_select_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_MeshTessFace_hide = {
	{(PropertyRNA *)&rna_MeshTessFace_use_smooth, (PropertyRNA *)&rna_MeshTessFace_select,
	-1, "hide", 3, "Hide",
	"",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Mesh_update_select, 0, NULL, NULL,
	0, -1, NULL},
	MeshTessFace_hide_get, MeshTessFace_hide_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_MeshTessFace_use_smooth = {
	{(PropertyRNA *)&rna_MeshTessFace_normal, (PropertyRNA *)&rna_MeshTessFace_hide,
	-1, "use_smooth", 3, "Smooth",
	"",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Mesh_update_data, 0, NULL, NULL,
	0, -1, NULL},
	MeshTessFace_use_smooth_get, MeshTessFace_use_smooth_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

static float rna_MeshTessFace_normal_default[3] = {
	0.0f,
	0.0f,
	0.0f
};

FloatPropertyRNA rna_MeshTessFace_normal = {
	{(PropertyRNA *)&rna_MeshTessFace_split_normals, (PropertyRNA *)&rna_MeshTessFace_use_smooth,
	-1, "normal", 2, "Face Normal",
	"Local space unit length normal vector for this face",
	0, "*",
	PROP_FLOAT, PROP_DIRECTION | PROP_UNIT_NONE, NULL, 1, {3, 0, 0}, 3,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	NULL, NULL, MeshTessFace_normal_get, NULL, NULL, NULL, NULL, NULL, NULL, NULL, -1.0f, 1.0f, -1.0f, 1.0f, 10.0f, 3, 0.0f, rna_MeshTessFace_normal_default
};

static float rna_MeshTessFace_split_normals_default[12] = {
	0.0f,
	0.0f,
	0.0f,
	0.0f,
	0.0f,
	0.0f,
	0.0f,
	0.0f,
	0.0f,
	0.0f,
	0.0f,
	0.0f
};

FloatPropertyRNA rna_MeshTessFace_split_normals = {
	{(PropertyRNA *)&rna_MeshTessFace_area, (PropertyRNA *)&rna_MeshTessFace_normal,
	-1, "split_normals", 2, "Split Normals",
	"Local space unit length split normals vectors of the vertices of this face (must be computed beforehand using calc_normals_split or calc_tangents, and then calc_tessface)",
	0, "*",
	PROP_FLOAT, PROP_DIRECTION | PROP_UNIT_NONE, NULL, 2, {4, 3, 0}, 12,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	NULL, NULL, MeshTessFace_split_normals_get, NULL, NULL, NULL, NULL, NULL, NULL, NULL, -1.0f, 1.0f, -1.0f, 1.0f, 10.0f, 3, 0.0f, rna_MeshTessFace_split_normals_default
};

FloatPropertyRNA rna_MeshTessFace_area = {
	{(PropertyRNA *)&rna_MeshTessFace_index, (PropertyRNA *)&rna_MeshTessFace_split_normals,
	-1, "area", 2, "Face Area",
	"Read only area of this face",
	0, "*",
	PROP_FLOAT, PROP_UNSIGNED | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	MeshTessFace_area_get, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 10000.0f, 0.0f, FLT_MAX, 10.0f, 3, 0.0f, NULL
};

IntPropertyRNA rna_MeshTessFace_index = {
	{NULL, (PropertyRNA *)&rna_MeshTessFace_area,
	-1, "index", 2, "Index",
	"Index of this face",
	0, "*",
	PROP_INT, PROP_UNSIGNED | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	MeshTessFace_index_get, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL,
	0, 10000, 0, INT_MAX, 1, 0, NULL
};

StructRNA RNA_MeshTessFace = {
	{(ContainerRNA *)&RNA_MeshLoop, (ContainerRNA *)&RNA_MeshEdge,
	NULL,
	{(PropertyRNA *)&rna_MeshTessFace_rna_properties, (PropertyRNA *)&rna_MeshTessFace_index}},
	"MeshTessFace", NULL, NULL, 4, "Mesh TessFace",
	"TessFace in a Mesh datablock",
	"*", 548,
	NULL, (PropertyRNA *)&rna_MeshTessFace_rna_properties,
	NULL,
	NULL,
	NULL,
	rna_MeshTessFace_path,
	NULL,
	NULL,
	NULL,
	NULL,
	{NULL, NULL}
};

/* Mesh Loop */
CollectionPropertyRNA rna_MeshLoop_rna_properties = {
	{(PropertyRNA *)&rna_MeshLoop_rna_type, NULL,
	-1, "rna_properties", 128, "Properties",
	"RNA property collection",
	0, "*",
	PROP_COLLECTION, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	MeshLoop_rna_properties_begin, MeshLoop_rna_properties_next, MeshLoop_rna_properties_end, MeshLoop_rna_properties_get, NULL, NULL, MeshLoop_rna_properties_lookup_string, NULL, &RNA_Property
};

PointerPropertyRNA rna_MeshLoop_rna_type = {
	{(PropertyRNA *)&rna_MeshLoop_vertex_index, (PropertyRNA *)&rna_MeshLoop_rna_properties,
	-1, "rna_type", 8912896, "RNA",
	"RNA type definition",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	MeshLoop_rna_type_get, NULL, NULL, NULL,&RNA_Struct
};

IntPropertyRNA rna_MeshLoop_vertex_index = {
	{(PropertyRNA *)&rna_MeshLoop_edge_index, (PropertyRNA *)&rna_MeshLoop_rna_type,
	-1, "vertex_index", 8195, "Vertex",
	"Vertex index",
	0, "*",
	PROP_INT, PROP_UNSIGNED | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	offsetof(MLoop, v), 0, NULL},
	MeshLoop_vertex_index_get, MeshLoop_vertex_index_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL,
	0, 10000, 0, INT_MAX, 1, 0, NULL
};

IntPropertyRNA rna_MeshLoop_edge_index = {
	{(PropertyRNA *)&rna_MeshLoop_index, (PropertyRNA *)&rna_MeshLoop_vertex_index,
	-1, "edge_index", 8195, "Edge",
	"Edge index",
	0, "*",
	PROP_INT, PROP_UNSIGNED | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	offsetof(MLoop, e), 0, NULL},
	MeshLoop_edge_index_get, MeshLoop_edge_index_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL,
	0, 10000, 0, INT_MAX, 1, 0, NULL
};

IntPropertyRNA rna_MeshLoop_index = {
	{(PropertyRNA *)&rna_MeshLoop_normal, (PropertyRNA *)&rna_MeshLoop_edge_index,
	-1, "index", 2, "Index",
	"Index of this loop",
	0, "*",
	PROP_INT, PROP_UNSIGNED | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	MeshLoop_index_get, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL,
	0, 10000, 0, INT_MAX, 1, 0, NULL
};

static float rna_MeshLoop_normal_default[3] = {
	0.0f,
	0.0f,
	0.0f
};

FloatPropertyRNA rna_MeshLoop_normal = {
	{(PropertyRNA *)&rna_MeshLoop_tangent, (PropertyRNA *)&rna_MeshLoop_index,
	-1, "normal", 2, "Normal",
	"Local space unit length split normal vector of this vertex for this polygon (must be computed beforehand using calc_normals_split or calc_tangents)",
	0, "*",
	PROP_FLOAT, PROP_DIRECTION | PROP_UNIT_NONE, NULL, 1, {3, 0, 0}, 3,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	NULL, NULL, MeshLoop_normal_get, NULL, NULL, NULL, NULL, NULL, NULL, NULL, -1.0f, 1.0f, -1.0f, 1.0f, 10.0f, 3, 0.0f, rna_MeshLoop_normal_default
};

static float rna_MeshLoop_tangent_default[3] = {
	0.0f,
	0.0f,
	0.0f
};

FloatPropertyRNA rna_MeshLoop_tangent = {
	{(PropertyRNA *)&rna_MeshLoop_bitangent_sign, (PropertyRNA *)&rna_MeshLoop_normal,
	-1, "tangent", 2, "Tangent",
	"Local space unit length tangent vector of this vertex for this polygon (must be computed beforehand using calc_tangents)",
	0, "*",
	PROP_FLOAT, PROP_DIRECTION | PROP_UNIT_NONE, NULL, 1, {3, 0, 0}, 3,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	NULL, NULL, MeshLoop_tangent_get, NULL, NULL, NULL, NULL, NULL, NULL, NULL, -1.0f, 1.0f, -1.0f, 1.0f, 10.0f, 3, 0.0f, rna_MeshLoop_tangent_default
};

FloatPropertyRNA rna_MeshLoop_bitangent_sign = {
	{(PropertyRNA *)&rna_MeshLoop_bitangent, (PropertyRNA *)&rna_MeshLoop_tangent,
	-1, "bitangent_sign", 2, "Bitangent Sign",
	"Sign of the bitangent vector of this vertex for this polygon (must be computed beforehand using calc_tangents, bitangent = bitangent_sign * cross(normal, tangent))",
	0, "*",
	PROP_FLOAT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	MeshLoop_bitangent_sign_get, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, -1.0f, 1.0f, -1.0f, 1.0f, 10.0f, 3, 0.0f, NULL
};

static float rna_MeshLoop_bitangent_default[3] = {
	0.0f,
	0.0f,
	0.0f
};

FloatPropertyRNA rna_MeshLoop_bitangent = {
	{NULL, (PropertyRNA *)&rna_MeshLoop_bitangent_sign,
	-1, "bitangent", 2, "Bitangent",
	"Bitangent vector of this vertex for this polygon (must be computed beforehand using calc_tangents, *use it only if really needed*, slower access than bitangent_sign)",
	0, "*",
	PROP_FLOAT, PROP_DIRECTION | PROP_UNIT_NONE, NULL, 1, {3, 0, 0}, 3,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	NULL, NULL, MeshLoop_bitangent_get, NULL, NULL, NULL, NULL, NULL, NULL, NULL, -1.0f, 1.0f, -1.0f, 1.0f, 10.0f, 3, 0.0f, rna_MeshLoop_bitangent_default
};

StructRNA RNA_MeshLoop = {
	{(ContainerRNA *)&RNA_MeshPolygon, (ContainerRNA *)&RNA_MeshTessFace,
	NULL,
	{(PropertyRNA *)&rna_MeshLoop_rna_properties, (PropertyRNA *)&rna_MeshLoop_bitangent}},
	"MeshLoop", NULL, NULL, 4, "Mesh Loop",
	"Loop in a Mesh datablock",
	"*", 547,
	NULL, (PropertyRNA *)&rna_MeshLoop_rna_properties,
	NULL,
	NULL,
	NULL,
	rna_MeshLoop_path,
	NULL,
	NULL,
	NULL,
	NULL,
	{NULL, NULL}
};

/* Mesh Polygon */
CollectionPropertyRNA rna_MeshPolygon_rna_properties = {
	{(PropertyRNA *)&rna_MeshPolygon_rna_type, NULL,
	-1, "rna_properties", 128, "Properties",
	"RNA property collection",
	0, "*",
	PROP_COLLECTION, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	MeshPolygon_rna_properties_begin, MeshPolygon_rna_properties_next, MeshPolygon_rna_properties_end, MeshPolygon_rna_properties_get, NULL, NULL, MeshPolygon_rna_properties_lookup_string, NULL, &RNA_Property
};

PointerPropertyRNA rna_MeshPolygon_rna_type = {
	{(PropertyRNA *)&rna_MeshPolygon_vertices, (PropertyRNA *)&rna_MeshPolygon_rna_properties,
	-1, "rna_type", 8912896, "RNA",
	"RNA type definition",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	MeshPolygon_rna_type_get, NULL, NULL, NULL,&RNA_Struct
};

static int rna_MeshPolygon_vertices_default[3] = {
	0,
	0,
	0
};

IntPropertyRNA rna_MeshPolygon_vertices = {
	{(PropertyRNA *)&rna_MeshPolygon_loop_start, (PropertyRNA *)&rna_MeshPolygon_rna_type,
	-1, "vertices", 131075, "Vertices",
	"Vertex indices",
	0, "*",
	PROP_INT, PROP_UNSIGNED | PROP_UNIT_NONE, rna_MeshPoly_vertices_get_length, 1, {3, 0, 0}, 3,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	NULL, NULL, MeshPolygon_vertices_get, MeshPolygon_vertices_set, NULL, NULL, NULL, NULL, NULL, NULL,
	0, 10000, 0, INT_MAX, 1, 0, rna_MeshPolygon_vertices_default
};

IntPropertyRNA rna_MeshPolygon_loop_start = {
	{(PropertyRNA *)&rna_MeshPolygon_loop_total, (PropertyRNA *)&rna_MeshPolygon_vertices,
	-1, "loop_start", 8195, "Loop Start",
	"Index of the first loop of this polygon",
	0, "*",
	PROP_INT, PROP_UNSIGNED | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	offsetof(MPoly, loopstart), 0, NULL},
	MeshPolygon_loop_start_get, MeshPolygon_loop_start_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL,
	0, 10000, 0, INT_MAX, 1, 0, NULL
};

IntPropertyRNA rna_MeshPolygon_loop_total = {
	{(PropertyRNA *)&rna_MeshPolygon_material_index, (PropertyRNA *)&rna_MeshPolygon_loop_start,
	-1, "loop_total", 8195, "Loop Total",
	"Number of loops used by this polygon",
	0, "*",
	PROP_INT, PROP_UNSIGNED | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	offsetof(MPoly, totloop), 0, NULL},
	MeshPolygon_loop_total_get, MeshPolygon_loop_total_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL,
	0, 10000, 0, INT_MAX, 1, 0, NULL
};

IntPropertyRNA rna_MeshPolygon_material_index = {
	{(PropertyRNA *)&rna_MeshPolygon_select, (PropertyRNA *)&rna_MeshPolygon_loop_total,
	-1, "material_index", 8195, "Material Index",
	"",
	0, "*",
	PROP_INT, PROP_UNSIGNED | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Mesh_update_data, 0, NULL, NULL,
	offsetof(MPoly, mat_nr), 1, NULL},
	MeshPolygon_material_index_get, MeshPolygon_material_index_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL,
	0, 32767, 0, 32767, 1, 0, NULL
};

BoolPropertyRNA rna_MeshPolygon_select = {
	{(PropertyRNA *)&rna_MeshPolygon_hide, (PropertyRNA *)&rna_MeshPolygon_material_index,
	-1, "select", 3, "Select",
	"",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Mesh_update_select, 0, NULL, NULL,
	0, -1, NULL},
	MeshPolygon_select_get, MeshPolygon_select_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_MeshPolygon_hide = {
	{(PropertyRNA *)&rna_MeshPolygon_use_smooth, (PropertyRNA *)&rna_MeshPolygon_select,
	-1, "hide", 3, "Hide",
	"",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Mesh_update_select, 0, NULL, NULL,
	0, -1, NULL},
	MeshPolygon_hide_get, MeshPolygon_hide_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_MeshPolygon_use_smooth = {
	{(PropertyRNA *)&rna_MeshPolygon_use_freestyle_mark, (PropertyRNA *)&rna_MeshPolygon_hide,
	-1, "use_smooth", 3, "Smooth",
	"",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Mesh_update_data, 0, NULL, NULL,
	0, -1, NULL},
	MeshPolygon_use_smooth_get, MeshPolygon_use_smooth_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_MeshPolygon_use_freestyle_mark = {
	{(PropertyRNA *)&rna_MeshPolygon_normal, (PropertyRNA *)&rna_MeshPolygon_use_smooth,
	-1, "use_freestyle_mark", 3, "Freestyle Face Mark",
	"Face mark for Freestyle line rendering",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Mesh_update_data, 0, NULL, NULL,
	0, -1, NULL},
	MeshPolygon_use_freestyle_mark_get, MeshPolygon_use_freestyle_mark_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

static float rna_MeshPolygon_normal_default[3] = {
	0.0f,
	0.0f,
	0.0f
};

FloatPropertyRNA rna_MeshPolygon_normal = {
	{(PropertyRNA *)&rna_MeshPolygon_center, (PropertyRNA *)&rna_MeshPolygon_use_freestyle_mark,
	-1, "normal", 2, "Polygon Normal",
	"Local space unit length normal vector for this polygon",
	0, "*",
	PROP_FLOAT, PROP_DIRECTION | PROP_UNIT_NONE, NULL, 1, {3, 0, 0}, 3,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	NULL, NULL, MeshPolygon_normal_get, NULL, NULL, NULL, NULL, NULL, NULL, NULL, -1.0f, 1.0f, -1.0f, 1.0f, 10.0f, 3, 0.0f, rna_MeshPolygon_normal_default
};

static float rna_MeshPolygon_center_default[3] = {
	0.0f,
	0.0f,
	0.0f
};

FloatPropertyRNA rna_MeshPolygon_center = {
	{(PropertyRNA *)&rna_MeshPolygon_area, (PropertyRNA *)&rna_MeshPolygon_normal,
	-1, "center", 2, "Polygon Center",
	"Center of this polygon",
	0, "*",
	PROP_FLOAT, PROP_XYZ | PROP_UNIT_NONE, NULL, 1, {3, 0, 0}, 3,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	NULL, NULL, MeshPolygon_center_get, NULL, NULL, NULL, NULL, NULL, NULL, NULL, -10000.0f, 10000.0f, -FLT_MAX, FLT_MAX, 10.0f, 3, 0.0f, rna_MeshPolygon_center_default
};

FloatPropertyRNA rna_MeshPolygon_area = {
	{(PropertyRNA *)&rna_MeshPolygon_index, (PropertyRNA *)&rna_MeshPolygon_center,
	-1, "area", 2, "Polygon Area",
	"Read only area of this polygon",
	0, "*",
	PROP_FLOAT, PROP_UNSIGNED | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	MeshPolygon_area_get, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 10000.0f, 0.0f, FLT_MAX, 10.0f, 3, 0.0f, NULL
};

IntPropertyRNA rna_MeshPolygon_index = {
	{NULL, (PropertyRNA *)&rna_MeshPolygon_area,
	-1, "index", 2, "Index",
	"Index of this polygon",
	0, "*",
	PROP_INT, PROP_UNSIGNED | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	MeshPolygon_index_get, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL,
	0, 10000, 0, INT_MAX, 1, 0, NULL
};

StructRNA RNA_MeshPolygon = {
	{(ContainerRNA *)&RNA_MeshUVLoopLayer, (ContainerRNA *)&RNA_MeshLoop,
	NULL,
	{(PropertyRNA *)&rna_MeshPolygon_rna_properties, (PropertyRNA *)&rna_MeshPolygon_index}},
	"MeshPolygon", NULL, NULL, 4, "Mesh Polygon",
	"Polygon in a Mesh datablock",
	"*", 548,
	NULL, (PropertyRNA *)&rna_MeshPolygon_rna_properties,
	NULL,
	NULL,
	NULL,
	rna_MeshPolygon_path,
	NULL,
	NULL,
	NULL,
	NULL,
	{NULL, NULL}
};

/* MeshUVLoopLayer */
CollectionPropertyRNA rna_MeshUVLoopLayer_rna_properties = {
	{(PropertyRNA *)&rna_MeshUVLoopLayer_rna_type, NULL,
	-1, "rna_properties", 128, "Properties",
	"RNA property collection",
	0, "*",
	PROP_COLLECTION, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	MeshUVLoopLayer_rna_properties_begin, MeshUVLoopLayer_rna_properties_next, MeshUVLoopLayer_rna_properties_end, MeshUVLoopLayer_rna_properties_get, NULL, NULL, MeshUVLoopLayer_rna_properties_lookup_string, NULL, &RNA_Property
};

PointerPropertyRNA rna_MeshUVLoopLayer_rna_type = {
	{(PropertyRNA *)&rna_MeshUVLoopLayer_data, (PropertyRNA *)&rna_MeshUVLoopLayer_rna_properties,
	-1, "rna_type", 8912896, "RNA",
	"RNA type definition",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	MeshUVLoopLayer_rna_type_get, NULL, NULL, NULL,&RNA_Struct
};

CollectionPropertyRNA rna_MeshUVLoopLayer_data = {
	{(PropertyRNA *)&rna_MeshUVLoopLayer_name, (PropertyRNA *)&rna_MeshUVLoopLayer_rna_type,
	-1, "data", 16384, "data",
	"",
	0, "*",
	PROP_COLLECTION, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	MeshUVLoopLayer_data_begin, MeshUVLoopLayer_data_next, MeshUVLoopLayer_data_end, MeshUVLoopLayer_data_get, rna_MeshUVLoopLayer_data_length, MeshUVLoopLayer_data_lookup_int, NULL, NULL, &RNA_MeshUVLoop
};

StringPropertyRNA rna_MeshUVLoopLayer_name = {
	{NULL, (PropertyRNA *)&rna_MeshUVLoopLayer_data,
	-1, "name", 262145, "Name",
	"Name of UV map",
	0, "*",
	PROP_STRING, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {64, 0, 0}, 0,
	rna_Mesh_update_data, 0, NULL, NULL,
	0, -1, NULL},
	MeshUVLoopLayer_name_get, MeshUVLoopLayer_name_length, MeshUVLoopLayer_name_set, NULL, NULL, NULL, 64, ""
};

StructRNA RNA_MeshUVLoopLayer = {
	{(ContainerRNA *)&RNA_MeshUVLoop, (ContainerRNA *)&RNA_MeshPolygon,
	NULL,
	{(PropertyRNA *)&rna_MeshUVLoopLayer_rna_properties, (PropertyRNA *)&rna_MeshUVLoopLayer_name}},
	"MeshUVLoopLayer", NULL, NULL, 4, "MeshUVLoopLayer",
	"",
	"*", 17,
	(PropertyRNA *)&rna_MeshUVLoopLayer_name, (PropertyRNA *)&rna_MeshUVLoopLayer_rna_properties,
	NULL,
	NULL,
	NULL,
	rna_MeshUVLoopLayer_path,
	NULL,
	NULL,
	NULL,
	NULL,
	{NULL, NULL}
};

/* MeshUVLoop */
CollectionPropertyRNA rna_MeshUVLoop_rna_properties = {
	{(PropertyRNA *)&rna_MeshUVLoop_rna_type, NULL,
	-1, "rna_properties", 128, "Properties",
	"RNA property collection",
	0, "*",
	PROP_COLLECTION, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	MeshUVLoop_rna_properties_begin, MeshUVLoop_rna_properties_next, MeshUVLoop_rna_properties_end, MeshUVLoop_rna_properties_get, NULL, NULL, MeshUVLoop_rna_properties_lookup_string, NULL, &RNA_Property
};

PointerPropertyRNA rna_MeshUVLoop_rna_type = {
	{(PropertyRNA *)&rna_MeshUVLoop_uv, (PropertyRNA *)&rna_MeshUVLoop_rna_properties,
	-1, "rna_type", 8912896, "RNA",
	"RNA type definition",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	MeshUVLoop_rna_type_get, NULL, NULL, NULL,&RNA_Struct
};

static float rna_MeshUVLoop_uv_default[2] = {
	0.0f,
	0.0f
};

FloatPropertyRNA rna_MeshUVLoop_uv = {
	{(PropertyRNA *)&rna_MeshUVLoop_pin_uv, (PropertyRNA *)&rna_MeshUVLoop_rna_type,
	-1, "uv", 8195, "uv",
	"",
	0, "*",
	PROP_FLOAT, PROP_XYZ | PROP_UNIT_NONE, NULL, 1, {2, 0, 0}, 2,
	rna_Mesh_update_data, 0, NULL, NULL,
	offsetof(MLoopUV, uv), 4, NULL},
	NULL, NULL, MeshUVLoop_uv_get, MeshUVLoop_uv_set, NULL, NULL, NULL, NULL, NULL, NULL, -10000.0f, 10000.0f, -FLT_MAX, FLT_MAX, 10.0f, 3, 0.0f, rna_MeshUVLoop_uv_default
};

BoolPropertyRNA rna_MeshUVLoop_pin_uv = {
	{(PropertyRNA *)&rna_MeshUVLoop_select, (PropertyRNA *)&rna_MeshUVLoop_uv,
	-1, "pin_uv", 3, "UV Pinned",
	"",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	MeshUVLoop_pin_uv_get, MeshUVLoop_pin_uv_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_MeshUVLoop_select = {
	{(PropertyRNA *)&rna_MeshUVLoop_select_edge, (PropertyRNA *)&rna_MeshUVLoop_pin_uv,
	-1, "select", 3, "UV Select",
	"",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	MeshUVLoop_select_get, MeshUVLoop_select_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_MeshUVLoop_select_edge = {
	{NULL, (PropertyRNA *)&rna_MeshUVLoop_select,
	-1, "select_edge", 3, "UV Edge Select",
	"",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	MeshUVLoop_select_edge_get, MeshUVLoop_select_edge_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

StructRNA RNA_MeshUVLoop = {
	{(ContainerRNA *)&RNA_MeshTextureFaceLayer, (ContainerRNA *)&RNA_MeshUVLoopLayer,
	NULL,
	{(PropertyRNA *)&rna_MeshUVLoop_rna_properties, (PropertyRNA *)&rna_MeshUVLoop_select_edge}},
	"MeshUVLoop", NULL, NULL, 4, "MeshUVLoop",
	"",
	"*", 17,
	NULL, (PropertyRNA *)&rna_MeshUVLoop_rna_properties,
	NULL,
	NULL,
	NULL,
	rna_MeshUVLoop_path,
	NULL,
	NULL,
	NULL,
	NULL,
	{NULL, NULL}
};

/* Mesh UV Map */
CollectionPropertyRNA rna_MeshTextureFaceLayer_rna_properties = {
	{(PropertyRNA *)&rna_MeshTextureFaceLayer_rna_type, NULL,
	-1, "rna_properties", 128, "Properties",
	"RNA property collection",
	0, "*",
	PROP_COLLECTION, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	MeshTextureFaceLayer_rna_properties_begin, MeshTextureFaceLayer_rna_properties_next, MeshTextureFaceLayer_rna_properties_end, MeshTextureFaceLayer_rna_properties_get, NULL, NULL, MeshTextureFaceLayer_rna_properties_lookup_string, NULL, &RNA_Property
};

PointerPropertyRNA rna_MeshTextureFaceLayer_rna_type = {
	{(PropertyRNA *)&rna_MeshTextureFaceLayer_name, (PropertyRNA *)&rna_MeshTextureFaceLayer_rna_properties,
	-1, "rna_type", 8912896, "RNA",
	"RNA type definition",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	MeshTextureFaceLayer_rna_type_get, NULL, NULL, NULL,&RNA_Struct
};

StringPropertyRNA rna_MeshTextureFaceLayer_name = {
	{(PropertyRNA *)&rna_MeshTextureFaceLayer_active, (PropertyRNA *)&rna_MeshTextureFaceLayer_rna_type,
	-1, "name", 262145, "Name",
	"Name of UV map",
	0, "*",
	PROP_STRING, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {64, 0, 0}, 0,
	rna_Mesh_update_data, 0, NULL, NULL,
	0, -1, NULL},
	MeshTextureFaceLayer_name_get, MeshTextureFaceLayer_name_length, MeshTextureFaceLayer_name_set, NULL, NULL, NULL, 64, ""
};

BoolPropertyRNA rna_MeshTextureFaceLayer_active = {
	{(PropertyRNA *)&rna_MeshTextureFaceLayer_active_render, (PropertyRNA *)&rna_MeshTextureFaceLayer_name,
	-1, "active", 3, "Active",
	"Set the map as active for display and editing",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Mesh_update_data, 0, NULL, NULL,
	0, -1, NULL},
	MeshTextureFaceLayer_active_get, MeshTextureFaceLayer_active_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_MeshTextureFaceLayer_active_render = {
	{(PropertyRNA *)&rna_MeshTextureFaceLayer_active_clone, (PropertyRNA *)&rna_MeshTextureFaceLayer_active,
	-1, "active_render", 3, "Active Render",
	"Set the map as active for rendering",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Mesh_update_data, 0, NULL, NULL,
	0, -1, NULL},
	MeshTextureFaceLayer_active_render_get, MeshTextureFaceLayer_active_render_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_MeshTextureFaceLayer_active_clone = {
	{(PropertyRNA *)&rna_MeshTextureFaceLayer_data, (PropertyRNA *)&rna_MeshTextureFaceLayer_active_render,
	-1, "active_clone", 3, "Active Clone",
	"Set the map as active for cloning",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Mesh_update_data, 0, NULL, NULL,
	0, -1, NULL},
	MeshTextureFaceLayer_active_clone_get, MeshTextureFaceLayer_active_clone_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

CollectionPropertyRNA rna_MeshTextureFaceLayer_data = {
	{NULL, (PropertyRNA *)&rna_MeshTextureFaceLayer_active_clone,
	-1, "data", 16384, "Data",
	"",
	0, "*",
	PROP_COLLECTION, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	MeshTextureFaceLayer_data_begin, MeshTextureFaceLayer_data_next, MeshTextureFaceLayer_data_end, MeshTextureFaceLayer_data_get, rna_MeshTextureFaceLayer_data_length, MeshTextureFaceLayer_data_lookup_int, NULL, NULL, &RNA_MeshTextureFace
};

StructRNA RNA_MeshTextureFaceLayer = {
	{(ContainerRNA *)&RNA_MeshTextureFace, (ContainerRNA *)&RNA_MeshUVLoop,
	NULL,
	{(PropertyRNA *)&rna_MeshTextureFaceLayer_rna_properties, (PropertyRNA *)&rna_MeshTextureFaceLayer_data}},
	"MeshTextureFaceLayer", NULL, NULL, 4, "Mesh UV Map",
	"UV map with assigned image textures in a Mesh datablock",
	"*", 203,
	(PropertyRNA *)&rna_MeshTextureFaceLayer_name, (PropertyRNA *)&rna_MeshTextureFaceLayer_rna_properties,
	NULL,
	NULL,
	NULL,
	rna_MeshTextureFaceLayer_path,
	NULL,
	NULL,
	NULL,
	NULL,
	{NULL, NULL}
};

/* Mesh UV Map Face */
CollectionPropertyRNA rna_MeshTextureFace_rna_properties = {
	{(PropertyRNA *)&rna_MeshTextureFace_rna_type, NULL,
	-1, "rna_properties", 128, "Properties",
	"RNA property collection",
	0, "*",
	PROP_COLLECTION, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	MeshTextureFace_rna_properties_begin, MeshTextureFace_rna_properties_next, MeshTextureFace_rna_properties_end, MeshTextureFace_rna_properties_get, NULL, NULL, MeshTextureFace_rna_properties_lookup_string, NULL, &RNA_Property
};

PointerPropertyRNA rna_MeshTextureFace_rna_type = {
	{(PropertyRNA *)&rna_MeshTextureFace_image, (PropertyRNA *)&rna_MeshTextureFace_rna_properties,
	-1, "rna_type", 8912896, "RNA",
	"RNA type definition",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	MeshTextureFace_rna_type_get, NULL, NULL, NULL,&RNA_Struct
};

PointerPropertyRNA rna_MeshTextureFace_image = {
	{(PropertyRNA *)&rna_MeshTextureFace_uv1, (PropertyRNA *)&rna_MeshTextureFace_rna_type,
	-1, "image", 8388673, "Image",
	"",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Mesh_update_data, 0, NULL, NULL,
	0, -1, NULL},
	MeshTextureFace_image_get, MeshTextureFace_image_set, NULL, NULL,&RNA_Image
};

static float rna_MeshTextureFace_uv1_default[2] = {
	0.0f,
	0.0f
};

FloatPropertyRNA rna_MeshTextureFace_uv1 = {
	{(PropertyRNA *)&rna_MeshTextureFace_uv2, (PropertyRNA *)&rna_MeshTextureFace_image,
	-1, "uv1", 3, "UV 1",
	"",
	0, "*",
	PROP_FLOAT, PROP_XYZ | PROP_UNIT_NONE, NULL, 1, {2, 0, 0}, 2,
	rna_Mesh_update_data, 0, NULL, NULL,
	0, -1, NULL},
	NULL, NULL, MeshTextureFace_uv1_get, MeshTextureFace_uv1_set, NULL, NULL, NULL, NULL, NULL, NULL, -10000.0f, 10000.0f, -FLT_MAX, FLT_MAX, 10.0f, 3, 0.0f, rna_MeshTextureFace_uv1_default
};

static float rna_MeshTextureFace_uv2_default[2] = {
	0.0f,
	0.0f
};

FloatPropertyRNA rna_MeshTextureFace_uv2 = {
	{(PropertyRNA *)&rna_MeshTextureFace_uv3, (PropertyRNA *)&rna_MeshTextureFace_uv1,
	-1, "uv2", 3, "UV 2",
	"",
	0, "*",
	PROP_FLOAT, PROP_XYZ | PROP_UNIT_NONE, NULL, 1, {2, 0, 0}, 2,
	rna_Mesh_update_data, 0, NULL, NULL,
	0, -1, NULL},
	NULL, NULL, MeshTextureFace_uv2_get, MeshTextureFace_uv2_set, NULL, NULL, NULL, NULL, NULL, NULL, -10000.0f, 10000.0f, -FLT_MAX, FLT_MAX, 10.0f, 3, 0.0f, rna_MeshTextureFace_uv2_default
};

static float rna_MeshTextureFace_uv3_default[2] = {
	0.0f,
	0.0f
};

FloatPropertyRNA rna_MeshTextureFace_uv3 = {
	{(PropertyRNA *)&rna_MeshTextureFace_uv4, (PropertyRNA *)&rna_MeshTextureFace_uv2,
	-1, "uv3", 3, "UV 3",
	"",
	0, "*",
	PROP_FLOAT, PROP_XYZ | PROP_UNIT_NONE, NULL, 1, {2, 0, 0}, 2,
	rna_Mesh_update_data, 0, NULL, NULL,
	0, -1, NULL},
	NULL, NULL, MeshTextureFace_uv3_get, MeshTextureFace_uv3_set, NULL, NULL, NULL, NULL, NULL, NULL, -10000.0f, 10000.0f, -FLT_MAX, FLT_MAX, 10.0f, 3, 0.0f, rna_MeshTextureFace_uv3_default
};

static float rna_MeshTextureFace_uv4_default[2] = {
	0.0f,
	0.0f
};

FloatPropertyRNA rna_MeshTextureFace_uv4 = {
	{(PropertyRNA *)&rna_MeshTextureFace_uv, (PropertyRNA *)&rna_MeshTextureFace_uv3,
	-1, "uv4", 3, "UV 4",
	"",
	0, "*",
	PROP_FLOAT, PROP_XYZ | PROP_UNIT_NONE, NULL, 1, {2, 0, 0}, 2,
	rna_Mesh_update_data, 0, NULL, NULL,
	0, -1, NULL},
	NULL, NULL, MeshTextureFace_uv4_get, MeshTextureFace_uv4_set, NULL, NULL, NULL, NULL, NULL, NULL, -10000.0f, 10000.0f, -FLT_MAX, FLT_MAX, 10.0f, 3, 0.0f, rna_MeshTextureFace_uv4_default
};

static float rna_MeshTextureFace_uv_default[8] = {
	0.0f,
	0.0f,
	0.0f,
	0.0f,
	0.0f,
	0.0f,
	0.0f,
	0.0f
};

FloatPropertyRNA rna_MeshTextureFace_uv = {
	{(PropertyRNA *)&rna_MeshTextureFace_uv_raw, (PropertyRNA *)&rna_MeshTextureFace_uv4,
	-1, "uv", 131075, "UV",
	"",
	0, "*",
	PROP_FLOAT, PROP_NONE | PROP_UNIT_NONE, rna_MeshTextureFace_uv_get_length, 2, {4, 2, 0}, 8,
	rna_Mesh_update_data, 0, NULL, NULL,
	0, -1, NULL},
	NULL, NULL, MeshTextureFace_uv_get, MeshTextureFace_uv_set, NULL, NULL, NULL, NULL, NULL, NULL, -10000.0f, 10000.0f, -FLT_MAX, FLT_MAX, 10.0f, 3, 0.0f, rna_MeshTextureFace_uv_default
};

static float rna_MeshTextureFace_uv_raw_default[8] = {
	0.0f,
	0.0f,
	0.0f,
	0.0f,
	0.0f,
	0.0f,
	0.0f,
	0.0f
};

FloatPropertyRNA rna_MeshTextureFace_uv_raw = {
	{NULL, (PropertyRNA *)&rna_MeshTextureFace_uv,
	-1, "uv_raw", 8195, "UV Raw",
	"Fixed size UV coordinates array",
	0, "*",
	PROP_FLOAT, PROP_NONE | PROP_UNIT_NONE, NULL, 1, {8, 2, 0}, 8,
	NULL, 0, NULL, NULL,
	offsetof(MTFace, uv), 4, NULL},
	NULL, NULL, MeshTextureFace_uv_raw_get, MeshTextureFace_uv_raw_set, NULL, NULL, NULL, NULL, NULL, NULL, -10000.0f, 10000.0f, -FLT_MAX, FLT_MAX, 10.0f, 3, 0.0f, rna_MeshTextureFace_uv_raw_default
};

StructRNA RNA_MeshTextureFace = {
	{(ContainerRNA *)&RNA_MeshTexturePolyLayer, (ContainerRNA *)&RNA_MeshTextureFaceLayer,
	NULL,
	{(PropertyRNA *)&rna_MeshTextureFace_rna_properties, (PropertyRNA *)&rna_MeshTextureFace_uv_raw}},
	"MeshTextureFace", NULL, NULL, 4, "Mesh UV Map Face",
	"UV map and image texture for a face",
	"*", 132,
	NULL, (PropertyRNA *)&rna_MeshTextureFace_rna_properties,
	NULL,
	NULL,
	NULL,
	rna_MeshTextureFace_path,
	NULL,
	NULL,
	NULL,
	NULL,
	{NULL, NULL}
};

/* Mesh UV Map */
CollectionPropertyRNA rna_MeshTexturePolyLayer_rna_properties = {
	{(PropertyRNA *)&rna_MeshTexturePolyLayer_rna_type, NULL,
	-1, "rna_properties", 128, "Properties",
	"RNA property collection",
	0, "*",
	PROP_COLLECTION, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	MeshTexturePolyLayer_rna_properties_begin, MeshTexturePolyLayer_rna_properties_next, MeshTexturePolyLayer_rna_properties_end, MeshTexturePolyLayer_rna_properties_get, NULL, NULL, MeshTexturePolyLayer_rna_properties_lookup_string, NULL, &RNA_Property
};

PointerPropertyRNA rna_MeshTexturePolyLayer_rna_type = {
	{(PropertyRNA *)&rna_MeshTexturePolyLayer_name, (PropertyRNA *)&rna_MeshTexturePolyLayer_rna_properties,
	-1, "rna_type", 8912896, "RNA",
	"RNA type definition",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	MeshTexturePolyLayer_rna_type_get, NULL, NULL, NULL,&RNA_Struct
};

StringPropertyRNA rna_MeshTexturePolyLayer_name = {
	{(PropertyRNA *)&rna_MeshTexturePolyLayer_active, (PropertyRNA *)&rna_MeshTexturePolyLayer_rna_type,
	-1, "name", 262145, "Name",
	"Name of UV map",
	0, "*",
	PROP_STRING, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {64, 0, 0}, 0,
	rna_Mesh_update_data, 0, NULL, NULL,
	0, -1, NULL},
	MeshTexturePolyLayer_name_get, MeshTexturePolyLayer_name_length, MeshTexturePolyLayer_name_set, NULL, NULL, NULL, 64, ""
};

BoolPropertyRNA rna_MeshTexturePolyLayer_active = {
	{(PropertyRNA *)&rna_MeshTexturePolyLayer_active_render, (PropertyRNA *)&rna_MeshTexturePolyLayer_name,
	-1, "active", 3, "Active",
	"Set the map as active for display and editing",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Mesh_update_data, 0, NULL, NULL,
	0, -1, NULL},
	MeshTexturePolyLayer_active_get, MeshTexturePolyLayer_active_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_MeshTexturePolyLayer_active_render = {
	{(PropertyRNA *)&rna_MeshTexturePolyLayer_active_clone, (PropertyRNA *)&rna_MeshTexturePolyLayer_active,
	-1, "active_render", 3, "Active Render",
	"Set the map as active for rendering",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Mesh_update_data, 0, NULL, NULL,
	0, -1, NULL},
	MeshTexturePolyLayer_active_render_get, MeshTexturePolyLayer_active_render_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_MeshTexturePolyLayer_active_clone = {
	{(PropertyRNA *)&rna_MeshTexturePolyLayer_data, (PropertyRNA *)&rna_MeshTexturePolyLayer_active_render,
	-1, "active_clone", 3, "Active Clone",
	"Set the map as active for cloning",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Mesh_update_data, 0, NULL, NULL,
	0, -1, NULL},
	MeshTexturePolyLayer_active_clone_get, MeshTexturePolyLayer_active_clone_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

CollectionPropertyRNA rna_MeshTexturePolyLayer_data = {
	{NULL, (PropertyRNA *)&rna_MeshTexturePolyLayer_active_clone,
	-1, "data", 16384, "Data",
	"",
	0, "*",
	PROP_COLLECTION, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	MeshTexturePolyLayer_data_begin, MeshTexturePolyLayer_data_next, MeshTexturePolyLayer_data_end, MeshTexturePolyLayer_data_get, rna_MeshTexturePolyLayer_data_length, MeshTexturePolyLayer_data_lookup_int, NULL, NULL, &RNA_MeshTexturePoly
};

StructRNA RNA_MeshTexturePolyLayer = {
	{(ContainerRNA *)&RNA_MeshTexturePoly, (ContainerRNA *)&RNA_MeshTextureFace,
	NULL,
	{(PropertyRNA *)&rna_MeshTexturePolyLayer_rna_properties, (PropertyRNA *)&rna_MeshTexturePolyLayer_data}},
	"MeshTexturePolyLayer", NULL, NULL, 4, "Mesh UV Map",
	"UV map with assigned image textures in a Mesh datablock",
	"*", 203,
	(PropertyRNA *)&rna_MeshTexturePolyLayer_name, (PropertyRNA *)&rna_MeshTexturePolyLayer_rna_properties,
	NULL,
	NULL,
	NULL,
	rna_MeshTexturePolyLayer_path,
	NULL,
	NULL,
	NULL,
	NULL,
	{NULL, NULL}
};

/* Mesh UV Map Face */
CollectionPropertyRNA rna_MeshTexturePoly_rna_properties = {
	{(PropertyRNA *)&rna_MeshTexturePoly_rna_type, NULL,
	-1, "rna_properties", 128, "Properties",
	"RNA property collection",
	0, "*",
	PROP_COLLECTION, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	MeshTexturePoly_rna_properties_begin, MeshTexturePoly_rna_properties_next, MeshTexturePoly_rna_properties_end, MeshTexturePoly_rna_properties_get, NULL, NULL, MeshTexturePoly_rna_properties_lookup_string, NULL, &RNA_Property
};

PointerPropertyRNA rna_MeshTexturePoly_rna_type = {
	{(PropertyRNA *)&rna_MeshTexturePoly_image, (PropertyRNA *)&rna_MeshTexturePoly_rna_properties,
	-1, "rna_type", 8912896, "RNA",
	"RNA type definition",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	MeshTexturePoly_rna_type_get, NULL, NULL, NULL,&RNA_Struct
};

PointerPropertyRNA rna_MeshTexturePoly_image = {
	{NULL, (PropertyRNA *)&rna_MeshTexturePoly_rna_type,
	-1, "image", 8388673, "Image",
	"",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Mesh_update_data, 0, NULL, NULL,
	0, -1, NULL},
	MeshTexturePoly_image_get, MeshTexturePoly_image_set, NULL, NULL,&RNA_Image
};

StructRNA RNA_MeshTexturePoly = {
	{(ContainerRNA *)&RNA_MeshColorLayer, (ContainerRNA *)&RNA_MeshTexturePolyLayer,
	NULL,
	{(PropertyRNA *)&rna_MeshTexturePoly_rna_properties, (PropertyRNA *)&rna_MeshTexturePoly_image}},
	"MeshTexturePoly", NULL, NULL, 4, "Mesh UV Map Face",
	"UV map and image texture for a face",
	"*", 132,
	NULL, (PropertyRNA *)&rna_MeshTexturePoly_rna_properties,
	NULL,
	NULL,
	NULL,
	rna_MeshTexturePoly_path,
	NULL,
	NULL,
	NULL,
	NULL,
	{NULL, NULL}
};

/* Mesh Vertex Color Layer */
CollectionPropertyRNA rna_MeshColorLayer_rna_properties = {
	{(PropertyRNA *)&rna_MeshColorLayer_rna_type, NULL,
	-1, "rna_properties", 128, "Properties",
	"RNA property collection",
	0, "*",
	PROP_COLLECTION, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	MeshColorLayer_rna_properties_begin, MeshColorLayer_rna_properties_next, MeshColorLayer_rna_properties_end, MeshColorLayer_rna_properties_get, NULL, NULL, MeshColorLayer_rna_properties_lookup_string, NULL, &RNA_Property
};

PointerPropertyRNA rna_MeshColorLayer_rna_type = {
	{(PropertyRNA *)&rna_MeshColorLayer_name, (PropertyRNA *)&rna_MeshColorLayer_rna_properties,
	-1, "rna_type", 8912896, "RNA",
	"RNA type definition",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	MeshColorLayer_rna_type_get, NULL, NULL, NULL,&RNA_Struct
};

StringPropertyRNA rna_MeshColorLayer_name = {
	{(PropertyRNA *)&rna_MeshColorLayer_active, (PropertyRNA *)&rna_MeshColorLayer_rna_type,
	-1, "name", 262145, "Name",
	"Name of Vertex color layer",
	0, "*",
	PROP_STRING, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {64, 0, 0}, 0,
	rna_Mesh_update_data, 0, NULL, NULL,
	0, -1, NULL},
	MeshColorLayer_name_get, MeshColorLayer_name_length, MeshColorLayer_name_set, NULL, NULL, NULL, 64, ""
};

BoolPropertyRNA rna_MeshColorLayer_active = {
	{(PropertyRNA *)&rna_MeshColorLayer_active_render, (PropertyRNA *)&rna_MeshColorLayer_name,
	-1, "active", 3, "Active",
	"Sets the layer as active for display and editing",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Mesh_update_data, 0, NULL, NULL,
	0, -1, NULL},
	MeshColorLayer_active_get, MeshColorLayer_active_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_MeshColorLayer_active_render = {
	{(PropertyRNA *)&rna_MeshColorLayer_data, (PropertyRNA *)&rna_MeshColorLayer_active,
	-1, "active_render", 3, "Active Render",
	"Sets the layer as active for rendering",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Mesh_update_data, 0, NULL, NULL,
	0, -1, NULL},
	MeshColorLayer_active_render_get, MeshColorLayer_active_render_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

CollectionPropertyRNA rna_MeshColorLayer_data = {
	{NULL, (PropertyRNA *)&rna_MeshColorLayer_active_render,
	-1, "data", 16384, "Data",
	"",
	0, "*",
	PROP_COLLECTION, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	MeshColorLayer_data_begin, MeshColorLayer_data_next, MeshColorLayer_data_end, MeshColorLayer_data_get, rna_MeshColorLayer_data_length, MeshColorLayer_data_lookup_int, NULL, NULL, &RNA_MeshColor
};

StructRNA RNA_MeshColorLayer = {
	{(ContainerRNA *)&RNA_MeshColor, (ContainerRNA *)&RNA_MeshTexturePoly,
	NULL,
	{(PropertyRNA *)&rna_MeshColorLayer_rna_properties, (PropertyRNA *)&rna_MeshColorLayer_data}},
	"MeshColorLayer", NULL, NULL, 4, "Mesh Vertex Color Layer",
	"Layer of vertex colors in a Mesh datablock",
	"*", 202,
	(PropertyRNA *)&rna_MeshColorLayer_name, (PropertyRNA *)&rna_MeshColorLayer_rna_properties,
	NULL,
	NULL,
	NULL,
	rna_MeshColorLayer_path,
	NULL,
	NULL,
	NULL,
	NULL,
	{NULL, NULL}
};

/* Mesh Vertex Color */
CollectionPropertyRNA rna_MeshColor_rna_properties = {
	{(PropertyRNA *)&rna_MeshColor_rna_type, NULL,
	-1, "rna_properties", 128, "Properties",
	"RNA property collection",
	0, "*",
	PROP_COLLECTION, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	MeshColor_rna_properties_begin, MeshColor_rna_properties_next, MeshColor_rna_properties_end, MeshColor_rna_properties_get, NULL, NULL, MeshColor_rna_properties_lookup_string, NULL, &RNA_Property
};

PointerPropertyRNA rna_MeshColor_rna_type = {
	{(PropertyRNA *)&rna_MeshColor_color1, (PropertyRNA *)&rna_MeshColor_rna_properties,
	-1, "rna_type", 8912896, "RNA",
	"RNA type definition",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	MeshColor_rna_type_get, NULL, NULL, NULL,&RNA_Struct
};

static float rna_MeshColor_color1_default[3] = {
	0.0f,
	0.0f,
	0.0f
};

FloatPropertyRNA rna_MeshColor_color1 = {
	{(PropertyRNA *)&rna_MeshColor_color2, (PropertyRNA *)&rna_MeshColor_rna_type,
	-1, "color1", 3, "Color 1",
	"",
	0, "*",
	PROP_FLOAT, PROP_COLOR | PROP_UNIT_NONE, NULL, 1, {3, 0, 0}, 3,
	rna_Mesh_update_data, 0, NULL, NULL,
	0, -1, NULL},
	NULL, NULL, MeshColor_color1_get, MeshColor_color1_set, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 1.0f, 0.0f, 1.0f, 10.0f, 3, 0.0f, rna_MeshColor_color1_default
};

static float rna_MeshColor_color2_default[3] = {
	0.0f,
	0.0f,
	0.0f
};

FloatPropertyRNA rna_MeshColor_color2 = {
	{(PropertyRNA *)&rna_MeshColor_color3, (PropertyRNA *)&rna_MeshColor_color1,
	-1, "color2", 3, "Color 2",
	"",
	0, "*",
	PROP_FLOAT, PROP_COLOR | PROP_UNIT_NONE, NULL, 1, {3, 0, 0}, 3,
	rna_Mesh_update_data, 0, NULL, NULL,
	0, -1, NULL},
	NULL, NULL, MeshColor_color2_get, MeshColor_color2_set, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 1.0f, 0.0f, 1.0f, 10.0f, 3, 0.0f, rna_MeshColor_color2_default
};

static float rna_MeshColor_color3_default[3] = {
	0.0f,
	0.0f,
	0.0f
};

FloatPropertyRNA rna_MeshColor_color3 = {
	{(PropertyRNA *)&rna_MeshColor_color4, (PropertyRNA *)&rna_MeshColor_color2,
	-1, "color3", 3, "Color 3",
	"",
	0, "*",
	PROP_FLOAT, PROP_COLOR | PROP_UNIT_NONE, NULL, 1, {3, 0, 0}, 3,
	rna_Mesh_update_data, 0, NULL, NULL,
	0, -1, NULL},
	NULL, NULL, MeshColor_color3_get, MeshColor_color3_set, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 1.0f, 0.0f, 1.0f, 10.0f, 3, 0.0f, rna_MeshColor_color3_default
};

static float rna_MeshColor_color4_default[3] = {
	0.0f,
	0.0f,
	0.0f
};

FloatPropertyRNA rna_MeshColor_color4 = {
	{NULL, (PropertyRNA *)&rna_MeshColor_color3,
	-1, "color4", 3, "Color 4",
	"",
	0, "*",
	PROP_FLOAT, PROP_COLOR | PROP_UNIT_NONE, NULL, 1, {3, 0, 0}, 3,
	rna_Mesh_update_data, 0, NULL, NULL,
	0, -1, NULL},
	NULL, NULL, MeshColor_color4_get, MeshColor_color4_set, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 1.0f, 0.0f, 1.0f, 10.0f, 3, 0.0f, rna_MeshColor_color4_default
};

StructRNA RNA_MeshColor = {
	{(ContainerRNA *)&RNA_MeshLoopColorLayer, (ContainerRNA *)&RNA_MeshColorLayer,
	NULL,
	{(PropertyRNA *)&rna_MeshColor_rna_properties, (PropertyRNA *)&rna_MeshColor_color4}},
	"MeshColor", NULL, NULL, 4, "Mesh Vertex Color",
	"Vertex colors for a face in a Mesh",
	"*", 17,
	NULL, (PropertyRNA *)&rna_MeshColor_rna_properties,
	NULL,
	NULL,
	NULL,
	rna_MeshColor_path,
	NULL,
	NULL,
	NULL,
	NULL,
	{NULL, NULL}
};

/* Mesh Vertex Color Layer */
CollectionPropertyRNA rna_MeshLoopColorLayer_rna_properties = {
	{(PropertyRNA *)&rna_MeshLoopColorLayer_rna_type, NULL,
	-1, "rna_properties", 128, "Properties",
	"RNA property collection",
	0, "*",
	PROP_COLLECTION, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	MeshLoopColorLayer_rna_properties_begin, MeshLoopColorLayer_rna_properties_next, MeshLoopColorLayer_rna_properties_end, MeshLoopColorLayer_rna_properties_get, NULL, NULL, MeshLoopColorLayer_rna_properties_lookup_string, NULL, &RNA_Property
};

PointerPropertyRNA rna_MeshLoopColorLayer_rna_type = {
	{(PropertyRNA *)&rna_MeshLoopColorLayer_name, (PropertyRNA *)&rna_MeshLoopColorLayer_rna_properties,
	-1, "rna_type", 8912896, "RNA",
	"RNA type definition",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	MeshLoopColorLayer_rna_type_get, NULL, NULL, NULL,&RNA_Struct
};

StringPropertyRNA rna_MeshLoopColorLayer_name = {
	{(PropertyRNA *)&rna_MeshLoopColorLayer_active, (PropertyRNA *)&rna_MeshLoopColorLayer_rna_type,
	-1, "name", 262145, "Name",
	"Name of Vertex color layer",
	0, "*",
	PROP_STRING, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {64, 0, 0}, 0,
	rna_Mesh_update_data, 0, NULL, NULL,
	0, -1, NULL},
	MeshLoopColorLayer_name_get, MeshLoopColorLayer_name_length, MeshLoopColorLayer_name_set, NULL, NULL, NULL, 64, ""
};

BoolPropertyRNA rna_MeshLoopColorLayer_active = {
	{(PropertyRNA *)&rna_MeshLoopColorLayer_active_render, (PropertyRNA *)&rna_MeshLoopColorLayer_name,
	-1, "active", 3, "Active",
	"Sets the layer as active for display and editing",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Mesh_update_data, 0, NULL, NULL,
	0, -1, NULL},
	MeshLoopColorLayer_active_get, MeshLoopColorLayer_active_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_MeshLoopColorLayer_active_render = {
	{(PropertyRNA *)&rna_MeshLoopColorLayer_data, (PropertyRNA *)&rna_MeshLoopColorLayer_active,
	-1, "active_render", 3, "Active Render",
	"Sets the layer as active for rendering",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Mesh_update_data, 0, NULL, NULL,
	0, -1, NULL},
	MeshLoopColorLayer_active_render_get, MeshLoopColorLayer_active_render_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

CollectionPropertyRNA rna_MeshLoopColorLayer_data = {
	{NULL, (PropertyRNA *)&rna_MeshLoopColorLayer_active_render,
	-1, "data", 16384, "Data",
	"",
	0, "*",
	PROP_COLLECTION, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	MeshLoopColorLayer_data_begin, MeshLoopColorLayer_data_next, MeshLoopColorLayer_data_end, MeshLoopColorLayer_data_get, rna_MeshLoopColorLayer_data_length, MeshLoopColorLayer_data_lookup_int, NULL, NULL, &RNA_MeshLoopColor
};

StructRNA RNA_MeshLoopColorLayer = {
	{(ContainerRNA *)&RNA_MeshLoopColor, (ContainerRNA *)&RNA_MeshColor,
	NULL,
	{(PropertyRNA *)&rna_MeshLoopColorLayer_rna_properties, (PropertyRNA *)&rna_MeshLoopColorLayer_data}},
	"MeshLoopColorLayer", NULL, NULL, 4, "Mesh Vertex Color Layer",
	"Layer of vertex colors in a Mesh datablock",
	"*", 202,
	(PropertyRNA *)&rna_MeshLoopColorLayer_name, (PropertyRNA *)&rna_MeshLoopColorLayer_rna_properties,
	NULL,
	NULL,
	NULL,
	rna_MeshLoopColorLayer_path,
	NULL,
	NULL,
	NULL,
	NULL,
	{NULL, NULL}
};

/* Mesh Vertex Color */
CollectionPropertyRNA rna_MeshLoopColor_rna_properties = {
	{(PropertyRNA *)&rna_MeshLoopColor_rna_type, NULL,
	-1, "rna_properties", 128, "Properties",
	"RNA property collection",
	0, "*",
	PROP_COLLECTION, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	MeshLoopColor_rna_properties_begin, MeshLoopColor_rna_properties_next, MeshLoopColor_rna_properties_end, MeshLoopColor_rna_properties_get, NULL, NULL, MeshLoopColor_rna_properties_lookup_string, NULL, &RNA_Property
};

PointerPropertyRNA rna_MeshLoopColor_rna_type = {
	{(PropertyRNA *)&rna_MeshLoopColor_color, (PropertyRNA *)&rna_MeshLoopColor_rna_properties,
	-1, "rna_type", 8912896, "RNA",
	"RNA type definition",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	MeshLoopColor_rna_type_get, NULL, NULL, NULL,&RNA_Struct
};

static float rna_MeshLoopColor_color_default[3] = {
	0.0f,
	0.0f,
	0.0f
};

FloatPropertyRNA rna_MeshLoopColor_color = {
	{NULL, (PropertyRNA *)&rna_MeshLoopColor_rna_type,
	-1, "color", 3, "Color",
	"",
	0, "*",
	PROP_FLOAT, PROP_COLOR | PROP_UNIT_NONE, NULL, 1, {3, 0, 0}, 3,
	rna_Mesh_update_data, 0, NULL, NULL,
	0, -1, NULL},
	NULL, NULL, MeshLoopColor_color_get, MeshLoopColor_color_set, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 1.0f, 0.0f, 1.0f, 10.0f, 3, 0.0f, rna_MeshLoopColor_color_default
};

StructRNA RNA_MeshLoopColor = {
	{(ContainerRNA *)&RNA_MeshFloatPropertyLayer, (ContainerRNA *)&RNA_MeshLoopColorLayer,
	NULL,
	{(PropertyRNA *)&rna_MeshLoopColor_rna_properties, (PropertyRNA *)&rna_MeshLoopColor_color}},
	"MeshLoopColor", NULL, NULL, 4, "Mesh Vertex Color",
	"Vertex loop colors in a Mesh",
	"*", 17,
	NULL, (PropertyRNA *)&rna_MeshLoopColor_rna_properties,
	NULL,
	NULL,
	NULL,
	rna_MeshColor_path,
	NULL,
	NULL,
	NULL,
	NULL,
	{NULL, NULL}
};

/* Mesh Float Property Layer */
CollectionPropertyRNA rna_MeshFloatPropertyLayer_rna_properties = {
	{(PropertyRNA *)&rna_MeshFloatPropertyLayer_rna_type, NULL,
	-1, "rna_properties", 128, "Properties",
	"RNA property collection",
	0, "*",
	PROP_COLLECTION, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	MeshFloatPropertyLayer_rna_properties_begin, MeshFloatPropertyLayer_rna_properties_next, MeshFloatPropertyLayer_rna_properties_end, MeshFloatPropertyLayer_rna_properties_get, NULL, NULL, MeshFloatPropertyLayer_rna_properties_lookup_string, NULL, &RNA_Property
};

PointerPropertyRNA rna_MeshFloatPropertyLayer_rna_type = {
	{(PropertyRNA *)&rna_MeshFloatPropertyLayer_name, (PropertyRNA *)&rna_MeshFloatPropertyLayer_rna_properties,
	-1, "rna_type", 8912896, "RNA",
	"RNA type definition",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	MeshFloatPropertyLayer_rna_type_get, NULL, NULL, NULL,&RNA_Struct
};

StringPropertyRNA rna_MeshFloatPropertyLayer_name = {
	{(PropertyRNA *)&rna_MeshFloatPropertyLayer_data, (PropertyRNA *)&rna_MeshFloatPropertyLayer_rna_type,
	-1, "name", 262145, "Name",
	"",
	0, "*",
	PROP_STRING, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {64, 0, 0}, 0,
	rna_Mesh_update_data, 0, NULL, NULL,
	0, -1, NULL},
	MeshFloatPropertyLayer_name_get, MeshFloatPropertyLayer_name_length, MeshFloatPropertyLayer_name_set, NULL, NULL, NULL, 64, ""
};

CollectionPropertyRNA rna_MeshFloatPropertyLayer_data = {
	{NULL, (PropertyRNA *)&rna_MeshFloatPropertyLayer_name,
	-1, "data", 16384, "Data",
	"",
	0, "*",
	PROP_COLLECTION, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	MeshFloatPropertyLayer_data_begin, MeshFloatPropertyLayer_data_next, MeshFloatPropertyLayer_data_end, MeshFloatPropertyLayer_data_get, rna_MeshFloatPropertyLayer_data_length, MeshFloatPropertyLayer_data_lookup_int, NULL, NULL, &RNA_MeshFloatProperty
};

StructRNA RNA_MeshFloatPropertyLayer = {
	{(ContainerRNA *)&RNA_MeshFloatProperty, (ContainerRNA *)&RNA_MeshLoopColor,
	NULL,
	{(PropertyRNA *)&rna_MeshFloatPropertyLayer_rna_properties, (PropertyRNA *)&rna_MeshFloatPropertyLayer_data}},
	"MeshFloatPropertyLayer", NULL, NULL, 4, "Mesh Float Property Layer",
	"User defined layer of floating point number values",
	"*", 17,
	(PropertyRNA *)&rna_MeshFloatPropertyLayer_name, (PropertyRNA *)&rna_MeshFloatPropertyLayer_rna_properties,
	NULL,
	NULL,
	NULL,
	rna_MeshFloatPropertyLayer_path,
	NULL,
	NULL,
	NULL,
	NULL,
	{NULL, NULL}
};

/* Mesh Float Property */
CollectionPropertyRNA rna_MeshFloatProperty_rna_properties = {
	{(PropertyRNA *)&rna_MeshFloatProperty_rna_type, NULL,
	-1, "rna_properties", 128, "Properties",
	"RNA property collection",
	0, "*",
	PROP_COLLECTION, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	MeshFloatProperty_rna_properties_begin, MeshFloatProperty_rna_properties_next, MeshFloatProperty_rna_properties_end, MeshFloatProperty_rna_properties_get, NULL, NULL, MeshFloatProperty_rna_properties_lookup_string, NULL, &RNA_Property
};

PointerPropertyRNA rna_MeshFloatProperty_rna_type = {
	{(PropertyRNA *)&rna_MeshFloatProperty_value, (PropertyRNA *)&rna_MeshFloatProperty_rna_properties,
	-1, "rna_type", 8912896, "RNA",
	"RNA type definition",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	MeshFloatProperty_rna_type_get, NULL, NULL, NULL,&RNA_Struct
};

FloatPropertyRNA rna_MeshFloatProperty_value = {
	{NULL, (PropertyRNA *)&rna_MeshFloatProperty_rna_type,
	-1, "value", 8195, "Value",
	"",
	0, "*",
	PROP_FLOAT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Mesh_update_data, 0, NULL, NULL,
	offsetof(MFloatProperty, f), 4, NULL},
	MeshFloatProperty_value_get, MeshFloatProperty_value_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, -10000.0f, 10000.0f, -FLT_MAX, FLT_MAX, 10.0f, 3, 0.0f, NULL
};

StructRNA RNA_MeshFloatProperty = {
	{(ContainerRNA *)&RNA_MeshIntPropertyLayer, (ContainerRNA *)&RNA_MeshFloatPropertyLayer,
	NULL,
	{(PropertyRNA *)&rna_MeshFloatProperty_rna_properties, (PropertyRNA *)&rna_MeshFloatProperty_value}},
	"MeshFloatProperty", NULL, NULL, 4, "Mesh Float Property",
	"User defined floating point number value in a float properties layer",
	"*", 17,
	NULL, (PropertyRNA *)&rna_MeshFloatProperty_rna_properties,
	NULL,
	NULL,
	NULL,
	rna_MeshFloatProperty_path,
	NULL,
	NULL,
	NULL,
	NULL,
	{NULL, NULL}
};

/* Mesh Int Property Layer */
CollectionPropertyRNA rna_MeshIntPropertyLayer_rna_properties = {
	{(PropertyRNA *)&rna_MeshIntPropertyLayer_rna_type, NULL,
	-1, "rna_properties", 128, "Properties",
	"RNA property collection",
	0, "*",
	PROP_COLLECTION, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	MeshIntPropertyLayer_rna_properties_begin, MeshIntPropertyLayer_rna_properties_next, MeshIntPropertyLayer_rna_properties_end, MeshIntPropertyLayer_rna_properties_get, NULL, NULL, MeshIntPropertyLayer_rna_properties_lookup_string, NULL, &RNA_Property
};

PointerPropertyRNA rna_MeshIntPropertyLayer_rna_type = {
	{(PropertyRNA *)&rna_MeshIntPropertyLayer_name, (PropertyRNA *)&rna_MeshIntPropertyLayer_rna_properties,
	-1, "rna_type", 8912896, "RNA",
	"RNA type definition",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	MeshIntPropertyLayer_rna_type_get, NULL, NULL, NULL,&RNA_Struct
};

StringPropertyRNA rna_MeshIntPropertyLayer_name = {
	{(PropertyRNA *)&rna_MeshIntPropertyLayer_data, (PropertyRNA *)&rna_MeshIntPropertyLayer_rna_type,
	-1, "name", 262145, "Name",
	"",
	0, "*",
	PROP_STRING, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {64, 0, 0}, 0,
	rna_Mesh_update_data, 0, NULL, NULL,
	0, -1, NULL},
	MeshIntPropertyLayer_name_get, MeshIntPropertyLayer_name_length, MeshIntPropertyLayer_name_set, NULL, NULL, NULL, 64, ""
};

CollectionPropertyRNA rna_MeshIntPropertyLayer_data = {
	{NULL, (PropertyRNA *)&rna_MeshIntPropertyLayer_name,
	-1, "data", 16384, "Data",
	"",
	0, "*",
	PROP_COLLECTION, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	MeshIntPropertyLayer_data_begin, MeshIntPropertyLayer_data_next, MeshIntPropertyLayer_data_end, MeshIntPropertyLayer_data_get, rna_MeshIntPropertyLayer_data_length, MeshIntPropertyLayer_data_lookup_int, NULL, NULL, &RNA_MeshIntProperty
};

StructRNA RNA_MeshIntPropertyLayer = {
	{(ContainerRNA *)&RNA_MeshIntProperty, (ContainerRNA *)&RNA_MeshFloatProperty,
	NULL,
	{(PropertyRNA *)&rna_MeshIntPropertyLayer_rna_properties, (PropertyRNA *)&rna_MeshIntPropertyLayer_data}},
	"MeshIntPropertyLayer", NULL, NULL, 4, "Mesh Int Property Layer",
	"User defined layer of integer number values",
	"*", 17,
	(PropertyRNA *)&rna_MeshIntPropertyLayer_name, (PropertyRNA *)&rna_MeshIntPropertyLayer_rna_properties,
	NULL,
	NULL,
	NULL,
	rna_MeshIntPropertyLayer_path,
	NULL,
	NULL,
	NULL,
	NULL,
	{NULL, NULL}
};

/* Mesh Int Property */
CollectionPropertyRNA rna_MeshIntProperty_rna_properties = {
	{(PropertyRNA *)&rna_MeshIntProperty_rna_type, NULL,
	-1, "rna_properties", 128, "Properties",
	"RNA property collection",
	0, "*",
	PROP_COLLECTION, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	MeshIntProperty_rna_properties_begin, MeshIntProperty_rna_properties_next, MeshIntProperty_rna_properties_end, MeshIntProperty_rna_properties_get, NULL, NULL, MeshIntProperty_rna_properties_lookup_string, NULL, &RNA_Property
};

PointerPropertyRNA rna_MeshIntProperty_rna_type = {
	{(PropertyRNA *)&rna_MeshIntProperty_value, (PropertyRNA *)&rna_MeshIntProperty_rna_properties,
	-1, "rna_type", 8912896, "RNA",
	"RNA type definition",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	MeshIntProperty_rna_type_get, NULL, NULL, NULL,&RNA_Struct
};

IntPropertyRNA rna_MeshIntProperty_value = {
	{NULL, (PropertyRNA *)&rna_MeshIntProperty_rna_type,
	-1, "value", 8195, "Value",
	"",
	0, "*",
	PROP_INT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Mesh_update_data, 0, NULL, NULL,
	offsetof(MIntProperty, i), 0, NULL},
	MeshIntProperty_value_get, MeshIntProperty_value_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL,
	-10000, 10000, INT_MIN, INT_MAX, 1, 0, NULL
};

StructRNA RNA_MeshIntProperty = {
	{(ContainerRNA *)&RNA_MeshStringPropertyLayer, (ContainerRNA *)&RNA_MeshIntPropertyLayer,
	NULL,
	{(PropertyRNA *)&rna_MeshIntProperty_rna_properties, (PropertyRNA *)&rna_MeshIntProperty_value}},
	"MeshIntProperty", NULL, NULL, 4, "Mesh Int Property",
	"User defined integer number value in an integer properties layer",
	"*", 17,
	NULL, (PropertyRNA *)&rna_MeshIntProperty_rna_properties,
	NULL,
	NULL,
	NULL,
	rna_MeshIntProperty_path,
	NULL,
	NULL,
	NULL,
	NULL,
	{NULL, NULL}
};

/* Mesh String Property Layer */
CollectionPropertyRNA rna_MeshStringPropertyLayer_rna_properties = {
	{(PropertyRNA *)&rna_MeshStringPropertyLayer_rna_type, NULL,
	-1, "rna_properties", 128, "Properties",
	"RNA property collection",
	0, "*",
	PROP_COLLECTION, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	MeshStringPropertyLayer_rna_properties_begin, MeshStringPropertyLayer_rna_properties_next, MeshStringPropertyLayer_rna_properties_end, MeshStringPropertyLayer_rna_properties_get, NULL, NULL, MeshStringPropertyLayer_rna_properties_lookup_string, NULL, &RNA_Property
};

PointerPropertyRNA rna_MeshStringPropertyLayer_rna_type = {
	{(PropertyRNA *)&rna_MeshStringPropertyLayer_name, (PropertyRNA *)&rna_MeshStringPropertyLayer_rna_properties,
	-1, "rna_type", 8912896, "RNA",
	"RNA type definition",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	MeshStringPropertyLayer_rna_type_get, NULL, NULL, NULL,&RNA_Struct
};

StringPropertyRNA rna_MeshStringPropertyLayer_name = {
	{(PropertyRNA *)&rna_MeshStringPropertyLayer_data, (PropertyRNA *)&rna_MeshStringPropertyLayer_rna_type,
	-1, "name", 262145, "Name",
	"",
	0, "*",
	PROP_STRING, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {64, 0, 0}, 0,
	rna_Mesh_update_data, 0, NULL, NULL,
	0, -1, NULL},
	MeshStringPropertyLayer_name_get, MeshStringPropertyLayer_name_length, MeshStringPropertyLayer_name_set, NULL, NULL, NULL, 64, ""
};

CollectionPropertyRNA rna_MeshStringPropertyLayer_data = {
	{NULL, (PropertyRNA *)&rna_MeshStringPropertyLayer_name,
	-1, "data", 16384, "Data",
	"",
	0, "*",
	PROP_COLLECTION, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	MeshStringPropertyLayer_data_begin, MeshStringPropertyLayer_data_next, MeshStringPropertyLayer_data_end, MeshStringPropertyLayer_data_get, rna_MeshStringPropertyLayer_data_length, MeshStringPropertyLayer_data_lookup_int, NULL, NULL, &RNA_MeshStringProperty
};

StructRNA RNA_MeshStringPropertyLayer = {
	{(ContainerRNA *)&RNA_MeshStringProperty, (ContainerRNA *)&RNA_MeshIntProperty,
	NULL,
	{(PropertyRNA *)&rna_MeshStringPropertyLayer_rna_properties, (PropertyRNA *)&rna_MeshStringPropertyLayer_data}},
	"MeshStringPropertyLayer", NULL, NULL, 4, "Mesh String Property Layer",
	"User defined layer of string text values",
	"*", 17,
	(PropertyRNA *)&rna_MeshStringPropertyLayer_name, (PropertyRNA *)&rna_MeshStringPropertyLayer_rna_properties,
	NULL,
	NULL,
	NULL,
	rna_MeshStringPropertyLayer_path,
	NULL,
	NULL,
	NULL,
	NULL,
	{NULL, NULL}
};

/* Mesh String Property */
CollectionPropertyRNA rna_MeshStringProperty_rna_properties = {
	{(PropertyRNA *)&rna_MeshStringProperty_rna_type, NULL,
	-1, "rna_properties", 128, "Properties",
	"RNA property collection",
	0, "*",
	PROP_COLLECTION, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	MeshStringProperty_rna_properties_begin, MeshStringProperty_rna_properties_next, MeshStringProperty_rna_properties_end, MeshStringProperty_rna_properties_get, NULL, NULL, MeshStringProperty_rna_properties_lookup_string, NULL, &RNA_Property
};

PointerPropertyRNA rna_MeshStringProperty_rna_type = {
	{(PropertyRNA *)&rna_MeshStringProperty_value, (PropertyRNA *)&rna_MeshStringProperty_rna_properties,
	-1, "rna_type", 8912896, "RNA",
	"RNA type definition",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	MeshStringProperty_rna_type_get, NULL, NULL, NULL,&RNA_Struct
};

StringPropertyRNA rna_MeshStringProperty_value = {
	{NULL, (PropertyRNA *)&rna_MeshStringProperty_rna_type,
	-1, "value", 262145, "Value",
	"",
	0, "*",
	PROP_STRING, PROP_BYTESTRING | PROP_UNIT_NONE, NULL, 0, {255, 0, 0}, 0,
	rna_Mesh_update_data, 0, NULL, NULL,
	0, -1, NULL},
	MeshStringProperty_value_get, MeshStringProperty_value_length, MeshStringProperty_value_set, NULL, NULL, NULL, 255, ""
};

StructRNA RNA_MeshStringProperty = {
	{(ContainerRNA *)&RNA_MetaElement, (ContainerRNA *)&RNA_MeshStringPropertyLayer,
	NULL,
	{(PropertyRNA *)&rna_MeshStringProperty_rna_properties, (PropertyRNA *)&rna_MeshStringProperty_value}},
	"MeshStringProperty", NULL, NULL, 4, "Mesh String Property",
	"User defined string text value in a string properties layer",
	"*", 17,
	NULL, (PropertyRNA *)&rna_MeshStringProperty_rna_properties,
	NULL,
	NULL,
	NULL,
	rna_MeshStringProperty_path,
	NULL,
	NULL,
	NULL,
	NULL,
	{NULL, NULL}
};

