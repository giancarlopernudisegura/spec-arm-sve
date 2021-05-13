
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

#include "rna_render.c"

#pragma GCC diagnostic ignored "-Wunused-parameter"

/* Autogenerated Functions */


CollectionPropertyRNA rna_RenderEngine_rna_properties;
PointerPropertyRNA rna_RenderEngine_rna_type;
BoolPropertyRNA rna_RenderEngine_is_animation;
BoolPropertyRNA rna_RenderEngine_is_preview;
PointerPropertyRNA rna_RenderEngine_camera_override;
BoolPropertyRNA rna_RenderEngine_layer_override;
IntPropertyRNA rna_RenderEngine_tile_x;
IntPropertyRNA rna_RenderEngine_tile_y;
IntPropertyRNA rna_RenderEngine_resolution_x;
IntPropertyRNA rna_RenderEngine_resolution_y;
PointerPropertyRNA rna_RenderEngine_render;
BoolPropertyRNA rna_RenderEngine_use_highlight_tiles;
StringPropertyRNA rna_RenderEngine_bl_idname;
StringPropertyRNA rna_RenderEngine_bl_label;
BoolPropertyRNA rna_RenderEngine_bl_use_preview;
BoolPropertyRNA rna_RenderEngine_bl_use_texture_preview;
BoolPropertyRNA rna_RenderEngine_bl_use_postprocess;
BoolPropertyRNA rna_RenderEngine_bl_use_shading_nodes;
BoolPropertyRNA rna_RenderEngine_bl_use_exclude_layers;
BoolPropertyRNA rna_RenderEngine_bl_use_save_buffers;

extern FunctionRNA rna_RenderEngine_update_func;
extern PointerPropertyRNA rna_RenderEngine_update_data;
extern PointerPropertyRNA rna_RenderEngine_update_scene;

extern FunctionRNA rna_RenderEngine_render_func;
extern PointerPropertyRNA rna_RenderEngine_render_scene;

extern FunctionRNA rna_RenderEngine_bake_func;
extern PointerPropertyRNA rna_RenderEngine_bake_scene;
extern PointerPropertyRNA rna_RenderEngine_bake_object;
extern EnumPropertyRNA rna_RenderEngine_bake_pass_type;
extern PointerPropertyRNA rna_RenderEngine_bake_pixel_array;
extern IntPropertyRNA rna_RenderEngine_bake_num_pixels;
extern IntPropertyRNA rna_RenderEngine_bake_depth;
extern PointerPropertyRNA rna_RenderEngine_bake_result;

extern FunctionRNA rna_RenderEngine_view_update_func;
extern PointerPropertyRNA rna_RenderEngine_view_update_context;

extern FunctionRNA rna_RenderEngine_view_draw_func;
extern PointerPropertyRNA rna_RenderEngine_view_draw_context;

extern FunctionRNA rna_RenderEngine_update_script_node_func;
extern PointerPropertyRNA rna_RenderEngine_update_script_node_node;

extern FunctionRNA rna_RenderEngine_tag_redraw_func;
extern FunctionRNA rna_RenderEngine_tag_update_func;
extern FunctionRNA rna_RenderEngine_begin_result_func;
extern IntPropertyRNA rna_RenderEngine_begin_result_x;
extern IntPropertyRNA rna_RenderEngine_begin_result_y;
extern IntPropertyRNA rna_RenderEngine_begin_result_w;
extern IntPropertyRNA rna_RenderEngine_begin_result_h;
extern StringPropertyRNA rna_RenderEngine_begin_result_layer;
extern PointerPropertyRNA rna_RenderEngine_begin_result_result;

extern FunctionRNA rna_RenderEngine_update_result_func;
extern PointerPropertyRNA rna_RenderEngine_update_result_result;

extern FunctionRNA rna_RenderEngine_end_result_func;
extern PointerPropertyRNA rna_RenderEngine_end_result_result;
extern BoolPropertyRNA rna_RenderEngine_end_result_cancel;
extern BoolPropertyRNA rna_RenderEngine_end_result_do_merge_results;

extern FunctionRNA rna_RenderEngine_test_break_func;
extern BoolPropertyRNA rna_RenderEngine_test_break_do_break;

extern FunctionRNA rna_RenderEngine_update_stats_func;
extern StringPropertyRNA rna_RenderEngine_update_stats_stats;
extern StringPropertyRNA rna_RenderEngine_update_stats_info;

extern FunctionRNA rna_RenderEngine_frame_set_func;
extern IntPropertyRNA rna_RenderEngine_frame_set_frame;
extern FloatPropertyRNA rna_RenderEngine_frame_set_subframe;

extern FunctionRNA rna_RenderEngine_update_progress_func;
extern FloatPropertyRNA rna_RenderEngine_update_progress_progress;

extern FunctionRNA rna_RenderEngine_update_memory_stats_func;
extern FloatPropertyRNA rna_RenderEngine_update_memory_stats_memory_used;
extern FloatPropertyRNA rna_RenderEngine_update_memory_stats_memory_peak;

extern FunctionRNA rna_RenderEngine_report_func;
extern EnumPropertyRNA rna_RenderEngine_report_type;
extern StringPropertyRNA rna_RenderEngine_report_message;

extern FunctionRNA rna_RenderEngine_bind_display_space_shader_func;
extern PointerPropertyRNA rna_RenderEngine_bind_display_space_shader_scene;

extern FunctionRNA rna_RenderEngine_unbind_display_space_shader_func;
extern FunctionRNA rna_RenderEngine_support_display_space_shader_func;
extern PointerPropertyRNA rna_RenderEngine_support_display_space_shader_scene;
extern BoolPropertyRNA rna_RenderEngine_support_display_space_shader_supported;



CollectionPropertyRNA rna_RenderResult_rna_properties;
PointerPropertyRNA rna_RenderResult_rna_type;
IntPropertyRNA rna_RenderResult_resolution_x;
IntPropertyRNA rna_RenderResult_resolution_y;
CollectionPropertyRNA rna_RenderResult_layers;

extern FunctionRNA rna_RenderResult_load_from_file_func;
extern StringPropertyRNA rna_RenderResult_load_from_file_filename;



CollectionPropertyRNA rna_RenderLayer_rna_properties;
PointerPropertyRNA rna_RenderLayer_rna_type;
StringPropertyRNA rna_RenderLayer_name;
PointerPropertyRNA rna_RenderLayer_material_override;
PointerPropertyRNA rna_RenderLayer_light_override;
BoolPropertyRNA rna_RenderLayer_layers;
BoolPropertyRNA rna_RenderLayer_layers_zmask;
BoolPropertyRNA rna_RenderLayer_layers_exclude;
BoolPropertyRNA rna_RenderLayer_use;
BoolPropertyRNA rna_RenderLayer_use_zmask;
BoolPropertyRNA rna_RenderLayer_invert_zmask;
BoolPropertyRNA rna_RenderLayer_use_all_z;
BoolPropertyRNA rna_RenderLayer_use_solid;
BoolPropertyRNA rna_RenderLayer_use_halo;
BoolPropertyRNA rna_RenderLayer_use_ztransp;
BoolPropertyRNA rna_RenderLayer_use_sky;
BoolPropertyRNA rna_RenderLayer_use_edge_enhance;
BoolPropertyRNA rna_RenderLayer_use_strand;
BoolPropertyRNA rna_RenderLayer_use_freestyle;
BoolPropertyRNA rna_RenderLayer_use_pass_combined;
BoolPropertyRNA rna_RenderLayer_use_pass_z;
BoolPropertyRNA rna_RenderLayer_use_pass_vector;
BoolPropertyRNA rna_RenderLayer_use_pass_normal;
BoolPropertyRNA rna_RenderLayer_use_pass_uv;
BoolPropertyRNA rna_RenderLayer_use_pass_mist;
BoolPropertyRNA rna_RenderLayer_use_pass_object_index;
BoolPropertyRNA rna_RenderLayer_use_pass_material_index;
BoolPropertyRNA rna_RenderLayer_use_pass_color;
BoolPropertyRNA rna_RenderLayer_use_pass_diffuse;
BoolPropertyRNA rna_RenderLayer_use_pass_specular;
BoolPropertyRNA rna_RenderLayer_use_pass_shadow;
BoolPropertyRNA rna_RenderLayer_use_pass_ambient_occlusion;
BoolPropertyRNA rna_RenderLayer_use_pass_reflection;
BoolPropertyRNA rna_RenderLayer_use_pass_refraction;
BoolPropertyRNA rna_RenderLayer_use_pass_emit;
BoolPropertyRNA rna_RenderLayer_use_pass_environment;
BoolPropertyRNA rna_RenderLayer_use_pass_indirect;
BoolPropertyRNA rna_RenderLayer_exclude_specular;
BoolPropertyRNA rna_RenderLayer_exclude_shadow;
BoolPropertyRNA rna_RenderLayer_exclude_ambient_occlusion;
BoolPropertyRNA rna_RenderLayer_exclude_reflection;
BoolPropertyRNA rna_RenderLayer_exclude_refraction;
BoolPropertyRNA rna_RenderLayer_exclude_emit;
BoolPropertyRNA rna_RenderLayer_exclude_environment;
BoolPropertyRNA rna_RenderLayer_exclude_indirect;
BoolPropertyRNA rna_RenderLayer_use_pass_diffuse_direct;
BoolPropertyRNA rna_RenderLayer_use_pass_diffuse_indirect;
BoolPropertyRNA rna_RenderLayer_use_pass_diffuse_color;
BoolPropertyRNA rna_RenderLayer_use_pass_glossy_direct;
BoolPropertyRNA rna_RenderLayer_use_pass_glossy_indirect;
BoolPropertyRNA rna_RenderLayer_use_pass_glossy_color;
BoolPropertyRNA rna_RenderLayer_use_pass_transmission_direct;
BoolPropertyRNA rna_RenderLayer_use_pass_transmission_indirect;
BoolPropertyRNA rna_RenderLayer_use_pass_transmission_color;
BoolPropertyRNA rna_RenderLayer_use_pass_subsurface_direct;
BoolPropertyRNA rna_RenderLayer_use_pass_subsurface_indirect;
BoolPropertyRNA rna_RenderLayer_use_pass_subsurface_color;
CollectionPropertyRNA rna_RenderLayer_passes;
FloatPropertyRNA rna_RenderLayer_rect;

extern FunctionRNA rna_RenderLayer_load_from_file_func;
extern StringPropertyRNA rna_RenderLayer_load_from_file_filename;
extern IntPropertyRNA rna_RenderLayer_load_from_file_x;
extern IntPropertyRNA rna_RenderLayer_load_from_file_y;



CollectionPropertyRNA rna_RenderPass_rna_properties;
PointerPropertyRNA rna_RenderPass_rna_type;
StringPropertyRNA rna_RenderPass_name;
StringPropertyRNA rna_RenderPass_channel_id;
IntPropertyRNA rna_RenderPass_channels;
EnumPropertyRNA rna_RenderPass_type;
FloatPropertyRNA rna_RenderPass_rect;
EnumPropertyRNA rna_RenderPass_debug_type;


CollectionPropertyRNA rna_BakePixel_rna_properties;
PointerPropertyRNA rna_BakePixel_rna_type;
IntPropertyRNA rna_BakePixel_primitive_id;
FloatPropertyRNA rna_BakePixel_uv;
FloatPropertyRNA rna_BakePixel_du_dx;
FloatPropertyRNA rna_BakePixel_du_dy;
FloatPropertyRNA rna_BakePixel_dv_dx;
FloatPropertyRNA rna_BakePixel_dv_dy;
PointerPropertyRNA rna_BakePixel_next;

static PointerRNA RenderEngine_rna_properties_get(CollectionPropertyIterator *iter)
{
	return rna_builtin_properties_get(iter);
}

void RenderEngine_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

	memset(iter, 0, sizeof(*iter));
	iter->parent = *ptr;
	iter->prop = (PropertyRNA *)&rna_RenderEngine_rna_properties;

	rna_builtin_properties_begin(iter, ptr);

	if (iter->valid)
		iter->ptr = RenderEngine_rna_properties_get(iter);
}

void RenderEngine_rna_properties_next(CollectionPropertyIterator *iter)
{
	rna_builtin_properties_next(iter);

	if (iter->valid)
		iter->ptr = RenderEngine_rna_properties_get(iter);
}

void RenderEngine_rna_properties_end(CollectionPropertyIterator *iter)
{
	rna_iterator_listbase_end(iter);
}

int RenderEngine_rna_properties_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
	return rna_builtin_properties_lookup_string(ptr, key, r_ptr);
}

PointerRNA RenderEngine_rna_type_get(PointerRNA *ptr)
{
	return rna_builtin_type_get(ptr);
}

int RenderEngine_is_animation_get(PointerRNA *ptr)
{
	RenderEngine *data = (RenderEngine *)(ptr->data);
	return (((data->flag) & 1) != 0);
}

void RenderEngine_is_animation_set(PointerRNA *ptr, int value)
{
	RenderEngine *data = (RenderEngine *)(ptr->data);
	if (value) data->flag |= 1;
	else data->flag &= ~1;
}

int RenderEngine_is_preview_get(PointerRNA *ptr)
{
	RenderEngine *data = (RenderEngine *)(ptr->data);
	return (((data->flag) & 2) != 0);
}

void RenderEngine_is_preview_set(PointerRNA *ptr, int value)
{
	RenderEngine *data = (RenderEngine *)(ptr->data);
	if (value) data->flag |= 2;
	else data->flag &= ~2;
}

PointerRNA RenderEngine_camera_override_get(PointerRNA *ptr)
{
	RenderEngine *data = (RenderEngine *)(ptr->data);
	return rna_pointer_inherit_refine(ptr, &RNA_Object, data->camera_override);
}

void RenderEngine_layer_override_get(PointerRNA *ptr, int values[20])
{
	RenderEngine *data = (RenderEngine *)(ptr->data);
	unsigned int i;

	for (i = 0; i < 20; i++) {
		values[i] = ((data->layer_override & (1u << i)) != 0);
	}
}

void RenderEngine_layer_override_set(PointerRNA *ptr, const int values[20])
{
	RenderEngine *data = (RenderEngine *)(ptr->data);
	unsigned int i;

	for (i = 0; i < 20; i++) {
		if (values[i]) data->layer_override |= (1<<i);
		else data->layer_override &= ~(1u << i);
	}
}

int RenderEngine_tile_x_get(PointerRNA *ptr)
{
	RenderEngine *data = (RenderEngine *)(ptr->data);
	return (int)(data->tile_x);
}

void RenderEngine_tile_x_set(PointerRNA *ptr, int value)
{
	RenderEngine *data = (RenderEngine *)(ptr->data);
	data->tile_x = CLAMPIS(value, 0, INT_MAX);
}

int RenderEngine_tile_y_get(PointerRNA *ptr)
{
	RenderEngine *data = (RenderEngine *)(ptr->data);
	return (int)(data->tile_y);
}

void RenderEngine_tile_y_set(PointerRNA *ptr, int value)
{
	RenderEngine *data = (RenderEngine *)(ptr->data);
	data->tile_y = CLAMPIS(value, 0, INT_MAX);
}

int RenderEngine_resolution_x_get(PointerRNA *ptr)
{
	RenderEngine *data = (RenderEngine *)(ptr->data);
	return (int)(data->resolution_x);
}

int RenderEngine_resolution_y_get(PointerRNA *ptr)
{
	RenderEngine *data = (RenderEngine *)(ptr->data);
	return (int)(data->resolution_y);
}

