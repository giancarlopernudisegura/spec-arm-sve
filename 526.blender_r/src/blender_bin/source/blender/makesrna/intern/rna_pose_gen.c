
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

#include "rna_pose.c"
#include "rna_pose_api.c"

#pragma GCC diagnostic ignored "-Wunused-parameter"

/* Autogenerated Functions */


CollectionPropertyRNA rna_Pose_rna_properties;
PointerPropertyRNA rna_Pose_rna_type;
CollectionPropertyRNA rna_Pose_bones;
CollectionPropertyRNA rna_Pose_bone_groups;
EnumPropertyRNA rna_Pose_ik_solver;
PointerPropertyRNA rna_Pose_ik_param;
PointerPropertyRNA rna_Pose_animation_visualization;


CollectionPropertyRNA rna_BoneGroups_rna_properties;
PointerPropertyRNA rna_BoneGroups_rna_type;
PointerPropertyRNA rna_BoneGroups_active;
IntPropertyRNA rna_BoneGroups_active_index;

extern FunctionRNA rna_BoneGroups_new_func;
extern StringPropertyRNA rna_BoneGroups_new_name;
extern PointerPropertyRNA rna_BoneGroups_new_group;

extern FunctionRNA rna_BoneGroups_remove_func;
extern PointerPropertyRNA rna_BoneGroups_remove_group;



CollectionPropertyRNA rna_PoseBone_rna_properties;
PointerPropertyRNA rna_PoseBone_rna_type;
CollectionPropertyRNA rna_PoseBone_constraints;
StringPropertyRNA rna_PoseBone_name;
PointerPropertyRNA rna_PoseBone_motion_path;
PointerPropertyRNA rna_PoseBone_bone;
PointerPropertyRNA rna_PoseBone_parent;
PointerPropertyRNA rna_PoseBone_child;
FloatPropertyRNA rna_PoseBone_location;
FloatPropertyRNA rna_PoseBone_scale;
FloatPropertyRNA rna_PoseBone_rotation_quaternion;
FloatPropertyRNA rna_PoseBone_rotation_axis_angle;
FloatPropertyRNA rna_PoseBone_rotation_euler;
EnumPropertyRNA rna_PoseBone_rotation_mode;
FloatPropertyRNA rna_PoseBone_matrix_channel;
FloatPropertyRNA rna_PoseBone_matrix_basis;
FloatPropertyRNA rna_PoseBone_matrix;
FloatPropertyRNA rna_PoseBone_head;
FloatPropertyRNA rna_PoseBone_tail;
BoolPropertyRNA rna_PoseBone_is_in_ik_chain;
BoolPropertyRNA rna_PoseBone_lock_ik_x;
BoolPropertyRNA rna_PoseBone_lock_ik_y;
BoolPropertyRNA rna_PoseBone_lock_ik_z;
BoolPropertyRNA rna_PoseBone_use_ik_limit_x;
BoolPropertyRNA rna_PoseBone_use_ik_limit_y;
BoolPropertyRNA rna_PoseBone_use_ik_limit_z;
BoolPropertyRNA rna_PoseBone_use_ik_rotation_control;
BoolPropertyRNA rna_PoseBone_use_ik_linear_control;
FloatPropertyRNA rna_PoseBone_ik_min_x;
FloatPropertyRNA rna_PoseBone_ik_max_x;
FloatPropertyRNA rna_PoseBone_ik_min_y;
FloatPropertyRNA rna_PoseBone_ik_max_y;
FloatPropertyRNA rna_PoseBone_ik_min_z;
FloatPropertyRNA rna_PoseBone_ik_max_z;
FloatPropertyRNA rna_PoseBone_ik_stiffness_x;
FloatPropertyRNA rna_PoseBone_ik_stiffness_y;
FloatPropertyRNA rna_PoseBone_ik_stiffness_z;
FloatPropertyRNA rna_PoseBone_ik_stretch;
FloatPropertyRNA rna_PoseBone_ik_rotation_weight;
FloatPropertyRNA rna_PoseBone_ik_linear_weight;
PointerPropertyRNA rna_PoseBone_custom_shape;
PointerPropertyRNA rna_PoseBone_custom_shape_transform;
IntPropertyRNA rna_PoseBone_bone_group_index;
PointerPropertyRNA rna_PoseBone_bone_group;
BoolPropertyRNA rna_PoseBone_lock_location;
BoolPropertyRNA rna_PoseBone_lock_rotation;
BoolPropertyRNA rna_PoseBone_lock_rotation_w;
BoolPropertyRNA rna_PoseBone_lock_rotations_4d;
BoolPropertyRNA rna_PoseBone_lock_scale;

extern FunctionRNA rna_PoseBone_evaluate_envelope_func;
extern FloatPropertyRNA rna_PoseBone_evaluate_envelope_point;
extern FloatPropertyRNA rna_PoseBone_evaluate_envelope_factor;



CollectionPropertyRNA rna_PoseBoneConstraints_rna_properties;
PointerPropertyRNA rna_PoseBoneConstraints_rna_type;
PointerPropertyRNA rna_PoseBoneConstraints_active;

extern FunctionRNA rna_PoseBoneConstraints_new_func;
extern PointerPropertyRNA rna_PoseBoneConstraints_new_constraint;
extern EnumPropertyRNA rna_PoseBoneConstraints_new_type;

extern FunctionRNA rna_PoseBoneConstraints_remove_func;
extern PointerPropertyRNA rna_PoseBoneConstraints_remove_constraint;



CollectionPropertyRNA rna_IKParam_rna_properties;
PointerPropertyRNA rna_IKParam_rna_type;
EnumPropertyRNA rna_IKParam_ik_solver;


extern CollectionPropertyRNA rna_IKParam_rna_properties;
extern PointerPropertyRNA rna_IKParam_rna_type;
extern EnumPropertyRNA rna_IKParam_ik_solver;

FloatPropertyRNA rna_Itasc_precision;
IntPropertyRNA rna_Itasc_iterations;
IntPropertyRNA rna_Itasc_step_count;
EnumPropertyRNA rna_Itasc_mode;
EnumPropertyRNA rna_Itasc_reiteration_method;
BoolPropertyRNA rna_Itasc_use_auto_step;
FloatPropertyRNA rna_Itasc_step_min;
FloatPropertyRNA rna_Itasc_step_max;
FloatPropertyRNA rna_Itasc_feedback;
FloatPropertyRNA rna_Itasc_velocity_max;
EnumPropertyRNA rna_Itasc_solver;
FloatPropertyRNA rna_Itasc_damping_max;
FloatPropertyRNA rna_Itasc_damping_epsilon;


CollectionPropertyRNA rna_BoneGroup_rna_properties;
PointerPropertyRNA rna_BoneGroup_rna_type;
StringPropertyRNA rna_BoneGroup_name;
EnumPropertyRNA rna_BoneGroup_color_set;
BoolPropertyRNA rna_BoneGroup_is_custom_color_set;
PointerPropertyRNA rna_BoneGroup_colors;

static PointerRNA Pose_rna_properties_get(CollectionPropertyIterator *iter)
{
	return rna_builtin_properties_get(iter);
}

void Pose_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

	memset(iter, 0, sizeof(*iter));
	iter->parent = *ptr;
	iter->prop = (PropertyRNA *)&rna_Pose_rna_properties;

	rna_builtin_properties_begin(iter, ptr);

	if (iter->valid)
		iter->ptr = Pose_rna_properties_get(iter);
}

void Pose_rna_properties_next(CollectionPropertyIterator *iter)
{
	rna_builtin_properties_next(iter);

	if (iter->valid)
		iter->ptr = Pose_rna_properties_get(iter);
}

void Pose_rna_properties_end(CollectionPropertyIterator *iter)
{
	rna_iterator_listbase_end(iter);
}

int Pose_rna_properties_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
	return rna_builtin_properties_lookup_string(ptr, key, r_ptr);
}

PointerRNA Pose_rna_type_get(PointerRNA *ptr)
{
	return rna_builtin_type_get(ptr);
}

static PointerRNA Pose_bones_get(CollectionPropertyIterator *iter)
{
	return rna_pointer_inherit_refine(&iter->parent, &RNA_PoseBone, rna_iterator_listbase_get(iter));
}

void Pose_bones_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{
	bPose *data = (bPose *)(ptr->data);

	memset(iter, 0, sizeof(*iter));
	iter->parent = *ptr;
	iter->prop = (PropertyRNA *)&rna_Pose_bones;

	rna_iterator_listbase_begin(iter, &data->chanbase, NULL);

	if (iter->valid)
		iter->ptr = Pose_bones_get(iter);
}

void Pose_bones_next(CollectionPropertyIterator *iter)
{
	rna_iterator_listbase_next(iter);

	if (iter->valid)
		iter->ptr = Pose_bones_get(iter);
}

void Pose_bones_end(CollectionPropertyIterator *iter)
{
	rna_iterator_listbase_end(iter);
}

int Pose_bones_lookup_int(PointerRNA *ptr, int index, PointerRNA *r_ptr)
{
	int found = 0;
	CollectionPropertyIterator iter;

	Pose_bones_begin(&iter, ptr);

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
		if (found) *r_ptr = Pose_bones_get(&iter);
	}

	Pose_bones_end(&iter);

	return found;
}

int Pose_bones_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
	return rna_PoseBones_lookup_string(ptr, key, r_ptr);
}

static PointerRNA Pose_bone_groups_get(CollectionPropertyIterator *iter)
{
	return rna_pointer_inherit_refine(&iter->parent, &RNA_BoneGroup, rna_iterator_listbase_get(iter));
}

void Pose_bone_groups_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{
	bPose *data = (bPose *)(ptr->data);

	memset(iter, 0, sizeof(*iter));
	iter->parent = *ptr;
	iter->prop = (PropertyRNA *)&rna_Pose_bone_groups;

	rna_iterator_listbase_begin(iter, &data->agroups, NULL);

	if (iter->valid)
		iter->ptr = Pose_bone_groups_get(iter);
}

void Pose_bone_groups_next(CollectionPropertyIterator *iter)
{
	rna_iterator_listbase_next(iter);

	if (iter->valid)
		iter->ptr = Pose_bone_groups_get(iter);
}

void Pose_bone_groups_end(CollectionPropertyIterator *iter)
{
	rna_iterator_listbase_end(iter);
}

int Pose_bone_groups_lookup_int(PointerRNA *ptr, int index, PointerRNA *r_ptr)
{
	int found = 0;
	CollectionPropertyIterator iter;

	Pose_bone_groups_begin(&iter, ptr);

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
		if (found) *r_ptr = Pose_bone_groups_get(&iter);
	}

	Pose_bone_groups_end(&iter);

	return found;
}

int Pose_bone_groups_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
	extern int BoneGroup_name_length(PointerRNA *);
	extern void BoneGroup_name_get(PointerRNA *, char *);

	bool found = false;
	CollectionPropertyIterator iter;
	char namebuf[1024];
	char *name;

	Pose_bone_groups_begin(&iter, ptr);

	while (iter.valid) {
		if (iter.ptr.data) {
			int namelen = BoneGroup_name_length(&iter.ptr);
			if (namelen < 1024) {
				BoneGroup_name_get(&iter.ptr, namebuf);
				if (strcmp(namebuf, key) == 0) {
					found = true;
					*r_ptr = iter.ptr;
					break;
				}
			}
			else {
				name = MEM_mallocN(namelen+1, "name string");
				BoneGroup_name_get(&iter.ptr, name);
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
		Pose_bone_groups_next(&iter);
	}
	Pose_bone_groups_end(&iter);

	return found;
}

int Pose_ik_solver_get(PointerRNA *ptr)
{
	bPose *data = (bPose *)(ptr->data);
	return (int)(data->iksolver);
}

void Pose_ik_solver_set(PointerRNA *ptr, int value)
{
	rna_Pose_ik_solver_set(ptr, value);
}

PointerRNA Pose_ik_param_get(PointerRNA *ptr)
{
	return rna_Pose_ikparam_get(ptr);
}

PointerRNA Pose_animation_visualization_get(PointerRNA *ptr)
{
	bPose *data = (bPose *)(ptr->data);
	return rna_pointer_inherit_refine(ptr, &RNA_AnimViz, &data->avs);
}

static PointerRNA BoneGroups_rna_properties_get(CollectionPropertyIterator *iter)
{
	return rna_builtin_properties_get(iter);
}

void BoneGroups_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

	memset(iter, 0, sizeof(*iter));
	iter->parent = *ptr;
	iter->prop = (PropertyRNA *)&rna_BoneGroups_rna_properties;

	rna_builtin_properties_begin(iter, ptr);

	if (iter->valid)
		iter->ptr = BoneGroups_rna_properties_get(iter);
}

void BoneGroups_rna_properties_next(CollectionPropertyIterator *iter)
{
	rna_builtin_properties_next(iter);

	if (iter->valid)
		iter->ptr = BoneGroups_rna_properties_get(iter);
}

void BoneGroups_rna_properties_end(CollectionPropertyIterator *iter)
{
	rna_iterator_listbase_end(iter);
}

int BoneGroups_rna_properties_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
	return rna_builtin_properties_lookup_string(ptr, key, r_ptr);
}

PointerRNA BoneGroups_rna_type_get(PointerRNA *ptr)
{
	return rna_builtin_type_get(ptr);
}

PointerRNA BoneGroups_active_get(PointerRNA *ptr)
{
	return rna_Pose_active_bone_group_get(ptr);
}

void BoneGroups_active_set(PointerRNA *ptr, PointerRNA value)
{
	rna_Pose_active_bone_group_set(ptr, value);
}

int BoneGroups_active_index_get(PointerRNA *ptr)
{
	return rna_Pose_active_bone_group_index_get(ptr);
}

void BoneGroups_active_index_set(PointerRNA *ptr, int value)
{
	rna_Pose_active_bone_group_index_set(ptr, value);
}

static PointerRNA PoseBone_rna_properties_get(CollectionPropertyIterator *iter)
{
	return rna_builtin_properties_get(iter);
}

void PoseBone_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

	memset(iter, 0, sizeof(*iter));
	iter->parent = *ptr;
	iter->prop = (PropertyRNA *)&rna_PoseBone_rna_properties;

	rna_builtin_properties_begin(iter, ptr);

	if (iter->valid)
		iter->ptr = PoseBone_rna_properties_get(iter);
}

void PoseBone_rna_properties_next(CollectionPropertyIterator *iter)
{
	rna_builtin_properties_next(iter);

	if (iter->valid)
		iter->ptr = PoseBone_rna_properties_get(iter);
}

void PoseBone_rna_properties_end(CollectionPropertyIterator *iter)
{
	rna_iterator_listbase_end(iter);
}

int PoseBone_rna_properties_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
	return rna_builtin_properties_lookup_string(ptr, key, r_ptr);
}

PointerRNA PoseBone_rna_type_get(PointerRNA *ptr)
{
	return rna_builtin_type_get(ptr);
}

