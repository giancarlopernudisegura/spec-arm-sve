
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

#include "rna_rigidbody.c"

#pragma GCC diagnostic ignored "-Wunused-parameter"

/* Autogenerated Functions */


CollectionPropertyRNA rna_RigidBodyWorld_rna_properties;
PointerPropertyRNA rna_RigidBodyWorld_rna_type;
PointerPropertyRNA rna_RigidBodyWorld_group;
PointerPropertyRNA rna_RigidBodyWorld_constraints;
BoolPropertyRNA rna_RigidBodyWorld_enabled;
FloatPropertyRNA rna_RigidBodyWorld_time_scale;
IntPropertyRNA rna_RigidBodyWorld_steps_per_second;
IntPropertyRNA rna_RigidBodyWorld_solver_iterations;
BoolPropertyRNA rna_RigidBodyWorld_use_split_impulse;
PointerPropertyRNA rna_RigidBodyWorld_point_cache;
PointerPropertyRNA rna_RigidBodyWorld_effector_weights;

extern FunctionRNA rna_RigidBodyWorld_convex_sweep_test_func;
extern PointerPropertyRNA rna_RigidBodyWorld_convex_sweep_test_object;
extern FloatPropertyRNA rna_RigidBodyWorld_convex_sweep_test_start;
extern FloatPropertyRNA rna_RigidBodyWorld_convex_sweep_test_end;
extern FloatPropertyRNA rna_RigidBodyWorld_convex_sweep_test_object_location;
extern FloatPropertyRNA rna_RigidBodyWorld_convex_sweep_test_hitpoint;
extern FloatPropertyRNA rna_RigidBodyWorld_convex_sweep_test_normal;
extern IntPropertyRNA rna_RigidBodyWorld_convex_sweep_test_has_hit;



CollectionPropertyRNA rna_RigidBodyObject_rna_properties;
PointerPropertyRNA rna_RigidBodyObject_rna_type;
EnumPropertyRNA rna_RigidBodyObject_type;
EnumPropertyRNA rna_RigidBodyObject_mesh_source;
BoolPropertyRNA rna_RigidBodyObject_enabled;
EnumPropertyRNA rna_RigidBodyObject_collision_shape;
BoolPropertyRNA rna_RigidBodyObject_kinematic;
BoolPropertyRNA rna_RigidBodyObject_use_deform;
FloatPropertyRNA rna_RigidBodyObject_mass;
BoolPropertyRNA rna_RigidBodyObject_use_deactivation;
BoolPropertyRNA rna_RigidBodyObject_use_start_deactivated;
FloatPropertyRNA rna_RigidBodyObject_deactivate_linear_velocity;
FloatPropertyRNA rna_RigidBodyObject_deactivate_angular_velocity;
FloatPropertyRNA rna_RigidBodyObject_linear_damping;
FloatPropertyRNA rna_RigidBodyObject_angular_damping;
FloatPropertyRNA rna_RigidBodyObject_friction;
FloatPropertyRNA rna_RigidBodyObject_restitution;
BoolPropertyRNA rna_RigidBodyObject_use_margin;
FloatPropertyRNA rna_RigidBodyObject_collision_margin;
BoolPropertyRNA rna_RigidBodyObject_collision_groups;


CollectionPropertyRNA rna_RigidBodyConstraint_rna_properties;
PointerPropertyRNA rna_RigidBodyConstraint_rna_type;
EnumPropertyRNA rna_RigidBodyConstraint_type;
BoolPropertyRNA rna_RigidBodyConstraint_enabled;
BoolPropertyRNA rna_RigidBodyConstraint_disable_collisions;
PointerPropertyRNA rna_RigidBodyConstraint_object1;
PointerPropertyRNA rna_RigidBodyConstraint_object2;
BoolPropertyRNA rna_RigidBodyConstraint_use_breaking;
FloatPropertyRNA rna_RigidBodyConstraint_breaking_threshold;
BoolPropertyRNA rna_RigidBodyConstraint_use_override_solver_iterations;
IntPropertyRNA rna_RigidBodyConstraint_solver_iterations;
BoolPropertyRNA rna_RigidBodyConstraint_use_limit_lin_x;
BoolPropertyRNA rna_RigidBodyConstraint_use_limit_lin_y;
BoolPropertyRNA rna_RigidBodyConstraint_use_limit_lin_z;
BoolPropertyRNA rna_RigidBodyConstraint_use_limit_ang_x;
BoolPropertyRNA rna_RigidBodyConstraint_use_limit_ang_y;
BoolPropertyRNA rna_RigidBodyConstraint_use_limit_ang_z;
BoolPropertyRNA rna_RigidBodyConstraint_use_spring_x;
BoolPropertyRNA rna_RigidBodyConstraint_use_spring_y;
BoolPropertyRNA rna_RigidBodyConstraint_use_spring_z;
BoolPropertyRNA rna_RigidBodyConstraint_use_motor_lin;
BoolPropertyRNA rna_RigidBodyConstraint_use_motor_ang;
FloatPropertyRNA rna_RigidBodyConstraint_limit_lin_x_lower;
FloatPropertyRNA rna_RigidBodyConstraint_limit_lin_x_upper;
FloatPropertyRNA rna_RigidBodyConstraint_limit_lin_y_lower;
FloatPropertyRNA rna_RigidBodyConstraint_limit_lin_y_upper;
FloatPropertyRNA rna_RigidBodyConstraint_limit_lin_z_lower;
FloatPropertyRNA rna_RigidBodyConstraint_limit_lin_z_upper;
FloatPropertyRNA rna_RigidBodyConstraint_limit_ang_x_lower;
FloatPropertyRNA rna_RigidBodyConstraint_limit_ang_x_upper;
FloatPropertyRNA rna_RigidBodyConstraint_limit_ang_y_lower;
FloatPropertyRNA rna_RigidBodyConstraint_limit_ang_y_upper;
FloatPropertyRNA rna_RigidBodyConstraint_limit_ang_z_lower;
FloatPropertyRNA rna_RigidBodyConstraint_limit_ang_z_upper;
FloatPropertyRNA rna_RigidBodyConstraint_spring_stiffness_x;
FloatPropertyRNA rna_RigidBodyConstraint_spring_stiffness_y;
FloatPropertyRNA rna_RigidBodyConstraint_spring_stiffness_z;
FloatPropertyRNA rna_RigidBodyConstraint_spring_damping_x;
FloatPropertyRNA rna_RigidBodyConstraint_spring_damping_y;
FloatPropertyRNA rna_RigidBodyConstraint_spring_damping_z;
FloatPropertyRNA rna_RigidBodyConstraint_motor_lin_target_velocity;
FloatPropertyRNA rna_RigidBodyConstraint_motor_lin_max_impulse;
FloatPropertyRNA rna_RigidBodyConstraint_motor_ang_target_velocity;
FloatPropertyRNA rna_RigidBodyConstraint_motor_ang_max_impulse;

static PointerRNA RigidBodyWorld_rna_properties_get(CollectionPropertyIterator *iter)
{
	return rna_builtin_properties_get(iter);
}

void RigidBodyWorld_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

	memset(iter, 0, sizeof(*iter));
	iter->parent = *ptr;
	iter->prop = (PropertyRNA *)&rna_RigidBodyWorld_rna_properties;

	rna_builtin_properties_begin(iter, ptr);

	if (iter->valid)
		iter->ptr = RigidBodyWorld_rna_properties_get(iter);
}

void RigidBodyWorld_rna_properties_next(CollectionPropertyIterator *iter)
{
	rna_builtin_properties_next(iter);

	if (iter->valid)
		iter->ptr = RigidBodyWorld_rna_properties_get(iter);
}

void RigidBodyWorld_rna_properties_end(CollectionPropertyIterator *iter)
{
	rna_iterator_listbase_end(iter);
}

int RigidBodyWorld_rna_properties_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
	return rna_builtin_properties_lookup_string(ptr, key, r_ptr);
}

PointerRNA RigidBodyWorld_rna_type_get(PointerRNA *ptr)
{
	return rna_builtin_type_get(ptr);
}

PointerRNA RigidBodyWorld_group_get(PointerRNA *ptr)
{
	RigidBodyWorld *data = (RigidBodyWorld *)(ptr->data);
	return rna_pointer_inherit_refine(ptr, &RNA_Group, data->group);
}

void RigidBodyWorld_group_set(PointerRNA *ptr, PointerRNA value)
{
	RigidBodyWorld *data = (RigidBodyWorld *)(ptr->data);
	ID *id = ptr->id.data;
	if (id == value.data) return;

	if (value.data)
		id_lib_extern((ID *)value.data);

	data->group = value.data;
}

PointerRNA RigidBodyWorld_constraints_get(PointerRNA *ptr)
{
	RigidBodyWorld *data = (RigidBodyWorld *)(ptr->data);
	return rna_pointer_inherit_refine(ptr, &RNA_Group, data->constraints);
}

void RigidBodyWorld_constraints_set(PointerRNA *ptr, PointerRNA value)
{
	RigidBodyWorld *data = (RigidBodyWorld *)(ptr->data);
	ID *id = ptr->id.data;
	if (id == value.data) return;

	if (value.data)
		id_lib_extern((ID *)value.data);

	data->constraints = value.data;
}

int RigidBodyWorld_enabled_get(PointerRNA *ptr)
{
	RigidBodyWorld *data = (RigidBodyWorld *)(ptr->data);
	return !(((data->flag) & 1) != 0);
}

void RigidBodyWorld_enabled_set(PointerRNA *ptr, int value)
{
	RigidBodyWorld *data = (RigidBodyWorld *)(ptr->data);
	if (!value) data->flag |= 1;
	else data->flag &= ~1;
}

float RigidBodyWorld_time_scale_get(PointerRNA *ptr)
{
	RigidBodyWorld *data = (RigidBodyWorld *)(ptr->data);
	return (float)(data->time_scale);
}

void RigidBodyWorld_time_scale_set(PointerRNA *ptr, float value)
{
	RigidBodyWorld *data = (RigidBodyWorld *)(ptr->data);
	data->time_scale = CLAMPIS(value, 0.0f, 100.0f);
}

int RigidBodyWorld_steps_per_second_get(PointerRNA *ptr)
{
	RigidBodyWorld *data = (RigidBodyWorld *)(ptr->data);
	return (int)(data->steps_per_second);
}

void RigidBodyWorld_steps_per_second_set(PointerRNA *ptr, int value)
{
	RigidBodyWorld *data = (RigidBodyWorld *)(ptr->data);
	data->steps_per_second = CLAMPIS(value, 1, 32767);
}

int RigidBodyWorld_solver_iterations_get(PointerRNA *ptr)
{
	RigidBodyWorld *data = (RigidBodyWorld *)(ptr->data);
	return (int)(data->num_solver_iterations);
}

void RigidBodyWorld_solver_iterations_set(PointerRNA *ptr, int value)
{
	rna_RigidBodyWorld_num_solver_iterations_set(ptr, value);
}

int RigidBodyWorld_use_split_impulse_get(PointerRNA *ptr)
{
	RigidBodyWorld *data = (RigidBodyWorld *)(ptr->data);
	return (((data->flag) & 4) != 0);
}

void RigidBodyWorld_use_split_impulse_set(PointerRNA *ptr, int value)
{
	rna_RigidBodyWorld_split_impulse_set(ptr, value);
}

PointerRNA RigidBodyWorld_point_cache_get(PointerRNA *ptr)
{
	RigidBodyWorld *data = (RigidBodyWorld *)(ptr->data);
	return rna_pointer_inherit_refine(ptr, &RNA_PointCache, data->pointcache);
}

PointerRNA RigidBodyWorld_effector_weights_get(PointerRNA *ptr)
{
	RigidBodyWorld *data = (RigidBodyWorld *)(ptr->data);
	return rna_pointer_inherit_refine(ptr, &RNA_EffectorWeights, data->effector_weights);
}

static PointerRNA RigidBodyObject_rna_properties_get(CollectionPropertyIterator *iter)
{
	return rna_builtin_properties_get(iter);
}

void RigidBodyObject_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

	memset(iter, 0, sizeof(*iter));
	iter->parent = *ptr;
	iter->prop = (PropertyRNA *)&rna_RigidBodyObject_rna_properties;

	rna_builtin_properties_begin(iter, ptr);

	if (iter->valid)
		iter->ptr = RigidBodyObject_rna_properties_get(iter);
}

void RigidBodyObject_rna_properties_next(CollectionPropertyIterator *iter)
{
	rna_builtin_properties_next(iter);

	if (iter->valid)
		iter->ptr = RigidBodyObject_rna_properties_get(iter);
}