PointerRNA RenderEngine_render_get(PointerRNA *ptr)
{
	return rna_RenderEngine_render_get(ptr);
}

int RenderEngine_use_highlight_tiles_get(PointerRNA *ptr)
{
	RenderEngine *data = (RenderEngine *)(ptr->data);
	return (((data->flag) & 32) != 0);
}

void RenderEngine_use_highlight_tiles_set(PointerRNA *ptr, int value)
{
	RenderEngine *data = (RenderEngine *)(ptr->data);
	if (value) data->flag |= 32;
	else data->flag &= ~32;
}

void RenderEngine_bl_idname_get(PointerRNA *ptr, char *value)
{
	RenderEngine *data = (RenderEngine *)(ptr->data);
	BLI_strncpy_utf8(value, data->type->idname, sizeof(data->type->idname));
}

int RenderEngine_bl_idname_length(PointerRNA *ptr)
{
	RenderEngine *data = (RenderEngine *)(ptr->data);
	return strlen(data->type->idname);
}

void RenderEngine_bl_idname_set(PointerRNA *ptr, const char *value)
{
	RenderEngine *data = (RenderEngine *)(ptr->data);
	BLI_strncpy_utf8(data->type->idname, value, sizeof(data->type->idname));
}

void RenderEngine_bl_label_get(PointerRNA *ptr, char *value)
{
	RenderEngine *data = (RenderEngine *)(ptr->data);
	BLI_strncpy_utf8(value, data->type->name, sizeof(data->type->name));
}

int RenderEngine_bl_label_length(PointerRNA *ptr)
{
	RenderEngine *data = (RenderEngine *)(ptr->data);
	return strlen(data->type->name);
}

void RenderEngine_bl_label_set(PointerRNA *ptr, const char *value)
{
	RenderEngine *data = (RenderEngine *)(ptr->data);
	BLI_strncpy_utf8(data->type->name, value, sizeof(data->type->name));
}

int RenderEngine_bl_use_preview_get(PointerRNA *ptr)
{
	RenderEngine *data = (RenderEngine *)(ptr->data);
	return (((data->type->flag) & 4) != 0);
}

void RenderEngine_bl_use_preview_set(PointerRNA *ptr, int value)
{
	RenderEngine *data = (RenderEngine *)(ptr->data);
	if (value) data->type->flag |= 4;
	else data->type->flag &= ~4;
}

int RenderEngine_bl_use_texture_preview_get(PointerRNA *ptr)
{
	RenderEngine *data = (RenderEngine *)(ptr->data);
	return (((data->type->flag) & 128) != 0);
}

void RenderEngine_bl_use_texture_preview_set(PointerRNA *ptr, int value)
{
	RenderEngine *data = (RenderEngine *)(ptr->data);
	if (value) data->type->flag |= 128;
	else data->type->flag &= ~128;
}

int RenderEngine_bl_use_postprocess_get(PointerRNA *ptr)
{
	RenderEngine *data = (RenderEngine *)(ptr->data);
	return !(((data->type->flag) & 8) != 0);
}

void RenderEngine_bl_use_postprocess_set(PointerRNA *ptr, int value)
{
	RenderEngine *data = (RenderEngine *)(ptr->data);
	if (!value) data->type->flag |= 8;
	else data->type->flag &= ~8;
}

int RenderEngine_bl_use_shading_nodes_get(PointerRNA *ptr)
{
	RenderEngine *data = (RenderEngine *)(ptr->data);
	return (((data->type->flag) & 16) != 0);
}

void RenderEngine_bl_use_shading_nodes_set(PointerRNA *ptr, int value)
{
	RenderEngine *data = (RenderEngine *)(ptr->data);
	if (value) data->type->flag |= 16;
	else data->type->flag &= ~16;
}

int RenderEngine_bl_use_exclude_layers_get(PointerRNA *ptr)
{
	RenderEngine *data = (RenderEngine *)(ptr->data);
	return (((data->type->flag) & 32) != 0);
}

void RenderEngine_bl_use_exclude_layers_set(PointerRNA *ptr, int value)
{
	RenderEngine *data = (RenderEngine *)(ptr->data);
	if (value) data->type->flag |= 32;
	else data->type->flag &= ~32;
}

int RenderEngine_bl_use_save_buffers_get(PointerRNA *ptr)
{
	RenderEngine *data = (RenderEngine *)(ptr->data);
	return (((data->type->flag) & 64) != 0);
}

void RenderEngine_bl_use_save_buffers_set(PointerRNA *ptr, int value)
{
	RenderEngine *data = (RenderEngine *)(ptr->data);
	if (value) data->type->flag |= 64;
	else data->type->flag &= ~64;
}

static PointerRNA RenderResult_rna_properties_get(CollectionPropertyIterator *iter)
{
	return rna_builtin_properties_get(iter);
}

void RenderResult_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

	memset(iter, 0, sizeof(*iter));
	iter->parent = *ptr;
	iter->prop = (PropertyRNA *)&rna_RenderResult_rna_properties;

	rna_builtin_properties_begin(iter, ptr);

	if (iter->valid)
		iter->ptr = RenderResult_rna_properties_get(iter);
}

void RenderResult_rna_properties_next(CollectionPropertyIterator *iter)
{
	rna_builtin_properties_next(iter);

	if (iter->valid)
		iter->ptr = RenderResult_rna_properties_get(iter);
}

void RenderResult_rna_properties_end(CollectionPropertyIterator *iter)
{
	rna_iterator_listbase_end(iter);
}

int RenderResult_rna_properties_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
	return rna_builtin_properties_lookup_string(ptr, key, r_ptr);
}

PointerRNA RenderResult_rna_type_get(PointerRNA *ptr)
{
	return rna_builtin_type_get(ptr);
}

int RenderResult_resolution_x_get(PointerRNA *ptr)
{
	RenderResult *data = (RenderResult *)(ptr->data);
	return (int)(data->rectx);
}

int RenderResult_resolution_y_get(PointerRNA *ptr)
{
	RenderResult *data = (RenderResult *)(ptr->data);
	return (int)(data->recty);
}

static PointerRNA RenderResult_layers_get(CollectionPropertyIterator *iter)
{
	return rna_pointer_inherit_refine(&iter->parent, &RNA_RenderLayer, rna_iterator_listbase_get(iter));
}

void RenderResult_layers_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

	memset(iter, 0, sizeof(*iter));
	iter->parent = *ptr;
	iter->prop = (PropertyRNA *)&rna_RenderResult_layers;

	rna_RenderResult_layers_begin(iter, ptr);

	if (iter->valid)
		iter->ptr = RenderResult_layers_get(iter);
}

void RenderResult_layers_next(CollectionPropertyIterator *iter)
{
	rna_iterator_listbase_next(iter);

	if (iter->valid)
		iter->ptr = RenderResult_layers_get(iter);
}

void RenderResult_layers_end(CollectionPropertyIterator *iter)
{
	rna_iterator_listbase_end(iter);
}

static PointerRNA RenderLayer_rna_properties_get(CollectionPropertyIterator *iter)
{
	return rna_builtin_properties_get(iter);
}

void RenderLayer_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

	memset(iter, 0, sizeof(*iter));
	iter->parent = *ptr;
	iter->prop = (PropertyRNA *)&rna_RenderLayer_rna_properties;

	rna_builtin_properties_begin(iter, ptr);

	if (iter->valid)
		iter->ptr = RenderLayer_rna_properties_get(iter);
}

void RenderLayer_rna_properties_next(CollectionPropertyIterator *iter)
{
	rna_builtin_properties_next(iter);

	if (iter->valid)
		iter->ptr = RenderLayer_rna_properties_get(iter);
}

void RenderLayer_rna_properties_end(CollectionPropertyIterator *iter)
{
	rna_iterator_listbase_end(iter);
}

int RenderLayer_rna_properties_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
	return rna_builtin_properties_lookup_string(ptr, key, r_ptr);
}

PointerRNA RenderLayer_rna_type_get(PointerRNA *ptr)
{
	return rna_builtin_type_get(ptr);
}

void RenderLayer_name_get(PointerRNA *ptr, char *value)
{
	RenderLayer *data = (RenderLayer *)(ptr->data);
	BLI_strncpy_utf8(value, data->name, sizeof(data->name));
}

int RenderLayer_name_length(PointerRNA *ptr)
{
	RenderLayer *data = (RenderLayer *)(ptr->data);
	return strlen(data->name);
}

PointerRNA RenderLayer_material_override_get(PointerRNA *ptr)
{
	RenderLayer *data = (RenderLayer *)(ptr->data);
	return rna_pointer_inherit_refine(ptr, &RNA_Material, data->mat_override);
}

PointerRNA RenderLayer_light_override_get(PointerRNA *ptr)
{
	RenderLayer *data = (RenderLayer *)(ptr->data);
	return rna_pointer_inherit_refine(ptr, &RNA_Group, data->light_override);
}

void RenderLayer_layers_get(PointerRNA *ptr, int values[20])
{
	RenderLayer *data = (RenderLayer *)(ptr->data);
	unsigned int i;

	for (i = 0; i < 20; i++) {
		values[i] = ((data->lay & (1u << i)) != 0);
	}
}

void RenderLayer_layers_zmask_get(PointerRNA *ptr, int values[20])
{
	RenderLayer *data = (RenderLayer *)(ptr->data);
	unsigned int i;

	for (i = 0; i < 20; i++) {
		values[i] = ((data->lay_zmask & (1u << i)) != 0);
	}
}

void RenderLayer_layers_exclude_get(PointerRNA *ptr, int values[20])
{
	RenderLayer *data = (RenderLayer *)(ptr->data);
	unsigned int i;

	for (i = 0; i < 20; i++) {
		values[i] = ((data->lay_exclude & (1u << i)) != 0);
	}
}

int RenderLayer_use_get(PointerRNA *ptr)
{
	RenderLayer *data = (RenderLayer *)(ptr->data);
	return !(((data->layflag) & 131072) != 0);
}

int RenderLayer_use_zmask_get(PointerRNA *ptr)
{
	RenderLayer *data = (RenderLayer *)(ptr->data);
	return (((data->layflag) & 262144) != 0);
}

int RenderLayer_invert_zmask_get(PointerRNA *ptr)
{
	RenderLayer *data = (RenderLayer *)(ptr->data);
	return (((data->layflag) & 524288) != 0);
}

int RenderLayer_use_all_z_get(PointerRNA *ptr)
{
	RenderLayer *data = (RenderLayer *)(ptr->data);
	return (((data->layflag) & 32768) != 0);
}

int RenderLayer_use_solid_get(PointerRNA *ptr)
{
	RenderLayer *data = (RenderLayer *)(ptr->data);
	return (((data->layflag) & 1) != 0);
}

int RenderLayer_use_halo_get(PointerRNA *ptr)
{
	RenderLayer *data = (RenderLayer *)(ptr->data);
	return (((data->layflag) & 4) != 0);
}

int RenderLayer_use_ztransp_get(PointerRNA *ptr)
{
	RenderLayer *data = (RenderLayer *)(ptr->data);
	return (((data->layflag) & 2) != 0);
}

int RenderLayer_use_sky_get(PointerRNA *ptr)
{
	RenderLayer *data = (RenderLayer *)(ptr->data);
	return (((data->layflag) & 16) != 0);
}

int RenderLayer_use_edge_enhance_get(PointerRNA *ptr)
{
	RenderLayer *data = (RenderLayer *)(ptr->data);
	return (((data->layflag) & 8) != 0);
}

int RenderLayer_use_strand_get(PointerRNA *ptr)
{
	RenderLayer *data = (RenderLayer *)(ptr->data);
	return (((data->layflag) & 32) != 0);
}

int RenderLayer_use_freestyle_get(PointerRNA *ptr)
{
	RenderLayer *data = (RenderLayer *)(ptr->data);
	return (((data->layflag) & 64) != 0);
}

int RenderLayer_use_pass_combined_get(PointerRNA *ptr)
{
	RenderLayer *data = (RenderLayer *)(ptr->data);
	return (((data->passflag) & 1) != 0);
}

int RenderLayer_use_pass_z_get(PointerRNA *ptr)
{
	RenderLayer *data = (RenderLayer *)(ptr->data);
	return (((data->passflag) & 2) != 0);
}

int RenderLayer_use_pass_vector_get(PointerRNA *ptr)
{
	RenderLayer *data = (RenderLayer *)(ptr->data);
	return (((data->passflag) & 512) != 0);
}

int RenderLayer_use_pass_normal_get(PointerRNA *ptr)
{
	RenderLayer *data = (RenderLayer *)(ptr->data);
	return (((data->passflag) & 256) != 0);
}

int RenderLayer_use_pass_uv_get(PointerRNA *ptr)
{
	RenderLayer *data = (RenderLayer *)(ptr->data);
	return (((data->passflag) & 4096) != 0);
}

int RenderLayer_use_pass_mist_get(PointerRNA *ptr)
{
	RenderLayer *data = (RenderLayer *)(ptr->data);
	return (((data->passflag) & 16384) != 0);
}

int RenderLayer_use_pass_object_index_get(PointerRNA *ptr)
{
	RenderLayer *data = (RenderLayer *)(ptr->data);
	return (((data->passflag) & 2048) != 0);
}

int RenderLayer_use_pass_material_index_get(PointerRNA *ptr)
{
	RenderLayer *data = (RenderLayer *)(ptr->data);
	return (((data->passflag) & 262144) != 0);
}

int RenderLayer_use_pass_color_get(PointerRNA *ptr)
{
	RenderLayer *data = (RenderLayer *)(ptr->data);
	return (((data->passflag) & 4) != 0);
}

int RenderLayer_use_pass_diffuse_get(PointerRNA *ptr)
{
	RenderLayer *data = (RenderLayer *)(ptr->data);
	return (((data->passflag) & 8) != 0);
}

int RenderLayer_use_pass_specular_get(PointerRNA *ptr)
{
	RenderLayer *data = (RenderLayer *)(ptr->data);
	return (((data->passflag) & 16) != 0);
}

int RenderLayer_use_pass_shadow_get(PointerRNA *ptr)
{
	RenderLayer *data = (RenderLayer *)(ptr->data);
	return (((data->passflag) & 32) != 0);
}

int RenderLayer_use_pass_ambient_occlusion_get(PointerRNA *ptr)
{
	RenderLayer *data = (RenderLayer *)(ptr->data);
	return (((data->passflag) & 64) != 0);
}

int RenderLayer_use_pass_reflection_get(PointerRNA *ptr)
{
	RenderLayer *data = (RenderLayer *)(ptr->data);
	return (((data->passflag) & 128) != 0);
}

int RenderLayer_use_pass_refraction_get(PointerRNA *ptr)
{
	RenderLayer *data = (RenderLayer *)(ptr->data);
	return (((data->passflag) & 1024) != 0);
}

int RenderLayer_use_pass_emit_get(PointerRNA *ptr)
{
	RenderLayer *data = (RenderLayer *)(ptr->data);
	return (((data->passflag) & 65536) != 0);
}

int RenderLayer_use_pass_environment_get(PointerRNA *ptr)
{
	RenderLayer *data = (RenderLayer *)(ptr->data);
	return (((data->passflag) & 131072) != 0);
}

int RenderLayer_use_pass_indirect_get(PointerRNA *ptr)
{
	RenderLayer *data = (RenderLayer *)(ptr->data);
	return (((data->passflag) & 8192) != 0);
}

int RenderLayer_exclude_specular_get(PointerRNA *ptr)
{
	RenderLayer *data = (RenderLayer *)(ptr->data);
	return (((data->pass_xor) & 16) != 0);
}