static PointerRNA PoseBone_constraints_get(CollectionPropertyIterator *iter)
{
	return rna_pointer_inherit_refine(&iter->parent, &RNA_Constraint, rna_iterator_listbase_get(iter));
}

void PoseBone_constraints_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{
	bPoseChannel *data = (bPoseChannel *)(ptr->data);

	memset(iter, 0, sizeof(*iter));
	iter->parent = *ptr;
	iter->prop = (PropertyRNA *)&rna_PoseBone_constraints;

	rna_iterator_listbase_begin(iter, &data->constraints, NULL);

	if (iter->valid)
		iter->ptr = PoseBone_constraints_get(iter);
}

void PoseBone_constraints_next(CollectionPropertyIterator *iter)
{
	rna_iterator_listbase_next(iter);

	if (iter->valid)
		iter->ptr = PoseBone_constraints_get(iter);
}

void PoseBone_constraints_end(CollectionPropertyIterator *iter)
{
	rna_iterator_listbase_end(iter);
}

int PoseBone_constraints_lookup_int(PointerRNA *ptr, int index, PointerRNA *r_ptr)
{
	int found = 0;
	CollectionPropertyIterator iter;

	PoseBone_constraints_begin(&iter, ptr);

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
		if (found) *r_ptr = PoseBone_constraints_get(&iter);
	}

	PoseBone_constraints_end(&iter);

	return found;
}

int PoseBone_constraints_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
	extern int Constraint_name_length(PointerRNA *);
	extern void Constraint_name_get(PointerRNA *, char *);

	bool found = false;
	CollectionPropertyIterator iter;
	char namebuf[1024];
	char *name;

	PoseBone_constraints_begin(&iter, ptr);

	while (iter.valid) {
		if (iter.ptr.data) {
			int namelen = Constraint_name_length(&iter.ptr);
			if (namelen < 1024) {
				Constraint_name_get(&iter.ptr, namebuf);
				if (strcmp(namebuf, key) == 0) {
					found = true;
					*r_ptr = iter.ptr;
					break;
				}
			}
			else {
				name = MEM_mallocN(namelen+1, "name string");
				Constraint_name_get(&iter.ptr, name);
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
		PoseBone_constraints_next(&iter);
	}
	PoseBone_constraints_end(&iter);

	return found;
}

void PoseBone_name_get(PointerRNA *ptr, char *value)
{
	bPoseChannel *data = (bPoseChannel *)(ptr->data);
	BLI_strncpy_utf8(value, data->name, 64);
}

int PoseBone_name_length(PointerRNA *ptr)
{
	bPoseChannel *data = (bPoseChannel *)(ptr->data);
	return strlen(data->name);
}

void PoseBone_name_set(PointerRNA *ptr, const char *value)
{
	rna_PoseChannel_name_set(ptr, value);
}

PointerRNA PoseBone_motion_path_get(PointerRNA *ptr)
{
	bPoseChannel *data = (bPoseChannel *)(ptr->data);
	return rna_pointer_inherit_refine(ptr, &RNA_MotionPath, data->mpath);
}

PointerRNA PoseBone_bone_get(PointerRNA *ptr)
{
	bPoseChannel *data = (bPoseChannel *)(ptr->data);
	return rna_pointer_inherit_refine(ptr, &RNA_Bone, data->bone);
}

PointerRNA PoseBone_parent_get(PointerRNA *ptr)
{
	bPoseChannel *data = (bPoseChannel *)(ptr->data);
	return rna_pointer_inherit_refine(ptr, &RNA_PoseBone, data->parent);
}

PointerRNA PoseBone_child_get(PointerRNA *ptr)
{
	bPoseChannel *data = (bPoseChannel *)(ptr->data);
	return rna_pointer_inherit_refine(ptr, &RNA_PoseBone, data->child);
}

void PoseBone_location_get(PointerRNA *ptr, float values[3])
{
	bPoseChannel *data = (bPoseChannel *)(ptr->data);
	unsigned int i;

	for (i = 0; i < 3; i++) {
		values[i] = (float)(((float *)data->loc)[i]);
	}
}

void PoseBone_location_set(PointerRNA *ptr, const float values[3])
{
	bPoseChannel *data = (bPoseChannel *)(ptr->data);
	unsigned int i;

	for (i = 0; i < 3; i++) {
		((float *)data->loc)[i] = values[i];
	}
}

void PoseBone_scale_get(PointerRNA *ptr, float values[3])
{
	bPoseChannel *data = (bPoseChannel *)(ptr->data);
	unsigned int i;

	for (i = 0; i < 3; i++) {
		values[i] = (float)(((float *)data->size)[i]);
	}
}

void PoseBone_scale_set(PointerRNA *ptr, const float values[3])
{
	bPoseChannel *data = (bPoseChannel *)(ptr->data);
	unsigned int i;

	for (i = 0; i < 3; i++) {
		((float *)data->size)[i] = values[i];
	}
}

void PoseBone_rotation_quaternion_get(PointerRNA *ptr, float values[4])
{
	bPoseChannel *data = (bPoseChannel *)(ptr->data);
	unsigned int i;

	for (i = 0; i < 4; i++) {
		values[i] = (float)(((float *)data->quat)[i]);
	}
}

void PoseBone_rotation_quaternion_set(PointerRNA *ptr, const float values[4])
{
	bPoseChannel *data = (bPoseChannel *)(ptr->data);
	unsigned int i;

	for (i = 0; i < 4; i++) {
		((float *)data->quat)[i] = values[i];
	}
}

void PoseBone_rotation_axis_angle_get(PointerRNA *ptr, float values[4])
{
	rna_PoseChannel_rotation_axis_angle_get(ptr, values);
}

void PoseBone_rotation_axis_angle_set(PointerRNA *ptr, const float values[4])
{
	rna_PoseChannel_rotation_axis_angle_set(ptr, values);
}

void PoseBone_rotation_euler_get(PointerRNA *ptr, float values[3])
{
	bPoseChannel *data = (bPoseChannel *)(ptr->data);
	unsigned int i;

	for (i = 0; i < 3; i++) {
		values[i] = (float)(((float *)data->eul)[i]);
	}
}

void PoseBone_rotation_euler_set(PointerRNA *ptr, const float values[3])
{
	bPoseChannel *data = (bPoseChannel *)(ptr->data);
	unsigned int i;

	for (i = 0; i < 3; i++) {
		((float *)data->eul)[i] = values[i];
	}
}

int PoseBone_rotation_mode_get(PointerRNA *ptr)
{
	bPoseChannel *data = (bPoseChannel *)(ptr->data);
	return (int)(data->rotmode);
}

void PoseBone_rotation_mode_set(PointerRNA *ptr, int value)
{
	rna_PoseChannel_rotation_mode_set(ptr, value);
}

void PoseBone_matrix_channel_get(PointerRNA *ptr, float values[16])
{
	bPoseChannel *data = (bPoseChannel *)(ptr->data);
	unsigned int i;

	for (i = 0; i < 16; i++) {
		values[i] = (float)(((float *)data->chan_mat)[i]);
	}
}

void PoseBone_matrix_basis_get(PointerRNA *ptr, float values[16])
{
	rna_PoseChannel_matrix_basis_get(ptr, values);
}

void PoseBone_matrix_basis_set(PointerRNA *ptr, const float values[16])
{
	rna_PoseChannel_matrix_basis_set(ptr, values);
}

void PoseBone_matrix_get(PointerRNA *ptr, float values[16])
{
	bPoseChannel *data = (bPoseChannel *)(ptr->data);
	unsigned int i;

	for (i = 0; i < 16; i++) {
		values[i] = (float)(((float *)data->pose_mat)[i]);
	}
}

void PoseBone_matrix_set(PointerRNA *ptr, const float values[16])
{
	rna_PoseChannel_matrix_set(ptr, values);
}

void PoseBone_head_get(PointerRNA *ptr, float values[3])
{
	bPoseChannel *data = (bPoseChannel *)(ptr->data);
	unsigned int i;

	for (i = 0; i < 3; i++) {
		values[i] = (float)(((float *)data->pose_head)[i]);
	}
}

void PoseBone_tail_get(PointerRNA *ptr, float values[3])
{
	bPoseChannel *data = (bPoseChannel *)(ptr->data);
	unsigned int i;

	for (i = 0; i < 3; i++) {
		values[i] = (float)(((float *)data->pose_tail)[i]);
	}
}

int PoseBone_is_in_ik_chain_get(PointerRNA *ptr)
{
	return rna_PoseChannel_has_ik_get(ptr);
}

int PoseBone_lock_ik_x_get(PointerRNA *ptr)
{
	bPoseChannel *data = (bPoseChannel *)(ptr->data);
	return (((data->ikflag) & 1) != 0);
}

void PoseBone_lock_ik_x_set(PointerRNA *ptr, int value)
{
	bPoseChannel *data = (bPoseChannel *)(ptr->data);
	if (value) data->ikflag |= 1;
	else data->ikflag &= ~1;
}

int PoseBone_lock_ik_y_get(PointerRNA *ptr)
{
	bPoseChannel *data = (bPoseChannel *)(ptr->data);
	return (((data->ikflag) & 2) != 0);
}

void PoseBone_lock_ik_y_set(PointerRNA *ptr, int value)
{
	bPoseChannel *data = (bPoseChannel *)(ptr->data);
	if (value) data->ikflag |= 2;
	else data->ikflag &= ~2;
}

int PoseBone_lock_ik_z_get(PointerRNA *ptr)
{
	bPoseChannel *data = (bPoseChannel *)(ptr->data);
	return (((data->ikflag) & 4) != 0);
}

void PoseBone_lock_ik_z_set(PointerRNA *ptr, int value)
{
	bPoseChannel *data = (bPoseChannel *)(ptr->data);
	if (value) data->ikflag |= 4;
	else data->ikflag &= ~4;
}

int PoseBone_use_ik_limit_x_get(PointerRNA *ptr)
{
	bPoseChannel *data = (bPoseChannel *)(ptr->data);
	return (((data->ikflag) & 8) != 0);
}

void PoseBone_use_ik_limit_x_set(PointerRNA *ptr, int value)
{
	bPoseChannel *data = (bPoseChannel *)(ptr->data);
	if (value) data->ikflag |= 8;
	else data->ikflag &= ~8;
}

int PoseBone_use_ik_limit_y_get(PointerRNA *ptr)
{
	bPoseChannel *data = (bPoseChannel *)(ptr->data);
	return (((data->ikflag) & 16) != 0);
}

void PoseBone_use_ik_limit_y_set(PointerRNA *ptr, int value)
{
	bPoseChannel *data = (bPoseChannel *)(ptr->data);
	if (value) data->ikflag |= 16;
	else data->ikflag &= ~16;
}

int PoseBone_use_ik_limit_z_get(PointerRNA *ptr)
{
	bPoseChannel *data = (bPoseChannel *)(ptr->data);
	return (((data->ikflag) & 32) != 0);
}

void PoseBone_use_ik_limit_z_set(PointerRNA *ptr, int value)
{
	bPoseChannel *data = (bPoseChannel *)(ptr->data);
	if (value) data->ikflag |= 32;
	else data->ikflag &= ~32;
}

int PoseBone_use_ik_rotation_control_get(PointerRNA *ptr)
{
	bPoseChannel *data = (bPoseChannel *)(ptr->data);
	return (((data->ikflag) & 64) != 0);
}

void PoseBone_use_ik_rotation_control_set(PointerRNA *ptr, int value)
{
	bPoseChannel *data = (bPoseChannel *)(ptr->data);
	if (value) data->ikflag |= 64;
	else data->ikflag &= ~64;
}

int PoseBone_use_ik_linear_control_get(PointerRNA *ptr)
{
	bPoseChannel *data = (bPoseChannel *)(ptr->data);
	return (((data->ikflag) & 128) != 0);
}

void PoseBone_use_ik_linear_control_set(PointerRNA *ptr, int value)
{
	bPoseChannel *data = (bPoseChannel *)(ptr->data);
	if (value) data->ikflag |= 128;
	else data->ikflag &= ~128;
}

float PoseBone_ik_min_x_get(PointerRNA *ptr)
{
	bPoseChannel *data = (bPoseChannel *)(ptr->data);
	return (float)(data->limitmin[0]);
}

void PoseBone_ik_min_x_set(PointerRNA *ptr, float value)
{
	bPoseChannel *data = (bPoseChannel *)(ptr->data);
	data->limitmin[0] = CLAMPIS(value, -3.1415927410f, 0.0f);
}

float PoseBone_ik_max_x_get(PointerRNA *ptr)
{
	bPoseChannel *data = (bPoseChannel *)(ptr->data);
	return (float)(data->limitmax[0]);
}

void PoseBone_ik_max_x_set(PointerRNA *ptr, float value)
{
	bPoseChannel *data = (bPoseChannel *)(ptr->data);
	data->limitmax[0] = CLAMPIS(value, 0.0f, 3.1415927410f);
}

float PoseBone_ik_min_y_get(PointerRNA *ptr)
{
	bPoseChannel *data = (bPoseChannel *)(ptr->data);
	return (float)(data->limitmin[1]);
}

void PoseBone_ik_min_y_set(PointerRNA *ptr, float value)
{
	bPoseChannel *data = (bPoseChannel *)(ptr->data);
	data->limitmin[1] = CLAMPIS(value, -3.1415927410f, 0.0f);
}

float PoseBone_ik_max_y_get(PointerRNA *ptr)
{
	bPoseChannel *data = (bPoseChannel *)(ptr->data);
	return (float)(data->limitmax[1]);
}

void PoseBone_ik_max_y_set(PointerRNA *ptr, float value)
{
	bPoseChannel *data = (bPoseChannel *)(ptr->data);
	data->limitmax[1] = CLAMPIS(value, 0.0f, 3.1415927410f);
}

float PoseBone_ik_min_z_get(PointerRNA *ptr)
{
	bPoseChannel *data = (bPoseChannel *)(ptr->data);
	return (float)(data->limitmin[2]);
}

void PoseBone_ik_min_z_set(PointerRNA *ptr, float value)
{
	bPoseChannel *data = (bPoseChannel *)(ptr->data);
	data->limitmin[2] = CLAMPIS(value, -3.1415927410f, 0.0f);
}

float PoseBone_ik_max_z_get(PointerRNA *ptr)
{
	bPoseChannel *data = (bPoseChannel *)(ptr->data);
	return (float)(data->limitmax[2]);
}

void PoseBone_ik_max_z_set(PointerRNA *ptr, float value)
{
	bPoseChannel *data = (bPoseChannel *)(ptr->data);
	data->limitmax[2] = CLAMPIS(value, 0.0f, 3.1415927410f);
}

float PoseBone_ik_stiffness_x_get(PointerRNA *ptr)
{
	bPoseChannel *data = (bPoseChannel *)(ptr->data);
	return (float)(data->stiffness[0]);
}

void PoseBone_ik_stiffness_x_set(PointerRNA *ptr, float value)
{
	bPoseChannel *data = (bPoseChannel *)(ptr->data);
	data->stiffness[0] = CLAMPIS(value, 0.0f, 0.9900000095f);
}

float PoseBone_ik_stiffness_y_get(PointerRNA *ptr)
{
	bPoseChannel *data = (bPoseChannel *)(ptr->data);
	return (float)(data->stiffness[1]);
}

void PoseBone_ik_stiffness_y_set(PointerRNA *ptr, float value)
{
	bPoseChannel *data = (bPoseChannel *)(ptr->data);
	data->stiffness[1] = CLAMPIS(value, 0.0f, 0.9900000095f);
}

float PoseBone_ik_stiffness_z_get(PointerRNA *ptr)
{
	bPoseChannel *data = (bPoseChannel *)(ptr->data);
	return (float)(data->stiffness[2]);
}

void PoseBone_ik_stiffness_z_set(PointerRNA *ptr, float value)
{
	bPoseChannel *data = (bPoseChannel *)(ptr->data);
	data->stiffness[2] = CLAMPIS(value, 0.0f, 0.9900000095f);
}

float PoseBone_ik_stretch_get(PointerRNA *ptr)
{
	bPoseChannel *data = (bPoseChannel *)(ptr->data);
	return (float)(data->ikstretch);
}

void PoseBone_ik_stretch_set(PointerRNA *ptr, float value)
{
	bPoseChannel *data = (bPoseChannel *)(ptr->data);
	data->ikstretch = CLAMPIS(value, 0.0f, 1.0f);
}

float PoseBone_ik_rotation_weight_get(PointerRNA *ptr)
{
	bPoseChannel *data = (bPoseChannel *)(ptr->data);
	return (float)(data->ikrotweight);
}

void PoseBone_ik_rotation_weight_set(PointerRNA *ptr, float value)
{
	bPoseChannel *data = (bPoseChannel *)(ptr->data);
	data->ikrotweight = CLAMPIS(value, 0.0f, 1.0f);
}

float PoseBone_ik_linear_weight_get(PointerRNA *ptr)
{
	bPoseChannel *data = (bPoseChannel *)(ptr->data);
	return (float)(data->iklinweight);
}

void PoseBone_ik_linear_weight_set(PointerRNA *ptr, float value)
{
	bPoseChannel *data = (bPoseChannel *)(ptr->data);
	data->iklinweight = CLAMPIS(value, 0.0f, 1.0f);
}

PointerRNA PoseBone_custom_shape_get(PointerRNA *ptr)
{
	bPoseChannel *data = (bPoseChannel *)(ptr->data);
	return rna_pointer_inherit_refine(ptr, &RNA_Object, data->custom);
}

void PoseBone_custom_shape_set(PointerRNA *ptr, PointerRNA value)
{
	rna_PoseChannel_bone_custom_set(ptr, value);
}

PointerRNA PoseBone_custom_shape_transform_get(PointerRNA *ptr)
{
	bPoseChannel *data = (bPoseChannel *)(ptr->data);
	return rna_pointer_inherit_refine(ptr, &RNA_PoseBone, data->custom_tx);
}

void PoseBone_custom_shape_transform_set(PointerRNA *ptr, PointerRNA value)
{
	bPoseChannel *data = (bPoseChannel *)(ptr->data);
	data->custom_tx = value.data;
}

int PoseBone_bone_group_index_get(PointerRNA *ptr)
{
	return rna_PoseChannel_bone_group_index_get(ptr);
}

void PoseBone_bone_group_index_set(PointerRNA *ptr, int value)
{
	rna_PoseChannel_bone_group_index_set(ptr, value);
}

PointerRNA PoseBone_bone_group_get(PointerRNA *ptr)
{
	return rna_PoseChannel_bone_group_get(ptr);
}

void PoseBone_bone_group_set(PointerRNA *ptr, PointerRNA value)
{
	rna_PoseChannel_bone_group_set(ptr, value);
}

void PoseBone_lock_location_get(PointerRNA *ptr, int values[3])
{
	bPoseChannel *data = (bPoseChannel *)(ptr->data);
	unsigned int i;

	for (i = 0; i < 3; i++) {
		values[i] = ((data->protectflag & (1u << i)) != 0);
	}
}

void PoseBone_lock_location_set(PointerRNA *ptr, const int values[3])
{
	bPoseChannel *data = (bPoseChannel *)(ptr->data);
	unsigned int i;

	for (i = 0; i < 3; i++) {
		if (values[i]) data->protectflag |= (1<<i);
		else data->protectflag &= ~(1u << i);
	}
}

void PoseBone_lock_rotation_get(PointerRNA *ptr, int values[3])
{
	bPoseChannel *data = (bPoseChannel *)(ptr->data);
	unsigned int i;

	for (i = 0; i < 3; i++) {
		values[i] = ((data->protectflag & (8u << i)) != 0);
	}
}

void PoseBone_lock_rotation_set(PointerRNA *ptr, const int values[3])
{
	bPoseChannel *data = (bPoseChannel *)(ptr->data);
	unsigned int i;

	for (i = 0; i < 3; i++) {
		if (values[i]) data->protectflag |= (8<<i);
		else data->protectflag &= ~(8u << i);
	}
}

int PoseBone_lock_rotation_w_get(PointerRNA *ptr)
{
	bPoseChannel *data = (bPoseChannel *)(ptr->data);
	return (((data->protectflag) & 512) != 0);
}

void PoseBone_lock_rotation_w_set(PointerRNA *ptr, int value)
{
	bPoseChannel *data = (bPoseChannel *)(ptr->data);
	if (value) data->protectflag |= 512;
	else data->protectflag &= ~512;
}

int PoseBone_lock_rotations_4d_get(PointerRNA *ptr)
{
	bPoseChannel *data = (bPoseChannel *)(ptr->data);
	return (((data->protectflag) & 1024) != 0);
}

void PoseBone_lock_rotations_4d_set(PointerRNA *ptr, int value)
{
	bPoseChannel *data = (bPoseChannel *)(ptr->data);
	if (value) data->protectflag |= 1024;
	else data->protectflag &= ~1024;
}

void PoseBone_lock_scale_get(PointerRNA *ptr, int values[3])
{
	bPoseChannel *data = (bPoseChannel *)(ptr->data);
	unsigned int i;

	for (i = 0; i < 3; i++) {
		values[i] = ((data->protectflag & (64u << i)) != 0);
	}
}

void PoseBone_lock_scale_set(PointerRNA *ptr, const int values[3])
{
	bPoseChannel *data = (bPoseChannel *)(ptr->data);
	unsigned int i;

	for (i = 0; i < 3; i++) {
		if (values[i]) data->protectflag |= (64<<i);
		else data->protectflag &= ~(64u << i);
	}
}

static PointerRNA PoseBoneConstraints_rna_properties_get(CollectionPropertyIterator *iter)
{
	return rna_builtin_properties_get(iter);
}

void PoseBoneConstraints_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

	memset(iter, 0, sizeof(*iter));
	iter->parent = *ptr;
	iter->prop = (PropertyRNA *)&rna_PoseBoneConstraints_rna_properties;

	rna_builtin_properties_begin(iter, ptr);

	if (iter->valid)
		iter->ptr = PoseBoneConstraints_rna_properties_get(iter);
}

