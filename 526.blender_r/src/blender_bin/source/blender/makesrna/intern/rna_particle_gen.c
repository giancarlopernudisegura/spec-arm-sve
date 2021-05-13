
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

#include "rna_particle.c"

#pragma GCC diagnostic ignored "-Wunused-parameter"

/* Autogenerated Functions */


CollectionPropertyRNA rna_ParticleTarget_rna_properties;
PointerPropertyRNA rna_ParticleTarget_rna_type;
StringPropertyRNA rna_ParticleTarget_name;
PointerPropertyRNA rna_ParticleTarget_object;
IntPropertyRNA rna_ParticleTarget_system;
FloatPropertyRNA rna_ParticleTarget_time;
FloatPropertyRNA rna_ParticleTarget_duration;
BoolPropertyRNA rna_ParticleTarget_is_valid;
EnumPropertyRNA rna_ParticleTarget_alliance;


CollectionPropertyRNA rna_SPHFluidSettings_rna_properties;
PointerPropertyRNA rna_SPHFluidSettings_rna_type;
EnumPropertyRNA rna_SPHFluidSettings_solver;
FloatPropertyRNA rna_SPHFluidSettings_spring_force;
FloatPropertyRNA rna_SPHFluidSettings_fluid_radius;
FloatPropertyRNA rna_SPHFluidSettings_rest_length;
BoolPropertyRNA rna_SPHFluidSettings_use_viscoelastic_springs;
BoolPropertyRNA rna_SPHFluidSettings_use_initial_rest_length;
FloatPropertyRNA rna_SPHFluidSettings_plasticity;
FloatPropertyRNA rna_SPHFluidSettings_yield_ratio;
IntPropertyRNA rna_SPHFluidSettings_spring_frames;
FloatPropertyRNA rna_SPHFluidSettings_linear_viscosity;
FloatPropertyRNA rna_SPHFluidSettings_stiff_viscosity;
FloatPropertyRNA rna_SPHFluidSettings_stiffness;
FloatPropertyRNA rna_SPHFluidSettings_repulsion;
FloatPropertyRNA rna_SPHFluidSettings_rest_density;
FloatPropertyRNA rna_SPHFluidSettings_buoyancy;
BoolPropertyRNA rna_SPHFluidSettings_factor_repulsion;
BoolPropertyRNA rna_SPHFluidSettings_use_factor_density;
BoolPropertyRNA rna_SPHFluidSettings_factor_radius;
BoolPropertyRNA rna_SPHFluidSettings_factor_stiff_viscosity;
BoolPropertyRNA rna_SPHFluidSettings_factor_rest_length;


CollectionPropertyRNA rna_ParticleHairKey_rna_properties;
PointerPropertyRNA rna_ParticleHairKey_rna_type;
FloatPropertyRNA rna_ParticleHairKey_time;
FloatPropertyRNA rna_ParticleHairKey_weight;
FloatPropertyRNA rna_ParticleHairKey_co;
FloatPropertyRNA rna_ParticleHairKey_co_local;

extern FunctionRNA rna_ParticleHairKey_co_object_func;
extern PointerPropertyRNA rna_ParticleHairKey_co_object_object;
extern PointerPropertyRNA rna_ParticleHairKey_co_object_modifier;
extern PointerPropertyRNA rna_ParticleHairKey_co_object_particle;
extern FloatPropertyRNA rna_ParticleHairKey_co_object_co;



CollectionPropertyRNA rna_ParticleKey_rna_properties;
PointerPropertyRNA rna_ParticleKey_rna_type;
FloatPropertyRNA rna_ParticleKey_location;
FloatPropertyRNA rna_ParticleKey_velocity;
FloatPropertyRNA rna_ParticleKey_rotation;
FloatPropertyRNA rna_ParticleKey_angular_velocity;
FloatPropertyRNA rna_ParticleKey_time;


CollectionPropertyRNA rna_ChildParticle_rna_properties;
PointerPropertyRNA rna_ChildParticle_rna_type;


CollectionPropertyRNA rna_Particle_rna_properties;
PointerPropertyRNA rna_Particle_rna_type;
FloatPropertyRNA rna_Particle_location;
FloatPropertyRNA rna_Particle_velocity;
FloatPropertyRNA rna_Particle_angular_velocity;
FloatPropertyRNA rna_Particle_rotation;
FloatPropertyRNA rna_Particle_prev_location;
FloatPropertyRNA rna_Particle_prev_velocity;
FloatPropertyRNA rna_Particle_prev_angular_velocity;
FloatPropertyRNA rna_Particle_prev_rotation;
CollectionPropertyRNA rna_Particle_hair_keys;
CollectionPropertyRNA rna_Particle_particle_keys;
FloatPropertyRNA rna_Particle_birth_time;
FloatPropertyRNA rna_Particle_lifetime;
FloatPropertyRNA rna_Particle_die_time;
FloatPropertyRNA rna_Particle_size;
BoolPropertyRNA rna_Particle_is_exist;
BoolPropertyRNA rna_Particle_is_visible;
EnumPropertyRNA rna_Particle_alive_state;

extern FunctionRNA rna_Particle_uv_on_emitter_func;
extern PointerPropertyRNA rna_Particle_uv_on_emitter_modifier;
extern FloatPropertyRNA rna_Particle_uv_on_emitter_uv;



CollectionPropertyRNA rna_ParticleDupliWeight_rna_properties;
PointerPropertyRNA rna_ParticleDupliWeight_rna_type;
StringPropertyRNA rna_ParticleDupliWeight_name;
IntPropertyRNA rna_ParticleDupliWeight_count;


CollectionPropertyRNA rna_ParticleSystem_rna_properties;
PointerPropertyRNA rna_ParticleSystem_rna_type;
StringPropertyRNA rna_ParticleSystem_name;
PointerPropertyRNA rna_ParticleSystem_settings;
CollectionPropertyRNA rna_ParticleSystem_particles;
CollectionPropertyRNA rna_ParticleSystem_child_particles;
IntPropertyRNA rna_ParticleSystem_seed;
IntPropertyRNA rna_ParticleSystem_child_seed;
BoolPropertyRNA rna_ParticleSystem_is_global_hair;
BoolPropertyRNA rna_ParticleSystem_use_hair_dynamics;
PointerPropertyRNA rna_ParticleSystem_cloth;
PointerPropertyRNA rna_ParticleSystem_reactor_target_object;
IntPropertyRNA rna_ParticleSystem_reactor_target_particle_system;
BoolPropertyRNA rna_ParticleSystem_use_keyed_timing;
CollectionPropertyRNA rna_ParticleSystem_targets;
PointerPropertyRNA rna_ParticleSystem_active_particle_target;
IntPropertyRNA rna_ParticleSystem_active_particle_target_index;
StringPropertyRNA rna_ParticleSystem_billboard_normal_uv;
StringPropertyRNA rna_ParticleSystem_billboard_time_index_uv;
StringPropertyRNA rna_ParticleSystem_billboard_split_uv;
StringPropertyRNA rna_ParticleSystem_vertex_group_density;
BoolPropertyRNA rna_ParticleSystem_invert_vertex_group_density;
StringPropertyRNA rna_ParticleSystem_vertex_group_velocity;
BoolPropertyRNA rna_ParticleSystem_invert_vertex_group_velocity;
StringPropertyRNA rna_ParticleSystem_vertex_group_length;
BoolPropertyRNA rna_ParticleSystem_invert_vertex_group_length;
StringPropertyRNA rna_ParticleSystem_vertex_group_clump;
BoolPropertyRNA rna_ParticleSystem_invert_vertex_group_clump;
StringPropertyRNA rna_ParticleSystem_vertex_group_kink;
BoolPropertyRNA rna_ParticleSystem_invert_vertex_group_kink;
StringPropertyRNA rna_ParticleSystem_vertex_group_roughness_1;
BoolPropertyRNA rna_ParticleSystem_invert_vertex_group_roughness_1;
StringPropertyRNA rna_ParticleSystem_vertex_group_roughness_2;
BoolPropertyRNA rna_ParticleSystem_invert_vertex_group_roughness_2;
StringPropertyRNA rna_ParticleSystem_vertex_group_roughness_end;
BoolPropertyRNA rna_ParticleSystem_invert_vertex_group_roughness_end;
StringPropertyRNA rna_ParticleSystem_vertex_group_size;
BoolPropertyRNA rna_ParticleSystem_invert_vertex_group_size;
StringPropertyRNA rna_ParticleSystem_vertex_group_tangent;
BoolPropertyRNA rna_ParticleSystem_invert_vertex_group_tangent;
StringPropertyRNA rna_ParticleSystem_vertex_group_rotation;
BoolPropertyRNA rna_ParticleSystem_invert_vertex_group_rotation;
StringPropertyRNA rna_ParticleSystem_vertex_group_field;
BoolPropertyRNA rna_ParticleSystem_invert_vertex_group_field;
PointerPropertyRNA rna_ParticleSystem_point_cache;
BoolPropertyRNA rna_ParticleSystem_has_multiple_caches;
PointerPropertyRNA rna_ParticleSystem_parent;
BoolPropertyRNA rna_ParticleSystem_is_editable;
BoolPropertyRNA rna_ParticleSystem_is_edited;
FloatPropertyRNA rna_ParticleSystem_dt_frac;

extern FunctionRNA rna_ParticleSystem_set_resolution_func;
extern PointerPropertyRNA rna_ParticleSystem_set_resolution_scene;
extern PointerPropertyRNA rna_ParticleSystem_set_resolution_object;
extern EnumPropertyRNA rna_ParticleSystem_set_resolution_resolution;

extern FunctionRNA rna_ParticleSystem_co_hair_func;
extern PointerPropertyRNA rna_ParticleSystem_co_hair_object;
extern IntPropertyRNA rna_ParticleSystem_co_hair_particle_no;
extern IntPropertyRNA rna_ParticleSystem_co_hair_step;
extern FloatPropertyRNA rna_ParticleSystem_co_hair_co;

extern FunctionRNA rna_ParticleSystem_uv_on_emitter_func;
extern PointerPropertyRNA rna_ParticleSystem_uv_on_emitter_modifier;
extern PointerPropertyRNA rna_ParticleSystem_uv_on_emitter_particle;
extern IntPropertyRNA rna_ParticleSystem_uv_on_emitter_particle_no;
extern IntPropertyRNA rna_ParticleSystem_uv_on_emitter_uv_no;
extern FloatPropertyRNA rna_ParticleSystem_uv_on_emitter_uv;

extern FunctionRNA rna_ParticleSystem_mcol_on_emitter_func;
extern PointerPropertyRNA rna_ParticleSystem_mcol_on_emitter_modifier;
extern PointerPropertyRNA rna_ParticleSystem_mcol_on_emitter_particle;
extern IntPropertyRNA rna_ParticleSystem_mcol_on_emitter_particle_no;
extern IntPropertyRNA rna_ParticleSystem_mcol_on_emitter_vcol_no;
extern FloatPropertyRNA rna_ParticleSystem_mcol_on_emitter_mcol;



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

EnumPropertyRNA rna_ParticleSettingsTextureSlot_texture_coords;
PointerPropertyRNA rna_ParticleSettingsTextureSlot_object;
StringPropertyRNA rna_ParticleSettingsTextureSlot_uv_layer;
EnumPropertyRNA rna_ParticleSettingsTextureSlot_mapping_x;
EnumPropertyRNA rna_ParticleSettingsTextureSlot_mapping_y;
EnumPropertyRNA rna_ParticleSettingsTextureSlot_mapping_z;
EnumPropertyRNA rna_ParticleSettingsTextureSlot_mapping;
BoolPropertyRNA rna_ParticleSettingsTextureSlot_use_map_time;
BoolPropertyRNA rna_ParticleSettingsTextureSlot_use_map_life;
BoolPropertyRNA rna_ParticleSettingsTextureSlot_use_map_density;
BoolPropertyRNA rna_ParticleSettingsTextureSlot_use_map_size;
BoolPropertyRNA rna_ParticleSettingsTextureSlot_use_map_velocity;
BoolPropertyRNA rna_ParticleSettingsTextureSlot_use_map_field;
BoolPropertyRNA rna_ParticleSettingsTextureSlot_use_map_gravity;
BoolPropertyRNA rna_ParticleSettingsTextureSlot_use_map_damp;
BoolPropertyRNA rna_ParticleSettingsTextureSlot_use_map_clump;
BoolPropertyRNA rna_ParticleSettingsTextureSlot_use_map_kink;
BoolPropertyRNA rna_ParticleSettingsTextureSlot_use_map_rough;
BoolPropertyRNA rna_ParticleSettingsTextureSlot_use_map_length;
FloatPropertyRNA rna_ParticleSettingsTextureSlot_time_factor;
FloatPropertyRNA rna_ParticleSettingsTextureSlot_life_factor;
FloatPropertyRNA rna_ParticleSettingsTextureSlot_density_factor;
FloatPropertyRNA rna_ParticleSettingsTextureSlot_size_factor;
FloatPropertyRNA rna_ParticleSettingsTextureSlot_velocity_factor;
FloatPropertyRNA rna_ParticleSettingsTextureSlot_field_factor;
FloatPropertyRNA rna_ParticleSettingsTextureSlot_gravity_factor;
FloatPropertyRNA rna_ParticleSettingsTextureSlot_damp_factor;
FloatPropertyRNA rna_ParticleSettingsTextureSlot_length_factor;
FloatPropertyRNA rna_ParticleSettingsTextureSlot_clump_factor;
FloatPropertyRNA rna_ParticleSettingsTextureSlot_kink_factor;
FloatPropertyRNA rna_ParticleSettingsTextureSlot_rough_factor;


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

CollectionPropertyRNA rna_ParticleSettings_texture_slots;
PointerPropertyRNA rna_ParticleSettings_active_texture;
IntPropertyRNA rna_ParticleSettings_active_texture_index;
BoolPropertyRNA rna_ParticleSettings_is_fluid;
BoolPropertyRNA rna_ParticleSettings_use_react_start_end;
BoolPropertyRNA rna_ParticleSettings_use_react_multiple;
BoolPropertyRNA rna_ParticleSettings_regrow_hair;
BoolPropertyRNA rna_ParticleSettings_show_unborn;
BoolPropertyRNA rna_ParticleSettings_use_dead;
BoolPropertyRNA rna_ParticleSettings_use_emit_random;
BoolPropertyRNA rna_ParticleSettings_use_even_distribution;
BoolPropertyRNA rna_ParticleSettings_use_die_on_collision;
BoolPropertyRNA rna_ParticleSettings_use_size_deflect;
BoolPropertyRNA rna_ParticleSettings_use_rotations;
BoolPropertyRNA rna_ParticleSettings_use_dynamic_rotation;
BoolPropertyRNA rna_ParticleSettings_use_multiply_size_mass;
BoolPropertyRNA rna_ParticleSettings_use_advanced_hair;
BoolPropertyRNA rna_ParticleSettings_lock_boids_to_surface;
BoolPropertyRNA rna_ParticleSettings_use_hair_bspline;
BoolPropertyRNA rna_ParticleSettings_invert_grid;
BoolPropertyRNA rna_ParticleSettings_hexagonal_grid;
BoolPropertyRNA rna_ParticleSettings_apply_effector_to_children;
BoolPropertyRNA rna_ParticleSettings_create_long_hair_children;
BoolPropertyRNA rna_ParticleSettings_apply_guide_to_children;
BoolPropertyRNA rna_ParticleSettings_use_self_effect;
EnumPropertyRNA rna_ParticleSettings_type;
EnumPropertyRNA rna_ParticleSettings_emit_from;
EnumPropertyRNA rna_ParticleSettings_distribution;
EnumPropertyRNA rna_ParticleSettings_physics_type;
EnumPropertyRNA rna_ParticleSettings_rotation_mode;
EnumPropertyRNA rna_ParticleSettings_angular_velocity_mode;
EnumPropertyRNA rna_ParticleSettings_react_event;
BoolPropertyRNA rna_ParticleSettings_show_velocity;
BoolPropertyRNA rna_ParticleSettings_show_size;
BoolPropertyRNA rna_ParticleSettings_use_render_emitter;
BoolPropertyRNA rna_ParticleSettings_show_health;
BoolPropertyRNA rna_ParticleSettings_use_absolute_path_time;
BoolPropertyRNA rna_ParticleSettings_use_parent_particles;
BoolPropertyRNA rna_ParticleSettings_show_number;
BoolPropertyRNA rna_ParticleSettings_use_group_pick_random;
BoolPropertyRNA rna_ParticleSettings_use_group_count;
BoolPropertyRNA rna_ParticleSettings_use_global_dupli;
BoolPropertyRNA rna_ParticleSettings_use_rotation_dupli;
BoolPropertyRNA rna_ParticleSettings_use_scale_dupli;
BoolPropertyRNA rna_ParticleSettings_use_render_adaptive;
BoolPropertyRNA rna_ParticleSettings_use_velocity_length;
BoolPropertyRNA rna_ParticleSettings_use_whole_group;
BoolPropertyRNA rna_ParticleSettings_use_strand_primitive;
EnumPropertyRNA rna_ParticleSettings_draw_method;
EnumPropertyRNA rna_ParticleSettings_render_type;
EnumPropertyRNA rna_ParticleSettings_draw_color;
IntPropertyRNA rna_ParticleSettings_draw_size;
EnumPropertyRNA rna_ParticleSettings_child_type;
IntPropertyRNA rna_ParticleSettings_draw_step;
IntPropertyRNA rna_ParticleSettings_render_step;
IntPropertyRNA rna_ParticleSettings_hair_step;
IntPropertyRNA rna_ParticleSettings_keys_step;
IntPropertyRNA rna_ParticleSettings_adaptive_angle;
IntPropertyRNA rna_ParticleSettings_adaptive_pixel;
IntPropertyRNA rna_ParticleSettings_draw_percentage;
IntPropertyRNA rna_ParticleSettings_material;
EnumPropertyRNA rna_ParticleSettings_material_slot;
EnumPropertyRNA rna_ParticleSettings_integrator;
EnumPropertyRNA rna_ParticleSettings_kink;
EnumPropertyRNA rna_ParticleSettings_kink_axis;
BoolPropertyRNA rna_ParticleSettings_lock_billboard;
EnumPropertyRNA rna_ParticleSettings_billboard_align;
IntPropertyRNA rna_ParticleSettings_billboard_uv_split;
EnumPropertyRNA rna_ParticleSettings_billboard_animation;
EnumPropertyRNA rna_ParticleSettings_billboard_offset_split;
FloatPropertyRNA rna_ParticleSettings_billboard_tilt;
FloatPropertyRNA rna_ParticleSettings_color_maximum;
FloatPropertyRNA rna_ParticleSettings_billboard_tilt_random;
FloatPropertyRNA rna_ParticleSettings_billboard_offset;
FloatPropertyRNA rna_ParticleSettings_billboard_size;
FloatPropertyRNA rna_ParticleSettings_billboard_velocity_head;
FloatPropertyRNA rna_ParticleSettings_billboard_velocity_tail;
BoolPropertyRNA rna_ParticleSettings_use_simplify;
BoolPropertyRNA rna_ParticleSettings_use_simplify_viewport;
IntPropertyRNA rna_ParticleSettings_simplify_refsize;
FloatPropertyRNA rna_ParticleSettings_simplify_rate;
FloatPropertyRNA rna_ParticleSettings_simplify_transition;
FloatPropertyRNA rna_ParticleSettings_simplify_viewport;
FloatPropertyRNA rna_ParticleSettings_frame_start;
FloatPropertyRNA rna_ParticleSettings_frame_end;
FloatPropertyRNA rna_ParticleSettings_lifetime;
FloatPropertyRNA rna_ParticleSettings_lifetime_random;
FloatPropertyRNA rna_ParticleSettings_time_tweak;
FloatPropertyRNA rna_ParticleSettings_timestep;
BoolPropertyRNA rna_ParticleSettings_use_adaptive_subframes;
IntPropertyRNA rna_ParticleSettings_subframes;
FloatPropertyRNA rna_ParticleSettings_courant_target;
FloatPropertyRNA rna_ParticleSettings_jitter_factor;
FloatPropertyRNA rna_ParticleSettings_effect_hair;
IntPropertyRNA rna_ParticleSettings_count;
IntPropertyRNA rna_ParticleSettings_userjit;
IntPropertyRNA rna_ParticleSettings_grid_resolution;
FloatPropertyRNA rna_ParticleSettings_grid_random;
IntPropertyRNA rna_ParticleSettings_effector_amount;
FloatPropertyRNA rna_ParticleSettings_normal_factor;
FloatPropertyRNA rna_ParticleSettings_object_factor;
FloatPropertyRNA rna_ParticleSettings_factor_random;
FloatPropertyRNA rna_ParticleSettings_particle_factor;
FloatPropertyRNA rna_ParticleSettings_tangent_factor;
FloatPropertyRNA rna_ParticleSettings_tangent_phase;
FloatPropertyRNA rna_ParticleSettings_reactor_factor;
FloatPropertyRNA rna_ParticleSettings_object_align_factor;
FloatPropertyRNA rna_ParticleSettings_angular_velocity_factor;
FloatPropertyRNA rna_ParticleSettings_phase_factor;
FloatPropertyRNA rna_ParticleSettings_rotation_factor_random;
FloatPropertyRNA rna_ParticleSettings_phase_factor_random;
FloatPropertyRNA rna_ParticleSettings_hair_length;
FloatPropertyRNA rna_ParticleSettings_mass;
FloatPropertyRNA rna_ParticleSettings_particle_size;
FloatPropertyRNA rna_ParticleSettings_size_random;
FloatPropertyRNA rna_ParticleSettings_drag_factor;
FloatPropertyRNA rna_ParticleSettings_brownian_factor;
FloatPropertyRNA rna_ParticleSettings_damping;
FloatPropertyRNA rna_ParticleSettings_length_random;
IntPropertyRNA rna_ParticleSettings_child_nbr;
IntPropertyRNA rna_ParticleSettings_rendered_child_count;
FloatPropertyRNA rna_ParticleSettings_virtual_parents;
FloatPropertyRNA rna_ParticleSettings_child_size;
FloatPropertyRNA rna_ParticleSettings_child_size_random;
FloatPropertyRNA rna_ParticleSettings_child_radius;
FloatPropertyRNA rna_ParticleSettings_child_roundness;
FloatPropertyRNA rna_ParticleSettings_clump_factor;
FloatPropertyRNA rna_ParticleSettings_clump_shape;
FloatPropertyRNA rna_ParticleSettings_kink_amplitude;
FloatPropertyRNA rna_ParticleSettings_kink_amplitude_clump;
FloatPropertyRNA rna_ParticleSettings_kink_frequency;
FloatPropertyRNA rna_ParticleSettings_kink_shape;
FloatPropertyRNA rna_ParticleSettings_kink_flat;
FloatPropertyRNA rna_ParticleSettings_roughness_1;
FloatPropertyRNA rna_ParticleSettings_roughness_1_size;
FloatPropertyRNA rna_ParticleSettings_roughness_2;
FloatPropertyRNA rna_ParticleSettings_roughness_2_size;
FloatPropertyRNA rna_ParticleSettings_roughness_2_threshold;
FloatPropertyRNA rna_ParticleSettings_roughness_endpoint;
FloatPropertyRNA rna_ParticleSettings_roughness_end_shape;
FloatPropertyRNA rna_ParticleSettings_child_length;
FloatPropertyRNA rna_ParticleSettings_child_length_threshold;
FloatPropertyRNA rna_ParticleSettings_child_parting_factor;
FloatPropertyRNA rna_ParticleSettings_child_parting_min;
FloatPropertyRNA rna_ParticleSettings_child_parting_max;
FloatPropertyRNA rna_ParticleSettings_branch_threshold;
FloatPropertyRNA rna_ParticleSettings_line_length_tail;
FloatPropertyRNA rna_ParticleSettings_line_length_head;
FloatPropertyRNA rna_ParticleSettings_path_start;
FloatPropertyRNA rna_ParticleSettings_path_end;
IntPropertyRNA rna_ParticleSettings_trail_count;
IntPropertyRNA rna_ParticleSettings_keyed_loops;
BoolPropertyRNA rna_ParticleSettings_use_modifier_stack;
PointerPropertyRNA rna_ParticleSettings_dupli_group;
CollectionPropertyRNA rna_ParticleSettings_dupli_weights;
PointerPropertyRNA rna_ParticleSettings_active_dupliweight;
IntPropertyRNA rna_ParticleSettings_active_dupliweight_index;
PointerPropertyRNA rna_ParticleSettings_dupli_object;
PointerPropertyRNA rna_ParticleSettings_billboard_object;
PointerPropertyRNA rna_ParticleSettings_boids;
PointerPropertyRNA rna_ParticleSettings_fluid;
PointerPropertyRNA rna_ParticleSettings_effector_weights;
PointerPropertyRNA rna_ParticleSettings_animation_data;
PointerPropertyRNA rna_ParticleSettings_force_field_1;
PointerPropertyRNA rna_ParticleSettings_force_field_2;

extern FunctionRNA rna_ID_copy_func;
extern PointerPropertyRNA rna_ID_copy_id;

extern FunctionRNA rna_ID_user_clear_func;
extern FunctionRNA rna_ID_animation_data_create_func;
extern PointerPropertyRNA rna_ID_animation_data_create_anim_data;

extern FunctionRNA rna_ID_animation_data_clear_func;
extern FunctionRNA rna_ID_update_tag_func;
extern EnumPropertyRNA rna_ID_update_tag_refresh;



CollectionPropertyRNA rna_ParticleSettingsTextureSlots_rna_properties;
PointerPropertyRNA rna_ParticleSettingsTextureSlots_rna_type;

extern FunctionRNA rna_ParticleSettingsTextureSlots_add_func;
extern PointerPropertyRNA rna_ParticleSettingsTextureSlots_add_mtex;

extern FunctionRNA rna_ParticleSettingsTextureSlots_create_func;
extern IntPropertyRNA rna_ParticleSettingsTextureSlots_create_index;
extern PointerPropertyRNA rna_ParticleSettingsTextureSlots_create_mtex;

extern FunctionRNA rna_ParticleSettingsTextureSlots_clear_func;
extern IntPropertyRNA rna_ParticleSettingsTextureSlots_clear_index;


static PointerRNA ParticleTarget_rna_properties_get(CollectionPropertyIterator *iter)
{
	return rna_builtin_properties_get(iter);
}

void ParticleTarget_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

	memset(iter, 0, sizeof(*iter));
	iter->parent = *ptr;
	iter->prop = (PropertyRNA *)&rna_ParticleTarget_rna_properties;

	rna_builtin_properties_begin(iter, ptr);

	if (iter->valid)
		iter->ptr = ParticleTarget_rna_properties_get(iter);
}

void ParticleTarget_rna_properties_next(CollectionPropertyIterator *iter)
{
	rna_builtin_properties_next(iter);

	if (iter->valid)
		iter->ptr = ParticleTarget_rna_properties_get(iter);
}

void ParticleTarget_rna_properties_end(CollectionPropertyIterator *iter)
{
	rna_iterator_listbase_end(iter);
}

int ParticleTarget_rna_properties_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
	return rna_builtin_properties_lookup_string(ptr, key, r_ptr);
}

PointerRNA ParticleTarget_rna_type_get(PointerRNA *ptr)
{
	return rna_builtin_type_get(ptr);
}

void ParticleTarget_name_get(PointerRNA *ptr, char *value)
{
	rna_ParticleTarget_name_get(ptr, value);
}

int ParticleTarget_name_length(PointerRNA *ptr)
{
	return rna_ParticleTarget_name_length(ptr);
}

PointerRNA ParticleTarget_object_get(PointerRNA *ptr)
{
	ParticleTarget *data = (ParticleTarget *)(ptr->data);
	return rna_pointer_inherit_refine(ptr, &RNA_Object, data->ob);
}

void ParticleTarget_object_set(PointerRNA *ptr, PointerRNA value)
{
	ParticleTarget *data = (ParticleTarget *)(ptr->data);
	if (value.data)
		id_lib_extern((ID *)value.data);

	data->ob = value.data;
}

int ParticleTarget_system_get(PointerRNA *ptr)
{
	ParticleTarget *data = (ParticleTarget *)(ptr->data);
	return (int)(data->psys);
}

void ParticleTarget_system_set(PointerRNA *ptr, int value)
{
	ParticleTarget *data = (ParticleTarget *)(ptr->data);
	data->psys = CLAMPIS(value, 1, INT_MAX);
}

float ParticleTarget_time_get(PointerRNA *ptr)
{
	ParticleTarget *data = (ParticleTarget *)(ptr->data);
	return (float)(data->time);
}

void ParticleTarget_time_set(PointerRNA *ptr, float value)
{
	ParticleTarget *data = (ParticleTarget *)(ptr->data);
	data->time = CLAMPIS(value, 0.0f, 30000.0f);
}

float ParticleTarget_duration_get(PointerRNA *ptr)
{
	ParticleTarget *data = (ParticleTarget *)(ptr->data);
	return (float)(data->duration);
}

void ParticleTarget_duration_set(PointerRNA *ptr, float value)
{
	ParticleTarget *data = (ParticleTarget *)(ptr->data);
	data->duration = CLAMPIS(value, 0.0f, 30000.0f);
}

int ParticleTarget_is_valid_get(PointerRNA *ptr)
{
	ParticleTarget *data = (ParticleTarget *)(ptr->data);
	return (((data->flag) & 2) != 0);
}

void ParticleTarget_is_valid_set(PointerRNA *ptr, int value)
{
	ParticleTarget *data = (ParticleTarget *)(ptr->data);
	if (value) data->flag |= 2;
	else data->flag &= ~2;
}

int ParticleTarget_alliance_get(PointerRNA *ptr)
{
	ParticleTarget *data = (ParticleTarget *)(ptr->data);
	return (int)(data->mode);
}

void ParticleTarget_alliance_set(PointerRNA *ptr, int value)
{
	ParticleTarget *data = (ParticleTarget *)(ptr->data);
	data->mode = value;
}

static PointerRNA SPHFluidSettings_rna_properties_get(CollectionPropertyIterator *iter)
{
	return rna_builtin_properties_get(iter);
}

void SPHFluidSettings_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

	memset(iter, 0, sizeof(*iter));
	iter->parent = *ptr;
	iter->prop = (PropertyRNA *)&rna_SPHFluidSettings_rna_properties;

	rna_builtin_properties_begin(iter, ptr);

	if (iter->valid)
		iter->ptr = SPHFluidSettings_rna_properties_get(iter);
}

void SPHFluidSettings_rna_properties_next(CollectionPropertyIterator *iter)
{
	rna_builtin_properties_next(iter);

	if (iter->valid)
		iter->ptr = SPHFluidSettings_rna_properties_get(iter);
}

void SPHFluidSettings_rna_properties_end(CollectionPropertyIterator *iter)
{
	rna_iterator_listbase_end(iter);
}

int SPHFluidSettings_rna_properties_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
	return rna_builtin_properties_lookup_string(ptr, key, r_ptr);
}

PointerRNA SPHFluidSettings_rna_type_get(PointerRNA *ptr)
{
	return rna_builtin_type_get(ptr);
}

int SPHFluidSettings_solver_get(PointerRNA *ptr)
{
	SPHFluidSettings *data = (SPHFluidSettings *)(ptr->data);
	return (int)(data->solver);
}

void SPHFluidSettings_solver_set(PointerRNA *ptr, int value)
{
	SPHFluidSettings *data = (SPHFluidSettings *)(ptr->data);
	data->solver = value;
}

float SPHFluidSettings_spring_force_get(PointerRNA *ptr)
{
	SPHFluidSettings *data = (SPHFluidSettings *)(ptr->data);
	return (float)(data->spring_k);
}

void SPHFluidSettings_spring_force_set(PointerRNA *ptr, float value)
{
	SPHFluidSettings *data = (SPHFluidSettings *)(ptr->data);
	data->spring_k = CLAMPIS(value, 0.0f, 100.0f);
}

float SPHFluidSettings_fluid_radius_get(PointerRNA *ptr)
{
	SPHFluidSettings *data = (SPHFluidSettings *)(ptr->data);
	return (float)(data->radius);
}

void SPHFluidSettings_fluid_radius_set(PointerRNA *ptr, float value)
{
	SPHFluidSettings *data = (SPHFluidSettings *)(ptr->data);
	data->radius = CLAMPIS(value, 0.0f, 20.0f);
}

float SPHFluidSettings_rest_length_get(PointerRNA *ptr)
{
	SPHFluidSettings *data = (SPHFluidSettings *)(ptr->data);
	return (float)(data->rest_length);
}

void SPHFluidSettings_rest_length_set(PointerRNA *ptr, float value)
{
	SPHFluidSettings *data = (SPHFluidSettings *)(ptr->data);
	data->rest_length = CLAMPIS(value, 0.0f, 2.0f);
}

int SPHFluidSettings_use_viscoelastic_springs_get(PointerRNA *ptr)
{
	SPHFluidSettings *data = (SPHFluidSettings *)(ptr->data);
	return (((data->flag) & 1) != 0);
}

void SPHFluidSettings_use_viscoelastic_springs_set(PointerRNA *ptr, int value)
{
	SPHFluidSettings *data = (SPHFluidSettings *)(ptr->data);
	if (value) data->flag |= 1;
	else data->flag &= ~1;
}

int SPHFluidSettings_use_initial_rest_length_get(PointerRNA *ptr)
{
	SPHFluidSettings *data = (SPHFluidSettings *)(ptr->data);
	return (((data->flag) & 2) != 0);
}

void SPHFluidSettings_use_initial_rest_length_set(PointerRNA *ptr, int value)
{
	SPHFluidSettings *data = (SPHFluidSettings *)(ptr->data);
	if (value) data->flag |= 2;
	else data->flag &= ~2;
}

float SPHFluidSettings_plasticity_get(PointerRNA *ptr)
{
	SPHFluidSettings *data = (SPHFluidSettings *)(ptr->data);
	return (float)(data->plasticity_constant);
}

void SPHFluidSettings_plasticity_set(PointerRNA *ptr, float value)
{
	SPHFluidSettings *data = (SPHFluidSettings *)(ptr->data);
	data->plasticity_constant = CLAMPIS(value, 0.0f, 100.0f);
}

float SPHFluidSettings_yield_ratio_get(PointerRNA *ptr)
{
	SPHFluidSettings *data = (SPHFluidSettings *)(ptr->data);
	return (float)(data->yield_ratio);
}

void SPHFluidSettings_yield_ratio_set(PointerRNA *ptr, float value)
{
	SPHFluidSettings *data = (SPHFluidSettings *)(ptr->data);
	data->yield_ratio = CLAMPIS(value, 0.0f, 1.0f);
}

int SPHFluidSettings_spring_frames_get(PointerRNA *ptr)
{
	SPHFluidSettings *data = (SPHFluidSettings *)(ptr->data);
	return (int)(data->spring_frames);
}

void SPHFluidSettings_spring_frames_set(PointerRNA *ptr, int value)
{
	SPHFluidSettings *data = (SPHFluidSettings *)(ptr->data);
	data->spring_frames = CLAMPIS(value, 0, 100);
}

float SPHFluidSettings_linear_viscosity_get(PointerRNA *ptr)
{
	SPHFluidSettings *data = (SPHFluidSettings *)(ptr->data);
	return (float)(data->viscosity_omega);
}

void SPHFluidSettings_linear_viscosity_set(PointerRNA *ptr, float value)
{
	SPHFluidSettings *data = (SPHFluidSettings *)(ptr->data);
	data->viscosity_omega = CLAMPIS(value, 0.0f, 100.0f);
}

float SPHFluidSettings_stiff_viscosity_get(PointerRNA *ptr)
{
	SPHFluidSettings *data = (SPHFluidSettings *)(ptr->data);
	return (float)(data->viscosity_beta);
}

void SPHFluidSettings_stiff_viscosity_set(PointerRNA *ptr, float value)
{
	SPHFluidSettings *data = (SPHFluidSettings *)(ptr->data);
	data->viscosity_beta = CLAMPIS(value, 0.0f, 100.0f);
}

float SPHFluidSettings_stiffness_get(PointerRNA *ptr)
{
	SPHFluidSettings *data = (SPHFluidSettings *)(ptr->data);
	return (float)(data->stiffness_k);
}

void SPHFluidSettings_stiffness_set(PointerRNA *ptr, float value)
{
	SPHFluidSettings *data = (SPHFluidSettings *)(ptr->data);
	data->stiffness_k = CLAMPIS(value, 0.0f, 1000.0f);
}

float SPHFluidSettings_repulsion_get(PointerRNA *ptr)
{
	SPHFluidSettings *data = (SPHFluidSettings *)(ptr->data);
	return (float)(data->stiffness_knear);
}

void SPHFluidSettings_repulsion_set(PointerRNA *ptr, float value)
{
	SPHFluidSettings *data = (SPHFluidSettings *)(ptr->data);
	data->stiffness_knear = CLAMPIS(value, 0.0f, 100.0f);
}

float SPHFluidSettings_rest_density_get(PointerRNA *ptr)
{
	SPHFluidSettings *data = (SPHFluidSettings *)(ptr->data);
	return (float)(data->rest_density);
}

void SPHFluidSettings_rest_density_set(PointerRNA *ptr, float value)
{
	SPHFluidSettings *data = (SPHFluidSettings *)(ptr->data);
	data->rest_density = CLAMPIS(value, 0.0f, 10000.0f);
}

float SPHFluidSettings_buoyancy_get(PointerRNA *ptr)
{
	SPHFluidSettings *data = (SPHFluidSettings *)(ptr->data);
	return (float)(data->buoyancy);
}

void SPHFluidSettings_buoyancy_set(PointerRNA *ptr, float value)
{
	SPHFluidSettings *data = (SPHFluidSettings *)(ptr->data);
	data->buoyancy = CLAMPIS(value, 0.0f, 10.0f);
}

int SPHFluidSettings_factor_repulsion_get(PointerRNA *ptr)
{
	SPHFluidSettings *data = (SPHFluidSettings *)(ptr->data);
	return (((data->flag) & 4) != 0);
}

void SPHFluidSettings_factor_repulsion_set(PointerRNA *ptr, int value)
{
	SPHFluidSettings *data = (SPHFluidSettings *)(ptr->data);
	if (value) data->flag |= 4;
	else data->flag &= ~4;
}

int SPHFluidSettings_use_factor_density_get(PointerRNA *ptr)
{
	SPHFluidSettings *data = (SPHFluidSettings *)(ptr->data);
	return (((data->flag) & 8) != 0);
}

void SPHFluidSettings_use_factor_density_set(PointerRNA *ptr, int value)
{
	SPHFluidSettings *data = (SPHFluidSettings *)(ptr->data);
	if (value) data->flag |= 8;
	else data->flag &= ~8;
}

int SPHFluidSettings_factor_radius_get(PointerRNA *ptr)
{
	SPHFluidSettings *data = (SPHFluidSettings *)(ptr->data);
	return (((data->flag) & 16) != 0);
}

void SPHFluidSettings_factor_radius_set(PointerRNA *ptr, int value)
{
	SPHFluidSettings *data = (SPHFluidSettings *)(ptr->data);
	if (value) data->flag |= 16;
	else data->flag &= ~16;
}

int SPHFluidSettings_factor_stiff_viscosity_get(PointerRNA *ptr)
{
	SPHFluidSettings *data = (SPHFluidSettings *)(ptr->data);
	return (((data->flag) & 32) != 0);
}

void SPHFluidSettings_factor_stiff_viscosity_set(PointerRNA *ptr, int value)
{
	SPHFluidSettings *data = (SPHFluidSettings *)(ptr->data);
	if (value) data->flag |= 32;
	else data->flag &= ~32;
}

int SPHFluidSettings_factor_rest_length_get(PointerRNA *ptr)
{
	SPHFluidSettings *data = (SPHFluidSettings *)(ptr->data);
	return (((data->flag) & 64) != 0);
}

void SPHFluidSettings_factor_rest_length_set(PointerRNA *ptr, int value)
{
	SPHFluidSettings *data = (SPHFluidSettings *)(ptr->data);
	if (value) data->flag |= 64;
	else data->flag &= ~64;
}

static PointerRNA ParticleHairKey_rna_properties_get(CollectionPropertyIterator *iter)
{
	return rna_builtin_properties_get(iter);
}

void ParticleHairKey_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

	memset(iter, 0, sizeof(*iter));
	iter->parent = *ptr;
	iter->prop = (PropertyRNA *)&rna_ParticleHairKey_rna_properties;

	rna_builtin_properties_begin(iter, ptr);

	if (iter->valid)
		iter->ptr = ParticleHairKey_rna_properties_get(iter);
}

void ParticleHairKey_rna_properties_next(CollectionPropertyIterator *iter)
{
	rna_builtin_properties_next(iter);

	if (iter->valid)
		iter->ptr = ParticleHairKey_rna_properties_get(iter);
}

void ParticleHairKey_rna_properties_end(CollectionPropertyIterator *iter)
{
	rna_iterator_listbase_end(iter);
}

int ParticleHairKey_rna_properties_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
	return rna_builtin_properties_lookup_string(ptr, key, r_ptr);
}

PointerRNA ParticleHairKey_rna_type_get(PointerRNA *ptr)
{
	return rna_builtin_type_get(ptr);
}

float ParticleHairKey_time_get(PointerRNA *ptr)
{
	HairKey *data = (HairKey *)(ptr->data);
	return (float)(data->time);
}

void ParticleHairKey_time_set(PointerRNA *ptr, float value)
{
	HairKey *data = (HairKey *)(ptr->data);
	data->time = CLAMPIS(value, 0.0f, FLT_MAX);
}

float ParticleHairKey_weight_get(PointerRNA *ptr)
{
	HairKey *data = (HairKey *)(ptr->data);
	return (float)(data->weight);
}

void ParticleHairKey_weight_set(PointerRNA *ptr, float value)
{
	HairKey *data = (HairKey *)(ptr->data);
	data->weight = CLAMPIS(value, 0.0f, 1.0f);
}

void ParticleHairKey_co_get(PointerRNA *ptr, float values[3])
{
	rna_ParticleHairKey_location_object_get(ptr, values);
}

void ParticleHairKey_co_set(PointerRNA *ptr, const float values[3])
{
	rna_ParticleHairKey_location_object_set(ptr, values);
}

void ParticleHairKey_co_local_get(PointerRNA *ptr, float values[3])
{
	HairKey *data = (HairKey *)(ptr->data);
	unsigned int i;

	for (i = 0; i < 3; i++) {
		values[i] = (float)(((float *)data->co)[i]);
	}
}

void ParticleHairKey_co_local_set(PointerRNA *ptr, const float values[3])
{
	HairKey *data = (HairKey *)(ptr->data);
	unsigned int i;

	for (i = 0; i < 3; i++) {
		((float *)data->co)[i] = values[i];
	}
}

static PointerRNA ParticleKey_rna_properties_get(CollectionPropertyIterator *iter)
{
	return rna_builtin_properties_get(iter);
}

void ParticleKey_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

	memset(iter, 0, sizeof(*iter));
	iter->parent = *ptr;
	iter->prop = (PropertyRNA *)&rna_ParticleKey_rna_properties;

	rna_builtin_properties_begin(iter, ptr);

	if (iter->valid)
		iter->ptr = ParticleKey_rna_properties_get(iter);
}

void ParticleKey_rna_properties_next(CollectionPropertyIterator *iter)
{
	rna_builtin_properties_next(iter);

	if (iter->valid)
		iter->ptr = ParticleKey_rna_properties_get(iter);
}

void ParticleKey_rna_properties_end(CollectionPropertyIterator *iter)
{
	rna_iterator_listbase_end(iter);
}

int ParticleKey_rna_properties_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
	return rna_builtin_properties_lookup_string(ptr, key, r_ptr);
}

PointerRNA ParticleKey_rna_type_get(PointerRNA *ptr)
{
	return rna_builtin_type_get(ptr);
}

void ParticleKey_location_get(PointerRNA *ptr, float values[3])
{
	ParticleKey *data = (ParticleKey *)(ptr->data);
	unsigned int i;

	for (i = 0; i < 3; i++) {
		values[i] = (float)(((float *)data->co)[i]);
	}
}

void ParticleKey_location_set(PointerRNA *ptr, const float values[3])
{
	ParticleKey *data = (ParticleKey *)(ptr->data);
	unsigned int i;

	for (i = 0; i < 3; i++) {
		((float *)data->co)[i] = values[i];
	}
}

void ParticleKey_velocity_get(PointerRNA *ptr, float values[3])
{
	ParticleKey *data = (ParticleKey *)(ptr->data);
	unsigned int i;

	for (i = 0; i < 3; i++) {
		values[i] = (float)(((float *)data->vel)[i]);
	}
}

void ParticleKey_velocity_set(PointerRNA *ptr, const float values[3])
{
	ParticleKey *data = (ParticleKey *)(ptr->data);
	unsigned int i;

	for (i = 0; i < 3; i++) {
		((float *)data->vel)[i] = values[i];
	}
}

void ParticleKey_rotation_get(PointerRNA *ptr, float values[4])
{
	ParticleKey *data = (ParticleKey *)(ptr->data);
	unsigned int i;

	for (i = 0; i < 4; i++) {
		values[i] = (float)(((float *)data->rot)[i]);
	}
}

void ParticleKey_rotation_set(PointerRNA *ptr, const float values[4])
{
	ParticleKey *data = (ParticleKey *)(ptr->data);
	unsigned int i;

	for (i = 0; i < 4; i++) {
		((float *)data->rot)[i] = values[i];
	}
}

void ParticleKey_angular_velocity_get(PointerRNA *ptr, float values[3])
{
	ParticleKey *data = (ParticleKey *)(ptr->data);
	unsigned int i;

	for (i = 0; i < 3; i++) {
		values[i] = (float)(((float *)data->ave)[i]);
	}
}

void ParticleKey_angular_velocity_set(PointerRNA *ptr, const float values[3])
{
	ParticleKey *data = (ParticleKey *)(ptr->data);
	unsigned int i;

	for (i = 0; i < 3; i++) {
		((float *)data->ave)[i] = values[i];
	}
}

float ParticleKey_time_get(PointerRNA *ptr)
{
	ParticleKey *data = (ParticleKey *)(ptr->data);
	return (float)(data->time);
}

void ParticleKey_time_set(PointerRNA *ptr, float value)
{
	ParticleKey *data = (ParticleKey *)(ptr->data);
	data->time = CLAMPIS(value, 0.0f, FLT_MAX);
}

static PointerRNA ChildParticle_rna_properties_get(CollectionPropertyIterator *iter)
{
	return rna_builtin_properties_get(iter);
}

void ChildParticle_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

	memset(iter, 0, sizeof(*iter));
	iter->parent = *ptr;
	iter->prop = (PropertyRNA *)&rna_ChildParticle_rna_properties;

	rna_builtin_properties_begin(iter, ptr);

	if (iter->valid)
		iter->ptr = ChildParticle_rna_properties_get(iter);
}

void ChildParticle_rna_properties_next(CollectionPropertyIterator *iter)
{
	rna_builtin_properties_next(iter);

	if (iter->valid)
		iter->ptr = ChildParticle_rna_properties_get(iter);
}

void ChildParticle_rna_properties_end(CollectionPropertyIterator *iter)
{
	rna_iterator_listbase_end(iter);
}

int ChildParticle_rna_properties_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
	return rna_builtin_properties_lookup_string(ptr, key, r_ptr);
}

PointerRNA ChildParticle_rna_type_get(PointerRNA *ptr)
{
	return rna_builtin_type_get(ptr);
}

static PointerRNA Particle_rna_properties_get(CollectionPropertyIterator *iter)
{
	return rna_builtin_properties_get(iter);
}

void Particle_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

	memset(iter, 0, sizeof(*iter));
	iter->parent = *ptr;
	iter->prop = (PropertyRNA *)&rna_Particle_rna_properties;

	rna_builtin_properties_begin(iter, ptr);

	if (iter->valid)
		iter->ptr = Particle_rna_properties_get(iter);
}

void Particle_rna_properties_next(CollectionPropertyIterator *iter)
{
	rna_builtin_properties_next(iter);

	if (iter->valid)
		iter->ptr = Particle_rna_properties_get(iter);
}

void Particle_rna_properties_end(CollectionPropertyIterator *iter)
{
	rna_iterator_listbase_end(iter);
}

int Particle_rna_properties_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
	return rna_builtin_properties_lookup_string(ptr, key, r_ptr);
}

PointerRNA Particle_rna_type_get(PointerRNA *ptr)
{
	return rna_builtin_type_get(ptr);
}

void Particle_location_get(PointerRNA *ptr, float values[3])
{
	ParticleData *data = (ParticleData *)(ptr->data);
	unsigned int i;

	for (i = 0; i < 3; i++) {
		values[i] = (float)(((float *)data->state.co)[i]);
	}
}

void Particle_location_set(PointerRNA *ptr, const float values[3])
{
	ParticleData *data = (ParticleData *)(ptr->data);
	unsigned int i;

	for (i = 0; i < 3; i++) {
		((float *)data->state.co)[i] = values[i];
	}
}

void Particle_velocity_get(PointerRNA *ptr, float values[3])
{
	ParticleData *data = (ParticleData *)(ptr->data);
	unsigned int i;

	for (i = 0; i < 3; i++) {
		values[i] = (float)(((float *)data->state.vel)[i]);
	}
}

void Particle_velocity_set(PointerRNA *ptr, const float values[3])
{
	ParticleData *data = (ParticleData *)(ptr->data);
	unsigned int i;

	for (i = 0; i < 3; i++) {
		((float *)data->state.vel)[i] = values[i];
	}
}

void Particle_angular_velocity_get(PointerRNA *ptr, float values[3])
{
	ParticleData *data = (ParticleData *)(ptr->data);
	unsigned int i;

	for (i = 0; i < 3; i++) {
		values[i] = (float)(((float *)data->state.ave)[i]);
	}
}

void Particle_angular_velocity_set(PointerRNA *ptr, const float values[3])
{
	ParticleData *data = (ParticleData *)(ptr->data);
	unsigned int i;

	for (i = 0; i < 3; i++) {
		((float *)data->state.ave)[i] = values[i];
	}
}

void Particle_rotation_get(PointerRNA *ptr, float values[4])
{
	ParticleData *data = (ParticleData *)(ptr->data);
	unsigned int i;

	for (i = 0; i < 4; i++) {
		values[i] = (float)(((float *)data->state.rot)[i]);
	}
}

void Particle_rotation_set(PointerRNA *ptr, const float values[4])
{
	ParticleData *data = (ParticleData *)(ptr->data);
	unsigned int i;

	for (i = 0; i < 4; i++) {
		((float *)data->state.rot)[i] = values[i];
	}
}

void Particle_prev_location_get(PointerRNA *ptr, float values[3])
{
	ParticleData *data = (ParticleData *)(ptr->data);
	unsigned int i;

	for (i = 0; i < 3; i++) {
		values[i] = (float)(((float *)data->prev_state.co)[i]);
	}
}

void Particle_prev_location_set(PointerRNA *ptr, const float values[3])
{
	ParticleData *data = (ParticleData *)(ptr->data);
	unsigned int i;

	for (i = 0; i < 3; i++) {
		((float *)data->prev_state.co)[i] = values[i];
	}
}

void Particle_prev_velocity_get(PointerRNA *ptr, float values[3])
{
	ParticleData *data = (ParticleData *)(ptr->data);
	unsigned int i;

	for (i = 0; i < 3; i++) {
		values[i] = (float)(((float *)data->prev_state.vel)[i]);
	}
}

void Particle_prev_velocity_set(PointerRNA *ptr, const float values[3])
{
	ParticleData *data = (ParticleData *)(ptr->data);
	unsigned int i;

	for (i = 0; i < 3; i++) {
		((float *)data->prev_state.vel)[i] = values[i];
	}
}

void Particle_prev_angular_velocity_get(PointerRNA *ptr, float values[3])
{
	ParticleData *data = (ParticleData *)(ptr->data);
	unsigned int i;

	for (i = 0; i < 3; i++) {
		values[i] = (float)(((float *)data->prev_state.ave)[i]);
	}
}

void Particle_prev_angular_velocity_set(PointerRNA *ptr, const float values[3])
{
	ParticleData *data = (ParticleData *)(ptr->data);
	unsigned int i;

	for (i = 0; i < 3; i++) {
		((float *)data->prev_state.ave)[i] = values[i];
	}
}

void Particle_prev_rotation_get(PointerRNA *ptr, float values[4])
{
	ParticleData *data = (ParticleData *)(ptr->data);
	unsigned int i;

	for (i = 0; i < 4; i++) {
		values[i] = (float)(((float *)data->prev_state.rot)[i]);
	}
}

void Particle_prev_rotation_set(PointerRNA *ptr, const float values[4])
{
	ParticleData *data = (ParticleData *)(ptr->data);
	unsigned int i;

	for (i = 0; i < 4; i++) {
		((float *)data->prev_state.rot)[i] = values[i];
	}
}

int Particle_hair_keys_length(PointerRNA *ptr)
{
	ParticleData *data = (ParticleData *)(ptr->data);
	return (data->hair == NULL) ? 0 : data->totkey;
}

static PointerRNA Particle_hair_keys_get(CollectionPropertyIterator *iter)
{
	return rna_pointer_inherit_refine(&iter->parent, &RNA_ParticleHairKey, rna_iterator_array_get(iter));
}

void Particle_hair_keys_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{
	ParticleData *data = (ParticleData *)(ptr->data);

	memset(iter, 0, sizeof(*iter));
	iter->parent = *ptr;
	iter->prop = (PropertyRNA *)&rna_Particle_hair_keys;

	rna_iterator_array_begin(iter, data->hair, sizeof(data->hair[0]), data->totkey, 0, NULL);

	if (iter->valid)
		iter->ptr = Particle_hair_keys_get(iter);
}

void Particle_hair_keys_next(CollectionPropertyIterator *iter)
{
	rna_iterator_array_next(iter);

	if (iter->valid)
		iter->ptr = Particle_hair_keys_get(iter);
}

void Particle_hair_keys_end(CollectionPropertyIterator *iter)
{
	rna_iterator_array_end(iter);
}

int Particle_hair_keys_lookup_int(PointerRNA *ptr, int index, PointerRNA *r_ptr)
{
	int found = 0;
	CollectionPropertyIterator iter;

	Particle_hair_keys_begin(&iter, ptr);

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
		if (found) *r_ptr = Particle_hair_keys_get(&iter);
	}

	Particle_hair_keys_end(&iter);

	return found;
}

int Particle_particle_keys_length(PointerRNA *ptr)
{
	ParticleData *data = (ParticleData *)(ptr->data);
	return (data->keys == NULL) ? 0 : data->totkey;
}

static PointerRNA Particle_particle_keys_get(CollectionPropertyIterator *iter)
{
	return rna_pointer_inherit_refine(&iter->parent, &RNA_ParticleKey, rna_iterator_array_get(iter));
}

void Particle_particle_keys_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{
	ParticleData *data = (ParticleData *)(ptr->data);

	memset(iter, 0, sizeof(*iter));
	iter->parent = *ptr;
	iter->prop = (PropertyRNA *)&rna_Particle_particle_keys;

	rna_iterator_array_begin(iter, data->keys, sizeof(data->keys[0]), data->totkey, 0, NULL);

	if (iter->valid)
		iter->ptr = Particle_particle_keys_get(iter);
}

void Particle_particle_keys_next(CollectionPropertyIterator *iter)
{
	rna_iterator_array_next(iter);

	if (iter->valid)
		iter->ptr = Particle_particle_keys_get(iter);
}

void Particle_particle_keys_end(CollectionPropertyIterator *iter)
{
	rna_iterator_array_end(iter);
}

int Particle_particle_keys_lookup_int(PointerRNA *ptr, int index, PointerRNA *r_ptr)
{
	int found = 0;
	CollectionPropertyIterator iter;

	Particle_particle_keys_begin(&iter, ptr);

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
		if (found) *r_ptr = Particle_particle_keys_get(&iter);
	}

	Particle_particle_keys_end(&iter);

	return found;
}

float Particle_birth_time_get(PointerRNA *ptr)
{
	ParticleData *data = (ParticleData *)(ptr->data);
	return (float)(data->time);
}

void Particle_birth_time_set(PointerRNA *ptr, float value)
{
	ParticleData *data = (ParticleData *)(ptr->data);
	data->time = value;
}

float Particle_lifetime_get(PointerRNA *ptr)
{
	ParticleData *data = (ParticleData *)(ptr->data);
	return (float)(data->lifetime);
}

void Particle_lifetime_set(PointerRNA *ptr, float value)
{
	ParticleData *data = (ParticleData *)(ptr->data);
	data->lifetime = value;
}

float Particle_die_time_get(PointerRNA *ptr)
{
	ParticleData *data = (ParticleData *)(ptr->data);
	return (float)(data->dietime);
}

void Particle_die_time_set(PointerRNA *ptr, float value)
{
	ParticleData *data = (ParticleData *)(ptr->data);
	data->dietime = value;
}

float Particle_size_get(PointerRNA *ptr)
{
	ParticleData *data = (ParticleData *)(ptr->data);
	return (float)(data->size);
}

void Particle_size_set(PointerRNA *ptr, float value)
{
	ParticleData *data = (ParticleData *)(ptr->data);
	data->size = value;
}

int Particle_is_exist_get(PointerRNA *ptr)
{
	ParticleData *data = (ParticleData *)(ptr->data);
	return !(((data->flag) & 1) != 0);
}

int Particle_is_visible_get(PointerRNA *ptr)
{
	ParticleData *data = (ParticleData *)(ptr->data);
	return !(((data->flag) & 2) != 0);
}

int Particle_alive_state_get(PointerRNA *ptr)
{
	ParticleData *data = (ParticleData *)(ptr->data);
	return (int)(data->alive);
}

void Particle_alive_state_set(PointerRNA *ptr, int value)
{
	ParticleData *data = (ParticleData *)(ptr->data);
	data->alive = value;
}

static PointerRNA ParticleDupliWeight_rna_properties_get(CollectionPropertyIterator *iter)
{
	return rna_builtin_properties_get(iter);
}

void ParticleDupliWeight_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

	memset(iter, 0, sizeof(*iter));
	iter->parent = *ptr;
	iter->prop = (PropertyRNA *)&rna_ParticleDupliWeight_rna_properties;

	rna_builtin_properties_begin(iter, ptr);

	if (iter->valid)
		iter->ptr = ParticleDupliWeight_rna_properties_get(iter);
}

void ParticleDupliWeight_rna_properties_next(CollectionPropertyIterator *iter)
{
	rna_builtin_properties_next(iter);

	if (iter->valid)
		iter->ptr = ParticleDupliWeight_rna_properties_get(iter);
}

void ParticleDupliWeight_rna_properties_end(CollectionPropertyIterator *iter)
{
	rna_iterator_listbase_end(iter);
}

int ParticleDupliWeight_rna_properties_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
	return rna_builtin_properties_lookup_string(ptr, key, r_ptr);
}

PointerRNA ParticleDupliWeight_rna_type_get(PointerRNA *ptr)
{
	return rna_builtin_type_get(ptr);
}

void ParticleDupliWeight_name_get(PointerRNA *ptr, char *value)
{
	rna_ParticleDupliWeight_name_get(ptr, value);
}

int ParticleDupliWeight_name_length(PointerRNA *ptr)
{
	return rna_ParticleDupliWeight_name_length(ptr);
}

int ParticleDupliWeight_count_get(PointerRNA *ptr)
{
	ParticleDupliWeight *data = (ParticleDupliWeight *)(ptr->data);
	return (int)(data->count);
}

void ParticleDupliWeight_count_set(PointerRNA *ptr, int value)
{
	ParticleDupliWeight *data = (ParticleDupliWeight *)(ptr->data);
	data->count = CLAMPIS(value, 0, 32767);
}

static PointerRNA ParticleSystem_rna_properties_get(CollectionPropertyIterator *iter)
{
	return rna_builtin_properties_get(iter);
}

void ParticleSystem_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

	memset(iter, 0, sizeof(*iter));
	iter->parent = *ptr;
	iter->prop = (PropertyRNA *)&rna_ParticleSystem_rna_properties;

	rna_builtin_properties_begin(iter, ptr);

	if (iter->valid)
		iter->ptr = ParticleSystem_rna_properties_get(iter);
}

void ParticleSystem_rna_properties_next(CollectionPropertyIterator *iter)
{
	rna_builtin_properties_next(iter);

	if (iter->valid)
		iter->ptr = ParticleSystem_rna_properties_get(iter);
}

void ParticleSystem_rna_properties_end(CollectionPropertyIterator *iter)
{
	rna_iterator_listbase_end(iter);
}

int ParticleSystem_rna_properties_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
	return rna_builtin_properties_lookup_string(ptr, key, r_ptr);
}

PointerRNA ParticleSystem_rna_type_get(PointerRNA *ptr)
{
	return rna_builtin_type_get(ptr);
}

void ParticleSystem_name_get(PointerRNA *ptr, char *value)
{
	ParticleSystem *data = (ParticleSystem *)(ptr->data);
	BLI_strncpy_utf8(value, data->name, 64);
}

int ParticleSystem_name_length(PointerRNA *ptr)
{
	ParticleSystem *data = (ParticleSystem *)(ptr->data);
	return strlen(data->name);
}

void ParticleSystem_name_set(PointerRNA *ptr, const char *value)
{
	rna_ParticleSystem_name_set(ptr, value);
}

PointerRNA ParticleSystem_settings_get(PointerRNA *ptr)
{
	return rna_particle_settings_get(ptr);
}

void ParticleSystem_settings_set(PointerRNA *ptr, PointerRNA value)
{
	rna_particle_settings_set(ptr, value);
}

int ParticleSystem_particles_length(PointerRNA *ptr)
{
	ParticleSystem *data = (ParticleSystem *)(ptr->data);
	return (data->particles == NULL) ? 0 : data->totpart;
}

static PointerRNA ParticleSystem_particles_get(CollectionPropertyIterator *iter)
{
	return rna_pointer_inherit_refine(&iter->parent, &RNA_Particle, rna_iterator_array_get(iter));
}

void ParticleSystem_particles_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{
	ParticleSystem *data = (ParticleSystem *)(ptr->data);

	memset(iter, 0, sizeof(*iter));
	iter->parent = *ptr;
	iter->prop = (PropertyRNA *)&rna_ParticleSystem_particles;

	rna_iterator_array_begin(iter, data->particles, sizeof(data->particles[0]), data->totpart, 0, NULL);

	if (iter->valid)
		iter->ptr = ParticleSystem_particles_get(iter);
}

void ParticleSystem_particles_next(CollectionPropertyIterator *iter)
{
	rna_iterator_array_next(iter);

	if (iter->valid)
		iter->ptr = ParticleSystem_particles_get(iter);
}

void ParticleSystem_particles_end(CollectionPropertyIterator *iter)
{
	rna_iterator_array_end(iter);
}

int ParticleSystem_particles_lookup_int(PointerRNA *ptr, int index, PointerRNA *r_ptr)
{
	int found = 0;
	CollectionPropertyIterator iter;

	ParticleSystem_particles_begin(&iter, ptr);

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
		if (found) *r_ptr = ParticleSystem_particles_get(&iter);
	}

	ParticleSystem_particles_end(&iter);

	return found;
}

int ParticleSystem_child_particles_length(PointerRNA *ptr)
{
	ParticleSystem *data = (ParticleSystem *)(ptr->data);
	return (data->child == NULL) ? 0 : data->totchild;
}

static PointerRNA ParticleSystem_child_particles_get(CollectionPropertyIterator *iter)
{
	return rna_pointer_inherit_refine(&iter->parent, &RNA_ChildParticle, rna_iterator_array_get(iter));
}

void ParticleSystem_child_particles_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{
	ParticleSystem *data = (ParticleSystem *)(ptr->data);

	memset(iter, 0, sizeof(*iter));
	iter->parent = *ptr;
	iter->prop = (PropertyRNA *)&rna_ParticleSystem_child_particles;

	rna_iterator_array_begin(iter, data->child, sizeof(data->child[0]), data->totchild, 0, NULL);

	if (iter->valid)
		iter->ptr = ParticleSystem_child_particles_get(iter);
}

void ParticleSystem_child_particles_next(CollectionPropertyIterator *iter)
{
	rna_iterator_array_next(iter);

	if (iter->valid)
		iter->ptr = ParticleSystem_child_particles_get(iter);
}

void ParticleSystem_child_particles_end(CollectionPropertyIterator *iter)
{
	rna_iterator_array_end(iter);
}

int ParticleSystem_child_particles_lookup_int(PointerRNA *ptr, int index, PointerRNA *r_ptr)
{
	int found = 0;
	CollectionPropertyIterator iter;

	ParticleSystem_child_particles_begin(&iter, ptr);

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
		if (found) *r_ptr = ParticleSystem_child_particles_get(&iter);
	}

	ParticleSystem_child_particles_end(&iter);

	return found;
}

int ParticleSystem_seed_get(PointerRNA *ptr)
{
	ParticleSystem *data = (ParticleSystem *)(ptr->data);
	return (int)(data->seed);
}

void ParticleSystem_seed_set(PointerRNA *ptr, int value)
{
	ParticleSystem *data = (ParticleSystem *)(ptr->data);
	data->seed = CLAMPIS(value, 0, INT_MAX);
}

int ParticleSystem_child_seed_get(PointerRNA *ptr)
{
	ParticleSystem *data = (ParticleSystem *)(ptr->data);
	return (int)(data->child_seed);
}

void ParticleSystem_child_seed_set(PointerRNA *ptr, int value)
{
	ParticleSystem *data = (ParticleSystem *)(ptr->data);
	data->child_seed = CLAMPIS(value, 0, INT_MAX);
}

int ParticleSystem_is_global_hair_get(PointerRNA *ptr)
{
	ParticleSystem *data = (ParticleSystem *)(ptr->data);
	return (((data->flag) & 2) != 0);
}

int ParticleSystem_use_hair_dynamics_get(PointerRNA *ptr)
{
	ParticleSystem *data = (ParticleSystem *)(ptr->data);
	return (((data->flag) & 4) != 0);
}

void ParticleSystem_use_hair_dynamics_set(PointerRNA *ptr, int value)
{
	ParticleSystem *data = (ParticleSystem *)(ptr->data);
	if (value) data->flag |= 4;
	else data->flag &= ~4;
}

PointerRNA ParticleSystem_cloth_get(PointerRNA *ptr)
{
	ParticleSystem *data = (ParticleSystem *)(ptr->data);
	return rna_pointer_inherit_refine(ptr, &RNA_ClothModifier, data->clmd);
}

PointerRNA ParticleSystem_reactor_target_object_get(PointerRNA *ptr)
{
	ParticleSystem *data = (ParticleSystem *)(ptr->data);
	return rna_pointer_inherit_refine(ptr, &RNA_Object, data->target_ob);
}

void ParticleSystem_reactor_target_object_set(PointerRNA *ptr, PointerRNA value)
{
	ParticleSystem *data = (ParticleSystem *)(ptr->data);
	if (value.data)
		id_lib_extern((ID *)value.data);

	data->target_ob = value.data;
}

int ParticleSystem_reactor_target_particle_system_get(PointerRNA *ptr)
{
	ParticleSystem *data = (ParticleSystem *)(ptr->data);
	return (int)(data->target_psys);
}

void ParticleSystem_reactor_target_particle_system_set(PointerRNA *ptr, int value)
{
	ParticleSystem *data = (ParticleSystem *)(ptr->data);
	data->target_psys = CLAMPIS(value, 1, 32767);
}

int ParticleSystem_use_keyed_timing_get(PointerRNA *ptr)
{
	ParticleSystem *data = (ParticleSystem *)(ptr->data);
	return (((data->flag) & 8) != 0);
}

void ParticleSystem_use_keyed_timing_set(PointerRNA *ptr, int value)
{
	ParticleSystem *data = (ParticleSystem *)(ptr->data);
	if (value) data->flag |= 8;
	else data->flag &= ~8;
}

static PointerRNA ParticleSystem_targets_get(CollectionPropertyIterator *iter)
{
	return rna_pointer_inherit_refine(&iter->parent, &RNA_ParticleTarget, rna_iterator_listbase_get(iter));
}

void ParticleSystem_targets_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{
	ParticleSystem *data = (ParticleSystem *)(ptr->data);

	memset(iter, 0, sizeof(*iter));
	iter->parent = *ptr;
	iter->prop = (PropertyRNA *)&rna_ParticleSystem_targets;

	rna_iterator_listbase_begin(iter, &data->targets, NULL);

	if (iter->valid)
		iter->ptr = ParticleSystem_targets_get(iter);
}

void ParticleSystem_targets_next(CollectionPropertyIterator *iter)
{
	rna_iterator_listbase_next(iter);

	if (iter->valid)
		iter->ptr = ParticleSystem_targets_get(iter);
}

void ParticleSystem_targets_end(CollectionPropertyIterator *iter)
{
	rna_iterator_listbase_end(iter);
}

int ParticleSystem_targets_lookup_int(PointerRNA *ptr, int index, PointerRNA *r_ptr)
{
	int found = 0;
	CollectionPropertyIterator iter;

	ParticleSystem_targets_begin(&iter, ptr);

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
		if (found) *r_ptr = ParticleSystem_targets_get(&iter);
	}

	ParticleSystem_targets_end(&iter);

	return found;
}

int ParticleSystem_targets_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
	extern int ParticleTarget_name_length(PointerRNA *);
	extern void ParticleTarget_name_get(PointerRNA *, char *);

	bool found = false;
	CollectionPropertyIterator iter;
	char namebuf[1024];
	char *name;

	ParticleSystem_targets_begin(&iter, ptr);

	while (iter.valid) {
		if (iter.ptr.data) {
			int namelen = ParticleTarget_name_length(&iter.ptr);
			if (namelen < 1024) {
				ParticleTarget_name_get(&iter.ptr, namebuf);
				if (strcmp(namebuf, key) == 0) {
					found = true;
					*r_ptr = iter.ptr;
					break;
				}
			}
			else {
				name = MEM_mallocN(namelen+1, "name string");
				ParticleTarget_name_get(&iter.ptr, name);
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
		ParticleSystem_targets_next(&iter);
	}
	ParticleSystem_targets_end(&iter);

	return found;
}

PointerRNA ParticleSystem_active_particle_target_get(PointerRNA *ptr)
{
	return rna_ParticleSystem_active_particle_target_get(ptr);
}

int ParticleSystem_active_particle_target_index_get(PointerRNA *ptr)
{
	return rna_ParticleSystem_active_particle_target_index_get(ptr);
}

void ParticleSystem_active_particle_target_index_set(PointerRNA *ptr, int value)
{
	rna_ParticleSystem_active_particle_target_index_set(ptr, value);
}

void ParticleSystem_billboard_normal_uv_get(PointerRNA *ptr, char *value)
{
	ParticleSystem *data = (ParticleSystem *)(ptr->data);
	BLI_strncpy_utf8(value, data->bb_uvname[0], 32);
}

int ParticleSystem_billboard_normal_uv_length(PointerRNA *ptr)
{
	ParticleSystem *data = (ParticleSystem *)(ptr->data);
	return strlen(data->bb_uvname[0]);
}

void ParticleSystem_billboard_normal_uv_set(PointerRNA *ptr, const char *value)
{
	ParticleSystem *data = (ParticleSystem *)(ptr->data);
	BLI_strncpy_utf8(data->bb_uvname[0], value, 32);
}

void ParticleSystem_billboard_time_index_uv_get(PointerRNA *ptr, char *value)
{
	ParticleSystem *data = (ParticleSystem *)(ptr->data);
	BLI_strncpy_utf8(value, data->bb_uvname[1], 32);
}

int ParticleSystem_billboard_time_index_uv_length(PointerRNA *ptr)
{
	ParticleSystem *data = (ParticleSystem *)(ptr->data);
	return strlen(data->bb_uvname[1]);
}

void ParticleSystem_billboard_time_index_uv_set(PointerRNA *ptr, const char *value)
{
	ParticleSystem *data = (ParticleSystem *)(ptr->data);
	BLI_strncpy_utf8(data->bb_uvname[1], value, 32);
}

void ParticleSystem_billboard_split_uv_get(PointerRNA *ptr, char *value)
{
	ParticleSystem *data = (ParticleSystem *)(ptr->data);
	BLI_strncpy_utf8(value, data->bb_uvname[2], 32);
}

int ParticleSystem_billboard_split_uv_length(PointerRNA *ptr)
{
	ParticleSystem *data = (ParticleSystem *)(ptr->data);
	return strlen(data->bb_uvname[2]);
}

void ParticleSystem_billboard_split_uv_set(PointerRNA *ptr, const char *value)
{
	ParticleSystem *data = (ParticleSystem *)(ptr->data);
	BLI_strncpy_utf8(data->bb_uvname[2], value, 32);
}

void ParticleSystem_vertex_group_density_get(PointerRNA *ptr, char *value)
{
	rna_ParticleVGroup_name_get_0(ptr, value);
}

int ParticleSystem_vertex_group_density_length(PointerRNA *ptr)
{
	return rna_ParticleVGroup_name_len_0(ptr);
}

void ParticleSystem_vertex_group_density_set(PointerRNA *ptr, const char *value)
{
	rna_ParticleVGroup_name_set_0(ptr, value);
}

int ParticleSystem_invert_vertex_group_density_get(PointerRNA *ptr)
{
	ParticleSystem *data = (ParticleSystem *)(ptr->data);
	return (((data->vg_neg) & 1) != 0);
}

void ParticleSystem_invert_vertex_group_density_set(PointerRNA *ptr, int value)
{
	ParticleSystem *data = (ParticleSystem *)(ptr->data);
	if (value) data->vg_neg |= 1;
	else data->vg_neg &= ~1;
}

void ParticleSystem_vertex_group_velocity_get(PointerRNA *ptr, char *value)
{
	rna_ParticleVGroup_name_get_1(ptr, value);
}

int ParticleSystem_vertex_group_velocity_length(PointerRNA *ptr)
{
	return rna_ParticleVGroup_name_len_1(ptr);
}

void ParticleSystem_vertex_group_velocity_set(PointerRNA *ptr, const char *value)
{
	rna_ParticleVGroup_name_set_1(ptr, value);
}

int ParticleSystem_invert_vertex_group_velocity_get(PointerRNA *ptr)
{
	ParticleSystem *data = (ParticleSystem *)(ptr->data);
	return (((data->vg_neg) & 2) != 0);
}

void ParticleSystem_invert_vertex_group_velocity_set(PointerRNA *ptr, int value)
{
	ParticleSystem *data = (ParticleSystem *)(ptr->data);
	if (value) data->vg_neg |= 2;
	else data->vg_neg &= ~2;
}

void ParticleSystem_vertex_group_length_get(PointerRNA *ptr, char *value)
{
	rna_ParticleVGroup_name_get_2(ptr, value);
}

int ParticleSystem_vertex_group_length_length(PointerRNA *ptr)
{
	return rna_ParticleVGroup_name_len_2(ptr);
}

void ParticleSystem_vertex_group_length_set(PointerRNA *ptr, const char *value)
{
	rna_ParticleVGroup_name_set_2(ptr, value);
}

int ParticleSystem_invert_vertex_group_length_get(PointerRNA *ptr)
{
	ParticleSystem *data = (ParticleSystem *)(ptr->data);
	return (((data->vg_neg) & 4) != 0);
}

void ParticleSystem_invert_vertex_group_length_set(PointerRNA *ptr, int value)
{
	ParticleSystem *data = (ParticleSystem *)(ptr->data);
	if (value) data->vg_neg |= 4;
	else data->vg_neg &= ~4;
}

void ParticleSystem_vertex_group_clump_get(PointerRNA *ptr, char *value)
{
	rna_ParticleVGroup_name_get_3(ptr, value);
}

int ParticleSystem_vertex_group_clump_length(PointerRNA *ptr)
{
	return rna_ParticleVGroup_name_len_3(ptr);
}

void ParticleSystem_vertex_group_clump_set(PointerRNA *ptr, const char *value)
{
	rna_ParticleVGroup_name_set_3(ptr, value);
}

int ParticleSystem_invert_vertex_group_clump_get(PointerRNA *ptr)
{
	ParticleSystem *data = (ParticleSystem *)(ptr->data);
	return (((data->vg_neg) & 8) != 0);
}

void ParticleSystem_invert_vertex_group_clump_set(PointerRNA *ptr, int value)
{
	ParticleSystem *data = (ParticleSystem *)(ptr->data);
	if (value) data->vg_neg |= 8;
	else data->vg_neg &= ~8;
}

void ParticleSystem_vertex_group_kink_get(PointerRNA *ptr, char *value)
{
	rna_ParticleVGroup_name_get_4(ptr, value);
}

int ParticleSystem_vertex_group_kink_length(PointerRNA *ptr)
{
	return rna_ParticleVGroup_name_len_4(ptr);
}

void ParticleSystem_vertex_group_kink_set(PointerRNA *ptr, const char *value)
{
	rna_ParticleVGroup_name_set_4(ptr, value);
}

int ParticleSystem_invert_vertex_group_kink_get(PointerRNA *ptr)
{
	ParticleSystem *data = (ParticleSystem *)(ptr->data);
	return (((data->vg_neg) & 16) != 0);
}

void ParticleSystem_invert_vertex_group_kink_set(PointerRNA *ptr, int value)
{
	ParticleSystem *data = (ParticleSystem *)(ptr->data);
	if (value) data->vg_neg |= 16;
	else data->vg_neg &= ~16;
}

void ParticleSystem_vertex_group_roughness_1_get(PointerRNA *ptr, char *value)
{
	rna_ParticleVGroup_name_get_5(ptr, value);
}

int ParticleSystem_vertex_group_roughness_1_length(PointerRNA *ptr)
{
	return rna_ParticleVGroup_name_len_5(ptr);
}

void ParticleSystem_vertex_group_roughness_1_set(PointerRNA *ptr, const char *value)
{
	rna_ParticleVGroup_name_set_5(ptr, value);
}

int ParticleSystem_invert_vertex_group_roughness_1_get(PointerRNA *ptr)
{
	ParticleSystem *data = (ParticleSystem *)(ptr->data);
	return (((data->vg_neg) & 32) != 0);
}

void ParticleSystem_invert_vertex_group_roughness_1_set(PointerRNA *ptr, int value)
{
	ParticleSystem *data = (ParticleSystem *)(ptr->data);
	if (value) data->vg_neg |= 32;
	else data->vg_neg &= ~32;
}

void ParticleSystem_vertex_group_roughness_2_get(PointerRNA *ptr, char *value)
{
	rna_ParticleVGroup_name_get_6(ptr, value);
}

int ParticleSystem_vertex_group_roughness_2_length(PointerRNA *ptr)
{
	return rna_ParticleVGroup_name_len_6(ptr);
}

void ParticleSystem_vertex_group_roughness_2_set(PointerRNA *ptr, const char *value)
{
	rna_ParticleVGroup_name_set_6(ptr, value);
}

int ParticleSystem_invert_vertex_group_roughness_2_get(PointerRNA *ptr)
{
	ParticleSystem *data = (ParticleSystem *)(ptr->data);
	return (((data->vg_neg) & 64) != 0);
}

void ParticleSystem_invert_vertex_group_roughness_2_set(PointerRNA *ptr, int value)
{
	ParticleSystem *data = (ParticleSystem *)(ptr->data);
	if (value) data->vg_neg |= 64;
	else data->vg_neg &= ~64;
}

void ParticleSystem_vertex_group_roughness_end_get(PointerRNA *ptr, char *value)
{
	rna_ParticleVGroup_name_get_7(ptr, value);
}

int ParticleSystem_vertex_group_roughness_end_length(PointerRNA *ptr)
{
	return rna_ParticleVGroup_name_len_7(ptr);
}

void ParticleSystem_vertex_group_roughness_end_set(PointerRNA *ptr, const char *value)
{
	rna_ParticleVGroup_name_set_7(ptr, value);
}

int ParticleSystem_invert_vertex_group_roughness_end_get(PointerRNA *ptr)
{
	ParticleSystem *data = (ParticleSystem *)(ptr->data);
	return (((data->vg_neg) & 128) != 0);
}

void ParticleSystem_invert_vertex_group_roughness_end_set(PointerRNA *ptr, int value)
{
	ParticleSystem *data = (ParticleSystem *)(ptr->data);
	if (value) data->vg_neg |= 128;
	else data->vg_neg &= ~128;
}

void ParticleSystem_vertex_group_size_get(PointerRNA *ptr, char *value)
{
	rna_ParticleVGroup_name_get_8(ptr, value);
}

int ParticleSystem_vertex_group_size_length(PointerRNA *ptr)
{
	return rna_ParticleVGroup_name_len_8(ptr);
}

void ParticleSystem_vertex_group_size_set(PointerRNA *ptr, const char *value)
{
	rna_ParticleVGroup_name_set_8(ptr, value);
}

int ParticleSystem_invert_vertex_group_size_get(PointerRNA *ptr)
{
	ParticleSystem *data = (ParticleSystem *)(ptr->data);
	return (((data->vg_neg) & 256) != 0);
}

void ParticleSystem_invert_vertex_group_size_set(PointerRNA *ptr, int value)
{
	ParticleSystem *data = (ParticleSystem *)(ptr->data);
	if (value) data->vg_neg |= 256;
	else data->vg_neg &= ~256;
}

void ParticleSystem_vertex_group_tangent_get(PointerRNA *ptr, char *value)
{
	rna_ParticleVGroup_name_get_9(ptr, value);
}

int ParticleSystem_vertex_group_tangent_length(PointerRNA *ptr)
{
	return rna_ParticleVGroup_name_len_9(ptr);
}

void ParticleSystem_vertex_group_tangent_set(PointerRNA *ptr, const char *value)
{
	rna_ParticleVGroup_name_set_9(ptr, value);
}

int ParticleSystem_invert_vertex_group_tangent_get(PointerRNA *ptr)
{
	ParticleSystem *data = (ParticleSystem *)(ptr->data);
	return (((data->vg_neg) & 512) != 0);
}

void ParticleSystem_invert_vertex_group_tangent_set(PointerRNA *ptr, int value)
{
	ParticleSystem *data = (ParticleSystem *)(ptr->data);
	if (value) data->vg_neg |= 512;
	else data->vg_neg &= ~512;
}

void ParticleSystem_vertex_group_rotation_get(PointerRNA *ptr, char *value)
{
	rna_ParticleVGroup_name_get_10(ptr, value);
}

int ParticleSystem_vertex_group_rotation_length(PointerRNA *ptr)
{
	return rna_ParticleVGroup_name_len_10(ptr);
}

void ParticleSystem_vertex_group_rotation_set(PointerRNA *ptr, const char *value)
{
	rna_ParticleVGroup_name_set_10(ptr, value);
}

int ParticleSystem_invert_vertex_group_rotation_get(PointerRNA *ptr)
{
	ParticleSystem *data = (ParticleSystem *)(ptr->data);
	return (((data->vg_neg) & 1024) != 0);
}

void ParticleSystem_invert_vertex_group_rotation_set(PointerRNA *ptr, int value)
{
	ParticleSystem *data = (ParticleSystem *)(ptr->data);
	if (value) data->vg_neg |= 1024;
	else data->vg_neg &= ~1024;
}

void ParticleSystem_vertex_group_field_get(PointerRNA *ptr, char *value)
{
	rna_ParticleVGroup_name_get_11(ptr, value);
}

int ParticleSystem_vertex_group_field_length(PointerRNA *ptr)
{
	return rna_ParticleVGroup_name_len_11(ptr);
}

void ParticleSystem_vertex_group_field_set(PointerRNA *ptr, const char *value)
{
	rna_ParticleVGroup_name_set_11(ptr, value);
}

int ParticleSystem_invert_vertex_group_field_get(PointerRNA *ptr)
{
	ParticleSystem *data = (ParticleSystem *)(ptr->data);
	return (((data->vg_neg) & 2048) != 0);
}

void ParticleSystem_invert_vertex_group_field_set(PointerRNA *ptr, int value)
{
	ParticleSystem *data = (ParticleSystem *)(ptr->data);
	if (value) data->vg_neg |= 2048;
	else data->vg_neg &= ~2048;
}

PointerRNA ParticleSystem_point_cache_get(PointerRNA *ptr)
{
	ParticleSystem *data = (ParticleSystem *)(ptr->data);
	return rna_pointer_inherit_refine(ptr, &RNA_PointCache, data->pointcache);
}

int ParticleSystem_has_multiple_caches_get(PointerRNA *ptr)
{
	return rna_ParticleSystem_multiple_caches_get(ptr);
}

PointerRNA ParticleSystem_parent_get(PointerRNA *ptr)
{
	ParticleSystem *data = (ParticleSystem *)(ptr->data);
	return rna_pointer_inherit_refine(ptr, &RNA_Object, data->parent);
}

void ParticleSystem_parent_set(PointerRNA *ptr, PointerRNA value)
{
	ParticleSystem *data = (ParticleSystem *)(ptr->data);
	if (value.data)
		id_lib_extern((ID *)value.data);

	data->parent = value.data;
}

int ParticleSystem_is_editable_get(PointerRNA *ptr)
{
	return rna_ParticleSystem_editable_get(ptr);
}

int ParticleSystem_is_edited_get(PointerRNA *ptr)
{
	return rna_ParticleSystem_edited_get(ptr);
}

float ParticleSystem_dt_frac_get(PointerRNA *ptr)
{
	ParticleSystem *data = (ParticleSystem *)(ptr->data);
	return (float)(data->dt_frac);
}

int ParticleSettingsTextureSlot_texture_coords_get(PointerRNA *ptr)
{
	MTex *data = (MTex *)(ptr->data);
	return (int)(data->texco);
}

void ParticleSettingsTextureSlot_texture_coords_set(PointerRNA *ptr, int value)
{
	MTex *data = (MTex *)(ptr->data);
	data->texco = value;
}

PointerRNA ParticleSettingsTextureSlot_object_get(PointerRNA *ptr)
{
	MTex *data = (MTex *)(ptr->data);
	return rna_pointer_inherit_refine(ptr, &RNA_Object, data->object);
}

void ParticleSettingsTextureSlot_object_set(PointerRNA *ptr, PointerRNA value)
{
	MTex *data = (MTex *)(ptr->data);
	if (value.data)
		id_lib_extern((ID *)value.data);

	data->object = value.data;
}

void ParticleSettingsTextureSlot_uv_layer_get(PointerRNA *ptr, char *value)
{
	MTex *data = (MTex *)(ptr->data);
	BLI_strncpy_utf8(value, data->uvname, 64);
}

int ParticleSettingsTextureSlot_uv_layer_length(PointerRNA *ptr)
{
	MTex *data = (MTex *)(ptr->data);
	return strlen(data->uvname);
}

void ParticleSettingsTextureSlot_uv_layer_set(PointerRNA *ptr, const char *value)
{
	MTex *data = (MTex *)(ptr->data);
	BLI_strncpy_utf8(data->uvname, value, 64);
}

int ParticleSettingsTextureSlot_mapping_x_get(PointerRNA *ptr)
{
	MTex *data = (MTex *)(ptr->data);
	return (int)(data->projx);
}

void ParticleSettingsTextureSlot_mapping_x_set(PointerRNA *ptr, int value)
{
	MTex *data = (MTex *)(ptr->data);
	data->projx = value;
}

int ParticleSettingsTextureSlot_mapping_y_get(PointerRNA *ptr)
{
	MTex *data = (MTex *)(ptr->data);
	return (int)(data->projy);
}

void ParticleSettingsTextureSlot_mapping_y_set(PointerRNA *ptr, int value)
{
	MTex *data = (MTex *)(ptr->data);
	data->projy = value;
}

int ParticleSettingsTextureSlot_mapping_z_get(PointerRNA *ptr)
{
	MTex *data = (MTex *)(ptr->data);
	return (int)(data->projz);
}

void ParticleSettingsTextureSlot_mapping_z_set(PointerRNA *ptr, int value)
{
	MTex *data = (MTex *)(ptr->data);
	data->projz = value;
}

int ParticleSettingsTextureSlot_mapping_get(PointerRNA *ptr)
{
	MTex *data = (MTex *)(ptr->data);
	return (int)(data->mapping);
}

void ParticleSettingsTextureSlot_mapping_set(PointerRNA *ptr, int value)
{
	MTex *data = (MTex *)(ptr->data);
	data->mapping = value;
}

int ParticleSettingsTextureSlot_use_map_time_get(PointerRNA *ptr)
{
	MTex *data = (MTex *)(ptr->data);
	return (((data->mapto) & 1) != 0);
}

void ParticleSettingsTextureSlot_use_map_time_set(PointerRNA *ptr, int value)
{
	MTex *data = (MTex *)(ptr->data);
	if (value) data->mapto |= 1;
	else data->mapto &= ~1;
}

int ParticleSettingsTextureSlot_use_map_life_get(PointerRNA *ptr)
{
	MTex *data = (MTex *)(ptr->data);
	return (((data->mapto) & 2) != 0);
}

void ParticleSettingsTextureSlot_use_map_life_set(PointerRNA *ptr, int value)
{
	MTex *data = (MTex *)(ptr->data);
	if (value) data->mapto |= 2;
	else data->mapto &= ~2;
}

int ParticleSettingsTextureSlot_use_map_density_get(PointerRNA *ptr)
{
	MTex *data = (MTex *)(ptr->data);
	return (((data->mapto) & 4) != 0);
}

void ParticleSettingsTextureSlot_use_map_density_set(PointerRNA *ptr, int value)
{
	MTex *data = (MTex *)(ptr->data);
	if (value) data->mapto |= 4;
	else data->mapto &= ~4;
}

int ParticleSettingsTextureSlot_use_map_size_get(PointerRNA *ptr)
{
	MTex *data = (MTex *)(ptr->data);
	return (((data->mapto) & 8) != 0);
}

void ParticleSettingsTextureSlot_use_map_size_set(PointerRNA *ptr, int value)
{
	MTex *data = (MTex *)(ptr->data);
	if (value) data->mapto |= 8;
	else data->mapto &= ~8;
}

int ParticleSettingsTextureSlot_use_map_velocity_get(PointerRNA *ptr)
{
	MTex *data = (MTex *)(ptr->data);
	return (((data->mapto) & 32) != 0);
}

void ParticleSettingsTextureSlot_use_map_velocity_set(PointerRNA *ptr, int value)
{
	MTex *data = (MTex *)(ptr->data);
	if (value) data->mapto |= 32;
	else data->mapto &= ~32;
}

int ParticleSettingsTextureSlot_use_map_field_get(PointerRNA *ptr)
{
	MTex *data = (MTex *)(ptr->data);
	return (((data->mapto) & 64) != 0);
}

void ParticleSettingsTextureSlot_use_map_field_set(PointerRNA *ptr, int value)
{
	MTex *data = (MTex *)(ptr->data);
	if (value) data->mapto |= 64;
	else data->mapto &= ~64;
}

int ParticleSettingsTextureSlot_use_map_gravity_get(PointerRNA *ptr)
{
	MTex *data = (MTex *)(ptr->data);
	return (((data->mapto) & 1024) != 0);
}

void ParticleSettingsTextureSlot_use_map_gravity_set(PointerRNA *ptr, int value)
{
	MTex *data = (MTex *)(ptr->data);
	if (value) data->mapto |= 1024;
	else data->mapto &= ~1024;
}

int ParticleSettingsTextureSlot_use_map_damp_get(PointerRNA *ptr)
{
	MTex *data = (MTex *)(ptr->data);
	return (((data->mapto) & 2048) != 0);
}

void ParticleSettingsTextureSlot_use_map_damp_set(PointerRNA *ptr, int value)
{
	MTex *data = (MTex *)(ptr->data);
	if (value) data->mapto |= 2048;
	else data->mapto &= ~2048;
}

int ParticleSettingsTextureSlot_use_map_clump_get(PointerRNA *ptr)
{
	MTex *data = (MTex *)(ptr->data);
	return (((data->mapto) & 128) != 0);
}

void ParticleSettingsTextureSlot_use_map_clump_set(PointerRNA *ptr, int value)
{
	MTex *data = (MTex *)(ptr->data);
	if (value) data->mapto |= 128;
	else data->mapto &= ~128;
}

int ParticleSettingsTextureSlot_use_map_kink_get(PointerRNA *ptr)
{
	MTex *data = (MTex *)(ptr->data);
	return (((data->mapto) & 256) != 0);
}

void ParticleSettingsTextureSlot_use_map_kink_set(PointerRNA *ptr, int value)
{
	MTex *data = (MTex *)(ptr->data);
	if (value) data->mapto |= 256;
	else data->mapto &= ~256;
}

int ParticleSettingsTextureSlot_use_map_rough_get(PointerRNA *ptr)
{
	MTex *data = (MTex *)(ptr->data);
	return (((data->mapto) & 512) != 0);
}

void ParticleSettingsTextureSlot_use_map_rough_set(PointerRNA *ptr, int value)
{
	MTex *data = (MTex *)(ptr->data);
	if (value) data->mapto |= 512;
	else data->mapto &= ~512;
}

int ParticleSettingsTextureSlot_use_map_length_get(PointerRNA *ptr)
{
	MTex *data = (MTex *)(ptr->data);
	return (((data->mapto) & 16) != 0);
}

void ParticleSettingsTextureSlot_use_map_length_set(PointerRNA *ptr, int value)
{
	MTex *data = (MTex *)(ptr->data);
	if (value) data->mapto |= 16;
	else data->mapto &= ~16;
}

float ParticleSettingsTextureSlot_time_factor_get(PointerRNA *ptr)
{
	MTex *data = (MTex *)(ptr->data);
	return (float)(data->timefac);
}

void ParticleSettingsTextureSlot_time_factor_set(PointerRNA *ptr, float value)
{
	MTex *data = (MTex *)(ptr->data);
	data->timefac = value;
}

float ParticleSettingsTextureSlot_life_factor_get(PointerRNA *ptr)
{
	MTex *data = (MTex *)(ptr->data);
	return (float)(data->lifefac);
}

void ParticleSettingsTextureSlot_life_factor_set(PointerRNA *ptr, float value)
{
	MTex *data = (MTex *)(ptr->data);
	data->lifefac = value;
}

float ParticleSettingsTextureSlot_density_factor_get(PointerRNA *ptr)
{
	MTex *data = (MTex *)(ptr->data);
	return (float)(data->padensfac);
}

void ParticleSettingsTextureSlot_density_factor_set(PointerRNA *ptr, float value)
{
	MTex *data = (MTex *)(ptr->data);
	data->padensfac = value;
}

float ParticleSettingsTextureSlot_size_factor_get(PointerRNA *ptr)
{
	MTex *data = (MTex *)(ptr->data);
	return (float)(data->sizefac);
}

void ParticleSettingsTextureSlot_size_factor_set(PointerRNA *ptr, float value)
{
	MTex *data = (MTex *)(ptr->data);
	data->sizefac = value;
}

float ParticleSettingsTextureSlot_velocity_factor_get(PointerRNA *ptr)
{
	MTex *data = (MTex *)(ptr->data);
	return (float)(data->ivelfac);
}

void ParticleSettingsTextureSlot_velocity_factor_set(PointerRNA *ptr, float value)
{
	MTex *data = (MTex *)(ptr->data);
	data->ivelfac = value;
}

float ParticleSettingsTextureSlot_field_factor_get(PointerRNA *ptr)
{
	MTex *data = (MTex *)(ptr->data);
	return (float)(data->fieldfac);
}

void ParticleSettingsTextureSlot_field_factor_set(PointerRNA *ptr, float value)
{
	MTex *data = (MTex *)(ptr->data);
	data->fieldfac = value;
}

float ParticleSettingsTextureSlot_gravity_factor_get(PointerRNA *ptr)
{
	MTex *data = (MTex *)(ptr->data);
	return (float)(data->gravityfac);
}

void ParticleSettingsTextureSlot_gravity_factor_set(PointerRNA *ptr, float value)
{
	MTex *data = (MTex *)(ptr->data);
	data->gravityfac = value;
}

float ParticleSettingsTextureSlot_damp_factor_get(PointerRNA *ptr)
{
	MTex *data = (MTex *)(ptr->data);
	return (float)(data->dampfac);
}

void ParticleSettingsTextureSlot_damp_factor_set(PointerRNA *ptr, float value)
{
	MTex *data = (MTex *)(ptr->data);
	data->dampfac = value;
}

float ParticleSettingsTextureSlot_length_factor_get(PointerRNA *ptr)
{
	MTex *data = (MTex *)(ptr->data);
	return (float)(data->lengthfac);
}

void ParticleSettingsTextureSlot_length_factor_set(PointerRNA *ptr, float value)
{
	MTex *data = (MTex *)(ptr->data);
	data->lengthfac = value;
}

float ParticleSettingsTextureSlot_clump_factor_get(PointerRNA *ptr)
{
	MTex *data = (MTex *)(ptr->data);
	return (float)(data->clumpfac);
}

void ParticleSettingsTextureSlot_clump_factor_set(PointerRNA *ptr, float value)
{
	MTex *data = (MTex *)(ptr->data);
	data->clumpfac = value;
}

float ParticleSettingsTextureSlot_kink_factor_get(PointerRNA *ptr)
{
	MTex *data = (MTex *)(ptr->data);
	return (float)(data->kinkfac);
}

void ParticleSettingsTextureSlot_kink_factor_set(PointerRNA *ptr, float value)
{
	MTex *data = (MTex *)(ptr->data);
	data->kinkfac = value;
}

float ParticleSettingsTextureSlot_rough_factor_get(PointerRNA *ptr)
{
	MTex *data = (MTex *)(ptr->data);
	return (float)(data->roughfac);
}

void ParticleSettingsTextureSlot_rough_factor_set(PointerRNA *ptr, float value)
{
	MTex *data = (MTex *)(ptr->data);
	data->roughfac = value;
}

static PointerRNA ParticleSettings_texture_slots_get(CollectionPropertyIterator *iter)
{
	return rna_pointer_inherit_refine(&iter->parent, &RNA_ParticleSettingsTextureSlot, rna_iterator_array_dereference_get(iter));
}

void ParticleSettings_texture_slots_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

	memset(iter, 0, sizeof(*iter));
	iter->parent = *ptr;
	iter->prop = (PropertyRNA *)&rna_ParticleSettings_texture_slots;

	rna_ParticleSettings_mtex_begin(iter, ptr);

	if (iter->valid)
		iter->ptr = ParticleSettings_texture_slots_get(iter);
}

void ParticleSettings_texture_slots_next(CollectionPropertyIterator *iter)
{
	rna_iterator_array_next(iter);

	if (iter->valid)
		iter->ptr = ParticleSettings_texture_slots_get(iter);
}

void ParticleSettings_texture_slots_end(CollectionPropertyIterator *iter)
{
	rna_iterator_array_end(iter);
}

PointerRNA ParticleSettings_active_texture_get(PointerRNA *ptr)
{
	return rna_ParticleSettings_active_texture_get(ptr);
}

void ParticleSettings_active_texture_set(PointerRNA *ptr, PointerRNA value)
{
	rna_ParticleSettings_active_texture_set(ptr, value);
}

int ParticleSettings_active_texture_index_get(PointerRNA *ptr)
{
	ParticleSettings *data = (ParticleSettings *)(ptr->data);
	return (int)(data->texact);
}

void ParticleSettings_active_texture_index_set(PointerRNA *ptr, int value)
{
	ParticleSettings *data = (ParticleSettings *)(ptr->data);
	data->texact = CLAMPIS(value, 0, 17);
}

int ParticleSettings_is_fluid_get(PointerRNA *ptr)
{
	return rna_PartSettings_is_fluid_get(ptr);
}

int ParticleSettings_use_react_start_end_get(PointerRNA *ptr)
{
	ParticleSettings *data = (ParticleSettings *)(ptr->data);
	return (((data->flag) & 1) != 0);
}

void ParticleSettings_use_react_start_end_set(PointerRNA *ptr, int value)
{
	ParticleSettings *data = (ParticleSettings *)(ptr->data);
	if (value) data->flag |= 1;
	else data->flag &= ~1;
}

int ParticleSettings_use_react_multiple_get(PointerRNA *ptr)
{
	ParticleSettings *data = (ParticleSettings *)(ptr->data);
	return (((data->flag) & 2) != 0);
}

void ParticleSettings_use_react_multiple_set(PointerRNA *ptr, int value)
{
	ParticleSettings *data = (ParticleSettings *)(ptr->data);
	if (value) data->flag |= 2;
	else data->flag &= ~2;
}

int ParticleSettings_regrow_hair_get(PointerRNA *ptr)
{
	ParticleSettings *data = (ParticleSettings *)(ptr->data);
	return (((data->flag) & 16) != 0);
}

void ParticleSettings_regrow_hair_set(PointerRNA *ptr, int value)
{
	ParticleSettings *data = (ParticleSettings *)(ptr->data);
	if (value) data->flag |= 16;
	else data->flag &= ~16;
}

int ParticleSettings_show_unborn_get(PointerRNA *ptr)
{
	ParticleSettings *data = (ParticleSettings *)(ptr->data);
	return (((data->flag) & 32) != 0);
}

void ParticleSettings_show_unborn_set(PointerRNA *ptr, int value)
{
	ParticleSettings *data = (ParticleSettings *)(ptr->data);
	if (value) data->flag |= 32;
	else data->flag &= ~32;
}

int ParticleSettings_use_dead_get(PointerRNA *ptr)
{
	ParticleSettings *data = (ParticleSettings *)(ptr->data);
	return (((data->flag) & 64) != 0);
}

void ParticleSettings_use_dead_set(PointerRNA *ptr, int value)
{
	ParticleSettings *data = (ParticleSettings *)(ptr->data);
	if (value) data->flag |= 64;
	else data->flag &= ~64;
}

int ParticleSettings_use_emit_random_get(PointerRNA *ptr)
{
	ParticleSettings *data = (ParticleSettings *)(ptr->data);
	return (((data->flag) & 128) != 0);
}

void ParticleSettings_use_emit_random_set(PointerRNA *ptr, int value)
{
	ParticleSettings *data = (ParticleSettings *)(ptr->data);
	if (value) data->flag |= 128;
	else data->flag &= ~128;
}

int ParticleSettings_use_even_distribution_get(PointerRNA *ptr)
{
	ParticleSettings *data = (ParticleSettings *)(ptr->data);
	return (((data->flag) & 256) != 0);
}

void ParticleSettings_use_even_distribution_set(PointerRNA *ptr, int value)
{
	ParticleSettings *data = (ParticleSettings *)(ptr->data);
	if (value) data->flag |= 256;
	else data->flag &= ~256;
}

int ParticleSettings_use_die_on_collision_get(PointerRNA *ptr)
{
	ParticleSettings *data = (ParticleSettings *)(ptr->data);
	return (((data->flag) & 4096) != 0);
}

void ParticleSettings_use_die_on_collision_set(PointerRNA *ptr, int value)
{
	ParticleSettings *data = (ParticleSettings *)(ptr->data);
	if (value) data->flag |= 4096;
	else data->flag &= ~4096;
}

int ParticleSettings_use_size_deflect_get(PointerRNA *ptr)
{
	ParticleSettings *data = (ParticleSettings *)(ptr->data);
	return (((data->flag) & 8192) != 0);
}

void ParticleSettings_use_size_deflect_set(PointerRNA *ptr, int value)
{
	ParticleSettings *data = (ParticleSettings *)(ptr->data);
	if (value) data->flag |= 8192;
	else data->flag &= ~8192;
}

int ParticleSettings_use_rotations_get(PointerRNA *ptr)
{
	ParticleSettings *data = (ParticleSettings *)(ptr->data);
	return (((data->flag) & 512) != 0);
}

void ParticleSettings_use_rotations_set(PointerRNA *ptr, int value)
{
	ParticleSettings *data = (ParticleSettings *)(ptr->data);
	if (value) data->flag |= 512;
	else data->flag &= ~512;
}

int ParticleSettings_use_dynamic_rotation_get(PointerRNA *ptr)
{
	ParticleSettings *data = (ParticleSettings *)(ptr->data);
	return (((data->flag) & 16384) != 0);
}

void ParticleSettings_use_dynamic_rotation_set(PointerRNA *ptr, int value)
{
	ParticleSettings *data = (ParticleSettings *)(ptr->data);
	if (value) data->flag |= 16384;
	else data->flag &= ~16384;
}

int ParticleSettings_use_multiply_size_mass_get(PointerRNA *ptr)
{
	ParticleSettings *data = (ParticleSettings *)(ptr->data);
	return (((data->flag) & 65536) != 0);
}

void ParticleSettings_use_multiply_size_mass_set(PointerRNA *ptr, int value)
{
	ParticleSettings *data = (ParticleSettings *)(ptr->data);
	if (value) data->flag |= 65536;
	else data->flag &= ~65536;
}

int ParticleSettings_use_advanced_hair_get(PointerRNA *ptr)
{
	ParticleSettings *data = (ParticleSettings *)(ptr->data);
	return !(((data->flag) & 32768) != 0);
}

void ParticleSettings_use_advanced_hair_set(PointerRNA *ptr, int value)
{
	ParticleSettings *data = (ParticleSettings *)(ptr->data);
	if (!value) data->flag |= 32768;
	else data->flag &= ~32768;
}

int ParticleSettings_lock_boids_to_surface_get(PointerRNA *ptr)
{
	ParticleSettings *data = (ParticleSettings *)(ptr->data);
	return (((data->flag) & 524288) != 0);
}

void ParticleSettings_lock_boids_to_surface_set(PointerRNA *ptr, int value)
{
	ParticleSettings *data = (ParticleSettings *)(ptr->data);
	if (value) data->flag |= 524288;
	else data->flag &= ~524288;
}

int ParticleSettings_use_hair_bspline_get(PointerRNA *ptr)
{
	ParticleSettings *data = (ParticleSettings *)(ptr->data);
	return (((data->flag) & 1024) != 0);
}

void ParticleSettings_use_hair_bspline_set(PointerRNA *ptr, int value)
{
	ParticleSettings *data = (ParticleSettings *)(ptr->data);
	if (value) data->flag |= 1024;
	else data->flag &= ~1024;
}

int ParticleSettings_invert_grid_get(PointerRNA *ptr)
{
	ParticleSettings *data = (ParticleSettings *)(ptr->data);
	return (((data->flag) & 67108864) != 0);
}

void ParticleSettings_invert_grid_set(PointerRNA *ptr, int value)
{
	ParticleSettings *data = (ParticleSettings *)(ptr->data);
	if (value) data->flag |= 67108864;
	else data->flag &= ~67108864;
}

int ParticleSettings_hexagonal_grid_get(PointerRNA *ptr)
{
	ParticleSettings *data = (ParticleSettings *)(ptr->data);
	return (((data->flag) & 16777216) != 0);
}

void ParticleSettings_hexagonal_grid_set(PointerRNA *ptr, int value)
{
	ParticleSettings *data = (ParticleSettings *)(ptr->data);
	if (value) data->flag |= 16777216;
	else data->flag &= ~16777216;
}

int ParticleSettings_apply_effector_to_children_get(PointerRNA *ptr)
{
	ParticleSettings *data = (ParticleSettings *)(ptr->data);
	return (((data->flag) & 134217728) != 0);
}

void ParticleSettings_apply_effector_to_children_set(PointerRNA *ptr, int value)
{
	ParticleSettings *data = (ParticleSettings *)(ptr->data);
	if (value) data->flag |= 134217728;
	else data->flag &= ~134217728;
}

int ParticleSettings_create_long_hair_children_get(PointerRNA *ptr)
{
	ParticleSettings *data = (ParticleSettings *)(ptr->data);
	return (((data->flag) & 268435456) != 0);
}

void ParticleSettings_create_long_hair_children_set(PointerRNA *ptr, int value)
{
	ParticleSettings *data = (ParticleSettings *)(ptr->data);
	if (value) data->flag |= 268435456;
	else data->flag &= ~268435456;
}

int ParticleSettings_apply_guide_to_children_get(PointerRNA *ptr)
{
	ParticleSettings *data = (ParticleSettings *)(ptr->data);
	return (((data->flag) & 1073741824) != 0);
}

void ParticleSettings_apply_guide_to_children_set(PointerRNA *ptr, int value)
{
	ParticleSettings *data = (ParticleSettings *)(ptr->data);
	if (value) data->flag |= 1073741824;
	else data->flag &= ~1073741824;
}

int ParticleSettings_use_self_effect_get(PointerRNA *ptr)
{
	ParticleSettings *data = (ParticleSettings *)(ptr->data);
	return (((data->flag) & 4194304) != 0);
}

void ParticleSettings_use_self_effect_set(PointerRNA *ptr, int value)
{
	ParticleSettings *data = (ParticleSettings *)(ptr->data);
	if (value) data->flag |= 4194304;
	else data->flag &= ~4194304;
}

int ParticleSettings_type_get(PointerRNA *ptr)
{
	ParticleSettings *data = (ParticleSettings *)(ptr->data);
	return (int)(data->type);
}

void ParticleSettings_type_set(PointerRNA *ptr, int value)
{
	ParticleSettings *data = (ParticleSettings *)(ptr->data);
	data->type = value;
}

int ParticleSettings_emit_from_get(PointerRNA *ptr)
{
	ParticleSettings *data = (ParticleSettings *)(ptr->data);
	return (int)(data->from);
}

void ParticleSettings_emit_from_set(PointerRNA *ptr, int value)
{
	ParticleSettings *data = (ParticleSettings *)(ptr->data);
	data->from = value;
}

int ParticleSettings_distribution_get(PointerRNA *ptr)
{
	ParticleSettings *data = (ParticleSettings *)(ptr->data);
	return (int)(data->distr);
}

void ParticleSettings_distribution_set(PointerRNA *ptr, int value)
{
	ParticleSettings *data = (ParticleSettings *)(ptr->data);
	data->distr = value;
}

int ParticleSettings_physics_type_get(PointerRNA *ptr)
{
	ParticleSettings *data = (ParticleSettings *)(ptr->data);
	return (int)(data->phystype);
}

void ParticleSettings_physics_type_set(PointerRNA *ptr, int value)
{
	ParticleSettings *data = (ParticleSettings *)(ptr->data);
	data->phystype = value;
}

int ParticleSettings_rotation_mode_get(PointerRNA *ptr)
{
	ParticleSettings *data = (ParticleSettings *)(ptr->data);
	return (int)(data->rotmode);
}

void ParticleSettings_rotation_mode_set(PointerRNA *ptr, int value)
{
	ParticleSettings *data = (ParticleSettings *)(ptr->data);
	data->rotmode = value;
}

int ParticleSettings_angular_velocity_mode_get(PointerRNA *ptr)
{
	ParticleSettings *data = (ParticleSettings *)(ptr->data);
	return (int)(data->avemode);
}

void ParticleSettings_angular_velocity_mode_set(PointerRNA *ptr, int value)
{
	ParticleSettings *data = (ParticleSettings *)(ptr->data);
	data->avemode = value;
}

int ParticleSettings_react_event_get(PointerRNA *ptr)
{
	ParticleSettings *data = (ParticleSettings *)(ptr->data);
	return (int)(data->reactevent);
}

void ParticleSettings_react_event_set(PointerRNA *ptr, int value)
{
	ParticleSettings *data = (ParticleSettings *)(ptr->data);
	data->reactevent = value;
}

int ParticleSettings_show_velocity_get(PointerRNA *ptr)
{
	ParticleSettings *data = (ParticleSettings *)(ptr->data);
	return (((data->draw) & 1) != 0);
}

void ParticleSettings_show_velocity_set(PointerRNA *ptr, int value)
{
	ParticleSettings *data = (ParticleSettings *)(ptr->data);
	if (value) data->draw |= 1;
	else data->draw &= ~1;
}

int ParticleSettings_show_size_get(PointerRNA *ptr)
{
	ParticleSettings *data = (ParticleSettings *)(ptr->data);
	return (((data->draw) & 4) != 0);
}

void ParticleSettings_show_size_set(PointerRNA *ptr, int value)
{
	ParticleSettings *data = (ParticleSettings *)(ptr->data);
	if (value) data->draw |= 4;
	else data->draw &= ~4;
}

int ParticleSettings_use_render_emitter_get(PointerRNA *ptr)
{
	ParticleSettings *data = (ParticleSettings *)(ptr->data);
	return (((data->draw) & 8) != 0);
}

void ParticleSettings_use_render_emitter_set(PointerRNA *ptr, int value)
{
	ParticleSettings *data = (ParticleSettings *)(ptr->data);
	if (value) data->draw |= 8;
	else data->draw &= ~8;
}

int ParticleSettings_show_health_get(PointerRNA *ptr)
{
	ParticleSettings *data = (ParticleSettings *)(ptr->data);
	return (((data->draw) & 16) != 0);
}

void ParticleSettings_show_health_set(PointerRNA *ptr, int value)
{
	ParticleSettings *data = (ParticleSettings *)(ptr->data);
	if (value) data->draw |= 16;
	else data->draw &= ~16;
}

int ParticleSettings_use_absolute_path_time_get(PointerRNA *ptr)
{
	ParticleSettings *data = (ParticleSettings *)(ptr->data);
	return (((data->draw) & 32) != 0);
}

void ParticleSettings_use_absolute_path_time_set(PointerRNA *ptr, int value)
{
	ParticleSettings *data = (ParticleSettings *)(ptr->data);
	if (value) data->draw |= 32;
	else data->draw &= ~32;
}

int ParticleSettings_use_parent_particles_get(PointerRNA *ptr)
{
	ParticleSettings *data = (ParticleSettings *)(ptr->data);
	return (((data->draw) & 256) != 0);
}

void ParticleSettings_use_parent_particles_set(PointerRNA *ptr, int value)
{
	ParticleSettings *data = (ParticleSettings *)(ptr->data);
	if (value) data->draw |= 256;
	else data->draw &= ~256;
}

int ParticleSettings_show_number_get(PointerRNA *ptr)
{
	ParticleSettings *data = (ParticleSettings *)(ptr->data);
	return (((data->draw) & 512) != 0);
}

void ParticleSettings_show_number_set(PointerRNA *ptr, int value)
{
	ParticleSettings *data = (ParticleSettings *)(ptr->data);
	if (value) data->draw |= 512;
	else data->draw &= ~512;
}

int ParticleSettings_use_group_pick_random_get(PointerRNA *ptr)
{
	ParticleSettings *data = (ParticleSettings *)(ptr->data);
	return (((data->draw) & 1024) != 0);
}

void ParticleSettings_use_group_pick_random_set(PointerRNA *ptr, int value)
{
	ParticleSettings *data = (ParticleSettings *)(ptr->data);
	if (value) data->draw |= 1024;
	else data->draw &= ~1024;
}

int ParticleSettings_use_group_count_get(PointerRNA *ptr)
{
	ParticleSettings *data = (ParticleSettings *)(ptr->data);
	return (((data->draw) & 64) != 0);
}

void ParticleSettings_use_group_count_set(PointerRNA *ptr, int value)
{
	ParticleSettings *data = (ParticleSettings *)(ptr->data);
	if (value) data->draw |= 64;
	else data->draw &= ~64;
}

int ParticleSettings_use_global_dupli_get(PointerRNA *ptr)
{
	ParticleSettings *data = (ParticleSettings *)(ptr->data);
	return (((data->draw) & 2) != 0);
}

void ParticleSettings_use_global_dupli_set(PointerRNA *ptr, int value)
{
	ParticleSettings *data = (ParticleSettings *)(ptr->data);
	if (value) data->draw |= 2;
	else data->draw &= ~2;
}

int ParticleSettings_use_rotation_dupli_get(PointerRNA *ptr)
{
	ParticleSettings *data = (ParticleSettings *)(ptr->data);
	return (((data->draw) & 128) != 0);
}

void ParticleSettings_use_rotation_dupli_set(PointerRNA *ptr, int value)
{
	ParticleSettings *data = (ParticleSettings *)(ptr->data);
	if (value) data->draw |= 128;
	else data->draw &= ~128;
}

int ParticleSettings_use_scale_dupli_get(PointerRNA *ptr)
{
	ParticleSettings *data = (ParticleSettings *)(ptr->data);
	return !(((data->draw) & 65536) != 0);
}

void ParticleSettings_use_scale_dupli_set(PointerRNA *ptr, int value)
{
	ParticleSettings *data = (ParticleSettings *)(ptr->data);
	if (!value) data->draw |= 65536;
	else data->draw &= ~65536;
}

int ParticleSettings_use_render_adaptive_get(PointerRNA *ptr)
{
	ParticleSettings *data = (ParticleSettings *)(ptr->data);
	return (((data->draw) & 2048) != 0);
}

void ParticleSettings_use_render_adaptive_set(PointerRNA *ptr, int value)
{
	ParticleSettings *data = (ParticleSettings *)(ptr->data);
	if (value) data->draw |= 2048;
	else data->draw &= ~2048;
}

int ParticleSettings_use_velocity_length_get(PointerRNA *ptr)
{
	ParticleSettings *data = (ParticleSettings *)(ptr->data);
	return (((data->draw) & 4096) != 0);
}

void ParticleSettings_use_velocity_length_set(PointerRNA *ptr, int value)
{
	ParticleSettings *data = (ParticleSettings *)(ptr->data);
	if (value) data->draw |= 4096;
	else data->draw &= ~4096;
}

int ParticleSettings_use_whole_group_get(PointerRNA *ptr)
{
	ParticleSettings *data = (ParticleSettings *)(ptr->data);
	return (((data->draw) & 16384) != 0);
}

void ParticleSettings_use_whole_group_set(PointerRNA *ptr, int value)
{
	ParticleSettings *data = (ParticleSettings *)(ptr->data);
	if (value) data->draw |= 16384;
	else data->draw &= ~16384;
}

int ParticleSettings_use_strand_primitive_get(PointerRNA *ptr)
{
	ParticleSettings *data = (ParticleSettings *)(ptr->data);
	return (((data->draw) & 32768) != 0);
}

void ParticleSettings_use_strand_primitive_set(PointerRNA *ptr, int value)
{
	ParticleSettings *data = (ParticleSettings *)(ptr->data);
	if (value) data->draw |= 32768;
	else data->draw &= ~32768;
}

int ParticleSettings_draw_method_get(PointerRNA *ptr)
{
	ParticleSettings *data = (ParticleSettings *)(ptr->data);
	return (int)(data->draw_as);
}

void ParticleSettings_draw_method_set(PointerRNA *ptr, int value)
{
	ParticleSettings *data = (ParticleSettings *)(ptr->data);
	data->draw_as = value;
}

int ParticleSettings_render_type_get(PointerRNA *ptr)
{
	ParticleSettings *data = (ParticleSettings *)(ptr->data);
	return (int)(data->ren_as);
}

void ParticleSettings_render_type_set(PointerRNA *ptr, int value)
{
	ParticleSettings *data = (ParticleSettings *)(ptr->data);
	data->ren_as = value;
}

int ParticleSettings_draw_color_get(PointerRNA *ptr)
{
	ParticleSettings *data = (ParticleSettings *)(ptr->data);
	return (int)(data->draw_col);
}

void ParticleSettings_draw_color_set(PointerRNA *ptr, int value)
{
	ParticleSettings *data = (ParticleSettings *)(ptr->data);
	data->draw_col = value;
}

int ParticleSettings_draw_size_get(PointerRNA *ptr)
{
	ParticleSettings *data = (ParticleSettings *)(ptr->data);
	return (int)(data->draw_size);
}

void ParticleSettings_draw_size_set(PointerRNA *ptr, int value)
{
	ParticleSettings *data = (ParticleSettings *)(ptr->data);
	data->draw_size = CLAMPIS(value, 0, 1000);
}

int ParticleSettings_child_type_get(PointerRNA *ptr)
{
	ParticleSettings *data = (ParticleSettings *)(ptr->data);
	return (int)(data->childtype);
}

void ParticleSettings_child_type_set(PointerRNA *ptr, int value)
{
	ParticleSettings *data = (ParticleSettings *)(ptr->data);
	data->childtype = value;
}

int ParticleSettings_draw_step_get(PointerRNA *ptr)
{
	ParticleSettings *data = (ParticleSettings *)(ptr->data);
	return (int)(data->draw_step);
}

void ParticleSettings_draw_step_set(PointerRNA *ptr, int value)
{
	ParticleSettings *data = (ParticleSettings *)(ptr->data);
	data->draw_step = CLAMPIS(value, 0, 10);
}

int ParticleSettings_render_step_get(PointerRNA *ptr)
{
	ParticleSettings *data = (ParticleSettings *)(ptr->data);
	return (int)(data->ren_step);
}

void ParticleSettings_render_step_set(PointerRNA *ptr, int value)
{
	ParticleSettings *data = (ParticleSettings *)(ptr->data);
	data->ren_step = CLAMPIS(value, 0, 20);
}

int ParticleSettings_hair_step_get(PointerRNA *ptr)
{
	ParticleSettings *data = (ParticleSettings *)(ptr->data);
	return (int)(data->hair_step);
}

void ParticleSettings_hair_step_set(PointerRNA *ptr, int value)
{
	ParticleSettings *data = (ParticleSettings *)(ptr->data);
	data->hair_step = CLAMPIS(value, 2, 50);
}

int ParticleSettings_keys_step_get(PointerRNA *ptr)
{
	ParticleSettings *data = (ParticleSettings *)(ptr->data);
	return (int)(data->keys_step);
}

void ParticleSettings_keys_step_set(PointerRNA *ptr, int value)
{
	ParticleSettings *data = (ParticleSettings *)(ptr->data);
	data->keys_step = CLAMPIS(value, 0, 32767);
}

int ParticleSettings_adaptive_angle_get(PointerRNA *ptr)
{
	ParticleSettings *data = (ParticleSettings *)(ptr->data);
	return (int)(data->adapt_angle);
}

void ParticleSettings_adaptive_angle_set(PointerRNA *ptr, int value)
{
	ParticleSettings *data = (ParticleSettings *)(ptr->data);
	data->adapt_angle = CLAMPIS(value, 0, 45);
}

int ParticleSettings_adaptive_pixel_get(PointerRNA *ptr)
{
	ParticleSettings *data = (ParticleSettings *)(ptr->data);
	return (int)(data->adapt_pix);
}

void ParticleSettings_adaptive_pixel_set(PointerRNA *ptr, int value)
{
	ParticleSettings *data = (ParticleSettings *)(ptr->data);
	data->adapt_pix = CLAMPIS(value, 0, 50);
}

int ParticleSettings_draw_percentage_get(PointerRNA *ptr)
{
	ParticleSettings *data = (ParticleSettings *)(ptr->data);
	return (int)(data->disp);
}

void ParticleSettings_draw_percentage_set(PointerRNA *ptr, int value)
{
	ParticleSettings *data = (ParticleSettings *)(ptr->data);
	data->disp = CLAMPIS(value, 0, 100);
}

int ParticleSettings_material_get(PointerRNA *ptr)
{
	ParticleSettings *data = (ParticleSettings *)(ptr->data);
	return (int)(data->omat);
}

void ParticleSettings_material_set(PointerRNA *ptr, int value)
{
	ParticleSettings *data = (ParticleSettings *)(ptr->data);
	data->omat = CLAMPIS(value, 1, 32767);
}

int ParticleSettings_material_slot_get(PointerRNA *ptr)
{
	ParticleSettings *data = (ParticleSettings *)(ptr->data);
	return (int)(data->omat);
}

void ParticleSettings_material_slot_set(PointerRNA *ptr, int value)
{
	ParticleSettings *data = (ParticleSettings *)(ptr->data);
	data->omat = value;
}

int ParticleSettings_integrator_get(PointerRNA *ptr)
{
	ParticleSettings *data = (ParticleSettings *)(ptr->data);
	return (int)(data->integrator);
}

void ParticleSettings_integrator_set(PointerRNA *ptr, int value)
{
	ParticleSettings *data = (ParticleSettings *)(ptr->data);
	data->integrator = value;
}

int ParticleSettings_kink_get(PointerRNA *ptr)
{
	ParticleSettings *data = (ParticleSettings *)(ptr->data);
	return (int)(data->kink);
}

void ParticleSettings_kink_set(PointerRNA *ptr, int value)
{
	ParticleSettings *data = (ParticleSettings *)(ptr->data);
	data->kink = value;
}

int ParticleSettings_kink_axis_get(PointerRNA *ptr)
{
	ParticleSettings *data = (ParticleSettings *)(ptr->data);
	return (int)(data->kink_axis);
}

void ParticleSettings_kink_axis_set(PointerRNA *ptr, int value)
{
	ParticleSettings *data = (ParticleSettings *)(ptr->data);
	data->kink_axis = value;
}

int ParticleSettings_lock_billboard_get(PointerRNA *ptr)
{
	ParticleSettings *data = (ParticleSettings *)(ptr->data);
	return (((data->draw) & 128) != 0);
}

void ParticleSettings_lock_billboard_set(PointerRNA *ptr, int value)
{
	ParticleSettings *data = (ParticleSettings *)(ptr->data);
	if (value) data->draw |= 128;
	else data->draw &= ~128;
}

int ParticleSettings_billboard_align_get(PointerRNA *ptr)
{
	ParticleSettings *data = (ParticleSettings *)(ptr->data);
	return (int)(data->bb_align);
}

void ParticleSettings_billboard_align_set(PointerRNA *ptr, int value)
{
	ParticleSettings *data = (ParticleSettings *)(ptr->data);
	data->bb_align = value;
}

int ParticleSettings_billboard_uv_split_get(PointerRNA *ptr)
{
	ParticleSettings *data = (ParticleSettings *)(ptr->data);
	return (int)(data->bb_uv_split);
}

void ParticleSettings_billboard_uv_split_set(PointerRNA *ptr, int value)
{
	ParticleSettings *data = (ParticleSettings *)(ptr->data);
	data->bb_uv_split = CLAMPIS(value, 1, 100);
}

int ParticleSettings_billboard_animation_get(PointerRNA *ptr)
{
	ParticleSettings *data = (ParticleSettings *)(ptr->data);
	return (int)(data->bb_anim);
}

void ParticleSettings_billboard_animation_set(PointerRNA *ptr, int value)
{
	ParticleSettings *data = (ParticleSettings *)(ptr->data);
	data->bb_anim = value;
}

int ParticleSettings_billboard_offset_split_get(PointerRNA *ptr)
{
	ParticleSettings *data = (ParticleSettings *)(ptr->data);
	return (int)(data->bb_split_offset);
}

void ParticleSettings_billboard_offset_split_set(PointerRNA *ptr, int value)
{
	ParticleSettings *data = (ParticleSettings *)(ptr->data);
	data->bb_split_offset = value;
}

float ParticleSettings_billboard_tilt_get(PointerRNA *ptr)
{
	ParticleSettings *data = (ParticleSettings *)(ptr->data);
	return (float)(data->bb_tilt);
}

void ParticleSettings_billboard_tilt_set(PointerRNA *ptr, float value)
{
	ParticleSettings *data = (ParticleSettings *)(ptr->data);
	data->bb_tilt = CLAMPIS(value, -1.0f, 1.0f);
}

float ParticleSettings_color_maximum_get(PointerRNA *ptr)
{
	ParticleSettings *data = (ParticleSettings *)(ptr->data);
	return (float)(data->color_vec_max);
}

void ParticleSettings_color_maximum_set(PointerRNA *ptr, float value)
{
	ParticleSettings *data = (ParticleSettings *)(ptr->data);
	data->color_vec_max = CLAMPIS(value, 0.0099999998f, 100.0f);
}

float ParticleSettings_billboard_tilt_random_get(PointerRNA *ptr)
{
	ParticleSettings *data = (ParticleSettings *)(ptr->data);
	return (float)(data->bb_rand_tilt);
}

void ParticleSettings_billboard_tilt_random_set(PointerRNA *ptr, float value)
{
	ParticleSettings *data = (ParticleSettings *)(ptr->data);
	data->bb_rand_tilt = CLAMPIS(value, 0.0f, 1.0f);
}

void ParticleSettings_billboard_offset_get(PointerRNA *ptr, float values[2])
{
	ParticleSettings *data = (ParticleSettings *)(ptr->data);
	unsigned int i;

	for (i = 0; i < 2; i++) {
		values[i] = (float)(((float *)data->bb_offset)[i]);
	}
}

void ParticleSettings_billboard_offset_set(PointerRNA *ptr, const float values[2])
{
	ParticleSettings *data = (ParticleSettings *)(ptr->data);
	unsigned int i;

	for (i = 0; i < 2; i++) {
		((float *)data->bb_offset)[i] = CLAMPIS(values[i], -100.0f, 100.0f);
	}
}

void ParticleSettings_billboard_size_get(PointerRNA *ptr, float values[2])
{
	ParticleSettings *data = (ParticleSettings *)(ptr->data);
	unsigned int i;

	for (i = 0; i < 2; i++) {
		values[i] = (float)(((float *)data->bb_size)[i]);
	}
}

void ParticleSettings_billboard_size_set(PointerRNA *ptr, const float values[2])
{
	ParticleSettings *data = (ParticleSettings *)(ptr->data);
	unsigned int i;

	for (i = 0; i < 2; i++) {
		((float *)data->bb_size)[i] = CLAMPIS(values[i], 0.0010000000f, 10.0f);
	}
}

float ParticleSettings_billboard_velocity_head_get(PointerRNA *ptr)
{
	ParticleSettings *data = (ParticleSettings *)(ptr->data);
	return (float)(data->bb_vel_head);
}

void ParticleSettings_billboard_velocity_head_set(PointerRNA *ptr, float value)
{
	ParticleSettings *data = (ParticleSettings *)(ptr->data);
	data->bb_vel_head = CLAMPIS(value, 0.0f, 10.0f);
}

float ParticleSettings_billboard_velocity_tail_get(PointerRNA *ptr)
{
	ParticleSettings *data = (ParticleSettings *)(ptr->data);
	return (float)(data->bb_vel_tail);
}

void ParticleSettings_billboard_velocity_tail_set(PointerRNA *ptr, float value)
{
	ParticleSettings *data = (ParticleSettings *)(ptr->data);
	data->bb_vel_tail = CLAMPIS(value, 0.0f, 10.0f);
}

int ParticleSettings_use_simplify_get(PointerRNA *ptr)
{
	ParticleSettings *data = (ParticleSettings *)(ptr->data);
	return (((data->simplify_flag) & 1) != 0);
}

void ParticleSettings_use_simplify_set(PointerRNA *ptr, int value)
{
	ParticleSettings *data = (ParticleSettings *)(ptr->data);
	if (value) data->simplify_flag |= 1;
	else data->simplify_flag &= ~1;
}

int ParticleSettings_use_simplify_viewport_get(PointerRNA *ptr)
{
	ParticleSettings *data = (ParticleSettings *)(ptr->data);
	return (((data->simplify_flag) & 2) != 0);
}

void ParticleSettings_use_simplify_viewport_set(PointerRNA *ptr, int value)
{
	ParticleSettings *data = (ParticleSettings *)(ptr->data);
	if (value) data->simplify_flag |= 2;
	else data->simplify_flag &= ~2;
}

int ParticleSettings_simplify_refsize_get(PointerRNA *ptr)
{
	ParticleSettings *data = (ParticleSettings *)(ptr->data);
	return (int)(data->simplify_refsize);
}

void ParticleSettings_simplify_refsize_set(PointerRNA *ptr, int value)
{
	ParticleSettings *data = (ParticleSettings *)(ptr->data);
	data->simplify_refsize = CLAMPIS(value, 1, 32767);
}

float ParticleSettings_simplify_rate_get(PointerRNA *ptr)
{
	ParticleSettings *data = (ParticleSettings *)(ptr->data);
	return (float)(data->simplify_rate);
}

void ParticleSettings_simplify_rate_set(PointerRNA *ptr, float value)
{
	ParticleSettings *data = (ParticleSettings *)(ptr->data);
	data->simplify_rate = CLAMPIS(value, 0.0f, 1.0f);
}

float ParticleSettings_simplify_transition_get(PointerRNA *ptr)
{
	ParticleSettings *data = (ParticleSettings *)(ptr->data);
	return (float)(data->simplify_transition);
}

void ParticleSettings_simplify_transition_set(PointerRNA *ptr, float value)
{
	ParticleSettings *data = (ParticleSettings *)(ptr->data);
	data->simplify_transition = CLAMPIS(value, 0.0f, 1.0f);
}

float ParticleSettings_simplify_viewport_get(PointerRNA *ptr)
{
	ParticleSettings *data = (ParticleSettings *)(ptr->data);
	return (float)(data->simplify_viewport);
}

void ParticleSettings_simplify_viewport_set(PointerRNA *ptr, float value)
{
	ParticleSettings *data = (ParticleSettings *)(ptr->data);
	data->simplify_viewport = CLAMPIS(value, 0.0f, 0.9990000129f);
}

float ParticleSettings_frame_start_get(PointerRNA *ptr)
{
	ParticleSettings *data = (ParticleSettings *)(ptr->data);
	return (float)(data->sta);
}

void ParticleSettings_frame_start_set(PointerRNA *ptr, float value)
{
	rna_PartSettings_start_set(ptr, value);
}

float ParticleSettings_frame_end_get(PointerRNA *ptr)
{
	ParticleSettings *data = (ParticleSettings *)(ptr->data);
	return (float)(data->end);
}

void ParticleSettings_frame_end_set(PointerRNA *ptr, float value)
{
	rna_PartSettings_end_set(ptr, value);
}

float ParticleSettings_lifetime_get(PointerRNA *ptr)
{
	ParticleSettings *data = (ParticleSettings *)(ptr->data);
	return (float)(data->lifetime);
}

void ParticleSettings_lifetime_set(PointerRNA *ptr, float value)
{
	ParticleSettings *data = (ParticleSettings *)(ptr->data);
	data->lifetime = CLAMPIS(value, 1.0f, 300000.0f);
}

float ParticleSettings_lifetime_random_get(PointerRNA *ptr)
{
	ParticleSettings *data = (ParticleSettings *)(ptr->data);
	return (float)(data->randlife);
}

void ParticleSettings_lifetime_random_set(PointerRNA *ptr, float value)
{
	ParticleSettings *data = (ParticleSettings *)(ptr->data);
	data->randlife = CLAMPIS(value, 0.0f, 1.0f);
}

float ParticleSettings_time_tweak_get(PointerRNA *ptr)
{
	ParticleSettings *data = (ParticleSettings *)(ptr->data);
	return (float)(data->timetweak);
}

void ParticleSettings_time_tweak_set(PointerRNA *ptr, float value)
{
	ParticleSettings *data = (ParticleSettings *)(ptr->data);
	data->timetweak = CLAMPIS(value, 0.0f, 100.0f);
}

float ParticleSettings_timestep_get(PointerRNA *ptr)
{
	return rna_PartSettings_timestep_get(ptr);
}

void ParticleSettings_timestep_set(PointerRNA *ptr, float value)
{
	rna_PartSetings_timestep_set(ptr, value);
}

int ParticleSettings_use_adaptive_subframes_get(PointerRNA *ptr)
{
	ParticleSettings *data = (ParticleSettings *)(ptr->data);
	return (((data->time_flag) & 1) != 0);
}

void ParticleSettings_use_adaptive_subframes_set(PointerRNA *ptr, int value)
{
	ParticleSettings *data = (ParticleSettings *)(ptr->data);
	if (value) data->time_flag |= 1;
	else data->time_flag &= ~1;
}

int ParticleSettings_subframes_get(PointerRNA *ptr)
{
	ParticleSettings *data = (ParticleSettings *)(ptr->data);
	return (int)(data->subframes);
}

void ParticleSettings_subframes_set(PointerRNA *ptr, int value)
{
	ParticleSettings *data = (ParticleSettings *)(ptr->data);
	data->subframes = CLAMPIS(value, 0, 1000);
}

float ParticleSettings_courant_target_get(PointerRNA *ptr)
{
	ParticleSettings *data = (ParticleSettings *)(ptr->data);
	return (float)(data->courant_target);
}

void ParticleSettings_courant_target_set(PointerRNA *ptr, float value)
{
	ParticleSettings *data = (ParticleSettings *)(ptr->data);
	data->courant_target = CLAMPIS(value, 0.0001000000f, 10.0f);
}

float ParticleSettings_jitter_factor_get(PointerRNA *ptr)
{
	ParticleSettings *data = (ParticleSettings *)(ptr->data);
	return (float)(data->jitfac);
}

void ParticleSettings_jitter_factor_set(PointerRNA *ptr, float value)
{
	ParticleSettings *data = (ParticleSettings *)(ptr->data);
	data->jitfac = CLAMPIS(value, 0.0f, 2.0f);
}

float ParticleSettings_effect_hair_get(PointerRNA *ptr)
{
	ParticleSettings *data = (ParticleSettings *)(ptr->data);
	return (float)(data->eff_hair);
}

void ParticleSettings_effect_hair_set(PointerRNA *ptr, float value)
{
	ParticleSettings *data = (ParticleSettings *)(ptr->data);
	data->eff_hair = CLAMPIS(value, 0.0f, 1.0f);
}

int ParticleSettings_count_get(PointerRNA *ptr)
{
	ParticleSettings *data = (ParticleSettings *)(ptr->data);
	return (int)(data->totpart);
}

void ParticleSettings_count_set(PointerRNA *ptr, int value)
{
	ParticleSettings *data = (ParticleSettings *)(ptr->data);
	data->totpart = CLAMPIS(value, 0, 10000000);
}

int ParticleSettings_userjit_get(PointerRNA *ptr)
{
	ParticleSettings *data = (ParticleSettings *)(ptr->data);
	return (int)(data->userjit);
}

void ParticleSettings_userjit_set(PointerRNA *ptr, int value)
{
	ParticleSettings *data = (ParticleSettings *)(ptr->data);
	data->userjit = CLAMPIS(value, 0, 1000);
}

int ParticleSettings_grid_resolution_get(PointerRNA *ptr)
{
	ParticleSettings *data = (ParticleSettings *)(ptr->data);
	return (int)(data->grid_res);
}

void ParticleSettings_grid_resolution_set(PointerRNA *ptr, int value)
{
	ParticleSettings *data = (ParticleSettings *)(ptr->data);
	data->grid_res = CLAMPIS(value, 1, 250);
}

float ParticleSettings_grid_random_get(PointerRNA *ptr)
{
	ParticleSettings *data = (ParticleSettings *)(ptr->data);
	return (float)(data->grid_rand);
}

void ParticleSettings_grid_random_set(PointerRNA *ptr, float value)
{
	ParticleSettings *data = (ParticleSettings *)(ptr->data);
	data->grid_rand = CLAMPIS(value, 0.0f, 1.0f);
}

int ParticleSettings_effector_amount_get(PointerRNA *ptr)
{
	ParticleSettings *data = (ParticleSettings *)(ptr->data);
	return (int)(data->effector_amount);
}

void ParticleSettings_effector_amount_set(PointerRNA *ptr, int value)
{
	ParticleSettings *data = (ParticleSettings *)(ptr->data);
	data->effector_amount = CLAMPIS(value, 0, 10000);
}

float ParticleSettings_normal_factor_get(PointerRNA *ptr)
{
	ParticleSettings *data = (ParticleSettings *)(ptr->data);
	return (float)(data->normfac);
}

void ParticleSettings_normal_factor_set(PointerRNA *ptr, float value)
{
	ParticleSettings *data = (ParticleSettings *)(ptr->data);
	data->normfac = CLAMPIS(value, -1000.0f, 1000.0f);
}

float ParticleSettings_object_factor_get(PointerRNA *ptr)
{
	ParticleSettings *data = (ParticleSettings *)(ptr->data);
	return (float)(data->obfac);
}

void ParticleSettings_object_factor_set(PointerRNA *ptr, float value)
{
	ParticleSettings *data = (ParticleSettings *)(ptr->data);
	data->obfac = CLAMPIS(value, -200.0f, 200.0f);
}

float ParticleSettings_factor_random_get(PointerRNA *ptr)
{
	ParticleSettings *data = (ParticleSettings *)(ptr->data);
	return (float)(data->randfac);
}

void ParticleSettings_factor_random_set(PointerRNA *ptr, float value)
{
	ParticleSettings *data = (ParticleSettings *)(ptr->data);
	data->randfac = CLAMPIS(value, 0.0f, 200.0f);
}

float ParticleSettings_particle_factor_get(PointerRNA *ptr)
{
	ParticleSettings *data = (ParticleSettings *)(ptr->data);
	return (float)(data->partfac);
}

void ParticleSettings_particle_factor_set(PointerRNA *ptr, float value)
{
	ParticleSettings *data = (ParticleSettings *)(ptr->data);
	data->partfac = CLAMPIS(value, -200.0f, 200.0f);
}

float ParticleSettings_tangent_factor_get(PointerRNA *ptr)
{
	ParticleSettings *data = (ParticleSettings *)(ptr->data);
	return (float)(data->tanfac);
}

void ParticleSettings_tangent_factor_set(PointerRNA *ptr, float value)
{
	ParticleSettings *data = (ParticleSettings *)(ptr->data);
	data->tanfac = CLAMPIS(value, -1000.0f, 1000.0f);
}

float ParticleSettings_tangent_phase_get(PointerRNA *ptr)
{
	ParticleSettings *data = (ParticleSettings *)(ptr->data);
	return (float)(data->tanphase);
}

void ParticleSettings_tangent_phase_set(PointerRNA *ptr, float value)
{
	ParticleSettings *data = (ParticleSettings *)(ptr->data);
	data->tanphase = CLAMPIS(value, -1.0f, 1.0f);
}

float ParticleSettings_reactor_factor_get(PointerRNA *ptr)
{
	ParticleSettings *data = (ParticleSettings *)(ptr->data);
	return (float)(data->reactfac);
}

void ParticleSettings_reactor_factor_set(PointerRNA *ptr, float value)
{
	ParticleSettings *data = (ParticleSettings *)(ptr->data);
	data->reactfac = CLAMPIS(value, -10.0f, 10.0f);
}

void ParticleSettings_object_align_factor_get(PointerRNA *ptr, float values[3])
{
	ParticleSettings *data = (ParticleSettings *)(ptr->data);
	unsigned int i;

	for (i = 0; i < 3; i++) {
		values[i] = (float)(((float *)data->ob_vel)[i]);
	}
}

void ParticleSettings_object_align_factor_set(PointerRNA *ptr, const float values[3])
{
	ParticleSettings *data = (ParticleSettings *)(ptr->data);
	unsigned int i;

	for (i = 0; i < 3; i++) {
		((float *)data->ob_vel)[i] = CLAMPIS(values[i], -200.0f, 200.0f);
	}
}

float ParticleSettings_angular_velocity_factor_get(PointerRNA *ptr)
{
	ParticleSettings *data = (ParticleSettings *)(ptr->data);
	return (float)(data->avefac);
}

void ParticleSettings_angular_velocity_factor_set(PointerRNA *ptr, float value)
{
	ParticleSettings *data = (ParticleSettings *)(ptr->data);
	data->avefac = CLAMPIS(value, -200.0f, 200.0f);
}

float ParticleSettings_phase_factor_get(PointerRNA *ptr)
{
	ParticleSettings *data = (ParticleSettings *)(ptr->data);
	return (float)(data->phasefac);
}

void ParticleSettings_phase_factor_set(PointerRNA *ptr, float value)
{
	ParticleSettings *data = (ParticleSettings *)(ptr->data);
	data->phasefac = CLAMPIS(value, -1.0f, 1.0f);
}

float ParticleSettings_rotation_factor_random_get(PointerRNA *ptr)
{
	ParticleSettings *data = (ParticleSettings *)(ptr->data);
	return (float)(data->randrotfac);
}

void ParticleSettings_rotation_factor_random_set(PointerRNA *ptr, float value)
{
	ParticleSettings *data = (ParticleSettings *)(ptr->data);
	data->randrotfac = CLAMPIS(value, 0.0f, 1.0f);
}

float ParticleSettings_phase_factor_random_get(PointerRNA *ptr)
{
	ParticleSettings *data = (ParticleSettings *)(ptr->data);
	return (float)(data->randphasefac);
}

void ParticleSettings_phase_factor_random_set(PointerRNA *ptr, float value)
{
	ParticleSettings *data = (ParticleSettings *)(ptr->data);
	data->randphasefac = CLAMPIS(value, 0.0f, 1.0f);
}

float ParticleSettings_hair_length_get(PointerRNA *ptr)
{
	return rna_PartSetting_hairlength_get(ptr);
}

void ParticleSettings_hair_length_set(PointerRNA *ptr, float value)
{
	rna_PartSetting_hairlength_set(ptr, value);
}

float ParticleSettings_mass_get(PointerRNA *ptr)
{
	ParticleSettings *data = (ParticleSettings *)(ptr->data);
	return (float)(data->mass);
}

void ParticleSettings_mass_set(PointerRNA *ptr, float value)
{
	ParticleSettings *data = (ParticleSettings *)(ptr->data);
	data->mass = CLAMPIS(value, 0.0000000100f, 100000.0f);
}

float ParticleSettings_particle_size_get(PointerRNA *ptr)
{
	ParticleSettings *data = (ParticleSettings *)(ptr->data);
	return (float)(data->size);
}

void ParticleSettings_particle_size_set(PointerRNA *ptr, float value)
{
	ParticleSettings *data = (ParticleSettings *)(ptr->data);
	data->size = CLAMPIS(value, 0.0010000000f, 100000.0f);
}

float ParticleSettings_size_random_get(PointerRNA *ptr)
{
	ParticleSettings *data = (ParticleSettings *)(ptr->data);
	return (float)(data->randsize);
}

void ParticleSettings_size_random_set(PointerRNA *ptr, float value)
{
	ParticleSettings *data = (ParticleSettings *)(ptr->data);
	data->randsize = CLAMPIS(value, 0.0f, 1.0f);
}

float ParticleSettings_drag_factor_get(PointerRNA *ptr)
{
	ParticleSettings *data = (ParticleSettings *)(ptr->data);
	return (float)(data->dragfac);
}

void ParticleSettings_drag_factor_set(PointerRNA *ptr, float value)
{
	ParticleSettings *data = (ParticleSettings *)(ptr->data);
	data->dragfac = CLAMPIS(value, 0.0f, 1.0f);
}

float ParticleSettings_brownian_factor_get(PointerRNA *ptr)
{
	ParticleSettings *data = (ParticleSettings *)(ptr->data);
	return (float)(data->brownfac);
}

void ParticleSettings_brownian_factor_set(PointerRNA *ptr, float value)
{
	ParticleSettings *data = (ParticleSettings *)(ptr->data);
	data->brownfac = CLAMPIS(value, 0.0f, 200.0f);
}

float ParticleSettings_damping_get(PointerRNA *ptr)
{
	ParticleSettings *data = (ParticleSettings *)(ptr->data);
	return (float)(data->dampfac);
}

void ParticleSettings_damping_set(PointerRNA *ptr, float value)
{
	ParticleSettings *data = (ParticleSettings *)(ptr->data);
	data->dampfac = CLAMPIS(value, 0.0f, 1.0f);
}

float ParticleSettings_length_random_get(PointerRNA *ptr)
{
	ParticleSettings *data = (ParticleSettings *)(ptr->data);
	return (float)(data->randlength);
}

void ParticleSettings_length_random_set(PointerRNA *ptr, float value)
{
	ParticleSettings *data = (ParticleSettings *)(ptr->data);
	data->randlength = CLAMPIS(value, 0.0f, 1.0f);
}

int ParticleSettings_child_nbr_get(PointerRNA *ptr)
{
	ParticleSettings *data = (ParticleSettings *)(ptr->data);
	return (int)(data->child_nbr);
}

void ParticleSettings_child_nbr_set(PointerRNA *ptr, int value)
{
	ParticleSettings *data = (ParticleSettings *)(ptr->data);
	data->child_nbr = CLAMPIS(value, 0, 100000);
}

int ParticleSettings_rendered_child_count_get(PointerRNA *ptr)
{
	ParticleSettings *data = (ParticleSettings *)(ptr->data);
	return (int)(data->ren_child_nbr);
}

void ParticleSettings_rendered_child_count_set(PointerRNA *ptr, int value)
{
	ParticleSettings *data = (ParticleSettings *)(ptr->data);
	data->ren_child_nbr = CLAMPIS(value, 0, 100000);
}

float ParticleSettings_virtual_parents_get(PointerRNA *ptr)
{
	ParticleSettings *data = (ParticleSettings *)(ptr->data);
	return (float)(data->parents);
}

void ParticleSettings_virtual_parents_set(PointerRNA *ptr, float value)
{
	ParticleSettings *data = (ParticleSettings *)(ptr->data);
	data->parents = CLAMPIS(value, 0.0f, 1.0f);
}

float ParticleSettings_child_size_get(PointerRNA *ptr)
{
	ParticleSettings *data = (ParticleSettings *)(ptr->data);
	return (float)(data->childsize);
}

void ParticleSettings_child_size_set(PointerRNA *ptr, float value)
{
	ParticleSettings *data = (ParticleSettings *)(ptr->data);
	data->childsize = CLAMPIS(value, 0.0010000000f, 100000.0f);
}

float ParticleSettings_child_size_random_get(PointerRNA *ptr)
{
	ParticleSettings *data = (ParticleSettings *)(ptr->data);
	return (float)(data->childrandsize);
}

void ParticleSettings_child_size_random_set(PointerRNA *ptr, float value)
{
	ParticleSettings *data = (ParticleSettings *)(ptr->data);
	data->childrandsize = CLAMPIS(value, 0.0f, 1.0f);
}

float ParticleSettings_child_radius_get(PointerRNA *ptr)
{
	ParticleSettings *data = (ParticleSettings *)(ptr->data);
	return (float)(data->childrad);
}

void ParticleSettings_child_radius_set(PointerRNA *ptr, float value)
{
	ParticleSettings *data = (ParticleSettings *)(ptr->data);
	data->childrad = CLAMPIS(value, 0.0f, 10.0f);
}

float ParticleSettings_child_roundness_get(PointerRNA *ptr)
{
	ParticleSettings *data = (ParticleSettings *)(ptr->data);
	return (float)(data->childflat);
}

void ParticleSettings_child_roundness_set(PointerRNA *ptr, float value)
{
	ParticleSettings *data = (ParticleSettings *)(ptr->data);
	data->childflat = CLAMPIS(value, 0.0f, 1.0f);
}

float ParticleSettings_clump_factor_get(PointerRNA *ptr)
{
	ParticleSettings *data = (ParticleSettings *)(ptr->data);
	return (float)(data->clumpfac);
}

void ParticleSettings_clump_factor_set(PointerRNA *ptr, float value)
{
	ParticleSettings *data = (ParticleSettings *)(ptr->data);
	data->clumpfac = CLAMPIS(value, -1.0f, 1.0f);
}

float ParticleSettings_clump_shape_get(PointerRNA *ptr)
{
	ParticleSettings *data = (ParticleSettings *)(ptr->data);
	return (float)(data->clumppow);
}

void ParticleSettings_clump_shape_set(PointerRNA *ptr, float value)
{
	ParticleSettings *data = (ParticleSettings *)(ptr->data);
	data->clumppow = CLAMPIS(value, -0.9990000129f, 0.9990000129f);
}

float ParticleSettings_kink_amplitude_get(PointerRNA *ptr)
{
	ParticleSettings *data = (ParticleSettings *)(ptr->data);
	return (float)(data->kink_amp);
}

void ParticleSettings_kink_amplitude_set(PointerRNA *ptr, float value)
{
	ParticleSettings *data = (ParticleSettings *)(ptr->data);
	data->kink_amp = CLAMPIS(value, -100000.0f, 100000.0f);
}

float ParticleSettings_kink_amplitude_clump_get(PointerRNA *ptr)
{
	ParticleSettings *data = (ParticleSettings *)(ptr->data);
	return (float)(data->kink_amp_clump);
}

void ParticleSettings_kink_amplitude_clump_set(PointerRNA *ptr, float value)
{
	ParticleSettings *data = (ParticleSettings *)(ptr->data);
	data->kink_amp_clump = CLAMPIS(value, 0.0f, 1.0f);
}

float ParticleSettings_kink_frequency_get(PointerRNA *ptr)
{
	ParticleSettings *data = (ParticleSettings *)(ptr->data);
	return (float)(data->kink_freq);
}

void ParticleSettings_kink_frequency_set(PointerRNA *ptr, float value)
{
	ParticleSettings *data = (ParticleSettings *)(ptr->data);
	data->kink_freq = CLAMPIS(value, -100000.0f, 100000.0f);
}

float ParticleSettings_kink_shape_get(PointerRNA *ptr)
{
	ParticleSettings *data = (ParticleSettings *)(ptr->data);
	return (float)(data->kink_shape);
}

void ParticleSettings_kink_shape_set(PointerRNA *ptr, float value)
{
	ParticleSettings *data = (ParticleSettings *)(ptr->data);
	data->kink_shape = CLAMPIS(value, -0.9990000129f, 0.9990000129f);
}

float ParticleSettings_kink_flat_get(PointerRNA *ptr)
{
	ParticleSettings *data = (ParticleSettings *)(ptr->data);
	return (float)(data->kink_flat);
}

void ParticleSettings_kink_flat_set(PointerRNA *ptr, float value)
{
	ParticleSettings *data = (ParticleSettings *)(ptr->data);
	data->kink_flat = CLAMPIS(value, 0.0f, 1.0f);
}

float ParticleSettings_roughness_1_get(PointerRNA *ptr)
{
	ParticleSettings *data = (ParticleSettings *)(ptr->data);
	return (float)(data->rough1);
}

void ParticleSettings_roughness_1_set(PointerRNA *ptr, float value)
{
	ParticleSettings *data = (ParticleSettings *)(ptr->data);
	data->rough1 = CLAMPIS(value, 0.0f, 100000.0f);
}

float ParticleSettings_roughness_1_size_get(PointerRNA *ptr)
{
	ParticleSettings *data = (ParticleSettings *)(ptr->data);
	return (float)(data->rough1_size);
}

void ParticleSettings_roughness_1_size_set(PointerRNA *ptr, float value)
{
	ParticleSettings *data = (ParticleSettings *)(ptr->data);
	data->rough1_size = CLAMPIS(value, 0.0099999998f, 100000.0f);
}

float ParticleSettings_roughness_2_get(PointerRNA *ptr)
{
	ParticleSettings *data = (ParticleSettings *)(ptr->data);
	return (float)(data->rough2);
}

void ParticleSettings_roughness_2_set(PointerRNA *ptr, float value)
{
	ParticleSettings *data = (ParticleSettings *)(ptr->data);
	data->rough2 = CLAMPIS(value, 0.0f, 100000.0f);
}

float ParticleSettings_roughness_2_size_get(PointerRNA *ptr)
{
	ParticleSettings *data = (ParticleSettings *)(ptr->data);
	return (float)(data->rough2_size);
}

void ParticleSettings_roughness_2_size_set(PointerRNA *ptr, float value)
{
	ParticleSettings *data = (ParticleSettings *)(ptr->data);
	data->rough2_size = CLAMPIS(value, 0.0099999998f, 100000.0f);
}

float ParticleSettings_roughness_2_threshold_get(PointerRNA *ptr)
{
	ParticleSettings *data = (ParticleSettings *)(ptr->data);
	return (float)(data->rough2_thres);
}

void ParticleSettings_roughness_2_threshold_set(PointerRNA *ptr, float value)
{
	ParticleSettings *data = (ParticleSettings *)(ptr->data);
	data->rough2_thres = CLAMPIS(value, 0.0f, 1.0f);
}

float ParticleSettings_roughness_endpoint_get(PointerRNA *ptr)
{
	ParticleSettings *data = (ParticleSettings *)(ptr->data);
	return (float)(data->rough_end);
}

void ParticleSettings_roughness_endpoint_set(PointerRNA *ptr, float value)
{
	ParticleSettings *data = (ParticleSettings *)(ptr->data);
	data->rough_end = CLAMPIS(value, 0.0f, 100000.0f);
}

float ParticleSettings_roughness_end_shape_get(PointerRNA *ptr)
{
	ParticleSettings *data = (ParticleSettings *)(ptr->data);
	return (float)(data->rough_end_shape);
}

void ParticleSettings_roughness_end_shape_set(PointerRNA *ptr, float value)
{
	ParticleSettings *data = (ParticleSettings *)(ptr->data);
	data->rough_end_shape = CLAMPIS(value, 0.0f, 10.0f);
}

float ParticleSettings_child_length_get(PointerRNA *ptr)
{
	ParticleSettings *data = (ParticleSettings *)(ptr->data);
	return (float)(data->clength);
}

void ParticleSettings_child_length_set(PointerRNA *ptr, float value)
{
	ParticleSettings *data = (ParticleSettings *)(ptr->data);
	data->clength = CLAMPIS(value, 0.0f, 1.0f);
}

float ParticleSettings_child_length_threshold_get(PointerRNA *ptr)
{
	ParticleSettings *data = (ParticleSettings *)(ptr->data);
	return (float)(data->clength_thres);
}

void ParticleSettings_child_length_threshold_set(PointerRNA *ptr, float value)
{
	ParticleSettings *data = (ParticleSettings *)(ptr->data);
	data->clength_thres = CLAMPIS(value, 0.0f, 1.0f);
}

float ParticleSettings_child_parting_factor_get(PointerRNA *ptr)
{
	ParticleSettings *data = (ParticleSettings *)(ptr->data);
	return (float)(data->parting_fac);
}

void ParticleSettings_child_parting_factor_set(PointerRNA *ptr, float value)
{
	ParticleSettings *data = (ParticleSettings *)(ptr->data);
	data->parting_fac = CLAMPIS(value, 0.0f, 1.0f);
}

float ParticleSettings_child_parting_min_get(PointerRNA *ptr)
{
	ParticleSettings *data = (ParticleSettings *)(ptr->data);
	return (float)(data->parting_min);
}

void ParticleSettings_child_parting_min_set(PointerRNA *ptr, float value)
{
	ParticleSettings *data = (ParticleSettings *)(ptr->data);
	data->parting_min = CLAMPIS(value, 0.0f, 180.0f);
}

float ParticleSettings_child_parting_max_get(PointerRNA *ptr)
{
	ParticleSettings *data = (ParticleSettings *)(ptr->data);
	return (float)(data->parting_max);
}

void ParticleSettings_child_parting_max_set(PointerRNA *ptr, float value)
{
	ParticleSettings *data = (ParticleSettings *)(ptr->data);
	data->parting_max = CLAMPIS(value, 0.0f, 180.0f);
}

float ParticleSettings_branch_threshold_get(PointerRNA *ptr)
{
	ParticleSettings *data = (ParticleSettings *)(ptr->data);
	return (float)(data->branch_thres);
}

void ParticleSettings_branch_threshold_set(PointerRNA *ptr, float value)
{
	ParticleSettings *data = (ParticleSettings *)(ptr->data);
	data->branch_thres = CLAMPIS(value, 0.0f, 1.0f);
}

float ParticleSettings_line_length_tail_get(PointerRNA *ptr)
{
	return rna_PartSetting_linelentail_get(ptr);
}

void ParticleSettings_line_length_tail_set(PointerRNA *ptr, float value)
{
	rna_PartSetting_linelentail_set(ptr, value);
}

float ParticleSettings_line_length_head_get(PointerRNA *ptr)
{
	return rna_PartSetting_linelenhead_get(ptr);
}

void ParticleSettings_line_length_head_set(PointerRNA *ptr, float value)
{
	rna_PartSetting_linelenhead_set(ptr, value);
}

float ParticleSettings_path_start_get(PointerRNA *ptr)
{
	ParticleSettings *data = (ParticleSettings *)(ptr->data);
	return (float)(data->path_start);
}

void ParticleSettings_path_start_set(PointerRNA *ptr, float value)
{
	ParticleSettings *data = (ParticleSettings *)(ptr->data);
	float prop_clamp_min = -FLT_MAX, prop_clamp_max = FLT_MAX, prop_soft_min, prop_soft_max;
	rna_PartSetting_pathstartend_range(ptr, &prop_clamp_min, &prop_clamp_max, &prop_soft_min, &prop_soft_max);
	data->path_start = CLAMPIS(value, prop_clamp_min, prop_clamp_max);}

float ParticleSettings_path_end_get(PointerRNA *ptr)
{
	ParticleSettings *data = (ParticleSettings *)(ptr->data);
	return (float)(data->path_end);
}

void ParticleSettings_path_end_set(PointerRNA *ptr, float value)
{
	ParticleSettings *data = (ParticleSettings *)(ptr->data);
	float prop_clamp_min = -FLT_MAX, prop_clamp_max = FLT_MAX, prop_soft_min, prop_soft_max;
	rna_PartSetting_pathstartend_range(ptr, &prop_clamp_min, &prop_clamp_max, &prop_soft_min, &prop_soft_max);
	data->path_end = CLAMPIS(value, prop_clamp_min, prop_clamp_max);}

int ParticleSettings_trail_count_get(PointerRNA *ptr)
{
	ParticleSettings *data = (ParticleSettings *)(ptr->data);
	return (int)(data->trail_count);
}

void ParticleSettings_trail_count_set(PointerRNA *ptr, int value)
{
	ParticleSettings *data = (ParticleSettings *)(ptr->data);
	data->trail_count = CLAMPIS(value, 1, 100000);
}

int ParticleSettings_keyed_loops_get(PointerRNA *ptr)
{
	ParticleSettings *data = (ParticleSettings *)(ptr->data);
	return (int)(data->keyed_loops);
}

void ParticleSettings_keyed_loops_set(PointerRNA *ptr, int value)
{
	ParticleSettings *data = (ParticleSettings *)(ptr->data);
	data->keyed_loops = CLAMPIS(value, 1, 10000);
}

int ParticleSettings_use_modifier_stack_get(PointerRNA *ptr)
{
	ParticleSettings *data = (ParticleSettings *)(ptr->data);
	return (int)(data->use_modifier_stack);
}

void ParticleSettings_use_modifier_stack_set(PointerRNA *ptr, int value)
{
	ParticleSettings *data = (ParticleSettings *)(ptr->data);
	data->use_modifier_stack = value;
}

PointerRNA ParticleSettings_dupli_group_get(PointerRNA *ptr)
{
	ParticleSettings *data = (ParticleSettings *)(ptr->data);
	return rna_pointer_inherit_refine(ptr, &RNA_Group, data->dup_group);
}

void ParticleSettings_dupli_group_set(PointerRNA *ptr, PointerRNA value)
{
	ParticleSettings *data = (ParticleSettings *)(ptr->data);
	if (value.data)
		id_lib_extern((ID *)value.data);

	data->dup_group = value.data;
}

static PointerRNA ParticleSettings_dupli_weights_get(CollectionPropertyIterator *iter)
{
	return rna_pointer_inherit_refine(&iter->parent, &RNA_ParticleDupliWeight, rna_iterator_listbase_get(iter));
}

void ParticleSettings_dupli_weights_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{
	ParticleSettings *data = (ParticleSettings *)(ptr->data);

	memset(iter, 0, sizeof(*iter));
	iter->parent = *ptr;
	iter->prop = (PropertyRNA *)&rna_ParticleSettings_dupli_weights;

	rna_iterator_listbase_begin(iter, &data->dupliweights, NULL);

	if (iter->valid)
		iter->ptr = ParticleSettings_dupli_weights_get(iter);
}

void ParticleSettings_dupli_weights_next(CollectionPropertyIterator *iter)
{
	rna_iterator_listbase_next(iter);

	if (iter->valid)
		iter->ptr = ParticleSettings_dupli_weights_get(iter);
}

void ParticleSettings_dupli_weights_end(CollectionPropertyIterator *iter)
{
	rna_iterator_listbase_end(iter);
}

int ParticleSettings_dupli_weights_lookup_int(PointerRNA *ptr, int index, PointerRNA *r_ptr)
{
	int found = 0;
	CollectionPropertyIterator iter;

	ParticleSettings_dupli_weights_begin(&iter, ptr);

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
		if (found) *r_ptr = ParticleSettings_dupli_weights_get(&iter);
	}

	ParticleSettings_dupli_weights_end(&iter);

	return found;
}

int ParticleSettings_dupli_weights_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
	extern int ParticleDupliWeight_name_length(PointerRNA *);
	extern void ParticleDupliWeight_name_get(PointerRNA *, char *);

	bool found = false;
	CollectionPropertyIterator iter;
	char namebuf[1024];
	char *name;

	ParticleSettings_dupli_weights_begin(&iter, ptr);

	while (iter.valid) {
		if (iter.ptr.data) {
			int namelen = ParticleDupliWeight_name_length(&iter.ptr);
			if (namelen < 1024) {
				ParticleDupliWeight_name_get(&iter.ptr, namebuf);
				if (strcmp(namebuf, key) == 0) {
					found = true;
					*r_ptr = iter.ptr;
					break;
				}
			}
			else {
				name = MEM_mallocN(namelen+1, "name string");
				ParticleDupliWeight_name_get(&iter.ptr, name);
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
		ParticleSettings_dupli_weights_next(&iter);
	}
	ParticleSettings_dupli_weights_end(&iter);

	return found;
}

PointerRNA ParticleSettings_active_dupliweight_get(PointerRNA *ptr)
{
	return rna_ParticleDupliWeight_active_get(ptr);
}

int ParticleSettings_active_dupliweight_index_get(PointerRNA *ptr)
{
	return rna_ParticleDupliWeight_active_index_get(ptr);
}

void ParticleSettings_active_dupliweight_index_set(PointerRNA *ptr, int value)
{
	rna_ParticleDupliWeight_active_index_set(ptr, value);
}

PointerRNA ParticleSettings_dupli_object_get(PointerRNA *ptr)
{
	ParticleSettings *data = (ParticleSettings *)(ptr->data);
	return rna_pointer_inherit_refine(ptr, &RNA_Object, data->dup_ob);
}

void ParticleSettings_dupli_object_set(PointerRNA *ptr, PointerRNA value)
{
	ParticleSettings *data = (ParticleSettings *)(ptr->data);
	if (value.data)
		id_lib_extern((ID *)value.data);

	data->dup_ob = value.data;
}

PointerRNA ParticleSettings_billboard_object_get(PointerRNA *ptr)
{
	ParticleSettings *data = (ParticleSettings *)(ptr->data);
	return rna_pointer_inherit_refine(ptr, &RNA_Object, data->bb_ob);
}

void ParticleSettings_billboard_object_set(PointerRNA *ptr, PointerRNA value)
{
	ParticleSettings *data = (ParticleSettings *)(ptr->data);
	if (value.data)
		id_lib_extern((ID *)value.data);

	data->bb_ob = value.data;
}

PointerRNA ParticleSettings_boids_get(PointerRNA *ptr)
{
	ParticleSettings *data = (ParticleSettings *)(ptr->data);
	return rna_pointer_inherit_refine(ptr, &RNA_BoidSettings, data->boids);
}

PointerRNA ParticleSettings_fluid_get(PointerRNA *ptr)
{
	ParticleSettings *data = (ParticleSettings *)(ptr->data);
	return rna_pointer_inherit_refine(ptr, &RNA_SPHFluidSettings, data->fluid);
}

PointerRNA ParticleSettings_effector_weights_get(PointerRNA *ptr)
{
	ParticleSettings *data = (ParticleSettings *)(ptr->data);
	return rna_pointer_inherit_refine(ptr, &RNA_EffectorWeights, data->effector_weights);
}

PointerRNA ParticleSettings_animation_data_get(PointerRNA *ptr)
{
	ParticleSettings *data = (ParticleSettings *)(ptr->data);
	return rna_pointer_inherit_refine(ptr, &RNA_AnimData, data->adt);
}

PointerRNA ParticleSettings_force_field_1_get(PointerRNA *ptr)
{
	return rna_Particle_field1_get(ptr);
}

PointerRNA ParticleSettings_force_field_2_get(PointerRNA *ptr)
{
	return rna_Particle_field2_get(ptr);
}

static PointerRNA ParticleSettingsTextureSlots_rna_properties_get(CollectionPropertyIterator *iter)
{
	return rna_builtin_properties_get(iter);
}

void ParticleSettingsTextureSlots_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

	memset(iter, 0, sizeof(*iter));
	iter->parent = *ptr;
	iter->prop = (PropertyRNA *)&rna_ParticleSettingsTextureSlots_rna_properties;

	rna_builtin_properties_begin(iter, ptr);

	if (iter->valid)
		iter->ptr = ParticleSettingsTextureSlots_rna_properties_get(iter);
}

void ParticleSettingsTextureSlots_rna_properties_next(CollectionPropertyIterator *iter)
{
	rna_builtin_properties_next(iter);

	if (iter->valid)
		iter->ptr = ParticleSettingsTextureSlots_rna_properties_get(iter);
}

void ParticleSettingsTextureSlots_rna_properties_end(CollectionPropertyIterator *iter)
{
	rna_iterator_listbase_end(iter);
}

int ParticleSettingsTextureSlots_rna_properties_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
	return rna_builtin_properties_lookup_string(ptr, key, r_ptr);
}

PointerRNA ParticleSettingsTextureSlots_rna_type_get(PointerRNA *ptr)
{
	return rna_builtin_type_get(ptr);
}



void ParticleHairKey_co_object(struct HairKey *_self, struct Object *object, struct ParticleSystemModifierData *modifier, struct ParticleData *particle, float co[3])
{
	rna_ParticleHairKey_co_object(_self, object, modifier, particle, co);
}

void ParticleHairKey_co_object_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	struct HairKey *_self;
	struct Object *object;
	struct ParticleSystemModifierData *modifier;
	struct ParticleData *particle;
	float *co;
	char *_data;
	
	_self = (struct HairKey *)_ptr->data;
	_data = (char *)_parms->data;
	object = *((struct Object **)_data);
#if defined(SPEC_ILP32)
	_data += 4;
#else
	_data += 8;
#endif
	modifier = *((struct ParticleSystemModifierData **)_data);
#if defined(SPEC_ILP32)
	_data += 4;
#else
	_data += 8;
#endif
	particle = *((struct ParticleData **)_data);
#if defined(SPEC_ILP32)
	_data += 4;
#else
	_data += 8;
#endif
	co = ((float *)_data);
	
	rna_ParticleHairKey_co_object(_self, object, modifier, particle, co);
}

/* Repeated prototypes to detect errors */

void rna_ParticleHairKey_co_object(struct HairKey *_self, struct Object *object, struct ParticleSystemModifierData *modifier, struct ParticleData *particle, float co[3]);



void Particle_uv_on_emitter(struct ParticleData *_self, ReportList *reports, struct ParticleSystemModifierData *modifier, float uv[2])
{
	rna_Particle_uv_on_emitter(_self, reports, modifier, uv);
}

void Particle_uv_on_emitter_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	struct ParticleData *_self;
	struct ParticleSystemModifierData *modifier;
	float *uv;
	char *_data;
	
	_self = (struct ParticleData *)_ptr->data;
	_data = (char *)_parms->data;
	modifier = *((struct ParticleSystemModifierData **)_data);
#if defined(SPEC_ILP32)
	_data += 4;
#else
	_data += 8;
#endif
	uv = ((float *)_data);
	
	rna_Particle_uv_on_emitter(_self, reports, modifier, uv);
}

/* Repeated prototypes to detect errors */

void rna_Particle_uv_on_emitter(struct ParticleData *_self, ReportList *reports, struct ParticleSystemModifierData *modifier, float uv[2]);


void ParticleSystem_set_resolution(struct ParticleSystem *_self, struct Scene *scene, struct Object *object, int resolution)
{
	rna_ParticleSystem_set_resolution(_self, scene, object, resolution);
}

void ParticleSystem_set_resolution_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	struct ParticleSystem *_self;
	struct Scene *scene;
	struct Object *object;
	int resolution;
	char *_data;
	
	_self = (struct ParticleSystem *)_ptr->data;
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
	resolution = *((int *)_data);
	
	rna_ParticleSystem_set_resolution(_self, scene, object, resolution);
}

void ParticleSystem_co_hair(struct ParticleSystem *_self, struct Object *object, int particle_no, int step, float co[3])
{
	rna_ParticleSystem_co_hair(_self, object, particle_no, step, co);
}

void ParticleSystem_co_hair_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	struct ParticleSystem *_self;
	struct Object *object;
	int particle_no;
	int step;
	float *co;
	char *_data;
	
	_self = (struct ParticleSystem *)_ptr->data;
	_data = (char *)_parms->data;
	object = *((struct Object **)_data);
#if defined(SPEC_ILP32)
	_data += 4;
#else
	_data += 8;
#endif
	particle_no = *((int *)_data);
	_data += 4;
	step = *((int *)_data);
	_data += 4;
	co = ((float *)_data);
	
	rna_ParticleSystem_co_hair(_self, object, particle_no, step, co);
}

void ParticleSystem_uv_on_emitter(struct ParticleSystem *_self, ReportList *reports, struct ParticleSystemModifierData *modifier, struct ParticleData *particle, int particle_no, int uv_no, float uv[2])
{
	rna_ParticleSystem_uv_on_emitter(_self, reports, modifier, particle, particle_no, uv_no, uv);
}

void ParticleSystem_uv_on_emitter_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	struct ParticleSystem *_self;
	struct ParticleSystemModifierData *modifier;
	struct ParticleData *particle;
	int particle_no;
	int uv_no;
	float *uv;
	char *_data;
	
	_self = (struct ParticleSystem *)_ptr->data;
	_data = (char *)_parms->data;
	modifier = *((struct ParticleSystemModifierData **)_data);
#if defined(SPEC_ILP32)
	_data += 4;
#else
	_data += 8;
#endif
	particle = *((struct ParticleData **)_data);
#if defined(SPEC_ILP32)
	_data += 4;
#else
	_data += 8;
#endif
	particle_no = *((int *)_data);
	_data += 4;
	uv_no = *((int *)_data);
	_data += 4;
	uv = ((float *)_data);
	
	rna_ParticleSystem_uv_on_emitter(_self, reports, modifier, particle, particle_no, uv_no, uv);
}

void ParticleSystem_mcol_on_emitter(struct ParticleSystem *_self, ReportList *reports, struct ParticleSystemModifierData *modifier, struct ParticleData *particle, int particle_no, int vcol_no, float mcol[3])
{
	rna_ParticleSystem_mcol_on_emitter(_self, reports, modifier, particle, particle_no, vcol_no, mcol);
}

void ParticleSystem_mcol_on_emitter_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	struct ParticleSystem *_self;
	struct ParticleSystemModifierData *modifier;
	struct ParticleData *particle;
	int particle_no;
	int vcol_no;
	float *mcol;
	char *_data;
	
	_self = (struct ParticleSystem *)_ptr->data;
	_data = (char *)_parms->data;
	modifier = *((struct ParticleSystemModifierData **)_data);
#if defined(SPEC_ILP32)
	_data += 4;
#else
	_data += 8;
#endif
	particle = *((struct ParticleData **)_data);
#if defined(SPEC_ILP32)
	_data += 4;
#else
	_data += 8;
#endif
	particle_no = *((int *)_data);
	_data += 4;
	vcol_no = *((int *)_data);
	_data += 4;
	mcol = ((float *)_data);
	
	rna_ParticleSystem_mcol_on_emitter(_self, reports, modifier, particle, particle_no, vcol_no, mcol);
}

/* Repeated prototypes to detect errors */

void rna_ParticleSystem_set_resolution(struct ParticleSystem *_self, struct Scene *scene, struct Object *object, int resolution);
void rna_ParticleSystem_co_hair(struct ParticleSystem *_self, struct Object *object, int particle_no, int step, float co[3]);
void rna_ParticleSystem_uv_on_emitter(struct ParticleSystem *_self, ReportList *reports, struct ParticleSystemModifierData *modifier, struct ParticleData *particle, int particle_no, int uv_no, float uv[2]);
void rna_ParticleSystem_mcol_on_emitter(struct ParticleSystem *_self, ReportList *reports, struct ParticleSystemModifierData *modifier, struct ParticleData *particle, int particle_no, int vcol_no, float mcol[3]);



struct MTex *ParticleSettingsTextureSlots_add(struct ID *_selfid, bContext *C, ReportList *reports)
{
	return rna_mtex_texture_slots_add(_selfid, C, reports);
}

void ParticleSettingsTextureSlots_add_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
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

struct MTex *ParticleSettingsTextureSlots_create(struct ID *_selfid, bContext *C, ReportList *reports, int index)
{
	return rna_mtex_texture_slots_create(_selfid, C, reports, index);
}

void ParticleSettingsTextureSlots_create_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
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

void ParticleSettingsTextureSlots_clear(struct ID *_selfid, bContext *C, ReportList *reports, int index)
{
	rna_mtex_texture_slots_clear(_selfid, C, reports, index);
}

void ParticleSettingsTextureSlots_clear_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
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

/* Particle Target */
CollectionPropertyRNA rna_ParticleTarget_rna_properties = {
	{(PropertyRNA *)&rna_ParticleTarget_rna_type, NULL,
	-1, "rna_properties", 128, "Properties",
	"RNA property collection",
	0, "*",
	PROP_COLLECTION, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	ParticleTarget_rna_properties_begin, ParticleTarget_rna_properties_next, ParticleTarget_rna_properties_end, ParticleTarget_rna_properties_get, NULL, NULL, ParticleTarget_rna_properties_lookup_string, NULL, &RNA_Property
};

PointerPropertyRNA rna_ParticleTarget_rna_type = {
	{(PropertyRNA *)&rna_ParticleTarget_name, (PropertyRNA *)&rna_ParticleTarget_rna_properties,
	-1, "rna_type", 8912896, "RNA",
	"RNA type definition",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	ParticleTarget_rna_type_get, NULL, NULL, NULL,&RNA_Struct
};

StringPropertyRNA rna_ParticleTarget_name = {
	{(PropertyRNA *)&rna_ParticleTarget_object, (PropertyRNA *)&rna_ParticleTarget_rna_type,
	-1, "name", 262144, "Name",
	"Particle target name",
	0, "*",
	PROP_STRING, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	ParticleTarget_name_get, ParticleTarget_name_length, NULL, NULL, NULL, NULL, 0, ""
};

PointerPropertyRNA rna_ParticleTarget_object = {
	{(PropertyRNA *)&rna_ParticleTarget_system, (PropertyRNA *)&rna_ParticleTarget_name,
	-1, "object", 8388609, "Target Object",
	"The object that has the target particle system (empty if same object)",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Particle_target_reset, 0, NULL, NULL,
	0, -1, NULL},
	ParticleTarget_object_get, ParticleTarget_object_set, NULL, NULL,&RNA_Object
};

IntPropertyRNA rna_ParticleTarget_system = {
	{(PropertyRNA *)&rna_ParticleTarget_time, (PropertyRNA *)&rna_ParticleTarget_object,
	-1, "system", 8195, "Target Particle System",
	"The index of particle system on the target object",
	0, "*",
	PROP_INT, PROP_UNSIGNED | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Particle_target_reset, 0, NULL, NULL,
	offsetof(ParticleTarget, psys), 0, NULL},
	ParticleTarget_system_get, ParticleTarget_system_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL,
	1, INT_MAX, 1, INT_MAX, 1, 0, NULL
};

FloatPropertyRNA rna_ParticleTarget_time = {
	{(PropertyRNA *)&rna_ParticleTarget_duration, (PropertyRNA *)&rna_ParticleTarget_system,
	-1, "time", 8195, "Time",
	"",
	0, "*",
	PROP_FLOAT, PROP_TIME | PROP_UNIT_TIME, NULL, 0, {0, 0, 0}, 0,
	rna_Particle_target_redo, 0, NULL, NULL,
	offsetof(ParticleTarget, time), 4, NULL},
	ParticleTarget_time_get, ParticleTarget_time_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 30000.0f, 0.0f, 30000.0f, 10.0f, 3, 0.0f, NULL
};

FloatPropertyRNA rna_ParticleTarget_duration = {
	{(PropertyRNA *)&rna_ParticleTarget_is_valid, (PropertyRNA *)&rna_ParticleTarget_time,
	-1, "duration", 8195, "Duration",
	"",
	0, "*",
	PROP_FLOAT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Particle_target_redo, 0, NULL, NULL,
	offsetof(ParticleTarget, duration), 4, NULL},
	ParticleTarget_duration_get, ParticleTarget_duration_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 30000.0f, 0.0f, 30000.0f, 10.0f, 3, 0.0f, NULL
};

BoolPropertyRNA rna_ParticleTarget_is_valid = {
	{(PropertyRNA *)&rna_ParticleTarget_alliance, (PropertyRNA *)&rna_ParticleTarget_duration,
	-1, "is_valid", 1, "Valid",
	"Keyed particles target is valid",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	ParticleTarget_is_valid_get, ParticleTarget_is_valid_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

static EnumPropertyItem rna_ParticleTarget_alliance_items[4] = {
	{1, "FRIEND", 0, "Friend", ""},
	{0, "NEUTRAL", 0, "Neutral", ""},
	{2, "ENEMY", 0, "Enemy", ""},
	{0, NULL, 0, NULL, NULL}
};

EnumPropertyRNA rna_ParticleTarget_alliance = {
	{NULL, (PropertyRNA *)&rna_ParticleTarget_is_valid,
	-1, "alliance", 1, "Mode",
	"",
	0, "*",
	PROP_ENUM, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Particle_target_reset, 0, NULL, NULL,
	0, -1, NULL},
	ParticleTarget_alliance_get, ParticleTarget_alliance_set, NULL, NULL, NULL, NULL, rna_ParticleTarget_alliance_items, 3, 0
};

StructRNA RNA_ParticleTarget = {
	{(ContainerRNA *)&RNA_SPHFluidSettings, (ContainerRNA *)&RNA_PackedFile,
	NULL,
	{(PropertyRNA *)&rna_ParticleTarget_rna_properties, (PropertyRNA *)&rna_ParticleTarget_alliance}},
	"ParticleTarget", NULL, NULL, 4, "Particle Target",
	"Target particle system",
	"*", 17,
	(PropertyRNA *)&rna_ParticleTarget_name, (PropertyRNA *)&rna_ParticleTarget_rna_properties,
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

/* SPH Fluid Settings */
CollectionPropertyRNA rna_SPHFluidSettings_rna_properties = {
	{(PropertyRNA *)&rna_SPHFluidSettings_rna_type, NULL,
	-1, "rna_properties", 128, "Properties",
	"RNA property collection",
	0, "*",
	PROP_COLLECTION, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	SPHFluidSettings_rna_properties_begin, SPHFluidSettings_rna_properties_next, SPHFluidSettings_rna_properties_end, SPHFluidSettings_rna_properties_get, NULL, NULL, SPHFluidSettings_rna_properties_lookup_string, NULL, &RNA_Property
};

PointerPropertyRNA rna_SPHFluidSettings_rna_type = {
	{(PropertyRNA *)&rna_SPHFluidSettings_solver, (PropertyRNA *)&rna_SPHFluidSettings_rna_properties,
	-1, "rna_type", 8912896, "RNA",
	"RNA type definition",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	SPHFluidSettings_rna_type_get, NULL, NULL, NULL,&RNA_Struct
};

static EnumPropertyItem rna_SPHFluidSettings_solver_items[3] = {
	{0, "DDR", 0, "Double-Density", "An artistic solver with strong surface tension effects (original)"},
	{1, "CLASSICAL", 0, "Classical", "A more physically-accurate solver"},
	{0, NULL, 0, NULL, NULL}
};

EnumPropertyRNA rna_SPHFluidSettings_solver = {
	{(PropertyRNA *)&rna_SPHFluidSettings_spring_force, (PropertyRNA *)&rna_SPHFluidSettings_rna_type,
	-1, "solver", 1, "SPH Solver",
	"The code used to calculate internal forces on particles",
	0, "*",
	PROP_ENUM, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Particle_reset, 0, NULL, NULL,
	0, -1, NULL},
	SPHFluidSettings_solver_get, SPHFluidSettings_solver_set, NULL, NULL, NULL, NULL, rna_SPHFluidSettings_solver_items, 2, 0
};

FloatPropertyRNA rna_SPHFluidSettings_spring_force = {
	{(PropertyRNA *)&rna_SPHFluidSettings_fluid_radius, (PropertyRNA *)&rna_SPHFluidSettings_solver,
	-1, "spring_force", 8195, "Spring Force",
	"Spring force",
	0, "*",
	PROP_FLOAT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Particle_reset, 0, NULL, NULL,
	offsetof(SPHFluidSettings, spring_k), 4, NULL},
	SPHFluidSettings_spring_force_get, SPHFluidSettings_spring_force_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 10.0f, 0.0f, 100.0f, 1.0f, 3, 0.0f, NULL
};

FloatPropertyRNA rna_SPHFluidSettings_fluid_radius = {
	{(PropertyRNA *)&rna_SPHFluidSettings_rest_length, (PropertyRNA *)&rna_SPHFluidSettings_spring_force,
	-1, "fluid_radius", 8195, "Interaction Radius",
	"Fluid interaction radius",
	0, "*",
	PROP_FLOAT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Particle_reset, 0, NULL, NULL,
	offsetof(SPHFluidSettings, radius), 4, NULL},
	SPHFluidSettings_fluid_radius_get, SPHFluidSettings_fluid_radius_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 2.0f, 0.0f, 20.0f, 1.0f, 3, 0.0f, NULL
};

FloatPropertyRNA rna_SPHFluidSettings_rest_length = {
	{(PropertyRNA *)&rna_SPHFluidSettings_use_viscoelastic_springs, (PropertyRNA *)&rna_SPHFluidSettings_fluid_radius,
	-1, "rest_length", 8195, "Rest Length",
	"Spring rest length (factor of particle radius)",
	0, "*",
	PROP_FLOAT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Particle_reset, 0, NULL, NULL,
	offsetof(SPHFluidSettings, rest_length), 4, NULL},
	SPHFluidSettings_rest_length_get, SPHFluidSettings_rest_length_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 2.0f, 0.0f, 2.0f, 10.0f, 3, 0.0f, NULL
};

BoolPropertyRNA rna_SPHFluidSettings_use_viscoelastic_springs = {
	{(PropertyRNA *)&rna_SPHFluidSettings_use_initial_rest_length, (PropertyRNA *)&rna_SPHFluidSettings_rest_length,
	-1, "use_viscoelastic_springs", 3, "Viscoelastic Springs",
	"Use viscoelastic springs instead of Hooke\'s springs",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Particle_reset, 0, NULL, NULL,
	0, -1, NULL},
	SPHFluidSettings_use_viscoelastic_springs_get, SPHFluidSettings_use_viscoelastic_springs_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_SPHFluidSettings_use_initial_rest_length = {
	{(PropertyRNA *)&rna_SPHFluidSettings_plasticity, (PropertyRNA *)&rna_SPHFluidSettings_use_viscoelastic_springs,
	-1, "use_initial_rest_length", 3, "Initial Rest Length",
	"Use the initial length as spring rest length instead of 2 * particle size",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Particle_reset, 0, NULL, NULL,
	0, -1, NULL},
	SPHFluidSettings_use_initial_rest_length_get, SPHFluidSettings_use_initial_rest_length_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

FloatPropertyRNA rna_SPHFluidSettings_plasticity = {
	{(PropertyRNA *)&rna_SPHFluidSettings_yield_ratio, (PropertyRNA *)&rna_SPHFluidSettings_use_initial_rest_length,
	-1, "plasticity", 8195, "Plasticity",
	"How much the spring rest length can change after the elastic limit is crossed",
	0, "*",
	PROP_FLOAT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Particle_reset, 0, NULL, NULL,
	offsetof(SPHFluidSettings, plasticity_constant), 4, NULL},
	SPHFluidSettings_plasticity_get, SPHFluidSettings_plasticity_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 100.0f, 0.0f, 100.0f, 10.0f, 3, 0.0f, NULL
};

FloatPropertyRNA rna_SPHFluidSettings_yield_ratio = {
	{(PropertyRNA *)&rna_SPHFluidSettings_spring_frames, (PropertyRNA *)&rna_SPHFluidSettings_plasticity,
	-1, "yield_ratio", 8195, "Elastic Limit",
	"How much the spring has to be stretched/compressed in order to change it\'s rest length",
	0, "*",
	PROP_FLOAT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Particle_reset, 0, NULL, NULL,
	offsetof(SPHFluidSettings, yield_ratio), 4, NULL},
	SPHFluidSettings_yield_ratio_get, SPHFluidSettings_yield_ratio_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 1.0f, 0.0f, 1.0f, 10.0f, 3, 0.0f, NULL
};

IntPropertyRNA rna_SPHFluidSettings_spring_frames = {
	{(PropertyRNA *)&rna_SPHFluidSettings_linear_viscosity, (PropertyRNA *)&rna_SPHFluidSettings_yield_ratio,
	-1, "spring_frames", 8195, "Spring Frames",
	"Create springs for this number of frames since particles birth (0 is always)",
	0, "*",
	PROP_INT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Particle_reset, 0, NULL, NULL,
	offsetof(SPHFluidSettings, spring_frames), 0, NULL},
	SPHFluidSettings_spring_frames_get, SPHFluidSettings_spring_frames_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL,
	0, 100, 0, 100, 1, 0, NULL
};

FloatPropertyRNA rna_SPHFluidSettings_linear_viscosity = {
	{(PropertyRNA *)&rna_SPHFluidSettings_stiff_viscosity, (PropertyRNA *)&rna_SPHFluidSettings_spring_frames,
	-1, "linear_viscosity", 8195, "Viscosity",
	"Linear viscosity",
	0, "*",
	PROP_FLOAT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Particle_reset, 0, NULL, NULL,
	offsetof(SPHFluidSettings, viscosity_omega), 4, NULL},
	SPHFluidSettings_linear_viscosity_get, SPHFluidSettings_linear_viscosity_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 10.0f, 0.0f, 100.0f, 1.0f, 3, 0.0f, NULL
};

FloatPropertyRNA rna_SPHFluidSettings_stiff_viscosity = {
	{(PropertyRNA *)&rna_SPHFluidSettings_stiffness, (PropertyRNA *)&rna_SPHFluidSettings_linear_viscosity,
	-1, "stiff_viscosity", 8195, "Stiff viscosity",
	"Creates viscosity for expanding fluid",
	0, "*",
	PROP_FLOAT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Particle_reset, 0, NULL, NULL,
	offsetof(SPHFluidSettings, viscosity_beta), 4, NULL},
	SPHFluidSettings_stiff_viscosity_get, SPHFluidSettings_stiff_viscosity_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 2.0f, 0.0f, 100.0f, 1.0f, 3, 0.0f, NULL
};

FloatPropertyRNA rna_SPHFluidSettings_stiffness = {
	{(PropertyRNA *)&rna_SPHFluidSettings_repulsion, (PropertyRNA *)&rna_SPHFluidSettings_stiff_viscosity,
	-1, "stiffness", 8195, "Stiffness",
	"How incompressible the fluid is (speed of sound)",
	0, "*",
	PROP_FLOAT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Particle_reset, 0, NULL, NULL,
	offsetof(SPHFluidSettings, stiffness_k), 4, NULL},
	SPHFluidSettings_stiffness_get, SPHFluidSettings_stiffness_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 10.0f, 0.0f, 1000.0f, 1.0f, 3, 0.0f, NULL
};

FloatPropertyRNA rna_SPHFluidSettings_repulsion = {
	{(PropertyRNA *)&rna_SPHFluidSettings_rest_density, (PropertyRNA *)&rna_SPHFluidSettings_stiffness,
	-1, "repulsion", 8195, "Repulsion Factor",
	"How strongly the fluid tries to keep from clustering (factor of stiffness)",
	0, "*",
	PROP_FLOAT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Particle_reset, 0, NULL, NULL,
	offsetof(SPHFluidSettings, stiffness_knear), 4, NULL},
	SPHFluidSettings_repulsion_get, SPHFluidSettings_repulsion_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 2.0f, 0.0f, 100.0f, 1.0f, 3, 0.0f, NULL
};

FloatPropertyRNA rna_SPHFluidSettings_rest_density = {
	{(PropertyRNA *)&rna_SPHFluidSettings_buoyancy, (PropertyRNA *)&rna_SPHFluidSettings_repulsion,
	-1, "rest_density", 8195, "Rest Density",
	"Fluid rest density",
	0, "*",
	PROP_FLOAT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Particle_reset, 0, NULL, NULL,
	offsetof(SPHFluidSettings, rest_density), 4, NULL},
	SPHFluidSettings_rest_density_get, SPHFluidSettings_rest_density_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 2.0f, 0.0f, 10000.0f, 1.0f, 3, 0.0f, NULL
};

FloatPropertyRNA rna_SPHFluidSettings_buoyancy = {
	{(PropertyRNA *)&rna_SPHFluidSettings_factor_repulsion, (PropertyRNA *)&rna_SPHFluidSettings_rest_density,
	-1, "buoyancy", 8195, "Buoyancy",
	"Artificial buoyancy force in negative gravity direction based on pressure differences inside the fluid",
	0, "*",
	PROP_FLOAT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Particle_reset, 0, NULL, NULL,
	offsetof(SPHFluidSettings, buoyancy), 4, NULL},
	SPHFluidSettings_buoyancy_get, SPHFluidSettings_buoyancy_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 1.0f, 0.0f, 10.0f, 1.0f, 3, 0.0f, NULL
};

BoolPropertyRNA rna_SPHFluidSettings_factor_repulsion = {
	{(PropertyRNA *)&rna_SPHFluidSettings_use_factor_density, (PropertyRNA *)&rna_SPHFluidSettings_buoyancy,
	-1, "factor_repulsion", 3, "Factor Repulsion",
	"Repulsion is a factor of stiffness",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Particle_reset, 0, NULL, NULL,
	0, -1, NULL},
	SPHFluidSettings_factor_repulsion_get, SPHFluidSettings_factor_repulsion_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_SPHFluidSettings_use_factor_density = {
	{(PropertyRNA *)&rna_SPHFluidSettings_factor_radius, (PropertyRNA *)&rna_SPHFluidSettings_factor_repulsion,
	-1, "use_factor_density", 3, "Factor Density",
	"Density is calculated as a factor of default density (depends on particle size)",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Particle_reset, 0, NULL, NULL,
	0, -1, NULL},
	SPHFluidSettings_use_factor_density_get, SPHFluidSettings_use_factor_density_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_SPHFluidSettings_factor_radius = {
	{(PropertyRNA *)&rna_SPHFluidSettings_factor_stiff_viscosity, (PropertyRNA *)&rna_SPHFluidSettings_use_factor_density,
	-1, "factor_radius", 3, "Factor Radius",
	"Interaction radius is a factor of 4 * particle size",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Particle_reset, 0, NULL, NULL,
	0, -1, NULL},
	SPHFluidSettings_factor_radius_get, SPHFluidSettings_factor_radius_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_SPHFluidSettings_factor_stiff_viscosity = {
	{(PropertyRNA *)&rna_SPHFluidSettings_factor_rest_length, (PropertyRNA *)&rna_SPHFluidSettings_factor_radius,
	-1, "factor_stiff_viscosity", 3, "Factor Stiff Viscosity",
	"Stiff viscosity is a factor of normal viscosity",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Particle_reset, 0, NULL, NULL,
	0, -1, NULL},
	SPHFluidSettings_factor_stiff_viscosity_get, SPHFluidSettings_factor_stiff_viscosity_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_SPHFluidSettings_factor_rest_length = {
	{NULL, (PropertyRNA *)&rna_SPHFluidSettings_factor_stiff_viscosity,
	-1, "factor_rest_length", 3, "Factor Rest Length",
	"Spring rest length is a factor of 2 * particle size",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Particle_reset, 0, NULL, NULL,
	0, -1, NULL},
	SPHFluidSettings_factor_rest_length_get, SPHFluidSettings_factor_rest_length_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

StructRNA RNA_SPHFluidSettings = {
	{(ContainerRNA *)&RNA_ParticleHairKey, (ContainerRNA *)&RNA_ParticleTarget,
	NULL,
	{(PropertyRNA *)&rna_SPHFluidSettings_rna_properties, (PropertyRNA *)&rna_SPHFluidSettings_factor_rest_length}},
	"SPHFluidSettings", NULL, NULL, 4, "SPH Fluid Settings",
	"Settings for particle fluids physics",
	"*", 17,
	NULL, (PropertyRNA *)&rna_SPHFluidSettings_rna_properties,
	NULL,
	NULL,
	NULL,
	rna_SPHFluidSettings_path,
	NULL,
	NULL,
	NULL,
	NULL,
	{NULL, NULL}
};

/* Particle Hair Key */
CollectionPropertyRNA rna_ParticleHairKey_rna_properties = {
	{(PropertyRNA *)&rna_ParticleHairKey_rna_type, NULL,
	-1, "rna_properties", 128, "Properties",
	"RNA property collection",
	0, "*",
	PROP_COLLECTION, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	ParticleHairKey_rna_properties_begin, ParticleHairKey_rna_properties_next, ParticleHairKey_rna_properties_end, ParticleHairKey_rna_properties_get, NULL, NULL, ParticleHairKey_rna_properties_lookup_string, NULL, &RNA_Property
};

PointerPropertyRNA rna_ParticleHairKey_rna_type = {
	{(PropertyRNA *)&rna_ParticleHairKey_time, (PropertyRNA *)&rna_ParticleHairKey_rna_properties,
	-1, "rna_type", 8912896, "RNA",
	"RNA type definition",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	ParticleHairKey_rna_type_get, NULL, NULL, NULL,&RNA_Struct
};

FloatPropertyRNA rna_ParticleHairKey_time = {
	{(PropertyRNA *)&rna_ParticleHairKey_weight, (PropertyRNA *)&rna_ParticleHairKey_rna_type,
	-1, "time", 8195, "Time",
	"Relative time of key over hair length",
	0, "*",
	PROP_FLOAT, PROP_UNSIGNED | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	offsetof(HairKey, time), 4, NULL},
	ParticleHairKey_time_get, ParticleHairKey_time_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 10000.0f, 0.0f, FLT_MAX, 10.0f, 3, 0.0f, NULL
};

FloatPropertyRNA rna_ParticleHairKey_weight = {
	{(PropertyRNA *)&rna_ParticleHairKey_co, (PropertyRNA *)&rna_ParticleHairKey_time,
	-1, "weight", 8195, "Weight",
	"Weight for cloth simulation",
	0, "*",
	PROP_FLOAT, PROP_UNSIGNED | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	offsetof(HairKey, weight), 4, NULL},
	ParticleHairKey_weight_get, ParticleHairKey_weight_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 1.0f, 0.0f, 1.0f, 10.0f, 3, 0.0f, NULL
};

static float rna_ParticleHairKey_co_default[3] = {
	0.0f,
	0.0f,
	0.0f
};

FloatPropertyRNA rna_ParticleHairKey_co = {
	{(PropertyRNA *)&rna_ParticleHairKey_co_local, (PropertyRNA *)&rna_ParticleHairKey_weight,
	-1, "co", 3, "Location (Object Space)",
	"Location of the hair key in object space",
	0, "*",
	PROP_FLOAT, PROP_TRANSLATION | PROP_UNIT_LENGTH, NULL, 1, {3, 0, 0}, 3,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	NULL, NULL, ParticleHairKey_co_get, ParticleHairKey_co_set, NULL, NULL, NULL, NULL, NULL, NULL, -10000.0f, 10000.0f, -FLT_MAX, FLT_MAX, 10.0f, 3, 0.0f, rna_ParticleHairKey_co_default
};

static float rna_ParticleHairKey_co_local_default[3] = {
	0.0f,
	0.0f,
	0.0f
};

FloatPropertyRNA rna_ParticleHairKey_co_local = {
	{NULL, (PropertyRNA *)&rna_ParticleHairKey_co,
	-1, "co_local", 8195, "Location",
	"Location of the hair key in its local coordinate system, relative to the emitting face",
	0, "*",
	PROP_FLOAT, PROP_TRANSLATION | PROP_UNIT_LENGTH, NULL, 1, {3, 0, 0}, 3,
	NULL, 0, NULL, NULL,
	offsetof(HairKey, co), 4, NULL},
	NULL, NULL, ParticleHairKey_co_local_get, ParticleHairKey_co_local_set, NULL, NULL, NULL, NULL, NULL, NULL, -10000.0f, 10000.0f, -FLT_MAX, FLT_MAX, 10.0f, 3, 0.0f, rna_ParticleHairKey_co_local_default
};

PointerPropertyRNA rna_ParticleHairKey_co_object_object = {
	{(PropertyRNA *)&rna_ParticleHairKey_co_object_modifier, NULL,
	-1, "object", 8650756, "",
	"Object",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	NULL, NULL, NULL, NULL,&RNA_Object
};

PointerPropertyRNA rna_ParticleHairKey_co_object_modifier = {
	{(PropertyRNA *)&rna_ParticleHairKey_co_object_particle, (PropertyRNA *)&rna_ParticleHairKey_co_object_object,
	-1, "modifier", 8650756, "",
	"Particle modifier",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	NULL, NULL, NULL, NULL,&RNA_ParticleSystemModifier
};

PointerPropertyRNA rna_ParticleHairKey_co_object_particle = {
	{(PropertyRNA *)&rna_ParticleHairKey_co_object_co, (PropertyRNA *)&rna_ParticleHairKey_co_object_modifier,
	-1, "particle", 8650756, "",
	"hair particle",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	NULL, NULL, NULL, NULL,&RNA_Particle
};

static float rna_ParticleHairKey_co_object_co_default[3] = {
	0.0f,
	0.0f,
	0.0f
};

FloatPropertyRNA rna_ParticleHairKey_co_object_co = {
	{NULL, (PropertyRNA *)&rna_ParticleHairKey_co_object_particle,
	-1, "co", 8388619, "Co",
	"Exported hairkey location",
	0, "*",
	PROP_FLOAT, PROP_XYZ | PROP_UNIT_NONE, NULL, 1, {3, 0, 0}, 3,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, -10000.0f, 10000.0f, -FLT_MAX, FLT_MAX, 1.0f, 3, 0.0f, rna_ParticleHairKey_co_object_co_default
};

FunctionRNA rna_ParticleHairKey_co_object_func = {
	{NULL, NULL,
	NULL,
	{(PropertyRNA *)&rna_ParticleHairKey_co_object_object, (PropertyRNA *)&rna_ParticleHairKey_co_object_co}},
	"co_object", 0, "Obtain hairkey location with particle and modifier data",
	ParticleHairKey_co_object_call,
	NULL
};

StructRNA RNA_ParticleHairKey = {
	{(ContainerRNA *)&RNA_ParticleKey, (ContainerRNA *)&RNA_SPHFluidSettings,
	NULL,
	{(PropertyRNA *)&rna_ParticleHairKey_rna_properties, (PropertyRNA *)&rna_ParticleHairKey_co_local}},
	"ParticleHairKey", NULL, NULL, 4, "Particle Hair Key",
	"Particle key for hair particle system",
	"*", 17,
	NULL, (PropertyRNA *)&rna_ParticleHairKey_rna_properties,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	{(FunctionRNA *)&rna_ParticleHairKey_co_object_func, (FunctionRNA *)&rna_ParticleHairKey_co_object_func}
};

/* Particle Key */
CollectionPropertyRNA rna_ParticleKey_rna_properties = {
	{(PropertyRNA *)&rna_ParticleKey_rna_type, NULL,
	-1, "rna_properties", 128, "Properties",
	"RNA property collection",
	0, "*",
	PROP_COLLECTION, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	ParticleKey_rna_properties_begin, ParticleKey_rna_properties_next, ParticleKey_rna_properties_end, ParticleKey_rna_properties_get, NULL, NULL, ParticleKey_rna_properties_lookup_string, NULL, &RNA_Property
};

PointerPropertyRNA rna_ParticleKey_rna_type = {
	{(PropertyRNA *)&rna_ParticleKey_location, (PropertyRNA *)&rna_ParticleKey_rna_properties,
	-1, "rna_type", 8912896, "RNA",
	"RNA type definition",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	ParticleKey_rna_type_get, NULL, NULL, NULL,&RNA_Struct
};

static float rna_ParticleKey_location_default[3] = {
	0.0f,
	0.0f,
	0.0f
};

FloatPropertyRNA rna_ParticleKey_location = {
	{(PropertyRNA *)&rna_ParticleKey_velocity, (PropertyRNA *)&rna_ParticleKey_rna_type,
	-1, "location", 8195, "Location",
	"Key location",
	0, "*",
	PROP_FLOAT, PROP_TRANSLATION | PROP_UNIT_LENGTH, NULL, 1, {3, 0, 0}, 3,
	NULL, 0, NULL, NULL,
	offsetof(ParticleKey, co), 4, NULL},
	NULL, NULL, ParticleKey_location_get, ParticleKey_location_set, NULL, NULL, NULL, NULL, NULL, NULL, -10000.0f, 10000.0f, -FLT_MAX, FLT_MAX, 10.0f, 3, 0.0f, rna_ParticleKey_location_default
};

static float rna_ParticleKey_velocity_default[3] = {
	0.0f,
	0.0f,
	0.0f
};

FloatPropertyRNA rna_ParticleKey_velocity = {
	{(PropertyRNA *)&rna_ParticleKey_rotation, (PropertyRNA *)&rna_ParticleKey_location,
	-1, "velocity", 8195, "Velocity",
	"Key velocity",
	0, "*",
	PROP_FLOAT, PROP_VELOCITY | PROP_UNIT_VELOCITY, NULL, 1, {3, 0, 0}, 3,
	NULL, 0, NULL, NULL,
	offsetof(ParticleKey, vel), 4, NULL},
	NULL, NULL, ParticleKey_velocity_get, ParticleKey_velocity_set, NULL, NULL, NULL, NULL, NULL, NULL, -10000.0f, 10000.0f, -FLT_MAX, FLT_MAX, 10.0f, 3, 0.0f, rna_ParticleKey_velocity_default
};

static float rna_ParticleKey_rotation_default[4] = {
	0.0f,
	0.0f,
	0.0f,
	0.0f
};

FloatPropertyRNA rna_ParticleKey_rotation = {
	{(PropertyRNA *)&rna_ParticleKey_angular_velocity, (PropertyRNA *)&rna_ParticleKey_velocity,
	-1, "rotation", 8195, "Rotation",
	"Key rotation quaternion",
	0, "*",
	PROP_FLOAT, PROP_QUATERNION | PROP_UNIT_NONE, NULL, 1, {4, 0, 0}, 4,
	NULL, 0, NULL, NULL,
	offsetof(ParticleKey, rot), 4, NULL},
	NULL, NULL, ParticleKey_rotation_get, ParticleKey_rotation_set, NULL, NULL, NULL, NULL, NULL, NULL, -10000.0f, 10000.0f, -FLT_MAX, FLT_MAX, 10.0f, 3, 0.0f, rna_ParticleKey_rotation_default
};

static float rna_ParticleKey_angular_velocity_default[3] = {
	0.0f,
	0.0f,
	0.0f
};

FloatPropertyRNA rna_ParticleKey_angular_velocity = {
	{(PropertyRNA *)&rna_ParticleKey_time, (PropertyRNA *)&rna_ParticleKey_rotation,
	-1, "angular_velocity", 8195, "Angular Velocity",
	"Key angular velocity",
	0, "*",
	PROP_FLOAT, PROP_VELOCITY | PROP_UNIT_VELOCITY, NULL, 1, {3, 0, 0}, 3,
	NULL, 0, NULL, NULL,
	offsetof(ParticleKey, ave), 4, NULL},
	NULL, NULL, ParticleKey_angular_velocity_get, ParticleKey_angular_velocity_set, NULL, NULL, NULL, NULL, NULL, NULL, -10000.0f, 10000.0f, -FLT_MAX, FLT_MAX, 10.0f, 3, 0.0f, rna_ParticleKey_angular_velocity_default
};

FloatPropertyRNA rna_ParticleKey_time = {
	{NULL, (PropertyRNA *)&rna_ParticleKey_angular_velocity,
	-1, "time", 8195, "Time",
	"Time of key over the simulation",
	0, "*",
	PROP_FLOAT, PROP_UNSIGNED | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	offsetof(ParticleKey, time), 4, NULL},
	ParticleKey_time_get, ParticleKey_time_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 10000.0f, 0.0f, FLT_MAX, 10.0f, 3, 0.0f, NULL
};

StructRNA RNA_ParticleKey = {
	{(ContainerRNA *)&RNA_ChildParticle, (ContainerRNA *)&RNA_ParticleHairKey,
	NULL,
	{(PropertyRNA *)&rna_ParticleKey_rna_properties, (PropertyRNA *)&rna_ParticleKey_time}},
	"ParticleKey", NULL, NULL, 4, "Particle Key",
	"Key location for a particle over time",
	"*", 17,
	NULL, (PropertyRNA *)&rna_ParticleKey_rna_properties,
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

/* Child Particle */
CollectionPropertyRNA rna_ChildParticle_rna_properties = {
	{(PropertyRNA *)&rna_ChildParticle_rna_type, NULL,
	-1, "rna_properties", 128, "Properties",
	"RNA property collection",
	0, "*",
	PROP_COLLECTION, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	ChildParticle_rna_properties_begin, ChildParticle_rna_properties_next, ChildParticle_rna_properties_end, ChildParticle_rna_properties_get, NULL, NULL, ChildParticle_rna_properties_lookup_string, NULL, &RNA_Property
};

PointerPropertyRNA rna_ChildParticle_rna_type = {
	{NULL, (PropertyRNA *)&rna_ChildParticle_rna_properties,
	-1, "rna_type", 8912896, "RNA",
	"RNA type definition",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	ChildParticle_rna_type_get, NULL, NULL, NULL,&RNA_Struct
};

StructRNA RNA_ChildParticle = {
	{(ContainerRNA *)&RNA_Particle, (ContainerRNA *)&RNA_ParticleKey,
	NULL,
	{(PropertyRNA *)&rna_ChildParticle_rna_properties, (PropertyRNA *)&rna_ChildParticle_rna_type}},
	"ChildParticle", NULL, NULL, 4, "Child Particle",
	"Child particle interpolated from simulated or edited particles",
	"*", 17,
	NULL, (PropertyRNA *)&rna_ChildParticle_rna_properties,
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

/* Particle */
CollectionPropertyRNA rna_Particle_rna_properties = {
	{(PropertyRNA *)&rna_Particle_rna_type, NULL,
	-1, "rna_properties", 128, "Properties",
	"RNA property collection",
	0, "*",
	PROP_COLLECTION, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	Particle_rna_properties_begin, Particle_rna_properties_next, Particle_rna_properties_end, Particle_rna_properties_get, NULL, NULL, Particle_rna_properties_lookup_string, NULL, &RNA_Property
};

PointerPropertyRNA rna_Particle_rna_type = {
	{(PropertyRNA *)&rna_Particle_location, (PropertyRNA *)&rna_Particle_rna_properties,
	-1, "rna_type", 8912896, "RNA",
	"RNA type definition",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	Particle_rna_type_get, NULL, NULL, NULL,&RNA_Struct
};

static float rna_Particle_location_default[3] = {
	0.0f,
	0.0f,
	0.0f
};

FloatPropertyRNA rna_Particle_location = {
	{(PropertyRNA *)&rna_Particle_velocity, (PropertyRNA *)&rna_Particle_rna_type,
	-1, "location", 8195, "Particle Location",
	"",
	0, "*",
	PROP_FLOAT, PROP_TRANSLATION | PROP_UNIT_LENGTH, NULL, 1, {3, 0, 0}, 3,
	NULL, 0, NULL, NULL,
	offsetof(ParticleData, state.co), 4, NULL},
	NULL, NULL, Particle_location_get, Particle_location_set, NULL, NULL, NULL, NULL, NULL, NULL, -10000.0f, 10000.0f, -FLT_MAX, FLT_MAX, 10.0f, 3, 0.0f, rna_Particle_location_default
};

static float rna_Particle_velocity_default[3] = {
	0.0f,
	0.0f,
	0.0f
};

FloatPropertyRNA rna_Particle_velocity = {
	{(PropertyRNA *)&rna_Particle_angular_velocity, (PropertyRNA *)&rna_Particle_location,
	-1, "velocity", 8195, "Particle Velocity",
	"",
	0, "*",
	PROP_FLOAT, PROP_VELOCITY | PROP_UNIT_VELOCITY, NULL, 1, {3, 0, 0}, 3,
	NULL, 0, NULL, NULL,
	offsetof(ParticleData, state.vel), 4, NULL},
	NULL, NULL, Particle_velocity_get, Particle_velocity_set, NULL, NULL, NULL, NULL, NULL, NULL, -10000.0f, 10000.0f, -FLT_MAX, FLT_MAX, 10.0f, 3, 0.0f, rna_Particle_velocity_default
};

static float rna_Particle_angular_velocity_default[3] = {
	0.0f,
	0.0f,
	0.0f
};

FloatPropertyRNA rna_Particle_angular_velocity = {
	{(PropertyRNA *)&rna_Particle_rotation, (PropertyRNA *)&rna_Particle_velocity,
	-1, "angular_velocity", 8195, "Angular Velocity",
	"",
	0, "*",
	PROP_FLOAT, PROP_VELOCITY | PROP_UNIT_VELOCITY, NULL, 1, {3, 0, 0}, 3,
	NULL, 0, NULL, NULL,
	offsetof(ParticleData, state.ave), 4, NULL},
	NULL, NULL, Particle_angular_velocity_get, Particle_angular_velocity_set, NULL, NULL, NULL, NULL, NULL, NULL, -10000.0f, 10000.0f, -FLT_MAX, FLT_MAX, 10.0f, 3, 0.0f, rna_Particle_angular_velocity_default
};

static float rna_Particle_rotation_default[4] = {
	0.0f,
	0.0f,
	0.0f,
	0.0f
};

FloatPropertyRNA rna_Particle_rotation = {
	{(PropertyRNA *)&rna_Particle_prev_location, (PropertyRNA *)&rna_Particle_angular_velocity,
	-1, "rotation", 8195, "Rotation",
	"",
	0, "*",
	PROP_FLOAT, PROP_QUATERNION | PROP_UNIT_NONE, NULL, 1, {4, 0, 0}, 4,
	NULL, 0, NULL, NULL,
	offsetof(ParticleData, state.rot), 4, NULL},
	NULL, NULL, Particle_rotation_get, Particle_rotation_set, NULL, NULL, NULL, NULL, NULL, NULL, -10000.0f, 10000.0f, -FLT_MAX, FLT_MAX, 10.0f, 3, 0.0f, rna_Particle_rotation_default
};

static float rna_Particle_prev_location_default[3] = {
	0.0f,
	0.0f,
	0.0f
};

FloatPropertyRNA rna_Particle_prev_location = {
	{(PropertyRNA *)&rna_Particle_prev_velocity, (PropertyRNA *)&rna_Particle_rotation,
	-1, "prev_location", 8195, "Previous Particle Location",
	"",
	0, "*",
	PROP_FLOAT, PROP_TRANSLATION | PROP_UNIT_LENGTH, NULL, 1, {3, 0, 0}, 3,
	NULL, 0, NULL, NULL,
	offsetof(ParticleData, prev_state.co), 4, NULL},
	NULL, NULL, Particle_prev_location_get, Particle_prev_location_set, NULL, NULL, NULL, NULL, NULL, NULL, -10000.0f, 10000.0f, -FLT_MAX, FLT_MAX, 10.0f, 3, 0.0f, rna_Particle_prev_location_default
};

static float rna_Particle_prev_velocity_default[3] = {
	0.0f,
	0.0f,
	0.0f
};

FloatPropertyRNA rna_Particle_prev_velocity = {
	{(PropertyRNA *)&rna_Particle_prev_angular_velocity, (PropertyRNA *)&rna_Particle_prev_location,
	-1, "prev_velocity", 8195, "Previous Particle Velocity",
	"",
	0, "*",
	PROP_FLOAT, PROP_VELOCITY | PROP_UNIT_VELOCITY, NULL, 1, {3, 0, 0}, 3,
	NULL, 0, NULL, NULL,
	offsetof(ParticleData, prev_state.vel), 4, NULL},
	NULL, NULL, Particle_prev_velocity_get, Particle_prev_velocity_set, NULL, NULL, NULL, NULL, NULL, NULL, -10000.0f, 10000.0f, -FLT_MAX, FLT_MAX, 10.0f, 3, 0.0f, rna_Particle_prev_velocity_default
};

static float rna_Particle_prev_angular_velocity_default[3] = {
	0.0f,
	0.0f,
	0.0f
};

FloatPropertyRNA rna_Particle_prev_angular_velocity = {
	{(PropertyRNA *)&rna_Particle_prev_rotation, (PropertyRNA *)&rna_Particle_prev_velocity,
	-1, "prev_angular_velocity", 8195, "Previous Angular Velocity",
	"",
	0, "*",
	PROP_FLOAT, PROP_VELOCITY | PROP_UNIT_VELOCITY, NULL, 1, {3, 0, 0}, 3,
	NULL, 0, NULL, NULL,
	offsetof(ParticleData, prev_state.ave), 4, NULL},
	NULL, NULL, Particle_prev_angular_velocity_get, Particle_prev_angular_velocity_set, NULL, NULL, NULL, NULL, NULL, NULL, -10000.0f, 10000.0f, -FLT_MAX, FLT_MAX, 10.0f, 3, 0.0f, rna_Particle_prev_angular_velocity_default
};

static float rna_Particle_prev_rotation_default[4] = {
	0.0f,
	0.0f,
	0.0f,
	0.0f
};

FloatPropertyRNA rna_Particle_prev_rotation = {
	{(PropertyRNA *)&rna_Particle_hair_keys, (PropertyRNA *)&rna_Particle_prev_angular_velocity,
	-1, "prev_rotation", 8195, "Previous Rotation",
	"",
	0, "*",
	PROP_FLOAT, PROP_QUATERNION | PROP_UNIT_NONE, NULL, 1, {4, 0, 0}, 4,
	NULL, 0, NULL, NULL,
	offsetof(ParticleData, prev_state.rot), 4, NULL},
	NULL, NULL, Particle_prev_rotation_get, Particle_prev_rotation_set, NULL, NULL, NULL, NULL, NULL, NULL, -10000.0f, 10000.0f, -FLT_MAX, FLT_MAX, 10.0f, 3, 0.0f, rna_Particle_prev_rotation_default
};

CollectionPropertyRNA rna_Particle_hair_keys = {
	{(PropertyRNA *)&rna_Particle_particle_keys, (PropertyRNA *)&rna_Particle_prev_rotation,
	-1, "hair_keys", 16384, "Hair",
	"",
	0, "*",
	PROP_COLLECTION, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	Particle_hair_keys_begin, Particle_hair_keys_next, Particle_hair_keys_end, Particle_hair_keys_get, Particle_hair_keys_length, Particle_hair_keys_lookup_int, NULL, NULL, &RNA_ParticleHairKey
};

CollectionPropertyRNA rna_Particle_particle_keys = {
	{(PropertyRNA *)&rna_Particle_birth_time, (PropertyRNA *)&rna_Particle_hair_keys,
	-1, "particle_keys", 16384, "Keyed States",
	"",
	0, "*",
	PROP_COLLECTION, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	Particle_particle_keys_begin, Particle_particle_keys_next, Particle_particle_keys_end, Particle_particle_keys_get, Particle_particle_keys_length, Particle_particle_keys_lookup_int, NULL, NULL, &RNA_ParticleKey
};

FloatPropertyRNA rna_Particle_birth_time = {
	{(PropertyRNA *)&rna_Particle_lifetime, (PropertyRNA *)&rna_Particle_particle_keys,
	-1, "birth_time", 8195, "Birth Time",
	"",
	0, "*",
	PROP_FLOAT, PROP_TIME | PROP_UNIT_TIME, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	offsetof(ParticleData, time), 4, NULL},
	Particle_birth_time_get, Particle_birth_time_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, -10000.0f, 10000.0f, -FLT_MAX, FLT_MAX, 10.0f, 3, 0.0f, NULL
};

FloatPropertyRNA rna_Particle_lifetime = {
	{(PropertyRNA *)&rna_Particle_die_time, (PropertyRNA *)&rna_Particle_birth_time,
	-1, "lifetime", 8195, "Lifetime",
	"",
	0, "*",
	PROP_FLOAT, PROP_TIME | PROP_UNIT_TIME, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	offsetof(ParticleData, lifetime), 4, NULL},
	Particle_lifetime_get, Particle_lifetime_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, -10000.0f, 10000.0f, -FLT_MAX, FLT_MAX, 10.0f, 3, 0.0f, NULL
};

FloatPropertyRNA rna_Particle_die_time = {
	{(PropertyRNA *)&rna_Particle_size, (PropertyRNA *)&rna_Particle_lifetime,
	-1, "die_time", 8195, "Die Time",
	"",
	0, "*",
	PROP_FLOAT, PROP_TIME | PROP_UNIT_TIME, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	offsetof(ParticleData, dietime), 4, NULL},
	Particle_die_time_get, Particle_die_time_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, -10000.0f, 10000.0f, -FLT_MAX, FLT_MAX, 10.0f, 3, 0.0f, NULL
};

FloatPropertyRNA rna_Particle_size = {
	{(PropertyRNA *)&rna_Particle_is_exist, (PropertyRNA *)&rna_Particle_die_time,
	-1, "size", 8195, "Size",
	"",
	0, "*",
	PROP_FLOAT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	offsetof(ParticleData, size), 4, NULL},
	Particle_size_get, Particle_size_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, -10000.0f, 10000.0f, -FLT_MAX, FLT_MAX, 10.0f, 3, 0.0f, NULL
};

BoolPropertyRNA rna_Particle_is_exist = {
	{(PropertyRNA *)&rna_Particle_is_visible, (PropertyRNA *)&rna_Particle_size,
	-1, "is_exist", 2, "Exists",
	"",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	Particle_is_exist_get, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_Particle_is_visible = {
	{(PropertyRNA *)&rna_Particle_alive_state, (PropertyRNA *)&rna_Particle_is_exist,
	-1, "is_visible", 2, "Visible",
	"",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	Particle_is_visible_get, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

static EnumPropertyItem rna_Particle_alive_state_items[5] = {
	{1, "DEAD", 0, "Dead", ""},
	{2, "UNBORN", 0, "Unborn", ""},
	{3, "ALIVE", 0, "Alive", ""},
	{4, "DYING", 0, "Dying", ""},
	{0, NULL, 0, NULL, NULL}
};

EnumPropertyRNA rna_Particle_alive_state = {
	{NULL, (PropertyRNA *)&rna_Particle_is_visible,
	-1, "alive_state", 3, "Alive State",
	"",
	0, "*",
	PROP_ENUM, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	Particle_alive_state_get, Particle_alive_state_set, NULL, NULL, NULL, NULL, rna_Particle_alive_state_items, 4, 1
};

PointerPropertyRNA rna_Particle_uv_on_emitter_modifier = {
	{(PropertyRNA *)&rna_Particle_uv_on_emitter_uv, NULL,
	-1, "modifier", 8650756, "",
	"Particle modifier",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	NULL, NULL, NULL, NULL,&RNA_ParticleSystemModifier
};

static float rna_Particle_uv_on_emitter_uv_default[2] = {
	0.0f,
	0.0f
};

FloatPropertyRNA rna_Particle_uv_on_emitter_uv = {
	{NULL, (PropertyRNA *)&rna_Particle_uv_on_emitter_modifier,
	-1, "uv", 8388619, "uv",
	"",
	0, "*",
	PROP_FLOAT, PROP_COORDS | PROP_UNIT_NONE, NULL, 1, {2, 0, 0}, 2,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, -10000.0f, 10000.0f, -FLT_MAX, FLT_MAX, 10.0f, 3, 0.0f, rna_Particle_uv_on_emitter_uv_default
};

FunctionRNA rna_Particle_uv_on_emitter_func = {
	{NULL, NULL,
	NULL,
	{(PropertyRNA *)&rna_Particle_uv_on_emitter_modifier, (PropertyRNA *)&rna_Particle_uv_on_emitter_uv}},
	"uv_on_emitter", 16, "Obtain uv for particle on derived mesh",
	Particle_uv_on_emitter_call,
	NULL
};

StructRNA RNA_Particle = {
	{(ContainerRNA *)&RNA_ParticleDupliWeight, (ContainerRNA *)&RNA_ChildParticle,
	NULL,
	{(PropertyRNA *)&rna_Particle_rna_properties, (PropertyRNA *)&rna_Particle_alive_state}},
	"Particle", NULL, NULL, 4, "Particle",
	"Particle in a particle system",
	"*", 17,
	NULL, (PropertyRNA *)&rna_Particle_rna_properties,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	{(FunctionRNA *)&rna_Particle_uv_on_emitter_func, (FunctionRNA *)&rna_Particle_uv_on_emitter_func}
};

/* Particle Dupliobject Weight */
CollectionPropertyRNA rna_ParticleDupliWeight_rna_properties = {
	{(PropertyRNA *)&rna_ParticleDupliWeight_rna_type, NULL,
	-1, "rna_properties", 128, "Properties",
	"RNA property collection",
	0, "*",
	PROP_COLLECTION, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	ParticleDupliWeight_rna_properties_begin, ParticleDupliWeight_rna_properties_next, ParticleDupliWeight_rna_properties_end, ParticleDupliWeight_rna_properties_get, NULL, NULL, ParticleDupliWeight_rna_properties_lookup_string, NULL, &RNA_Property
};

PointerPropertyRNA rna_ParticleDupliWeight_rna_type = {
	{(PropertyRNA *)&rna_ParticleDupliWeight_name, (PropertyRNA *)&rna_ParticleDupliWeight_rna_properties,
	-1, "rna_type", 8912896, "RNA",
	"RNA type definition",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	ParticleDupliWeight_rna_type_get, NULL, NULL, NULL,&RNA_Struct
};

StringPropertyRNA rna_ParticleDupliWeight_name = {
	{(PropertyRNA *)&rna_ParticleDupliWeight_count, (PropertyRNA *)&rna_ParticleDupliWeight_rna_type,
	-1, "name", 262144, "Name",
	"Particle dupliobject name",
	0, "*",
	PROP_STRING, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	ParticleDupliWeight_name_get, ParticleDupliWeight_name_length, NULL, NULL, NULL, NULL, 0, ""
};

IntPropertyRNA rna_ParticleDupliWeight_count = {
	{NULL, (PropertyRNA *)&rna_ParticleDupliWeight_name,
	-1, "count", 8195, "Count",
	"The number of times this object is repeated with respect to other objects",
	0, "*",
	PROP_INT, PROP_UNSIGNED | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Particle_redo, 0, NULL, NULL,
	offsetof(ParticleDupliWeight, count), 1, NULL},
	ParticleDupliWeight_count_get, ParticleDupliWeight_count_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL,
	0, 32767, 0, 32767, 1, 0, NULL
};

StructRNA RNA_ParticleDupliWeight = {
	{(ContainerRNA *)&RNA_ParticleSystem, (ContainerRNA *)&RNA_Particle,
	NULL,
	{(PropertyRNA *)&rna_ParticleDupliWeight_rna_properties, (PropertyRNA *)&rna_ParticleDupliWeight_count}},
	"ParticleDupliWeight", NULL, NULL, 4, "Particle Dupliobject Weight",
	"Weight of a particle dupliobject in a group",
	"*", 17,
	(PropertyRNA *)&rna_ParticleDupliWeight_name, (PropertyRNA *)&rna_ParticleDupliWeight_rna_properties,
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

/* Particle System */
CollectionPropertyRNA rna_ParticleSystem_rna_properties = {
	{(PropertyRNA *)&rna_ParticleSystem_rna_type, NULL,
	-1, "rna_properties", 128, "Properties",
	"RNA property collection",
	0, "*",
	PROP_COLLECTION, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	ParticleSystem_rna_properties_begin, ParticleSystem_rna_properties_next, ParticleSystem_rna_properties_end, ParticleSystem_rna_properties_get, NULL, NULL, ParticleSystem_rna_properties_lookup_string, NULL, &RNA_Property
};

PointerPropertyRNA rna_ParticleSystem_rna_type = {
	{(PropertyRNA *)&rna_ParticleSystem_name, (PropertyRNA *)&rna_ParticleSystem_rna_properties,
	-1, "rna_type", 8912896, "RNA",
	"RNA type definition",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	ParticleSystem_rna_type_get, NULL, NULL, NULL,&RNA_Struct
};

StringPropertyRNA rna_ParticleSystem_name = {
	{(PropertyRNA *)&rna_ParticleSystem_settings, (PropertyRNA *)&rna_ParticleSystem_rna_type,
	-1, "name", 262145, "Name",
	"Particle system name",
	0, "*",
	PROP_STRING, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {64, 0, 0}, 0,
	NULL, 85458949, NULL, NULL,
	0, -1, NULL},
	ParticleSystem_name_get, ParticleSystem_name_length, ParticleSystem_name_set, NULL, NULL, NULL, 64, ""
};

PointerPropertyRNA rna_ParticleSystem_settings = {
	{(PropertyRNA *)&rna_ParticleSystem_particles, (PropertyRNA *)&rna_ParticleSystem_name,
	-1, "settings", 8650753, "Settings",
	"Particle system settings",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Particle_reset, 0, NULL, NULL,
	0, -1, NULL},
	ParticleSystem_settings_get, ParticleSystem_settings_set, NULL, NULL,&RNA_ParticleSettings
};

CollectionPropertyRNA rna_ParticleSystem_particles = {
	{(PropertyRNA *)&rna_ParticleSystem_child_particles, (PropertyRNA *)&rna_ParticleSystem_settings,
	-1, "particles", 16384, "Particles",
	"Particles generated by the particle system",
	0, "*",
	PROP_COLLECTION, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	ParticleSystem_particles_begin, ParticleSystem_particles_next, ParticleSystem_particles_end, ParticleSystem_particles_get, ParticleSystem_particles_length, ParticleSystem_particles_lookup_int, NULL, NULL, &RNA_Particle
};

CollectionPropertyRNA rna_ParticleSystem_child_particles = {
	{(PropertyRNA *)&rna_ParticleSystem_seed, (PropertyRNA *)&rna_ParticleSystem_particles,
	-1, "child_particles", 16384, "Child Particles",
	"Child particles generated by the particle system",
	0, "*",
	PROP_COLLECTION, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	ParticleSystem_child_particles_begin, ParticleSystem_child_particles_next, ParticleSystem_child_particles_end, ParticleSystem_child_particles_get, ParticleSystem_child_particles_length, ParticleSystem_child_particles_lookup_int, NULL, NULL, &RNA_ChildParticle
};

IntPropertyRNA rna_ParticleSystem_seed = {
	{(PropertyRNA *)&rna_ParticleSystem_child_seed, (PropertyRNA *)&rna_ParticleSystem_child_particles,
	-1, "seed", 8195, "Seed",
	"Offset in the random number table, to get a different randomized result",
	0, "*",
	PROP_INT, PROP_UNSIGNED | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Particle_reset, 0, NULL, NULL,
	offsetof(ParticleSystem, seed), 0, NULL},
	ParticleSystem_seed_get, ParticleSystem_seed_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL,
	0, 10000, 0, INT_MAX, 1, 0, NULL
};

IntPropertyRNA rna_ParticleSystem_child_seed = {
	{(PropertyRNA *)&rna_ParticleSystem_is_global_hair, (PropertyRNA *)&rna_ParticleSystem_seed,
	-1, "child_seed", 8195, "Child Seed",
	"Offset in the random number table for child particles, to get a different randomized result",
	0, "*",
	PROP_INT, PROP_UNSIGNED | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Particle_redo_child, 0, NULL, NULL,
	offsetof(ParticleSystem, child_seed), 0, NULL},
	ParticleSystem_child_seed_get, ParticleSystem_child_seed_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL,
	0, 10000, 0, INT_MAX, 1, 0, NULL
};

BoolPropertyRNA rna_ParticleSystem_is_global_hair = {
	{(PropertyRNA *)&rna_ParticleSystem_use_hair_dynamics, (PropertyRNA *)&rna_ParticleSystem_child_seed,
	-1, "is_global_hair", 2, "Global Hair",
	"Hair keys are in global coordinate space",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	ParticleSystem_is_global_hair_get, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_ParticleSystem_use_hair_dynamics = {
	{(PropertyRNA *)&rna_ParticleSystem_cloth, (PropertyRNA *)&rna_ParticleSystem_is_global_hair,
	-1, "use_hair_dynamics", 3, "Hair Dynamics",
	"Enable hair dynamics using cloth simulation",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Particle_hair_dynamics, 0, NULL, NULL,
	0, -1, NULL},
	ParticleSystem_use_hair_dynamics_get, ParticleSystem_use_hair_dynamics_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

PointerPropertyRNA rna_ParticleSystem_cloth = {
	{(PropertyRNA *)&rna_ParticleSystem_reactor_target_object, (PropertyRNA *)&rna_ParticleSystem_use_hair_dynamics,
	-1, "cloth", 8650752, "Cloth",
	"Cloth dynamics for hair",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	ParticleSystem_cloth_get, NULL, NULL, NULL,&RNA_ClothModifier
};

PointerPropertyRNA rna_ParticleSystem_reactor_target_object = {
	{(PropertyRNA *)&rna_ParticleSystem_reactor_target_particle_system, (PropertyRNA *)&rna_ParticleSystem_cloth,
	-1, "reactor_target_object", 8388609, "Reactor Target Object",
	"For reactor systems, the object that has the target particle system (empty if same object)",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Particle_reset, 0, NULL, NULL,
	0, -1, NULL},
	ParticleSystem_reactor_target_object_get, ParticleSystem_reactor_target_object_set, NULL, NULL,&RNA_Object
};

IntPropertyRNA rna_ParticleSystem_reactor_target_particle_system = {
	{(PropertyRNA *)&rna_ParticleSystem_use_keyed_timing, (PropertyRNA *)&rna_ParticleSystem_reactor_target_object,
	-1, "reactor_target_particle_system", 8195, "Reactor Target Particle System",
	"For reactor systems, index of particle system on the target object",
	0, "*",
	PROP_INT, PROP_UNSIGNED | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Particle_reset, 0, NULL, NULL,
	offsetof(ParticleSystem, target_psys), 1, NULL},
	ParticleSystem_reactor_target_particle_system_get, ParticleSystem_reactor_target_particle_system_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL,
	1, 32767, 1, 32767, 1, 0, NULL
};

BoolPropertyRNA rna_ParticleSystem_use_keyed_timing = {
	{(PropertyRNA *)&rna_ParticleSystem_targets, (PropertyRNA *)&rna_ParticleSystem_reactor_target_particle_system,
	-1, "use_keyed_timing", 1, "Keyed timing",
	"Use key times",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Particle_redo, 0, NULL, NULL,
	0, -1, NULL},
	ParticleSystem_use_keyed_timing_get, ParticleSystem_use_keyed_timing_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

CollectionPropertyRNA rna_ParticleSystem_targets = {
	{(PropertyRNA *)&rna_ParticleSystem_active_particle_target, (PropertyRNA *)&rna_ParticleSystem_use_keyed_timing,
	-1, "targets", 0, "Targets",
	"Target particle systems",
	0, "*",
	PROP_COLLECTION, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	ParticleSystem_targets_begin, ParticleSystem_targets_next, ParticleSystem_targets_end, ParticleSystem_targets_get, NULL, ParticleSystem_targets_lookup_int, ParticleSystem_targets_lookup_string, NULL, &RNA_ParticleTarget
};

PointerPropertyRNA rna_ParticleSystem_active_particle_target = {
	{(PropertyRNA *)&rna_ParticleSystem_active_particle_target_index, (PropertyRNA *)&rna_ParticleSystem_targets,
	-1, "active_particle_target", 8388608, "Active Particle Target",
	"",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	ParticleSystem_active_particle_target_get, NULL, NULL, NULL,&RNA_ParticleTarget
};

IntPropertyRNA rna_ParticleSystem_active_particle_target_index = {
	{(PropertyRNA *)&rna_ParticleSystem_billboard_normal_uv, (PropertyRNA *)&rna_ParticleSystem_active_particle_target,
	-1, "active_particle_target_index", 3, "Active Particle Target Index",
	"",
	0, "*",
	PROP_INT, PROP_UNSIGNED | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	ParticleSystem_active_particle_target_index_get, ParticleSystem_active_particle_target_index_set, NULL, NULL, rna_ParticleSystem_active_particle_target_index_range, NULL, NULL, NULL, NULL, NULL,
	0, 10000, 0, INT_MAX, 1, 0, NULL
};

StringPropertyRNA rna_ParticleSystem_billboard_normal_uv = {
	{(PropertyRNA *)&rna_ParticleSystem_billboard_time_index_uv, (PropertyRNA *)&rna_ParticleSystem_active_particle_target_index,
	-1, "billboard_normal_uv", 262145, "Billboard Normal UV",
	"UV map to control billboard normals",
	0, "*",
	PROP_STRING, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	ParticleSystem_billboard_normal_uv_get, ParticleSystem_billboard_normal_uv_length, ParticleSystem_billboard_normal_uv_set, NULL, NULL, NULL, 32, ""
};

StringPropertyRNA rna_ParticleSystem_billboard_time_index_uv = {
	{(PropertyRNA *)&rna_ParticleSystem_billboard_split_uv, (PropertyRNA *)&rna_ParticleSystem_billboard_normal_uv,
	-1, "billboard_time_index_uv", 262145, "Billboard Time Index UV",
	"UV map to control billboard time index (X-Y)",
	0, "*",
	PROP_STRING, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	ParticleSystem_billboard_time_index_uv_get, ParticleSystem_billboard_time_index_uv_length, ParticleSystem_billboard_time_index_uv_set, NULL, NULL, NULL, 32, ""
};

StringPropertyRNA rna_ParticleSystem_billboard_split_uv = {
	{(PropertyRNA *)&rna_ParticleSystem_vertex_group_density, (PropertyRNA *)&rna_ParticleSystem_billboard_time_index_uv,
	-1, "billboard_split_uv", 262145, "Billboard Split UV",
	"UV map to control billboard splitting",
	0, "*",
	PROP_STRING, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	ParticleSystem_billboard_split_uv_get, ParticleSystem_billboard_split_uv_length, ParticleSystem_billboard_split_uv_set, NULL, NULL, NULL, 32, ""
};

StringPropertyRNA rna_ParticleSystem_vertex_group_density = {
	{(PropertyRNA *)&rna_ParticleSystem_invert_vertex_group_density, (PropertyRNA *)&rna_ParticleSystem_billboard_split_uv,
	-1, "vertex_group_density", 262145, "Vertex Group Density",
	"Vertex group to control density",
	0, "*",
	PROP_STRING, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Particle_reset, 0, NULL, NULL,
	0, -1, NULL},
	ParticleSystem_vertex_group_density_get, ParticleSystem_vertex_group_density_length, ParticleSystem_vertex_group_density_set, NULL, NULL, NULL, 0, ""
};

BoolPropertyRNA rna_ParticleSystem_invert_vertex_group_density = {
	{(PropertyRNA *)&rna_ParticleSystem_vertex_group_velocity, (PropertyRNA *)&rna_ParticleSystem_vertex_group_density,
	-1, "invert_vertex_group_density", 3, "Vertex Group Density Negate",
	"Negate the effect of the density vertex group",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Particle_reset, 0, NULL, NULL,
	0, -1, NULL},
	ParticleSystem_invert_vertex_group_density_get, ParticleSystem_invert_vertex_group_density_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

StringPropertyRNA rna_ParticleSystem_vertex_group_velocity = {
	{(PropertyRNA *)&rna_ParticleSystem_invert_vertex_group_velocity, (PropertyRNA *)&rna_ParticleSystem_invert_vertex_group_density,
	-1, "vertex_group_velocity", 262145, "Vertex Group Velocity",
	"Vertex group to control velocity",
	0, "*",
	PROP_STRING, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Particle_reset, 0, NULL, NULL,
	0, -1, NULL},
	ParticleSystem_vertex_group_velocity_get, ParticleSystem_vertex_group_velocity_length, ParticleSystem_vertex_group_velocity_set, NULL, NULL, NULL, 0, ""
};

BoolPropertyRNA rna_ParticleSystem_invert_vertex_group_velocity = {
	{(PropertyRNA *)&rna_ParticleSystem_vertex_group_length, (PropertyRNA *)&rna_ParticleSystem_vertex_group_velocity,
	-1, "invert_vertex_group_velocity", 3, "Vertex Group Velocity Negate",
	"Negate the effect of the velocity vertex group",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Particle_reset, 0, NULL, NULL,
	0, -1, NULL},
	ParticleSystem_invert_vertex_group_velocity_get, ParticleSystem_invert_vertex_group_velocity_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

StringPropertyRNA rna_ParticleSystem_vertex_group_length = {
	{(PropertyRNA *)&rna_ParticleSystem_invert_vertex_group_length, (PropertyRNA *)&rna_ParticleSystem_invert_vertex_group_velocity,
	-1, "vertex_group_length", 262145, "Vertex Group Length",
	"Vertex group to control length",
	0, "*",
	PROP_STRING, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Particle_redo, 0, NULL, NULL,
	0, -1, NULL},
	ParticleSystem_vertex_group_length_get, ParticleSystem_vertex_group_length_length, ParticleSystem_vertex_group_length_set, NULL, NULL, NULL, 0, ""
};

BoolPropertyRNA rna_ParticleSystem_invert_vertex_group_length = {
	{(PropertyRNA *)&rna_ParticleSystem_vertex_group_clump, (PropertyRNA *)&rna_ParticleSystem_vertex_group_length,
	-1, "invert_vertex_group_length", 3, "Vertex Group Length Negate",
	"Negate the effect of the length vertex group",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Particle_redo, 0, NULL, NULL,
	0, -1, NULL},
	ParticleSystem_invert_vertex_group_length_get, ParticleSystem_invert_vertex_group_length_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

StringPropertyRNA rna_ParticleSystem_vertex_group_clump = {
	{(PropertyRNA *)&rna_ParticleSystem_invert_vertex_group_clump, (PropertyRNA *)&rna_ParticleSystem_invert_vertex_group_length,
	-1, "vertex_group_clump", 262145, "Vertex Group Clump",
	"Vertex group to control clump",
	0, "*",
	PROP_STRING, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Particle_redo_child, 0, NULL, NULL,
	0, -1, NULL},
	ParticleSystem_vertex_group_clump_get, ParticleSystem_vertex_group_clump_length, ParticleSystem_vertex_group_clump_set, NULL, NULL, NULL, 0, ""
};

BoolPropertyRNA rna_ParticleSystem_invert_vertex_group_clump = {
	{(PropertyRNA *)&rna_ParticleSystem_vertex_group_kink, (PropertyRNA *)&rna_ParticleSystem_vertex_group_clump,
	-1, "invert_vertex_group_clump", 3, "Vertex Group Clump Negate",
	"Negate the effect of the clump vertex group",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Particle_redo_child, 0, NULL, NULL,
	0, -1, NULL},
	ParticleSystem_invert_vertex_group_clump_get, ParticleSystem_invert_vertex_group_clump_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

StringPropertyRNA rna_ParticleSystem_vertex_group_kink = {
	{(PropertyRNA *)&rna_ParticleSystem_invert_vertex_group_kink, (PropertyRNA *)&rna_ParticleSystem_invert_vertex_group_clump,
	-1, "vertex_group_kink", 262145, "Vertex Group Kink",
	"Vertex group to control kink",
	0, "*",
	PROP_STRING, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Particle_redo_child, 0, NULL, NULL,
	0, -1, NULL},
	ParticleSystem_vertex_group_kink_get, ParticleSystem_vertex_group_kink_length, ParticleSystem_vertex_group_kink_set, NULL, NULL, NULL, 0, ""
};

BoolPropertyRNA rna_ParticleSystem_invert_vertex_group_kink = {
	{(PropertyRNA *)&rna_ParticleSystem_vertex_group_roughness_1, (PropertyRNA *)&rna_ParticleSystem_vertex_group_kink,
	-1, "invert_vertex_group_kink", 3, "Vertex Group Kink Negate",
	"Negate the effect of the kink vertex group",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Particle_redo_child, 0, NULL, NULL,
	0, -1, NULL},
	ParticleSystem_invert_vertex_group_kink_get, ParticleSystem_invert_vertex_group_kink_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

StringPropertyRNA rna_ParticleSystem_vertex_group_roughness_1 = {
	{(PropertyRNA *)&rna_ParticleSystem_invert_vertex_group_roughness_1, (PropertyRNA *)&rna_ParticleSystem_invert_vertex_group_kink,
	-1, "vertex_group_roughness_1", 262145, "Vertex Group Roughness 1",
	"Vertex group to control roughness 1",
	0, "*",
	PROP_STRING, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Particle_redo_child, 0, NULL, NULL,
	0, -1, NULL},
	ParticleSystem_vertex_group_roughness_1_get, ParticleSystem_vertex_group_roughness_1_length, ParticleSystem_vertex_group_roughness_1_set, NULL, NULL, NULL, 0, ""
};

BoolPropertyRNA rna_ParticleSystem_invert_vertex_group_roughness_1 = {
	{(PropertyRNA *)&rna_ParticleSystem_vertex_group_roughness_2, (PropertyRNA *)&rna_ParticleSystem_vertex_group_roughness_1,
	-1, "invert_vertex_group_roughness_1", 3, "Vertex Group Roughness 1 Negate",
	"Negate the effect of the roughness 1 vertex group",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Particle_redo_child, 0, NULL, NULL,
	0, -1, NULL},
	ParticleSystem_invert_vertex_group_roughness_1_get, ParticleSystem_invert_vertex_group_roughness_1_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

StringPropertyRNA rna_ParticleSystem_vertex_group_roughness_2 = {
	{(PropertyRNA *)&rna_ParticleSystem_invert_vertex_group_roughness_2, (PropertyRNA *)&rna_ParticleSystem_invert_vertex_group_roughness_1,
	-1, "vertex_group_roughness_2", 262145, "Vertex Group Roughness 2",
	"Vertex group to control roughness 2",
	0, "*",
	PROP_STRING, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Particle_redo_child, 0, NULL, NULL,
	0, -1, NULL},
	ParticleSystem_vertex_group_roughness_2_get, ParticleSystem_vertex_group_roughness_2_length, ParticleSystem_vertex_group_roughness_2_set, NULL, NULL, NULL, 0, ""
};

BoolPropertyRNA rna_ParticleSystem_invert_vertex_group_roughness_2 = {
	{(PropertyRNA *)&rna_ParticleSystem_vertex_group_roughness_end, (PropertyRNA *)&rna_ParticleSystem_vertex_group_roughness_2,
	-1, "invert_vertex_group_roughness_2", 3, "Vertex Group Roughness 2 Negate",
	"Negate the effect of the roughness 2 vertex group",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Particle_redo_child, 0, NULL, NULL,
	0, -1, NULL},
	ParticleSystem_invert_vertex_group_roughness_2_get, ParticleSystem_invert_vertex_group_roughness_2_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

StringPropertyRNA rna_ParticleSystem_vertex_group_roughness_end = {
	{(PropertyRNA *)&rna_ParticleSystem_invert_vertex_group_roughness_end, (PropertyRNA *)&rna_ParticleSystem_invert_vertex_group_roughness_2,
	-1, "vertex_group_roughness_end", 262145, "Vertex Group Roughness End",
	"Vertex group to control roughness end",
	0, "*",
	PROP_STRING, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Particle_redo_child, 0, NULL, NULL,
	0, -1, NULL},
	ParticleSystem_vertex_group_roughness_end_get, ParticleSystem_vertex_group_roughness_end_length, ParticleSystem_vertex_group_roughness_end_set, NULL, NULL, NULL, 0, ""
};

BoolPropertyRNA rna_ParticleSystem_invert_vertex_group_roughness_end = {
	{(PropertyRNA *)&rna_ParticleSystem_vertex_group_size, (PropertyRNA *)&rna_ParticleSystem_vertex_group_roughness_end,
	-1, "invert_vertex_group_roughness_end", 3, "Vertex Group Roughness End Negate",
	"Negate the effect of the roughness end vertex group",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Particle_redo_child, 0, NULL, NULL,
	0, -1, NULL},
	ParticleSystem_invert_vertex_group_roughness_end_get, ParticleSystem_invert_vertex_group_roughness_end_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

StringPropertyRNA rna_ParticleSystem_vertex_group_size = {
	{(PropertyRNA *)&rna_ParticleSystem_invert_vertex_group_size, (PropertyRNA *)&rna_ParticleSystem_invert_vertex_group_roughness_end,
	-1, "vertex_group_size", 262145, "Vertex Group Size",
	"Vertex group to control size",
	0, "*",
	PROP_STRING, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Particle_reset, 0, NULL, NULL,
	0, -1, NULL},
	ParticleSystem_vertex_group_size_get, ParticleSystem_vertex_group_size_length, ParticleSystem_vertex_group_size_set, NULL, NULL, NULL, 0, ""
};

BoolPropertyRNA rna_ParticleSystem_invert_vertex_group_size = {
	{(PropertyRNA *)&rna_ParticleSystem_vertex_group_tangent, (PropertyRNA *)&rna_ParticleSystem_vertex_group_size,
	-1, "invert_vertex_group_size", 3, "Vertex Group Size Negate",
	"Negate the effect of the size vertex group",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Particle_reset, 0, NULL, NULL,
	0, -1, NULL},
	ParticleSystem_invert_vertex_group_size_get, ParticleSystem_invert_vertex_group_size_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

StringPropertyRNA rna_ParticleSystem_vertex_group_tangent = {
	{(PropertyRNA *)&rna_ParticleSystem_invert_vertex_group_tangent, (PropertyRNA *)&rna_ParticleSystem_invert_vertex_group_size,
	-1, "vertex_group_tangent", 262145, "Vertex Group Tangent",
	"Vertex group to control tangent",
	0, "*",
	PROP_STRING, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Particle_reset, 0, NULL, NULL,
	0, -1, NULL},
	ParticleSystem_vertex_group_tangent_get, ParticleSystem_vertex_group_tangent_length, ParticleSystem_vertex_group_tangent_set, NULL, NULL, NULL, 0, ""
};

BoolPropertyRNA rna_ParticleSystem_invert_vertex_group_tangent = {
	{(PropertyRNA *)&rna_ParticleSystem_vertex_group_rotation, (PropertyRNA *)&rna_ParticleSystem_vertex_group_tangent,
	-1, "invert_vertex_group_tangent", 3, "Vertex Group Tangent Negate",
	"Negate the effect of the tangent vertex group",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Particle_reset, 0, NULL, NULL,
	0, -1, NULL},
	ParticleSystem_invert_vertex_group_tangent_get, ParticleSystem_invert_vertex_group_tangent_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

StringPropertyRNA rna_ParticleSystem_vertex_group_rotation = {
	{(PropertyRNA *)&rna_ParticleSystem_invert_vertex_group_rotation, (PropertyRNA *)&rna_ParticleSystem_invert_vertex_group_tangent,
	-1, "vertex_group_rotation", 262145, "Vertex Group Rotation",
	"Vertex group to control rotation",
	0, "*",
	PROP_STRING, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Particle_reset, 0, NULL, NULL,
	0, -1, NULL},
	ParticleSystem_vertex_group_rotation_get, ParticleSystem_vertex_group_rotation_length, ParticleSystem_vertex_group_rotation_set, NULL, NULL, NULL, 0, ""
};

BoolPropertyRNA rna_ParticleSystem_invert_vertex_group_rotation = {
	{(PropertyRNA *)&rna_ParticleSystem_vertex_group_field, (PropertyRNA *)&rna_ParticleSystem_vertex_group_rotation,
	-1, "invert_vertex_group_rotation", 3, "Vertex Group Rotation Negate",
	"Negate the effect of the rotation vertex group",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Particle_reset, 0, NULL, NULL,
	0, -1, NULL},
	ParticleSystem_invert_vertex_group_rotation_get, ParticleSystem_invert_vertex_group_rotation_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

StringPropertyRNA rna_ParticleSystem_vertex_group_field = {
	{(PropertyRNA *)&rna_ParticleSystem_invert_vertex_group_field, (PropertyRNA *)&rna_ParticleSystem_invert_vertex_group_rotation,
	-1, "vertex_group_field", 262145, "Vertex Group Field",
	"Vertex group to control field",
	0, "*",
	PROP_STRING, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Particle_reset, 0, NULL, NULL,
	0, -1, NULL},
	ParticleSystem_vertex_group_field_get, ParticleSystem_vertex_group_field_length, ParticleSystem_vertex_group_field_set, NULL, NULL, NULL, 0, ""
};

BoolPropertyRNA rna_ParticleSystem_invert_vertex_group_field = {
	{(PropertyRNA *)&rna_ParticleSystem_point_cache, (PropertyRNA *)&rna_ParticleSystem_vertex_group_field,
	-1, "invert_vertex_group_field", 3, "Vertex Group Field Negate",
	"Negate the effect of the field vertex group",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Particle_reset, 0, NULL, NULL,
	0, -1, NULL},
	ParticleSystem_invert_vertex_group_field_get, ParticleSystem_invert_vertex_group_field_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

PointerPropertyRNA rna_ParticleSystem_point_cache = {
	{(PropertyRNA *)&rna_ParticleSystem_has_multiple_caches, (PropertyRNA *)&rna_ParticleSystem_invert_vertex_group_field,
	-1, "point_cache", 8650752, "Point Cache",
	"",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	ParticleSystem_point_cache_get, NULL, NULL, NULL,&RNA_PointCache
};

BoolPropertyRNA rna_ParticleSystem_has_multiple_caches = {
	{(PropertyRNA *)&rna_ParticleSystem_parent, (PropertyRNA *)&rna_ParticleSystem_point_cache,
	-1, "has_multiple_caches", 2, "Multiple Caches",
	"Particle system has multiple point caches",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	ParticleSystem_has_multiple_caches_get, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

PointerPropertyRNA rna_ParticleSystem_parent = {
	{(PropertyRNA *)&rna_ParticleSystem_is_editable, (PropertyRNA *)&rna_ParticleSystem_has_multiple_caches,
	-1, "parent", 8388609, "Parent",
	"Use this object\'s coordinate system instead of global coordinate system",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Particle_redo, 0, NULL, NULL,
	0, -1, NULL},
	ParticleSystem_parent_get, ParticleSystem_parent_set, NULL, NULL,&RNA_Object
};

BoolPropertyRNA rna_ParticleSystem_is_editable = {
	{(PropertyRNA *)&rna_ParticleSystem_is_edited, (PropertyRNA *)&rna_ParticleSystem_parent,
	-1, "is_editable", 2, "Editable",
	"Particle system can be edited in particle mode",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	ParticleSystem_is_editable_get, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_ParticleSystem_is_edited = {
	{(PropertyRNA *)&rna_ParticleSystem_dt_frac, (PropertyRNA *)&rna_ParticleSystem_is_editable,
	-1, "is_edited", 2, "Edited",
	"Particle system has been edited in particle mode",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	ParticleSystem_is_edited_get, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

FloatPropertyRNA rna_ParticleSystem_dt_frac = {
	{NULL, (PropertyRNA *)&rna_ParticleSystem_is_edited,
	-1, "dt_frac", 8194, "Timestep",
	"The current simulation time step size, as a fraction of a frame",
	0, "*",
	PROP_FLOAT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	offsetof(ParticleSystem, dt_frac), 4, NULL},
	ParticleSystem_dt_frac_get, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0099009899f, 1.0f, 0.0099009899f, 1.0f, 10.0f, 3, 0.0f, NULL
};

PointerPropertyRNA rna_ParticleSystem_set_resolution_scene = {
	{(PropertyRNA *)&rna_ParticleSystem_set_resolution_object, NULL,
	-1, "scene", 8388608, "",
	"Scene",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	NULL, NULL, NULL, NULL,&RNA_Scene
};

PointerPropertyRNA rna_ParticleSystem_set_resolution_object = {
	{(PropertyRNA *)&rna_ParticleSystem_set_resolution_resolution, (PropertyRNA *)&rna_ParticleSystem_set_resolution_scene,
	-1, "object", 8388608, "",
	"Object",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	NULL, NULL, NULL, NULL,&RNA_Object
};

static EnumPropertyItem rna_ParticleSystem_set_resolution_resolution_items[3] = {
	{1, "PREVIEW", 0, "Preview", "Apply modifier preview settings"},
	{2, "RENDER", 0, "Render", "Apply modifier render settings"},
	{0, NULL, 0, NULL, NULL}
};

EnumPropertyRNA rna_ParticleSystem_set_resolution_resolution = {
	{NULL, (PropertyRNA *)&rna_ParticleSystem_set_resolution_object,
	-1, "resolution", 3, "",
	"Resolution settings to apply",
	0, "*",
	PROP_ENUM, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	NULL, NULL, NULL, NULL, NULL, NULL, rna_ParticleSystem_set_resolution_resolution_items, 2, 1
};

FunctionRNA rna_ParticleSystem_set_resolution_func = {
	{(FunctionRNA *)&rna_ParticleSystem_co_hair_func, NULL,
	NULL,
	{(PropertyRNA *)&rna_ParticleSystem_set_resolution_scene, (PropertyRNA *)&rna_ParticleSystem_set_resolution_resolution}},
	"set_resolution", 0, "Set the resolution to use for the number of particles",
	ParticleSystem_set_resolution_call,
	NULL
};

PointerPropertyRNA rna_ParticleSystem_co_hair_object = {
	{(PropertyRNA *)&rna_ParticleSystem_co_hair_particle_no, NULL,
	-1, "object", 8650756, "",
	"Object",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	NULL, NULL, NULL, NULL,&RNA_Object
};

IntPropertyRNA rna_ParticleSystem_co_hair_particle_no = {
	{(PropertyRNA *)&rna_ParticleSystem_co_hair_step, (PropertyRNA *)&rna_ParticleSystem_co_hair_object,
	-1, "particle_no", 3, "Particle no",
	"",
	0, "*",
	PROP_INT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL,
	INT_MIN, INT_MAX, INT_MIN, INT_MAX, 1, 0, NULL
};

IntPropertyRNA rna_ParticleSystem_co_hair_step = {
	{(PropertyRNA *)&rna_ParticleSystem_co_hair_co, (PropertyRNA *)&rna_ParticleSystem_co_hair_particle_no,
	-1, "step", 3, "step no",
	"",
	0, "*",
	PROP_INT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL,
	INT_MIN, INT_MAX, INT_MIN, INT_MAX, 1, 0, NULL
};

static float rna_ParticleSystem_co_hair_co_default[3] = {
	0.0f,
	0.0f,
	0.0f
};

FloatPropertyRNA rna_ParticleSystem_co_hair_co = {
	{NULL, (PropertyRNA *)&rna_ParticleSystem_co_hair_step,
	-1, "co", 8388619, "Co",
	"Exported hairkey location",
	0, "*",
	PROP_FLOAT, PROP_XYZ | PROP_UNIT_NONE, NULL, 1, {3, 0, 0}, 3,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, -10000.0f, 10000.0f, -FLT_MAX, FLT_MAX, 1.0f, 3, 0.0f, rna_ParticleSystem_co_hair_co_default
};

FunctionRNA rna_ParticleSystem_co_hair_func = {
	{(FunctionRNA *)&rna_ParticleSystem_uv_on_emitter_func, (FunctionRNA *)&rna_ParticleSystem_set_resolution_func,
	NULL,
	{(PropertyRNA *)&rna_ParticleSystem_co_hair_object, (PropertyRNA *)&rna_ParticleSystem_co_hair_co}},
	"co_hair", 0, "Obtain cache hair data",
	ParticleSystem_co_hair_call,
	NULL
};

PointerPropertyRNA rna_ParticleSystem_uv_on_emitter_modifier = {
	{(PropertyRNA *)&rna_ParticleSystem_uv_on_emitter_particle, NULL,
	-1, "modifier", 8650756, "",
	"Particle modifier",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	NULL, NULL, NULL, NULL,&RNA_ParticleSystemModifier
};

PointerPropertyRNA rna_ParticleSystem_uv_on_emitter_particle = {
	{(PropertyRNA *)&rna_ParticleSystem_uv_on_emitter_particle_no, (PropertyRNA *)&rna_ParticleSystem_uv_on_emitter_modifier,
	-1, "particle", 8650756, "",
	"Particle",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	NULL, NULL, NULL, NULL,&RNA_Particle
};

IntPropertyRNA rna_ParticleSystem_uv_on_emitter_particle_no = {
	{(PropertyRNA *)&rna_ParticleSystem_uv_on_emitter_uv_no, (PropertyRNA *)&rna_ParticleSystem_uv_on_emitter_particle,
	-1, "particle_no", 3, "Particle no",
	"",
	0, "*",
	PROP_INT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL,
	INT_MIN, INT_MAX, INT_MIN, INT_MAX, 1, 0, NULL
};

IntPropertyRNA rna_ParticleSystem_uv_on_emitter_uv_no = {
	{(PropertyRNA *)&rna_ParticleSystem_uv_on_emitter_uv, (PropertyRNA *)&rna_ParticleSystem_uv_on_emitter_particle_no,
	-1, "uv_no", 3, "UV no",
	"",
	0, "*",
	PROP_INT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL,
	INT_MIN, INT_MAX, INT_MIN, INT_MAX, 1, 0, NULL
};

static float rna_ParticleSystem_uv_on_emitter_uv_default[2] = {
	0.0f,
	0.0f
};

FloatPropertyRNA rna_ParticleSystem_uv_on_emitter_uv = {
	{NULL, (PropertyRNA *)&rna_ParticleSystem_uv_on_emitter_uv_no,
	-1, "uv", 8388619, "uv",
	"",
	0, "*",
	PROP_FLOAT, PROP_COORDS | PROP_UNIT_NONE, NULL, 1, {2, 0, 0}, 2,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, -10000.0f, 10000.0f, -FLT_MAX, FLT_MAX, 10.0f, 3, 0.0f, rna_ParticleSystem_uv_on_emitter_uv_default
};

FunctionRNA rna_ParticleSystem_uv_on_emitter_func = {
	{(FunctionRNA *)&rna_ParticleSystem_mcol_on_emitter_func, (FunctionRNA *)&rna_ParticleSystem_co_hair_func,
	NULL,
	{(PropertyRNA *)&rna_ParticleSystem_uv_on_emitter_modifier, (PropertyRNA *)&rna_ParticleSystem_uv_on_emitter_uv}},
	"uv_on_emitter", 16, "Obtain uv for all particles",
	ParticleSystem_uv_on_emitter_call,
	NULL
};

PointerPropertyRNA rna_ParticleSystem_mcol_on_emitter_modifier = {
	{(PropertyRNA *)&rna_ParticleSystem_mcol_on_emitter_particle, NULL,
	-1, "modifier", 8650756, "",
	"Particle modifier",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	NULL, NULL, NULL, NULL,&RNA_ParticleSystemModifier
};

PointerPropertyRNA rna_ParticleSystem_mcol_on_emitter_particle = {
	{(PropertyRNA *)&rna_ParticleSystem_mcol_on_emitter_particle_no, (PropertyRNA *)&rna_ParticleSystem_mcol_on_emitter_modifier,
	-1, "particle", 8650756, "",
	"Particle",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	NULL, NULL, NULL, NULL,&RNA_Particle
};

IntPropertyRNA rna_ParticleSystem_mcol_on_emitter_particle_no = {
	{(PropertyRNA *)&rna_ParticleSystem_mcol_on_emitter_vcol_no, (PropertyRNA *)&rna_ParticleSystem_mcol_on_emitter_particle,
	-1, "particle_no", 3, "Particle no",
	"",
	0, "*",
	PROP_INT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL,
	INT_MIN, INT_MAX, INT_MIN, INT_MAX, 1, 0, NULL
};

IntPropertyRNA rna_ParticleSystem_mcol_on_emitter_vcol_no = {
	{(PropertyRNA *)&rna_ParticleSystem_mcol_on_emitter_mcol, (PropertyRNA *)&rna_ParticleSystem_mcol_on_emitter_particle_no,
	-1, "vcol_no", 3, "vcol no",
	"",
	0, "*",
	PROP_INT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL,
	INT_MIN, INT_MAX, INT_MIN, INT_MAX, 1, 0, NULL
};

static float rna_ParticleSystem_mcol_on_emitter_mcol_default[3] = {
	0.0f,
	0.0f,
	0.0f
};

FloatPropertyRNA rna_ParticleSystem_mcol_on_emitter_mcol = {
	{NULL, (PropertyRNA *)&rna_ParticleSystem_mcol_on_emitter_vcol_no,
	-1, "mcol", 8388619, "mcol",
	"",
	0, "*",
	PROP_FLOAT, PROP_COLOR | PROP_UNIT_NONE, NULL, 1, {3, 0, 0}, 3,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 1.0f, 0.0f, FLT_MAX, 10.0f, 3, 0.0f, rna_ParticleSystem_mcol_on_emitter_mcol_default
};

FunctionRNA rna_ParticleSystem_mcol_on_emitter_func = {
	{NULL, (FunctionRNA *)&rna_ParticleSystem_uv_on_emitter_func,
	NULL,
	{(PropertyRNA *)&rna_ParticleSystem_mcol_on_emitter_modifier, (PropertyRNA *)&rna_ParticleSystem_mcol_on_emitter_mcol}},
	"mcol_on_emitter", 16, "Obtain mcol for all particles",
	ParticleSystem_mcol_on_emitter_call,
	NULL
};

StructRNA RNA_ParticleSystem = {
	{(ContainerRNA *)&RNA_ParticleSettingsTextureSlot, (ContainerRNA *)&RNA_ParticleDupliWeight,
	NULL,
	{(PropertyRNA *)&rna_ParticleSystem_rna_properties, (PropertyRNA *)&rna_ParticleSystem_dt_frac}},
	"ParticleSystem", NULL, NULL, 4, "Particle System",
	"Particle system in an object",
	"*", 169,
	(PropertyRNA *)&rna_ParticleSystem_name, (PropertyRNA *)&rna_ParticleSystem_rna_properties,
	NULL,
	NULL,
	NULL,
	rna_ParticleSystem_path,
	NULL,
	NULL,
	NULL,
	NULL,
	{(FunctionRNA *)&rna_ParticleSystem_set_resolution_func, (FunctionRNA *)&rna_ParticleSystem_mcol_on_emitter_func}
};

/* Particle Settings Texture Slot */
static EnumPropertyItem rna_ParticleSettingsTextureSlot_texture_coords_items[6] = {
	{8, "GLOBAL", 0, "Global", "Use global coordinates for the texture coordinates"},
	{32, "OBJECT", 0, "Object", "Use linked object\'s coordinates for texture coordinates"},
	{16, "UV", 0, "UV", "Use UV coordinates for texture coordinates"},
	{1, "ORCO", 0, "Generated", "Use the original undeformed coordinates of the object"},
	{8192, "STRAND", 0, "Strand / Particle", "Use normalized strand texture coordinate (1D) or particle age (X) and trail position (Y)"},
	{0, NULL, 0, NULL, NULL}
};

EnumPropertyRNA rna_ParticleSettingsTextureSlot_texture_coords = {
	{(PropertyRNA *)&rna_ParticleSettingsTextureSlot_object, NULL,
	-1, "texture_coords", 3, "Texture Coordinates",
	"Texture coordinates used to map the texture onto the background",
	0, "*",
	PROP_ENUM, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Particle_reset, 0, NULL, NULL,
	0, -1, NULL},
	ParticleSettingsTextureSlot_texture_coords_get, ParticleSettingsTextureSlot_texture_coords_set, NULL, NULL, NULL, NULL, rna_ParticleSettingsTextureSlot_texture_coords_items, 5, 8
};

PointerPropertyRNA rna_ParticleSettingsTextureSlot_object = {
	{(PropertyRNA *)&rna_ParticleSettingsTextureSlot_uv_layer, (PropertyRNA *)&rna_ParticleSettingsTextureSlot_texture_coords,
	-1, "object", 8388609, "Object",
	"Object to use for mapping with Object texture coordinates",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Particle_reset, 0, NULL, NULL,
	0, -1, NULL},
	ParticleSettingsTextureSlot_object_get, ParticleSettingsTextureSlot_object_set, NULL, NULL,&RNA_Object
};

StringPropertyRNA rna_ParticleSettingsTextureSlot_uv_layer = {
	{(PropertyRNA *)&rna_ParticleSettingsTextureSlot_mapping_x, (PropertyRNA *)&rna_ParticleSettingsTextureSlot_object,
	-1, "uv_layer", 262145, "UV Map",
	"UV map to use for mapping with UV texture coordinates",
	0, "*",
	PROP_STRING, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {64, 0, 0}, 0,
	rna_Particle_reset, 0, NULL, NULL,
	0, -1, NULL},
	ParticleSettingsTextureSlot_uv_layer_get, ParticleSettingsTextureSlot_uv_layer_length, ParticleSettingsTextureSlot_uv_layer_set, NULL, NULL, NULL, 64, ""
};

static EnumPropertyItem rna_ParticleSettingsTextureSlot_mapping_x_items[5] = {
	{0, "NONE", 0, "None", ""},
	{1, "X", 0, "X", ""},
	{2, "Y", 0, "Y", ""},
	{3, "Z", 0, "Z", ""},
	{0, NULL, 0, NULL, NULL}
};

EnumPropertyRNA rna_ParticleSettingsTextureSlot_mapping_x = {
	{(PropertyRNA *)&rna_ParticleSettingsTextureSlot_mapping_y, (PropertyRNA *)&rna_ParticleSettingsTextureSlot_uv_layer,
	-1, "mapping_x", 3, "X Mapping",
	"",
	0, "*",
	PROP_ENUM, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Particle_reset, 0, NULL, NULL,
	0, -1, NULL},
	ParticleSettingsTextureSlot_mapping_x_get, ParticleSettingsTextureSlot_mapping_x_set, NULL, NULL, NULL, NULL, rna_ParticleSettingsTextureSlot_mapping_x_items, 4, 0
};

static EnumPropertyItem rna_ParticleSettingsTextureSlot_mapping_y_items[5] = {
	{0, "NONE", 0, "None", ""},
	{1, "X", 0, "X", ""},
	{2, "Y", 0, "Y", ""},
	{3, "Z", 0, "Z", ""},
	{0, NULL, 0, NULL, NULL}
};

EnumPropertyRNA rna_ParticleSettingsTextureSlot_mapping_y = {
	{(PropertyRNA *)&rna_ParticleSettingsTextureSlot_mapping_z, (PropertyRNA *)&rna_ParticleSettingsTextureSlot_mapping_x,
	-1, "mapping_y", 3, "Y Mapping",
	"",
	0, "*",
	PROP_ENUM, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Particle_reset, 0, NULL, NULL,
	0, -1, NULL},
	ParticleSettingsTextureSlot_mapping_y_get, ParticleSettingsTextureSlot_mapping_y_set, NULL, NULL, NULL, NULL, rna_ParticleSettingsTextureSlot_mapping_y_items, 4, 0
};

static EnumPropertyItem rna_ParticleSettingsTextureSlot_mapping_z_items[5] = {
	{0, "NONE", 0, "None", ""},
	{1, "X", 0, "X", ""},
	{2, "Y", 0, "Y", ""},
	{3, "Z", 0, "Z", ""},
	{0, NULL, 0, NULL, NULL}
};

EnumPropertyRNA rna_ParticleSettingsTextureSlot_mapping_z = {
	{(PropertyRNA *)&rna_ParticleSettingsTextureSlot_mapping, (PropertyRNA *)&rna_ParticleSettingsTextureSlot_mapping_y,
	-1, "mapping_z", 3, "Z Mapping",
	"",
	0, "*",
	PROP_ENUM, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Particle_reset, 0, NULL, NULL,
	0, -1, NULL},
	ParticleSettingsTextureSlot_mapping_z_get, ParticleSettingsTextureSlot_mapping_z_set, NULL, NULL, NULL, NULL, rna_ParticleSettingsTextureSlot_mapping_z_items, 4, 0
};

static EnumPropertyItem rna_ParticleSettingsTextureSlot_mapping_items[5] = {
	{0, "FLAT", 0, "Flat", "Map X and Y coordinates directly"},
	{1, "CUBE", 0, "Cube", "Map using the normal vector"},
	{2, "TUBE", 0, "Tube", "Map with Z as central axis"},
	{3, "SPHERE", 0, "Sphere", "Map with Z as central axis"},
	{0, NULL, 0, NULL, NULL}
};

EnumPropertyRNA rna_ParticleSettingsTextureSlot_mapping = {
	{(PropertyRNA *)&rna_ParticleSettingsTextureSlot_use_map_time, (PropertyRNA *)&rna_ParticleSettingsTextureSlot_mapping_z,
	-1, "mapping", 3, "Mapping",
	"",
	0, "*",
	PROP_ENUM, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Particle_reset, 0, NULL, NULL,
	0, -1, NULL},
	ParticleSettingsTextureSlot_mapping_get, ParticleSettingsTextureSlot_mapping_set, NULL, NULL, NULL, NULL, rna_ParticleSettingsTextureSlot_mapping_items, 4, 0
};

BoolPropertyRNA rna_ParticleSettingsTextureSlot_use_map_time = {
	{(PropertyRNA *)&rna_ParticleSettingsTextureSlot_use_map_life, (PropertyRNA *)&rna_ParticleSettingsTextureSlot_mapping,
	-1, "use_map_time", 3, "Emission Time",
	"Affect the emission time of the particles",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Particle_reset, 0, NULL, NULL,
	0, -1, NULL},
	ParticleSettingsTextureSlot_use_map_time_get, ParticleSettingsTextureSlot_use_map_time_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_ParticleSettingsTextureSlot_use_map_life = {
	{(PropertyRNA *)&rna_ParticleSettingsTextureSlot_use_map_density, (PropertyRNA *)&rna_ParticleSettingsTextureSlot_use_map_time,
	-1, "use_map_life", 3, "Life Time",
	"Affect the life time of the particles",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Particle_reset, 0, NULL, NULL,
	0, -1, NULL},
	ParticleSettingsTextureSlot_use_map_life_get, ParticleSettingsTextureSlot_use_map_life_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_ParticleSettingsTextureSlot_use_map_density = {
	{(PropertyRNA *)&rna_ParticleSettingsTextureSlot_use_map_size, (PropertyRNA *)&rna_ParticleSettingsTextureSlot_use_map_life,
	-1, "use_map_density", 3, "Density",
	"Affect the density of the particles",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Particle_reset, 0, NULL, NULL,
	0, -1, NULL},
	ParticleSettingsTextureSlot_use_map_density_get, ParticleSettingsTextureSlot_use_map_density_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_ParticleSettingsTextureSlot_use_map_size = {
	{(PropertyRNA *)&rna_ParticleSettingsTextureSlot_use_map_velocity, (PropertyRNA *)&rna_ParticleSettingsTextureSlot_use_map_density,
	-1, "use_map_size", 3, "Size",
	"Affect the particle size",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Particle_reset, 0, NULL, NULL,
	0, -1, NULL},
	ParticleSettingsTextureSlot_use_map_size_get, ParticleSettingsTextureSlot_use_map_size_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_ParticleSettingsTextureSlot_use_map_velocity = {
	{(PropertyRNA *)&rna_ParticleSettingsTextureSlot_use_map_field, (PropertyRNA *)&rna_ParticleSettingsTextureSlot_use_map_size,
	-1, "use_map_velocity", 3, "Initial Velocity",
	"Affect the particle initial velocity",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Particle_reset, 0, NULL, NULL,
	0, -1, NULL},
	ParticleSettingsTextureSlot_use_map_velocity_get, ParticleSettingsTextureSlot_use_map_velocity_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_ParticleSettingsTextureSlot_use_map_field = {
	{(PropertyRNA *)&rna_ParticleSettingsTextureSlot_use_map_gravity, (PropertyRNA *)&rna_ParticleSettingsTextureSlot_use_map_velocity,
	-1, "use_map_field", 3, "Force Field",
	"Affect the particle force fields",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Particle_reset, 0, NULL, NULL,
	0, -1, NULL},
	ParticleSettingsTextureSlot_use_map_field_get, ParticleSettingsTextureSlot_use_map_field_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_ParticleSettingsTextureSlot_use_map_gravity = {
	{(PropertyRNA *)&rna_ParticleSettingsTextureSlot_use_map_damp, (PropertyRNA *)&rna_ParticleSettingsTextureSlot_use_map_field,
	-1, "use_map_gravity", 3, "Gravity",
	"Affect the particle gravity",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Particle_reset, 0, NULL, NULL,
	0, -1, NULL},
	ParticleSettingsTextureSlot_use_map_gravity_get, ParticleSettingsTextureSlot_use_map_gravity_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_ParticleSettingsTextureSlot_use_map_damp = {
	{(PropertyRNA *)&rna_ParticleSettingsTextureSlot_use_map_clump, (PropertyRNA *)&rna_ParticleSettingsTextureSlot_use_map_gravity,
	-1, "use_map_damp", 3, "Damp",
	"Affect the particle velocity damping",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Particle_redo_child, 0, NULL, NULL,
	0, -1, NULL},
	ParticleSettingsTextureSlot_use_map_damp_get, ParticleSettingsTextureSlot_use_map_damp_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_ParticleSettingsTextureSlot_use_map_clump = {
	{(PropertyRNA *)&rna_ParticleSettingsTextureSlot_use_map_kink, (PropertyRNA *)&rna_ParticleSettingsTextureSlot_use_map_damp,
	-1, "use_map_clump", 3, "Clump",
	"Affect the child clumping",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Particle_reset, 0, NULL, NULL,
	0, -1, NULL},
	ParticleSettingsTextureSlot_use_map_clump_get, ParticleSettingsTextureSlot_use_map_clump_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_ParticleSettingsTextureSlot_use_map_kink = {
	{(PropertyRNA *)&rna_ParticleSettingsTextureSlot_use_map_rough, (PropertyRNA *)&rna_ParticleSettingsTextureSlot_use_map_clump,
	-1, "use_map_kink", 3, "Kink",
	"Affect the child kink",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Particle_redo_child, 0, NULL, NULL,
	0, -1, NULL},
	ParticleSettingsTextureSlot_use_map_kink_get, ParticleSettingsTextureSlot_use_map_kink_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_ParticleSettingsTextureSlot_use_map_rough = {
	{(PropertyRNA *)&rna_ParticleSettingsTextureSlot_use_map_length, (PropertyRNA *)&rna_ParticleSettingsTextureSlot_use_map_kink,
	-1, "use_map_rough", 3, "Rough",
	"Affect the child rough",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Particle_redo_child, 0, NULL, NULL,
	0, -1, NULL},
	ParticleSettingsTextureSlot_use_map_rough_get, ParticleSettingsTextureSlot_use_map_rough_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_ParticleSettingsTextureSlot_use_map_length = {
	{(PropertyRNA *)&rna_ParticleSettingsTextureSlot_time_factor, (PropertyRNA *)&rna_ParticleSettingsTextureSlot_use_map_rough,
	-1, "use_map_length", 3, "Length",
	"Affect the child hair length",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Particle_redo_child, 0, NULL, NULL,
	0, -1, NULL},
	ParticleSettingsTextureSlot_use_map_length_get, ParticleSettingsTextureSlot_use_map_length_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

FloatPropertyRNA rna_ParticleSettingsTextureSlot_time_factor = {
	{(PropertyRNA *)&rna_ParticleSettingsTextureSlot_life_factor, (PropertyRNA *)&rna_ParticleSettingsTextureSlot_use_map_length,
	-1, "time_factor", 8195, "Emission Time Factor",
	"Amount texture affects particle emission time",
	0, "*",
	PROP_FLOAT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Particle_reset, 0, NULL, NULL,
	offsetof(MTex, timefac), 4, NULL},
	ParticleSettingsTextureSlot_time_factor_get, ParticleSettingsTextureSlot_time_factor_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 1.0f, -FLT_MAX, FLT_MAX, 10.0f, 3, 0.0f, NULL
};

FloatPropertyRNA rna_ParticleSettingsTextureSlot_life_factor = {
	{(PropertyRNA *)&rna_ParticleSettingsTextureSlot_density_factor, (PropertyRNA *)&rna_ParticleSettingsTextureSlot_time_factor,
	-1, "life_factor", 8195, "Life Time Factor",
	"Amount texture affects particle life time",
	0, "*",
	PROP_FLOAT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Particle_reset, 0, NULL, NULL,
	offsetof(MTex, lifefac), 4, NULL},
	ParticleSettingsTextureSlot_life_factor_get, ParticleSettingsTextureSlot_life_factor_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 1.0f, -FLT_MAX, FLT_MAX, 10.0f, 3, 0.0f, NULL
};

FloatPropertyRNA rna_ParticleSettingsTextureSlot_density_factor = {
	{(PropertyRNA *)&rna_ParticleSettingsTextureSlot_size_factor, (PropertyRNA *)&rna_ParticleSettingsTextureSlot_life_factor,
	-1, "density_factor", 8195, "Density Factor",
	"Amount texture affects particle density",
	0, "*",
	PROP_FLOAT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Particle_reset, 0, NULL, NULL,
	offsetof(MTex, padensfac), 4, NULL},
	ParticleSettingsTextureSlot_density_factor_get, ParticleSettingsTextureSlot_density_factor_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 1.0f, -FLT_MAX, FLT_MAX, 10.0f, 3, 0.0f, NULL
};

FloatPropertyRNA rna_ParticleSettingsTextureSlot_size_factor = {
	{(PropertyRNA *)&rna_ParticleSettingsTextureSlot_velocity_factor, (PropertyRNA *)&rna_ParticleSettingsTextureSlot_density_factor,
	-1, "size_factor", 8195, "Size Factor",
	"Amount texture affects physical particle size",
	0, "*",
	PROP_FLOAT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Particle_reset, 0, NULL, NULL,
	offsetof(MTex, sizefac), 4, NULL},
	ParticleSettingsTextureSlot_size_factor_get, ParticleSettingsTextureSlot_size_factor_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 1.0f, -FLT_MAX, FLT_MAX, 10.0f, 3, 0.0f, NULL
};

FloatPropertyRNA rna_ParticleSettingsTextureSlot_velocity_factor = {
	{(PropertyRNA *)&rna_ParticleSettingsTextureSlot_field_factor, (PropertyRNA *)&rna_ParticleSettingsTextureSlot_size_factor,
	-1, "velocity_factor", 8195, "Velocity Factor",
	"Amount texture affects particle initial velocity",
	0, "*",
	PROP_FLOAT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Particle_reset, 0, NULL, NULL,
	offsetof(MTex, ivelfac), 4, NULL},
	ParticleSettingsTextureSlot_velocity_factor_get, ParticleSettingsTextureSlot_velocity_factor_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 1.0f, -FLT_MAX, FLT_MAX, 10.0f, 3, 0.0f, NULL
};

FloatPropertyRNA rna_ParticleSettingsTextureSlot_field_factor = {
	{(PropertyRNA *)&rna_ParticleSettingsTextureSlot_gravity_factor, (PropertyRNA *)&rna_ParticleSettingsTextureSlot_velocity_factor,
	-1, "field_factor", 8195, "Field Factor",
	"Amount texture affects particle force fields",
	0, "*",
	PROP_FLOAT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Particle_reset, 0, NULL, NULL,
	offsetof(MTex, fieldfac), 4, NULL},
	ParticleSettingsTextureSlot_field_factor_get, ParticleSettingsTextureSlot_field_factor_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 1.0f, -FLT_MAX, FLT_MAX, 10.0f, 3, 0.0f, NULL
};

FloatPropertyRNA rna_ParticleSettingsTextureSlot_gravity_factor = {
	{(PropertyRNA *)&rna_ParticleSettingsTextureSlot_damp_factor, (PropertyRNA *)&rna_ParticleSettingsTextureSlot_field_factor,
	-1, "gravity_factor", 8195, "Gravity Factor",
	"Amount texture affects particle gravity",
	0, "*",
	PROP_FLOAT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Particle_reset, 0, NULL, NULL,
	offsetof(MTex, gravityfac), 4, NULL},
	ParticleSettingsTextureSlot_gravity_factor_get, ParticleSettingsTextureSlot_gravity_factor_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 1.0f, -FLT_MAX, FLT_MAX, 10.0f, 3, 0.0f, NULL
};

FloatPropertyRNA rna_ParticleSettingsTextureSlot_damp_factor = {
	{(PropertyRNA *)&rna_ParticleSettingsTextureSlot_length_factor, (PropertyRNA *)&rna_ParticleSettingsTextureSlot_gravity_factor,
	-1, "damp_factor", 8195, "Damp Factor",
	"Amount texture affects particle damping",
	0, "*",
	PROP_FLOAT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Particle_reset, 0, NULL, NULL,
	offsetof(MTex, dampfac), 4, NULL},
	ParticleSettingsTextureSlot_damp_factor_get, ParticleSettingsTextureSlot_damp_factor_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 1.0f, -FLT_MAX, FLT_MAX, 10.0f, 3, 0.0f, NULL
};

FloatPropertyRNA rna_ParticleSettingsTextureSlot_length_factor = {
	{(PropertyRNA *)&rna_ParticleSettingsTextureSlot_clump_factor, (PropertyRNA *)&rna_ParticleSettingsTextureSlot_damp_factor,
	-1, "length_factor", 8195, "Length Factor",
	"Amount texture affects child hair length",
	0, "*",
	PROP_FLOAT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Particle_redo_child, 0, NULL, NULL,
	offsetof(MTex, lengthfac), 4, NULL},
	ParticleSettingsTextureSlot_length_factor_get, ParticleSettingsTextureSlot_length_factor_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 1.0f, -FLT_MAX, FLT_MAX, 10.0f, 3, 0.0f, NULL
};

FloatPropertyRNA rna_ParticleSettingsTextureSlot_clump_factor = {
	{(PropertyRNA *)&rna_ParticleSettingsTextureSlot_kink_factor, (PropertyRNA *)&rna_ParticleSettingsTextureSlot_length_factor,
	-1, "clump_factor", 8195, "Clump Factor",
	"Amount texture affects child clump",
	0, "*",
	PROP_FLOAT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Particle_redo_child, 0, NULL, NULL,
	offsetof(MTex, clumpfac), 4, NULL},
	ParticleSettingsTextureSlot_clump_factor_get, ParticleSettingsTextureSlot_clump_factor_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 1.0f, -FLT_MAX, FLT_MAX, 10.0f, 3, 0.0f, NULL
};

FloatPropertyRNA rna_ParticleSettingsTextureSlot_kink_factor = {
	{(PropertyRNA *)&rna_ParticleSettingsTextureSlot_rough_factor, (PropertyRNA *)&rna_ParticleSettingsTextureSlot_clump_factor,
	-1, "kink_factor", 8195, "Kink Factor",
	"Amount texture affects child kink",
	0, "*",
	PROP_FLOAT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Particle_redo_child, 0, NULL, NULL,
	offsetof(MTex, kinkfac), 4, NULL},
	ParticleSettingsTextureSlot_kink_factor_get, ParticleSettingsTextureSlot_kink_factor_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 1.0f, -FLT_MAX, FLT_MAX, 10.0f, 3, 0.0f, NULL
};

FloatPropertyRNA rna_ParticleSettingsTextureSlot_rough_factor = {
	{NULL, (PropertyRNA *)&rna_ParticleSettingsTextureSlot_kink_factor,
	-1, "rough_factor", 8195, "Rough Factor",
	"Amount texture affects child roughness",
	0, "*",
	PROP_FLOAT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Particle_redo_child, 0, NULL, NULL,
	offsetof(MTex, roughfac), 4, NULL},
	ParticleSettingsTextureSlot_rough_factor_get, ParticleSettingsTextureSlot_rough_factor_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 1.0f, -FLT_MAX, FLT_MAX, 10.0f, 3, 0.0f, NULL
};

StructRNA RNA_ParticleSettingsTextureSlot = {
	{(ContainerRNA *)&RNA_ParticleSettings, (ContainerRNA *)&RNA_ParticleSystem,
	NULL,
	{(PropertyRNA *)&rna_ParticleSettingsTextureSlot_texture_coords, (PropertyRNA *)&rna_ParticleSettingsTextureSlot_rough_factor}},
	"ParticleSettingsTextureSlot", NULL, NULL, 4, "Particle Settings Texture Slot",
	"Texture slot for textures in a Particle Settings datablock",
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

/* Particle Settings */
CollectionPropertyRNA rna_ParticleSettings_texture_slots = {
	{(PropertyRNA *)&rna_ParticleSettings_active_texture, NULL,
	-1, "texture_slots", 0, "Textures",
	"Texture slots defining the mapping and influence of textures",
	0, "*",
	PROP_COLLECTION, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, &RNA_ParticleSettingsTextureSlots},
	ParticleSettings_texture_slots_begin, ParticleSettings_texture_slots_next, ParticleSettings_texture_slots_end, ParticleSettings_texture_slots_get, NULL, NULL, NULL, NULL, &RNA_ParticleSettingsTextureSlot
};

PointerPropertyRNA rna_ParticleSettings_active_texture = {
	{(PropertyRNA *)&rna_ParticleSettings_active_texture_index, (PropertyRNA *)&rna_ParticleSettings_texture_slots,
	-1, "active_texture", 8388609, "Active Texture",
	"Active texture slot being displayed",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Particle_reset, 102760448, NULL, NULL,
	0, -1, NULL},
	ParticleSettings_active_texture_get, ParticleSettings_active_texture_set, NULL, NULL,&RNA_Texture
};

IntPropertyRNA rna_ParticleSettings_active_texture_index = {
	{(PropertyRNA *)&rna_ParticleSettings_is_fluid, (PropertyRNA *)&rna_ParticleSettings_active_texture,
	-1, "active_texture_index", 8195, "Active Texture Index",
	"Index of active texture slot",
	0, "*",
	PROP_INT, PROP_UNSIGNED | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 102760448, NULL, NULL,
	offsetof(ParticleSettings, texact), 1, NULL},
	ParticleSettings_active_texture_index_get, ParticleSettings_active_texture_index_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL,
	0, 17, 0, 17, 1, 0, NULL
};

BoolPropertyRNA rna_ParticleSettings_is_fluid = {
	{(PropertyRNA *)&rna_ParticleSettings_use_react_start_end, (PropertyRNA *)&rna_ParticleSettings_active_texture_index,
	-1, "is_fluid", 2, "Fluid",
	"Particles were created by a fluid simulation",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	ParticleSettings_is_fluid_get, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_ParticleSettings_use_react_start_end = {
	{(PropertyRNA *)&rna_ParticleSettings_use_react_multiple, (PropertyRNA *)&rna_ParticleSettings_is_fluid,
	-1, "use_react_start_end", 1, "Start/End",
	"Give birth to unreacted particles eventually",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Particle_reset, 0, NULL, NULL,
	0, -1, NULL},
	ParticleSettings_use_react_start_end_get, ParticleSettings_use_react_start_end_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_ParticleSettings_use_react_multiple = {
	{(PropertyRNA *)&rna_ParticleSettings_regrow_hair, (PropertyRNA *)&rna_ParticleSettings_use_react_start_end,
	-1, "use_react_multiple", 1, "Multi React",
	"React multiple times",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Particle_reset, 0, NULL, NULL,
	0, -1, NULL},
	ParticleSettings_use_react_multiple_get, ParticleSettings_use_react_multiple_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_ParticleSettings_regrow_hair = {
	{(PropertyRNA *)&rna_ParticleSettings_show_unborn, (PropertyRNA *)&rna_ParticleSettings_use_react_multiple,
	-1, "regrow_hair", 3, "Regrow",
	"Regrow hair for each frame",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Particle_redo, 0, NULL, NULL,
	0, -1, NULL},
	ParticleSettings_regrow_hair_get, ParticleSettings_regrow_hair_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_ParticleSettings_show_unborn = {
	{(PropertyRNA *)&rna_ParticleSettings_use_dead, (PropertyRNA *)&rna_ParticleSettings_regrow_hair,
	-1, "show_unborn", 3, "Unborn",
	"Show particles before they are emitted",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Particle_redo, 0, NULL, NULL,
	0, -1, NULL},
	ParticleSettings_show_unborn_get, ParticleSettings_show_unborn_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_ParticleSettings_use_dead = {
	{(PropertyRNA *)&rna_ParticleSettings_use_emit_random, (PropertyRNA *)&rna_ParticleSettings_show_unborn,
	-1, "use_dead", 3, "Died",
	"Show particles after they have died",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Particle_redo, 0, NULL, NULL,
	0, -1, NULL},
	ParticleSettings_use_dead_get, ParticleSettings_use_dead_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_ParticleSettings_use_emit_random = {
	{(PropertyRNA *)&rna_ParticleSettings_use_even_distribution, (PropertyRNA *)&rna_ParticleSettings_use_dead,
	-1, "use_emit_random", 1, "Random",
	"Emit in random order of elements",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Particle_reset, 0, NULL, NULL,
	0, -1, NULL},
	ParticleSettings_use_emit_random_get, ParticleSettings_use_emit_random_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_ParticleSettings_use_even_distribution = {
	{(PropertyRNA *)&rna_ParticleSettings_use_die_on_collision, (PropertyRNA *)&rna_ParticleSettings_use_emit_random,
	-1, "use_even_distribution", 1, "Even Distribution",
	"Use even distribution from faces based on face areas or edge lengths",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Particle_reset, 0, NULL, NULL,
	0, -1, NULL},
	ParticleSettings_use_even_distribution_get, ParticleSettings_use_even_distribution_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_ParticleSettings_use_die_on_collision = {
	{(PropertyRNA *)&rna_ParticleSettings_use_size_deflect, (PropertyRNA *)&rna_ParticleSettings_use_even_distribution,
	-1, "use_die_on_collision", 1, "Die on hit",
	"Particles die when they collide with a deflector object",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Particle_reset, 0, NULL, NULL,
	0, -1, NULL},
	ParticleSettings_use_die_on_collision_get, ParticleSettings_use_die_on_collision_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_ParticleSettings_use_size_deflect = {
	{(PropertyRNA *)&rna_ParticleSettings_use_rotations, (PropertyRNA *)&rna_ParticleSettings_use_die_on_collision,
	-1, "use_size_deflect", 1, "Size Deflect",
	"Use particle\'s size in deflection",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Particle_reset, 0, NULL, NULL,
	0, -1, NULL},
	ParticleSettings_use_size_deflect_get, ParticleSettings_use_size_deflect_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_ParticleSettings_use_rotations = {
	{(PropertyRNA *)&rna_ParticleSettings_use_dynamic_rotation, (PropertyRNA *)&rna_ParticleSettings_use_size_deflect,
	-1, "use_rotations", 1, "Rotations",
	"Calculate particle rotations",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Particle_reset, 0, NULL, NULL,
	0, -1, NULL},
	ParticleSettings_use_rotations_get, ParticleSettings_use_rotations_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_ParticleSettings_use_dynamic_rotation = {
	{(PropertyRNA *)&rna_ParticleSettings_use_multiply_size_mass, (PropertyRNA *)&rna_ParticleSettings_use_rotations,
	-1, "use_dynamic_rotation", 1, "Dynamic",
	"Particle rotations are affected by collisions and effectors",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Particle_reset, 0, NULL, NULL,
	0, -1, NULL},
	ParticleSettings_use_dynamic_rotation_get, ParticleSettings_use_dynamic_rotation_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_ParticleSettings_use_multiply_size_mass = {
	{(PropertyRNA *)&rna_ParticleSettings_use_advanced_hair, (PropertyRNA *)&rna_ParticleSettings_use_dynamic_rotation,
	-1, "use_multiply_size_mass", 1, "Mass from Size",
	"Multiply mass by particle size",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Particle_reset, 0, NULL, NULL,
	0, -1, NULL},
	ParticleSettings_use_multiply_size_mass_get, ParticleSettings_use_multiply_size_mass_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_ParticleSettings_use_advanced_hair = {
	{(PropertyRNA *)&rna_ParticleSettings_lock_boids_to_surface, (PropertyRNA *)&rna_ParticleSettings_use_multiply_size_mass,
	-1, "use_advanced_hair", 1, "Advanced",
	"Use full physics calculations for growing hair",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Particle_reset, 0, NULL, NULL,
	0, -1, NULL},
	ParticleSettings_use_advanced_hair_get, ParticleSettings_use_advanced_hair_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_ParticleSettings_lock_boids_to_surface = {
	{(PropertyRNA *)&rna_ParticleSettings_use_hair_bspline, (PropertyRNA *)&rna_ParticleSettings_use_advanced_hair,
	-1, "lock_boids_to_surface", 3, "Boids 2D",
	"Constrain boids to a surface",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Particle_reset, 0, NULL, NULL,
	0, -1, NULL},
	ParticleSettings_lock_boids_to_surface_get, ParticleSettings_lock_boids_to_surface_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_ParticleSettings_use_hair_bspline = {
	{(PropertyRNA *)&rna_ParticleSettings_invert_grid, (PropertyRNA *)&rna_ParticleSettings_lock_boids_to_surface,
	-1, "use_hair_bspline", 3, "B-Spline",
	"Interpolate hair using B-Splines",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Particle_redo, 0, NULL, NULL,
	0, -1, NULL},
	ParticleSettings_use_hair_bspline_get, ParticleSettings_use_hair_bspline_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_ParticleSettings_invert_grid = {
	{(PropertyRNA *)&rna_ParticleSettings_hexagonal_grid, (PropertyRNA *)&rna_ParticleSettings_use_hair_bspline,
	-1, "invert_grid", 3, "Invert Grid",
	"Invert what is considered object and what is not",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Particle_reset, 0, NULL, NULL,
	0, -1, NULL},
	ParticleSettings_invert_grid_get, ParticleSettings_invert_grid_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_ParticleSettings_hexagonal_grid = {
	{(PropertyRNA *)&rna_ParticleSettings_apply_effector_to_children, (PropertyRNA *)&rna_ParticleSettings_invert_grid,
	-1, "hexagonal_grid", 3, "Hexagonal Grid",
	"Create the grid in a hexagonal pattern",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Particle_reset, 0, NULL, NULL,
	0, -1, NULL},
	ParticleSettings_hexagonal_grid_get, ParticleSettings_hexagonal_grid_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_ParticleSettings_apply_effector_to_children = {
	{(PropertyRNA *)&rna_ParticleSettings_create_long_hair_children, (PropertyRNA *)&rna_ParticleSettings_hexagonal_grid,
	-1, "apply_effector_to_children", 3, "Effect Children",
	"Apply effectors to children",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Particle_redo, 0, NULL, NULL,
	0, -1, NULL},
	ParticleSettings_apply_effector_to_children_get, ParticleSettings_apply_effector_to_children_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_ParticleSettings_create_long_hair_children = {
	{(PropertyRNA *)&rna_ParticleSettings_apply_guide_to_children, (PropertyRNA *)&rna_ParticleSettings_apply_effector_to_children,
	-1, "create_long_hair_children", 3, "Long Hair",
	"Calculate children that suit long hair well",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Particle_redo_child, 0, NULL, NULL,
	0, -1, NULL},
	ParticleSettings_create_long_hair_children_get, ParticleSettings_create_long_hair_children_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_ParticleSettings_apply_guide_to_children = {
	{(PropertyRNA *)&rna_ParticleSettings_use_self_effect, (PropertyRNA *)&rna_ParticleSettings_create_long_hair_children,
	-1, "apply_guide_to_children", 3, "apply_guide_to_children",
	"",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Particle_redo, 0, NULL, NULL,
	0, -1, NULL},
	ParticleSettings_apply_guide_to_children_get, ParticleSettings_apply_guide_to_children_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_ParticleSettings_use_self_effect = {
	{(PropertyRNA *)&rna_ParticleSettings_type, (PropertyRNA *)&rna_ParticleSettings_apply_guide_to_children,
	-1, "use_self_effect", 3, "Self Effect",
	"Particle effectors affect themselves",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Particle_reset, 0, NULL, NULL,
	0, -1, NULL},
	ParticleSettings_use_self_effect_get, ParticleSettings_use_self_effect_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

static EnumPropertyItem rna_ParticleSettings_type_items[3] = {
	{0, "EMITTER", 0, "Emitter", ""},
	{2, "HAIR", 0, "Hair", ""},
	{0, NULL, 0, NULL, NULL}
};

EnumPropertyRNA rna_ParticleSettings_type = {
	{(PropertyRNA *)&rna_ParticleSettings_emit_from, (PropertyRNA *)&rna_ParticleSettings_use_self_effect,
	-1, "type", 1, "Type",
	"Particle Type",
	0, "*",
	PROP_ENUM, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Particle_change_type, 0, NULL, NULL,
	0, -1, NULL},
	ParticleSettings_type_get, ParticleSettings_type_set, NULL, NULL, NULL, NULL, rna_ParticleSettings_type_items, 2, 0
};

static EnumPropertyItem rna_ParticleSettings_emit_from_items[4] = {
	{0, "VERT", 0, "Verts", ""},
	{1, "FACE", 0, "Faces", ""},
	{2, "VOLUME", 0, "Volume", ""},
	{0, NULL, 0, NULL, NULL}
};

EnumPropertyRNA rna_ParticleSettings_emit_from = {
	{(PropertyRNA *)&rna_ParticleSettings_distribution, (PropertyRNA *)&rna_ParticleSettings_type,
	-1, "emit_from", 1, "Emit From",
	"Where to emit particles from",
	0, "*",
	PROP_ENUM, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Particle_reset, 0, NULL, NULL,
	0, -1, NULL},
	ParticleSettings_emit_from_get, ParticleSettings_emit_from_set, rna_Particle_from_itemf, NULL, NULL, NULL, rna_ParticleSettings_emit_from_items, 3, 0
};

static EnumPropertyItem rna_ParticleSettings_distribution_items[4] = {
	{0, "JIT", 0, "Jittered", ""},
	{1, "RAND", 0, "Random", ""},
	{2, "GRID", 0, "Grid", ""},
	{0, NULL, 0, NULL, NULL}
};

EnumPropertyRNA rna_ParticleSettings_distribution = {
	{(PropertyRNA *)&rna_ParticleSettings_physics_type, (PropertyRNA *)&rna_ParticleSettings_emit_from,
	-1, "distribution", 1, "Distribution",
	"How to distribute particles on selected element",
	0, "*",
	PROP_ENUM, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Particle_reset, 0, NULL, NULL,
	0, -1, NULL},
	ParticleSettings_distribution_get, ParticleSettings_distribution_set, rna_Particle_dist_itemf, NULL, NULL, NULL, rna_ParticleSettings_distribution_items, 3, 0
};

static EnumPropertyItem rna_ParticleSettings_physics_type_items[6] = {
	{0, "NO", 0, "No", ""},
	{1, "NEWTON", 0, "Newtonian", ""},
	{2, "KEYED", 0, "Keyed", ""},
	{3, "BOIDS", 0, "Boids", ""},
	{4, "FLUID", 0, "Fluid", ""},
	{0, NULL, 0, NULL, NULL}
};

EnumPropertyRNA rna_ParticleSettings_physics_type = {
	{(PropertyRNA *)&rna_ParticleSettings_rotation_mode, (PropertyRNA *)&rna_ParticleSettings_distribution,
	-1, "physics_type", 1, "Physics Type",
	"Particle physics type",
	0, "*",
	PROP_ENUM, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Particle_change_physics, 0, NULL, NULL,
	0, -1, NULL},
	ParticleSettings_physics_type_get, ParticleSettings_physics_type_set, NULL, NULL, NULL, NULL, rna_ParticleSettings_physics_type_items, 5, 0
};

static EnumPropertyItem rna_ParticleSettings_rotation_mode_items[11] = {
	{0, "NONE", 0, "None", ""},
	{1, "NOR", 0, "Normal", ""},
	{9, "NOR_TAN", 0, "Normal-Tangent", ""},
	{2, "VEL", 0, "Velocity / Hair", ""},
	{3, "GLOB_X", 0, "Global X", ""},
	{4, "GLOB_Y", 0, "Global Y", ""},
	{5, "GLOB_Z", 0, "Global Z", ""},
	{6, "OB_X", 0, "Object X", ""},
	{7, "OB_Y", 0, "Object Y", ""},
	{8, "OB_Z", 0, "Object Z", ""},
	{0, NULL, 0, NULL, NULL}
};

EnumPropertyRNA rna_ParticleSettings_rotation_mode = {
	{(PropertyRNA *)&rna_ParticleSettings_angular_velocity_mode, (PropertyRNA *)&rna_ParticleSettings_physics_type,
	-1, "rotation_mode", 1, "Orientation axis",
	"Particle orientation axis (does not affect Explode modifier\'s results)",
	0, "*",
	PROP_ENUM, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Particle_reset, 0, NULL, NULL,
	0, -1, NULL},
	ParticleSettings_rotation_mode_get, ParticleSettings_rotation_mode_set, NULL, NULL, NULL, NULL, rna_ParticleSettings_rotation_mode_items, 10, 0
};

static EnumPropertyItem rna_ParticleSettings_angular_velocity_mode_items[9] = {
	{0, "NONE", 0, "None", ""},
	{1, "VELOCITY", 0, "Velocity", ""},
	{3, "HORIZONTAL", 0, "Horizontal", ""},
	{4, "VERTICAL", 0, "Vertical", ""},
	{5, "GLOBAL_X", 0, "Global X", ""},
	{6, "GLOBAL_Y", 0, "Global Y", ""},
	{7, "GLOBAL_Z", 0, "Global Z", ""},
	{2, "RAND", 0, "Random", ""},
	{0, NULL, 0, NULL, NULL}
};

EnumPropertyRNA rna_ParticleSettings_angular_velocity_mode = {
	{(PropertyRNA *)&rna_ParticleSettings_react_event, (PropertyRNA *)&rna_ParticleSettings_rotation_mode,
	-1, "angular_velocity_mode", 1, "Angular Velocity Axis",
	"What axis is used to change particle rotation with time",
	0, "*",
	PROP_ENUM, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Particle_reset, 0, NULL, NULL,
	0, -1, NULL},
	ParticleSettings_angular_velocity_mode_get, ParticleSettings_angular_velocity_mode_set, NULL, NULL, NULL, NULL, rna_ParticleSettings_angular_velocity_mode_items, 8, 0
};

static EnumPropertyItem rna_ParticleSettings_react_event_items[4] = {
	{0, "DEATH", 0, "Death", ""},
	{1, "COLLIDE", 0, "Collision", ""},
	{2, "NEAR", 0, "Near", ""},
	{0, NULL, 0, NULL, NULL}
};

EnumPropertyRNA rna_ParticleSettings_react_event = {
	{(PropertyRNA *)&rna_ParticleSettings_show_velocity, (PropertyRNA *)&rna_ParticleSettings_angular_velocity_mode,
	-1, "react_event", 1, "React On",
	"The event of target particles to react on",
	0, "*",
	PROP_ENUM, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Particle_reset, 0, NULL, NULL,
	0, -1, NULL},
	ParticleSettings_react_event_get, ParticleSettings_react_event_set, NULL, NULL, NULL, NULL, rna_ParticleSettings_react_event_items, 3, 0
};

BoolPropertyRNA rna_ParticleSettings_show_velocity = {
	{(PropertyRNA *)&rna_ParticleSettings_show_size, (PropertyRNA *)&rna_ParticleSettings_react_event,
	-1, "show_velocity", 3, "Velocity",
	"Show particle velocity",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Particle_redo, 0, NULL, NULL,
	0, -1, NULL},
	ParticleSettings_show_velocity_get, ParticleSettings_show_velocity_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_ParticleSettings_show_size = {
	{(PropertyRNA *)&rna_ParticleSettings_use_render_emitter, (PropertyRNA *)&rna_ParticleSettings_show_velocity,
	-1, "show_size", 3, "Size",
	"Show particle size",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Particle_redo, 0, NULL, NULL,
	0, -1, NULL},
	ParticleSettings_show_size_get, ParticleSettings_show_size_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_ParticleSettings_use_render_emitter = {
	{(PropertyRNA *)&rna_ParticleSettings_show_health, (PropertyRNA *)&rna_ParticleSettings_show_size,
	-1, "use_render_emitter", 3, "Emitter",
	"Render emitter Object also",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Particle_redo, 0, NULL, NULL,
	0, -1, NULL},
	ParticleSettings_use_render_emitter_get, ParticleSettings_use_render_emitter_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_ParticleSettings_show_health = {
	{(PropertyRNA *)&rna_ParticleSettings_use_absolute_path_time, (PropertyRNA *)&rna_ParticleSettings_use_render_emitter,
	-1, "show_health", 3, "Health",
	"Draw boid health",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Particle_redo, 0, NULL, NULL,
	0, -1, NULL},
	ParticleSettings_show_health_get, ParticleSettings_show_health_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_ParticleSettings_use_absolute_path_time = {
	{(PropertyRNA *)&rna_ParticleSettings_use_parent_particles, (PropertyRNA *)&rna_ParticleSettings_show_health,
	-1, "use_absolute_path_time", 3, "Absolute Path Time",
	"Path timing is in absolute frames",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Particle_abspathtime_update, 0, NULL, NULL,
	0, -1, NULL},
	ParticleSettings_use_absolute_path_time_get, ParticleSettings_use_absolute_path_time_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_ParticleSettings_use_parent_particles = {
	{(PropertyRNA *)&rna_ParticleSettings_show_number, (PropertyRNA *)&rna_ParticleSettings_use_absolute_path_time,
	-1, "use_parent_particles", 3, "Parents",
	"Render parent particles",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Particle_redo, 0, NULL, NULL,
	0, -1, NULL},
	ParticleSettings_use_parent_particles_get, ParticleSettings_use_parent_particles_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_ParticleSettings_show_number = {
	{(PropertyRNA *)&rna_ParticleSettings_use_group_pick_random, (PropertyRNA *)&rna_ParticleSettings_use_parent_particles,
	-1, "show_number", 3, "Number",
	"Show particle number",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Particle_redo, 0, NULL, NULL,
	0, -1, NULL},
	ParticleSettings_show_number_get, ParticleSettings_show_number_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_ParticleSettings_use_group_pick_random = {
	{(PropertyRNA *)&rna_ParticleSettings_use_group_count, (PropertyRNA *)&rna_ParticleSettings_show_number,
	-1, "use_group_pick_random", 3, "Pick Random",
	"Pick objects from group randomly",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Particle_redo, 0, NULL, NULL,
	0, -1, NULL},
	ParticleSettings_use_group_pick_random_get, ParticleSettings_use_group_pick_random_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_ParticleSettings_use_group_count = {
	{(PropertyRNA *)&rna_ParticleSettings_use_global_dupli, (PropertyRNA *)&rna_ParticleSettings_use_group_pick_random,
	-1, "use_group_count", 3, "Use Count",
	"Use object multiple times in the same group",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Particle_redo, 0, NULL, NULL,
	0, -1, NULL},
	ParticleSettings_use_group_count_get, ParticleSettings_use_group_count_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_ParticleSettings_use_global_dupli = {
	{(PropertyRNA *)&rna_ParticleSettings_use_rotation_dupli, (PropertyRNA *)&rna_ParticleSettings_use_group_count,
	-1, "use_global_dupli", 3, "Global",
	"Use object\'s global coordinates for duplication",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Particle_redo, 0, NULL, NULL,
	0, -1, NULL},
	ParticleSettings_use_global_dupli_get, ParticleSettings_use_global_dupli_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_ParticleSettings_use_rotation_dupli = {
	{(PropertyRNA *)&rna_ParticleSettings_use_scale_dupli, (PropertyRNA *)&rna_ParticleSettings_use_global_dupli,
	-1, "use_rotation_dupli", 3, "Rotation",
	"Use object\'s rotation for duplication (global x-axis is aligned particle rotation axis)",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Particle_redo, 0, NULL, NULL,
	0, -1, NULL},
	ParticleSettings_use_rotation_dupli_get, ParticleSettings_use_rotation_dupli_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_ParticleSettings_use_scale_dupli = {
	{(PropertyRNA *)&rna_ParticleSettings_use_render_adaptive, (PropertyRNA *)&rna_ParticleSettings_use_rotation_dupli,
	-1, "use_scale_dupli", 3, "Scale",
	"Use object\'s scale for duplication",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Particle_redo, 0, NULL, NULL,
	0, -1, NULL},
	ParticleSettings_use_scale_dupli_get, ParticleSettings_use_scale_dupli_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_ParticleSettings_use_render_adaptive = {
	{(PropertyRNA *)&rna_ParticleSettings_use_velocity_length, (PropertyRNA *)&rna_ParticleSettings_use_scale_dupli,
	-1, "use_render_adaptive", 3, "Adaptive render",
	"Draw steps of the particle path",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Particle_redo, 0, NULL, NULL,
	0, -1, NULL},
	ParticleSettings_use_render_adaptive_get, ParticleSettings_use_render_adaptive_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_ParticleSettings_use_velocity_length = {
	{(PropertyRNA *)&rna_ParticleSettings_use_whole_group, (PropertyRNA *)&rna_ParticleSettings_use_render_adaptive,
	-1, "use_velocity_length", 3, "Speed",
	"Multiply line length by particle speed",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Particle_redo, 0, NULL, NULL,
	0, -1, NULL},
	ParticleSettings_use_velocity_length_get, ParticleSettings_use_velocity_length_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_ParticleSettings_use_whole_group = {
	{(PropertyRNA *)&rna_ParticleSettings_use_strand_primitive, (PropertyRNA *)&rna_ParticleSettings_use_velocity_length,
	-1, "use_whole_group", 3, "Whole Group",
	"Use whole group at once",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Particle_redo, 0, NULL, NULL,
	0, -1, NULL},
	ParticleSettings_use_whole_group_get, ParticleSettings_use_whole_group_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_ParticleSettings_use_strand_primitive = {
	{(PropertyRNA *)&rna_ParticleSettings_draw_method, (PropertyRNA *)&rna_ParticleSettings_use_whole_group,
	-1, "use_strand_primitive", 3, "Strand render",
	"Use the strand primitive for rendering",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Particle_redo, 0, NULL, NULL,
	0, -1, NULL},
	ParticleSettings_use_strand_primitive_get, ParticleSettings_use_strand_primitive_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

static EnumPropertyItem rna_ParticleSettings_draw_method_items[7] = {
	{0, "NONE", 0, "None", ""},
	{10, "RENDER", 0, "Rendered", ""},
	{1, "DOT", 0, "Point", ""},
	{2, "CIRC", 0, "Circle", ""},
	{3, "CROSS", 0, "Cross", ""},
	{4, "AXIS", 0, "Axis", ""},
	{0, NULL, 0, NULL, NULL}
};

EnumPropertyRNA rna_ParticleSettings_draw_method = {
	{(PropertyRNA *)&rna_ParticleSettings_render_type, (PropertyRNA *)&rna_ParticleSettings_use_strand_primitive,
	-1, "draw_method", 3, "Particle Drawing",
	"How particles are drawn in viewport",
	0, "*",
	PROP_ENUM, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Particle_redo, 0, NULL, NULL,
	0, -1, NULL},
	ParticleSettings_draw_method_get, ParticleSettings_draw_method_set, rna_Particle_draw_as_itemf, NULL, NULL, NULL, rna_ParticleSettings_draw_method_items, 6, 0
};

static EnumPropertyItem rna_ParticleSettings_render_type_items[8] = {
	{0, "NONE", 0, "None", ""},
	{1, "HALO", 0, "Halo", ""},
	{5, "LINE", 0, "Line", ""},
	{6, "PATH", 0, "Path", ""},
	{7, "OBJECT", 0, "Object", ""},
	{8, "GROUP", 0, "Group", ""},
	{9, "BILLBOARD", 0, "Billboard", ""},
	{0, NULL, 0, NULL, NULL}
};

EnumPropertyRNA rna_ParticleSettings_render_type = {
	{(PropertyRNA *)&rna_ParticleSettings_draw_color, (PropertyRNA *)&rna_ParticleSettings_draw_method,
	-1, "render_type", 3, "Particle Rendering",
	"How particles are rendered",
	0, "*",
	PROP_ENUM, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Particle_redo, 0, NULL, NULL,
	0, -1, NULL},
	ParticleSettings_render_type_get, ParticleSettings_render_type_set, rna_Particle_ren_as_itemf, NULL, NULL, NULL, rna_ParticleSettings_render_type_items, 7, 0
};

static EnumPropertyItem rna_ParticleSettings_draw_color_items[5] = {
	{0, "NONE", 0, "None", ""},
	{1, "MATERIAL", 0, "Material", ""},
	{2, "VELOCITY", 0, "Velocity", ""},
	{3, "ACCELERATION", 0, "Acceleration", ""},
	{0, NULL, 0, NULL, NULL}
};

EnumPropertyRNA rna_ParticleSettings_draw_color = {
	{(PropertyRNA *)&rna_ParticleSettings_draw_size, (PropertyRNA *)&rna_ParticleSettings_render_type,
	-1, "draw_color", 3, "Draw Color",
	"Draw additional particle data as a color",
	0, "*",
	PROP_ENUM, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Particle_redo, 0, NULL, NULL,
	0, -1, NULL},
	ParticleSettings_draw_color_get, ParticleSettings_draw_color_set, NULL, NULL, NULL, NULL, rna_ParticleSettings_draw_color_items, 4, 0
};

IntPropertyRNA rna_ParticleSettings_draw_size = {
	{(PropertyRNA *)&rna_ParticleSettings_child_type, (PropertyRNA *)&rna_ParticleSettings_draw_color,
	-1, "draw_size", 8195, "Draw Size",
	"Size of particles on viewport in pixels (0=default)",
	0, "*",
	PROP_INT, PROP_PIXEL | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Particle_redo, 0, NULL, NULL,
	offsetof(ParticleSettings, draw_size), 1, NULL},
	ParticleSettings_draw_size_get, ParticleSettings_draw_size_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL,
	0, 100, 0, 1000, 1, 0, NULL
};

static EnumPropertyItem rna_ParticleSettings_child_type_items[4] = {
	{0, "NONE", 0, "None", ""},
	{1, "SIMPLE", 0, "Simple", ""},
	{2, "INTERPOLATED", 0, "Interpolated", ""},
	{0, NULL, 0, NULL, NULL}
};

EnumPropertyRNA rna_ParticleSettings_child_type = {
	{(PropertyRNA *)&rna_ParticleSettings_draw_step, (PropertyRNA *)&rna_ParticleSettings_draw_size,
	-1, "child_type", 3, "Children From",
	"Create child particles",
	0, "*",
	PROP_ENUM, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Particle_redo_child, 0, NULL, NULL,
	0, -1, NULL},
	ParticleSettings_child_type_get, ParticleSettings_child_type_set, NULL, NULL, NULL, NULL, rna_ParticleSettings_child_type_items, 3, 0
};

IntPropertyRNA rna_ParticleSettings_draw_step = {
	{(PropertyRNA *)&rna_ParticleSettings_render_step, (PropertyRNA *)&rna_ParticleSettings_child_type,
	-1, "draw_step", 8195, "Steps",
	"How many steps paths are drawn with (power of 2)",
	0, "*",
	PROP_INT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Particle_redo, 0, NULL, NULL,
	offsetof(ParticleSettings, draw_step), 1, NULL},
	ParticleSettings_draw_step_get, ParticleSettings_draw_step_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL,
	0, 7, 0, 10, 1, 0, NULL
};

IntPropertyRNA rna_ParticleSettings_render_step = {
	{(PropertyRNA *)&rna_ParticleSettings_hair_step, (PropertyRNA *)&rna_ParticleSettings_draw_step,
	-1, "render_step", 8195, "Render",
	"How many steps paths are rendered with (power of 2)",
	0, "*",
	PROP_INT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	offsetof(ParticleSettings, ren_step), 1, NULL},
	ParticleSettings_render_step_get, ParticleSettings_render_step_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL,
	0, 9, 0, 20, 1, 0, NULL
};

IntPropertyRNA rna_ParticleSettings_hair_step = {
	{(PropertyRNA *)&rna_ParticleSettings_keys_step, (PropertyRNA *)&rna_ParticleSettings_render_step,
	-1, "hair_step", 8195, "Segments",
	"Number of hair segments",
	0, "*",
	PROP_INT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Particle_reset, 0, NULL, NULL,
	offsetof(ParticleSettings, hair_step), 1, NULL},
	ParticleSettings_hair_step_get, ParticleSettings_hair_step_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL,
	2, 50, 2, 50, 1, 0, NULL
};

IntPropertyRNA rna_ParticleSettings_keys_step = {
	{(PropertyRNA *)&rna_ParticleSettings_adaptive_angle, (PropertyRNA *)&rna_ParticleSettings_hair_step,
	-1, "keys_step", 8195, "Keys Step",
	"",
	0, "*",
	PROP_INT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	offsetof(ParticleSettings, keys_step), 1, NULL},
	ParticleSettings_keys_step_get, ParticleSettings_keys_step_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL,
	0, 32767, 0, 32767, 1, 0, NULL
};

IntPropertyRNA rna_ParticleSettings_adaptive_angle = {
	{(PropertyRNA *)&rna_ParticleSettings_adaptive_pixel, (PropertyRNA *)&rna_ParticleSettings_keys_step,
	-1, "adaptive_angle", 8195, "Degrees",
	"How many degrees path has to curve to make another render segment",
	0, "*",
	PROP_INT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	offsetof(ParticleSettings, adapt_angle), 1, NULL},
	ParticleSettings_adaptive_angle_get, ParticleSettings_adaptive_angle_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL,
	0, 45, 0, 45, 1, 0, NULL
};

IntPropertyRNA rna_ParticleSettings_adaptive_pixel = {
	{(PropertyRNA *)&rna_ParticleSettings_draw_percentage, (PropertyRNA *)&rna_ParticleSettings_adaptive_angle,
	-1, "adaptive_pixel", 8195, "Pixel",
	"How many pixels path has to cover to make another render segment",
	0, "*",
	PROP_INT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	offsetof(ParticleSettings, adapt_pix), 1, NULL},
	ParticleSettings_adaptive_pixel_get, ParticleSettings_adaptive_pixel_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL,
	0, 50, 0, 50, 1, 0, NULL
};

IntPropertyRNA rna_ParticleSettings_draw_percentage = {
	{(PropertyRNA *)&rna_ParticleSettings_material, (PropertyRNA *)&rna_ParticleSettings_adaptive_pixel,
	-1, "draw_percentage", 8195, "Display",
	"Percentage of particles to display in 3D view",
	0, "*",
	PROP_INT, PROP_PERCENTAGE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Particle_reset, 0, NULL, NULL,
	offsetof(ParticleSettings, disp), 1, NULL},
	ParticleSettings_draw_percentage_get, ParticleSettings_draw_percentage_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL,
	0, 100, 0, 100, 1, 0, NULL
};

IntPropertyRNA rna_ParticleSettings_material = {
	{(PropertyRNA *)&rna_ParticleSettings_material_slot, (PropertyRNA *)&rna_ParticleSettings_draw_percentage,
	-1, "material", 8195, "Material Index",
	"Index of material slot used for rendering particles",
	0, "*",
	PROP_INT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Particle_redo, 0, NULL, NULL,
	offsetof(ParticleSettings, omat), 1, NULL},
	ParticleSettings_material_get, ParticleSettings_material_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL,
	1, 32767, 1, 32767, 1, 0, NULL
};

static EnumPropertyItem rna_ParticleSettings_material_slot_items[2] = {
	{0, "DUMMY", 0, "Dummy", ""},
	{0, NULL, 0, NULL, NULL}
};

EnumPropertyRNA rna_ParticleSettings_material_slot = {
	{(PropertyRNA *)&rna_ParticleSettings_integrator, (PropertyRNA *)&rna_ParticleSettings_material,
	-1, "material_slot", 3, "Material Slot",
	"Material slot used for rendering particles",
	0, "*",
	PROP_ENUM, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Particle_redo, 0, NULL, NULL,
	0, -1, NULL},
	ParticleSettings_material_slot_get, ParticleSettings_material_slot_set, rna_Particle_Material_itemf, NULL, NULL, NULL, rna_ParticleSettings_material_slot_items, 1, 0
};

static EnumPropertyItem rna_ParticleSettings_integrator_items[5] = {
	{0, "EULER", 0, "Euler", ""},
	{3, "VERLET", 0, "Verlet", ""},
	{1, "MIDPOINT", 0, "Midpoint", ""},
	{2, "RK4", 0, "RK4", ""},
	{0, NULL, 0, NULL, NULL}
};

EnumPropertyRNA rna_ParticleSettings_integrator = {
	{(PropertyRNA *)&rna_ParticleSettings_kink, (PropertyRNA *)&rna_ParticleSettings_material_slot,
	-1, "integrator", 3, "Integration",
	"Algorithm used to calculate physics, from the fastest to the most stable/accurate: Midpoint, Euler, Verlet, RK4 (Old)",
	0, "*",
	PROP_ENUM, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Particle_reset, 0, NULL, NULL,
	0, -1, NULL},
	ParticleSettings_integrator_get, ParticleSettings_integrator_set, NULL, NULL, NULL, NULL, rna_ParticleSettings_integrator_items, 4, 0
};

static EnumPropertyItem rna_ParticleSettings_kink_items[6] = {
	{0, "NO", 0, "Nothing", ""},
	{1, "CURL", 0, "Curl", ""},
	{2, "RADIAL", 0, "Radial", ""},
	{3, "WAVE", 0, "Wave", ""},
	{4, "BRAID", 0, "Braid", ""},
	{0, NULL, 0, NULL, NULL}
};

EnumPropertyRNA rna_ParticleSettings_kink = {
	{(PropertyRNA *)&rna_ParticleSettings_kink_axis, (PropertyRNA *)&rna_ParticleSettings_integrator,
	-1, "kink", 3, "Kink",
	"Type of periodic offset on the path",
	0, "*",
	PROP_ENUM, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Particle_redo_child, 0, NULL, NULL,
	0, -1, NULL},
	ParticleSettings_kink_get, ParticleSettings_kink_set, NULL, NULL, NULL, NULL, rna_ParticleSettings_kink_items, 5, 0
};

static EnumPropertyItem rna_ParticleSettings_kink_axis_items[4] = {
	{0, "X", 0, "X", ""},
	{1, "Y", 0, "Y", ""},
	{2, "Z", 0, "Z", ""},
	{0, NULL, 0, NULL, NULL}
};

EnumPropertyRNA rna_ParticleSettings_kink_axis = {
	{(PropertyRNA *)&rna_ParticleSettings_lock_billboard, (PropertyRNA *)&rna_ParticleSettings_kink,
	-1, "kink_axis", 3, "Axis",
	"Which axis to use for offset",
	0, "*",
	PROP_ENUM, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Particle_redo_child, 0, NULL, NULL,
	0, -1, NULL},
	ParticleSettings_kink_axis_get, ParticleSettings_kink_axis_set, NULL, NULL, NULL, NULL, rna_ParticleSettings_kink_axis_items, 3, 0
};

BoolPropertyRNA rna_ParticleSettings_lock_billboard = {
	{(PropertyRNA *)&rna_ParticleSettings_billboard_align, (PropertyRNA *)&rna_ParticleSettings_kink_axis,
	-1, "lock_billboard", 3, "Lock Billboard",
	"Lock the billboards align axis",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Particle_redo, 0, NULL, NULL,
	0, -1, NULL},
	ParticleSettings_lock_billboard_get, ParticleSettings_lock_billboard_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

static EnumPropertyItem rna_ParticleSettings_billboard_align_items[6] = {
	{0, "X", 0, "X", ""},
	{1, "Y", 0, "Y", ""},
	{2, "Z", 0, "Z", ""},
	{3, "VIEW", 0, "View", ""},
	{4, "VEL", 0, "Velocity", ""},
	{0, NULL, 0, NULL, NULL}
};

EnumPropertyRNA rna_ParticleSettings_billboard_align = {
	{(PropertyRNA *)&rna_ParticleSettings_billboard_uv_split, (PropertyRNA *)&rna_ParticleSettings_lock_billboard,
	-1, "billboard_align", 3, "Align to",
	"In respect to what the billboards are aligned",
	0, "*",
	PROP_ENUM, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Particle_redo, 0, NULL, NULL,
	0, -1, NULL},
	ParticleSettings_billboard_align_get, ParticleSettings_billboard_align_set, NULL, NULL, NULL, NULL, rna_ParticleSettings_billboard_align_items, 5, 0
};

IntPropertyRNA rna_ParticleSettings_billboard_uv_split = {
	{(PropertyRNA *)&rna_ParticleSettings_billboard_animation, (PropertyRNA *)&rna_ParticleSettings_billboard_align,
	-1, "billboard_uv_split", 8195, "UV Split",
	"Number of rows/columns to split UV coordinates for billboards",
	0, "*",
	PROP_INT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	offsetof(ParticleSettings, bb_uv_split), 1, NULL},
	ParticleSettings_billboard_uv_split_get, ParticleSettings_billboard_uv_split_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL,
	1, 10, 1, 100, 1, 0, NULL
};

static EnumPropertyItem rna_ParticleSettings_billboard_animation_items[5] = {
	{0, "NONE", 0, "None", ""},
	{1, "AGE", 0, "Age", ""},
	{3, "FRAME", 0, "Frame", ""},
	{2, "ANGLE", 0, "Angle", ""},
	{0, NULL, 0, NULL, NULL}
};

EnumPropertyRNA rna_ParticleSettings_billboard_animation = {
	{(PropertyRNA *)&rna_ParticleSettings_billboard_offset_split, (PropertyRNA *)&rna_ParticleSettings_billboard_uv_split,
	-1, "billboard_animation", 3, "Animate",
	"How to animate billboard textures",
	0, "*",
	PROP_ENUM, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	ParticleSettings_billboard_animation_get, ParticleSettings_billboard_animation_set, NULL, NULL, NULL, NULL, rna_ParticleSettings_billboard_animation_items, 4, 0
};

static EnumPropertyItem rna_ParticleSettings_billboard_offset_split_items[4] = {
	{0, "NONE", 0, "None", ""},
	{1, "LINEAR", 0, "Linear", ""},
	{2, "RANDOM", 0, "Random", ""},
	{0, NULL, 0, NULL, NULL}
};

EnumPropertyRNA rna_ParticleSettings_billboard_offset_split = {
	{(PropertyRNA *)&rna_ParticleSettings_billboard_tilt, (PropertyRNA *)&rna_ParticleSettings_billboard_animation,
	-1, "billboard_offset_split", 3, "Offset",
	"How to offset billboard textures",
	0, "*",
	PROP_ENUM, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	ParticleSettings_billboard_offset_split_get, ParticleSettings_billboard_offset_split_set, NULL, NULL, NULL, NULL, rna_ParticleSettings_billboard_offset_split_items, 3, 0
};

FloatPropertyRNA rna_ParticleSettings_billboard_tilt = {
	{(PropertyRNA *)&rna_ParticleSettings_color_maximum, (PropertyRNA *)&rna_ParticleSettings_billboard_offset_split,
	-1, "billboard_tilt", 8195, "Tilt",
	"Tilt of the billboards",
	0, "*",
	PROP_FLOAT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Particle_redo, 0, NULL, NULL,
	offsetof(ParticleSettings, bb_tilt), 4, NULL},
	ParticleSettings_billboard_tilt_get, ParticleSettings_billboard_tilt_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, -1.0f, 1.0f, -1.0f, 1.0f, 10.0f, 3, 0.0f, NULL
};

FloatPropertyRNA rna_ParticleSettings_color_maximum = {
	{(PropertyRNA *)&rna_ParticleSettings_billboard_tilt_random, (PropertyRNA *)&rna_ParticleSettings_billboard_tilt,
	-1, "color_maximum", 8195, "Color Maximum",
	"Maximum length of the particle color vector",
	0, "*",
	PROP_FLOAT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Particle_redo, 0, NULL, NULL,
	offsetof(ParticleSettings, color_vec_max), 4, NULL},
	ParticleSettings_color_maximum_get, ParticleSettings_color_maximum_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0099999998f, 100.0f, 0.0099999998f, 100.0f, 10.0f, 3, 0.0f, NULL
};

FloatPropertyRNA rna_ParticleSettings_billboard_tilt_random = {
	{(PropertyRNA *)&rna_ParticleSettings_billboard_offset, (PropertyRNA *)&rna_ParticleSettings_color_maximum,
	-1, "billboard_tilt_random", 8195, "Random Tilt",
	"Random tilt of the billboards",
	0, "*",
	PROP_FLOAT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Particle_redo, 0, NULL, NULL,
	offsetof(ParticleSettings, bb_rand_tilt), 4, NULL},
	ParticleSettings_billboard_tilt_random_get, ParticleSettings_billboard_tilt_random_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 1.0f, 0.0f, 1.0f, 10.0f, 3, 0.0f, NULL
};

static float rna_ParticleSettings_billboard_offset_default[2] = {
	0.0f,
	0.0f
};

FloatPropertyRNA rna_ParticleSettings_billboard_offset = {
	{(PropertyRNA *)&rna_ParticleSettings_billboard_size, (PropertyRNA *)&rna_ParticleSettings_billboard_tilt_random,
	-1, "billboard_offset", 8195, "Billboard Offset",
	"",
	0, "*",
	PROP_FLOAT, PROP_TRANSLATION | PROP_UNIT_LENGTH, NULL, 1, {2, 0, 0}, 2,
	rna_Particle_redo, 0, NULL, NULL,
	offsetof(ParticleSettings, bb_offset), 4, NULL},
	NULL, NULL, ParticleSettings_billboard_offset_get, ParticleSettings_billboard_offset_set, NULL, NULL, NULL, NULL, NULL, NULL, -1.0f, 1.0f, -100.0f, 100.0f, 0.1000000015f, 3, 0.0f, rna_ParticleSettings_billboard_offset_default
};

static float rna_ParticleSettings_billboard_size_default[2] = {
	0.0f,
	0.0f
};

FloatPropertyRNA rna_ParticleSettings_billboard_size = {
	{(PropertyRNA *)&rna_ParticleSettings_billboard_velocity_head, (PropertyRNA *)&rna_ParticleSettings_billboard_offset,
	-1, "billboard_size", 8195, "Billboard Scale",
	"Scale billboards relative to particle size",
	0, "*",
	PROP_FLOAT, PROP_FACTOR | PROP_UNIT_NONE, NULL, 1, {2, 0, 0}, 2,
	rna_Particle_redo, 0, NULL, NULL,
	offsetof(ParticleSettings, bb_size), 4, NULL},
	NULL, NULL, ParticleSettings_billboard_size_get, ParticleSettings_billboard_size_set, NULL, NULL, NULL, NULL, NULL, NULL, 0.0010000000f, 10.0f, 0.0010000000f, 10.0f, 10.0f, 3, 0.0f, rna_ParticleSettings_billboard_size_default
};

FloatPropertyRNA rna_ParticleSettings_billboard_velocity_head = {
	{(PropertyRNA *)&rna_ParticleSettings_billboard_velocity_tail, (PropertyRNA *)&rna_ParticleSettings_billboard_size,
	-1, "billboard_velocity_head", 8195, "Billboard Velocity Head",
	"Scale billboards by velocity",
	0, "*",
	PROP_FLOAT, PROP_FACTOR | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Particle_redo, 0, NULL, NULL,
	offsetof(ParticleSettings, bb_vel_head), 4, NULL},
	ParticleSettings_billboard_velocity_head_get, ParticleSettings_billboard_velocity_head_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 10.0f, 0.0f, 10.0f, 10.0f, 3, 0.0f, NULL
};

FloatPropertyRNA rna_ParticleSettings_billboard_velocity_tail = {
	{(PropertyRNA *)&rna_ParticleSettings_use_simplify, (PropertyRNA *)&rna_ParticleSettings_billboard_velocity_head,
	-1, "billboard_velocity_tail", 8195, "Billboard Velocity Tail",
	"Scale billboards by velocity",
	0, "*",
	PROP_FLOAT, PROP_FACTOR | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Particle_redo, 0, NULL, NULL,
	offsetof(ParticleSettings, bb_vel_tail), 4, NULL},
	ParticleSettings_billboard_velocity_tail_get, ParticleSettings_billboard_velocity_tail_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 10.0f, 0.0f, 10.0f, 10.0f, 3, 0.0f, NULL
};

BoolPropertyRNA rna_ParticleSettings_use_simplify = {
	{(PropertyRNA *)&rna_ParticleSettings_use_simplify_viewport, (PropertyRNA *)&rna_ParticleSettings_billboard_velocity_tail,
	-1, "use_simplify", 3, "Child Simplification",
	"Remove child strands as the object becomes smaller on the screen",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	ParticleSettings_use_simplify_get, ParticleSettings_use_simplify_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_ParticleSettings_use_simplify_viewport = {
	{(PropertyRNA *)&rna_ParticleSettings_simplify_refsize, (PropertyRNA *)&rna_ParticleSettings_use_simplify,
	-1, "use_simplify_viewport", 3, "Viewport",
	"",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	ParticleSettings_use_simplify_viewport_get, ParticleSettings_use_simplify_viewport_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

IntPropertyRNA rna_ParticleSettings_simplify_refsize = {
	{(PropertyRNA *)&rna_ParticleSettings_simplify_rate, (PropertyRNA *)&rna_ParticleSettings_use_simplify_viewport,
	-1, "simplify_refsize", 8195, "Reference Size",
	"Reference size in pixels, after which simplification begins",
	0, "*",
	PROP_INT, PROP_PIXEL | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	offsetof(ParticleSettings, simplify_refsize), 1, NULL},
	ParticleSettings_simplify_refsize_get, ParticleSettings_simplify_refsize_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL,
	1, 32767, 1, 32767, 1, 0, NULL
};

FloatPropertyRNA rna_ParticleSettings_simplify_rate = {
	{(PropertyRNA *)&rna_ParticleSettings_simplify_transition, (PropertyRNA *)&rna_ParticleSettings_simplify_refsize,
	-1, "simplify_rate", 8195, "Rate",
	"Speed of simplification",
	0, "*",
	PROP_FLOAT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	offsetof(ParticleSettings, simplify_rate), 4, NULL},
	ParticleSettings_simplify_rate_get, ParticleSettings_simplify_rate_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 1.0f, 0.0f, 1.0f, 10.0f, 3, 0.0f, NULL
};

FloatPropertyRNA rna_ParticleSettings_simplify_transition = {
	{(PropertyRNA *)&rna_ParticleSettings_simplify_viewport, (PropertyRNA *)&rna_ParticleSettings_simplify_rate,
	-1, "simplify_transition", 8195, "Transition",
	"Transition period for fading out strands",
	0, "*",
	PROP_FLOAT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	offsetof(ParticleSettings, simplify_transition), 4, NULL},
	ParticleSettings_simplify_transition_get, ParticleSettings_simplify_transition_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 1.0f, 0.0f, 1.0f, 10.0f, 3, 0.0f, NULL
};

FloatPropertyRNA rna_ParticleSettings_simplify_viewport = {
	{(PropertyRNA *)&rna_ParticleSettings_frame_start, (PropertyRNA *)&rna_ParticleSettings_simplify_transition,
	-1, "simplify_viewport", 8195, "Rate",
	"Speed of Simplification",
	0, "*",
	PROP_FLOAT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	offsetof(ParticleSettings, simplify_viewport), 4, NULL},
	ParticleSettings_simplify_viewport_get, ParticleSettings_simplify_viewport_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 0.9990000129f, 0.0f, 0.9990000129f, 10.0f, 3, 0.0f, NULL
};

FloatPropertyRNA rna_ParticleSettings_frame_start = {
	{(PropertyRNA *)&rna_ParticleSettings_frame_end, (PropertyRNA *)&rna_ParticleSettings_simplify_viewport,
	-1, "frame_start", 1, "Start",
	"Frame number to start emitting particles",
	0, "*",
	PROP_FLOAT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Particle_reset, 0, NULL, NULL,
	0, -1, NULL},
	ParticleSettings_frame_start_get, ParticleSettings_frame_start_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, -300000.0f, 300000.0f, -300000.0f, 300000.0f, 10.0f, 3, 0.0f, NULL
};

FloatPropertyRNA rna_ParticleSettings_frame_end = {
	{(PropertyRNA *)&rna_ParticleSettings_lifetime, (PropertyRNA *)&rna_ParticleSettings_frame_start,
	-1, "frame_end", 1, "End",
	"Frame number to stop emitting particles",
	0, "*",
	PROP_FLOAT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Particle_reset, 0, NULL, NULL,
	0, -1, NULL},
	ParticleSettings_frame_end_get, ParticleSettings_frame_end_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, -300000.0f, 300000.0f, -300000.0f, 300000.0f, 10.0f, 3, 0.0f, NULL
};

FloatPropertyRNA rna_ParticleSettings_lifetime = {
	{(PropertyRNA *)&rna_ParticleSettings_lifetime_random, (PropertyRNA *)&rna_ParticleSettings_frame_end,
	-1, "lifetime", 8195, "Lifetime",
	"Life span of the particles",
	0, "*",
	PROP_FLOAT, PROP_TIME | PROP_UNIT_TIME, NULL, 0, {0, 0, 0}, 0,
	rna_Particle_reset, 0, NULL, NULL,
	offsetof(ParticleSettings, lifetime), 4, NULL},
	ParticleSettings_lifetime_get, ParticleSettings_lifetime_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 1.0f, 300000.0f, 1.0f, 300000.0f, 10.0f, 3, 0.0f, NULL
};

FloatPropertyRNA rna_ParticleSettings_lifetime_random = {
	{(PropertyRNA *)&rna_ParticleSettings_time_tweak, (PropertyRNA *)&rna_ParticleSettings_lifetime,
	-1, "lifetime_random", 8195, "Random",
	"Give the particle life a random variation",
	0, "*",
	PROP_FLOAT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Particle_reset, 0, NULL, NULL,
	offsetof(ParticleSettings, randlife), 4, NULL},
	ParticleSettings_lifetime_random_get, ParticleSettings_lifetime_random_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 1.0f, 0.0f, 1.0f, 10.0f, 3, 0.0f, NULL
};

FloatPropertyRNA rna_ParticleSettings_time_tweak = {
	{(PropertyRNA *)&rna_ParticleSettings_timestep, (PropertyRNA *)&rna_ParticleSettings_lifetime_random,
	-1, "time_tweak", 8195, "Tweak",
	"A multiplier for physics timestep (1.0 means one frame = 1/25 seconds)",
	0, "*",
	PROP_FLOAT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Particle_reset, 0, NULL, NULL,
	offsetof(ParticleSettings, timetweak), 4, NULL},
	ParticleSettings_time_tweak_get, ParticleSettings_time_tweak_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 10.0f, 0.0f, 100.0f, 1.0f, 3, 0.0f, NULL
};

FloatPropertyRNA rna_ParticleSettings_timestep = {
	{(PropertyRNA *)&rna_ParticleSettings_use_adaptive_subframes, (PropertyRNA *)&rna_ParticleSettings_time_tweak,
	-1, "timestep", 3, "Timestep",
	"The simulation timestep per frame (seconds per frame)",
	0, "*",
	PROP_FLOAT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Particle_reset, 0, NULL, NULL,
	0, -1, NULL},
	ParticleSettings_timestep_get, ParticleSettings_timestep_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0099999998f, 10.0f, 0.0001000000f, 100.0f, 1.0f, 3, 0.0f, NULL
};

BoolPropertyRNA rna_ParticleSettings_use_adaptive_subframes = {
	{(PropertyRNA *)&rna_ParticleSettings_subframes, (PropertyRNA *)&rna_ParticleSettings_timestep,
	-1, "use_adaptive_subframes", 3, "Automatic Subframes",
	"Automatically set the number of subframes",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Particle_reset, 0, NULL, NULL,
	0, -1, NULL},
	ParticleSettings_use_adaptive_subframes_get, ParticleSettings_use_adaptive_subframes_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

IntPropertyRNA rna_ParticleSettings_subframes = {
	{(PropertyRNA *)&rna_ParticleSettings_courant_target, (PropertyRNA *)&rna_ParticleSettings_use_adaptive_subframes,
	-1, "subframes", 8195, "Subframes",
	"Subframes to simulate for improved stability and finer granularity simulations (dt = timestep / (subframes + 1))",
	0, "*",
	PROP_INT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Particle_reset, 0, NULL, NULL,
	offsetof(ParticleSettings, subframes), 1, NULL},
	ParticleSettings_subframes_get, ParticleSettings_subframes_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL,
	0, 1000, 0, 1000, 1, 0, NULL
};

FloatPropertyRNA rna_ParticleSettings_courant_target = {
	{(PropertyRNA *)&rna_ParticleSettings_jitter_factor, (PropertyRNA *)&rna_ParticleSettings_subframes,
	-1, "courant_target", 8195, "Adaptive Subframe Threshold",
	"The relative distance a particle can move before requiring more subframes (target Courant number); 0.01-0.3 is the recommended range",
	0, "*",
	PROP_FLOAT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Particle_reset, 0, NULL, NULL,
	offsetof(ParticleSettings, courant_target), 4, NULL},
	ParticleSettings_courant_target_get, ParticleSettings_courant_target_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0001000000f, 10.0f, 0.0001000000f, 10.0f, 10.0f, 3, 0.1000000015f, NULL
};

FloatPropertyRNA rna_ParticleSettings_jitter_factor = {
	{(PropertyRNA *)&rna_ParticleSettings_effect_hair, (PropertyRNA *)&rna_ParticleSettings_courant_target,
	-1, "jitter_factor", 8193, "Amount",
	"Amount of jitter applied to the sampling",
	0, "*",
	PROP_FLOAT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Particle_reset, 0, NULL, NULL,
	offsetof(ParticleSettings, jitfac), 4, NULL},
	ParticleSettings_jitter_factor_get, ParticleSettings_jitter_factor_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 2.0f, 0.0f, 2.0f, 10.0f, 3, 0.0f, NULL
};

FloatPropertyRNA rna_ParticleSettings_effect_hair = {
	{(PropertyRNA *)&rna_ParticleSettings_count, (PropertyRNA *)&rna_ParticleSettings_jitter_factor,
	-1, "effect_hair", 8195, "Stiffness",
	"Hair stiffness for effectors",
	0, "*",
	PROP_FLOAT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Particle_redo, 0, NULL, NULL,
	offsetof(ParticleSettings, eff_hair), 4, NULL},
	ParticleSettings_effect_hair_get, ParticleSettings_effect_hair_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 1.0f, 0.0f, 1.0f, 10.0f, 3, 0.0f, NULL
};

IntPropertyRNA rna_ParticleSettings_count = {
	{(PropertyRNA *)&rna_ParticleSettings_userjit, (PropertyRNA *)&rna_ParticleSettings_effect_hair,
	-1, "count", 8193, "Number",
	"Total number of particles",
	0, "*",
	PROP_INT, PROP_UNSIGNED | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Particle_reset, 0, NULL, NULL,
	offsetof(ParticleSettings, totpart), 0, NULL},
	ParticleSettings_count_get, ParticleSettings_count_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL,
	0, 100000, 0, 10000000, 1, 0, NULL
};

IntPropertyRNA rna_ParticleSettings_userjit = {
	{(PropertyRNA *)&rna_ParticleSettings_grid_resolution, (PropertyRNA *)&rna_ParticleSettings_count,
	-1, "userjit", 8193, "P/F",
	"Emission locations / face (0 = automatic)",
	0, "*",
	PROP_INT, PROP_UNSIGNED | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Particle_reset, 0, NULL, NULL,
	offsetof(ParticleSettings, userjit), 0, NULL},
	ParticleSettings_userjit_get, ParticleSettings_userjit_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL,
	0, 1000, 0, 1000, 1, 0, NULL
};

IntPropertyRNA rna_ParticleSettings_grid_resolution = {
	{(PropertyRNA *)&rna_ParticleSettings_grid_random, (PropertyRNA *)&rna_ParticleSettings_userjit,
	-1, "grid_resolution", 8193, "Resolution",
	"The resolution of the particle grid",
	0, "*",
	PROP_INT, PROP_UNSIGNED | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Particle_reset, 0, NULL, NULL,
	offsetof(ParticleSettings, grid_res), 0, NULL},
	ParticleSettings_grid_resolution_get, ParticleSettings_grid_resolution_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL,
	1, 50, 1, 250, 1, 0, NULL
};

FloatPropertyRNA rna_ParticleSettings_grid_random = {
	{(PropertyRNA *)&rna_ParticleSettings_effector_amount, (PropertyRNA *)&rna_ParticleSettings_grid_resolution,
	-1, "grid_random", 8195, "Grid Randomness",
	"Add random offset to the grid locations",
	0, "*",
	PROP_FLOAT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Particle_reset, 0, NULL, NULL,
	offsetof(ParticleSettings, grid_rand), 4, NULL},
	ParticleSettings_grid_random_get, ParticleSettings_grid_random_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 1.0f, 0.0f, 1.0f, 10.0f, 3, 0.0f, NULL
};

IntPropertyRNA rna_ParticleSettings_effector_amount = {
	{(PropertyRNA *)&rna_ParticleSettings_normal_factor, (PropertyRNA *)&rna_ParticleSettings_grid_random,
	-1, "effector_amount", 8195, "Effector Number",
	"How many particles are effectors (0 is all particles)",
	0, "*",
	PROP_INT, PROP_UNSIGNED | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Particle_reset, 0, NULL, NULL,
	offsetof(ParticleSettings, effector_amount), 0, NULL},
	ParticleSettings_effector_amount_get, ParticleSettings_effector_amount_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL,
	0, 100, 0, 10000, 1, 0, NULL
};

FloatPropertyRNA rna_ParticleSettings_normal_factor = {
	{(PropertyRNA *)&rna_ParticleSettings_object_factor, (PropertyRNA *)&rna_ParticleSettings_effector_amount,
	-1, "normal_factor", 8195, "Normal",
	"Let the surface normal give the particle a starting speed",
	0, "*",
	PROP_FLOAT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Particle_reset, 0, NULL, NULL,
	offsetof(ParticleSettings, normfac), 4, NULL},
	ParticleSettings_normal_factor_get, ParticleSettings_normal_factor_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 100.0f, -1000.0f, 1000.0f, 1.0f, 3, 0.0f, NULL
};

FloatPropertyRNA rna_ParticleSettings_object_factor = {
	{(PropertyRNA *)&rna_ParticleSettings_factor_random, (PropertyRNA *)&rna_ParticleSettings_normal_factor,
	-1, "object_factor", 8195, "Object",
	"Let the object give the particle a starting speed",
	0, "*",
	PROP_FLOAT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Particle_reset, 0, NULL, NULL,
	offsetof(ParticleSettings, obfac), 4, NULL},
	ParticleSettings_object_factor_get, ParticleSettings_object_factor_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, -1.0f, 1.0f, -200.0f, 200.0f, 0.1000000015f, 3, 0.0f, NULL
};

FloatPropertyRNA rna_ParticleSettings_factor_random = {
	{(PropertyRNA *)&rna_ParticleSettings_particle_factor, (PropertyRNA *)&rna_ParticleSettings_object_factor,
	-1, "factor_random", 8195, "Random",
	"Give the starting speed a random variation",
	0, "*",
	PROP_FLOAT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Particle_reset, 0, NULL, NULL,
	offsetof(ParticleSettings, randfac), 4, NULL},
	ParticleSettings_factor_random_get, ParticleSettings_factor_random_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 100.0f, 0.0f, 200.0f, 1.0f, 3, 0.0f, NULL
};

FloatPropertyRNA rna_ParticleSettings_particle_factor = {
	{(PropertyRNA *)&rna_ParticleSettings_tangent_factor, (PropertyRNA *)&rna_ParticleSettings_factor_random,
	-1, "particle_factor", 8195, "Particle",
	"Let the target particle give the particle a starting speed",
	0, "*",
	PROP_FLOAT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Particle_reset, 0, NULL, NULL,
	offsetof(ParticleSettings, partfac), 4, NULL},
	ParticleSettings_particle_factor_get, ParticleSettings_particle_factor_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, -1.0f, 1.0f, -200.0f, 200.0f, 0.1000000015f, 3, 0.0f, NULL
};

FloatPropertyRNA rna_ParticleSettings_tangent_factor = {
	{(PropertyRNA *)&rna_ParticleSettings_tangent_phase, (PropertyRNA *)&rna_ParticleSettings_particle_factor,
	-1, "tangent_factor", 8195, "Tangent",
	"Let the surface tangent give the particle a starting speed",
	0, "*",
	PROP_FLOAT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Particle_reset, 0, NULL, NULL,
	offsetof(ParticleSettings, tanfac), 4, NULL},
	ParticleSettings_tangent_factor_get, ParticleSettings_tangent_factor_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, -100.0f, 100.0f, -1000.0f, 1000.0f, 1.0f, 2, 0.0f, NULL
};

FloatPropertyRNA rna_ParticleSettings_tangent_phase = {
	{(PropertyRNA *)&rna_ParticleSettings_reactor_factor, (PropertyRNA *)&rna_ParticleSettings_tangent_factor,
	-1, "tangent_phase", 8195, "Rot",
	"Rotate the surface tangent",
	0, "*",
	PROP_FLOAT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Particle_reset, 0, NULL, NULL,
	offsetof(ParticleSettings, tanphase), 4, NULL},
	ParticleSettings_tangent_phase_get, ParticleSettings_tangent_phase_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, -1.0f, 1.0f, -1.0f, 1.0f, 10.0f, 3, 0.0f, NULL
};

FloatPropertyRNA rna_ParticleSettings_reactor_factor = {
	{(PropertyRNA *)&rna_ParticleSettings_object_align_factor, (PropertyRNA *)&rna_ParticleSettings_tangent_phase,
	-1, "reactor_factor", 8195, "Reactor",
	"Let the vector away from the target particle\'s location give the particle a starting speed",
	0, "*",
	PROP_FLOAT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Particle_reset, 0, NULL, NULL,
	offsetof(ParticleSettings, reactfac), 4, NULL},
	ParticleSettings_reactor_factor_get, ParticleSettings_reactor_factor_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, -10.0f, 10.0f, -10.0f, 10.0f, 10.0f, 3, 0.0f, NULL
};

static float rna_ParticleSettings_object_align_factor_default[3] = {
	0.0f,
	0.0f,
	0.0f
};

FloatPropertyRNA rna_ParticleSettings_object_align_factor = {
	{(PropertyRNA *)&rna_ParticleSettings_angular_velocity_factor, (PropertyRNA *)&rna_ParticleSettings_reactor_factor,
	-1, "object_align_factor", 8195, "Object Aligned",
	"Let the emitter object orientation give the particle a starting speed",
	0, "*",
	PROP_FLOAT, PROP_VELOCITY | PROP_UNIT_VELOCITY, NULL, 1, {3, 0, 0}, 3,
	rna_Particle_reset, 0, NULL, NULL,
	offsetof(ParticleSettings, ob_vel), 4, NULL},
	NULL, NULL, ParticleSettings_object_align_factor_get, ParticleSettings_object_align_factor_set, NULL, NULL, NULL, NULL, NULL, NULL, -100.0f, 100.0f, -200.0f, 200.0f, 1.0f, 3, 0.0f, rna_ParticleSettings_object_align_factor_default
};

FloatPropertyRNA rna_ParticleSettings_angular_velocity_factor = {
	{(PropertyRNA *)&rna_ParticleSettings_phase_factor, (PropertyRNA *)&rna_ParticleSettings_object_align_factor,
	-1, "angular_velocity_factor", 8195, "Angular Velocity",
	"Angular velocity amount (in radians per second)",
	0, "*",
	PROP_FLOAT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Particle_reset, 0, NULL, NULL,
	offsetof(ParticleSettings, avefac), 4, NULL},
	ParticleSettings_angular_velocity_factor_get, ParticleSettings_angular_velocity_factor_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, -100.0f, 100.0f, -200.0f, 200.0f, 10.0f, 3, 0.0f, NULL
};

FloatPropertyRNA rna_ParticleSettings_phase_factor = {
	{(PropertyRNA *)&rna_ParticleSettings_rotation_factor_random, (PropertyRNA *)&rna_ParticleSettings_angular_velocity_factor,
	-1, "phase_factor", 8195, "Phase",
	"Rotation around the chosen orientation axis",
	0, "*",
	PROP_FLOAT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Particle_reset, 0, NULL, NULL,
	offsetof(ParticleSettings, phasefac), 4, NULL},
	ParticleSettings_phase_factor_get, ParticleSettings_phase_factor_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, -1.0f, 1.0f, -1.0f, 1.0f, 10.0f, 3, 0.0f, NULL
};

FloatPropertyRNA rna_ParticleSettings_rotation_factor_random = {
	{(PropertyRNA *)&rna_ParticleSettings_phase_factor_random, (PropertyRNA *)&rna_ParticleSettings_phase_factor,
	-1, "rotation_factor_random", 8195, "Random Orientation",
	"Randomize particle orientation",
	0, "*",
	PROP_FLOAT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Particle_reset, 0, NULL, NULL,
	offsetof(ParticleSettings, randrotfac), 4, NULL},
	ParticleSettings_rotation_factor_random_get, ParticleSettings_rotation_factor_random_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 1.0f, 0.0f, 1.0f, 10.0f, 3, 0.0f, NULL
};

FloatPropertyRNA rna_ParticleSettings_phase_factor_random = {
	{(PropertyRNA *)&rna_ParticleSettings_hair_length, (PropertyRNA *)&rna_ParticleSettings_rotation_factor_random,
	-1, "phase_factor_random", 8195, "Random Phase",
	"Randomize rotation around the chosen orientation axis",
	0, "*",
	PROP_FLOAT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Particle_reset, 0, NULL, NULL,
	offsetof(ParticleSettings, randphasefac), 4, NULL},
	ParticleSettings_phase_factor_random_get, ParticleSettings_phase_factor_random_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 1.0f, 0.0f, 1.0f, 10.0f, 3, 0.0f, NULL
};

FloatPropertyRNA rna_ParticleSettings_hair_length = {
	{(PropertyRNA *)&rna_ParticleSettings_mass, (PropertyRNA *)&rna_ParticleSettings_phase_factor_random,
	-1, "hair_length", 3, "Hair Length",
	"Length of the hair",
	0, "*",
	PROP_FLOAT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Particle_reset, 0, NULL, NULL,
	0, -1, NULL},
	ParticleSettings_hair_length_get, ParticleSettings_hair_length_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 10.0f, 0.0f, 1000.0f, 1.0f, 3, 0.0f, NULL
};

FloatPropertyRNA rna_ParticleSettings_mass = {
	{(PropertyRNA *)&rna_ParticleSettings_particle_size, (PropertyRNA *)&rna_ParticleSettings_hair_length,
	-1, "mass", 8195, "Mass",
	"Mass of the particles",
	0, "*",
	PROP_FLOAT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Particle_reset, 0, NULL, NULL,
	offsetof(ParticleSettings, mass), 4, NULL},
	ParticleSettings_mass_get, ParticleSettings_mass_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0099999998f, 100.0f, 0.0000000100f, 100000.0f, 1.0f, 3, 0.0f, NULL
};

FloatPropertyRNA rna_ParticleSettings_particle_size = {
	{(PropertyRNA *)&rna_ParticleSettings_size_random, (PropertyRNA *)&rna_ParticleSettings_mass,
	-1, "particle_size", 8195, "Size",
	"The size of the particles",
	0, "*",
	PROP_FLOAT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Particle_reset, 0, NULL, NULL,
	offsetof(ParticleSettings, size), 4, NULL},
	ParticleSettings_particle_size_get, ParticleSettings_particle_size_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0099999998f, 100.0f, 0.0010000000f, 100000.0f, 1.0f, 3, 0.0f, NULL
};

FloatPropertyRNA rna_ParticleSettings_size_random = {
	{(PropertyRNA *)&rna_ParticleSettings_drag_factor, (PropertyRNA *)&rna_ParticleSettings_particle_size,
	-1, "size_random", 8195, "Random Size",
	"Give the particle size a random variation",
	0, "*",
	PROP_FLOAT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Particle_reset, 0, NULL, NULL,
	offsetof(ParticleSettings, randsize), 4, NULL},
	ParticleSettings_size_random_get, ParticleSettings_size_random_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 1.0f, 0.0f, 1.0f, 10.0f, 3, 0.0f, NULL
};

FloatPropertyRNA rna_ParticleSettings_drag_factor = {
	{(PropertyRNA *)&rna_ParticleSettings_brownian_factor, (PropertyRNA *)&rna_ParticleSettings_size_random,
	-1, "drag_factor", 8195, "Drag",
	"Amount of air-drag",
	0, "*",
	PROP_FLOAT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Particle_reset, 0, NULL, NULL,
	offsetof(ParticleSettings, dragfac), 4, NULL},
	ParticleSettings_drag_factor_get, ParticleSettings_drag_factor_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 1.0f, 0.0f, 1.0f, 10.0f, 3, 0.0f, NULL
};

FloatPropertyRNA rna_ParticleSettings_brownian_factor = {
	{(PropertyRNA *)&rna_ParticleSettings_damping, (PropertyRNA *)&rna_ParticleSettings_drag_factor,
	-1, "brownian_factor", 8195, "Brownian",
	"Amount of random, erratic particle movement",
	0, "*",
	PROP_FLOAT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Particle_reset, 0, NULL, NULL,
	offsetof(ParticleSettings, brownfac), 4, NULL},
	ParticleSettings_brownian_factor_get, ParticleSettings_brownian_factor_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 20.0f, 0.0f, 200.0f, 1.0f, 3, 0.0f, NULL
};

FloatPropertyRNA rna_ParticleSettings_damping = {
	{(PropertyRNA *)&rna_ParticleSettings_length_random, (PropertyRNA *)&rna_ParticleSettings_brownian_factor,
	-1, "damping", 8195, "Damp",
	"Amount of damping",
	0, "*",
	PROP_FLOAT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Particle_reset, 0, NULL, NULL,
	offsetof(ParticleSettings, dampfac), 4, NULL},
	ParticleSettings_damping_get, ParticleSettings_damping_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 1.0f, 0.0f, 1.0f, 10.0f, 3, 0.0f, NULL
};

FloatPropertyRNA rna_ParticleSettings_length_random = {
	{(PropertyRNA *)&rna_ParticleSettings_child_nbr, (PropertyRNA *)&rna_ParticleSettings_damping,
	-1, "length_random", 8195, "Random Length",
	"Give path length a random variation",
	0, "*",
	PROP_FLOAT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Particle_redo, 0, NULL, NULL,
	offsetof(ParticleSettings, randlength), 4, NULL},
	ParticleSettings_length_random_get, ParticleSettings_length_random_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 1.0f, 0.0f, 1.0f, 10.0f, 3, 0.0f, NULL
};

IntPropertyRNA rna_ParticleSettings_child_nbr = {
	{(PropertyRNA *)&rna_ParticleSettings_rendered_child_count, (PropertyRNA *)&rna_ParticleSettings_length_random,
	-1, "child_nbr", 8195, "Children Per Parent",
	"Number of children/parent",
	0, "*",
	PROP_INT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Particle_redo_child, 0, NULL, NULL,
	offsetof(ParticleSettings, child_nbr), 0, NULL},
	ParticleSettings_child_nbr_get, ParticleSettings_child_nbr_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL,
	0, 1000, 0, 100000, 1, 0, NULL
};

IntPropertyRNA rna_ParticleSettings_rendered_child_count = {
	{(PropertyRNA *)&rna_ParticleSettings_virtual_parents, (PropertyRNA *)&rna_ParticleSettings_child_nbr,
	-1, "rendered_child_count", 8195, "Rendered Children",
	"Number of children/parent for rendering",
	0, "*",
	PROP_INT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	offsetof(ParticleSettings, ren_child_nbr), 0, NULL},
	ParticleSettings_rendered_child_count_get, ParticleSettings_rendered_child_count_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL,
	0, 10000, 0, 100000, 1, 0, NULL
};

FloatPropertyRNA rna_ParticleSettings_virtual_parents = {
	{(PropertyRNA *)&rna_ParticleSettings_child_size, (PropertyRNA *)&rna_ParticleSettings_rendered_child_count,
	-1, "virtual_parents", 8195, "Virtual Parents",
	"Relative amount of virtual parents",
	0, "*",
	PROP_FLOAT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Particle_redo_child, 0, NULL, NULL,
	offsetof(ParticleSettings, parents), 4, NULL},
	ParticleSettings_virtual_parents_get, ParticleSettings_virtual_parents_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 1.0f, 0.0f, 1.0f, 10.0f, 3, 0.0f, NULL
};

FloatPropertyRNA rna_ParticleSettings_child_size = {
	{(PropertyRNA *)&rna_ParticleSettings_child_size_random, (PropertyRNA *)&rna_ParticleSettings_virtual_parents,
	-1, "child_size", 8195, "Child Size",
	"A multiplier for the child particle size",
	0, "*",
	PROP_FLOAT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Particle_redo_child, 0, NULL, NULL,
	offsetof(ParticleSettings, childsize), 4, NULL},
	ParticleSettings_child_size_get, ParticleSettings_child_size_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0099999998f, 100.0f, 0.0010000000f, 100000.0f, 0.1000000015f, 3, 0.0f, NULL
};

FloatPropertyRNA rna_ParticleSettings_child_size_random = {
	{(PropertyRNA *)&rna_ParticleSettings_child_radius, (PropertyRNA *)&rna_ParticleSettings_child_size,
	-1, "child_size_random", 8195, "Random Child Size",
	"Random variation to the size of the child particles",
	0, "*",
	PROP_FLOAT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Particle_redo_child, 0, NULL, NULL,
	offsetof(ParticleSettings, childrandsize), 4, NULL},
	ParticleSettings_child_size_random_get, ParticleSettings_child_size_random_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 1.0f, 0.0f, 1.0f, 10.0f, 3, 0.0f, NULL
};

FloatPropertyRNA rna_ParticleSettings_child_radius = {
	{(PropertyRNA *)&rna_ParticleSettings_child_roundness, (PropertyRNA *)&rna_ParticleSettings_child_size_random,
	-1, "child_radius", 8195, "Child Radius",
	"Radius of children around parent",
	0, "*",
	PROP_FLOAT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Particle_redo_child, 0, NULL, NULL,
	offsetof(ParticleSettings, childrad), 4, NULL},
	ParticleSettings_child_radius_get, ParticleSettings_child_radius_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 10.0f, 0.0f, 10.0f, 10.0f, 3, 0.0f, NULL
};

FloatPropertyRNA rna_ParticleSettings_child_roundness = {
	{(PropertyRNA *)&rna_ParticleSettings_clump_factor, (PropertyRNA *)&rna_ParticleSettings_child_radius,
	-1, "child_roundness", 8195, "Child Roundness",
	"Roundness of children around parent",
	0, "*",
	PROP_FLOAT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Particle_redo_child, 0, NULL, NULL,
	offsetof(ParticleSettings, childflat), 4, NULL},
	ParticleSettings_child_roundness_get, ParticleSettings_child_roundness_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 1.0f, 0.0f, 1.0f, 10.0f, 3, 0.0f, NULL
};

FloatPropertyRNA rna_ParticleSettings_clump_factor = {
	{(PropertyRNA *)&rna_ParticleSettings_clump_shape, (PropertyRNA *)&rna_ParticleSettings_child_roundness,
	-1, "clump_factor", 8195, "Clump",
	"Amount of clumping",
	0, "*",
	PROP_FLOAT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Particle_redo_child, 0, NULL, NULL,
	offsetof(ParticleSettings, clumpfac), 4, NULL},
	ParticleSettings_clump_factor_get, ParticleSettings_clump_factor_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, -1.0f, 1.0f, -1.0f, 1.0f, 10.0f, 3, 0.0f, NULL
};

FloatPropertyRNA rna_ParticleSettings_clump_shape = {
	{(PropertyRNA *)&rna_ParticleSettings_kink_amplitude, (PropertyRNA *)&rna_ParticleSettings_clump_factor,
	-1, "clump_shape", 8195, "Shape",
	"Shape of clumping",
	0, "*",
	PROP_FLOAT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Particle_redo_child, 0, NULL, NULL,
	offsetof(ParticleSettings, clumppow), 4, NULL},
	ParticleSettings_clump_shape_get, ParticleSettings_clump_shape_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, -0.9990000129f, 0.9990000129f, -0.9990000129f, 0.9990000129f, 10.0f, 3, 0.0f, NULL
};

FloatPropertyRNA rna_ParticleSettings_kink_amplitude = {
	{(PropertyRNA *)&rna_ParticleSettings_kink_amplitude_clump, (PropertyRNA *)&rna_ParticleSettings_clump_shape,
	-1, "kink_amplitude", 8195, "Amplitude",
	"The amplitude of the offset",
	0, "*",
	PROP_FLOAT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Particle_redo_child, 0, NULL, NULL,
	offsetof(ParticleSettings, kink_amp), 4, NULL},
	ParticleSettings_kink_amplitude_get, ParticleSettings_kink_amplitude_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, -10.0f, 10.0f, -100000.0f, 100000.0f, 0.1000000015f, 3, 0.0f, NULL
};

FloatPropertyRNA rna_ParticleSettings_kink_amplitude_clump = {
	{(PropertyRNA *)&rna_ParticleSettings_kink_frequency, (PropertyRNA *)&rna_ParticleSettings_kink_amplitude,
	-1, "kink_amplitude_clump", 8195, "Amplitude Clump",
	"How much clump affects kink amplitude",
	0, "*",
	PROP_FLOAT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Particle_redo_child, 0, NULL, NULL,
	offsetof(ParticleSettings, kink_amp_clump), 4, NULL},
	ParticleSettings_kink_amplitude_clump_get, ParticleSettings_kink_amplitude_clump_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 1.0f, 0.0f, 1.0f, 10.0f, 3, 0.0f, NULL
};

FloatPropertyRNA rna_ParticleSettings_kink_frequency = {
	{(PropertyRNA *)&rna_ParticleSettings_kink_shape, (PropertyRNA *)&rna_ParticleSettings_kink_amplitude_clump,
	-1, "kink_frequency", 8195, "Frequency",
	"The frequency of the offset (1/total length)",
	0, "*",
	PROP_FLOAT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Particle_redo_child, 0, NULL, NULL,
	offsetof(ParticleSettings, kink_freq), 4, NULL},
	ParticleSettings_kink_frequency_get, ParticleSettings_kink_frequency_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, -10.0f, 10.0f, -100000.0f, 100000.0f, 0.1000000015f, 3, 0.0f, NULL
};

FloatPropertyRNA rna_ParticleSettings_kink_shape = {
	{(PropertyRNA *)&rna_ParticleSettings_kink_flat, (PropertyRNA *)&rna_ParticleSettings_kink_frequency,
	-1, "kink_shape", 8195, "Shape",
	"Adjust the offset to the beginning/end",
	0, "*",
	PROP_FLOAT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Particle_redo_child, 0, NULL, NULL,
	offsetof(ParticleSettings, kink_shape), 4, NULL},
	ParticleSettings_kink_shape_get, ParticleSettings_kink_shape_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, -0.9990000129f, 0.9990000129f, -0.9990000129f, 0.9990000129f, 10.0f, 3, 0.0f, NULL
};

FloatPropertyRNA rna_ParticleSettings_kink_flat = {
	{(PropertyRNA *)&rna_ParticleSettings_roughness_1, (PropertyRNA *)&rna_ParticleSettings_kink_shape,
	-1, "kink_flat", 8195, "Flatness",
	"How flat the hairs are",
	0, "*",
	PROP_FLOAT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Particle_redo_child, 0, NULL, NULL,
	offsetof(ParticleSettings, kink_flat), 4, NULL},
	ParticleSettings_kink_flat_get, ParticleSettings_kink_flat_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 1.0f, 0.0f, 1.0f, 10.0f, 3, 0.0f, NULL
};

FloatPropertyRNA rna_ParticleSettings_roughness_1 = {
	{(PropertyRNA *)&rna_ParticleSettings_roughness_1_size, (PropertyRNA *)&rna_ParticleSettings_kink_flat,
	-1, "roughness_1", 8195, "Rough1",
	"Amount of location dependent rough",
	0, "*",
	PROP_FLOAT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Particle_redo_child, 0, NULL, NULL,
	offsetof(ParticleSettings, rough1), 4, NULL},
	ParticleSettings_roughness_1_get, ParticleSettings_roughness_1_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 10.0f, 0.0f, 100000.0f, 0.1000000015f, 3, 0.0f, NULL
};

FloatPropertyRNA rna_ParticleSettings_roughness_1_size = {
	{(PropertyRNA *)&rna_ParticleSettings_roughness_2, (PropertyRNA *)&rna_ParticleSettings_roughness_1,
	-1, "roughness_1_size", 8195, "Size1",
	"Size of location dependent rough",
	0, "*",
	PROP_FLOAT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Particle_redo_child, 0, NULL, NULL,
	offsetof(ParticleSettings, rough1_size), 4, NULL},
	ParticleSettings_roughness_1_size_get, ParticleSettings_roughness_1_size_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0099999998f, 10.0f, 0.0099999998f, 100000.0f, 0.1000000015f, 3, 0.0f, NULL
};

FloatPropertyRNA rna_ParticleSettings_roughness_2 = {
	{(PropertyRNA *)&rna_ParticleSettings_roughness_2_size, (PropertyRNA *)&rna_ParticleSettings_roughness_1_size,
	-1, "roughness_2", 8195, "Rough2",
	"Amount of random rough",
	0, "*",
	PROP_FLOAT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Particle_redo_child, 0, NULL, NULL,
	offsetof(ParticleSettings, rough2), 4, NULL},
	ParticleSettings_roughness_2_get, ParticleSettings_roughness_2_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 10.0f, 0.0f, 100000.0f, 0.1000000015f, 3, 0.0f, NULL
};

FloatPropertyRNA rna_ParticleSettings_roughness_2_size = {
	{(PropertyRNA *)&rna_ParticleSettings_roughness_2_threshold, (PropertyRNA *)&rna_ParticleSettings_roughness_2,
	-1, "roughness_2_size", 8195, "Size2",
	"Size of random rough",
	0, "*",
	PROP_FLOAT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Particle_redo_child, 0, NULL, NULL,
	offsetof(ParticleSettings, rough2_size), 4, NULL},
	ParticleSettings_roughness_2_size_get, ParticleSettings_roughness_2_size_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0099999998f, 10.0f, 0.0099999998f, 100000.0f, 0.1000000015f, 3, 0.0f, NULL
};

FloatPropertyRNA rna_ParticleSettings_roughness_2_threshold = {
	{(PropertyRNA *)&rna_ParticleSettings_roughness_endpoint, (PropertyRNA *)&rna_ParticleSettings_roughness_2_size,
	-1, "roughness_2_threshold", 8195, "Threshold",
	"Amount of particles left untouched by random rough",
	0, "*",
	PROP_FLOAT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Particle_redo_child, 0, NULL, NULL,
	offsetof(ParticleSettings, rough2_thres), 4, NULL},
	ParticleSettings_roughness_2_threshold_get, ParticleSettings_roughness_2_threshold_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 1.0f, 0.0f, 1.0f, 10.0f, 3, 0.0f, NULL
};

FloatPropertyRNA rna_ParticleSettings_roughness_endpoint = {
	{(PropertyRNA *)&rna_ParticleSettings_roughness_end_shape, (PropertyRNA *)&rna_ParticleSettings_roughness_2_threshold,
	-1, "roughness_endpoint", 8195, "Rough Endpoint",
	"Amount of end point rough",
	0, "*",
	PROP_FLOAT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Particle_redo_child, 0, NULL, NULL,
	offsetof(ParticleSettings, rough_end), 4, NULL},
	ParticleSettings_roughness_endpoint_get, ParticleSettings_roughness_endpoint_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 10.0f, 0.0f, 100000.0f, 0.1000000015f, 3, 0.0f, NULL
};

FloatPropertyRNA rna_ParticleSettings_roughness_end_shape = {
	{(PropertyRNA *)&rna_ParticleSettings_child_length, (PropertyRNA *)&rna_ParticleSettings_roughness_endpoint,
	-1, "roughness_end_shape", 8195, "Shape",
	"Shape of end point rough",
	0, "*",
	PROP_FLOAT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Particle_redo_child, 0, NULL, NULL,
	offsetof(ParticleSettings, rough_end_shape), 4, NULL},
	ParticleSettings_roughness_end_shape_get, ParticleSettings_roughness_end_shape_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 10.0f, 0.0f, 10.0f, 10.0f, 3, 0.0f, NULL
};

FloatPropertyRNA rna_ParticleSettings_child_length = {
	{(PropertyRNA *)&rna_ParticleSettings_child_length_threshold, (PropertyRNA *)&rna_ParticleSettings_roughness_end_shape,
	-1, "child_length", 8195, "Length",
	"Length of child paths",
	0, "*",
	PROP_FLOAT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Particle_redo_child, 0, NULL, NULL,
	offsetof(ParticleSettings, clength), 4, NULL},
	ParticleSettings_child_length_get, ParticleSettings_child_length_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 1.0f, 0.0f, 1.0f, 10.0f, 3, 0.0f, NULL
};

FloatPropertyRNA rna_ParticleSettings_child_length_threshold = {
	{(PropertyRNA *)&rna_ParticleSettings_child_parting_factor, (PropertyRNA *)&rna_ParticleSettings_child_length,
	-1, "child_length_threshold", 8195, "Threshold",
	"Amount of particles left untouched by child path length",
	0, "*",
	PROP_FLOAT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Particle_redo_child, 0, NULL, NULL,
	offsetof(ParticleSettings, clength_thres), 4, NULL},
	ParticleSettings_child_length_threshold_get, ParticleSettings_child_length_threshold_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 1.0f, 0.0f, 1.0f, 10.0f, 3, 0.0f, NULL
};

FloatPropertyRNA rna_ParticleSettings_child_parting_factor = {
	{(PropertyRNA *)&rna_ParticleSettings_child_parting_min, (PropertyRNA *)&rna_ParticleSettings_child_length_threshold,
	-1, "child_parting_factor", 8195, "Parting Factor",
	"Create parting in the children based on parent strands",
	0, "*",
	PROP_FLOAT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Particle_redo_child, 0, NULL, NULL,
	offsetof(ParticleSettings, parting_fac), 4, NULL},
	ParticleSettings_child_parting_factor_get, ParticleSettings_child_parting_factor_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 1.0f, 0.0f, 1.0f, 10.0f, 3, 0.0f, NULL
};

FloatPropertyRNA rna_ParticleSettings_child_parting_min = {
	{(PropertyRNA *)&rna_ParticleSettings_child_parting_max, (PropertyRNA *)&rna_ParticleSettings_child_parting_factor,
	-1, "child_parting_min", 8195, "Parting Minimum",
	"Minimum root to tip angle (tip distance/root distance for long hair)",
	0, "*",
	PROP_FLOAT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Particle_redo_child, 0, NULL, NULL,
	offsetof(ParticleSettings, parting_min), 4, NULL},
	ParticleSettings_child_parting_min_get, ParticleSettings_child_parting_min_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 180.0f, 0.0f, 180.0f, 10.0f, 3, 0.0f, NULL
};

FloatPropertyRNA rna_ParticleSettings_child_parting_max = {
	{(PropertyRNA *)&rna_ParticleSettings_branch_threshold, (PropertyRNA *)&rna_ParticleSettings_child_parting_min,
	-1, "child_parting_max", 8195, "Parting Maximum",
	"Maximum root to tip angle (tip distance/root distance for long hair)",
	0, "*",
	PROP_FLOAT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Particle_redo_child, 0, NULL, NULL,
	offsetof(ParticleSettings, parting_max), 4, NULL},
	ParticleSettings_child_parting_max_get, ParticleSettings_child_parting_max_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 180.0f, 0.0f, 180.0f, 10.0f, 3, 0.0f, NULL
};

FloatPropertyRNA rna_ParticleSettings_branch_threshold = {
	{(PropertyRNA *)&rna_ParticleSettings_line_length_tail, (PropertyRNA *)&rna_ParticleSettings_child_parting_max,
	-1, "branch_threshold", 8195, "Threshold",
	"Threshold of branching",
	0, "*",
	PROP_FLOAT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Particle_redo_child, 0, NULL, NULL,
	offsetof(ParticleSettings, branch_thres), 4, NULL},
	ParticleSettings_branch_threshold_get, ParticleSettings_branch_threshold_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 1.0f, 0.0f, 1.0f, 10.0f, 3, 0.0f, NULL
};

FloatPropertyRNA rna_ParticleSettings_line_length_tail = {
	{(PropertyRNA *)&rna_ParticleSettings_line_length_head, (PropertyRNA *)&rna_ParticleSettings_branch_threshold,
	-1, "line_length_tail", 3, "Tail",
	"Length of the line\'s tail",
	0, "*",
	PROP_FLOAT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Particle_redo, 0, NULL, NULL,
	0, -1, NULL},
	ParticleSettings_line_length_tail_get, ParticleSettings_line_length_tail_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 10.0f, 0.0f, 100000.0f, 0.1000000015f, 3, 0.0f, NULL
};

FloatPropertyRNA rna_ParticleSettings_line_length_head = {
	{(PropertyRNA *)&rna_ParticleSettings_path_start, (PropertyRNA *)&rna_ParticleSettings_line_length_tail,
	-1, "line_length_head", 3, "Head",
	"Length of the line\'s head",
	0, "*",
	PROP_FLOAT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Particle_redo, 0, NULL, NULL,
	0, -1, NULL},
	ParticleSettings_line_length_head_get, ParticleSettings_line_length_head_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 10.0f, 0.0f, 100000.0f, 0.1000000015f, 3, 0.0f, NULL
};

FloatPropertyRNA rna_ParticleSettings_path_start = {
	{(PropertyRNA *)&rna_ParticleSettings_path_end, (PropertyRNA *)&rna_ParticleSettings_line_length_head,
	-1, "path_start", 8195, "Path Start",
	"Starting time of drawn path",
	0, "*",
	PROP_FLOAT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Particle_redo, 0, NULL, NULL,
	offsetof(ParticleSettings, path_start), 4, NULL},
	ParticleSettings_path_start_get, ParticleSettings_path_start_set, NULL, NULL, rna_PartSetting_pathstartend_range, NULL, NULL, NULL, NULL, NULL, -10000.0f, 10000.0f, -FLT_MAX, FLT_MAX, 10.0f, 3, 0.0f, NULL
};

FloatPropertyRNA rna_ParticleSettings_path_end = {
	{(PropertyRNA *)&rna_ParticleSettings_trail_count, (PropertyRNA *)&rna_ParticleSettings_path_start,
	-1, "path_end", 8195, "Path End",
	"End time of drawn path",
	0, "*",
	PROP_FLOAT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Particle_redo, 0, NULL, NULL,
	offsetof(ParticleSettings, path_end), 4, NULL},
	ParticleSettings_path_end_get, ParticleSettings_path_end_set, NULL, NULL, rna_PartSetting_pathstartend_range, NULL, NULL, NULL, NULL, NULL, -10000.0f, 10000.0f, -FLT_MAX, FLT_MAX, 10.0f, 3, 0.0f, NULL
};

IntPropertyRNA rna_ParticleSettings_trail_count = {
	{(PropertyRNA *)&rna_ParticleSettings_keyed_loops, (PropertyRNA *)&rna_ParticleSettings_path_end,
	-1, "trail_count", 8195, "Trail Count",
	"Number of trail particles",
	0, "*",
	PROP_INT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Particle_redo, 0, NULL, NULL,
	offsetof(ParticleSettings, trail_count), 0, NULL},
	ParticleSettings_trail_count_get, ParticleSettings_trail_count_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL,
	1, 100, 1, 100000, 1, 0, NULL
};

IntPropertyRNA rna_ParticleSettings_keyed_loops = {
	{(PropertyRNA *)&rna_ParticleSettings_use_modifier_stack, (PropertyRNA *)&rna_ParticleSettings_trail_count,
	-1, "keyed_loops", 8195, "Loop count",
	"Number of times the keys are looped",
	0, "*",
	PROP_INT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Particle_redo, 0, NULL, NULL,
	offsetof(ParticleSettings, keyed_loops), 0, NULL},
	ParticleSettings_keyed_loops_get, ParticleSettings_keyed_loops_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL,
	1, 100, 1, 10000, 0, 0, NULL
};

BoolPropertyRNA rna_ParticleSettings_use_modifier_stack = {
	{(PropertyRNA *)&rna_ParticleSettings_dupli_group, (PropertyRNA *)&rna_ParticleSettings_keyed_loops,
	-1, "use_modifier_stack", 8195, "Use Modifier Stack",
	"Emit particles from mesh with modifiers applied (must use same subsurf level for viewport and render for correct results)",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Particle_change_type, 0, NULL, NULL,
	offsetof(ParticleSettings, use_modifier_stack), 1, NULL},
	ParticleSettings_use_modifier_stack_get, ParticleSettings_use_modifier_stack_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

PointerPropertyRNA rna_ParticleSettings_dupli_group = {
	{(PropertyRNA *)&rna_ParticleSettings_dupli_weights, (PropertyRNA *)&rna_ParticleSettings_use_modifier_stack,
	-1, "dupli_group", 8388609, "Dupli Group",
	"Show Objects in this Group in place of particles",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Particle_redo, 0, NULL, NULL,
	0, -1, NULL},
	ParticleSettings_dupli_group_get, ParticleSettings_dupli_group_set, NULL, NULL,&RNA_Group
};

CollectionPropertyRNA rna_ParticleSettings_dupli_weights = {
	{(PropertyRNA *)&rna_ParticleSettings_active_dupliweight, (PropertyRNA *)&rna_ParticleSettings_dupli_group,
	-1, "dupli_weights", 0, "Dupli Group Weights",
	"Weights for all of the objects in the dupli group",
	0, "*",
	PROP_COLLECTION, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	ParticleSettings_dupli_weights_begin, ParticleSettings_dupli_weights_next, ParticleSettings_dupli_weights_end, ParticleSettings_dupli_weights_get, NULL, ParticleSettings_dupli_weights_lookup_int, ParticleSettings_dupli_weights_lookup_string, NULL, &RNA_ParticleDupliWeight
};

PointerPropertyRNA rna_ParticleSettings_active_dupliweight = {
	{(PropertyRNA *)&rna_ParticleSettings_active_dupliweight_index, (PropertyRNA *)&rna_ParticleSettings_dupli_weights,
	-1, "active_dupliweight", 8388608, "Active Dupli Object",
	"",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	ParticleSettings_active_dupliweight_get, NULL, NULL, NULL,&RNA_ParticleDupliWeight
};

IntPropertyRNA rna_ParticleSettings_active_dupliweight_index = {
	{(PropertyRNA *)&rna_ParticleSettings_dupli_object, (PropertyRNA *)&rna_ParticleSettings_active_dupliweight,
	-1, "active_dupliweight_index", 3, "Active Dupli Object Index",
	"",
	0, "*",
	PROP_INT, PROP_UNSIGNED | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	ParticleSettings_active_dupliweight_index_get, ParticleSettings_active_dupliweight_index_set, NULL, NULL, rna_ParticleDupliWeight_active_index_range, NULL, NULL, NULL, NULL, NULL,
	0, 10000, 0, INT_MAX, 1, 0, NULL
};

PointerPropertyRNA rna_ParticleSettings_dupli_object = {
	{(PropertyRNA *)&rna_ParticleSettings_billboard_object, (PropertyRNA *)&rna_ParticleSettings_active_dupliweight_index,
	-1, "dupli_object", 8388609, "Dupli Object",
	"Show this Object in place of particles",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Particle_redo_dependency, 0, NULL, NULL,
	0, -1, NULL},
	ParticleSettings_dupli_object_get, ParticleSettings_dupli_object_set, NULL, NULL,&RNA_Object
};

PointerPropertyRNA rna_ParticleSettings_billboard_object = {
	{(PropertyRNA *)&rna_ParticleSettings_boids, (PropertyRNA *)&rna_ParticleSettings_dupli_object,
	-1, "billboard_object", 8388609, "Billboard Object",
	"Billboards face this object (default is active camera)",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Particle_redo, 0, NULL, NULL,
	0, -1, NULL},
	ParticleSettings_billboard_object_get, ParticleSettings_billboard_object_set, NULL, NULL,&RNA_Object
};

PointerPropertyRNA rna_ParticleSettings_boids = {
	{(PropertyRNA *)&rna_ParticleSettings_fluid, (PropertyRNA *)&rna_ParticleSettings_billboard_object,
	-1, "boids", 8388608, "Boid Settings",
	"",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	ParticleSettings_boids_get, NULL, NULL, NULL,&RNA_BoidSettings
};

PointerPropertyRNA rna_ParticleSettings_fluid = {
	{(PropertyRNA *)&rna_ParticleSettings_effector_weights, (PropertyRNA *)&rna_ParticleSettings_boids,
	-1, "fluid", 8388608, "SPH Fluid Settings",
	"",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	ParticleSettings_fluid_get, NULL, NULL, NULL,&RNA_SPHFluidSettings
};

PointerPropertyRNA rna_ParticleSettings_effector_weights = {
	{(PropertyRNA *)&rna_ParticleSettings_animation_data, (PropertyRNA *)&rna_ParticleSettings_fluid,
	-1, "effector_weights", 8388608, "Effector Weights",
	"",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	ParticleSettings_effector_weights_get, NULL, NULL, NULL,&RNA_EffectorWeights
};

PointerPropertyRNA rna_ParticleSettings_animation_data = {
	{(PropertyRNA *)&rna_ParticleSettings_force_field_1, (PropertyRNA *)&rna_ParticleSettings_effector_weights,
	-1, "animation_data", 8388608, "Animation Data",
	"Animation data for this datablock",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	ParticleSettings_animation_data_get, NULL, NULL, NULL,&RNA_AnimData
};

PointerPropertyRNA rna_ParticleSettings_force_field_1 = {
	{(PropertyRNA *)&rna_ParticleSettings_force_field_2, (PropertyRNA *)&rna_ParticleSettings_animation_data,
	-1, "force_field_1", 8388608, "Force Field 1",
	"",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	ParticleSettings_force_field_1_get, NULL, NULL, NULL,&RNA_FieldSettings
};

PointerPropertyRNA rna_ParticleSettings_force_field_2 = {
	{NULL, (PropertyRNA *)&rna_ParticleSettings_force_field_1,
	-1, "force_field_2", 8388608, "Force Field 2",
	"",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	ParticleSettings_force_field_2_get, NULL, NULL, NULL,&RNA_FieldSettings
};

StructRNA RNA_ParticleSettings = {
	{(ContainerRNA *)&RNA_ParticleSettingsTextureSlots, (ContainerRNA *)&RNA_ParticleSettingsTextureSlot,
	NULL,
	{(PropertyRNA *)&rna_ParticleSettings_texture_slots, (PropertyRNA *)&rna_ParticleSettings_force_field_2}},
	"ParticleSettings", NULL, NULL, 7, "Particle Settings",
	"Particle settings, reusable by multiple particle systems",
	"*", 169,
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
CollectionPropertyRNA rna_ParticleSettingsTextureSlots_rna_properties = {
	{(PropertyRNA *)&rna_ParticleSettingsTextureSlots_rna_type, NULL,
	-1, "rna_properties", 128, "Properties",
	"RNA property collection",
	0, "*",
	PROP_COLLECTION, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	ParticleSettingsTextureSlots_rna_properties_begin, ParticleSettingsTextureSlots_rna_properties_next, ParticleSettingsTextureSlots_rna_properties_end, ParticleSettingsTextureSlots_rna_properties_get, NULL, NULL, ParticleSettingsTextureSlots_rna_properties_lookup_string, NULL, &RNA_Property
};

PointerPropertyRNA rna_ParticleSettingsTextureSlots_rna_type = {
	{NULL, (PropertyRNA *)&rna_ParticleSettingsTextureSlots_rna_properties,
	-1, "rna_type", 8912896, "RNA",
	"RNA type definition",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	ParticleSettingsTextureSlots_rna_type_get, NULL, NULL, NULL,&RNA_Struct
};

PointerPropertyRNA rna_ParticleSettingsTextureSlots_add_mtex = {
	{NULL, NULL,
	-1, "mtex", 8388616, "",
	"The newly initialized mtex",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	NULL, NULL, NULL, NULL,&RNA_ParticleSettingsTextureSlot
};

FunctionRNA rna_ParticleSettingsTextureSlots_add_func = {
	{(FunctionRNA *)&rna_ParticleSettingsTextureSlots_create_func, NULL,
	NULL,
	{(PropertyRNA *)&rna_ParticleSettingsTextureSlots_add_mtex, (PropertyRNA *)&rna_ParticleSettingsTextureSlots_add_mtex}},
	"add", 2073, "add",
	ParticleSettingsTextureSlots_add_call,
	(PropertyRNA *)&rna_ParticleSettingsTextureSlots_add_mtex
};

IntPropertyRNA rna_ParticleSettingsTextureSlots_create_index = {
	{(PropertyRNA *)&rna_ParticleSettingsTextureSlots_create_mtex, NULL,
	-1, "index", 7, "Index",
	"Slot index to initialize",
	0, "*",
	PROP_INT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL,
	0, INT_MAX, 0, INT_MAX, 1, 0, NULL
};

PointerPropertyRNA rna_ParticleSettingsTextureSlots_create_mtex = {
	{NULL, (PropertyRNA *)&rna_ParticleSettingsTextureSlots_create_index,
	-1, "mtex", 8388616, "",
	"The newly initialized mtex",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	NULL, NULL, NULL, NULL,&RNA_ParticleSettingsTextureSlot
};

FunctionRNA rna_ParticleSettingsTextureSlots_create_func = {
	{(FunctionRNA *)&rna_ParticleSettingsTextureSlots_clear_func, (FunctionRNA *)&rna_ParticleSettingsTextureSlots_add_func,
	NULL,
	{(PropertyRNA *)&rna_ParticleSettingsTextureSlots_create_index, (PropertyRNA *)&rna_ParticleSettingsTextureSlots_create_mtex}},
	"create", 2073, "create",
	ParticleSettingsTextureSlots_create_call,
	(PropertyRNA *)&rna_ParticleSettingsTextureSlots_create_mtex
};

IntPropertyRNA rna_ParticleSettingsTextureSlots_clear_index = {
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

FunctionRNA rna_ParticleSettingsTextureSlots_clear_func = {
	{NULL, (FunctionRNA *)&rna_ParticleSettingsTextureSlots_create_func,
	NULL,
	{(PropertyRNA *)&rna_ParticleSettingsTextureSlots_clear_index, (PropertyRNA *)&rna_ParticleSettingsTextureSlots_clear_index}},
	"clear", 2073, "clear",
	ParticleSettingsTextureSlots_clear_call,
	NULL
};

StructRNA RNA_ParticleSettingsTextureSlots = {
	{(ContainerRNA *)&RNA_Pose, (ContainerRNA *)&RNA_ParticleSettings,
	NULL,
	{(PropertyRNA *)&rna_ParticleSettingsTextureSlots_rna_properties, (PropertyRNA *)&rna_ParticleSettingsTextureSlots_rna_type}},
	"ParticleSettingsTextureSlots", NULL, NULL, 4, "Texture Slots",
	"Collection of texture slots",
	"*", 17,
	NULL, (PropertyRNA *)&rna_ParticleSettingsTextureSlots_rna_properties,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	{(FunctionRNA *)&rna_ParticleSettingsTextureSlots_add_func, (FunctionRNA *)&rna_ParticleSettingsTextureSlots_clear_func}
};