int RenderLayer_exclude_shadow_get(PointerRNA *ptr)
{
	RenderLayer *data = (RenderLayer *)(ptr->data);
	return (((data->pass_xor) & 32) != 0);
}

int RenderLayer_exclude_ambient_occlusion_get(PointerRNA *ptr)
{
	RenderLayer *data = (RenderLayer *)(ptr->data);
	return (((data->pass_xor) & 64) != 0);
}

int RenderLayer_exclude_reflection_get(PointerRNA *ptr)
{
	RenderLayer *data = (RenderLayer *)(ptr->data);
	return (((data->pass_xor) & 128) != 0);
}

int RenderLayer_exclude_refraction_get(PointerRNA *ptr)
{
	RenderLayer *data = (RenderLayer *)(ptr->data);
	return (((data->pass_xor) & 1024) != 0);
}

int RenderLayer_exclude_emit_get(PointerRNA *ptr)
{
	RenderLayer *data = (RenderLayer *)(ptr->data);
	return (((data->pass_xor) & 65536) != 0);
}

int RenderLayer_exclude_environment_get(PointerRNA *ptr)
{
	RenderLayer *data = (RenderLayer *)(ptr->data);
	return (((data->pass_xor) & 131072) != 0);
}

int RenderLayer_exclude_indirect_get(PointerRNA *ptr)
{
	RenderLayer *data = (RenderLayer *)(ptr->data);
	return (((data->pass_xor) & 8192) != 0);
}

int RenderLayer_use_pass_diffuse_direct_get(PointerRNA *ptr)
{
	RenderLayer *data = (RenderLayer *)(ptr->data);
	return (((data->passflag) & 524288) != 0);
}

int RenderLayer_use_pass_diffuse_indirect_get(PointerRNA *ptr)
{
	RenderLayer *data = (RenderLayer *)(ptr->data);
	return (((data->passflag) & 1048576) != 0);
}

int RenderLayer_use_pass_diffuse_color_get(PointerRNA *ptr)
{
	RenderLayer *data = (RenderLayer *)(ptr->data);
	return (((data->passflag) & 2097152) != 0);
}

int RenderLayer_use_pass_glossy_direct_get(PointerRNA *ptr)
{
	RenderLayer *data = (RenderLayer *)(ptr->data);
	return (((data->passflag) & 4194304) != 0);
}

int RenderLayer_use_pass_glossy_indirect_get(PointerRNA *ptr)
{
	RenderLayer *data = (RenderLayer *)(ptr->data);
	return (((data->passflag) & 8388608) != 0);
}

int RenderLayer_use_pass_glossy_color_get(PointerRNA *ptr)
{
	RenderLayer *data = (RenderLayer *)(ptr->data);
	return (((data->passflag) & 16777216) != 0);
}

int RenderLayer_use_pass_transmission_direct_get(PointerRNA *ptr)
{
	RenderLayer *data = (RenderLayer *)(ptr->data);
	return (((data->passflag) & 33554432) != 0);
}

int RenderLayer_use_pass_transmission_indirect_get(PointerRNA *ptr)
{
	RenderLayer *data = (RenderLayer *)(ptr->data);
	return (((data->passflag) & 67108864) != 0);
}

int RenderLayer_use_pass_transmission_color_get(PointerRNA *ptr)
{
	RenderLayer *data = (RenderLayer *)(ptr->data);
	return (((data->passflag) & 134217728) != 0);
}

int RenderLayer_use_pass_subsurface_direct_get(PointerRNA *ptr)
{
	RenderLayer *data = (RenderLayer *)(ptr->data);
	return (((data->passflag) & 268435456) != 0);
}

int RenderLayer_use_pass_subsurface_indirect_get(PointerRNA *ptr)
{
	RenderLayer *data = (RenderLayer *)(ptr->data);
	return (((data->passflag) & 536870912) != 0);
}

int RenderLayer_use_pass_subsurface_color_get(PointerRNA *ptr)
{
	RenderLayer *data = (RenderLayer *)(ptr->data);
	return (((data->passflag) & 1073741824) != 0);
}

static PointerRNA RenderLayer_passes_get(CollectionPropertyIterator *iter)
{
	return rna_pointer_inherit_refine(&iter->parent, &RNA_RenderPass, rna_iterator_listbase_get(iter));
}

void RenderLayer_passes_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

	memset(iter, 0, sizeof(*iter));
	iter->parent = *ptr;
	iter->prop = (PropertyRNA *)&rna_RenderLayer_passes;

	rna_RenderLayer_passes_begin(iter, ptr);

	if (iter->valid)
		iter->ptr = RenderLayer_passes_get(iter);
}

void RenderLayer_passes_next(CollectionPropertyIterator *iter)
{
	rna_iterator_listbase_next(iter);

	if (iter->valid)
		iter->ptr = RenderLayer_passes_get(iter);
}

void RenderLayer_passes_end(CollectionPropertyIterator *iter)
{
	rna_iterator_listbase_end(iter);
}

void RenderLayer_rect_get(PointerRNA *ptr, float values[])
{
	rna_RenderLayer_rect_get(ptr, values);
}

void RenderLayer_rect_set(PointerRNA *ptr, const float values[])
{
	rna_RenderLayer_rect_set(ptr, values);
}

static PointerRNA RenderPass_rna_properties_get(CollectionPropertyIterator *iter)
{
	return rna_builtin_properties_get(iter);
}

void RenderPass_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

	memset(iter, 0, sizeof(*iter));
	iter->parent = *ptr;
	iter->prop = (PropertyRNA *)&rna_RenderPass_rna_properties;

	rna_builtin_properties_begin(iter, ptr);

	if (iter->valid)
		iter->ptr = RenderPass_rna_properties_get(iter);
}

void RenderPass_rna_properties_next(CollectionPropertyIterator *iter)
{
	rna_builtin_properties_next(iter);

	if (iter->valid)
		iter->ptr = RenderPass_rna_properties_get(iter);
}

void RenderPass_rna_properties_end(CollectionPropertyIterator *iter)
{
	rna_iterator_listbase_end(iter);
}

int RenderPass_rna_properties_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
	return rna_builtin_properties_lookup_string(ptr, key, r_ptr);
}

PointerRNA RenderPass_rna_type_get(PointerRNA *ptr)
{
	return rna_builtin_type_get(ptr);
}

void RenderPass_name_get(PointerRNA *ptr, char *value)
{
	RenderPass *data = (RenderPass *)(ptr->data);
	BLI_strncpy_utf8(value, data->name, sizeof(data->name));
}

int RenderPass_name_length(PointerRNA *ptr)
{
	RenderPass *data = (RenderPass *)(ptr->data);
	return strlen(data->name);
}

void RenderPass_channel_id_get(PointerRNA *ptr, char *value)
{
	RenderPass *data = (RenderPass *)(ptr->data);
	BLI_strncpy_utf8(value, data->chan_id, sizeof(data->chan_id));
}

int RenderPass_channel_id_length(PointerRNA *ptr)
{
	RenderPass *data = (RenderPass *)(ptr->data);
	return strlen(data->chan_id);
}

int RenderPass_channels_get(PointerRNA *ptr)
{
	RenderPass *data = (RenderPass *)(ptr->data);
	return (int)(data->channels);
}

int RenderPass_type_get(PointerRNA *ptr)
{
	RenderPass *data = (RenderPass *)(ptr->data);
	return (int)(data->passtype);
}

void RenderPass_rect_get(PointerRNA *ptr, float values[])
{
	rna_RenderPass_rect_get(ptr, values);
}

void RenderPass_rect_set(PointerRNA *ptr, const float values[])
{
	rna_RenderPass_rect_set(ptr, values);
}

int RenderPass_debug_type_get(PointerRNA *ptr)
{
	RenderPass *data = (RenderPass *)(ptr->data);
	return (int)(data->debug_type);
}

static PointerRNA BakePixel_rna_properties_get(CollectionPropertyIterator *iter)
{
	return rna_builtin_properties_get(iter);
}

void BakePixel_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

	memset(iter, 0, sizeof(*iter));
	iter->parent = *ptr;
	iter->prop = (PropertyRNA *)&rna_BakePixel_rna_properties;

	rna_builtin_properties_begin(iter, ptr);

	if (iter->valid)
		iter->ptr = BakePixel_rna_properties_get(iter);
}

void BakePixel_rna_properties_next(CollectionPropertyIterator *iter)
{
	rna_builtin_properties_next(iter);

	if (iter->valid)
		iter->ptr = BakePixel_rna_properties_get(iter);
}

void BakePixel_rna_properties_end(CollectionPropertyIterator *iter)
{
	rna_iterator_listbase_end(iter);
}

int BakePixel_rna_properties_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
	return rna_builtin_properties_lookup_string(ptr, key, r_ptr);
}

PointerRNA BakePixel_rna_type_get(PointerRNA *ptr)
{
	return rna_builtin_type_get(ptr);
}

int BakePixel_primitive_id_get(PointerRNA *ptr)
{
	BakePixel *data = (BakePixel *)(ptr->data);
	return (int)(data->primitive_id);
}

void BakePixel_uv_get(PointerRNA *ptr, float values[2])
{
	BakePixel *data = (BakePixel *)(ptr->data);
	unsigned int i;

	for (i = 0; i < 2; i++) {
		values[i] = (float)((data->uv)[i]);
	}
}

float BakePixel_du_dx_get(PointerRNA *ptr)
{
	BakePixel *data = (BakePixel *)(ptr->data);
	return (float)(data->du_dx);
}

float BakePixel_du_dy_get(PointerRNA *ptr)
{
	BakePixel *data = (BakePixel *)(ptr->data);
	return (float)(data->du_dy);
}

float BakePixel_dv_dx_get(PointerRNA *ptr)
{
	BakePixel *data = (BakePixel *)(ptr->data);
	return (float)(data->dv_dx);
}

float BakePixel_dv_dy_get(PointerRNA *ptr)
{
	BakePixel *data = (BakePixel *)(ptr->data);
	return (float)(data->dv_dy);
}

PointerRNA BakePixel_next_get(PointerRNA *ptr)
{
	return rna_BakePixel_next_get(ptr);
}

void RenderEngine_tag_redraw(struct RenderEngine *_self)
{
	engine_tag_redraw(_self);
}

void RenderEngine_tag_redraw_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	struct RenderEngine *_self;
	_self = (struct RenderEngine *)_ptr->data;
	
	engine_tag_redraw(_self);
}

void RenderEngine_tag_update(struct RenderEngine *_self)
{
	engine_tag_update(_self);
}

void RenderEngine_tag_update_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	struct RenderEngine *_self;
	_self = (struct RenderEngine *)_ptr->data;
	
	engine_tag_update(_self);
}

struct RenderResult *RenderEngine_begin_result(struct RenderEngine *_self, int x, int y, int w, int h, const char * layer)
{
	return RE_engine_begin_result(_self, x, y, w, h, layer);
}

void RenderEngine_begin_result_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	struct RenderEngine *_self;
	int x;
	int y;
	int w;
	int h;
	const char * layer;
	struct RenderResult *result;
	char *_data, *_retdata;
	
	_self = (struct RenderEngine *)_ptr->data;
	_data = (char *)_parms->data;
	x = *((int *)_data);
	_data += 4;
	y = *((int *)_data);
	_data += 4;
	w = *((int *)_data);
	_data += 4;
	h = *((int *)_data);
	_data += 4;
	layer = *((const char * *)_data);
#if defined(SPEC_ILP32)
	_data += 4;
#else
	_data += 8;
#endif
	_retdata = _data;
	
	result = RE_engine_begin_result(_self, x, y, w, h, layer);
	*((struct RenderResult **)_retdata) = result;
}

void RenderEngine_update_result(struct RenderEngine *_self, struct RenderResult *result)
{
	RE_engine_update_result(_self, result);
}

void RenderEngine_update_result_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	struct RenderEngine *_self;
	struct RenderResult *result;
	char *_data;
	
	_self = (struct RenderEngine *)_ptr->data;
	_data = (char *)_parms->data;
	result = *((struct RenderResult **)_data);
	
	RE_engine_update_result(_self, result);
}

void RenderEngine_end_result(struct RenderEngine *_self, struct RenderResult *result, int cancel, int do_merge_results)
{
	RE_engine_end_result(_self, result, cancel, do_merge_results);
}

void RenderEngine_end_result_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	struct RenderEngine *_self;
	struct RenderResult *result;
	int cancel;
	int do_merge_results;
	char *_data;
	
	_self = (struct RenderEngine *)_ptr->data;
	_data = (char *)_parms->data;
	result = *((struct RenderResult **)_data);
#if defined(SPEC_ILP32)
	_data += 4;
#else
	_data += 8;
#endif
	cancel = *((int *)_data);
	_data += 4;
	do_merge_results = *((int *)_data);
	
	RE_engine_end_result(_self, result, cancel, do_merge_results);
}

int RenderEngine_test_break(struct RenderEngine *_self)
{
	return RE_engine_test_break(_self);
}

void RenderEngine_test_break_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	struct RenderEngine *_self;
	int do_break;
	char *_data, *_retdata;
	
	_self = (struct RenderEngine *)_ptr->data;
	_data = (char *)_parms->data;
	_retdata = _data;
	
	do_break = RE_engine_test_break(_self);
	*((int *)_retdata) = do_break;
}

void RenderEngine_update_stats(struct RenderEngine *_self, const char * stats, const char * info)
{
	RE_engine_update_stats(_self, stats, info);
}

void RenderEngine_update_stats_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	struct RenderEngine *_self;
	const char * stats;
	const char * info;
	char *_data;
	
	_self = (struct RenderEngine *)_ptr->data;
	_data = (char *)_parms->data;
	stats = *((const char * *)_data);
#if defined(SPEC_ILP32)
	_data += 4;
#else
	_data += 8;
#endif
	info = *((const char * *)_data);
	
	RE_engine_update_stats(_self, stats, info);
}

void RenderEngine_frame_set(struct RenderEngine *_self, int frame, float subframe)
{
	RE_engine_frame_set(_self, frame, subframe);
}

void RenderEngine_frame_set_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	struct RenderEngine *_self;
	int frame;
	float subframe;
	char *_data;
	
	_self = (struct RenderEngine *)_ptr->data;
	_data = (char *)_parms->data;
	frame = *((int *)_data);
	_data += 4;
	subframe = *((float *)_data);
	
	RE_engine_frame_set(_self, frame, subframe);
}

void RenderEngine_update_progress(struct RenderEngine *_self, float progress)
{
	RE_engine_update_progress(_self, progress);
}

void RenderEngine_update_progress_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	struct RenderEngine *_self;
	float progress;
	char *_data;
	
	_self = (struct RenderEngine *)_ptr->data;
	_data = (char *)_parms->data;
	progress = *((float *)_data);
	
	RE_engine_update_progress(_self, progress);
}

void RenderEngine_update_memory_stats(struct RenderEngine *_self, float memory_used, float memory_peak)
{
	RE_engine_update_memory_stats(_self, memory_used, memory_peak);
}

void RenderEngine_update_memory_stats_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	struct RenderEngine *_self;
	float memory_used;
	float memory_peak;
	char *_data;
	
	_self = (struct RenderEngine *)_ptr->data;
	_data = (char *)_parms->data;
	memory_used = *((float *)_data);
	_data += 4;
	memory_peak = *((float *)_data);
	
	RE_engine_update_memory_stats(_self, memory_used, memory_peak);
}

void RenderEngine_report(struct RenderEngine *_self, int type, const char * message)
{
	RE_engine_report(_self, type, message);
}