void PoseBoneConstraints_rna_properties_next(CollectionPropertyIterator *iter)
{
	rna_builtin_properties_next(iter);

	if (iter->valid)
		iter->ptr = PoseBoneConstraints_rna_properties_get(iter);
}

void PoseBoneConstraints_rna_properties_end(CollectionPropertyIterator *iter)
{
	rna_iterator_listbase_end(iter);
}

int PoseBoneConstraints_rna_properties_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
	return rna_builtin_properties_lookup_string(ptr, key, r_ptr);
}

PointerRNA PoseBoneConstraints_rna_type_get(PointerRNA *ptr)
{
	return rna_builtin_type_get(ptr);
}

PointerRNA PoseBoneConstraints_active_get(PointerRNA *ptr)
{
	return rna_PoseChannel_active_constraint_get(ptr);
}

void PoseBoneConstraints_active_set(PointerRNA *ptr, PointerRNA value)
{
	rna_PoseChannel_active_constraint_set(ptr, value);
}

static PointerRNA IKParam_rna_properties_get(CollectionPropertyIterator *iter)
{
	return rna_builtin_properties_get(iter);
}

void IKParam_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

	memset(iter, 0, sizeof(*iter));
	iter->parent = *ptr;
	iter->prop = (PropertyRNA *)&rna_IKParam_rna_properties;

	rna_builtin_properties_begin(iter, ptr);

	if (iter->valid)
		iter->ptr = IKParam_rna_properties_get(iter);
}

void IKParam_rna_properties_next(CollectionPropertyIterator *iter)
{
	rna_builtin_properties_next(iter);

	if (iter->valid)
		iter->ptr = IKParam_rna_properties_get(iter);
}

void IKParam_rna_properties_end(CollectionPropertyIterator *iter)
{
	rna_iterator_listbase_end(iter);
}

int IKParam_rna_properties_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
	return rna_builtin_properties_lookup_string(ptr, key, r_ptr);
}

PointerRNA IKParam_rna_type_get(PointerRNA *ptr)
{
	return rna_builtin_type_get(ptr);
}

int IKParam_ik_solver_get(PointerRNA *ptr)
{
	bIKParam *data = (bIKParam *)(ptr->data);
	return (int)(data->iksolver);
}

float Itasc_precision_get(PointerRNA *ptr)
{
	bItasc *data = (bItasc *)(ptr->data);
	return (float)(data->precision);
}

void Itasc_precision_set(PointerRNA *ptr, float value)
{
	bItasc *data = (bItasc *)(ptr->data);
	data->precision = CLAMPIS(value, 0.0f, 0.1000000015f);
}

int Itasc_iterations_get(PointerRNA *ptr)
{
	bItasc *data = (bItasc *)(ptr->data);
	return (int)(data->numiter);
}

void Itasc_iterations_set(PointerRNA *ptr, int value)
{
	bItasc *data = (bItasc *)(ptr->data);
	data->numiter = CLAMPIS(value, 0, 1000);
}

int Itasc_step_count_get(PointerRNA *ptr)
{
	bItasc *data = (bItasc *)(ptr->data);
	return (int)(data->numstep);
}

void Itasc_step_count_set(PointerRNA *ptr, int value)
{
	bItasc *data = (bItasc *)(ptr->data);
	data->numstep = CLAMPIS(value, 1, 50);
}

int Itasc_mode_get(PointerRNA *ptr)
{
	bItasc *data = (bItasc *)(ptr->data);
	return ((data->flag) & 8);
}

void Itasc_mode_set(PointerRNA *ptr, int value)
{
	bItasc *data = (bItasc *)(ptr->data);
	data->flag &= ~8;
	data->flag |= value;
}

int Itasc_reiteration_method_get(PointerRNA *ptr)
{
	bItasc *data = (bItasc *)(ptr->data);
	return ((data->flag) & 6);
}

void Itasc_reiteration_method_set(PointerRNA *ptr, int value)
{
	bItasc *data = (bItasc *)(ptr->data);
	data->flag &= ~6;
	data->flag |= value;
}

int Itasc_use_auto_step_get(PointerRNA *ptr)
{
	bItasc *data = (bItasc *)(ptr->data);
	return (((data->flag) & 1) != 0);
}

void Itasc_use_auto_step_set(PointerRNA *ptr, int value)
{
	bItasc *data = (bItasc *)(ptr->data);
	if (value) data->flag |= 1;
	else data->flag &= ~1;
}

float Itasc_step_min_get(PointerRNA *ptr)
{
	bItasc *data = (bItasc *)(ptr->data);
	return (float)(data->minstep);
}

void Itasc_step_min_set(PointerRNA *ptr, float value)
{
	bItasc *data = (bItasc *)(ptr->data);
	data->minstep = CLAMPIS(value, 0.0f, 0.1000000015f);
}

float Itasc_step_max_get(PointerRNA *ptr)
{
	bItasc *data = (bItasc *)(ptr->data);
	return (float)(data->maxstep);
}

void Itasc_step_max_set(PointerRNA *ptr, float value)
{
	bItasc *data = (bItasc *)(ptr->data);
	data->maxstep = CLAMPIS(value, 0.0f, 1.0f);
}

float Itasc_feedback_get(PointerRNA *ptr)
{
	bItasc *data = (bItasc *)(ptr->data);
	return (float)(data->feedback);
}

void Itasc_feedback_set(PointerRNA *ptr, float value)
{
	bItasc *data = (bItasc *)(ptr->data);
	data->feedback = CLAMPIS(value, 0.0f, 100.0f);
}

float Itasc_velocity_max_get(PointerRNA *ptr)
{
	bItasc *data = (bItasc *)(ptr->data);
	return (float)(data->maxvel);
}

void Itasc_velocity_max_set(PointerRNA *ptr, float value)
{
	bItasc *data = (bItasc *)(ptr->data);
	data->maxvel = CLAMPIS(value, 0.0f, 100.0f);
}

int Itasc_solver_get(PointerRNA *ptr)
{
	bItasc *data = (bItasc *)(ptr->data);
	return (int)(data->solver);
}

void Itasc_solver_set(PointerRNA *ptr, int value)
{
	bItasc *data = (bItasc *)(ptr->data);
	data->solver = value;
}

float Itasc_damping_max_get(PointerRNA *ptr)
{
	bItasc *data = (bItasc *)(ptr->data);
	return (float)(data->dampmax);
}

void Itasc_damping_max_set(PointerRNA *ptr, float value)
{
	bItasc *data = (bItasc *)(ptr->data);
	data->dampmax = CLAMPIS(value, 0.0f, 1.0f);
}

float Itasc_damping_epsilon_get(PointerRNA *ptr)
{
	bItasc *data = (bItasc *)(ptr->data);
	return (float)(data->dampeps);
}

void Itasc_damping_epsilon_set(PointerRNA *ptr, float value)
{
	bItasc *data = (bItasc *)(ptr->data);
	data->dampeps = CLAMPIS(value, 0.0f, 1.0f);
}

static PointerRNA BoneGroup_rna_properties_get(CollectionPropertyIterator *iter)
{
	return rna_builtin_properties_get(iter);
}

void BoneGroup_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

	memset(iter, 0, sizeof(*iter));
	iter->parent = *ptr;
	iter->prop = (PropertyRNA *)&rna_BoneGroup_rna_properties;

	rna_builtin_properties_begin(iter, ptr);

	if (iter->valid)
		iter->ptr = BoneGroup_rna_properties_get(iter);
}

void BoneGroup_rna_properties_next(CollectionPropertyIterator *iter)
{
	rna_builtin_properties_next(iter);

	if (iter->valid)
		iter->ptr = BoneGroup_rna_properties_get(iter);
}

void BoneGroup_rna_properties_end(CollectionPropertyIterator *iter)
{
	rna_iterator_listbase_end(iter);
}

int BoneGroup_rna_properties_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
	return rna_builtin_properties_lookup_string(ptr, key, r_ptr);
}