void RigidBodyObject_rna_properties_end(CollectionPropertyIterator *iter)
{
	rna_iterator_listbase_end(iter);
}

int RigidBodyObject_rna_properties_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
	return rna_builtin_properties_lookup_string(ptr, key, r_ptr);
}

PointerRNA RigidBodyObject_rna_type_get(PointerRNA *ptr)
{
	return rna_builtin_type_get(ptr);
}

int RigidBodyObject_type_get(PointerRNA *ptr)
{
	RigidBodyOb *data = (RigidBodyOb *)(ptr->data);
	return (int)(data->type);
}

void RigidBodyObject_type_set(PointerRNA *ptr, int value)
{
	rna_RigidBodyOb_type_set(ptr, value);
}

int RigidBodyObject_mesh_source_get(PointerRNA *ptr)
{
	RigidBodyOb *data = (RigidBodyOb *)(ptr->data);
	return (int)(data->mesh_source);
}

void RigidBodyObject_mesh_source_set(PointerRNA *ptr, int value)
{
	RigidBodyOb *data = (RigidBodyOb *)(ptr->data);
	data->mesh_source = value;
}

int RigidBodyObject_enabled_get(PointerRNA *ptr)
{
	RigidBodyOb *data = (RigidBodyOb *)(ptr->data);
	return !(((data->flag) & 32) != 0);
}

void RigidBodyObject_enabled_set(PointerRNA *ptr, int value)
{
	rna_RigidBodyOb_disabled_set(ptr, value);
}

int RigidBodyObject_collision_shape_get(PointerRNA *ptr)
{
	RigidBodyOb *data = (RigidBodyOb *)(ptr->data);
	return (int)(data->shape);
}

void RigidBodyObject_collision_shape_set(PointerRNA *ptr, int value)
{
	rna_RigidBodyOb_shape_set(ptr, value);
}

int RigidBodyObject_kinematic_get(PointerRNA *ptr)
{
	RigidBodyOb *data = (RigidBodyOb *)(ptr->data);
	return (((data->flag) & 1) != 0);
}

void RigidBodyObject_kinematic_set(PointerRNA *ptr, int value)
{
	rna_RigidBodyOb_kinematic_state_set(ptr, value);
}

int RigidBodyObject_use_deform_get(PointerRNA *ptr)
{
	RigidBodyOb *data = (RigidBodyOb *)(ptr->data);
	return (((data->flag) & 128) != 0);
}

void RigidBodyObject_use_deform_set(PointerRNA *ptr, int value)
{
	RigidBodyOb *data = (RigidBodyOb *)(ptr->data);
	if (value) data->flag |= 128;
	else data->flag &= ~128;
}

float RigidBodyObject_mass_get(PointerRNA *ptr)
{
	RigidBodyOb *data = (RigidBodyOb *)(ptr->data);
	return (float)(data->mass);
}

void RigidBodyObject_mass_set(PointerRNA *ptr, float value)
{
	rna_RigidBodyOb_mass_set(ptr, value);
}

int RigidBodyObject_use_deactivation_get(PointerRNA *ptr)
{
	RigidBodyOb *data = (RigidBodyOb *)(ptr->data);
	return (((data->flag) & 8) != 0);
}

void RigidBodyObject_use_deactivation_set(PointerRNA *ptr, int value)
{
	rna_RigidBodyOb_activation_state_set(ptr, value);
}

int RigidBodyObject_use_start_deactivated_get(PointerRNA *ptr)
{
	RigidBodyOb *data = (RigidBodyOb *)(ptr->data);
	return (((data->flag) & 16) != 0);
}

void RigidBodyObject_use_start_deactivated_set(PointerRNA *ptr, int value)
{
	RigidBodyOb *data = (RigidBodyOb *)(ptr->data);
	if (value) data->flag |= 16;
	else data->flag &= ~16;
}

float RigidBodyObject_deactivate_linear_velocity_get(PointerRNA *ptr)
{
	RigidBodyOb *data = (RigidBodyOb *)(ptr->data);
	return (float)(data->lin_sleep_thresh);
}

void RigidBodyObject_deactivate_linear_velocity_set(PointerRNA *ptr, float value)
{
	rna_RigidBodyOb_linear_sleepThresh_set(ptr, value);
}

float RigidBodyObject_deactivate_angular_velocity_get(PointerRNA *ptr)
{
	RigidBodyOb *data = (RigidBodyOb *)(ptr->data);
	return (float)(data->ang_sleep_thresh);
}

void RigidBodyObject_deactivate_angular_velocity_set(PointerRNA *ptr, float value)
{
	rna_RigidBodyOb_angular_sleepThresh_set(ptr, value);
}

float RigidBodyObject_linear_damping_get(PointerRNA *ptr)
{
	RigidBodyOb *data = (RigidBodyOb *)(ptr->data);
	return (float)(data->lin_damping);
}

void RigidBodyObject_linear_damping_set(PointerRNA *ptr, float value)
{
	rna_RigidBodyOb_linear_damping_set(ptr, value);
}

float RigidBodyObject_angular_damping_get(PointerRNA *ptr)
{
	RigidBodyOb *data = (RigidBodyOb *)(ptr->data);
	return (float)(data->ang_damping);
}

void RigidBodyObject_angular_damping_set(PointerRNA *ptr, float value)
{
	rna_RigidBodyOb_angular_damping_set(ptr, value);
}

float RigidBodyObject_friction_get(PointerRNA *ptr)
{
	RigidBodyOb *data = (RigidBodyOb *)(ptr->data);
	return (float)(data->friction);
}

void RigidBodyObject_friction_set(PointerRNA *ptr, float value)
{
	rna_RigidBodyOb_friction_set(ptr, value);
}

float RigidBodyObject_restitution_get(PointerRNA *ptr)
{
	RigidBodyOb *data = (RigidBodyOb *)(ptr->data);
	return (float)(data->restitution);
}

void RigidBodyObject_restitution_set(PointerRNA *ptr, float value)
{
	rna_RigidBodyOb_restitution_set(ptr, value);
}

int RigidBodyObject_use_margin_get(PointerRNA *ptr)
{
	RigidBodyOb *data = (RigidBodyOb *)(ptr->data);
	return (((data->flag) & 64) != 0);
}

void RigidBodyObject_use_margin_set(PointerRNA *ptr, int value)
{
	RigidBodyOb *data = (RigidBodyOb *)(ptr->data);
	if (value) data->flag |= 64;
	else data->flag &= ~64;
}

float RigidBodyObject_collision_margin_get(PointerRNA *ptr)
{
	RigidBodyOb *data = (RigidBodyOb *)(ptr->data);
	return (float)(data->margin);
}

void RigidBodyObject_collision_margin_set(PointerRNA *ptr, float value)
{
	rna_RigidBodyOb_collision_margin_set(ptr, value);
}

void RigidBodyObject_collision_groups_get(PointerRNA *ptr, int values[20])
{
	RigidBodyOb *data = (RigidBodyOb *)(ptr->data);
	unsigned int i;

	for (i = 0; i < 20; i++) {
		values[i] = ((data->col_groups & (1u << i)) != 0);
	}
}

void RigidBodyObject_collision_groups_set(PointerRNA *ptr, const int values[20])
{
	rna_RigidBodyOb_collision_groups_set(ptr, values);
}

static PointerRNA RigidBodyConstraint_rna_properties_get(CollectionPropertyIterator *iter)
{
	return rna_builtin_properties_get(iter);
}

void RigidBodyConstraint_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

	memset(iter, 0, sizeof(*iter));
	iter->parent = *ptr;
	iter->prop = (PropertyRNA *)&rna_RigidBodyConstraint_rna_properties;

	rna_builtin_properties_begin(iter, ptr);

	if (iter->valid)
		iter->ptr = RigidBodyConstraint_rna_properties_get(iter);
}

void RigidBodyConstraint_rna_properties_next(CollectionPropertyIterator *iter)
{
	rna_builtin_properties_next(iter);

	if (iter->valid)
		iter->ptr = RigidBodyConstraint_rna_properties_get(iter);
}

void RigidBodyConstraint_rna_properties_end(CollectionPropertyIterator *iter)
{
	rna_iterator_listbase_end(iter);
}

int RigidBodyConstraint_rna_properties_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
	return rna_builtin_properties_lookup_string(ptr, key, r_ptr);
}

PointerRNA RigidBodyConstraint_rna_type_get(PointerRNA *ptr)
{
	return rna_builtin_type_get(ptr);
}

int RigidBodyConstraint_type_get(PointerRNA *ptr)
{
	RigidBodyCon *data = (RigidBodyCon *)(ptr->data);
	return (int)(data->type);
}

void RigidBodyConstraint_type_set(PointerRNA *ptr, int value)
{
	rna_RigidBodyCon_type_set(ptr, value);
}

int RigidBodyConstraint_enabled_get(PointerRNA *ptr)
{
	RigidBodyCon *data = (RigidBodyCon *)(ptr->data);
	return (((data->flag) & 1) != 0);
}

void RigidBodyConstraint_enabled_set(PointerRNA *ptr, int value)
{
	rna_RigidBodyCon_enabled_set(ptr, value);
}

int RigidBodyConstraint_disable_collisions_get(PointerRNA *ptr)
{
	RigidBodyCon *data = (RigidBodyCon *)(ptr->data);
	return (((data->flag) & 4) != 0);
}

void RigidBodyConstraint_disable_collisions_set(PointerRNA *ptr, int value)
{
	rna_RigidBodyCon_disable_collisions_set(ptr, value);
}

PointerRNA RigidBodyConstraint_object1_get(PointerRNA *ptr)
{
	RigidBodyCon *data = (RigidBodyCon *)(ptr->data);
	return rna_pointer_inherit_refine(ptr, &RNA_Object, data->ob1);
}

void RigidBodyConstraint_object1_set(PointerRNA *ptr, PointerRNA value)
{
	RigidBodyCon *data = (RigidBodyCon *)(ptr->data);
	if (value.data)
		id_lib_extern((ID *)value.data);

	data->ob1 = value.data;
}

PointerRNA RigidBodyConstraint_object2_get(PointerRNA *ptr)
{
	RigidBodyCon *data = (RigidBodyCon *)(ptr->data);
	return rna_pointer_inherit_refine(ptr, &RNA_Object, data->ob2);
}

void RigidBodyConstraint_object2_set(PointerRNA *ptr, PointerRNA value)
{
	RigidBodyCon *data = (RigidBodyCon *)(ptr->data);
	if (value.data)
		id_lib_extern((ID *)value.data);

	data->ob2 = value.data;
}

int RigidBodyConstraint_use_breaking_get(PointerRNA *ptr)
{
	RigidBodyCon *data = (RigidBodyCon *)(ptr->data);
	return (((data->flag) & 8) != 0);
}

void RigidBodyConstraint_use_breaking_set(PointerRNA *ptr, int value)
{
	rna_RigidBodyCon_use_breaking_set(ptr, value);
}

float RigidBodyConstraint_breaking_threshold_get(PointerRNA *ptr)
{
	RigidBodyCon *data = (RigidBodyCon *)(ptr->data);
	return (float)(data->breaking_threshold);
}

void RigidBodyConstraint_breaking_threshold_set(PointerRNA *ptr, float value)
{
	rna_RigidBodyCon_breaking_threshold_set(ptr, value);
}

int RigidBodyConstraint_use_override_solver_iterations_get(PointerRNA *ptr)
{
	RigidBodyCon *data = (RigidBodyCon *)(ptr->data);
	return (((data->flag) & 16) != 0);
}

void RigidBodyConstraint_use_override_solver_iterations_set(PointerRNA *ptr, int value)
{
	rna_RigidBodyCon_override_solver_iterations_set(ptr, value);
}

int RigidBodyConstraint_solver_iterations_get(PointerRNA *ptr)
{
	RigidBodyCon *data = (RigidBodyCon *)(ptr->data);
	return (int)(data->num_solver_iterations);
}

void RigidBodyConstraint_solver_iterations_set(PointerRNA *ptr, int value)
{
	rna_RigidBodyCon_num_solver_iterations_set(ptr, value);
}

int RigidBodyConstraint_use_limit_lin_x_get(PointerRNA *ptr)
{
	RigidBodyCon *data = (RigidBodyCon *)(ptr->data);
	return (((data->flag) & 32) != 0);
}

void RigidBodyConstraint_use_limit_lin_x_set(PointerRNA *ptr, int value)
{
	RigidBodyCon *data = (RigidBodyCon *)(ptr->data);
	if (value) data->flag |= 32;
	else data->flag &= ~32;
}

int RigidBodyConstraint_use_limit_lin_y_get(PointerRNA *ptr)
{
	RigidBodyCon *data = (RigidBodyCon *)(ptr->data);
	return (((data->flag) & 64) != 0);
}