void RenderEngine_report_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	struct RenderEngine *_self;
	int type;
	const char * message;
	char *_data;
	
	_self = (struct RenderEngine *)_ptr->data;
	_data = (char *)_parms->data;
	type = *((int *)_data);
	_data += 4;
	message = *((const char * *)_data);
	
	RE_engine_report(_self, type, message);
}

void RenderEngine_bind_display_space_shader(struct RenderEngine *_self, struct Scene *scene)
{
	engine_bind_display_space_shader(_self, scene);
}

void RenderEngine_bind_display_space_shader_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	struct RenderEngine *_self;
	struct Scene *scene;
	char *_data;
	
	_self = (struct RenderEngine *)_ptr->data;
	_data = (char *)_parms->data;
	scene = *((struct Scene **)_data);
	
	engine_bind_display_space_shader(_self, scene);
}

void RenderEngine_unbind_display_space_shader(struct RenderEngine *_self)
{
	engine_unbind_display_space_shader(_self);
}

void RenderEngine_unbind_display_space_shader_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	struct RenderEngine *_self;
	_self = (struct RenderEngine *)_ptr->data;
	
	engine_unbind_display_space_shader(_self);
}

int RenderEngine_support_display_space_shader(struct RenderEngine *_self, struct Scene *scene)
{
	return engine_support_display_space_shader(_self, scene);
}

void RenderEngine_support_display_space_shader_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	struct RenderEngine *_self;
	struct Scene *scene;
	int supported;
	char *_data, *_retdata;
	
	_self = (struct RenderEngine *)_ptr->data;
	_data = (char *)_parms->data;
	scene = *((struct Scene **)_data);
#if defined(SPEC_ILP32)
	_data += 4;
#else
	_data += 8;
#endif
	_retdata = _data;
	
	supported = engine_support_display_space_shader(_self, scene);
	*((int *)_retdata) = supported;
}

/* Repeated prototypes to detect errors */

void engine_tag_redraw(struct RenderEngine *_self);
void engine_tag_update(struct RenderEngine *_self);
struct RenderResult *RE_engine_begin_result(struct RenderEngine *_self, int x, int y, int w, int h, const char * layer);
void RE_engine_update_result(struct RenderEngine *_self, struct RenderResult *result);
void RE_engine_end_result(struct RenderEngine *_self, struct RenderResult *result, int cancel, int do_merge_results);
int RE_engine_test_break(struct RenderEngine *_self);
void RE_engine_update_stats(struct RenderEngine *_self, const char * stats, const char * info);
void RE_engine_frame_set(struct RenderEngine *_self, int frame, float subframe);
void RE_engine_update_progress(struct RenderEngine *_self, float progress);
void RE_engine_update_memory_stats(struct RenderEngine *_self, float memory_used, float memory_peak);
void RE_engine_report(struct RenderEngine *_self, int type, const char * message);
void engine_bind_display_space_shader(struct RenderEngine *_self, struct Scene *scene);
void engine_unbind_display_space_shader(struct RenderEngine *_self);
int engine_support_display_space_shader(struct RenderEngine *_self, struct Scene *scene);

void RenderResult_load_from_file(struct RenderResult *_self, ReportList *reports, const char * filename)
{
	RE_result_load_from_file(_self, reports, filename);
}

void RenderResult_load_from_file_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	struct RenderResult *_self;
	const char * filename;
	char *_data;
	
	_self = (struct RenderResult *)_ptr->data;
	_data = (char *)_parms->data;
	filename = *((const char * *)_data);
	
	RE_result_load_from_file(_self, reports, filename);
}

/* Repeated prototypes to detect errors */

void RE_result_load_from_file(struct RenderResult *_self, ReportList *reports, const char * filename);

int RenderLayer_rect_get_length(PointerRNA *ptr, int *arraylen)
{
	return rna_RenderLayer_rect_get_length(ptr, arraylen);
}

void RenderLayer_load_from_file(struct RenderLayer *_self, ReportList *reports, const char * filename, int x, int y)
{
	RE_layer_load_from_file(_self, reports, filename, x, y);
}

void RenderLayer_load_from_file_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	struct RenderLayer *_self;
	const char * filename;
	int x;
	int y;
	char *_data;
	
	_self = (struct RenderLayer *)_ptr->data;
	_data = (char *)_parms->data;
	filename = *((const char * *)_data);
#if defined(SPEC_ILP32)
	_data += 4;
#else
	_data += 8;
#endif
	x = *((int *)_data);
	_data += 4;
	y = *((int *)_data);
	
	RE_layer_load_from_file(_self, reports, filename, x, y);
}

/* Repeated prototypes to detect errors */

void RE_layer_load_from_file(struct RenderLayer *_self, ReportList *reports, const char * filename, int x, int y);

int RenderPass_rect_get_length(PointerRNA *ptr, int *arraylen)
{
	return rna_RenderPass_rect_get_length(ptr, arraylen);
}