PointerRNA BoneGroup_rna_type_get(PointerRNA *ptr)
{
	return rna_builtin_type_get(ptr);
}

void BoneGroup_name_get(PointerRNA *ptr, char *value)
{
	bActionGroup *data = (bActionGroup *)(ptr->data);
	BLI_strncpy_utf8(value, data->name, 64);
}

int BoneGroup_name_length(PointerRNA *ptr)
{
	bActionGroup *data = (bActionGroup *)(ptr->data);
	return strlen(data->name);
}

void BoneGroup_name_set(PointerRNA *ptr, const char *value)
{
	rna_BoneGroup_name_set(ptr, value);
}

int BoneGroup_color_set_get(PointerRNA *ptr)
{
	bActionGroup *data = (bActionGroup *)(ptr->data);
	return (int)(data->customCol);
}

void BoneGroup_color_set_set(PointerRNA *ptr, int value)
{
	rna_ActionGroup_colorset_set(ptr, value);
}

int BoneGroup_is_custom_color_set_get(PointerRNA *ptr)
{
	return rna_ActionGroup_is_custom_colorset_get(ptr);
}

PointerRNA BoneGroup_colors_get(PointerRNA *ptr)
{
	bActionGroup *data = (bActionGroup *)(ptr->data);
	return rna_pointer_inherit_refine(ptr, &RNA_ThemeBoneColorSet, &data->cs);
}


struct bActionGroup *BoneGroups_new(struct ID *_selfid, struct bPose *_self, const char * name)
{
	return rna_bone_group_new(_selfid, _self, name);
}

void BoneGroups_new_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	struct ID *_selfid;
	struct bPose *_self;
	const char * name;
	struct bActionGroup *group;
	char *_data, *_retdata;
	
	_selfid = (struct ID *)_ptr->id.data;
	_self = (struct bPose *)_ptr->data;
	_data = (char *)_parms->data;
	name = *((const char * *)_data);
#if defined(SPEC_ILP32)
	_data += 4;
#else
	_data += 8;
#endif
	_retdata = _data;
	
	group = rna_bone_group_new(_selfid, _self, name);
	*((struct bActionGroup **)_retdata) = group;
}

void BoneGroups_remove(struct ID *_selfid, struct bPose *_self, ReportList *reports, struct PointerRNA *group)
{
	rna_bone_group_remove(_selfid, _self, reports, group);
}

void BoneGroups_remove_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	struct ID *_selfid;
	struct bPose *_self;
	struct PointerRNA *group;
	char *_data;
	
	_selfid = (struct ID *)_ptr->id.data;
	_self = (struct bPose *)_ptr->data;
	_data = (char *)_parms->data;
	group = *((struct PointerRNA **)_data);
	
	rna_bone_group_remove(_selfid, _self, reports, group);
}

/* Repeated prototypes to detect errors */

struct bActionGroup *rna_bone_group_new(struct ID *_selfid, struct bPose *_self, const char * name);
void rna_bone_group_remove(struct ID *_selfid, struct bPose *_self, ReportList *reports, struct PointerRNA *group);

float PoseBone_evaluate_envelope(struct bPoseChannel *_self, float point[3])
{
	return rna_PoseBone_do_envelope(_self, point);
}

void PoseBone_evaluate_envelope_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	struct bPoseChannel *_self;
	float *point;
	float factor;
	char *_data, *_retdata;
	
	_self = (struct bPoseChannel *)_ptr->data;
	_data = (char *)_parms->data;
	point = ((float *)_data);
	_data += 12;
	_retdata = _data;
	
	factor = rna_PoseBone_do_envelope(_self, point);
	*((float *)_retdata) = factor;
}

/* Repeated prototypes to detect errors */

float rna_PoseBone_do_envelope(struct bPoseChannel *_self, float point[3]);

struct bConstraint *PoseBoneConstraints_new(struct bPoseChannel *_self, int type)
{
	return rna_PoseChannel_constraints_new(_self, type);
}

void PoseBoneConstraints_new_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	struct bPoseChannel *_self;
	struct bConstraint *constraint;
	int type;
	char *_data, *_retdata;
	
	_self = (struct bPoseChannel *)_ptr->data;
	_data = (char *)_parms->data;
	_retdata = _data;
#if defined(SPEC_ILP32)
	_data += 4;
#else
	_data += 8;
#endif
	type = *((int *)_data);
	
	constraint = rna_PoseChannel_constraints_new(_self, type);
	*((struct bConstraint **)_retdata) = constraint;
}

void PoseBoneConstraints_remove(struct ID *_selfid, struct bPoseChannel *_self, ReportList *reports, struct PointerRNA *constraint)
{
	rna_PoseChannel_constraints_remove(_selfid, _self, reports, constraint);
}

void PoseBoneConstraints_remove_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	struct ID *_selfid;
	struct bPoseChannel *_self;
	struct PointerRNA *constraint;
	char *_data;
	
	_selfid = (struct ID *)_ptr->id.data;
	_self = (struct bPoseChannel *)_ptr->data;
	_data = (char *)_parms->data;
	constraint = *((struct PointerRNA **)_data);
	
	rna_PoseChannel_constraints_remove(_selfid, _self, reports, constraint);
}

/* Repeated prototypes to detect errors */

struct bConstraint *rna_PoseChannel_constraints_new(struct bPoseChannel *_self, int type);
void rna_PoseChannel_constraints_remove(struct ID *_selfid, struct bPoseChannel *_self, ReportList *reports, struct PointerRNA *constraint);