void RigidBodyConstraint_use_limit_lin_y_set(PointerRNA *ptr, int value)
{
	RigidBodyCon *data = (RigidBodyCon *)(ptr->data);
	if (value) data->flag |= 64;
	else data->flag &= ~64;
}

int RigidBodyConstraint_use_limit_lin_z_get(PointerRNA *ptr)
{
	RigidBodyCon *data = (RigidBodyCon *)(ptr->data);
	return (((data->flag) & 128) != 0);
}

void RigidBodyConstraint_use_limit_lin_z_set(PointerRNA *ptr, int value)
{
	RigidBodyCon *data = (RigidBodyCon *)(ptr->data);
	if (value) data->flag |= 128;
	else data->flag &= ~128;
}

int RigidBodyConstraint_use_limit_ang_x_get(PointerRNA *ptr)
{
	RigidBodyCon *data = (RigidBodyCon *)(ptr->data);
	return (((data->flag) & 256) != 0);
}

void RigidBodyConstraint_use_limit_ang_x_set(PointerRNA *ptr, int value)
{
	RigidBodyCon *data = (RigidBodyCon *)(ptr->data);
	if (value) data->flag |= 256;
	else data->flag &= ~256;
}

int RigidBodyConstraint_use_limit_ang_y_get(PointerRNA *ptr)
{
	RigidBodyCon *data = (RigidBodyCon *)(ptr->data);
	return (((data->flag) & 512) != 0);
}

void RigidBodyConstraint_use_limit_ang_y_set(PointerRNA *ptr, int value)
{
	RigidBodyCon *data = (RigidBodyCon *)(ptr->data);
	if (value) data->flag |= 512;
	else data->flag &= ~512;
}

int RigidBodyConstraint_use_limit_ang_z_get(PointerRNA *ptr)
{
	RigidBodyCon *data = (RigidBodyCon *)(ptr->data);
	return (((data->flag) & 1024) != 0);
}

void RigidBodyConstraint_use_limit_ang_z_set(PointerRNA *ptr, int value)
{
	RigidBodyCon *data = (RigidBodyCon *)(ptr->data);
	if (value) data->flag |= 1024;
	else data->flag &= ~1024;
}

int RigidBodyConstraint_use_spring_x_get(PointerRNA *ptr)
{
	RigidBodyCon *data = (RigidBodyCon *)(ptr->data);
	return (((data->flag) & 2048) != 0);
}

void RigidBodyConstraint_use_spring_x_set(PointerRNA *ptr, int value)
{
	RigidBodyCon *data = (RigidBodyCon *)(ptr->data);
	if (value) data->flag |= 2048;
	else data->flag &= ~2048;
}

int RigidBodyConstraint_use_spring_y_get(PointerRNA *ptr)
{
	RigidBodyCon *data = (RigidBodyCon *)(ptr->data);
	return (((data->flag) & 4096) != 0);
}

void RigidBodyConstraint_use_spring_y_set(PointerRNA *ptr, int value)
{
	RigidBodyCon *data = (RigidBodyCon *)(ptr->data);
	if (value) data->flag |= 4096;
	else data->flag &= ~4096;
}

int RigidBodyConstraint_use_spring_z_get(PointerRNA *ptr)
{
	RigidBodyCon *data = (RigidBodyCon *)(ptr->data);
	return (((data->flag) & 8192) != 0);
}

void RigidBodyConstraint_use_spring_z_set(PointerRNA *ptr, int value)
{
	RigidBodyCon *data = (RigidBodyCon *)(ptr->data);
	if (value) data->flag |= 8192;
	else data->flag &= ~8192;
}

int RigidBodyConstraint_use_motor_lin_get(PointerRNA *ptr)
{
	RigidBodyCon *data = (RigidBodyCon *)(ptr->data);
	return (((data->flag) & 16384) != 0);
}

void RigidBodyConstraint_use_motor_lin_set(PointerRNA *ptr, int value)
{
	rna_RigidBodyCon_use_motor_lin_set(ptr, value);
}

int RigidBodyConstraint_use_motor_ang_get(PointerRNA *ptr)
{
	RigidBodyCon *data = (RigidBodyCon *)(ptr->data);
	return (((data->flag) & 32768) != 0);
}

void RigidBodyConstraint_use_motor_ang_set(PointerRNA *ptr, int value)
{
	rna_RigidBodyCon_use_motor_ang_set(ptr, value);
}

float RigidBodyConstraint_limit_lin_x_lower_get(PointerRNA *ptr)
{
	RigidBodyCon *data = (RigidBodyCon *)(ptr->data);
	return (float)(data->limit_lin_x_lower);
}

void RigidBodyConstraint_limit_lin_x_lower_set(PointerRNA *ptr, float value)
{
	RigidBodyCon *data = (RigidBodyCon *)(ptr->data);
	data->limit_lin_x_lower = value;
}

float RigidBodyConstraint_limit_lin_x_upper_get(PointerRNA *ptr)
{
	RigidBodyCon *data = (RigidBodyCon *)(ptr->data);
	return (float)(data->limit_lin_x_upper);
}

void RigidBodyConstraint_limit_lin_x_upper_set(PointerRNA *ptr, float value)
{
	RigidBodyCon *data = (RigidBodyCon *)(ptr->data);
	data->limit_lin_x_upper = value;
}

float RigidBodyConstraint_limit_lin_y_lower_get(PointerRNA *ptr)
{
	RigidBodyCon *data = (RigidBodyCon *)(ptr->data);
	return (float)(data->limit_lin_y_lower);
}

void RigidBodyConstraint_limit_lin_y_lower_set(PointerRNA *ptr, float value)
{
	RigidBodyCon *data = (RigidBodyCon *)(ptr->data);
	data->limit_lin_y_lower = value;
}

float RigidBodyConstraint_limit_lin_y_upper_get(PointerRNA *ptr)
{
	RigidBodyCon *data = (RigidBodyCon *)(ptr->data);
	return (float)(data->limit_lin_y_upper);
}

void RigidBodyConstraint_limit_lin_y_upper_set(PointerRNA *ptr, float value)
{
	RigidBodyCon *data = (RigidBodyCon *)(ptr->data);
	data->limit_lin_y_upper = value;
}

float RigidBodyConstraint_limit_lin_z_lower_get(PointerRNA *ptr)
{
	RigidBodyCon *data = (RigidBodyCon *)(ptr->data);
	return (float)(data->limit_lin_z_lower);
}

void RigidBodyConstraint_limit_lin_z_lower_set(PointerRNA *ptr, float value)
{
	RigidBodyCon *data = (RigidBodyCon *)(ptr->data);
	data->limit_lin_z_lower = value;
}

float RigidBodyConstraint_limit_lin_z_upper_get(PointerRNA *ptr)
{
	RigidBodyCon *data = (RigidBodyCon *)(ptr->data);
	return (float)(data->limit_lin_z_upper);
}

void RigidBodyConstraint_limit_lin_z_upper_set(PointerRNA *ptr, float value)
{
	RigidBodyCon *data = (RigidBodyCon *)(ptr->data);
	data->limit_lin_z_upper = value;
}

float RigidBodyConstraint_limit_ang_x_lower_get(PointerRNA *ptr)
{
	RigidBodyCon *data = (RigidBodyCon *)(ptr->data);
	return (float)(data->limit_ang_x_lower);
}

void RigidBodyConstraint_limit_ang_x_lower_set(PointerRNA *ptr, float value)
{
	RigidBodyCon *data = (RigidBodyCon *)(ptr->data);
	data->limit_ang_x_lower = CLAMPIS(value, -6.2831854820f, 6.2831854820f);
}

float RigidBodyConstraint_limit_ang_x_upper_get(PointerRNA *ptr)
{
	RigidBodyCon *data = (RigidBodyCon *)(ptr->data);
	return (float)(data->limit_ang_x_upper);
}

void RigidBodyConstraint_limit_ang_x_upper_set(PointerRNA *ptr, float value)
{
	RigidBodyCon *data = (RigidBodyCon *)(ptr->data);
	data->limit_ang_x_upper = CLAMPIS(value, -6.2831854820f, 6.2831854820f);
}

float RigidBodyConstraint_limit_ang_y_lower_get(PointerRNA *ptr)
{
	RigidBodyCon *data = (RigidBodyCon *)(ptr->data);
	return (float)(data->limit_ang_y_lower);
}

void RigidBodyConstraint_limit_ang_y_lower_set(PointerRNA *ptr, float value)
{
	RigidBodyCon *data = (RigidBodyCon *)(ptr->data);
	data->limit_ang_y_lower = CLAMPIS(value, -6.2831854820f, 6.2831854820f);
}

float RigidBodyConstraint_limit_ang_y_upper_get(PointerRNA *ptr)
{
	RigidBodyCon *data = (RigidBodyCon *)(ptr->data);
	return (float)(data->limit_ang_y_upper);
}

void RigidBodyConstraint_limit_ang_y_upper_set(PointerRNA *ptr, float value)
{
	RigidBodyCon *data = (RigidBodyCon *)(ptr->data);
	data->limit_ang_y_upper = CLAMPIS(value, -6.2831854820f, 6.2831854820f);
}

float RigidBodyConstraint_limit_ang_z_lower_get(PointerRNA *ptr)
{
	RigidBodyCon *data = (RigidBodyCon *)(ptr->data);
	return (float)(data->limit_ang_z_lower);
}

void RigidBodyConstraint_limit_ang_z_lower_set(PointerRNA *ptr, float value)
{
	RigidBodyCon *data = (RigidBodyCon *)(ptr->data);
	data->limit_ang_z_lower = CLAMPIS(value, -6.2831854820f, 6.2831854820f);
}

float RigidBodyConstraint_limit_ang_z_upper_get(PointerRNA *ptr)
{
	RigidBodyCon *data = (RigidBodyCon *)(ptr->data);
	return (float)(data->limit_ang_z_upper);
}

void RigidBodyConstraint_limit_ang_z_upper_set(PointerRNA *ptr, float value)
{
	RigidBodyCon *data = (RigidBodyCon *)(ptr->data);
	data->limit_ang_z_upper = CLAMPIS(value, -6.2831854820f, 6.2831854820f);
}

float RigidBodyConstraint_spring_stiffness_x_get(PointerRNA *ptr)
{
	RigidBodyCon *data = (RigidBodyCon *)(ptr->data);
	return (float)(data->spring_stiffness_x);
}

void RigidBodyConstraint_spring_stiffness_x_set(PointerRNA *ptr, float value)
{
	rna_RigidBodyCon_spring_stiffness_x_set(ptr, value);
}

float RigidBodyConstraint_spring_stiffness_y_get(PointerRNA *ptr)
{
	RigidBodyCon *data = (RigidBodyCon *)(ptr->data);
	return (float)(data->spring_stiffness_y);
}

void RigidBodyConstraint_spring_stiffness_y_set(PointerRNA *ptr, float value)
{
	rna_RigidBodyCon_spring_stiffness_y_set(ptr, value);
}

float RigidBodyConstraint_spring_stiffness_z_get(PointerRNA *ptr)
{
	RigidBodyCon *data = (RigidBodyCon *)(ptr->data);
	return (float)(data->spring_stiffness_z);
}

void RigidBodyConstraint_spring_stiffness_z_set(PointerRNA *ptr, float value)
{
	rna_RigidBodyCon_spring_stiffness_z_set(ptr, value);
}

float RigidBodyConstraint_spring_damping_x_get(PointerRNA *ptr)
{
	RigidBodyCon *data = (RigidBodyCon *)(ptr->data);
	return (float)(data->spring_damping_x);
}

void RigidBodyConstraint_spring_damping_x_set(PointerRNA *ptr, float value)
{
	rna_RigidBodyCon_spring_damping_x_set(ptr, value);
}

float RigidBodyConstraint_spring_damping_y_get(PointerRNA *ptr)
{
	RigidBodyCon *data = (RigidBodyCon *)(ptr->data);
	return (float)(data->spring_damping_y);
}

void RigidBodyConstraint_spring_damping_y_set(PointerRNA *ptr, float value)
{
	rna_RigidBodyCon_spring_damping_y_set(ptr, value);
}

float RigidBodyConstraint_spring_damping_z_get(PointerRNA *ptr)
{
	RigidBodyCon *data = (RigidBodyCon *)(ptr->data);
	return (float)(data->spring_damping_z);
}

void RigidBodyConstraint_spring_damping_z_set(PointerRNA *ptr, float value)
{
	rna_RigidBodyCon_spring_damping_z_set(ptr, value);
}

