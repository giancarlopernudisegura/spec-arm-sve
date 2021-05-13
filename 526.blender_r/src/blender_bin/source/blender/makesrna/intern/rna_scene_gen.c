
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

#include "rna_scene.c"
#include "rna_scene_api.c"

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

PointerPropertyRNA rna_Scene_camera;
PointerPropertyRNA rna_Scene_background_set;
PointerPropertyRNA rna_Scene_world;
FloatPropertyRNA rna_Scene_cursor_location;
CollectionPropertyRNA rna_Scene_object_bases;
CollectionPropertyRNA rna_Scene_objects;
BoolPropertyRNA rna_Scene_layers;
IntPropertyRNA rna_Scene_active_layer;
IntPropertyRNA rna_Scene_frame_current;
FloatPropertyRNA rna_Scene_frame_subframe;
IntPropertyRNA rna_Scene_frame_start;
IntPropertyRNA rna_Scene_frame_end;
IntPropertyRNA rna_Scene_frame_step;
FloatPropertyRNA rna_Scene_frame_current_final;
BoolPropertyRNA rna_Scene_lock_frame_selection_to_range;
BoolPropertyRNA rna_Scene_use_preview_range;
IntPropertyRNA rna_Scene_frame_preview_start;
IntPropertyRNA rna_Scene_frame_preview_end;
BoolPropertyRNA rna_Scene_show_keys_from_selected_only;
StringPropertyRNA rna_Scene_use_stamp_note;
PointerPropertyRNA rna_Scene_animation_data;
BoolPropertyRNA rna_Scene_is_nla_tweakmode;
BoolPropertyRNA rna_Scene_use_frame_drop;
EnumPropertyRNA rna_Scene_sync_mode;
PointerPropertyRNA rna_Scene_node_tree;
BoolPropertyRNA rna_Scene_use_nodes;
PointerPropertyRNA rna_Scene_sequence_editor;
CollectionPropertyRNA rna_Scene_keying_sets;
CollectionPropertyRNA rna_Scene_keying_sets_all;
PointerPropertyRNA rna_Scene_rigidbody_world;
PointerPropertyRNA rna_Scene_tool_settings;
PointerPropertyRNA rna_Scene_unit_settings;
FloatPropertyRNA rna_Scene_gravity;
BoolPropertyRNA rna_Scene_use_gravity;
PointerPropertyRNA rna_Scene_render;
CollectionPropertyRNA rna_Scene_timeline_markers;
BoolPropertyRNA rna_Scene_use_audio;
BoolPropertyRNA rna_Scene_use_audio_sync;
BoolPropertyRNA rna_Scene_use_audio_scrub;
FloatPropertyRNA rna_Scene_audio_doppler_speed;
FloatPropertyRNA rna_Scene_audio_doppler_factor;
EnumPropertyRNA rna_Scene_audio_distance_model;
FloatPropertyRNA rna_Scene_audio_volume;
PointerPropertyRNA rna_Scene_game_settings;
PointerPropertyRNA rna_Scene_grease_pencil;
CollectionPropertyRNA rna_Scene_orientations;
PointerPropertyRNA rna_Scene_active_clip;
PointerPropertyRNA rna_Scene_view_settings;
PointerPropertyRNA rna_Scene_display_settings;
PointerPropertyRNA rna_Scene_sequencer_colorspace_settings;

extern FunctionRNA rna_ID_copy_func;
extern PointerPropertyRNA rna_ID_copy_id;

extern FunctionRNA rna_ID_user_clear_func;
extern FunctionRNA rna_ID_animation_data_create_func;
extern PointerPropertyRNA rna_ID_animation_data_create_anim_data;

extern FunctionRNA rna_ID_animation_data_clear_func;
extern FunctionRNA rna_ID_update_tag_func;
extern EnumPropertyRNA rna_ID_update_tag_refresh;


extern FunctionRNA rna_Scene_sequence_editor_create_func;
extern PointerPropertyRNA rna_Scene_sequence_editor_create_sequence_editor;

extern FunctionRNA rna_Scene_sequence_editor_clear_func;
extern FunctionRNA rna_Scene_statistics_func;
extern StringPropertyRNA rna_Scene_statistics_statistics;

extern FunctionRNA rna_Scene_frame_set_func;
extern IntPropertyRNA rna_Scene_frame_set_frame;
extern FloatPropertyRNA rna_Scene_frame_set_subframe;

extern FunctionRNA rna_Scene_update_func;
extern FunctionRNA rna_Scene_ray_cast_func;
extern FloatPropertyRNA rna_Scene_ray_cast_start;
extern FloatPropertyRNA rna_Scene_ray_cast_end;
extern BoolPropertyRNA rna_Scene_ray_cast_result;
extern PointerPropertyRNA rna_Scene_ray_cast_object;
extern FloatPropertyRNA rna_Scene_ray_cast_matrix;
extern FloatPropertyRNA rna_Scene_ray_cast_location;
extern FloatPropertyRNA rna_Scene_ray_cast_normal;



CollectionPropertyRNA rna_SceneBases_rna_properties;
PointerPropertyRNA rna_SceneBases_rna_type;
PointerPropertyRNA rna_SceneBases_active;


CollectionPropertyRNA rna_SceneObjects_rna_properties;
PointerPropertyRNA rna_SceneObjects_rna_type;
PointerPropertyRNA rna_SceneObjects_active;

extern FunctionRNA rna_SceneObjects_link_func;
extern PointerPropertyRNA rna_SceneObjects_link_object;
extern PointerPropertyRNA rna_SceneObjects_link_base;

extern FunctionRNA rna_SceneObjects_unlink_func;
extern PointerPropertyRNA rna_SceneObjects_unlink_object;



CollectionPropertyRNA rna_KeyingSets_rna_properties;
PointerPropertyRNA rna_KeyingSets_rna_type;
PointerPropertyRNA rna_KeyingSets_active;
IntPropertyRNA rna_KeyingSets_active_index;

extern FunctionRNA rna_KeyingSets_new_func;
extern StringPropertyRNA rna_KeyingSets_new_idname;
extern StringPropertyRNA rna_KeyingSets_new_name;
extern PointerPropertyRNA rna_KeyingSets_new_keyingset;



CollectionPropertyRNA rna_KeyingSetsAll_rna_properties;
PointerPropertyRNA rna_KeyingSetsAll_rna_type;
PointerPropertyRNA rna_KeyingSetsAll_active;
IntPropertyRNA rna_KeyingSetsAll_active_index;


CollectionPropertyRNA rna_TimelineMarkers_rna_properties;
PointerPropertyRNA rna_TimelineMarkers_rna_type;

extern FunctionRNA rna_TimelineMarkers_new_func;
extern StringPropertyRNA rna_TimelineMarkers_new_name;
extern IntPropertyRNA rna_TimelineMarkers_new_frame;
extern PointerPropertyRNA rna_TimelineMarkers_new_marker;

extern FunctionRNA rna_TimelineMarkers_remove_func;
extern PointerPropertyRNA rna_TimelineMarkers_remove_marker;

extern FunctionRNA rna_TimelineMarkers_clear_func;


CollectionPropertyRNA rna_ToolSettings_rna_properties;
PointerPropertyRNA rna_ToolSettings_rna_type;
PointerPropertyRNA rna_ToolSettings_sculpt;
BoolPropertyRNA rna_ToolSettings_use_auto_normalize;
BoolPropertyRNA rna_ToolSettings_use_multipaint;
EnumPropertyRNA rna_ToolSettings_vertex_group_user;
EnumPropertyRNA rna_ToolSettings_vertex_group_subset;
PointerPropertyRNA rna_ToolSettings_vertex_paint;
PointerPropertyRNA rna_ToolSettings_weight_paint;
PointerPropertyRNA rna_ToolSettings_image_paint;
PointerPropertyRNA rna_ToolSettings_uv_sculpt;
PointerPropertyRNA rna_ToolSettings_particle_edit;
BoolPropertyRNA rna_ToolSettings_use_uv_sculpt;
BoolPropertyRNA rna_ToolSettings_uv_sculpt_lock_borders;
BoolPropertyRNA rna_ToolSettings_uv_sculpt_all_islands;
EnumPropertyRNA rna_ToolSettings_uv_sculpt_tool;
EnumPropertyRNA rna_ToolSettings_uv_relax_method;
EnumPropertyRNA rna_ToolSettings_proportional_edit;
BoolPropertyRNA rna_ToolSettings_use_proportional_edit_objects;
BoolPropertyRNA rna_ToolSettings_use_proportional_edit_mask;
EnumPropertyRNA rna_ToolSettings_proportional_edit_falloff;
FloatPropertyRNA rna_ToolSettings_proportional_size;
FloatPropertyRNA rna_ToolSettings_normal_size;
FloatPropertyRNA rna_ToolSettings_double_threshold;
BoolPropertyRNA rna_ToolSettings_use_mesh_automerge;
BoolPropertyRNA rna_ToolSettings_use_snap;
BoolPropertyRNA rna_ToolSettings_use_snap_align_rotation;
EnumPropertyRNA rna_ToolSettings_snap_element;
EnumPropertyRNA rna_ToolSettings_snap_node_element;
EnumPropertyRNA rna_ToolSettings_snap_uv_element;
EnumPropertyRNA rna_ToolSettings_snap_target;
BoolPropertyRNA rna_ToolSettings_use_snap_peel_object;
BoolPropertyRNA rna_ToolSettings_use_snap_project;
BoolPropertyRNA rna_ToolSettings_use_snap_self;
BoolPropertyRNA rna_ToolSettings_use_grease_pencil_sessions;
BoolPropertyRNA rna_ToolSettings_use_keyframe_insert_auto;
EnumPropertyRNA rna_ToolSettings_auto_keying_mode;
BoolPropertyRNA rna_ToolSettings_use_record_with_nla;
BoolPropertyRNA rna_ToolSettings_use_keyframe_insert_keyingset;
EnumPropertyRNA rna_ToolSettings_uv_select_mode;
BoolPropertyRNA rna_ToolSettings_use_uv_select_sync;
BoolPropertyRNA rna_ToolSettings_show_uv_local_view;
BoolPropertyRNA rna_ToolSettings_mesh_select_mode;
FloatPropertyRNA rna_ToolSettings_vertex_group_weight;
EnumPropertyRNA rna_ToolSettings_edge_path_mode;
BoolPropertyRNA rna_ToolSettings_edge_path_live_unwrap;
BoolPropertyRNA rna_ToolSettings_use_bone_sketching;
BoolPropertyRNA rna_ToolSettings_use_etch_quick;
BoolPropertyRNA rna_ToolSettings_use_etch_overdraw;
BoolPropertyRNA rna_ToolSettings_use_etch_autoname;
StringPropertyRNA rna_ToolSettings_etch_number;
StringPropertyRNA rna_ToolSettings_etch_side;
PointerPropertyRNA rna_ToolSettings_etch_template;
IntPropertyRNA rna_ToolSettings_etch_subdivision_number;
FloatPropertyRNA rna_ToolSettings_etch_adaptive_limit;
FloatPropertyRNA rna_ToolSettings_etch_length_limit;
EnumPropertyRNA rna_ToolSettings_etch_roll_mode;
EnumPropertyRNA rna_ToolSettings_etch_convert_mode;
PointerPropertyRNA rna_ToolSettings_unified_paint_settings;
PointerPropertyRNA rna_ToolSettings_statvis;


CollectionPropertyRNA rna_UnifiedPaintSettings_rna_properties;
PointerPropertyRNA rna_UnifiedPaintSettings_rna_type;
BoolPropertyRNA rna_UnifiedPaintSettings_use_unified_size;
BoolPropertyRNA rna_UnifiedPaintSettings_use_unified_strength;
BoolPropertyRNA rna_UnifiedPaintSettings_use_unified_weight;
BoolPropertyRNA rna_UnifiedPaintSettings_use_unified_color;
IntPropertyRNA rna_UnifiedPaintSettings_size;
FloatPropertyRNA rna_UnifiedPaintSettings_unprojected_radius;
FloatPropertyRNA rna_UnifiedPaintSettings_strength;
FloatPropertyRNA rna_UnifiedPaintSettings_weight;
FloatPropertyRNA rna_UnifiedPaintSettings_color;
FloatPropertyRNA rna_UnifiedPaintSettings_secondary_color;
BoolPropertyRNA rna_UnifiedPaintSettings_use_pressure_size;
BoolPropertyRNA rna_UnifiedPaintSettings_use_pressure_strength;
BoolPropertyRNA rna_UnifiedPaintSettings_use_locked_size;


CollectionPropertyRNA rna_MeshStatVis_rna_properties;
PointerPropertyRNA rna_MeshStatVis_rna_type;
EnumPropertyRNA rna_MeshStatVis_type;
FloatPropertyRNA rna_MeshStatVis_overhang_min;
FloatPropertyRNA rna_MeshStatVis_overhang_max;
EnumPropertyRNA rna_MeshStatVis_overhang_axis;
FloatPropertyRNA rna_MeshStatVis_thickness_min;
FloatPropertyRNA rna_MeshStatVis_thickness_max;
IntPropertyRNA rna_MeshStatVis_thickness_samples;
FloatPropertyRNA rna_MeshStatVis_distort_min;
FloatPropertyRNA rna_MeshStatVis_distort_max;
FloatPropertyRNA rna_MeshStatVis_sharp_min;
FloatPropertyRNA rna_MeshStatVis_sharp_max;


CollectionPropertyRNA rna_UnitSettings_rna_properties;
PointerPropertyRNA rna_UnitSettings_rna_type;
EnumPropertyRNA rna_UnitSettings_system;
EnumPropertyRNA rna_UnitSettings_system_rotation;
FloatPropertyRNA rna_UnitSettings_scale_length;
BoolPropertyRNA rna_UnitSettings_use_separate;


CollectionPropertyRNA rna_ImageFormatSettings_rna_properties;
PointerPropertyRNA rna_ImageFormatSettings_rna_type;
EnumPropertyRNA rna_ImageFormatSettings_file_format;
EnumPropertyRNA rna_ImageFormatSettings_color_mode;
EnumPropertyRNA rna_ImageFormatSettings_color_depth;
IntPropertyRNA rna_ImageFormatSettings_quality;
IntPropertyRNA rna_ImageFormatSettings_compression;
BoolPropertyRNA rna_ImageFormatSettings_use_zbuffer;
BoolPropertyRNA rna_ImageFormatSettings_use_preview;
BoolPropertyRNA rna_ImageFormatSettings_use_cineon_log;
IntPropertyRNA rna_ImageFormatSettings_cineon_black;
IntPropertyRNA rna_ImageFormatSettings_cineon_white;
FloatPropertyRNA rna_ImageFormatSettings_cineon_gamma;
PointerPropertyRNA rna_ImageFormatSettings_view_settings;
PointerPropertyRNA rna_ImageFormatSettings_display_settings;


CollectionPropertyRNA rna_SceneGameData_rna_properties;
PointerPropertyRNA rna_SceneGameData_rna_type;
IntPropertyRNA rna_SceneGameData_resolution_x;
IntPropertyRNA rna_SceneGameData_resolution_y;
EnumPropertyRNA rna_SceneGameData_vsync;
EnumPropertyRNA rna_SceneGameData_samples;
IntPropertyRNA rna_SceneGameData_depth;
EnumPropertyRNA rna_SceneGameData_exit_key;
EnumPropertyRNA rna_SceneGameData_raster_storage;
IntPropertyRNA rna_SceneGameData_frequency;
BoolPropertyRNA rna_SceneGameData_show_fullscreen;
BoolPropertyRNA rna_SceneGameData_use_desktop;
EnumPropertyRNA rna_SceneGameData_frame_type;
FloatPropertyRNA rna_SceneGameData_frame_color;
EnumPropertyRNA rna_SceneGameData_stereo;
EnumPropertyRNA rna_SceneGameData_stereo_mode;
FloatPropertyRNA rna_SceneGameData_stereo_eye_separation;
EnumPropertyRNA rna_SceneGameData_dome_mode;
IntPropertyRNA rna_SceneGameData_dome_tessellation;
FloatPropertyRNA rna_SceneGameData_dome_buffer_resolution;
IntPropertyRNA rna_SceneGameData_dome_angle;
IntPropertyRNA rna_SceneGameData_dome_tilt;
PointerPropertyRNA rna_SceneGameData_dome_text;
EnumPropertyRNA rna_SceneGameData_physics_engine;
FloatPropertyRNA rna_SceneGameData_physics_gravity;
IntPropertyRNA rna_SceneGameData_occlusion_culling_resolution;
IntPropertyRNA rna_SceneGameData_fps;
IntPropertyRNA rna_SceneGameData_logic_step_max;
IntPropertyRNA rna_SceneGameData_physics_step_max;
IntPropertyRNA rna_SceneGameData_physics_step_sub;
FloatPropertyRNA rna_SceneGameData_deactivation_linear_threshold;
FloatPropertyRNA rna_SceneGameData_deactivation_angular_threshold;
FloatPropertyRNA rna_SceneGameData_deactivation_time;
BoolPropertyRNA rna_SceneGameData_use_occlusion_culling;
BoolPropertyRNA rna_SceneGameData_use_activity_culling;
FloatPropertyRNA rna_SceneGameData_activity_culling_box_radius;
BoolPropertyRNA rna_SceneGameData_show_debug_properties;
BoolPropertyRNA rna_SceneGameData_show_framerate_profile;
BoolPropertyRNA rna_SceneGameData_show_physics_visualization;
BoolPropertyRNA rna_SceneGameData_show_mouse;
BoolPropertyRNA rna_SceneGameData_use_frame_rate;
BoolPropertyRNA rna_SceneGameData_use_display_lists;
BoolPropertyRNA rna_SceneGameData_use_deprecation_warnings;
BoolPropertyRNA rna_SceneGameData_use_animation_record;
BoolPropertyRNA rna_SceneGameData_use_auto_start;
BoolPropertyRNA rna_SceneGameData_use_restrict_animation_updates;
EnumPropertyRNA rna_SceneGameData_material_mode;
BoolPropertyRNA rna_SceneGameData_use_glsl_lights;
BoolPropertyRNA rna_SceneGameData_use_glsl_shaders;
BoolPropertyRNA rna_SceneGameData_use_glsl_shadows;
BoolPropertyRNA rna_SceneGameData_use_glsl_ramps;
BoolPropertyRNA rna_SceneGameData_use_glsl_nodes;
BoolPropertyRNA rna_SceneGameData_use_glsl_color_management;
BoolPropertyRNA rna_SceneGameData_use_glsl_extra_textures;
BoolPropertyRNA rna_SceneGameData_use_material_caching;
EnumPropertyRNA rna_SceneGameData_obstacle_simulation;
FloatPropertyRNA rna_SceneGameData_level_height;
BoolPropertyRNA rna_SceneGameData_show_obstacle_simulation;
PointerPropertyRNA rna_SceneGameData_recast_data;


CollectionPropertyRNA rna_SceneGameRecastData_rna_properties;
PointerPropertyRNA rna_SceneGameRecastData_rna_type;
FloatPropertyRNA rna_SceneGameRecastData_cell_size;
FloatPropertyRNA rna_SceneGameRecastData_cell_height;
FloatPropertyRNA rna_SceneGameRecastData_agent_height;
FloatPropertyRNA rna_SceneGameRecastData_agent_radius;
FloatPropertyRNA rna_SceneGameRecastData_climb_max;
FloatPropertyRNA rna_SceneGameRecastData_slope_max;
FloatPropertyRNA rna_SceneGameRecastData_region_min_size;
FloatPropertyRNA rna_SceneGameRecastData_region_merge_size;
FloatPropertyRNA rna_SceneGameRecastData_edge_max_len;
FloatPropertyRNA rna_SceneGameRecastData_edge_max_error;
IntPropertyRNA rna_SceneGameRecastData_verts_per_poly;
FloatPropertyRNA rna_SceneGameRecastData_sample_dist;
FloatPropertyRNA rna_SceneGameRecastData_sample_max_error;


CollectionPropertyRNA rna_TransformOrientation_rna_properties;
PointerPropertyRNA rna_TransformOrientation_rna_type;
FloatPropertyRNA rna_TransformOrientation_matrix;
StringPropertyRNA rna_TransformOrientation_name;


extern CollectionPropertyRNA rna_PropertyGroup_rna_properties;
extern PointerPropertyRNA rna_PropertyGroup_rna_type;
extern StringPropertyRNA rna_PropertyGroup_name;

IntPropertyRNA rna_SelectedUvElement_element_index;
IntPropertyRNA rna_SelectedUvElement_face_index;


CollectionPropertyRNA rna_FFmpegSettings_rna_properties;
PointerPropertyRNA rna_FFmpegSettings_rna_type;
IntPropertyRNA rna_FFmpegSettings_audio_mixrate;
EnumPropertyRNA rna_FFmpegSettings_audio_channels;


CollectionPropertyRNA rna_RenderSettings_rna_properties;
PointerPropertyRNA rna_RenderSettings_rna_type;
PointerPropertyRNA rna_RenderSettings_image_settings;
IntPropertyRNA rna_RenderSettings_resolution_x;
IntPropertyRNA rna_RenderSettings_resolution_y;
IntPropertyRNA rna_RenderSettings_resolution_percentage;
IntPropertyRNA rna_RenderSettings_tile_x;
IntPropertyRNA rna_RenderSettings_tile_y;
IntPropertyRNA rna_RenderSettings_preview_start_resolution;
FloatPropertyRNA rna_RenderSettings_pixel_aspect_x;
FloatPropertyRNA rna_RenderSettings_pixel_aspect_y;
PointerPropertyRNA rna_RenderSettings_ffmpeg;
IntPropertyRNA rna_RenderSettings_fps;
FloatPropertyRNA rna_RenderSettings_fps_base;
IntPropertyRNA rna_RenderSettings_frame_map_old;
IntPropertyRNA rna_RenderSettings_frame_map_new;
FloatPropertyRNA rna_RenderSettings_dither_intensity;
EnumPropertyRNA rna_RenderSettings_pixel_filter_type;
FloatPropertyRNA rna_RenderSettings_filter_size;
EnumPropertyRNA rna_RenderSettings_alpha_mode;
EnumPropertyRNA rna_RenderSettings_octree_resolution;
EnumPropertyRNA rna_RenderSettings_raytrace_method;
BoolPropertyRNA rna_RenderSettings_use_instances;
BoolPropertyRNA rna_RenderSettings_use_local_coords;
BoolPropertyRNA rna_RenderSettings_use_antialiasing;
EnumPropertyRNA rna_RenderSettings_antialiasing_samples;
BoolPropertyRNA rna_RenderSettings_use_fields;
EnumPropertyRNA rna_RenderSettings_field_order;
BoolPropertyRNA rna_RenderSettings_use_fields_still;
BoolPropertyRNA rna_RenderSettings_use_shadows;
BoolPropertyRNA rna_RenderSettings_use_envmaps;
BoolPropertyRNA rna_RenderSettings_use_sss;
BoolPropertyRNA rna_RenderSettings_use_raytrace;
BoolPropertyRNA rna_RenderSettings_use_textures;
BoolPropertyRNA rna_RenderSettings_use_edge_enhance;
IntPropertyRNA rna_RenderSettings_edge_threshold;
FloatPropertyRNA rna_RenderSettings_edge_color;
BoolPropertyRNA rna_RenderSettings_use_freestyle;
IntPropertyRNA rna_RenderSettings_threads;
EnumPropertyRNA rna_RenderSettings_threads_mode;
BoolPropertyRNA rna_RenderSettings_use_motion_blur;
IntPropertyRNA rna_RenderSettings_motion_blur_samples;
FloatPropertyRNA rna_RenderSettings_motion_blur_shutter;
BoolPropertyRNA rna_RenderSettings_use_border;
FloatPropertyRNA rna_RenderSettings_border_min_x;
FloatPropertyRNA rna_RenderSettings_border_min_y;
FloatPropertyRNA rna_RenderSettings_border_max_x;
FloatPropertyRNA rna_RenderSettings_border_max_y;
BoolPropertyRNA rna_RenderSettings_use_crop_to_border;
BoolPropertyRNA rna_RenderSettings_use_placeholder;
BoolPropertyRNA rna_RenderSettings_use_overwrite;
BoolPropertyRNA rna_RenderSettings_use_compositing;
BoolPropertyRNA rna_RenderSettings_use_sequencer;
BoolPropertyRNA rna_RenderSettings_use_file_extension;
StringPropertyRNA rna_RenderSettings_file_extension;
BoolPropertyRNA rna_RenderSettings_is_movie_format;
BoolPropertyRNA rna_RenderSettings_use_free_image_textures;
BoolPropertyRNA rna_RenderSettings_use_free_unused_nodes;
BoolPropertyRNA rna_RenderSettings_use_save_buffers;
BoolPropertyRNA rna_RenderSettings_use_full_sample;
EnumPropertyRNA rna_RenderSettings_display_mode;
BoolPropertyRNA rna_RenderSettings_use_lock_interface;
StringPropertyRNA rna_RenderSettings_filepath;
BoolPropertyRNA rna_RenderSettings_use_render_cache;
EnumPropertyRNA rna_RenderSettings_bake_type;
EnumPropertyRNA rna_RenderSettings_bake_normal_space;
EnumPropertyRNA rna_RenderSettings_bake_quad_split;
EnumPropertyRNA rna_RenderSettings_bake_aa_mode;
BoolPropertyRNA rna_RenderSettings_use_bake_selected_to_active;
BoolPropertyRNA rna_RenderSettings_use_bake_normalize;
BoolPropertyRNA rna_RenderSettings_use_bake_clear;
BoolPropertyRNA rna_RenderSettings_use_bake_antialiasing;
IntPropertyRNA rna_RenderSettings_bake_margin;
FloatPropertyRNA rna_RenderSettings_bake_distance;
FloatPropertyRNA rna_RenderSettings_bake_bias;
BoolPropertyRNA rna_RenderSettings_use_bake_multires;
BoolPropertyRNA rna_RenderSettings_use_bake_lores_mesh;
IntPropertyRNA rna_RenderSettings_bake_samples;
BoolPropertyRNA rna_RenderSettings_use_bake_to_vertex_color;
BoolPropertyRNA rna_RenderSettings_use_bake_user_scale;
FloatPropertyRNA rna_RenderSettings_bake_user_scale;
BoolPropertyRNA rna_RenderSettings_use_stamp_time;
BoolPropertyRNA rna_RenderSettings_use_stamp_date;
BoolPropertyRNA rna_RenderSettings_use_stamp_frame;
BoolPropertyRNA rna_RenderSettings_use_stamp_camera;
BoolPropertyRNA rna_RenderSettings_use_stamp_lens;
BoolPropertyRNA rna_RenderSettings_use_stamp_scene;
BoolPropertyRNA rna_RenderSettings_use_stamp_note;
BoolPropertyRNA rna_RenderSettings_use_stamp_marker;
BoolPropertyRNA rna_RenderSettings_use_stamp_filename;
BoolPropertyRNA rna_RenderSettings_use_stamp_sequencer_strip;
BoolPropertyRNA rna_RenderSettings_use_stamp_render_time;
StringPropertyRNA rna_RenderSettings_stamp_note_text;
BoolPropertyRNA rna_RenderSettings_use_stamp;
IntPropertyRNA rna_RenderSettings_stamp_font_size;
FloatPropertyRNA rna_RenderSettings_stamp_foreground;
FloatPropertyRNA rna_RenderSettings_stamp_background;
BoolPropertyRNA rna_RenderSettings_use_sequencer_gl_preview;
EnumPropertyRNA rna_RenderSettings_sequencer_gl_preview;
EnumPropertyRNA rna_RenderSettings_sequencer_gl_render;
BoolPropertyRNA rna_RenderSettings_use_sequencer_gl_textured_solid;
CollectionPropertyRNA rna_RenderSettings_layers;
BoolPropertyRNA rna_RenderSettings_use_single_layer;
EnumPropertyRNA rna_RenderSettings_engine;
BoolPropertyRNA rna_RenderSettings_has_multiple_engines;
BoolPropertyRNA rna_RenderSettings_use_shading_nodes;
BoolPropertyRNA rna_RenderSettings_use_game_engine;
BoolPropertyRNA rna_RenderSettings_use_simplify;
IntPropertyRNA rna_RenderSettings_simplify_subdivision;
FloatPropertyRNA rna_RenderSettings_simplify_child_particles;
IntPropertyRNA rna_RenderSettings_simplify_shadow_samples;
FloatPropertyRNA rna_RenderSettings_simplify_ao_sss;
BoolPropertyRNA rna_RenderSettings_use_simplify_triangulate;
BoolPropertyRNA rna_RenderSettings_use_persistent_data;
EnumPropertyRNA rna_RenderSettings_line_thickness_mode;
FloatPropertyRNA rna_RenderSettings_line_thickness;
PointerPropertyRNA rna_RenderSettings_bake;

extern FunctionRNA rna_RenderSettings_frame_path_func;
extern IntPropertyRNA rna_RenderSettings_frame_path_frame;
extern StringPropertyRNA rna_RenderSettings_frame_path_filepath;



CollectionPropertyRNA rna_RenderLayers_rna_properties;
PointerPropertyRNA rna_RenderLayers_rna_type;
IntPropertyRNA rna_RenderLayers_active_index;
PointerPropertyRNA rna_RenderLayers_active;

extern FunctionRNA rna_RenderLayers_new_func;
extern StringPropertyRNA rna_RenderLayers_new_name;
extern PointerPropertyRNA rna_RenderLayers_new_result;

extern FunctionRNA rna_RenderLayers_remove_func;
extern PointerPropertyRNA rna_RenderLayers_remove_layer;



CollectionPropertyRNA rna_BakeSettings_rna_properties;
PointerPropertyRNA rna_BakeSettings_rna_type;
StringPropertyRNA rna_BakeSettings_cage_object;
StringPropertyRNA rna_BakeSettings_filepath;
IntPropertyRNA rna_BakeSettings_width;
IntPropertyRNA rna_BakeSettings_height;
IntPropertyRNA rna_BakeSettings_margin;
FloatPropertyRNA rna_BakeSettings_cage_extrusion;
EnumPropertyRNA rna_BakeSettings_normal_space;
EnumPropertyRNA rna_BakeSettings_normal_r;
EnumPropertyRNA rna_BakeSettings_normal_g;
EnumPropertyRNA rna_BakeSettings_normal_b;
PointerPropertyRNA rna_BakeSettings_image_settings;
EnumPropertyRNA rna_BakeSettings_save_mode;
BoolPropertyRNA rna_BakeSettings_use_selected_to_active;
BoolPropertyRNA rna_BakeSettings_use_clear;
BoolPropertyRNA rna_BakeSettings_use_split_materials;
BoolPropertyRNA rna_BakeSettings_use_automatic_name;
BoolPropertyRNA rna_BakeSettings_use_cage;


CollectionPropertyRNA rna_SceneRenderLayer_rna_properties;
PointerPropertyRNA rna_SceneRenderLayer_rna_type;
StringPropertyRNA rna_SceneRenderLayer_name;
PointerPropertyRNA rna_SceneRenderLayer_material_override;
PointerPropertyRNA rna_SceneRenderLayer_light_override;
BoolPropertyRNA rna_SceneRenderLayer_layers;
BoolPropertyRNA rna_SceneRenderLayer_layers_zmask;
BoolPropertyRNA rna_SceneRenderLayer_layers_exclude;
IntPropertyRNA rna_SceneRenderLayer_samples;
FloatPropertyRNA rna_SceneRenderLayer_pass_alpha_threshold;
BoolPropertyRNA rna_SceneRenderLayer_use;
BoolPropertyRNA rna_SceneRenderLayer_use_zmask;
BoolPropertyRNA rna_SceneRenderLayer_invert_zmask;
BoolPropertyRNA rna_SceneRenderLayer_use_all_z;
BoolPropertyRNA rna_SceneRenderLayer_use_solid;
BoolPropertyRNA rna_SceneRenderLayer_use_halo;
BoolPropertyRNA rna_SceneRenderLayer_use_ztransp;
BoolPropertyRNA rna_SceneRenderLayer_use_sky;
BoolPropertyRNA rna_SceneRenderLayer_use_edge_enhance;
BoolPropertyRNA rna_SceneRenderLayer_use_strand;
BoolPropertyRNA rna_SceneRenderLayer_use_freestyle;
BoolPropertyRNA rna_SceneRenderLayer_use_pass_combined;
BoolPropertyRNA rna_SceneRenderLayer_use_pass_z;
BoolPropertyRNA rna_SceneRenderLayer_use_pass_vector;
BoolPropertyRNA rna_SceneRenderLayer_use_pass_normal;
BoolPropertyRNA rna_SceneRenderLayer_use_pass_uv;
BoolPropertyRNA rna_SceneRenderLayer_use_pass_mist;
BoolPropertyRNA rna_SceneRenderLayer_use_pass_object_index;
BoolPropertyRNA rna_SceneRenderLayer_use_pass_material_index;
BoolPropertyRNA rna_SceneRenderLayer_use_pass_color;
BoolPropertyRNA rna_SceneRenderLayer_use_pass_diffuse;
BoolPropertyRNA rna_SceneRenderLayer_use_pass_specular;
BoolPropertyRNA rna_SceneRenderLayer_use_pass_shadow;
BoolPropertyRNA rna_SceneRenderLayer_use_pass_ambient_occlusion;
BoolPropertyRNA rna_SceneRenderLayer_use_pass_reflection;
BoolPropertyRNA rna_SceneRenderLayer_use_pass_refraction;
BoolPropertyRNA rna_SceneRenderLayer_use_pass_emit;
BoolPropertyRNA rna_SceneRenderLayer_use_pass_environment;
BoolPropertyRNA rna_SceneRenderLayer_use_pass_indirect;
BoolPropertyRNA rna_SceneRenderLayer_exclude_specular;
BoolPropertyRNA rna_SceneRenderLayer_exclude_shadow;
BoolPropertyRNA rna_SceneRenderLayer_exclude_ambient_occlusion;
BoolPropertyRNA rna_SceneRenderLayer_exclude_reflection;
BoolPropertyRNA rna_SceneRenderLayer_exclude_refraction;
BoolPropertyRNA rna_SceneRenderLayer_exclude_emit;
BoolPropertyRNA rna_SceneRenderLayer_exclude_environment;
BoolPropertyRNA rna_SceneRenderLayer_exclude_indirect;
BoolPropertyRNA rna_SceneRenderLayer_use_pass_diffuse_direct;
BoolPropertyRNA rna_SceneRenderLayer_use_pass_diffuse_indirect;
BoolPropertyRNA rna_SceneRenderLayer_use_pass_diffuse_color;
BoolPropertyRNA rna_SceneRenderLayer_use_pass_glossy_direct;
BoolPropertyRNA rna_SceneRenderLayer_use_pass_glossy_indirect;
BoolPropertyRNA rna_SceneRenderLayer_use_pass_glossy_color;
BoolPropertyRNA rna_SceneRenderLayer_use_pass_transmission_direct;
BoolPropertyRNA rna_SceneRenderLayer_use_pass_transmission_indirect;
BoolPropertyRNA rna_SceneRenderLayer_use_pass_transmission_color;
BoolPropertyRNA rna_SceneRenderLayer_use_pass_subsurface_direct;
BoolPropertyRNA rna_SceneRenderLayer_use_pass_subsurface_indirect;
BoolPropertyRNA rna_SceneRenderLayer_use_pass_subsurface_color;
PointerPropertyRNA rna_SceneRenderLayer_freestyle_settings;


CollectionPropertyRNA rna_FreestyleLineSet_rna_properties;
PointerPropertyRNA rna_FreestyleLineSet_rna_type;
PointerPropertyRNA rna_FreestyleLineSet_linestyle;
StringPropertyRNA rna_FreestyleLineSet_name;
BoolPropertyRNA rna_FreestyleLineSet_show_render;
BoolPropertyRNA rna_FreestyleLineSet_select_by_visibility;
BoolPropertyRNA rna_FreestyleLineSet_select_by_edge_types;
BoolPropertyRNA rna_FreestyleLineSet_select_by_group;
BoolPropertyRNA rna_FreestyleLineSet_select_by_image_border;
BoolPropertyRNA rna_FreestyleLineSet_select_by_face_marks;
EnumPropertyRNA rna_FreestyleLineSet_edge_type_negation;
EnumPropertyRNA rna_FreestyleLineSet_edge_type_combination;
PointerPropertyRNA rna_FreestyleLineSet_group;
EnumPropertyRNA rna_FreestyleLineSet_group_negation;
EnumPropertyRNA rna_FreestyleLineSet_face_mark_negation;
EnumPropertyRNA rna_FreestyleLineSet_face_mark_condition;
BoolPropertyRNA rna_FreestyleLineSet_select_silhouette;
BoolPropertyRNA rna_FreestyleLineSet_select_border;
BoolPropertyRNA rna_FreestyleLineSet_select_crease;
BoolPropertyRNA rna_FreestyleLineSet_select_ridge_valley;
BoolPropertyRNA rna_FreestyleLineSet_select_suggestive_contour;
BoolPropertyRNA rna_FreestyleLineSet_select_material_boundary;
BoolPropertyRNA rna_FreestyleLineSet_select_contour;
BoolPropertyRNA rna_FreestyleLineSet_select_external_contour;
BoolPropertyRNA rna_FreestyleLineSet_select_edge_mark;
BoolPropertyRNA rna_FreestyleLineSet_exclude_silhouette;
BoolPropertyRNA rna_FreestyleLineSet_exclude_border;
BoolPropertyRNA rna_FreestyleLineSet_exclude_crease;
BoolPropertyRNA rna_FreestyleLineSet_exclude_ridge_valley;
BoolPropertyRNA rna_FreestyleLineSet_exclude_suggestive_contour;
BoolPropertyRNA rna_FreestyleLineSet_exclude_material_boundary;
BoolPropertyRNA rna_FreestyleLineSet_exclude_contour;
BoolPropertyRNA rna_FreestyleLineSet_exclude_external_contour;
BoolPropertyRNA rna_FreestyleLineSet_exclude_edge_mark;
EnumPropertyRNA rna_FreestyleLineSet_visibility;
IntPropertyRNA rna_FreestyleLineSet_qi_start;
IntPropertyRNA rna_FreestyleLineSet_qi_end;


CollectionPropertyRNA rna_FreestyleModuleSettings_rna_properties;
PointerPropertyRNA rna_FreestyleModuleSettings_rna_type;
PointerPropertyRNA rna_FreestyleModuleSettings_script;
BoolPropertyRNA rna_FreestyleModuleSettings_use;


CollectionPropertyRNA rna_FreestyleSettings_rna_properties;
PointerPropertyRNA rna_FreestyleSettings_rna_type;
CollectionPropertyRNA rna_FreestyleSettings_modules;
EnumPropertyRNA rna_FreestyleSettings_mode;
BoolPropertyRNA rna_FreestyleSettings_use_culling;
BoolPropertyRNA rna_FreestyleSettings_use_suggestive_contours;
BoolPropertyRNA rna_FreestyleSettings_use_ridges_and_valleys;
BoolPropertyRNA rna_FreestyleSettings_use_material_boundaries;
BoolPropertyRNA rna_FreestyleSettings_use_smoothness;
BoolPropertyRNA rna_FreestyleSettings_use_advanced_options;
BoolPropertyRNA rna_FreestyleSettings_use_view_map_cache;
FloatPropertyRNA rna_FreestyleSettings_sphere_radius;
FloatPropertyRNA rna_FreestyleSettings_kr_derivative_epsilon;
FloatPropertyRNA rna_FreestyleSettings_crease_angle;
CollectionPropertyRNA rna_FreestyleSettings_linesets;


CollectionPropertyRNA rna_FreestyleModules_rna_properties;
PointerPropertyRNA rna_FreestyleModules_rna_type;

extern FunctionRNA rna_FreestyleModules_new_func;
extern PointerPropertyRNA rna_FreestyleModules_new_module;

extern FunctionRNA rna_FreestyleModules_remove_func;
extern PointerPropertyRNA rna_FreestyleModules_remove_module;



CollectionPropertyRNA rna_Linesets_rna_properties;
PointerPropertyRNA rna_Linesets_rna_type;
PointerPropertyRNA rna_Linesets_active;
IntPropertyRNA rna_Linesets_active_index;

extern FunctionRNA rna_Linesets_new_func;
extern StringPropertyRNA rna_Linesets_new_name;
extern PointerPropertyRNA rna_Linesets_new_lineset;

extern FunctionRNA rna_Linesets_remove_func;
extern PointerPropertyRNA rna_Linesets_remove_lineset;


PointerRNA Scene_camera_get(PointerRNA *ptr)
{
	Scene *data = (Scene *)(ptr->data);
	return rna_pointer_inherit_refine(ptr, &RNA_Object, data->camera);
}

void Scene_camera_set(PointerRNA *ptr, PointerRNA value)
{
	Scene *data = (Scene *)(ptr->data);
	if (value.data)
		id_lib_extern((ID *)value.data);

	data->camera = value.data;
}

PointerRNA Scene_background_set_get(PointerRNA *ptr)
{
	Scene *data = (Scene *)(ptr->data);
	return rna_pointer_inherit_refine(ptr, &RNA_Scene, data->set);
}

void Scene_background_set_set(PointerRNA *ptr, PointerRNA value)
{
	rna_Scene_set_set(ptr, value);
}

PointerRNA Scene_world_get(PointerRNA *ptr)
{
	Scene *data = (Scene *)(ptr->data);
	return rna_pointer_inherit_refine(ptr, &RNA_World, data->world);
}

void Scene_world_set(PointerRNA *ptr, PointerRNA value)
{
	Scene *data = (Scene *)(ptr->data);

	if (data->world)
		id_us_min((ID *)data->world);
	if (value.data)
		id_us_plus((ID *)value.data);

	data->world = value.data;
}

void Scene_cursor_location_get(PointerRNA *ptr, float values[3])
{
	Scene *data = (Scene *)(ptr->data);
	unsigned int i;

	for (i = 0; i < 3; i++) {
		values[i] = (float)(((float *)data->cursor)[i]);
	}
}

void Scene_cursor_location_set(PointerRNA *ptr, const float values[3])
{
	Scene *data = (Scene *)(ptr->data);
	unsigned int i;

	for (i = 0; i < 3; i++) {
		((float *)data->cursor)[i] = values[i];
	}
}

static PointerRNA Scene_object_bases_get(CollectionPropertyIterator *iter)
{
	return rna_pointer_inherit_refine(&iter->parent, &RNA_ObjectBase, rna_iterator_listbase_get(iter));
}

void Scene_object_bases_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{
	Scene *data = (Scene *)(ptr->data);

	memset(iter, 0, sizeof(*iter));
	iter->parent = *ptr;
	iter->prop = (PropertyRNA *)&rna_Scene_object_bases;

	rna_iterator_listbase_begin(iter, &data->base, NULL);

	if (iter->valid)
		iter->ptr = Scene_object_bases_get(iter);
}

void Scene_object_bases_next(CollectionPropertyIterator *iter)
{
	rna_iterator_listbase_next(iter);

	if (iter->valid)
		iter->ptr = Scene_object_bases_get(iter);
}

void Scene_object_bases_end(CollectionPropertyIterator *iter)
{
	rna_iterator_listbase_end(iter);
}

int Scene_object_bases_lookup_int(PointerRNA *ptr, int index, PointerRNA *r_ptr)
{
	int found = 0;
	CollectionPropertyIterator iter;

	Scene_object_bases_begin(&iter, ptr);

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
		if (found) *r_ptr = Scene_object_bases_get(&iter);
	}

	Scene_object_bases_end(&iter);

	return found;
}

int Scene_object_bases_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
	return rna_Scene_object_bases_lookup_string(ptr, key, r_ptr);
}

static PointerRNA Scene_objects_get(CollectionPropertyIterator *iter)
{
	return rna_Scene_objects_get(iter);
}

void Scene_objects_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{
	Scene *data = (Scene *)(ptr->data);

	memset(iter, 0, sizeof(*iter));
	iter->parent = *ptr;
	iter->prop = (PropertyRNA *)&rna_Scene_objects;

	rna_iterator_listbase_begin(iter, &data->base, NULL);

	if (iter->valid)
		iter->ptr = Scene_objects_get(iter);
}

void Scene_objects_next(CollectionPropertyIterator *iter)
{
	rna_iterator_listbase_next(iter);

	if (iter->valid)
		iter->ptr = Scene_objects_get(iter);
}

void Scene_objects_end(CollectionPropertyIterator *iter)
{
	rna_iterator_listbase_end(iter);
}

int Scene_objects_lookup_int(PointerRNA *ptr, int index, PointerRNA *r_ptr)
{
	int found = 0;
	CollectionPropertyIterator iter;

	Scene_objects_begin(&iter, ptr);

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
		if (found) *r_ptr = Scene_objects_get(&iter);
	}

	Scene_objects_end(&iter);

	return found;
}

int Scene_objects_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
	extern int ID_name_length(PointerRNA *);
	extern void ID_name_get(PointerRNA *, char *);

	bool found = false;
	CollectionPropertyIterator iter;
	char namebuf[1024];
	char *name;

	Scene_objects_begin(&iter, ptr);

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
		Scene_objects_next(&iter);
	}
	Scene_objects_end(&iter);

	return found;
}

void Scene_layers_get(PointerRNA *ptr, int values[20])
{
	Scene *data = (Scene *)(ptr->data);
	unsigned int i;

	for (i = 0; i < 20; i++) {
		values[i] = ((data->lay & (1u << i)) != 0);
	}
}

void Scene_layers_set(PointerRNA *ptr, const int values[20])
{
	rna_Scene_layer_set(ptr, values);
}

int Scene_active_layer_get(PointerRNA *ptr)
{
	return rna_Scene_active_layer_get(ptr);
}

int Scene_frame_current_get(PointerRNA *ptr)
{
	Scene *data = (Scene *)(ptr->data);
	return (int)(data->r.cfra);
}

void Scene_frame_current_set(PointerRNA *ptr, int value)
{
	rna_Scene_frame_current_set(ptr, value);
}

float Scene_frame_subframe_get(PointerRNA *ptr)
{
	Scene *data = (Scene *)(ptr->data);
	return (float)(data->r.subframe);
}

int Scene_frame_start_get(PointerRNA *ptr)
{
	Scene *data = (Scene *)(ptr->data);
	return (int)(data->r.sfra);
}

void Scene_frame_start_set(PointerRNA *ptr, int value)
{
	rna_Scene_start_frame_set(ptr, value);
}

int Scene_frame_end_get(PointerRNA *ptr)
{
	Scene *data = (Scene *)(ptr->data);
	return (int)(data->r.efra);
}

void Scene_frame_end_set(PointerRNA *ptr, int value)
{
	rna_Scene_end_frame_set(ptr, value);
}

int Scene_frame_step_get(PointerRNA *ptr)
{
	Scene *data = (Scene *)(ptr->data);
	return (int)(data->r.frame_step);
}

void Scene_frame_step_set(PointerRNA *ptr, int value)
{
	Scene *data = (Scene *)(ptr->data);
	data->r.frame_step = CLAMPIS(value, 0, 300000);
}

float Scene_frame_current_final_get(PointerRNA *ptr)
{
	return rna_Scene_frame_current_final_get(ptr);
}

int Scene_lock_frame_selection_to_range_get(PointerRNA *ptr)
{
	Scene *data = (Scene *)(ptr->data);
	return (((data->r.flag) & 2) != 0);
}

void Scene_lock_frame_selection_to_range_set(PointerRNA *ptr, int value)
{
	Scene *data = (Scene *)(ptr->data);
	if (value) data->r.flag |= 2;
	else data->r.flag &= ~2;
}

int Scene_use_preview_range_get(PointerRNA *ptr)
{
	Scene *data = (Scene *)(ptr->data);
	return (((data->r.flag) & 1) != 0);
}

void Scene_use_preview_range_set(PointerRNA *ptr, int value)
{
	rna_Scene_use_preview_range_set(ptr, value);
}

int Scene_frame_preview_start_get(PointerRNA *ptr)
{
	Scene *data = (Scene *)(ptr->data);
	return (int)(data->r.psfra);
}

void Scene_frame_preview_start_set(PointerRNA *ptr, int value)
{
	rna_Scene_preview_range_start_frame_set(ptr, value);
}

int Scene_frame_preview_end_get(PointerRNA *ptr)
{
	Scene *data = (Scene *)(ptr->data);
	return (int)(data->r.pefra);
}

void Scene_frame_preview_end_set(PointerRNA *ptr, int value)
{
	rna_Scene_preview_range_end_frame_set(ptr, value);
}

int Scene_show_keys_from_selected_only_get(PointerRNA *ptr)
{
	Scene *data = (Scene *)(ptr->data);
	return !(((data->flag) & 4) != 0);
}

void Scene_show_keys_from_selected_only_set(PointerRNA *ptr, int value)
{
	Scene *data = (Scene *)(ptr->data);
	if (!value) data->flag |= 4;
	else data->flag &= ~4;
}

void Scene_use_stamp_note_get(PointerRNA *ptr, char *value)
{
	Scene *data = (Scene *)(ptr->data);
	BLI_strncpy_utf8(value, data->r.stamp_udata, 768);
}

int Scene_use_stamp_note_length(PointerRNA *ptr)
{
	Scene *data = (Scene *)(ptr->data);
	return strlen(data->r.stamp_udata);
}

void Scene_use_stamp_note_set(PointerRNA *ptr, const char *value)
{
	Scene *data = (Scene *)(ptr->data);
	BLI_strncpy_utf8(data->r.stamp_udata, value, 768);
}

PointerRNA Scene_animation_data_get(PointerRNA *ptr)
{
	Scene *data = (Scene *)(ptr->data);
	return rna_pointer_inherit_refine(ptr, &RNA_AnimData, data->adt);
}

int Scene_is_nla_tweakmode_get(PointerRNA *ptr)
{
	Scene *data = (Scene *)(ptr->data);
	return (((data->flag) & 4) != 0);
}

int Scene_use_frame_drop_get(PointerRNA *ptr)
{
	Scene *data = (Scene *)(ptr->data);
	return (((data->flag) & 8) != 0);
}

void Scene_use_frame_drop_set(PointerRNA *ptr, int value)
{
	Scene *data = (Scene *)(ptr->data);
	if (value) data->flag |= 8;
	else data->flag &= ~8;
}

int Scene_sync_mode_get(PointerRNA *ptr)
{
	return rna_Scene_sync_mode_get(ptr);
}

void Scene_sync_mode_set(PointerRNA *ptr, int value)
{
	rna_Scene_sync_mode_set(ptr, value);
}

PointerRNA Scene_node_tree_get(PointerRNA *ptr)
{
	Scene *data = (Scene *)(ptr->data);
	return rna_pointer_inherit_refine(ptr, &RNA_NodeTree, data->nodetree);
}

int Scene_use_nodes_get(PointerRNA *ptr)
{
	Scene *data = (Scene *)(ptr->data);
	return (((data->use_nodes) & 1) != 0);
}

void Scene_use_nodes_set(PointerRNA *ptr, int value)
{
	Scene *data = (Scene *)(ptr->data);
	if (value) data->use_nodes |= 1;
	else data->use_nodes &= ~1;
}

PointerRNA Scene_sequence_editor_get(PointerRNA *ptr)
{
	Scene *data = (Scene *)(ptr->data);
	return rna_pointer_inherit_refine(ptr, &RNA_SequenceEditor, data->ed);
}

static PointerRNA Scene_keying_sets_get(CollectionPropertyIterator *iter)
{
	return rna_pointer_inherit_refine(&iter->parent, &RNA_KeyingSet, rna_iterator_listbase_get(iter));
}

void Scene_keying_sets_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{
	Scene *data = (Scene *)(ptr->data);

	memset(iter, 0, sizeof(*iter));
	iter->parent = *ptr;
	iter->prop = (PropertyRNA *)&rna_Scene_keying_sets;

	rna_iterator_listbase_begin(iter, &data->keyingsets, NULL);

	if (iter->valid)
		iter->ptr = Scene_keying_sets_get(iter);
}

void Scene_keying_sets_next(CollectionPropertyIterator *iter)
{
	rna_iterator_listbase_next(iter);

	if (iter->valid)
		iter->ptr = Scene_keying_sets_get(iter);
}

void Scene_keying_sets_end(CollectionPropertyIterator *iter)
{
	rna_iterator_listbase_end(iter);
}

int Scene_keying_sets_lookup_int(PointerRNA *ptr, int index, PointerRNA *r_ptr)
{
	int found = 0;
	CollectionPropertyIterator iter;

	Scene_keying_sets_begin(&iter, ptr);

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
		if (found) *r_ptr = Scene_keying_sets_get(&iter);
	}

	Scene_keying_sets_end(&iter);

	return found;
}

int Scene_keying_sets_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
	extern int KeyingSet_bl_label_length(PointerRNA *);
	extern void KeyingSet_bl_label_get(PointerRNA *, char *);

	bool found = false;
	CollectionPropertyIterator iter;
	char namebuf[1024];
	char *name;

	Scene_keying_sets_begin(&iter, ptr);

	while (iter.valid) {
		if (iter.ptr.data) {
			int namelen = KeyingSet_bl_label_length(&iter.ptr);
			if (namelen < 1024) {
				KeyingSet_bl_label_get(&iter.ptr, namebuf);
				if (strcmp(namebuf, key) == 0) {
					found = true;
					*r_ptr = iter.ptr;
					break;
				}
			}
			else {
				name = MEM_mallocN(namelen+1, "name string");
				KeyingSet_bl_label_get(&iter.ptr, name);
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
		Scene_keying_sets_next(&iter);
	}
	Scene_keying_sets_end(&iter);

	return found;
}

static PointerRNA Scene_keying_sets_all_get(CollectionPropertyIterator *iter)
{
	return rna_pointer_inherit_refine(&iter->parent, &RNA_KeyingSet, rna_iterator_listbase_get(iter));
}

void Scene_keying_sets_all_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

	memset(iter, 0, sizeof(*iter));
	iter->parent = *ptr;
	iter->prop = (PropertyRNA *)&rna_Scene_keying_sets_all;

	rna_Scene_all_keyingsets_begin(iter, ptr);

	if (iter->valid)
		iter->ptr = Scene_keying_sets_all_get(iter);
}

void Scene_keying_sets_all_next(CollectionPropertyIterator *iter)
{
	rna_Scene_all_keyingsets_next(iter);

	if (iter->valid)
		iter->ptr = Scene_keying_sets_all_get(iter);
}

void Scene_keying_sets_all_end(CollectionPropertyIterator *iter)
{
	rna_iterator_listbase_end(iter);
}

PointerRNA Scene_rigidbody_world_get(PointerRNA *ptr)
{
	Scene *data = (Scene *)(ptr->data);
	return rna_pointer_inherit_refine(ptr, &RNA_RigidBodyWorld, data->rigidbody_world);
}

PointerRNA Scene_tool_settings_get(PointerRNA *ptr)
{
	Scene *data = (Scene *)(ptr->data);
	return rna_pointer_inherit_refine(ptr, &RNA_ToolSettings, data->toolsettings);
}

PointerRNA Scene_unit_settings_get(PointerRNA *ptr)
{
	Scene *data = (Scene *)(ptr->data);
	return rna_pointer_inherit_refine(ptr, &RNA_UnitSettings, &data->unit);
}

void Scene_gravity_get(PointerRNA *ptr, float values[3])
{
	Scene *data = (Scene *)(ptr->data);
	unsigned int i;

	for (i = 0; i < 3; i++) {
		values[i] = (float)(((float *)data->physics_settings.gravity)[i]);
	}
}

void Scene_gravity_set(PointerRNA *ptr, const float values[3])
{
	Scene *data = (Scene *)(ptr->data);
	unsigned int i;

	for (i = 0; i < 3; i++) {
		((float *)data->physics_settings.gravity)[i] = values[i];
	}
}

int Scene_use_gravity_get(PointerRNA *ptr)
{
	Scene *data = (Scene *)(ptr->data);
	return (((data->physics_settings.flag) & 1) != 0);
}

void Scene_use_gravity_set(PointerRNA *ptr, int value)
{
	Scene *data = (Scene *)(ptr->data);
	if (value) data->physics_settings.flag |= 1;
	else data->physics_settings.flag &= ~1;
}

PointerRNA Scene_render_get(PointerRNA *ptr)
{
	Scene *data = (Scene *)(ptr->data);
	return rna_pointer_inherit_refine(ptr, &RNA_RenderSettings, &data->r);
}

static PointerRNA Scene_timeline_markers_get(CollectionPropertyIterator *iter)
{
	return rna_pointer_inherit_refine(&iter->parent, &RNA_TimelineMarker, rna_iterator_listbase_get(iter));
}

void Scene_timeline_markers_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{
	Scene *data = (Scene *)(ptr->data);

	memset(iter, 0, sizeof(*iter));
	iter->parent = *ptr;
	iter->prop = (PropertyRNA *)&rna_Scene_timeline_markers;

	rna_iterator_listbase_begin(iter, &data->markers, NULL);

	if (iter->valid)
		iter->ptr = Scene_timeline_markers_get(iter);
}

void Scene_timeline_markers_next(CollectionPropertyIterator *iter)
{
	rna_iterator_listbase_next(iter);

	if (iter->valid)
		iter->ptr = Scene_timeline_markers_get(iter);
}

void Scene_timeline_markers_end(CollectionPropertyIterator *iter)
{
	rna_iterator_listbase_end(iter);
}

int Scene_timeline_markers_lookup_int(PointerRNA *ptr, int index, PointerRNA *r_ptr)
{
	int found = 0;
	CollectionPropertyIterator iter;

	Scene_timeline_markers_begin(&iter, ptr);

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
		if (found) *r_ptr = Scene_timeline_markers_get(&iter);
	}

	Scene_timeline_markers_end(&iter);

	return found;
}

int Scene_timeline_markers_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
	extern int TimelineMarker_name_length(PointerRNA *);
	extern void TimelineMarker_name_get(PointerRNA *, char *);

	bool found = false;
	CollectionPropertyIterator iter;
	char namebuf[1024];
	char *name;

	Scene_timeline_markers_begin(&iter, ptr);

	while (iter.valid) {
		if (iter.ptr.data) {
			int namelen = TimelineMarker_name_length(&iter.ptr);
			if (namelen < 1024) {
				TimelineMarker_name_get(&iter.ptr, namebuf);
				if (strcmp(namebuf, key) == 0) {
					found = true;
					*r_ptr = iter.ptr;
					break;
				}
			}
			else {
				name = MEM_mallocN(namelen+1, "name string");
				TimelineMarker_name_get(&iter.ptr, name);
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
		Scene_timeline_markers_next(&iter);
	}
	Scene_timeline_markers_end(&iter);

	return found;
}

int Scene_use_audio_get(PointerRNA *ptr)
{
	return rna_Scene_use_audio_get(ptr);
}

void Scene_use_audio_set(PointerRNA *ptr, int value)
{
	rna_Scene_use_audio_set(ptr, value);
}

int Scene_use_audio_sync_get(PointerRNA *ptr)
{
	Scene *data = (Scene *)(ptr->data);
	return (((data->audio.flag) & 2) != 0);
}

void Scene_use_audio_sync_set(PointerRNA *ptr, int value)
{
	Scene *data = (Scene *)(ptr->data);
	if (value) data->audio.flag |= 2;
	else data->audio.flag &= ~2;
}

int Scene_use_audio_scrub_get(PointerRNA *ptr)
{
	Scene *data = (Scene *)(ptr->data);
	return (((data->audio.flag) & 4) != 0);
}

void Scene_use_audio_scrub_set(PointerRNA *ptr, int value)
{
	Scene *data = (Scene *)(ptr->data);
	if (value) data->audio.flag |= 4;
	else data->audio.flag &= ~4;
}

float Scene_audio_doppler_speed_get(PointerRNA *ptr)
{
	Scene *data = (Scene *)(ptr->data);
	return (float)(data->audio.speed_of_sound);
}

void Scene_audio_doppler_speed_set(PointerRNA *ptr, float value)
{
	Scene *data = (Scene *)(ptr->data);
	data->audio.speed_of_sound = CLAMPIS(value, 0.0099999998f, FLT_MAX);
}

float Scene_audio_doppler_factor_get(PointerRNA *ptr)
{
	Scene *data = (Scene *)(ptr->data);
	return (float)(data->audio.doppler_factor);
}

void Scene_audio_doppler_factor_set(PointerRNA *ptr, float value)
{
	Scene *data = (Scene *)(ptr->data);
	data->audio.doppler_factor = CLAMPIS(value, 0.0f, FLT_MAX);
}

int Scene_audio_distance_model_get(PointerRNA *ptr)
{
	Scene *data = (Scene *)(ptr->data);
	return ((data->audio.distance_model) & 7);
}

void Scene_audio_distance_model_set(PointerRNA *ptr, int value)
{
	Scene *data = (Scene *)(ptr->data);
	data->audio.distance_model &= ~7;
	data->audio.distance_model |= value;
}

float Scene_audio_volume_get(PointerRNA *ptr)
{
	Scene *data = (Scene *)(ptr->data);
	return (float)(data->audio.volume);
}

void Scene_audio_volume_set(PointerRNA *ptr, float value)
{
	rna_Scene_volume_set(ptr, value);
}

PointerRNA Scene_game_settings_get(PointerRNA *ptr)
{
	Scene *data = (Scene *)(ptr->data);
	return rna_pointer_inherit_refine(ptr, &RNA_SceneGameData, &data->gm);
}

PointerRNA Scene_grease_pencil_get(PointerRNA *ptr)
{
	Scene *data = (Scene *)(ptr->data);
	return rna_pointer_inherit_refine(ptr, &RNA_GreasePencil, data->gpd);
}

void Scene_grease_pencil_set(PointerRNA *ptr, PointerRNA value)
{
	Scene *data = (Scene *)(ptr->data);

	if (data->gpd)
		id_us_min((ID *)data->gpd);
	if (value.data)
		id_us_plus((ID *)value.data);

	data->gpd = value.data;
}

static PointerRNA Scene_orientations_get(CollectionPropertyIterator *iter)
{
	return rna_pointer_inherit_refine(&iter->parent, &RNA_TransformOrientation, rna_iterator_listbase_get(iter));
}

void Scene_orientations_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{
	Scene *data = (Scene *)(ptr->data);

	memset(iter, 0, sizeof(*iter));
	iter->parent = *ptr;
	iter->prop = (PropertyRNA *)&rna_Scene_orientations;

	rna_iterator_listbase_begin(iter, &data->transform_spaces, NULL);

	if (iter->valid)
		iter->ptr = Scene_orientations_get(iter);
}

void Scene_orientations_next(CollectionPropertyIterator *iter)
{
	rna_iterator_listbase_next(iter);

	if (iter->valid)
		iter->ptr = Scene_orientations_get(iter);
}

void Scene_orientations_end(CollectionPropertyIterator *iter)
{
	rna_iterator_listbase_end(iter);
}

int Scene_orientations_lookup_int(PointerRNA *ptr, int index, PointerRNA *r_ptr)
{
	int found = 0;
	CollectionPropertyIterator iter;

	Scene_orientations_begin(&iter, ptr);

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
		if (found) *r_ptr = Scene_orientations_get(&iter);
	}

	Scene_orientations_end(&iter);

	return found;
}

int Scene_orientations_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
	extern int TransformOrientation_name_length(PointerRNA *);
	extern void TransformOrientation_name_get(PointerRNA *, char *);

	bool found = false;
	CollectionPropertyIterator iter;
	char namebuf[1024];
	char *name;

	Scene_orientations_begin(&iter, ptr);

	while (iter.valid) {
		if (iter.ptr.data) {
			int namelen = TransformOrientation_name_length(&iter.ptr);
			if (namelen < 1024) {
				TransformOrientation_name_get(&iter.ptr, namebuf);
				if (strcmp(namebuf, key) == 0) {
					found = true;
					*r_ptr = iter.ptr;
					break;
				}
			}
			else {
				name = MEM_mallocN(namelen+1, "name string");
				TransformOrientation_name_get(&iter.ptr, name);
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
		Scene_orientations_next(&iter);
	}
	Scene_orientations_end(&iter);

	return found;
}

PointerRNA Scene_active_clip_get(PointerRNA *ptr)
{
	Scene *data = (Scene *)(ptr->data);
	return rna_pointer_inherit_refine(ptr, &RNA_MovieClip, data->clip);
}

void Scene_active_clip_set(PointerRNA *ptr, PointerRNA value)
{
	Scene *data = (Scene *)(ptr->data);

	if (data->clip)
		id_us_min((ID *)data->clip);
	if (value.data)
		id_us_plus((ID *)value.data);

	data->clip = value.data;
}

PointerRNA Scene_view_settings_get(PointerRNA *ptr)
{
	Scene *data = (Scene *)(ptr->data);
	return rna_pointer_inherit_refine(ptr, &RNA_ColorManagedViewSettings, &data->view_settings);
}

PointerRNA Scene_display_settings_get(PointerRNA *ptr)
{
	Scene *data = (Scene *)(ptr->data);
	return rna_pointer_inherit_refine(ptr, &RNA_ColorManagedDisplaySettings, &data->display_settings);
}

PointerRNA Scene_sequencer_colorspace_settings_get(PointerRNA *ptr)
{
	Scene *data = (Scene *)(ptr->data);
	return rna_pointer_inherit_refine(ptr, &RNA_ColorManagedSequencerColorspaceSettings, &data->sequencer_colorspace_settings);
}

static PointerRNA SceneBases_rna_properties_get(CollectionPropertyIterator *iter)
{
	return rna_builtin_properties_get(iter);
}

void SceneBases_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

	memset(iter, 0, sizeof(*iter));
	iter->parent = *ptr;
	iter->prop = (PropertyRNA *)&rna_SceneBases_rna_properties;

	rna_builtin_properties_begin(iter, ptr);

	if (iter->valid)
		iter->ptr = SceneBases_rna_properties_get(iter);
}

void SceneBases_rna_properties_next(CollectionPropertyIterator *iter)
{
	rna_builtin_properties_next(iter);

	if (iter->valid)
		iter->ptr = SceneBases_rna_properties_get(iter);
}

void SceneBases_rna_properties_end(CollectionPropertyIterator *iter)
{
	rna_iterator_listbase_end(iter);
}

int SceneBases_rna_properties_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
	return rna_builtin_properties_lookup_string(ptr, key, r_ptr);
}

PointerRNA SceneBases_rna_type_get(PointerRNA *ptr)
{
	return rna_builtin_type_get(ptr);
}

PointerRNA SceneBases_active_get(PointerRNA *ptr)
{
	Scene *data = (Scene *)(ptr->data);
	return rna_pointer_inherit_refine(ptr, &RNA_ObjectBase, data->basact);
}

void SceneBases_active_set(PointerRNA *ptr, PointerRNA value)
{
	Scene *data = (Scene *)(ptr->data);
	data->basact = value.data;
}

static PointerRNA SceneObjects_rna_properties_get(CollectionPropertyIterator *iter)
{
	return rna_builtin_properties_get(iter);
}

void SceneObjects_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

	memset(iter, 0, sizeof(*iter));
	iter->parent = *ptr;
	iter->prop = (PropertyRNA *)&rna_SceneObjects_rna_properties;

	rna_builtin_properties_begin(iter, ptr);

	if (iter->valid)
		iter->ptr = SceneObjects_rna_properties_get(iter);
}

void SceneObjects_rna_properties_next(CollectionPropertyIterator *iter)
{
	rna_builtin_properties_next(iter);

	if (iter->valid)
		iter->ptr = SceneObjects_rna_properties_get(iter);
}

void SceneObjects_rna_properties_end(CollectionPropertyIterator *iter)
{
	rna_iterator_listbase_end(iter);
}

int SceneObjects_rna_properties_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
	return rna_builtin_properties_lookup_string(ptr, key, r_ptr);
}

PointerRNA SceneObjects_rna_type_get(PointerRNA *ptr)
{
	return rna_builtin_type_get(ptr);
}

PointerRNA SceneObjects_active_get(PointerRNA *ptr)
{
	return rna_Scene_active_object_get(ptr);
}

void SceneObjects_active_set(PointerRNA *ptr, PointerRNA value)
{
	rna_Scene_active_object_set(ptr, value);
}

static PointerRNA KeyingSets_rna_properties_get(CollectionPropertyIterator *iter)
{
	return rna_builtin_properties_get(iter);
}

void KeyingSets_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

	memset(iter, 0, sizeof(*iter));
	iter->parent = *ptr;
	iter->prop = (PropertyRNA *)&rna_KeyingSets_rna_properties;

	rna_builtin_properties_begin(iter, ptr);

	if (iter->valid)
		iter->ptr = KeyingSets_rna_properties_get(iter);
}

void KeyingSets_rna_properties_next(CollectionPropertyIterator *iter)
{
	rna_builtin_properties_next(iter);

	if (iter->valid)
		iter->ptr = KeyingSets_rna_properties_get(iter);
}

void KeyingSets_rna_properties_end(CollectionPropertyIterator *iter)
{
	rna_iterator_listbase_end(iter);
}

int KeyingSets_rna_properties_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
	return rna_builtin_properties_lookup_string(ptr, key, r_ptr);
}

PointerRNA KeyingSets_rna_type_get(PointerRNA *ptr)
{
	return rna_builtin_type_get(ptr);
}

PointerRNA KeyingSets_active_get(PointerRNA *ptr)
{
	return rna_Scene_active_keying_set_get(ptr);
}

void KeyingSets_active_set(PointerRNA *ptr, PointerRNA value)
{
	rna_Scene_active_keying_set_set(ptr, value);
}

int KeyingSets_active_index_get(PointerRNA *ptr)
{
	return rna_Scene_active_keying_set_index_get(ptr);
}

void KeyingSets_active_index_set(PointerRNA *ptr, int value)
{
	rna_Scene_active_keying_set_index_set(ptr, value);
}

static PointerRNA KeyingSetsAll_rna_properties_get(CollectionPropertyIterator *iter)
{
	return rna_builtin_properties_get(iter);
}

void KeyingSetsAll_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

	memset(iter, 0, sizeof(*iter));
	iter->parent = *ptr;
	iter->prop = (PropertyRNA *)&rna_KeyingSetsAll_rna_properties;

	rna_builtin_properties_begin(iter, ptr);

	if (iter->valid)
		iter->ptr = KeyingSetsAll_rna_properties_get(iter);
}

void KeyingSetsAll_rna_properties_next(CollectionPropertyIterator *iter)
{
	rna_builtin_properties_next(iter);

	if (iter->valid)
		iter->ptr = KeyingSetsAll_rna_properties_get(iter);
}

void KeyingSetsAll_rna_properties_end(CollectionPropertyIterator *iter)
{
	rna_iterator_listbase_end(iter);
}

int KeyingSetsAll_rna_properties_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
	return rna_builtin_properties_lookup_string(ptr, key, r_ptr);
}

PointerRNA KeyingSetsAll_rna_type_get(PointerRNA *ptr)
{
	return rna_builtin_type_get(ptr);
}

PointerRNA KeyingSetsAll_active_get(PointerRNA *ptr)
{
	return rna_Scene_active_keying_set_get(ptr);
}

void KeyingSetsAll_active_set(PointerRNA *ptr, PointerRNA value)
{
	rna_Scene_active_keying_set_set(ptr, value);
}

int KeyingSetsAll_active_index_get(PointerRNA *ptr)
{
	return rna_Scene_active_keying_set_index_get(ptr);
}

void KeyingSetsAll_active_index_set(PointerRNA *ptr, int value)
{
	rna_Scene_active_keying_set_index_set(ptr, value);
}

static PointerRNA TimelineMarkers_rna_properties_get(CollectionPropertyIterator *iter)
{
	return rna_builtin_properties_get(iter);
}

void TimelineMarkers_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

	memset(iter, 0, sizeof(*iter));
	iter->parent = *ptr;
	iter->prop = (PropertyRNA *)&rna_TimelineMarkers_rna_properties;

	rna_builtin_properties_begin(iter, ptr);

	if (iter->valid)
		iter->ptr = TimelineMarkers_rna_properties_get(iter);
}

void TimelineMarkers_rna_properties_next(CollectionPropertyIterator *iter)
{
	rna_builtin_properties_next(iter);

	if (iter->valid)
		iter->ptr = TimelineMarkers_rna_properties_get(iter);
}

void TimelineMarkers_rna_properties_end(CollectionPropertyIterator *iter)
{
	rna_iterator_listbase_end(iter);
}

int TimelineMarkers_rna_properties_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
	return rna_builtin_properties_lookup_string(ptr, key, r_ptr);
}

PointerRNA TimelineMarkers_rna_type_get(PointerRNA *ptr)
{
	return rna_builtin_type_get(ptr);
}

static PointerRNA ToolSettings_rna_properties_get(CollectionPropertyIterator *iter)
{
	return rna_builtin_properties_get(iter);
}

void ToolSettings_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

	memset(iter, 0, sizeof(*iter));
	iter->parent = *ptr;
	iter->prop = (PropertyRNA *)&rna_ToolSettings_rna_properties;

	rna_builtin_properties_begin(iter, ptr);

	if (iter->valid)
		iter->ptr = ToolSettings_rna_properties_get(iter);
}

void ToolSettings_rna_properties_next(CollectionPropertyIterator *iter)
{
	rna_builtin_properties_next(iter);

	if (iter->valid)
		iter->ptr = ToolSettings_rna_properties_get(iter);
}

void ToolSettings_rna_properties_end(CollectionPropertyIterator *iter)
{
	rna_iterator_listbase_end(iter);
}

int ToolSettings_rna_properties_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
	return rna_builtin_properties_lookup_string(ptr, key, r_ptr);
}

PointerRNA ToolSettings_rna_type_get(PointerRNA *ptr)
{
	return rna_builtin_type_get(ptr);
}

PointerRNA ToolSettings_sculpt_get(PointerRNA *ptr)
{
	ToolSettings *data = (ToolSettings *)(ptr->data);
	return rna_pointer_inherit_refine(ptr, &RNA_Sculpt, data->sculpt);
}

int ToolSettings_use_auto_normalize_get(PointerRNA *ptr)
{
	ToolSettings *data = (ToolSettings *)(ptr->data);
	return (((data->auto_normalize) & 1) != 0);
}

void ToolSettings_use_auto_normalize_set(PointerRNA *ptr, int value)
{
	ToolSettings *data = (ToolSettings *)(ptr->data);
	if (value) data->auto_normalize |= 1;
	else data->auto_normalize &= ~1;
}

int ToolSettings_use_multipaint_get(PointerRNA *ptr)
{
	ToolSettings *data = (ToolSettings *)(ptr->data);
	return (((data->multipaint) & 1) != 0);
}

void ToolSettings_use_multipaint_set(PointerRNA *ptr, int value)
{
	ToolSettings *data = (ToolSettings *)(ptr->data);
	if (value) data->multipaint |= 1;
	else data->multipaint &= ~1;
}

int ToolSettings_vertex_group_user_get(PointerRNA *ptr)
{
	ToolSettings *data = (ToolSettings *)(ptr->data);
	return (int)(data->weightuser);
}

void ToolSettings_vertex_group_user_set(PointerRNA *ptr, int value)
{
	ToolSettings *data = (ToolSettings *)(ptr->data);
	data->weightuser = value;
}

int ToolSettings_vertex_group_subset_get(PointerRNA *ptr)
{
	ToolSettings *data = (ToolSettings *)(ptr->data);
	return (int)(data->vgroupsubset);
}

void ToolSettings_vertex_group_subset_set(PointerRNA *ptr, int value)
{
	ToolSettings *data = (ToolSettings *)(ptr->data);
	data->vgroupsubset = value;
}

PointerRNA ToolSettings_vertex_paint_get(PointerRNA *ptr)
{
	ToolSettings *data = (ToolSettings *)(ptr->data);
	return rna_pointer_inherit_refine(ptr, &RNA_VertexPaint, data->vpaint);
}

PointerRNA ToolSettings_weight_paint_get(PointerRNA *ptr)
{
	ToolSettings *data = (ToolSettings *)(ptr->data);
	return rna_pointer_inherit_refine(ptr, &RNA_VertexPaint, data->wpaint);
}

PointerRNA ToolSettings_image_paint_get(PointerRNA *ptr)
{
	ToolSettings *data = (ToolSettings *)(ptr->data);
	return rna_pointer_inherit_refine(ptr, &RNA_ImagePaint, &data->imapaint);
}

PointerRNA ToolSettings_uv_sculpt_get(PointerRNA *ptr)
{
	ToolSettings *data = (ToolSettings *)(ptr->data);
	return rna_pointer_inherit_refine(ptr, &RNA_UvSculpt, data->uvsculpt);
}

PointerRNA ToolSettings_particle_edit_get(PointerRNA *ptr)
{
	ToolSettings *data = (ToolSettings *)(ptr->data);
	return rna_pointer_inherit_refine(ptr, &RNA_ParticleEdit, &data->particle);
}

int ToolSettings_use_uv_sculpt_get(PointerRNA *ptr)
{
	ToolSettings *data = (ToolSettings *)(ptr->data);
	return (((data->use_uv_sculpt) & 1) != 0);
}

void ToolSettings_use_uv_sculpt_set(PointerRNA *ptr, int value)
{
	ToolSettings *data = (ToolSettings *)(ptr->data);
	if (value) data->use_uv_sculpt |= 1;
	else data->use_uv_sculpt &= ~1;
}

int ToolSettings_uv_sculpt_lock_borders_get(PointerRNA *ptr)
{
	ToolSettings *data = (ToolSettings *)(ptr->data);
	return (((data->uv_sculpt_settings) & 1) != 0);
}

void ToolSettings_uv_sculpt_lock_borders_set(PointerRNA *ptr, int value)
{
	ToolSettings *data = (ToolSettings *)(ptr->data);
	if (value) data->uv_sculpt_settings |= 1;
	else data->uv_sculpt_settings &= ~1;
}

int ToolSettings_uv_sculpt_all_islands_get(PointerRNA *ptr)
{
	ToolSettings *data = (ToolSettings *)(ptr->data);
	return (((data->uv_sculpt_settings) & 2) != 0);
}

void ToolSettings_uv_sculpt_all_islands_set(PointerRNA *ptr, int value)
{
	ToolSettings *data = (ToolSettings *)(ptr->data);
	if (value) data->uv_sculpt_settings |= 2;
	else data->uv_sculpt_settings &= ~2;
}

int ToolSettings_uv_sculpt_tool_get(PointerRNA *ptr)
{
	ToolSettings *data = (ToolSettings *)(ptr->data);
	return (int)(data->uv_sculpt_tool);
}

void ToolSettings_uv_sculpt_tool_set(PointerRNA *ptr, int value)
{
	ToolSettings *data = (ToolSettings *)(ptr->data);
	data->uv_sculpt_tool = value;
}

int ToolSettings_uv_relax_method_get(PointerRNA *ptr)
{
	ToolSettings *data = (ToolSettings *)(ptr->data);
	return (int)(data->uv_relax_method);
}

void ToolSettings_uv_relax_method_set(PointerRNA *ptr, int value)
{
	ToolSettings *data = (ToolSettings *)(ptr->data);
	data->uv_relax_method = value;
}

int ToolSettings_proportional_edit_get(PointerRNA *ptr)
{
	ToolSettings *data = (ToolSettings *)(ptr->data);
	return (int)(data->proportional);
}

void ToolSettings_proportional_edit_set(PointerRNA *ptr, int value)
{
	ToolSettings *data = (ToolSettings *)(ptr->data);
	data->proportional = value;
}

int ToolSettings_use_proportional_edit_objects_get(PointerRNA *ptr)
{
	ToolSettings *data = (ToolSettings *)(ptr->data);
	return (int)(data->proportional_objects);
}

void ToolSettings_use_proportional_edit_objects_set(PointerRNA *ptr, int value)
{
	ToolSettings *data = (ToolSettings *)(ptr->data);
	data->proportional_objects = value;
}

int ToolSettings_use_proportional_edit_mask_get(PointerRNA *ptr)
{
	ToolSettings *data = (ToolSettings *)(ptr->data);
	return (int)(data->proportional_mask);
}

void ToolSettings_use_proportional_edit_mask_set(PointerRNA *ptr, int value)
{
	ToolSettings *data = (ToolSettings *)(ptr->data);
	data->proportional_mask = value;
}

int ToolSettings_proportional_edit_falloff_get(PointerRNA *ptr)
{
	ToolSettings *data = (ToolSettings *)(ptr->data);
	return (int)(data->prop_mode);
}

void ToolSettings_proportional_edit_falloff_set(PointerRNA *ptr, int value)
{
	ToolSettings *data = (ToolSettings *)(ptr->data);
	data->prop_mode = value;
}

float ToolSettings_proportional_size_get(PointerRNA *ptr)
{
	ToolSettings *data = (ToolSettings *)(ptr->data);
	return (float)(data->proportional_size);
}

void ToolSettings_proportional_size_set(PointerRNA *ptr, float value)
{
	ToolSettings *data = (ToolSettings *)(ptr->data);
	data->proportional_size = CLAMPIS(value, 0.0000100000f, 5000.0f);
}

float ToolSettings_normal_size_get(PointerRNA *ptr)
{
	ToolSettings *data = (ToolSettings *)(ptr->data);
	return (float)(data->normalsize);
}

void ToolSettings_normal_size_set(PointerRNA *ptr, float value)
{
	ToolSettings *data = (ToolSettings *)(ptr->data);
	data->normalsize = CLAMPIS(value, 0.0000100000f, 1000.0f);
}

float ToolSettings_double_threshold_get(PointerRNA *ptr)
{
	ToolSettings *data = (ToolSettings *)(ptr->data);
	return (float)(data->doublimit);
}

void ToolSettings_double_threshold_set(PointerRNA *ptr, float value)
{
	ToolSettings *data = (ToolSettings *)(ptr->data);
	data->doublimit = CLAMPIS(value, 0.0f, 1.0f);
}

int ToolSettings_use_mesh_automerge_get(PointerRNA *ptr)
{
	ToolSettings *data = (ToolSettings *)(ptr->data);
	return (int)(data->automerge);
}

void ToolSettings_use_mesh_automerge_set(PointerRNA *ptr, int value)
{
	ToolSettings *data = (ToolSettings *)(ptr->data);
	data->automerge = value;
}

int ToolSettings_use_snap_get(PointerRNA *ptr)
{
	ToolSettings *data = (ToolSettings *)(ptr->data);
	return (((data->snap_flag) & 1) != 0);
}

void ToolSettings_use_snap_set(PointerRNA *ptr, int value)
{
	ToolSettings *data = (ToolSettings *)(ptr->data);
	if (value) data->snap_flag |= 1;
	else data->snap_flag &= ~1;
}

int ToolSettings_use_snap_align_rotation_get(PointerRNA *ptr)
{
	ToolSettings *data = (ToolSettings *)(ptr->data);
	return (((data->snap_flag) & 2) != 0);
}

void ToolSettings_use_snap_align_rotation_set(PointerRNA *ptr, int value)
{
	ToolSettings *data = (ToolSettings *)(ptr->data);
	if (value) data->snap_flag |= 2;
	else data->snap_flag &= ~2;
}

int ToolSettings_snap_element_get(PointerRNA *ptr)
{
	ToolSettings *data = (ToolSettings *)(ptr->data);
	return (int)(data->snap_mode);
}

void ToolSettings_snap_element_set(PointerRNA *ptr, int value)
{
	ToolSettings *data = (ToolSettings *)(ptr->data);
	data->snap_mode = value;
}

int ToolSettings_snap_node_element_get(PointerRNA *ptr)
{
	ToolSettings *data = (ToolSettings *)(ptr->data);
	return (int)(data->snap_node_mode);
}

void ToolSettings_snap_node_element_set(PointerRNA *ptr, int value)
{
	ToolSettings *data = (ToolSettings *)(ptr->data);
	data->snap_node_mode = value;
}

int ToolSettings_snap_uv_element_get(PointerRNA *ptr)
{
	ToolSettings *data = (ToolSettings *)(ptr->data);
	return (int)(data->snap_uv_mode);
}

void ToolSettings_snap_uv_element_set(PointerRNA *ptr, int value)
{
	ToolSettings *data = (ToolSettings *)(ptr->data);
	data->snap_uv_mode = value;
}

int ToolSettings_snap_target_get(PointerRNA *ptr)
{
	ToolSettings *data = (ToolSettings *)(ptr->data);
	return (int)(data->snap_target);
}

void ToolSettings_snap_target_set(PointerRNA *ptr, int value)
{
	ToolSettings *data = (ToolSettings *)(ptr->data);
	data->snap_target = value;
}

int ToolSettings_use_snap_peel_object_get(PointerRNA *ptr)
{
	ToolSettings *data = (ToolSettings *)(ptr->data);
	return (((data->snap_flag) & 4) != 0);
}

void ToolSettings_use_snap_peel_object_set(PointerRNA *ptr, int value)
{
	ToolSettings *data = (ToolSettings *)(ptr->data);
	if (value) data->snap_flag |= 4;
	else data->snap_flag &= ~4;
}

int ToolSettings_use_snap_project_get(PointerRNA *ptr)
{
	ToolSettings *data = (ToolSettings *)(ptr->data);
	return (((data->snap_flag) & 8) != 0);
}

void ToolSettings_use_snap_project_set(PointerRNA *ptr, int value)
{
	ToolSettings *data = (ToolSettings *)(ptr->data);
	if (value) data->snap_flag |= 8;
	else data->snap_flag &= ~8;
}

int ToolSettings_use_snap_self_get(PointerRNA *ptr)
{
	ToolSettings *data = (ToolSettings *)(ptr->data);
	return !(((data->snap_flag) & 16) != 0);
}

void ToolSettings_use_snap_self_set(PointerRNA *ptr, int value)
{
	ToolSettings *data = (ToolSettings *)(ptr->data);
	if (!value) data->snap_flag |= 16;
	else data->snap_flag &= ~16;
}

int ToolSettings_use_grease_pencil_sessions_get(PointerRNA *ptr)
{
	ToolSettings *data = (ToolSettings *)(ptr->data);
	return (((data->gpencil_flags) & 1) != 0);
}

void ToolSettings_use_grease_pencil_sessions_set(PointerRNA *ptr, int value)
{
	ToolSettings *data = (ToolSettings *)(ptr->data);
	if (value) data->gpencil_flags |= 1;
	else data->gpencil_flags &= ~1;
}

int ToolSettings_use_keyframe_insert_auto_get(PointerRNA *ptr)
{
	ToolSettings *data = (ToolSettings *)(ptr->data);
	return (((data->autokey_mode) & 1) != 0);
}

void ToolSettings_use_keyframe_insert_auto_set(PointerRNA *ptr, int value)
{
	ToolSettings *data = (ToolSettings *)(ptr->data);
	if (value) data->autokey_mode |= 1;
	else data->autokey_mode &= ~1;
}

int ToolSettings_auto_keying_mode_get(PointerRNA *ptr)
{
	ToolSettings *data = (ToolSettings *)(ptr->data);
	return ((data->autokey_mode) & 6);
}

void ToolSettings_auto_keying_mode_set(PointerRNA *ptr, int value)
{
	ToolSettings *data = (ToolSettings *)(ptr->data);
	data->autokey_mode &= ~6;
	data->autokey_mode |= value;
}

int ToolSettings_use_record_with_nla_get(PointerRNA *ptr)
{
	ToolSettings *data = (ToolSettings *)(ptr->data);
	return (((data->autokey_flag) & 1024) != 0);
}

void ToolSettings_use_record_with_nla_set(PointerRNA *ptr, int value)
{
	ToolSettings *data = (ToolSettings *)(ptr->data);
	if (value) data->autokey_flag |= 1024;
	else data->autokey_flag &= ~1024;
}

int ToolSettings_use_keyframe_insert_keyingset_get(PointerRNA *ptr)
{
	ToolSettings *data = (ToolSettings *)(ptr->data);
	return (((data->autokey_flag) & 64) != 0);
}

void ToolSettings_use_keyframe_insert_keyingset_set(PointerRNA *ptr, int value)
{
	ToolSettings *data = (ToolSettings *)(ptr->data);
	if (value) data->autokey_flag |= 64;
	else data->autokey_flag &= ~64;
}

int ToolSettings_uv_select_mode_get(PointerRNA *ptr)
{
	ToolSettings *data = (ToolSettings *)(ptr->data);
	return (int)(data->uv_selectmode);
}

void ToolSettings_uv_select_mode_set(PointerRNA *ptr, int value)
{
	ToolSettings *data = (ToolSettings *)(ptr->data);
	data->uv_selectmode = value;
}

int ToolSettings_use_uv_select_sync_get(PointerRNA *ptr)
{
	ToolSettings *data = (ToolSettings *)(ptr->data);
	return (((data->uv_flag) & 1) != 0);
}

void ToolSettings_use_uv_select_sync_set(PointerRNA *ptr, int value)
{
	ToolSettings *data = (ToolSettings *)(ptr->data);
	if (value) data->uv_flag |= 1;
	else data->uv_flag &= ~1;
}

int ToolSettings_show_uv_local_view_get(PointerRNA *ptr)
{
	ToolSettings *data = (ToolSettings *)(ptr->data);
	return (((data->uv_flag) & 2) != 0);
}

void ToolSettings_show_uv_local_view_set(PointerRNA *ptr, int value)
{
	ToolSettings *data = (ToolSettings *)(ptr->data);
	if (value) data->uv_flag |= 2;
	else data->uv_flag &= ~2;
}

void ToolSettings_mesh_select_mode_get(PointerRNA *ptr, int values[3])
{
	ToolSettings *data = (ToolSettings *)(ptr->data);
	unsigned int i;

	for (i = 0; i < 3; i++) {
		values[i] = ((data->selectmode & (1u << i)) != 0);
	}
}

void ToolSettings_mesh_select_mode_set(PointerRNA *ptr, const int values[3])
{
	rna_Scene_editmesh_select_mode_set(ptr, values);
}

float ToolSettings_vertex_group_weight_get(PointerRNA *ptr)
{
	ToolSettings *data = (ToolSettings *)(ptr->data);
	return (float)(data->vgroup_weight);
}

void ToolSettings_vertex_group_weight_set(PointerRNA *ptr, float value)
{
	ToolSettings *data = (ToolSettings *)(ptr->data);
	data->vgroup_weight = CLAMPIS(value, 0.0f, 1.0f);
}

int ToolSettings_edge_path_mode_get(PointerRNA *ptr)
{
	ToolSettings *data = (ToolSettings *)(ptr->data);
	return (int)(data->edge_mode);
}

void ToolSettings_edge_path_mode_set(PointerRNA *ptr, int value)
{
	ToolSettings *data = (ToolSettings *)(ptr->data);
	data->edge_mode = value;
}

int ToolSettings_edge_path_live_unwrap_get(PointerRNA *ptr)
{
	ToolSettings *data = (ToolSettings *)(ptr->data);
	return (((data->edge_mode_live_unwrap) & 1) != 0);
}

void ToolSettings_edge_path_live_unwrap_set(PointerRNA *ptr, int value)
{
	ToolSettings *data = (ToolSettings *)(ptr->data);
	if (value) data->edge_mode_live_unwrap |= 1;
	else data->edge_mode_live_unwrap &= ~1;
}

int ToolSettings_use_bone_sketching_get(PointerRNA *ptr)
{
	ToolSettings *data = (ToolSettings *)(ptr->data);
	return (((data->bone_sketching) & 1) != 0);
}

void ToolSettings_use_bone_sketching_set(PointerRNA *ptr, int value)
{
	ToolSettings *data = (ToolSettings *)(ptr->data);
	if (value) data->bone_sketching |= 1;
	else data->bone_sketching &= ~1;
}

int ToolSettings_use_etch_quick_get(PointerRNA *ptr)
{
	ToolSettings *data = (ToolSettings *)(ptr->data);
	return (((data->bone_sketching) & 2) != 0);
}

void ToolSettings_use_etch_quick_set(PointerRNA *ptr, int value)
{
	ToolSettings *data = (ToolSettings *)(ptr->data);
	if (value) data->bone_sketching |= 2;
	else data->bone_sketching &= ~2;
}

int ToolSettings_use_etch_overdraw_get(PointerRNA *ptr)
{
	ToolSettings *data = (ToolSettings *)(ptr->data);
	return (((data->bone_sketching) & 4) != 0);
}

void ToolSettings_use_etch_overdraw_set(PointerRNA *ptr, int value)
{
	ToolSettings *data = (ToolSettings *)(ptr->data);
	if (value) data->bone_sketching |= 4;
	else data->bone_sketching &= ~4;
}

int ToolSettings_use_etch_autoname_get(PointerRNA *ptr)
{
	ToolSettings *data = (ToolSettings *)(ptr->data);
	return (((data->skgen_retarget_options) & 1) != 0);
}

void ToolSettings_use_etch_autoname_set(PointerRNA *ptr, int value)
{
	ToolSettings *data = (ToolSettings *)(ptr->data);
	if (value) data->skgen_retarget_options |= 1;
	else data->skgen_retarget_options &= ~1;
}

void ToolSettings_etch_number_get(PointerRNA *ptr, char *value)
{
	ToolSettings *data = (ToolSettings *)(ptr->data);
	BLI_strncpy_utf8(value, data->skgen_num_string, 8);
}

int ToolSettings_etch_number_length(PointerRNA *ptr)
{
	ToolSettings *data = (ToolSettings *)(ptr->data);
	return strlen(data->skgen_num_string);
}

void ToolSettings_etch_number_set(PointerRNA *ptr, const char *value)
{
	ToolSettings *data = (ToolSettings *)(ptr->data);
	BLI_strncpy_utf8(data->skgen_num_string, value, 8);
}

void ToolSettings_etch_side_get(PointerRNA *ptr, char *value)
{
	ToolSettings *data = (ToolSettings *)(ptr->data);
	BLI_strncpy_utf8(value, data->skgen_num_string, 8);
}

int ToolSettings_etch_side_length(PointerRNA *ptr)
{
	ToolSettings *data = (ToolSettings *)(ptr->data);
	return strlen(data->skgen_num_string);
}

void ToolSettings_etch_side_set(PointerRNA *ptr, const char *value)
{
	ToolSettings *data = (ToolSettings *)(ptr->data);
	BLI_strncpy_utf8(data->skgen_num_string, value, 8);
}

PointerRNA ToolSettings_etch_template_get(PointerRNA *ptr)
{
	ToolSettings *data = (ToolSettings *)(ptr->data);
	return rna_pointer_inherit_refine(ptr, &RNA_Object, data->skgen_template);
}

void ToolSettings_etch_template_set(PointerRNA *ptr, PointerRNA value)
{
	rna_Scene_skgen_etch_template_set(ptr, value);
}

int ToolSettings_etch_subdivision_number_get(PointerRNA *ptr)
{
	ToolSettings *data = (ToolSettings *)(ptr->data);
	return (int)(data->skgen_subdivision_number);
}

void ToolSettings_etch_subdivision_number_set(PointerRNA *ptr, int value)
{
	ToolSettings *data = (ToolSettings *)(ptr->data);
	data->skgen_subdivision_number = CLAMPIS(value, 1, 255);
}

float ToolSettings_etch_adaptive_limit_get(PointerRNA *ptr)
{
	ToolSettings *data = (ToolSettings *)(ptr->data);
	return (float)(data->skgen_correlation_limit);
}

void ToolSettings_etch_adaptive_limit_set(PointerRNA *ptr, float value)
{
	ToolSettings *data = (ToolSettings *)(ptr->data);
	data->skgen_correlation_limit = CLAMPIS(value, 0.0000100000f, 1.0f);
}

float ToolSettings_etch_length_limit_get(PointerRNA *ptr)
{
	ToolSettings *data = (ToolSettings *)(ptr->data);
	return (float)(data->skgen_length_limit);
}

void ToolSettings_etch_length_limit_set(PointerRNA *ptr, float value)
{
	ToolSettings *data = (ToolSettings *)(ptr->data);
	data->skgen_length_limit = CLAMPIS(value, 0.0000100000f, 100000.0f);
}

int ToolSettings_etch_roll_mode_get(PointerRNA *ptr)
{
	ToolSettings *data = (ToolSettings *)(ptr->data);
	return ((data->skgen_retarget_roll) & 3);
}

void ToolSettings_etch_roll_mode_set(PointerRNA *ptr, int value)
{
	ToolSettings *data = (ToolSettings *)(ptr->data);
	data->skgen_retarget_roll &= ~3;
	data->skgen_retarget_roll |= value;
}

int ToolSettings_etch_convert_mode_get(PointerRNA *ptr)
{
	ToolSettings *data = (ToolSettings *)(ptr->data);
	return ((data->bone_sketching_convert) & 3);
}

void ToolSettings_etch_convert_mode_set(PointerRNA *ptr, int value)
{
	ToolSettings *data = (ToolSettings *)(ptr->data);
	data->bone_sketching_convert &= ~3;
	data->bone_sketching_convert |= value;
}

PointerRNA ToolSettings_unified_paint_settings_get(PointerRNA *ptr)
{
	ToolSettings *data = (ToolSettings *)(ptr->data);
	return rna_pointer_inherit_refine(ptr, &RNA_UnifiedPaintSettings, &data->unified_paint_settings);
}

PointerRNA ToolSettings_statvis_get(PointerRNA *ptr)
{
	ToolSettings *data = (ToolSettings *)(ptr->data);
	return rna_pointer_inherit_refine(ptr, &RNA_MeshStatVis, &data->statvis);
}

static PointerRNA UnifiedPaintSettings_rna_properties_get(CollectionPropertyIterator *iter)
{
	return rna_builtin_properties_get(iter);
}

void UnifiedPaintSettings_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

	memset(iter, 0, sizeof(*iter));
	iter->parent = *ptr;
	iter->prop = (PropertyRNA *)&rna_UnifiedPaintSettings_rna_properties;

	rna_builtin_properties_begin(iter, ptr);

	if (iter->valid)
		iter->ptr = UnifiedPaintSettings_rna_properties_get(iter);
}

void UnifiedPaintSettings_rna_properties_next(CollectionPropertyIterator *iter)
{
	rna_builtin_properties_next(iter);

	if (iter->valid)
		iter->ptr = UnifiedPaintSettings_rna_properties_get(iter);
}

void UnifiedPaintSettings_rna_properties_end(CollectionPropertyIterator *iter)
{
	rna_iterator_listbase_end(iter);
}

int UnifiedPaintSettings_rna_properties_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
	return rna_builtin_properties_lookup_string(ptr, key, r_ptr);
}

PointerRNA UnifiedPaintSettings_rna_type_get(PointerRNA *ptr)
{
	return rna_builtin_type_get(ptr);
}

int UnifiedPaintSettings_use_unified_size_get(PointerRNA *ptr)
{
	UnifiedPaintSettings *data = (UnifiedPaintSettings *)(ptr->data);
	return (((data->flag) & 1) != 0);
}

void UnifiedPaintSettings_use_unified_size_set(PointerRNA *ptr, int value)
{
	UnifiedPaintSettings *data = (UnifiedPaintSettings *)(ptr->data);
	if (value) data->flag |= 1;
	else data->flag &= ~1;
}

int UnifiedPaintSettings_use_unified_strength_get(PointerRNA *ptr)
{
	UnifiedPaintSettings *data = (UnifiedPaintSettings *)(ptr->data);
	return (((data->flag) & 2) != 0);
}

void UnifiedPaintSettings_use_unified_strength_set(PointerRNA *ptr, int value)
{
	UnifiedPaintSettings *data = (UnifiedPaintSettings *)(ptr->data);
	if (value) data->flag |= 2;
	else data->flag &= ~2;
}

int UnifiedPaintSettings_use_unified_weight_get(PointerRNA *ptr)
{
	UnifiedPaintSettings *data = (UnifiedPaintSettings *)(ptr->data);
	return (((data->flag) & 32) != 0);
}

void UnifiedPaintSettings_use_unified_weight_set(PointerRNA *ptr, int value)
{
	UnifiedPaintSettings *data = (UnifiedPaintSettings *)(ptr->data);
	if (value) data->flag |= 32;
	else data->flag &= ~32;
}

int UnifiedPaintSettings_use_unified_color_get(PointerRNA *ptr)
{
	UnifiedPaintSettings *data = (UnifiedPaintSettings *)(ptr->data);
	return (((data->flag) & 64) != 0);
}

void UnifiedPaintSettings_use_unified_color_set(PointerRNA *ptr, int value)
{
	UnifiedPaintSettings *data = (UnifiedPaintSettings *)(ptr->data);
	if (value) data->flag |= 64;
	else data->flag &= ~64;
}

int UnifiedPaintSettings_size_get(PointerRNA *ptr)
{
	UnifiedPaintSettings *data = (UnifiedPaintSettings *)(ptr->data);
	return (int)(data->size);
}

void UnifiedPaintSettings_size_set(PointerRNA *ptr, int value)
{
	rna_UnifiedPaintSettings_size_set(ptr, value);
}

float UnifiedPaintSettings_unprojected_radius_get(PointerRNA *ptr)
{
	UnifiedPaintSettings *data = (UnifiedPaintSettings *)(ptr->data);
	return (float)(data->unprojected_radius);
}

void UnifiedPaintSettings_unprojected_radius_set(PointerRNA *ptr, float value)
{
	rna_UnifiedPaintSettings_unprojected_radius_set(ptr, value);
}

float UnifiedPaintSettings_strength_get(PointerRNA *ptr)
{
	UnifiedPaintSettings *data = (UnifiedPaintSettings *)(ptr->data);
	return (float)(data->alpha);
}

void UnifiedPaintSettings_strength_set(PointerRNA *ptr, float value)
{
	UnifiedPaintSettings *data = (UnifiedPaintSettings *)(ptr->data);
	data->alpha = CLAMPIS(value, 0.0f, 10.0f);
}

float UnifiedPaintSettings_weight_get(PointerRNA *ptr)
{
	UnifiedPaintSettings *data = (UnifiedPaintSettings *)(ptr->data);
	return (float)(data->weight);
}

void UnifiedPaintSettings_weight_set(PointerRNA *ptr, float value)
{
	UnifiedPaintSettings *data = (UnifiedPaintSettings *)(ptr->data);
	data->weight = CLAMPIS(value, 0.0f, 1.0f);
}

void UnifiedPaintSettings_color_get(PointerRNA *ptr, float values[3])
{
	UnifiedPaintSettings *data = (UnifiedPaintSettings *)(ptr->data);
	unsigned int i;

	for (i = 0; i < 3; i++) {
		values[i] = (float)(((float *)data->rgb)[i]);
	}
}

void UnifiedPaintSettings_color_set(PointerRNA *ptr, const float values[3])
{
	UnifiedPaintSettings *data = (UnifiedPaintSettings *)(ptr->data);
	unsigned int i;

	for (i = 0; i < 3; i++) {
		((float *)data->rgb)[i] = CLAMPIS(values[i], 0.0f, 1.0f);
	}
}

void UnifiedPaintSettings_secondary_color_get(PointerRNA *ptr, float values[3])
{
	UnifiedPaintSettings *data = (UnifiedPaintSettings *)(ptr->data);
	unsigned int i;

	for (i = 0; i < 3; i++) {
		values[i] = (float)(((float *)data->secondary_rgb)[i]);
	}
}

void UnifiedPaintSettings_secondary_color_set(PointerRNA *ptr, const float values[3])
{
	UnifiedPaintSettings *data = (UnifiedPaintSettings *)(ptr->data);
	unsigned int i;

	for (i = 0; i < 3; i++) {
		((float *)data->secondary_rgb)[i] = CLAMPIS(values[i], 0.0f, 1.0f);
	}
}

int UnifiedPaintSettings_use_pressure_size_get(PointerRNA *ptr)
{
	UnifiedPaintSettings *data = (UnifiedPaintSettings *)(ptr->data);
	return (((data->flag) & 8) != 0);
}

void UnifiedPaintSettings_use_pressure_size_set(PointerRNA *ptr, int value)
{
	UnifiedPaintSettings *data = (UnifiedPaintSettings *)(ptr->data);
	if (value) data->flag |= 8;
	else data->flag &= ~8;
}

int UnifiedPaintSettings_use_pressure_strength_get(PointerRNA *ptr)
{
	UnifiedPaintSettings *data = (UnifiedPaintSettings *)(ptr->data);
	return (((data->flag) & 16) != 0);
}

void UnifiedPaintSettings_use_pressure_strength_set(PointerRNA *ptr, int value)
{
	UnifiedPaintSettings *data = (UnifiedPaintSettings *)(ptr->data);
	if (value) data->flag |= 16;
	else data->flag &= ~16;
}

int UnifiedPaintSettings_use_locked_size_get(PointerRNA *ptr)
{
	UnifiedPaintSettings *data = (UnifiedPaintSettings *)(ptr->data);
	return (((data->flag) & 4) != 0);
}

void UnifiedPaintSettings_use_locked_size_set(PointerRNA *ptr, int value)
{
	UnifiedPaintSettings *data = (UnifiedPaintSettings *)(ptr->data);
	if (value) data->flag |= 4;
	else data->flag &= ~4;
}

static PointerRNA MeshStatVis_rna_properties_get(CollectionPropertyIterator *iter)
{
	return rna_builtin_properties_get(iter);
}

void MeshStatVis_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

	memset(iter, 0, sizeof(*iter));
	iter->parent = *ptr;
	iter->prop = (PropertyRNA *)&rna_MeshStatVis_rna_properties;

	rna_builtin_properties_begin(iter, ptr);

	if (iter->valid)
		iter->ptr = MeshStatVis_rna_properties_get(iter);
}

void MeshStatVis_rna_properties_next(CollectionPropertyIterator *iter)
{
	rna_builtin_properties_next(iter);

	if (iter->valid)
		iter->ptr = MeshStatVis_rna_properties_get(iter);
}

void MeshStatVis_rna_properties_end(CollectionPropertyIterator *iter)
{
	rna_iterator_listbase_end(iter);
}

int MeshStatVis_rna_properties_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
	return rna_builtin_properties_lookup_string(ptr, key, r_ptr);
}

PointerRNA MeshStatVis_rna_type_get(PointerRNA *ptr)
{
	return rna_builtin_type_get(ptr);
}

int MeshStatVis_type_get(PointerRNA *ptr)
{
	MeshStatVis *data = (MeshStatVis *)(ptr->data);
	return (int)(data->type);
}

void MeshStatVis_type_set(PointerRNA *ptr, int value)
{
	MeshStatVis *data = (MeshStatVis *)(ptr->data);
	data->type = value;
}

float MeshStatVis_overhang_min_get(PointerRNA *ptr)
{
	MeshStatVis *data = (MeshStatVis *)(ptr->data);
	return (float)(data->overhang_min);
}

void MeshStatVis_overhang_min_set(PointerRNA *ptr, float value)
{
	MeshStatVis *data = (MeshStatVis *)(ptr->data);
	data->overhang_min = CLAMPIS(value, 0.0f, 3.1415927410f);
}

float MeshStatVis_overhang_max_get(PointerRNA *ptr)
{
	MeshStatVis *data = (MeshStatVis *)(ptr->data);
	return (float)(data->overhang_max);
}

void MeshStatVis_overhang_max_set(PointerRNA *ptr, float value)
{
	MeshStatVis *data = (MeshStatVis *)(ptr->data);
	data->overhang_max = CLAMPIS(value, 0.0f, 3.1415927410f);
}

int MeshStatVis_overhang_axis_get(PointerRNA *ptr)
{
	MeshStatVis *data = (MeshStatVis *)(ptr->data);
	return (int)(data->overhang_axis);
}

void MeshStatVis_overhang_axis_set(PointerRNA *ptr, int value)
{
	MeshStatVis *data = (MeshStatVis *)(ptr->data);
	data->overhang_axis = value;
}

float MeshStatVis_thickness_min_get(PointerRNA *ptr)
{
	MeshStatVis *data = (MeshStatVis *)(ptr->data);
	return (float)(data->thickness_min);
}

void MeshStatVis_thickness_min_set(PointerRNA *ptr, float value)
{
	MeshStatVis *data = (MeshStatVis *)(ptr->data);
	data->thickness_min = CLAMPIS(value, 0.0f, 1000.0f);
}

float MeshStatVis_thickness_max_get(PointerRNA *ptr)
{
	MeshStatVis *data = (MeshStatVis *)(ptr->data);
	return (float)(data->thickness_max);
}

void MeshStatVis_thickness_max_set(PointerRNA *ptr, float value)
{
	MeshStatVis *data = (MeshStatVis *)(ptr->data);
	data->thickness_max = CLAMPIS(value, 0.0f, 1000.0f);
}

int MeshStatVis_thickness_samples_get(PointerRNA *ptr)
{
	MeshStatVis *data = (MeshStatVis *)(ptr->data);
	return (int)(data->thickness_samples);
}

void MeshStatVis_thickness_samples_set(PointerRNA *ptr, int value)
{
	MeshStatVis *data = (MeshStatVis *)(ptr->data);
	data->thickness_samples = CLAMPIS(value, 1, 32);
}

float MeshStatVis_distort_min_get(PointerRNA *ptr)
{
	MeshStatVis *data = (MeshStatVis *)(ptr->data);
	return (float)(data->distort_min);
}

void MeshStatVis_distort_min_set(PointerRNA *ptr, float value)
{
	MeshStatVis *data = (MeshStatVis *)(ptr->data);
	data->distort_min = CLAMPIS(value, 0.0f, 3.1415927410f);
}

float MeshStatVis_distort_max_get(PointerRNA *ptr)
{
	MeshStatVis *data = (MeshStatVis *)(ptr->data);
	return (float)(data->distort_max);
}

void MeshStatVis_distort_max_set(PointerRNA *ptr, float value)
{
	MeshStatVis *data = (MeshStatVis *)(ptr->data);
	data->distort_max = CLAMPIS(value, 0.0f, 3.1415927410f);
}

float MeshStatVis_sharp_min_get(PointerRNA *ptr)
{
	MeshStatVis *data = (MeshStatVis *)(ptr->data);
	return (float)(data->sharp_min);
}

void MeshStatVis_sharp_min_set(PointerRNA *ptr, float value)
{
	MeshStatVis *data = (MeshStatVis *)(ptr->data);
	data->sharp_min = CLAMPIS(value, -3.1415927410f, 3.1415927410f);
}

float MeshStatVis_sharp_max_get(PointerRNA *ptr)
{
	MeshStatVis *data = (MeshStatVis *)(ptr->data);
	return (float)(data->sharp_max);
}

void MeshStatVis_sharp_max_set(PointerRNA *ptr, float value)
{
	MeshStatVis *data = (MeshStatVis *)(ptr->data);
	data->sharp_max = CLAMPIS(value, -3.1415927410f, 3.1415927410f);
}

static PointerRNA UnitSettings_rna_properties_get(CollectionPropertyIterator *iter)
{
	return rna_builtin_properties_get(iter);
}

void UnitSettings_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

	memset(iter, 0, sizeof(*iter));
	iter->parent = *ptr;
	iter->prop = (PropertyRNA *)&rna_UnitSettings_rna_properties;

	rna_builtin_properties_begin(iter, ptr);

	if (iter->valid)
		iter->ptr = UnitSettings_rna_properties_get(iter);
}

void UnitSettings_rna_properties_next(CollectionPropertyIterator *iter)
{
	rna_builtin_properties_next(iter);

	if (iter->valid)
		iter->ptr = UnitSettings_rna_properties_get(iter);
}

void UnitSettings_rna_properties_end(CollectionPropertyIterator *iter)
{
	rna_iterator_listbase_end(iter);
}

int UnitSettings_rna_properties_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
	return rna_builtin_properties_lookup_string(ptr, key, r_ptr);
}

PointerRNA UnitSettings_rna_type_get(PointerRNA *ptr)
{
	return rna_builtin_type_get(ptr);
}

int UnitSettings_system_get(PointerRNA *ptr)
{
	UnitSettings *data = (UnitSettings *)(ptr->data);
	return (int)(data->system);
}

void UnitSettings_system_set(PointerRNA *ptr, int value)
{
	UnitSettings *data = (UnitSettings *)(ptr->data);
	data->system = value;
}

int UnitSettings_system_rotation_get(PointerRNA *ptr)
{
	UnitSettings *data = (UnitSettings *)(ptr->data);
	return (int)(data->system_rotation);
}

void UnitSettings_system_rotation_set(PointerRNA *ptr, int value)
{
	UnitSettings *data = (UnitSettings *)(ptr->data);
	data->system_rotation = value;
}

float UnitSettings_scale_length_get(PointerRNA *ptr)
{
	UnitSettings *data = (UnitSettings *)(ptr->data);
	return (float)(data->scale_length);
}

void UnitSettings_scale_length_set(PointerRNA *ptr, float value)
{
	UnitSettings *data = (UnitSettings *)(ptr->data);
	data->scale_length = CLAMPIS(value, 0.0000100000f, 100000.0f);
}

int UnitSettings_use_separate_get(PointerRNA *ptr)
{
	UnitSettings *data = (UnitSettings *)(ptr->data);
	return (((data->flag) & 1) != 0);
}

void UnitSettings_use_separate_set(PointerRNA *ptr, int value)
{
	UnitSettings *data = (UnitSettings *)(ptr->data);
	if (value) data->flag |= 1;
	else data->flag &= ~1;
}

static PointerRNA ImageFormatSettings_rna_properties_get(CollectionPropertyIterator *iter)
{
	return rna_builtin_properties_get(iter);
}

void ImageFormatSettings_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

	memset(iter, 0, sizeof(*iter));
	iter->parent = *ptr;
	iter->prop = (PropertyRNA *)&rna_ImageFormatSettings_rna_properties;

	rna_builtin_properties_begin(iter, ptr);

	if (iter->valid)
		iter->ptr = ImageFormatSettings_rna_properties_get(iter);
}

void ImageFormatSettings_rna_properties_next(CollectionPropertyIterator *iter)
{
	rna_builtin_properties_next(iter);

	if (iter->valid)
		iter->ptr = ImageFormatSettings_rna_properties_get(iter);
}

void ImageFormatSettings_rna_properties_end(CollectionPropertyIterator *iter)
{
	rna_iterator_listbase_end(iter);
}

int ImageFormatSettings_rna_properties_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
	return rna_builtin_properties_lookup_string(ptr, key, r_ptr);
}

PointerRNA ImageFormatSettings_rna_type_get(PointerRNA *ptr)
{
	return rna_builtin_type_get(ptr);
}

int ImageFormatSettings_file_format_get(PointerRNA *ptr)
{
	ImageFormatData *data = (ImageFormatData *)(ptr->data);
	return (int)(data->imtype);
}

void ImageFormatSettings_file_format_set(PointerRNA *ptr, int value)
{
	rna_ImageFormatSettings_file_format_set(ptr, value);
}

int ImageFormatSettings_color_mode_get(PointerRNA *ptr)
{
	ImageFormatData *data = (ImageFormatData *)(ptr->data);
	return ((data->planes) & 56);
}

void ImageFormatSettings_color_mode_set(PointerRNA *ptr, int value)
{
	ImageFormatData *data = (ImageFormatData *)(ptr->data);
	data->planes &= ~56;
	data->planes |= value;
}

int ImageFormatSettings_color_depth_get(PointerRNA *ptr)
{
	ImageFormatData *data = (ImageFormatData *)(ptr->data);
	return ((data->depth) & 94);
}

void ImageFormatSettings_color_depth_set(PointerRNA *ptr, int value)
{
	ImageFormatData *data = (ImageFormatData *)(ptr->data);
	data->depth &= ~94;
	data->depth |= value;
}

int ImageFormatSettings_quality_get(PointerRNA *ptr)
{
	ImageFormatData *data = (ImageFormatData *)(ptr->data);
	return (int)(data->quality);
}

void ImageFormatSettings_quality_set(PointerRNA *ptr, int value)
{
	ImageFormatData *data = (ImageFormatData *)(ptr->data);
	data->quality = CLAMPIS(value, 0, 100);
}

int ImageFormatSettings_compression_get(PointerRNA *ptr)
{
	ImageFormatData *data = (ImageFormatData *)(ptr->data);
	return (int)(data->compress);
}

void ImageFormatSettings_compression_set(PointerRNA *ptr, int value)
{
	ImageFormatData *data = (ImageFormatData *)(ptr->data);
	data->compress = CLAMPIS(value, 0, 100);
}

int ImageFormatSettings_use_zbuffer_get(PointerRNA *ptr)
{
	ImageFormatData *data = (ImageFormatData *)(ptr->data);
	return (((data->flag) & 1) != 0);
}

void ImageFormatSettings_use_zbuffer_set(PointerRNA *ptr, int value)
{
	ImageFormatData *data = (ImageFormatData *)(ptr->data);
	if (value) data->flag |= 1;
	else data->flag &= ~1;
}

int ImageFormatSettings_use_preview_get(PointerRNA *ptr)
{
	ImageFormatData *data = (ImageFormatData *)(ptr->data);
	return (((data->flag) & 2) != 0);
}

void ImageFormatSettings_use_preview_set(PointerRNA *ptr, int value)
{
	ImageFormatData *data = (ImageFormatData *)(ptr->data);
	if (value) data->flag |= 2;
	else data->flag &= ~2;
}

int ImageFormatSettings_use_cineon_log_get(PointerRNA *ptr)
{
	ImageFormatData *data = (ImageFormatData *)(ptr->data);
	return (((data->cineon_flag) & 1) != 0);
}

void ImageFormatSettings_use_cineon_log_set(PointerRNA *ptr, int value)
{
	ImageFormatData *data = (ImageFormatData *)(ptr->data);
	if (value) data->cineon_flag |= 1;
	else data->cineon_flag &= ~1;
}

int ImageFormatSettings_cineon_black_get(PointerRNA *ptr)
{
	ImageFormatData *data = (ImageFormatData *)(ptr->data);
	return (int)(data->cineon_black);
}

void ImageFormatSettings_cineon_black_set(PointerRNA *ptr, int value)
{
	ImageFormatData *data = (ImageFormatData *)(ptr->data);
	data->cineon_black = CLAMPIS(value, 0, 1024);
}

int ImageFormatSettings_cineon_white_get(PointerRNA *ptr)
{
	ImageFormatData *data = (ImageFormatData *)(ptr->data);
	return (int)(data->cineon_white);
}

void ImageFormatSettings_cineon_white_set(PointerRNA *ptr, int value)
{
	ImageFormatData *data = (ImageFormatData *)(ptr->data);
	data->cineon_white = CLAMPIS(value, 0, 1024);
}

float ImageFormatSettings_cineon_gamma_get(PointerRNA *ptr)
{
	ImageFormatData *data = (ImageFormatData *)(ptr->data);
	return (float)(data->cineon_gamma);
}

void ImageFormatSettings_cineon_gamma_set(PointerRNA *ptr, float value)
{
	ImageFormatData *data = (ImageFormatData *)(ptr->data);
	data->cineon_gamma = CLAMPIS(value, 0.0f, 10.0f);
}

PointerRNA ImageFormatSettings_view_settings_get(PointerRNA *ptr)
{
	ImageFormatData *data = (ImageFormatData *)(ptr->data);
	return rna_pointer_inherit_refine(ptr, &RNA_ColorManagedViewSettings, &data->view_settings);
}

PointerRNA ImageFormatSettings_display_settings_get(PointerRNA *ptr)
{
	ImageFormatData *data = (ImageFormatData *)(ptr->data);
	return rna_pointer_inherit_refine(ptr, &RNA_ColorManagedDisplaySettings, &data->display_settings);
}

static PointerRNA SceneGameData_rna_properties_get(CollectionPropertyIterator *iter)
{
	return rna_builtin_properties_get(iter);
}

void SceneGameData_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

	memset(iter, 0, sizeof(*iter));
	iter->parent = *ptr;
	iter->prop = (PropertyRNA *)&rna_SceneGameData_rna_properties;

	rna_builtin_properties_begin(iter, ptr);

	if (iter->valid)
		iter->ptr = SceneGameData_rna_properties_get(iter);
}

void SceneGameData_rna_properties_next(CollectionPropertyIterator *iter)
{
	rna_builtin_properties_next(iter);

	if (iter->valid)
		iter->ptr = SceneGameData_rna_properties_get(iter);
}

void SceneGameData_rna_properties_end(CollectionPropertyIterator *iter)
{
	rna_iterator_listbase_end(iter);
}

int SceneGameData_rna_properties_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
	return rna_builtin_properties_lookup_string(ptr, key, r_ptr);
}

PointerRNA SceneGameData_rna_type_get(PointerRNA *ptr)
{
	return rna_builtin_type_get(ptr);
}

int SceneGameData_resolution_x_get(PointerRNA *ptr)
{
	GameData *data = (GameData *)(ptr->data);
	return (int)(data->xplay);
}

void SceneGameData_resolution_x_set(PointerRNA *ptr, int value)
{
	GameData *data = (GameData *)(ptr->data);
	data->xplay = CLAMPIS(value, 4, 10000);
}

int SceneGameData_resolution_y_get(PointerRNA *ptr)
{
	GameData *data = (GameData *)(ptr->data);
	return (int)(data->yplay);
}

void SceneGameData_resolution_y_set(PointerRNA *ptr, int value)
{
	GameData *data = (GameData *)(ptr->data);
	data->yplay = CLAMPIS(value, 4, 10000);
}

int SceneGameData_vsync_get(PointerRNA *ptr)
{
	GameData *data = (GameData *)(ptr->data);
	return (int)(data->vsync);
}

void SceneGameData_vsync_set(PointerRNA *ptr, int value)
{
	GameData *data = (GameData *)(ptr->data);
	data->vsync = value;
}

int SceneGameData_samples_get(PointerRNA *ptr)
{
	GameData *data = (GameData *)(ptr->data);
	return (int)(data->aasamples);
}

void SceneGameData_samples_set(PointerRNA *ptr, int value)
{
	GameData *data = (GameData *)(ptr->data);
	data->aasamples = value;
}

int SceneGameData_depth_get(PointerRNA *ptr)
{
	GameData *data = (GameData *)(ptr->data);
	return (int)(data->depth);
}

void SceneGameData_depth_set(PointerRNA *ptr, int value)
{
	GameData *data = (GameData *)(ptr->data);
	data->depth = CLAMPIS(value, 8, 32);
}

int SceneGameData_exit_key_get(PointerRNA *ptr)
{
	GameData *data = (GameData *)(ptr->data);
	return (int)(data->exitkey);
}

void SceneGameData_exit_key_set(PointerRNA *ptr, int value)
{
	rna_GameSettings_exit_key_set(ptr, value);
}

int SceneGameData_raster_storage_get(PointerRNA *ptr)
{
	GameData *data = (GameData *)(ptr->data);
	return (int)(data->raster_storage);
}

void SceneGameData_raster_storage_set(PointerRNA *ptr, int value)
{
	GameData *data = (GameData *)(ptr->data);
	data->raster_storage = value;
}

int SceneGameData_frequency_get(PointerRNA *ptr)
{
	GameData *data = (GameData *)(ptr->data);
	return (int)(data->freqplay);
}

void SceneGameData_frequency_set(PointerRNA *ptr, int value)
{
	GameData *data = (GameData *)(ptr->data);
	data->freqplay = CLAMPIS(value, 4, 2000);
}

int SceneGameData_show_fullscreen_get(PointerRNA *ptr)
{
	GameData *data = (GameData *)(ptr->data);
	return (((data->playerflag) & 1) != 0);
}

void SceneGameData_show_fullscreen_set(PointerRNA *ptr, int value)
{
	GameData *data = (GameData *)(ptr->data);
	if (value) data->playerflag |= 1;
	else data->playerflag &= ~1;
}

int SceneGameData_use_desktop_get(PointerRNA *ptr)
{
	GameData *data = (GameData *)(ptr->data);
	return (((data->playerflag) & 2) != 0);
}

void SceneGameData_use_desktop_set(PointerRNA *ptr, int value)
{
	GameData *data = (GameData *)(ptr->data);
	if (value) data->playerflag |= 2;
	else data->playerflag &= ~2;
}

int SceneGameData_frame_type_get(PointerRNA *ptr)
{
	GameData *data = (GameData *)(ptr->data);
	return (int)(data->framing.type);
}

void SceneGameData_frame_type_set(PointerRNA *ptr, int value)
{
	GameData *data = (GameData *)(ptr->data);
	data->framing.type = value;
}

void SceneGameData_frame_color_get(PointerRNA *ptr, float values[3])
{
	GameData *data = (GameData *)(ptr->data);
	unsigned int i;

	for (i = 0; i < 3; i++) {
		values[i] = (float)(((float *)data->framing.col)[i]);
	}
}

void SceneGameData_frame_color_set(PointerRNA *ptr, const float values[3])
{
	GameData *data = (GameData *)(ptr->data);
	unsigned int i;

	for (i = 0; i < 3; i++) {
		((float *)data->framing.col)[i] = CLAMPIS(values[i], 0.0f, 1.0f);
	}
}

int SceneGameData_stereo_get(PointerRNA *ptr)
{
	GameData *data = (GameData *)(ptr->data);
	return (int)(data->stereoflag);
}

void SceneGameData_stereo_set(PointerRNA *ptr, int value)
{
	GameData *data = (GameData *)(ptr->data);
	data->stereoflag = value;
}

int SceneGameData_stereo_mode_get(PointerRNA *ptr)
{
	GameData *data = (GameData *)(ptr->data);
	return (int)(data->stereomode);
}

void SceneGameData_stereo_mode_set(PointerRNA *ptr, int value)
{
	GameData *data = (GameData *)(ptr->data);
	data->stereomode = value;
}

float SceneGameData_stereo_eye_separation_get(PointerRNA *ptr)
{
	GameData *data = (GameData *)(ptr->data);
	return (float)(data->eyeseparation);
}

void SceneGameData_stereo_eye_separation_set(PointerRNA *ptr, float value)
{
	GameData *data = (GameData *)(ptr->data);
	data->eyeseparation = CLAMPIS(value, 0.0099999998f, 5.0f);
}

int SceneGameData_dome_mode_get(PointerRNA *ptr)
{
	GameData *data = (GameData *)(ptr->data);
	return (int)(data->dome.mode);
}

void SceneGameData_dome_mode_set(PointerRNA *ptr, int value)
{
	GameData *data = (GameData *)(ptr->data);
	data->dome.mode = value;
}

int SceneGameData_dome_tessellation_get(PointerRNA *ptr)
{
	GameData *data = (GameData *)(ptr->data);
	return (int)(data->dome.res);
}

void SceneGameData_dome_tessellation_set(PointerRNA *ptr, int value)
{
	GameData *data = (GameData *)(ptr->data);
	data->dome.res = CLAMPIS(value, -32768, 32767);
}

float SceneGameData_dome_buffer_resolution_get(PointerRNA *ptr)
{
	GameData *data = (GameData *)(ptr->data);
	return (float)(data->dome.resbuf);
}

void SceneGameData_dome_buffer_resolution_set(PointerRNA *ptr, float value)
{
	GameData *data = (GameData *)(ptr->data);
	data->dome.resbuf = value;
}

int SceneGameData_dome_angle_get(PointerRNA *ptr)
{
	GameData *data = (GameData *)(ptr->data);
	return (int)(data->dome.angle);
}

void SceneGameData_dome_angle_set(PointerRNA *ptr, int value)
{
	GameData *data = (GameData *)(ptr->data);
	data->dome.angle = CLAMPIS(value, -32768, 32767);
}

int SceneGameData_dome_tilt_get(PointerRNA *ptr)
{
	GameData *data = (GameData *)(ptr->data);
	return (int)(data->dome.tilt);
}

void SceneGameData_dome_tilt_set(PointerRNA *ptr, int value)
{
	GameData *data = (GameData *)(ptr->data);
	data->dome.tilt = CLAMPIS(value, -32768, 32767);
}

PointerRNA SceneGameData_dome_text_get(PointerRNA *ptr)
{
	GameData *data = (GameData *)(ptr->data);
	return rna_pointer_inherit_refine(ptr, &RNA_Text, data->dome.warptext);
}

void SceneGameData_dome_text_set(PointerRNA *ptr, PointerRNA value)
{
	GameData *data = (GameData *)(ptr->data);
	if (value.data)
		id_lib_extern((ID *)value.data);

	data->dome.warptext = value.data;
}

int SceneGameData_physics_engine_get(PointerRNA *ptr)
{
	GameData *data = (GameData *)(ptr->data);
	return (int)(data->physicsEngine);
}

void SceneGameData_physics_engine_set(PointerRNA *ptr, int value)
{
	GameData *data = (GameData *)(ptr->data);
	data->physicsEngine = value;
}

float SceneGameData_physics_gravity_get(PointerRNA *ptr)
{
	GameData *data = (GameData *)(ptr->data);
	return (float)(data->gravity);
}

void SceneGameData_physics_gravity_set(PointerRNA *ptr, float value)
{
	GameData *data = (GameData *)(ptr->data);
	data->gravity = CLAMPIS(value, 0.0f, 10000.0f);
}

int SceneGameData_occlusion_culling_resolution_get(PointerRNA *ptr)
{
	GameData *data = (GameData *)(ptr->data);
	return (int)(data->occlusionRes);
}

void SceneGameData_occlusion_culling_resolution_set(PointerRNA *ptr, int value)
{
	GameData *data = (GameData *)(ptr->data);
	data->occlusionRes = CLAMPIS(value, 128, 1024);
}

int SceneGameData_fps_get(PointerRNA *ptr)
{
	GameData *data = (GameData *)(ptr->data);
	return (int)(data->ticrate);
}

void SceneGameData_fps_set(PointerRNA *ptr, int value)
{
	GameData *data = (GameData *)(ptr->data);
	data->ticrate = CLAMPIS(value, 1, 10000);
}

int SceneGameData_logic_step_max_get(PointerRNA *ptr)
{
	GameData *data = (GameData *)(ptr->data);
	return (int)(data->maxlogicstep);
}

void SceneGameData_logic_step_max_set(PointerRNA *ptr, int value)
{
	GameData *data = (GameData *)(ptr->data);
	data->maxlogicstep = CLAMPIS(value, 1, 5);
}

int SceneGameData_physics_step_max_get(PointerRNA *ptr)
{
	GameData *data = (GameData *)(ptr->data);
	return (int)(data->maxphystep);
}

void SceneGameData_physics_step_max_set(PointerRNA *ptr, int value)
{
	GameData *data = (GameData *)(ptr->data);
	data->maxphystep = CLAMPIS(value, 1, 5);
}

int SceneGameData_physics_step_sub_get(PointerRNA *ptr)
{
	GameData *data = (GameData *)(ptr->data);
	return (int)(data->physubstep);
}

void SceneGameData_physics_step_sub_set(PointerRNA *ptr, int value)
{
	GameData *data = (GameData *)(ptr->data);
	data->physubstep = CLAMPIS(value, 1, 50);
}

float SceneGameData_deactivation_linear_threshold_get(PointerRNA *ptr)
{
	GameData *data = (GameData *)(ptr->data);
	return (float)(data->lineardeactthreshold);
}

void SceneGameData_deactivation_linear_threshold_set(PointerRNA *ptr, float value)
{
	GameData *data = (GameData *)(ptr->data);
	data->lineardeactthreshold = CLAMPIS(value, 0.0010000000f, 10000.0f);
}

float SceneGameData_deactivation_angular_threshold_get(PointerRNA *ptr)
{
	GameData *data = (GameData *)(ptr->data);
	return (float)(data->angulardeactthreshold);
}

void SceneGameData_deactivation_angular_threshold_set(PointerRNA *ptr, float value)
{
	GameData *data = (GameData *)(ptr->data);
	data->angulardeactthreshold = CLAMPIS(value, 0.0010000000f, 10000.0f);
}

float SceneGameData_deactivation_time_get(PointerRNA *ptr)
{
	GameData *data = (GameData *)(ptr->data);
	return (float)(data->deactivationtime);
}

void SceneGameData_deactivation_time_set(PointerRNA *ptr, float value)
{
	GameData *data = (GameData *)(ptr->data);
	data->deactivationtime = CLAMPIS(value, 0.0f, 60.0f);
}

int SceneGameData_use_occlusion_culling_get(PointerRNA *ptr)
{
	GameData *data = (GameData *)(ptr->data);
	return (((data->mode) & 32) != 0);
}

void SceneGameData_use_occlusion_culling_set(PointerRNA *ptr, int value)
{
	GameData *data = (GameData *)(ptr->data);
	if (value) data->mode |= 32;
	else data->mode &= ~32;
}

int SceneGameData_use_activity_culling_get(PointerRNA *ptr)
{
	GameData *data = (GameData *)(ptr->data);
	return (((data->mode) & 8) != 0);
}

void SceneGameData_use_activity_culling_set(PointerRNA *ptr, int value)
{
	GameData *data = (GameData *)(ptr->data);
	if (value) data->mode |= 8;
	else data->mode &= ~8;
}

float SceneGameData_activity_culling_box_radius_get(PointerRNA *ptr)
{
	GameData *data = (GameData *)(ptr->data);
	return (float)(data->activityBoxRadius);
}

void SceneGameData_activity_culling_box_radius_set(PointerRNA *ptr, float value)
{
	GameData *data = (GameData *)(ptr->data);
	data->activityBoxRadius = CLAMPIS(value, 0.0f, 1000.0f);
}

int SceneGameData_show_debug_properties_get(PointerRNA *ptr)
{
	GameData *data = (GameData *)(ptr->data);
	return (((data->flag) & 4) != 0);
}

void SceneGameData_show_debug_properties_set(PointerRNA *ptr, int value)
{
	GameData *data = (GameData *)(ptr->data);
	if (value) data->flag |= 4;
	else data->flag &= ~4;
}

int SceneGameData_show_framerate_profile_get(PointerRNA *ptr)
{
	GameData *data = (GameData *)(ptr->data);
	return (((data->flag) & 8) != 0);
}

void SceneGameData_show_framerate_profile_set(PointerRNA *ptr, int value)
{
	GameData *data = (GameData *)(ptr->data);
	if (value) data->flag |= 8;
	else data->flag &= ~8;
}

int SceneGameData_show_physics_visualization_get(PointerRNA *ptr)
{
	GameData *data = (GameData *)(ptr->data);
	return (((data->flag) & 16) != 0);
}

void SceneGameData_show_physics_visualization_set(PointerRNA *ptr, int value)
{
	GameData *data = (GameData *)(ptr->data);
	if (value) data->flag |= 16;
	else data->flag &= ~16;
}

int SceneGameData_show_mouse_get(PointerRNA *ptr)
{
	GameData *data = (GameData *)(ptr->data);
	return (((data->flag) & 16384) != 0);
}

void SceneGameData_show_mouse_set(PointerRNA *ptr, int value)
{
	GameData *data = (GameData *)(ptr->data);
	if (value) data->flag |= 16384;
	else data->flag &= ~16384;
}

int SceneGameData_use_frame_rate_get(PointerRNA *ptr)
{
	GameData *data = (GameData *)(ptr->data);
	return !(((data->flag) & 2) != 0);
}

void SceneGameData_use_frame_rate_set(PointerRNA *ptr, int value)
{
	GameData *data = (GameData *)(ptr->data);
	if (!value) data->flag |= 2;
	else data->flag &= ~2;
}

int SceneGameData_use_display_lists_get(PointerRNA *ptr)
{
	GameData *data = (GameData *)(ptr->data);
	return (((data->flag) & 32) != 0);
}

void SceneGameData_use_display_lists_set(PointerRNA *ptr, int value)
{
	GameData *data = (GameData *)(ptr->data);
	if (value) data->flag |= 32;
	else data->flag &= ~32;
}

int SceneGameData_use_deprecation_warnings_get(PointerRNA *ptr)
{
	GameData *data = (GameData *)(ptr->data);
	return !(((data->flag) & 4096) != 0);
}

void SceneGameData_use_deprecation_warnings_set(PointerRNA *ptr, int value)
{
	GameData *data = (GameData *)(ptr->data);
	if (!value) data->flag |= 4096;
	else data->flag &= ~4096;
}

int SceneGameData_use_animation_record_get(PointerRNA *ptr)
{
	GameData *data = (GameData *)(ptr->data);
	return (((data->flag) & 8192) != 0);
}

void SceneGameData_use_animation_record_set(PointerRNA *ptr, int value)
{
	GameData *data = (GameData *)(ptr->data);
	if (value) data->flag |= 8192;
	else data->flag &= ~8192;
}

int SceneGameData_use_auto_start_get(PointerRNA *ptr)
{
	return rna_GameSettings_auto_start_get(ptr);
}

void SceneGameData_use_auto_start_set(PointerRNA *ptr, int value)
{
	rna_GameSettings_auto_start_set(ptr, value);
}

int SceneGameData_use_restrict_animation_updates_get(PointerRNA *ptr)
{
	GameData *data = (GameData *)(ptr->data);
	return (((data->flag) & 1) != 0);
}

void SceneGameData_use_restrict_animation_updates_set(PointerRNA *ptr, int value)
{
	GameData *data = (GameData *)(ptr->data);
	if (value) data->flag |= 1;
	else data->flag &= ~1;
}

int SceneGameData_material_mode_get(PointerRNA *ptr)
{
	GameData *data = (GameData *)(ptr->data);
	return (int)(data->matmode);
}

void SceneGameData_material_mode_set(PointerRNA *ptr, int value)
{
	GameData *data = (GameData *)(ptr->data);
	data->matmode = value;
}

int SceneGameData_use_glsl_lights_get(PointerRNA *ptr)
{
	GameData *data = (GameData *)(ptr->data);
	return !(((data->flag) & 64) != 0);
}

void SceneGameData_use_glsl_lights_set(PointerRNA *ptr, int value)
{
	GameData *data = (GameData *)(ptr->data);
	if (!value) data->flag |= 64;
	else data->flag &= ~64;
}

int SceneGameData_use_glsl_shaders_get(PointerRNA *ptr)
{
	GameData *data = (GameData *)(ptr->data);
	return !(((data->flag) & 128) != 0);
}

void SceneGameData_use_glsl_shaders_set(PointerRNA *ptr, int value)
{
	GameData *data = (GameData *)(ptr->data);
	if (!value) data->flag |= 128;
	else data->flag &= ~128;
}

int SceneGameData_use_glsl_shadows_get(PointerRNA *ptr)
{
	GameData *data = (GameData *)(ptr->data);
	return !(((data->flag) & 256) != 0);
}

void SceneGameData_use_glsl_shadows_set(PointerRNA *ptr, int value)
{
	GameData *data = (GameData *)(ptr->data);
	if (!value) data->flag |= 256;
	else data->flag &= ~256;
}

int SceneGameData_use_glsl_ramps_get(PointerRNA *ptr)
{
	GameData *data = (GameData *)(ptr->data);
	return !(((data->flag) & 512) != 0);
}

void SceneGameData_use_glsl_ramps_set(PointerRNA *ptr, int value)
{
	GameData *data = (GameData *)(ptr->data);
	if (!value) data->flag |= 512;
	else data->flag &= ~512;
}

int SceneGameData_use_glsl_nodes_get(PointerRNA *ptr)
{
	GameData *data = (GameData *)(ptr->data);
	return !(((data->flag) & 1024) != 0);
}

void SceneGameData_use_glsl_nodes_set(PointerRNA *ptr, int value)
{
	GameData *data = (GameData *)(ptr->data);
	if (!value) data->flag |= 1024;
	else data->flag &= ~1024;
}

int SceneGameData_use_glsl_color_management_get(PointerRNA *ptr)
{
	GameData *data = (GameData *)(ptr->data);
	return !(((data->flag) & 32768) != 0);
}

void SceneGameData_use_glsl_color_management_set(PointerRNA *ptr, int value)
{
	GameData *data = (GameData *)(ptr->data);
	if (!value) data->flag |= 32768;
	else data->flag &= ~32768;
}

int SceneGameData_use_glsl_extra_textures_get(PointerRNA *ptr)
{
	GameData *data = (GameData *)(ptr->data);
	return !(((data->flag) & 2048) != 0);
}

void SceneGameData_use_glsl_extra_textures_set(PointerRNA *ptr, int value)
{
	GameData *data = (GameData *)(ptr->data);
	if (!value) data->flag |= 2048;
	else data->flag &= ~2048;
}

int SceneGameData_use_material_caching_get(PointerRNA *ptr)
{
	GameData *data = (GameData *)(ptr->data);
	return !(((data->flag) & 131072) != 0);
}

void SceneGameData_use_material_caching_set(PointerRNA *ptr, int value)
{
	GameData *data = (GameData *)(ptr->data);
	if (!value) data->flag |= 131072;
	else data->flag &= ~131072;
}

int SceneGameData_obstacle_simulation_get(PointerRNA *ptr)
{
	GameData *data = (GameData *)(ptr->data);
	return (int)(data->obstacleSimulation);
}

void SceneGameData_obstacle_simulation_set(PointerRNA *ptr, int value)
{
	GameData *data = (GameData *)(ptr->data);
	data->obstacleSimulation = value;
}

float SceneGameData_level_height_get(PointerRNA *ptr)
{
	GameData *data = (GameData *)(ptr->data);
	return (float)(data->levelHeight);
}

void SceneGameData_level_height_set(PointerRNA *ptr, float value)
{
	GameData *data = (GameData *)(ptr->data);
	data->levelHeight = CLAMPIS(value, 0.0f, 200.0f);
}

int SceneGameData_show_obstacle_simulation_get(PointerRNA *ptr)
{
	GameData *data = (GameData *)(ptr->data);
	return (((data->flag) & 65536) != 0);
}

void SceneGameData_show_obstacle_simulation_set(PointerRNA *ptr, int value)
{
	GameData *data = (GameData *)(ptr->data);
	if (value) data->flag |= 65536;
	else data->flag &= ~65536;
}

PointerRNA SceneGameData_recast_data_get(PointerRNA *ptr)
{
	GameData *data = (GameData *)(ptr->data);
	return rna_pointer_inherit_refine(ptr, &RNA_SceneGameRecastData, &data->recastData);
}

static PointerRNA SceneGameRecastData_rna_properties_get(CollectionPropertyIterator *iter)
{
	return rna_builtin_properties_get(iter);
}

void SceneGameRecastData_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

	memset(iter, 0, sizeof(*iter));
	iter->parent = *ptr;
	iter->prop = (PropertyRNA *)&rna_SceneGameRecastData_rna_properties;

	rna_builtin_properties_begin(iter, ptr);

	if (iter->valid)
		iter->ptr = SceneGameRecastData_rna_properties_get(iter);
}

void SceneGameRecastData_rna_properties_next(CollectionPropertyIterator *iter)
{
	rna_builtin_properties_next(iter);

	if (iter->valid)
		iter->ptr = SceneGameRecastData_rna_properties_get(iter);
}

void SceneGameRecastData_rna_properties_end(CollectionPropertyIterator *iter)
{
	rna_iterator_listbase_end(iter);
}

int SceneGameRecastData_rna_properties_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
	return rna_builtin_properties_lookup_string(ptr, key, r_ptr);
}

PointerRNA SceneGameRecastData_rna_type_get(PointerRNA *ptr)
{
	return rna_builtin_type_get(ptr);
}

float SceneGameRecastData_cell_size_get(PointerRNA *ptr)
{
	RecastData *data = (RecastData *)(ptr->data);
	return (float)(data->cellsize);
}

void SceneGameRecastData_cell_size_set(PointerRNA *ptr, float value)
{
	RecastData *data = (RecastData *)(ptr->data);
	data->cellsize = value;
}

float SceneGameRecastData_cell_height_get(PointerRNA *ptr)
{
	RecastData *data = (RecastData *)(ptr->data);
	return (float)(data->cellheight);
}

void SceneGameRecastData_cell_height_set(PointerRNA *ptr, float value)
{
	RecastData *data = (RecastData *)(ptr->data);
	data->cellheight = value;
}

float SceneGameRecastData_agent_height_get(PointerRNA *ptr)
{
	RecastData *data = (RecastData *)(ptr->data);
	return (float)(data->agentheight);
}

void SceneGameRecastData_agent_height_set(PointerRNA *ptr, float value)
{
	RecastData *data = (RecastData *)(ptr->data);
	data->agentheight = value;
}

float SceneGameRecastData_agent_radius_get(PointerRNA *ptr)
{
	RecastData *data = (RecastData *)(ptr->data);
	return (float)(data->agentradius);
}

void SceneGameRecastData_agent_radius_set(PointerRNA *ptr, float value)
{
	RecastData *data = (RecastData *)(ptr->data);
	data->agentradius = value;
}

float SceneGameRecastData_climb_max_get(PointerRNA *ptr)
{
	RecastData *data = (RecastData *)(ptr->data);
	return (float)(data->agentmaxclimb);
}

void SceneGameRecastData_climb_max_set(PointerRNA *ptr, float value)
{
	RecastData *data = (RecastData *)(ptr->data);
	data->agentmaxclimb = value;
}

float SceneGameRecastData_slope_max_get(PointerRNA *ptr)
{
	RecastData *data = (RecastData *)(ptr->data);
	return (float)(data->agentmaxslope);
}

void SceneGameRecastData_slope_max_set(PointerRNA *ptr, float value)
{
	RecastData *data = (RecastData *)(ptr->data);
	data->agentmaxslope = CLAMPIS(value, 0.0f, 1.5707963705f);
}

float SceneGameRecastData_region_min_size_get(PointerRNA *ptr)
{
	RecastData *data = (RecastData *)(ptr->data);
	return (float)(data->regionminsize);
}

void SceneGameRecastData_region_min_size_set(PointerRNA *ptr, float value)
{
	RecastData *data = (RecastData *)(ptr->data);
	data->regionminsize = value;
}

float SceneGameRecastData_region_merge_size_get(PointerRNA *ptr)
{
	RecastData *data = (RecastData *)(ptr->data);
	return (float)(data->regionmergesize);
}

void SceneGameRecastData_region_merge_size_set(PointerRNA *ptr, float value)
{
	RecastData *data = (RecastData *)(ptr->data);
	data->regionmergesize = value;
}

float SceneGameRecastData_edge_max_len_get(PointerRNA *ptr)
{
	RecastData *data = (RecastData *)(ptr->data);
	return (float)(data->edgemaxlen);
}

void SceneGameRecastData_edge_max_len_set(PointerRNA *ptr, float value)
{
	RecastData *data = (RecastData *)(ptr->data);
	data->edgemaxlen = value;
}

float SceneGameRecastData_edge_max_error_get(PointerRNA *ptr)
{
	RecastData *data = (RecastData *)(ptr->data);
	return (float)(data->edgemaxerror);
}

void SceneGameRecastData_edge_max_error_set(PointerRNA *ptr, float value)
{
	RecastData *data = (RecastData *)(ptr->data);
	data->edgemaxerror = value;
}

int SceneGameRecastData_verts_per_poly_get(PointerRNA *ptr)
{
	RecastData *data = (RecastData *)(ptr->data);
	return (int)(data->vertsperpoly);
}

void SceneGameRecastData_verts_per_poly_set(PointerRNA *ptr, int value)
{
	RecastData *data = (RecastData *)(ptr->data);
	data->vertsperpoly = value;
}

float SceneGameRecastData_sample_dist_get(PointerRNA *ptr)
{
	RecastData *data = (RecastData *)(ptr->data);
	return (float)(data->detailsampledist);
}

void SceneGameRecastData_sample_dist_set(PointerRNA *ptr, float value)
{
	RecastData *data = (RecastData *)(ptr->data);
	data->detailsampledist = value;
}

float SceneGameRecastData_sample_max_error_get(PointerRNA *ptr)
{
	RecastData *data = (RecastData *)(ptr->data);
	return (float)(data->detailsamplemaxerror);
}

void SceneGameRecastData_sample_max_error_set(PointerRNA *ptr, float value)
{
	RecastData *data = (RecastData *)(ptr->data);
	data->detailsamplemaxerror = value;
}

static PointerRNA TransformOrientation_rna_properties_get(CollectionPropertyIterator *iter)
{
	return rna_builtin_properties_get(iter);
}

void TransformOrientation_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

	memset(iter, 0, sizeof(*iter));
	iter->parent = *ptr;
	iter->prop = (PropertyRNA *)&rna_TransformOrientation_rna_properties;

	rna_builtin_properties_begin(iter, ptr);

	if (iter->valid)
		iter->ptr = TransformOrientation_rna_properties_get(iter);
}

void TransformOrientation_rna_properties_next(CollectionPropertyIterator *iter)
{
	rna_builtin_properties_next(iter);

	if (iter->valid)
		iter->ptr = TransformOrientation_rna_properties_get(iter);
}

void TransformOrientation_rna_properties_end(CollectionPropertyIterator *iter)
{
	rna_iterator_listbase_end(iter);
}

int TransformOrientation_rna_properties_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
	return rna_builtin_properties_lookup_string(ptr, key, r_ptr);
}

PointerRNA TransformOrientation_rna_type_get(PointerRNA *ptr)
{
	return rna_builtin_type_get(ptr);
}

void TransformOrientation_matrix_get(PointerRNA *ptr, float values[9])
{
	TransformOrientation *data = (TransformOrientation *)(ptr->data);
	unsigned int i;

	for (i = 0; i < 9; i++) {
		values[i] = (float)(((float *)data->mat)[i]);
	}
}

void TransformOrientation_matrix_set(PointerRNA *ptr, const float values[9])
{
	TransformOrientation *data = (TransformOrientation *)(ptr->data);
	unsigned int i;

	for (i = 0; i < 9; i++) {
		((float *)data->mat)[i] = values[i];
	}
}

void TransformOrientation_name_get(PointerRNA *ptr, char *value)
{
	TransformOrientation *data = (TransformOrientation *)(ptr->data);
	BLI_strncpy_utf8(value, data->name, 64);
}

int TransformOrientation_name_length(PointerRNA *ptr)
{
	TransformOrientation *data = (TransformOrientation *)(ptr->data);
	return strlen(data->name);
}

void TransformOrientation_name_set(PointerRNA *ptr, const char *value)
{
	TransformOrientation *data = (TransformOrientation *)(ptr->data);
	BLI_strncpy_utf8(data->name, value, 64);
}

static PointerRNA FFmpegSettings_rna_properties_get(CollectionPropertyIterator *iter)
{
	return rna_builtin_properties_get(iter);
}

void FFmpegSettings_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

	memset(iter, 0, sizeof(*iter));
	iter->parent = *ptr;
	iter->prop = (PropertyRNA *)&rna_FFmpegSettings_rna_properties;

	rna_builtin_properties_begin(iter, ptr);

	if (iter->valid)
		iter->ptr = FFmpegSettings_rna_properties_get(iter);
}

void FFmpegSettings_rna_properties_next(CollectionPropertyIterator *iter)
{
	rna_builtin_properties_next(iter);

	if (iter->valid)
		iter->ptr = FFmpegSettings_rna_properties_get(iter);
}

void FFmpegSettings_rna_properties_end(CollectionPropertyIterator *iter)
{
	rna_iterator_listbase_end(iter);
}

int FFmpegSettings_rna_properties_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
	return rna_builtin_properties_lookup_string(ptr, key, r_ptr);
}

PointerRNA FFmpegSettings_rna_type_get(PointerRNA *ptr)
{
	return rna_builtin_type_get(ptr);
}

int FFmpegSettings_audio_mixrate_get(PointerRNA *ptr)
{
	FFMpegCodecData *data = (FFMpegCodecData *)(ptr->data);
	return (int)(data->audio_mixrate);
}

void FFmpegSettings_audio_mixrate_set(PointerRNA *ptr, int value)
{
	FFMpegCodecData *data = (FFMpegCodecData *)(ptr->data);
	data->audio_mixrate = CLAMPIS(value, 8000, 192000);
}

int FFmpegSettings_audio_channels_get(PointerRNA *ptr)
{
	FFMpegCodecData *data = (FFMpegCodecData *)(ptr->data);
	return (int)(data->audio_channels);
}

void FFmpegSettings_audio_channels_set(PointerRNA *ptr, int value)
{
	FFMpegCodecData *data = (FFMpegCodecData *)(ptr->data);
	data->audio_channels = value;
}

static PointerRNA RenderSettings_rna_properties_get(CollectionPropertyIterator *iter)
{
	return rna_builtin_properties_get(iter);
}

void RenderSettings_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

	memset(iter, 0, sizeof(*iter));
	iter->parent = *ptr;
	iter->prop = (PropertyRNA *)&rna_RenderSettings_rna_properties;

	rna_builtin_properties_begin(iter, ptr);

	if (iter->valid)
		iter->ptr = RenderSettings_rna_properties_get(iter);
}

void RenderSettings_rna_properties_next(CollectionPropertyIterator *iter)
{
	rna_builtin_properties_next(iter);

	if (iter->valid)
		iter->ptr = RenderSettings_rna_properties_get(iter);
}

void RenderSettings_rna_properties_end(CollectionPropertyIterator *iter)
{
	rna_iterator_listbase_end(iter);
}

int RenderSettings_rna_properties_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
	return rna_builtin_properties_lookup_string(ptr, key, r_ptr);
}

PointerRNA RenderSettings_rna_type_get(PointerRNA *ptr)
{
	return rna_builtin_type_get(ptr);
}

PointerRNA RenderSettings_image_settings_get(PointerRNA *ptr)
{
	RenderData *data = (RenderData *)(ptr->data);
	return rna_pointer_inherit_refine(ptr, &RNA_ImageFormatSettings, &data->im_format);
}

int RenderSettings_resolution_x_get(PointerRNA *ptr)
{
	RenderData *data = (RenderData *)(ptr->data);
	return (int)(data->xsch);
}

void RenderSettings_resolution_x_set(PointerRNA *ptr, int value)
{
	RenderData *data = (RenderData *)(ptr->data);
	data->xsch = CLAMPIS(value, 4, 65536);
}

int RenderSettings_resolution_y_get(PointerRNA *ptr)
{
	RenderData *data = (RenderData *)(ptr->data);
	return (int)(data->ysch);
}

void RenderSettings_resolution_y_set(PointerRNA *ptr, int value)
{
	RenderData *data = (RenderData *)(ptr->data);
	data->ysch = CLAMPIS(value, 4, 65536);
}

int RenderSettings_resolution_percentage_get(PointerRNA *ptr)
{
	RenderData *data = (RenderData *)(ptr->data);
	return (int)(data->size);
}

void RenderSettings_resolution_percentage_set(PointerRNA *ptr, int value)
{
	RenderData *data = (RenderData *)(ptr->data);
	data->size = CLAMPIS(value, 1, 32767);
}

int RenderSettings_tile_x_get(PointerRNA *ptr)
{
	RenderData *data = (RenderData *)(ptr->data);
	return (int)(data->tilex);
}

void RenderSettings_tile_x_set(PointerRNA *ptr, int value)
{
	RenderData *data = (RenderData *)(ptr->data);
	data->tilex = CLAMPIS(value, 8, 65536);
}

int RenderSettings_tile_y_get(PointerRNA *ptr)
{
	RenderData *data = (RenderData *)(ptr->data);
	return (int)(data->tiley);
}

void RenderSettings_tile_y_set(PointerRNA *ptr, int value)
{
	RenderData *data = (RenderData *)(ptr->data);
	data->tiley = CLAMPIS(value, 8, 65536);
}

int RenderSettings_preview_start_resolution_get(PointerRNA *ptr)
{
	RenderData *data = (RenderData *)(ptr->data);
	return (int)(data->preview_start_resolution);
}

void RenderSettings_preview_start_resolution_set(PointerRNA *ptr, int value)
{
	RenderData *data = (RenderData *)(ptr->data);
	data->preview_start_resolution = CLAMPIS(value, 8, 16384);
}

float RenderSettings_pixel_aspect_x_get(PointerRNA *ptr)
{
	RenderData *data = (RenderData *)(ptr->data);
	return (float)(data->xasp);
}

void RenderSettings_pixel_aspect_x_set(PointerRNA *ptr, float value)
{
	RenderData *data = (RenderData *)(ptr->data);
	data->xasp = CLAMPIS(value, 1.0f, 200.0f);
}

float RenderSettings_pixel_aspect_y_get(PointerRNA *ptr)
{
	RenderData *data = (RenderData *)(ptr->data);
	return (float)(data->yasp);
}

void RenderSettings_pixel_aspect_y_set(PointerRNA *ptr, float value)
{
	RenderData *data = (RenderData *)(ptr->data);
	data->yasp = CLAMPIS(value, 1.0f, 200.0f);
}

PointerRNA RenderSettings_ffmpeg_get(PointerRNA *ptr)
{
	RenderData *data = (RenderData *)(ptr->data);
	return rna_pointer_inherit_refine(ptr, &RNA_FFmpegSettings, &data->ffcodecdata);
}

int RenderSettings_fps_get(PointerRNA *ptr)
{
	RenderData *data = (RenderData *)(ptr->data);
	return (int)(data->frs_sec);
}

void RenderSettings_fps_set(PointerRNA *ptr, int value)
{
	RenderData *data = (RenderData *)(ptr->data);
	data->frs_sec = CLAMPIS(value, 1, 120);
}

float RenderSettings_fps_base_get(PointerRNA *ptr)
{
	RenderData *data = (RenderData *)(ptr->data);
	return (float)(data->frs_sec_base);
}

void RenderSettings_fps_base_set(PointerRNA *ptr, float value)
{
	RenderData *data = (RenderData *)(ptr->data);
	data->frs_sec_base = CLAMPIS(value, 0.1000000015f, 120.0f);
}

int RenderSettings_frame_map_old_get(PointerRNA *ptr)
{
	RenderData *data = (RenderData *)(ptr->data);
	return (int)(data->framapto);
}

void RenderSettings_frame_map_old_set(PointerRNA *ptr, int value)
{
	RenderData *data = (RenderData *)(ptr->data);
	data->framapto = CLAMPIS(value, 1, 900);
}

int RenderSettings_frame_map_new_get(PointerRNA *ptr)
{
	RenderData *data = (RenderData *)(ptr->data);
	return (int)(data->images);
}

void RenderSettings_frame_map_new_set(PointerRNA *ptr, int value)
{
	RenderData *data = (RenderData *)(ptr->data);
	data->images = CLAMPIS(value, 1, 900);
}

float RenderSettings_dither_intensity_get(PointerRNA *ptr)
{
	RenderData *data = (RenderData *)(ptr->data);
	return (float)(data->dither_intensity);
}

void RenderSettings_dither_intensity_set(PointerRNA *ptr, float value)
{
	RenderData *data = (RenderData *)(ptr->data);
	data->dither_intensity = CLAMPIS(value, 0.0f, 2.0f);
}

int RenderSettings_pixel_filter_type_get(PointerRNA *ptr)
{
	RenderData *data = (RenderData *)(ptr->data);
	return (int)(data->filtertype);
}

void RenderSettings_pixel_filter_type_set(PointerRNA *ptr, int value)
{
	RenderData *data = (RenderData *)(ptr->data);
	data->filtertype = value;
}

float RenderSettings_filter_size_get(PointerRNA *ptr)
{
	RenderData *data = (RenderData *)(ptr->data);
	return (float)(data->gauss);
}

void RenderSettings_filter_size_set(PointerRNA *ptr, float value)
{
	RenderData *data = (RenderData *)(ptr->data);
	data->gauss = CLAMPIS(value, 0.5000000000f, 1.5000000000f);
}

int RenderSettings_alpha_mode_get(PointerRNA *ptr)
{
	RenderData *data = (RenderData *)(ptr->data);
	return (int)(data->alphamode);
}

void RenderSettings_alpha_mode_set(PointerRNA *ptr, int value)
{
	RenderData *data = (RenderData *)(ptr->data);
	data->alphamode = value;
}

int RenderSettings_octree_resolution_get(PointerRNA *ptr)
{
	RenderData *data = (RenderData *)(ptr->data);
	return (int)(data->ocres);
}

void RenderSettings_octree_resolution_set(PointerRNA *ptr, int value)
{
	RenderData *data = (RenderData *)(ptr->data);
	data->ocres = value;
}

int RenderSettings_raytrace_method_get(PointerRNA *ptr)
{
	RenderData *data = (RenderData *)(ptr->data);
	return (int)(data->raytrace_structure);
}

void RenderSettings_raytrace_method_set(PointerRNA *ptr, int value)
{
	RenderData *data = (RenderData *)(ptr->data);
	data->raytrace_structure = value;
}

int RenderSettings_use_instances_get(PointerRNA *ptr)
{
	RenderData *data = (RenderData *)(ptr->data);
	return (((data->raytrace_options) & 2) != 0);
}

void RenderSettings_use_instances_set(PointerRNA *ptr, int value)
{
	RenderData *data = (RenderData *)(ptr->data);
	if (value) data->raytrace_options |= 2;
	else data->raytrace_options &= ~2;
}

int RenderSettings_use_local_coords_get(PointerRNA *ptr)
{
	RenderData *data = (RenderData *)(ptr->data);
	return (((data->raytrace_options) & 1) != 0);
}

void RenderSettings_use_local_coords_set(PointerRNA *ptr, int value)
{
	RenderData *data = (RenderData *)(ptr->data);
	if (value) data->raytrace_options |= 1;
	else data->raytrace_options &= ~1;
}

int RenderSettings_use_antialiasing_get(PointerRNA *ptr)
{
	RenderData *data = (RenderData *)(ptr->data);
	return (((data->mode) & 1) != 0);
}

void RenderSettings_use_antialiasing_set(PointerRNA *ptr, int value)
{
	RenderData *data = (RenderData *)(ptr->data);
	if (value) data->mode |= 1;
	else data->mode &= ~1;
}

int RenderSettings_antialiasing_samples_get(PointerRNA *ptr)
{
	RenderData *data = (RenderData *)(ptr->data);
	return (int)(data->osa);
}

void RenderSettings_antialiasing_samples_set(PointerRNA *ptr, int value)
{
	RenderData *data = (RenderData *)(ptr->data);
	data->osa = value;
}

int RenderSettings_use_fields_get(PointerRNA *ptr)
{
	RenderData *data = (RenderData *)(ptr->data);
	return (((data->mode) & 64) != 0);
}

void RenderSettings_use_fields_set(PointerRNA *ptr, int value)
{
	RenderData *data = (RenderData *)(ptr->data);
	if (value) data->mode |= 64;
	else data->mode &= ~64;
}

int RenderSettings_field_order_get(PointerRNA *ptr)
{
	RenderData *data = (RenderData *)(ptr->data);
	return ((data->mode) & 8192);
}

void RenderSettings_field_order_set(PointerRNA *ptr, int value)
{
	RenderData *data = (RenderData *)(ptr->data);
	data->mode &= ~8192;
	data->mode |= value;
}

int RenderSettings_use_fields_still_get(PointerRNA *ptr)
{
	RenderData *data = (RenderData *)(ptr->data);
	return (((data->mode) & 128) != 0);
}

void RenderSettings_use_fields_still_set(PointerRNA *ptr, int value)
{
	RenderData *data = (RenderData *)(ptr->data);
	if (value) data->mode |= 128;
	else data->mode &= ~128;
}

int RenderSettings_use_shadows_get(PointerRNA *ptr)
{
	RenderData *data = (RenderData *)(ptr->data);
	return (((data->mode) & 2) != 0);
}

void RenderSettings_use_shadows_set(PointerRNA *ptr, int value)
{
	RenderData *data = (RenderData *)(ptr->data);
	if (value) data->mode |= 2;
	else data->mode &= ~2;
}

int RenderSettings_use_envmaps_get(PointerRNA *ptr)
{
	RenderData *data = (RenderData *)(ptr->data);
	return (((data->mode) & 16) != 0);
}

void RenderSettings_use_envmaps_set(PointerRNA *ptr, int value)
{
	RenderData *data = (RenderData *)(ptr->data);
	if (value) data->mode |= 16;
	else data->mode &= ~16;
}

int RenderSettings_use_sss_get(PointerRNA *ptr)
{
	RenderData *data = (RenderData *)(ptr->data);
	return (((data->mode) & 2097152) != 0);
}

void RenderSettings_use_sss_set(PointerRNA *ptr, int value)
{
	RenderData *data = (RenderData *)(ptr->data);
	if (value) data->mode |= 2097152;
	else data->mode &= ~2097152;
}

int RenderSettings_use_raytrace_get(PointerRNA *ptr)
{
	RenderData *data = (RenderData *)(ptr->data);
	return (((data->mode) & 65536) != 0);
}

void RenderSettings_use_raytrace_set(PointerRNA *ptr, int value)
{
	RenderData *data = (RenderData *)(ptr->data);
	if (value) data->mode |= 65536;
	else data->mode &= ~65536;
}

int RenderSettings_use_textures_get(PointerRNA *ptr)
{
	RenderData *data = (RenderData *)(ptr->data);
	return !(((data->scemode) & 8192) != 0);
}

void RenderSettings_use_textures_set(PointerRNA *ptr, int value)
{
	RenderData *data = (RenderData *)(ptr->data);
	if (!value) data->scemode |= 8192;
	else data->scemode &= ~8192;
}

int RenderSettings_use_edge_enhance_get(PointerRNA *ptr)
{
	RenderData *data = (RenderData *)(ptr->data);
	return (((data->mode) & 32) != 0);
}

void RenderSettings_use_edge_enhance_set(PointerRNA *ptr, int value)
{
	RenderData *data = (RenderData *)(ptr->data);
	if (value) data->mode |= 32;
	else data->mode &= ~32;
}

int RenderSettings_edge_threshold_get(PointerRNA *ptr)
{
	RenderData *data = (RenderData *)(ptr->data);
	return (int)(data->edgeint);
}

void RenderSettings_edge_threshold_set(PointerRNA *ptr, int value)
{
	RenderData *data = (RenderData *)(ptr->data);
	data->edgeint = CLAMPIS(value, 0, 255);
}

void RenderSettings_edge_color_get(PointerRNA *ptr, float values[3])
{
	RenderData *data = (RenderData *)(ptr->data);
	unsigned int i;

	for (i = 0; i < 3; i++) {
		values[i] = (float)((&data->edgeR)[i]);
	}
}

void RenderSettings_edge_color_set(PointerRNA *ptr, const float values[3])
{
	RenderData *data = (RenderData *)(ptr->data);
	unsigned int i;

	for (i = 0; i < 3; i++) {
		(&data->edgeR)[i] = CLAMPIS(values[i], 0.0f, FLT_MAX);
	}
}

int RenderSettings_use_freestyle_get(PointerRNA *ptr)
{
	RenderData *data = (RenderData *)(ptr->data);
	return (((data->mode) & 33554432) != 0);
}

void RenderSettings_use_freestyle_set(PointerRNA *ptr, int value)
{
	RenderData *data = (RenderData *)(ptr->data);
	if (value) data->mode |= 33554432;
	else data->mode &= ~33554432;
}

int RenderSettings_threads_get(PointerRNA *ptr)
{
	return rna_RenderSettings_threads_get(ptr);
}

void RenderSettings_threads_set(PointerRNA *ptr, int value)
{
	RenderData *data = (RenderData *)(ptr->data);
	data->threads = CLAMPIS(value, 1, 64);
}

int RenderSettings_threads_mode_get(PointerRNA *ptr)
{
	return rna_RenderSettings_threads_mode_get(ptr);
}

void RenderSettings_threads_mode_set(PointerRNA *ptr, int value)
{
	RenderData *data = (RenderData *)(ptr->data);
	data->mode &= ~524288;
	data->mode |= value;
}

int RenderSettings_use_motion_blur_get(PointerRNA *ptr)
{
	RenderData *data = (RenderData *)(ptr->data);
	return (((data->mode) & 16384) != 0);
}

void RenderSettings_use_motion_blur_set(PointerRNA *ptr, int value)
{
	RenderData *data = (RenderData *)(ptr->data);
	if (value) data->mode |= 16384;
	else data->mode &= ~16384;
}

int RenderSettings_motion_blur_samples_get(PointerRNA *ptr)
{
	RenderData *data = (RenderData *)(ptr->data);
	return (int)(data->mblur_samples);
}

void RenderSettings_motion_blur_samples_set(PointerRNA *ptr, int value)
{
	RenderData *data = (RenderData *)(ptr->data);
	data->mblur_samples = CLAMPIS(value, 1, 32);
}

float RenderSettings_motion_blur_shutter_get(PointerRNA *ptr)
{
	RenderData *data = (RenderData *)(ptr->data);
	return (float)(data->blurfac);
}

void RenderSettings_motion_blur_shutter_set(PointerRNA *ptr, float value)
{
	RenderData *data = (RenderData *)(ptr->data);
	data->blurfac = CLAMPIS(value, 0.0f, FLT_MAX);
}

int RenderSettings_use_border_get(PointerRNA *ptr)
{
	RenderData *data = (RenderData *)(ptr->data);
	return (((data->mode) & 512) != 0);
}

void RenderSettings_use_border_set(PointerRNA *ptr, int value)
{
	RenderData *data = (RenderData *)(ptr->data);
	if (value) data->mode |= 512;
	else data->mode &= ~512;
}

float RenderSettings_border_min_x_get(PointerRNA *ptr)
{
	RenderData *data = (RenderData *)(ptr->data);
	return (float)(data->border.xmin);
}

void RenderSettings_border_min_x_set(PointerRNA *ptr, float value)
{
	RenderData *data = (RenderData *)(ptr->data);
	data->border.xmin = CLAMPIS(value, 0.0f, 1.0f);
}

float RenderSettings_border_min_y_get(PointerRNA *ptr)
{
	RenderData *data = (RenderData *)(ptr->data);
	return (float)(data->border.ymin);
}

void RenderSettings_border_min_y_set(PointerRNA *ptr, float value)
{
	RenderData *data = (RenderData *)(ptr->data);
	data->border.ymin = CLAMPIS(value, 0.0f, 1.0f);
}

float RenderSettings_border_max_x_get(PointerRNA *ptr)
{
	RenderData *data = (RenderData *)(ptr->data);
	return (float)(data->border.xmax);
}

void RenderSettings_border_max_x_set(PointerRNA *ptr, float value)
{
	RenderData *data = (RenderData *)(ptr->data);
	data->border.xmax = CLAMPIS(value, 0.0f, 1.0f);
}

float RenderSettings_border_max_y_get(PointerRNA *ptr)
{
	RenderData *data = (RenderData *)(ptr->data);
	return (float)(data->border.ymax);
}

void RenderSettings_border_max_y_set(PointerRNA *ptr, float value)
{
	RenderData *data = (RenderData *)(ptr->data);
	data->border.ymax = CLAMPIS(value, 0.0f, 1.0f);
}

int RenderSettings_use_crop_to_border_get(PointerRNA *ptr)
{
	RenderData *data = (RenderData *)(ptr->data);
	return (((data->mode) & 2048) != 0);
}

void RenderSettings_use_crop_to_border_set(PointerRNA *ptr, int value)
{
	RenderData *data = (RenderData *)(ptr->data);
	if (value) data->mode |= 2048;
	else data->mode &= ~2048;
}

int RenderSettings_use_placeholder_get(PointerRNA *ptr)
{
	RenderData *data = (RenderData *)(ptr->data);
	return (((data->mode) & 8388608) != 0);
}

void RenderSettings_use_placeholder_set(PointerRNA *ptr, int value)
{
	RenderData *data = (RenderData *)(ptr->data);
	if (value) data->mode |= 8388608;
	else data->mode &= ~8388608;
}

int RenderSettings_use_overwrite_get(PointerRNA *ptr)
{
	RenderData *data = (RenderData *)(ptr->data);
	return !(((data->mode) & 4194304) != 0);
}

void RenderSettings_use_overwrite_set(PointerRNA *ptr, int value)
{
	RenderData *data = (RenderData *)(ptr->data);
	if (!value) data->mode |= 4194304;
	else data->mode &= ~4194304;
}

int RenderSettings_use_compositing_get(PointerRNA *ptr)
{
	RenderData *data = (RenderData *)(ptr->data);
	return (((data->scemode) & 64) != 0);
}

void RenderSettings_use_compositing_set(PointerRNA *ptr, int value)
{
	RenderData *data = (RenderData *)(ptr->data);
	if (value) data->scemode |= 64;
	else data->scemode &= ~64;
}

int RenderSettings_use_sequencer_get(PointerRNA *ptr)
{
	RenderData *data = (RenderData *)(ptr->data);
	return (((data->scemode) & 1) != 0);
}

void RenderSettings_use_sequencer_set(PointerRNA *ptr, int value)
{
	RenderData *data = (RenderData *)(ptr->data);
	if (value) data->scemode |= 1;
	else data->scemode &= ~1;
}

int RenderSettings_use_file_extension_get(PointerRNA *ptr)
{
	RenderData *data = (RenderData *)(ptr->data);
	return (((data->scemode) & 16) != 0);
}

void RenderSettings_use_file_extension_set(PointerRNA *ptr, int value)
{
	RenderData *data = (RenderData *)(ptr->data);
	if (value) data->scemode |= 16;
	else data->scemode &= ~16;
}

void RenderSettings_file_extension_get(PointerRNA *ptr, char *value)
{
	rna_SceneRender_file_ext_get(ptr, value);
}

int RenderSettings_file_extension_length(PointerRNA *ptr)
{
	return rna_SceneRender_file_ext_length(ptr);
}

int RenderSettings_is_movie_format_get(PointerRNA *ptr)
{
	return rna_RenderSettings_is_movie_fomat_get(ptr);
}

int RenderSettings_use_free_image_textures_get(PointerRNA *ptr)
{
	RenderData *data = (RenderData *)(ptr->data);
	return (((data->scemode) & 256) != 0);
}

void RenderSettings_use_free_image_textures_set(PointerRNA *ptr, int value)
{
	RenderData *data = (RenderData *)(ptr->data);
	if (value) data->scemode |= 256;
	else data->scemode &= ~256;
}

int RenderSettings_use_free_unused_nodes_get(PointerRNA *ptr)
{
	RenderData *data = (RenderData *)(ptr->data);
	return (((data->scemode) & 2048) != 0);
}

void RenderSettings_use_free_unused_nodes_set(PointerRNA *ptr, int value)
{
	RenderData *data = (RenderData *)(ptr->data);
	if (value) data->scemode |= 2048;
	else data->scemode &= ~2048;
}

int RenderSettings_use_save_buffers_get(PointerRNA *ptr)
{
	return rna_RenderSettings_save_buffers_get(ptr);
}

void RenderSettings_use_save_buffers_set(PointerRNA *ptr, int value)
{
	RenderData *data = (RenderData *)(ptr->data);
	if (value) data->scemode |= 1024;
	else data->scemode &= ~1024;
}

int RenderSettings_use_full_sample_get(PointerRNA *ptr)
{
	return rna_RenderSettings_full_sample_get(ptr);
}

void RenderSettings_use_full_sample_set(PointerRNA *ptr, int value)
{
	RenderData *data = (RenderData *)(ptr->data);
	if (value) data->scemode |= 32768;
	else data->scemode &= ~32768;
}

int RenderSettings_display_mode_get(PointerRNA *ptr)
{
	RenderData *data = (RenderData *)(ptr->data);
	return ((data->displaymode) & 3);
}

void RenderSettings_display_mode_set(PointerRNA *ptr, int value)
{
	RenderData *data = (RenderData *)(ptr->data);
	data->displaymode &= ~3;
	data->displaymode |= value;
}

int RenderSettings_use_lock_interface_get(PointerRNA *ptr)
{
	RenderData *data = (RenderData *)(ptr->data);
	return (((data->use_lock_interface) & 1) != 0);
}

void RenderSettings_use_lock_interface_set(PointerRNA *ptr, int value)
{
	RenderData *data = (RenderData *)(ptr->data);
	if (value) data->use_lock_interface |= 1;
	else data->use_lock_interface &= ~1;
}

void RenderSettings_filepath_get(PointerRNA *ptr, char *value)
{
	RenderData *data = (RenderData *)(ptr->data);
	BLI_strncpy(value, data->pic, 1024);
}

int RenderSettings_filepath_length(PointerRNA *ptr)
{
	RenderData *data = (RenderData *)(ptr->data);
	return strlen(data->pic);
}

void RenderSettings_filepath_set(PointerRNA *ptr, const char *value)
{
	RenderData *data = (RenderData *)(ptr->data);
	BLI_strncpy(data->pic, value, 1024);
}

int RenderSettings_use_render_cache_get(PointerRNA *ptr)
{
	RenderData *data = (RenderData *)(ptr->data);
	return (((data->scemode) & 1048576) != 0);
}

void RenderSettings_use_render_cache_set(PointerRNA *ptr, int value)
{
	RenderData *data = (RenderData *)(ptr->data);
	if (value) data->scemode |= 1048576;
	else data->scemode &= ~1048576;
}

int RenderSettings_bake_type_get(PointerRNA *ptr)
{
	RenderData *data = (RenderData *)(ptr->data);
	return ((data->bake_mode) & 15);
}

void RenderSettings_bake_type_set(PointerRNA *ptr, int value)
{
	RenderData *data = (RenderData *)(ptr->data);
	data->bake_mode &= ~15;
	data->bake_mode |= value;
}

int RenderSettings_bake_normal_space_get(PointerRNA *ptr)
{
	RenderData *data = (RenderData *)(ptr->data);
	return ((data->bake_normal_space) & 3);
}

void RenderSettings_bake_normal_space_set(PointerRNA *ptr, int value)
{
	RenderData *data = (RenderData *)(ptr->data);
	data->bake_normal_space &= ~3;
	data->bake_normal_space |= value;
}

int RenderSettings_bake_quad_split_get(PointerRNA *ptr)
{
	RenderData *data = (RenderData *)(ptr->data);
	return (int)(data->bake_quad_split);
}

void RenderSettings_bake_quad_split_set(PointerRNA *ptr, int value)
{
	RenderData *data = (RenderData *)(ptr->data);
	data->bake_quad_split = value;
}

int RenderSettings_bake_aa_mode_get(PointerRNA *ptr)
{
	RenderData *data = (RenderData *)(ptr->data);
	return ((data->bake_osa) & 31);
}

void RenderSettings_bake_aa_mode_set(PointerRNA *ptr, int value)
{
	RenderData *data = (RenderData *)(ptr->data);
	data->bake_osa &= ~31;
	data->bake_osa |= value;
}

int RenderSettings_use_bake_selected_to_active_get(PointerRNA *ptr)
{
	RenderData *data = (RenderData *)(ptr->data);
	return (((data->bake_flag) & 4) != 0);
}

void RenderSettings_use_bake_selected_to_active_set(PointerRNA *ptr, int value)
{
	RenderData *data = (RenderData *)(ptr->data);
	if (value) data->bake_flag |= 4;
	else data->bake_flag &= ~4;
}

int RenderSettings_use_bake_normalize_get(PointerRNA *ptr)
{
	RenderData *data = (RenderData *)(ptr->data);
	return (((data->bake_flag) & 8) != 0);
}

void RenderSettings_use_bake_normalize_set(PointerRNA *ptr, int value)
{
	RenderData *data = (RenderData *)(ptr->data);
	if (value) data->bake_flag |= 8;
	else data->bake_flag &= ~8;
}

int RenderSettings_use_bake_clear_get(PointerRNA *ptr)
{
	RenderData *data = (RenderData *)(ptr->data);
	return (((data->bake_flag) & 1) != 0);
}

void RenderSettings_use_bake_clear_set(PointerRNA *ptr, int value)
{
	RenderData *data = (RenderData *)(ptr->data);
	if (value) data->bake_flag |= 1;
	else data->bake_flag &= ~1;
}

int RenderSettings_use_bake_antialiasing_get(PointerRNA *ptr)
{
	RenderData *data = (RenderData *)(ptr->data);
	return (((data->bake_flag) & 2) != 0);
}

void RenderSettings_use_bake_antialiasing_set(PointerRNA *ptr, int value)
{
	RenderData *data = (RenderData *)(ptr->data);
	if (value) data->bake_flag |= 2;
	else data->bake_flag &= ~2;
}

int RenderSettings_bake_margin_get(PointerRNA *ptr)
{
	RenderData *data = (RenderData *)(ptr->data);
	return (int)(data->bake_filter);
}

void RenderSettings_bake_margin_set(PointerRNA *ptr, int value)
{
	RenderData *data = (RenderData *)(ptr->data);
	data->bake_filter = CLAMPIS(value, 0, 64);
}

float RenderSettings_bake_distance_get(PointerRNA *ptr)
{
	RenderData *data = (RenderData *)(ptr->data);
	return (float)(data->bake_maxdist);
}

void RenderSettings_bake_distance_set(PointerRNA *ptr, float value)
{
	RenderData *data = (RenderData *)(ptr->data);
	data->bake_maxdist = CLAMPIS(value, 0.0f, 1000.0f);
}

float RenderSettings_bake_bias_get(PointerRNA *ptr)
{
	RenderData *data = (RenderData *)(ptr->data);
	return (float)(data->bake_biasdist);
}

void RenderSettings_bake_bias_set(PointerRNA *ptr, float value)
{
	RenderData *data = (RenderData *)(ptr->data);
	data->bake_biasdist = CLAMPIS(value, 0.0f, 1000.0f);
}

int RenderSettings_use_bake_multires_get(PointerRNA *ptr)
{
	RenderData *data = (RenderData *)(ptr->data);
	return (((data->bake_flag) & 16) != 0);
}

void RenderSettings_use_bake_multires_set(PointerRNA *ptr, int value)
{
	RenderData *data = (RenderData *)(ptr->data);
	if (value) data->bake_flag |= 16;
	else data->bake_flag &= ~16;
}

int RenderSettings_use_bake_lores_mesh_get(PointerRNA *ptr)
{
	RenderData *data = (RenderData *)(ptr->data);
	return (((data->bake_flag) & 32) != 0);
}

void RenderSettings_use_bake_lores_mesh_set(PointerRNA *ptr, int value)
{
	RenderData *data = (RenderData *)(ptr->data);
	if (value) data->bake_flag |= 32;
	else data->bake_flag &= ~32;
}

int RenderSettings_bake_samples_get(PointerRNA *ptr)
{
	RenderData *data = (RenderData *)(ptr->data);
	return (int)(data->bake_samples);
}

void RenderSettings_bake_samples_set(PointerRNA *ptr, int value)
{
	RenderData *data = (RenderData *)(ptr->data);
	data->bake_samples = CLAMPIS(value, 64, 1024);
}

int RenderSettings_use_bake_to_vertex_color_get(PointerRNA *ptr)
{
	RenderData *data = (RenderData *)(ptr->data);
	return (((data->bake_flag) & 64) != 0);
}

void RenderSettings_use_bake_to_vertex_color_set(PointerRNA *ptr, int value)
{
	RenderData *data = (RenderData *)(ptr->data);
	if (value) data->bake_flag |= 64;
	else data->bake_flag &= ~64;
}

int RenderSettings_use_bake_user_scale_get(PointerRNA *ptr)
{
	RenderData *data = (RenderData *)(ptr->data);
	return (((data->bake_flag) & 128) != 0);
}

void RenderSettings_use_bake_user_scale_set(PointerRNA *ptr, int value)
{
	RenderData *data = (RenderData *)(ptr->data);
	if (value) data->bake_flag |= 128;
	else data->bake_flag &= ~128;
}

float RenderSettings_bake_user_scale_get(PointerRNA *ptr)
{
	RenderData *data = (RenderData *)(ptr->data);
	return (float)(data->bake_user_scale);
}

void RenderSettings_bake_user_scale_set(PointerRNA *ptr, float value)
{
	RenderData *data = (RenderData *)(ptr->data);
	data->bake_user_scale = CLAMPIS(value, 0.0f, 1000.0f);
}

int RenderSettings_use_stamp_time_get(PointerRNA *ptr)
{
	RenderData *data = (RenderData *)(ptr->data);
	return (((data->stamp) & 1) != 0);
}

void RenderSettings_use_stamp_time_set(PointerRNA *ptr, int value)
{
	RenderData *data = (RenderData *)(ptr->data);
	if (value) data->stamp |= 1;
	else data->stamp &= ~1;
}

int RenderSettings_use_stamp_date_get(PointerRNA *ptr)
{
	RenderData *data = (RenderData *)(ptr->data);
	return (((data->stamp) & 4) != 0);
}

void RenderSettings_use_stamp_date_set(PointerRNA *ptr, int value)
{
	RenderData *data = (RenderData *)(ptr->data);
	if (value) data->stamp |= 4;
	else data->stamp &= ~4;
}

int RenderSettings_use_stamp_frame_get(PointerRNA *ptr)
{
	RenderData *data = (RenderData *)(ptr->data);
	return (((data->stamp) & 2) != 0);
}

void RenderSettings_use_stamp_frame_set(PointerRNA *ptr, int value)
{
	RenderData *data = (RenderData *)(ptr->data);
	if (value) data->stamp |= 2;
	else data->stamp &= ~2;
}

int RenderSettings_use_stamp_camera_get(PointerRNA *ptr)
{
	RenderData *data = (RenderData *)(ptr->data);
	return (((data->stamp) & 8) != 0);
}

void RenderSettings_use_stamp_camera_set(PointerRNA *ptr, int value)
{
	RenderData *data = (RenderData *)(ptr->data);
	if (value) data->stamp |= 8;
	else data->stamp &= ~8;
}

int RenderSettings_use_stamp_lens_get(PointerRNA *ptr)
{
	RenderData *data = (RenderData *)(ptr->data);
	return (((data->stamp) & 2048) != 0);
}

void RenderSettings_use_stamp_lens_set(PointerRNA *ptr, int value)
{
	RenderData *data = (RenderData *)(ptr->data);
	if (value) data->stamp |= 2048;
	else data->stamp &= ~2048;
}

int RenderSettings_use_stamp_scene_get(PointerRNA *ptr)
{
	RenderData *data = (RenderData *)(ptr->data);
	return (((data->stamp) & 16) != 0);
}

void RenderSettings_use_stamp_scene_set(PointerRNA *ptr, int value)
{
	RenderData *data = (RenderData *)(ptr->data);
	if (value) data->stamp |= 16;
	else data->stamp &= ~16;
}

int RenderSettings_use_stamp_note_get(PointerRNA *ptr)
{
	RenderData *data = (RenderData *)(ptr->data);
	return (((data->stamp) & 32) != 0);
}

void RenderSettings_use_stamp_note_set(PointerRNA *ptr, int value)
{
	RenderData *data = (RenderData *)(ptr->data);
	if (value) data->stamp |= 32;
	else data->stamp &= ~32;
}

int RenderSettings_use_stamp_marker_get(PointerRNA *ptr)
{
	RenderData *data = (RenderData *)(ptr->data);
	return (((data->stamp) & 128) != 0);
}

void RenderSettings_use_stamp_marker_set(PointerRNA *ptr, int value)
{
	RenderData *data = (RenderData *)(ptr->data);
	if (value) data->stamp |= 128;
	else data->stamp &= ~128;
}

int RenderSettings_use_stamp_filename_get(PointerRNA *ptr)
{
	RenderData *data = (RenderData *)(ptr->data);
	return (((data->stamp) & 256) != 0);
}

void RenderSettings_use_stamp_filename_set(PointerRNA *ptr, int value)
{
	RenderData *data = (RenderData *)(ptr->data);
	if (value) data->stamp |= 256;
	else data->stamp &= ~256;
}

int RenderSettings_use_stamp_sequencer_strip_get(PointerRNA *ptr)
{
	RenderData *data = (RenderData *)(ptr->data);
	return (((data->stamp) & 512) != 0);
}

void RenderSettings_use_stamp_sequencer_strip_set(PointerRNA *ptr, int value)
{
	RenderData *data = (RenderData *)(ptr->data);
	if (value) data->stamp |= 512;
	else data->stamp &= ~512;
}

int RenderSettings_use_stamp_render_time_get(PointerRNA *ptr)
{
	RenderData *data = (RenderData *)(ptr->data);
	return (((data->stamp) & 1024) != 0);
}

void RenderSettings_use_stamp_render_time_set(PointerRNA *ptr, int value)
{
	RenderData *data = (RenderData *)(ptr->data);
	if (value) data->stamp |= 1024;
	else data->stamp &= ~1024;
}

void RenderSettings_stamp_note_text_get(PointerRNA *ptr, char *value)
{
	RenderData *data = (RenderData *)(ptr->data);
	BLI_strncpy_utf8(value, data->stamp_udata, 768);
}

int RenderSettings_stamp_note_text_length(PointerRNA *ptr)
{
	RenderData *data = (RenderData *)(ptr->data);
	return strlen(data->stamp_udata);
}

void RenderSettings_stamp_note_text_set(PointerRNA *ptr, const char *value)
{
	RenderData *data = (RenderData *)(ptr->data);
	BLI_strncpy_utf8(data->stamp_udata, value, 768);
}

int RenderSettings_use_stamp_get(PointerRNA *ptr)
{
	RenderData *data = (RenderData *)(ptr->data);
	return (((data->stamp) & 64) != 0);
}

void RenderSettings_use_stamp_set(PointerRNA *ptr, int value)
{
	RenderData *data = (RenderData *)(ptr->data);
	if (value) data->stamp |= 64;
	else data->stamp &= ~64;
}

int RenderSettings_stamp_font_size_get(PointerRNA *ptr)
{
	RenderData *data = (RenderData *)(ptr->data);
	return (int)(data->stamp_font_id);
}

void RenderSettings_stamp_font_size_set(PointerRNA *ptr, int value)
{
	RenderData *data = (RenderData *)(ptr->data);
	data->stamp_font_id = CLAMPIS(value, 8, 64);
}

void RenderSettings_stamp_foreground_get(PointerRNA *ptr, float values[4])
{
	RenderData *data = (RenderData *)(ptr->data);
	unsigned int i;

	for (i = 0; i < 4; i++) {
		values[i] = (float)(((float *)data->fg_stamp)[i]);
	}
}

void RenderSettings_stamp_foreground_set(PointerRNA *ptr, const float values[4])
{
	RenderData *data = (RenderData *)(ptr->data);
	unsigned int i;

	for (i = 0; i < 4; i++) {
		((float *)data->fg_stamp)[i] = CLAMPIS(values[i], 0.0f, 1.0f);
	}
}

void RenderSettings_stamp_background_get(PointerRNA *ptr, float values[4])
{
	RenderData *data = (RenderData *)(ptr->data);
	unsigned int i;

	for (i = 0; i < 4; i++) {
		values[i] = (float)(((float *)data->bg_stamp)[i]);
	}
}

void RenderSettings_stamp_background_set(PointerRNA *ptr, const float values[4])
{
	RenderData *data = (RenderData *)(ptr->data);
	unsigned int i;

	for (i = 0; i < 4; i++) {
		((float *)data->bg_stamp)[i] = CLAMPIS(values[i], 0.0f, 1.0f);
	}
}

int RenderSettings_use_sequencer_gl_preview_get(PointerRNA *ptr)
{
	RenderData *data = (RenderData *)(ptr->data);
	return (((data->seq_flag) & 1) != 0);
}

void RenderSettings_use_sequencer_gl_preview_set(PointerRNA *ptr, int value)
{
	RenderData *data = (RenderData *)(ptr->data);
	if (value) data->seq_flag |= 1;
	else data->seq_flag &= ~1;
}

int RenderSettings_sequencer_gl_preview_get(PointerRNA *ptr)
{
	RenderData *data = (RenderData *)(ptr->data);
	return (int)(data->seq_prev_type);
}

void RenderSettings_sequencer_gl_preview_set(PointerRNA *ptr, int value)
{
	RenderData *data = (RenderData *)(ptr->data);
	data->seq_prev_type = value;
}

int RenderSettings_sequencer_gl_render_get(PointerRNA *ptr)
{
	RenderData *data = (RenderData *)(ptr->data);
	return (int)(data->seq_rend_type);
}

void RenderSettings_sequencer_gl_render_set(PointerRNA *ptr, int value)
{
	RenderData *data = (RenderData *)(ptr->data);
	data->seq_rend_type = value;
}

int RenderSettings_use_sequencer_gl_textured_solid_get(PointerRNA *ptr)
{
	RenderData *data = (RenderData *)(ptr->data);
	return (((data->seq_flag) & 4) != 0);
}

void RenderSettings_use_sequencer_gl_textured_solid_set(PointerRNA *ptr, int value)
{
	RenderData *data = (RenderData *)(ptr->data);
	if (value) data->seq_flag |= 4;
	else data->seq_flag &= ~4;
}

static PointerRNA RenderSettings_layers_get(CollectionPropertyIterator *iter)
{
	return rna_pointer_inherit_refine(&iter->parent, &RNA_SceneRenderLayer, rna_iterator_listbase_get(iter));
}

void RenderSettings_layers_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{
	RenderData *data = (RenderData *)(ptr->data);

	memset(iter, 0, sizeof(*iter));
	iter->parent = *ptr;
	iter->prop = (PropertyRNA *)&rna_RenderSettings_layers;

	rna_iterator_listbase_begin(iter, &data->layers, NULL);

	if (iter->valid)
		iter->ptr = RenderSettings_layers_get(iter);
}

void RenderSettings_layers_next(CollectionPropertyIterator *iter)
{
	rna_iterator_listbase_next(iter);

	if (iter->valid)
		iter->ptr = RenderSettings_layers_get(iter);
}

void RenderSettings_layers_end(CollectionPropertyIterator *iter)
{
	rna_iterator_listbase_end(iter);
}

int RenderSettings_layers_lookup_int(PointerRNA *ptr, int index, PointerRNA *r_ptr)
{
	int found = 0;
	CollectionPropertyIterator iter;

	RenderSettings_layers_begin(&iter, ptr);

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
		if (found) *r_ptr = RenderSettings_layers_get(&iter);
	}

	RenderSettings_layers_end(&iter);

	return found;
}

int RenderSettings_layers_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
	extern int SceneRenderLayer_name_length(PointerRNA *);
	extern void SceneRenderLayer_name_get(PointerRNA *, char *);

	bool found = false;
	CollectionPropertyIterator iter;
	char namebuf[1024];
	char *name;

	RenderSettings_layers_begin(&iter, ptr);

	while (iter.valid) {
		if (iter.ptr.data) {
			int namelen = SceneRenderLayer_name_length(&iter.ptr);
			if (namelen < 1024) {
				SceneRenderLayer_name_get(&iter.ptr, namebuf);
				if (strcmp(namebuf, key) == 0) {
					found = true;
					*r_ptr = iter.ptr;
					break;
				}
			}
			else {
				name = MEM_mallocN(namelen+1, "name string");
				SceneRenderLayer_name_get(&iter.ptr, name);
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
		RenderSettings_layers_next(&iter);
	}
	RenderSettings_layers_end(&iter);

	return found;
}

int RenderSettings_use_single_layer_get(PointerRNA *ptr)
{
	RenderData *data = (RenderData *)(ptr->data);
	return (((data->scemode) & 512) != 0);
}

void RenderSettings_use_single_layer_set(PointerRNA *ptr, int value)
{
	RenderData *data = (RenderData *)(ptr->data);
	if (value) data->scemode |= 512;
	else data->scemode &= ~512;
}

int RenderSettings_engine_get(PointerRNA *ptr)
{
	return rna_RenderSettings_engine_get(ptr);
}

void RenderSettings_engine_set(PointerRNA *ptr, int value)
{
	rna_RenderSettings_engine_set(ptr, value);
}

int RenderSettings_has_multiple_engines_get(PointerRNA *ptr)
{
	return rna_RenderSettings_multiple_engines_get(ptr);
}

int RenderSettings_use_shading_nodes_get(PointerRNA *ptr)
{
	return rna_RenderSettings_use_shading_nodes_get(ptr);
}

int RenderSettings_use_game_engine_get(PointerRNA *ptr)
{
	return rna_RenderSettings_use_game_engine_get(ptr);
}

int RenderSettings_use_simplify_get(PointerRNA *ptr)
{
	RenderData *data = (RenderData *)(ptr->data);
	return (((data->mode) & 16777216) != 0);
}

void RenderSettings_use_simplify_set(PointerRNA *ptr, int value)
{
	RenderData *data = (RenderData *)(ptr->data);
	if (value) data->mode |= 16777216;
	else data->mode &= ~16777216;
}

int RenderSettings_simplify_subdivision_get(PointerRNA *ptr)
{
	RenderData *data = (RenderData *)(ptr->data);
	return (int)(data->simplify_subsurf);
}

void RenderSettings_simplify_subdivision_set(PointerRNA *ptr, int value)
{
	RenderData *data = (RenderData *)(ptr->data);
	data->simplify_subsurf = CLAMPIS(value, 0, 32767);
}

float RenderSettings_simplify_child_particles_get(PointerRNA *ptr)
{
	RenderData *data = (RenderData *)(ptr->data);
	return (float)(data->simplify_particles);
}

void RenderSettings_simplify_child_particles_set(PointerRNA *ptr, float value)
{
	RenderData *data = (RenderData *)(ptr->data);
	data->simplify_particles = CLAMPIS(value, 0.0f, 1.0f);
}

int RenderSettings_simplify_shadow_samples_get(PointerRNA *ptr)
{
	RenderData *data = (RenderData *)(ptr->data);
	return (int)(data->simplify_shadowsamples);
}

void RenderSettings_simplify_shadow_samples_set(PointerRNA *ptr, int value)
{
	RenderData *data = (RenderData *)(ptr->data);
	data->simplify_shadowsamples = CLAMPIS(value, 0, 32767);
}

float RenderSettings_simplify_ao_sss_get(PointerRNA *ptr)
{
	RenderData *data = (RenderData *)(ptr->data);
	return (float)(data->simplify_aosss);
}

void RenderSettings_simplify_ao_sss_set(PointerRNA *ptr, float value)
{
	RenderData *data = (RenderData *)(ptr->data);
	data->simplify_aosss = CLAMPIS(value, 0.0f, 1.0f);
}

int RenderSettings_use_simplify_triangulate_get(PointerRNA *ptr)
{
	RenderData *data = (RenderData *)(ptr->data);
	return (((data->simplify_flag) & 1) != 0);
}

void RenderSettings_use_simplify_triangulate_set(PointerRNA *ptr, int value)
{
	RenderData *data = (RenderData *)(ptr->data);
	if (value) data->simplify_flag |= 1;
	else data->simplify_flag &= ~1;
}

int RenderSettings_use_persistent_data_get(PointerRNA *ptr)
{
	RenderData *data = (RenderData *)(ptr->data);
	return (((data->mode) & 67108864) != 0);
}

void RenderSettings_use_persistent_data_set(PointerRNA *ptr, int value)
{
	RenderData *data = (RenderData *)(ptr->data);
	if (value) data->mode |= 67108864;
	else data->mode &= ~67108864;
}

int RenderSettings_line_thickness_mode_get(PointerRNA *ptr)
{
	RenderData *data = (RenderData *)(ptr->data);
	return (int)(data->line_thickness_mode);
}

void RenderSettings_line_thickness_mode_set(PointerRNA *ptr, int value)
{
	RenderData *data = (RenderData *)(ptr->data);
	data->line_thickness_mode = value;
}

float RenderSettings_line_thickness_get(PointerRNA *ptr)
{
	RenderData *data = (RenderData *)(ptr->data);
	return (float)(data->unit_line_thickness);
}

void RenderSettings_line_thickness_set(PointerRNA *ptr, float value)
{
	RenderData *data = (RenderData *)(ptr->data);
	data->unit_line_thickness = CLAMPIS(value, 0.0f, 10000.0f);
}

PointerRNA RenderSettings_bake_get(PointerRNA *ptr)
{
	RenderData *data = (RenderData *)(ptr->data);
	return rna_pointer_inherit_refine(ptr, &RNA_BakeSettings, &data->bake);
}

static PointerRNA RenderLayers_rna_properties_get(CollectionPropertyIterator *iter)
{
	return rna_builtin_properties_get(iter);
}

void RenderLayers_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

	memset(iter, 0, sizeof(*iter));
	iter->parent = *ptr;
	iter->prop = (PropertyRNA *)&rna_RenderLayers_rna_properties;

	rna_builtin_properties_begin(iter, ptr);

	if (iter->valid)
		iter->ptr = RenderLayers_rna_properties_get(iter);
}

void RenderLayers_rna_properties_next(CollectionPropertyIterator *iter)
{
	rna_builtin_properties_next(iter);

	if (iter->valid)
		iter->ptr = RenderLayers_rna_properties_get(iter);
}

void RenderLayers_rna_properties_end(CollectionPropertyIterator *iter)
{
	rna_iterator_listbase_end(iter);
}

int RenderLayers_rna_properties_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
	return rna_builtin_properties_lookup_string(ptr, key, r_ptr);
}

PointerRNA RenderLayers_rna_type_get(PointerRNA *ptr)
{
	return rna_builtin_type_get(ptr);
}

int RenderLayers_active_index_get(PointerRNA *ptr)
{
	return rna_RenderSettings_active_layer_index_get(ptr);
}

void RenderLayers_active_index_set(PointerRNA *ptr, int value)
{
	rna_RenderSettings_active_layer_index_set(ptr, value);
}

PointerRNA RenderLayers_active_get(PointerRNA *ptr)
{
	return rna_RenderSettings_active_layer_get(ptr);
}

void RenderLayers_active_set(PointerRNA *ptr, PointerRNA value)
{
	rna_RenderSettings_active_layer_set(ptr, value);
}

static PointerRNA BakeSettings_rna_properties_get(CollectionPropertyIterator *iter)
{
	return rna_builtin_properties_get(iter);
}

void BakeSettings_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

	memset(iter, 0, sizeof(*iter));
	iter->parent = *ptr;
	iter->prop = (PropertyRNA *)&rna_BakeSettings_rna_properties;

	rna_builtin_properties_begin(iter, ptr);

	if (iter->valid)
		iter->ptr = BakeSettings_rna_properties_get(iter);
}

void BakeSettings_rna_properties_next(CollectionPropertyIterator *iter)
{
	rna_builtin_properties_next(iter);

	if (iter->valid)
		iter->ptr = BakeSettings_rna_properties_get(iter);
}

void BakeSettings_rna_properties_end(CollectionPropertyIterator *iter)
{
	rna_iterator_listbase_end(iter);
}

int BakeSettings_rna_properties_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
	return rna_builtin_properties_lookup_string(ptr, key, r_ptr);
}

PointerRNA BakeSettings_rna_type_get(PointerRNA *ptr)
{
	return rna_builtin_type_get(ptr);
}

void BakeSettings_cage_object_get(PointerRNA *ptr, char *value)
{
	BakeData *data = (BakeData *)(ptr->data);
	BLI_strncpy_utf8(value, data->cage, 64);
}

int BakeSettings_cage_object_length(PointerRNA *ptr)
{
	BakeData *data = (BakeData *)(ptr->data);
	return strlen(data->cage);
}

void BakeSettings_cage_object_set(PointerRNA *ptr, const char *value)
{
	BakeData *data = (BakeData *)(ptr->data);
	BLI_strncpy_utf8(data->cage, value, 64);
}

void BakeSettings_filepath_get(PointerRNA *ptr, char *value)
{
	BakeData *data = (BakeData *)(ptr->data);
	BLI_strncpy(value, data->filepath, 1024);
}

int BakeSettings_filepath_length(PointerRNA *ptr)
{
	BakeData *data = (BakeData *)(ptr->data);
	return strlen(data->filepath);
}

void BakeSettings_filepath_set(PointerRNA *ptr, const char *value)
{
	BakeData *data = (BakeData *)(ptr->data);
	BLI_strncpy(data->filepath, value, 1024);
}

int BakeSettings_width_get(PointerRNA *ptr)
{
	BakeData *data = (BakeData *)(ptr->data);
	return (int)(data->width);
}

void BakeSettings_width_set(PointerRNA *ptr, int value)
{
	BakeData *data = (BakeData *)(ptr->data);
	data->width = CLAMPIS(value, 4, 10000);
}

int BakeSettings_height_get(PointerRNA *ptr)
{
	BakeData *data = (BakeData *)(ptr->data);
	return (int)(data->height);
}

void BakeSettings_height_set(PointerRNA *ptr, int value)
{
	BakeData *data = (BakeData *)(ptr->data);
	data->height = CLAMPIS(value, 4, 10000);
}

int BakeSettings_margin_get(PointerRNA *ptr)
{
	BakeData *data = (BakeData *)(ptr->data);
	return (int)(data->margin);
}

void BakeSettings_margin_set(PointerRNA *ptr, int value)
{
	BakeData *data = (BakeData *)(ptr->data);
	data->margin = CLAMPIS(value, 0, 32767);
}

float BakeSettings_cage_extrusion_get(PointerRNA *ptr)
{
	BakeData *data = (BakeData *)(ptr->data);
	return (float)(data->cage_extrusion);
}

void BakeSettings_cage_extrusion_set(PointerRNA *ptr, float value)
{
	BakeData *data = (BakeData *)(ptr->data);
	data->cage_extrusion = CLAMPIS(value, 0.0f, FLT_MAX);
}

int BakeSettings_normal_space_get(PointerRNA *ptr)
{
	BakeData *data = (BakeData *)(ptr->data);
	return ((data->normal_space) & 3);
}

void BakeSettings_normal_space_set(PointerRNA *ptr, int value)
{
	BakeData *data = (BakeData *)(ptr->data);
	data->normal_space &= ~3;
	data->normal_space |= value;
}

int BakeSettings_normal_r_get(PointerRNA *ptr)
{
	BakeData *data = (BakeData *)(ptr->data);
	return ((data->normal_swizzle[0]) & 7);
}

void BakeSettings_normal_r_set(PointerRNA *ptr, int value)
{
	BakeData *data = (BakeData *)(ptr->data);
	data->normal_swizzle[0] &= ~7;
	data->normal_swizzle[0] |= value;
}

int BakeSettings_normal_g_get(PointerRNA *ptr)
{
	BakeData *data = (BakeData *)(ptr->data);
	return ((data->normal_swizzle[1]) & 7);
}

void BakeSettings_normal_g_set(PointerRNA *ptr, int value)
{
	BakeData *data = (BakeData *)(ptr->data);
	data->normal_swizzle[1] &= ~7;
	data->normal_swizzle[1] |= value;
}

int BakeSettings_normal_b_get(PointerRNA *ptr)
{
	BakeData *data = (BakeData *)(ptr->data);
	return ((data->normal_swizzle[2]) & 7);
}

void BakeSettings_normal_b_set(PointerRNA *ptr, int value)
{
	BakeData *data = (BakeData *)(ptr->data);
	data->normal_swizzle[2] &= ~7;
	data->normal_swizzle[2] |= value;
}

PointerRNA BakeSettings_image_settings_get(PointerRNA *ptr)
{
	BakeData *data = (BakeData *)(ptr->data);
	return rna_pointer_inherit_refine(ptr, &RNA_ImageFormatSettings, &data->im_format);
}

int BakeSettings_save_mode_get(PointerRNA *ptr)
{
	BakeData *data = (BakeData *)(ptr->data);
	return ((data->save_mode) & 1);
}

void BakeSettings_save_mode_set(PointerRNA *ptr, int value)
{
	BakeData *data = (BakeData *)(ptr->data);
	data->save_mode &= ~1;
	data->save_mode |= value;
}

int BakeSettings_use_selected_to_active_get(PointerRNA *ptr)
{
	BakeData *data = (BakeData *)(ptr->data);
	return (((data->flag) & 4) != 0);
}

void BakeSettings_use_selected_to_active_set(PointerRNA *ptr, int value)
{
	BakeData *data = (BakeData *)(ptr->data);
	if (value) data->flag |= 4;
	else data->flag &= ~4;
}

int BakeSettings_use_clear_get(PointerRNA *ptr)
{
	BakeData *data = (BakeData *)(ptr->data);
	return (((data->flag) & 1) != 0);
}

void BakeSettings_use_clear_set(PointerRNA *ptr, int value)
{
	BakeData *data = (BakeData *)(ptr->data);
	if (value) data->flag |= 1;
	else data->flag &= ~1;
}

int BakeSettings_use_split_materials_get(PointerRNA *ptr)
{
	BakeData *data = (BakeData *)(ptr->data);
	return (((data->flag) & 512) != 0);
}

void BakeSettings_use_split_materials_set(PointerRNA *ptr, int value)
{
	BakeData *data = (BakeData *)(ptr->data);
	if (value) data->flag |= 512;
	else data->flag &= ~512;
}

int BakeSettings_use_automatic_name_get(PointerRNA *ptr)
{
	BakeData *data = (BakeData *)(ptr->data);
	return (((data->flag) & 1024) != 0);
}

void BakeSettings_use_automatic_name_set(PointerRNA *ptr, int value)
{
	BakeData *data = (BakeData *)(ptr->data);
	if (value) data->flag |= 1024;
	else data->flag &= ~1024;
}

int BakeSettings_use_cage_get(PointerRNA *ptr)
{
	BakeData *data = (BakeData *)(ptr->data);
	return (((data->flag) & 256) != 0);
}

void BakeSettings_use_cage_set(PointerRNA *ptr, int value)
{
	BakeData *data = (BakeData *)(ptr->data);
	if (value) data->flag |= 256;
	else data->flag &= ~256;
}

static PointerRNA SceneRenderLayer_rna_properties_get(CollectionPropertyIterator *iter)
{
	return rna_builtin_properties_get(iter);
}

void SceneRenderLayer_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

	memset(iter, 0, sizeof(*iter));
	iter->parent = *ptr;
	iter->prop = (PropertyRNA *)&rna_SceneRenderLayer_rna_properties;

	rna_builtin_properties_begin(iter, ptr);

	if (iter->valid)
		iter->ptr = SceneRenderLayer_rna_properties_get(iter);
}

void SceneRenderLayer_rna_properties_next(CollectionPropertyIterator *iter)
{
	rna_builtin_properties_next(iter);

	if (iter->valid)
		iter->ptr = SceneRenderLayer_rna_properties_get(iter);
}

void SceneRenderLayer_rna_properties_end(CollectionPropertyIterator *iter)
{
	rna_iterator_listbase_end(iter);
}

int SceneRenderLayer_rna_properties_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
	return rna_builtin_properties_lookup_string(ptr, key, r_ptr);
}

PointerRNA SceneRenderLayer_rna_type_get(PointerRNA *ptr)
{
	return rna_builtin_type_get(ptr);
}

void SceneRenderLayer_name_get(PointerRNA *ptr, char *value)
{
	SceneRenderLayer *data = (SceneRenderLayer *)(ptr->data);
	BLI_strncpy_utf8(value, data->name, 64);
}

int SceneRenderLayer_name_length(PointerRNA *ptr)
{
	SceneRenderLayer *data = (SceneRenderLayer *)(ptr->data);
	return strlen(data->name);
}

void SceneRenderLayer_name_set(PointerRNA *ptr, const char *value)
{
	rna_SceneRenderLayer_name_set(ptr, value);
}

PointerRNA SceneRenderLayer_material_override_get(PointerRNA *ptr)
{
	SceneRenderLayer *data = (SceneRenderLayer *)(ptr->data);
	return rna_pointer_inherit_refine(ptr, &RNA_Material, data->mat_override);
}

void SceneRenderLayer_material_override_set(PointerRNA *ptr, PointerRNA value)
{
	SceneRenderLayer *data = (SceneRenderLayer *)(ptr->data);

	if (data->mat_override)
		id_us_min((ID *)data->mat_override);
	if (value.data)
		id_us_plus((ID *)value.data);

	data->mat_override = value.data;
}

PointerRNA SceneRenderLayer_light_override_get(PointerRNA *ptr)
{
	SceneRenderLayer *data = (SceneRenderLayer *)(ptr->data);
	return rna_pointer_inherit_refine(ptr, &RNA_Group, data->light_override);
}

void SceneRenderLayer_light_override_set(PointerRNA *ptr, PointerRNA value)
{
	SceneRenderLayer *data = (SceneRenderLayer *)(ptr->data);
	if (value.data)
		id_lib_extern((ID *)value.data);

	data->light_override = value.data;
}

void SceneRenderLayer_layers_get(PointerRNA *ptr, int values[20])
{
	SceneRenderLayer *data = (SceneRenderLayer *)(ptr->data);
	unsigned int i;

	for (i = 0; i < 20; i++) {
		values[i] = ((data->lay & (1u << i)) != 0);
	}
}

void SceneRenderLayer_layers_set(PointerRNA *ptr, const int values[20])
{
	rna_SceneRenderLayer_layer_set(ptr, values);
}

void SceneRenderLayer_layers_zmask_get(PointerRNA *ptr, int values[20])
{
	SceneRenderLayer *data = (SceneRenderLayer *)(ptr->data);
	unsigned int i;

	for (i = 0; i < 20; i++) {
		values[i] = ((data->lay_zmask & (1u << i)) != 0);
	}
}

void SceneRenderLayer_layers_zmask_set(PointerRNA *ptr, const int values[20])
{
	SceneRenderLayer *data = (SceneRenderLayer *)(ptr->data);
	unsigned int i;

	for (i = 0; i < 20; i++) {
		if (values[i]) data->lay_zmask |= (1<<i);
		else data->lay_zmask &= ~(1u << i);
	}
}

void SceneRenderLayer_layers_exclude_get(PointerRNA *ptr, int values[20])
{
	SceneRenderLayer *data = (SceneRenderLayer *)(ptr->data);
	unsigned int i;

	for (i = 0; i < 20; i++) {
		values[i] = ((data->lay_exclude & (1u << i)) != 0);
	}
}

void SceneRenderLayer_layers_exclude_set(PointerRNA *ptr, const int values[20])
{
	SceneRenderLayer *data = (SceneRenderLayer *)(ptr->data);
	unsigned int i;

	for (i = 0; i < 20; i++) {
		if (values[i]) data->lay_exclude |= (1<<i);
		else data->lay_exclude &= ~(1u << i);
	}
}

int SceneRenderLayer_samples_get(PointerRNA *ptr)
{
	SceneRenderLayer *data = (SceneRenderLayer *)(ptr->data);
	return (int)(data->samples);
}

void SceneRenderLayer_samples_set(PointerRNA *ptr, int value)
{
	SceneRenderLayer *data = (SceneRenderLayer *)(ptr->data);
	data->samples = CLAMPIS(value, 0, INT_MAX);
}

float SceneRenderLayer_pass_alpha_threshold_get(PointerRNA *ptr)
{
	SceneRenderLayer *data = (SceneRenderLayer *)(ptr->data);
	return (float)(data->pass_alpha_threshold);
}

void SceneRenderLayer_pass_alpha_threshold_set(PointerRNA *ptr, float value)
{
	SceneRenderLayer *data = (SceneRenderLayer *)(ptr->data);
	data->pass_alpha_threshold = CLAMPIS(value, 0.0f, 1.0f);
}

int SceneRenderLayer_use_get(PointerRNA *ptr)
{
	SceneRenderLayer *data = (SceneRenderLayer *)(ptr->data);
	return !(((data->layflag) & 131072) != 0);
}

void SceneRenderLayer_use_set(PointerRNA *ptr, int value)
{
	SceneRenderLayer *data = (SceneRenderLayer *)(ptr->data);
	if (!value) data->layflag |= 131072;
	else data->layflag &= ~131072;
}

int SceneRenderLayer_use_zmask_get(PointerRNA *ptr)
{
	SceneRenderLayer *data = (SceneRenderLayer *)(ptr->data);
	return (((data->layflag) & 262144) != 0);
}

void SceneRenderLayer_use_zmask_set(PointerRNA *ptr, int value)
{
	SceneRenderLayer *data = (SceneRenderLayer *)(ptr->data);
	if (value) data->layflag |= 262144;
	else data->layflag &= ~262144;
}

int SceneRenderLayer_invert_zmask_get(PointerRNA *ptr)
{
	SceneRenderLayer *data = (SceneRenderLayer *)(ptr->data);
	return (((data->layflag) & 524288) != 0);
}

void SceneRenderLayer_invert_zmask_set(PointerRNA *ptr, int value)
{
	SceneRenderLayer *data = (SceneRenderLayer *)(ptr->data);
	if (value) data->layflag |= 524288;
	else data->layflag &= ~524288;
}

int SceneRenderLayer_use_all_z_get(PointerRNA *ptr)
{
	SceneRenderLayer *data = (SceneRenderLayer *)(ptr->data);
	return (((data->layflag) & 32768) != 0);
}

void SceneRenderLayer_use_all_z_set(PointerRNA *ptr, int value)
{
	SceneRenderLayer *data = (SceneRenderLayer *)(ptr->data);
	if (value) data->layflag |= 32768;
	else data->layflag &= ~32768;
}

int SceneRenderLayer_use_solid_get(PointerRNA *ptr)
{
	SceneRenderLayer *data = (SceneRenderLayer *)(ptr->data);
	return (((data->layflag) & 1) != 0);
}

void SceneRenderLayer_use_solid_set(PointerRNA *ptr, int value)
{
	SceneRenderLayer *data = (SceneRenderLayer *)(ptr->data);
	if (value) data->layflag |= 1;
	else data->layflag &= ~1;
}

int SceneRenderLayer_use_halo_get(PointerRNA *ptr)
{
	SceneRenderLayer *data = (SceneRenderLayer *)(ptr->data);
	return (((data->layflag) & 4) != 0);
}

void SceneRenderLayer_use_halo_set(PointerRNA *ptr, int value)
{
	SceneRenderLayer *data = (SceneRenderLayer *)(ptr->data);
	if (value) data->layflag |= 4;
	else data->layflag &= ~4;
}

int SceneRenderLayer_use_ztransp_get(PointerRNA *ptr)
{
	SceneRenderLayer *data = (SceneRenderLayer *)(ptr->data);
	return (((data->layflag) & 2) != 0);
}

void SceneRenderLayer_use_ztransp_set(PointerRNA *ptr, int value)
{
	SceneRenderLayer *data = (SceneRenderLayer *)(ptr->data);
	if (value) data->layflag |= 2;
	else data->layflag &= ~2;
}

int SceneRenderLayer_use_sky_get(PointerRNA *ptr)
{
	SceneRenderLayer *data = (SceneRenderLayer *)(ptr->data);
	return (((data->layflag) & 16) != 0);
}

void SceneRenderLayer_use_sky_set(PointerRNA *ptr, int value)
{
	SceneRenderLayer *data = (SceneRenderLayer *)(ptr->data);
	if (value) data->layflag |= 16;
	else data->layflag &= ~16;
}

int SceneRenderLayer_use_edge_enhance_get(PointerRNA *ptr)
{
	SceneRenderLayer *data = (SceneRenderLayer *)(ptr->data);
	return (((data->layflag) & 8) != 0);
}

void SceneRenderLayer_use_edge_enhance_set(PointerRNA *ptr, int value)
{
	SceneRenderLayer *data = (SceneRenderLayer *)(ptr->data);
	if (value) data->layflag |= 8;
	else data->layflag &= ~8;
}

int SceneRenderLayer_use_strand_get(PointerRNA *ptr)
{
	SceneRenderLayer *data = (SceneRenderLayer *)(ptr->data);
	return (((data->layflag) & 32) != 0);
}

void SceneRenderLayer_use_strand_set(PointerRNA *ptr, int value)
{
	SceneRenderLayer *data = (SceneRenderLayer *)(ptr->data);
	if (value) data->layflag |= 32;
	else data->layflag &= ~32;
}

int SceneRenderLayer_use_freestyle_get(PointerRNA *ptr)
{
	SceneRenderLayer *data = (SceneRenderLayer *)(ptr->data);
	return (((data->layflag) & 64) != 0);
}

void SceneRenderLayer_use_freestyle_set(PointerRNA *ptr, int value)
{
	SceneRenderLayer *data = (SceneRenderLayer *)(ptr->data);
	if (value) data->layflag |= 64;
	else data->layflag &= ~64;
}

int SceneRenderLayer_use_pass_combined_get(PointerRNA *ptr)
{
	SceneRenderLayer *data = (SceneRenderLayer *)(ptr->data);
	return (((data->passflag) & 1) != 0);
}

void SceneRenderLayer_use_pass_combined_set(PointerRNA *ptr, int value)
{
	SceneRenderLayer *data = (SceneRenderLayer *)(ptr->data);
	if (value) data->passflag |= 1;
	else data->passflag &= ~1;
}

int SceneRenderLayer_use_pass_z_get(PointerRNA *ptr)
{
	SceneRenderLayer *data = (SceneRenderLayer *)(ptr->data);
	return (((data->passflag) & 2) != 0);
}

void SceneRenderLayer_use_pass_z_set(PointerRNA *ptr, int value)
{
	SceneRenderLayer *data = (SceneRenderLayer *)(ptr->data);
	if (value) data->passflag |= 2;
	else data->passflag &= ~2;
}

int SceneRenderLayer_use_pass_vector_get(PointerRNA *ptr)
{
	SceneRenderLayer *data = (SceneRenderLayer *)(ptr->data);
	return (((data->passflag) & 512) != 0);
}

void SceneRenderLayer_use_pass_vector_set(PointerRNA *ptr, int value)
{
	SceneRenderLayer *data = (SceneRenderLayer *)(ptr->data);
	if (value) data->passflag |= 512;
	else data->passflag &= ~512;
}

int SceneRenderLayer_use_pass_normal_get(PointerRNA *ptr)
{
	SceneRenderLayer *data = (SceneRenderLayer *)(ptr->data);
	return (((data->passflag) & 256) != 0);
}

void SceneRenderLayer_use_pass_normal_set(PointerRNA *ptr, int value)
{
	SceneRenderLayer *data = (SceneRenderLayer *)(ptr->data);
	if (value) data->passflag |= 256;
	else data->passflag &= ~256;
}

int SceneRenderLayer_use_pass_uv_get(PointerRNA *ptr)
{
	SceneRenderLayer *data = (SceneRenderLayer *)(ptr->data);
	return (((data->passflag) & 4096) != 0);
}

void SceneRenderLayer_use_pass_uv_set(PointerRNA *ptr, int value)
{
	SceneRenderLayer *data = (SceneRenderLayer *)(ptr->data);
	if (value) data->passflag |= 4096;
	else data->passflag &= ~4096;
}

int SceneRenderLayer_use_pass_mist_get(PointerRNA *ptr)
{
	SceneRenderLayer *data = (SceneRenderLayer *)(ptr->data);
	return (((data->passflag) & 16384) != 0);
}

void SceneRenderLayer_use_pass_mist_set(PointerRNA *ptr, int value)
{
	SceneRenderLayer *data = (SceneRenderLayer *)(ptr->data);
	if (value) data->passflag |= 16384;
	else data->passflag &= ~16384;
}

int SceneRenderLayer_use_pass_object_index_get(PointerRNA *ptr)
{
	SceneRenderLayer *data = (SceneRenderLayer *)(ptr->data);
	return (((data->passflag) & 2048) != 0);
}

void SceneRenderLayer_use_pass_object_index_set(PointerRNA *ptr, int value)
{
	SceneRenderLayer *data = (SceneRenderLayer *)(ptr->data);
	if (value) data->passflag |= 2048;
	else data->passflag &= ~2048;
}

int SceneRenderLayer_use_pass_material_index_get(PointerRNA *ptr)
{
	SceneRenderLayer *data = (SceneRenderLayer *)(ptr->data);
	return (((data->passflag) & 262144) != 0);
}

void SceneRenderLayer_use_pass_material_index_set(PointerRNA *ptr, int value)
{
	SceneRenderLayer *data = (SceneRenderLayer *)(ptr->data);
	if (value) data->passflag |= 262144;
	else data->passflag &= ~262144;
}

int SceneRenderLayer_use_pass_color_get(PointerRNA *ptr)
{
	SceneRenderLayer *data = (SceneRenderLayer *)(ptr->data);
	return (((data->passflag) & 4) != 0);
}

void SceneRenderLayer_use_pass_color_set(PointerRNA *ptr, int value)
{
	SceneRenderLayer *data = (SceneRenderLayer *)(ptr->data);
	if (value) data->passflag |= 4;
	else data->passflag &= ~4;
}

int SceneRenderLayer_use_pass_diffuse_get(PointerRNA *ptr)
{
	SceneRenderLayer *data = (SceneRenderLayer *)(ptr->data);
	return (((data->passflag) & 8) != 0);
}

void SceneRenderLayer_use_pass_diffuse_set(PointerRNA *ptr, int value)
{
	SceneRenderLayer *data = (SceneRenderLayer *)(ptr->data);
	if (value) data->passflag |= 8;
	else data->passflag &= ~8;
}

int SceneRenderLayer_use_pass_specular_get(PointerRNA *ptr)
{
	SceneRenderLayer *data = (SceneRenderLayer *)(ptr->data);
	return (((data->passflag) & 16) != 0);
}

void SceneRenderLayer_use_pass_specular_set(PointerRNA *ptr, int value)
{
	SceneRenderLayer *data = (SceneRenderLayer *)(ptr->data);
	if (value) data->passflag |= 16;
	else data->passflag &= ~16;
}

int SceneRenderLayer_use_pass_shadow_get(PointerRNA *ptr)
{
	SceneRenderLayer *data = (SceneRenderLayer *)(ptr->data);
	return (((data->passflag) & 32) != 0);
}

void SceneRenderLayer_use_pass_shadow_set(PointerRNA *ptr, int value)
{
	SceneRenderLayer *data = (SceneRenderLayer *)(ptr->data);
	if (value) data->passflag |= 32;
	else data->passflag &= ~32;
}

int SceneRenderLayer_use_pass_ambient_occlusion_get(PointerRNA *ptr)
{
	SceneRenderLayer *data = (SceneRenderLayer *)(ptr->data);
	return (((data->passflag) & 64) != 0);
}

void SceneRenderLayer_use_pass_ambient_occlusion_set(PointerRNA *ptr, int value)
{
	SceneRenderLayer *data = (SceneRenderLayer *)(ptr->data);
	if (value) data->passflag |= 64;
	else data->passflag &= ~64;
}

int SceneRenderLayer_use_pass_reflection_get(PointerRNA *ptr)
{
	SceneRenderLayer *data = (SceneRenderLayer *)(ptr->data);
	return (((data->passflag) & 128) != 0);
}

void SceneRenderLayer_use_pass_reflection_set(PointerRNA *ptr, int value)
{
	SceneRenderLayer *data = (SceneRenderLayer *)(ptr->data);
	if (value) data->passflag |= 128;
	else data->passflag &= ~128;
}

int SceneRenderLayer_use_pass_refraction_get(PointerRNA *ptr)
{
	SceneRenderLayer *data = (SceneRenderLayer *)(ptr->data);
	return (((data->passflag) & 1024) != 0);
}

void SceneRenderLayer_use_pass_refraction_set(PointerRNA *ptr, int value)
{
	SceneRenderLayer *data = (SceneRenderLayer *)(ptr->data);
	if (value) data->passflag |= 1024;
	else data->passflag &= ~1024;
}

int SceneRenderLayer_use_pass_emit_get(PointerRNA *ptr)
{
	SceneRenderLayer *data = (SceneRenderLayer *)(ptr->data);
	return (((data->passflag) & 65536) != 0);
}

void SceneRenderLayer_use_pass_emit_set(PointerRNA *ptr, int value)
{
	SceneRenderLayer *data = (SceneRenderLayer *)(ptr->data);
	if (value) data->passflag |= 65536;
	else data->passflag &= ~65536;
}

int SceneRenderLayer_use_pass_environment_get(PointerRNA *ptr)
{
	SceneRenderLayer *data = (SceneRenderLayer *)(ptr->data);
	return (((data->passflag) & 131072) != 0);
}

void SceneRenderLayer_use_pass_environment_set(PointerRNA *ptr, int value)
{
	SceneRenderLayer *data = (SceneRenderLayer *)(ptr->data);
	if (value) data->passflag |= 131072;
	else data->passflag &= ~131072;
}

int SceneRenderLayer_use_pass_indirect_get(PointerRNA *ptr)
{
	SceneRenderLayer *data = (SceneRenderLayer *)(ptr->data);
	return (((data->passflag) & 8192) != 0);
}

void SceneRenderLayer_use_pass_indirect_set(PointerRNA *ptr, int value)
{
	SceneRenderLayer *data = (SceneRenderLayer *)(ptr->data);
	if (value) data->passflag |= 8192;
	else data->passflag &= ~8192;
}

int SceneRenderLayer_exclude_specular_get(PointerRNA *ptr)
{
	SceneRenderLayer *data = (SceneRenderLayer *)(ptr->data);
	return (((data->pass_xor) & 16) != 0);
}

void SceneRenderLayer_exclude_specular_set(PointerRNA *ptr, int value)
{
	SceneRenderLayer *data = (SceneRenderLayer *)(ptr->data);
	if (value) data->pass_xor |= 16;
	else data->pass_xor &= ~16;
}

int SceneRenderLayer_exclude_shadow_get(PointerRNA *ptr)
{
	SceneRenderLayer *data = (SceneRenderLayer *)(ptr->data);
	return (((data->pass_xor) & 32) != 0);
}

void SceneRenderLayer_exclude_shadow_set(PointerRNA *ptr, int value)
{
	SceneRenderLayer *data = (SceneRenderLayer *)(ptr->data);
	if (value) data->pass_xor |= 32;
	else data->pass_xor &= ~32;
}

int SceneRenderLayer_exclude_ambient_occlusion_get(PointerRNA *ptr)
{
	SceneRenderLayer *data = (SceneRenderLayer *)(ptr->data);
	return (((data->pass_xor) & 64) != 0);
}

void SceneRenderLayer_exclude_ambient_occlusion_set(PointerRNA *ptr, int value)
{
	SceneRenderLayer *data = (SceneRenderLayer *)(ptr->data);
	if (value) data->pass_xor |= 64;
	else data->pass_xor &= ~64;
}

int SceneRenderLayer_exclude_reflection_get(PointerRNA *ptr)
{
	SceneRenderLayer *data = (SceneRenderLayer *)(ptr->data);
	return (((data->pass_xor) & 128) != 0);
}

void SceneRenderLayer_exclude_reflection_set(PointerRNA *ptr, int value)
{
	SceneRenderLayer *data = (SceneRenderLayer *)(ptr->data);
	if (value) data->pass_xor |= 128;
	else data->pass_xor &= ~128;
}

int SceneRenderLayer_exclude_refraction_get(PointerRNA *ptr)
{
	SceneRenderLayer *data = (SceneRenderLayer *)(ptr->data);
	return (((data->pass_xor) & 1024) != 0);
}

void SceneRenderLayer_exclude_refraction_set(PointerRNA *ptr, int value)
{
	SceneRenderLayer *data = (SceneRenderLayer *)(ptr->data);
	if (value) data->pass_xor |= 1024;
	else data->pass_xor &= ~1024;
}

int SceneRenderLayer_exclude_emit_get(PointerRNA *ptr)
{
	SceneRenderLayer *data = (SceneRenderLayer *)(ptr->data);
	return (((data->pass_xor) & 65536) != 0);
}

void SceneRenderLayer_exclude_emit_set(PointerRNA *ptr, int value)
{
	SceneRenderLayer *data = (SceneRenderLayer *)(ptr->data);
	if (value) data->pass_xor |= 65536;
	else data->pass_xor &= ~65536;
}

int SceneRenderLayer_exclude_environment_get(PointerRNA *ptr)
{
	SceneRenderLayer *data = (SceneRenderLayer *)(ptr->data);
	return (((data->pass_xor) & 131072) != 0);
}

void SceneRenderLayer_exclude_environment_set(PointerRNA *ptr, int value)
{
	SceneRenderLayer *data = (SceneRenderLayer *)(ptr->data);
	if (value) data->pass_xor |= 131072;
	else data->pass_xor &= ~131072;
}

int SceneRenderLayer_exclude_indirect_get(PointerRNA *ptr)
{
	SceneRenderLayer *data = (SceneRenderLayer *)(ptr->data);
	return (((data->pass_xor) & 8192) != 0);
}

void SceneRenderLayer_exclude_indirect_set(PointerRNA *ptr, int value)
{
	SceneRenderLayer *data = (SceneRenderLayer *)(ptr->data);
	if (value) data->pass_xor |= 8192;
	else data->pass_xor &= ~8192;
}

int SceneRenderLayer_use_pass_diffuse_direct_get(PointerRNA *ptr)
{
	SceneRenderLayer *data = (SceneRenderLayer *)(ptr->data);
	return (((data->passflag) & 524288) != 0);
}

void SceneRenderLayer_use_pass_diffuse_direct_set(PointerRNA *ptr, int value)
{
	SceneRenderLayer *data = (SceneRenderLayer *)(ptr->data);
	if (value) data->passflag |= 524288;
	else data->passflag &= ~524288;
}

int SceneRenderLayer_use_pass_diffuse_indirect_get(PointerRNA *ptr)
{
	SceneRenderLayer *data = (SceneRenderLayer *)(ptr->data);
	return (((data->passflag) & 1048576) != 0);
}

void SceneRenderLayer_use_pass_diffuse_indirect_set(PointerRNA *ptr, int value)
{
	SceneRenderLayer *data = (SceneRenderLayer *)(ptr->data);
	if (value) data->passflag |= 1048576;
	else data->passflag &= ~1048576;
}

int SceneRenderLayer_use_pass_diffuse_color_get(PointerRNA *ptr)
{
	SceneRenderLayer *data = (SceneRenderLayer *)(ptr->data);
	return (((data->passflag) & 2097152) != 0);
}

void SceneRenderLayer_use_pass_diffuse_color_set(PointerRNA *ptr, int value)
{
	SceneRenderLayer *data = (SceneRenderLayer *)(ptr->data);
	if (value) data->passflag |= 2097152;
	else data->passflag &= ~2097152;
}

int SceneRenderLayer_use_pass_glossy_direct_get(PointerRNA *ptr)
{
	SceneRenderLayer *data = (SceneRenderLayer *)(ptr->data);
	return (((data->passflag) & 4194304) != 0);
}

void SceneRenderLayer_use_pass_glossy_direct_set(PointerRNA *ptr, int value)
{
	SceneRenderLayer *data = (SceneRenderLayer *)(ptr->data);
	if (value) data->passflag |= 4194304;
	else data->passflag &= ~4194304;
}

int SceneRenderLayer_use_pass_glossy_indirect_get(PointerRNA *ptr)
{
	SceneRenderLayer *data = (SceneRenderLayer *)(ptr->data);
	return (((data->passflag) & 8388608) != 0);
}

void SceneRenderLayer_use_pass_glossy_indirect_set(PointerRNA *ptr, int value)
{
	SceneRenderLayer *data = (SceneRenderLayer *)(ptr->data);
	if (value) data->passflag |= 8388608;
	else data->passflag &= ~8388608;
}

int SceneRenderLayer_use_pass_glossy_color_get(PointerRNA *ptr)
{
	SceneRenderLayer *data = (SceneRenderLayer *)(ptr->data);
	return (((data->passflag) & 16777216) != 0);
}

void SceneRenderLayer_use_pass_glossy_color_set(PointerRNA *ptr, int value)
{
	SceneRenderLayer *data = (SceneRenderLayer *)(ptr->data);
	if (value) data->passflag |= 16777216;
	else data->passflag &= ~16777216;
}

int SceneRenderLayer_use_pass_transmission_direct_get(PointerRNA *ptr)
{
	SceneRenderLayer *data = (SceneRenderLayer *)(ptr->data);
	return (((data->passflag) & 33554432) != 0);
}

void SceneRenderLayer_use_pass_transmission_direct_set(PointerRNA *ptr, int value)
{
	SceneRenderLayer *data = (SceneRenderLayer *)(ptr->data);
	if (value) data->passflag |= 33554432;
	else data->passflag &= ~33554432;
}

int SceneRenderLayer_use_pass_transmission_indirect_get(PointerRNA *ptr)
{
	SceneRenderLayer *data = (SceneRenderLayer *)(ptr->data);
	return (((data->passflag) & 67108864) != 0);
}

void SceneRenderLayer_use_pass_transmission_indirect_set(PointerRNA *ptr, int value)
{
	SceneRenderLayer *data = (SceneRenderLayer *)(ptr->data);
	if (value) data->passflag |= 67108864;
	else data->passflag &= ~67108864;
}

int SceneRenderLayer_use_pass_transmission_color_get(PointerRNA *ptr)
{
	SceneRenderLayer *data = (SceneRenderLayer *)(ptr->data);
	return (((data->passflag) & 134217728) != 0);
}

void SceneRenderLayer_use_pass_transmission_color_set(PointerRNA *ptr, int value)
{
	SceneRenderLayer *data = (SceneRenderLayer *)(ptr->data);
	if (value) data->passflag |= 134217728;
	else data->passflag &= ~134217728;
}

int SceneRenderLayer_use_pass_subsurface_direct_get(PointerRNA *ptr)
{
	SceneRenderLayer *data = (SceneRenderLayer *)(ptr->data);
	return (((data->passflag) & 268435456) != 0);
}

void SceneRenderLayer_use_pass_subsurface_direct_set(PointerRNA *ptr, int value)
{
	SceneRenderLayer *data = (SceneRenderLayer *)(ptr->data);
	if (value) data->passflag |= 268435456;
	else data->passflag &= ~268435456;
}

int SceneRenderLayer_use_pass_subsurface_indirect_get(PointerRNA *ptr)
{
	SceneRenderLayer *data = (SceneRenderLayer *)(ptr->data);
	return (((data->passflag) & 536870912) != 0);
}

void SceneRenderLayer_use_pass_subsurface_indirect_set(PointerRNA *ptr, int value)
{
	SceneRenderLayer *data = (SceneRenderLayer *)(ptr->data);
	if (value) data->passflag |= 536870912;
	else data->passflag &= ~536870912;
}

int SceneRenderLayer_use_pass_subsurface_color_get(PointerRNA *ptr)
{
	SceneRenderLayer *data = (SceneRenderLayer *)(ptr->data);
	return (((data->passflag) & 1073741824) != 0);
}

void SceneRenderLayer_use_pass_subsurface_color_set(PointerRNA *ptr, int value)
{
	SceneRenderLayer *data = (SceneRenderLayer *)(ptr->data);
	if (value) data->passflag |= 1073741824;
	else data->passflag &= ~1073741824;
}

PointerRNA SceneRenderLayer_freestyle_settings_get(PointerRNA *ptr)
{
	SceneRenderLayer *data = (SceneRenderLayer *)(ptr->data);
	return rna_pointer_inherit_refine(ptr, &RNA_FreestyleSettings, &data->freestyleConfig);
}

static PointerRNA FreestyleLineSet_rna_properties_get(CollectionPropertyIterator *iter)
{
	return rna_builtin_properties_get(iter);
}

void FreestyleLineSet_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

	memset(iter, 0, sizeof(*iter));
	iter->parent = *ptr;
	iter->prop = (PropertyRNA *)&rna_FreestyleLineSet_rna_properties;

	rna_builtin_properties_begin(iter, ptr);

	if (iter->valid)
		iter->ptr = FreestyleLineSet_rna_properties_get(iter);
}

void FreestyleLineSet_rna_properties_next(CollectionPropertyIterator *iter)
{
	rna_builtin_properties_next(iter);

	if (iter->valid)
		iter->ptr = FreestyleLineSet_rna_properties_get(iter);
}

void FreestyleLineSet_rna_properties_end(CollectionPropertyIterator *iter)
{
	rna_iterator_listbase_end(iter);
}

int FreestyleLineSet_rna_properties_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
	return rna_builtin_properties_lookup_string(ptr, key, r_ptr);
}

PointerRNA FreestyleLineSet_rna_type_get(PointerRNA *ptr)
{
	return rna_builtin_type_get(ptr);
}

PointerRNA FreestyleLineSet_linestyle_get(PointerRNA *ptr)
{
	return rna_FreestyleLineSet_linestyle_get(ptr);
}

void FreestyleLineSet_linestyle_set(PointerRNA *ptr, PointerRNA value)
{
	rna_FreestyleLineSet_linestyle_set(ptr, value);
}

void FreestyleLineSet_name_get(PointerRNA *ptr, char *value)
{
	FreestyleLineSet *data = (FreestyleLineSet *)(ptr->data);
	BLI_strncpy_utf8(value, data->name, 64);
}

int FreestyleLineSet_name_length(PointerRNA *ptr)
{
	FreestyleLineSet *data = (FreestyleLineSet *)(ptr->data);
	return strlen(data->name);
}

void FreestyleLineSet_name_set(PointerRNA *ptr, const char *value)
{
	FreestyleLineSet *data = (FreestyleLineSet *)(ptr->data);
	BLI_strncpy_utf8(data->name, value, 64);
}

int FreestyleLineSet_show_render_get(PointerRNA *ptr)
{
	FreestyleLineSet *data = (FreestyleLineSet *)(ptr->data);
	return (((data->flags) & 2) != 0);
}

void FreestyleLineSet_show_render_set(PointerRNA *ptr, int value)
{
	FreestyleLineSet *data = (FreestyleLineSet *)(ptr->data);
	if (value) data->flags |= 2;
	else data->flags &= ~2;
}

int FreestyleLineSet_select_by_visibility_get(PointerRNA *ptr)
{
	FreestyleLineSet *data = (FreestyleLineSet *)(ptr->data);
	return (((data->selection) & 1) != 0);
}

void FreestyleLineSet_select_by_visibility_set(PointerRNA *ptr, int value)
{
	FreestyleLineSet *data = (FreestyleLineSet *)(ptr->data);
	if (value) data->selection |= 1;
	else data->selection &= ~1;
}

int FreestyleLineSet_select_by_edge_types_get(PointerRNA *ptr)
{
	FreestyleLineSet *data = (FreestyleLineSet *)(ptr->data);
	return (((data->selection) & 2) != 0);
}

void FreestyleLineSet_select_by_edge_types_set(PointerRNA *ptr, int value)
{
	FreestyleLineSet *data = (FreestyleLineSet *)(ptr->data);
	if (value) data->selection |= 2;
	else data->selection &= ~2;
}

int FreestyleLineSet_select_by_group_get(PointerRNA *ptr)
{
	FreestyleLineSet *data = (FreestyleLineSet *)(ptr->data);
	return (((data->selection) & 4) != 0);
}

void FreestyleLineSet_select_by_group_set(PointerRNA *ptr, int value)
{
	FreestyleLineSet *data = (FreestyleLineSet *)(ptr->data);
	if (value) data->selection |= 4;
	else data->selection &= ~4;
}

int FreestyleLineSet_select_by_image_border_get(PointerRNA *ptr)
{
	FreestyleLineSet *data = (FreestyleLineSet *)(ptr->data);
	return (((data->selection) & 8) != 0);
}

void FreestyleLineSet_select_by_image_border_set(PointerRNA *ptr, int value)
{
	FreestyleLineSet *data = (FreestyleLineSet *)(ptr->data);
	if (value) data->selection |= 8;
	else data->selection &= ~8;
}

int FreestyleLineSet_select_by_face_marks_get(PointerRNA *ptr)
{
	FreestyleLineSet *data = (FreestyleLineSet *)(ptr->data);
	return (((data->selection) & 16) != 0);
}

void FreestyleLineSet_select_by_face_marks_set(PointerRNA *ptr, int value)
{
	FreestyleLineSet *data = (FreestyleLineSet *)(ptr->data);
	if (value) data->selection |= 16;
	else data->selection &= ~16;
}

int FreestyleLineSet_edge_type_negation_get(PointerRNA *ptr)
{
	FreestyleLineSet *data = (FreestyleLineSet *)(ptr->data);
	return ((data->flags) & 4);
}

void FreestyleLineSet_edge_type_negation_set(PointerRNA *ptr, int value)
{
	FreestyleLineSet *data = (FreestyleLineSet *)(ptr->data);
	data->flags &= ~4;
	data->flags |= value;
}

int FreestyleLineSet_edge_type_combination_get(PointerRNA *ptr)
{
	FreestyleLineSet *data = (FreestyleLineSet *)(ptr->data);
	return ((data->flags) & 8);
}

void FreestyleLineSet_edge_type_combination_set(PointerRNA *ptr, int value)
{
	FreestyleLineSet *data = (FreestyleLineSet *)(ptr->data);
	data->flags &= ~8;
	data->flags |= value;
}

PointerRNA FreestyleLineSet_group_get(PointerRNA *ptr)
{
	FreestyleLineSet *data = (FreestyleLineSet *)(ptr->data);
	return rna_pointer_inherit_refine(ptr, &RNA_Group, data->group);
}

void FreestyleLineSet_group_set(PointerRNA *ptr, PointerRNA value)
{
	FreestyleLineSet *data = (FreestyleLineSet *)(ptr->data);
	if (value.data)
		id_lib_extern((ID *)value.data);

	data->group = value.data;
}

int FreestyleLineSet_group_negation_get(PointerRNA *ptr)
{
	FreestyleLineSet *data = (FreestyleLineSet *)(ptr->data);
	return ((data->flags) & 16);
}

void FreestyleLineSet_group_negation_set(PointerRNA *ptr, int value)
{
	FreestyleLineSet *data = (FreestyleLineSet *)(ptr->data);
	data->flags &= ~16;
	data->flags |= value;
}

int FreestyleLineSet_face_mark_negation_get(PointerRNA *ptr)
{
	FreestyleLineSet *data = (FreestyleLineSet *)(ptr->data);
	return ((data->flags) & 32);
}

void FreestyleLineSet_face_mark_negation_set(PointerRNA *ptr, int value)
{
	FreestyleLineSet *data = (FreestyleLineSet *)(ptr->data);
	data->flags &= ~32;
	data->flags |= value;
}

int FreestyleLineSet_face_mark_condition_get(PointerRNA *ptr)
{
	FreestyleLineSet *data = (FreestyleLineSet *)(ptr->data);
	return ((data->flags) & 64);
}

void FreestyleLineSet_face_mark_condition_set(PointerRNA *ptr, int value)
{
	FreestyleLineSet *data = (FreestyleLineSet *)(ptr->data);
	data->flags &= ~64;
	data->flags |= value;
}

int FreestyleLineSet_select_silhouette_get(PointerRNA *ptr)
{
	FreestyleLineSet *data = (FreestyleLineSet *)(ptr->data);
	return (((data->edge_types) & 1) != 0);
}

void FreestyleLineSet_select_silhouette_set(PointerRNA *ptr, int value)
{
	FreestyleLineSet *data = (FreestyleLineSet *)(ptr->data);
	if (value) data->edge_types |= 1;
	else data->edge_types &= ~1;
}

int FreestyleLineSet_select_border_get(PointerRNA *ptr)
{
	FreestyleLineSet *data = (FreestyleLineSet *)(ptr->data);
	return (((data->edge_types) & 2) != 0);
}

void FreestyleLineSet_select_border_set(PointerRNA *ptr, int value)
{
	FreestyleLineSet *data = (FreestyleLineSet *)(ptr->data);
	if (value) data->edge_types |= 2;
	else data->edge_types &= ~2;
}

int FreestyleLineSet_select_crease_get(PointerRNA *ptr)
{
	FreestyleLineSet *data = (FreestyleLineSet *)(ptr->data);
	return (((data->edge_types) & 4) != 0);
}

void FreestyleLineSet_select_crease_set(PointerRNA *ptr, int value)
{
	FreestyleLineSet *data = (FreestyleLineSet *)(ptr->data);
	if (value) data->edge_types |= 4;
	else data->edge_types &= ~4;
}

int FreestyleLineSet_select_ridge_valley_get(PointerRNA *ptr)
{
	FreestyleLineSet *data = (FreestyleLineSet *)(ptr->data);
	return (((data->edge_types) & 8) != 0);
}

void FreestyleLineSet_select_ridge_valley_set(PointerRNA *ptr, int value)
{
	FreestyleLineSet *data = (FreestyleLineSet *)(ptr->data);
	if (value) data->edge_types |= 8;
	else data->edge_types &= ~8;
}

int FreestyleLineSet_select_suggestive_contour_get(PointerRNA *ptr)
{
	FreestyleLineSet *data = (FreestyleLineSet *)(ptr->data);
	return (((data->edge_types) & 32) != 0);
}

void FreestyleLineSet_select_suggestive_contour_set(PointerRNA *ptr, int value)
{
	FreestyleLineSet *data = (FreestyleLineSet *)(ptr->data);
	if (value) data->edge_types |= 32;
	else data->edge_types &= ~32;
}

int FreestyleLineSet_select_material_boundary_get(PointerRNA *ptr)
{
	FreestyleLineSet *data = (FreestyleLineSet *)(ptr->data);
	return (((data->edge_types) & 64) != 0);
}

void FreestyleLineSet_select_material_boundary_set(PointerRNA *ptr, int value)
{
	FreestyleLineSet *data = (FreestyleLineSet *)(ptr->data);
	if (value) data->edge_types |= 64;
	else data->edge_types &= ~64;
}

int FreestyleLineSet_select_contour_get(PointerRNA *ptr)
{
	FreestyleLineSet *data = (FreestyleLineSet *)(ptr->data);
	return (((data->edge_types) & 128) != 0);
}

void FreestyleLineSet_select_contour_set(PointerRNA *ptr, int value)
{
	FreestyleLineSet *data = (FreestyleLineSet *)(ptr->data);
	if (value) data->edge_types |= 128;
	else data->edge_types &= ~128;
}

int FreestyleLineSet_select_external_contour_get(PointerRNA *ptr)
{
	FreestyleLineSet *data = (FreestyleLineSet *)(ptr->data);
	return (((data->edge_types) & 256) != 0);
}

void FreestyleLineSet_select_external_contour_set(PointerRNA *ptr, int value)
{
	FreestyleLineSet *data = (FreestyleLineSet *)(ptr->data);
	if (value) data->edge_types |= 256;
	else data->edge_types &= ~256;
}

int FreestyleLineSet_select_edge_mark_get(PointerRNA *ptr)
{
	FreestyleLineSet *data = (FreestyleLineSet *)(ptr->data);
	return (((data->edge_types) & 512) != 0);
}

void FreestyleLineSet_select_edge_mark_set(PointerRNA *ptr, int value)
{
	FreestyleLineSet *data = (FreestyleLineSet *)(ptr->data);
	if (value) data->edge_types |= 512;
	else data->edge_types &= ~512;
}

int FreestyleLineSet_exclude_silhouette_get(PointerRNA *ptr)
{
	FreestyleLineSet *data = (FreestyleLineSet *)(ptr->data);
	return (((data->exclude_edge_types) & 1) != 0);
}

void FreestyleLineSet_exclude_silhouette_set(PointerRNA *ptr, int value)
{
	FreestyleLineSet *data = (FreestyleLineSet *)(ptr->data);
	if (value) data->exclude_edge_types |= 1;
	else data->exclude_edge_types &= ~1;
}

int FreestyleLineSet_exclude_border_get(PointerRNA *ptr)
{
	FreestyleLineSet *data = (FreestyleLineSet *)(ptr->data);
	return (((data->exclude_edge_types) & 2) != 0);
}

void FreestyleLineSet_exclude_border_set(PointerRNA *ptr, int value)
{
	FreestyleLineSet *data = (FreestyleLineSet *)(ptr->data);
	if (value) data->exclude_edge_types |= 2;
	else data->exclude_edge_types &= ~2;
}

int FreestyleLineSet_exclude_crease_get(PointerRNA *ptr)
{
	FreestyleLineSet *data = (FreestyleLineSet *)(ptr->data);
	return (((data->exclude_edge_types) & 4) != 0);
}

void FreestyleLineSet_exclude_crease_set(PointerRNA *ptr, int value)
{
	FreestyleLineSet *data = (FreestyleLineSet *)(ptr->data);
	if (value) data->exclude_edge_types |= 4;
	else data->exclude_edge_types &= ~4;
}

int FreestyleLineSet_exclude_ridge_valley_get(PointerRNA *ptr)
{
	FreestyleLineSet *data = (FreestyleLineSet *)(ptr->data);
	return (((data->exclude_edge_types) & 8) != 0);
}

void FreestyleLineSet_exclude_ridge_valley_set(PointerRNA *ptr, int value)
{
	FreestyleLineSet *data = (FreestyleLineSet *)(ptr->data);
	if (value) data->exclude_edge_types |= 8;
	else data->exclude_edge_types &= ~8;
}

int FreestyleLineSet_exclude_suggestive_contour_get(PointerRNA *ptr)
{
	FreestyleLineSet *data = (FreestyleLineSet *)(ptr->data);
	return (((data->exclude_edge_types) & 32) != 0);
}

void FreestyleLineSet_exclude_suggestive_contour_set(PointerRNA *ptr, int value)
{
	FreestyleLineSet *data = (FreestyleLineSet *)(ptr->data);
	if (value) data->exclude_edge_types |= 32;
	else data->exclude_edge_types &= ~32;
}

int FreestyleLineSet_exclude_material_boundary_get(PointerRNA *ptr)
{
	FreestyleLineSet *data = (FreestyleLineSet *)(ptr->data);
	return (((data->exclude_edge_types) & 64) != 0);
}

void FreestyleLineSet_exclude_material_boundary_set(PointerRNA *ptr, int value)
{
	FreestyleLineSet *data = (FreestyleLineSet *)(ptr->data);
	if (value) data->exclude_edge_types |= 64;
	else data->exclude_edge_types &= ~64;
}

int FreestyleLineSet_exclude_contour_get(PointerRNA *ptr)
{
	FreestyleLineSet *data = (FreestyleLineSet *)(ptr->data);
	return (((data->exclude_edge_types) & 128) != 0);
}

void FreestyleLineSet_exclude_contour_set(PointerRNA *ptr, int value)
{
	FreestyleLineSet *data = (FreestyleLineSet *)(ptr->data);
	if (value) data->exclude_edge_types |= 128;
	else data->exclude_edge_types &= ~128;
}

int FreestyleLineSet_exclude_external_contour_get(PointerRNA *ptr)
{
	FreestyleLineSet *data = (FreestyleLineSet *)(ptr->data);
	return (((data->exclude_edge_types) & 256) != 0);
}

void FreestyleLineSet_exclude_external_contour_set(PointerRNA *ptr, int value)
{
	FreestyleLineSet *data = (FreestyleLineSet *)(ptr->data);
	if (value) data->exclude_edge_types |= 256;
	else data->exclude_edge_types &= ~256;
}

int FreestyleLineSet_exclude_edge_mark_get(PointerRNA *ptr)
{
	FreestyleLineSet *data = (FreestyleLineSet *)(ptr->data);
	return (((data->exclude_edge_types) & 512) != 0);
}

void FreestyleLineSet_exclude_edge_mark_set(PointerRNA *ptr, int value)
{
	FreestyleLineSet *data = (FreestyleLineSet *)(ptr->data);
	if (value) data->exclude_edge_types |= 512;
	else data->exclude_edge_types &= ~512;
}

int FreestyleLineSet_visibility_get(PointerRNA *ptr)
{
	FreestyleLineSet *data = (FreestyleLineSet *)(ptr->data);
	return (int)(data->qi);
}

void FreestyleLineSet_visibility_set(PointerRNA *ptr, int value)
{
	FreestyleLineSet *data = (FreestyleLineSet *)(ptr->data);
	data->qi = value;
}

int FreestyleLineSet_qi_start_get(PointerRNA *ptr)
{
	FreestyleLineSet *data = (FreestyleLineSet *)(ptr->data);
	return (int)(data->qi_start);
}

void FreestyleLineSet_qi_start_set(PointerRNA *ptr, int value)
{
	FreestyleLineSet *data = (FreestyleLineSet *)(ptr->data);
	data->qi_start = CLAMPIS(value, 0, INT_MAX);
}

int FreestyleLineSet_qi_end_get(PointerRNA *ptr)
{
	FreestyleLineSet *data = (FreestyleLineSet *)(ptr->data);
	return (int)(data->qi_end);
}

void FreestyleLineSet_qi_end_set(PointerRNA *ptr, int value)
{
	FreestyleLineSet *data = (FreestyleLineSet *)(ptr->data);
	data->qi_end = CLAMPIS(value, 0, INT_MAX);
}

static PointerRNA FreestyleModuleSettings_rna_properties_get(CollectionPropertyIterator *iter)
{
	return rna_builtin_properties_get(iter);
}

void FreestyleModuleSettings_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

	memset(iter, 0, sizeof(*iter));
	iter->parent = *ptr;
	iter->prop = (PropertyRNA *)&rna_FreestyleModuleSettings_rna_properties;

	rna_builtin_properties_begin(iter, ptr);

	if (iter->valid)
		iter->ptr = FreestyleModuleSettings_rna_properties_get(iter);
}

void FreestyleModuleSettings_rna_properties_next(CollectionPropertyIterator *iter)
{
	rna_builtin_properties_next(iter);

	if (iter->valid)
		iter->ptr = FreestyleModuleSettings_rna_properties_get(iter);
}

void FreestyleModuleSettings_rna_properties_end(CollectionPropertyIterator *iter)
{
	rna_iterator_listbase_end(iter);
}

int FreestyleModuleSettings_rna_properties_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
	return rna_builtin_properties_lookup_string(ptr, key, r_ptr);
}

PointerRNA FreestyleModuleSettings_rna_type_get(PointerRNA *ptr)
{
	return rna_builtin_type_get(ptr);
}

PointerRNA FreestyleModuleSettings_script_get(PointerRNA *ptr)
{
	FreestyleModuleConfig *data = (FreestyleModuleConfig *)(ptr->data);
	return rna_pointer_inherit_refine(ptr, &RNA_Text, data->script);
}

void FreestyleModuleSettings_script_set(PointerRNA *ptr, PointerRNA value)
{
	FreestyleModuleConfig *data = (FreestyleModuleConfig *)(ptr->data);
	if (value.data)
		id_lib_extern((ID *)value.data);

	data->script = value.data;
}

int FreestyleModuleSettings_use_get(PointerRNA *ptr)
{
	FreestyleModuleConfig *data = (FreestyleModuleConfig *)(ptr->data);
	return (((data->is_displayed) & 1) != 0);
}

void FreestyleModuleSettings_use_set(PointerRNA *ptr, int value)
{
	FreestyleModuleConfig *data = (FreestyleModuleConfig *)(ptr->data);
	if (value) data->is_displayed |= 1;
	else data->is_displayed &= ~1;
}

static PointerRNA FreestyleSettings_rna_properties_get(CollectionPropertyIterator *iter)
{
	return rna_builtin_properties_get(iter);
}

void FreestyleSettings_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

	memset(iter, 0, sizeof(*iter));
	iter->parent = *ptr;
	iter->prop = (PropertyRNA *)&rna_FreestyleSettings_rna_properties;

	rna_builtin_properties_begin(iter, ptr);

	if (iter->valid)
		iter->ptr = FreestyleSettings_rna_properties_get(iter);
}

void FreestyleSettings_rna_properties_next(CollectionPropertyIterator *iter)
{
	rna_builtin_properties_next(iter);

	if (iter->valid)
		iter->ptr = FreestyleSettings_rna_properties_get(iter);
}

void FreestyleSettings_rna_properties_end(CollectionPropertyIterator *iter)
{
	rna_iterator_listbase_end(iter);
}

int FreestyleSettings_rna_properties_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
	return rna_builtin_properties_lookup_string(ptr, key, r_ptr);
}

PointerRNA FreestyleSettings_rna_type_get(PointerRNA *ptr)
{
	return rna_builtin_type_get(ptr);
}

static PointerRNA FreestyleSettings_modules_get(CollectionPropertyIterator *iter)
{
	return rna_pointer_inherit_refine(&iter->parent, &RNA_FreestyleModuleSettings, rna_iterator_listbase_get(iter));
}

void FreestyleSettings_modules_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{
	FreestyleConfig *data = (FreestyleConfig *)(ptr->data);

	memset(iter, 0, sizeof(*iter));
	iter->parent = *ptr;
	iter->prop = (PropertyRNA *)&rna_FreestyleSettings_modules;

	rna_iterator_listbase_begin(iter, &data->modules, NULL);

	if (iter->valid)
		iter->ptr = FreestyleSettings_modules_get(iter);
}

void FreestyleSettings_modules_next(CollectionPropertyIterator *iter)
{
	rna_iterator_listbase_next(iter);

	if (iter->valid)
		iter->ptr = FreestyleSettings_modules_get(iter);
}

void FreestyleSettings_modules_end(CollectionPropertyIterator *iter)
{
	rna_iterator_listbase_end(iter);
}

int FreestyleSettings_modules_lookup_int(PointerRNA *ptr, int index, PointerRNA *r_ptr)
{
	int found = 0;
	CollectionPropertyIterator iter;

	FreestyleSettings_modules_begin(&iter, ptr);

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
		if (found) *r_ptr = FreestyleSettings_modules_get(&iter);
	}

	FreestyleSettings_modules_end(&iter);

	return found;
}

int FreestyleSettings_mode_get(PointerRNA *ptr)
{
	FreestyleConfig *data = (FreestyleConfig *)(ptr->data);
	return (int)(data->mode);
}

void FreestyleSettings_mode_set(PointerRNA *ptr, int value)
{
	FreestyleConfig *data = (FreestyleConfig *)(ptr->data);
	data->mode = value;
}

int FreestyleSettings_use_culling_get(PointerRNA *ptr)
{
	FreestyleConfig *data = (FreestyleConfig *)(ptr->data);
	return (((data->flags) & 32) != 0);
}

void FreestyleSettings_use_culling_set(PointerRNA *ptr, int value)
{
	FreestyleConfig *data = (FreestyleConfig *)(ptr->data);
	if (value) data->flags |= 32;
	else data->flags &= ~32;
}

int FreestyleSettings_use_suggestive_contours_get(PointerRNA *ptr)
{
	FreestyleConfig *data = (FreestyleConfig *)(ptr->data);
	return (((data->flags) & 1) != 0);
}

void FreestyleSettings_use_suggestive_contours_set(PointerRNA *ptr, int value)
{
	FreestyleConfig *data = (FreestyleConfig *)(ptr->data);
	if (value) data->flags |= 1;
	else data->flags &= ~1;
}

int FreestyleSettings_use_ridges_and_valleys_get(PointerRNA *ptr)
{
	FreestyleConfig *data = (FreestyleConfig *)(ptr->data);
	return (((data->flags) & 2) != 0);
}

void FreestyleSettings_use_ridges_and_valleys_set(PointerRNA *ptr, int value)
{
	FreestyleConfig *data = (FreestyleConfig *)(ptr->data);
	if (value) data->flags |= 2;
	else data->flags &= ~2;
}

int FreestyleSettings_use_material_boundaries_get(PointerRNA *ptr)
{
	FreestyleConfig *data = (FreestyleConfig *)(ptr->data);
	return (((data->flags) & 4) != 0);
}

void FreestyleSettings_use_material_boundaries_set(PointerRNA *ptr, int value)
{
	FreestyleConfig *data = (FreestyleConfig *)(ptr->data);
	if (value) data->flags |= 4;
	else data->flags &= ~4;
}

int FreestyleSettings_use_smoothness_get(PointerRNA *ptr)
{
	FreestyleConfig *data = (FreestyleConfig *)(ptr->data);
	return (((data->flags) & 8) != 0);
}

void FreestyleSettings_use_smoothness_set(PointerRNA *ptr, int value)
{
	FreestyleConfig *data = (FreestyleConfig *)(ptr->data);
	if (value) data->flags |= 8;
	else data->flags &= ~8;
}

int FreestyleSettings_use_advanced_options_get(PointerRNA *ptr)
{
	FreestyleConfig *data = (FreestyleConfig *)(ptr->data);
	return (((data->flags) & 16) != 0);
}

void FreestyleSettings_use_advanced_options_set(PointerRNA *ptr, int value)
{
	FreestyleConfig *data = (FreestyleConfig *)(ptr->data);
	if (value) data->flags |= 16;
	else data->flags &= ~16;
}

int FreestyleSettings_use_view_map_cache_get(PointerRNA *ptr)
{
	FreestyleConfig *data = (FreestyleConfig *)(ptr->data);
	return (((data->flags) & 64) != 0);
}

void FreestyleSettings_use_view_map_cache_set(PointerRNA *ptr, int value)
{
	FreestyleConfig *data = (FreestyleConfig *)(ptr->data);
	if (value) data->flags |= 64;
	else data->flags &= ~64;
}

float FreestyleSettings_sphere_radius_get(PointerRNA *ptr)
{
	FreestyleConfig *data = (FreestyleConfig *)(ptr->data);
	return (float)(data->sphere_radius);
}

void FreestyleSettings_sphere_radius_set(PointerRNA *ptr, float value)
{
	FreestyleConfig *data = (FreestyleConfig *)(ptr->data);
	data->sphere_radius = CLAMPIS(value, 0.0f, 1000.0f);
}

float FreestyleSettings_kr_derivative_epsilon_get(PointerRNA *ptr)
{
	FreestyleConfig *data = (FreestyleConfig *)(ptr->data);
	return (float)(data->dkr_epsilon);
}

void FreestyleSettings_kr_derivative_epsilon_set(PointerRNA *ptr, float value)
{
	FreestyleConfig *data = (FreestyleConfig *)(ptr->data);
	data->dkr_epsilon = CLAMPIS(value, -1000.0f, 1000.0f);
}

float FreestyleSettings_crease_angle_get(PointerRNA *ptr)
{
	FreestyleConfig *data = (FreestyleConfig *)(ptr->data);
	return (float)(data->crease_angle);
}

void FreestyleSettings_crease_angle_set(PointerRNA *ptr, float value)
{
	FreestyleConfig *data = (FreestyleConfig *)(ptr->data);
	data->crease_angle = CLAMPIS(value, 0.0f, 3.1415927410f);
}

static PointerRNA FreestyleSettings_linesets_get(CollectionPropertyIterator *iter)
{
	return rna_pointer_inherit_refine(&iter->parent, &RNA_FreestyleLineSet, rna_iterator_listbase_get(iter));
}

void FreestyleSettings_linesets_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{
	FreestyleConfig *data = (FreestyleConfig *)(ptr->data);

	memset(iter, 0, sizeof(*iter));
	iter->parent = *ptr;
	iter->prop = (PropertyRNA *)&rna_FreestyleSettings_linesets;

	rna_iterator_listbase_begin(iter, &data->linesets, NULL);

	if (iter->valid)
		iter->ptr = FreestyleSettings_linesets_get(iter);
}

void FreestyleSettings_linesets_next(CollectionPropertyIterator *iter)
{
	rna_iterator_listbase_next(iter);

	if (iter->valid)
		iter->ptr = FreestyleSettings_linesets_get(iter);
}

void FreestyleSettings_linesets_end(CollectionPropertyIterator *iter)
{
	rna_iterator_listbase_end(iter);
}

int FreestyleSettings_linesets_lookup_int(PointerRNA *ptr, int index, PointerRNA *r_ptr)
{
	int found = 0;
	CollectionPropertyIterator iter;

	FreestyleSettings_linesets_begin(&iter, ptr);

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
		if (found) *r_ptr = FreestyleSettings_linesets_get(&iter);
	}

	FreestyleSettings_linesets_end(&iter);

	return found;
}

int FreestyleSettings_linesets_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
	extern int FreestyleLineSet_name_length(PointerRNA *);
	extern void FreestyleLineSet_name_get(PointerRNA *, char *);

	bool found = false;
	CollectionPropertyIterator iter;
	char namebuf[1024];
	char *name;

	FreestyleSettings_linesets_begin(&iter, ptr);

	while (iter.valid) {
		if (iter.ptr.data) {
			int namelen = FreestyleLineSet_name_length(&iter.ptr);
			if (namelen < 1024) {
				FreestyleLineSet_name_get(&iter.ptr, namebuf);
				if (strcmp(namebuf, key) == 0) {
					found = true;
					*r_ptr = iter.ptr;
					break;
				}
			}
			else {
				name = MEM_mallocN(namelen+1, "name string");
				FreestyleLineSet_name_get(&iter.ptr, name);
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
		FreestyleSettings_linesets_next(&iter);
	}
	FreestyleSettings_linesets_end(&iter);

	return found;
}

static PointerRNA FreestyleModules_rna_properties_get(CollectionPropertyIterator *iter)
{
	return rna_builtin_properties_get(iter);
}

void FreestyleModules_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

	memset(iter, 0, sizeof(*iter));
	iter->parent = *ptr;
	iter->prop = (PropertyRNA *)&rna_FreestyleModules_rna_properties;

	rna_builtin_properties_begin(iter, ptr);

	if (iter->valid)
		iter->ptr = FreestyleModules_rna_properties_get(iter);
}

void FreestyleModules_rna_properties_next(CollectionPropertyIterator *iter)
{
	rna_builtin_properties_next(iter);

	if (iter->valid)
		iter->ptr = FreestyleModules_rna_properties_get(iter);
}

void FreestyleModules_rna_properties_end(CollectionPropertyIterator *iter)
{
	rna_iterator_listbase_end(iter);
}

int FreestyleModules_rna_properties_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
	return rna_builtin_properties_lookup_string(ptr, key, r_ptr);
}

PointerRNA FreestyleModules_rna_type_get(PointerRNA *ptr)
{
	return rna_builtin_type_get(ptr);
}

static PointerRNA Linesets_rna_properties_get(CollectionPropertyIterator *iter)
{
	return rna_builtin_properties_get(iter);
}

void Linesets_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

	memset(iter, 0, sizeof(*iter));
	iter->parent = *ptr;
	iter->prop = (PropertyRNA *)&rna_Linesets_rna_properties;

	rna_builtin_properties_begin(iter, ptr);

	if (iter->valid)
		iter->ptr = Linesets_rna_properties_get(iter);
}

void Linesets_rna_properties_next(CollectionPropertyIterator *iter)
{
	rna_builtin_properties_next(iter);

	if (iter->valid)
		iter->ptr = Linesets_rna_properties_get(iter);
}

void Linesets_rna_properties_end(CollectionPropertyIterator *iter)
{
	rna_iterator_listbase_end(iter);
}

int Linesets_rna_properties_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
	return rna_builtin_properties_lookup_string(ptr, key, r_ptr);
}

PointerRNA Linesets_rna_type_get(PointerRNA *ptr)
{
	return rna_builtin_type_get(ptr);
}

PointerRNA Linesets_active_get(PointerRNA *ptr)
{
	return rna_FreestyleSettings_active_lineset_get(ptr);
}

int Linesets_active_index_get(PointerRNA *ptr)
{
	return rna_FreestyleSettings_active_lineset_index_get(ptr);
}

void Linesets_active_index_set(PointerRNA *ptr, int value)
{
	rna_FreestyleSettings_active_lineset_index_set(ptr, value);
}

struct Editing *Scene_sequence_editor_create(struct Scene *_self)
{
	return BKE_sequencer_editing_ensure(_self);
}

void Scene_sequence_editor_create_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	struct Scene *_self;
	struct Editing *sequence_editor;
	char *_data, *_retdata;
	
	_self = (struct Scene *)_ptr->data;
	_data = (char *)_parms->data;
	_retdata = _data;
	
	sequence_editor = BKE_sequencer_editing_ensure(_self);
	*((struct Editing **)_retdata) = sequence_editor;
}

void Scene_sequence_editor_clear(struct Scene *_self)
{
	BKE_sequencer_editing_free(_self);
}

void Scene_sequence_editor_clear_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	struct Scene *_self;
	_self = (struct Scene *)_ptr->data;
	
	BKE_sequencer_editing_free(_self);
}

const char * Scene_statistics(struct Scene *_self)
{
	return ED_info_stats_string(_self);
}

void Scene_statistics_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	struct Scene *_self;
	const char * statistics;
	char *_data, *_retdata;
	
	_self = (struct Scene *)_ptr->data;
	_data = (char *)_parms->data;
	_retdata = _data;
	
	statistics = ED_info_stats_string(_self);
	*((const char * *)_retdata) = statistics;
}

void Scene_frame_set(struct Scene *_self, int frame, float subframe)
{
	rna_Scene_frame_set(_self, frame, subframe);
}

void Scene_frame_set_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	struct Scene *_self;
	int frame;
	float subframe;
	char *_data;
	
	_self = (struct Scene *)_ptr->data;
	_data = (char *)_parms->data;
	frame = *((int *)_data);
	_data += 4;
	subframe = *((float *)_data);
	
	rna_Scene_frame_set(_self, frame, subframe);
}

void Scene_update(struct Scene *_self)
{
	rna_Scene_update_tagged(_self);
}

void Scene_update_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	struct Scene *_self;
	_self = (struct Scene *)_ptr->data;
	
	rna_Scene_update_tagged(_self);
}

void Scene_ray_cast(struct Scene *_self, float start[3], float end[3], int *result, struct Object **object, float matrix[16], float location[3], float normal[3])
{
	rna_Scene_ray_cast(_self, start, end, result, object, matrix, location, normal);
}

void Scene_ray_cast_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	struct Scene *_self;
	float *start;
	float *end;
	int *result;
	struct Object **object;
	float *matrix;
	float *location;
	float *normal;
	char *_data;
	
	_self = (struct Scene *)_ptr->data;
	_data = (char *)_parms->data;
	start = ((float *)_data);
	_data += 12;
	end = ((float *)_data);
	_data += 12;
	result = ((int *)_data);
	_data += 4;
	object = ((struct Object **)_data);
#if defined(SPEC_ILP32)
	_data += 4;
#else
	_data += 8;
#endif
	matrix = ((float *)_data);
	_data += 64;
	location = ((float *)_data);
	_data += 12;
	normal = ((float *)_data);
	
	rna_Scene_ray_cast(_self, start, end, result, object, matrix, location, normal);
}

/* Repeated prototypes to detect errors */

struct Editing *BKE_sequencer_editing_ensure(struct Scene *_self);
void BKE_sequencer_editing_free(struct Scene *_self);
const char * ED_info_stats_string(struct Scene *_self);
void rna_Scene_frame_set(struct Scene *_self, int frame, float subframe);
void rna_Scene_update_tagged(struct Scene *_self);
void rna_Scene_ray_cast(struct Scene *_self, float start[3], float end[3], int *result, struct Object **object, float matrix[16], float location[3], float normal[3]);


struct Base *SceneObjects_link(struct Scene *_self, bContext *C, ReportList *reports, struct Object *object)
{
	return rna_Scene_object_link(_self, C, reports, object);
}

void SceneObjects_link_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	struct Scene *_self;
	struct Object *object;
	struct Base *base;
	char *_data, *_retdata;
	
	_self = (struct Scene *)_ptr->data;
	_data = (char *)_parms->data;
	object = *((struct Object **)_data);
#if defined(SPEC_ILP32)
	_data += 4;
#else
	_data += 8;
#endif
	_retdata = _data;
	
	base = rna_Scene_object_link(_self, C, reports, object);
	*((struct Base **)_retdata) = base;
}

void SceneObjects_unlink(struct Scene *_self, ReportList *reports, struct Object *object)
{
	rna_Scene_object_unlink(_self, reports, object);
}

void SceneObjects_unlink_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	struct Scene *_self;
	struct Object *object;
	char *_data;
	
	_self = (struct Scene *)_ptr->data;
	_data = (char *)_parms->data;
	object = *((struct Object **)_data);
	
	rna_Scene_object_unlink(_self, reports, object);
}

/* Repeated prototypes to detect errors */

struct Base *rna_Scene_object_link(struct Scene *_self, bContext *C, ReportList *reports, struct Object *object);
void rna_Scene_object_unlink(struct Scene *_self, ReportList *reports, struct Object *object);

struct KeyingSet *KeyingSets_new(struct Scene *_self, ReportList *reports, const char * idname, const char * name)
{
	return rna_Scene_keying_set_new(_self, reports, idname, name);
}

void KeyingSets_new_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	struct Scene *_self;
	const char * idname;
	const char * name;
	struct KeyingSet *keyingset;
	char *_data, *_retdata;
	
	_self = (struct Scene *)_ptr->data;
	_data = (char *)_parms->data;
	idname = *((const char * *)_data);
#if defined(SPEC_ILP32)
	_data += 4;
#else
	_data += 8;
#endif
	name = *((const char * *)_data);
#if defined(SPEC_ILP32)
	_data += 4;
#else
	_data += 8;
#endif
	_retdata = _data;
	
	keyingset = rna_Scene_keying_set_new(_self, reports, idname, name);
	*((struct KeyingSet **)_retdata) = keyingset;
}

/* Repeated prototypes to detect errors */

struct KeyingSet *rna_Scene_keying_set_new(struct Scene *_self, ReportList *reports, const char * idname, const char * name);


struct TimeMarker *TimelineMarkers_new(struct Scene *_self, const char * name, int frame)
{
	return rna_TimeLine_add(_self, name, frame);
}

void TimelineMarkers_new_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	struct Scene *_self;
	const char * name;
	int frame;
	struct TimeMarker *marker;
	char *_data, *_retdata;
	
	_self = (struct Scene *)_ptr->data;
	_data = (char *)_parms->data;
	name = *((const char * *)_data);
#if defined(SPEC_ILP32)
	_data += 4;
#else
	_data += 8;
#endif
	frame = *((int *)_data);
	_data += 4;
	_retdata = _data;
	
	marker = rna_TimeLine_add(_self, name, frame);
	*((struct TimeMarker **)_retdata) = marker;
}

void TimelineMarkers_remove(struct Scene *_self, ReportList *reports, struct PointerRNA *marker)
{
	rna_TimeLine_remove(_self, reports, marker);
}

void TimelineMarkers_remove_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	struct Scene *_self;
	struct PointerRNA *marker;
	char *_data;
	
	_self = (struct Scene *)_ptr->data;
	_data = (char *)_parms->data;
	marker = *((struct PointerRNA **)_data);
	
	rna_TimeLine_remove(_self, reports, marker);
}

void TimelineMarkers_clear(struct Scene *_self)
{
	rna_TimeLine_clear(_self);
}

void TimelineMarkers_clear_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	struct Scene *_self;
	_self = (struct Scene *)_ptr->data;
	
	rna_TimeLine_clear(_self);
}

/* Repeated prototypes to detect errors */

struct TimeMarker *rna_TimeLine_add(struct Scene *_self, const char * name, int frame);
void rna_TimeLine_remove(struct Scene *_self, ReportList *reports, struct PointerRNA *marker);
void rna_TimeLine_clear(struct Scene *_self);











void RenderSettings_frame_path(struct RenderData *_self, int frame, char * filepath)
{
	rna_SceneRender_get_frame_path(_self, frame, filepath);
}

void RenderSettings_frame_path_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	struct RenderData *_self;
	int frame;
	char * filepath;
	char *_data;
	
	_self = (struct RenderData *)_ptr->data;
	_data = (char *)_parms->data;
	frame = *((int *)_data);
	_data += 4;
	filepath = ((char * )_data);
	
	rna_SceneRender_get_frame_path(_self, frame, filepath);
}

/* Repeated prototypes to detect errors */

void rna_SceneRender_get_frame_path(struct RenderData *_self, int frame, char * filepath);

struct SceneRenderLayer *RenderLayers_new(struct ID *_selfid, struct RenderData *_self, const char * name)
{
	return rna_RenderLayer_new(_selfid, _self, name);
}

void RenderLayers_new_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	struct ID *_selfid;
	struct RenderData *_self;
	const char * name;
	struct SceneRenderLayer *result;
	char *_data, *_retdata;
	
	_selfid = (struct ID *)_ptr->id.data;
	_self = (struct RenderData *)_ptr->data;
	_data = (char *)_parms->data;
	name = *((const char * *)_data);
#if defined(SPEC_ILP32)
	_data += 4;
#else
	_data += 8;
#endif
	_retdata = _data;
	
	result = rna_RenderLayer_new(_selfid, _self, name);
	*((struct SceneRenderLayer **)_retdata) = result;
}

void RenderLayers_remove(struct ID *_selfid, struct RenderData *_self, Main *bmain, ReportList *reports, struct PointerRNA *layer)
{
	rna_RenderLayer_remove(_selfid, _self, bmain, reports, layer);
}

void RenderLayers_remove_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	struct ID *_selfid;
	struct RenderData *_self;
	struct PointerRNA *layer;
	char *_data;
	
	_selfid = (struct ID *)_ptr->id.data;
	_self = (struct RenderData *)_ptr->data;
	_data = (char *)_parms->data;
	layer = *((struct PointerRNA **)_data);
	
	rna_RenderLayer_remove(_selfid, _self, CTX_data_main(C), reports, layer);
}

/* Repeated prototypes to detect errors */

struct SceneRenderLayer *rna_RenderLayer_new(struct ID *_selfid, struct RenderData *_self, const char * name);
void rna_RenderLayer_remove(struct ID *_selfid, struct RenderData *_self, Main *bmain, ReportList *reports, struct PointerRNA *layer);






struct FreestyleModuleConfig *FreestyleModules_new(struct ID *_selfid, struct FreestyleSettings *_self)
{
	return rna_FreestyleSettings_module_add(_selfid, _self);
}

void FreestyleModules_new_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	struct ID *_selfid;
	struct FreestyleSettings *_self;
	struct FreestyleModuleConfig *module;
	char *_data, *_retdata;
	
	_selfid = (struct ID *)_ptr->id.data;
	_self = (struct FreestyleSettings *)_ptr->data;
	_data = (char *)_parms->data;
	_retdata = _data;
	
	module = rna_FreestyleSettings_module_add(_selfid, _self);
	*((struct FreestyleModuleConfig **)_retdata) = module;
}

void FreestyleModules_remove(struct ID *_selfid, struct FreestyleSettings *_self, ReportList *reports, struct PointerRNA *module)
{
	rna_FreestyleSettings_module_remove(_selfid, _self, reports, module);
}

void FreestyleModules_remove_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	struct ID *_selfid;
	struct FreestyleSettings *_self;
	struct PointerRNA *module;
	char *_data;
	
	_selfid = (struct ID *)_ptr->id.data;
	_self = (struct FreestyleSettings *)_ptr->data;
	_data = (char *)_parms->data;
	module = *((struct PointerRNA **)_data);
	
	rna_FreestyleSettings_module_remove(_selfid, _self, reports, module);
}

/* Repeated prototypes to detect errors */

struct FreestyleModuleConfig *rna_FreestyleSettings_module_add(struct ID *_selfid, struct FreestyleSettings *_self);
void rna_FreestyleSettings_module_remove(struct ID *_selfid, struct FreestyleSettings *_self, ReportList *reports, struct PointerRNA *module);

struct FreestyleLineSet *Linesets_new(struct ID *_selfid, struct FreestyleSettings *_self, const char * name)
{
	return rna_FreestyleSettings_lineset_add(_selfid, _self, name);
}

void Linesets_new_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	struct ID *_selfid;
	struct FreestyleSettings *_self;
	const char * name;
	struct FreestyleLineSet *lineset;
	char *_data, *_retdata;
	
	_selfid = (struct ID *)_ptr->id.data;
	_self = (struct FreestyleSettings *)_ptr->data;
	_data = (char *)_parms->data;
	name = *((const char * *)_data);
#if defined(SPEC_ILP32)
	_data += 4;
#else
	_data += 8;
#endif
	_retdata = _data;
	
	lineset = rna_FreestyleSettings_lineset_add(_selfid, _self, name);
	*((struct FreestyleLineSet **)_retdata) = lineset;
}

void Linesets_remove(struct ID *_selfid, struct FreestyleSettings *_self, ReportList *reports, struct PointerRNA *lineset)
{
	rna_FreestyleSettings_lineset_remove(_selfid, _self, reports, lineset);
}

void Linesets_remove_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	struct ID *_selfid;
	struct FreestyleSettings *_self;
	struct PointerRNA *lineset;
	char *_data;
	
	_selfid = (struct ID *)_ptr->id.data;
	_self = (struct FreestyleSettings *)_ptr->data;
	_data = (char *)_parms->data;
	lineset = *((struct PointerRNA **)_data);
	
	rna_FreestyleSettings_lineset_remove(_selfid, _self, reports, lineset);
}

/* Repeated prototypes to detect errors */

struct FreestyleLineSet *rna_FreestyleSettings_lineset_add(struct ID *_selfid, struct FreestyleSettings *_self, const char * name);
void rna_FreestyleSettings_lineset_remove(struct ID *_selfid, struct FreestyleSettings *_self, ReportList *reports, struct PointerRNA *lineset);

/* Scene */
PointerPropertyRNA rna_Scene_camera = {
	{(PropertyRNA *)&rna_Scene_background_set, NULL,
	-1, "camera", 8388609, "Camera",
	"Active camera, used for rendering the scene",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Scene_view3d_update, 67108865, NULL, NULL,
	0, -1, NULL},
	Scene_camera_get, Scene_camera_set, NULL, rna_Camera_object_poll,&RNA_Object
};

PointerPropertyRNA rna_Scene_background_set = {
	{(PropertyRNA *)&rna_Scene_world, (PropertyRNA *)&rna_Scene_camera,
	-1, "background_set", 9437185, "Background Scene",
	"Background set scene",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Scene_glsl_update, 67108865, NULL, NULL,
	0, -1, NULL},
	Scene_background_set_get, Scene_background_set_set, NULL, NULL,&RNA_Scene
};

PointerPropertyRNA rna_Scene_world = {
	{(PropertyRNA *)&rna_Scene_cursor_location, (PropertyRNA *)&rna_Scene_background_set,
	-1, "world", 8388673, "World",
	"World used for rendering the scene",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Scene_glsl_update, 73138176, NULL, NULL,
	0, -1, NULL},
	Scene_world_get, Scene_world_set, NULL, NULL,&RNA_World
};

static float rna_Scene_cursor_location_default[3] = {
	0.0f,
	0.0f,
	0.0f
};

FloatPropertyRNA rna_Scene_cursor_location = {
	{(PropertyRNA *)&rna_Scene_object_bases, (PropertyRNA *)&rna_Scene_world,
	-1, "cursor_location", 8195, "Cursor Location",
	"3D cursor location",
	0, "*",
	PROP_FLOAT, PROP_XYZ | PROP_UNIT_LENGTH, NULL, 1, {3, 0, 0}, 3,
	NULL, 33554432, NULL, NULL,
	offsetof(Scene, cursor), 4, NULL},
	NULL, NULL, Scene_cursor_location_get, Scene_cursor_location_set, NULL, NULL, NULL, NULL, NULL, NULL, -10000.0f, 10000.0f, -FLT_MAX, FLT_MAX, 10.0f, 4, 0.0f, rna_Scene_cursor_location_default
};

CollectionPropertyRNA rna_Scene_object_bases = {
	{(PropertyRNA *)&rna_Scene_objects, (PropertyRNA *)&rna_Scene_cursor_location,
	-1, "object_bases", 0, "Bases",
	"",
	0, "*",
	PROP_COLLECTION, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, &RNA_SceneBases},
	Scene_object_bases_begin, Scene_object_bases_next, Scene_object_bases_end, Scene_object_bases_get, NULL, Scene_object_bases_lookup_int, Scene_object_bases_lookup_string, NULL, &RNA_ObjectBase
};

CollectionPropertyRNA rna_Scene_objects = {
	{(PropertyRNA *)&rna_Scene_layers, (PropertyRNA *)&rna_Scene_object_bases,
	-1, "objects", 0, "Objects",
	"",
	0, "*",
	PROP_COLLECTION, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, &RNA_SceneObjects},
	Scene_objects_begin, Scene_objects_next, Scene_objects_end, Scene_objects_get, NULL, Scene_objects_lookup_int, Scene_objects_lookup_string, NULL, &RNA_Object
};

static int rna_Scene_layers_default[20] = {
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

BoolPropertyRNA rna_Scene_layers = {
	{(PropertyRNA *)&rna_Scene_active_layer, (PropertyRNA *)&rna_Scene_objects,
	-1, "layers", 1, "Layers",
	"Visible layers - Shift-Click to select multiple layers",
	0, "*",
	PROP_BOOLEAN, PROP_LAYER_MEMBER | PROP_UNIT_NONE, NULL, 1, {20, 0, 0}, 20,
	rna_Scene_layer_update, 68157440, NULL, NULL,
	0, -1, NULL},
	NULL, NULL, Scene_layers_get, Scene_layers_set, NULL, NULL, NULL, NULL, 0, rna_Scene_layers_default
};

IntPropertyRNA rna_Scene_active_layer = {
	{(PropertyRNA *)&rna_Scene_frame_current, (PropertyRNA *)&rna_Scene_layers,
	-1, "active_layer", 0, "Active Layer",
	"Active scene layer index",
	0, "*",
	PROP_INT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	Scene_active_layer_get, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL,
	-10000, 10000, INT_MIN, INT_MAX, 1, 0, NULL
};

IntPropertyRNA rna_Scene_frame_current = {
	{(PropertyRNA *)&rna_Scene_frame_subframe, (PropertyRNA *)&rna_Scene_active_layer,
	-1, "frame_current", 1, "Current Frame",
	"Current Frame, to update animation data from python frame_set() instead",
	0, "*",
	PROP_INT, PROP_TIME | PROP_UNIT_TIME, NULL, 0, {0, 0, 0}, 0,
	rna_Scene_frame_update, 67305472, NULL, NULL,
	0, -1, NULL},
	Scene_frame_current_get, Scene_frame_current_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL,
	-300000, 300000, -300000, 300000, 1, 0, NULL
};

FloatPropertyRNA rna_Scene_frame_subframe = {
	{(PropertyRNA *)&rna_Scene_frame_start, (PropertyRNA *)&rna_Scene_frame_current,
	-1, "frame_subframe", 8192, "Current Sub-Frame",
	"",
	0, "*",
	PROP_FLOAT, PROP_TIME | PROP_UNIT_TIME, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	offsetof(Scene, r.subframe), 4, NULL},
	Scene_frame_subframe_get, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, -10000.0f, 10000.0f, -FLT_MAX, FLT_MAX, 10.0f, 3, 0.0f, NULL
};

IntPropertyRNA rna_Scene_frame_start = {
	{(PropertyRNA *)&rna_Scene_frame_end, (PropertyRNA *)&rna_Scene_frame_subframe,
	-1, "frame_start", 1, "Start Frame",
	"First frame of the playback/rendering range",
	0, "*",
	PROP_INT, PROP_TIME | PROP_UNIT_TIME, NULL, 0, {0, 0, 0}, 0,
	NULL, 68222976, NULL, NULL,
	0, -1, NULL},
	Scene_frame_start_get, Scene_frame_start_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL,
	0, 300000, 0, 300000, 1, 0, NULL
};

IntPropertyRNA rna_Scene_frame_end = {
	{(PropertyRNA *)&rna_Scene_frame_step, (PropertyRNA *)&rna_Scene_frame_start,
	-1, "frame_end", 1, "End Frame",
	"Final frame of the playback/rendering range",
	0, "*",
	PROP_INT, PROP_TIME | PROP_UNIT_TIME, NULL, 0, {0, 0, 0}, 0,
	NULL, 68222976, NULL, NULL,
	0, -1, NULL},
	Scene_frame_end_get, Scene_frame_end_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL,
	0, 300000, 0, 300000, 1, 0, NULL
};

IntPropertyRNA rna_Scene_frame_step = {
	{(PropertyRNA *)&rna_Scene_frame_current_final, (PropertyRNA *)&rna_Scene_frame_end,
	-1, "frame_step", 8193, "Frame Step",
	"Number of frames to skip forward while rendering/playing back each frame",
	0, "*",
	PROP_INT, PROP_TIME | PROP_UNIT_TIME, NULL, 0, {0, 0, 0}, 0,
	NULL, 67305472, NULL, NULL,
	offsetof(Scene, r.frame_step), 0, NULL},
	Scene_frame_step_get, Scene_frame_step_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL,
	1, 100, 0, 300000, 1, 0, NULL
};

FloatPropertyRNA rna_Scene_frame_current_final = {
	{(PropertyRNA *)&rna_Scene_lock_frame_selection_to_range, (PropertyRNA *)&rna_Scene_frame_step,
	-1, "frame_current_final", 0, "Current Frame Final",
	"Current frame with subframe and time remapping applied",
	0, "*",
	PROP_FLOAT, PROP_TIME | PROP_UNIT_TIME, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	Scene_frame_current_final_get, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, -300000.0f, 300000.0f, -300000.0f, 300000.0f, 10.0f, 3, 0.0f, NULL
};

BoolPropertyRNA rna_Scene_lock_frame_selection_to_range = {
	{(PropertyRNA *)&rna_Scene_use_preview_range, (PropertyRNA *)&rna_Scene_frame_current_final,
	-1, "lock_frame_selection_to_range", 1, "Lock Frame Selection",
	"Don\'t allow frame to be selected with mouse outside of frame range",
	41, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 67305472, NULL, NULL,
	0, -1, NULL},
	Scene_lock_frame_selection_to_range_get, Scene_lock_frame_selection_to_range_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_Scene_use_preview_range = {
	{(PropertyRNA *)&rna_Scene_frame_preview_start, (PropertyRNA *)&rna_Scene_lock_frame_selection_to_range,
	-1, "use_preview_range", 1, "Use Preview Range",
	"Use an alternative start/end frame range for animation playback and OpenGL renders instead of the Render properties start/end frame range",
	503, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 67305472, NULL, NULL,
	0, -1, NULL},
	Scene_use_preview_range_get, Scene_use_preview_range_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

IntPropertyRNA rna_Scene_frame_preview_start = {
	{(PropertyRNA *)&rna_Scene_frame_preview_end, (PropertyRNA *)&rna_Scene_use_preview_range,
	-1, "frame_preview_start", 1, "Preview Range Start Frame",
	"Alternative start frame for UI playback",
	0, "*",
	PROP_INT, PROP_TIME | PROP_UNIT_TIME, NULL, 0, {0, 0, 0}, 0,
	NULL, 67305472, NULL, NULL,
	0, -1, NULL},
	Scene_frame_preview_start_get, Scene_frame_preview_start_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL,
	-10000, 10000, INT_MIN, INT_MAX, 1, 0, NULL
};

IntPropertyRNA rna_Scene_frame_preview_end = {
	{(PropertyRNA *)&rna_Scene_show_keys_from_selected_only, (PropertyRNA *)&rna_Scene_frame_preview_start,
	-1, "frame_preview_end", 1, "Preview Range End Frame",
	"Alternative end frame for UI playback",
	0, "*",
	PROP_INT, PROP_TIME | PROP_UNIT_TIME, NULL, 0, {0, 0, 0}, 0,
	NULL, 67305472, NULL, NULL,
	0, -1, NULL},
	Scene_frame_preview_end_get, Scene_frame_preview_end_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL,
	-10000, 10000, INT_MIN, INT_MAX, 1, 0, NULL
};

BoolPropertyRNA rna_Scene_show_keys_from_selected_only = {
	{(PropertyRNA *)&rna_Scene_use_stamp_note, (PropertyRNA *)&rna_Scene_frame_preview_end,
	-1, "show_keys_from_selected_only", 3, "Only Keyframes from Selected Channels",
	"Consider keyframes for active Object and/or its selected bones only (in timeline and when jumping between keyframes)",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 67305472, NULL, NULL,
	0, -1, NULL},
	Scene_show_keys_from_selected_only_get, Scene_show_keys_from_selected_only_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

StringPropertyRNA rna_Scene_use_stamp_note = {
	{(PropertyRNA *)&rna_Scene_animation_data, (PropertyRNA *)&rna_Scene_show_keys_from_selected_only,
	-1, "use_stamp_note", 262145, "Stamp Note",
	"User defined note for the render stamping",
	0, "*",
	PROP_STRING, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {768, 0, 0}, 0,
	NULL, 67371008, NULL, NULL,
	0, -1, NULL},
	Scene_use_stamp_note_get, Scene_use_stamp_note_length, Scene_use_stamp_note_set, NULL, NULL, NULL, 768, ""
};

PointerPropertyRNA rna_Scene_animation_data = {
	{(PropertyRNA *)&rna_Scene_is_nla_tweakmode, (PropertyRNA *)&rna_Scene_use_stamp_note,
	-1, "animation_data", 8388608, "Animation Data",
	"Animation data for this datablock",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	Scene_animation_data_get, NULL, NULL, NULL,&RNA_AnimData
};

BoolPropertyRNA rna_Scene_is_nla_tweakmode = {
	{(PropertyRNA *)&rna_Scene_use_frame_drop, (PropertyRNA *)&rna_Scene_animation_data,
	-1, "is_nla_tweakmode", 2, "NLA TweakMode",
	"Whether there is any action referenced by NLA being edited (strictly read-only)",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 252510208, NULL, NULL,
	0, -1, NULL},
	Scene_is_nla_tweakmode_get, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_Scene_use_frame_drop = {
	{(PropertyRNA *)&rna_Scene_sync_mode, (PropertyRNA *)&rna_Scene_is_nla_tweakmode,
	-1, "use_frame_drop", 3, "Frame Dropping",
	"Play back dropping frames if frame display is too slow",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 67108864, NULL, NULL,
	0, -1, NULL},
	Scene_use_frame_drop_get, Scene_use_frame_drop_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

static EnumPropertyItem rna_Scene_sync_mode_items[4] = {
	{0, "NONE", 0, "No Sync", "Do not sync, play every frame"},
	{8, "FRAME_DROP", 0, "Frame Dropping", "Drop frames if playback is too slow"},
	{2, "AUDIO_SYNC", 0, "AV-sync", "Sync to audio playback, dropping frames"},
	{0, NULL, 0, NULL, NULL}
};

EnumPropertyRNA rna_Scene_sync_mode = {
	{(PropertyRNA *)&rna_Scene_node_tree, (PropertyRNA *)&rna_Scene_use_frame_drop,
	-1, "sync_mode", 3, "Sync Mode",
	"How to sync playback",
	0, "*",
	PROP_ENUM, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 67108864, NULL, NULL,
	0, -1, NULL},
	Scene_sync_mode_get, Scene_sync_mode_set, NULL, NULL, NULL, NULL, rna_Scene_sync_mode_items, 3, 0
};

PointerPropertyRNA rna_Scene_node_tree = {
	{(PropertyRNA *)&rna_Scene_use_nodes, (PropertyRNA *)&rna_Scene_sync_mode,
	-1, "node_tree", 8388672, "Node Tree",
	"Compositing node tree",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	Scene_node_tree_get, NULL, NULL, NULL,&RNA_NodeTree
};

BoolPropertyRNA rna_Scene_use_nodes = {
	{(PropertyRNA *)&rna_Scene_sequence_editor, (PropertyRNA *)&rna_Scene_node_tree,
	-1, "use_nodes", 4194307, "Use Nodes",
	"Enable the compositing node tree",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	(UpdateFunc)rna_Scene_use_nodes_update, 67371008, NULL, NULL,
	0, -1, NULL},
	Scene_use_nodes_get, Scene_use_nodes_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

PointerPropertyRNA rna_Scene_sequence_editor = {
	{(PropertyRNA *)&rna_Scene_keying_sets, (PropertyRNA *)&rna_Scene_use_nodes,
	-1, "sequence_editor", 8388608, "Sequence Editor",
	"",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	Scene_sequence_editor_get, NULL, NULL, NULL,&RNA_SequenceEditor
};

CollectionPropertyRNA rna_Scene_keying_sets = {
	{(PropertyRNA *)&rna_Scene_keying_sets_all, (PropertyRNA *)&rna_Scene_sequence_editor,
	-1, "keying_sets", 0, "Absolute Keying Sets",
	"Absolute Keying Sets for this Scene",
	0, "*",
	PROP_COLLECTION, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 68026368, NULL, NULL,
	0, -1, &RNA_KeyingSets},
	Scene_keying_sets_begin, Scene_keying_sets_next, Scene_keying_sets_end, Scene_keying_sets_get, NULL, Scene_keying_sets_lookup_int, Scene_keying_sets_lookup_string, NULL, &RNA_KeyingSet
};

CollectionPropertyRNA rna_Scene_keying_sets_all = {
	{(PropertyRNA *)&rna_Scene_rigidbody_world, (PropertyRNA *)&rna_Scene_keying_sets,
	-1, "keying_sets_all", 0, "All Keying Sets",
	"All Keying Sets available for use (Builtins and Absolute Keying Sets for this Scene)",
	0, "*",
	PROP_COLLECTION, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 68026368, NULL, NULL,
	0, -1, &RNA_KeyingSetsAll},
	Scene_keying_sets_all_begin, Scene_keying_sets_all_next, Scene_keying_sets_all_end, Scene_keying_sets_all_get, NULL, NULL, NULL, NULL, &RNA_KeyingSet
};

PointerPropertyRNA rna_Scene_rigidbody_world = {
	{(PropertyRNA *)&rna_Scene_tool_settings, (PropertyRNA *)&rna_Scene_keying_sets_all,
	-1, "rigidbody_world", 8388608, "Rigid Body World",
	"",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 67108864, NULL, NULL,
	0, -1, NULL},
	Scene_rigidbody_world_get, NULL, NULL, NULL,&RNA_RigidBodyWorld
};

PointerPropertyRNA rna_Scene_tool_settings = {
	{(PropertyRNA *)&rna_Scene_unit_settings, (PropertyRNA *)&rna_Scene_rigidbody_world,
	-1, "tool_settings", 8650752, "Tool Settings",
	"",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	Scene_tool_settings_get, NULL, NULL, NULL,&RNA_ToolSettings
};

PointerPropertyRNA rna_Scene_unit_settings = {
	{(PropertyRNA *)&rna_Scene_gravity, (PropertyRNA *)&rna_Scene_tool_settings,
	-1, "unit_settings", 8650752, "Unit Settings",
	"Unit editing settings",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	Scene_unit_settings_get, NULL, NULL, NULL,&RNA_UnitSettings
};

static float rna_Scene_gravity_default[3] = {
	0.0f,
	0.0f,
	0.0f
};

FloatPropertyRNA rna_Scene_gravity = {
	{(PropertyRNA *)&rna_Scene_use_gravity, (PropertyRNA *)&rna_Scene_unit_settings,
	-1, "gravity", 8195, "Gravity",
	"Constant acceleration in a given direction",
	0, "*",
	PROP_FLOAT, PROP_ACCELERATION | PROP_UNIT_ACCELERATION, NULL, 1, {3, 0, 0}, 3,
	rna_Physics_update, 0, NULL, NULL,
	offsetof(Scene, physics_settings.gravity), 4, NULL},
	NULL, NULL, Scene_gravity_get, Scene_gravity_set, NULL, NULL, NULL, NULL, NULL, NULL, -200.0f, 200.0f, -FLT_MAX, FLT_MAX, 1.0f, 2, 0.0f, rna_Scene_gravity_default
};

BoolPropertyRNA rna_Scene_use_gravity = {
	{(PropertyRNA *)&rna_Scene_render, (PropertyRNA *)&rna_Scene_gravity,
	-1, "use_gravity", 3, "Global Gravity",
	"Use global gravity for all dynamics",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Physics_update, 0, NULL, NULL,
	0, -1, NULL},
	Scene_use_gravity_get, Scene_use_gravity_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

PointerPropertyRNA rna_Scene_render = {
	{(PropertyRNA *)&rna_Scene_timeline_markers, (PropertyRNA *)&rna_Scene_use_gravity,
	-1, "render", 8650752, "Render Data",
	"",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	Scene_render_get, NULL, NULL, NULL,&RNA_RenderSettings
};

CollectionPropertyRNA rna_Scene_timeline_markers = {
	{(PropertyRNA *)&rna_Scene_use_audio, (PropertyRNA *)&rna_Scene_render,
	-1, "timeline_markers", 0, "Timeline Markers",
	"Markers used in all timelines for the current scene",
	0, "*",
	PROP_COLLECTION, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, &RNA_TimelineMarkers},
	Scene_timeline_markers_begin, Scene_timeline_markers_next, Scene_timeline_markers_end, Scene_timeline_markers_get, NULL, Scene_timeline_markers_lookup_int, Scene_timeline_markers_lookup_string, NULL, &RNA_TimelineMarker
};

BoolPropertyRNA rna_Scene_use_audio = {
	{(PropertyRNA *)&rna_Scene_use_audio_sync, (PropertyRNA *)&rna_Scene_timeline_markers,
	-1, "use_audio", 3, "Audio Muted",
	"Play back of audio from Sequence Editor will be muted",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 67108864, NULL, NULL,
	0, -1, NULL},
	Scene_use_audio_get, Scene_use_audio_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_Scene_use_audio_sync = {
	{(PropertyRNA *)&rna_Scene_use_audio_scrub, (PropertyRNA *)&rna_Scene_use_audio,
	-1, "use_audio_sync", 3, "Audio Sync",
	"Play back and sync with audio clock, dropping frames if frame display is too slow",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 67108864, NULL, NULL,
	0, -1, NULL},
	Scene_use_audio_sync_get, Scene_use_audio_sync_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_Scene_use_audio_scrub = {
	{(PropertyRNA *)&rna_Scene_audio_doppler_speed, (PropertyRNA *)&rna_Scene_use_audio_sync,
	-1, "use_audio_scrub", 3, "Audio Scrubbing",
	"Play audio from Sequence Editor while scrubbing",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 67108864, NULL, NULL,
	0, -1, NULL},
	Scene_use_audio_scrub_get, Scene_use_audio_scrub_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

FloatPropertyRNA rna_Scene_audio_doppler_speed = {
	{(PropertyRNA *)&rna_Scene_audio_doppler_factor, (PropertyRNA *)&rna_Scene_use_audio_scrub,
	-1, "audio_doppler_speed", 8193, "Speed of Sound",
	"Speed of sound for Doppler effect calculation",
	0, "*",
	PROP_FLOAT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Scene_listener_update, 67108864, NULL, NULL,
	offsetof(Scene, audio.speed_of_sound), 4, NULL},
	Scene_audio_doppler_speed_get, Scene_audio_doppler_speed_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0099999998f, FLT_MAX, 0.0099999998f, FLT_MAX, 10.0f, 3, 0.0f, NULL
};

FloatPropertyRNA rna_Scene_audio_doppler_factor = {
	{(PropertyRNA *)&rna_Scene_audio_distance_model, (PropertyRNA *)&rna_Scene_audio_doppler_speed,
	-1, "audio_doppler_factor", 8193, "Doppler Factor",
	"Pitch factor for Doppler effect calculation",
	0, "*",
	PROP_FLOAT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Scene_listener_update, 67108864, NULL, NULL,
	offsetof(Scene, audio.doppler_factor), 4, NULL},
	Scene_audio_doppler_factor_get, Scene_audio_doppler_factor_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, FLT_MAX, 0.0f, FLT_MAX, 10.0f, 3, 0.0f, NULL
};

static EnumPropertyItem rna_Scene_audio_distance_model_items[8] = {
	{0, "NONE", 0, "None", "No distance attenuation"},
	{1, "INVERSE", 0, "Inverse", "Inverse distance model"},
	{2, "INVERSE_CLAMPED", 0, "Inverse Clamped", "Inverse distance model with clamping"},
	{3, "LINEAR", 0, "Linear", "Linear distance model"},
	{4, "LINEAR_CLAMPED", 0, "Linear Clamped", "Linear distance model with clamping"},
	{5, "EXPONENT", 0, "Exponent", "Exponent distance model"},
	{6, "EXPONENT_CLAMPED", 0, "Exponent Clamped", "Exponent distance model with clamping"},
	{0, NULL, 0, NULL, NULL}
};

EnumPropertyRNA rna_Scene_audio_distance_model = {
	{(PropertyRNA *)&rna_Scene_audio_volume, (PropertyRNA *)&rna_Scene_audio_doppler_factor,
	-1, "audio_distance_model", 1, "Distance Model",
	"Distance model for distance attenuation calculation",
	0, "*",
	PROP_ENUM, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Scene_listener_update, 67108864, NULL, NULL,
	0, -1, NULL},
	Scene_audio_distance_model_get, Scene_audio_distance_model_set, NULL, NULL, NULL, NULL, rna_Scene_audio_distance_model_items, 7, 0
};

FloatPropertyRNA rna_Scene_audio_volume = {
	{(PropertyRNA *)&rna_Scene_game_settings, (PropertyRNA *)&rna_Scene_audio_distance_model,
	-1, "audio_volume", 3, "Volume",
	"Audio volume",
	0, "Sound",
	PROP_FLOAT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 67108864, NULL, NULL,
	0, -1, NULL},
	Scene_audio_volume_get, Scene_audio_volume_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 1.0f, 0.0f, 1.0f, 10.0f, 3, 0.0f, NULL
};

PointerPropertyRNA rna_Scene_game_settings = {
	{(PropertyRNA *)&rna_Scene_grease_pencil, (PropertyRNA *)&rna_Scene_audio_volume,
	-1, "game_settings", 8650752, "Game Data",
	"",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	Scene_game_settings_get, NULL, NULL, NULL,&RNA_SceneGameData
};

PointerPropertyRNA rna_Scene_grease_pencil = {
	{(PropertyRNA *)&rna_Scene_orientations, (PropertyRNA *)&rna_Scene_game_settings,
	-1, "grease_pencil", 8388673, "Grease Pencil Data",
	"Grease Pencil datablock",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 67108864, NULL, NULL,
	0, -1, NULL},
	Scene_grease_pencil_get, Scene_grease_pencil_set, NULL, NULL,&RNA_GreasePencil
};

CollectionPropertyRNA rna_Scene_orientations = {
	{(PropertyRNA *)&rna_Scene_active_clip, (PropertyRNA *)&rna_Scene_grease_pencil,
	-1, "orientations", 0, "Transform Orientations",
	"",
	0, "*",
	PROP_COLLECTION, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	Scene_orientations_begin, Scene_orientations_next, Scene_orientations_end, Scene_orientations_get, NULL, Scene_orientations_lookup_int, Scene_orientations_lookup_string, NULL, &RNA_TransformOrientation
};

PointerPropertyRNA rna_Scene_active_clip = {
	{(PropertyRNA *)&rna_Scene_view_settings, (PropertyRNA *)&rna_Scene_orientations,
	-1, "active_clip", 8388673, "Active Movie Clip",
	"Active movie clip used for constraints and viewport drawing",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 252248064, NULL, NULL,
	0, -1, NULL},
	Scene_active_clip_get, Scene_active_clip_set, NULL, NULL,&RNA_MovieClip
};

PointerPropertyRNA rna_Scene_view_settings = {
	{(PropertyRNA *)&rna_Scene_display_settings, (PropertyRNA *)&rna_Scene_active_clip,
	-1, "view_settings", 8388608, "View Settings",
	"Color management settings applied on image before saving",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	Scene_view_settings_get, NULL, NULL, NULL,&RNA_ColorManagedViewSettings
};

PointerPropertyRNA rna_Scene_display_settings = {
	{(PropertyRNA *)&rna_Scene_sequencer_colorspace_settings, (PropertyRNA *)&rna_Scene_view_settings,
	-1, "display_settings", 8388608, "Display Settings",
	"Settings of device saved image would be displayed on",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	Scene_display_settings_get, NULL, NULL, NULL,&RNA_ColorManagedDisplaySettings
};

PointerPropertyRNA rna_Scene_sequencer_colorspace_settings = {
	{NULL, (PropertyRNA *)&rna_Scene_display_settings,
	-1, "sequencer_colorspace_settings", 8388608, "Sequencer Color Space Settings",
	"Settings of color space sequencer is working in",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	Scene_sequencer_colorspace_settings_get, NULL, NULL, NULL,&RNA_ColorManagedSequencerColorspaceSettings
};

PointerPropertyRNA rna_Scene_sequence_editor_create_sequence_editor = {
	{NULL, NULL,
	-1, "sequence_editor", 8388616, "",
	"New sequence editor data or NULL",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	NULL, NULL, NULL, NULL,&RNA_SequenceEditor
};

FunctionRNA rna_Scene_sequence_editor_create_func = {
	{(FunctionRNA *)&rna_Scene_sequence_editor_clear_func, NULL,
	NULL,
	{(PropertyRNA *)&rna_Scene_sequence_editor_create_sequence_editor, (PropertyRNA *)&rna_Scene_sequence_editor_create_sequence_editor}},
	"sequence_editor_create", 0, "Ensure sequence editor is valid in this scene",
	Scene_sequence_editor_create_call,
	(PropertyRNA *)&rna_Scene_sequence_editor_create_sequence_editor
};

FunctionRNA rna_Scene_sequence_editor_clear_func = {
	{(FunctionRNA *)&rna_Scene_statistics_func, (FunctionRNA *)&rna_Scene_sequence_editor_create_func,
	NULL,
	{NULL, NULL}},
	"sequence_editor_clear", 0, "Clear sequence editor in this scene",
	Scene_sequence_editor_clear_call,
	NULL
};

StringPropertyRNA rna_Scene_statistics_statistics = {
	{NULL, NULL,
	-1, "statistics", 262153, "Statistics",
	"",
	0, "*",
	PROP_STRING, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	NULL, NULL, NULL, NULL, NULL, NULL, 0, ""
};

FunctionRNA rna_Scene_statistics_func = {
	{(FunctionRNA *)&rna_Scene_frame_set_func, (FunctionRNA *)&rna_Scene_sequence_editor_clear_func,
	NULL,
	{(PropertyRNA *)&rna_Scene_statistics_statistics, (PropertyRNA *)&rna_Scene_statistics_statistics}},
	"statistics", 0, "statistics",
	Scene_statistics_call,
	(PropertyRNA *)&rna_Scene_statistics_statistics
};

IntPropertyRNA rna_Scene_frame_set_frame = {
	{(PropertyRNA *)&rna_Scene_frame_set_subframe, NULL,
	-1, "frame", 7, "",
	"Frame number to set",
	0, "*",
	PROP_INT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL,
	-300000, 300000, -300000, 300000, 1, 0, NULL
};

FloatPropertyRNA rna_Scene_frame_set_subframe = {
	{NULL, (PropertyRNA *)&rna_Scene_frame_set_frame,
	-1, "subframe", 3, "",
	"Sub-frame time, between 0.0 and 1.0",
	0, "*",
	PROP_FLOAT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 1.0f, 0.0f, 1.0f, 1.0f, 3, 0.0f, NULL
};

FunctionRNA rna_Scene_frame_set_func = {
	{(FunctionRNA *)&rna_Scene_update_func, (FunctionRNA *)&rna_Scene_statistics_func,
	NULL,
	{(PropertyRNA *)&rna_Scene_frame_set_frame, (PropertyRNA *)&rna_Scene_frame_set_subframe}},
	"frame_set", 0, "Set scene frame updating all objects immediately",
	Scene_frame_set_call,
	NULL
};

FunctionRNA rna_Scene_update_func = {
	{(FunctionRNA *)&rna_Scene_ray_cast_func, (FunctionRNA *)&rna_Scene_frame_set_func,
	NULL,
	{NULL, NULL}},
	"update", 0, "Update data tagged to be updated from previous access to data or operators",
	Scene_update_call,
	NULL
};

static float rna_Scene_ray_cast_start_default[3] = {
	0.0f,
	0.0f,
	0.0f
};

FloatPropertyRNA rna_Scene_ray_cast_start = {
	{(PropertyRNA *)&rna_Scene_ray_cast_end, NULL,
	-1, "start", 7, "",
	"",
	0, "*",
	PROP_FLOAT, PROP_XYZ | PROP_UNIT_NONE, NULL, 1, {3, 0, 0}, 3,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, -10000.0f, 10000.0f, -FLT_MAX, FLT_MAX, 1.0f, 3, 0.0f, rna_Scene_ray_cast_start_default
};

static float rna_Scene_ray_cast_end_default[3] = {
	0.0f,
	0.0f,
	0.0f
};

FloatPropertyRNA rna_Scene_ray_cast_end = {
	{(PropertyRNA *)&rna_Scene_ray_cast_result, (PropertyRNA *)&rna_Scene_ray_cast_start,
	-1, "end", 7, "",
	"",
	0, "*",
	PROP_FLOAT, PROP_XYZ | PROP_UNIT_NONE, NULL, 1, {3, 0, 0}, 3,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, -10000.0f, 10000.0f, -FLT_MAX, FLT_MAX, 1.0f, 3, 0.0f, rna_Scene_ray_cast_end_default
};

BoolPropertyRNA rna_Scene_ray_cast_result = {
	{(PropertyRNA *)&rna_Scene_ray_cast_object, (PropertyRNA *)&rna_Scene_ray_cast_end,
	-1, "result", 11, "",
	"",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

PointerPropertyRNA rna_Scene_ray_cast_object = {
	{(PropertyRNA *)&rna_Scene_ray_cast_matrix, (PropertyRNA *)&rna_Scene_ray_cast_result,
	-1, "object", 8388616, "",
	"Ray cast object",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	NULL, NULL, NULL, NULL,&RNA_Object
};

static float rna_Scene_ray_cast_matrix_default[16] = {
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

FloatPropertyRNA rna_Scene_ray_cast_matrix = {
	{(PropertyRNA *)&rna_Scene_ray_cast_location, (PropertyRNA *)&rna_Scene_ray_cast_object,
	-1, "matrix", 11, "",
	"Matrix",
	0, "*",
	PROP_FLOAT, PROP_MATRIX | PROP_UNIT_NONE, NULL, 2, {4, 4, 0}, 16,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 0.0f, -FLT_MAX, FLT_MAX, 1.0f, 3, 0.0f, rna_Scene_ray_cast_matrix_default
};

static float rna_Scene_ray_cast_location_default[3] = {
	0.0f,
	0.0f,
	0.0f
};

FloatPropertyRNA rna_Scene_ray_cast_location = {
	{(PropertyRNA *)&rna_Scene_ray_cast_normal, (PropertyRNA *)&rna_Scene_ray_cast_matrix,
	-1, "location", 8388619, "Location",
	"The hit location of this ray cast",
	0, "*",
	PROP_FLOAT, PROP_XYZ | PROP_UNIT_NONE, NULL, 1, {3, 0, 0}, 3,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, -10000.0f, 10000.0f, -FLT_MAX, FLT_MAX, 1.0f, 3, 0.0f, rna_Scene_ray_cast_location_default
};

static float rna_Scene_ray_cast_normal_default[3] = {
	0.0f,
	0.0f,
	0.0f
};

FloatPropertyRNA rna_Scene_ray_cast_normal = {
	{NULL, (PropertyRNA *)&rna_Scene_ray_cast_location,
	-1, "normal", 8388619, "Normal",
	"The face normal at the ray cast hit location",
	0, "*",
	PROP_FLOAT, PROP_XYZ | PROP_UNIT_NONE, NULL, 1, {3, 0, 0}, 3,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, -10000.0f, 10000.0f, -FLT_MAX, FLT_MAX, 1.0f, 3, 0.0f, rna_Scene_ray_cast_normal_default
};

FunctionRNA rna_Scene_ray_cast_func = {
	{NULL, (FunctionRNA *)&rna_Scene_update_func,
	NULL,
	{(PropertyRNA *)&rna_Scene_ray_cast_start, (PropertyRNA *)&rna_Scene_ray_cast_normal}},
	"ray_cast", 0, "Cast a ray onto in object space",
	Scene_ray_cast_call,
	NULL
};

StructRNA RNA_Scene = {
	{(ContainerRNA *)&RNA_SceneBases, (ContainerRNA *)&RNA_RigidBodyConstraint,
	NULL,
	{(PropertyRNA *)&rna_Scene_camera, (PropertyRNA *)&rna_Scene_sequencer_colorspace_settings}},
	"Scene", NULL, NULL, 5, "Scene",
	"Scene data block, consisting in objects and defining time and render related settings",
	"*", 156,
	(PropertyRNA *)&rna_ID_name, (PropertyRNA *)&rna_ID_rna_properties,
	&RNA_ID,
	NULL,
	rna_ID_refine,
	NULL,
	NULL,
	NULL,
	NULL,
	rna_ID_idprops,
	{(FunctionRNA *)&rna_Scene_sequence_editor_create_func, (FunctionRNA *)&rna_Scene_ray_cast_func}
};

/* Scene Bases */
CollectionPropertyRNA rna_SceneBases_rna_properties = {
	{(PropertyRNA *)&rna_SceneBases_rna_type, NULL,
	-1, "rna_properties", 128, "Properties",
	"RNA property collection",
	0, "*",
	PROP_COLLECTION, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	SceneBases_rna_properties_begin, SceneBases_rna_properties_next, SceneBases_rna_properties_end, SceneBases_rna_properties_get, NULL, NULL, SceneBases_rna_properties_lookup_string, NULL, &RNA_Property
};

PointerPropertyRNA rna_SceneBases_rna_type = {
	{(PropertyRNA *)&rna_SceneBases_active, (PropertyRNA *)&rna_SceneBases_rna_properties,
	-1, "rna_type", 8912896, "RNA",
	"RNA type definition",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	SceneBases_rna_type_get, NULL, NULL, NULL,&RNA_Struct
};

PointerPropertyRNA rna_SceneBases_active = {
	{NULL, (PropertyRNA *)&rna_SceneBases_rna_type,
	-1, "active", 8388609, "Active Base",
	"Active object base in the scene",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 67567616, NULL, NULL,
	0, -1, NULL},
	SceneBases_active_get, SceneBases_active_set, NULL, NULL,&RNA_ObjectBase
};

StructRNA RNA_SceneBases = {
	{(ContainerRNA *)&RNA_SceneObjects, (ContainerRNA *)&RNA_Scene,
	NULL,
	{(PropertyRNA *)&rna_SceneBases_rna_properties, (PropertyRNA *)&rna_SceneBases_active}},
	"SceneBases", NULL, NULL, 4, "Scene Bases",
	"Collection of scene bases",
	"*", 17,
	NULL, (PropertyRNA *)&rna_SceneBases_rna_properties,
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

/* Scene Objects */
CollectionPropertyRNA rna_SceneObjects_rna_properties = {
	{(PropertyRNA *)&rna_SceneObjects_rna_type, NULL,
	-1, "rna_properties", 128, "Properties",
	"RNA property collection",
	0, "*",
	PROP_COLLECTION, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	SceneObjects_rna_properties_begin, SceneObjects_rna_properties_next, SceneObjects_rna_properties_end, SceneObjects_rna_properties_get, NULL, NULL, SceneObjects_rna_properties_lookup_string, NULL, &RNA_Property
};

PointerPropertyRNA rna_SceneObjects_rna_type = {
	{(PropertyRNA *)&rna_SceneObjects_active, (PropertyRNA *)&rna_SceneObjects_rna_properties,
	-1, "rna_type", 8912896, "RNA",
	"RNA type definition",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	SceneObjects_rna_type_get, NULL, NULL, NULL,&RNA_Struct
};

PointerPropertyRNA rna_SceneObjects_active = {
	{NULL, (PropertyRNA *)&rna_SceneObjects_rna_type,
	-1, "active", 41943041, "Active Object",
	"Active object for this scene",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 67567616, NULL, NULL,
	0, -1, NULL},
	SceneObjects_active_get, SceneObjects_active_set, NULL, NULL,&RNA_Object
};

PointerPropertyRNA rna_SceneObjects_link_object = {
	{(PropertyRNA *)&rna_SceneObjects_link_base, NULL,
	-1, "object", 8650756, "",
	"Object to add to scene",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	NULL, NULL, NULL, NULL,&RNA_Object
};

PointerPropertyRNA rna_SceneObjects_link_base = {
	{NULL, (PropertyRNA *)&rna_SceneObjects_link_object,
	-1, "base", 8388616, "",
	"The newly created base",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	NULL, NULL, NULL, NULL,&RNA_ObjectBase
};

FunctionRNA rna_SceneObjects_link_func = {
	{(FunctionRNA *)&rna_SceneObjects_unlink_func, NULL,
	NULL,
	{(PropertyRNA *)&rna_SceneObjects_link_object, (PropertyRNA *)&rna_SceneObjects_link_base}},
	"link", 24, "Link object to scene, run scene.update() after",
	SceneObjects_link_call,
	(PropertyRNA *)&rna_SceneObjects_link_base
};

PointerPropertyRNA rna_SceneObjects_unlink_object = {
	{NULL, NULL,
	-1, "object", 8650756, "",
	"Object to remove from scene",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	NULL, NULL, NULL, NULL,&RNA_Object
};

FunctionRNA rna_SceneObjects_unlink_func = {
	{NULL, (FunctionRNA *)&rna_SceneObjects_link_func,
	NULL,
	{(PropertyRNA *)&rna_SceneObjects_unlink_object, (PropertyRNA *)&rna_SceneObjects_unlink_object}},
	"unlink", 16, "Unlink object from scene",
	SceneObjects_unlink_call,
	NULL
};

StructRNA RNA_SceneObjects = {
	{(ContainerRNA *)&RNA_KeyingSets, (ContainerRNA *)&RNA_SceneBases,
	NULL,
	{(PropertyRNA *)&rna_SceneObjects_rna_properties, (PropertyRNA *)&rna_SceneObjects_active}},
	"SceneObjects", NULL, NULL, 4, "Scene Objects",
	"Collection of scene objects",
	"*", 17,
	NULL, (PropertyRNA *)&rna_SceneObjects_rna_properties,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	{(FunctionRNA *)&rna_SceneObjects_link_func, (FunctionRNA *)&rna_SceneObjects_unlink_func}
};

/* Keying Sets */
CollectionPropertyRNA rna_KeyingSets_rna_properties = {
	{(PropertyRNA *)&rna_KeyingSets_rna_type, NULL,
	-1, "rna_properties", 128, "Properties",
	"RNA property collection",
	0, "*",
	PROP_COLLECTION, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	KeyingSets_rna_properties_begin, KeyingSets_rna_properties_next, KeyingSets_rna_properties_end, KeyingSets_rna_properties_get, NULL, NULL, KeyingSets_rna_properties_lookup_string, NULL, &RNA_Property
};

PointerPropertyRNA rna_KeyingSets_rna_type = {
	{(PropertyRNA *)&rna_KeyingSets_active, (PropertyRNA *)&rna_KeyingSets_rna_properties,
	-1, "rna_type", 8912896, "RNA",
	"RNA type definition",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	KeyingSets_rna_type_get, NULL, NULL, NULL,&RNA_Struct
};

PointerPropertyRNA rna_KeyingSets_active = {
	{(PropertyRNA *)&rna_KeyingSets_active_index, (PropertyRNA *)&rna_KeyingSets_rna_type,
	-1, "active", 8388609, "Active Keying Set",
	"Active Keying Set used to insert/delete keyframes",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 68026368, NULL, NULL,
	0, -1, NULL},
	KeyingSets_active_get, KeyingSets_active_set, NULL, NULL,&RNA_KeyingSet
};

IntPropertyRNA rna_KeyingSets_active_index = {
	{NULL, (PropertyRNA *)&rna_KeyingSets_active,
	-1, "active_index", 3, "Active Keying Set Index",
	"Current Keying Set index (negative for \'builtin\' and positive for \'absolute\')",
	0, "*",
	PROP_INT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 68026368, NULL, NULL,
	0, -1, NULL},
	KeyingSets_active_index_get, KeyingSets_active_index_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL,
	-10000, 10000, INT_MIN, INT_MAX, 1, 0, NULL
};

StringPropertyRNA rna_KeyingSets_new_idname = {
	{(PropertyRNA *)&rna_KeyingSets_new_name, NULL,
	-1, "idname", 262145, "IDName",
	"Internal identifier of Keying Set",
	0, "*",
	PROP_STRING, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	NULL, NULL, NULL, NULL, NULL, NULL, 64, "KeyingSet"
};

StringPropertyRNA rna_KeyingSets_new_name = {
	{(PropertyRNA *)&rna_KeyingSets_new_keyingset, (PropertyRNA *)&rna_KeyingSets_new_idname,
	-1, "name", 262145, "Name",
	"User visible name of Keying Set",
	0, "*",
	PROP_STRING, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	NULL, NULL, NULL, NULL, NULL, NULL, 64, "KeyingSet"
};

PointerPropertyRNA rna_KeyingSets_new_keyingset = {
	{NULL, (PropertyRNA *)&rna_KeyingSets_new_name,
	-1, "keyingset", 8388616, "",
	"Newly created Keying Set",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	NULL, NULL, NULL, NULL,&RNA_KeyingSet
};

FunctionRNA rna_KeyingSets_new_func = {
	{NULL, NULL,
	NULL,
	{(PropertyRNA *)&rna_KeyingSets_new_idname, (PropertyRNA *)&rna_KeyingSets_new_keyingset}},
	"new", 16, "Add a new Keying Set to Scene",
	KeyingSets_new_call,
	(PropertyRNA *)&rna_KeyingSets_new_keyingset
};

StructRNA RNA_KeyingSets = {
	{(ContainerRNA *)&RNA_KeyingSetsAll, (ContainerRNA *)&RNA_SceneObjects,
	NULL,
	{(PropertyRNA *)&rna_KeyingSets_rna_properties, (PropertyRNA *)&rna_KeyingSets_active_index}},
	"KeyingSets", NULL, NULL, 4, "Keying Sets",
	"Scene keying sets",
	"*", 17,
	NULL, (PropertyRNA *)&rna_KeyingSets_rna_properties,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	{(FunctionRNA *)&rna_KeyingSets_new_func, (FunctionRNA *)&rna_KeyingSets_new_func}
};

/* Keying Sets All */
CollectionPropertyRNA rna_KeyingSetsAll_rna_properties = {
	{(PropertyRNA *)&rna_KeyingSetsAll_rna_type, NULL,
	-1, "rna_properties", 128, "Properties",
	"RNA property collection",
	0, "*",
	PROP_COLLECTION, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	KeyingSetsAll_rna_properties_begin, KeyingSetsAll_rna_properties_next, KeyingSetsAll_rna_properties_end, KeyingSetsAll_rna_properties_get, NULL, NULL, KeyingSetsAll_rna_properties_lookup_string, NULL, &RNA_Property
};

PointerPropertyRNA rna_KeyingSetsAll_rna_type = {
	{(PropertyRNA *)&rna_KeyingSetsAll_active, (PropertyRNA *)&rna_KeyingSetsAll_rna_properties,
	-1, "rna_type", 8912896, "RNA",
	"RNA type definition",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	KeyingSetsAll_rna_type_get, NULL, NULL, NULL,&RNA_Struct
};

PointerPropertyRNA rna_KeyingSetsAll_active = {
	{(PropertyRNA *)&rna_KeyingSetsAll_active_index, (PropertyRNA *)&rna_KeyingSetsAll_rna_type,
	-1, "active", 8388609, "Active Keying Set",
	"Active Keying Set used to insert/delete keyframes",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 68026368, NULL, NULL,
	0, -1, NULL},
	KeyingSetsAll_active_get, KeyingSetsAll_active_set, NULL, NULL,&RNA_KeyingSet
};

IntPropertyRNA rna_KeyingSetsAll_active_index = {
	{NULL, (PropertyRNA *)&rna_KeyingSetsAll_active,
	-1, "active_index", 3, "Active Keying Set Index",
	"Current Keying Set index (negative for \'builtin\' and positive for \'absolute\')",
	0, "*",
	PROP_INT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 68026368, NULL, NULL,
	0, -1, NULL},
	KeyingSetsAll_active_index_get, KeyingSetsAll_active_index_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL,
	-10000, 10000, INT_MIN, INT_MAX, 1, 0, NULL
};

StructRNA RNA_KeyingSetsAll = {
	{(ContainerRNA *)&RNA_TimelineMarkers, (ContainerRNA *)&RNA_KeyingSets,
	NULL,
	{(PropertyRNA *)&rna_KeyingSetsAll_rna_properties, (PropertyRNA *)&rna_KeyingSetsAll_active_index}},
	"KeyingSetsAll", NULL, NULL, 4, "Keying Sets All",
	"All available keying sets",
	"*", 17,
	NULL, (PropertyRNA *)&rna_KeyingSetsAll_rna_properties,
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

/* Timeline Markers */
CollectionPropertyRNA rna_TimelineMarkers_rna_properties = {
	{(PropertyRNA *)&rna_TimelineMarkers_rna_type, NULL,
	-1, "rna_properties", 128, "Properties",
	"RNA property collection",
	0, "*",
	PROP_COLLECTION, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	TimelineMarkers_rna_properties_begin, TimelineMarkers_rna_properties_next, TimelineMarkers_rna_properties_end, TimelineMarkers_rna_properties_get, NULL, NULL, TimelineMarkers_rna_properties_lookup_string, NULL, &RNA_Property
};

PointerPropertyRNA rna_TimelineMarkers_rna_type = {
	{NULL, (PropertyRNA *)&rna_TimelineMarkers_rna_properties,
	-1, "rna_type", 8912896, "RNA",
	"RNA type definition",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	TimelineMarkers_rna_type_get, NULL, NULL, NULL,&RNA_Struct
};

StringPropertyRNA rna_TimelineMarkers_new_name = {
	{(PropertyRNA *)&rna_TimelineMarkers_new_frame, NULL,
	-1, "name", 262149, "",
	"New name for the marker (not unique)",
	0, "*",
	PROP_STRING, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	NULL, NULL, NULL, NULL, NULL, NULL, 0, "Marker"
};

IntPropertyRNA rna_TimelineMarkers_new_frame = {
	{(PropertyRNA *)&rna_TimelineMarkers_new_marker, (PropertyRNA *)&rna_TimelineMarkers_new_name,
	-1, "frame", 3, "",
	"The frame for the new marker",
	0, "*",
	PROP_INT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL,
	-300000, 300000, -300000, 300000, 1, 1, NULL
};

PointerPropertyRNA rna_TimelineMarkers_new_marker = {
	{NULL, (PropertyRNA *)&rna_TimelineMarkers_new_frame,
	-1, "marker", 8388616, "",
	"Newly created timeline marker",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	NULL, NULL, NULL, NULL,&RNA_TimelineMarker
};

FunctionRNA rna_TimelineMarkers_new_func = {
	{(FunctionRNA *)&rna_TimelineMarkers_remove_func, NULL,
	NULL,
	{(PropertyRNA *)&rna_TimelineMarkers_new_name, (PropertyRNA *)&rna_TimelineMarkers_new_marker}},
	"new", 0, "Add a keyframe to the curve",
	TimelineMarkers_new_call,
	(PropertyRNA *)&rna_TimelineMarkers_new_marker
};

PointerPropertyRNA rna_TimelineMarkers_remove_marker = {
	{NULL, NULL,
	-1, "marker", 264196, "",
	"Timeline marker to remove",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	NULL, NULL, NULL, NULL,&RNA_TimelineMarker
};

FunctionRNA rna_TimelineMarkers_remove_func = {
	{(FunctionRNA *)&rna_TimelineMarkers_clear_func, (FunctionRNA *)&rna_TimelineMarkers_new_func,
	NULL,
	{(PropertyRNA *)&rna_TimelineMarkers_remove_marker, (PropertyRNA *)&rna_TimelineMarkers_remove_marker}},
	"remove", 16, "Remove a timeline marker",
	TimelineMarkers_remove_call,
	NULL
};

FunctionRNA rna_TimelineMarkers_clear_func = {
	{NULL, (FunctionRNA *)&rna_TimelineMarkers_remove_func,
	NULL,
	{NULL, NULL}},
	"clear", 0, "Remove all timeline markers",
	TimelineMarkers_clear_call,
	NULL
};

StructRNA RNA_TimelineMarkers = {
	{(ContainerRNA *)&RNA_ToolSettings, (ContainerRNA *)&RNA_KeyingSetsAll,
	NULL,
	{(PropertyRNA *)&rna_TimelineMarkers_rna_properties, (PropertyRNA *)&rna_TimelineMarkers_rna_type}},
	"TimelineMarkers", NULL, NULL, 4, "Timeline Markers",
	"Collection of timeline markers",
	"*", 17,
	NULL, (PropertyRNA *)&rna_TimelineMarkers_rna_properties,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	{(FunctionRNA *)&rna_TimelineMarkers_new_func, (FunctionRNA *)&rna_TimelineMarkers_clear_func}
};

/* Tool Settings */
CollectionPropertyRNA rna_ToolSettings_rna_properties = {
	{(PropertyRNA *)&rna_ToolSettings_rna_type, NULL,
	-1, "rna_properties", 128, "Properties",
	"RNA property collection",
	0, "*",
	PROP_COLLECTION, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	ToolSettings_rna_properties_begin, ToolSettings_rna_properties_next, ToolSettings_rna_properties_end, ToolSettings_rna_properties_get, NULL, NULL, ToolSettings_rna_properties_lookup_string, NULL, &RNA_Property
};

PointerPropertyRNA rna_ToolSettings_rna_type = {
	{(PropertyRNA *)&rna_ToolSettings_sculpt, (PropertyRNA *)&rna_ToolSettings_rna_properties,
	-1, "rna_type", 8912896, "RNA",
	"RNA type definition",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	ToolSettings_rna_type_get, NULL, NULL, NULL,&RNA_Struct
};

PointerPropertyRNA rna_ToolSettings_sculpt = {
	{(PropertyRNA *)&rna_ToolSettings_use_auto_normalize, (PropertyRNA *)&rna_ToolSettings_rna_type,
	-1, "sculpt", 8388608, "Sculpt",
	"",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	ToolSettings_sculpt_get, NULL, NULL, NULL,&RNA_Sculpt
};

BoolPropertyRNA rna_ToolSettings_use_auto_normalize = {
	{(PropertyRNA *)&rna_ToolSettings_use_multipaint, (PropertyRNA *)&rna_ToolSettings_sculpt,
	-1, "use_auto_normalize", 1, "WPaint Auto-Normalize",
	"Ensure all bone-deforming vertex groups add up to 1.0 while weight painting",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Scene_update_active_object_data, 0, NULL, NULL,
	0, -1, NULL},
	ToolSettings_use_auto_normalize_get, ToolSettings_use_auto_normalize_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_ToolSettings_use_multipaint = {
	{(PropertyRNA *)&rna_ToolSettings_vertex_group_user, (PropertyRNA *)&rna_ToolSettings_use_auto_normalize,
	-1, "use_multipaint", 1, "WPaint Multi-Paint",
	"Paint across all selected bones while weight painting",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Scene_update_active_object_data, 0, NULL, NULL,
	0, -1, NULL},
	ToolSettings_use_multipaint_get, ToolSettings_use_multipaint_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

static EnumPropertyItem rna_ToolSettings_vertex_group_user_items[4] = {
	{0, "NONE", 0, "None", ""},
	{1, "ACTIVE", 0, "Active", "Show vertices with no weights in the active group"},
	{2, "ALL", 0, "All", "Show vertices with no weights in any group"},
	{0, NULL, 0, NULL, NULL}
};

EnumPropertyRNA rna_ToolSettings_vertex_group_user = {
	{(PropertyRNA *)&rna_ToolSettings_vertex_group_subset, (PropertyRNA *)&rna_ToolSettings_use_multipaint,
	-1, "vertex_group_user", 1, "Mask Non-Group Vertices",
	"Display unweighted vertices (multi-paint overrides)",
	0, "*",
	PROP_ENUM, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Scene_update_active_object_data, 0, NULL, NULL,
	0, -1, NULL},
	ToolSettings_vertex_group_user_get, ToolSettings_vertex_group_user_set, NULL, NULL, NULL, NULL, rna_ToolSettings_vertex_group_user_items, 3, 0
};

static EnumPropertyItem rna_ToolSettings_vertex_group_subset_items[4] = {
	{0, "ALL", 0, "All", "All Vertex Groups"},
	{3, "BONE_DEFORM", 0, "Deform", "Vertex Groups assigned to Deform Bones"},
	{4, "OTHER_DEFORM", 0, "Other", "Vertex Groups assigned to non Deform Bones"},
	{0, NULL, 0, NULL, NULL}
};

EnumPropertyRNA rna_ToolSettings_vertex_group_subset = {
	{(PropertyRNA *)&rna_ToolSettings_vertex_paint, (PropertyRNA *)&rna_ToolSettings_vertex_group_user,
	-1, "vertex_group_subset", 1, "Subset",
	"Filter Vertex groups for Display",
	0, "*",
	PROP_ENUM, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Scene_update_active_object_data, 0, NULL, NULL,
	0, -1, NULL},
	ToolSettings_vertex_group_subset_get, ToolSettings_vertex_group_subset_set, NULL, NULL, NULL, NULL, rna_ToolSettings_vertex_group_subset_items, 3, 0
};

PointerPropertyRNA rna_ToolSettings_vertex_paint = {
	{(PropertyRNA *)&rna_ToolSettings_weight_paint, (PropertyRNA *)&rna_ToolSettings_vertex_group_subset,
	-1, "vertex_paint", 8388608, "Vertex Paint",
	"",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	ToolSettings_vertex_paint_get, NULL, NULL, NULL,&RNA_VertexPaint
};

PointerPropertyRNA rna_ToolSettings_weight_paint = {
	{(PropertyRNA *)&rna_ToolSettings_image_paint, (PropertyRNA *)&rna_ToolSettings_vertex_paint,
	-1, "weight_paint", 8388608, "Weight Paint",
	"",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	ToolSettings_weight_paint_get, NULL, NULL, NULL,&RNA_VertexPaint
};

PointerPropertyRNA rna_ToolSettings_image_paint = {
	{(PropertyRNA *)&rna_ToolSettings_uv_sculpt, (PropertyRNA *)&rna_ToolSettings_weight_paint,
	-1, "image_paint", 8388608, "Image Paint",
	"",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	ToolSettings_image_paint_get, NULL, NULL, NULL,&RNA_ImagePaint
};

PointerPropertyRNA rna_ToolSettings_uv_sculpt = {
	{(PropertyRNA *)&rna_ToolSettings_particle_edit, (PropertyRNA *)&rna_ToolSettings_image_paint,
	-1, "uv_sculpt", 8388608, "UV Sculpt",
	"",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	ToolSettings_uv_sculpt_get, NULL, NULL, NULL,&RNA_UvSculpt
};

PointerPropertyRNA rna_ToolSettings_particle_edit = {
	{(PropertyRNA *)&rna_ToolSettings_use_uv_sculpt, (PropertyRNA *)&rna_ToolSettings_uv_sculpt,
	-1, "particle_edit", 8388608, "Particle Edit",
	"",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	ToolSettings_particle_edit_get, NULL, NULL, NULL,&RNA_ParticleEdit
};

BoolPropertyRNA rna_ToolSettings_use_uv_sculpt = {
	{(PropertyRNA *)&rna_ToolSettings_uv_sculpt_lock_borders, (PropertyRNA *)&rna_ToolSettings_particle_edit,
	-1, "use_uv_sculpt", 1, "UV Sculpt",
	"Enable brush for UV sculpting",
	134, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_SpaceImageEditor_uv_sculpt_update, 251920384, NULL, NULL,
	0, -1, NULL},
	ToolSettings_use_uv_sculpt_get, ToolSettings_use_uv_sculpt_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_ToolSettings_uv_sculpt_lock_borders = {
	{(PropertyRNA *)&rna_ToolSettings_uv_sculpt_all_islands, (PropertyRNA *)&rna_ToolSettings_use_uv_sculpt,
	-1, "uv_sculpt_lock_borders", 1, "Lock Borders",
	"Disable editing of boundary edges",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	ToolSettings_uv_sculpt_lock_borders_get, ToolSettings_uv_sculpt_lock_borders_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_ToolSettings_uv_sculpt_all_islands = {
	{(PropertyRNA *)&rna_ToolSettings_uv_sculpt_tool, (PropertyRNA *)&rna_ToolSettings_uv_sculpt_lock_borders,
	-1, "uv_sculpt_all_islands", 1, "Sculpt All Islands",
	"Brush operates on all islands",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	ToolSettings_uv_sculpt_all_islands_get, ToolSettings_uv_sculpt_all_islands_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

static EnumPropertyItem rna_ToolSettings_uv_sculpt_tool_items[4] = {
	{1, "PINCH", 0, "Pinch", "Pinch UVs"},
	{2, "RELAX", 0, "Relax", "Relax UVs"},
	{3, "GRAB", 0, "Grab", "Grab UVs"},
	{0, NULL, 0, NULL, NULL}
};

EnumPropertyRNA rna_ToolSettings_uv_sculpt_tool = {
	{(PropertyRNA *)&rna_ToolSettings_uv_relax_method, (PropertyRNA *)&rna_ToolSettings_uv_sculpt_all_islands,
	-1, "uv_sculpt_tool", 1, "UV Sculpt Tools",
	"Select Tools for the UV sculpt brushes",
	0, "*",
	PROP_ENUM, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	ToolSettings_uv_sculpt_tool_get, ToolSettings_uv_sculpt_tool_set, NULL, NULL, NULL, NULL, rna_ToolSettings_uv_sculpt_tool_items, 3, 1
};

static EnumPropertyItem rna_ToolSettings_uv_relax_method_items[3] = {
	{1, "LAPLACIAN", 0, "Laplacian", "Use Laplacian method for relaxation"},
	{2, "HC", 0, "HC", "Use HC method for relaxation"},
	{0, NULL, 0, NULL, NULL}
};

EnumPropertyRNA rna_ToolSettings_uv_relax_method = {
	{(PropertyRNA *)&rna_ToolSettings_proportional_edit, (PropertyRNA *)&rna_ToolSettings_uv_sculpt_tool,
	-1, "uv_relax_method", 1, "Relaxation Method",
	"Algorithm used for UV relaxation",
	0, "*",
	PROP_ENUM, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	ToolSettings_uv_relax_method_get, ToolSettings_uv_relax_method_set, NULL, NULL, NULL, NULL, rna_ToolSettings_uv_relax_method_items, 2, 1
};

static EnumPropertyItem rna_ToolSettings_proportional_edit_items[5] = {
	{0, "DISABLED", 565, "Disable", "Proportional Editing disabled"},
	{1, "ENABLED", 566, "Enable", "Proportional Editing enabled"},
	{3, "PROJECTED", 566, "Projected (2D)", "Proportional Editing using screen space locations"},
	{2, "CONNECTED", 567, "Connected", "Proportional Editing using connected geometry only"},
	{0, NULL, 0, NULL, NULL}
};

EnumPropertyRNA rna_ToolSettings_proportional_edit = {
	{(PropertyRNA *)&rna_ToolSettings_use_proportional_edit_objects, (PropertyRNA *)&rna_ToolSettings_uv_relax_method,
	-1, "proportional_edit", 1, "Proportional Editing",
	"Proportional Editing mode, allows transforms with distance fall-off",
	0, "*",
	PROP_ENUM, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 68091904, NULL, NULL,
	0, -1, NULL},
	ToolSettings_proportional_edit_get, ToolSettings_proportional_edit_set, NULL, NULL, NULL, NULL, rna_ToolSettings_proportional_edit_items, 4, 0
};

BoolPropertyRNA rna_ToolSettings_use_proportional_edit_objects = {
	{(PropertyRNA *)&rna_ToolSettings_use_proportional_edit_mask, (PropertyRNA *)&rna_ToolSettings_proportional_edit,
	-1, "use_proportional_edit_objects", 12289, "Proportional Editing Objects",
	"Proportional editing object mode",
	565, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 68091904, NULL, NULL,
	offsetof(ToolSettings, proportional_objects), 2, NULL},
	ToolSettings_use_proportional_edit_objects_get, ToolSettings_use_proportional_edit_objects_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_ToolSettings_use_proportional_edit_mask = {
	{(PropertyRNA *)&rna_ToolSettings_proportional_edit_falloff, (PropertyRNA *)&rna_ToolSettings_use_proportional_edit_objects,
	-1, "use_proportional_edit_mask", 12289, "Proportional Editing Objects",
	"Proportional editing mask mode",
	565, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 68091904, NULL, NULL,
	offsetof(ToolSettings, proportional_mask), 2, NULL},
	ToolSettings_use_proportional_edit_mask_get, ToolSettings_use_proportional_edit_mask_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

static EnumPropertyItem rna_ToolSettings_proportional_edit_falloff_items[8] = {
	{0, "SMOOTH", 558, "Smooth", "Smooth falloff"},
	{1, "SPHERE", 559, "Sphere", "Spherical falloff"},
	{2, "ROOT", 560, "Root", "Root falloff"},
	{3, "SHARP", 561, "Sharp", "Sharp falloff"},
	{4, "LINEAR", 562, "Linear", "Linear falloff"},
	{5, "CONSTANT", 563, "Constant", "Constant falloff"},
	{6, "RANDOM", 564, "Random", "Random falloff"},
	{0, NULL, 0, NULL, NULL}
};

EnumPropertyRNA rna_ToolSettings_proportional_edit_falloff = {
	{(PropertyRNA *)&rna_ToolSettings_proportional_size, (PropertyRNA *)&rna_ToolSettings_use_proportional_edit_mask,
	-1, "proportional_edit_falloff", 1, "Proportional Editing Falloff",
	"Falloff type for proportional editing mode",
	0, "*",
	PROP_ENUM, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 68091904, NULL, NULL,
	0, -1, NULL},
	ToolSettings_proportional_edit_falloff_get, ToolSettings_proportional_edit_falloff_set, NULL, NULL, NULL, NULL, rna_ToolSettings_proportional_edit_falloff_items, 7, 0
};

FloatPropertyRNA rna_ToolSettings_proportional_size = {
	{(PropertyRNA *)&rna_ToolSettings_normal_size, (PropertyRNA *)&rna_ToolSettings_proportional_edit_falloff,
	-1, "proportional_size", 8193, "Proportional Size",
	"Display size for proportional editing circle",
	0, "*",
	PROP_FLOAT, PROP_DISTANCE | PROP_UNIT_LENGTH, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	offsetof(ToolSettings, proportional_size), 4, NULL},
	ToolSettings_proportional_size_get, ToolSettings_proportional_size_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0000100000f, 5000.0f, 0.0000100000f, 5000.0f, 10.0f, 3, 0.0f, NULL
};

FloatPropertyRNA rna_ToolSettings_normal_size = {
	{(PropertyRNA *)&rna_ToolSettings_double_threshold, (PropertyRNA *)&rna_ToolSettings_proportional_size,
	-1, "normal_size", 8193, "Normal Size",
	"Display size for normals in the 3D view",
	0, "*",
	PROP_FLOAT, PROP_DISTANCE | PROP_UNIT_LENGTH, NULL, 0, {0, 0, 0}, 0,
	NULL, 274399232, NULL, NULL,
	offsetof(ToolSettings, normalsize), 4, NULL},
	ToolSettings_normal_size_get, ToolSettings_normal_size_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0099999998f, 10.0f, 0.0000100000f, 1000.0f, 10.0f, 2, 0.0f, NULL
};

FloatPropertyRNA rna_ToolSettings_double_threshold = {
	{(PropertyRNA *)&rna_ToolSettings_use_mesh_automerge, (PropertyRNA *)&rna_ToolSettings_normal_size,
	-1, "double_threshold", 8193, "Double Threshold",
	"Limit for removing duplicates and \'Auto Merge\'",
	0, "*",
	PROP_FLOAT, PROP_DISTANCE | PROP_UNIT_LENGTH, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	offsetof(ToolSettings, doublimit), 4, NULL},
	ToolSettings_double_threshold_get, ToolSettings_double_threshold_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 0.1000000015f, 0.0f, 1.0f, 0.0099999998f, 6, 0.0f, NULL
};

BoolPropertyRNA rna_ToolSettings_use_mesh_automerge = {
	{(PropertyRNA *)&rna_ToolSettings_use_snap, (PropertyRNA *)&rna_ToolSettings_double_threshold,
	-1, "use_mesh_automerge", 8193, "AutoMerge Editing",
	"Automatically merge vertices moved to the same location",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 68091904, NULL, NULL,
	offsetof(ToolSettings, automerge), 1, NULL},
	ToolSettings_use_mesh_automerge_get, ToolSettings_use_mesh_automerge_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_ToolSettings_use_snap = {
	{(PropertyRNA *)&rna_ToolSettings_use_snap_align_rotation, (PropertyRNA *)&rna_ToolSettings_use_mesh_automerge,
	-1, "use_snap", 4097, "Snap",
	"Snap during transform",
	576, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 68091904, NULL, NULL,
	0, -1, NULL},
	ToolSettings_use_snap_get, ToolSettings_use_snap_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_ToolSettings_use_snap_align_rotation = {
	{(PropertyRNA *)&rna_ToolSettings_snap_element, (PropertyRNA *)&rna_ToolSettings_use_snap,
	-1, "use_snap_align_rotation", 1, "Snap Align Rotation",
	"Align rotation with the snapping target",
	578, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 68091904, NULL, NULL,
	0, -1, NULL},
	ToolSettings_use_snap_align_rotation_get, ToolSettings_use_snap_align_rotation_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

static EnumPropertyItem rna_ToolSettings_snap_element_items[6] = {
	{0, "INCREMENT", 579, "Increment", "Snap to increments of grid"},
	{1, "VERTEX", 580, "Vertex", "Snap to vertices"},
	{2, "EDGE", 581, "Edge", "Snap to edges"},
	{3, "FACE", 582, "Face", "Snap to faces"},
	{4, "VOLUME", 583, "Volume", "Snap to volume"},
	{0, NULL, 0, NULL, NULL}
};

EnumPropertyRNA rna_ToolSettings_snap_element = {
	{(PropertyRNA *)&rna_ToolSettings_snap_node_element, (PropertyRNA *)&rna_ToolSettings_use_snap_align_rotation,
	-1, "snap_element", 1, "Snap Element",
	"Type of element to snap to",
	0, "*",
	PROP_ENUM, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 68091904, NULL, NULL,
	0, -1, NULL},
	ToolSettings_snap_element_get, ToolSettings_snap_element_set, NULL, NULL, NULL, NULL, rna_ToolSettings_snap_element_items, 5, 0
};

static EnumPropertyItem rna_ToolSettings_snap_node_element_items[5] = {
	{8, "GRID", 579, "Grid", "Snap to grid"},
	{5, "NODE_X", 581, "Node X", "Snap to left/right node border"},
	{6, "NODE_Y", 581, "Node Y", "Snap to top/bottom node border"},
	{7, "NODE_XY", 581, "Node X / Y", "Snap to any node border"},
	{0, NULL, 0, NULL, NULL}
};

EnumPropertyRNA rna_ToolSettings_snap_node_element = {
	{(PropertyRNA *)&rna_ToolSettings_snap_uv_element, (PropertyRNA *)&rna_ToolSettings_snap_element,
	-1, "snap_node_element", 1, "Snap Node Element",
	"Type of element to snap to",
	0, "*",
	PROP_ENUM, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 68091904, NULL, NULL,
	0, -1, NULL},
	ToolSettings_snap_node_element_get, ToolSettings_snap_node_element_set, NULL, NULL, NULL, NULL, rna_ToolSettings_snap_node_element_items, 4, 8
};

static EnumPropertyItem rna_ToolSettings_snap_uv_element_items[3] = {
	{0, "INCREMENT", 579, "Increment", "Snap to increments of grid"},
	{1, "VERTEX", 580, "Vertex", "Snap to vertices"},
	{0, NULL, 0, NULL, NULL}
};

EnumPropertyRNA rna_ToolSettings_snap_uv_element = {
	{(PropertyRNA *)&rna_ToolSettings_snap_target, (PropertyRNA *)&rna_ToolSettings_snap_node_element,
	-1, "snap_uv_element", 1, "Snap UV Element",
	"Type of element to snap to",
	0, "*",
	PROP_ENUM, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 68091904, NULL, NULL,
	0, -1, NULL},
	ToolSettings_snap_uv_element_get, ToolSettings_snap_uv_element_set, NULL, NULL, NULL, NULL, rna_ToolSettings_snap_uv_element_items, 2, 0
};

static EnumPropertyItem rna_ToolSettings_snap_target_items[5] = {
	{0, "CLOSEST", 0, "Closest", "Snap closest point onto target"},
	{1, "CENTER", 0, "Center", "Snap center onto target"},
	{2, "MEDIAN", 0, "Median", "Snap median onto target"},
	{3, "ACTIVE", 0, "Active", "Snap active onto target"},
	{0, NULL, 0, NULL, NULL}
};

EnumPropertyRNA rna_ToolSettings_snap_target = {
	{(PropertyRNA *)&rna_ToolSettings_use_snap_peel_object, (PropertyRNA *)&rna_ToolSettings_snap_uv_element,
	-1, "snap_target", 1, "Snap Target",
	"Which part to snap onto the target",
	0, "*",
	PROP_ENUM, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 68091904, NULL, NULL,
	0, -1, NULL},
	ToolSettings_snap_target_get, ToolSettings_snap_target_set, NULL, NULL, NULL, NULL, rna_ToolSettings_snap_target_items, 4, 0
};

BoolPropertyRNA rna_ToolSettings_use_snap_peel_object = {
	{(PropertyRNA *)&rna_ToolSettings_use_snap_project, (PropertyRNA *)&rna_ToolSettings_snap_target,
	-1, "use_snap_peel_object", 1, "Snap Peel Object",
	"Consider objects as whole when finding volume center",
	590, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 68091904, NULL, NULL,
	0, -1, NULL},
	ToolSettings_use_snap_peel_object_get, ToolSettings_use_snap_peel_object_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_ToolSettings_use_snap_project = {
	{(PropertyRNA *)&rna_ToolSettings_use_snap_self, (PropertyRNA *)&rna_ToolSettings_use_snap_peel_object,
	-1, "use_snap_project", 1, "Project Individual Elements",
	"Project individual elements on the surface of other objects",
	609, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 68091904, NULL, NULL,
	0, -1, NULL},
	ToolSettings_use_snap_project_get, ToolSettings_use_snap_project_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_ToolSettings_use_snap_self = {
	{(PropertyRNA *)&rna_ToolSettings_use_grease_pencil_sessions, (PropertyRNA *)&rna_ToolSettings_use_snap_project,
	-1, "use_snap_self", 1, "Project to Self",
	"Snap onto itself (editmode)",
	630, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 68091904, NULL, NULL,
	0, -1, NULL},
	ToolSettings_use_snap_self_get, ToolSettings_use_snap_self_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_ToolSettings_use_grease_pencil_sessions = {
	{(PropertyRNA *)&rna_ToolSettings_use_keyframe_insert_auto, (PropertyRNA *)&rna_ToolSettings_use_snap_self,
	-1, "use_grease_pencil_sessions", 1, "Use Sketching Sessions",
	"Allow drawing multiple strokes at a time with Grease Pencil",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 68091904, NULL, NULL,
	0, -1, NULL},
	ToolSettings_use_grease_pencil_sessions_get, ToolSettings_use_grease_pencil_sessions_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_ToolSettings_use_keyframe_insert_auto = {
	{(PropertyRNA *)&rna_ToolSettings_auto_keying_mode, (PropertyRNA *)&rna_ToolSettings_use_grease_pencil_sessions,
	-1, "use_keyframe_insert_auto", 1, "Auto Keying",
	"Automatic keyframe insertion for Objects and Bones",
	494, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	ToolSettings_use_keyframe_insert_auto_get, ToolSettings_use_keyframe_insert_auto_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

static EnumPropertyItem rna_ToolSettings_auto_keying_mode_items[3] = {
	{2, "ADD_REPLACE_KEYS", 0, "Add & Replace", ""},
	{4, "REPLACE_KEYS", 0, "Replace", ""},
	{0, NULL, 0, NULL, NULL}
};

EnumPropertyRNA rna_ToolSettings_auto_keying_mode = {
	{(PropertyRNA *)&rna_ToolSettings_use_record_with_nla, (PropertyRNA *)&rna_ToolSettings_use_keyframe_insert_auto,
	-1, "auto_keying_mode", 1, "Auto-Keying Mode",
	"Mode of automatic keyframe insertion for Objects and Bones",
	0, "*",
	PROP_ENUM, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	ToolSettings_auto_keying_mode_get, ToolSettings_auto_keying_mode_set, NULL, NULL, NULL, NULL, rna_ToolSettings_auto_keying_mode_items, 2, 2
};

BoolPropertyRNA rna_ToolSettings_use_record_with_nla = {
	{(PropertyRNA *)&rna_ToolSettings_use_keyframe_insert_keyingset, (PropertyRNA *)&rna_ToolSettings_auto_keying_mode,
	-1, "use_record_with_nla", 1, "Layered",
	"Add a new NLA Track + Strip for every loop/pass made over the animation to allow non-destructive tweaking",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	ToolSettings_use_record_with_nla_get, ToolSettings_use_record_with_nla_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_ToolSettings_use_keyframe_insert_keyingset = {
	{(PropertyRNA *)&rna_ToolSettings_uv_select_mode, (PropertyRNA *)&rna_ToolSettings_use_record_with_nla,
	-1, "use_keyframe_insert_keyingset", 1, "Auto Keyframe Insert Keying Set",
	"Automatic keyframe insertion using active Keying Set only",
	512, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	ToolSettings_use_keyframe_insert_keyingset_get, ToolSettings_use_keyframe_insert_keyingset_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

static EnumPropertyItem rna_ToolSettings_uv_select_mode_items[5] = {
	{1, "VERTEX", 610, "Vertex", "Vertex selection mode"},
	{2, "EDGE", 611, "Edge", "Edge selection mode"},
	{4, "FACE", 612, "Face", "Face selection mode"},
	{8, "ISLAND", 613, "Island", "Island selection mode"},
	{0, NULL, 0, NULL, NULL}
};

EnumPropertyRNA rna_ToolSettings_uv_select_mode = {
	{(PropertyRNA *)&rna_ToolSettings_use_uv_select_sync, (PropertyRNA *)&rna_ToolSettings_use_keyframe_insert_keyingset,
	-1, "uv_select_mode", 1, "UV Selection Mode",
	"UV selection and display mode",
	0, "*",
	PROP_ENUM, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 251920384, NULL, NULL,
	0, -1, NULL},
	ToolSettings_uv_select_mode_get, ToolSettings_uv_select_mode_set, NULL, NULL, NULL, NULL, rna_ToolSettings_uv_select_mode_items, 4, 1
};

BoolPropertyRNA rna_ToolSettings_use_uv_select_sync = {
	{(PropertyRNA *)&rna_ToolSettings_show_uv_local_view, (PropertyRNA *)&rna_ToolSettings_uv_select_mode,
	-1, "use_uv_select_sync", 1, "UV Sync Selection",
	"Keep UV and edit mode mesh selection in sync",
	84, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 251920384, NULL, NULL,
	0, -1, NULL},
	ToolSettings_use_uv_select_sync_get, ToolSettings_use_uv_select_sync_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_ToolSettings_show_uv_local_view = {
	{(PropertyRNA *)&rna_ToolSettings_mesh_select_mode, (PropertyRNA *)&rna_ToolSettings_use_uv_select_sync,
	-1, "show_uv_local_view", 1, "UV Local View",
	"Draw only faces with the currently displayed image assigned",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 251920384, NULL, NULL,
	0, -1, NULL},
	ToolSettings_show_uv_local_view_get, ToolSettings_show_uv_local_view_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

static int rna_ToolSettings_mesh_select_mode_default[3] = {
	0,
	0,
	0
};

BoolPropertyRNA rna_ToolSettings_mesh_select_mode = {
	{(PropertyRNA *)&rna_ToolSettings_vertex_group_weight, (PropertyRNA *)&rna_ToolSettings_show_uv_local_view,
	-1, "mesh_select_mode", 1, "Mesh Selection Mode",
	"Which mesh elements selection works on",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 1, {3, 0, 0}, 3,
	rna_Scene_editmesh_select_mode_update, 0, NULL, NULL,
	0, -1, NULL},
	NULL, NULL, ToolSettings_mesh_select_mode_get, ToolSettings_mesh_select_mode_set, NULL, NULL, NULL, NULL, 0, rna_ToolSettings_mesh_select_mode_default
};

FloatPropertyRNA rna_ToolSettings_vertex_group_weight = {
	{(PropertyRNA *)&rna_ToolSettings_edge_path_mode, (PropertyRNA *)&rna_ToolSettings_mesh_select_mode,
	-1, "vertex_group_weight", 8193, "Vertex Group Weight",
	"Weight to assign in vertex groups",
	0, "*",
	PROP_FLOAT, PROP_FACTOR | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	offsetof(ToolSettings, vgroup_weight), 4, NULL},
	ToolSettings_vertex_group_weight_get, ToolSettings_vertex_group_weight_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 1.0f, 0.0f, 1.0f, 10.0f, 3, 0.0f, NULL
};

static EnumPropertyItem rna_ToolSettings_edge_path_mode_items[7] = {
	{0, "SELECT", 0, "Select", ""},
	{1, "SEAM", 0, "Tag Seam", ""},
	{2, "SHARP", 0, "Tag Sharp", ""},
	{3, "CREASE", 0, "Tag Crease", ""},
	{4, "BEVEL", 0, "Tag Bevel", ""},
	{5, "FREESTYLE", 0, "Tag Freestyle Edge Mark", ""},
	{0, NULL, 0, NULL, NULL}
};

EnumPropertyRNA rna_ToolSettings_edge_path_mode = {
	{(PropertyRNA *)&rna_ToolSettings_edge_path_live_unwrap, (PropertyRNA *)&rna_ToolSettings_vertex_group_weight,
	-1, "edge_path_mode", 1, "Edge Tag Mode",
	"The edge flag to tag when selecting the shortest path",
	0, "*",
	PROP_ENUM, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	ToolSettings_edge_path_mode_get, ToolSettings_edge_path_mode_set, NULL, NULL, NULL, NULL, rna_ToolSettings_edge_path_mode_items, 6, 0
};

BoolPropertyRNA rna_ToolSettings_edge_path_live_unwrap = {
	{(PropertyRNA *)&rna_ToolSettings_use_bone_sketching, (PropertyRNA *)&rna_ToolSettings_edge_path_mode,
	-1, "edge_path_live_unwrap", 1, "Live Unwrap",
	"Changing edges seam re-calculates UV unwrap",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	ToolSettings_edge_path_live_unwrap_get, ToolSettings_edge_path_live_unwrap_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_ToolSettings_use_bone_sketching = {
	{(PropertyRNA *)&rna_ToolSettings_use_etch_quick, (PropertyRNA *)&rna_ToolSettings_edge_path_live_unwrap,
	-1, "use_bone_sketching", 1, "Use Bone Sketching",
	"Use sketching to create and edit bones",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 252248064, NULL, NULL,
	0, -1, NULL},
	ToolSettings_use_bone_sketching_get, ToolSettings_use_bone_sketching_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_ToolSettings_use_etch_quick = {
	{(PropertyRNA *)&rna_ToolSettings_use_etch_overdraw, (PropertyRNA *)&rna_ToolSettings_use_bone_sketching,
	-1, "use_etch_quick", 1, "Quick Sketching",
	"Automatically convert and delete on stroke end",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	ToolSettings_use_etch_quick_get, ToolSettings_use_etch_quick_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_ToolSettings_use_etch_overdraw = {
	{(PropertyRNA *)&rna_ToolSettings_use_etch_autoname, (PropertyRNA *)&rna_ToolSettings_use_etch_quick,
	-1, "use_etch_overdraw", 1, "Overdraw Sketching",
	"Adjust strokes by drawing near them",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	ToolSettings_use_etch_overdraw_get, ToolSettings_use_etch_overdraw_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_ToolSettings_use_etch_autoname = {
	{(PropertyRNA *)&rna_ToolSettings_etch_number, (PropertyRNA *)&rna_ToolSettings_use_etch_overdraw,
	-1, "use_etch_autoname", 1, "Autoname Bones",
	"Automatically generate values to replace &N and &S suffix placeholders in template names",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	ToolSettings_use_etch_autoname_get, ToolSettings_use_etch_autoname_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

StringPropertyRNA rna_ToolSettings_etch_number = {
	{(PropertyRNA *)&rna_ToolSettings_etch_side, (PropertyRNA *)&rna_ToolSettings_use_etch_autoname,
	-1, "etch_number", 262145, "Number",
	"Text to replace &N with (e.g. \'Finger.&N\' -> \'Finger.1\' or \'Finger.One\')",
	0, "*",
	PROP_STRING, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {8, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	ToolSettings_etch_number_get, ToolSettings_etch_number_length, ToolSettings_etch_number_set, NULL, NULL, NULL, 8, ""
};

StringPropertyRNA rna_ToolSettings_etch_side = {
	{(PropertyRNA *)&rna_ToolSettings_etch_template, (PropertyRNA *)&rna_ToolSettings_etch_number,
	-1, "etch_side", 262145, "Side",
	"Text to replace &S with (e.g. \'Arm.&S\' -> \'Arm.R\' or \'Arm.Right\')",
	0, "*",
	PROP_STRING, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {8, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	ToolSettings_etch_side_get, ToolSettings_etch_side_length, ToolSettings_etch_side_set, NULL, NULL, NULL, 8, ""
};

PointerPropertyRNA rna_ToolSettings_etch_template = {
	{(PropertyRNA *)&rna_ToolSettings_etch_subdivision_number, (PropertyRNA *)&rna_ToolSettings_etch_side,
	-1, "etch_template", 8388609, "Template",
	"Template armature that will be retargeted to the stroke",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	ToolSettings_etch_template_get, ToolSettings_etch_template_set, NULL, NULL,&RNA_Object
};

IntPropertyRNA rna_ToolSettings_etch_subdivision_number = {
	{(PropertyRNA *)&rna_ToolSettings_etch_adaptive_limit, (PropertyRNA *)&rna_ToolSettings_etch_template,
	-1, "etch_subdivision_number", 8193, "Subdivisions",
	"Number of bones in the subdivided stroke",
	0, "*",
	PROP_INT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 252248064, NULL, NULL,
	offsetof(ToolSettings, skgen_subdivision_number), 2, NULL},
	ToolSettings_etch_subdivision_number_get, ToolSettings_etch_subdivision_number_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL,
	1, 255, 1, 255, 1, 0, NULL
};

FloatPropertyRNA rna_ToolSettings_etch_adaptive_limit = {
	{(PropertyRNA *)&rna_ToolSettings_etch_length_limit, (PropertyRNA *)&rna_ToolSettings_etch_subdivision_number,
	-1, "etch_adaptive_limit", 8193, "Limit",
	"Correlation threshold for number of bones in the subdivided stroke",
	0, "*",
	PROP_FLOAT, PROP_FACTOR | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 252248064, NULL, NULL,
	offsetof(ToolSettings, skgen_correlation_limit), 4, NULL},
	ToolSettings_etch_adaptive_limit_get, ToolSettings_etch_adaptive_limit_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0099999998f, 1.0f, 0.0000100000f, 1.0f, 0.0099999998f, 2, 0.0f, NULL
};

FloatPropertyRNA rna_ToolSettings_etch_length_limit = {
	{(PropertyRNA *)&rna_ToolSettings_etch_roll_mode, (PropertyRNA *)&rna_ToolSettings_etch_adaptive_limit,
	-1, "etch_length_limit", 8193, "Length",
	"Maximum length of the subdivided bones",
	0, "*",
	PROP_FLOAT, PROP_DISTANCE | PROP_UNIT_LENGTH, NULL, 0, {0, 0, 0}, 0,
	NULL, 252248064, NULL, NULL,
	offsetof(ToolSettings, skgen_length_limit), 4, NULL},
	ToolSettings_etch_length_limit_get, ToolSettings_etch_length_limit_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0010000000f, 100.0f, 0.0000100000f, 100000.0f, 0.1000000015f, 3, 0.0f, NULL
};

static EnumPropertyItem rna_ToolSettings_etch_roll_mode_items[4] = {
	{0, "NONE", 0, "None", "Don\'t adjust roll"},
	{1, "VIEW", 0, "View", "Roll bones to face the view"},
	{2, "JOINT", 0, "Joint", "Roll bone to original joint plane offset"},
	{0, NULL, 0, NULL, NULL}
};

EnumPropertyRNA rna_ToolSettings_etch_roll_mode = {
	{(PropertyRNA *)&rna_ToolSettings_etch_convert_mode, (PropertyRNA *)&rna_ToolSettings_etch_length_limit,
	-1, "etch_roll_mode", 1, "Retarget roll mode",
	"Method used to adjust the roll of bones when retargeting",
	0, "*",
	PROP_ENUM, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	ToolSettings_etch_roll_mode_get, ToolSettings_etch_roll_mode_set, NULL, NULL, NULL, NULL, rna_ToolSettings_etch_roll_mode_items, 3, 0
};

static EnumPropertyItem rna_ToolSettings_etch_convert_mode_items[5] = {
	{0, "FIXED", 0, "Fixed", "Subdivide stroke in fixed number of bones"},
	{1, "LENGTH", 0, "Length", "Subdivide stroke in bones of specific length"},
	{2, "ADAPTIVE", 0, "Adaptive", "Subdivide stroke adaptively, with more subdivision in curvier parts"},
	{3, "RETARGET", 0, "Retarget", "Retarget template bone chain to stroke"},
	{0, NULL, 0, NULL, NULL}
};

EnumPropertyRNA rna_ToolSettings_etch_convert_mode = {
	{(PropertyRNA *)&rna_ToolSettings_unified_paint_settings, (PropertyRNA *)&rna_ToolSettings_etch_roll_mode,
	-1, "etch_convert_mode", 1, "Stroke conversion method",
	"Method used to convert stroke to bones",
	0, "*",
	PROP_ENUM, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 252248064, NULL, NULL,
	0, -1, NULL},
	ToolSettings_etch_convert_mode_get, ToolSettings_etch_convert_mode_set, NULL, NULL, NULL, NULL, rna_ToolSettings_etch_convert_mode_items, 4, 0
};

PointerPropertyRNA rna_ToolSettings_unified_paint_settings = {
	{(PropertyRNA *)&rna_ToolSettings_statvis, (PropertyRNA *)&rna_ToolSettings_etch_convert_mode,
	-1, "unified_paint_settings", 8650752, "Unified Paint Settings",
	NULL,
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	ToolSettings_unified_paint_settings_get, NULL, NULL, NULL,&RNA_UnifiedPaintSettings
};

PointerPropertyRNA rna_ToolSettings_statvis = {
	{NULL, (PropertyRNA *)&rna_ToolSettings_unified_paint_settings,
	-1, "statvis", 8650752, "Mesh Statistics Visualization",
	NULL,
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	ToolSettings_statvis_get, NULL, NULL, NULL,&RNA_MeshStatVis
};

StructRNA RNA_ToolSettings = {
	{(ContainerRNA *)&RNA_UnifiedPaintSettings, (ContainerRNA *)&RNA_TimelineMarkers,
	NULL,
	{(PropertyRNA *)&rna_ToolSettings_rna_properties, (PropertyRNA *)&rna_ToolSettings_statvis}},
	"ToolSettings", NULL, NULL, 4, "Tool Settings",
	"",
	"*", 17,
	NULL, (PropertyRNA *)&rna_ToolSettings_rna_properties,
	NULL,
	NULL,
	NULL,
	rna_ToolSettings_path,
	NULL,
	NULL,
	NULL,
	NULL,
	{NULL, NULL}
};

/* Unified Paint Settings */
CollectionPropertyRNA rna_UnifiedPaintSettings_rna_properties = {
	{(PropertyRNA *)&rna_UnifiedPaintSettings_rna_type, NULL,
	-1, "rna_properties", 128, "Properties",
	"RNA property collection",
	0, "*",
	PROP_COLLECTION, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	UnifiedPaintSettings_rna_properties_begin, UnifiedPaintSettings_rna_properties_next, UnifiedPaintSettings_rna_properties_end, UnifiedPaintSettings_rna_properties_get, NULL, NULL, UnifiedPaintSettings_rna_properties_lookup_string, NULL, &RNA_Property
};

PointerPropertyRNA rna_UnifiedPaintSettings_rna_type = {
	{(PropertyRNA *)&rna_UnifiedPaintSettings_use_unified_size, (PropertyRNA *)&rna_UnifiedPaintSettings_rna_properties,
	-1, "rna_type", 8912896, "RNA",
	"RNA type definition",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	UnifiedPaintSettings_rna_type_get, NULL, NULL, NULL,&RNA_Struct
};

BoolPropertyRNA rna_UnifiedPaintSettings_use_unified_size = {
	{(PropertyRNA *)&rna_UnifiedPaintSettings_use_unified_strength, (PropertyRNA *)&rna_UnifiedPaintSettings_rna_type,
	-1, "use_unified_size", 1, "Use Unified Radius",
	"Instead of per-brush radius, the radius is shared across brushes",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	UnifiedPaintSettings_use_unified_size_get, UnifiedPaintSettings_use_unified_size_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_UnifiedPaintSettings_use_unified_strength = {
	{(PropertyRNA *)&rna_UnifiedPaintSettings_use_unified_weight, (PropertyRNA *)&rna_UnifiedPaintSettings_use_unified_size,
	-1, "use_unified_strength", 1, "Use Unified Strength",
	"Instead of per-brush strength, the strength is shared across brushes",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	UnifiedPaintSettings_use_unified_strength_get, UnifiedPaintSettings_use_unified_strength_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_UnifiedPaintSettings_use_unified_weight = {
	{(PropertyRNA *)&rna_UnifiedPaintSettings_use_unified_color, (PropertyRNA *)&rna_UnifiedPaintSettings_use_unified_strength,
	-1, "use_unified_weight", 1, "Use Unified Weight",
	"Instead of per-brush weight, the weight is shared across brushes",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	UnifiedPaintSettings_use_unified_weight_get, UnifiedPaintSettings_use_unified_weight_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_UnifiedPaintSettings_use_unified_color = {
	{(PropertyRNA *)&rna_UnifiedPaintSettings_size, (PropertyRNA *)&rna_UnifiedPaintSettings_use_unified_weight,
	-1, "use_unified_color", 1, "Use Unified Color",
	"Instead of per-brush color, the color is shared across brushes",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	UnifiedPaintSettings_use_unified_color_get, UnifiedPaintSettings_use_unified_color_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

IntPropertyRNA rna_UnifiedPaintSettings_size = {
	{(PropertyRNA *)&rna_UnifiedPaintSettings_unprojected_radius, (PropertyRNA *)&rna_UnifiedPaintSettings_use_unified_color,
	-1, "size", 1, "Radius",
	"Radius of the brush",
	0, "*",
	PROP_INT, PROP_PIXEL | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_UnifiedPaintSettings_radius_update, 0, NULL, NULL,
	0, -1, NULL},
	UnifiedPaintSettings_size_get, UnifiedPaintSettings_size_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL,
	1, 200, 1, 2000, 1, 0, NULL
};

FloatPropertyRNA rna_UnifiedPaintSettings_unprojected_radius = {
	{(PropertyRNA *)&rna_UnifiedPaintSettings_strength, (PropertyRNA *)&rna_UnifiedPaintSettings_size,
	-1, "unprojected_radius", 1, "Unprojected Radius",
	"Radius of brush in Blender units",
	0, "*",
	PROP_FLOAT, PROP_DISTANCE | PROP_UNIT_LENGTH, NULL, 0, {0, 0, 0}, 0,
	rna_UnifiedPaintSettings_radius_update, 0, NULL, NULL,
	0, -1, NULL},
	UnifiedPaintSettings_unprojected_radius_get, UnifiedPaintSettings_unprojected_radius_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0010000000f, 1.0f, 0.0010000000f, FLT_MAX, 0.0f, -1, 0.0f, NULL
};

FloatPropertyRNA rna_UnifiedPaintSettings_strength = {
	{(PropertyRNA *)&rna_UnifiedPaintSettings_weight, (PropertyRNA *)&rna_UnifiedPaintSettings_unprojected_radius,
	-1, "strength", 8193, "Strength",
	"How powerful the effect of the brush is when applied",
	0, "*",
	PROP_FLOAT, PROP_FACTOR | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_UnifiedPaintSettings_update, 0, NULL, NULL,
	offsetof(UnifiedPaintSettings, alpha), 4, NULL},
	UnifiedPaintSettings_strength_get, UnifiedPaintSettings_strength_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 1.0f, 0.0f, 10.0f, 0.0010000000f, 3, 0.5000000000f, NULL
};

FloatPropertyRNA rna_UnifiedPaintSettings_weight = {
	{(PropertyRNA *)&rna_UnifiedPaintSettings_color, (PropertyRNA *)&rna_UnifiedPaintSettings_strength,
	-1, "weight", 8193, "Weight",
	"Weight to assign in vertex groups",
	0, "*",
	PROP_FLOAT, PROP_FACTOR | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_UnifiedPaintSettings_update, 0, NULL, NULL,
	offsetof(UnifiedPaintSettings, weight), 4, NULL},
	UnifiedPaintSettings_weight_get, UnifiedPaintSettings_weight_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 1.0f, 0.0f, 1.0f, 0.0010000000f, 3, 0.5000000000f, NULL
};

static float rna_UnifiedPaintSettings_color_default[3] = {
	0.0f,
	0.0f,
	0.0f
};

FloatPropertyRNA rna_UnifiedPaintSettings_color = {
	{(PropertyRNA *)&rna_UnifiedPaintSettings_secondary_color, (PropertyRNA *)&rna_UnifiedPaintSettings_weight,
	-1, "color", 8193, "Color",
	"",
	0, "*",
	PROP_FLOAT, PROP_COLOR_GAMMA | PROP_UNIT_NONE, NULL, 1, {3, 0, 0}, 3,
	rna_UnifiedPaintSettings_update, 0, NULL, NULL,
	offsetof(UnifiedPaintSettings, rgb), 4, NULL},
	NULL, NULL, UnifiedPaintSettings_color_get, UnifiedPaintSettings_color_set, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 1.0f, 0.0f, 1.0f, 10.0f, 3, 0.0f, rna_UnifiedPaintSettings_color_default
};

static float rna_UnifiedPaintSettings_secondary_color_default[3] = {
	0.0f,
	0.0f,
	0.0f
};

FloatPropertyRNA rna_UnifiedPaintSettings_secondary_color = {
	{(PropertyRNA *)&rna_UnifiedPaintSettings_use_pressure_size, (PropertyRNA *)&rna_UnifiedPaintSettings_color,
	-1, "secondary_color", 8193, "Secondary Color",
	"",
	0, "*",
	PROP_FLOAT, PROP_COLOR_GAMMA | PROP_UNIT_NONE, NULL, 1, {3, 0, 0}, 3,
	rna_UnifiedPaintSettings_update, 0, NULL, NULL,
	offsetof(UnifiedPaintSettings, secondary_rgb), 4, NULL},
	NULL, NULL, UnifiedPaintSettings_secondary_color_get, UnifiedPaintSettings_secondary_color_set, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 1.0f, 0.0f, 1.0f, 10.0f, 3, 0.0f, rna_UnifiedPaintSettings_secondary_color_default
};

BoolPropertyRNA rna_UnifiedPaintSettings_use_pressure_size = {
	{(PropertyRNA *)&rna_UnifiedPaintSettings_use_pressure_strength, (PropertyRNA *)&rna_UnifiedPaintSettings_secondary_color,
	-1, "use_pressure_size", 1, "Size Pressure",
	"Enable tablet pressure sensitivity for size",
	67, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	UnifiedPaintSettings_use_pressure_size_get, UnifiedPaintSettings_use_pressure_size_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_UnifiedPaintSettings_use_pressure_strength = {
	{(PropertyRNA *)&rna_UnifiedPaintSettings_use_locked_size, (PropertyRNA *)&rna_UnifiedPaintSettings_use_pressure_size,
	-1, "use_pressure_strength", 1, "Strength Pressure",
	"Enable tablet pressure sensitivity for strength",
	67, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	UnifiedPaintSettings_use_pressure_strength_get, UnifiedPaintSettings_use_pressure_strength_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_UnifiedPaintSettings_use_locked_size = {
	{NULL, (PropertyRNA *)&rna_UnifiedPaintSettings_use_pressure_strength,
	-1, "use_locked_size", 1, "Use Blender Units",
	"When locked brush stays same size relative to object; when unlocked brush size is given in pixels",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	UnifiedPaintSettings_use_locked_size_get, UnifiedPaintSettings_use_locked_size_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

StructRNA RNA_UnifiedPaintSettings = {
	{(ContainerRNA *)&RNA_MeshStatVis, (ContainerRNA *)&RNA_ToolSettings,
	NULL,
	{(PropertyRNA *)&rna_UnifiedPaintSettings_rna_properties, (PropertyRNA *)&rna_UnifiedPaintSettings_use_locked_size}},
	"UnifiedPaintSettings", NULL, NULL, 4, "Unified Paint Settings",
	"Overrides for some of the active brush\'s settings",
	"*", 17,
	NULL, (PropertyRNA *)&rna_UnifiedPaintSettings_rna_properties,
	NULL,
	NULL,
	NULL,
	rna_UnifiedPaintSettings_path,
	NULL,
	NULL,
	NULL,
	NULL,
	{NULL, NULL}
};

/* Mesh Visualize Statistics */
CollectionPropertyRNA rna_MeshStatVis_rna_properties = {
	{(PropertyRNA *)&rna_MeshStatVis_rna_type, NULL,
	-1, "rna_properties", 128, "Properties",
	"RNA property collection",
	0, "*",
	PROP_COLLECTION, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	MeshStatVis_rna_properties_begin, MeshStatVis_rna_properties_next, MeshStatVis_rna_properties_end, MeshStatVis_rna_properties_get, NULL, NULL, MeshStatVis_rna_properties_lookup_string, NULL, &RNA_Property
};

PointerPropertyRNA rna_MeshStatVis_rna_type = {
	{(PropertyRNA *)&rna_MeshStatVis_type, (PropertyRNA *)&rna_MeshStatVis_rna_properties,
	-1, "rna_type", 8912896, "RNA",
	"RNA type definition",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	MeshStatVis_rna_type_get, NULL, NULL, NULL,&RNA_Struct
};

static EnumPropertyItem rna_MeshStatVis_type_items[6] = {
	{0, "OVERHANG", 0, "Overhang", ""},
	{1, "THICKNESS", 0, "Thickness", ""},
	{2, "INTERSECT", 0, "Intersect", ""},
	{3, "DISTORT", 0, "Distortion", ""},
	{4, "SHARP", 0, "Sharp", ""},
	{0, NULL, 0, NULL, NULL}
};

EnumPropertyRNA rna_MeshStatVis_type = {
	{(PropertyRNA *)&rna_MeshStatVis_overhang_min, (PropertyRNA *)&rna_MeshStatVis_rna_type,
	-1, "type", 1, "Type",
	"Type of data to visualize/check",
	0, "*",
	PROP_ENUM, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_EditMesh_update, 0, NULL, NULL,
	0, -1, NULL},
	MeshStatVis_type_get, MeshStatVis_type_set, NULL, NULL, NULL, NULL, rna_MeshStatVis_type_items, 5, 0
};

FloatPropertyRNA rna_MeshStatVis_overhang_min = {
	{(PropertyRNA *)&rna_MeshStatVis_overhang_max, (PropertyRNA *)&rna_MeshStatVis_type,
	-1, "overhang_min", 8193, "Overhang Min",
	"Minimum angle to display",
	0, "*",
	PROP_FLOAT, PROP_ANGLE | PROP_UNIT_ROTATION, NULL, 0, {0, 0, 0}, 0,
	rna_EditMesh_update, 0, NULL, NULL,
	offsetof(MeshStatVis, overhang_min), 4, NULL},
	MeshStatVis_overhang_min_get, MeshStatVis_overhang_min_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 3.1415927410f, 0.0f, 3.1415927410f, 0.0010000000f, 3, 0.5000000000f, NULL
};

FloatPropertyRNA rna_MeshStatVis_overhang_max = {
	{(PropertyRNA *)&rna_MeshStatVis_overhang_axis, (PropertyRNA *)&rna_MeshStatVis_overhang_min,
	-1, "overhang_max", 8193, "Overhang Max",
	"Maximum angle to display",
	0, "*",
	PROP_FLOAT, PROP_ANGLE | PROP_UNIT_ROTATION, NULL, 0, {0, 0, 0}, 0,
	rna_EditMesh_update, 0, NULL, NULL,
	offsetof(MeshStatVis, overhang_max), 4, NULL},
	MeshStatVis_overhang_max_get, MeshStatVis_overhang_max_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 3.1415927410f, 0.0f, 3.1415927410f, 0.0010000000f, 3, 0.5000000000f, NULL
};

static EnumPropertyItem rna_MeshStatVis_overhang_axis_items[7] = {
	{0, "POS_X", 0, "+X", ""},
	{1, "POS_Y", 0, "+Y", ""},
	{2, "POS_Z", 0, "+Z", ""},
	{3, "NEG_X", 0, "-X", ""},
	{4, "NEG_Y", 0, "-Y", ""},
	{5, "NEG_Z", 0, "-Z", ""},
	{0, NULL, 0, NULL, NULL}
};

EnumPropertyRNA rna_MeshStatVis_overhang_axis = {
	{(PropertyRNA *)&rna_MeshStatVis_thickness_min, (PropertyRNA *)&rna_MeshStatVis_overhang_max,
	-1, "overhang_axis", 1, "Axis",
	"",
	0, "*",
	PROP_ENUM, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_EditMesh_update, 0, NULL, NULL,
	0, -1, NULL},
	MeshStatVis_overhang_axis_get, MeshStatVis_overhang_axis_set, NULL, NULL, NULL, NULL, rna_MeshStatVis_overhang_axis_items, 6, 0
};

FloatPropertyRNA rna_MeshStatVis_thickness_min = {
	{(PropertyRNA *)&rna_MeshStatVis_thickness_max, (PropertyRNA *)&rna_MeshStatVis_overhang_axis,
	-1, "thickness_min", 8193, "Thickness Min",
	"Minimum for measuring thickness",
	0, "*",
	PROP_FLOAT, PROP_DISTANCE | PROP_UNIT_LENGTH, NULL, 0, {0, 0, 0}, 0,
	rna_EditMesh_update, 0, NULL, NULL,
	offsetof(MeshStatVis, thickness_min), 4, NULL},
	MeshStatVis_thickness_min_get, MeshStatVis_thickness_min_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 100.0f, 0.0f, 1000.0f, 0.0010000000f, 3, 0.5000000000f, NULL
};

FloatPropertyRNA rna_MeshStatVis_thickness_max = {
	{(PropertyRNA *)&rna_MeshStatVis_thickness_samples, (PropertyRNA *)&rna_MeshStatVis_thickness_min,
	-1, "thickness_max", 8193, "Thickness Max",
	"Maximum for measuring thickness",
	0, "*",
	PROP_FLOAT, PROP_DISTANCE | PROP_UNIT_LENGTH, NULL, 0, {0, 0, 0}, 0,
	rna_EditMesh_update, 0, NULL, NULL,
	offsetof(MeshStatVis, thickness_max), 4, NULL},
	MeshStatVis_thickness_max_get, MeshStatVis_thickness_max_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 100.0f, 0.0f, 1000.0f, 0.0010000000f, 3, 0.5000000000f, NULL
};

IntPropertyRNA rna_MeshStatVis_thickness_samples = {
	{(PropertyRNA *)&rna_MeshStatVis_distort_min, (PropertyRNA *)&rna_MeshStatVis_thickness_max,
	-1, "thickness_samples", 8193, "Samples",
	"Number of samples to test per face",
	0, "*",
	PROP_INT, PROP_UNSIGNED | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_EditMesh_update, 0, NULL, NULL,
	offsetof(MeshStatVis, thickness_samples), 2, NULL},
	MeshStatVis_thickness_samples_get, MeshStatVis_thickness_samples_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL,
	1, 32, 1, 32, 1, 0, NULL
};

FloatPropertyRNA rna_MeshStatVis_distort_min = {
	{(PropertyRNA *)&rna_MeshStatVis_distort_max, (PropertyRNA *)&rna_MeshStatVis_thickness_samples,
	-1, "distort_min", 8193, "Distort Min",
	"Minimum angle to display",
	0, "*",
	PROP_FLOAT, PROP_ANGLE | PROP_UNIT_ROTATION, NULL, 0, {0, 0, 0}, 0,
	rna_EditMesh_update, 0, NULL, NULL,
	offsetof(MeshStatVis, distort_min), 4, NULL},
	MeshStatVis_distort_min_get, MeshStatVis_distort_min_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 3.1415927410f, 0.0f, 3.1415927410f, 0.0010000000f, 3, 0.5000000000f, NULL
};

FloatPropertyRNA rna_MeshStatVis_distort_max = {
	{(PropertyRNA *)&rna_MeshStatVis_sharp_min, (PropertyRNA *)&rna_MeshStatVis_distort_min,
	-1, "distort_max", 8193, "Distort Max",
	"Maximum angle to display",
	0, "*",
	PROP_FLOAT, PROP_ANGLE | PROP_UNIT_ROTATION, NULL, 0, {0, 0, 0}, 0,
	rna_EditMesh_update, 0, NULL, NULL,
	offsetof(MeshStatVis, distort_max), 4, NULL},
	MeshStatVis_distort_max_get, MeshStatVis_distort_max_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 3.1415927410f, 0.0f, 3.1415927410f, 0.0010000000f, 3, 0.5000000000f, NULL
};

FloatPropertyRNA rna_MeshStatVis_sharp_min = {
	{(PropertyRNA *)&rna_MeshStatVis_sharp_max, (PropertyRNA *)&rna_MeshStatVis_distort_max,
	-1, "sharp_min", 8193, "Distort Min",
	"Minimum angle to display",
	0, "*",
	PROP_FLOAT, PROP_ANGLE | PROP_UNIT_ROTATION, NULL, 0, {0, 0, 0}, 0,
	rna_EditMesh_update, 0, NULL, NULL,
	offsetof(MeshStatVis, sharp_min), 4, NULL},
	MeshStatVis_sharp_min_get, MeshStatVis_sharp_min_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, -3.1415927410f, 3.1415927410f, -3.1415927410f, 3.1415927410f, 0.0010000000f, 3, 0.5000000000f, NULL
};

FloatPropertyRNA rna_MeshStatVis_sharp_max = {
	{NULL, (PropertyRNA *)&rna_MeshStatVis_sharp_min,
	-1, "sharp_max", 8193, "Distort Max",
	"Maximum angle to display",
	0, "*",
	PROP_FLOAT, PROP_ANGLE | PROP_UNIT_ROTATION, NULL, 0, {0, 0, 0}, 0,
	rna_EditMesh_update, 0, NULL, NULL,
	offsetof(MeshStatVis, sharp_max), 4, NULL},
	MeshStatVis_sharp_max_get, MeshStatVis_sharp_max_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, -3.1415927410f, 3.1415927410f, -3.1415927410f, 3.1415927410f, 0.0010000000f, 3, 0.5000000000f, NULL
};

StructRNA RNA_MeshStatVis = {
	{(ContainerRNA *)&RNA_UnitSettings, (ContainerRNA *)&RNA_UnifiedPaintSettings,
	NULL,
	{(PropertyRNA *)&rna_MeshStatVis_rna_properties, (PropertyRNA *)&rna_MeshStatVis_sharp_max}},
	"MeshStatVis", NULL, NULL, 4, "Mesh Visualize Statistics",
	"",
	"*", 17,
	NULL, (PropertyRNA *)&rna_MeshStatVis_rna_properties,
	NULL,
	NULL,
	NULL,
	rna_MeshStatVis_path,
	NULL,
	NULL,
	NULL,
	NULL,
	{NULL, NULL}
};

/* Unit Settings */
CollectionPropertyRNA rna_UnitSettings_rna_properties = {
	{(PropertyRNA *)&rna_UnitSettings_rna_type, NULL,
	-1, "rna_properties", 128, "Properties",
	"RNA property collection",
	0, "*",
	PROP_COLLECTION, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	UnitSettings_rna_properties_begin, UnitSettings_rna_properties_next, UnitSettings_rna_properties_end, UnitSettings_rna_properties_get, NULL, NULL, UnitSettings_rna_properties_lookup_string, NULL, &RNA_Property
};

PointerPropertyRNA rna_UnitSettings_rna_type = {
	{(PropertyRNA *)&rna_UnitSettings_system, (PropertyRNA *)&rna_UnitSettings_rna_properties,
	-1, "rna_type", 8912896, "RNA",
	"RNA type definition",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	UnitSettings_rna_type_get, NULL, NULL, NULL,&RNA_Struct
};

static EnumPropertyItem rna_UnitSettings_system_items[4] = {
	{0, "NONE", 0, "None", ""},
	{1, "METRIC", 0, "Metric", ""},
	{2, "IMPERIAL", 0, "Imperial", ""},
	{0, NULL, 0, NULL, NULL}
};

EnumPropertyRNA rna_UnitSettings_system = {
	{(PropertyRNA *)&rna_UnitSettings_system_rotation, (PropertyRNA *)&rna_UnitSettings_rna_type,
	-1, "system", 1, "Unit System",
	"The unit system to use for button display",
	0, "*",
	PROP_ENUM, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 33554432, NULL, NULL,
	0, -1, NULL},
	UnitSettings_system_get, UnitSettings_system_set, NULL, NULL, NULL, NULL, rna_UnitSettings_system_items, 3, 0
};

static EnumPropertyItem rna_UnitSettings_system_rotation_items[3] = {
	{0, "DEGREES", 0, "Degrees", "Use degrees for measuring angles and rotations"},
	{2, "RADIANS", 0, "Radians", ""},
	{0, NULL, 0, NULL, NULL}
};

EnumPropertyRNA rna_UnitSettings_system_rotation = {
	{(PropertyRNA *)&rna_UnitSettings_scale_length, (PropertyRNA *)&rna_UnitSettings_system,
	-1, "system_rotation", 1, "Rotation Units",
	"Unit to use for displaying/editing rotation values",
	0, "*",
	PROP_ENUM, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 33554432, NULL, NULL,
	0, -1, NULL},
	UnitSettings_system_rotation_get, UnitSettings_system_rotation_set, NULL, NULL, NULL, NULL, rna_UnitSettings_system_rotation_items, 2, 0
};

FloatPropertyRNA rna_UnitSettings_scale_length = {
	{(PropertyRNA *)&rna_UnitSettings_use_separate, (PropertyRNA *)&rna_UnitSettings_system_rotation,
	-1, "scale_length", 8193, "Unit Scale",
	"Scale to use when converting between blender units and dimensions",
	0, "*",
	PROP_FLOAT, PROP_UNSIGNED | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 33554432, NULL, NULL,
	offsetof(UnitSettings, scale_length), 4, NULL},
	UnitSettings_scale_length_get, UnitSettings_scale_length_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0010000000f, 100.0f, 0.0000100000f, 100000.0f, 0.1000000015f, 3, 0.0f, NULL
};

BoolPropertyRNA rna_UnitSettings_use_separate = {
	{NULL, (PropertyRNA *)&rna_UnitSettings_scale_length,
	-1, "use_separate", 1, "Separate Units",
	"Display units in pairs (e.g. 1m 0cm)",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 33554432, NULL, NULL,
	0, -1, NULL},
	UnitSettings_use_separate_get, UnitSettings_use_separate_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

StructRNA RNA_UnitSettings = {
	{(ContainerRNA *)&RNA_ImageFormatSettings, (ContainerRNA *)&RNA_MeshStatVis,
	NULL,
	{(PropertyRNA *)&rna_UnitSettings_rna_properties, (PropertyRNA *)&rna_UnitSettings_use_separate}},
	"UnitSettings", NULL, NULL, 4, "Unit Settings",
	"",
	"*", 17,
	NULL, (PropertyRNA *)&rna_UnitSettings_rna_properties,
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

/* Image Format */
CollectionPropertyRNA rna_ImageFormatSettings_rna_properties = {
	{(PropertyRNA *)&rna_ImageFormatSettings_rna_type, NULL,
	-1, "rna_properties", 128, "Properties",
	"RNA property collection",
	0, "*",
	PROP_COLLECTION, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	ImageFormatSettings_rna_properties_begin, ImageFormatSettings_rna_properties_next, ImageFormatSettings_rna_properties_end, ImageFormatSettings_rna_properties_get, NULL, NULL, ImageFormatSettings_rna_properties_lookup_string, NULL, &RNA_Property
};

PointerPropertyRNA rna_ImageFormatSettings_rna_type = {
	{(PropertyRNA *)&rna_ImageFormatSettings_file_format, (PropertyRNA *)&rna_ImageFormatSettings_rna_properties,
	-1, "rna_type", 8912896, "RNA",
	"RNA type definition",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	ImageFormatSettings_rna_type_get, NULL, NULL, NULL,&RNA_Struct
};

static EnumPropertyItem rna_ImageFormatSettings_file_format_items[12] = {
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

EnumPropertyRNA rna_ImageFormatSettings_file_format = {
	{(PropertyRNA *)&rna_ImageFormatSettings_color_mode, (PropertyRNA *)&rna_ImageFormatSettings_rna_type,
	-1, "file_format", 1, "File Format",
	"File format to save the rendered images as",
	0, "*",
	PROP_ENUM, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 67371008, NULL, NULL,
	0, -1, NULL},
	ImageFormatSettings_file_format_get, ImageFormatSettings_file_format_set, rna_ImageFormatSettings_file_format_itemf, NULL, NULL, NULL, rna_ImageFormatSettings_file_format_items, 11, 0
};

static EnumPropertyItem rna_ImageFormatSettings_color_mode_items[4] = {
	{8, "BW", 0, "BW", "Images get saved in 8 bits grayscale (only PNG, JPEG, TGA, TIF)"},
	{24, "RGB", 0, "RGB", "Images are saved with RGB (color) data"},
	{32, "RGBA", 0, "RGBA", "Images are saved with RGB and Alpha data (if supported)"},
	{0, NULL, 0, NULL, NULL}
};

EnumPropertyRNA rna_ImageFormatSettings_color_mode = {
	{(PropertyRNA *)&rna_ImageFormatSettings_color_depth, (PropertyRNA *)&rna_ImageFormatSettings_file_format,
	-1, "color_mode", 1, "Color Mode",
	"Choose BW for saving grayscale images, RGB for saving red, green and blue channels, and RGBA for saving red, green, blue and alpha channels",
	0, "*",
	PROP_ENUM, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 67371008, NULL, NULL,
	0, -1, NULL},
	ImageFormatSettings_color_mode_get, ImageFormatSettings_color_mode_set, rna_ImageFormatSettings_color_mode_itemf, NULL, NULL, NULL, rna_ImageFormatSettings_color_mode_items, 3, 8
};

static EnumPropertyItem rna_ImageFormatSettings_color_depth_items[6] = {
	{2, "8", 0, "8", "8 bit color channels"},
	{4, "10", 0, "10", "10 bit color channels"},
	{8, "12", 0, "12", "12 bit color channels"},
	{16, "16", 0, "16", "16 bit color channels"},
	{64, "32", 0, "32", "32 bit color channels"},
	{0, NULL, 0, NULL, NULL}
};

EnumPropertyRNA rna_ImageFormatSettings_color_depth = {
	{(PropertyRNA *)&rna_ImageFormatSettings_quality, (PropertyRNA *)&rna_ImageFormatSettings_color_mode,
	-1, "color_depth", 1, "Color Depth",
	"Bit depth per channel",
	0, "*",
	PROP_ENUM, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 67371008, NULL, NULL,
	0, -1, NULL},
	ImageFormatSettings_color_depth_get, ImageFormatSettings_color_depth_set, rna_ImageFormatSettings_color_depth_itemf, NULL, NULL, NULL, rna_ImageFormatSettings_color_depth_items, 5, 2
};

IntPropertyRNA rna_ImageFormatSettings_quality = {
	{(PropertyRNA *)&rna_ImageFormatSettings_compression, (PropertyRNA *)&rna_ImageFormatSettings_color_depth,
	-1, "quality", 8193, "Quality",
	"Quality for image formats that support lossy compression",
	0, "*",
	PROP_INT, PROP_PERCENTAGE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 67371008, NULL, NULL,
	offsetof(ImageFormatData, quality), 2, NULL},
	ImageFormatSettings_quality_get, ImageFormatSettings_quality_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL,
	0, 100, 0, 100, 1, 0, NULL
};

IntPropertyRNA rna_ImageFormatSettings_compression = {
	{(PropertyRNA *)&rna_ImageFormatSettings_use_zbuffer, (PropertyRNA *)&rna_ImageFormatSettings_quality,
	-1, "compression", 8193, "Compression",
	"Amount of time to determine best compression: 0 = no compression with fast file output, 100 = maximum lossless compression with slow file output",
	0, "*",
	PROP_INT, PROP_PERCENTAGE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 67371008, NULL, NULL,
	offsetof(ImageFormatData, compress), 2, NULL},
	ImageFormatSettings_compression_get, ImageFormatSettings_compression_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL,
	0, 100, 0, 100, 1, 0, NULL
};

BoolPropertyRNA rna_ImageFormatSettings_use_zbuffer = {
	{(PropertyRNA *)&rna_ImageFormatSettings_use_preview, (PropertyRNA *)&rna_ImageFormatSettings_compression,
	-1, "use_zbuffer", 1, "Z Buffer",
	"Save the z-depth per pixel (32 bit unsigned int z-buffer)",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 67371008, NULL, NULL,
	0, -1, NULL},
	ImageFormatSettings_use_zbuffer_get, ImageFormatSettings_use_zbuffer_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_ImageFormatSettings_use_preview = {
	{(PropertyRNA *)&rna_ImageFormatSettings_use_cineon_log, (PropertyRNA *)&rna_ImageFormatSettings_use_zbuffer,
	-1, "use_preview", 1, "Preview",
	"When rendering animations, save JPG preview images in same directory",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 67371008, NULL, NULL,
	0, -1, NULL},
	ImageFormatSettings_use_preview_get, ImageFormatSettings_use_preview_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_ImageFormatSettings_use_cineon_log = {
	{(PropertyRNA *)&rna_ImageFormatSettings_cineon_black, (PropertyRNA *)&rna_ImageFormatSettings_use_preview,
	-1, "use_cineon_log", 1, "Log",
	"Convert to logarithmic color space",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 67371008, NULL, NULL,
	0, -1, NULL},
	ImageFormatSettings_use_cineon_log_get, ImageFormatSettings_use_cineon_log_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

IntPropertyRNA rna_ImageFormatSettings_cineon_black = {
	{(PropertyRNA *)&rna_ImageFormatSettings_cineon_white, (PropertyRNA *)&rna_ImageFormatSettings_use_cineon_log,
	-1, "cineon_black", 8193, "B",
	"Log conversion reference blackpoint",
	0, "*",
	PROP_INT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 67371008, NULL, NULL,
	offsetof(ImageFormatData, cineon_black), 1, NULL},
	ImageFormatSettings_cineon_black_get, ImageFormatSettings_cineon_black_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL,
	0, 1024, 0, 1024, 1, 0, NULL
};

IntPropertyRNA rna_ImageFormatSettings_cineon_white = {
	{(PropertyRNA *)&rna_ImageFormatSettings_cineon_gamma, (PropertyRNA *)&rna_ImageFormatSettings_cineon_black,
	-1, "cineon_white", 8193, "W",
	"Log conversion reference whitepoint",
	0, "*",
	PROP_INT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 67371008, NULL, NULL,
	offsetof(ImageFormatData, cineon_white), 1, NULL},
	ImageFormatSettings_cineon_white_get, ImageFormatSettings_cineon_white_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL,
	0, 1024, 0, 1024, 1, 0, NULL
};

FloatPropertyRNA rna_ImageFormatSettings_cineon_gamma = {
	{(PropertyRNA *)&rna_ImageFormatSettings_view_settings, (PropertyRNA *)&rna_ImageFormatSettings_cineon_white,
	-1, "cineon_gamma", 8193, "G",
	"Log conversion gamma",
	0, "*",
	PROP_FLOAT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 67371008, NULL, NULL,
	offsetof(ImageFormatData, cineon_gamma), 4, NULL},
	ImageFormatSettings_cineon_gamma_get, ImageFormatSettings_cineon_gamma_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 10.0f, 0.0f, 10.0f, 10.0f, 3, 0.0f, NULL
};

PointerPropertyRNA rna_ImageFormatSettings_view_settings = {
	{(PropertyRNA *)&rna_ImageFormatSettings_display_settings, (PropertyRNA *)&rna_ImageFormatSettings_cineon_gamma,
	-1, "view_settings", 8388608, "View Settings",
	"Color management settings applied on image before saving",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	ImageFormatSettings_view_settings_get, NULL, NULL, NULL,&RNA_ColorManagedViewSettings
};

PointerPropertyRNA rna_ImageFormatSettings_display_settings = {
	{NULL, (PropertyRNA *)&rna_ImageFormatSettings_view_settings,
	-1, "display_settings", 8388608, "Display Settings",
	"Settings of device saved image would be displayed on",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	ImageFormatSettings_display_settings_get, NULL, NULL, NULL,&RNA_ColorManagedDisplaySettings
};

StructRNA RNA_ImageFormatSettings = {
	{(ContainerRNA *)&RNA_SceneGameData, (ContainerRNA *)&RNA_UnitSettings,
	NULL,
	{(PropertyRNA *)&rna_ImageFormatSettings_rna_properties, (PropertyRNA *)&rna_ImageFormatSettings_display_settings}},
	"ImageFormatSettings", NULL, NULL, 4, "Image Format",
	"Settings for image formats",
	"*", 17,
	NULL, (PropertyRNA *)&rna_ImageFormatSettings_rna_properties,
	NULL,
	&RNA_Scene,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	{NULL, NULL}
};

/* Game Data */
CollectionPropertyRNA rna_SceneGameData_rna_properties = {
	{(PropertyRNA *)&rna_SceneGameData_rna_type, NULL,
	-1, "rna_properties", 128, "Properties",
	"RNA property collection",
	0, "*",
	PROP_COLLECTION, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	SceneGameData_rna_properties_begin, SceneGameData_rna_properties_next, SceneGameData_rna_properties_end, SceneGameData_rna_properties_get, NULL, NULL, SceneGameData_rna_properties_lookup_string, NULL, &RNA_Property
};

PointerPropertyRNA rna_SceneGameData_rna_type = {
	{(PropertyRNA *)&rna_SceneGameData_resolution_x, (PropertyRNA *)&rna_SceneGameData_rna_properties,
	-1, "rna_type", 8912896, "RNA",
	"RNA type definition",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	SceneGameData_rna_type_get, NULL, NULL, NULL,&RNA_Struct
};

IntPropertyRNA rna_SceneGameData_resolution_x = {
	{(PropertyRNA *)&rna_SceneGameData_resolution_y, (PropertyRNA *)&rna_SceneGameData_rna_type,
	-1, "resolution_x", 8193, "Resolution X",
	"Number of horizontal pixels in the screen",
	0, "*",
	PROP_INT, PROP_PIXEL | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 67108864, NULL, NULL,
	offsetof(GameData, xplay), 1, NULL},
	SceneGameData_resolution_x_get, SceneGameData_resolution_x_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL,
	4, 10000, 4, 10000, 1, 0, NULL
};

IntPropertyRNA rna_SceneGameData_resolution_y = {
	{(PropertyRNA *)&rna_SceneGameData_vsync, (PropertyRNA *)&rna_SceneGameData_resolution_x,
	-1, "resolution_y", 8193, "Resolution Y",
	"Number of vertical pixels in the screen",
	0, "*",
	PROP_INT, PROP_PIXEL | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 67108864, NULL, NULL,
	offsetof(GameData, yplay), 1, NULL},
	SceneGameData_resolution_y_get, SceneGameData_resolution_y_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL,
	4, 10000, 4, 10000, 1, 0, NULL
};

static EnumPropertyItem rna_SceneGameData_vsync_items[4] = {
	{1, "OFF", 0, "Off", "Disable vsync"},
	{0, "ON", 0, "On", "Enable vsync"},
	{2, "ADAPTIVE", 0, "Adaptive", "Enable adaptive vsync (if supported)"},
	{0, NULL, 0, NULL, NULL}
};

EnumPropertyRNA rna_SceneGameData_vsync = {
	{(PropertyRNA *)&rna_SceneGameData_samples, (PropertyRNA *)&rna_SceneGameData_resolution_y,
	-1, "vsync", 1, "Vsync",
	"Change vsync settings",
	0, "*",
	PROP_ENUM, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	SceneGameData_vsync_get, SceneGameData_vsync_set, NULL, NULL, NULL, NULL, rna_SceneGameData_vsync_items, 3, 0
};

static EnumPropertyItem rna_SceneGameData_samples_items[6] = {
	{0, "SAMPLES_0", 0, "Off", ""},
	{2, "SAMPLES_2", 0, "2x", ""},
	{4, "SAMPLES_4", 0, "4x", ""},
	{8, "SAMPLES_8", 0, "8x", ""},
	{16, "SAMPLES_16", 0, "16x", ""},
	{0, NULL, 0, NULL, NULL}
};

EnumPropertyRNA rna_SceneGameData_samples = {
	{(PropertyRNA *)&rna_SceneGameData_depth, (PropertyRNA *)&rna_SceneGameData_vsync,
	-1, "samples", 1, "AA Samples",
	"The number of AA Samples to use for MSAA",
	0, "*",
	PROP_ENUM, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	SceneGameData_samples_get, SceneGameData_samples_set, NULL, NULL, NULL, NULL, rna_SceneGameData_samples_items, 5, 0
};

IntPropertyRNA rna_SceneGameData_depth = {
	{(PropertyRNA *)&rna_SceneGameData_exit_key, (PropertyRNA *)&rna_SceneGameData_samples,
	-1, "depth", 8193, "Bits",
	"Display bit depth of full screen display",
	0, "*",
	PROP_INT, PROP_UNSIGNED | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 67108864, NULL, NULL,
	offsetof(GameData, depth), 1, NULL},
	SceneGameData_depth_get, SceneGameData_depth_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL,
	8, 32, 8, 32, 1, 0, NULL
};

static EnumPropertyItem rna_SceneGameData_exit_key_items[196] = {
	{0, "NONE", 0, "", ""},
	{1, "LEFTMOUSE", 0, "Left Mouse", ""},
	{2, "MIDDLEMOUSE", 0, "Middle Mouse", ""},
	{3, "RIGHTMOUSE", 0, "Right Mouse", ""},
	{7, "BUTTON4MOUSE", 0, "Button4 Mouse", ""},
	{8, "BUTTON5MOUSE", 0, "Button5 Mouse", ""},
	{18, "BUTTON6MOUSE", 0, "Button6 Mouse", ""},
	{19, "BUTTON7MOUSE", 0, "Button7 Mouse", ""},
	{5, "ACTIONMOUSE", 0, "Action Mouse", ""},
	{6, "SELECTMOUSE", 0, "Select Mouse", ""},
	{0, "", 0, NULL, NULL},
	{4, "MOUSEMOVE", 0, "Mouse Move", ""},
	{17, "INBETWEEN_MOUSEMOVE", 0, "In-between Move", ""},
	{14, "TRACKPADPAN", 0, "Mouse/Trackpad Pan", ""},
	{15, "TRACKPADZOOM", 0, "Mouse/Trackpad Zoom", ""},
	{16, "MOUSEROTATE", 0, "Mouse/Trackpad Rotate", ""},
	{0, "", 0, NULL, NULL},
	{10, "WHEELUPMOUSE", 0, "Wheel Up", ""},
	{11, "WHEELDOWNMOUSE", 0, "Wheel Down", ""},
	{12, "WHEELINMOUSE", 0, "Wheel In", ""},
	{13, "WHEELOUTMOUSE", 0, "Wheel Out", ""},
	{0, "", 0, NULL, NULL},
	{20483, "EVT_TWEAK_L", 0, "Tweak Left", ""},
	{20484, "EVT_TWEAK_M", 0, "Tweak Middle", ""},
	{20485, "EVT_TWEAK_R", 0, "Tweak Right", ""},
	{20486, "EVT_TWEAK_A", 0, "Tweak Action", ""},
	{20487, "EVT_TWEAK_S", 0, "Tweak Select", ""},
	{0, "", 0, NULL, NULL},
	{97, "A", 0, "A", ""},
	{98, "B", 0, "B", ""},
	{99, "C", 0, "C", ""},
	{100, "D", 0, "D", ""},
	{101, "E", 0, "E", ""},
	{102, "F", 0, "F", ""},
	{103, "G", 0, "G", ""},
	{104, "H", 0, "H", ""},
	{105, "I", 0, "I", ""},
	{106, "J", 0, "J", ""},
	{107, "K", 0, "K", ""},
	{108, "L", 0, "L", ""},
	{109, "M", 0, "M", ""},
	{110, "N", 0, "N", ""},
	{111, "O", 0, "O", ""},
	{112, "P", 0, "P", ""},
	{113, "Q", 0, "Q", ""},
	{114, "R", 0, "R", ""},
	{115, "S", 0, "S", ""},
	{116, "T", 0, "T", ""},
	{117, "U", 0, "U", ""},
	{118, "V", 0, "V", ""},
	{119, "W", 0, "W", ""},
	{120, "X", 0, "X", ""},
	{121, "Y", 0, "Y", ""},
	{122, "Z", 0, "Z", ""},
	{0, "", 0, NULL, NULL},
	{48, "ZERO", 0, "0", ""},
	{49, "ONE", 0, "1", ""},
	{50, "TWO", 0, "2", ""},
	{51, "THREE", 0, "3", ""},
	{52, "FOUR", 0, "4", ""},
	{53, "FIVE", 0, "5", ""},
	{54, "SIX", 0, "6", ""},
	{55, "SEVEN", 0, "7", ""},
	{56, "EIGHT", 0, "8", ""},
	{57, "NINE", 0, "9", ""},
	{0, "", 0, NULL, NULL},
	{212, "LEFT_CTRL", 0, "Left Ctrl", ""},
	{213, "LEFT_ALT", 0, "Left Alt", ""},
	{217, "LEFT_SHIFT", 0, "Left Shift", ""},
	{214, "RIGHT_ALT", 0, "Right Alt", ""},
	{215, "RIGHT_CTRL", 0, "Right Ctrl", ""},
	{216, "RIGHT_SHIFT", 0, "Right Shift", ""},
	{0, "", 0, NULL, NULL},
	{172, "OSKEY", 0, "OS Key", ""},
	{173, "GRLESS", 0, "Grless", ""},
	{218, "ESC", 0, "Esc", ""},
	{219, "TAB", 0, "Tab", ""},
	{220, "RET", 0, "Return", ""},
	{221, "SPACE", 0, "Spacebar", ""},
	{222, "LINE_FEED", 0, "Line Feed", ""},
	{223, "BACK_SPACE", 0, "Back Space", ""},
	{224, "DEL", 0, "Delete", ""},
	{225, "SEMI_COLON", 0, ";", ""},
	{226, "PERIOD", 0, ".", ""},
	{227, "COMMA", 0, ",", ""},
	{228, "QUOTE", 0, "\"", ""},
	{229, "ACCENT_GRAVE", 0, "`", ""},
	{230, "MINUS", 0, "-", ""},
	{232, "SLASH", 0, "/", ""},
	{233, "BACK_SLASH", 0, "\\", ""},
	{234, "EQUAL", 0, "=", ""},
	{235, "LEFT_BRACKET", 0, "[", ""},
	{236, "RIGHT_BRACKET", 0, "]", ""},
	{137, "LEFT_ARROW", 0, "Left Arrow", ""},
	{138, "DOWN_ARROW", 0, "Down Arrow", ""},
	{139, "RIGHT_ARROW", 0, "Right Arrow", ""},
	{140, "UP_ARROW", 0, "Up Arrow", ""},
	{152, "NUMPAD_2", 0, "Numpad 2", ""},
	{154, "NUMPAD_4", 0, "Numpad 4", ""},
	{156, "NUMPAD_6", 0, "Numpad 6", ""},
	{158, "NUMPAD_8", 0, "Numpad 8", ""},
	{151, "NUMPAD_1", 0, "Numpad 1", ""},
	{153, "NUMPAD_3", 0, "Numpad 3", ""},
	{155, "NUMPAD_5", 0, "Numpad 5", ""},
	{157, "NUMPAD_7", 0, "Numpad 7", ""},
	{159, "NUMPAD_9", 0, "Numpad 9", ""},
	{199, "NUMPAD_PERIOD", 0, "Numpad .", ""},
	{161, "NUMPAD_SLASH", 0, "Numpad /", ""},
	{160, "NUMPAD_ASTERIX", 0, "Numpad *", ""},
	{150, "NUMPAD_0", 0, "Numpad 0", ""},
	{162, "NUMPAD_MINUS", 0, "Numpad -", ""},
	{163, "NUMPAD_ENTER", 0, "Numpad Enter", ""},
	{164, "NUMPAD_PLUS", 0, "Numpad +", ""},
	{300, "F1", 0, "F1", ""},
	{301, "F2", 0, "F2", ""},
	{302, "F3", 0, "F3", ""},
	{303, "F4", 0, "F4", ""},
	{304, "F5", 0, "F5", ""},
	{305, "F6", 0, "F6", ""},
	{306, "F7", 0, "F7", ""},
	{307, "F8", 0, "F8", ""},
	{308, "F9", 0, "F9", ""},
	{309, "F10", 0, "F10", ""},
	{310, "F11", 0, "F11", ""},
	{311, "F12", 0, "F12", ""},
	{312, "F13", 0, "F13", ""},
	{313, "F14", 0, "F14", ""},
	{314, "F15", 0, "F15", ""},
	{315, "F16", 0, "F16", ""},
	{316, "F17", 0, "F17", ""},
	{317, "F18", 0, "F18", ""},
	{318, "F19", 0, "F19", ""},
	{165, "PAUSE", 0, "Pause", ""},
	{166, "INSERT", 0, "Insert", ""},
	{167, "HOME", 0, "Home", ""},
	{168, "PAGE_UP", 0, "Page Up", ""},
	{169, "PAGE_DOWN", 0, "Page Down", ""},
	{170, "END", 0, "End", ""},
	{0, "", 0, NULL, NULL},
	{174, "MEDIA_PLAY", 0, "Media Play/Pause", ""},
	{175, "MEDIA_STOP", 0, "Media Stop", ""},
	{176, "MEDIA_FIRST", 0, "Media First", ""},
	{177, "MEDIA_LAST", 0, "Media Last", ""},
	{0, "", 0, NULL, NULL},
	{-2, "TEXTINPUT", 0, "Text Input", ""},
	{0, "", 0, NULL, NULL},
	{260, "WINDOW_DEACTIVATE", 0, "Window Deactivate", ""},
	{272, "TIMER", 0, "Timer", ""},
	{273, "TIMER0", 0, "Timer 0", ""},
	{274, "TIMER1", 0, "Timer 1", ""},
	{275, "TIMER2", 0, "Timer 2", ""},
	{276, "TIMER_JOBS", 0, "Timer Jobs", ""},
	{277, "TIMER_AUTOSAVE", 0, "Timer Autosave", ""},
	{278, "TIMER_REPORT", 0, "Timer Report", ""},
	{279, "TIMERREGION", 0, "Timer Region", ""},
	{0, "", 0, NULL, NULL},
	{400, "NDOF_MOTION", 0, "NDOF Motion", ""},
	{401, "NDOF_BUTTON_MENU", 0, "NDOF Menu", ""},
	{402, "NDOF_BUTTON_FIT", 0, "NDOF Fit", ""},
	{403, "NDOF_BUTTON_TOP", 0, "NDOF Top", ""},
	{404, "NDOF_BUTTON_BOTTOM", 0, "NDOF Bottom", ""},
	{405, "NDOF_BUTTON_LEFT", 0, "NDOF Left", ""},
	{406, "NDOF_BUTTON_RIGHT", 0, "NDOF Right", ""},
	{407, "NDOF_BUTTON_FRONT", 0, "NDOF Front", ""},
	{408, "NDOF_BUTTON_BACK", 0, "NDOF Back", ""},
	{409, "NDOF_BUTTON_ISO1", 0, "NDOF Isometric 1", ""},
	{410, "NDOF_BUTTON_ISO2", 0, "NDOF Isometric 2", ""},
	{411, "NDOF_BUTTON_ROLL_CW", 0, "NDOF Roll CW", ""},
	{412, "NDOF_BUTTON_ROLL_CCW", 0, "NDOF Roll CCW", ""},
	{413, "NDOF_BUTTON_SPIN_CW", 0, "NDOF Spin CW", ""},
	{414, "NDOF_BUTTON_SPIN_CCW", 0, "NDOF Spin CCW", ""},
	{415, "NDOF_BUTTON_TILT_CW", 0, "NDOF Tilt CW", ""},
	{416, "NDOF_BUTTON_TILT_CCW", 0, "NDOF Tilt CCW", ""},
	{417, "NDOF_BUTTON_ROTATE", 0, "NDOF Rotate", ""},
	{418, "NDOF_BUTTON_PANZOOM", 0, "NDOF Pan/Zoom", ""},
	{419, "NDOF_BUTTON_DOMINANT", 0, "NDOF Dominant", ""},
	{420, "NDOF_BUTTON_PLUS", 0, "NDOF Plus", ""},
	{421, "NDOF_BUTTON_MINUS", 0, "NDOF Minus", ""},
	{422, "NDOF_BUTTON_ESC", 0, "NDOF Esc", NULL},
	{423, "NDOF_BUTTON_ALT", 0, "NDOF Alt", NULL},
	{424, "NDOF_BUTTON_SHIFT", 0, "NDOF Shift", NULL},
	{425, "NDOF_BUTTON_CTRL", 0, "NDOF Ctrl", NULL},
	{426, "NDOF_BUTTON_1", 0, "NDOF Button 1", ""},
	{427, "NDOF_BUTTON_2", 0, "NDOF Button 2", ""},
	{428, "NDOF_BUTTON_3", 0, "NDOF Button 3", ""},
	{429, "NDOF_BUTTON_4", 0, "NDOF Button 4", ""},
	{430, "NDOF_BUTTON_5", 0, "NDOF Button 5", ""},
	{431, "NDOF_BUTTON_6", 0, "NDOF Button 6", ""},
	{432, "NDOF_BUTTON_7", 0, "NDOF Button 7", ""},
	{433, "NDOF_BUTTON_8", 0, "NDOF Button 8", ""},
	{434, "NDOF_BUTTON_9", 0, "NDOF Button 9", ""},
	{435, "NDOF_BUTTON_10", 0, "NDOF Button 10", ""},
	{436, "NDOF_BUTTON_A", 0, "NDOF Button A", ""},
	{437, "NDOF_BUTTON_B", 0, "NDOF Button B", ""},
	{438, "NDOF_BUTTON_C", 0, "NDOF Button C", ""},
	{0, NULL, 0, NULL, NULL}
};

EnumPropertyRNA rna_SceneGameData_exit_key = {
	{(PropertyRNA *)&rna_SceneGameData_raster_storage, (PropertyRNA *)&rna_SceneGameData_depth,
	-1, "exit_key", 1, "Exit Key",
	"The key that exits the Game Engine",
	0, "*",
	PROP_ENUM, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 67108864, NULL, NULL,
	0, -1, NULL},
	SceneGameData_exit_key_get, SceneGameData_exit_key_set, NULL, NULL, NULL, NULL, rna_SceneGameData_exit_key_items, 195, 0
};

static EnumPropertyItem rna_SceneGameData_raster_storage_items[4] = {
	{0, "AUTO", 0, "Auto Select", "Choose the best supported mode"},
	{1, "IMMEDIATE", 0, "Immediate Mode", "Slowest performance, requires OpenGL (any version)"},
	{2, "VERTEX_ARRAY", 0, "Vertex Arrays", "Better performance, requires at least OpenGL 1.1"},
	{0, NULL, 0, NULL, NULL}
};

EnumPropertyRNA rna_SceneGameData_raster_storage = {
	{(PropertyRNA *)&rna_SceneGameData_frequency, (PropertyRNA *)&rna_SceneGameData_exit_key,
	-1, "raster_storage", 1, "Storage",
	"Set the storage mode used by the rasterizer",
	0, "*",
	PROP_ENUM, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 67108864, NULL, NULL,
	0, -1, NULL},
	SceneGameData_raster_storage_get, SceneGameData_raster_storage_set, NULL, NULL, NULL, NULL, rna_SceneGameData_raster_storage_items, 3, 0
};

IntPropertyRNA rna_SceneGameData_frequency = {
	{(PropertyRNA *)&rna_SceneGameData_show_fullscreen, (PropertyRNA *)&rna_SceneGameData_raster_storage,
	-1, "frequency", 8193, "Freq",
	"Display clock frequency of fullscreen display",
	0, "*",
	PROP_INT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 67108864, NULL, NULL,
	offsetof(GameData, freqplay), 1, NULL},
	SceneGameData_frequency_get, SceneGameData_frequency_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL,
	4, 2000, 4, 2000, 1, 0, NULL
};

BoolPropertyRNA rna_SceneGameData_show_fullscreen = {
	{(PropertyRNA *)&rna_SceneGameData_use_desktop, (PropertyRNA *)&rna_SceneGameData_frequency,
	-1, "show_fullscreen", 1, "Fullscreen",
	"Start player in a new fullscreen display",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 67108864, NULL, NULL,
	0, -1, NULL},
	SceneGameData_show_fullscreen_get, SceneGameData_show_fullscreen_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_SceneGameData_use_desktop = {
	{(PropertyRNA *)&rna_SceneGameData_frame_type, (PropertyRNA *)&rna_SceneGameData_show_fullscreen,
	-1, "use_desktop", 1, "Desktop",
	"Use the current desktop resolution in fullscreen mode",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 67108864, NULL, NULL,
	0, -1, NULL},
	SceneGameData_use_desktop_get, SceneGameData_use_desktop_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

static EnumPropertyItem rna_SceneGameData_frame_type_items[4] = {
	{0, "LETTERBOX", 0, "Letterbox", "Show the entire viewport in the display window, using bar horizontally or vertically"},
	{1, "EXTEND", 0, "Extend", "Show the entire viewport in the display window, viewing more horizontally or vertically"},
	{2, "SCALE", 0, "Scale", "Stretch or squeeze the viewport to fill the display window"},
	{0, NULL, 0, NULL, NULL}
};

EnumPropertyRNA rna_SceneGameData_frame_type = {
	{(PropertyRNA *)&rna_SceneGameData_frame_color, (PropertyRNA *)&rna_SceneGameData_use_desktop,
	-1, "frame_type", 1, "Framing Types",
	"Select the type of Framing you want",
	0, "*",
	PROP_ENUM, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 67108864, NULL, NULL,
	0, -1, NULL},
	SceneGameData_frame_type_get, SceneGameData_frame_type_set, NULL, NULL, NULL, NULL, rna_SceneGameData_frame_type_items, 3, 0
};

static float rna_SceneGameData_frame_color_default[3] = {
	0.0f,
	0.0f,
	0.0f
};

FloatPropertyRNA rna_SceneGameData_frame_color = {
	{(PropertyRNA *)&rna_SceneGameData_stereo, (PropertyRNA *)&rna_SceneGameData_frame_type,
	-1, "frame_color", 8193, "Framing Color",
	"Set color of the bars",
	0, "*",
	PROP_FLOAT, PROP_COLOR | PROP_UNIT_NONE, NULL, 1, {3, 0, 0}, 3,
	NULL, 67108864, NULL, NULL,
	offsetof(GameData, framing.col), 4, NULL},
	NULL, NULL, SceneGameData_frame_color_get, SceneGameData_frame_color_set, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 1.0f, 0.0f, 1.0f, 10.0f, 3, 0.0f, rna_SceneGameData_frame_color_default
};

static EnumPropertyItem rna_SceneGameData_stereo_items[4] = {
	{1, "NONE", 0, "None", "Disable Stereo and Dome environments"},
	{2, "STEREO", 0, "Stereo", "Enable Stereo environment"},
	{3, "DOME", 0, "Dome", "Enable Dome environment"},
	{0, NULL, 0, NULL, NULL}
};

EnumPropertyRNA rna_SceneGameData_stereo = {
	{(PropertyRNA *)&rna_SceneGameData_stereo_mode, (PropertyRNA *)&rna_SceneGameData_frame_color,
	-1, "stereo", 1, "Stereo Options",
	"",
	0, "*",
	PROP_ENUM, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 67108864, NULL, NULL,
	0, -1, NULL},
	SceneGameData_stereo_get, SceneGameData_stereo_set, NULL, NULL, NULL, NULL, rna_SceneGameData_stereo_items, 3, 1
};

static EnumPropertyItem rna_SceneGameData_stereo_mode_items[8] = {
	{2, "QUADBUFFERED", 0, "Quad-Buffer", ""},
	{3, "ABOVEBELOW", 0, "Above-Below", ""},
	{4, "INTERLACED", 0, "Interlaced", ""},
	{5, "ANAGLYPH", 0, "Anaglyph", ""},
	{6, "SIDEBYSIDE", 0, "Side-by-side", ""},
	{7, "VINTERLACE", 0, "Vinterlace", ""},
	{9, "3DTVTOPBOTTOM", 0, "3DTV Top-Bottom", ""},
	{0, NULL, 0, NULL, NULL}
};

EnumPropertyRNA rna_SceneGameData_stereo_mode = {
	{(PropertyRNA *)&rna_SceneGameData_stereo_eye_separation, (PropertyRNA *)&rna_SceneGameData_stereo,
	-1, "stereo_mode", 1, "Stereo Mode",
	"Stereographic techniques",
	0, "*",
	PROP_ENUM, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 67108864, NULL, NULL,
	0, -1, NULL},
	SceneGameData_stereo_mode_get, SceneGameData_stereo_mode_set, NULL, NULL, NULL, NULL, rna_SceneGameData_stereo_mode_items, 7, 2
};

FloatPropertyRNA rna_SceneGameData_stereo_eye_separation = {
	{(PropertyRNA *)&rna_SceneGameData_dome_mode, (PropertyRNA *)&rna_SceneGameData_stereo_mode,
	-1, "stereo_eye_separation", 8193, "Eye Separation",
	"Set the distance between the eyes - the camera focal distance/30 should be fine",
	0, "*",
	PROP_FLOAT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 67108864, NULL, NULL,
	offsetof(GameData, eyeseparation), 4, NULL},
	SceneGameData_stereo_eye_separation_get, SceneGameData_stereo_eye_separation_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0099999998f, 5.0f, 0.0099999998f, 5.0f, 10.0f, 3, 0.0f, NULL
};

static EnumPropertyItem rna_SceneGameData_dome_mode_items[6] = {
	{1, "FISHEYE", 0, "Fisheye", ""},
	{2, "TRUNCATED_FRONT", 0, "Front-Truncated", ""},
	{3, "TRUNCATED_REAR", 0, "Rear-Truncated", ""},
	{4, "ENVMAP", 0, "Cube Map", ""},
	{5, "PANORAM_SPH", 0, "Spherical Panoramic", ""},
	{0, NULL, 0, NULL, NULL}
};

EnumPropertyRNA rna_SceneGameData_dome_mode = {
	{(PropertyRNA *)&rna_SceneGameData_dome_tessellation, (PropertyRNA *)&rna_SceneGameData_stereo_eye_separation,
	-1, "dome_mode", 1, "Dome Mode",
	"Dome physical configurations",
	0, "*",
	PROP_ENUM, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 67108864, NULL, NULL,
	0, -1, NULL},
	SceneGameData_dome_mode_get, SceneGameData_dome_mode_set, NULL, NULL, NULL, NULL, rna_SceneGameData_dome_mode_items, 5, 1
};

IntPropertyRNA rna_SceneGameData_dome_tessellation = {
	{(PropertyRNA *)&rna_SceneGameData_dome_buffer_resolution, (PropertyRNA *)&rna_SceneGameData_dome_mode,
	-1, "dome_tessellation", 8193, "Tessellation",
	"Tessellation level - check the generated mesh in wireframe mode",
	0, "*",
	PROP_INT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 67108864, NULL, NULL,
	offsetof(GameData, dome.res), 1, NULL},
	SceneGameData_dome_tessellation_get, SceneGameData_dome_tessellation_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL,
	1, 8, -32768, 32767, 1, 0, NULL
};

FloatPropertyRNA rna_SceneGameData_dome_buffer_resolution = {
	{(PropertyRNA *)&rna_SceneGameData_dome_angle, (PropertyRNA *)&rna_SceneGameData_dome_tessellation,
	-1, "dome_buffer_resolution", 8193, "Buffer Resolution",
	"Buffer Resolution - decrease it to increase speed",
	0, "*",
	PROP_FLOAT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 67108864, NULL, NULL,
	offsetof(GameData, dome.resbuf), 4, NULL},
	SceneGameData_dome_buffer_resolution_get, SceneGameData_dome_buffer_resolution_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.1000000015f, 1.0f, -FLT_MAX, FLT_MAX, 0.1000000015f, 2, 0.0f, NULL
};

IntPropertyRNA rna_SceneGameData_dome_angle = {
	{(PropertyRNA *)&rna_SceneGameData_dome_tilt, (PropertyRNA *)&rna_SceneGameData_dome_buffer_resolution,
	-1, "dome_angle", 8193, "Angle",
	"Field of View of the Dome - it only works in mode Fisheye and Truncated",
	0, "*",
	PROP_INT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 67108864, NULL, NULL,
	offsetof(GameData, dome.angle), 1, NULL},
	SceneGameData_dome_angle_get, SceneGameData_dome_angle_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL,
	90, 250, -32768, 32767, 1, 0, NULL
};

IntPropertyRNA rna_SceneGameData_dome_tilt = {
	{(PropertyRNA *)&rna_SceneGameData_dome_text, (PropertyRNA *)&rna_SceneGameData_dome_angle,
	-1, "dome_tilt", 8193, "Tilt",
	"Camera rotation in horizontal axis",
	0, "*",
	PROP_INT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 67108864, NULL, NULL,
	offsetof(GameData, dome.tilt), 1, NULL},
	SceneGameData_dome_tilt_get, SceneGameData_dome_tilt_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL,
	-180, 180, -32768, 32767, 1, 0, NULL
};

PointerPropertyRNA rna_SceneGameData_dome_text = {
	{(PropertyRNA *)&rna_SceneGameData_physics_engine, (PropertyRNA *)&rna_SceneGameData_dome_tilt,
	-1, "dome_text", 8388609, "Warp Data",
	"Custom Warp Mesh data file",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 67108864, NULL, NULL,
	0, -1, NULL},
	SceneGameData_dome_text_get, SceneGameData_dome_text_set, NULL, NULL,&RNA_Text
};

static EnumPropertyItem rna_SceneGameData_physics_engine_items[3] = {
	{0, "NONE", 0, "None", "Don\'t use a physics engine"},
	{5, "BULLET", 0, "Bullet", "Use the Bullet physics engine"},
	{0, NULL, 0, NULL, NULL}
};

EnumPropertyRNA rna_SceneGameData_physics_engine = {
	{(PropertyRNA *)&rna_SceneGameData_physics_gravity, (PropertyRNA *)&rna_SceneGameData_dome_text,
	-1, "physics_engine", 1, "Physics Engine",
	"Physics engine used for physics simulation in the game engine",
	0, "*",
	PROP_ENUM, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 67108864, NULL, NULL,
	0, -1, NULL},
	SceneGameData_physics_engine_get, SceneGameData_physics_engine_set, NULL, NULL, NULL, NULL, rna_SceneGameData_physics_engine_items, 2, 0
};

FloatPropertyRNA rna_SceneGameData_physics_gravity = {
	{(PropertyRNA *)&rna_SceneGameData_occlusion_culling_resolution, (PropertyRNA *)&rna_SceneGameData_physics_engine,
	-1, "physics_gravity", 8193, "Physics Gravity",
	"Gravitational constant used for physics simulation in the game engine",
	0, "*",
	PROP_FLOAT, PROP_ACCELERATION | PROP_UNIT_ACCELERATION, NULL, 0, {0, 0, 0}, 0,
	NULL, 67108864, NULL, NULL,
	offsetof(GameData, gravity), 4, NULL},
	SceneGameData_physics_gravity_get, SceneGameData_physics_gravity_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 10000.0f, 0.0f, 10000.0f, 1.0f, 2, 0.0f, NULL
};

IntPropertyRNA rna_SceneGameData_occlusion_culling_resolution = {
	{(PropertyRNA *)&rna_SceneGameData_fps, (PropertyRNA *)&rna_SceneGameData_physics_gravity,
	-1, "occlusion_culling_resolution", 8193, "Occlusion Resolution",
	"Size of the occlusion buffer, use higher value for better precision (slower)",
	0, "*",
	PROP_INT, PROP_PIXEL | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 67108864, NULL, NULL,
	offsetof(GameData, occlusionRes), 1, NULL},
	SceneGameData_occlusion_culling_resolution_get, SceneGameData_occlusion_culling_resolution_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL,
	128, 1024, 128, 1024, 1, 0, NULL
};

IntPropertyRNA rna_SceneGameData_fps = {
	{(PropertyRNA *)&rna_SceneGameData_logic_step_max, (PropertyRNA *)&rna_SceneGameData_occlusion_culling_resolution,
	-1, "fps", 8193, "Frames Per Second",
	"Nominal number of game frames per second (physics fixed timestep = 1/fps, independently of actual frame rate)",
	0, "*",
	PROP_INT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 67108864, NULL, NULL,
	offsetof(GameData, ticrate), 1, NULL},
	SceneGameData_fps_get, SceneGameData_fps_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL,
	1, 10000, 1, 10000, 1, 0, NULL
};

IntPropertyRNA rna_SceneGameData_logic_step_max = {
	{(PropertyRNA *)&rna_SceneGameData_physics_step_max, (PropertyRNA *)&rna_SceneGameData_fps,
	-1, "logic_step_max", 8193, "Max Logic Steps",
	"Maximum number of logic frame per game frame if graphics slows down the game, higher value allows better synchronization with physics",
	0, "*",
	PROP_INT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 67108864, NULL, NULL,
	offsetof(GameData, maxlogicstep), 1, NULL},
	SceneGameData_logic_step_max_get, SceneGameData_logic_step_max_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL,
	1, 5, 1, 5, 1, 0, NULL
};

IntPropertyRNA rna_SceneGameData_physics_step_max = {
	{(PropertyRNA *)&rna_SceneGameData_physics_step_sub, (PropertyRNA *)&rna_SceneGameData_logic_step_max,
	-1, "physics_step_max", 8193, "Max Physics Steps",
	"Maximum number of physics step per game frame if graphics slows down the game, higher value allows physics to keep up with realtime",
	0, "*",
	PROP_INT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 67108864, NULL, NULL,
	offsetof(GameData, maxphystep), 1, NULL},
	SceneGameData_physics_step_max_get, SceneGameData_physics_step_max_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL,
	1, 5, 1, 5, 1, 0, NULL
};

IntPropertyRNA rna_SceneGameData_physics_step_sub = {
	{(PropertyRNA *)&rna_SceneGameData_deactivation_linear_threshold, (PropertyRNA *)&rna_SceneGameData_physics_step_max,
	-1, "physics_step_sub", 8193, "Physics Sub Steps",
	"Number of simulation substep per physic timestep, higher value give better physics precision",
	0, "*",
	PROP_INT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 67108864, NULL, NULL,
	offsetof(GameData, physubstep), 1, NULL},
	SceneGameData_physics_step_sub_get, SceneGameData_physics_step_sub_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL,
	1, 5, 1, 50, 1, 0, NULL
};

FloatPropertyRNA rna_SceneGameData_deactivation_linear_threshold = {
	{(PropertyRNA *)&rna_SceneGameData_deactivation_angular_threshold, (PropertyRNA *)&rna_SceneGameData_physics_step_sub,
	-1, "deactivation_linear_threshold", 8193, "Deactivation Linear Threshold",
	"Linear velocity that an object must be below before the deactivation timer can start",
	0, "*",
	PROP_FLOAT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 67108864, NULL, NULL,
	offsetof(GameData, lineardeactthreshold), 4, NULL},
	SceneGameData_deactivation_linear_threshold_get, SceneGameData_deactivation_linear_threshold_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0010000000f, 10000.0f, 0.0010000000f, 10000.0f, 2.0f, 3, 0.0f, NULL
};

FloatPropertyRNA rna_SceneGameData_deactivation_angular_threshold = {
	{(PropertyRNA *)&rna_SceneGameData_deactivation_time, (PropertyRNA *)&rna_SceneGameData_deactivation_linear_threshold,
	-1, "deactivation_angular_threshold", 8193, "Deactivation Angular Threshold",
	"Angular velocity that an object must be below before the deactivation timer can start",
	0, "*",
	PROP_FLOAT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 67108864, NULL, NULL,
	offsetof(GameData, angulardeactthreshold), 4, NULL},
	SceneGameData_deactivation_angular_threshold_get, SceneGameData_deactivation_angular_threshold_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0010000000f, 10000.0f, 0.0010000000f, 10000.0f, 2.0f, 3, 0.0f, NULL
};

FloatPropertyRNA rna_SceneGameData_deactivation_time = {
	{(PropertyRNA *)&rna_SceneGameData_use_occlusion_culling, (PropertyRNA *)&rna_SceneGameData_deactivation_angular_threshold,
	-1, "deactivation_time", 8193, "Deactivation Time",
	"Amount of time (in seconds) after which objects with a velocity less than the given threshold will deactivate (0.0 means no deactivation)",
	0, "*",
	PROP_FLOAT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 67108864, NULL, NULL,
	offsetof(GameData, deactivationtime), 4, NULL},
	SceneGameData_deactivation_time_get, SceneGameData_deactivation_time_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 60.0f, 0.0f, 60.0f, 1.0f, 1, 0.0f, NULL
};

BoolPropertyRNA rna_SceneGameData_use_occlusion_culling = {
	{(PropertyRNA *)&rna_SceneGameData_use_activity_culling, (PropertyRNA *)&rna_SceneGameData_deactivation_time,
	-1, "use_occlusion_culling", 1, "DBVT Culling",
	"Use optimized Bullet DBVT tree for view frustum and occlusion culling (more efficient, but it can waste unnecessary CPU if the scene doesn\'t have occluder objects)",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	SceneGameData_use_occlusion_culling_get, SceneGameData_use_occlusion_culling_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_SceneGameData_use_activity_culling = {
	{(PropertyRNA *)&rna_SceneGameData_activity_culling_box_radius, (PropertyRNA *)&rna_SceneGameData_use_occlusion_culling,
	-1, "use_activity_culling", 1, "Activity Culling",
	"Activity culling is enabled",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	SceneGameData_use_activity_culling_get, SceneGameData_use_activity_culling_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

FloatPropertyRNA rna_SceneGameData_activity_culling_box_radius = {
	{(PropertyRNA *)&rna_SceneGameData_show_debug_properties, (PropertyRNA *)&rna_SceneGameData_use_activity_culling,
	-1, "activity_culling_box_radius", 8193, "Box Radius",
	"Radius of the activity bubble, in Manhattan length (objects outside the box are activity-culled)",
	0, "*",
	PROP_FLOAT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	offsetof(GameData, activityBoxRadius), 4, NULL},
	SceneGameData_activity_culling_box_radius_get, SceneGameData_activity_culling_box_radius_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 1000.0f, 0.0f, 1000.0f, 10.0f, 3, 0.0f, NULL
};

BoolPropertyRNA rna_SceneGameData_show_debug_properties = {
	{(PropertyRNA *)&rna_SceneGameData_show_framerate_profile, (PropertyRNA *)&rna_SceneGameData_activity_culling_box_radius,
	-1, "show_debug_properties", 1, "Show Debug Properties",
	"Show properties marked for debugging while the game runs",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	SceneGameData_show_debug_properties_get, SceneGameData_show_debug_properties_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_SceneGameData_show_framerate_profile = {
	{(PropertyRNA *)&rna_SceneGameData_show_physics_visualization, (PropertyRNA *)&rna_SceneGameData_show_debug_properties,
	-1, "show_framerate_profile", 1, "Show Framerate and Profile",
	"Show framerate and profiling information while the game runs",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	SceneGameData_show_framerate_profile_get, SceneGameData_show_framerate_profile_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_SceneGameData_show_physics_visualization = {
	{(PropertyRNA *)&rna_SceneGameData_show_mouse, (PropertyRNA *)&rna_SceneGameData_show_framerate_profile,
	-1, "show_physics_visualization", 1, "Show Physics Visualization",
	"Show a visualization of physics bounds and interactions",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	SceneGameData_show_physics_visualization_get, SceneGameData_show_physics_visualization_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_SceneGameData_show_mouse = {
	{(PropertyRNA *)&rna_SceneGameData_use_frame_rate, (PropertyRNA *)&rna_SceneGameData_show_physics_visualization,
	-1, "show_mouse", 1, "Show Mouse",
	"Start player with a visible mouse cursor",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	SceneGameData_show_mouse_get, SceneGameData_show_mouse_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_SceneGameData_use_frame_rate = {
	{(PropertyRNA *)&rna_SceneGameData_use_display_lists, (PropertyRNA *)&rna_SceneGameData_show_mouse,
	-1, "use_frame_rate", 1, "Use Frame Rate",
	"Respect the frame rate from the Physics panel in the world properties rather than rendering as many frames as possible",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	SceneGameData_use_frame_rate_get, SceneGameData_use_frame_rate_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_SceneGameData_use_display_lists = {
	{(PropertyRNA *)&rna_SceneGameData_use_deprecation_warnings, (PropertyRNA *)&rna_SceneGameData_use_frame_rate,
	-1, "use_display_lists", 1, "Display Lists",
	"Use display lists to speed up rendering by keeping geometry on the GPU",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	SceneGameData_use_display_lists_get, SceneGameData_use_display_lists_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_SceneGameData_use_deprecation_warnings = {
	{(PropertyRNA *)&rna_SceneGameData_use_animation_record, (PropertyRNA *)&rna_SceneGameData_use_display_lists,
	-1, "use_deprecation_warnings", 1, "Deprecation Warnings",
	"Print warnings when using deprecated features in the python API",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	SceneGameData_use_deprecation_warnings_get, SceneGameData_use_deprecation_warnings_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_SceneGameData_use_animation_record = {
	{(PropertyRNA *)&rna_SceneGameData_use_auto_start, (PropertyRNA *)&rna_SceneGameData_use_deprecation_warnings,
	-1, "use_animation_record", 1, "Record Animation",
	"Record animation to F-Curves",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	SceneGameData_use_animation_record_get, SceneGameData_use_animation_record_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_SceneGameData_use_auto_start = {
	{(PropertyRNA *)&rna_SceneGameData_use_restrict_animation_updates, (PropertyRNA *)&rna_SceneGameData_use_animation_record,
	-1, "use_auto_start", 1, "Auto Start",
	"Automatically start game at load time",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	SceneGameData_use_auto_start_get, SceneGameData_use_auto_start_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_SceneGameData_use_restrict_animation_updates = {
	{(PropertyRNA *)&rna_SceneGameData_material_mode, (PropertyRNA *)&rna_SceneGameData_use_auto_start,
	-1, "use_restrict_animation_updates", 1, "Restrict Animation Updates",
	"Restrict the number of animation updates to the animation FPS (this is better for performance, but can cause issues with smooth playback)",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	SceneGameData_use_restrict_animation_updates_get, SceneGameData_use_restrict_animation_updates_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

static EnumPropertyItem rna_SceneGameData_material_mode_items[3] = {
	{1, "MULTITEXTURE", 0, "Multitexture", "Multitexture materials"},
	{2, "GLSL", 0, "GLSL", "OpenGL shading language shaders"},
	{0, NULL, 0, NULL, NULL}
};

EnumPropertyRNA rna_SceneGameData_material_mode = {
	{(PropertyRNA *)&rna_SceneGameData_use_glsl_lights, (PropertyRNA *)&rna_SceneGameData_use_restrict_animation_updates,
	-1, "material_mode", 1, "Material Mode",
	"Material mode to use for rendering",
	0, "*",
	PROP_ENUM, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 67108865, NULL, NULL,
	0, -1, NULL},
	SceneGameData_material_mode_get, SceneGameData_material_mode_set, NULL, NULL, NULL, NULL, rna_SceneGameData_material_mode_items, 2, 1
};

BoolPropertyRNA rna_SceneGameData_use_glsl_lights = {
	{(PropertyRNA *)&rna_SceneGameData_use_glsl_shaders, (PropertyRNA *)&rna_SceneGameData_material_mode,
	-1, "use_glsl_lights", 1, "GLSL Lights",
	"Use lights for GLSL rendering",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Scene_glsl_update, 67108865, NULL, NULL,
	0, -1, NULL},
	SceneGameData_use_glsl_lights_get, SceneGameData_use_glsl_lights_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_SceneGameData_use_glsl_shaders = {
	{(PropertyRNA *)&rna_SceneGameData_use_glsl_shadows, (PropertyRNA *)&rna_SceneGameData_use_glsl_lights,
	-1, "use_glsl_shaders", 1, "GLSL Shaders",
	"Use shaders for GLSL rendering",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Scene_glsl_update, 67108865, NULL, NULL,
	0, -1, NULL},
	SceneGameData_use_glsl_shaders_get, SceneGameData_use_glsl_shaders_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_SceneGameData_use_glsl_shadows = {
	{(PropertyRNA *)&rna_SceneGameData_use_glsl_ramps, (PropertyRNA *)&rna_SceneGameData_use_glsl_shaders,
	-1, "use_glsl_shadows", 1, "GLSL Shadows",
	"Use shadows for GLSL rendering",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Scene_glsl_update, 67108865, NULL, NULL,
	0, -1, NULL},
	SceneGameData_use_glsl_shadows_get, SceneGameData_use_glsl_shadows_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_SceneGameData_use_glsl_ramps = {
	{(PropertyRNA *)&rna_SceneGameData_use_glsl_nodes, (PropertyRNA *)&rna_SceneGameData_use_glsl_shadows,
	-1, "use_glsl_ramps", 1, "GLSL Ramps",
	"Use ramps for GLSL rendering",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Scene_glsl_update, 67108865, NULL, NULL,
	0, -1, NULL},
	SceneGameData_use_glsl_ramps_get, SceneGameData_use_glsl_ramps_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_SceneGameData_use_glsl_nodes = {
	{(PropertyRNA *)&rna_SceneGameData_use_glsl_color_management, (PropertyRNA *)&rna_SceneGameData_use_glsl_ramps,
	-1, "use_glsl_nodes", 1, "GLSL Nodes",
	"Use nodes for GLSL rendering",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Scene_glsl_update, 67108865, NULL, NULL,
	0, -1, NULL},
	SceneGameData_use_glsl_nodes_get, SceneGameData_use_glsl_nodes_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_SceneGameData_use_glsl_color_management = {
	{(PropertyRNA *)&rna_SceneGameData_use_glsl_extra_textures, (PropertyRNA *)&rna_SceneGameData_use_glsl_nodes,
	-1, "use_glsl_color_management", 1, "GLSL Color Management",
	"Use color management for GLSL rendering",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Scene_glsl_update, 67108865, NULL, NULL,
	0, -1, NULL},
	SceneGameData_use_glsl_color_management_get, SceneGameData_use_glsl_color_management_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_SceneGameData_use_glsl_extra_textures = {
	{(PropertyRNA *)&rna_SceneGameData_use_material_caching, (PropertyRNA *)&rna_SceneGameData_use_glsl_color_management,
	-1, "use_glsl_extra_textures", 1, "GLSL Extra Textures",
	"Use extra textures like normal or specular maps for GLSL rendering",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Scene_glsl_update, 67108865, NULL, NULL,
	0, -1, NULL},
	SceneGameData_use_glsl_extra_textures_get, SceneGameData_use_glsl_extra_textures_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_SceneGameData_use_material_caching = {
	{(PropertyRNA *)&rna_SceneGameData_obstacle_simulation, (PropertyRNA *)&rna_SceneGameData_use_glsl_extra_textures,
	-1, "use_material_caching", 1, "Use Material Caching",
	"Cache materials in the converter (this is faster, but can cause problems with older Singletexture and Multitexture games)",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	SceneGameData_use_material_caching_get, SceneGameData_use_material_caching_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

static EnumPropertyItem rna_SceneGameData_obstacle_simulation_items[4] = {
	{0, "NONE", 0, "None", ""},
	{1, "RVO_RAYS", 0, "RVO (rays)", ""},
	{2, "RVO_CELLS", 0, "RVO (cells)", ""},
	{0, NULL, 0, NULL, NULL}
};

EnumPropertyRNA rna_SceneGameData_obstacle_simulation = {
	{(PropertyRNA *)&rna_SceneGameData_level_height, (PropertyRNA *)&rna_SceneGameData_use_material_caching,
	-1, "obstacle_simulation", 1, "Obstacle simulation",
	"Simulation used for obstacle avoidance in the game engine",
	0, "*",
	PROP_ENUM, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 67108864, NULL, NULL,
	0, -1, NULL},
	SceneGameData_obstacle_simulation_get, SceneGameData_obstacle_simulation_set, NULL, NULL, NULL, NULL, rna_SceneGameData_obstacle_simulation_items, 3, 0
};

FloatPropertyRNA rna_SceneGameData_level_height = {
	{(PropertyRNA *)&rna_SceneGameData_show_obstacle_simulation, (PropertyRNA *)&rna_SceneGameData_obstacle_simulation,
	-1, "level_height", 8193, "Level height",
	"Max difference in heights of obstacles to enable their interaction",
	0, "*",
	PROP_FLOAT, PROP_ACCELERATION | PROP_UNIT_ACCELERATION, NULL, 0, {0, 0, 0}, 0,
	NULL, 67108864, NULL, NULL,
	offsetof(GameData, levelHeight), 4, NULL},
	SceneGameData_level_height_get, SceneGameData_level_height_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 200.0f, 0.0f, 200.0f, 10.0f, 3, 0.0f, NULL
};

BoolPropertyRNA rna_SceneGameData_show_obstacle_simulation = {
	{(PropertyRNA *)&rna_SceneGameData_recast_data, (PropertyRNA *)&rna_SceneGameData_level_height,
	-1, "show_obstacle_simulation", 1, "Visualization",
	"Enable debug visualization for obstacle simulation",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	SceneGameData_show_obstacle_simulation_get, SceneGameData_show_obstacle_simulation_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

PointerPropertyRNA rna_SceneGameData_recast_data = {
	{NULL, (PropertyRNA *)&rna_SceneGameData_show_obstacle_simulation,
	-1, "recast_data", 8650752, "Recast Data",
	"",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	SceneGameData_recast_data_get, NULL, NULL, NULL,&RNA_SceneGameRecastData
};

StructRNA RNA_SceneGameData = {
	{(ContainerRNA *)&RNA_SceneGameRecastData, (ContainerRNA *)&RNA_ImageFormatSettings,
	NULL,
	{(PropertyRNA *)&rna_SceneGameData_rna_properties, (PropertyRNA *)&rna_SceneGameData_recast_data}},
	"SceneGameData", NULL, NULL, 4, "Game Data",
	"Game data for a Scene datablock",
	"*", 17,
	NULL, (PropertyRNA *)&rna_SceneGameData_rna_properties,
	NULL,
	&RNA_Scene,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	{NULL, NULL}
};

/* Recast Data */
CollectionPropertyRNA rna_SceneGameRecastData_rna_properties = {
	{(PropertyRNA *)&rna_SceneGameRecastData_rna_type, NULL,
	-1, "rna_properties", 128, "Properties",
	"RNA property collection",
	0, "*",
	PROP_COLLECTION, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	SceneGameRecastData_rna_properties_begin, SceneGameRecastData_rna_properties_next, SceneGameRecastData_rna_properties_end, SceneGameRecastData_rna_properties_get, NULL, NULL, SceneGameRecastData_rna_properties_lookup_string, NULL, &RNA_Property
};

PointerPropertyRNA rna_SceneGameRecastData_rna_type = {
	{(PropertyRNA *)&rna_SceneGameRecastData_cell_size, (PropertyRNA *)&rna_SceneGameRecastData_rna_properties,
	-1, "rna_type", 8912896, "RNA",
	"RNA type definition",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	SceneGameRecastData_rna_type_get, NULL, NULL, NULL,&RNA_Struct
};

FloatPropertyRNA rna_SceneGameRecastData_cell_size = {
	{(PropertyRNA *)&rna_SceneGameRecastData_cell_height, (PropertyRNA *)&rna_SceneGameRecastData_rna_type,
	-1, "cell_size", 8193, "Cell Size",
	"Rasterized cell size",
	0, "*",
	PROP_FLOAT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 67108864, NULL, NULL,
	offsetof(RecastData, cellsize), 4, NULL},
	SceneGameRecastData_cell_size_get, SceneGameRecastData_cell_size_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.1000000015f, 1.0f, -FLT_MAX, FLT_MAX, 1.0f, 2, 0.0f, NULL
};

FloatPropertyRNA rna_SceneGameRecastData_cell_height = {
	{(PropertyRNA *)&rna_SceneGameRecastData_agent_height, (PropertyRNA *)&rna_SceneGameRecastData_cell_size,
	-1, "cell_height", 8193, "Cell Height",
	"Rasterized cell height",
	0, "*",
	PROP_FLOAT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 67108864, NULL, NULL,
	offsetof(RecastData, cellheight), 4, NULL},
	SceneGameRecastData_cell_height_get, SceneGameRecastData_cell_height_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.1000000015f, 1.0f, -FLT_MAX, FLT_MAX, 1.0f, 2, 0.0f, NULL
};

FloatPropertyRNA rna_SceneGameRecastData_agent_height = {
	{(PropertyRNA *)&rna_SceneGameRecastData_agent_radius, (PropertyRNA *)&rna_SceneGameRecastData_cell_height,
	-1, "agent_height", 8193, "Agent Height",
	"Minimum height where the agent can still walk",
	0, "*",
	PROP_FLOAT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 67108864, NULL, NULL,
	offsetof(RecastData, agentheight), 4, NULL},
	SceneGameRecastData_agent_height_get, SceneGameRecastData_agent_height_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.1000000015f, 5.0f, -FLT_MAX, FLT_MAX, 1.0f, 2, 0.0f, NULL
};

FloatPropertyRNA rna_SceneGameRecastData_agent_radius = {
	{(PropertyRNA *)&rna_SceneGameRecastData_climb_max, (PropertyRNA *)&rna_SceneGameRecastData_agent_height,
	-1, "agent_radius", 8193, "Agent Radius",
	"Radius of the agent",
	0, "*",
	PROP_FLOAT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 67108864, NULL, NULL,
	offsetof(RecastData, agentradius), 4, NULL},
	SceneGameRecastData_agent_radius_get, SceneGameRecastData_agent_radius_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.1000000015f, 5.0f, -FLT_MAX, FLT_MAX, 1.0f, 2, 0.0f, NULL
};

FloatPropertyRNA rna_SceneGameRecastData_climb_max = {
	{(PropertyRNA *)&rna_SceneGameRecastData_slope_max, (PropertyRNA *)&rna_SceneGameRecastData_agent_radius,
	-1, "climb_max", 8193, "Max Climb",
	"Maximum height between grid cells the agent can climb",
	0, "*",
	PROP_FLOAT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 67108864, NULL, NULL,
	offsetof(RecastData, agentmaxclimb), 4, NULL},
	SceneGameRecastData_climb_max_get, SceneGameRecastData_climb_max_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.1000000015f, 5.0f, -FLT_MAX, FLT_MAX, 1.0f, 2, 0.0f, NULL
};

FloatPropertyRNA rna_SceneGameRecastData_slope_max = {
	{(PropertyRNA *)&rna_SceneGameRecastData_region_min_size, (PropertyRNA *)&rna_SceneGameRecastData_climb_max,
	-1, "slope_max", 8193, "Max Slope",
	"Maximum walkable slope angle",
	0, "*",
	PROP_FLOAT, PROP_ANGLE | PROP_UNIT_ROTATION, NULL, 0, {0, 0, 0}, 0,
	NULL, 67108864, NULL, NULL,
	offsetof(RecastData, agentmaxslope), 4, NULL},
	SceneGameRecastData_slope_max_get, SceneGameRecastData_slope_max_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 1.5707963705f, 0.0f, 1.5707963705f, 10.0f, 3, 0.0f, NULL
};

FloatPropertyRNA rna_SceneGameRecastData_region_min_size = {
	{(PropertyRNA *)&rna_SceneGameRecastData_region_merge_size, (PropertyRNA *)&rna_SceneGameRecastData_slope_max,
	-1, "region_min_size", 8193, "Min Region Size",
	"Minimum regions size (smaller regions will be deleted)",
	0, "*",
	PROP_FLOAT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 67108864, NULL, NULL,
	offsetof(RecastData, regionminsize), 4, NULL},
	SceneGameRecastData_region_min_size_get, SceneGameRecastData_region_min_size_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 150.0f, -FLT_MAX, FLT_MAX, 1.0f, 2, 0.0f, NULL
};

FloatPropertyRNA rna_SceneGameRecastData_region_merge_size = {
	{(PropertyRNA *)&rna_SceneGameRecastData_edge_max_len, (PropertyRNA *)&rna_SceneGameRecastData_region_min_size,
	-1, "region_merge_size", 8193, "Merged Region Size",
	"Minimum regions size (smaller regions will be merged)",
	0, "*",
	PROP_FLOAT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 67108864, NULL, NULL,
	offsetof(RecastData, regionmergesize), 4, NULL},
	SceneGameRecastData_region_merge_size_get, SceneGameRecastData_region_merge_size_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 150.0f, -FLT_MAX, FLT_MAX, 1.0f, 2, 0.0f, NULL
};

FloatPropertyRNA rna_SceneGameRecastData_edge_max_len = {
	{(PropertyRNA *)&rna_SceneGameRecastData_edge_max_error, (PropertyRNA *)&rna_SceneGameRecastData_region_merge_size,
	-1, "edge_max_len", 8193, "Max Edge Length",
	"Maximum contour edge length",
	0, "*",
	PROP_FLOAT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 67108864, NULL, NULL,
	offsetof(RecastData, edgemaxlen), 4, NULL},
	SceneGameRecastData_edge_max_len_get, SceneGameRecastData_edge_max_len_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 50.0f, -FLT_MAX, FLT_MAX, 1.0f, 2, 0.0f, NULL
};

FloatPropertyRNA rna_SceneGameRecastData_edge_max_error = {
	{(PropertyRNA *)&rna_SceneGameRecastData_verts_per_poly, (PropertyRNA *)&rna_SceneGameRecastData_edge_max_len,
	-1, "edge_max_error", 8193, "Max Edge Error",
	"Maximum distance error from contour to cells",
	0, "*",
	PROP_FLOAT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 67108864, NULL, NULL,
	offsetof(RecastData, edgemaxerror), 4, NULL},
	SceneGameRecastData_edge_max_error_get, SceneGameRecastData_edge_max_error_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.1000000015f, 3.0f, -FLT_MAX, FLT_MAX, 1.0f, 2, 0.0f, NULL
};

IntPropertyRNA rna_SceneGameRecastData_verts_per_poly = {
	{(PropertyRNA *)&rna_SceneGameRecastData_sample_dist, (PropertyRNA *)&rna_SceneGameRecastData_edge_max_error,
	-1, "verts_per_poly", 8193, "Verts Per Poly",
	"Max number of vertices per polygon",
	0, "*",
	PROP_INT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 67108864, NULL, NULL,
	offsetof(RecastData, vertsperpoly), 0, NULL},
	SceneGameRecastData_verts_per_poly_get, SceneGameRecastData_verts_per_poly_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL,
	3, 12, INT_MIN, INT_MAX, 1, 0, NULL
};

FloatPropertyRNA rna_SceneGameRecastData_sample_dist = {
	{(PropertyRNA *)&rna_SceneGameRecastData_sample_max_error, (PropertyRNA *)&rna_SceneGameRecastData_verts_per_poly,
	-1, "sample_dist", 8193, "Sample Distance",
	"Detail mesh sample spacing",
	0, "*",
	PROP_FLOAT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 67108864, NULL, NULL,
	offsetof(RecastData, detailsampledist), 4, NULL},
	SceneGameRecastData_sample_dist_get, SceneGameRecastData_sample_dist_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 16.0f, -FLT_MAX, FLT_MAX, 1.0f, 2, 0.0f, NULL
};

FloatPropertyRNA rna_SceneGameRecastData_sample_max_error = {
	{NULL, (PropertyRNA *)&rna_SceneGameRecastData_sample_dist,
	-1, "sample_max_error", 8193, "Max Sample Error",
	"Detail mesh simplification max sample error",
	0, "*",
	PROP_FLOAT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 67108864, NULL, NULL,
	offsetof(RecastData, detailsamplemaxerror), 4, NULL},
	SceneGameRecastData_sample_max_error_get, SceneGameRecastData_sample_max_error_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 16.0f, -FLT_MAX, FLT_MAX, 1.0f, 2, 0.0f, NULL
};

StructRNA RNA_SceneGameRecastData = {
	{(ContainerRNA *)&RNA_TransformOrientation, (ContainerRNA *)&RNA_SceneGameData,
	NULL,
	{(PropertyRNA *)&rna_SceneGameRecastData_rna_properties, (PropertyRNA *)&rna_SceneGameRecastData_sample_max_error}},
	"SceneGameRecastData", NULL, NULL, 4, "Recast Data",
	"Recast data for a Game datablock",
	"*", 17,
	NULL, (PropertyRNA *)&rna_SceneGameRecastData_rna_properties,
	NULL,
	&RNA_Scene,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	{NULL, NULL}
};

/* TransformOrientation */
CollectionPropertyRNA rna_TransformOrientation_rna_properties = {
	{(PropertyRNA *)&rna_TransformOrientation_rna_type, NULL,
	-1, "rna_properties", 128, "Properties",
	"RNA property collection",
	0, "*",
	PROP_COLLECTION, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	TransformOrientation_rna_properties_begin, TransformOrientation_rna_properties_next, TransformOrientation_rna_properties_end, TransformOrientation_rna_properties_get, NULL, NULL, TransformOrientation_rna_properties_lookup_string, NULL, &RNA_Property
};

PointerPropertyRNA rna_TransformOrientation_rna_type = {
	{(PropertyRNA *)&rna_TransformOrientation_matrix, (PropertyRNA *)&rna_TransformOrientation_rna_properties,
	-1, "rna_type", 8912896, "RNA",
	"RNA type definition",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	TransformOrientation_rna_type_get, NULL, NULL, NULL,&RNA_Struct
};

static float rna_TransformOrientation_matrix_default[9] = {
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

FloatPropertyRNA rna_TransformOrientation_matrix = {
	{(PropertyRNA *)&rna_TransformOrientation_name, (PropertyRNA *)&rna_TransformOrientation_rna_type,
	-1, "matrix", 8193, "matrix",
	"",
	0, "*",
	PROP_FLOAT, PROP_MATRIX | PROP_UNIT_NONE, NULL, 2, {3, 3, 0}, 9,
	NULL, 252248064, NULL, NULL,
	offsetof(TransformOrientation, mat), 4, NULL},
	NULL, NULL, TransformOrientation_matrix_get, TransformOrientation_matrix_set, NULL, NULL, NULL, NULL, NULL, NULL, -10000.0f, 10000.0f, -FLT_MAX, FLT_MAX, 10.0f, 3, 0.0f, rna_TransformOrientation_matrix_default
};

StringPropertyRNA rna_TransformOrientation_name = {
	{NULL, (PropertyRNA *)&rna_TransformOrientation_matrix,
	-1, "name", 262145, "Name",
	"Name of the custom transform orientation",
	0, "*",
	PROP_STRING, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {64, 0, 0}, 0,
	NULL, 252248064, NULL, NULL,
	0, -1, NULL},
	TransformOrientation_name_get, TransformOrientation_name_length, TransformOrientation_name_set, NULL, NULL, NULL, 64, ""
};

StructRNA RNA_TransformOrientation = {
	{(ContainerRNA *)&RNA_SelectedUvElement, (ContainerRNA *)&RNA_SceneGameRecastData,
	NULL,
	{(PropertyRNA *)&rna_TransformOrientation_rna_properties, (PropertyRNA *)&rna_TransformOrientation_name}},
	"TransformOrientation", NULL, NULL, 4, "TransformOrientation",
	"",
	"*", 17,
	(PropertyRNA *)&rna_TransformOrientation_name, (PropertyRNA *)&rna_TransformOrientation_rna_properties,
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

/* Selected UV Element */
IntPropertyRNA rna_SelectedUvElement_element_index = {
	{(PropertyRNA *)&rna_SelectedUvElement_face_index, NULL,
	-1, "element_index", 1025, "Element Index",
	"",
	0, "*",
	PROP_INT, PROP_UNSIGNED | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL,
	0, 10000, 0, INT_MAX, 1, 0, NULL
};

IntPropertyRNA rna_SelectedUvElement_face_index = {
	{NULL, (PropertyRNA *)&rna_SelectedUvElement_element_index,
	-1, "face_index", 1025, "Face Index",
	"",
	0, "*",
	PROP_INT, PROP_UNSIGNED | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL,
	0, 10000, 0, INT_MAX, 1, 0, NULL
};

StructRNA RNA_SelectedUvElement = {
	{(ContainerRNA *)&RNA_FFmpegSettings, (ContainerRNA *)&RNA_TransformOrientation,
	NULL,
	{(PropertyRNA *)&rna_SelectedUvElement_element_index, (PropertyRNA *)&rna_SelectedUvElement_face_index}},
	"SelectedUvElement", NULL, NULL, 4, "Selected UV Element",
	"",
	"*", 17,
	(PropertyRNA *)&rna_PropertyGroup_name, (PropertyRNA *)&rna_PropertyGroup_rna_properties,
	&RNA_PropertyGroup,
	NULL,
	rna_PropertyGroup_refine,
	NULL,
	rna_PropertyGroup_register,
	rna_PropertyGroup_unregister,
	NULL,
	rna_PropertyGroup_idprops,
	{NULL, NULL}
};

/* FFmpeg Settings */
CollectionPropertyRNA rna_FFmpegSettings_rna_properties = {
	{(PropertyRNA *)&rna_FFmpegSettings_rna_type, NULL,
	-1, "rna_properties", 128, "Properties",
	"RNA property collection",
	0, "*",
	PROP_COLLECTION, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	FFmpegSettings_rna_properties_begin, FFmpegSettings_rna_properties_next, FFmpegSettings_rna_properties_end, FFmpegSettings_rna_properties_get, NULL, NULL, FFmpegSettings_rna_properties_lookup_string, NULL, &RNA_Property
};

PointerPropertyRNA rna_FFmpegSettings_rna_type = {
	{(PropertyRNA *)&rna_FFmpegSettings_audio_mixrate, (PropertyRNA *)&rna_FFmpegSettings_rna_properties,
	-1, "rna_type", 8912896, "RNA",
	"RNA type definition",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	FFmpegSettings_rna_type_get, NULL, NULL, NULL,&RNA_Struct
};

IntPropertyRNA rna_FFmpegSettings_audio_mixrate = {
	{(PropertyRNA *)&rna_FFmpegSettings_audio_channels, (PropertyRNA *)&rna_FFmpegSettings_rna_type,
	-1, "audio_mixrate", 8193, "Samplerate",
	"Audio samplerate(samples/s)",
	0, "*",
	PROP_INT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 67371008, NULL, NULL,
	offsetof(FFMpegCodecData, audio_mixrate), 0, NULL},
	FFmpegSettings_audio_mixrate_get, FFmpegSettings_audio_mixrate_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL,
	8000, 192000, 8000, 192000, 1, 0, NULL
};

static EnumPropertyItem rna_FFmpegSettings_audio_channels_items[6] = {
	{1, "MONO", 0, "Mono", "Set audio channels to mono"},
	{2, "STEREO", 0, "Stereo", "Set audio channels to stereo"},
	{4, "SURROUND4", 0, "4 Channels", "Set audio channels to 4 channels"},
	{6, "SURROUND51", 0, "5.1 Surround", "Set audio channels to 5.1 surround sound"},
	{8, "SURROUND71", 0, "7.1 Surround", "Set audio channels to 7.1 surround sound"},
	{0, NULL, 0, NULL, NULL}
};

EnumPropertyRNA rna_FFmpegSettings_audio_channels = {
	{NULL, (PropertyRNA *)&rna_FFmpegSettings_audio_mixrate,
	-1, "audio_channels", 1, "Audio Channels",
	"Audio channel count",
	0, "*",
	PROP_ENUM, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	FFmpegSettings_audio_channels_get, FFmpegSettings_audio_channels_set, NULL, NULL, NULL, NULL, rna_FFmpegSettings_audio_channels_items, 5, 1
};

StructRNA RNA_FFmpegSettings = {
	{(ContainerRNA *)&RNA_RenderSettings, (ContainerRNA *)&RNA_SelectedUvElement,
	NULL,
	{(PropertyRNA *)&rna_FFmpegSettings_rna_properties, (PropertyRNA *)&rna_FFmpegSettings_audio_channels}},
	"FFmpegSettings", NULL, NULL, 4, "FFmpeg Settings",
	"FFmpeg related settings for the scene",
	"*", 17,
	NULL, (PropertyRNA *)&rna_FFmpegSettings_rna_properties,
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

/* Render Data */
CollectionPropertyRNA rna_RenderSettings_rna_properties = {
	{(PropertyRNA *)&rna_RenderSettings_rna_type, NULL,
	-1, "rna_properties", 128, "Properties",
	"RNA property collection",
	0, "*",
	PROP_COLLECTION, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	RenderSettings_rna_properties_begin, RenderSettings_rna_properties_next, RenderSettings_rna_properties_end, RenderSettings_rna_properties_get, NULL, NULL, RenderSettings_rna_properties_lookup_string, NULL, &RNA_Property
};

PointerPropertyRNA rna_RenderSettings_rna_type = {
	{(PropertyRNA *)&rna_RenderSettings_image_settings, (PropertyRNA *)&rna_RenderSettings_rna_properties,
	-1, "rna_type", 8912896, "RNA",
	"RNA type definition",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	RenderSettings_rna_type_get, NULL, NULL, NULL,&RNA_Struct
};

PointerPropertyRNA rna_RenderSettings_image_settings = {
	{(PropertyRNA *)&rna_RenderSettings_resolution_x, (PropertyRNA *)&rna_RenderSettings_rna_type,
	-1, "image_settings", 8650752, "Image Format",
	"",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	RenderSettings_image_settings_get, NULL, NULL, NULL,&RNA_ImageFormatSettings
};

IntPropertyRNA rna_RenderSettings_resolution_x = {
	{(PropertyRNA *)&rna_RenderSettings_resolution_y, (PropertyRNA *)&rna_RenderSettings_image_settings,
	-1, "resolution_x", 67117057, "Resolution X",
	"Number of horizontal pixels in the rendered image",
	0, "*",
	PROP_INT, PROP_PIXEL | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_SceneCamera_update, 67371008, NULL, NULL,
	offsetof(RenderData, xsch), 0, NULL},
	RenderSettings_resolution_x_get, RenderSettings_resolution_x_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL,
	4, 65536, 4, 65536, 1, 0, NULL
};

IntPropertyRNA rna_RenderSettings_resolution_y = {
	{(PropertyRNA *)&rna_RenderSettings_resolution_percentage, (PropertyRNA *)&rna_RenderSettings_resolution_x,
	-1, "resolution_y", 67117057, "Resolution Y",
	"Number of vertical pixels in the rendered image",
	0, "*",
	PROP_INT, PROP_PIXEL | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_SceneCamera_update, 67371008, NULL, NULL,
	offsetof(RenderData, ysch), 0, NULL},
	RenderSettings_resolution_y_get, RenderSettings_resolution_y_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL,
	4, 65536, 4, 65536, 1, 0, NULL
};

IntPropertyRNA rna_RenderSettings_resolution_percentage = {
	{(PropertyRNA *)&rna_RenderSettings_tile_x, (PropertyRNA *)&rna_RenderSettings_resolution_y,
	-1, "resolution_percentage", 8193, "Resolution %",
	"Percentage scale for render resolution",
	0, "*",
	PROP_INT, PROP_PERCENTAGE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 67371008, NULL, NULL,
	offsetof(RenderData, size), 1, NULL},
	RenderSettings_resolution_percentage_get, RenderSettings_resolution_percentage_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL,
	1, 100, 1, 32767, 10, 0, NULL
};

IntPropertyRNA rna_RenderSettings_tile_x = {
	{(PropertyRNA *)&rna_RenderSettings_tile_y, (PropertyRNA *)&rna_RenderSettings_resolution_percentage,
	-1, "tile_x", 8193, "Tile X",
	"Horizontal tile size to use while rendering",
	0, "*",
	PROP_INT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 67371008, NULL, NULL,
	offsetof(RenderData, tilex), 0, NULL},
	RenderSettings_tile_x_get, RenderSettings_tile_x_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL,
	8, 65536, 8, 65536, 1, 0, NULL
};

IntPropertyRNA rna_RenderSettings_tile_y = {
	{(PropertyRNA *)&rna_RenderSettings_preview_start_resolution, (PropertyRNA *)&rna_RenderSettings_tile_x,
	-1, "tile_y", 8193, "Tile Y",
	"Vertical tile size to use while rendering",
	0, "*",
	PROP_INT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 67371008, NULL, NULL,
	offsetof(RenderData, tiley), 0, NULL},
	RenderSettings_tile_y_get, RenderSettings_tile_y_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL,
	8, 65536, 8, 65536, 1, 0, NULL
};

IntPropertyRNA rna_RenderSettings_preview_start_resolution = {
	{(PropertyRNA *)&rna_RenderSettings_pixel_aspect_x, (PropertyRNA *)&rna_RenderSettings_tile_y,
	-1, "preview_start_resolution", 8193, "Start Resolution",
	"Resolution to start rendering preview at, progressively increasing it to the full viewport size",
	0, "*",
	PROP_INT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 67371008, NULL, NULL,
	offsetof(RenderData, preview_start_resolution), 0, NULL},
	RenderSettings_preview_start_resolution_get, RenderSettings_preview_start_resolution_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL,
	8, 16384, 8, 16384, 1, 64, NULL
};

FloatPropertyRNA rna_RenderSettings_pixel_aspect_x = {
	{(PropertyRNA *)&rna_RenderSettings_pixel_aspect_y, (PropertyRNA *)&rna_RenderSettings_preview_start_resolution,
	-1, "pixel_aspect_x", 67117057, "Pixel Aspect X",
	"Horizontal aspect ratio - for anamorphic or non-square pixel output",
	0, "*",
	PROP_FLOAT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_SceneCamera_update, 67371008, NULL, NULL,
	offsetof(RenderData, xasp), 4, NULL},
	RenderSettings_pixel_aspect_x_get, RenderSettings_pixel_aspect_x_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 1.0f, 200.0f, 1.0f, 200.0f, 10.0f, 3, 0.0f, NULL
};

FloatPropertyRNA rna_RenderSettings_pixel_aspect_y = {
	{(PropertyRNA *)&rna_RenderSettings_ffmpeg, (PropertyRNA *)&rna_RenderSettings_pixel_aspect_x,
	-1, "pixel_aspect_y", 67117057, "Pixel Aspect Y",
	"Vertical aspect ratio - for anamorphic or non-square pixel output",
	0, "*",
	PROP_FLOAT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_SceneCamera_update, 67371008, NULL, NULL,
	offsetof(RenderData, yasp), 4, NULL},
	RenderSettings_pixel_aspect_y_get, RenderSettings_pixel_aspect_y_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 1.0f, 200.0f, 1.0f, 200.0f, 10.0f, 3, 0.0f, NULL
};

PointerPropertyRNA rna_RenderSettings_ffmpeg = {
	{(PropertyRNA *)&rna_RenderSettings_fps, (PropertyRNA *)&rna_RenderSettings_pixel_aspect_y,
	-1, "ffmpeg", 41943040, "FFmpeg Settings",
	"FFmpeg related settings for the scene",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	RenderSettings_ffmpeg_get, NULL, NULL, NULL,&RNA_FFmpegSettings
};

IntPropertyRNA rna_RenderSettings_fps = {
	{(PropertyRNA *)&rna_RenderSettings_fps_base, (PropertyRNA *)&rna_RenderSettings_ffmpeg,
	-1, "fps", 8193, "FPS",
	"Framerate, expressed in frames per second",
	0, "*",
	PROP_INT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Scene_fps_update, 67371008, NULL, NULL,
	offsetof(RenderData, frs_sec), 1, NULL},
	RenderSettings_fps_get, RenderSettings_fps_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL,
	1, 120, 1, 120, 1, 0, NULL
};

FloatPropertyRNA rna_RenderSettings_fps_base = {
	{(PropertyRNA *)&rna_RenderSettings_frame_map_old, (PropertyRNA *)&rna_RenderSettings_fps,
	-1, "fps_base", 8193, "FPS Base",
	"Framerate base",
	0, "*",
	PROP_FLOAT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Scene_fps_update, 67371008, NULL, NULL,
	offsetof(RenderData, frs_sec_base), 4, NULL},
	RenderSettings_fps_base_get, RenderSettings_fps_base_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.1000000015f, 120.0f, 0.1000000015f, 120.0f, 10.0f, 3, 0.0f, NULL
};

IntPropertyRNA rna_RenderSettings_frame_map_old = {
	{(PropertyRNA *)&rna_RenderSettings_frame_map_new, (PropertyRNA *)&rna_RenderSettings_fps_base,
	-1, "frame_map_old", 8193, "Frame Map Old",
	"Old mapping value in frames",
	0, "*",
	PROP_INT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Scene_framelen_update, 67305472, NULL, NULL,
	offsetof(RenderData, framapto), 0, NULL},
	RenderSettings_frame_map_old_get, RenderSettings_frame_map_old_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL,
	1, 900, 1, 900, 1, 0, NULL
};

IntPropertyRNA rna_RenderSettings_frame_map_new = {
	{(PropertyRNA *)&rna_RenderSettings_dither_intensity, (PropertyRNA *)&rna_RenderSettings_frame_map_old,
	-1, "frame_map_new", 8193, "Frame Map New",
	"How many frames the Map Old will last",
	0, "*",
	PROP_INT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Scene_framelen_update, 67305472, NULL, NULL,
	offsetof(RenderData, images), 0, NULL},
	RenderSettings_frame_map_new_get, RenderSettings_frame_map_new_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL,
	1, 900, 1, 900, 1, 0, NULL
};

FloatPropertyRNA rna_RenderSettings_dither_intensity = {
	{(PropertyRNA *)&rna_RenderSettings_pixel_filter_type, (PropertyRNA *)&rna_RenderSettings_frame_map_new,
	-1, "dither_intensity", 8195, "Dither Intensity",
	"Amount of dithering noise added to the rendered image to break up banding",
	0, "*",
	PROP_FLOAT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 67371008, NULL, NULL,
	offsetof(RenderData, dither_intensity), 4, NULL},
	RenderSettings_dither_intensity_get, RenderSettings_dither_intensity_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 2.0f, 0.0f, 2.0f, 10.0f, 3, 0.0f, NULL
};

static EnumPropertyItem rna_RenderSettings_pixel_filter_type_items[8] = {
	{0, "BOX", 0, "Box", "Use a box filter for anti-aliasing"},
	{1, "TENT", 0, "Tent", "Use a tent filter for anti-aliasing"},
	{2, "QUADRATIC", 0, "Quadratic", "Use a quadratic filter for anti-aliasing"},
	{3, "CUBIC", 0, "Cubic", "Use a cubic filter for anti-aliasing"},
	{4, "CATMULLROM", 0, "Catmull-Rom", "Use a Catmull-Rom filter for anti-aliasing"},
	{5, "GAUSSIAN", 0, "Gaussian", "Use a Gaussian filter for anti-aliasing"},
	{6, "MITCHELL", 0, "Mitchell-Netravali", "Use a Mitchell-Netravali filter for anti-aliasing"},
	{0, NULL, 0, NULL, NULL}
};

EnumPropertyRNA rna_RenderSettings_pixel_filter_type = {
	{(PropertyRNA *)&rna_RenderSettings_filter_size, (PropertyRNA *)&rna_RenderSettings_dither_intensity,
	-1, "pixel_filter_type", 3, "Pixel Filter",
	"Reconstruction filter used for combining anti-aliasing samples",
	0, "*",
	PROP_ENUM, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 67371008, NULL, NULL,
	0, -1, NULL},
	RenderSettings_pixel_filter_type_get, RenderSettings_pixel_filter_type_set, NULL, NULL, NULL, NULL, rna_RenderSettings_pixel_filter_type_items, 7, 0
};

FloatPropertyRNA rna_RenderSettings_filter_size = {
	{(PropertyRNA *)&rna_RenderSettings_alpha_mode, (PropertyRNA *)&rna_RenderSettings_pixel_filter_type,
	-1, "filter_size", 8195, "Filter Size",
	"Width over which the reconstruction filter combines samples",
	0, "*",
	PROP_FLOAT, PROP_PIXEL | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 67371008, NULL, NULL,
	offsetof(RenderData, gauss), 4, NULL},
	RenderSettings_filter_size_get, RenderSettings_filter_size_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.5000000000f, 1.5000000000f, 0.5000000000f, 1.5000000000f, 10.0f, 3, 0.0f, NULL
};

static EnumPropertyItem rna_RenderSettings_alpha_mode_items[3] = {
	{0, "SKY", 0, "Sky", "Transparent pixels are filled with sky color"},
	{1, "TRANSPARENT", 0, "Transparent", "World background is transparent with premultiplied alpha"},
	{0, NULL, 0, NULL, NULL}
};

EnumPropertyRNA rna_RenderSettings_alpha_mode = {
	{(PropertyRNA *)&rna_RenderSettings_octree_resolution, (PropertyRNA *)&rna_RenderSettings_filter_size,
	-1, "alpha_mode", 3, "Alpha Mode",
	"Representation of alpha information in the RGBA pixels",
	0, "*",
	PROP_ENUM, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Scene_glsl_update, 67371008, NULL, NULL,
	0, -1, NULL},
	RenderSettings_alpha_mode_get, RenderSettings_alpha_mode_set, NULL, NULL, NULL, NULL, rna_RenderSettings_alpha_mode_items, 2, 0
};

static EnumPropertyItem rna_RenderSettings_octree_resolution_items[5] = {
	{64, "64", 0, "64", ""},
	{128, "128", 0, "128", ""},
	{256, "256", 0, "256", ""},
	{512, "512", 0, "512", ""},
	{0, NULL, 0, NULL, NULL}
};

EnumPropertyRNA rna_RenderSettings_octree_resolution = {
	{(PropertyRNA *)&rna_RenderSettings_raytrace_method, (PropertyRNA *)&rna_RenderSettings_alpha_mode,
	-1, "octree_resolution", 3, "Octree Resolution",
	"Resolution of raytrace accelerator, use higher resolutions for larger scenes",
	0, "*",
	PROP_ENUM, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 67371008, NULL, NULL,
	0, -1, NULL},
	RenderSettings_octree_resolution_get, RenderSettings_octree_resolution_set, NULL, NULL, NULL, NULL, rna_RenderSettings_octree_resolution_items, 4, 64
};

static EnumPropertyItem rna_RenderSettings_raytrace_method_items[6] = {
	{0, "AUTO", 0, "Auto", "Automatically select acceleration structure"},
	{1, "OCTREE", 0, "Octree", "Use old Octree structure"},
	{3, "VBVH", 0, "vBVH", "Use vBVH"},
	{4, "SIMD_SVBVH", 0, "SIMD SVBVH", "Use SIMD SVBVH"},
	{5, "SIMD_QBVH", 0, "SIMD QBVH", "Use SIMD QBVH"},
	{0, NULL, 0, NULL, NULL}
};

EnumPropertyRNA rna_RenderSettings_raytrace_method = {
	{(PropertyRNA *)&rna_RenderSettings_use_instances, (PropertyRNA *)&rna_RenderSettings_octree_resolution,
	-1, "raytrace_method", 3, "Raytrace Acceleration Structure",
	"Type of raytrace accelerator structure",
	0, "*",
	PROP_ENUM, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 67371008, NULL, NULL,
	0, -1, NULL},
	RenderSettings_raytrace_method_get, RenderSettings_raytrace_method_set, NULL, NULL, NULL, NULL, rna_RenderSettings_raytrace_method_items, 5, 0
};

BoolPropertyRNA rna_RenderSettings_use_instances = {
	{(PropertyRNA *)&rna_RenderSettings_use_local_coords, (PropertyRNA *)&rna_RenderSettings_raytrace_method,
	-1, "use_instances", 3, "Use Instances",
	"Instance support leads to effective memory reduction when using duplicates",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 67371008, NULL, NULL,
	0, -1, NULL},
	RenderSettings_use_instances_get, RenderSettings_use_instances_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_RenderSettings_use_local_coords = {
	{(PropertyRNA *)&rna_RenderSettings_use_antialiasing, (PropertyRNA *)&rna_RenderSettings_use_instances,
	-1, "use_local_coords", 3, "Use Local Coords",
	"Vertex coordinates are stored locally on each primitive (increases memory usage, but may have impact on speed)",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 67371008, NULL, NULL,
	0, -1, NULL},
	RenderSettings_use_local_coords_get, RenderSettings_use_local_coords_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_RenderSettings_use_antialiasing = {
	{(PropertyRNA *)&rna_RenderSettings_antialiasing_samples, (PropertyRNA *)&rna_RenderSettings_use_local_coords,
	-1, "use_antialiasing", 3, "Anti-Aliasing",
	"Render and combine multiple samples per pixel to prevent jagged edges",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 67371008, NULL, NULL,
	0, -1, NULL},
	RenderSettings_use_antialiasing_get, RenderSettings_use_antialiasing_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

static EnumPropertyItem rna_RenderSettings_antialiasing_samples_items[5] = {
	{5, "5", 0, "5", ""},
	{8, "8", 0, "8", ""},
	{11, "11", 0, "11", ""},
	{16, "16", 0, "16", ""},
	{0, NULL, 0, NULL, NULL}
};

EnumPropertyRNA rna_RenderSettings_antialiasing_samples = {
	{(PropertyRNA *)&rna_RenderSettings_use_fields, (PropertyRNA *)&rna_RenderSettings_use_antialiasing,
	-1, "antialiasing_samples", 3, "Anti-Aliasing Samples",
	"Amount of anti-aliasing samples per pixel",
	0, "*",
	PROP_ENUM, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 67371008, NULL, NULL,
	0, -1, NULL},
	RenderSettings_antialiasing_samples_get, RenderSettings_antialiasing_samples_set, NULL, NULL, NULL, NULL, rna_RenderSettings_antialiasing_samples_items, 4, 5
};

BoolPropertyRNA rna_RenderSettings_use_fields = {
	{(PropertyRNA *)&rna_RenderSettings_field_order, (PropertyRNA *)&rna_RenderSettings_antialiasing_samples,
	-1, "use_fields", 3, "Fields",
	"Render image to two fields per frame, for interlaced TV output",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 67371008, NULL, NULL,
	0, -1, NULL},
	RenderSettings_use_fields_get, RenderSettings_use_fields_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

static EnumPropertyItem rna_RenderSettings_field_order_items[3] = {
	{0, "EVEN_FIRST", 0, "Upper First", "Upper field first"},
	{8192, "ODD_FIRST", 0, "Lower First", "Lower field first"},
	{0, NULL, 0, NULL, NULL}
};

EnumPropertyRNA rna_RenderSettings_field_order = {
	{(PropertyRNA *)&rna_RenderSettings_use_fields_still, (PropertyRNA *)&rna_RenderSettings_use_fields,
	-1, "field_order", 3, "Field Order",
	"Order of video fields (select which lines get rendered first, to create smooth motion for TV output)",
	0, "*",
	PROP_ENUM, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 67371008, NULL, NULL,
	0, -1, NULL},
	RenderSettings_field_order_get, RenderSettings_field_order_set, NULL, NULL, NULL, NULL, rna_RenderSettings_field_order_items, 2, 0
};

BoolPropertyRNA rna_RenderSettings_use_fields_still = {
	{(PropertyRNA *)&rna_RenderSettings_use_shadows, (PropertyRNA *)&rna_RenderSettings_field_order,
	-1, "use_fields_still", 3, "Fields Still",
	"Disable the time difference between fields",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 67371008, NULL, NULL,
	0, -1, NULL},
	RenderSettings_use_fields_still_get, RenderSettings_use_fields_still_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_RenderSettings_use_shadows = {
	{(PropertyRNA *)&rna_RenderSettings_use_envmaps, (PropertyRNA *)&rna_RenderSettings_use_fields_still,
	-1, "use_shadows", 3, "Shadows",
	"Calculate shadows while rendering",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Scene_glsl_update, 67371008, NULL, NULL,
	0, -1, NULL},
	RenderSettings_use_shadows_get, RenderSettings_use_shadows_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_RenderSettings_use_envmaps = {
	{(PropertyRNA *)&rna_RenderSettings_use_sss, (PropertyRNA *)&rna_RenderSettings_use_shadows,
	-1, "use_envmaps", 3, "Environment Maps",
	"Calculate environment maps while rendering",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Scene_glsl_update, 67371008, NULL, NULL,
	0, -1, NULL},
	RenderSettings_use_envmaps_get, RenderSettings_use_envmaps_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_RenderSettings_use_sss = {
	{(PropertyRNA *)&rna_RenderSettings_use_raytrace, (PropertyRNA *)&rna_RenderSettings_use_envmaps,
	-1, "use_sss", 3, "Subsurface Scattering",
	"Calculate sub-surface scattering in materials rendering",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Scene_glsl_update, 67371008, NULL, NULL,
	0, -1, NULL},
	RenderSettings_use_sss_get, RenderSettings_use_sss_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_RenderSettings_use_raytrace = {
	{(PropertyRNA *)&rna_RenderSettings_use_textures, (PropertyRNA *)&rna_RenderSettings_use_sss,
	-1, "use_raytrace", 3, "Raytracing",
	"Pre-calculate the raytrace accelerator and render raytracing effects",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Scene_glsl_update, 67371008, NULL, NULL,
	0, -1, NULL},
	RenderSettings_use_raytrace_get, RenderSettings_use_raytrace_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_RenderSettings_use_textures = {
	{(PropertyRNA *)&rna_RenderSettings_use_edge_enhance, (PropertyRNA *)&rna_RenderSettings_use_raytrace,
	-1, "use_textures", 3, "Textures",
	"Use textures to affect material properties",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Scene_glsl_update, 67371008, NULL, NULL,
	0, -1, NULL},
	RenderSettings_use_textures_get, RenderSettings_use_textures_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_RenderSettings_use_edge_enhance = {
	{(PropertyRNA *)&rna_RenderSettings_edge_threshold, (PropertyRNA *)&rna_RenderSettings_use_textures,
	-1, "use_edge_enhance", 3, "Edge",
	"Create a toon outline around the edges of geometry",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Scene_glsl_update, 67371008, NULL, NULL,
	0, -1, NULL},
	RenderSettings_use_edge_enhance_get, RenderSettings_use_edge_enhance_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

IntPropertyRNA rna_RenderSettings_edge_threshold = {
	{(PropertyRNA *)&rna_RenderSettings_edge_color, (PropertyRNA *)&rna_RenderSettings_use_edge_enhance,
	-1, "edge_threshold", 8195, "Edge Threshold",
	"Threshold for drawing outlines on geometry edges",
	0, "*",
	PROP_INT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Scene_glsl_update, 67371008, NULL, NULL,
	offsetof(RenderData, edgeint), 1, NULL},
	RenderSettings_edge_threshold_get, RenderSettings_edge_threshold_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL,
	0, 255, 0, 255, 1, 0, NULL
};

static float rna_RenderSettings_edge_color_default[3] = {
	0.0f,
	0.0f,
	0.0f
};

FloatPropertyRNA rna_RenderSettings_edge_color = {
	{(PropertyRNA *)&rna_RenderSettings_use_freestyle, (PropertyRNA *)&rna_RenderSettings_edge_threshold,
	-1, "edge_color", 8195, "Edge Color",
	"Edge color",
	0, "*",
	PROP_FLOAT, PROP_COLOR | PROP_UNIT_NONE, NULL, 1, {3, 0, 0}, 3,
	rna_Scene_glsl_update, 67371008, NULL, NULL,
	offsetof(RenderData, edgeR), 4, NULL},
	NULL, NULL, RenderSettings_edge_color_get, RenderSettings_edge_color_set, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 1.0f, 0.0f, FLT_MAX, 10.0f, 3, 0.0f, rna_RenderSettings_edge_color_default
};

BoolPropertyRNA rna_RenderSettings_use_freestyle = {
	{(PropertyRNA *)&rna_RenderSettings_threads, (PropertyRNA *)&rna_RenderSettings_edge_color,
	-1, "use_freestyle", 3, "Edge",
	"Draw stylized strokes using Freestyle",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Scene_freestyle_update, 67371008, NULL, NULL,
	0, -1, NULL},
	RenderSettings_use_freestyle_get, RenderSettings_use_freestyle_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

IntPropertyRNA rna_RenderSettings_threads = {
	{(PropertyRNA *)&rna_RenderSettings_threads_mode, (PropertyRNA *)&rna_RenderSettings_use_freestyle,
	-1, "threads", 3, "Threads",
	"Number of CPU threads to use simultaneously while rendering (for multi-core/CPU systems)",
	0, "*",
	PROP_INT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 67371008, NULL, NULL,
	0, -1, NULL},
	RenderSettings_threads_get, RenderSettings_threads_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL,
	1, 64, 1, 64, 1, 0, NULL
};

static EnumPropertyItem rna_RenderSettings_threads_mode_items[3] = {
	{0, "AUTO", 0, "Auto-detect", "Automatically determine the number of threads, based on CPUs"},
	{524288, "FIXED", 0, "Fixed", "Manually determine the number of threads"},
	{0, NULL, 0, NULL, NULL}
};

EnumPropertyRNA rna_RenderSettings_threads_mode = {
	{(PropertyRNA *)&rna_RenderSettings_use_motion_blur, (PropertyRNA *)&rna_RenderSettings_threads,
	-1, "threads_mode", 3, "Threads Mode",
	"Determine the amount of render threads used",
	0, "*",
	PROP_ENUM, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 67371008, NULL, NULL,
	0, -1, NULL},
	RenderSettings_threads_mode_get, RenderSettings_threads_mode_set, NULL, NULL, NULL, NULL, rna_RenderSettings_threads_mode_items, 2, 0
};

BoolPropertyRNA rna_RenderSettings_use_motion_blur = {
	{(PropertyRNA *)&rna_RenderSettings_motion_blur_samples, (PropertyRNA *)&rna_RenderSettings_threads_mode,
	-1, "use_motion_blur", 1, "Motion Blur",
	"Use multi-sampled 3D scene motion blur",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Scene_glsl_update, 67371008, NULL, NULL,
	0, -1, NULL},
	RenderSettings_use_motion_blur_get, RenderSettings_use_motion_blur_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

IntPropertyRNA rna_RenderSettings_motion_blur_samples = {
	{(PropertyRNA *)&rna_RenderSettings_motion_blur_shutter, (PropertyRNA *)&rna_RenderSettings_use_motion_blur,
	-1, "motion_blur_samples", 8193, "Motion Samples",
	"Number of scene samples to take with motion blur",
	0, "*",
	PROP_INT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Scene_glsl_update, 67371008, NULL, NULL,
	offsetof(RenderData, mblur_samples), 1, NULL},
	RenderSettings_motion_blur_samples_get, RenderSettings_motion_blur_samples_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL,
	1, 32, 1, 32, 1, 0, NULL
};

FloatPropertyRNA rna_RenderSettings_motion_blur_shutter = {
	{(PropertyRNA *)&rna_RenderSettings_use_border, (PropertyRNA *)&rna_RenderSettings_motion_blur_samples,
	-1, "motion_blur_shutter", 8193, "Shutter",
	"Time taken in frames between shutter open and close",
	0, "*",
	PROP_FLOAT, PROP_UNSIGNED | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Scene_glsl_update, 67371008, NULL, NULL,
	offsetof(RenderData, blurfac), 4, NULL},
	RenderSettings_motion_blur_shutter_get, RenderSettings_motion_blur_shutter_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0099999998f, 2.0f, 0.0f, FLT_MAX, 1.0f, 2, 0.0f, NULL
};

BoolPropertyRNA rna_RenderSettings_use_border = {
	{(PropertyRNA *)&rna_RenderSettings_border_min_x, (PropertyRNA *)&rna_RenderSettings_motion_blur_shutter,
	-1, "use_border", 1, "Border",
	"Render a user-defined border region, within the frame size (note that this disables save_buffers and full_sample)",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 67371008, NULL, NULL,
	0, -1, NULL},
	RenderSettings_use_border_get, RenderSettings_use_border_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

FloatPropertyRNA rna_RenderSettings_border_min_x = {
	{(PropertyRNA *)&rna_RenderSettings_border_min_y, (PropertyRNA *)&rna_RenderSettings_use_border,
	-1, "border_min_x", 8193, "Border Minimum X",
	"Minimum X value to for the render border",
	0, "*",
	PROP_FLOAT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 67371008, NULL, NULL,
	offsetof(RenderData, border.xmin), 4, NULL},
	RenderSettings_border_min_x_get, RenderSettings_border_min_x_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 1.0f, 0.0f, 1.0f, 10.0f, 3, 0.0f, NULL
};

FloatPropertyRNA rna_RenderSettings_border_min_y = {
	{(PropertyRNA *)&rna_RenderSettings_border_max_x, (PropertyRNA *)&rna_RenderSettings_border_min_x,
	-1, "border_min_y", 8193, "Border Minimum Y",
	"Minimum Y value for the render border",
	0, "*",
	PROP_FLOAT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 67371008, NULL, NULL,
	offsetof(RenderData, border.ymin), 4, NULL},
	RenderSettings_border_min_y_get, RenderSettings_border_min_y_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 1.0f, 0.0f, 1.0f, 10.0f, 3, 0.0f, NULL
};

FloatPropertyRNA rna_RenderSettings_border_max_x = {
	{(PropertyRNA *)&rna_RenderSettings_border_max_y, (PropertyRNA *)&rna_RenderSettings_border_min_y,
	-1, "border_max_x", 8193, "Border Maximum X",
	"Maximum X value for the render border",
	0, "*",
	PROP_FLOAT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 67371008, NULL, NULL,
	offsetof(RenderData, border.xmax), 4, NULL},
	RenderSettings_border_max_x_get, RenderSettings_border_max_x_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 1.0f, 0.0f, 1.0f, 10.0f, 3, 0.0f, NULL
};

FloatPropertyRNA rna_RenderSettings_border_max_y = {
	{(PropertyRNA *)&rna_RenderSettings_use_crop_to_border, (PropertyRNA *)&rna_RenderSettings_border_max_x,
	-1, "border_max_y", 8193, "Border Maximum Y",
	"Maximum Y value for the render border",
	0, "*",
	PROP_FLOAT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 67371008, NULL, NULL,
	offsetof(RenderData, border.ymax), 4, NULL},
	RenderSettings_border_max_y_get, RenderSettings_border_max_y_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 1.0f, 0.0f, 1.0f, 10.0f, 3, 0.0f, NULL
};

BoolPropertyRNA rna_RenderSettings_use_crop_to_border = {
	{(PropertyRNA *)&rna_RenderSettings_use_placeholder, (PropertyRNA *)&rna_RenderSettings_border_max_y,
	-1, "use_crop_to_border", 1, "Crop to Border",
	"Crop the rendered frame to the defined border size",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 67371008, NULL, NULL,
	0, -1, NULL},
	RenderSettings_use_crop_to_border_get, RenderSettings_use_crop_to_border_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_RenderSettings_use_placeholder = {
	{(PropertyRNA *)&rna_RenderSettings_use_overwrite, (PropertyRNA *)&rna_RenderSettings_use_crop_to_border,
	-1, "use_placeholder", 3, "Placeholders",
	"Create empty placeholder files while rendering frames (similar to Unix \'touch\')",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 67371008, NULL, NULL,
	0, -1, NULL},
	RenderSettings_use_placeholder_get, RenderSettings_use_placeholder_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_RenderSettings_use_overwrite = {
	{(PropertyRNA *)&rna_RenderSettings_use_compositing, (PropertyRNA *)&rna_RenderSettings_use_placeholder,
	-1, "use_overwrite", 3, "Overwrite",
	"Overwrite existing files while rendering",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 67371008, NULL, NULL,
	0, -1, NULL},
	RenderSettings_use_overwrite_get, RenderSettings_use_overwrite_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_RenderSettings_use_compositing = {
	{(PropertyRNA *)&rna_RenderSettings_use_sequencer, (PropertyRNA *)&rna_RenderSettings_use_overwrite,
	-1, "use_compositing", 1, "Compositing",
	"Process the render result through the compositing pipeline, if compositing nodes are enabled",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 67371008, NULL, NULL,
	0, -1, NULL},
	RenderSettings_use_compositing_get, RenderSettings_use_compositing_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_RenderSettings_use_sequencer = {
	{(PropertyRNA *)&rna_RenderSettings_use_file_extension, (PropertyRNA *)&rna_RenderSettings_use_compositing,
	-1, "use_sequencer", 1, "Sequencer",
	"Process the render (and composited) result through the video sequence editor pipeline, if sequencer strips exist",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 67371008, NULL, NULL,
	0, -1, NULL},
	RenderSettings_use_sequencer_get, RenderSettings_use_sequencer_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_RenderSettings_use_file_extension = {
	{(PropertyRNA *)&rna_RenderSettings_file_extension, (PropertyRNA *)&rna_RenderSettings_use_sequencer,
	-1, "use_file_extension", 3, "File Extensions",
	"Add the file format extensions to the rendered file name (eg: filename + .jpg)",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 67371008, NULL, NULL,
	0, -1, NULL},
	RenderSettings_use_file_extension_get, RenderSettings_use_file_extension_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

StringPropertyRNA rna_RenderSettings_file_extension = {
	{(PropertyRNA *)&rna_RenderSettings_is_movie_format, (PropertyRNA *)&rna_RenderSettings_use_file_extension,
	-1, "file_extension", 262144, "Extension",
	"The file extension used for saving renders",
	0, "*",
	PROP_STRING, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	RenderSettings_file_extension_get, RenderSettings_file_extension_length, NULL, NULL, NULL, NULL, 0, ""
};

BoolPropertyRNA rna_RenderSettings_is_movie_format = {
	{(PropertyRNA *)&rna_RenderSettings_use_free_image_textures, (PropertyRNA *)&rna_RenderSettings_file_extension,
	-1, "is_movie_format", 2, "Movie Format",
	"When true the format is a movie",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	RenderSettings_is_movie_format_get, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_RenderSettings_use_free_image_textures = {
	{(PropertyRNA *)&rna_RenderSettings_use_free_unused_nodes, (PropertyRNA *)&rna_RenderSettings_is_movie_format,
	-1, "use_free_image_textures", 3, "Free Image Textures",
	"Free all image textures from memory after render, to save memory before compositing",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 67371008, NULL, NULL,
	0, -1, NULL},
	RenderSettings_use_free_image_textures_get, RenderSettings_use_free_image_textures_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_RenderSettings_use_free_unused_nodes = {
	{(PropertyRNA *)&rna_RenderSettings_use_save_buffers, (PropertyRNA *)&rna_RenderSettings_use_free_image_textures,
	-1, "use_free_unused_nodes", 3, "Free Unused Nodes",
	"Free Nodes that are not used while compositing, to save memory",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 67371008, NULL, NULL,
	0, -1, NULL},
	RenderSettings_use_free_unused_nodes_get, RenderSettings_use_free_unused_nodes_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_RenderSettings_use_save_buffers = {
	{(PropertyRNA *)&rna_RenderSettings_use_full_sample, (PropertyRNA *)&rna_RenderSettings_use_free_unused_nodes,
	-1, "use_save_buffers", 3, "Save Buffers",
	"Save tiles for all RenderLayers and SceneNodes to files in the temp directory (saves memory, required for Full Sample)",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 67371008, NULL, NULL,
	0, -1, NULL},
	RenderSettings_use_save_buffers_get, RenderSettings_use_save_buffers_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_RenderSettings_use_full_sample = {
	{(PropertyRNA *)&rna_RenderSettings_display_mode, (PropertyRNA *)&rna_RenderSettings_use_save_buffers,
	-1, "use_full_sample", 3, "Full Sample",
	"Save for every anti-aliasing sample the entire RenderLayer results (this solves anti-aliasing issues with compositing)",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 67371008, NULL, NULL,
	0, -1, NULL},
	RenderSettings_use_full_sample_get, RenderSettings_use_full_sample_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

static EnumPropertyItem rna_RenderSettings_display_mode_items[5] = {
	{0, "SCREEN", 0, "Full Screen", "Images are rendered in full Screen"},
	{1, "AREA", 0, "Image Editor", "Images are rendered in Image Editor"},
	{2, "WINDOW", 0, "New Window", "Images are rendered in new Window"},
	{3, "NONE", 0, "Keep UI", "Images are rendered without forcing UI changes"},
	{0, NULL, 0, NULL, NULL}
};

EnumPropertyRNA rna_RenderSettings_display_mode = {
	{(PropertyRNA *)&rna_RenderSettings_use_lock_interface, (PropertyRNA *)&rna_RenderSettings_use_full_sample,
	-1, "display_mode", 3, "Display",
	"Select where rendered images will be displayed",
	0, "*",
	PROP_ENUM, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 67371008, NULL, NULL,
	0, -1, NULL},
	RenderSettings_display_mode_get, RenderSettings_display_mode_set, NULL, NULL, NULL, NULL, rna_RenderSettings_display_mode_items, 4, 0
};

BoolPropertyRNA rna_RenderSettings_use_lock_interface = {
	{(PropertyRNA *)&rna_RenderSettings_filepath, (PropertyRNA *)&rna_RenderSettings_display_mode,
	-1, "use_lock_interface", 4099, "Lock Interface",
	"Lock interface during rendering in favor of giving more memory to the renderer",
	40, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 67371008, NULL, NULL,
	0, -1, NULL},
	RenderSettings_use_lock_interface_get, RenderSettings_use_lock_interface_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

StringPropertyRNA rna_RenderSettings_filepath = {
	{(PropertyRNA *)&rna_RenderSettings_use_render_cache, (PropertyRNA *)&rna_RenderSettings_use_lock_interface,
	-1, "filepath", 262145, "Output Path",
	"Directory/name to save animations, # characters defines the position and length of frame numbers",
	0, "*",
	PROP_STRING, PROP_FILEPATH | PROP_UNIT_NONE, NULL, 0, {1024, 0, 0}, 0,
	NULL, 67371008, NULL, NULL,
	0, -1, NULL},
	RenderSettings_filepath_get, RenderSettings_filepath_length, RenderSettings_filepath_set, NULL, NULL, NULL, 1024, ""
};

BoolPropertyRNA rna_RenderSettings_use_render_cache = {
	{(PropertyRNA *)&rna_RenderSettings_bake_type, (PropertyRNA *)&rna_RenderSettings_filepath,
	-1, "use_render_cache", 3, "Cache Result",
	"Save render cache to EXR files (useful for heavy compositing, Note: affects indirectly rendered scenes)",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 67371008, NULL, NULL,
	0, -1, NULL},
	RenderSettings_use_render_cache_get, RenderSettings_use_render_cache_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

static EnumPropertyItem rna_RenderSettings_bake_type_items[15] = {
	{1, "FULL", 0, "Full Render", "Bake everything"},
	{2, "AO", 0, "Ambient Occlusion", "Bake ambient occlusion"},
	{6, "SHADOW", 0, "Shadow", "Bake shadows"},
	{3, "NORMALS", 0, "Normals", "Bake normals"},
	{4, "TEXTURE", 0, "Textures", "Bake textures"},
	{5, "DISPLACEMENT", 0, "Displacement", "Bake displacement"},
	{13, "DERIVATIVE", 0, "Derivative", "Bake derivative map"},
	{14, "VERTEX_COLORS", 0, "Vertex Colors", "Bake vertex colors"},
	{12, "EMIT", 0, "Emission", "Bake Emit values (glow)"},
	{11, "ALPHA", 0, "Alpha", "Bake Alpha values (transparency)"},
	{10, "MIRROR_INTENSITY", 0, "Mirror Intensity", "Bake Mirror values"},
	{9, "MIRROR_COLOR", 0, "Mirror Colors", "Bake Mirror colors"},
	{8, "SPEC_INTENSITY", 0, "Specular Intensity", "Bake Specular values"},
	{7, "SPEC_COLOR", 0, "Specular Colors", "Bake Specular colors"},
	{0, NULL, 0, NULL, NULL}
};

EnumPropertyRNA rna_RenderSettings_bake_type = {
	{(PropertyRNA *)&rna_RenderSettings_bake_normal_space, (PropertyRNA *)&rna_RenderSettings_use_render_cache,
	-1, "bake_type", 3, "Bake Mode",
	"Choose shading information to bake into the image",
	0, "*",
	PROP_ENUM, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 67371008, NULL, NULL,
	0, -1, NULL},
	RenderSettings_bake_type_get, RenderSettings_bake_type_set, NULL, NULL, NULL, NULL, rna_RenderSettings_bake_type_items, 14, 1
};

static EnumPropertyItem rna_RenderSettings_bake_normal_space_items[5] = {
	{0, "CAMERA", 0, "Camera", "Bake the normals in camera space"},
	{1, "WORLD", 0, "World", "Bake the normals in world space"},
	{2, "OBJECT", 0, "Object", "Bake the normals in object space"},
	{3, "TANGENT", 0, "Tangent", "Bake the normals in tangent space"},
	{0, NULL, 0, NULL, NULL}
};

EnumPropertyRNA rna_RenderSettings_bake_normal_space = {
	{(PropertyRNA *)&rna_RenderSettings_bake_quad_split, (PropertyRNA *)&rna_RenderSettings_bake_type,
	-1, "bake_normal_space", 3, "Normal Space",
	"Choose normal space for baking",
	0, "*",
	PROP_ENUM, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 67371008, NULL, NULL,
	0, -1, NULL},
	RenderSettings_bake_normal_space_get, RenderSettings_bake_normal_space_set, NULL, NULL, NULL, NULL, rna_RenderSettings_bake_normal_space_items, 4, 0
};

static EnumPropertyItem rna_RenderSettings_bake_quad_split_items[4] = {
	{0, "AUTO", 0, "Automatic", "Split quads to give the least distortion while baking"},
	{1, "FIXED", 0, "Fixed", "Split quads predictably (0,1,2) (0,2,3)"},
	{2, "FIXED_ALT", 0, "Fixed Alternate", "Split quads predictably (1,2,3) (1,3,0)"},
	{0, NULL, 0, NULL, NULL}
};

EnumPropertyRNA rna_RenderSettings_bake_quad_split = {
	{(PropertyRNA *)&rna_RenderSettings_bake_aa_mode, (PropertyRNA *)&rna_RenderSettings_bake_normal_space,
	-1, "bake_quad_split", 3, "Quad Split",
	"Choose the method used to split a quad into 2 triangles for baking",
	0, "*",
	PROP_ENUM, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 67371008, NULL, NULL,
	0, -1, NULL},
	RenderSettings_bake_quad_split_get, RenderSettings_bake_quad_split_set, NULL, NULL, NULL, NULL, rna_RenderSettings_bake_quad_split_items, 3, 0
};

static EnumPropertyItem rna_RenderSettings_bake_aa_mode_items[5] = {
	{5, "5", 0, "5", ""},
	{8, "8", 0, "8", ""},
	{11, "11", 0, "11", ""},
	{16, "16", 0, "16", ""},
	{0, NULL, 0, NULL, NULL}
};

EnumPropertyRNA rna_RenderSettings_bake_aa_mode = {
	{(PropertyRNA *)&rna_RenderSettings_use_bake_selected_to_active, (PropertyRNA *)&rna_RenderSettings_bake_quad_split,
	-1, "bake_aa_mode", 3, "Anti-Aliasing Level",
	"",
	0, "*",
	PROP_ENUM, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 67371008, NULL, NULL,
	0, -1, NULL},
	RenderSettings_bake_aa_mode_get, RenderSettings_bake_aa_mode_set, NULL, NULL, NULL, NULL, rna_RenderSettings_bake_aa_mode_items, 4, 5
};

BoolPropertyRNA rna_RenderSettings_use_bake_selected_to_active = {
	{(PropertyRNA *)&rna_RenderSettings_use_bake_normalize, (PropertyRNA *)&rna_RenderSettings_bake_aa_mode,
	-1, "use_bake_selected_to_active", 3, "Selected to Active",
	"Bake shading on the surface of selected objects to the active object",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 67371008, NULL, NULL,
	0, -1, NULL},
	RenderSettings_use_bake_selected_to_active_get, RenderSettings_use_bake_selected_to_active_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_RenderSettings_use_bake_normalize = {
	{(PropertyRNA *)&rna_RenderSettings_use_bake_clear, (PropertyRNA *)&rna_RenderSettings_use_bake_selected_to_active,
	-1, "use_bake_normalize", 3, "Normalized",
	"With displacement normalize to the distance, with ambient occlusion normalize without using material settings",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 67371008, NULL, NULL,
	0, -1, NULL},
	RenderSettings_use_bake_normalize_get, RenderSettings_use_bake_normalize_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_RenderSettings_use_bake_clear = {
	{(PropertyRNA *)&rna_RenderSettings_use_bake_antialiasing, (PropertyRNA *)&rna_RenderSettings_use_bake_normalize,
	-1, "use_bake_clear", 3, "Clear",
	"Clear Images before baking",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 67371008, NULL, NULL,
	0, -1, NULL},
	RenderSettings_use_bake_clear_get, RenderSettings_use_bake_clear_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_RenderSettings_use_bake_antialiasing = {
	{(PropertyRNA *)&rna_RenderSettings_bake_margin, (PropertyRNA *)&rna_RenderSettings_use_bake_clear,
	-1, "use_bake_antialiasing", 3, "Anti-Aliasing",
	"Enables Anti-aliasing",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 67371008, NULL, NULL,
	0, -1, NULL},
	RenderSettings_use_bake_antialiasing_get, RenderSettings_use_bake_antialiasing_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

IntPropertyRNA rna_RenderSettings_bake_margin = {
	{(PropertyRNA *)&rna_RenderSettings_bake_distance, (PropertyRNA *)&rna_RenderSettings_use_bake_antialiasing,
	-1, "bake_margin", 8195, "Margin",
	"Extends the baked result as a post process filter",
	0, "*",
	PROP_INT, PROP_PIXEL | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 67371008, NULL, NULL,
	offsetof(RenderData, bake_filter), 1, NULL},
	RenderSettings_bake_margin_get, RenderSettings_bake_margin_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL,
	0, 64, 0, 64, 1, 0, NULL
};

FloatPropertyRNA rna_RenderSettings_bake_distance = {
	{(PropertyRNA *)&rna_RenderSettings_bake_bias, (PropertyRNA *)&rna_RenderSettings_bake_margin,
	-1, "bake_distance", 8195, "Distance",
	"Maximum distance from active object to other object (in blender units)",
	0, "*",
	PROP_FLOAT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 67371008, NULL, NULL,
	offsetof(RenderData, bake_maxdist), 4, NULL},
	RenderSettings_bake_distance_get, RenderSettings_bake_distance_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 1000.0f, 0.0f, 1000.0f, 10.0f, 3, 0.0f, NULL
};

FloatPropertyRNA rna_RenderSettings_bake_bias = {
	{(PropertyRNA *)&rna_RenderSettings_use_bake_multires, (PropertyRNA *)&rna_RenderSettings_bake_distance,
	-1, "bake_bias", 8195, "Bias",
	"Bias towards faces further away from the object (in blender units)",
	0, "*",
	PROP_FLOAT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 67371008, NULL, NULL,
	offsetof(RenderData, bake_biasdist), 4, NULL},
	RenderSettings_bake_bias_get, RenderSettings_bake_bias_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 1000.0f, 0.0f, 1000.0f, 10.0f, 3, 0.0f, NULL
};

BoolPropertyRNA rna_RenderSettings_use_bake_multires = {
	{(PropertyRNA *)&rna_RenderSettings_use_bake_lores_mesh, (PropertyRNA *)&rna_RenderSettings_bake_bias,
	-1, "use_bake_multires", 3, "Bake from Multires",
	"Bake directly from multires object",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 67371008, NULL, NULL,
	0, -1, NULL},
	RenderSettings_use_bake_multires_get, RenderSettings_use_bake_multires_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_RenderSettings_use_bake_lores_mesh = {
	{(PropertyRNA *)&rna_RenderSettings_bake_samples, (PropertyRNA *)&rna_RenderSettings_use_bake_multires,
	-1, "use_bake_lores_mesh", 3, "Low Resolution Mesh",
	"Calculate heights against unsubdivided low resolution mesh",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 67371008, NULL, NULL,
	0, -1, NULL},
	RenderSettings_use_bake_lores_mesh_get, RenderSettings_use_bake_lores_mesh_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

IntPropertyRNA rna_RenderSettings_bake_samples = {
	{(PropertyRNA *)&rna_RenderSettings_use_bake_to_vertex_color, (PropertyRNA *)&rna_RenderSettings_use_bake_lores_mesh,
	-1, "bake_samples", 8195, "Samples",
	"Number of samples used for ambient occlusion baking from multires",
	0, "*",
	PROP_INT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 67371008, NULL, NULL,
	offsetof(RenderData, bake_samples), 1, NULL},
	RenderSettings_bake_samples_get, RenderSettings_bake_samples_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL,
	64, 1024, 64, 1024, 1, 256, NULL
};

BoolPropertyRNA rna_RenderSettings_use_bake_to_vertex_color = {
	{(PropertyRNA *)&rna_RenderSettings_use_bake_user_scale, (PropertyRNA *)&rna_RenderSettings_bake_samples,
	-1, "use_bake_to_vertex_color", 3, "Bake to Vertex Color",
	"Bake to vertex colors instead of to a UV-mapped image",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 67371008, NULL, NULL,
	0, -1, NULL},
	RenderSettings_use_bake_to_vertex_color_get, RenderSettings_use_bake_to_vertex_color_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_RenderSettings_use_bake_user_scale = {
	{(PropertyRNA *)&rna_RenderSettings_bake_user_scale, (PropertyRNA *)&rna_RenderSettings_use_bake_to_vertex_color,
	-1, "use_bake_user_scale", 3, "User scale",
	"Use a user scale for the derivative map",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	RenderSettings_use_bake_user_scale_get, RenderSettings_use_bake_user_scale_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

FloatPropertyRNA rna_RenderSettings_bake_user_scale = {
	{(PropertyRNA *)&rna_RenderSettings_use_stamp_time, (PropertyRNA *)&rna_RenderSettings_use_bake_user_scale,
	-1, "bake_user_scale", 8195, "Scale",
	"Instead of automatically normalizing to 0..1, apply a user scale to the derivative map",
	0, "*",
	PROP_FLOAT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	offsetof(RenderData, bake_user_scale), 4, NULL},
	RenderSettings_bake_user_scale_get, RenderSettings_bake_user_scale_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 1000.0f, 0.0f, 1000.0f, 10.0f, 3, 0.0f, NULL
};

BoolPropertyRNA rna_RenderSettings_use_stamp_time = {
	{(PropertyRNA *)&rna_RenderSettings_use_stamp_date, (PropertyRNA *)&rna_RenderSettings_bake_user_scale,
	-1, "use_stamp_time", 3, "Stamp Time",
	"Include the rendered frame timecode as HH:MM:SS.FF in image metadata",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 67371008, NULL, NULL,
	0, -1, NULL},
	RenderSettings_use_stamp_time_get, RenderSettings_use_stamp_time_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_RenderSettings_use_stamp_date = {
	{(PropertyRNA *)&rna_RenderSettings_use_stamp_frame, (PropertyRNA *)&rna_RenderSettings_use_stamp_time,
	-1, "use_stamp_date", 3, "Stamp Date",
	"Include the current date in image metadata",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 67371008, NULL, NULL,
	0, -1, NULL},
	RenderSettings_use_stamp_date_get, RenderSettings_use_stamp_date_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_RenderSettings_use_stamp_frame = {
	{(PropertyRNA *)&rna_RenderSettings_use_stamp_camera, (PropertyRNA *)&rna_RenderSettings_use_stamp_date,
	-1, "use_stamp_frame", 3, "Stamp Frame",
	"Include the frame number in image metadata",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 67371008, NULL, NULL,
	0, -1, NULL},
	RenderSettings_use_stamp_frame_get, RenderSettings_use_stamp_frame_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_RenderSettings_use_stamp_camera = {
	{(PropertyRNA *)&rna_RenderSettings_use_stamp_lens, (PropertyRNA *)&rna_RenderSettings_use_stamp_frame,
	-1, "use_stamp_camera", 3, "Stamp Camera",
	"Include the name of the active camera in image metadata",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 67371008, NULL, NULL,
	0, -1, NULL},
	RenderSettings_use_stamp_camera_get, RenderSettings_use_stamp_camera_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_RenderSettings_use_stamp_lens = {
	{(PropertyRNA *)&rna_RenderSettings_use_stamp_scene, (PropertyRNA *)&rna_RenderSettings_use_stamp_camera,
	-1, "use_stamp_lens", 3, "Stamp Lens",
	"Include the active camera\'s lens in image metadata",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 67371008, NULL, NULL,
	0, -1, NULL},
	RenderSettings_use_stamp_lens_get, RenderSettings_use_stamp_lens_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_RenderSettings_use_stamp_scene = {
	{(PropertyRNA *)&rna_RenderSettings_use_stamp_note, (PropertyRNA *)&rna_RenderSettings_use_stamp_lens,
	-1, "use_stamp_scene", 3, "Stamp Scene",
	"Include the name of the active scene in image metadata",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 67371008, NULL, NULL,
	0, -1, NULL},
	RenderSettings_use_stamp_scene_get, RenderSettings_use_stamp_scene_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_RenderSettings_use_stamp_note = {
	{(PropertyRNA *)&rna_RenderSettings_use_stamp_marker, (PropertyRNA *)&rna_RenderSettings_use_stamp_scene,
	-1, "use_stamp_note", 3, "Stamp Note",
	"Include a custom note in image metadata",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 67371008, NULL, NULL,
	0, -1, NULL},
	RenderSettings_use_stamp_note_get, RenderSettings_use_stamp_note_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_RenderSettings_use_stamp_marker = {
	{(PropertyRNA *)&rna_RenderSettings_use_stamp_filename, (PropertyRNA *)&rna_RenderSettings_use_stamp_note,
	-1, "use_stamp_marker", 3, "Stamp Marker",
	"Include the name of the last marker in image metadata",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 67371008, NULL, NULL,
	0, -1, NULL},
	RenderSettings_use_stamp_marker_get, RenderSettings_use_stamp_marker_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_RenderSettings_use_stamp_filename = {
	{(PropertyRNA *)&rna_RenderSettings_use_stamp_sequencer_strip, (PropertyRNA *)&rna_RenderSettings_use_stamp_marker,
	-1, "use_stamp_filename", 3, "Stamp Filename",
	"Include the .blend filename in image metadata",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 67371008, NULL, NULL,
	0, -1, NULL},
	RenderSettings_use_stamp_filename_get, RenderSettings_use_stamp_filename_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_RenderSettings_use_stamp_sequencer_strip = {
	{(PropertyRNA *)&rna_RenderSettings_use_stamp_render_time, (PropertyRNA *)&rna_RenderSettings_use_stamp_filename,
	-1, "use_stamp_sequencer_strip", 3, "Stamp Sequence Strip",
	"Include the name of the foreground sequence strip in image metadata",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 67371008, NULL, NULL,
	0, -1, NULL},
	RenderSettings_use_stamp_sequencer_strip_get, RenderSettings_use_stamp_sequencer_strip_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_RenderSettings_use_stamp_render_time = {
	{(PropertyRNA *)&rna_RenderSettings_stamp_note_text, (PropertyRNA *)&rna_RenderSettings_use_stamp_sequencer_strip,
	-1, "use_stamp_render_time", 3, "Stamp Render Time",
	"Include the render time in image metadata",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 67371008, NULL, NULL,
	0, -1, NULL},
	RenderSettings_use_stamp_render_time_get, RenderSettings_use_stamp_render_time_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

StringPropertyRNA rna_RenderSettings_stamp_note_text = {
	{(PropertyRNA *)&rna_RenderSettings_use_stamp, (PropertyRNA *)&rna_RenderSettings_use_stamp_render_time,
	-1, "stamp_note_text", 262145, "Stamp Note Text",
	"Custom text to appear in the stamp note",
	0, "*",
	PROP_STRING, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {768, 0, 0}, 0,
	NULL, 67371008, NULL, NULL,
	0, -1, NULL},
	RenderSettings_stamp_note_text_get, RenderSettings_stamp_note_text_length, RenderSettings_stamp_note_text_set, NULL, NULL, NULL, 768, ""
};

BoolPropertyRNA rna_RenderSettings_use_stamp = {
	{(PropertyRNA *)&rna_RenderSettings_stamp_font_size, (PropertyRNA *)&rna_RenderSettings_stamp_note_text,
	-1, "use_stamp", 3, "Render Stamp",
	"Render the stamp info text in the rendered image",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 67371008, NULL, NULL,
	0, -1, NULL},
	RenderSettings_use_stamp_get, RenderSettings_use_stamp_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

IntPropertyRNA rna_RenderSettings_stamp_font_size = {
	{(PropertyRNA *)&rna_RenderSettings_stamp_foreground, (PropertyRNA *)&rna_RenderSettings_use_stamp,
	-1, "stamp_font_size", 8195, "Font Size",
	"Size of the font used when rendering stamp text",
	0, "*",
	PROP_INT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 67371008, NULL, NULL,
	offsetof(RenderData, stamp_font_id), 1, NULL},
	RenderSettings_stamp_font_size_get, RenderSettings_stamp_font_size_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL,
	8, 64, 8, 64, 1, 0, NULL
};

static float rna_RenderSettings_stamp_foreground_default[4] = {
	0.0f,
	0.0f,
	0.0f,
	0.0f
};

FloatPropertyRNA rna_RenderSettings_stamp_foreground = {
	{(PropertyRNA *)&rna_RenderSettings_stamp_background, (PropertyRNA *)&rna_RenderSettings_stamp_font_size,
	-1, "stamp_foreground", 8195, "Text Color",
	"Color to use for stamp text",
	0, "*",
	PROP_FLOAT, PROP_COLOR | PROP_UNIT_NONE, NULL, 1, {4, 0, 0}, 4,
	NULL, 67371008, NULL, NULL,
	offsetof(RenderData, fg_stamp), 4, NULL},
	NULL, NULL, RenderSettings_stamp_foreground_get, RenderSettings_stamp_foreground_set, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 1.0f, 0.0f, 1.0f, 10.0f, 3, 0.0f, rna_RenderSettings_stamp_foreground_default
};

static float rna_RenderSettings_stamp_background_default[4] = {
	0.0f,
	0.0f,
	0.0f,
	0.0f
};

FloatPropertyRNA rna_RenderSettings_stamp_background = {
	{(PropertyRNA *)&rna_RenderSettings_use_sequencer_gl_preview, (PropertyRNA *)&rna_RenderSettings_stamp_foreground,
	-1, "stamp_background", 8195, "Background",
	"Color to use behind stamp text",
	0, "*",
	PROP_FLOAT, PROP_COLOR | PROP_UNIT_NONE, NULL, 1, {4, 0, 0}, 4,
	NULL, 67371008, NULL, NULL,
	offsetof(RenderData, bg_stamp), 4, NULL},
	NULL, NULL, RenderSettings_stamp_background_get, RenderSettings_stamp_background_set, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 1.0f, 0.0f, 1.0f, 10.0f, 3, 0.0f, rna_RenderSettings_stamp_background_default
};

BoolPropertyRNA rna_RenderSettings_use_sequencer_gl_preview = {
	{(PropertyRNA *)&rna_RenderSettings_sequencer_gl_preview, (PropertyRNA *)&rna_RenderSettings_stamp_background,
	-1, "use_sequencer_gl_preview", 3, "Sequencer OpenGL",
	"",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_SceneSequencer_update, 67502080, NULL, NULL,
	0, -1, NULL},
	RenderSettings_use_sequencer_gl_preview_get, RenderSettings_use_sequencer_gl_preview_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

static EnumPropertyItem rna_RenderSettings_sequencer_gl_preview_items[7] = {
	{1, "BOUNDBOX", 624, "Bounding Box", "Display the object\'s local bounding boxes only"},
	{2, "WIREFRAME", 625, "Wireframe", "Display the object as wire edges"},
	{3, "SOLID", 626, "Solid", "Display the object solid, lit with default OpenGL lights"},
	{5, "TEXTURED", 628, "Texture", "Display the object solid, with a texture"},
	{4, "MATERIAL", 165, "Material", "Display objects solid, with GLSL material"},
	{6, "RENDERED", 627, "Rendered", "Display render preview"},
	{0, NULL, 0, NULL, NULL}
};

EnumPropertyRNA rna_RenderSettings_sequencer_gl_preview = {
	{(PropertyRNA *)&rna_RenderSettings_sequencer_gl_render, (PropertyRNA *)&rna_RenderSettings_use_sequencer_gl_preview,
	-1, "sequencer_gl_preview", 3, "Sequencer Preview Shading",
	"Method to draw in the sequencer view",
	0, "*",
	PROP_ENUM, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_SceneSequencer_update, 67502080, NULL, NULL,
	0, -1, NULL},
	RenderSettings_sequencer_gl_preview_get, RenderSettings_sequencer_gl_preview_set, NULL, NULL, NULL, NULL, rna_RenderSettings_sequencer_gl_preview_items, 6, 1
};

static EnumPropertyItem rna_RenderSettings_sequencer_gl_render_items[7] = {
	{1, "BOUNDBOX", 624, "Bounding Box", "Display the object\'s local bounding boxes only"},
	{2, "WIREFRAME", 625, "Wireframe", "Display the object as wire edges"},
	{3, "SOLID", 626, "Solid", "Display the object solid, lit with default OpenGL lights"},
	{5, "TEXTURED", 628, "Texture", "Display the object solid, with a texture"},
	{4, "MATERIAL", 165, "Material", "Display objects solid, with GLSL material"},
	{6, "RENDERED", 627, "Rendered", "Display render preview"},
	{0, NULL, 0, NULL, NULL}
};

EnumPropertyRNA rna_RenderSettings_sequencer_gl_render = {
	{(PropertyRNA *)&rna_RenderSettings_use_sequencer_gl_textured_solid, (PropertyRNA *)&rna_RenderSettings_sequencer_gl_preview,
	-1, "sequencer_gl_render", 3, "Sequencer Preview Shading",
	"Method to draw in the sequencer view",
	0, "*",
	PROP_ENUM, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	RenderSettings_sequencer_gl_render_get, RenderSettings_sequencer_gl_render_set, NULL, NULL, NULL, NULL, rna_RenderSettings_sequencer_gl_render_items, 6, 1
};

BoolPropertyRNA rna_RenderSettings_use_sequencer_gl_textured_solid = {
	{(PropertyRNA *)&rna_RenderSettings_layers, (PropertyRNA *)&rna_RenderSettings_sequencer_gl_render,
	-1, "use_sequencer_gl_textured_solid", 3, "Textured Solid",
	"Draw face-assigned textures in solid draw method",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_SceneSequencer_update, 67502080, NULL, NULL,
	0, -1, NULL},
	RenderSettings_use_sequencer_gl_textured_solid_get, RenderSettings_use_sequencer_gl_textured_solid_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

CollectionPropertyRNA rna_RenderSettings_layers = {
	{(PropertyRNA *)&rna_RenderSettings_use_single_layer, (PropertyRNA *)&rna_RenderSettings_use_sequencer_gl_textured_solid,
	-1, "layers", 0, "Render Layers",
	"",
	0, "*",
	PROP_COLLECTION, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, &RNA_RenderLayers},
	RenderSettings_layers_begin, RenderSettings_layers_next, RenderSettings_layers_end, RenderSettings_layers_get, NULL, RenderSettings_layers_lookup_int, RenderSettings_layers_lookup_string, NULL, &RNA_SceneRenderLayer
};

BoolPropertyRNA rna_RenderSettings_use_single_layer = {
	{(PropertyRNA *)&rna_RenderSettings_engine, (PropertyRNA *)&rna_RenderSettings_layers,
	-1, "use_single_layer", 4099, "Single Layer",
	"Only render the active layer",
	42, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 67371008, NULL, NULL,
	0, -1, NULL},
	RenderSettings_use_single_layer_get, RenderSettings_use_single_layer_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

static EnumPropertyItem rna_RenderSettings_engine_items[2] = {
	{0, "BLENDER_RENDER", 0, "Blender Render", "Use the Blender internal rendering engine for rendering"},
	{0, NULL, 0, NULL, NULL}
};

EnumPropertyRNA rna_RenderSettings_engine = {
	{(PropertyRNA *)&rna_RenderSettings_has_multiple_engines, (PropertyRNA *)&rna_RenderSettings_use_single_layer,
	-1, "engine", 1, "Engine",
	"Engine to use for rendering",
	0, "*",
	PROP_ENUM, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {32, 0, 0}, 0,
	rna_RenderSettings_engine_update, 33554432, NULL, NULL,
	0, -1, NULL},
	RenderSettings_engine_get, RenderSettings_engine_set, rna_RenderSettings_engine_itemf, NULL, NULL, NULL, rna_RenderSettings_engine_items, 1, 0
};

BoolPropertyRNA rna_RenderSettings_has_multiple_engines = {
	{(PropertyRNA *)&rna_RenderSettings_use_shading_nodes, (PropertyRNA *)&rna_RenderSettings_engine,
	-1, "has_multiple_engines", 2, "Multiple Engines",
	"More than one rendering engine is available",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	RenderSettings_has_multiple_engines_get, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_RenderSettings_use_shading_nodes = {
	{(PropertyRNA *)&rna_RenderSettings_use_game_engine, (PropertyRNA *)&rna_RenderSettings_has_multiple_engines,
	-1, "use_shading_nodes", 2, "Use Shading Nodes",
	"Active render engine uses new shading nodes system",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	RenderSettings_use_shading_nodes_get, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_RenderSettings_use_game_engine = {
	{(PropertyRNA *)&rna_RenderSettings_use_simplify, (PropertyRNA *)&rna_RenderSettings_use_shading_nodes,
	-1, "use_game_engine", 2, "Use Game Engine",
	"Current rendering engine is a game engine",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	RenderSettings_use_game_engine_get, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_RenderSettings_use_simplify = {
	{(PropertyRNA *)&rna_RenderSettings_simplify_subdivision, (PropertyRNA *)&rna_RenderSettings_use_game_engine,
	-1, "use_simplify", 3, "Use Simplify",
	"Enable simplification of scene for quicker preview renders",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Scene_use_simplify_update, 0, NULL, NULL,
	0, -1, NULL},
	RenderSettings_use_simplify_get, RenderSettings_use_simplify_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

IntPropertyRNA rna_RenderSettings_simplify_subdivision = {
	{(PropertyRNA *)&rna_RenderSettings_simplify_child_particles, (PropertyRNA *)&rna_RenderSettings_use_simplify,
	-1, "simplify_subdivision", 8195, "Simplify Subdivision",
	"Global maximum subdivision level",
	0, "*",
	PROP_INT, PROP_UNSIGNED | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Scene_simplify_update, 0, NULL, NULL,
	offsetof(RenderData, simplify_subsurf), 1, NULL},
	RenderSettings_simplify_subdivision_get, RenderSettings_simplify_subdivision_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL,
	0, 6, 0, 32767, 1, 0, NULL
};

FloatPropertyRNA rna_RenderSettings_simplify_child_particles = {
	{(PropertyRNA *)&rna_RenderSettings_simplify_shadow_samples, (PropertyRNA *)&rna_RenderSettings_simplify_subdivision,
	-1, "simplify_child_particles", 8195, "Simplify Child Particles",
	"Global child particles percentage",
	0, "*",
	PROP_FLOAT, PROP_FACTOR | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Scene_simplify_update, 0, NULL, NULL,
	offsetof(RenderData, simplify_particles), 4, NULL},
	RenderSettings_simplify_child_particles_get, RenderSettings_simplify_child_particles_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 1.0f, 0.0f, 1.0f, 10.0f, 3, 0.0f, NULL
};

IntPropertyRNA rna_RenderSettings_simplify_shadow_samples = {
	{(PropertyRNA *)&rna_RenderSettings_simplify_ao_sss, (PropertyRNA *)&rna_RenderSettings_simplify_child_particles,
	-1, "simplify_shadow_samples", 8195, "Simplify Shadow Samples",
	"Global maximum shadow samples",
	0, "*",
	PROP_INT, PROP_UNSIGNED | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Scene_simplify_update, 0, NULL, NULL,
	offsetof(RenderData, simplify_shadowsamples), 1, NULL},
	RenderSettings_simplify_shadow_samples_get, RenderSettings_simplify_shadow_samples_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL,
	1, 16, 0, 32767, 1, 0, NULL
};

FloatPropertyRNA rna_RenderSettings_simplify_ao_sss = {
	{(PropertyRNA *)&rna_RenderSettings_use_simplify_triangulate, (PropertyRNA *)&rna_RenderSettings_simplify_shadow_samples,
	-1, "simplify_ao_sss", 8195, "Simplify AO and SSS",
	"Global approximate AO and SSS quality factor",
	0, "*",
	PROP_FLOAT, PROP_FACTOR | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Scene_simplify_update, 0, NULL, NULL,
	offsetof(RenderData, simplify_aosss), 4, NULL},
	RenderSettings_simplify_ao_sss_get, RenderSettings_simplify_ao_sss_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 1.0f, 0.0f, 1.0f, 10.0f, 3, 0.0f, NULL
};

BoolPropertyRNA rna_RenderSettings_use_simplify_triangulate = {
	{(PropertyRNA *)&rna_RenderSettings_use_persistent_data, (PropertyRNA *)&rna_RenderSettings_simplify_ao_sss,
	-1, "use_simplify_triangulate", 3, "Skip Quad to Triangles",
	"Disable non-planar quads being triangulated",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	RenderSettings_use_simplify_triangulate_get, RenderSettings_use_simplify_triangulate_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_RenderSettings_use_persistent_data = {
	{(PropertyRNA *)&rna_RenderSettings_line_thickness_mode, (PropertyRNA *)&rna_RenderSettings_use_simplify_triangulate,
	-1, "use_persistent_data", 3, "Persistent Data",
	"Keep render data around for faster re-renders",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Scene_use_persistent_data_update, 0, NULL, NULL,
	0, -1, NULL},
	RenderSettings_use_persistent_data_get, RenderSettings_use_persistent_data_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

static EnumPropertyItem rna_RenderSettings_line_thickness_mode_items[3] = {
	{1, "ABSOLUTE", 0, "Absolute", "Specify unit line thickness in pixels"},
	{2, "RELATIVE", 0, "Relative", "Unit line thickness is scaled by the proportion of the present vertical image resolution to 480 pixels"},
	{0, NULL, 0, NULL, NULL}
};

EnumPropertyRNA rna_RenderSettings_line_thickness_mode = {
	{(PropertyRNA *)&rna_RenderSettings_line_thickness, (PropertyRNA *)&rna_RenderSettings_use_persistent_data,
	-1, "line_thickness_mode", 3, "Line Thickness Mode",
	"Line thickness mode for Freestyle line drawing",
	0, "*",
	PROP_ENUM, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Scene_freestyle_update, 67371008, NULL, NULL,
	0, -1, NULL},
	RenderSettings_line_thickness_mode_get, RenderSettings_line_thickness_mode_set, NULL, NULL, NULL, NULL, rna_RenderSettings_line_thickness_mode_items, 2, 1
};

FloatPropertyRNA rna_RenderSettings_line_thickness = {
	{(PropertyRNA *)&rna_RenderSettings_bake, (PropertyRNA *)&rna_RenderSettings_line_thickness_mode,
	-1, "line_thickness", 8195, "Line Thickness",
	"Line thickness in pixels",
	0, "*",
	PROP_FLOAT, PROP_PIXEL | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Scene_freestyle_update, 67371008, NULL, NULL,
	offsetof(RenderData, unit_line_thickness), 4, NULL},
	RenderSettings_line_thickness_get, RenderSettings_line_thickness_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 10000.0f, 0.0f, 10000.0f, 10.0f, 3, 0.0f, NULL
};

PointerPropertyRNA rna_RenderSettings_bake = {
	{NULL, (PropertyRNA *)&rna_RenderSettings_line_thickness,
	-1, "bake", 8650752, "Bake Data",
	"",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	RenderSettings_bake_get, NULL, NULL, NULL,&RNA_BakeSettings
};

IntPropertyRNA rna_RenderSettings_frame_path_frame = {
	{(PropertyRNA *)&rna_RenderSettings_frame_path_filepath, NULL,
	-1, "frame", 3, "",
	"Frame number to use, if unset the current frame will be used",
	0, "*",
	PROP_INT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL,
	-300000, 300000, INT_MIN, INT_MAX, 1, INT_MIN, NULL
};

StringPropertyRNA rna_RenderSettings_frame_path_filepath = {
	{NULL, (PropertyRNA *)&rna_RenderSettings_frame_path_frame,
	-1, "filepath", 8650761, "File Path",
	"The resulting filepath from the scenes render settings",
	0, "*",
	PROP_STRING, PROP_FILEPATH | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	NULL, NULL, NULL, NULL, NULL, NULL, 1024, ""
};

FunctionRNA rna_RenderSettings_frame_path_func = {
	{NULL, NULL,
	NULL,
	{(PropertyRNA *)&rna_RenderSettings_frame_path_frame, (PropertyRNA *)&rna_RenderSettings_frame_path_filepath}},
	"frame_path", 0, "Return the absolute path to the filename to be written for a given frame",
	RenderSettings_frame_path_call,
	NULL
};

StructRNA RNA_RenderSettings = {
	{(ContainerRNA *)&RNA_RenderLayers, (ContainerRNA *)&RNA_FFmpegSettings,
	NULL,
	{(PropertyRNA *)&rna_RenderSettings_rna_properties, (PropertyRNA *)&rna_RenderSettings_bake}},
	"RenderSettings", NULL, NULL, 4, "Render Data",
	"Rendering settings for a Scene datablock",
	"*", 17,
	NULL, (PropertyRNA *)&rna_RenderSettings_rna_properties,
	NULL,
	&RNA_Scene,
	NULL,
	rna_RenderSettings_path,
	NULL,
	NULL,
	NULL,
	NULL,
	{(FunctionRNA *)&rna_RenderSettings_frame_path_func, (FunctionRNA *)&rna_RenderSettings_frame_path_func}
};

/* Render Layers */
CollectionPropertyRNA rna_RenderLayers_rna_properties = {
	{(PropertyRNA *)&rna_RenderLayers_rna_type, NULL,
	-1, "rna_properties", 128, "Properties",
	"RNA property collection",
	0, "*",
	PROP_COLLECTION, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	RenderLayers_rna_properties_begin, RenderLayers_rna_properties_next, RenderLayers_rna_properties_end, RenderLayers_rna_properties_get, NULL, NULL, RenderLayers_rna_properties_lookup_string, NULL, &RNA_Property
};

PointerPropertyRNA rna_RenderLayers_rna_type = {
	{(PropertyRNA *)&rna_RenderLayers_active_index, (PropertyRNA *)&rna_RenderLayers_rna_properties,
	-1, "rna_type", 8912896, "RNA",
	"RNA type definition",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	RenderLayers_rna_type_get, NULL, NULL, NULL,&RNA_Struct
};

IntPropertyRNA rna_RenderLayers_active_index = {
	{(PropertyRNA *)&rna_RenderLayers_active, (PropertyRNA *)&rna_RenderLayers_rna_type,
	-1, "active_index", 3, "Active Layer Index",
	"Active index in render layer array",
	0, "*",
	PROP_INT, PROP_UNSIGNED | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Scene_glsl_update, 67371008, NULL, NULL,
	0, -1, NULL},
	RenderLayers_active_index_get, RenderLayers_active_index_set, NULL, NULL, rna_RenderSettings_active_layer_index_range, NULL, NULL, NULL, NULL, NULL,
	0, 32767, 0, 32767, 1, 0, NULL
};

PointerPropertyRNA rna_RenderLayers_active = {
	{NULL, (PropertyRNA *)&rna_RenderLayers_active_index,
	-1, "active", 8650753, "Active Render Layer",
	"Active Render Layer",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Scene_glsl_update, 67371008, NULL, NULL,
	0, -1, NULL},
	RenderLayers_active_get, RenderLayers_active_set, NULL, NULL,&RNA_SceneRenderLayer
};

StringPropertyRNA rna_RenderLayers_new_name = {
	{(PropertyRNA *)&rna_RenderLayers_new_result, NULL,
	-1, "name", 262149, "",
	"New name for the render layer (not unique)",
	0, "*",
	PROP_STRING, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	NULL, NULL, NULL, NULL, NULL, NULL, 0, "RenderLayer"
};

PointerPropertyRNA rna_RenderLayers_new_result = {
	{NULL, (PropertyRNA *)&rna_RenderLayers_new_name,
	-1, "result", 8388616, "",
	"Newly created render layer",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	NULL, NULL, NULL, NULL,&RNA_SceneRenderLayer
};

FunctionRNA rna_RenderLayers_new_func = {
	{(FunctionRNA *)&rna_RenderLayers_remove_func, NULL,
	NULL,
	{(PropertyRNA *)&rna_RenderLayers_new_name, (PropertyRNA *)&rna_RenderLayers_new_result}},
	"new", 2048, "Add a render layer to scene",
	RenderLayers_new_call,
	(PropertyRNA *)&rna_RenderLayers_new_result
};

PointerPropertyRNA rna_RenderLayers_remove_layer = {
	{NULL, NULL,
	-1, "layer", 264196, "",
	"Render layer to remove",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	NULL, NULL, NULL, NULL,&RNA_SceneRenderLayer
};

FunctionRNA rna_RenderLayers_remove_func = {
	{NULL, (FunctionRNA *)&rna_RenderLayers_new_func,
	NULL,
	{(PropertyRNA *)&rna_RenderLayers_remove_layer, (PropertyRNA *)&rna_RenderLayers_remove_layer}},
	"remove", 2068, "Remove a render layer",
	RenderLayers_remove_call,
	NULL
};

StructRNA RNA_RenderLayers = {
	{(ContainerRNA *)&RNA_BakeSettings, (ContainerRNA *)&RNA_RenderSettings,
	NULL,
	{(PropertyRNA *)&rna_RenderLayers_rna_properties, (PropertyRNA *)&rna_RenderLayers_active}},
	"RenderLayers", NULL, NULL, 4, "Render Layers",
	"Collection of render layers",
	"*", 17,
	NULL, (PropertyRNA *)&rna_RenderLayers_rna_properties,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	{(FunctionRNA *)&rna_RenderLayers_new_func, (FunctionRNA *)&rna_RenderLayers_remove_func}
};

/* Bake Data */
CollectionPropertyRNA rna_BakeSettings_rna_properties = {
	{(PropertyRNA *)&rna_BakeSettings_rna_type, NULL,
	-1, "rna_properties", 128, "Properties",
	"RNA property collection",
	0, "*",
	PROP_COLLECTION, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	BakeSettings_rna_properties_begin, BakeSettings_rna_properties_next, BakeSettings_rna_properties_end, BakeSettings_rna_properties_get, NULL, NULL, BakeSettings_rna_properties_lookup_string, NULL, &RNA_Property
};

PointerPropertyRNA rna_BakeSettings_rna_type = {
	{(PropertyRNA *)&rna_BakeSettings_cage_object, (PropertyRNA *)&rna_BakeSettings_rna_properties,
	-1, "rna_type", 8912896, "RNA",
	"RNA type definition",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	BakeSettings_rna_type_get, NULL, NULL, NULL,&RNA_Struct
};

StringPropertyRNA rna_BakeSettings_cage_object = {
	{(PropertyRNA *)&rna_BakeSettings_filepath, (PropertyRNA *)&rna_BakeSettings_rna_type,
	-1, "cage_object", 262145, "Cage Object",
	"Object to use as cage instead of calculating the cage from the active object with cage extrusion",
	0, "*",
	PROP_STRING, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {64, 0, 0}, 0,
	NULL, 67371008, NULL, NULL,
	0, -1, NULL},
	BakeSettings_cage_object_get, BakeSettings_cage_object_length, BakeSettings_cage_object_set, NULL, NULL, NULL, 64, ""
};

StringPropertyRNA rna_BakeSettings_filepath = {
	{(PropertyRNA *)&rna_BakeSettings_width, (PropertyRNA *)&rna_BakeSettings_cage_object,
	-1, "filepath", 262145, "File Path",
	"Image filepath to use when saving externally",
	0, "*",
	PROP_STRING, PROP_FILEPATH | PROP_UNIT_NONE, NULL, 0, {1024, 0, 0}, 0,
	NULL, 67371008, NULL, NULL,
	0, -1, NULL},
	BakeSettings_filepath_get, BakeSettings_filepath_length, BakeSettings_filepath_set, NULL, NULL, NULL, 1024, ""
};

IntPropertyRNA rna_BakeSettings_width = {
	{(PropertyRNA *)&rna_BakeSettings_height, (PropertyRNA *)&rna_BakeSettings_filepath,
	-1, "width", 8193, "Width",
	"Horizontal dimension of the baking map",
	0, "*",
	PROP_INT, PROP_PIXEL | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 67371008, NULL, NULL,
	offsetof(BakeData, width), 1, NULL},
	BakeSettings_width_get, BakeSettings_width_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL,
	4, 10000, 4, 10000, 1, 0, NULL
};

IntPropertyRNA rna_BakeSettings_height = {
	{(PropertyRNA *)&rna_BakeSettings_margin, (PropertyRNA *)&rna_BakeSettings_width,
	-1, "height", 8193, "Height",
	"Vertical dimension of the baking map",
	0, "*",
	PROP_INT, PROP_PIXEL | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 67371008, NULL, NULL,
	offsetof(BakeData, height), 1, NULL},
	BakeSettings_height_get, BakeSettings_height_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL,
	4, 10000, 4, 10000, 1, 0, NULL
};

IntPropertyRNA rna_BakeSettings_margin = {
	{(PropertyRNA *)&rna_BakeSettings_cage_extrusion, (PropertyRNA *)&rna_BakeSettings_height,
	-1, "margin", 8193, "Margin",
	"Extends the baked result as a post process filter",
	0, "*",
	PROP_INT, PROP_PIXEL | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 67371008, NULL, NULL,
	offsetof(BakeData, margin), 1, NULL},
	BakeSettings_margin_get, BakeSettings_margin_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL,
	0, 64, 0, 32767, 1, 0, NULL
};

FloatPropertyRNA rna_BakeSettings_cage_extrusion = {
	{(PropertyRNA *)&rna_BakeSettings_normal_space, (PropertyRNA *)&rna_BakeSettings_margin,
	-1, "cage_extrusion", 8193, "Cage Extrusion",
	"Distance to use for the inward ray cast when using selected to active",
	0, "*",
	PROP_FLOAT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 67371008, NULL, NULL,
	offsetof(BakeData, cage_extrusion), 4, NULL},
	BakeSettings_cage_extrusion_get, BakeSettings_cage_extrusion_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 1.0f, 0.0f, FLT_MAX, 1.0f, 3, 0.0f, NULL
};

static EnumPropertyItem rna_BakeSettings_normal_space_items[3] = {
	{2, "OBJECT", 0, "Object", "Bake the normals in object space"},
	{3, "TANGENT", 0, "Tangent", "Bake the normals in tangent space"},
	{0, NULL, 0, NULL, NULL}
};

EnumPropertyRNA rna_BakeSettings_normal_space = {
	{(PropertyRNA *)&rna_BakeSettings_normal_r, (PropertyRNA *)&rna_BakeSettings_cage_extrusion,
	-1, "normal_space", 1, "Normal Space",
	"Choose normal space for baking",
	0, "*",
	PROP_ENUM, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 67371008, NULL, NULL,
	0, -1, NULL},
	BakeSettings_normal_space_get, BakeSettings_normal_space_set, NULL, NULL, NULL, NULL, rna_BakeSettings_normal_space_items, 2, 2
};

static EnumPropertyItem rna_BakeSettings_normal_r_items[7] = {
	{0, "POS_X", 0, "+X", ""},
	{1, "POS_Y", 0, "+Y", ""},
	{2, "POS_Z", 0, "+Z", ""},
	{3, "NEG_X", 0, "-X", ""},
	{4, "NEG_Y", 0, "-Y", ""},
	{5, "NEG_Z", 0, "-Z", ""},
	{0, NULL, 0, NULL, NULL}
};

EnumPropertyRNA rna_BakeSettings_normal_r = {
	{(PropertyRNA *)&rna_BakeSettings_normal_g, (PropertyRNA *)&rna_BakeSettings_normal_space,
	-1, "normal_r", 1, "Normal Space",
	"Axis to bake in red channel",
	0, "*",
	PROP_ENUM, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 67371008, NULL, NULL,
	0, -1, NULL},
	BakeSettings_normal_r_get, BakeSettings_normal_r_set, NULL, NULL, NULL, NULL, rna_BakeSettings_normal_r_items, 6, 0
};

static EnumPropertyItem rna_BakeSettings_normal_g_items[7] = {
	{0, "POS_X", 0, "+X", ""},
	{1, "POS_Y", 0, "+Y", ""},
	{2, "POS_Z", 0, "+Z", ""},
	{3, "NEG_X", 0, "-X", ""},
	{4, "NEG_Y", 0, "-Y", ""},
	{5, "NEG_Z", 0, "-Z", ""},
	{0, NULL, 0, NULL, NULL}
};

EnumPropertyRNA rna_BakeSettings_normal_g = {
	{(PropertyRNA *)&rna_BakeSettings_normal_b, (PropertyRNA *)&rna_BakeSettings_normal_r,
	-1, "normal_g", 1, "Normal Space",
	"Axis to bake in green channel",
	0, "*",
	PROP_ENUM, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 67371008, NULL, NULL,
	0, -1, NULL},
	BakeSettings_normal_g_get, BakeSettings_normal_g_set, NULL, NULL, NULL, NULL, rna_BakeSettings_normal_g_items, 6, 0
};

static EnumPropertyItem rna_BakeSettings_normal_b_items[7] = {
	{0, "POS_X", 0, "+X", ""},
	{1, "POS_Y", 0, "+Y", ""},
	{2, "POS_Z", 0, "+Z", ""},
	{3, "NEG_X", 0, "-X", ""},
	{4, "NEG_Y", 0, "-Y", ""},
	{5, "NEG_Z", 0, "-Z", ""},
	{0, NULL, 0, NULL, NULL}
};

EnumPropertyRNA rna_BakeSettings_normal_b = {
	{(PropertyRNA *)&rna_BakeSettings_image_settings, (PropertyRNA *)&rna_BakeSettings_normal_g,
	-1, "normal_b", 1, "Normal Space",
	"Axis to bake in blue channel",
	0, "*",
	PROP_ENUM, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 67371008, NULL, NULL,
	0, -1, NULL},
	BakeSettings_normal_b_get, BakeSettings_normal_b_set, NULL, NULL, NULL, NULL, rna_BakeSettings_normal_b_items, 6, 0
};

PointerPropertyRNA rna_BakeSettings_image_settings = {
	{(PropertyRNA *)&rna_BakeSettings_save_mode, (PropertyRNA *)&rna_BakeSettings_normal_b,
	-1, "image_settings", 8650752, "Image Format",
	"",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	BakeSettings_image_settings_get, NULL, NULL, NULL,&RNA_ImageFormatSettings
};

static EnumPropertyItem rna_BakeSettings_save_mode_items[3] = {
	{0, "INTERNAL", 0, "Internal", "Save the baking map in an internal image datablock"},
	{1, "EXTERNAL", 0, "External", "Save the baking map in an external file"},
	{0, NULL, 0, NULL, NULL}
};

EnumPropertyRNA rna_BakeSettings_save_mode = {
	{(PropertyRNA *)&rna_BakeSettings_use_selected_to_active, (PropertyRNA *)&rna_BakeSettings_image_settings,
	-1, "save_mode", 1, "Save Mode",
	"Choose how to save the baking map",
	0, "*",
	PROP_ENUM, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 67371008, NULL, NULL,
	0, -1, NULL},
	BakeSettings_save_mode_get, BakeSettings_save_mode_set, NULL, NULL, NULL, NULL, rna_BakeSettings_save_mode_items, 2, 0
};

BoolPropertyRNA rna_BakeSettings_use_selected_to_active = {
	{(PropertyRNA *)&rna_BakeSettings_use_clear, (PropertyRNA *)&rna_BakeSettings_save_mode,
	-1, "use_selected_to_active", 1, "Selected to Active",
	"Bake shading on the surface of selected objects to the active object",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 67371008, NULL, NULL,
	0, -1, NULL},
	BakeSettings_use_selected_to_active_get, BakeSettings_use_selected_to_active_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_BakeSettings_use_clear = {
	{(PropertyRNA *)&rna_BakeSettings_use_split_materials, (PropertyRNA *)&rna_BakeSettings_use_selected_to_active,
	-1, "use_clear", 1, "Clear",
	"Clear Images before baking (internal only)",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 67371008, NULL, NULL,
	0, -1, NULL},
	BakeSettings_use_clear_get, BakeSettings_use_clear_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_BakeSettings_use_split_materials = {
	{(PropertyRNA *)&rna_BakeSettings_use_automatic_name, (PropertyRNA *)&rna_BakeSettings_use_clear,
	-1, "use_split_materials", 1, "Split Materials",
	"Split external images per material (external only)",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 67371008, NULL, NULL,
	0, -1, NULL},
	BakeSettings_use_split_materials_get, BakeSettings_use_split_materials_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_BakeSettings_use_automatic_name = {
	{(PropertyRNA *)&rna_BakeSettings_use_cage, (PropertyRNA *)&rna_BakeSettings_use_split_materials,
	-1, "use_automatic_name", 1, "Automatic Name",
	"Automatically name the output file with the pass type (external only)",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 67371008, NULL, NULL,
	0, -1, NULL},
	BakeSettings_use_automatic_name_get, BakeSettings_use_automatic_name_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_BakeSettings_use_cage = {
	{NULL, (PropertyRNA *)&rna_BakeSettings_use_automatic_name,
	-1, "use_cage", 1, "Cage",
	"Cast rays to active object from a cage",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 67371008, NULL, NULL,
	0, -1, NULL},
	BakeSettings_use_cage_get, BakeSettings_use_cage_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

StructRNA RNA_BakeSettings = {
	{(ContainerRNA *)&RNA_SceneRenderLayer, (ContainerRNA *)&RNA_RenderLayers,
	NULL,
	{(PropertyRNA *)&rna_BakeSettings_rna_properties, (PropertyRNA *)&rna_BakeSettings_use_cage}},
	"BakeSettings", NULL, NULL, 4, "Bake Data",
	"Bake data for a Scene datablock",
	"*", 17,
	NULL, (PropertyRNA *)&rna_BakeSettings_rna_properties,
	NULL,
	&RNA_RenderSettings,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	{NULL, NULL}
};

/* Scene Render Layer */
CollectionPropertyRNA rna_SceneRenderLayer_rna_properties = {
	{(PropertyRNA *)&rna_SceneRenderLayer_rna_type, NULL,
	-1, "rna_properties", 128, "Properties",
	"RNA property collection",
	0, "*",
	PROP_COLLECTION, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	SceneRenderLayer_rna_properties_begin, SceneRenderLayer_rna_properties_next, SceneRenderLayer_rna_properties_end, SceneRenderLayer_rna_properties_get, NULL, NULL, SceneRenderLayer_rna_properties_lookup_string, NULL, &RNA_Property
};

PointerPropertyRNA rna_SceneRenderLayer_rna_type = {
	{(PropertyRNA *)&rna_SceneRenderLayer_name, (PropertyRNA *)&rna_SceneRenderLayer_rna_properties,
	-1, "rna_type", 8912896, "RNA",
	"RNA type definition",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	SceneRenderLayer_rna_type_get, NULL, NULL, NULL,&RNA_Struct
};

StringPropertyRNA rna_SceneRenderLayer_name = {
	{(PropertyRNA *)&rna_SceneRenderLayer_material_override, (PropertyRNA *)&rna_SceneRenderLayer_rna_type,
	-1, "name", 262145, "Name",
	"Render layer name",
	0, "*",
	PROP_STRING, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {64, 0, 0}, 0,
	NULL, 67371008, NULL, NULL,
	0, -1, NULL},
	SceneRenderLayer_name_get, SceneRenderLayer_name_length, SceneRenderLayer_name_set, NULL, NULL, NULL, 64, ""
};

PointerPropertyRNA rna_SceneRenderLayer_material_override = {
	{(PropertyRNA *)&rna_SceneRenderLayer_light_override, (PropertyRNA *)&rna_SceneRenderLayer_name,
	-1, "material_override", 8388673, "Material Override",
	"Material to override all other materials in this render layer",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_SceneRenderLayer_pass_update, 67371008, NULL, NULL,
	0, -1, NULL},
	SceneRenderLayer_material_override_get, SceneRenderLayer_material_override_set, NULL, NULL,&RNA_Material
};

PointerPropertyRNA rna_SceneRenderLayer_light_override = {
	{(PropertyRNA *)&rna_SceneRenderLayer_layers, (PropertyRNA *)&rna_SceneRenderLayer_material_override,
	-1, "light_override", 8388609, "Light Override",
	"Group to override all other lights in this render layer",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_SceneRenderLayer_pass_update, 67371008, NULL, NULL,
	0, -1, NULL},
	SceneRenderLayer_light_override_get, SceneRenderLayer_light_override_set, NULL, NULL,&RNA_Group
};

static int rna_SceneRenderLayer_layers_default[20] = {
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

BoolPropertyRNA rna_SceneRenderLayer_layers = {
	{(PropertyRNA *)&rna_SceneRenderLayer_layers_zmask, (PropertyRNA *)&rna_SceneRenderLayer_light_override,
	-1, "layers", 1, "Visible Layers",
	"Scene layers included in this render layer",
	0, "*",
	PROP_BOOLEAN, PROP_LAYER_MEMBER | PROP_UNIT_NONE, NULL, 1, {20, 0, 0}, 20,
	rna_Scene_glsl_update, 67371008, NULL, NULL,
	0, -1, NULL},
	NULL, NULL, SceneRenderLayer_layers_get, SceneRenderLayer_layers_set, NULL, NULL, NULL, NULL, 0, rna_SceneRenderLayer_layers_default
};

static int rna_SceneRenderLayer_layers_zmask_default[20] = {
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

BoolPropertyRNA rna_SceneRenderLayer_layers_zmask = {
	{(PropertyRNA *)&rna_SceneRenderLayer_layers_exclude, (PropertyRNA *)&rna_SceneRenderLayer_layers,
	-1, "layers_zmask", 3, "Zmask Layers",
	"Zmask scene layers for solid faces",
	0, "*",
	PROP_BOOLEAN, PROP_LAYER | PROP_UNIT_NONE, NULL, 1, {20, 0, 0}, 20,
	rna_Scene_glsl_update, 67371008, NULL, NULL,
	0, -1, NULL},
	NULL, NULL, SceneRenderLayer_layers_zmask_get, SceneRenderLayer_layers_zmask_set, NULL, NULL, NULL, NULL, 0, rna_SceneRenderLayer_layers_zmask_default
};

static int rna_SceneRenderLayer_layers_exclude_default[20] = {
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

BoolPropertyRNA rna_SceneRenderLayer_layers_exclude = {
	{(PropertyRNA *)&rna_SceneRenderLayer_samples, (PropertyRNA *)&rna_SceneRenderLayer_layers_zmask,
	-1, "layers_exclude", 3, "Exclude Layers",
	"Exclude scene layers from having any influence",
	0, "*",
	PROP_BOOLEAN, PROP_LAYER | PROP_UNIT_NONE, NULL, 1, {20, 0, 0}, 20,
	rna_Scene_glsl_update, 67371008, NULL, NULL,
	0, -1, NULL},
	NULL, NULL, SceneRenderLayer_layers_exclude_get, SceneRenderLayer_layers_exclude_set, NULL, NULL, NULL, NULL, 0, rna_SceneRenderLayer_layers_exclude_default
};

IntPropertyRNA rna_SceneRenderLayer_samples = {
	{(PropertyRNA *)&rna_SceneRenderLayer_pass_alpha_threshold, (PropertyRNA *)&rna_SceneRenderLayer_layers_exclude,
	-1, "samples", 8195, "Samples",
	"Override number of render samples for this render layer, 0 will use the scene setting",
	0, "*",
	PROP_INT, PROP_UNSIGNED | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 67371008, NULL, NULL,
	offsetof(SceneRenderLayer, samples), 0, NULL},
	SceneRenderLayer_samples_get, SceneRenderLayer_samples_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL,
	0, 10000, 0, INT_MAX, 1, 0, NULL
};

FloatPropertyRNA rna_SceneRenderLayer_pass_alpha_threshold = {
	{(PropertyRNA *)&rna_SceneRenderLayer_use, (PropertyRNA *)&rna_SceneRenderLayer_samples,
	-1, "pass_alpha_threshold", 8195, "Alpha Threshold",
	"Z, Index, normal, UV and vector passes are only affected by surfaces with alpha transparency equal to or higher than this threshold",
	0, "*",
	PROP_FLOAT, PROP_FACTOR | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 67371008, NULL, NULL,
	offsetof(SceneRenderLayer, pass_alpha_threshold), 4, NULL},
	SceneRenderLayer_pass_alpha_threshold_get, SceneRenderLayer_pass_alpha_threshold_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 1.0f, 0.0f, 1.0f, 10.0f, 3, 0.0f, NULL
};

BoolPropertyRNA rna_SceneRenderLayer_use = {
	{(PropertyRNA *)&rna_SceneRenderLayer_use_zmask, (PropertyRNA *)&rna_SceneRenderLayer_pass_alpha_threshold,
	-1, "use", 3, "Enabled",
	"Disable or enable the render layer",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Scene_glsl_update, 67371008, NULL, NULL,
	0, -1, NULL},
	SceneRenderLayer_use_get, SceneRenderLayer_use_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_SceneRenderLayer_use_zmask = {
	{(PropertyRNA *)&rna_SceneRenderLayer_invert_zmask, (PropertyRNA *)&rna_SceneRenderLayer_use,
	-1, "use_zmask", 3, "Zmask",
	"Only render what\'s in front of the solid z values",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Scene_glsl_update, 67371008, NULL, NULL,
	0, -1, NULL},
	SceneRenderLayer_use_zmask_get, SceneRenderLayer_use_zmask_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_SceneRenderLayer_invert_zmask = {
	{(PropertyRNA *)&rna_SceneRenderLayer_use_all_z, (PropertyRNA *)&rna_SceneRenderLayer_use_zmask,
	-1, "invert_zmask", 3, "Zmask Negate",
	"For Zmask, only render what is behind solid z values instead of in front",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Scene_glsl_update, 67371008, NULL, NULL,
	0, -1, NULL},
	SceneRenderLayer_invert_zmask_get, SceneRenderLayer_invert_zmask_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_SceneRenderLayer_use_all_z = {
	{(PropertyRNA *)&rna_SceneRenderLayer_use_solid, (PropertyRNA *)&rna_SceneRenderLayer_invert_zmask,
	-1, "use_all_z", 3, "All Z",
	"Fill in Z values for solid faces in invisible layers, for masking",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 67371008, NULL, NULL,
	0, -1, NULL},
	SceneRenderLayer_use_all_z_get, SceneRenderLayer_use_all_z_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_SceneRenderLayer_use_solid = {
	{(PropertyRNA *)&rna_SceneRenderLayer_use_halo, (PropertyRNA *)&rna_SceneRenderLayer_use_all_z,
	-1, "use_solid", 3, "Solid",
	"Render Solid faces in this Layer",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 67371008, NULL, NULL,
	0, -1, NULL},
	SceneRenderLayer_use_solid_get, SceneRenderLayer_use_solid_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_SceneRenderLayer_use_halo = {
	{(PropertyRNA *)&rna_SceneRenderLayer_use_ztransp, (PropertyRNA *)&rna_SceneRenderLayer_use_solid,
	-1, "use_halo", 3, "Halo",
	"Render Halos in this Layer (on top of Solid)",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 67371008, NULL, NULL,
	0, -1, NULL},
	SceneRenderLayer_use_halo_get, SceneRenderLayer_use_halo_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_SceneRenderLayer_use_ztransp = {
	{(PropertyRNA *)&rna_SceneRenderLayer_use_sky, (PropertyRNA *)&rna_SceneRenderLayer_use_halo,
	-1, "use_ztransp", 3, "ZTransp",
	"Render Z-Transparent faces in this Layer (on top of Solid and Halos)",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 67371008, NULL, NULL,
	0, -1, NULL},
	SceneRenderLayer_use_ztransp_get, SceneRenderLayer_use_ztransp_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_SceneRenderLayer_use_sky = {
	{(PropertyRNA *)&rna_SceneRenderLayer_use_edge_enhance, (PropertyRNA *)&rna_SceneRenderLayer_use_ztransp,
	-1, "use_sky", 3, "Sky",
	"Render Sky in this Layer",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Scene_glsl_update, 67371008, NULL, NULL,
	0, -1, NULL},
	SceneRenderLayer_use_sky_get, SceneRenderLayer_use_sky_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_SceneRenderLayer_use_edge_enhance = {
	{(PropertyRNA *)&rna_SceneRenderLayer_use_strand, (PropertyRNA *)&rna_SceneRenderLayer_use_sky,
	-1, "use_edge_enhance", 3, "Edge",
	"Render Edge-enhance in this Layer (only works for Solid faces)",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 67371008, NULL, NULL,
	0, -1, NULL},
	SceneRenderLayer_use_edge_enhance_get, SceneRenderLayer_use_edge_enhance_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_SceneRenderLayer_use_strand = {
	{(PropertyRNA *)&rna_SceneRenderLayer_use_freestyle, (PropertyRNA *)&rna_SceneRenderLayer_use_edge_enhance,
	-1, "use_strand", 3, "Strand",
	"Render Strands in this Layer",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 67371008, NULL, NULL,
	0, -1, NULL},
	SceneRenderLayer_use_strand_get, SceneRenderLayer_use_strand_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_SceneRenderLayer_use_freestyle = {
	{(PropertyRNA *)&rna_SceneRenderLayer_use_pass_combined, (PropertyRNA *)&rna_SceneRenderLayer_use_strand,
	-1, "use_freestyle", 3, "Freestyle",
	"Render stylized strokes in this Layer",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Scene_freestyle_update, 67371008, NULL, NULL,
	0, -1, NULL},
	SceneRenderLayer_use_freestyle_get, SceneRenderLayer_use_freestyle_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_SceneRenderLayer_use_pass_combined = {
	{(PropertyRNA *)&rna_SceneRenderLayer_use_pass_z, (PropertyRNA *)&rna_SceneRenderLayer_use_freestyle,
	-1, "use_pass_combined", 3, "Combined",
	"Deliver full combined RGBA buffer",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_SceneRenderLayer_pass_update, 67371008, NULL, NULL,
	0, -1, NULL},
	SceneRenderLayer_use_pass_combined_get, SceneRenderLayer_use_pass_combined_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_SceneRenderLayer_use_pass_z = {
	{(PropertyRNA *)&rna_SceneRenderLayer_use_pass_vector, (PropertyRNA *)&rna_SceneRenderLayer_use_pass_combined,
	-1, "use_pass_z", 3, "Z",
	"Deliver Z values pass",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_SceneRenderLayer_pass_update, 67371008, NULL, NULL,
	0, -1, NULL},
	SceneRenderLayer_use_pass_z_get, SceneRenderLayer_use_pass_z_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_SceneRenderLayer_use_pass_vector = {
	{(PropertyRNA *)&rna_SceneRenderLayer_use_pass_normal, (PropertyRNA *)&rna_SceneRenderLayer_use_pass_z,
	-1, "use_pass_vector", 3, "Vector",
	"Deliver speed vector pass",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_SceneRenderLayer_pass_update, 67371008, NULL, NULL,
	0, -1, NULL},
	SceneRenderLayer_use_pass_vector_get, SceneRenderLayer_use_pass_vector_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_SceneRenderLayer_use_pass_normal = {
	{(PropertyRNA *)&rna_SceneRenderLayer_use_pass_uv, (PropertyRNA *)&rna_SceneRenderLayer_use_pass_vector,
	-1, "use_pass_normal", 3, "Normal",
	"Deliver normal pass",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_SceneRenderLayer_pass_update, 67371008, NULL, NULL,
	0, -1, NULL},
	SceneRenderLayer_use_pass_normal_get, SceneRenderLayer_use_pass_normal_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_SceneRenderLayer_use_pass_uv = {
	{(PropertyRNA *)&rna_SceneRenderLayer_use_pass_mist, (PropertyRNA *)&rna_SceneRenderLayer_use_pass_normal,
	-1, "use_pass_uv", 3, "UV",
	"Deliver texture UV pass",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_SceneRenderLayer_pass_update, 67371008, NULL, NULL,
	0, -1, NULL},
	SceneRenderLayer_use_pass_uv_get, SceneRenderLayer_use_pass_uv_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_SceneRenderLayer_use_pass_mist = {
	{(PropertyRNA *)&rna_SceneRenderLayer_use_pass_object_index, (PropertyRNA *)&rna_SceneRenderLayer_use_pass_uv,
	-1, "use_pass_mist", 3, "Mist",
	"Deliver mist factor pass (0.0-1.0)",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_SceneRenderLayer_pass_update, 67371008, NULL, NULL,
	0, -1, NULL},
	SceneRenderLayer_use_pass_mist_get, SceneRenderLayer_use_pass_mist_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_SceneRenderLayer_use_pass_object_index = {
	{(PropertyRNA *)&rna_SceneRenderLayer_use_pass_material_index, (PropertyRNA *)&rna_SceneRenderLayer_use_pass_mist,
	-1, "use_pass_object_index", 3, "Object Index",
	"Deliver object index pass",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_SceneRenderLayer_pass_update, 67371008, NULL, NULL,
	0, -1, NULL},
	SceneRenderLayer_use_pass_object_index_get, SceneRenderLayer_use_pass_object_index_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_SceneRenderLayer_use_pass_material_index = {
	{(PropertyRNA *)&rna_SceneRenderLayer_use_pass_color, (PropertyRNA *)&rna_SceneRenderLayer_use_pass_object_index,
	-1, "use_pass_material_index", 3, "Material Index",
	"Deliver material index pass",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_SceneRenderLayer_pass_update, 67371008, NULL, NULL,
	0, -1, NULL},
	SceneRenderLayer_use_pass_material_index_get, SceneRenderLayer_use_pass_material_index_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_SceneRenderLayer_use_pass_color = {
	{(PropertyRNA *)&rna_SceneRenderLayer_use_pass_diffuse, (PropertyRNA *)&rna_SceneRenderLayer_use_pass_material_index,
	-1, "use_pass_color", 3, "Color",
	"Deliver shade-less color pass",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_SceneRenderLayer_pass_update, 67371008, NULL, NULL,
	0, -1, NULL},
	SceneRenderLayer_use_pass_color_get, SceneRenderLayer_use_pass_color_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_SceneRenderLayer_use_pass_diffuse = {
	{(PropertyRNA *)&rna_SceneRenderLayer_use_pass_specular, (PropertyRNA *)&rna_SceneRenderLayer_use_pass_color,
	-1, "use_pass_diffuse", 3, "Diffuse",
	"Deliver diffuse pass",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_SceneRenderLayer_pass_update, 67371008, NULL, NULL,
	0, -1, NULL},
	SceneRenderLayer_use_pass_diffuse_get, SceneRenderLayer_use_pass_diffuse_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_SceneRenderLayer_use_pass_specular = {
	{(PropertyRNA *)&rna_SceneRenderLayer_use_pass_shadow, (PropertyRNA *)&rna_SceneRenderLayer_use_pass_diffuse,
	-1, "use_pass_specular", 3, "Specular",
	"Deliver specular pass",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_SceneRenderLayer_pass_update, 67371008, NULL, NULL,
	0, -1, NULL},
	SceneRenderLayer_use_pass_specular_get, SceneRenderLayer_use_pass_specular_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_SceneRenderLayer_use_pass_shadow = {
	{(PropertyRNA *)&rna_SceneRenderLayer_use_pass_ambient_occlusion, (PropertyRNA *)&rna_SceneRenderLayer_use_pass_specular,
	-1, "use_pass_shadow", 3, "Shadow",
	"Deliver shadow pass",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_SceneRenderLayer_pass_update, 67371008, NULL, NULL,
	0, -1, NULL},
	SceneRenderLayer_use_pass_shadow_get, SceneRenderLayer_use_pass_shadow_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_SceneRenderLayer_use_pass_ambient_occlusion = {
	{(PropertyRNA *)&rna_SceneRenderLayer_use_pass_reflection, (PropertyRNA *)&rna_SceneRenderLayer_use_pass_shadow,
	-1, "use_pass_ambient_occlusion", 3, "AO",
	"Deliver AO pass",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_SceneRenderLayer_pass_update, 67371008, NULL, NULL,
	0, -1, NULL},
	SceneRenderLayer_use_pass_ambient_occlusion_get, SceneRenderLayer_use_pass_ambient_occlusion_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_SceneRenderLayer_use_pass_reflection = {
	{(PropertyRNA *)&rna_SceneRenderLayer_use_pass_refraction, (PropertyRNA *)&rna_SceneRenderLayer_use_pass_ambient_occlusion,
	-1, "use_pass_reflection", 3, "Reflection",
	"Deliver raytraced reflection pass",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_SceneRenderLayer_pass_update, 67371008, NULL, NULL,
	0, -1, NULL},
	SceneRenderLayer_use_pass_reflection_get, SceneRenderLayer_use_pass_reflection_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_SceneRenderLayer_use_pass_refraction = {
	{(PropertyRNA *)&rna_SceneRenderLayer_use_pass_emit, (PropertyRNA *)&rna_SceneRenderLayer_use_pass_reflection,
	-1, "use_pass_refraction", 3, "Refraction",
	"Deliver raytraced refraction pass",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_SceneRenderLayer_pass_update, 67371008, NULL, NULL,
	0, -1, NULL},
	SceneRenderLayer_use_pass_refraction_get, SceneRenderLayer_use_pass_refraction_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_SceneRenderLayer_use_pass_emit = {
	{(PropertyRNA *)&rna_SceneRenderLayer_use_pass_environment, (PropertyRNA *)&rna_SceneRenderLayer_use_pass_refraction,
	-1, "use_pass_emit", 3, "Emit",
	"Deliver emission pass",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_SceneRenderLayer_pass_update, 67371008, NULL, NULL,
	0, -1, NULL},
	SceneRenderLayer_use_pass_emit_get, SceneRenderLayer_use_pass_emit_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_SceneRenderLayer_use_pass_environment = {
	{(PropertyRNA *)&rna_SceneRenderLayer_use_pass_indirect, (PropertyRNA *)&rna_SceneRenderLayer_use_pass_emit,
	-1, "use_pass_environment", 3, "Environment",
	"Deliver environment lighting pass",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_SceneRenderLayer_pass_update, 67371008, NULL, NULL,
	0, -1, NULL},
	SceneRenderLayer_use_pass_environment_get, SceneRenderLayer_use_pass_environment_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_SceneRenderLayer_use_pass_indirect = {
	{(PropertyRNA *)&rna_SceneRenderLayer_exclude_specular, (PropertyRNA *)&rna_SceneRenderLayer_use_pass_environment,
	-1, "use_pass_indirect", 3, "Indirect",
	"Deliver indirect lighting pass",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_SceneRenderLayer_pass_update, 67371008, NULL, NULL,
	0, -1, NULL},
	SceneRenderLayer_use_pass_indirect_get, SceneRenderLayer_use_pass_indirect_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_SceneRenderLayer_exclude_specular = {
	{(PropertyRNA *)&rna_SceneRenderLayer_exclude_shadow, (PropertyRNA *)&rna_SceneRenderLayer_use_pass_indirect,
	-1, "exclude_specular", 4099, "Specular Exclude",
	"Exclude specular pass from combined",
	257, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_SceneRenderLayer_pass_update, 67371008, NULL, NULL,
	0, -1, NULL},
	SceneRenderLayer_exclude_specular_get, SceneRenderLayer_exclude_specular_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_SceneRenderLayer_exclude_shadow = {
	{(PropertyRNA *)&rna_SceneRenderLayer_exclude_ambient_occlusion, (PropertyRNA *)&rna_SceneRenderLayer_exclude_specular,
	-1, "exclude_shadow", 4099, "Shadow Exclude",
	"Exclude shadow pass from combined",
	257, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_SceneRenderLayer_pass_update, 67371008, NULL, NULL,
	0, -1, NULL},
	SceneRenderLayer_exclude_shadow_get, SceneRenderLayer_exclude_shadow_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_SceneRenderLayer_exclude_ambient_occlusion = {
	{(PropertyRNA *)&rna_SceneRenderLayer_exclude_reflection, (PropertyRNA *)&rna_SceneRenderLayer_exclude_shadow,
	-1, "exclude_ambient_occlusion", 4099, "AO Exclude",
	"Exclude AO pass from combined",
	257, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_SceneRenderLayer_pass_update, 67371008, NULL, NULL,
	0, -1, NULL},
	SceneRenderLayer_exclude_ambient_occlusion_get, SceneRenderLayer_exclude_ambient_occlusion_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_SceneRenderLayer_exclude_reflection = {
	{(PropertyRNA *)&rna_SceneRenderLayer_exclude_refraction, (PropertyRNA *)&rna_SceneRenderLayer_exclude_ambient_occlusion,
	-1, "exclude_reflection", 4099, "Reflection Exclude",
	"Exclude raytraced reflection pass from combined",
	257, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_SceneRenderLayer_pass_update, 67371008, NULL, NULL,
	0, -1, NULL},
	SceneRenderLayer_exclude_reflection_get, SceneRenderLayer_exclude_reflection_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_SceneRenderLayer_exclude_refraction = {
	{(PropertyRNA *)&rna_SceneRenderLayer_exclude_emit, (PropertyRNA *)&rna_SceneRenderLayer_exclude_reflection,
	-1, "exclude_refraction", 4099, "Refraction Exclude",
	"Exclude raytraced refraction pass from combined",
	257, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_SceneRenderLayer_pass_update, 67371008, NULL, NULL,
	0, -1, NULL},
	SceneRenderLayer_exclude_refraction_get, SceneRenderLayer_exclude_refraction_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_SceneRenderLayer_exclude_emit = {
	{(PropertyRNA *)&rna_SceneRenderLayer_exclude_environment, (PropertyRNA *)&rna_SceneRenderLayer_exclude_refraction,
	-1, "exclude_emit", 4099, "Emit Exclude",
	"Exclude emission pass from combined",
	257, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_SceneRenderLayer_pass_update, 67371008, NULL, NULL,
	0, -1, NULL},
	SceneRenderLayer_exclude_emit_get, SceneRenderLayer_exclude_emit_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_SceneRenderLayer_exclude_environment = {
	{(PropertyRNA *)&rna_SceneRenderLayer_exclude_indirect, (PropertyRNA *)&rna_SceneRenderLayer_exclude_emit,
	-1, "exclude_environment", 4099, "Environment Exclude",
	"Exclude environment pass from combined",
	257, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_SceneRenderLayer_pass_update, 67371008, NULL, NULL,
	0, -1, NULL},
	SceneRenderLayer_exclude_environment_get, SceneRenderLayer_exclude_environment_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_SceneRenderLayer_exclude_indirect = {
	{(PropertyRNA *)&rna_SceneRenderLayer_use_pass_diffuse_direct, (PropertyRNA *)&rna_SceneRenderLayer_exclude_environment,
	-1, "exclude_indirect", 4099, "Indirect Exclude",
	"Exclude indirect pass from combined",
	257, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_SceneRenderLayer_pass_update, 67371008, NULL, NULL,
	0, -1, NULL},
	SceneRenderLayer_exclude_indirect_get, SceneRenderLayer_exclude_indirect_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_SceneRenderLayer_use_pass_diffuse_direct = {
	{(PropertyRNA *)&rna_SceneRenderLayer_use_pass_diffuse_indirect, (PropertyRNA *)&rna_SceneRenderLayer_exclude_indirect,
	-1, "use_pass_diffuse_direct", 3, "Diffuse Direct",
	"Deliver diffuse direct pass",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_SceneRenderLayer_pass_update, 67371008, NULL, NULL,
	0, -1, NULL},
	SceneRenderLayer_use_pass_diffuse_direct_get, SceneRenderLayer_use_pass_diffuse_direct_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_SceneRenderLayer_use_pass_diffuse_indirect = {
	{(PropertyRNA *)&rna_SceneRenderLayer_use_pass_diffuse_color, (PropertyRNA *)&rna_SceneRenderLayer_use_pass_diffuse_direct,
	-1, "use_pass_diffuse_indirect", 3, "Diffuse Indirect",
	"Deliver diffuse indirect pass",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_SceneRenderLayer_pass_update, 67371008, NULL, NULL,
	0, -1, NULL},
	SceneRenderLayer_use_pass_diffuse_indirect_get, SceneRenderLayer_use_pass_diffuse_indirect_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_SceneRenderLayer_use_pass_diffuse_color = {
	{(PropertyRNA *)&rna_SceneRenderLayer_use_pass_glossy_direct, (PropertyRNA *)&rna_SceneRenderLayer_use_pass_diffuse_indirect,
	-1, "use_pass_diffuse_color", 3, "Diffuse Color",
	"Deliver diffuse color pass",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_SceneRenderLayer_pass_update, 67371008, NULL, NULL,
	0, -1, NULL},
	SceneRenderLayer_use_pass_diffuse_color_get, SceneRenderLayer_use_pass_diffuse_color_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_SceneRenderLayer_use_pass_glossy_direct = {
	{(PropertyRNA *)&rna_SceneRenderLayer_use_pass_glossy_indirect, (PropertyRNA *)&rna_SceneRenderLayer_use_pass_diffuse_color,
	-1, "use_pass_glossy_direct", 3, "Glossy Direct",
	"Deliver glossy direct pass",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_SceneRenderLayer_pass_update, 67371008, NULL, NULL,
	0, -1, NULL},
	SceneRenderLayer_use_pass_glossy_direct_get, SceneRenderLayer_use_pass_glossy_direct_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_SceneRenderLayer_use_pass_glossy_indirect = {
	{(PropertyRNA *)&rna_SceneRenderLayer_use_pass_glossy_color, (PropertyRNA *)&rna_SceneRenderLayer_use_pass_glossy_direct,
	-1, "use_pass_glossy_indirect", 3, "Glossy Indirect",
	"Deliver glossy indirect pass",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_SceneRenderLayer_pass_update, 67371008, NULL, NULL,
	0, -1, NULL},
	SceneRenderLayer_use_pass_glossy_indirect_get, SceneRenderLayer_use_pass_glossy_indirect_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_SceneRenderLayer_use_pass_glossy_color = {
	{(PropertyRNA *)&rna_SceneRenderLayer_use_pass_transmission_direct, (PropertyRNA *)&rna_SceneRenderLayer_use_pass_glossy_indirect,
	-1, "use_pass_glossy_color", 3, "Glossy Color",
	"Deliver glossy color pass",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_SceneRenderLayer_pass_update, 67371008, NULL, NULL,
	0, -1, NULL},
	SceneRenderLayer_use_pass_glossy_color_get, SceneRenderLayer_use_pass_glossy_color_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_SceneRenderLayer_use_pass_transmission_direct = {
	{(PropertyRNA *)&rna_SceneRenderLayer_use_pass_transmission_indirect, (PropertyRNA *)&rna_SceneRenderLayer_use_pass_glossy_color,
	-1, "use_pass_transmission_direct", 3, "Transmission Direct",
	"Deliver transmission direct pass",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_SceneRenderLayer_pass_update, 67371008, NULL, NULL,
	0, -1, NULL},
	SceneRenderLayer_use_pass_transmission_direct_get, SceneRenderLayer_use_pass_transmission_direct_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_SceneRenderLayer_use_pass_transmission_indirect = {
	{(PropertyRNA *)&rna_SceneRenderLayer_use_pass_transmission_color, (PropertyRNA *)&rna_SceneRenderLayer_use_pass_transmission_direct,
	-1, "use_pass_transmission_indirect", 3, "Transmission Indirect",
	"Deliver transmission indirect pass",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_SceneRenderLayer_pass_update, 67371008, NULL, NULL,
	0, -1, NULL},
	SceneRenderLayer_use_pass_transmission_indirect_get, SceneRenderLayer_use_pass_transmission_indirect_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_SceneRenderLayer_use_pass_transmission_color = {
	{(PropertyRNA *)&rna_SceneRenderLayer_use_pass_subsurface_direct, (PropertyRNA *)&rna_SceneRenderLayer_use_pass_transmission_indirect,
	-1, "use_pass_transmission_color", 3, "Transmission Color",
	"Deliver transmission color pass",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_SceneRenderLayer_pass_update, 67371008, NULL, NULL,
	0, -1, NULL},
	SceneRenderLayer_use_pass_transmission_color_get, SceneRenderLayer_use_pass_transmission_color_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_SceneRenderLayer_use_pass_subsurface_direct = {
	{(PropertyRNA *)&rna_SceneRenderLayer_use_pass_subsurface_indirect, (PropertyRNA *)&rna_SceneRenderLayer_use_pass_transmission_color,
	-1, "use_pass_subsurface_direct", 3, "Subsurface Direct",
	"Deliver subsurface direct pass",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_SceneRenderLayer_pass_update, 67371008, NULL, NULL,
	0, -1, NULL},
	SceneRenderLayer_use_pass_subsurface_direct_get, SceneRenderLayer_use_pass_subsurface_direct_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_SceneRenderLayer_use_pass_subsurface_indirect = {
	{(PropertyRNA *)&rna_SceneRenderLayer_use_pass_subsurface_color, (PropertyRNA *)&rna_SceneRenderLayer_use_pass_subsurface_direct,
	-1, "use_pass_subsurface_indirect", 3, "Subsurface Indirect",
	"Deliver subsurface indirect pass",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_SceneRenderLayer_pass_update, 67371008, NULL, NULL,
	0, -1, NULL},
	SceneRenderLayer_use_pass_subsurface_indirect_get, SceneRenderLayer_use_pass_subsurface_indirect_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_SceneRenderLayer_use_pass_subsurface_color = {
	{(PropertyRNA *)&rna_SceneRenderLayer_freestyle_settings, (PropertyRNA *)&rna_SceneRenderLayer_use_pass_subsurface_indirect,
	-1, "use_pass_subsurface_color", 3, "Subsurface Color",
	"Deliver subsurface color pass",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_SceneRenderLayer_pass_update, 67371008, NULL, NULL,
	0, -1, NULL},
	SceneRenderLayer_use_pass_subsurface_color_get, SceneRenderLayer_use_pass_subsurface_color_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

PointerPropertyRNA rna_SceneRenderLayer_freestyle_settings = {
	{NULL, (PropertyRNA *)&rna_SceneRenderLayer_use_pass_subsurface_color,
	-1, "freestyle_settings", 8650752, "Freestyle Settings",
	"",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	SceneRenderLayer_freestyle_settings_get, NULL, NULL, NULL,&RNA_FreestyleSettings
};

StructRNA RNA_SceneRenderLayer = {
	{(ContainerRNA *)&RNA_FreestyleLineSet, (ContainerRNA *)&RNA_BakeSettings,
	NULL,
	{(PropertyRNA *)&rna_SceneRenderLayer_rna_properties, (PropertyRNA *)&rna_SceneRenderLayer_freestyle_settings}},
	"SceneRenderLayer", NULL, NULL, 4, "Scene Render Layer",
	"Render layer",
	"*", 157,
	(PropertyRNA *)&rna_SceneRenderLayer_name, (PropertyRNA *)&rna_SceneRenderLayer_rna_properties,
	NULL,
	NULL,
	NULL,
	rna_SceneRenderLayer_path,
	NULL,
	NULL,
	NULL,
	NULL,
	{NULL, NULL}
};

/* Freestyle Line Set */
CollectionPropertyRNA rna_FreestyleLineSet_rna_properties = {
	{(PropertyRNA *)&rna_FreestyleLineSet_rna_type, NULL,
	-1, "rna_properties", 128, "Properties",
	"RNA property collection",
	0, "*",
	PROP_COLLECTION, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	FreestyleLineSet_rna_properties_begin, FreestyleLineSet_rna_properties_next, FreestyleLineSet_rna_properties_end, FreestyleLineSet_rna_properties_get, NULL, NULL, FreestyleLineSet_rna_properties_lookup_string, NULL, &RNA_Property
};

PointerPropertyRNA rna_FreestyleLineSet_rna_type = {
	{(PropertyRNA *)&rna_FreestyleLineSet_linestyle, (PropertyRNA *)&rna_FreestyleLineSet_rna_properties,
	-1, "rna_type", 8912896, "RNA",
	"RNA type definition",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	FreestyleLineSet_rna_type_get, NULL, NULL, NULL,&RNA_Struct
};

PointerPropertyRNA rna_FreestyleLineSet_linestyle = {
	{(PropertyRNA *)&rna_FreestyleLineSet_name, (PropertyRNA *)&rna_FreestyleLineSet_rna_type,
	-1, "linestyle", 8650817, "Line Style",
	"Line style settings",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Scene_freestyle_update, 67371008, NULL, NULL,
	0, -1, NULL},
	FreestyleLineSet_linestyle_get, FreestyleLineSet_linestyle_set, NULL, NULL,&RNA_FreestyleLineStyle
};

StringPropertyRNA rna_FreestyleLineSet_name = {
	{(PropertyRNA *)&rna_FreestyleLineSet_show_render, (PropertyRNA *)&rna_FreestyleLineSet_linestyle,
	-1, "name", 262145, "Line Set Name",
	"Line set name",
	0, "*",
	PROP_STRING, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {64, 0, 0}, 0,
	NULL, 67371008, NULL, NULL,
	0, -1, NULL},
	FreestyleLineSet_name_get, FreestyleLineSet_name_length, FreestyleLineSet_name_set, NULL, NULL, NULL, 64, ""
};

BoolPropertyRNA rna_FreestyleLineSet_show_render = {
	{(PropertyRNA *)&rna_FreestyleLineSet_select_by_visibility, (PropertyRNA *)&rna_FreestyleLineSet_name,
	-1, "show_render", 3, "Render",
	"Enable or disable this line set during stroke rendering",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Scene_freestyle_update, 67371008, NULL, NULL,
	0, -1, NULL},
	FreestyleLineSet_show_render_get, FreestyleLineSet_show_render_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_FreestyleLineSet_select_by_visibility = {
	{(PropertyRNA *)&rna_FreestyleLineSet_select_by_edge_types, (PropertyRNA *)&rna_FreestyleLineSet_show_render,
	-1, "select_by_visibility", 3, "Selection by Visibility",
	"Select feature edges based on visibility",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Scene_freestyle_update, 67371008, NULL, NULL,
	0, -1, NULL},
	FreestyleLineSet_select_by_visibility_get, FreestyleLineSet_select_by_visibility_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_FreestyleLineSet_select_by_edge_types = {
	{(PropertyRNA *)&rna_FreestyleLineSet_select_by_group, (PropertyRNA *)&rna_FreestyleLineSet_select_by_visibility,
	-1, "select_by_edge_types", 3, "Selection by Edge Types",
	"Select feature edges based on edge types",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Scene_freestyle_update, 67371008, NULL, NULL,
	0, -1, NULL},
	FreestyleLineSet_select_by_edge_types_get, FreestyleLineSet_select_by_edge_types_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_FreestyleLineSet_select_by_group = {
	{(PropertyRNA *)&rna_FreestyleLineSet_select_by_image_border, (PropertyRNA *)&rna_FreestyleLineSet_select_by_edge_types,
	-1, "select_by_group", 3, "Selection by Group",
	"Select feature edges based on a group of objects",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Scene_freestyle_update, 67371008, NULL, NULL,
	0, -1, NULL},
	FreestyleLineSet_select_by_group_get, FreestyleLineSet_select_by_group_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_FreestyleLineSet_select_by_image_border = {
	{(PropertyRNA *)&rna_FreestyleLineSet_select_by_face_marks, (PropertyRNA *)&rna_FreestyleLineSet_select_by_group,
	-1, "select_by_image_border", 3, "Selection by Image Border",
	"Select feature edges by image border (less memory consumption)",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Scene_freestyle_update, 67371008, NULL, NULL,
	0, -1, NULL},
	FreestyleLineSet_select_by_image_border_get, FreestyleLineSet_select_by_image_border_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_FreestyleLineSet_select_by_face_marks = {
	{(PropertyRNA *)&rna_FreestyleLineSet_edge_type_negation, (PropertyRNA *)&rna_FreestyleLineSet_select_by_image_border,
	-1, "select_by_face_marks", 3, "Selection by Face Marks",
	"Select feature edges by face marks",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Scene_freestyle_update, 67371008, NULL, NULL,
	0, -1, NULL},
	FreestyleLineSet_select_by_face_marks_get, FreestyleLineSet_select_by_face_marks_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

static EnumPropertyItem rna_FreestyleLineSet_edge_type_negation_items[3] = {
	{0, "INCLUSIVE", 0, "Inclusive", "Select feature edges satisfying the given edge type conditions"},
	{4, "EXCLUSIVE", 0, "Exclusive", "Select feature edges not satisfying the given edge type conditions"},
	{0, NULL, 0, NULL, NULL}
};

EnumPropertyRNA rna_FreestyleLineSet_edge_type_negation = {
	{(PropertyRNA *)&rna_FreestyleLineSet_edge_type_combination, (PropertyRNA *)&rna_FreestyleLineSet_select_by_face_marks,
	-1, "edge_type_negation", 3, "Edge Type Negation",
	"Specify either inclusion or exclusion of feature edges selected by edge types",
	0, "*",
	PROP_ENUM, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Scene_freestyle_update, 67371008, NULL, NULL,
	0, -1, NULL},
	FreestyleLineSet_edge_type_negation_get, FreestyleLineSet_edge_type_negation_set, NULL, NULL, NULL, NULL, rna_FreestyleLineSet_edge_type_negation_items, 2, 0
};

static EnumPropertyItem rna_FreestyleLineSet_edge_type_combination_items[3] = {
	{0, "OR", 0, "Logical OR", "Select feature edges satisfying at least one of edge type conditions"},
	{8, "AND", 0, "Logical AND", "Select feature edges satisfying all edge type conditions"},
	{0, NULL, 0, NULL, NULL}
};

EnumPropertyRNA rna_FreestyleLineSet_edge_type_combination = {
	{(PropertyRNA *)&rna_FreestyleLineSet_group, (PropertyRNA *)&rna_FreestyleLineSet_edge_type_negation,
	-1, "edge_type_combination", 3, "Edge Type Combination",
	"Specify a logical combination of selection conditions on feature edge types",
	0, "*",
	PROP_ENUM, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Scene_freestyle_update, 67371008, NULL, NULL,
	0, -1, NULL},
	FreestyleLineSet_edge_type_combination_get, FreestyleLineSet_edge_type_combination_set, NULL, NULL, NULL, NULL, rna_FreestyleLineSet_edge_type_combination_items, 2, 0
};

PointerPropertyRNA rna_FreestyleLineSet_group = {
	{(PropertyRNA *)&rna_FreestyleLineSet_group_negation, (PropertyRNA *)&rna_FreestyleLineSet_edge_type_combination,
	-1, "group", 8388609, "Group",
	"A group of objects based on which feature edges are selected",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Scene_freestyle_update, 67371008, NULL, NULL,
	0, -1, NULL},
	FreestyleLineSet_group_get, FreestyleLineSet_group_set, NULL, NULL,&RNA_Group
};

static EnumPropertyItem rna_FreestyleLineSet_group_negation_items[3] = {
	{0, "INCLUSIVE", 0, "Inclusive", "Select feature edges belonging to some object in the group"},
	{16, "EXCLUSIVE", 0, "Exclusive", "Select feature edges not belonging to any object in the group"},
	{0, NULL, 0, NULL, NULL}
};

EnumPropertyRNA rna_FreestyleLineSet_group_negation = {
	{(PropertyRNA *)&rna_FreestyleLineSet_face_mark_negation, (PropertyRNA *)&rna_FreestyleLineSet_group,
	-1, "group_negation", 3, "Group Negation",
	"Specify either inclusion or exclusion of feature edges belonging to a group of objects",
	0, "*",
	PROP_ENUM, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Scene_freestyle_update, 67371008, NULL, NULL,
	0, -1, NULL},
	FreestyleLineSet_group_negation_get, FreestyleLineSet_group_negation_set, NULL, NULL, NULL, NULL, rna_FreestyleLineSet_group_negation_items, 2, 0
};

static EnumPropertyItem rna_FreestyleLineSet_face_mark_negation_items[3] = {
	{0, "INCLUSIVE", 0, "Inclusive", "Select feature edges satisfying the given face mark conditions"},
	{32, "EXCLUSIVE", 0, "Exclusive", "Select feature edges not satisfying the given face mark conditions"},
	{0, NULL, 0, NULL, NULL}
};

EnumPropertyRNA rna_FreestyleLineSet_face_mark_negation = {
	{(PropertyRNA *)&rna_FreestyleLineSet_face_mark_condition, (PropertyRNA *)&rna_FreestyleLineSet_group_negation,
	-1, "face_mark_negation", 3, "Face Mark Negation",
	"Specify either inclusion or exclusion of feature edges selected by face marks",
	0, "*",
	PROP_ENUM, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Scene_freestyle_update, 67371008, NULL, NULL,
	0, -1, NULL},
	FreestyleLineSet_face_mark_negation_get, FreestyleLineSet_face_mark_negation_set, NULL, NULL, NULL, NULL, rna_FreestyleLineSet_face_mark_negation_items, 2, 0
};

static EnumPropertyItem rna_FreestyleLineSet_face_mark_condition_items[3] = {
	{0, "ONE", 0, "One Face", "Select a feature edge if either of its adjacent faces is marked"},
	{64, "BOTH", 0, "Both Faces", "Select a feature edge if both of its adjacent faces are marked"},
	{0, NULL, 0, NULL, NULL}
};

EnumPropertyRNA rna_FreestyleLineSet_face_mark_condition = {
	{(PropertyRNA *)&rna_FreestyleLineSet_select_silhouette, (PropertyRNA *)&rna_FreestyleLineSet_face_mark_negation,
	-1, "face_mark_condition", 3, "Face Mark Condition",
	"Specify a feature edge selection condition based on face marks",
	0, "*",
	PROP_ENUM, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Scene_freestyle_update, 67371008, NULL, NULL,
	0, -1, NULL},
	FreestyleLineSet_face_mark_condition_get, FreestyleLineSet_face_mark_condition_set, NULL, NULL, NULL, NULL, rna_FreestyleLineSet_face_mark_condition_items, 2, 0
};

BoolPropertyRNA rna_FreestyleLineSet_select_silhouette = {
	{(PropertyRNA *)&rna_FreestyleLineSet_select_border, (PropertyRNA *)&rna_FreestyleLineSet_face_mark_condition,
	-1, "select_silhouette", 3, "Silhouette",
	"Select silhouettes (edges at the boundary of visible and hidden faces)",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Scene_freestyle_update, 67371008, NULL, NULL,
	0, -1, NULL},
	FreestyleLineSet_select_silhouette_get, FreestyleLineSet_select_silhouette_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_FreestyleLineSet_select_border = {
	{(PropertyRNA *)&rna_FreestyleLineSet_select_crease, (PropertyRNA *)&rna_FreestyleLineSet_select_silhouette,
	-1, "select_border", 3, "Border",
	"Select border edges (open mesh edges)",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Scene_freestyle_update, 67371008, NULL, NULL,
	0, -1, NULL},
	FreestyleLineSet_select_border_get, FreestyleLineSet_select_border_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_FreestyleLineSet_select_crease = {
	{(PropertyRNA *)&rna_FreestyleLineSet_select_ridge_valley, (PropertyRNA *)&rna_FreestyleLineSet_select_border,
	-1, "select_crease", 3, "Crease",
	"Select crease edges (those between two faces making an angle smaller than the Crease Angle)",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Scene_freestyle_update, 67371008, NULL, NULL,
	0, -1, NULL},
	FreestyleLineSet_select_crease_get, FreestyleLineSet_select_crease_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_FreestyleLineSet_select_ridge_valley = {
	{(PropertyRNA *)&rna_FreestyleLineSet_select_suggestive_contour, (PropertyRNA *)&rna_FreestyleLineSet_select_crease,
	-1, "select_ridge_valley", 3, "Ridge & Valley",
	"Select ridges and valleys (boundary lines between convex and concave areas of surface)",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Scene_freestyle_update, 67371008, NULL, NULL,
	0, -1, NULL},
	FreestyleLineSet_select_ridge_valley_get, FreestyleLineSet_select_ridge_valley_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_FreestyleLineSet_select_suggestive_contour = {
	{(PropertyRNA *)&rna_FreestyleLineSet_select_material_boundary, (PropertyRNA *)&rna_FreestyleLineSet_select_ridge_valley,
	-1, "select_suggestive_contour", 3, "Suggestive Contour",
	"Select suggestive contours (almost silhouette/contour edges)",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Scene_freestyle_update, 67371008, NULL, NULL,
	0, -1, NULL},
	FreestyleLineSet_select_suggestive_contour_get, FreestyleLineSet_select_suggestive_contour_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_FreestyleLineSet_select_material_boundary = {
	{(PropertyRNA *)&rna_FreestyleLineSet_select_contour, (PropertyRNA *)&rna_FreestyleLineSet_select_suggestive_contour,
	-1, "select_material_boundary", 3, "Material Boundary",
	"Select edges at material boundaries",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Scene_freestyle_update, 67371008, NULL, NULL,
	0, -1, NULL},
	FreestyleLineSet_select_material_boundary_get, FreestyleLineSet_select_material_boundary_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_FreestyleLineSet_select_contour = {
	{(PropertyRNA *)&rna_FreestyleLineSet_select_external_contour, (PropertyRNA *)&rna_FreestyleLineSet_select_material_boundary,
	-1, "select_contour", 3, "Contour",
	"Select contours (outer silhouettes of each object)",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Scene_freestyle_update, 67371008, NULL, NULL,
	0, -1, NULL},
	FreestyleLineSet_select_contour_get, FreestyleLineSet_select_contour_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_FreestyleLineSet_select_external_contour = {
	{(PropertyRNA *)&rna_FreestyleLineSet_select_edge_mark, (PropertyRNA *)&rna_FreestyleLineSet_select_contour,
	-1, "select_external_contour", 3, "External Contour",
	"Select external contours (outer silhouettes of occluding and occluded objects)",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Scene_freestyle_update, 67371008, NULL, NULL,
	0, -1, NULL},
	FreestyleLineSet_select_external_contour_get, FreestyleLineSet_select_external_contour_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_FreestyleLineSet_select_edge_mark = {
	{(PropertyRNA *)&rna_FreestyleLineSet_exclude_silhouette, (PropertyRNA *)&rna_FreestyleLineSet_select_external_contour,
	-1, "select_edge_mark", 3, "Edge Mark",
	"Select edge marks (edges annotated by Freestyle edge marks)",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Scene_freestyle_update, 67371008, NULL, NULL,
	0, -1, NULL},
	FreestyleLineSet_select_edge_mark_get, FreestyleLineSet_select_edge_mark_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_FreestyleLineSet_exclude_silhouette = {
	{(PropertyRNA *)&rna_FreestyleLineSet_exclude_border, (PropertyRNA *)&rna_FreestyleLineSet_select_edge_mark,
	-1, "exclude_silhouette", 3, "Silhouette",
	"Exclude silhouette edges",
	19, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Scene_freestyle_update, 67371008, NULL, NULL,
	0, -1, NULL},
	FreestyleLineSet_exclude_silhouette_get, FreestyleLineSet_exclude_silhouette_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_FreestyleLineSet_exclude_border = {
	{(PropertyRNA *)&rna_FreestyleLineSet_exclude_crease, (PropertyRNA *)&rna_FreestyleLineSet_exclude_silhouette,
	-1, "exclude_border", 3, "Border",
	"Exclude border edges",
	19, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Scene_freestyle_update, 67371008, NULL, NULL,
	0, -1, NULL},
	FreestyleLineSet_exclude_border_get, FreestyleLineSet_exclude_border_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_FreestyleLineSet_exclude_crease = {
	{(PropertyRNA *)&rna_FreestyleLineSet_exclude_ridge_valley, (PropertyRNA *)&rna_FreestyleLineSet_exclude_border,
	-1, "exclude_crease", 3, "Crease",
	"Exclude crease edges",
	19, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Scene_freestyle_update, 67371008, NULL, NULL,
	0, -1, NULL},
	FreestyleLineSet_exclude_crease_get, FreestyleLineSet_exclude_crease_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_FreestyleLineSet_exclude_ridge_valley = {
	{(PropertyRNA *)&rna_FreestyleLineSet_exclude_suggestive_contour, (PropertyRNA *)&rna_FreestyleLineSet_exclude_crease,
	-1, "exclude_ridge_valley", 3, "Ridge & Valley",
	"Exclude ridges and valleys",
	19, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Scene_freestyle_update, 67371008, NULL, NULL,
	0, -1, NULL},
	FreestyleLineSet_exclude_ridge_valley_get, FreestyleLineSet_exclude_ridge_valley_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_FreestyleLineSet_exclude_suggestive_contour = {
	{(PropertyRNA *)&rna_FreestyleLineSet_exclude_material_boundary, (PropertyRNA *)&rna_FreestyleLineSet_exclude_ridge_valley,
	-1, "exclude_suggestive_contour", 3, "Suggestive Contour",
	"Exclude suggestive contours",
	19, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Scene_freestyle_update, 67371008, NULL, NULL,
	0, -1, NULL},
	FreestyleLineSet_exclude_suggestive_contour_get, FreestyleLineSet_exclude_suggestive_contour_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_FreestyleLineSet_exclude_material_boundary = {
	{(PropertyRNA *)&rna_FreestyleLineSet_exclude_contour, (PropertyRNA *)&rna_FreestyleLineSet_exclude_suggestive_contour,
	-1, "exclude_material_boundary", 3, "Material Boundary",
	"Exclude edges at material boundaries",
	19, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Scene_freestyle_update, 67371008, NULL, NULL,
	0, -1, NULL},
	FreestyleLineSet_exclude_material_boundary_get, FreestyleLineSet_exclude_material_boundary_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_FreestyleLineSet_exclude_contour = {
	{(PropertyRNA *)&rna_FreestyleLineSet_exclude_external_contour, (PropertyRNA *)&rna_FreestyleLineSet_exclude_material_boundary,
	-1, "exclude_contour", 3, "Contour",
	"Exclude contours",
	19, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Scene_freestyle_update, 67371008, NULL, NULL,
	0, -1, NULL},
	FreestyleLineSet_exclude_contour_get, FreestyleLineSet_exclude_contour_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_FreestyleLineSet_exclude_external_contour = {
	{(PropertyRNA *)&rna_FreestyleLineSet_exclude_edge_mark, (PropertyRNA *)&rna_FreestyleLineSet_exclude_contour,
	-1, "exclude_external_contour", 3, "External Contour",
	"Exclude external contours",
	19, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Scene_freestyle_update, 67371008, NULL, NULL,
	0, -1, NULL},
	FreestyleLineSet_exclude_external_contour_get, FreestyleLineSet_exclude_external_contour_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_FreestyleLineSet_exclude_edge_mark = {
	{(PropertyRNA *)&rna_FreestyleLineSet_visibility, (PropertyRNA *)&rna_FreestyleLineSet_exclude_external_contour,
	-1, "exclude_edge_mark", 3, "Edge Mark",
	"Exclude edge marks",
	19, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Scene_freestyle_update, 67371008, NULL, NULL,
	0, -1, NULL},
	FreestyleLineSet_exclude_edge_mark_get, FreestyleLineSet_exclude_edge_mark_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

static EnumPropertyItem rna_FreestyleLineSet_visibility_items[4] = {
	{1, "VISIBLE", 0, "Visible", "Select visible feature edges"},
	{2, "HIDDEN", 0, "Hidden", "Select hidden feature edges"},
	{3, "RANGE", 0, "QI Range", "Select feature edges within a range of quantitative invisibility (QI) values"},
	{0, NULL, 0, NULL, NULL}
};

EnumPropertyRNA rna_FreestyleLineSet_visibility = {
	{(PropertyRNA *)&rna_FreestyleLineSet_qi_start, (PropertyRNA *)&rna_FreestyleLineSet_exclude_edge_mark,
	-1, "visibility", 3, "Visibility",
	"Determine how to use visibility for feature edge selection",
	0, "*",
	PROP_ENUM, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Scene_freestyle_update, 67371008, NULL, NULL,
	0, -1, NULL},
	FreestyleLineSet_visibility_get, FreestyleLineSet_visibility_set, NULL, NULL, NULL, NULL, rna_FreestyleLineSet_visibility_items, 3, 1
};

IntPropertyRNA rna_FreestyleLineSet_qi_start = {
	{(PropertyRNA *)&rna_FreestyleLineSet_qi_end, (PropertyRNA *)&rna_FreestyleLineSet_visibility,
	-1, "qi_start", 8195, "Start",
	"First QI value of the QI range",
	0, "*",
	PROP_INT, PROP_UNSIGNED | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Scene_freestyle_update, 67371008, NULL, NULL,
	offsetof(FreestyleLineSet, qi_start), 0, NULL},
	FreestyleLineSet_qi_start_get, FreestyleLineSet_qi_start_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL,
	0, INT_MAX, 0, INT_MAX, 1, 0, NULL
};

IntPropertyRNA rna_FreestyleLineSet_qi_end = {
	{NULL, (PropertyRNA *)&rna_FreestyleLineSet_qi_start,
	-1, "qi_end", 8195, "End",
	"Last QI value of the QI range",
	0, "*",
	PROP_INT, PROP_UNSIGNED | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Scene_freestyle_update, 67371008, NULL, NULL,
	offsetof(FreestyleLineSet, qi_end), 0, NULL},
	FreestyleLineSet_qi_end_get, FreestyleLineSet_qi_end_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL,
	0, INT_MAX, 0, INT_MAX, 1, 0, NULL
};

StructRNA RNA_FreestyleLineSet = {
	{(ContainerRNA *)&RNA_FreestyleModuleSettings, (ContainerRNA *)&RNA_SceneRenderLayer,
	NULL,
	{(PropertyRNA *)&rna_FreestyleLineSet_rna_properties, (PropertyRNA *)&rna_FreestyleLineSet_qi_end}},
	"FreestyleLineSet", NULL, NULL, 4, "Freestyle Line Set",
	"Line set for associating lines and style parameters",
	"*", 17,
	(PropertyRNA *)&rna_FreestyleLineSet_name, (PropertyRNA *)&rna_FreestyleLineSet_rna_properties,
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

/* Freestyle Module */
CollectionPropertyRNA rna_FreestyleModuleSettings_rna_properties = {
	{(PropertyRNA *)&rna_FreestyleModuleSettings_rna_type, NULL,
	-1, "rna_properties", 128, "Properties",
	"RNA property collection",
	0, "*",
	PROP_COLLECTION, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	FreestyleModuleSettings_rna_properties_begin, FreestyleModuleSettings_rna_properties_next, FreestyleModuleSettings_rna_properties_end, FreestyleModuleSettings_rna_properties_get, NULL, NULL, FreestyleModuleSettings_rna_properties_lookup_string, NULL, &RNA_Property
};

PointerPropertyRNA rna_FreestyleModuleSettings_rna_type = {
	{(PropertyRNA *)&rna_FreestyleModuleSettings_script, (PropertyRNA *)&rna_FreestyleModuleSettings_rna_properties,
	-1, "rna_type", 8912896, "RNA",
	"RNA type definition",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	FreestyleModuleSettings_rna_type_get, NULL, NULL, NULL,&RNA_Struct
};

PointerPropertyRNA rna_FreestyleModuleSettings_script = {
	{(PropertyRNA *)&rna_FreestyleModuleSettings_use, (PropertyRNA *)&rna_FreestyleModuleSettings_rna_type,
	-1, "script", 8388609, "Style Module",
	"Python script to define a style module",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Scene_freestyle_update, 67371008, NULL, NULL,
	0, -1, NULL},
	FreestyleModuleSettings_script_get, FreestyleModuleSettings_script_set, NULL, NULL,&RNA_Text
};

BoolPropertyRNA rna_FreestyleModuleSettings_use = {
	{NULL, (PropertyRNA *)&rna_FreestyleModuleSettings_script,
	-1, "use", 3, "Use",
	"Enable or disable this style module during stroke rendering",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Scene_freestyle_update, 67371008, NULL, NULL,
	0, -1, NULL},
	FreestyleModuleSettings_use_get, FreestyleModuleSettings_use_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

StructRNA RNA_FreestyleModuleSettings = {
	{(ContainerRNA *)&RNA_FreestyleSettings, (ContainerRNA *)&RNA_FreestyleLineSet,
	NULL,
	{(PropertyRNA *)&rna_FreestyleModuleSettings_rna_properties, (PropertyRNA *)&rna_FreestyleModuleSettings_use}},
	"FreestyleModuleSettings", NULL, NULL, 4, "Freestyle Module",
	"Style module configuration for specifying a style module",
	"*", 17,
	NULL, (PropertyRNA *)&rna_FreestyleModuleSettings_rna_properties,
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

/* Freestyle Settings */
CollectionPropertyRNA rna_FreestyleSettings_rna_properties = {
	{(PropertyRNA *)&rna_FreestyleSettings_rna_type, NULL,
	-1, "rna_properties", 128, "Properties",
	"RNA property collection",
	0, "*",
	PROP_COLLECTION, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	FreestyleSettings_rna_properties_begin, FreestyleSettings_rna_properties_next, FreestyleSettings_rna_properties_end, FreestyleSettings_rna_properties_get, NULL, NULL, FreestyleSettings_rna_properties_lookup_string, NULL, &RNA_Property
};

PointerPropertyRNA rna_FreestyleSettings_rna_type = {
	{(PropertyRNA *)&rna_FreestyleSettings_modules, (PropertyRNA *)&rna_FreestyleSettings_rna_properties,
	-1, "rna_type", 8912896, "RNA",
	"RNA type definition",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	FreestyleSettings_rna_type_get, NULL, NULL, NULL,&RNA_Struct
};

CollectionPropertyRNA rna_FreestyleSettings_modules = {
	{(PropertyRNA *)&rna_FreestyleSettings_mode, (PropertyRNA *)&rna_FreestyleSettings_rna_type,
	-1, "modules", 0, "Style Modules",
	"A list of style modules (to be applied from top to bottom)",
	0, "*",
	PROP_COLLECTION, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, &RNA_FreestyleModules},
	FreestyleSettings_modules_begin, FreestyleSettings_modules_next, FreestyleSettings_modules_end, FreestyleSettings_modules_get, NULL, FreestyleSettings_modules_lookup_int, NULL, NULL, &RNA_FreestyleModuleSettings
};

static EnumPropertyItem rna_FreestyleSettings_mode_items[3] = {
	{1, "SCRIPT", 0, "Python Scripting Mode", "Advanced mode for using style modules written in Python"},
	{2, "EDITOR", 0, "Parameter Editor Mode", "Basic mode for interactive style parameter editing"},
	{0, NULL, 0, NULL, NULL}
};

EnumPropertyRNA rna_FreestyleSettings_mode = {
	{(PropertyRNA *)&rna_FreestyleSettings_use_culling, (PropertyRNA *)&rna_FreestyleSettings_modules,
	-1, "mode", 3, "Control Mode",
	"Select the Freestyle control mode",
	0, "*",
	PROP_ENUM, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Scene_freestyle_update, 67371008, NULL, NULL,
	0, -1, NULL},
	FreestyleSettings_mode_get, FreestyleSettings_mode_set, NULL, NULL, NULL, NULL, rna_FreestyleSettings_mode_items, 2, 1
};

BoolPropertyRNA rna_FreestyleSettings_use_culling = {
	{(PropertyRNA *)&rna_FreestyleSettings_use_suggestive_contours, (PropertyRNA *)&rna_FreestyleSettings_mode,
	-1, "use_culling", 3, "Culling",
	"If enabled, out-of-view edges are ignored",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Scene_freestyle_update, 67371008, NULL, NULL,
	0, -1, NULL},
	FreestyleSettings_use_culling_get, FreestyleSettings_use_culling_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_FreestyleSettings_use_suggestive_contours = {
	{(PropertyRNA *)&rna_FreestyleSettings_use_ridges_and_valleys, (PropertyRNA *)&rna_FreestyleSettings_use_culling,
	-1, "use_suggestive_contours", 3, "Suggestive Contours",
	"Enable suggestive contours",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Scene_freestyle_update, 67371008, NULL, NULL,
	0, -1, NULL},
	FreestyleSettings_use_suggestive_contours_get, FreestyleSettings_use_suggestive_contours_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_FreestyleSettings_use_ridges_and_valleys = {
	{(PropertyRNA *)&rna_FreestyleSettings_use_material_boundaries, (PropertyRNA *)&rna_FreestyleSettings_use_suggestive_contours,
	-1, "use_ridges_and_valleys", 3, "Ridges and Valleys",
	"Enable ridges and valleys",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Scene_freestyle_update, 67371008, NULL, NULL,
	0, -1, NULL},
	FreestyleSettings_use_ridges_and_valleys_get, FreestyleSettings_use_ridges_and_valleys_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_FreestyleSettings_use_material_boundaries = {
	{(PropertyRNA *)&rna_FreestyleSettings_use_smoothness, (PropertyRNA *)&rna_FreestyleSettings_use_ridges_and_valleys,
	-1, "use_material_boundaries", 3, "Material Boundaries",
	"Enable material boundaries",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Scene_freestyle_update, 67371008, NULL, NULL,
	0, -1, NULL},
	FreestyleSettings_use_material_boundaries_get, FreestyleSettings_use_material_boundaries_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_FreestyleSettings_use_smoothness = {
	{(PropertyRNA *)&rna_FreestyleSettings_use_advanced_options, (PropertyRNA *)&rna_FreestyleSettings_use_material_boundaries,
	-1, "use_smoothness", 3, "Face Smoothness",
	"Take face smoothness into account in view map calculation",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Scene_freestyle_update, 67371008, NULL, NULL,
	0, -1, NULL},
	FreestyleSettings_use_smoothness_get, FreestyleSettings_use_smoothness_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_FreestyleSettings_use_advanced_options = {
	{(PropertyRNA *)&rna_FreestyleSettings_use_view_map_cache, (PropertyRNA *)&rna_FreestyleSettings_use_smoothness,
	-1, "use_advanced_options", 3, "Advanced Options",
	"Enable advanced edge detection options (sphere radius and Kr derivative epsilon)",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Scene_freestyle_update, 67371008, NULL, NULL,
	0, -1, NULL},
	FreestyleSettings_use_advanced_options_get, FreestyleSettings_use_advanced_options_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_FreestyleSettings_use_view_map_cache = {
	{(PropertyRNA *)&rna_FreestyleSettings_sphere_radius, (PropertyRNA *)&rna_FreestyleSettings_use_advanced_options,
	-1, "use_view_map_cache", 3, "View Map Cache",
	"Keep the computed view map and avoid re-calculating it if mesh geometry is unchanged",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Scene_use_view_map_cache_update, 67371008, NULL, NULL,
	0, -1, NULL},
	FreestyleSettings_use_view_map_cache_get, FreestyleSettings_use_view_map_cache_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

FloatPropertyRNA rna_FreestyleSettings_sphere_radius = {
	{(PropertyRNA *)&rna_FreestyleSettings_kr_derivative_epsilon, (PropertyRNA *)&rna_FreestyleSettings_use_view_map_cache,
	-1, "sphere_radius", 8195, "Sphere Radius",
	"Sphere radius for computing curvatures",
	0, "*",
	PROP_FLOAT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Scene_freestyle_update, 67371008, NULL, NULL,
	offsetof(FreestyleConfig, sphere_radius), 4, NULL},
	FreestyleSettings_sphere_radius_get, FreestyleSettings_sphere_radius_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 1000.0f, 0.0f, 1000.0f, 10.0f, 3, 0.0f, NULL
};

FloatPropertyRNA rna_FreestyleSettings_kr_derivative_epsilon = {
	{(PropertyRNA *)&rna_FreestyleSettings_crease_angle, (PropertyRNA *)&rna_FreestyleSettings_sphere_radius,
	-1, "kr_derivative_epsilon", 8195, "Kr Derivative Epsilon",
	"Kr derivative epsilon for computing suggestive contours",
	0, "*",
	PROP_FLOAT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Scene_freestyle_update, 67371008, NULL, NULL,
	offsetof(FreestyleConfig, dkr_epsilon), 4, NULL},
	FreestyleSettings_kr_derivative_epsilon_get, FreestyleSettings_kr_derivative_epsilon_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, -1000.0f, 1000.0f, -1000.0f, 1000.0f, 10.0f, 3, 0.0f, NULL
};

FloatPropertyRNA rna_FreestyleSettings_crease_angle = {
	{(PropertyRNA *)&rna_FreestyleSettings_linesets, (PropertyRNA *)&rna_FreestyleSettings_kr_derivative_epsilon,
	-1, "crease_angle", 8195, "Crease Angle",
	"Angular threshold for detecting crease edges",
	0, "*",
	PROP_FLOAT, PROP_ANGLE | PROP_UNIT_ROTATION, NULL, 0, {0, 0, 0}, 0,
	rna_Scene_freestyle_update, 67371008, NULL, NULL,
	offsetof(FreestyleConfig, crease_angle), 4, NULL},
	FreestyleSettings_crease_angle_get, FreestyleSettings_crease_angle_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 3.1415927410f, 0.0f, 3.1415927410f, 10.0f, 3, 0.0f, NULL
};

CollectionPropertyRNA rna_FreestyleSettings_linesets = {
	{NULL, (PropertyRNA *)&rna_FreestyleSettings_crease_angle,
	-1, "linesets", 0, "Line Sets",
	"",
	0, "*",
	PROP_COLLECTION, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, &RNA_Linesets},
	FreestyleSettings_linesets_begin, FreestyleSettings_linesets_next, FreestyleSettings_linesets_end, FreestyleSettings_linesets_get, NULL, FreestyleSettings_linesets_lookup_int, FreestyleSettings_linesets_lookup_string, NULL, &RNA_FreestyleLineSet
};

StructRNA RNA_FreestyleSettings = {
	{(ContainerRNA *)&RNA_FreestyleModules, (ContainerRNA *)&RNA_FreestyleModuleSettings,
	NULL,
	{(PropertyRNA *)&rna_FreestyleSettings_rna_properties, (PropertyRNA *)&rna_FreestyleSettings_linesets}},
	"FreestyleSettings", NULL, NULL, 4, "Freestyle Settings",
	"Freestyle settings for a SceneRenderLayer datablock",
	"*", 17,
	NULL, (PropertyRNA *)&rna_FreestyleSettings_rna_properties,
	NULL,
	&RNA_SceneRenderLayer,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	{NULL, NULL}
};

/* Style Modules */
CollectionPropertyRNA rna_FreestyleModules_rna_properties = {
	{(PropertyRNA *)&rna_FreestyleModules_rna_type, NULL,
	-1, "rna_properties", 128, "Properties",
	"RNA property collection",
	0, "*",
	PROP_COLLECTION, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	FreestyleModules_rna_properties_begin, FreestyleModules_rna_properties_next, FreestyleModules_rna_properties_end, FreestyleModules_rna_properties_get, NULL, NULL, FreestyleModules_rna_properties_lookup_string, NULL, &RNA_Property
};

PointerPropertyRNA rna_FreestyleModules_rna_type = {
	{NULL, (PropertyRNA *)&rna_FreestyleModules_rna_properties,
	-1, "rna_type", 8912896, "RNA",
	"RNA type definition",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	FreestyleModules_rna_type_get, NULL, NULL, NULL,&RNA_Struct
};

PointerPropertyRNA rna_FreestyleModules_new_module = {
	{NULL, NULL,
	-1, "module", 8388616, "",
	"Newly created style module",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	NULL, NULL, NULL, NULL,&RNA_FreestyleModuleSettings
};

FunctionRNA rna_FreestyleModules_new_func = {
	{(FunctionRNA *)&rna_FreestyleModules_remove_func, NULL,
	NULL,
	{(PropertyRNA *)&rna_FreestyleModules_new_module, (PropertyRNA *)&rna_FreestyleModules_new_module}},
	"new", 2048, "Add a style module to scene render layer Freestyle settings",
	FreestyleModules_new_call,
	(PropertyRNA *)&rna_FreestyleModules_new_module
};

PointerPropertyRNA rna_FreestyleModules_remove_module = {
	{NULL, NULL,
	-1, "module", 264196, "",
	"Style module to remove",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	NULL, NULL, NULL, NULL,&RNA_FreestyleModuleSettings
};

FunctionRNA rna_FreestyleModules_remove_func = {
	{NULL, (FunctionRNA *)&rna_FreestyleModules_new_func,
	NULL,
	{(PropertyRNA *)&rna_FreestyleModules_remove_module, (PropertyRNA *)&rna_FreestyleModules_remove_module}},
	"remove", 2064, "Remove a style module from scene render layer Freestyle settings",
	FreestyleModules_remove_call,
	NULL
};

StructRNA RNA_FreestyleModules = {
	{(ContainerRNA *)&RNA_Linesets, (ContainerRNA *)&RNA_FreestyleSettings,
	NULL,
	{(PropertyRNA *)&rna_FreestyleModules_rna_properties, (PropertyRNA *)&rna_FreestyleModules_rna_type}},
	"FreestyleModules", NULL, NULL, 4, "Style Modules",
	"A list of style modules (to be applied from top to bottom)",
	"*", 17,
	NULL, (PropertyRNA *)&rna_FreestyleModules_rna_properties,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	{(FunctionRNA *)&rna_FreestyleModules_new_func, (FunctionRNA *)&rna_FreestyleModules_remove_func}
};

/* Line Sets */
CollectionPropertyRNA rna_Linesets_rna_properties = {
	{(PropertyRNA *)&rna_Linesets_rna_type, NULL,
	-1, "rna_properties", 128, "Properties",
	"RNA property collection",
	0, "*",
	PROP_COLLECTION, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	Linesets_rna_properties_begin, Linesets_rna_properties_next, Linesets_rna_properties_end, Linesets_rna_properties_get, NULL, NULL, Linesets_rna_properties_lookup_string, NULL, &RNA_Property
};

PointerPropertyRNA rna_Linesets_rna_type = {
	{(PropertyRNA *)&rna_Linesets_active, (PropertyRNA *)&rna_Linesets_rna_properties,
	-1, "rna_type", 8912896, "RNA",
	"RNA type definition",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	Linesets_rna_type_get, NULL, NULL, NULL,&RNA_Struct
};

PointerPropertyRNA rna_Linesets_active = {
	{(PropertyRNA *)&rna_Linesets_active_index, (PropertyRNA *)&rna_Linesets_rna_type,
	-1, "active", 8388608, "Active Line Set",
	"Active line set being displayed",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 67371008, NULL, NULL,
	0, -1, NULL},
	Linesets_active_get, NULL, NULL, NULL,&RNA_FreestyleLineSet
};

IntPropertyRNA rna_Linesets_active_index = {
	{NULL, (PropertyRNA *)&rna_Linesets_active,
	-1, "active_index", 3, "Active Line Set Index",
	"Index of active line set slot",
	0, "*",
	PROP_INT, PROP_UNSIGNED | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 67371008, NULL, NULL,
	0, -1, NULL},
	Linesets_active_index_get, Linesets_active_index_set, NULL, NULL, rna_FreestyleSettings_active_lineset_index_range, NULL, NULL, NULL, NULL, NULL,
	0, 10000, 0, INT_MAX, 1, 0, NULL
};

StringPropertyRNA rna_Linesets_new_name = {
	{(PropertyRNA *)&rna_Linesets_new_lineset, NULL,
	-1, "name", 262149, "",
	"New name for the line set (not unique)",
	0, "*",
	PROP_STRING, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	NULL, NULL, NULL, NULL, NULL, NULL, 0, "LineSet"
};

PointerPropertyRNA rna_Linesets_new_lineset = {
	{NULL, (PropertyRNA *)&rna_Linesets_new_name,
	-1, "lineset", 8388616, "",
	"Newly created line set",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	NULL, NULL, NULL, NULL,&RNA_FreestyleLineSet
};

FunctionRNA rna_Linesets_new_func = {
	{(FunctionRNA *)&rna_Linesets_remove_func, NULL,
	NULL,
	{(PropertyRNA *)&rna_Linesets_new_name, (PropertyRNA *)&rna_Linesets_new_lineset}},
	"new", 2048, "Add a line set to scene render layer Freestyle settings",
	Linesets_new_call,
	(PropertyRNA *)&rna_Linesets_new_lineset
};

PointerPropertyRNA rna_Linesets_remove_lineset = {
	{NULL, NULL,
	-1, "lineset", 264196, "",
	"Line set to remove",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	NULL, NULL, NULL, NULL,&RNA_FreestyleLineSet
};

FunctionRNA rna_Linesets_remove_func = {
	{NULL, (FunctionRNA *)&rna_Linesets_new_func,
	NULL,
	{(PropertyRNA *)&rna_Linesets_remove_lineset, (PropertyRNA *)&rna_Linesets_remove_lineset}},
	"remove", 2064, "Remove a line set from scene render layer Freestyle settings",
	Linesets_remove_call,
	NULL
};

StructRNA RNA_Linesets = {
	{(ContainerRNA *)&RNA_Screen, (ContainerRNA *)&RNA_FreestyleModules,
	NULL,
	{(PropertyRNA *)&rna_Linesets_rna_properties, (PropertyRNA *)&rna_Linesets_active_index}},
	"Linesets", NULL, NULL, 4, "Line Sets",
	"Line sets for associating lines and style parameters",
	"*", 17,
	NULL, (PropertyRNA *)&rna_Linesets_rna_properties,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	{(FunctionRNA *)&rna_Linesets_new_func, (FunctionRNA *)&rna_Linesets_remove_func}
};