/* Pose */
CollectionPropertyRNA rna_Pose_rna_properties = {
	{(PropertyRNA *)&rna_Pose_rna_type, NULL,
	-1, "rna_properties", 128, "Properties",
	"RNA property collection",
	0, "*",
	PROP_COLLECTION, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	Pose_rna_properties_begin, Pose_rna_properties_next, Pose_rna_properties_end, Pose_rna_properties_get, NULL, NULL, Pose_rna_properties_lookup_string, NULL, &RNA_Property
};

PointerPropertyRNA rna_Pose_rna_type = {
	{(PropertyRNA *)&rna_Pose_bones, (PropertyRNA *)&rna_Pose_rna_properties,
	-1, "rna_type", 8912896, "RNA",
	"RNA type definition",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	Pose_rna_type_get, NULL, NULL, NULL,&RNA_Struct
};

CollectionPropertyRNA rna_Pose_bones = {
	{(PropertyRNA *)&rna_Pose_bone_groups, (PropertyRNA *)&rna_Pose_rna_type,
	-1, "bones", 0, "Pose Bones",
	"Individual pose bones for the armature",
	0, "*",
	PROP_COLLECTION, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	Pose_bones_begin, Pose_bones_next, Pose_bones_end, Pose_bones_get, NULL, Pose_bones_lookup_int, Pose_bones_lookup_string, NULL, &RNA_PoseBone
};

CollectionPropertyRNA rna_Pose_bone_groups = {
	{(PropertyRNA *)&rna_Pose_ik_solver, (PropertyRNA *)&rna_Pose_bones,
	-1, "bone_groups", 0, "Bone Groups",
	"Groups of the bones",
	0, "*",
	PROP_COLLECTION, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, &RNA_BoneGroups},
	Pose_bone_groups_begin, Pose_bone_groups_next, Pose_bone_groups_end, Pose_bone_groups_get, NULL, Pose_bone_groups_lookup_int, Pose_bone_groups_lookup_string, NULL, &RNA_BoneGroup
};

static EnumPropertyItem rna_Pose_ik_solver_items[3] = {
	{0, "LEGACY", 0, "Standard", "Original IK solver"},
	{1, "ITASC", 0, "iTaSC", "Multi constraint, stateful IK solver"},
	{0, NULL, 0, NULL, NULL}
};

EnumPropertyRNA rna_Pose_ik_solver = {
	{(PropertyRNA *)&rna_Pose_ik_param, (PropertyRNA *)&rna_Pose_bone_groups,
	-1, "ik_solver", 3, "IK Solver",
	"Selection of IK solver for IK chain",
	0, "*",
	PROP_ENUM, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Pose_ik_solver_update, 85196800, NULL, NULL,
	0, -1, NULL},
	Pose_ik_solver_get, Pose_ik_solver_set, NULL, NULL, NULL, NULL, rna_Pose_ik_solver_items, 2, 0
};

PointerPropertyRNA rna_Pose_ik_param = {
	{(PropertyRNA *)&rna_Pose_animation_visualization, (PropertyRNA *)&rna_Pose_ik_solver,
	-1, "ik_param", 8388608, "IK Param",
	"Parameters for IK solver",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	Pose_ik_param_get, NULL, rna_Pose_ikparam_typef, NULL,&RNA_IKParam
};

PointerPropertyRNA rna_Pose_animation_visualization = {
	{NULL, (PropertyRNA *)&rna_Pose_ik_param,
	-1, "animation_visualization", 8650752, "Animation Visualization",
	"Animation data for this datablock",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	Pose_animation_visualization_get, NULL, NULL, NULL,&RNA_AnimViz
};

StructRNA RNA_Pose = {
	{(ContainerRNA *)&RNA_BoneGroups, (ContainerRNA *)&RNA_ParticleSettingsTextureSlots,
	NULL,
	{(PropertyRNA *)&rna_Pose_rna_properties, (PropertyRNA *)&rna_Pose_animation_visualization}},
	"Pose", NULL, NULL, 4, "Pose",
	"A collection of pose channels, including settings for animating bones",
	"*", 17,
	NULL, (PropertyRNA *)&rna_Pose_rna_properties,
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

/* Bone Groups */
CollectionPropertyRNA rna_BoneGroups_rna_properties = {
	{(PropertyRNA *)&rna_BoneGroups_rna_type, NULL,
	-1, "rna_properties", 128, "Properties",
	"RNA property collection",
	0, "*",
	PROP_COLLECTION, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	BoneGroups_rna_properties_begin, BoneGroups_rna_properties_next, BoneGroups_rna_properties_end, BoneGroups_rna_properties_get, NULL, NULL, BoneGroups_rna_properties_lookup_string, NULL, &RNA_Property
};

PointerPropertyRNA rna_BoneGroups_rna_type = {
	{(PropertyRNA *)&rna_BoneGroups_active, (PropertyRNA *)&rna_BoneGroups_rna_properties,
	-1, "rna_type", 8912896, "RNA",
	"RNA type definition",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	BoneGroups_rna_type_get, NULL, NULL, NULL,&RNA_Struct
};

PointerPropertyRNA rna_BoneGroups_active = {
	{(PropertyRNA *)&rna_BoneGroups_active_index, (PropertyRNA *)&rna_BoneGroups_rna_type,
	-1, "active", 8388609, "Active Bone Group",
	"Active bone group for this pose",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Pose_update, 85196800, NULL, NULL,
	0, -1, NULL},
	BoneGroups_active_get, BoneGroups_active_set, NULL, NULL,&RNA_BoneGroup
};

IntPropertyRNA rna_BoneGroups_active_index = {
	{NULL, (PropertyRNA *)&rna_BoneGroups_active,
	-1, "active_index", 3, "Active Bone Group Index",
	"Active index in bone groups array",
	0, "*",
	PROP_INT, PROP_UNSIGNED | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Pose_update, 85196800, NULL, NULL,
	0, -1, NULL},
	BoneGroups_active_index_get, BoneGroups_active_index_set, NULL, NULL, rna_Pose_active_bone_group_index_range, NULL, NULL, NULL, NULL, NULL,
	0, 10000, 0, INT_MAX, 1, 0, NULL
};

StringPropertyRNA rna_BoneGroups_new_name = {
	{(PropertyRNA *)&rna_BoneGroups_new_group, NULL,
	-1, "name", 262145, "",
	"Name of the new group",
	0, "*",
	PROP_STRING, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	NULL, NULL, NULL, NULL, NULL, NULL, 64, "Group"
};

PointerPropertyRNA rna_BoneGroups_new_group = {
	{NULL, (PropertyRNA *)&rna_BoneGroups_new_name,
	-1, "group", 8388616, "",
	"New bone group",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	NULL, NULL, NULL, NULL,&RNA_BoneGroup
};

FunctionRNA rna_BoneGroups_new_func = {
	{(FunctionRNA *)&rna_BoneGroups_remove_func, NULL,
	NULL,
	{(PropertyRNA *)&rna_BoneGroups_new_name, (PropertyRNA *)&rna_BoneGroups_new_group}},
	"new", 2048, "Add a new bone group to the object",
	BoneGroups_new_call,
	(PropertyRNA *)&rna_BoneGroups_new_group
};

PointerPropertyRNA rna_BoneGroups_remove_group = {
	{NULL, NULL,
	-1, "group", 264196, "",
	"Removed bone group",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	NULL, NULL, NULL, NULL,&RNA_BoneGroup
};

FunctionRNA rna_BoneGroups_remove_func = {
	{NULL, (FunctionRNA *)&rna_BoneGroups_new_func,
	NULL,
	{(PropertyRNA *)&rna_BoneGroups_remove_group, (PropertyRNA *)&rna_BoneGroups_remove_group}},
	"remove", 2064, "Remove a bone group from this object",
	BoneGroups_remove_call,
	NULL
};

StructRNA RNA_BoneGroups = {
	{(ContainerRNA *)&RNA_PoseBone, (ContainerRNA *)&RNA_Pose,
	NULL,
	{(PropertyRNA *)&rna_BoneGroups_rna_properties, (PropertyRNA *)&rna_BoneGroups_active_index}},
	"BoneGroups", NULL, NULL, 4, "Bone Groups",
	"Collection of bone groups",
	"*", 17,
	NULL, (PropertyRNA *)&rna_BoneGroups_rna_properties,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	{(FunctionRNA *)&rna_BoneGroups_new_func, (FunctionRNA *)&rna_BoneGroups_remove_func}
};

/* Pose Bone */
CollectionPropertyRNA rna_PoseBone_rna_properties = {
	{(PropertyRNA *)&rna_PoseBone_rna_type, NULL,
	-1, "rna_properties", 128, "Properties",
	"RNA property collection",
	0, "*",
	PROP_COLLECTION, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	PoseBone_rna_properties_begin, PoseBone_rna_properties_next, PoseBone_rna_properties_end, PoseBone_rna_properties_get, NULL, NULL, PoseBone_rna_properties_lookup_string, NULL, &RNA_Property
};

PointerPropertyRNA rna_PoseBone_rna_type = {
	{(PropertyRNA *)&rna_PoseBone_constraints, (PropertyRNA *)&rna_PoseBone_rna_properties,
	-1, "rna_type", 8912896, "RNA",
	"RNA type definition",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	PoseBone_rna_type_get, NULL, NULL, NULL,&RNA_Struct
};

CollectionPropertyRNA rna_PoseBone_constraints = {
	{(PropertyRNA *)&rna_PoseBone_name, (PropertyRNA *)&rna_PoseBone_rna_type,
	-1, "constraints", 0, "Constraints",
	"Constraints that act on this PoseChannel",
	0, "*",
	PROP_COLLECTION, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, &RNA_PoseBoneConstraints},
	PoseBone_constraints_begin, PoseBone_constraints_next, PoseBone_constraints_end, PoseBone_constraints_get, NULL, PoseBone_constraints_lookup_int, PoseBone_constraints_lookup_string, NULL, &RNA_Constraint
};

StringPropertyRNA rna_PoseBone_name = {
	{(PropertyRNA *)&rna_PoseBone_motion_path, (PropertyRNA *)&rna_PoseBone_constraints,
	-1, "name", 262145, "Name",
	"",
	0, "*",
	PROP_STRING, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {64, 0, 0}, 0,
	NULL, 0, rna_PoseChannel_proxy_editable, NULL,
	0, -1, NULL},
	PoseBone_name_get, PoseBone_name_length, PoseBone_name_set, NULL, NULL, NULL, 64, ""
};

PointerPropertyRNA rna_PoseBone_motion_path = {
	{(PropertyRNA *)&rna_PoseBone_bone, (PropertyRNA *)&rna_PoseBone_name,
	-1, "motion_path", 8388608, "Motion Path",
	"Motion Path for this element",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	PoseBone_motion_path_get, NULL, NULL, NULL,&RNA_MotionPath
};

PointerPropertyRNA rna_PoseBone_bone = {
	{(PropertyRNA *)&rna_PoseBone_parent, (PropertyRNA *)&rna_PoseBone_motion_path,
	-1, "bone", 8650752, "Bone",
	"Bone associated with this PoseBone",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	PoseBone_bone_get, NULL, NULL, NULL,&RNA_Bone
};

PointerPropertyRNA rna_PoseBone_parent = {
	{(PropertyRNA *)&rna_PoseBone_child, (PropertyRNA *)&rna_PoseBone_bone,
	-1, "parent", 8388608, "Parent",
	"Parent of this pose bone",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	PoseBone_parent_get, NULL, NULL, NULL,&RNA_PoseBone
};

PointerPropertyRNA rna_PoseBone_child = {
	{(PropertyRNA *)&rna_PoseBone_location, (PropertyRNA *)&rna_PoseBone_parent,
	-1, "child", 8388608, "Child",
	"Child of this pose bone",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	PoseBone_child_get, NULL, NULL, NULL,&RNA_PoseBone
};

static float rna_PoseBone_location_default[3] = {
	0.0f,
	0.0f,
	0.0f
};

FloatPropertyRNA rna_PoseBone_location = {
	{(PropertyRNA *)&rna_PoseBone_scale, (PropertyRNA *)&rna_PoseBone_child,
	-1, "location", 8195, "Location",
	"",
	0, "*",
	PROP_FLOAT, PROP_TRANSLATION | PROP_UNIT_LENGTH, NULL, 1, {3, 0, 0}, 3,
	rna_Pose_IK_update, 85196800, NULL, rna_PoseChannel_location_editable,
	offsetof(bPoseChannel, loc), 4, NULL},
	NULL, NULL, PoseBone_location_get, PoseBone_location_set, NULL, NULL, NULL, NULL, NULL, NULL, -FLT_MAX, FLT_MAX, -FLT_MAX, FLT_MAX, 1.0f, 5, 0.0f, rna_PoseBone_location_default
};

static float rna_PoseBone_scale_default[3] = {
	1.0f,
	1.0f,
	1.0f
};

FloatPropertyRNA rna_PoseBone_scale = {
	{(PropertyRNA *)&rna_PoseBone_rotation_quaternion, (PropertyRNA *)&rna_PoseBone_location,
	-1, "scale", 67117059, "Scale",
	"",
	0, "*",
	PROP_FLOAT, PROP_XYZ | PROP_UNIT_NONE, NULL, 1, {3, 0, 0}, 3,
	rna_Pose_IK_update, 85196800, NULL, rna_PoseChannel_scale_editable,
	offsetof(bPoseChannel, size), 4, NULL},
	NULL, NULL, PoseBone_scale_get, PoseBone_scale_set, NULL, NULL, NULL, NULL, NULL, NULL, -10000.0f, 10000.0f, -FLT_MAX, FLT_MAX, 10.0f, 3, 0.0f, rna_PoseBone_scale_default
};

static float rna_PoseBone_rotation_quaternion_default[4] = {
	1.0f,
	0.0f,
	0.0f,
	0.0f
};

FloatPropertyRNA rna_PoseBone_rotation_quaternion = {
	{(PropertyRNA *)&rna_PoseBone_rotation_axis_angle, (PropertyRNA *)&rna_PoseBone_scale,
	-1, "rotation_quaternion", 8195, "Quaternion Rotation",
	"Rotation in Quaternions",
	0, "*",
	PROP_FLOAT, PROP_QUATERNION | PROP_UNIT_NONE, NULL, 1, {4, 0, 0}, 4,
	rna_Pose_update, 85196800, NULL, rna_PoseChannel_rotation_4d_editable,
	offsetof(bPoseChannel, quat), 4, NULL},
	NULL, NULL, PoseBone_rotation_quaternion_get, PoseBone_rotation_quaternion_set, NULL, NULL, NULL, NULL, NULL, NULL, -10000.0f, 10000.0f, -FLT_MAX, FLT_MAX, 10.0f, 3, 0.0f, rna_PoseBone_rotation_quaternion_default
};

static float rna_PoseBone_rotation_axis_angle_default[4] = {
	0.0f,
	0.0f,
	1.0f,
	0.0f
};

FloatPropertyRNA rna_PoseBone_rotation_axis_angle = {
	{(PropertyRNA *)&rna_PoseBone_rotation_euler, (PropertyRNA *)&rna_PoseBone_rotation_quaternion,
	-1, "rotation_axis_angle", 3, "Axis-Angle Rotation",
	"Angle of Rotation for Axis-Angle rotation representation",
	0, "*",
	PROP_FLOAT, PROP_AXISANGLE | PROP_UNIT_NONE, NULL, 1, {4, 0, 0}, 4,
	rna_Pose_update, 85196800, NULL, rna_PoseChannel_rotation_4d_editable,
	0, -1, NULL},
	NULL, NULL, PoseBone_rotation_axis_angle_get, PoseBone_rotation_axis_angle_set, NULL, NULL, NULL, NULL, NULL, NULL, -10000.0f, 10000.0f, -FLT_MAX, FLT_MAX, 10.0f, 3, 0.0f, rna_PoseBone_rotation_axis_angle_default
};

static float rna_PoseBone_rotation_euler_default[3] = {
	0.0f,
	0.0f,
	0.0f
};

FloatPropertyRNA rna_PoseBone_rotation_euler = {
	{(PropertyRNA *)&rna_PoseBone_rotation_mode, (PropertyRNA *)&rna_PoseBone_rotation_axis_angle,
	-1, "rotation_euler", 8195, "Euler Rotation",
	"Rotation in Eulers",
	0, "*",
	PROP_FLOAT, PROP_EULER | PROP_UNIT_ROTATION, NULL, 1, {3, 0, 0}, 3,
	rna_Pose_update, 85196800, NULL, rna_PoseChannel_rotation_euler_editable,
	offsetof(bPoseChannel, eul), 4, NULL},
	NULL, NULL, PoseBone_rotation_euler_get, PoseBone_rotation_euler_set, NULL, NULL, NULL, NULL, NULL, NULL, -10000.0f, 10000.0f, -FLT_MAX, FLT_MAX, 10.0f, 3, 0.0f, rna_PoseBone_rotation_euler_default
};

static EnumPropertyItem rna_PoseBone_rotation_mode_items[9] = {
	{0, "QUATERNION", 0, "Quaternion (WXYZ)", "No Gimbal Lock (default)"},
	{1, "XYZ", 0, "XYZ Euler", "XYZ Rotation Order (prone to Gimbal Lock)"},
	{2, "XZY", 0, "XZY Euler", "XZY Rotation Order (prone to Gimbal Lock)"},
	{3, "YXZ", 0, "YXZ Euler", "YXZ Rotation Order (prone to Gimbal Lock)"},
	{4, "YZX", 0, "YZX Euler", "YZX Rotation Order (prone to Gimbal Lock)"},
	{5, "ZXY", 0, "ZXY Euler", "ZXY Rotation Order (prone to Gimbal Lock)"},
	{6, "ZYX", 0, "ZYX Euler", "ZYX Rotation Order (prone to Gimbal Lock)"},
	{-1, "AXIS_ANGLE", 0, "Axis Angle", "Axis Angle (W+XYZ), defines a rotation around some axis defined by 3D-Vector"},
	{0, NULL, 0, NULL, NULL}
};

EnumPropertyRNA rna_PoseBone_rotation_mode = {
	{(PropertyRNA *)&rna_PoseBone_matrix_channel, (PropertyRNA *)&rna_PoseBone_rotation_euler,
	-1, "rotation_mode", 3, "Rotation Mode",
	"",
	0, "*",
	PROP_ENUM, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Pose_update, 85196800, rna_PoseChannel_proxy_editable, NULL,
	0, -1, NULL},
	PoseBone_rotation_mode_get, PoseBone_rotation_mode_set, NULL, NULL, NULL, NULL, rna_PoseBone_rotation_mode_items, 8, 0
};

static float rna_PoseBone_matrix_channel_default[16] = {
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

FloatPropertyRNA rna_PoseBone_matrix_channel = {
	{(PropertyRNA *)&rna_PoseBone_matrix_basis, (PropertyRNA *)&rna_PoseBone_rotation_mode,
	-1, "matrix_channel", 8194, "Channel Matrix",
	"4x4 matrix, before constraints",
	0, "*",
	PROP_FLOAT, PROP_MATRIX | PROP_UNIT_NONE, NULL, 2, {4, 4, 0}, 16,
	NULL, 0, NULL, NULL,
	offsetof(bPoseChannel, chan_mat), 4, NULL},
	NULL, NULL, PoseBone_matrix_channel_get, NULL, NULL, NULL, NULL, NULL, NULL, NULL, -10000.0f, 10000.0f, -FLT_MAX, FLT_MAX, 10.0f, 3, 0.0f, rna_PoseBone_matrix_channel_default
};

static float rna_PoseBone_matrix_basis_default[16] = {
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

FloatPropertyRNA rna_PoseBone_matrix_basis = {
	{(PropertyRNA *)&rna_PoseBone_matrix, (PropertyRNA *)&rna_PoseBone_matrix_channel,
	-1, "matrix_basis", 1, "Basis Matrix",
	"Alternative access to location/scale/rotation relative to the parent and own rest bone",
	0, "*",
	PROP_FLOAT, PROP_MATRIX | PROP_UNIT_NONE, NULL, 2, {4, 4, 0}, 16,
	rna_Pose_update, 85196800, NULL, NULL,
	0, -1, NULL},
	NULL, NULL, PoseBone_matrix_basis_get, PoseBone_matrix_basis_set, NULL, NULL, NULL, NULL, NULL, NULL, -10000.0f, 10000.0f, -FLT_MAX, FLT_MAX, 10.0f, 3, 0.0f, rna_PoseBone_matrix_basis_default
};

static float rna_PoseBone_matrix_default[16] = {
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

FloatPropertyRNA rna_PoseBone_matrix = {
	{(PropertyRNA *)&rna_PoseBone_head, (PropertyRNA *)&rna_PoseBone_matrix_basis,
	-1, "matrix", 3, "Pose Matrix",
	"Final 4x4 matrix after constraints and drivers are applied (object space)",
	0, "*",
	PROP_FLOAT, PROP_MATRIX | PROP_UNIT_NONE, NULL, 2, {4, 4, 0}, 16,
	rna_Pose_update, 85196800, NULL, NULL,
	0, -1, NULL},
	NULL, NULL, PoseBone_matrix_get, PoseBone_matrix_set, NULL, NULL, NULL, NULL, NULL, NULL, -10000.0f, 10000.0f, -FLT_MAX, FLT_MAX, 10.0f, 3, 0.0f, rna_PoseBone_matrix_default
};

static float rna_PoseBone_head_default[3] = {
	0.0f,
	0.0f,
	0.0f
};

FloatPropertyRNA rna_PoseBone_head = {
	{(PropertyRNA *)&rna_PoseBone_tail, (PropertyRNA *)&rna_PoseBone_matrix,
	-1, "head", 8194, "Pose Head Position",
	"Location of head of the channel\'s bone",
	0, "*",
	PROP_FLOAT, PROP_TRANSLATION | PROP_UNIT_LENGTH, NULL, 1, {3, 0, 0}, 3,
	NULL, 0, NULL, NULL,
	offsetof(bPoseChannel, pose_head), 4, NULL},
	NULL, NULL, PoseBone_head_get, NULL, NULL, NULL, NULL, NULL, NULL, NULL, -FLT_MAX, FLT_MAX, -FLT_MAX, FLT_MAX, 1.0f, 5, 0.0f, rna_PoseBone_head_default
};

static float rna_PoseBone_tail_default[3] = {
	0.0f,
	0.0f,
	0.0f
};

FloatPropertyRNA rna_PoseBone_tail = {
	{(PropertyRNA *)&rna_PoseBone_is_in_ik_chain, (PropertyRNA *)&rna_PoseBone_head,
	-1, "tail", 8194, "Pose Tail Position",
	"Location of tail of the channel\'s bone",
	0, "*",
	PROP_FLOAT, PROP_TRANSLATION | PROP_UNIT_LENGTH, NULL, 1, {3, 0, 0}, 3,
	NULL, 0, NULL, NULL,
	offsetof(bPoseChannel, pose_tail), 4, NULL},
	NULL, NULL, PoseBone_tail_get, NULL, NULL, NULL, NULL, NULL, NULL, NULL, -FLT_MAX, FLT_MAX, -FLT_MAX, FLT_MAX, 1.0f, 5, 0.0f, rna_PoseBone_tail_default
};

BoolPropertyRNA rna_PoseBone_is_in_ik_chain = {
	{(PropertyRNA *)&rna_PoseBone_lock_ik_x, (PropertyRNA *)&rna_PoseBone_tail,
	-1, "is_in_ik_chain", 2, "Has IK",
	"Is part of an IK chain",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Pose_IK_update, 85196800, NULL, NULL,
	0, -1, NULL},
	PoseBone_is_in_ik_chain_get, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_PoseBone_lock_ik_x = {
	{(PropertyRNA *)&rna_PoseBone_lock_ik_y, (PropertyRNA *)&rna_PoseBone_is_in_ik_chain,
	-1, "lock_ik_x", 4099, "IK X Lock",
	"Disallow movement around the X axis",
	40, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Pose_IK_update, 85196800, rna_PoseChannel_proxy_editable, NULL,
	0, -1, NULL},
	PoseBone_lock_ik_x_get, PoseBone_lock_ik_x_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_PoseBone_lock_ik_y = {
	{(PropertyRNA *)&rna_PoseBone_lock_ik_z, (PropertyRNA *)&rna_PoseBone_lock_ik_x,
	-1, "lock_ik_y", 4099, "IK Y Lock",
	"Disallow movement around the Y axis",
	40, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Pose_IK_update, 85196800, rna_PoseChannel_proxy_editable, NULL,
	0, -1, NULL},
	PoseBone_lock_ik_y_get, PoseBone_lock_ik_y_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_PoseBone_lock_ik_z = {
	{(PropertyRNA *)&rna_PoseBone_use_ik_limit_x, (PropertyRNA *)&rna_PoseBone_lock_ik_y,
	-1, "lock_ik_z", 4099, "IK Z Lock",
	"Disallow movement around the Z axis",
	40, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Pose_IK_update, 85196800, rna_PoseChannel_proxy_editable, NULL,
	0, -1, NULL},
	PoseBone_lock_ik_z_get, PoseBone_lock_ik_z_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_PoseBone_use_ik_limit_x = {
	{(PropertyRNA *)&rna_PoseBone_use_ik_limit_y, (PropertyRNA *)&rna_PoseBone_lock_ik_z,
	-1, "use_ik_limit_x", 3, "IK X Limit",
	"Limit movement around the X axis",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Pose_IK_update, 85196800, rna_PoseChannel_proxy_editable, NULL,
	0, -1, NULL},
	PoseBone_use_ik_limit_x_get, PoseBone_use_ik_limit_x_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_PoseBone_use_ik_limit_y = {
	{(PropertyRNA *)&rna_PoseBone_use_ik_limit_z, (PropertyRNA *)&rna_PoseBone_use_ik_limit_x,
	-1, "use_ik_limit_y", 3, "IK Y Limit",
	"Limit movement around the Y axis",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Pose_IK_update, 85196800, rna_PoseChannel_proxy_editable, NULL,
	0, -1, NULL},
	PoseBone_use_ik_limit_y_get, PoseBone_use_ik_limit_y_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_PoseBone_use_ik_limit_z = {
	{(PropertyRNA *)&rna_PoseBone_use_ik_rotation_control, (PropertyRNA *)&rna_PoseBone_use_ik_limit_y,
	-1, "use_ik_limit_z", 3, "IK Z Limit",
	"Limit movement around the Z axis",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Pose_IK_update, 85196800, rna_PoseChannel_proxy_editable, NULL,
	0, -1, NULL},
	PoseBone_use_ik_limit_z_get, PoseBone_use_ik_limit_z_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_PoseBone_use_ik_rotation_control = {
	{(PropertyRNA *)&rna_PoseBone_use_ik_linear_control, (PropertyRNA *)&rna_PoseBone_use_ik_limit_z,
	-1, "use_ik_rotation_control", 3, "IK rot control",
	"Apply channel rotation as IK constraint",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Pose_IK_update, 85196800, rna_PoseChannel_proxy_editable, NULL,
	0, -1, NULL},
	PoseBone_use_ik_rotation_control_get, PoseBone_use_ik_rotation_control_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_PoseBone_use_ik_linear_control = {
	{(PropertyRNA *)&rna_PoseBone_ik_min_x, (PropertyRNA *)&rna_PoseBone_use_ik_rotation_control,
	-1, "use_ik_linear_control", 3, "IK rot control",
	"Apply channel size as IK constraint if stretching is enabled",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Pose_IK_update, 85196800, rna_PoseChannel_proxy_editable, NULL,
	0, -1, NULL},
	PoseBone_use_ik_linear_control_get, PoseBone_use_ik_linear_control_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

FloatPropertyRNA rna_PoseBone_ik_min_x = {
	{(PropertyRNA *)&rna_PoseBone_ik_max_x, (PropertyRNA *)&rna_PoseBone_use_ik_linear_control,
	-1, "ik_min_x", 8195, "IK X Minimum",
	"Minimum angles for IK Limit",
	0, "*",
	PROP_FLOAT, PROP_ANGLE | PROP_UNIT_ROTATION, NULL, 0, {0, 0, 0}, 0,
	rna_Pose_IK_update, 85196800, rna_PoseChannel_proxy_editable, NULL,
	offsetof(bPoseChannel, limitmin[0]), 4, NULL},
	PoseBone_ik_min_x_get, PoseBone_ik_min_x_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, -3.1415927410f, 0.0f, -3.1415927410f, 0.0f, 10.0f, 3, 0.0f, NULL
};

FloatPropertyRNA rna_PoseBone_ik_max_x = {
	{(PropertyRNA *)&rna_PoseBone_ik_min_y, (PropertyRNA *)&rna_PoseBone_ik_min_x,
	-1, "ik_max_x", 8195, "IK X Maximum",
	"Maximum angles for IK Limit",
	0, "*",
	PROP_FLOAT, PROP_ANGLE | PROP_UNIT_ROTATION, NULL, 0, {0, 0, 0}, 0,
	rna_Pose_IK_update, 85196800, rna_PoseChannel_proxy_editable, NULL,
	offsetof(bPoseChannel, limitmax[0]), 4, NULL},
	PoseBone_ik_max_x_get, PoseBone_ik_max_x_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 3.1415927410f, 0.0f, 3.1415927410f, 10.0f, 3, 0.0f, NULL
};

FloatPropertyRNA rna_PoseBone_ik_min_y = {
	{(PropertyRNA *)&rna_PoseBone_ik_max_y, (PropertyRNA *)&rna_PoseBone_ik_max_x,
	-1, "ik_min_y", 8195, "IK Y Minimum",
	"Minimum angles for IK Limit",
	0, "*",
	PROP_FLOAT, PROP_ANGLE | PROP_UNIT_ROTATION, NULL, 0, {0, 0, 0}, 0,
	rna_Pose_IK_update, 85196800, rna_PoseChannel_proxy_editable, NULL,
	offsetof(bPoseChannel, limitmin[1]), 4, NULL},
	PoseBone_ik_min_y_get, PoseBone_ik_min_y_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, -3.1415927410f, 0.0f, -3.1415927410f, 0.0f, 10.0f, 3, 0.0f, NULL
};

FloatPropertyRNA rna_PoseBone_ik_max_y = {
	{(PropertyRNA *)&rna_PoseBone_ik_min_z, (PropertyRNA *)&rna_PoseBone_ik_min_y,
	-1, "ik_max_y", 8195, "IK Y Maximum",
	"Maximum angles for IK Limit",
	0, "*",
	PROP_FLOAT, PROP_ANGLE | PROP_UNIT_ROTATION, NULL, 0, {0, 0, 0}, 0,
	rna_Pose_IK_update, 85196800, rna_PoseChannel_proxy_editable, NULL,
	offsetof(bPoseChannel, limitmax[1]), 4, NULL},
	PoseBone_ik_max_y_get, PoseBone_ik_max_y_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 3.1415927410f, 0.0f, 3.1415927410f, 10.0f, 3, 0.0f, NULL
};

FloatPropertyRNA rna_PoseBone_ik_min_z = {
	{(PropertyRNA *)&rna_PoseBone_ik_max_z, (PropertyRNA *)&rna_PoseBone_ik_max_y,
	-1, "ik_min_z", 8195, "IK Z Minimum",
	"Minimum angles for IK Limit",
	0, "*",
	PROP_FLOAT, PROP_ANGLE | PROP_UNIT_ROTATION, NULL, 0, {0, 0, 0}, 0,
	rna_Pose_IK_update, 85196800, rna_PoseChannel_proxy_editable, NULL,
	offsetof(bPoseChannel, limitmin[2]), 4, NULL},
	PoseBone_ik_min_z_get, PoseBone_ik_min_z_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, -3.1415927410f, 0.0f, -3.1415927410f, 0.0f, 10.0f, 3, 0.0f, NULL
};

FloatPropertyRNA rna_PoseBone_ik_max_z = {
	{(PropertyRNA *)&rna_PoseBone_ik_stiffness_x, (PropertyRNA *)&rna_PoseBone_ik_min_z,
	-1, "ik_max_z", 8195, "IK Z Maximum",
	"Maximum angles for IK Limit",
	0, "*",
	PROP_FLOAT, PROP_ANGLE | PROP_UNIT_ROTATION, NULL, 0, {0, 0, 0}, 0,
	rna_Pose_IK_update, 85196800, rna_PoseChannel_proxy_editable, NULL,
	offsetof(bPoseChannel, limitmax[2]), 4, NULL},
	PoseBone_ik_max_z_get, PoseBone_ik_max_z_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 3.1415927410f, 0.0f, 3.1415927410f, 10.0f, 3, 0.0f, NULL
};

FloatPropertyRNA rna_PoseBone_ik_stiffness_x = {
	{(PropertyRNA *)&rna_PoseBone_ik_stiffness_y, (PropertyRNA *)&rna_PoseBone_ik_max_z,
	-1, "ik_stiffness_x", 8195, "IK X Stiffness",
	"IK stiffness around the X axis",
	0, "*",
	PROP_FLOAT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Pose_IK_update, 85196800, rna_PoseChannel_proxy_editable, NULL,
	offsetof(bPoseChannel, stiffness[0]), 4, NULL},
	PoseBone_ik_stiffness_x_get, PoseBone_ik_stiffness_x_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 0.9900000095f, 0.0f, 0.9900000095f, 10.0f, 3, 0.0f, NULL
};

FloatPropertyRNA rna_PoseBone_ik_stiffness_y = {
	{(PropertyRNA *)&rna_PoseBone_ik_stiffness_z, (PropertyRNA *)&rna_PoseBone_ik_stiffness_x,
	-1, "ik_stiffness_y", 8195, "IK Y Stiffness",
	"IK stiffness around the Y axis",
	0, "*",
	PROP_FLOAT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Pose_IK_update, 85196800, rna_PoseChannel_proxy_editable, NULL,
	offsetof(bPoseChannel, stiffness[1]), 4, NULL},
	PoseBone_ik_stiffness_y_get, PoseBone_ik_stiffness_y_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 0.9900000095f, 0.0f, 0.9900000095f, 10.0f, 3, 0.0f, NULL
};

FloatPropertyRNA rna_PoseBone_ik_stiffness_z = {
	{(PropertyRNA *)&rna_PoseBone_ik_stretch, (PropertyRNA *)&rna_PoseBone_ik_stiffness_y,
	-1, "ik_stiffness_z", 8195, "IK Z Stiffness",
	"IK stiffness around the Z axis",
	0, "*",
	PROP_FLOAT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Pose_IK_update, 85196800, rna_PoseChannel_proxy_editable, NULL,
	offsetof(bPoseChannel, stiffness[2]), 4, NULL},
	PoseBone_ik_stiffness_z_get, PoseBone_ik_stiffness_z_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 0.9900000095f, 0.0f, 0.9900000095f, 10.0f, 3, 0.0f, NULL
};

FloatPropertyRNA rna_PoseBone_ik_stretch = {
	{(PropertyRNA *)&rna_PoseBone_ik_rotation_weight, (PropertyRNA *)&rna_PoseBone_ik_stiffness_z,
	-1, "ik_stretch", 8195, "IK Stretch",
	"Allow scaling of the bone for IK",
	0, "*",
	PROP_FLOAT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Pose_IK_update, 85196800, rna_PoseChannel_proxy_editable, NULL,
	offsetof(bPoseChannel, ikstretch), 4, NULL},
	PoseBone_ik_stretch_get, PoseBone_ik_stretch_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 1.0f, 0.0f, 1.0f, 10.0f, 3, 0.0f, NULL
};

FloatPropertyRNA rna_PoseBone_ik_rotation_weight = {
	{(PropertyRNA *)&rna_PoseBone_ik_linear_weight, (PropertyRNA *)&rna_PoseBone_ik_stretch,
	-1, "ik_rotation_weight", 8195, "IK Rot Weight",
	"Weight of rotation constraint for IK",
	0, "*",
	PROP_FLOAT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Pose_update, 85196800, rna_PoseChannel_proxy_editable, NULL,
	offsetof(bPoseChannel, ikrotweight), 4, NULL},
	PoseBone_ik_rotation_weight_get, PoseBone_ik_rotation_weight_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 1.0f, 0.0f, 1.0f, 10.0f, 3, 0.0f, NULL
};

FloatPropertyRNA rna_PoseBone_ik_linear_weight = {
	{(PropertyRNA *)&rna_PoseBone_custom_shape, (PropertyRNA *)&rna_PoseBone_ik_rotation_weight,
	-1, "ik_linear_weight", 8195, "IK Lin Weight",
	"Weight of scale constraint for IK",
	0, "*",
	PROP_FLOAT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Pose_update, 85196800, rna_PoseChannel_proxy_editable, NULL,
	offsetof(bPoseChannel, iklinweight), 4, NULL},
	PoseBone_ik_linear_weight_get, PoseBone_ik_linear_weight_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 1.0f, 0.0f, 1.0f, 10.0f, 3, 0.0f, NULL
};

PointerPropertyRNA rna_PoseBone_custom_shape = {
	{(PropertyRNA *)&rna_PoseBone_custom_shape_transform, (PropertyRNA *)&rna_PoseBone_ik_linear_weight,
	-1, "custom_shape", 8388609, "Custom Object",
	"Object that defines custom draw type for this bone",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Pose_update, 85196800, rna_PoseChannel_proxy_editable, NULL,
	0, -1, NULL},
	PoseBone_custom_shape_get, PoseBone_custom_shape_set, NULL, NULL,&RNA_Object
};

PointerPropertyRNA rna_PoseBone_custom_shape_transform = {
	{(PropertyRNA *)&rna_PoseBone_bone_group_index, (PropertyRNA *)&rna_PoseBone_custom_shape,
	-1, "custom_shape_transform", 8388609, "Custom Shape Transform",
	"Bone that defines the display transform of this custom shape",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Pose_update, 85196800, rna_PoseChannel_proxy_editable, NULL,
	0, -1, NULL},
	PoseBone_custom_shape_transform_get, PoseBone_custom_shape_transform_set, NULL, NULL,&RNA_PoseBone
};

IntPropertyRNA rna_PoseBone_bone_group_index = {
	{(PropertyRNA *)&rna_PoseBone_bone_group, (PropertyRNA *)&rna_PoseBone_custom_shape_transform,
	-1, "bone_group_index", 1, "Bone Group Index",
	"Bone Group this pose channel belongs to (0=no group)",
	0, "*",
	PROP_INT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Pose_update, 85196800, rna_PoseChannel_proxy_editable, NULL,
	0, -1, NULL},
	PoseBone_bone_group_index_get, PoseBone_bone_group_index_set, NULL, NULL, rna_PoseChannel_bone_group_index_range, NULL, NULL, NULL, NULL, NULL,
	-32768, 32767, -32768, 32767, 1, 0, NULL
};

PointerPropertyRNA rna_PoseBone_bone_group = {
	{(PropertyRNA *)&rna_PoseBone_lock_location, (PropertyRNA *)&rna_PoseBone_bone_group_index,
	-1, "bone_group", 8388609, "Bone Group",
	"Bone Group this pose channel belongs to",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Pose_update, 85196800, rna_PoseChannel_proxy_editable, NULL,
	0, -1, NULL},
	PoseBone_bone_group_get, PoseBone_bone_group_set, NULL, NULL,&RNA_BoneGroup
};

static int rna_PoseBone_lock_location_default[3] = {
	0,
	0,
	0
};

BoolPropertyRNA rna_PoseBone_lock_location = {
	{(PropertyRNA *)&rna_PoseBone_lock_rotation, (PropertyRNA *)&rna_PoseBone_bone_group,
	-1, "lock_location", 4099, "Lock Location",
	"Lock editing of location in the interface",
	40, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 1, {3, 0, 0}, 3,
	rna_Pose_update, 85196800, rna_PoseChannel_proxy_editable, NULL,
	0, -1, NULL},
	NULL, NULL, PoseBone_lock_location_get, PoseBone_lock_location_set, NULL, NULL, NULL, NULL, 0, rna_PoseBone_lock_location_default
};

static int rna_PoseBone_lock_rotation_default[3] = {
	0,
	0,
	0
};

BoolPropertyRNA rna_PoseBone_lock_rotation = {
	{(PropertyRNA *)&rna_PoseBone_lock_rotation_w, (PropertyRNA *)&rna_PoseBone_lock_location,
	-1, "lock_rotation", 4099, "Lock Rotation",
	"Lock editing of rotation in the interface",
	40, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 1, {3, 0, 0}, 3,
	rna_Pose_update, 85196800, rna_PoseChannel_proxy_editable, NULL,
	0, -1, NULL},
	NULL, NULL, PoseBone_lock_rotation_get, PoseBone_lock_rotation_set, NULL, NULL, NULL, NULL, 0, rna_PoseBone_lock_rotation_default
};

BoolPropertyRNA rna_PoseBone_lock_rotation_w = {
	{(PropertyRNA *)&rna_PoseBone_lock_rotations_4d, (PropertyRNA *)&rna_PoseBone_lock_rotation,
	-1, "lock_rotation_w", 4099, "Lock Rotation (4D Angle)",
	"Lock editing of \'angle\' component of four-component rotations in the interface",
	40, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Pose_update, 85196800, rna_PoseChannel_proxy_editable, NULL,
	0, -1, NULL},
	PoseBone_lock_rotation_w_get, PoseBone_lock_rotation_w_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_PoseBone_lock_rotations_4d = {
	{(PropertyRNA *)&rna_PoseBone_lock_scale, (PropertyRNA *)&rna_PoseBone_lock_rotation_w,
	-1, "lock_rotations_4d", 3, "Lock Rotations (4D)",
	"Lock editing of four component rotations by components (instead of as Eulers)",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Pose_update, 85196800, rna_PoseChannel_proxy_editable, NULL,
	0, -1, NULL},
	PoseBone_lock_rotations_4d_get, PoseBone_lock_rotations_4d_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

static int rna_PoseBone_lock_scale_default[3] = {
	0,
	0,
	0
};

BoolPropertyRNA rna_PoseBone_lock_scale = {
	{NULL, (PropertyRNA *)&rna_PoseBone_lock_rotations_4d,
	-1, "lock_scale", 4099, "Lock Scale",
	"Lock editing of scale in the interface",
	40, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 1, {3, 0, 0}, 3,
	rna_Pose_update, 85196800, rna_PoseChannel_proxy_editable, NULL,
	0, -1, NULL},
	NULL, NULL, PoseBone_lock_scale_get, PoseBone_lock_scale_set, NULL, NULL, NULL, NULL, 0, rna_PoseBone_lock_scale_default
};

static float rna_PoseBone_evaluate_envelope_point_default[3] = {
	0.0f,
	0.0f,
	0.0f
};

FloatPropertyRNA rna_PoseBone_evaluate_envelope_point = {
	{(PropertyRNA *)&rna_PoseBone_evaluate_envelope_factor, NULL,
	-1, "point", 7, "Point",
	"Position in 3d space to evaluate",
	0, "*",
	PROP_FLOAT, PROP_XYZ | PROP_UNIT_LENGTH, NULL, 1, {3, 0, 0}, 3,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, -FLT_MAX, FLT_MAX, -FLT_MAX, FLT_MAX, 1.0f, 3, 0.0f, rna_PoseBone_evaluate_envelope_point_default
};

FloatPropertyRNA rna_PoseBone_evaluate_envelope_factor = {
	{NULL, (PropertyRNA *)&rna_PoseBone_evaluate_envelope_point,
	-1, "factor", 11, "Factor",
	"Envelope factor",
	0, "*",
	PROP_FLOAT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, -FLT_MAX, FLT_MAX, -FLT_MAX, FLT_MAX, 1.0f, 3, 0.0f, NULL
};

FunctionRNA rna_PoseBone_evaluate_envelope_func = {
	{NULL, NULL,
	NULL,
	{(PropertyRNA *)&rna_PoseBone_evaluate_envelope_point, (PropertyRNA *)&rna_PoseBone_evaluate_envelope_factor}},
	"evaluate_envelope", 0, "Calculate bone envelope at given point",
	PoseBone_evaluate_envelope_call,
	(PropertyRNA *)&rna_PoseBone_evaluate_envelope_factor
};

StructRNA RNA_PoseBone = {
	{(ContainerRNA *)&RNA_PoseBoneConstraints, (ContainerRNA *)&RNA_BoneGroups,
	NULL,
	{(PropertyRNA *)&rna_PoseBone_rna_properties, (PropertyRNA *)&rna_PoseBone_lock_scale}},
	"PoseBone", NULL, NULL, 4, "Pose Bone",
	"Channel defining pose data for a bone in a Pose",
	"*", 174,
	(PropertyRNA *)&rna_PoseBone_name, (PropertyRNA *)&rna_PoseBone_rna_properties,
	NULL,
	NULL,
	NULL,
	rna_PoseBone_path,
	NULL,
	NULL,
	NULL,
	rna_PoseBone_idprops,
	{(FunctionRNA *)&rna_PoseBone_evaluate_envelope_func, (FunctionRNA *)&rna_PoseBone_evaluate_envelope_func}
};

/* PoseBone Constraints */
CollectionPropertyRNA rna_PoseBoneConstraints_rna_properties = {
	{(PropertyRNA *)&rna_PoseBoneConstraints_rna_type, NULL,
	-1, "rna_properties", 128, "Properties",
	"RNA property collection",
	0, "*",
	PROP_COLLECTION, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	PoseBoneConstraints_rna_properties_begin, PoseBoneConstraints_rna_properties_next, PoseBoneConstraints_rna_properties_end, PoseBoneConstraints_rna_properties_get, NULL, NULL, PoseBoneConstraints_rna_properties_lookup_string, NULL, &RNA_Property
};

PointerPropertyRNA rna_PoseBoneConstraints_rna_type = {
	{(PropertyRNA *)&rna_PoseBoneConstraints_active, (PropertyRNA *)&rna_PoseBoneConstraints_rna_properties,
	-1, "rna_type", 8912896, "RNA",
	"RNA type definition",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	PoseBoneConstraints_rna_type_get, NULL, NULL, NULL,&RNA_Struct
};

PointerPropertyRNA rna_PoseBoneConstraints_active = {
	{NULL, (PropertyRNA *)&rna_PoseBoneConstraints_rna_type,
	-1, "active", 8388609, "Active Constraint",
	"Active PoseChannel constraint",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	PoseBoneConstraints_active_get, PoseBoneConstraints_active_set, NULL, NULL,&RNA_Constraint
};

PointerPropertyRNA rna_PoseBoneConstraints_new_constraint = {
	{(PropertyRNA *)&rna_PoseBoneConstraints_new_type, NULL,
	-1, "constraint", 8388616, "",
	"New constraint",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	NULL, NULL, NULL, NULL,&RNA_Constraint
};

static EnumPropertyItem rna_PoseBoneConstraints_new_type_items[32] = {
	{0, "", 0, "Motion Tracking", ""},
	{27, "CAMERA_SOLVER", 459, "Camera Solver", ""},
	{26, "FOLLOW_TRACK", 459, "Follow Track", ""},
	{28, "OBJECT_SOLVER", 459, "Object Solver", ""},
	{0, "", 0, "Transform", ""},
	{9, "COPY_LOCATION", 459, "Copy Location", "Copy the location of a target (with an optional offset), so that they move together"},
	{8, "COPY_ROTATION", 459, "Copy Rotation", "Copy the rotation of a target (with an optional offset), so that they rotate together"},
	{10, "COPY_SCALE", 459, "Copy Scale", "Copy the scale factors of a target (with an optional offset), so that they are scaled by the same amount"},
	{23, "COPY_TRANSFORMS", 459, "Copy Transforms", "Copy all the transformations of a target, so that they move together"},
	{14, "LIMIT_DISTANCE", 459, "Limit Distance", "Restrict movements to within a certain distance of a target (at the time of constraint evaluation only)"},
	{6, "LIMIT_LOCATION", 459, "Limit Location", "Restrict movement along each axis within given ranges"},
	{5, "LIMIT_ROTATION", 459, "Limit Rotation", "Restrict rotation along each axis within given ranges"},
	{7, "LIMIT_SCALE", 459, "Limit Scale", "Restrict scaling along each axis with given ranges"},
	{24, "MAINTAIN_VOLUME", 459, "Maintain Volume", "Compensate for scaling one axis by applying suitable scaling to the other two axes"},
	{19, "TRANSFORM", 459, "Transformation", "Use one transform property from target to control another (or same) property on owner"},
	{0, "", 0, "Tracking", ""},
	{18, "CLAMP_TO", 459, "Clamp To", "Restrict movements to lie along a curve by remapping location along curve\'s longest axis"},
	{21, "DAMPED_TRACK", 459, "Damped Track", "Point towards a target by performing the smallest rotation necessary"},
	{3, "IK", 459, "Inverse Kinematics", "Control a chain of bones by specifying the endpoint target (Bones only)"},
	{13, "LOCKED_TRACK", 459, "Locked Track", "Rotate around the specified (\'locked\') axis to point towards a target"},
	{22, "SPLINE_IK", 459, "Spline IK", "Align chain of bones along a curve (Bones only)"},
	{15, "STRETCH_TO", 459, "Stretch To", "Stretch along Y-Axis to point towards a target"},
	{2, "TRACK_TO", 459, "Track To", "Legacy tracking constraint prone to twisting artifacts"},
	{0, "", 0, "Relationship", ""},
	{12, "ACTION", 459, "Action", "Use transform property of target to look up pose for owner from an Action"},
	{1, "CHILD_OF", 459, "Child Of", "Make target the \'detachable\' parent of owner"},
	{16, "FLOOR", 459, "Floor", "Use position (and optionally rotation) of target to define a \'wall\' or \'floor\' that the owner can not cross"},
	{4, "FOLLOW_PATH", 459, "Follow Path", "Use to animate an object/bone following a path"},
	{25, "PIVOT", 459, "Pivot", "Change pivot point for transforms (buggy)"},
	{17, "RIGID_BODY_JOINT", 459, "Rigid Body Joint", "Use to define a Rigid Body Constraint (for Game Engine use only)"},
	{20, "SHRINKWRAP", 459, "Shrinkwrap", "Restrict movements to surface of target mesh"},
	{0, NULL, 0, NULL, NULL}
};

EnumPropertyRNA rna_PoseBoneConstraints_new_type = {
	{NULL, (PropertyRNA *)&rna_PoseBoneConstraints_new_constraint,
	-1, "type", 7, "",
	"Constraint type to add",
	0, "*",
	PROP_ENUM, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	NULL, NULL, NULL, NULL, NULL, NULL, rna_PoseBoneConstraints_new_type_items, 31, 1
};

FunctionRNA rna_PoseBoneConstraints_new_func = {
	{(FunctionRNA *)&rna_PoseBoneConstraints_remove_func, NULL,
	NULL,
	{(PropertyRNA *)&rna_PoseBoneConstraints_new_constraint, (PropertyRNA *)&rna_PoseBoneConstraints_new_type}},
	"new", 0, "Add a constraint to this object",
	PoseBoneConstraints_new_call,
	(PropertyRNA *)&rna_PoseBoneConstraints_new_constraint
};

PointerPropertyRNA rna_PoseBoneConstraints_remove_constraint = {
	{NULL, NULL,
	-1, "constraint", 264196, "",
	"Removed constraint",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	NULL, NULL, NULL, NULL,&RNA_Constraint
};

FunctionRNA rna_PoseBoneConstraints_remove_func = {
	{NULL, (FunctionRNA *)&rna_PoseBoneConstraints_new_func,
	NULL,
	{(PropertyRNA *)&rna_PoseBoneConstraints_remove_constraint, (PropertyRNA *)&rna_PoseBoneConstraints_remove_constraint}},
	"remove", 2064, "Remove a constraint from this object",
	PoseBoneConstraints_remove_call,
	NULL
};

StructRNA RNA_PoseBoneConstraints = {
	{(ContainerRNA *)&RNA_IKParam, (ContainerRNA *)&RNA_PoseBone,
	NULL,
	{(PropertyRNA *)&rna_PoseBoneConstraints_rna_properties, (PropertyRNA *)&rna_PoseBoneConstraints_active}},
	"PoseBoneConstraints", NULL, NULL, 4, "PoseBone Constraints",
	"Collection of pose bone constraints",
	"*", 17,
	NULL, (PropertyRNA *)&rna_PoseBoneConstraints_rna_properties,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	{(FunctionRNA *)&rna_PoseBoneConstraints_new_func, (FunctionRNA *)&rna_PoseBoneConstraints_remove_func}
};

/* IKParam */
CollectionPropertyRNA rna_IKParam_rna_properties = {
	{(PropertyRNA *)&rna_IKParam_rna_type, NULL,
	-1, "rna_properties", 128, "Properties",
	"RNA property collection",
	0, "*",
	PROP_COLLECTION, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	IKParam_rna_properties_begin, IKParam_rna_properties_next, IKParam_rna_properties_end, IKParam_rna_properties_get, NULL, NULL, IKParam_rna_properties_lookup_string, NULL, &RNA_Property
};

PointerPropertyRNA rna_IKParam_rna_type = {
	{(PropertyRNA *)&rna_IKParam_ik_solver, (PropertyRNA *)&rna_IKParam_rna_properties,
	-1, "rna_type", 8912896, "RNA",
	"RNA type definition",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	IKParam_rna_type_get, NULL, NULL, NULL,&RNA_Struct
};

static EnumPropertyItem rna_IKParam_ik_solver_items[3] = {
	{0, "LEGACY", 0, "Standard", "Original IK solver"},
	{1, "ITASC", 0, "iTaSC", "Multi constraint, stateful IK solver"},
	{0, NULL, 0, NULL, NULL}
};

EnumPropertyRNA rna_IKParam_ik_solver = {
	{NULL, (PropertyRNA *)&rna_IKParam_rna_type,
	-1, "ik_solver", 2, "IK Solver",
	"IK solver for which these parameters are defined",
	0, "*",
	PROP_ENUM, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	IKParam_ik_solver_get, NULL, NULL, NULL, NULL, NULL, rna_IKParam_ik_solver_items, 2, 0
};

StructRNA RNA_IKParam = {
	{(ContainerRNA *)&RNA_Itasc, (ContainerRNA *)&RNA_PoseBoneConstraints,
	NULL,
	{(PropertyRNA *)&rna_IKParam_rna_properties, (PropertyRNA *)&rna_IKParam_ik_solver}},
	"IKParam", NULL, NULL, 4, "IKParam",
	"Base type for IK solver parameters",
	"*", 17,
	NULL, (PropertyRNA *)&rna_IKParam_rna_properties,
	NULL,
	NULL,
	rna_IKParam_refine,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	{NULL, NULL}
};

/* bItasc */
FloatPropertyRNA rna_Itasc_precision = {
	{(PropertyRNA *)&rna_Itasc_iterations, NULL,
	-1, "precision", 8195, "Precision",
	"Precision of convergence in case of reiteration",
	0, "*",
	PROP_FLOAT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Itasc_update, 85196800, NULL, NULL,
	offsetof(bItasc, precision), 4, NULL},
	Itasc_precision_get, Itasc_precision_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 0.1000000015f, 0.0f, 0.1000000015f, 10.0f, 3, 0.0f, NULL
};

IntPropertyRNA rna_Itasc_iterations = {
	{(PropertyRNA *)&rna_Itasc_step_count, (PropertyRNA *)&rna_Itasc_precision,
	-1, "iterations", 8195, "Iterations",
	"Maximum number of iterations for convergence in case of reiteration",
	0, "*",
	PROP_INT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Itasc_update, 85196800, NULL, NULL,
	offsetof(bItasc, numiter), 1, NULL},
	Itasc_iterations_get, Itasc_iterations_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL,
	0, 1000, 0, 1000, 1, 0, NULL
};

IntPropertyRNA rna_Itasc_step_count = {
	{(PropertyRNA *)&rna_Itasc_mode, (PropertyRNA *)&rna_Itasc_iterations,
	-1, "step_count", 8195, "Num steps",
	"Divide the frame interval into this many steps",
	0, "*",
	PROP_INT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Itasc_update, 85196800, NULL, NULL,
	offsetof(bItasc, numstep), 1, NULL},
	Itasc_step_count_get, Itasc_step_count_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL,
	1, 50, 1, 50, 1, 0, NULL
};

static EnumPropertyItem rna_Itasc_mode_items[3] = {
	{0, "ANIMATION", 0, "Animation", "Stateless solver computing pose starting from current action and non-IK constraints"},
	{8, "SIMULATION", 0, "Simulation", "State-full solver running in real-time context and ignoring actions and non-IK constraints"},
	{0, NULL, 0, NULL, NULL}
};

EnumPropertyRNA rna_Itasc_mode = {
	{(PropertyRNA *)&rna_Itasc_reiteration_method, (PropertyRNA *)&rna_Itasc_step_count,
	-1, "mode", 3, "Mode",
	NULL,
	0, "*",
	PROP_ENUM, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Itasc_update_rebuild, 85196800, NULL, NULL,
	0, -1, NULL},
	Itasc_mode_get, Itasc_mode_set, NULL, NULL, NULL, NULL, rna_Itasc_mode_items, 2, 0
};

static EnumPropertyItem rna_Itasc_reiteration_method_items[4] = {
	{0, "NEVER", 0, "Never", "The solver does not reiterate, not even on first frame (starts from rest pose)"},
	{2, "INITIAL", 0, "Initial", "The solver reiterates (converges) on the first frame but not on subsequent frame"},
	{6, "ALWAYS", 0, "Always", "The solver reiterates (converges) on all frames"},
	{0, NULL, 0, NULL, NULL}
};

EnumPropertyRNA rna_Itasc_reiteration_method = {
	{(PropertyRNA *)&rna_Itasc_use_auto_step, (PropertyRNA *)&rna_Itasc_mode,
	-1, "reiteration_method", 3, "Reiteration",
	"Defines if the solver is allowed to reiterate (converge until precision is met) on none, first or all frames",
	0, "*",
	PROP_ENUM, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Itasc_update, 85196800, NULL, NULL,
	0, -1, NULL},
	Itasc_reiteration_method_get, Itasc_reiteration_method_set, NULL, NULL, NULL, NULL, rna_Itasc_reiteration_method_items, 3, 0
};

BoolPropertyRNA rna_Itasc_use_auto_step = {
	{(PropertyRNA *)&rna_Itasc_step_min, (PropertyRNA *)&rna_Itasc_reiteration_method,
	-1, "use_auto_step", 3, "Auto step",
	"Automatically determine the optimal number of steps for best performance/accuracy trade off",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Itasc_update, 85196800, NULL, NULL,
	0, -1, NULL},
	Itasc_use_auto_step_get, Itasc_use_auto_step_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

FloatPropertyRNA rna_Itasc_step_min = {
	{(PropertyRNA *)&rna_Itasc_step_max, (PropertyRNA *)&rna_Itasc_use_auto_step,
	-1, "step_min", 8195, "Min step",
	"Lower bound for timestep in second in case of automatic substeps",
	0, "*",
	PROP_FLOAT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Itasc_update, 85196800, NULL, NULL,
	offsetof(bItasc, minstep), 4, NULL},
	Itasc_step_min_get, Itasc_step_min_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 0.1000000015f, 0.0f, 0.1000000015f, 10.0f, 3, 0.0f, NULL
};

FloatPropertyRNA rna_Itasc_step_max = {
	{(PropertyRNA *)&rna_Itasc_feedback, (PropertyRNA *)&rna_Itasc_step_min,
	-1, "step_max", 8195, "Max step",
	"Higher bound for timestep in second in case of automatic substeps",
	0, "*",
	PROP_FLOAT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Itasc_update, 85196800, NULL, NULL,
	offsetof(bItasc, maxstep), 4, NULL},
	Itasc_step_max_get, Itasc_step_max_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 1.0f, 0.0f, 1.0f, 10.0f, 3, 0.0f, NULL
};

FloatPropertyRNA rna_Itasc_feedback = {
	{(PropertyRNA *)&rna_Itasc_velocity_max, (PropertyRNA *)&rna_Itasc_step_max,
	-1, "feedback", 8195, "Feedback",
	"Feedback coefficient for error correction, average response time is 1/feedback (default=20)",
	0, "*",
	PROP_FLOAT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Itasc_update, 85196800, NULL, NULL,
	offsetof(bItasc, feedback), 4, NULL},
	Itasc_feedback_get, Itasc_feedback_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 100.0f, 0.0f, 100.0f, 10.0f, 3, 0.0f, NULL
};

FloatPropertyRNA rna_Itasc_velocity_max = {
	{(PropertyRNA *)&rna_Itasc_solver, (PropertyRNA *)&rna_Itasc_feedback,
	-1, "velocity_max", 8195, "Max Velocity",
	"Maximum joint velocity in rad/s (default=50)",
	0, "*",
	PROP_FLOAT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Itasc_update, 85196800, NULL, NULL,
	offsetof(bItasc, maxvel), 4, NULL},
	Itasc_velocity_max_get, Itasc_velocity_max_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 100.0f, 0.0f, 100.0f, 10.0f, 3, 0.0f, NULL
};

static EnumPropertyItem rna_Itasc_solver_items[3] = {
	{0, "SDLS", 0, "SDLS", "Selective Damped Least Square"},
	{1, "DLS", 0, "DLS", "Damped Least Square with Numerical Filtering"},
	{0, NULL, 0, NULL, NULL}
};

EnumPropertyRNA rna_Itasc_solver = {
	{(PropertyRNA *)&rna_Itasc_damping_max, (PropertyRNA *)&rna_Itasc_velocity_max,
	-1, "solver", 3, "Solver",
	"Solving method selection: automatic damping or manual damping",
	0, "*",
	PROP_ENUM, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Itasc_update_rebuild, 85196800, NULL, NULL,
	0, -1, NULL},
	Itasc_solver_get, Itasc_solver_set, NULL, NULL, NULL, NULL, rna_Itasc_solver_items, 2, 0
};

FloatPropertyRNA rna_Itasc_damping_max = {
	{(PropertyRNA *)&rna_Itasc_damping_epsilon, (PropertyRNA *)&rna_Itasc_solver,
	-1, "damping_max", 8195, "Damp",
	"Maximum damping coefficient when singular value is nearly 0 (higher values=more stability, less reactivity - default=0.5)",
	0, "*",
	PROP_FLOAT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Itasc_update, 85196800, NULL, NULL,
	offsetof(bItasc, dampmax), 4, NULL},
	Itasc_damping_max_get, Itasc_damping_max_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 1.0f, 0.0f, 1.0f, 10.0f, 3, 0.0f, NULL
};

FloatPropertyRNA rna_Itasc_damping_epsilon = {
	{NULL, (PropertyRNA *)&rna_Itasc_damping_max,
	-1, "damping_epsilon", 8195, "Epsilon",
	"Singular value under which damping is progressively applied (higher values=more stability, less reactivity - default=0.1)",
	0, "*",
	PROP_FLOAT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Itasc_update, 85196800, NULL, NULL,
	offsetof(bItasc, dampeps), 4, NULL},
	Itasc_damping_epsilon_get, Itasc_damping_epsilon_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 1.0f, 0.0f, 1.0f, 10.0f, 3, 0.0f, NULL
};

StructRNA RNA_Itasc = {
	{(ContainerRNA *)&RNA_BoneGroup, (ContainerRNA *)&RNA_IKParam,
	NULL,
	{(PropertyRNA *)&rna_Itasc_precision, (PropertyRNA *)&rna_Itasc_damping_epsilon}},
	"Itasc", NULL, NULL, 4, "bItasc",
	"Parameters for the iTaSC IK solver",
	"*", 17,
	NULL, (PropertyRNA *)&rna_IKParam_rna_properties,
	&RNA_IKParam,
	NULL,
	rna_IKParam_refine,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	{NULL, NULL}
};

/* Bone Group */
CollectionPropertyRNA rna_BoneGroup_rna_properties = {
	{(PropertyRNA *)&rna_BoneGroup_rna_type, NULL,
	-1, "rna_properties", 128, "Properties",
	"RNA property collection",
	0, "*",
	PROP_COLLECTION, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	BoneGroup_rna_properties_begin, BoneGroup_rna_properties_next, BoneGroup_rna_properties_end, BoneGroup_rna_properties_get, NULL, NULL, BoneGroup_rna_properties_lookup_string, NULL, &RNA_Property
};

PointerPropertyRNA rna_BoneGroup_rna_type = {
	{(PropertyRNA *)&rna_BoneGroup_name, (PropertyRNA *)&rna_BoneGroup_rna_properties,
	-1, "rna_type", 8912896, "RNA",
	"RNA type definition",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	BoneGroup_rna_type_get, NULL, NULL, NULL,&RNA_Struct
};

StringPropertyRNA rna_BoneGroup_name = {
	{(PropertyRNA *)&rna_BoneGroup_color_set, (PropertyRNA *)&rna_BoneGroup_rna_type,
	-1, "name", 262145, "Name",
	"",
	0, "*",
	PROP_STRING, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {64, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	BoneGroup_name_get, BoneGroup_name_length, BoneGroup_name_set, NULL, NULL, NULL, 64, ""
};

static EnumPropertyItem rna_BoneGroup_color_set_items[23] = {
	{0, "DEFAULT", 0, "Default Colors", ""},
	{1, "THEME01", 0, "01 - Theme Color Set", ""},
	{2, "THEME02", 0, "02 - Theme Color Set", ""},
	{3, "THEME03", 0, "03 - Theme Color Set", ""},
	{4, "THEME04", 0, "04 - Theme Color Set", ""},
	{5, "THEME05", 0, "05 - Theme Color Set", ""},
	{6, "THEME06", 0, "06 - Theme Color Set", ""},
	{7, "THEME07", 0, "07 - Theme Color Set", ""},
	{8, "THEME08", 0, "08 - Theme Color Set", ""},
	{9, "THEME09", 0, "09 - Theme Color Set", ""},
	{10, "THEME10", 0, "10 - Theme Color Set", ""},
	{11, "THEME11", 0, "11 - Theme Color Set", ""},
	{12, "THEME12", 0, "12 - Theme Color Set", ""},
	{13, "THEME13", 0, "13 - Theme Color Set", ""},
	{14, "THEME14", 0, "14 - Theme Color Set", ""},
	{15, "THEME15", 0, "15 - Theme Color Set", ""},
	{16, "THEME16", 0, "16 - Theme Color Set", ""},
	{17, "THEME17", 0, "17 - Theme Color Set", ""},
	{18, "THEME18", 0, "18 - Theme Color Set", ""},
	{19, "THEME19", 0, "19 - Theme Color Set", ""},
	{20, "THEME20", 0, "20 - Theme Color Set", ""},
	{-1, "CUSTOM", 0, "Custom Color Set", ""},
	{0, NULL, 0, NULL, NULL}
};

EnumPropertyRNA rna_BoneGroup_color_set = {
	{(PropertyRNA *)&rna_BoneGroup_is_custom_color_set, (PropertyRNA *)&rna_BoneGroup_name,
	-1, "color_set", 3, "Color Set",
	"Custom color set to use",
	0, "*",
	PROP_ENUM, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Pose_update, 85196800, NULL, NULL,
	0, -1, NULL},
	BoneGroup_color_set_get, BoneGroup_color_set_set, NULL, NULL, NULL, NULL, rna_BoneGroup_color_set_items, 22, 0
};

BoolPropertyRNA rna_BoneGroup_is_custom_color_set = {
	{(PropertyRNA *)&rna_BoneGroup_colors, (PropertyRNA *)&rna_BoneGroup_color_set,
	-1, "is_custom_color_set", 2, "Custom Color Set",
	"Color set is user-defined instead of a fixed theme color set",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	BoneGroup_is_custom_color_set_get, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

PointerPropertyRNA rna_BoneGroup_colors = {
	{NULL, (PropertyRNA *)&rna_BoneGroup_is_custom_color_set,
	-1, "colors", 8650752, "Colors",
	"Copy of the colors associated with the group\'s color set",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Pose_update, 85196800, NULL, NULL,
	0, -1, NULL},
	BoneGroup_colors_get, NULL, NULL, NULL,&RNA_ThemeBoneColorSet
};

StructRNA RNA_BoneGroup = {
	{(ContainerRNA *)&RNA_GameProperty, (ContainerRNA *)&RNA_Itasc,
	NULL,
	{(PropertyRNA *)&rna_BoneGroup_rna_properties, (PropertyRNA *)&rna_BoneGroup_colors}},
	"BoneGroup", NULL, NULL, 4, "Bone Group",
	"Groups of Pose Channels (Bones)",
	"*", 200,
	(PropertyRNA *)&rna_BoneGroup_name, (PropertyRNA *)&rna_BoneGroup_rna_properties,
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