float RigidBodyConstraint_motor_lin_target_velocity_get(PointerRNA *ptr)
{
	RigidBodyCon *data = (RigidBodyCon *)(ptr->data);
	return (float)(data->motor_lin_target_velocity);
}

void RigidBodyConstraint_motor_lin_target_velocity_set(PointerRNA *ptr, float value)
{
	rna_RigidBodyCon_motor_lin_target_velocity_set(ptr, value);
}

float RigidBodyConstraint_motor_lin_max_impulse_get(PointerRNA *ptr)
{
	RigidBodyCon *data = (RigidBodyCon *)(ptr->data);
	return (float)(data->motor_lin_max_impulse);
}

void RigidBodyConstraint_motor_lin_max_impulse_set(PointerRNA *ptr, float value)
{
	rna_RigidBodyCon_motor_lin_max_impulse_set(ptr, value);
}

float RigidBodyConstraint_motor_ang_target_velocity_get(PointerRNA *ptr)
{
	RigidBodyCon *data = (RigidBodyCon *)(ptr->data);
	return (float)(data->motor_ang_target_velocity);
}

void RigidBodyConstraint_motor_ang_target_velocity_set(PointerRNA *ptr, float value)
{
	rna_RigidBodyCon_motor_ang_target_velocity_set(ptr, value);
}

float RigidBodyConstraint_motor_ang_max_impulse_get(PointerRNA *ptr)
{
	RigidBodyCon *data = (RigidBodyCon *)(ptr->data);
	return (float)(data->motor_ang_max_impulse);
}

void RigidBodyConstraint_motor_ang_max_impulse_set(PointerRNA *ptr, float value)
{
	rna_RigidBodyCon_motor_ang_max_impulse_set(ptr, value);
}

void RigidBodyWorld_convex_sweep_test(struct RigidBodyWorld *_self, ReportList *reports, struct Object *object, float start[3], float end[3], float object_location[3], float hitpoint[3], float normal[3], int *has_hit)
{
	rna_RigidBodyWorld_convex_sweep_test(_self, reports, object, start, end, object_location, hitpoint, normal, has_hit);
}

void RigidBodyWorld_convex_sweep_test_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	struct RigidBodyWorld *_self;
	struct Object *object;
	float *start;
	float *end;
	float *object_location;
	float *hitpoint;
	float *normal;
	int *has_hit;
	char *_data;
	
	_self = (struct RigidBodyWorld *)_ptr->data;
	_data = (char *)_parms->data;
	object = *((struct Object **)_data);
#if defined(SPEC_ILP32)
	_data += 4;
#else
	_data += 8;
#endif
	start = ((float *)_data);
	_data += 12;
	end = ((float *)_data);
	_data += 12;
	object_location = ((float *)_data);
	_data += 12;
	hitpoint = ((float *)_data);
	_data += 12;
	normal = ((float *)_data);
	_data += 12;
	has_hit = ((int *)_data);
	
	rna_RigidBodyWorld_convex_sweep_test(_self, reports, object, start, end, object_location, hitpoint, normal, has_hit);
}

/* Repeated prototypes to detect errors */

void rna_RigidBodyWorld_convex_sweep_test(struct RigidBodyWorld *_self, ReportList *reports, struct Object *object, float start[3], float end[3], float object_location[3], float hitpoint[3], float normal[3], int *has_hit);