/* Render Engine */
CollectionPropertyRNA rna_RenderEngine_rna_properties = {
	{(PropertyRNA *)&rna_RenderEngine_rna_type, NULL,
	-1, "rna_properties", 128, "Properties",
	"RNA property collection",
	0, "*",
	PROP_COLLECTION, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	RenderEngine_rna_properties_begin, RenderEngine_rna_properties_next, RenderEngine_rna_properties_end, RenderEngine_rna_properties_get, NULL, NULL, RenderEngine_rna_properties_lookup_string, NULL, &RNA_Property
};

PointerPropertyRNA rna_RenderEngine_rna_type = {
	{(PropertyRNA *)&rna_RenderEngine_is_animation, (PropertyRNA *)&rna_RenderEngine_rna_properties,
	-1, "rna_type", 8912896, "RNA",
	"RNA type definition",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	RenderEngine_rna_type_get, NULL, NULL, NULL,&RNA_Struct
};

BoolPropertyRNA rna_RenderEngine_is_animation = {
	{(PropertyRNA *)&rna_RenderEngine_is_preview, (PropertyRNA *)&rna_RenderEngine_rna_type,
	-1, "is_animation", 3, "is_animation",
	"",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	RenderEngine_is_animation_get, RenderEngine_is_animation_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_RenderEngine_is_preview = {
	{(PropertyRNA *)&rna_RenderEngine_camera_override, (PropertyRNA *)&rna_RenderEngine_is_animation,
	-1, "is_preview", 3, "is_preview",
	"",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	RenderEngine_is_preview_get, RenderEngine_is_preview_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

PointerPropertyRNA rna_RenderEngine_camera_override = {
	{(PropertyRNA *)&rna_RenderEngine_layer_override, (PropertyRNA *)&rna_RenderEngine_is_preview,
	-1, "camera_override", 8388608, "camera_override",
	"",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	RenderEngine_camera_override_get, NULL, NULL, NULL,&RNA_Object
};

static int rna_RenderEngine_layer_override_default[20] = {
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0
};

BoolPropertyRNA rna_RenderEngine_layer_override = {
	{(PropertyRNA *)&rna_RenderEngine_tile_x, (PropertyRNA *)&rna_RenderEngine_camera_override,
	-1, "layer_override", 3, "layer_override",
	"",
	0, "*",
	PROP_BOOLEAN, PROP_LAYER_MEMBER | PROP_UNIT_NONE, NULL, 1, {20, 0, 0}, 20,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	NULL, NULL, RenderEngine_layer_override_get, RenderEngine_layer_override_set, NULL, NULL, NULL, NULL, 0, rna_RenderEngine_layer_override_default
};

IntPropertyRNA rna_RenderEngine_tile_x = {
	{(PropertyRNA *)&rna_RenderEngine_tile_y, (PropertyRNA *)&rna_RenderEngine_layer_override,
	-1, "tile_x", 3, "tile_x",
	"",
	0, "*",
	PROP_INT, PROP_UNSIGNED | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	RenderEngine_tile_x_get, RenderEngine_tile_x_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL,
	0, 10000, 0, INT_MAX, 1, 0, NULL
};

IntPropertyRNA rna_RenderEngine_tile_y = {
	{(PropertyRNA *)&rna_RenderEngine_resolution_x, (PropertyRNA *)&rna_RenderEngine_tile_x,
	-1, "tile_y", 3, "tile_y",
	"",
	0, "*",
	PROP_INT, PROP_UNSIGNED | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	RenderEngine_tile_y_get, RenderEngine_tile_y_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL,
	0, 10000, 0, INT_MAX, 1, 0, NULL
};

IntPropertyRNA rna_RenderEngine_resolution_x = {
	{(PropertyRNA *)&rna_RenderEngine_resolution_y, (PropertyRNA *)&rna_RenderEngine_tile_y,
	-1, "resolution_x", 2, "resolution_x",
	"",
	0, "*",
	PROP_INT, PROP_PIXEL | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	RenderEngine_resolution_x_get, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL,
	-10000, 10000, INT_MIN, INT_MAX, 1, 0, NULL
};

IntPropertyRNA rna_RenderEngine_resolution_y = {
	{(PropertyRNA *)&rna_RenderEngine_render, (PropertyRNA *)&rna_RenderEngine_resolution_x,
	-1, "resolution_y", 2, "resolution_y",
	"",
	0, "*",
	PROP_INT, PROP_PIXEL | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	RenderEngine_resolution_y_get, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL,
	-10000, 10000, INT_MIN, INT_MAX, 1, 0, NULL
};

PointerPropertyRNA rna_RenderEngine_render = {
	{(PropertyRNA *)&rna_RenderEngine_use_highlight_tiles, (PropertyRNA *)&rna_RenderEngine_resolution_y,
	-1, "render", 8388608, "Render Data",
	"",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	RenderEngine_render_get, NULL, NULL, NULL,&RNA_RenderSettings
};

BoolPropertyRNA rna_RenderEngine_use_highlight_tiles = {
	{(PropertyRNA *)&rna_RenderEngine_bl_idname, (PropertyRNA *)&rna_RenderEngine_render,
	-1, "use_highlight_tiles", 3, "use_highlight_tiles",
	"",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	RenderEngine_use_highlight_tiles_get, RenderEngine_use_highlight_tiles_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

StringPropertyRNA rna_RenderEngine_bl_idname = {
	{(PropertyRNA *)&rna_RenderEngine_bl_label, (PropertyRNA *)&rna_RenderEngine_use_highlight_tiles,
	-1, "bl_idname", 262161, "bl_idname",
	"",
	0, "*",
	PROP_STRING, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	RenderEngine_bl_idname_get, RenderEngine_bl_idname_length, RenderEngine_bl_idname_set, NULL, NULL, NULL, 0, ""
};

StringPropertyRNA rna_RenderEngine_bl_label = {
	{(PropertyRNA *)&rna_RenderEngine_bl_use_preview, (PropertyRNA *)&rna_RenderEngine_bl_idname,
	-1, "bl_label", 262161, "bl_label",
	"",
	0, "*",
	PROP_STRING, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	RenderEngine_bl_label_get, RenderEngine_bl_label_length, RenderEngine_bl_label_set, NULL, NULL, NULL, 0, ""
};

BoolPropertyRNA rna_RenderEngine_bl_use_preview = {
	{(PropertyRNA *)&rna_RenderEngine_bl_use_texture_preview, (PropertyRNA *)&rna_RenderEngine_bl_label,
	-1, "bl_use_preview", 51, "bl_use_preview",
	"",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	RenderEngine_bl_use_preview_get, RenderEngine_bl_use_preview_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_RenderEngine_bl_use_texture_preview = {
	{(PropertyRNA *)&rna_RenderEngine_bl_use_postprocess, (PropertyRNA *)&rna_RenderEngine_bl_use_preview,
	-1, "bl_use_texture_preview", 51, "bl_use_texture_preview",
	"",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	RenderEngine_bl_use_texture_preview_get, RenderEngine_bl_use_texture_preview_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_RenderEngine_bl_use_postprocess = {
	{(PropertyRNA *)&rna_RenderEngine_bl_use_shading_nodes, (PropertyRNA *)&rna_RenderEngine_bl_use_texture_preview,
	-1, "bl_use_postprocess", 51, "bl_use_postprocess",
	"",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	RenderEngine_bl_use_postprocess_get, RenderEngine_bl_use_postprocess_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_RenderEngine_bl_use_shading_nodes = {
	{(PropertyRNA *)&rna_RenderEngine_bl_use_exclude_layers, (PropertyRNA *)&rna_RenderEngine_bl_use_postprocess,
	-1, "bl_use_shading_nodes", 51, "bl_use_shading_nodes",
	"",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	RenderEngine_bl_use_shading_nodes_get, RenderEngine_bl_use_shading_nodes_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_RenderEngine_bl_use_exclude_layers = {
	{(PropertyRNA *)&rna_RenderEngine_bl_use_save_buffers, (PropertyRNA *)&rna_RenderEngine_bl_use_shading_nodes,
	-1, "bl_use_exclude_layers", 51, "bl_use_exclude_layers",
	"",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	RenderEngine_bl_use_exclude_layers_get, RenderEngine_bl_use_exclude_layers_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_RenderEngine_bl_use_save_buffers = {
	{NULL, (PropertyRNA *)&rna_RenderEngine_bl_use_exclude_layers,
	-1, "bl_use_save_buffers", 51, "bl_use_save_buffers",
	"",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	RenderEngine_bl_use_save_buffers_get, RenderEngine_bl_use_save_buffers_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

PointerPropertyRNA rna_RenderEngine_update_data = {
	{(PropertyRNA *)&rna_RenderEngine_update_scene, NULL,
	-1, "data", 8388608, "",
	"",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	NULL, NULL, NULL, NULL,&RNA_BlendData
};

PointerPropertyRNA rna_RenderEngine_update_scene = {
	{NULL, (PropertyRNA *)&rna_RenderEngine_update_data,
	-1, "scene", 8388608, "",
	"",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	NULL, NULL, NULL, NULL,&RNA_Scene
};

FunctionRNA rna_RenderEngine_update_func = {
	{(FunctionRNA *)&rna_RenderEngine_render_func, NULL,
	NULL,
	{(PropertyRNA *)&rna_RenderEngine_update_data, (PropertyRNA *)&rna_RenderEngine_update_scene}},
	"update", 4192, "Export scene data for render",
	NULL,
	NULL
};

PointerPropertyRNA rna_RenderEngine_render_scene = {
	{NULL, NULL,
	-1, "scene", 8388608, "",
	"",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	NULL, NULL, NULL, NULL,&RNA_Scene
};

FunctionRNA rna_RenderEngine_render_func = {
	{(FunctionRNA *)&rna_RenderEngine_bake_func, (FunctionRNA *)&rna_RenderEngine_update_func,
	NULL,
	{(PropertyRNA *)&rna_RenderEngine_render_scene, (PropertyRNA *)&rna_RenderEngine_render_scene}},
	"render", 4192, "Render scene into an image",
	NULL,
	NULL
};

PointerPropertyRNA rna_RenderEngine_bake_scene = {
	{(PropertyRNA *)&rna_RenderEngine_bake_object, NULL,
	-1, "scene", 8388612, "",
	"",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	NULL, NULL, NULL, NULL,&RNA_Scene
};

PointerPropertyRNA rna_RenderEngine_bake_object = {
	{(PropertyRNA *)&rna_RenderEngine_bake_pass_type, (PropertyRNA *)&rna_RenderEngine_bake_scene,
	-1, "object", 8388612, "",
	"",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	NULL, NULL, NULL, NULL,&RNA_Object
};

static EnumPropertyItem rna_RenderEngine_bake_pass_type_items[30] = {
	{1, "COMBINED", 0, "Combined", ""},
	{2, "Z", 0, "Z", ""},
	{4, "COLOR", 0, "Color", ""},
	{8, "DIFFUSE", 0, "Diffuse", ""},
	{16, "SPECULAR", 0, "Specular", ""},
	{32, "SHADOW", 0, "Shadow", ""},
	{64, "AO", 0, "AO", ""},
	{128, "REFLECTION", 0, "Reflection", ""},
	{256, "NORMAL", 0, "Normal", ""},
	{512, "VECTOR", 0, "Vector", ""},
	{1024, "REFRACTION", 0, "Refraction", ""},
	{2048, "OBJECT_INDEX", 0, "Object Index", ""},
	{4096, "UV", 0, "UV", ""},
	{16384, "MIST", 0, "Mist", ""},
	{65536, "EMIT", 0, "Emit", ""},
	{131072, "ENVIRONMENT", 0, "Environment", ""},
	{262144, "MATERIAL_INDEX", 0, "Material Index", ""},
	{524288, "DIFFUSE_DIRECT", 0, "Diffuse Direct", ""},
	{1048576, "DIFFUSE_INDIRECT", 0, "Diffuse Indirect", ""},
	{2097152, "DIFFUSE_COLOR", 0, "Diffuse Color", ""},
	{4194304, "GLOSSY_DIRECT", 0, "Glossy Direct", ""},
	{8388608, "GLOSSY_INDIRECT", 0, "Glossy Indirect", ""},
	{16777216, "GLOSSY_COLOR", 0, "Glossy Color", ""},
	{33554432, "TRANSMISSION_DIRECT", 0, "Transmission Direct", ""},
	{67108864, "TRANSMISSION_INDIRECT", 0, "Transmission Indirect", ""},
	{134217728, "TRANSMISSION_COLOR", 0, "Transmission Color", ""},
	{268435456, "SUBSURFACE_DIRECT", 0, "Subsurface Direct", ""},
	{536870912, "SUBSURFACE_INDIRECT", 0, "Subsurface Indirect", ""},
	{1073741824, "SUBSURFACE_COLOR", 0, "Subsurface Color", ""},
	{0, NULL, 0, NULL, NULL}
};

EnumPropertyRNA rna_RenderEngine_bake_pass_type = {
	{(PropertyRNA *)&rna_RenderEngine_bake_pixel_array, (PropertyRNA *)&rna_RenderEngine_bake_object,
	-1, "pass_type", 7, "Pass",
	"Pass to bake",
	0, "*",
	PROP_ENUM, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	NULL, NULL, NULL, NULL, NULL, NULL, rna_RenderEngine_bake_pass_type_items, 29, 1
};

PointerPropertyRNA rna_RenderEngine_bake_pixel_array = {
	{(PropertyRNA *)&rna_RenderEngine_bake_num_pixels, (PropertyRNA *)&rna_RenderEngine_bake_pass_type,
	-1, "pixel_array", 8388612, "",
	"",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	NULL, NULL, NULL, NULL,&RNA_BakePixel
};

IntPropertyRNA rna_RenderEngine_bake_num_pixels = {
	{(PropertyRNA *)&rna_RenderEngine_bake_depth, (PropertyRNA *)&rna_RenderEngine_bake_pixel_array,
	-1, "num_pixels", 7, "Number of Pixels",
	"Size of the baking batch",
	0, "*",
	PROP_INT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL,
	0, INT_MAX, 0, INT_MAX, 1, 0, NULL
};

IntPropertyRNA rna_RenderEngine_bake_depth = {
	{(PropertyRNA *)&rna_RenderEngine_bake_result, (PropertyRNA *)&rna_RenderEngine_bake_num_pixels,
	-1, "depth", 7, "Pixels depth",
	"Number of channels",
	0, "*",
	PROP_INT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL,
	1, INT_MAX, 0, INT_MAX, 1, 0, NULL
};

PointerPropertyRNA rna_RenderEngine_bake_result = {
	{NULL, (PropertyRNA *)&rna_RenderEngine_bake_depth,
	-1, "result", 8388612, "",
	"",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	NULL, NULL, NULL, NULL,&RNA_AnyType
};

FunctionRNA rna_RenderEngine_bake_func = {
	{(FunctionRNA *)&rna_RenderEngine_view_update_func, (FunctionRNA *)&rna_RenderEngine_render_func,
	NULL,
	{(PropertyRNA *)&rna_RenderEngine_bake_scene, (PropertyRNA *)&rna_RenderEngine_bake_result}},
	"bake", 4192, "Bake passes",
	NULL,
	NULL
};

PointerPropertyRNA rna_RenderEngine_view_update_context = {
	{NULL, NULL,
	-1, "context", 8388608, "",
	"",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	NULL, NULL, NULL, NULL,&RNA_Context
};

FunctionRNA rna_RenderEngine_view_update_func = {
	{(FunctionRNA *)&rna_RenderEngine_view_draw_func, (FunctionRNA *)&rna_RenderEngine_bake_func,
	NULL,
	{(PropertyRNA *)&rna_RenderEngine_view_update_context, (PropertyRNA *)&rna_RenderEngine_view_update_context}},
	"view_update", 4192, "Update on data changes for viewport render",
	NULL,
	NULL
};

PointerPropertyRNA rna_RenderEngine_view_draw_context = {
	{NULL, NULL,
	-1, "context", 8388608, "",
	"",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	NULL, NULL, NULL, NULL,&RNA_Context
};

FunctionRNA rna_RenderEngine_view_draw_func = {
	{(FunctionRNA *)&rna_RenderEngine_update_script_node_func, (FunctionRNA *)&rna_RenderEngine_view_update_func,
	NULL,
	{(PropertyRNA *)&rna_RenderEngine_view_draw_context, (PropertyRNA *)&rna_RenderEngine_view_draw_context}},
	"view_draw", 96, "Draw viewport render",
	NULL,
	NULL
};

PointerPropertyRNA rna_RenderEngine_update_script_node_node = {
	{NULL, NULL,
	-1, "node", 8390656, "",
	"",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	NULL, NULL, NULL, NULL,&RNA_Node
};

FunctionRNA rna_RenderEngine_update_script_node_func = {
	{(FunctionRNA *)&rna_RenderEngine_tag_redraw_func, (FunctionRNA *)&rna_RenderEngine_view_draw_func,
	NULL,
	{(PropertyRNA *)&rna_RenderEngine_update_script_node_node, (PropertyRNA *)&rna_RenderEngine_update_script_node_node}},
	"update_script_node", 4192, "Compile shader script node",
	NULL,
	NULL
};

FunctionRNA rna_RenderEngine_tag_redraw_func = {
	{(FunctionRNA *)&rna_RenderEngine_tag_update_func, (FunctionRNA *)&rna_RenderEngine_update_script_node_func,
	NULL,
	{NULL, NULL}},
	"tag_redraw", 0, "Request redraw for viewport rendering",
	RenderEngine_tag_redraw_call,
	NULL
};

FunctionRNA rna_RenderEngine_tag_update_func = {
	{(FunctionRNA *)&rna_RenderEngine_begin_result_func, (FunctionRNA *)&rna_RenderEngine_tag_redraw_func,
	NULL,
	{NULL, NULL}},
	"tag_update", 0, "Request update call for viewport rendering",
	RenderEngine_tag_update_call,
	NULL
};

IntPropertyRNA rna_RenderEngine_begin_result_x = {
	{(PropertyRNA *)&rna_RenderEngine_begin_result_y, NULL,
	-1, "x", 7, "X",
	"",
	0, "*",
	PROP_INT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL,
	0, INT_MAX, 0, INT_MAX, 1, 0, NULL
};

IntPropertyRNA rna_RenderEngine_begin_result_y = {
	{(PropertyRNA *)&rna_RenderEngine_begin_result_w, (PropertyRNA *)&rna_RenderEngine_begin_result_x,
	-1, "y", 7, "Y",
	"",
	0, "*",
	PROP_INT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL,
	0, INT_MAX, 0, INT_MAX, 1, 0, NULL
};

IntPropertyRNA rna_RenderEngine_begin_result_w = {
	{(PropertyRNA *)&rna_RenderEngine_begin_result_h, (PropertyRNA *)&rna_RenderEngine_begin_result_y,
	-1, "w", 7, "Width",
	"",
	0, "*",
	PROP_INT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL,
	0, INT_MAX, 0, INT_MAX, 1, 0, NULL
};

IntPropertyRNA rna_RenderEngine_begin_result_h = {
	{(PropertyRNA *)&rna_RenderEngine_begin_result_layer, (PropertyRNA *)&rna_RenderEngine_begin_result_w,
	-1, "h", 7, "Height",
	"",
	0, "*",
	PROP_INT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL,
	0, INT_MAX, 0, INT_MAX, 1, 0, NULL
};

StringPropertyRNA rna_RenderEngine_begin_result_layer = {
	{(PropertyRNA *)&rna_RenderEngine_begin_result_result, (PropertyRNA *)&rna_RenderEngine_begin_result_h,
	-1, "layer", 262145, "Layer",
	"Single layer to get render result for",
	0, "*",
	PROP_STRING, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	NULL, NULL, NULL, NULL, NULL, NULL, 0, ""
};

PointerPropertyRNA rna_RenderEngine_begin_result_result = {
	{NULL, (PropertyRNA *)&rna_RenderEngine_begin_result_layer,
	-1, "result", 8388616, "Result",
	"",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	NULL, NULL, NULL, NULL,&RNA_RenderResult
};

FunctionRNA rna_RenderEngine_begin_result_func = {
	{(FunctionRNA *)&rna_RenderEngine_update_result_func, (FunctionRNA *)&rna_RenderEngine_tag_update_func,
	NULL,
	{(PropertyRNA *)&rna_RenderEngine_begin_result_x, (PropertyRNA *)&rna_RenderEngine_begin_result_result}},
	"begin_result", 0, "Create render result to write linear floating point render layers and passes",
	RenderEngine_begin_result_call,
	(PropertyRNA *)&rna_RenderEngine_begin_result_result
};

PointerPropertyRNA rna_RenderEngine_update_result_result = {
	{NULL, NULL,
	-1, "result", 8388612, "Result",
	"",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	NULL, NULL, NULL, NULL,&RNA_RenderResult
};

FunctionRNA rna_RenderEngine_update_result_func = {
	{(FunctionRNA *)&rna_RenderEngine_end_result_func, (FunctionRNA *)&rna_RenderEngine_begin_result_func,
	NULL,
	{(PropertyRNA *)&rna_RenderEngine_update_result_result, (PropertyRNA *)&rna_RenderEngine_update_result_result}},
	"update_result", 0, "Signal that pixels have been updated and can be redrawn in the user interface",
	RenderEngine_update_result_call,
	NULL
};

PointerPropertyRNA rna_RenderEngine_end_result_result = {
	{(PropertyRNA *)&rna_RenderEngine_end_result_cancel, NULL,
	-1, "result", 8388612, "Result",
	"",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	NULL, NULL, NULL, NULL,&RNA_RenderResult
};

BoolPropertyRNA rna_RenderEngine_end_result_cancel = {
	{(PropertyRNA *)&rna_RenderEngine_end_result_do_merge_results, (PropertyRNA *)&rna_RenderEngine_end_result_result,
	-1, "cancel", 3, "Cancel",
	"Don\'t mark tile as done, don\'t merge results unless forced",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_RenderEngine_end_result_do_merge_results = {
	{NULL, (PropertyRNA *)&rna_RenderEngine_end_result_cancel,
	-1, "do_merge_results", 3, "Merge Results",
	"Merge results even if cancel=true",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

FunctionRNA rna_RenderEngine_end_result_func = {
	{(FunctionRNA *)&rna_RenderEngine_test_break_func, (FunctionRNA *)&rna_RenderEngine_update_result_func,
	NULL,
	{(PropertyRNA *)&rna_RenderEngine_end_result_result, (PropertyRNA *)&rna_RenderEngine_end_result_do_merge_results}},
	"end_result", 0, "All pixels in the render result have been set and are final",
	RenderEngine_end_result_call,
	NULL
};

BoolPropertyRNA rna_RenderEngine_test_break_do_break = {
	{NULL, NULL,
	-1, "do_break", 11, "Break",
	"",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

FunctionRNA rna_RenderEngine_test_break_func = {
	{(FunctionRNA *)&rna_RenderEngine_update_stats_func, (FunctionRNA *)&rna_RenderEngine_end_result_func,
	NULL,
	{(PropertyRNA *)&rna_RenderEngine_test_break_do_break, (PropertyRNA *)&rna_RenderEngine_test_break_do_break}},
	"test_break", 0, "Test if the render operation should been canceled, this is a fast call that should be used regularly for responsiveness",
	RenderEngine_test_break_call,
	(PropertyRNA *)&rna_RenderEngine_test_break_do_break
};

StringPropertyRNA rna_RenderEngine_update_stats_stats = {
	{(PropertyRNA *)&rna_RenderEngine_update_stats_info, NULL,
	-1, "stats", 262149, "Stats",
	"",
	0, "*",
	PROP_STRING, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	NULL, NULL, NULL, NULL, NULL, NULL, 0, ""
};

StringPropertyRNA rna_RenderEngine_update_stats_info = {
	{NULL, (PropertyRNA *)&rna_RenderEngine_update_stats_stats,
	-1, "info", 262149, "Info",
	"",
	0, "*",
	PROP_STRING, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	NULL, NULL, NULL, NULL, NULL, NULL, 0, ""
};

FunctionRNA rna_RenderEngine_update_stats_func = {
	{(FunctionRNA *)&rna_RenderEngine_frame_set_func, (FunctionRNA *)&rna_RenderEngine_test_break_func,
	NULL,
	{(PropertyRNA *)&rna_RenderEngine_update_stats_stats, (PropertyRNA *)&rna_RenderEngine_update_stats_info}},
	"update_stats", 0, "Update and signal to redraw render status text",
	RenderEngine_update_stats_call,
	NULL
};

IntPropertyRNA rna_RenderEngine_frame_set_frame = {
	{(PropertyRNA *)&rna_RenderEngine_frame_set_subframe, NULL,
	-1, "frame", 7, "Frame",
	"",
	0, "*",
	PROP_INT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL,
	INT_MIN, INT_MAX, INT_MIN, INT_MAX, 1, 0, NULL
};

FloatPropertyRNA rna_RenderEngine_frame_set_subframe = {
	{NULL, (PropertyRNA *)&rna_RenderEngine_frame_set_frame,
	-1, "subframe", 7, "Subframe",
	"",
	0, "*",
	PROP_FLOAT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 1.0f, 0.0f, 1.0f, 1.0f, 3, 0.0f, NULL
};

FunctionRNA rna_RenderEngine_frame_set_func = {
	{(FunctionRNA *)&rna_RenderEngine_update_progress_func, (FunctionRNA *)&rna_RenderEngine_update_stats_func,
	NULL,
	{(PropertyRNA *)&rna_RenderEngine_frame_set_frame, (PropertyRNA *)&rna_RenderEngine_frame_set_subframe}},
	"frame_set", 0, "Evaluate scene at a different frame (for motion blur)",
	RenderEngine_frame_set_call,
	NULL
};

FloatPropertyRNA rna_RenderEngine_update_progress_progress = {
	{NULL, NULL,
	-1, "progress", 7, "",
	"Percentage of render that\'s done",
	0, "*",
	PROP_FLOAT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 1.0f, 0.0f, 1.0f, 1.0f, 3, 0.0f, NULL
};

FunctionRNA rna_RenderEngine_update_progress_func = {
	{(FunctionRNA *)&rna_RenderEngine_update_memory_stats_func, (FunctionRNA *)&rna_RenderEngine_frame_set_func,
	NULL,
	{(PropertyRNA *)&rna_RenderEngine_update_progress_progress, (PropertyRNA *)&rna_RenderEngine_update_progress_progress}},
	"update_progress", 0, "Update progress percentage of render",
	RenderEngine_update_progress_call,
	NULL
};

FloatPropertyRNA rna_RenderEngine_update_memory_stats_memory_used = {
	{(PropertyRNA *)&rna_RenderEngine_update_memory_stats_memory_peak, NULL,
	-1, "memory_used", 3, "",
	"Current memory usage in megabytes",
	0, "*",
	PROP_FLOAT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, FLT_MAX, 0.0f, FLT_MAX, 1.0f, 3, 0.0f, NULL
};

FloatPropertyRNA rna_RenderEngine_update_memory_stats_memory_peak = {
	{NULL, (PropertyRNA *)&rna_RenderEngine_update_memory_stats_memory_used,
	-1, "memory_peak", 3, "",
	"Peak memory usage in megabytes",
	0, "*",
	PROP_FLOAT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, FLT_MAX, 0.0f, FLT_MAX, 1.0f, 3, 0.0f, NULL
};

FunctionRNA rna_RenderEngine_update_memory_stats_func = {
	{(FunctionRNA *)&rna_RenderEngine_report_func, (FunctionRNA *)&rna_RenderEngine_update_progress_func,
	NULL,
	{(PropertyRNA *)&rna_RenderEngine_update_memory_stats_memory_used, (PropertyRNA *)&rna_RenderEngine_update_memory_stats_memory_peak}},
	"update_memory_stats", 0, "Update memory usage statistics",
	RenderEngine_update_memory_stats_call,
	NULL
};

static EnumPropertyItem rna_RenderEngine_report_type_items[10] = {
	{1, "DEBUG", 0, "Debug", ""},
	{2, "INFO", 0, "Info", ""},
	{4, "OPERATOR", 0, "Operator", ""},
	{8, "PROPERTY", 0, "Property", ""},
	{16, "WARNING", 0, "Warning", ""},
	{32, "ERROR", 0, "Error", ""},
	{64, "ERROR_INVALID_INPUT", 0, "Invalid Input", ""},
	{128, "ERROR_INVALID_CONTEXT", 0, "Invalid Context", ""},
	{256, "ERROR_OUT_OF_MEMORY", 0, "Out of Memory", ""},
	{0, NULL, 0, NULL, NULL}
};

EnumPropertyRNA rna_RenderEngine_report_type = {
	{(PropertyRNA *)&rna_RenderEngine_report_message, NULL,
	-1, "type", 2097159, "Type",
	"",
	0, "*",
	PROP_ENUM, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	NULL, NULL, NULL, NULL, NULL, NULL, rna_RenderEngine_report_type_items, 9, 0
};

StringPropertyRNA rna_RenderEngine_report_message = {
	{NULL, (PropertyRNA *)&rna_RenderEngine_report_type,
	-1, "message", 262149, "Report Message",
	"",
	0, "*",
	PROP_STRING, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	NULL, NULL, NULL, NULL, NULL, NULL, 0, ""
};

FunctionRNA rna_RenderEngine_report_func = {
	{(FunctionRNA *)&rna_RenderEngine_bind_display_space_shader_func, (FunctionRNA *)&rna_RenderEngine_update_memory_stats_func,
	NULL,
	{(PropertyRNA *)&rna_RenderEngine_report_type, (PropertyRNA *)&rna_RenderEngine_report_message}},
	"report", 0, "Report info, warning or error messages",
	RenderEngine_report_call,
	NULL
};

PointerPropertyRNA rna_RenderEngine_bind_display_space_shader_scene = {
	{NULL, NULL,
	-1, "scene", 8388612, "",
	"",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	NULL, NULL, NULL, NULL,&RNA_Scene
};

FunctionRNA rna_RenderEngine_bind_display_space_shader_func = {
	{(FunctionRNA *)&rna_RenderEngine_unbind_display_space_shader_func, (FunctionRNA *)&rna_RenderEngine_report_func,
	NULL,
	{(PropertyRNA *)&rna_RenderEngine_bind_display_space_shader_scene, (PropertyRNA *)&rna_RenderEngine_bind_display_space_shader_scene}},
	"bind_display_space_shader", 0, "Bind GLSL fragment shader that converts linear colors to display space colors using scene color management settings",
	RenderEngine_bind_display_space_shader_call,
	NULL
};

FunctionRNA rna_RenderEngine_unbind_display_space_shader_func = {
	{(FunctionRNA *)&rna_RenderEngine_support_display_space_shader_func, (FunctionRNA *)&rna_RenderEngine_bind_display_space_shader_func,
	NULL,
	{NULL, NULL}},
	"unbind_display_space_shader", 0, "Unbind GLSL display space shader, must always be called after binding the shader",
	RenderEngine_unbind_display_space_shader_call,
	NULL
};

PointerPropertyRNA rna_RenderEngine_support_display_space_shader_scene = {
	{(PropertyRNA *)&rna_RenderEngine_support_display_space_shader_supported, NULL,
	-1, "scene", 8388612, "",
	"",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	NULL, NULL, NULL, NULL,&RNA_Scene
};

BoolPropertyRNA rna_RenderEngine_support_display_space_shader_supported = {
	{NULL, (PropertyRNA *)&rna_RenderEngine_support_display_space_shader_scene,
	-1, "supported", 11, "Supported",
	"",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

FunctionRNA rna_RenderEngine_support_display_space_shader_func = {
	{NULL, (FunctionRNA *)&rna_RenderEngine_unbind_display_space_shader_func,
	NULL,
	{(PropertyRNA *)&rna_RenderEngine_support_display_space_shader_scene, (PropertyRNA *)&rna_RenderEngine_support_display_space_shader_supported}},
	"support_display_space_shader", 0, "Test if GLSL display space shader is supported for the combination of graphics card and scene settings",
	RenderEngine_support_display_space_shader_call,
	(PropertyRNA *)&rna_RenderEngine_support_display_space_shader_supported
};

StructRNA RNA_RenderEngine = {
	{(ContainerRNA *)&RNA_RenderResult, (ContainerRNA *)&RNA_GameStringProperty,
	NULL,
	{(PropertyRNA *)&rna_RenderEngine_rna_properties, (PropertyRNA *)&rna_RenderEngine_bl_use_save_buffers}},
	"RenderEngine", NULL, NULL, 4, "Render Engine",
	"Render engine",
	"*", 17,
	NULL, (PropertyRNA *)&rna_RenderEngine_rna_properties,
	NULL,
	NULL,
	rna_RenderEngine_refine,
	NULL,
	rna_RenderEngine_register,
	rna_RenderEngine_unregister,
	rna_RenderEngine_instance,
	NULL,
	{(FunctionRNA *)&rna_RenderEngine_update_func, (FunctionRNA *)&rna_RenderEngine_support_display_space_shader_func}
};

/* Render Result */
CollectionPropertyRNA rna_RenderResult_rna_properties = {
	{(PropertyRNA *)&rna_RenderResult_rna_type, NULL,
	-1, "rna_properties", 128, "Properties",
	"RNA property collection",
	0, "*",
	PROP_COLLECTION, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	RenderResult_rna_properties_begin, RenderResult_rna_properties_next, RenderResult_rna_properties_end, RenderResult_rna_properties_get, NULL, NULL, RenderResult_rna_properties_lookup_string, NULL, &RNA_Property
};

PointerPropertyRNA rna_RenderResult_rna_type = {
	{(PropertyRNA *)&rna_RenderResult_resolution_x, (PropertyRNA *)&rna_RenderResult_rna_properties,
	-1, "rna_type", 8912896, "RNA",
	"RNA type definition",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	RenderResult_rna_type_get, NULL, NULL, NULL,&RNA_Struct
};

IntPropertyRNA rna_RenderResult_resolution_x = {
	{(PropertyRNA *)&rna_RenderResult_resolution_y, (PropertyRNA *)&rna_RenderResult_rna_type,
	-1, "resolution_x", 2, "resolution_x",
	"",
	0, "*",
	PROP_INT, PROP_PIXEL | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	RenderResult_resolution_x_get, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL,
	-10000, 10000, INT_MIN, INT_MAX, 1, 0, NULL
};

IntPropertyRNA rna_RenderResult_resolution_y = {
	{(PropertyRNA *)&rna_RenderResult_layers, (PropertyRNA *)&rna_RenderResult_resolution_x,
	-1, "resolution_y", 2, "resolution_y",
	"",
	0, "*",
	PROP_INT, PROP_PIXEL | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	RenderResult_resolution_y_get, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL,
	-10000, 10000, INT_MIN, INT_MAX, 1, 0, NULL
};

CollectionPropertyRNA rna_RenderResult_layers = {
	{NULL, (PropertyRNA *)&rna_RenderResult_resolution_y,
	-1, "layers", 0, "layers",
	"",
	0, "*",
	PROP_COLLECTION, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	RenderResult_layers_begin, RenderResult_layers_next, RenderResult_layers_end, RenderResult_layers_get, NULL, NULL, NULL, NULL, &RNA_RenderLayer
};

StringPropertyRNA rna_RenderResult_load_from_file_filename = {
	{NULL, NULL,
	-1, "filename", 262149, "File Name",
	"Filename to load into this render tile, must be no smaller than the render result",
	0, "*",
	PROP_STRING, PROP_FILENAME | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	NULL, NULL, NULL, NULL, NULL, NULL, 1024, ""
};

FunctionRNA rna_RenderResult_load_from_file_func = {
	{NULL, NULL,
	NULL,
	{(PropertyRNA *)&rna_RenderResult_load_from_file_filename, (PropertyRNA *)&rna_RenderResult_load_from_file_filename}},
	"load_from_file", 16, "Copies the pixels of this render result from an image file",
	RenderResult_load_from_file_call,
	NULL
};

StructRNA RNA_RenderResult = {
	{(ContainerRNA *)&RNA_RenderLayer, (ContainerRNA *)&RNA_RenderEngine,
	NULL,
	{(PropertyRNA *)&rna_RenderResult_rna_properties, (PropertyRNA *)&rna_RenderResult_layers}},
	"RenderResult", NULL, NULL, 4, "Render Result",
	"Result of rendering, including all layers and passes",
	"*", 17,
	NULL, (PropertyRNA *)&rna_RenderResult_rna_properties,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	{(FunctionRNA *)&rna_RenderResult_load_from_file_func, (FunctionRNA *)&rna_RenderResult_load_from_file_func}
};

/* Render Layer */
CollectionPropertyRNA rna_RenderLayer_rna_properties = {
	{(PropertyRNA *)&rna_RenderLayer_rna_type, NULL,
	-1, "rna_properties", 128, "Properties",
	"RNA property collection",
	0, "*",
	PROP_COLLECTION, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	RenderLayer_rna_properties_begin, RenderLayer_rna_properties_next, RenderLayer_rna_properties_end, RenderLayer_rna_properties_get, NULL, NULL, RenderLayer_rna_properties_lookup_string, NULL, &RNA_Property
};

PointerPropertyRNA rna_RenderLayer_rna_type = {
	{(PropertyRNA *)&rna_RenderLayer_name, (PropertyRNA *)&rna_RenderLayer_rna_properties,
	-1, "rna_type", 8912896, "RNA",
	"RNA type definition",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	RenderLayer_rna_type_get, NULL, NULL, NULL,&RNA_Struct
};

StringPropertyRNA rna_RenderLayer_name = {
	{(PropertyRNA *)&rna_RenderLayer_material_override, (PropertyRNA *)&rna_RenderLayer_rna_type,
	-1, "name", 262144, "Name",
	"Render layer name",
	0, "*",
	PROP_STRING, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	RenderLayer_name_get, RenderLayer_name_length, NULL, NULL, NULL, NULL, 0, ""
};

PointerPropertyRNA rna_RenderLayer_material_override = {
	{(PropertyRNA *)&rna_RenderLayer_light_override, (PropertyRNA *)&rna_RenderLayer_name,
	-1, "material_override", 8388608, "Material Override",
	"Material to override all other materials in this render layer",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	RenderLayer_material_override_get, NULL, NULL, NULL,&RNA_Material
};

PointerPropertyRNA rna_RenderLayer_light_override = {
	{(PropertyRNA *)&rna_RenderLayer_layers, (PropertyRNA *)&rna_RenderLayer_material_override,
	-1, "light_override", 8388608, "Light Override",
	"Group to override all other lights in this render layer",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	RenderLayer_light_override_get, NULL, NULL, NULL,&RNA_Group
};

static int rna_RenderLayer_layers_default[20] = {
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0
};

BoolPropertyRNA rna_RenderLayer_layers = {
	{(PropertyRNA *)&rna_RenderLayer_layers_zmask, (PropertyRNA *)&rna_RenderLayer_light_override,
	-1, "layers", 0, "Visible Layers",
	"Scene layers included in this render layer",
	0, "*",
	PROP_BOOLEAN, PROP_LAYER_MEMBER | PROP_UNIT_NONE, NULL, 1, {20, 0, 0}, 20,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	NULL, NULL, RenderLayer_layers_get, NULL, NULL, NULL, NULL, NULL, 0, rna_RenderLayer_layers_default
};

static int rna_RenderLayer_layers_zmask_default[20] = {
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0
};

BoolPropertyRNA rna_RenderLayer_layers_zmask = {
	{(PropertyRNA *)&rna_RenderLayer_layers_exclude, (PropertyRNA *)&rna_RenderLayer_layers,
	-1, "layers_zmask", 2, "Zmask Layers",
	"Zmask scene layers for solid faces",
	0, "*",
	PROP_BOOLEAN, PROP_LAYER | PROP_UNIT_NONE, NULL, 1, {20, 0, 0}, 20,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	NULL, NULL, RenderLayer_layers_zmask_get, NULL, NULL, NULL, NULL, NULL, 0, rna_RenderLayer_layers_zmask_default
};

static int rna_RenderLayer_layers_exclude_default[20] = {
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0
};

BoolPropertyRNA rna_RenderLayer_layers_exclude = {
	{(PropertyRNA *)&rna_RenderLayer_use, (PropertyRNA *)&rna_RenderLayer_layers_zmask,
	-1, "layers_exclude", 2, "Exclude Layers",
	"Exclude scene layers from having any influence",
	0, "*",
	PROP_BOOLEAN, PROP_LAYER | PROP_UNIT_NONE, NULL, 1, {20, 0, 0}, 20,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	NULL, NULL, RenderLayer_layers_exclude_get, NULL, NULL, NULL, NULL, NULL, 0, rna_RenderLayer_layers_exclude_default
};

BoolPropertyRNA rna_RenderLayer_use = {
	{(PropertyRNA *)&rna_RenderLayer_use_zmask, (PropertyRNA *)&rna_RenderLayer_layers_exclude,
	-1, "use", 2, "Enabled",
	"Disable or enable the render layer",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	RenderLayer_use_get, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_RenderLayer_use_zmask = {
	{(PropertyRNA *)&rna_RenderLayer_invert_zmask, (PropertyRNA *)&rna_RenderLayer_use,
	-1, "use_zmask", 2, "Zmask",
	"Only render what\'s in front of the solid z values",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	RenderLayer_use_zmask_get, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_RenderLayer_invert_zmask = {
	{(PropertyRNA *)&rna_RenderLayer_use_all_z, (PropertyRNA *)&rna_RenderLayer_use_zmask,
	-1, "invert_zmask", 2, "Zmask Negate",
	"For Zmask, only render what is behind solid z values instead of in front",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	RenderLayer_invert_zmask_get, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_RenderLayer_use_all_z = {
	{(PropertyRNA *)&rna_RenderLayer_use_solid, (PropertyRNA *)&rna_RenderLayer_invert_zmask,
	-1, "use_all_z", 2, "All Z",
	"Fill in Z values for solid faces in invisible layers, for masking",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	RenderLayer_use_all_z_get, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_RenderLayer_use_solid = {
	{(PropertyRNA *)&rna_RenderLayer_use_halo, (PropertyRNA *)&rna_RenderLayer_use_all_z,
	-1, "use_solid", 2, "Solid",
	"Render Solid faces in this Layer",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	RenderLayer_use_solid_get, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_RenderLayer_use_halo = {
	{(PropertyRNA *)&rna_RenderLayer_use_ztransp, (PropertyRNA *)&rna_RenderLayer_use_solid,
	-1, "use_halo", 2, "Halo",
	"Render Halos in this Layer (on top of Solid)",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	RenderLayer_use_halo_get, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_RenderLayer_use_ztransp = {
	{(PropertyRNA *)&rna_RenderLayer_use_sky, (PropertyRNA *)&rna_RenderLayer_use_halo,
	-1, "use_ztransp", 2, "ZTransp",
	"Render Z-Transparent faces in this Layer (on top of Solid and Halos)",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	RenderLayer_use_ztransp_get, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_RenderLayer_use_sky = {
	{(PropertyRNA *)&rna_RenderLayer_use_edge_enhance, (PropertyRNA *)&rna_RenderLayer_use_ztransp,
	-1, "use_sky", 2, "Sky",
	"Render Sky in this Layer",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	RenderLayer_use_sky_get, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_RenderLayer_use_edge_enhance = {
	{(PropertyRNA *)&rna_RenderLayer_use_strand, (PropertyRNA *)&rna_RenderLayer_use_sky,
	-1, "use_edge_enhance", 2, "Edge",
	"Render Edge-enhance in this Layer (only works for Solid faces)",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	RenderLayer_use_edge_enhance_get, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_RenderLayer_use_strand = {
	{(PropertyRNA *)&rna_RenderLayer_use_freestyle, (PropertyRNA *)&rna_RenderLayer_use_edge_enhance,
	-1, "use_strand", 2, "Strand",
	"Render Strands in this Layer",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	RenderLayer_use_strand_get, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_RenderLayer_use_freestyle = {
	{(PropertyRNA *)&rna_RenderLayer_use_pass_combined, (PropertyRNA *)&rna_RenderLayer_use_strand,
	-1, "use_freestyle", 2, "Freestyle",
	"Render stylized strokes in this Layer",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	RenderLayer_use_freestyle_get, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_RenderLayer_use_pass_combined = {
	{(PropertyRNA *)&rna_RenderLayer_use_pass_z, (PropertyRNA *)&rna_RenderLayer_use_freestyle,
	-1, "use_pass_combined", 2, "Combined",
	"Deliver full combined RGBA buffer",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	RenderLayer_use_pass_combined_get, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_RenderLayer_use_pass_z = {
	{(PropertyRNA *)&rna_RenderLayer_use_pass_vector, (PropertyRNA *)&rna_RenderLayer_use_pass_combined,
	-1, "use_pass_z", 2, "Z",
	"Deliver Z values pass",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	RenderLayer_use_pass_z_get, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_RenderLayer_use_pass_vector = {
	{(PropertyRNA *)&rna_RenderLayer_use_pass_normal, (PropertyRNA *)&rna_RenderLayer_use_pass_z,
	-1, "use_pass_vector", 2, "Vector",
	"Deliver speed vector pass",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	RenderLayer_use_pass_vector_get, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_RenderLayer_use_pass_normal = {
	{(PropertyRNA *)&rna_RenderLayer_use_pass_uv, (PropertyRNA *)&rna_RenderLayer_use_pass_vector,
	-1, "use_pass_normal", 2, "Normal",
	"Deliver normal pass",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	RenderLayer_use_pass_normal_get, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_RenderLayer_use_pass_uv = {
	{(PropertyRNA *)&rna_RenderLayer_use_pass_mist, (PropertyRNA *)&rna_RenderLayer_use_pass_normal,
	-1, "use_pass_uv", 2, "UV",
	"Deliver texture UV pass",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	RenderLayer_use_pass_uv_get, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_RenderLayer_use_pass_mist = {
	{(PropertyRNA *)&rna_RenderLayer_use_pass_object_index, (PropertyRNA *)&rna_RenderLayer_use_pass_uv,
	-1, "use_pass_mist", 2, "Mist",
	"Deliver mist factor pass (0.0-1.0)",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	RenderLayer_use_pass_mist_get, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_RenderLayer_use_pass_object_index = {
	{(PropertyRNA *)&rna_RenderLayer_use_pass_material_index, (PropertyRNA *)&rna_RenderLayer_use_pass_mist,
	-1, "use_pass_object_index", 2, "Object Index",
	"Deliver object index pass",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	RenderLayer_use_pass_object_index_get, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_RenderLayer_use_pass_material_index = {
	{(PropertyRNA *)&rna_RenderLayer_use_pass_color, (PropertyRNA *)&rna_RenderLayer_use_pass_object_index,
	-1, "use_pass_material_index", 2, "Material Index",
	"Deliver material index pass",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	RenderLayer_use_pass_material_index_get, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_RenderLayer_use_pass_color = {
	{(PropertyRNA *)&rna_RenderLayer_use_pass_diffuse, (PropertyRNA *)&rna_RenderLayer_use_pass_material_index,
	-1, "use_pass_color", 2, "Color",
	"Deliver shade-less color pass",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	RenderLayer_use_pass_color_get, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_RenderLayer_use_pass_diffuse = {
	{(PropertyRNA *)&rna_RenderLayer_use_pass_specular, (PropertyRNA *)&rna_RenderLayer_use_pass_color,
	-1, "use_pass_diffuse", 2, "Diffuse",
	"Deliver diffuse pass",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	RenderLayer_use_pass_diffuse_get, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_RenderLayer_use_pass_specular = {
	{(PropertyRNA *)&rna_RenderLayer_use_pass_shadow, (PropertyRNA *)&rna_RenderLayer_use_pass_diffuse,
	-1, "use_pass_specular", 2, "Specular",
	"Deliver specular pass",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	RenderLayer_use_pass_specular_get, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_RenderLayer_use_pass_shadow = {
	{(PropertyRNA *)&rna_RenderLayer_use_pass_ambient_occlusion, (PropertyRNA *)&rna_RenderLayer_use_pass_specular,
	-1, "use_pass_shadow", 2, "Shadow",
	"Deliver shadow pass",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	RenderLayer_use_pass_shadow_get, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_RenderLayer_use_pass_ambient_occlusion = {
	{(PropertyRNA *)&rna_RenderLayer_use_pass_reflection, (PropertyRNA *)&rna_RenderLayer_use_pass_shadow,
	-1, "use_pass_ambient_occlusion", 2, "AO",
	"Deliver AO pass",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	RenderLayer_use_pass_ambient_occlusion_get, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_RenderLayer_use_pass_reflection = {
	{(PropertyRNA *)&rna_RenderLayer_use_pass_refraction, (PropertyRNA *)&rna_RenderLayer_use_pass_ambient_occlusion,
	-1, "use_pass_reflection", 2, "Reflection",
	"Deliver raytraced reflection pass",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	RenderLayer_use_pass_reflection_get, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_RenderLayer_use_pass_refraction = {
	{(PropertyRNA *)&rna_RenderLayer_use_pass_emit, (PropertyRNA *)&rna_RenderLayer_use_pass_reflection,
	-1, "use_pass_refraction", 2, "Refraction",
	"Deliver raytraced refraction pass",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	RenderLayer_use_pass_refraction_get, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_RenderLayer_use_pass_emit = {
	{(PropertyRNA *)&rna_RenderLayer_use_pass_environment, (PropertyRNA *)&rna_RenderLayer_use_pass_refraction,
	-1, "use_pass_emit", 2, "Emit",
	"Deliver emission pass",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	RenderLayer_use_pass_emit_get, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_RenderLayer_use_pass_environment = {
	{(PropertyRNA *)&rna_RenderLayer_use_pass_indirect, (PropertyRNA *)&rna_RenderLayer_use_pass_emit,
	-1, "use_pass_environment", 2, "Environment",
	"Deliver environment lighting pass",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	RenderLayer_use_pass_environment_get, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_RenderLayer_use_pass_indirect = {
	{(PropertyRNA *)&rna_RenderLayer_exclude_specular, (PropertyRNA *)&rna_RenderLayer_use_pass_environment,
	-1, "use_pass_indirect", 2, "Indirect",
	"Deliver indirect lighting pass",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	RenderLayer_use_pass_indirect_get, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_RenderLayer_exclude_specular = {
	{(PropertyRNA *)&rna_RenderLayer_exclude_shadow, (PropertyRNA *)&rna_RenderLayer_use_pass_indirect,
	-1, "exclude_specular", 4098, "Specular Exclude",
	"Exclude specular pass from combined",
	257, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	RenderLayer_exclude_specular_get, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_RenderLayer_exclude_shadow = {
	{(PropertyRNA *)&rna_RenderLayer_exclude_ambient_occlusion, (PropertyRNA *)&rna_RenderLayer_exclude_specular,
	-1, "exclude_shadow", 4098, "Shadow Exclude",
	"Exclude shadow pass from combined",
	257, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	RenderLayer_exclude_shadow_get, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_RenderLayer_exclude_ambient_occlusion = {
	{(PropertyRNA *)&rna_RenderLayer_exclude_reflection, (PropertyRNA *)&rna_RenderLayer_exclude_shadow,
	-1, "exclude_ambient_occlusion", 4098, "AO Exclude",
	"Exclude AO pass from combined",
	257, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	RenderLayer_exclude_ambient_occlusion_get, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_RenderLayer_exclude_reflection = {
	{(PropertyRNA *)&rna_RenderLayer_exclude_refraction, (PropertyRNA *)&rna_RenderLayer_exclude_ambient_occlusion,
	-1, "exclude_reflection", 4098, "Reflection Exclude",
	"Exclude raytraced reflection pass from combined",
	257, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	RenderLayer_exclude_reflection_get, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_RenderLayer_exclude_refraction = {
	{(PropertyRNA *)&rna_RenderLayer_exclude_emit, (PropertyRNA *)&rna_RenderLayer_exclude_reflection,
	-1, "exclude_refraction", 4098, "Refraction Exclude",
	"Exclude raytraced refraction pass from combined",
	257, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	RenderLayer_exclude_refraction_get, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_RenderLayer_exclude_emit = {
	{(PropertyRNA *)&rna_RenderLayer_exclude_environment, (PropertyRNA *)&rna_RenderLayer_exclude_refraction,
	-1, "exclude_emit", 4098, "Emit Exclude",
	"Exclude emission pass from combined",
	257, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	RenderLayer_exclude_emit_get, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_RenderLayer_exclude_environment = {
	{(PropertyRNA *)&rna_RenderLayer_exclude_indirect, (PropertyRNA *)&rna_RenderLayer_exclude_emit,
	-1, "exclude_environment", 4098, "Environment Exclude",
	"Exclude environment pass from combined",
	257, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	RenderLayer_exclude_environment_get, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_RenderLayer_exclude_indirect = {
	{(PropertyRNA *)&rna_RenderLayer_use_pass_diffuse_direct, (PropertyRNA *)&rna_RenderLayer_exclude_environment,
	-1, "exclude_indirect", 4098, "Indirect Exclude",
	"Exclude indirect pass from combined",
	257, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	RenderLayer_exclude_indirect_get, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_RenderLayer_use_pass_diffuse_direct = {
	{(PropertyRNA *)&rna_RenderLayer_use_pass_diffuse_indirect, (PropertyRNA *)&rna_RenderLayer_exclude_indirect,
	-1, "use_pass_diffuse_direct", 2, "Diffuse Direct",
	"Deliver diffuse direct pass",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	RenderLayer_use_pass_diffuse_direct_get, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_RenderLayer_use_pass_diffuse_indirect = {
	{(PropertyRNA *)&rna_RenderLayer_use_pass_diffuse_color, (PropertyRNA *)&rna_RenderLayer_use_pass_diffuse_direct,
	-1, "use_pass_diffuse_indirect", 2, "Diffuse Indirect",
	"Deliver diffuse indirect pass",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	RenderLayer_use_pass_diffuse_indirect_get, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_RenderLayer_use_pass_diffuse_color = {
	{(PropertyRNA *)&rna_RenderLayer_use_pass_glossy_direct, (PropertyRNA *)&rna_RenderLayer_use_pass_diffuse_indirect,
	-1, "use_pass_diffuse_color", 2, "Diffuse Color",
	"Deliver diffuse color pass",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	RenderLayer_use_pass_diffuse_color_get, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_RenderLayer_use_pass_glossy_direct = {
	{(PropertyRNA *)&rna_RenderLayer_use_pass_glossy_indirect, (PropertyRNA *)&rna_RenderLayer_use_pass_diffuse_color,
	-1, "use_pass_glossy_direct", 2, "Glossy Direct",
	"Deliver glossy direct pass",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	RenderLayer_use_pass_glossy_direct_get, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_RenderLayer_use_pass_glossy_indirect = {
	{(PropertyRNA *)&rna_RenderLayer_use_pass_glossy_color, (PropertyRNA *)&rna_RenderLayer_use_pass_glossy_direct,
	-1, "use_pass_glossy_indirect", 2, "Glossy Indirect",
	"Deliver glossy indirect pass",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	RenderLayer_use_pass_glossy_indirect_get, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_RenderLayer_use_pass_glossy_color = {
	{(PropertyRNA *)&rna_RenderLayer_use_pass_transmission_direct, (PropertyRNA *)&rna_RenderLayer_use_pass_glossy_indirect,
	-1, "use_pass_glossy_color", 2, "Glossy Color",
	"Deliver glossy color pass",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	RenderLayer_use_pass_glossy_color_get, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_RenderLayer_use_pass_transmission_direct = {
	{(PropertyRNA *)&rna_RenderLayer_use_pass_transmission_indirect, (PropertyRNA *)&rna_RenderLayer_use_pass_glossy_color,
	-1, "use_pass_transmission_direct", 2, "Transmission Direct",
	"Deliver transmission direct pass",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	RenderLayer_use_pass_transmission_direct_get, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_RenderLayer_use_pass_transmission_indirect = {
	{(PropertyRNA *)&rna_RenderLayer_use_pass_transmission_color, (PropertyRNA *)&rna_RenderLayer_use_pass_transmission_direct,
	-1, "use_pass_transmission_indirect", 2, "Transmission Indirect",
	"Deliver transmission indirect pass",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	RenderLayer_use_pass_transmission_indirect_get, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_RenderLayer_use_pass_transmission_color = {
	{(PropertyRNA *)&rna_RenderLayer_use_pass_subsurface_direct, (PropertyRNA *)&rna_RenderLayer_use_pass_transmission_indirect,
	-1, "use_pass_transmission_color", 2, "Transmission Color",
	"Deliver transmission color pass",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	RenderLayer_use_pass_transmission_color_get, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_RenderLayer_use_pass_subsurface_direct = {
	{(PropertyRNA *)&rna_RenderLayer_use_pass_subsurface_indirect, (PropertyRNA *)&rna_RenderLayer_use_pass_transmission_color,
	-1, "use_pass_subsurface_direct", 2, "Subsurface Direct",
	"Deliver subsurface direct pass",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	RenderLayer_use_pass_subsurface_direct_get, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_RenderLayer_use_pass_subsurface_indirect = {
	{(PropertyRNA *)&rna_RenderLayer_use_pass_subsurface_color, (PropertyRNA *)&rna_RenderLayer_use_pass_subsurface_direct,
	-1, "use_pass_subsurface_indirect", 2, "Subsurface Indirect",
	"Deliver subsurface indirect pass",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	RenderLayer_use_pass_subsurface_indirect_get, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_RenderLayer_use_pass_subsurface_color = {
	{(PropertyRNA *)&rna_RenderLayer_passes, (PropertyRNA *)&rna_RenderLayer_use_pass_subsurface_indirect,
	-1, "use_pass_subsurface_color", 2, "Subsurface Color",
	"Deliver subsurface color pass",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	RenderLayer_use_pass_subsurface_color_get, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

CollectionPropertyRNA rna_RenderLayer_passes = {
	{(PropertyRNA *)&rna_RenderLayer_rect, (PropertyRNA *)&rna_RenderLayer_use_pass_subsurface_color,
	-1, "passes", 0, "passes",
	"",
	0, "*",
	PROP_COLLECTION, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	RenderLayer_passes_begin, RenderLayer_passes_next, RenderLayer_passes_end, RenderLayer_passes_get, NULL, NULL, NULL, NULL, &RNA_RenderPass
};

FloatPropertyRNA rna_RenderLayer_rect = {
	{NULL, (PropertyRNA *)&rna_RenderLayer_passes,
	-1, "rect", 131075, "rect",
	"",
	0, "*",
	PROP_FLOAT, PROP_NONE | PROP_UNIT_NONE, rna_RenderLayer_rect_get_length, 2, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	NULL, NULL, RenderLayer_rect_get, RenderLayer_rect_set, NULL, NULL, NULL, NULL, NULL, NULL, -10000.0f, 10000.0f, -FLT_MAX, FLT_MAX, 10.0f, 3, 0.0f, NULL
};

StringPropertyRNA rna_RenderLayer_load_from_file_filename = {
	{(PropertyRNA *)&rna_RenderLayer_load_from_file_x, NULL,
	-1, "filename", 262149, "Filename",
	"Filename to load into this render tile, must be no smaller than the renderlayer",
	0, "*",
	PROP_STRING, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	NULL, NULL, NULL, NULL, NULL, NULL, 0, ""
};

IntPropertyRNA rna_RenderLayer_load_from_file_x = {
	{(PropertyRNA *)&rna_RenderLayer_load_from_file_y, (PropertyRNA *)&rna_RenderLayer_load_from_file_filename,
	-1, "x", 3, "Offset X",
	"Offset the position to copy from if the image is larger than the render layer",
	0, "*",
	PROP_INT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL,
	0, INT_MAX, 0, INT_MAX, 1, 0, NULL
};

IntPropertyRNA rna_RenderLayer_load_from_file_y = {
	{NULL, (PropertyRNA *)&rna_RenderLayer_load_from_file_x,
	-1, "y", 3, "Offset Y",
	"Offset the position to copy from if the image is larger than the render layer",
	0, "*",
	PROP_INT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL,
	0, INT_MAX, 0, INT_MAX, 1, 0, NULL
};

FunctionRNA rna_RenderLayer_load_from_file_func = {
	{NULL, NULL,
	NULL,
	{(PropertyRNA *)&rna_RenderLayer_load_from_file_filename, (PropertyRNA *)&rna_RenderLayer_load_from_file_y}},
	"load_from_file", 16, "Copies the pixels of this renderlayer from an image file",
	RenderLayer_load_from_file_call,
	NULL
};

StructRNA RNA_RenderLayer = {
	{(ContainerRNA *)&RNA_RenderPass, (ContainerRNA *)&RNA_RenderResult,
	NULL,
	{(PropertyRNA *)&rna_RenderLayer_rna_properties, (PropertyRNA *)&rna_RenderLayer_rect}},
	"RenderLayer", NULL, NULL, 4, "Render Layer",
	"",
	"*", 17,
	(PropertyRNA *)&rna_RenderLayer_name, (PropertyRNA *)&rna_RenderLayer_rna_properties,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	{(FunctionRNA *)&rna_RenderLayer_load_from_file_func, (FunctionRNA *)&rna_RenderLayer_load_from_file_func}
};

/* Render Pass */
CollectionPropertyRNA rna_RenderPass_rna_properties = {
	{(PropertyRNA *)&rna_RenderPass_rna_type, NULL,
	-1, "rna_properties", 128, "Properties",
	"RNA property collection",
	0, "*",
	PROP_COLLECTION, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	RenderPass_rna_properties_begin, RenderPass_rna_properties_next, RenderPass_rna_properties_end, RenderPass_rna_properties_get, NULL, NULL, RenderPass_rna_properties_lookup_string, NULL, &RNA_Property
};

PointerPropertyRNA rna_RenderPass_rna_type = {
	{(PropertyRNA *)&rna_RenderPass_name, (PropertyRNA *)&rna_RenderPass_rna_properties,
	-1, "rna_type", 8912896, "RNA",
	"RNA type definition",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	RenderPass_rna_type_get, NULL, NULL, NULL,&RNA_Struct
};

StringPropertyRNA rna_RenderPass_name = {
	{(PropertyRNA *)&rna_RenderPass_channel_id, (PropertyRNA *)&rna_RenderPass_rna_type,
	-1, "name", 262144, "name",
	"",
	0, "*",
	PROP_STRING, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	RenderPass_name_get, RenderPass_name_length, NULL, NULL, NULL, NULL, 0, ""
};

StringPropertyRNA rna_RenderPass_channel_id = {
	{(PropertyRNA *)&rna_RenderPass_channels, (PropertyRNA *)&rna_RenderPass_name,
	-1, "channel_id", 262144, "channel_id",
	"",
	0, "*",
	PROP_STRING, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	RenderPass_channel_id_get, RenderPass_channel_id_length, NULL, NULL, NULL, NULL, 0, ""
};

IntPropertyRNA rna_RenderPass_channels = {
	{(PropertyRNA *)&rna_RenderPass_type, (PropertyRNA *)&rna_RenderPass_channel_id,
	-1, "channels", 2, "channels",
	"",
	0, "*",
	PROP_INT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	RenderPass_channels_get, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL,
	-10000, 10000, INT_MIN, INT_MAX, 1, 0, NULL
};

static EnumPropertyItem rna_RenderPass_type_items[30] = {
	{1, "COMBINED", 0, "Combined", ""},
	{2, "Z", 0, "Z", ""},
	{4, "COLOR", 0, "Color", ""},
	{8, "DIFFUSE", 0, "Diffuse", ""},
	{16, "SPECULAR", 0, "Specular", ""},
	{32, "SHADOW", 0, "Shadow", ""},
	{64, "AO", 0, "AO", ""},
	{128, "REFLECTION", 0, "Reflection", ""},
	{256, "NORMAL", 0, "Normal", ""},
	{512, "VECTOR", 0, "Vector", ""},
	{1024, "REFRACTION", 0, "Refraction", ""},
	{2048, "OBJECT_INDEX", 0, "Object Index", ""},
	{4096, "UV", 0, "UV", ""},
	{16384, "MIST", 0, "Mist", ""},
	{65536, "EMIT", 0, "Emit", ""},
	{131072, "ENVIRONMENT", 0, "Environment", ""},
	{262144, "MATERIAL_INDEX", 0, "Material Index", ""},
	{524288, "DIFFUSE_DIRECT", 0, "Diffuse Direct", ""},
	{1048576, "DIFFUSE_INDIRECT", 0, "Diffuse Indirect", ""},
	{2097152, "DIFFUSE_COLOR", 0, "Diffuse Color", ""},
	{4194304, "GLOSSY_DIRECT", 0, "Glossy Direct", ""},
	{8388608, "GLOSSY_INDIRECT", 0, "Glossy Indirect", ""},
	{16777216, "GLOSSY_COLOR", 0, "Glossy Color", ""},
	{33554432, "TRANSMISSION_DIRECT", 0, "Transmission Direct", ""},
	{67108864, "TRANSMISSION_INDIRECT", 0, "Transmission Indirect", ""},
	{134217728, "TRANSMISSION_COLOR", 0, "Transmission Color", ""},
	{268435456, "SUBSURFACE_DIRECT", 0, "Subsurface Direct", ""},
	{536870912, "SUBSURFACE_INDIRECT", 0, "Subsurface Indirect", ""},
	{1073741824, "SUBSURFACE_COLOR", 0, "Subsurface Color", ""},
	{0, NULL, 0, NULL, NULL}
};

EnumPropertyRNA rna_RenderPass_type = {
	{(PropertyRNA *)&rna_RenderPass_rect, (PropertyRNA *)&rna_RenderPass_channels,
	-1, "type", 2, "type",
	"",
	0, "*",
	PROP_ENUM, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	RenderPass_type_get, NULL, NULL, NULL, NULL, NULL, rna_RenderPass_type_items, 29, 1
};

FloatPropertyRNA rna_RenderPass_rect = {
	{(PropertyRNA *)&rna_RenderPass_debug_type, (PropertyRNA *)&rna_RenderPass_type,
	-1, "rect", 131075, "rect",
	"",
	0, "*",
	PROP_FLOAT, PROP_NONE | PROP_UNIT_NONE, rna_RenderPass_rect_get_length, 2, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	NULL, NULL, RenderPass_rect_get, RenderPass_rect_set, NULL, NULL, NULL, NULL, NULL, NULL, -10000.0f, 10000.0f, -FLT_MAX, FLT_MAX, 10.0f, 3, 0.0f, NULL
};

static EnumPropertyItem rna_RenderPass_debug_type_items[2] = {
	{0, "BVH_TRAVERSAL_STEPS", 0, "BVH Traversal Steps", ""},
	{0, NULL, 0, NULL, NULL}
};

EnumPropertyRNA rna_RenderPass_debug_type = {
	{NULL, (PropertyRNA *)&rna_RenderPass_rect,
	-1, "debug_type", 2, "debug_type",
	"",
	0, "*",
	PROP_ENUM, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	RenderPass_debug_type_get, NULL, NULL, NULL, NULL, NULL, rna_RenderPass_debug_type_items, 1, 0
};

StructRNA RNA_RenderPass = {
	{(ContainerRNA *)&RNA_BakePixel, (ContainerRNA *)&RNA_RenderLayer,
	NULL,
	{(PropertyRNA *)&rna_RenderPass_rna_properties, (PropertyRNA *)&rna_RenderPass_debug_type}},
	"RenderPass", NULL, NULL, 4, "Render Pass",
	"",
	"*", 17,
	(PropertyRNA *)&rna_RenderPass_name, (PropertyRNA *)&rna_RenderPass_rna_properties,
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

/* Bake Pixel */
CollectionPropertyRNA rna_BakePixel_rna_properties = {
	{(PropertyRNA *)&rna_BakePixel_rna_type, NULL,
	-1, "rna_properties", 128, "Properties",
	"RNA property collection",
	0, "*",
	PROP_COLLECTION, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	BakePixel_rna_properties_begin, BakePixel_rna_properties_next, BakePixel_rna_properties_end, BakePixel_rna_properties_get, NULL, NULL, BakePixel_rna_properties_lookup_string, NULL, &RNA_Property
};

PointerPropertyRNA rna_BakePixel_rna_type = {
	{(PropertyRNA *)&rna_BakePixel_primitive_id, (PropertyRNA *)&rna_BakePixel_rna_properties,
	-1, "rna_type", 8912896, "RNA",
	"RNA type definition",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	BakePixel_rna_type_get, NULL, NULL, NULL,&RNA_Struct
};

IntPropertyRNA rna_BakePixel_primitive_id = {
	{(PropertyRNA *)&rna_BakePixel_uv, (PropertyRNA *)&rna_BakePixel_rna_type,
	-1, "primitive_id", 2, "primitive_id",
	"",
	0, "*",
	PROP_INT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	BakePixel_primitive_id_get, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL,
	-10000, 10000, INT_MIN, INT_MAX, 1, 0, NULL
};

static float rna_BakePixel_uv_default[2] = {
	0.0f,
	0.0f
};

FloatPropertyRNA rna_BakePixel_uv = {
	{(PropertyRNA *)&rna_BakePixel_du_dx, (PropertyRNA *)&rna_BakePixel_primitive_id,
	-1, "uv", 2, "uv",
	"",
	0, "*",
	PROP_FLOAT, PROP_NONE | PROP_UNIT_NONE, NULL, 1, {2, 0, 0}, 2,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	NULL, NULL, BakePixel_uv_get, NULL, NULL, NULL, NULL, NULL, NULL, NULL, -10000.0f, 10000.0f, -FLT_MAX, FLT_MAX, 10.0f, 3, 0.0f, rna_BakePixel_uv_default
};

FloatPropertyRNA rna_BakePixel_du_dx = {
	{(PropertyRNA *)&rna_BakePixel_du_dy, (PropertyRNA *)&rna_BakePixel_uv,
	-1, "du_dx", 2, "du_dx",
	"",
	0, "*",
	PROP_FLOAT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	BakePixel_du_dx_get, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, -10000.0f, 10000.0f, -FLT_MAX, FLT_MAX, 10.0f, 3, 0.0f, NULL
};

FloatPropertyRNA rna_BakePixel_du_dy = {
	{(PropertyRNA *)&rna_BakePixel_dv_dx, (PropertyRNA *)&rna_BakePixel_du_dx,
	-1, "du_dy", 2, "du_dy",
	"",
	0, "*",
	PROP_FLOAT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	BakePixel_du_dy_get, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, -10000.0f, 10000.0f, -FLT_MAX, FLT_MAX, 10.0f, 3, 0.0f, NULL
};

FloatPropertyRNA rna_BakePixel_dv_dx = {
	{(PropertyRNA *)&rna_BakePixel_dv_dy, (PropertyRNA *)&rna_BakePixel_du_dy,
	-1, "dv_dx", 2, "dv_dx",
	"",
	0, "*",
	PROP_FLOAT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	BakePixel_dv_dx_get, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, -10000.0f, 10000.0f, -FLT_MAX, FLT_MAX, 10.0f, 3, 0.0f, NULL
};

FloatPropertyRNA rna_BakePixel_dv_dy = {
	{(PropertyRNA *)&rna_BakePixel_next, (PropertyRNA *)&rna_BakePixel_dv_dx,
	-1, "dv_dy", 2, "dv_dy",
	"",
	0, "*",
	PROP_FLOAT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	BakePixel_dv_dy_get, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, -10000.0f, 10000.0f, -FLT_MAX, FLT_MAX, 10.0f, 3, 0.0f, NULL
};

PointerPropertyRNA rna_BakePixel_next = {
	{NULL, (PropertyRNA *)&rna_BakePixel_dv_dy,
	-1, "next", 8388608, "next",
	"",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	BakePixel_next_get, NULL, NULL, NULL,&RNA_BakePixel
};

StructRNA RNA_BakePixel = {
	{(ContainerRNA *)&RNA_RigidBodyWorld, (ContainerRNA *)&RNA_RenderPass,
	NULL,
	{(PropertyRNA *)&rna_BakePixel_rna_properties, (PropertyRNA *)&rna_BakePixel_next}},
	"BakePixel", NULL, NULL, 4, "Bake Pixel",
	"",
	"*", 17,
	NULL, (PropertyRNA *)&rna_BakePixel_rna_properties,
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