/* Rigid Body World */
CollectionPropertyRNA rna_RigidBodyWorld_rna_properties = {
	{(PropertyRNA *)&rna_RigidBodyWorld_rna_type, NULL,
	-1, "rna_properties", 128, "Properties",
	"RNA property collection",
	0, "*",
	PROP_COLLECTION, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	RigidBodyWorld_rna_properties_begin, RigidBodyWorld_rna_properties_next, RigidBodyWorld_rna_properties_end, RigidBodyWorld_rna_properties_get, NULL, NULL, RigidBodyWorld_rna_properties_lookup_string, NULL, &RNA_Property
};

PointerPropertyRNA rna_RigidBodyWorld_rna_type = {
	{(PropertyRNA *)&rna_RigidBodyWorld_group, (PropertyRNA *)&rna_RigidBodyWorld_rna_properties,
	-1, "rna_type", 8912896, "RNA",
	"RNA type definition",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	RigidBodyWorld_rna_type_get, NULL, NULL, NULL,&RNA_Struct
};

PointerPropertyRNA rna_RigidBodyWorld_group = {
	{(PropertyRNA *)&rna_RigidBodyWorld_constraints, (PropertyRNA *)&rna_RigidBodyWorld_rna_type,
	-1, "group", 9437185, "Group",
	"Group containing objects participating in this simulation",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_RigidBodyWorld_reset, 67108864, NULL, NULL,
	0, -1, NULL},
	RigidBodyWorld_group_get, RigidBodyWorld_group_set, NULL, NULL,&RNA_Group
};

PointerPropertyRNA rna_RigidBodyWorld_constraints = {
	{(PropertyRNA *)&rna_RigidBodyWorld_enabled, (PropertyRNA *)&rna_RigidBodyWorld_group,
	-1, "constraints", 9437185, "Constraints",
	"Group containing rigid body constraint objects",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_RigidBodyWorld_reset, 67108864, NULL, NULL,
	0, -1, NULL},
	RigidBodyWorld_constraints_get, RigidBodyWorld_constraints_set, NULL, NULL,&RNA_Group
};

BoolPropertyRNA rna_RigidBodyWorld_enabled = {
	{(PropertyRNA *)&rna_RigidBodyWorld_time_scale, (PropertyRNA *)&rna_RigidBodyWorld_constraints,
	-1, "enabled", 3, "Enabled",
	"Simulation will be evaluated",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 67108864, NULL, NULL,
	0, -1, NULL},
	RigidBodyWorld_enabled_get, RigidBodyWorld_enabled_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

FloatPropertyRNA rna_RigidBodyWorld_time_scale = {
	{(PropertyRNA *)&rna_RigidBodyWorld_steps_per_second, (PropertyRNA *)&rna_RigidBodyWorld_enabled,
	-1, "time_scale", 8195, "Time Scale",
	"Change the speed of the simulation",
	0, "*",
	PROP_FLOAT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_RigidBodyWorld_reset, 67108864, NULL, NULL,
	offsetof(RigidBodyWorld, time_scale), 4, NULL},
	RigidBodyWorld_time_scale_get, RigidBodyWorld_time_scale_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 10.0f, 0.0f, 100.0f, 1.0f, 3, 1.0f, NULL
};

IntPropertyRNA rna_RigidBodyWorld_steps_per_second = {
	{(PropertyRNA *)&rna_RigidBodyWorld_solver_iterations, (PropertyRNA *)&rna_RigidBodyWorld_time_scale,
	-1, "steps_per_second", 8195, "Steps Per Second",
	"Number of simulation steps taken per second (higher values are more accurate but slower)",
	0, "*",
	PROP_INT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_RigidBodyWorld_reset, 67108864, NULL, NULL,
	offsetof(RigidBodyWorld, steps_per_second), 1, NULL},
	RigidBodyWorld_steps_per_second_get, RigidBodyWorld_steps_per_second_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL,
	60, 1000, 1, 32767, 1, 60, NULL
};

IntPropertyRNA rna_RigidBodyWorld_solver_iterations = {
	{(PropertyRNA *)&rna_RigidBodyWorld_use_split_impulse, (PropertyRNA *)&rna_RigidBodyWorld_steps_per_second,
	-1, "solver_iterations", 3, "Solver Iterations",
	"Number of constraint solver iterations made per simulation step (higher values are more accurate but slower)",
	0, "*",
	PROP_INT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_RigidBodyWorld_reset, 67108864, NULL, NULL,
	0, -1, NULL},
	RigidBodyWorld_solver_iterations_get, RigidBodyWorld_solver_iterations_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL,
	10, 100, 1, 1000, 1, 10, NULL
};

BoolPropertyRNA rna_RigidBodyWorld_use_split_impulse = {
	{(PropertyRNA *)&rna_RigidBodyWorld_point_cache, (PropertyRNA *)&rna_RigidBodyWorld_solver_iterations,
	-1, "use_split_impulse", 3, "Split Impulse",
	"Reduce extra velocity that can build up when objects collide (lowers simulation stability a little so use only when necessary)",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_RigidBodyWorld_reset, 67108864, NULL, NULL,
	0, -1, NULL},
	RigidBodyWorld_use_split_impulse_get, RigidBodyWorld_use_split_impulse_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

PointerPropertyRNA rna_RigidBodyWorld_point_cache = {
	{(PropertyRNA *)&rna_RigidBodyWorld_effector_weights, (PropertyRNA *)&rna_RigidBodyWorld_use_split_impulse,
	-1, "point_cache", 8650752, "Point Cache",
	"",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	RigidBodyWorld_point_cache_get, NULL, NULL, NULL,&RNA_PointCache
};

PointerPropertyRNA rna_RigidBodyWorld_effector_weights = {
	{NULL, (PropertyRNA *)&rna_RigidBodyWorld_point_cache,
	-1, "effector_weights", 8388608, "Effector Weights",
	"",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	RigidBodyWorld_effector_weights_get, NULL, NULL, NULL,&RNA_EffectorWeights
};

PointerPropertyRNA rna_RigidBodyWorld_convex_sweep_test_object = {
	{(PropertyRNA *)&rna_RigidBodyWorld_convex_sweep_test_start, NULL,
	-1, "object", 262148, "",
	"Rigidbody object with a convex collision shape",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	NULL, NULL, NULL, NULL,&RNA_Object
};

static float rna_RigidBodyWorld_convex_sweep_test_start_default[3] = {
	0.0f,
	0.0f,
	0.0f
};

FloatPropertyRNA rna_RigidBodyWorld_convex_sweep_test_start = {
	{(PropertyRNA *)&rna_RigidBodyWorld_convex_sweep_test_end, (PropertyRNA *)&rna_RigidBodyWorld_convex_sweep_test_object,
	-1, "start", 7, "",
	"",
	0, "*",
	PROP_FLOAT, PROP_XYZ | PROP_UNIT_NONE, NULL, 1, {3, 0, 0}, 3,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, -10000.0f, 10000.0f, -FLT_MAX, FLT_MAX, 1.0f, 3, 0.0f, rna_RigidBodyWorld_convex_sweep_test_start_default
};

static float rna_RigidBodyWorld_convex_sweep_test_end_default[3] = {
	0.0f,
	0.0f,
	0.0f
};

FloatPropertyRNA rna_RigidBodyWorld_convex_sweep_test_end = {
	{(PropertyRNA *)&rna_RigidBodyWorld_convex_sweep_test_object_location, (PropertyRNA *)&rna_RigidBodyWorld_convex_sweep_test_start,
	-1, "end", 7, "",
	"",
	0, "*",
	PROP_FLOAT, PROP_XYZ | PROP_UNIT_NONE, NULL, 1, {3, 0, 0}, 3,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, -10000.0f, 10000.0f, -FLT_MAX, FLT_MAX, 1.0f, 3, 0.0f, rna_RigidBodyWorld_convex_sweep_test_end_default
};

static float rna_RigidBodyWorld_convex_sweep_test_object_location_default[3] = {
	0.0f,
	0.0f,
	0.0f
};

FloatPropertyRNA rna_RigidBodyWorld_convex_sweep_test_object_location = {
	{(PropertyRNA *)&rna_RigidBodyWorld_convex_sweep_test_hitpoint, (PropertyRNA *)&rna_RigidBodyWorld_convex_sweep_test_end,
	-1, "object_location", 8388619, "Location",
	"The hit location of this sweep test",
	0, "*",
	PROP_FLOAT, PROP_XYZ | PROP_UNIT_NONE, NULL, 1, {3, 0, 0}, 3,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, -10000.0f, 10000.0f, -FLT_MAX, FLT_MAX, 1.0f, 3, 0.0f, rna_RigidBodyWorld_convex_sweep_test_object_location_default
};

static float rna_RigidBodyWorld_convex_sweep_test_hitpoint_default[3] = {
	0.0f,
	0.0f,
	0.0f
};

FloatPropertyRNA rna_RigidBodyWorld_convex_sweep_test_hitpoint = {
	{(PropertyRNA *)&rna_RigidBodyWorld_convex_sweep_test_normal, (PropertyRNA *)&rna_RigidBodyWorld_convex_sweep_test_object_location,
	-1, "hitpoint", 8388619, "Hitpoint",
	"The hit location of this sweep test",
	0, "*",
	PROP_FLOAT, PROP_XYZ | PROP_UNIT_NONE, NULL, 1, {3, 0, 0}, 3,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, -10000.0f, 10000.0f, -FLT_MAX, FLT_MAX, 1.0f, 3, 0.0f, rna_RigidBodyWorld_convex_sweep_test_hitpoint_default
};

static float rna_RigidBodyWorld_convex_sweep_test_normal_default[3] = {
	0.0f,
	0.0f,
	0.0f
};

FloatPropertyRNA rna_RigidBodyWorld_convex_sweep_test_normal = {
	{(PropertyRNA *)&rna_RigidBodyWorld_convex_sweep_test_has_hit, (PropertyRNA *)&rna_RigidBodyWorld_convex_sweep_test_hitpoint,
	-1, "normal", 8388619, "Normal",
	"The face normal at the sweep test hit location",
	0, "*",
	PROP_FLOAT, PROP_XYZ | PROP_UNIT_NONE, NULL, 1, {3, 0, 0}, 3,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, -10000.0f, 10000.0f, -FLT_MAX, FLT_MAX, 1.0f, 3, 0.0f, rna_RigidBodyWorld_convex_sweep_test_normal_default
};

IntPropertyRNA rna_RigidBodyWorld_convex_sweep_test_has_hit = {
	{NULL, (PropertyRNA *)&rna_RigidBodyWorld_convex_sweep_test_normal,
	-1, "has_hit", 11, "",
	"If the function has found collision point, value is 1, otherwise 0",
	0, "*",
	PROP_INT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL,
	0, 0, INT_MIN, INT_MAX, 1, 0, NULL
};

FunctionRNA rna_RigidBodyWorld_convex_sweep_test_func = {
	{NULL, NULL,
	NULL,
	{(PropertyRNA *)&rna_RigidBodyWorld_convex_sweep_test_object, (PropertyRNA *)&rna_RigidBodyWorld_convex_sweep_test_has_hit}},
	"convex_sweep_test", 16, "Sweep test convex rigidbody against the current rigidbody world",
	RigidBodyWorld_convex_sweep_test_call,
	NULL
};

StructRNA RNA_RigidBodyWorld = {
	{(ContainerRNA *)&RNA_RigidBodyObject, (ContainerRNA *)&RNA_BakePixel,
	NULL,
	{(PropertyRNA *)&rna_RigidBodyWorld_rna_properties, (PropertyRNA *)&rna_RigidBodyWorld_effector_weights}},
	"RigidBodyWorld", NULL, NULL, 4, "Rigid Body World",
	"Self-contained rigid body simulation environment and settings",
	"*", 17,
	NULL, (PropertyRNA *)&rna_RigidBodyWorld_rna_properties,
	NULL,
	NULL,
	NULL,
	rna_RigidBodyWorld_path,
	NULL,
	NULL,
	NULL,
	NULL,
	{(FunctionRNA *)&rna_RigidBodyWorld_convex_sweep_test_func, (FunctionRNA *)&rna_RigidBodyWorld_convex_sweep_test_func}
};

/* Rigid Body Object */
CollectionPropertyRNA rna_RigidBodyObject_rna_properties = {
	{(PropertyRNA *)&rna_RigidBodyObject_rna_type, NULL,
	-1, "rna_properties", 128, "Properties",
	"RNA property collection",
	0, "*",
	PROP_COLLECTION, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	RigidBodyObject_rna_properties_begin, RigidBodyObject_rna_properties_next, RigidBodyObject_rna_properties_end, RigidBodyObject_rna_properties_get, NULL, NULL, RigidBodyObject_rna_properties_lookup_string, NULL, &RNA_Property
};

PointerPropertyRNA rna_RigidBodyObject_rna_type = {
	{(PropertyRNA *)&rna_RigidBodyObject_type, (PropertyRNA *)&rna_RigidBodyObject_rna_properties,
	-1, "rna_type", 8912896, "RNA",
	"RNA type definition",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	RigidBodyObject_rna_type_get, NULL, NULL, NULL,&RNA_Struct
};

static EnumPropertyItem rna_RigidBodyObject_type_items[3] = {
	{0, "ACTIVE", 0, "Active", "Object is directly controlled by simulation results"},
	{1, "PASSIVE", 0, "Passive", "Object is directly controlled by animation system"},
	{0, NULL, 0, NULL, NULL}
};

EnumPropertyRNA rna_RigidBodyObject_type = {
	{(PropertyRNA *)&rna_RigidBodyObject_mesh_source, (PropertyRNA *)&rna_RigidBodyObject_rna_type,
	-1, "type", 1, "Type",
	"Role of object in Rigid Body Simulations",
	0, "*",
	PROP_ENUM, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_RigidBodyOb_reset, 85721088, NULL, NULL,
	0, -1, NULL},
	RigidBodyObject_type_get, RigidBodyObject_type_set, NULL, NULL, NULL, NULL, rna_RigidBodyObject_type_items, 2, 0
};

static EnumPropertyItem rna_RigidBodyObject_mesh_source_items[4] = {
	{0, "BASE", 0, "Base", "Base mesh"},
	{1, "DEFORM", 0, "Deform", "Deformations (shape keys, deform modifiers)"},
	{2, "FINAL", 0, "Final", "All modifiers"},
	{0, NULL, 0, NULL, NULL}
};

EnumPropertyRNA rna_RigidBodyObject_mesh_source = {
	{(PropertyRNA *)&rna_RigidBodyObject_enabled, (PropertyRNA *)&rna_RigidBodyObject_type,
	-1, "mesh_source", 1, "Mesh Source",
	"Source of the mesh used to create collision shape",
	0, "*",
	PROP_ENUM, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_RigidBodyOb_reset, 85721088, NULL, NULL,
	0, -1, NULL},
	RigidBodyObject_mesh_source_get, RigidBodyObject_mesh_source_set, NULL, NULL, NULL, NULL, rna_RigidBodyObject_mesh_source_items, 3, 0
};

BoolPropertyRNA rna_RigidBodyObject_enabled = {
	{(PropertyRNA *)&rna_RigidBodyObject_collision_shape, (PropertyRNA *)&rna_RigidBodyObject_mesh_source,
	-1, "enabled", 3, "Enabled",
	"Rigid Body actively participates to the simulation",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_RigidBodyOb_reset, 85721088, NULL, NULL,
	0, -1, NULL},
	RigidBodyObject_enabled_get, RigidBodyObject_enabled_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

static EnumPropertyItem rna_RigidBodyObject_collision_shape_items[8] = {
	{0, "BOX", 287, "Box", "Box-like shapes (i.e. cubes), including planes (i.e. ground planes)"},
	{1, "SPHERE", 289, "Sphere", ""},
	{2, "CAPSULE", 238, "Capsule", ""},
	{3, "CYLINDER", 293, "Cylinder", ""},
	{4, "CONE", 295, "Cone", ""},
	{5, "CONVEX_HULL", 290, "Convex Hull", "A mesh-like surface encompassing (i.e. shrinkwrap over) all vertices (best results with fewer vertices)"},
	{6, "MESH", 292, "Mesh", "Mesh consisting of triangles only, allowing for more detailed interactions than convex hulls"},
	{0, NULL, 0, NULL, NULL}
};

EnumPropertyRNA rna_RigidBodyObject_collision_shape = {
	{(PropertyRNA *)&rna_RigidBodyObject_kinematic, (PropertyRNA *)&rna_RigidBodyObject_enabled,
	-1, "collision_shape", 1, "Collision Shape",
	"Collision Shape of object in Rigid Body Simulations",
	0, "*",
	PROP_ENUM, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_RigidBodyOb_shape_update, 85721088, NULL, NULL,
	0, -1, NULL},
	RigidBodyObject_collision_shape_get, RigidBodyObject_collision_shape_set, NULL, NULL, NULL, NULL, rna_RigidBodyObject_collision_shape_items, 7, 0
};

BoolPropertyRNA rna_RigidBodyObject_kinematic = {
	{(PropertyRNA *)&rna_RigidBodyObject_use_deform, (PropertyRNA *)&rna_RigidBodyObject_collision_shape,
	-1, "kinematic", 3, "Kinematic",
	"Allow rigid body to be controlled by the animation system",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_RigidBodyOb_reset, 85721088, NULL, NULL,
	0, -1, NULL},
	RigidBodyObject_kinematic_get, RigidBodyObject_kinematic_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_RigidBodyObject_use_deform = {
	{(PropertyRNA *)&rna_RigidBodyObject_mass, (PropertyRNA *)&rna_RigidBodyObject_kinematic,
	-1, "use_deform", 3, "Deforming",
	"Rigid body deforms during simulation",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_RigidBodyOb_reset, 85721088, NULL, NULL,
	0, -1, NULL},
	RigidBodyObject_use_deform_get, RigidBodyObject_use_deform_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

FloatPropertyRNA rna_RigidBodyObject_mass = {
	{(PropertyRNA *)&rna_RigidBodyObject_use_deactivation, (PropertyRNA *)&rna_RigidBodyObject_use_deform,
	-1, "mass", 3, "Mass",
	"How much the object \'weighs\' irrespective of gravity",
	0, "*",
	PROP_FLOAT, PROP_NONE | PROP_UNIT_MASS, NULL, 0, {0, 0, 0}, 0,
	rna_RigidBodyOb_reset, 85721088, NULL, NULL,
	0, -1, NULL},
	RigidBodyObject_mass_get, RigidBodyObject_mass_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0010000000f, FLT_MAX, 0.0010000000f, FLT_MAX, 10.0f, 3, 1.0f, NULL
};

BoolPropertyRNA rna_RigidBodyObject_use_deactivation = {
	{(PropertyRNA *)&rna_RigidBodyObject_use_start_deactivated, (PropertyRNA *)&rna_RigidBodyObject_mass,
	-1, "use_deactivation", 3, "Enable Deactivation",
	"Enable deactivation of resting rigid bodies (increases performance and stability but can cause glitches)",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_RigidBodyOb_reset, 85721088, NULL, NULL,
	0, -1, NULL},
	RigidBodyObject_use_deactivation_get, RigidBodyObject_use_deactivation_set, NULL, NULL, NULL, NULL, NULL, NULL, 1, NULL
};

BoolPropertyRNA rna_RigidBodyObject_use_start_deactivated = {
	{(PropertyRNA *)&rna_RigidBodyObject_deactivate_linear_velocity, (PropertyRNA *)&rna_RigidBodyObject_use_deactivation,
	-1, "use_start_deactivated", 1, "Start Deactivated",
	"Deactivate rigid body at the start of the simulation",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_RigidBodyOb_reset, 85721088, NULL, NULL,
	0, -1, NULL},
	RigidBodyObject_use_start_deactivated_get, RigidBodyObject_use_start_deactivated_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

FloatPropertyRNA rna_RigidBodyObject_deactivate_linear_velocity = {
	{(PropertyRNA *)&rna_RigidBodyObject_deactivate_angular_velocity, (PropertyRNA *)&rna_RigidBodyObject_use_start_deactivated,
	-1, "deactivate_linear_velocity", 3, "Linear Velocity Deactivation Threshold",
	"Linear Velocity below which simulation stops simulating object",
	0, "*",
	PROP_FLOAT, PROP_NONE | PROP_UNIT_VELOCITY, NULL, 0, {0, 0, 0}, 0,
	rna_RigidBodyOb_reset, 85721088, NULL, NULL,
	0, -1, NULL},
	RigidBodyObject_deactivate_linear_velocity_get, RigidBodyObject_deactivate_linear_velocity_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0000000000f, FLT_MAX, 0.0000000000f, FLT_MAX, 10.0f, 3, 0.4000000060f, NULL
};

FloatPropertyRNA rna_RigidBodyObject_deactivate_angular_velocity = {
	{(PropertyRNA *)&rna_RigidBodyObject_linear_damping, (PropertyRNA *)&rna_RigidBodyObject_deactivate_linear_velocity,
	-1, "deactivate_angular_velocity", 3, "Angular Velocity Deactivation Threshold",
	"Angular Velocity below which simulation stops simulating object",
	0, "*",
	PROP_FLOAT, PROP_NONE | PROP_UNIT_VELOCITY, NULL, 0, {0, 0, 0}, 0,
	rna_RigidBodyOb_reset, 85721088, NULL, NULL,
	0, -1, NULL},
	RigidBodyObject_deactivate_angular_velocity_get, RigidBodyObject_deactivate_angular_velocity_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0000000000f, FLT_MAX, 0.0000000000f, FLT_MAX, 10.0f, 3, 0.5000000000f, NULL
};

FloatPropertyRNA rna_RigidBodyObject_linear_damping = {
	{(PropertyRNA *)&rna_RigidBodyObject_angular_damping, (PropertyRNA *)&rna_RigidBodyObject_deactivate_angular_velocity,
	-1, "linear_damping", 3, "Linear Damping",
	"Amount of linear velocity that is lost over time",
	0, "*",
	PROP_FLOAT, PROP_FACTOR | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_RigidBodyOb_reset, 85721088, NULL, NULL,
	0, -1, NULL},
	RigidBodyObject_linear_damping_get, RigidBodyObject_linear_damping_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 1.0f, 0.0f, 1.0f, 10.0f, 3, 0.0399999991f, NULL
};

FloatPropertyRNA rna_RigidBodyObject_angular_damping = {
	{(PropertyRNA *)&rna_RigidBodyObject_friction, (PropertyRNA *)&rna_RigidBodyObject_linear_damping,
	-1, "angular_damping", 3, "Angular Damping",
	"Amount of angular velocity that is lost over time",
	0, "*",
	PROP_FLOAT, PROP_FACTOR | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_RigidBodyOb_reset, 85721088, NULL, NULL,
	0, -1, NULL},
	RigidBodyObject_angular_damping_get, RigidBodyObject_angular_damping_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 1.0f, 0.0f, 1.0f, 10.0f, 3, 0.1000000015f, NULL
};

FloatPropertyRNA rna_RigidBodyObject_friction = {
	{(PropertyRNA *)&rna_RigidBodyObject_restitution, (PropertyRNA *)&rna_RigidBodyObject_angular_damping,
	-1, "friction", 3, "Friction",
	"Resistance of object to movement",
	0, "*",
	PROP_FLOAT, PROP_FACTOR | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_RigidBodyOb_reset, 85721088, NULL, NULL,
	0, -1, NULL},
	RigidBodyObject_friction_get, RigidBodyObject_friction_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 1.0f, 0.0f, FLT_MAX, 1.0f, 3, 0.5000000000f, NULL
};

FloatPropertyRNA rna_RigidBodyObject_restitution = {
	{(PropertyRNA *)&rna_RigidBodyObject_use_margin, (PropertyRNA *)&rna_RigidBodyObject_friction,
	-1, "restitution", 3, "Restitution",
	"Tendency of object to bounce after colliding with another (0 = stays still, 1 = perfectly elastic)",
	0, "*",
	PROP_FLOAT, PROP_FACTOR | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_RigidBodyOb_reset, 85721088, NULL, NULL,
	0, -1, NULL},
	RigidBodyObject_restitution_get, RigidBodyObject_restitution_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 1.0f, 0.0f, FLT_MAX, 1.0f, 3, 0.0f, NULL
};

BoolPropertyRNA rna_RigidBodyObject_use_margin = {
	{(PropertyRNA *)&rna_RigidBodyObject_collision_margin, (PropertyRNA *)&rna_RigidBodyObject_restitution,
	-1, "use_margin", 3, "Collision Margin",
	"Use custom collision margin (some shapes will have a visible gap around them)",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_RigidBodyOb_shape_reset, 85721088, NULL, NULL,
	0, -1, NULL},
	RigidBodyObject_use_margin_get, RigidBodyObject_use_margin_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

FloatPropertyRNA rna_RigidBodyObject_collision_margin = {
	{(PropertyRNA *)&rna_RigidBodyObject_collision_groups, (PropertyRNA *)&rna_RigidBodyObject_use_margin,
	-1, "collision_margin", 3, "Collision Margin",
	"Threshold of distance near surface where collisions are still considered (best results when non-zero)",
	0, "*",
	PROP_FLOAT, PROP_NONE | PROP_UNIT_LENGTH, NULL, 0, {0, 0, 0}, 0,
	rna_RigidBodyOb_shape_reset, 85721088, NULL, NULL,
	0, -1, NULL},
	RigidBodyObject_collision_margin_get, RigidBodyObject_collision_margin_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 1.0f, 0.0f, 1.0f, 0.0099999998f, 3, 0.0399999991f, NULL
};

static int rna_RigidBodyObject_collision_groups_default[20] = {
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

BoolPropertyRNA rna_RigidBodyObject_collision_groups = {
	{NULL, (PropertyRNA *)&rna_RigidBodyObject_collision_margin,
	-1, "collision_groups", 65539, "Collision Groups",
	"Collision Groups Rigid Body belongs to",
	0, "*",
	PROP_BOOLEAN, PROP_LAYER_MEMBER | PROP_UNIT_NONE, NULL, 1, {20, 0, 0}, 20,
	rna_RigidBodyOb_reset, 85721088, NULL, NULL,
	0, -1, NULL},
	NULL, NULL, RigidBodyObject_collision_groups_get, RigidBodyObject_collision_groups_set, NULL, NULL, NULL, NULL, 0, rna_RigidBodyObject_collision_groups_default
};

StructRNA RNA_RigidBodyObject = {
	{(ContainerRNA *)&RNA_RigidBodyConstraint, (ContainerRNA *)&RNA_RigidBodyWorld,
	NULL,
	{(PropertyRNA *)&rna_RigidBodyObject_rna_properties, (PropertyRNA *)&rna_RigidBodyObject_collision_groups}},
	"RigidBodyObject", NULL, NULL, 4, "Rigid Body Object",
	"Settings for object participating in Rigid Body Simulation",
	"*", 17,
	NULL, (PropertyRNA *)&rna_RigidBodyObject_rna_properties,
	NULL,
	NULL,
	NULL,
	rna_RigidBodyOb_path,
	NULL,
	NULL,
	NULL,
	NULL,
	{NULL, NULL}
};

/* Rigid Body Constraint */
CollectionPropertyRNA rna_RigidBodyConstraint_rna_properties = {
	{(PropertyRNA *)&rna_RigidBodyConstraint_rna_type, NULL,
	-1, "rna_properties", 128, "Properties",
	"RNA property collection",
	0, "*",
	PROP_COLLECTION, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	RigidBodyConstraint_rna_properties_begin, RigidBodyConstraint_rna_properties_next, RigidBodyConstraint_rna_properties_end, RigidBodyConstraint_rna_properties_get, NULL, NULL, RigidBodyConstraint_rna_properties_lookup_string, NULL, &RNA_Property
};

PointerPropertyRNA rna_RigidBodyConstraint_rna_type = {
	{(PropertyRNA *)&rna_RigidBodyConstraint_type, (PropertyRNA *)&rna_RigidBodyConstraint_rna_properties,
	-1, "rna_type", 8912896, "RNA",
	"RNA type definition",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	RigidBodyConstraint_rna_type_get, NULL, NULL, NULL,&RNA_Struct
};

static EnumPropertyItem rna_RigidBodyConstraint_type_items[9] = {
	{8, "FIXED", 0, "Fixed", "Glue rigid bodies together"},
	{0, "POINT", 0, "Point", "Constrain rigid bodies to move around common pivot point"},
	{1, "HINGE", 0, "Hinge", "Restrict rigid body rotation to one axis"},
	{3, "SLIDER", 0, "Slider", "Restrict rigid body translation to one axis"},
	{9, "PISTON", 0, "Piston", "Restrict rigid body translation and rotation to one axis"},
	{5, "GENERIC", 0, "Generic", "Restrict translation and rotation to specified axes"},
	{6, "GENERIC_SPRING", 0, "Generic Spring", "Restrict translation and rotation to specified axes with springs"},
	{11, "MOTOR", 0, "Motor", "Drive rigid body around or along an axis"},
	{0, NULL, 0, NULL, NULL}
};

EnumPropertyRNA rna_RigidBodyConstraint_type = {
	{(PropertyRNA *)&rna_RigidBodyConstraint_enabled, (PropertyRNA *)&rna_RigidBodyConstraint_rna_type,
	-1, "type", 1, "Type",
	"Type of Rigid Body Constraint",
	0, "*",
	PROP_ENUM, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_RigidBodyOb_reset, 85721088, NULL, NULL,
	0, -1, NULL},
	RigidBodyConstraint_type_get, RigidBodyConstraint_type_set, NULL, NULL, NULL, NULL, rna_RigidBodyConstraint_type_items, 8, 0
};

BoolPropertyRNA rna_RigidBodyConstraint_enabled = {
	{(PropertyRNA *)&rna_RigidBodyConstraint_disable_collisions, (PropertyRNA *)&rna_RigidBodyConstraint_type,
	-1, "enabled", 3, "Enabled",
	"Enable this constraint",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_RigidBodyOb_reset, 85721088, NULL, NULL,
	0, -1, NULL},
	RigidBodyConstraint_enabled_get, RigidBodyConstraint_enabled_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_RigidBodyConstraint_disable_collisions = {
	{(PropertyRNA *)&rna_RigidBodyConstraint_object1, (PropertyRNA *)&rna_RigidBodyConstraint_enabled,
	-1, "disable_collisions", 3, "Disable Collisions",
	"Disable collisions between constrained rigid bodies",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_RigidBodyOb_reset, 85721088, NULL, NULL,
	0, -1, NULL},
	RigidBodyConstraint_disable_collisions_get, RigidBodyConstraint_disable_collisions_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

PointerPropertyRNA rna_RigidBodyConstraint_object1 = {
	{(PropertyRNA *)&rna_RigidBodyConstraint_object2, (PropertyRNA *)&rna_RigidBodyConstraint_disable_collisions,
	-1, "object1", 8388609, "Object 1",
	"First Rigid Body Object to be constrained",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_RigidBodyOb_reset, 85721088, NULL, NULL,
	0, -1, NULL},
	RigidBodyConstraint_object1_get, RigidBodyConstraint_object1_set, NULL, NULL,&RNA_Object
};

PointerPropertyRNA rna_RigidBodyConstraint_object2 = {
	{(PropertyRNA *)&rna_RigidBodyConstraint_use_breaking, (PropertyRNA *)&rna_RigidBodyConstraint_object1,
	-1, "object2", 8388609, "Object 2",
	"Second Rigid Body Object to be constrained",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_RigidBodyOb_reset, 85721088, NULL, NULL,
	0, -1, NULL},
	RigidBodyConstraint_object2_get, RigidBodyConstraint_object2_set, NULL, NULL,&RNA_Object
};

BoolPropertyRNA rna_RigidBodyConstraint_use_breaking = {
	{(PropertyRNA *)&rna_RigidBodyConstraint_breaking_threshold, (PropertyRNA *)&rna_RigidBodyConstraint_object2,
	-1, "use_breaking", 3, "Breakable",
	"Constraint can be broken if it receives an impulse above the threshold",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_RigidBodyOb_reset, 85721088, NULL, NULL,
	0, -1, NULL},
	RigidBodyConstraint_use_breaking_get, RigidBodyConstraint_use_breaking_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

FloatPropertyRNA rna_RigidBodyConstraint_breaking_threshold = {
	{(PropertyRNA *)&rna_RigidBodyConstraint_use_override_solver_iterations, (PropertyRNA *)&rna_RigidBodyConstraint_use_breaking,
	-1, "breaking_threshold", 3, "Breaking Threshold",
	"Impulse threshold that must be reached for the constraint to break",
	0, "*",
	PROP_FLOAT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_RigidBodyOb_reset, 85721088, NULL, NULL,
	0, -1, NULL},
	RigidBodyConstraint_breaking_threshold_get, RigidBodyConstraint_breaking_threshold_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 1000.0f, 0.0f, FLT_MAX, 100.0f, 2, 10.0f, NULL
};

BoolPropertyRNA rna_RigidBodyConstraint_use_override_solver_iterations = {
	{(PropertyRNA *)&rna_RigidBodyConstraint_solver_iterations, (PropertyRNA *)&rna_RigidBodyConstraint_breaking_threshold,
	-1, "use_override_solver_iterations", 3, "Override Solver Iterations",
	"Override the number of solver iterations for this constraint",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_RigidBodyOb_reset, 85721088, NULL, NULL,
	0, -1, NULL},
	RigidBodyConstraint_use_override_solver_iterations_get, RigidBodyConstraint_use_override_solver_iterations_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

IntPropertyRNA rna_RigidBodyConstraint_solver_iterations = {
	{(PropertyRNA *)&rna_RigidBodyConstraint_use_limit_lin_x, (PropertyRNA *)&rna_RigidBodyConstraint_use_override_solver_iterations,
	-1, "solver_iterations", 3, "Solver Iterations",
	"Number of constraint solver iterations made per simulation step (higher values are more accurate but slower)",
	0, "*",
	PROP_INT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_RigidBodyOb_reset, 83886080, NULL, NULL,
	0, -1, NULL},
	RigidBodyConstraint_solver_iterations_get, RigidBodyConstraint_solver_iterations_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL,
	1, 100, 1, 1000, 1, 10, NULL
};

BoolPropertyRNA rna_RigidBodyConstraint_use_limit_lin_x = {
	{(PropertyRNA *)&rna_RigidBodyConstraint_use_limit_lin_y, (PropertyRNA *)&rna_RigidBodyConstraint_solver_iterations,
	-1, "use_limit_lin_x", 3, "X Axis",
	"Limit translation on X axis",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_RigidBodyOb_reset, 85393408, NULL, NULL,
	0, -1, NULL},
	RigidBodyConstraint_use_limit_lin_x_get, RigidBodyConstraint_use_limit_lin_x_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_RigidBodyConstraint_use_limit_lin_y = {
	{(PropertyRNA *)&rna_RigidBodyConstraint_use_limit_lin_z, (PropertyRNA *)&rna_RigidBodyConstraint_use_limit_lin_x,
	-1, "use_limit_lin_y", 3, "Y Axis",
	"Limit translation on Y axis",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_RigidBodyOb_reset, 85393408, NULL, NULL,
	0, -1, NULL},
	RigidBodyConstraint_use_limit_lin_y_get, RigidBodyConstraint_use_limit_lin_y_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_RigidBodyConstraint_use_limit_lin_z = {
	{(PropertyRNA *)&rna_RigidBodyConstraint_use_limit_ang_x, (PropertyRNA *)&rna_RigidBodyConstraint_use_limit_lin_y,
	-1, "use_limit_lin_z", 3, "Z Axis",
	"Limit translation on Z axis",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_RigidBodyOb_reset, 85393408, NULL, NULL,
	0, -1, NULL},
	RigidBodyConstraint_use_limit_lin_z_get, RigidBodyConstraint_use_limit_lin_z_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_RigidBodyConstraint_use_limit_ang_x = {
	{(PropertyRNA *)&rna_RigidBodyConstraint_use_limit_ang_y, (PropertyRNA *)&rna_RigidBodyConstraint_use_limit_lin_z,
	-1, "use_limit_ang_x", 3, "X Angle",
	"Limit rotation around X axis",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_RigidBodyOb_reset, 85393408, NULL, NULL,
	0, -1, NULL},
	RigidBodyConstraint_use_limit_ang_x_get, RigidBodyConstraint_use_limit_ang_x_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_RigidBodyConstraint_use_limit_ang_y = {
	{(PropertyRNA *)&rna_RigidBodyConstraint_use_limit_ang_z, (PropertyRNA *)&rna_RigidBodyConstraint_use_limit_ang_x,
	-1, "use_limit_ang_y", 3, "Y Angle",
	"Limit rotation around Y axis",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_RigidBodyOb_reset, 85393408, NULL, NULL,
	0, -1, NULL},
	RigidBodyConstraint_use_limit_ang_y_get, RigidBodyConstraint_use_limit_ang_y_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_RigidBodyConstraint_use_limit_ang_z = {
	{(PropertyRNA *)&rna_RigidBodyConstraint_use_spring_x, (PropertyRNA *)&rna_RigidBodyConstraint_use_limit_ang_y,
	-1, "use_limit_ang_z", 3, "Z Angle",
	"Limit rotation around Z axis",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_RigidBodyOb_reset, 85393408, NULL, NULL,
	0, -1, NULL},
	RigidBodyConstraint_use_limit_ang_z_get, RigidBodyConstraint_use_limit_ang_z_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_RigidBodyConstraint_use_spring_x = {
	{(PropertyRNA *)&rna_RigidBodyConstraint_use_spring_y, (PropertyRNA *)&rna_RigidBodyConstraint_use_limit_ang_z,
	-1, "use_spring_x", 3, "X Spring",
	"Enable spring on X axis",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_RigidBodyOb_reset, 83886080, NULL, NULL,
	0, -1, NULL},
	RigidBodyConstraint_use_spring_x_get, RigidBodyConstraint_use_spring_x_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_RigidBodyConstraint_use_spring_y = {
	{(PropertyRNA *)&rna_RigidBodyConstraint_use_spring_z, (PropertyRNA *)&rna_RigidBodyConstraint_use_spring_x,
	-1, "use_spring_y", 3, "Y Spring",
	"Enable spring on Y axis",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_RigidBodyOb_reset, 83886080, NULL, NULL,
	0, -1, NULL},
	RigidBodyConstraint_use_spring_y_get, RigidBodyConstraint_use_spring_y_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_RigidBodyConstraint_use_spring_z = {
	{(PropertyRNA *)&rna_RigidBodyConstraint_use_motor_lin, (PropertyRNA *)&rna_RigidBodyConstraint_use_spring_y,
	-1, "use_spring_z", 3, "Z Spring",
	"Enable spring on Z axis",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_RigidBodyOb_reset, 83886080, NULL, NULL,
	0, -1, NULL},
	RigidBodyConstraint_use_spring_z_get, RigidBodyConstraint_use_spring_z_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_RigidBodyConstraint_use_motor_lin = {
	{(PropertyRNA *)&rna_RigidBodyConstraint_use_motor_ang, (PropertyRNA *)&rna_RigidBodyConstraint_use_spring_z,
	-1, "use_motor_lin", 3, "Linear Motor",
	"Enable linear motor",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_RigidBodyOb_reset, 83886080, NULL, NULL,
	0, -1, NULL},
	RigidBodyConstraint_use_motor_lin_get, RigidBodyConstraint_use_motor_lin_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_RigidBodyConstraint_use_motor_ang = {
	{(PropertyRNA *)&rna_RigidBodyConstraint_limit_lin_x_lower, (PropertyRNA *)&rna_RigidBodyConstraint_use_motor_lin,
	-1, "use_motor_ang", 3, "Angular Motor",
	"Enable angular motor",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_RigidBodyOb_reset, 83886080, NULL, NULL,
	0, -1, NULL},
	RigidBodyConstraint_use_motor_ang_get, RigidBodyConstraint_use_motor_ang_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

FloatPropertyRNA rna_RigidBodyConstraint_limit_lin_x_lower = {
	{(PropertyRNA *)&rna_RigidBodyConstraint_limit_lin_x_upper, (PropertyRNA *)&rna_RigidBodyConstraint_use_motor_ang,
	-1, "limit_lin_x_lower", 8195, "Lower X Limit",
	"Lower limit of X axis translation",
	0, "*",
	PROP_FLOAT, PROP_NONE | PROP_UNIT_LENGTH, NULL, 0, {0, 0, 0}, 0,
	rna_RigidBodyOb_reset, 85393408, NULL, NULL,
	offsetof(RigidBodyCon, limit_lin_x_lower), 4, NULL},
	RigidBodyConstraint_limit_lin_x_lower_get, RigidBodyConstraint_limit_lin_x_lower_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, -10000.0f, 10000.0f, -FLT_MAX, FLT_MAX, 10.0f, 3, -1.0f, NULL
};

FloatPropertyRNA rna_RigidBodyConstraint_limit_lin_x_upper = {
	{(PropertyRNA *)&rna_RigidBodyConstraint_limit_lin_y_lower, (PropertyRNA *)&rna_RigidBodyConstraint_limit_lin_x_lower,
	-1, "limit_lin_x_upper", 8195, "Upper X Limit",
	"Upper limit of X axis translation",
	0, "*",
	PROP_FLOAT, PROP_NONE | PROP_UNIT_LENGTH, NULL, 0, {0, 0, 0}, 0,
	rna_RigidBodyOb_reset, 85393408, NULL, NULL,
	offsetof(RigidBodyCon, limit_lin_x_upper), 4, NULL},
	RigidBodyConstraint_limit_lin_x_upper_get, RigidBodyConstraint_limit_lin_x_upper_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, -10000.0f, 10000.0f, -FLT_MAX, FLT_MAX, 10.0f, 3, 1.0f, NULL
};

FloatPropertyRNA rna_RigidBodyConstraint_limit_lin_y_lower = {
	{(PropertyRNA *)&rna_RigidBodyConstraint_limit_lin_y_upper, (PropertyRNA *)&rna_RigidBodyConstraint_limit_lin_x_upper,
	-1, "limit_lin_y_lower", 8195, "Lower Y Limit",
	"Lower limit of Y axis translation",
	0, "*",
	PROP_FLOAT, PROP_NONE | PROP_UNIT_LENGTH, NULL, 0, {0, 0, 0}, 0,
	rna_RigidBodyOb_reset, 85393408, NULL, NULL,
	offsetof(RigidBodyCon, limit_lin_y_lower), 4, NULL},
	RigidBodyConstraint_limit_lin_y_lower_get, RigidBodyConstraint_limit_lin_y_lower_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, -10000.0f, 10000.0f, -FLT_MAX, FLT_MAX, 10.0f, 3, -1.0f, NULL
};

FloatPropertyRNA rna_RigidBodyConstraint_limit_lin_y_upper = {
	{(PropertyRNA *)&rna_RigidBodyConstraint_limit_lin_z_lower, (PropertyRNA *)&rna_RigidBodyConstraint_limit_lin_y_lower,
	-1, "limit_lin_y_upper", 8195, "Upper Y Limit",
	"Upper limit of Y axis translation",
	0, "*",
	PROP_FLOAT, PROP_NONE | PROP_UNIT_LENGTH, NULL, 0, {0, 0, 0}, 0,
	rna_RigidBodyOb_reset, 85393408, NULL, NULL,
	offsetof(RigidBodyCon, limit_lin_y_upper), 4, NULL},
	RigidBodyConstraint_limit_lin_y_upper_get, RigidBodyConstraint_limit_lin_y_upper_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, -10000.0f, 10000.0f, -FLT_MAX, FLT_MAX, 10.0f, 3, 1.0f, NULL
};

FloatPropertyRNA rna_RigidBodyConstraint_limit_lin_z_lower = {
	{(PropertyRNA *)&rna_RigidBodyConstraint_limit_lin_z_upper, (PropertyRNA *)&rna_RigidBodyConstraint_limit_lin_y_upper,
	-1, "limit_lin_z_lower", 8195, "Lower Z Limit",
	"Lower limit of Z axis translation",
	0, "*",
	PROP_FLOAT, PROP_NONE | PROP_UNIT_LENGTH, NULL, 0, {0, 0, 0}, 0,
	rna_RigidBodyOb_reset, 85393408, NULL, NULL,
	offsetof(RigidBodyCon, limit_lin_z_lower), 4, NULL},
	RigidBodyConstraint_limit_lin_z_lower_get, RigidBodyConstraint_limit_lin_z_lower_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, -10000.0f, 10000.0f, -FLT_MAX, FLT_MAX, 10.0f, 3, -1.0f, NULL
};

FloatPropertyRNA rna_RigidBodyConstraint_limit_lin_z_upper = {
	{(PropertyRNA *)&rna_RigidBodyConstraint_limit_ang_x_lower, (PropertyRNA *)&rna_RigidBodyConstraint_limit_lin_z_lower,
	-1, "limit_lin_z_upper", 8195, "Upper Z Limit",
	"Upper limit of Z axis translation",
	0, "*",
	PROP_FLOAT, PROP_NONE | PROP_UNIT_LENGTH, NULL, 0, {0, 0, 0}, 0,
	rna_RigidBodyOb_reset, 85393408, NULL, NULL,
	offsetof(RigidBodyCon, limit_lin_z_upper), 4, NULL},
	RigidBodyConstraint_limit_lin_z_upper_get, RigidBodyConstraint_limit_lin_z_upper_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, -10000.0f, 10000.0f, -FLT_MAX, FLT_MAX, 10.0f, 3, 1.0f, NULL
};

FloatPropertyRNA rna_RigidBodyConstraint_limit_ang_x_lower = {
	{(PropertyRNA *)&rna_RigidBodyConstraint_limit_ang_x_upper, (PropertyRNA *)&rna_RigidBodyConstraint_limit_lin_z_upper,
	-1, "limit_ang_x_lower", 8195, "Lower X Angle Limit",
	"Lower limit of X axis rotation",
	0, "*",
	PROP_FLOAT, PROP_ANGLE | PROP_UNIT_ROTATION, NULL, 0, {0, 0, 0}, 0,
	rna_RigidBodyOb_reset, 85393408, NULL, NULL,
	offsetof(RigidBodyCon, limit_ang_x_lower), 4, NULL},
	RigidBodyConstraint_limit_ang_x_lower_get, RigidBodyConstraint_limit_ang_x_lower_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, -6.2831854820f, 6.2831854820f, -6.2831854820f, 6.2831854820f, 10.0f, 3, -0.7853981853f, NULL
};

FloatPropertyRNA rna_RigidBodyConstraint_limit_ang_x_upper = {
	{(PropertyRNA *)&rna_RigidBodyConstraint_limit_ang_y_lower, (PropertyRNA *)&rna_RigidBodyConstraint_limit_ang_x_lower,
	-1, "limit_ang_x_upper", 8195, "Upper X Angle Limit",
	"Upper limit of X axis rotation",
	0, "*",
	PROP_FLOAT, PROP_ANGLE | PROP_UNIT_ROTATION, NULL, 0, {0, 0, 0}, 0,
	rna_RigidBodyOb_reset, 85393408, NULL, NULL,
	offsetof(RigidBodyCon, limit_ang_x_upper), 4, NULL},
	RigidBodyConstraint_limit_ang_x_upper_get, RigidBodyConstraint_limit_ang_x_upper_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, -6.2831854820f, 6.2831854820f, -6.2831854820f, 6.2831854820f, 10.0f, 3, 0.7853981853f, NULL
};

FloatPropertyRNA rna_RigidBodyConstraint_limit_ang_y_lower = {
	{(PropertyRNA *)&rna_RigidBodyConstraint_limit_ang_y_upper, (PropertyRNA *)&rna_RigidBodyConstraint_limit_ang_x_upper,
	-1, "limit_ang_y_lower", 8195, "Lower Y Angle Limit",
	"Lower limit of Y axis rotation",
	0, "*",
	PROP_FLOAT, PROP_ANGLE | PROP_UNIT_ROTATION, NULL, 0, {0, 0, 0}, 0,
	rna_RigidBodyOb_reset, 85393408, NULL, NULL,
	offsetof(RigidBodyCon, limit_ang_y_lower), 4, NULL},
	RigidBodyConstraint_limit_ang_y_lower_get, RigidBodyConstraint_limit_ang_y_lower_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, -6.2831854820f, 6.2831854820f, -6.2831854820f, 6.2831854820f, 10.0f, 3, -0.7853981853f, NULL
};

FloatPropertyRNA rna_RigidBodyConstraint_limit_ang_y_upper = {
	{(PropertyRNA *)&rna_RigidBodyConstraint_limit_ang_z_lower, (PropertyRNA *)&rna_RigidBodyConstraint_limit_ang_y_lower,
	-1, "limit_ang_y_upper", 8195, "Upper Y Angle Limit",
	"Upper limit of Y axis rotation",
	0, "*",
	PROP_FLOAT, PROP_ANGLE | PROP_UNIT_ROTATION, NULL, 0, {0, 0, 0}, 0,
	rna_RigidBodyOb_reset, 85393408, NULL, NULL,
	offsetof(RigidBodyCon, limit_ang_y_upper), 4, NULL},
	RigidBodyConstraint_limit_ang_y_upper_get, RigidBodyConstraint_limit_ang_y_upper_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, -6.2831854820f, 6.2831854820f, -6.2831854820f, 6.2831854820f, 10.0f, 3, 0.7853981853f, NULL
};

FloatPropertyRNA rna_RigidBodyConstraint_limit_ang_z_lower = {
	{(PropertyRNA *)&rna_RigidBodyConstraint_limit_ang_z_upper, (PropertyRNA *)&rna_RigidBodyConstraint_limit_ang_y_upper,
	-1, "limit_ang_z_lower", 8195, "Lower Z Angle Limit",
	"Lower limit of Z axis rotation",
	0, "*",
	PROP_FLOAT, PROP_ANGLE | PROP_UNIT_ROTATION, NULL, 0, {0, 0, 0}, 0,
	rna_RigidBodyOb_reset, 85393408, NULL, NULL,
	offsetof(RigidBodyCon, limit_ang_z_lower), 4, NULL},
	RigidBodyConstraint_limit_ang_z_lower_get, RigidBodyConstraint_limit_ang_z_lower_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, -6.2831854820f, 6.2831854820f, -6.2831854820f, 6.2831854820f, 10.0f, 3, -0.7853981853f, NULL
};

FloatPropertyRNA rna_RigidBodyConstraint_limit_ang_z_upper = {
	{(PropertyRNA *)&rna_RigidBodyConstraint_spring_stiffness_x, (PropertyRNA *)&rna_RigidBodyConstraint_limit_ang_z_lower,
	-1, "limit_ang_z_upper", 8195, "Upper Z Angle Limit",
	"Upper limit of Z axis rotation",
	0, "*",
	PROP_FLOAT, PROP_ANGLE | PROP_UNIT_ROTATION, NULL, 0, {0, 0, 0}, 0,
	rna_RigidBodyOb_reset, 85393408, NULL, NULL,
	offsetof(RigidBodyCon, limit_ang_z_upper), 4, NULL},
	RigidBodyConstraint_limit_ang_z_upper_get, RigidBodyConstraint_limit_ang_z_upper_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, -6.2831854820f, 6.2831854820f, -6.2831854820f, 6.2831854820f, 10.0f, 3, 0.7853981853f, NULL
};

FloatPropertyRNA rna_RigidBodyConstraint_spring_stiffness_x = {
	{(PropertyRNA *)&rna_RigidBodyConstraint_spring_stiffness_y, (PropertyRNA *)&rna_RigidBodyConstraint_limit_ang_z_upper,
	-1, "spring_stiffness_x", 3, "X Axis Stiffness",
	"Stiffness on the X axis",
	0, "*",
	PROP_FLOAT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_RigidBodyOb_reset, 83886080, NULL, NULL,
	0, -1, NULL},
	RigidBodyConstraint_spring_stiffness_x_get, RigidBodyConstraint_spring_stiffness_x_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 100.0f, 0.0f, FLT_MAX, 1.0f, 3, 10.0f, NULL
};

FloatPropertyRNA rna_RigidBodyConstraint_spring_stiffness_y = {
	{(PropertyRNA *)&rna_RigidBodyConstraint_spring_stiffness_z, (PropertyRNA *)&rna_RigidBodyConstraint_spring_stiffness_x,
	-1, "spring_stiffness_y", 3, "Y Axis Stiffness",
	"Stiffness on the Y axis",
	0, "*",
	PROP_FLOAT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_RigidBodyOb_reset, 83886080, NULL, NULL,
	0, -1, NULL},
	RigidBodyConstraint_spring_stiffness_y_get, RigidBodyConstraint_spring_stiffness_y_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 100.0f, 0.0f, FLT_MAX, 1.0f, 3, 10.0f, NULL
};

FloatPropertyRNA rna_RigidBodyConstraint_spring_stiffness_z = {
	{(PropertyRNA *)&rna_RigidBodyConstraint_spring_damping_x, (PropertyRNA *)&rna_RigidBodyConstraint_spring_stiffness_y,
	-1, "spring_stiffness_z", 3, "Z Axis Stiffness",
	"Stiffness on the Z axis",
	0, "*",
	PROP_FLOAT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_RigidBodyOb_reset, 83886080, NULL, NULL,
	0, -1, NULL},
	RigidBodyConstraint_spring_stiffness_z_get, RigidBodyConstraint_spring_stiffness_z_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 100.0f, 0.0f, FLT_MAX, 1.0f, 3, 10.0f, NULL
};

FloatPropertyRNA rna_RigidBodyConstraint_spring_damping_x = {
	{(PropertyRNA *)&rna_RigidBodyConstraint_spring_damping_y, (PropertyRNA *)&rna_RigidBodyConstraint_spring_stiffness_z,
	-1, "spring_damping_x", 3, "Damping X",
	"Damping on the X axis",
	0, "*",
	PROP_FLOAT, PROP_FACTOR | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_RigidBodyOb_reset, 83886080, NULL, NULL,
	0, -1, NULL},
	RigidBodyConstraint_spring_damping_x_get, RigidBodyConstraint_spring_damping_x_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 1.0f, 0.0f, 1.0f, 10.0f, 3, 0.5000000000f, NULL
};

FloatPropertyRNA rna_RigidBodyConstraint_spring_damping_y = {
	{(PropertyRNA *)&rna_RigidBodyConstraint_spring_damping_z, (PropertyRNA *)&rna_RigidBodyConstraint_spring_damping_x,
	-1, "spring_damping_y", 3, "Damping Y",
	"Damping on the Y axis",
	0, "*",
	PROP_FLOAT, PROP_FACTOR | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_RigidBodyOb_reset, 83886080, NULL, NULL,
	0, -1, NULL},
	RigidBodyConstraint_spring_damping_y_get, RigidBodyConstraint_spring_damping_y_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 1.0f, 0.0f, 1.0f, 10.0f, 3, 0.5000000000f, NULL
};

FloatPropertyRNA rna_RigidBodyConstraint_spring_damping_z = {
	{(PropertyRNA *)&rna_RigidBodyConstraint_motor_lin_target_velocity, (PropertyRNA *)&rna_RigidBodyConstraint_spring_damping_y,
	-1, "spring_damping_z", 3, "Damping Z",
	"Damping on the Z axis",
	0, "*",
	PROP_FLOAT, PROP_FACTOR | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_RigidBodyOb_reset, 83886080, NULL, NULL,
	0, -1, NULL},
	RigidBodyConstraint_spring_damping_z_get, RigidBodyConstraint_spring_damping_z_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 1.0f, 0.0f, 1.0f, 10.0f, 3, 0.5000000000f, NULL
};

FloatPropertyRNA rna_RigidBodyConstraint_motor_lin_target_velocity = {
	{(PropertyRNA *)&rna_RigidBodyConstraint_motor_lin_max_impulse, (PropertyRNA *)&rna_RigidBodyConstraint_spring_damping_z,
	-1, "motor_lin_target_velocity", 3, "Target Velocity",
	"Target linear motor velocity",
	0, "*",
	PROP_FLOAT, PROP_NONE | PROP_UNIT_VELOCITY, NULL, 0, {0, 0, 0}, 0,
	rna_RigidBodyOb_reset, 83886080, NULL, NULL,
	0, -1, NULL},
	RigidBodyConstraint_motor_lin_target_velocity_get, RigidBodyConstraint_motor_lin_target_velocity_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, -100.0f, 100.0f, -FLT_MAX, FLT_MAX, 1.0f, 3, 1.0f, NULL
};

FloatPropertyRNA rna_RigidBodyConstraint_motor_lin_max_impulse = {
	{(PropertyRNA *)&rna_RigidBodyConstraint_motor_ang_target_velocity, (PropertyRNA *)&rna_RigidBodyConstraint_motor_lin_target_velocity,
	-1, "motor_lin_max_impulse", 3, "Max Impulse",
	"Maximum linear motor impulse",
	0, "*",
	PROP_FLOAT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_RigidBodyOb_reset, 83886080, NULL, NULL,
	0, -1, NULL},
	RigidBodyConstraint_motor_lin_max_impulse_get, RigidBodyConstraint_motor_lin_max_impulse_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 100.0f, 0.0f, FLT_MAX, 1.0f, 3, 1.0f, NULL
};

FloatPropertyRNA rna_RigidBodyConstraint_motor_ang_target_velocity = {
	{(PropertyRNA *)&rna_RigidBodyConstraint_motor_ang_max_impulse, (PropertyRNA *)&rna_RigidBodyConstraint_motor_lin_max_impulse,
	-1, "motor_ang_target_velocity", 3, "Target Velocity",
	"Target angular motor velocity",
	0, "*",
	PROP_FLOAT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_RigidBodyOb_reset, 83886080, NULL, NULL,
	0, -1, NULL},
	RigidBodyConstraint_motor_ang_target_velocity_get, RigidBodyConstraint_motor_ang_target_velocity_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, -100.0f, 100.0f, -FLT_MAX, FLT_MAX, 1.0f, 3, 1.0f, NULL
};

FloatPropertyRNA rna_RigidBodyConstraint_motor_ang_max_impulse = {
	{NULL, (PropertyRNA *)&rna_RigidBodyConstraint_motor_ang_target_velocity,
	-1, "motor_ang_max_impulse", 3, "Max Impulse",
	"Maximum angular motor impulse",
	0, "*",
	PROP_FLOAT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_RigidBodyOb_reset, 83886080, NULL, NULL,
	0, -1, NULL},
	RigidBodyConstraint_motor_ang_max_impulse_get, RigidBodyConstraint_motor_ang_max_impulse_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 100.0f, 0.0f, FLT_MAX, 1.0f, 3, 1.0f, NULL
};

StructRNA RNA_RigidBodyConstraint = {
	{(ContainerRNA *)&RNA_Scene, (ContainerRNA *)&RNA_RigidBodyObject,
	NULL,
	{(PropertyRNA *)&rna_RigidBodyConstraint_rna_properties, (PropertyRNA *)&rna_RigidBodyConstraint_motor_ang_max_impulse}},
	"RigidBodyConstraint", NULL, NULL, 4, "Rigid Body Constraint",
	"Constraint influencing Objects inside Rigid Body Simulation",
	"*", 17,
	NULL, (PropertyRNA *)&rna_RigidBodyConstraint_rna_properties,
	NULL,
	NULL,
	NULL,
	rna_RigidBodyCon_path,
	NULL,
	NULL,
	NULL,
	NULL,
	{NULL, NULL}
};

