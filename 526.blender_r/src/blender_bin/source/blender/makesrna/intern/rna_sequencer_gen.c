
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

#include "rna_sequencer.c"
#include "rna_sequencer_api.c"

#pragma GCC diagnostic ignored "-Wunused-parameter"

/* Autogenerated Functions */


CollectionPropertyRNA rna_SequenceColorBalanceData_rna_properties;
PointerPropertyRNA rna_SequenceColorBalanceData_rna_type;
FloatPropertyRNA rna_SequenceColorBalanceData_lift;
FloatPropertyRNA rna_SequenceColorBalanceData_gamma;
FloatPropertyRNA rna_SequenceColorBalanceData_gain;
BoolPropertyRNA rna_SequenceColorBalanceData_invert_gain;
BoolPropertyRNA rna_SequenceColorBalanceData_invert_gamma;
BoolPropertyRNA rna_SequenceColorBalanceData_invert_lift;


CollectionPropertyRNA rna_SequenceElement_rna_properties;
PointerPropertyRNA rna_SequenceElement_rna_type;
StringPropertyRNA rna_SequenceElement_filename;
IntPropertyRNA rna_SequenceElement_orig_width;
IntPropertyRNA rna_SequenceElement_orig_height;


CollectionPropertyRNA rna_SequenceProxy_rna_properties;
PointerPropertyRNA rna_SequenceProxy_rna_type;
StringPropertyRNA rna_SequenceProxy_directory;
StringPropertyRNA rna_SequenceProxy_filepath;
BoolPropertyRNA rna_SequenceProxy_build_25;
BoolPropertyRNA rna_SequenceProxy_build_50;
BoolPropertyRNA rna_SequenceProxy_build_75;
BoolPropertyRNA rna_SequenceProxy_build_100;
BoolPropertyRNA rna_SequenceProxy_build_record_run;
BoolPropertyRNA rna_SequenceProxy_build_free_run;
BoolPropertyRNA rna_SequenceProxy_build_free_run_rec_date;
IntPropertyRNA rna_SequenceProxy_quality;
EnumPropertyRNA rna_SequenceProxy_timecode;


extern CollectionPropertyRNA rna_SequenceColorBalanceData_rna_properties;
extern PointerPropertyRNA rna_SequenceColorBalanceData_rna_type;
extern FloatPropertyRNA rna_SequenceColorBalanceData_lift;
extern FloatPropertyRNA rna_SequenceColorBalanceData_gamma;
extern FloatPropertyRNA rna_SequenceColorBalanceData_gain;
extern BoolPropertyRNA rna_SequenceColorBalanceData_invert_gain;
extern BoolPropertyRNA rna_SequenceColorBalanceData_invert_gamma;
extern BoolPropertyRNA rna_SequenceColorBalanceData_invert_lift;


CollectionPropertyRNA rna_SequenceCrop_rna_properties;
PointerPropertyRNA rna_SequenceCrop_rna_type;
IntPropertyRNA rna_SequenceCrop_max_y;
IntPropertyRNA rna_SequenceCrop_min_y;
IntPropertyRNA rna_SequenceCrop_min_x;
IntPropertyRNA rna_SequenceCrop_max_x;


CollectionPropertyRNA rna_SequenceTransform_rna_properties;
PointerPropertyRNA rna_SequenceTransform_rna_type;
IntPropertyRNA rna_SequenceTransform_offset_x;
IntPropertyRNA rna_SequenceTransform_offset_y;


CollectionPropertyRNA rna_Sequence_rna_properties;
PointerPropertyRNA rna_Sequence_rna_type;
StringPropertyRNA rna_Sequence_name;
EnumPropertyRNA rna_Sequence_type;
BoolPropertyRNA rna_Sequence_select;
BoolPropertyRNA rna_Sequence_select_left_handle;
BoolPropertyRNA rna_Sequence_select_right_handle;
BoolPropertyRNA rna_Sequence_mute;
BoolPropertyRNA rna_Sequence_lock;
IntPropertyRNA rna_Sequence_frame_final_duration;
IntPropertyRNA rna_Sequence_frame_duration;
IntPropertyRNA rna_Sequence_frame_start;
IntPropertyRNA rna_Sequence_frame_final_start;
IntPropertyRNA rna_Sequence_frame_final_end;
IntPropertyRNA rna_Sequence_frame_offset_start;
IntPropertyRNA rna_Sequence_frame_offset_end;
IntPropertyRNA rna_Sequence_frame_still_start;
IntPropertyRNA rna_Sequence_frame_still_end;
IntPropertyRNA rna_Sequence_channel;
BoolPropertyRNA rna_Sequence_use_linear_modifiers;
EnumPropertyRNA rna_Sequence_blend_type;
FloatPropertyRNA rna_Sequence_blend_alpha;
FloatPropertyRNA rna_Sequence_effect_fader;
BoolPropertyRNA rna_Sequence_use_default_fade;
FloatPropertyRNA rna_Sequence_speed_factor;
CollectionPropertyRNA rna_Sequence_modifiers;

extern FunctionRNA rna_Sequence_update_func;
extern BoolPropertyRNA rna_Sequence_update_data;

extern FunctionRNA rna_Sequence_strip_elem_from_frame_func;
extern IntPropertyRNA rna_Sequence_strip_elem_from_frame_frame;
extern PointerPropertyRNA rna_Sequence_strip_elem_from_frame_elem;

extern FunctionRNA rna_Sequence_swap_func;
extern PointerPropertyRNA rna_Sequence_swap_other;



CollectionPropertyRNA rna_SequenceModifiers_rna_properties;
PointerPropertyRNA rna_SequenceModifiers_rna_type;

extern FunctionRNA rna_SequenceModifiers_new_func;
extern StringPropertyRNA rna_SequenceModifiers_new_name;
extern EnumPropertyRNA rna_SequenceModifiers_new_type;
extern PointerPropertyRNA rna_SequenceModifiers_new_modifier;

extern FunctionRNA rna_SequenceModifiers_remove_func;
extern PointerPropertyRNA rna_SequenceModifiers_remove_modifier;

extern FunctionRNA rna_SequenceModifiers_clear_func;


CollectionPropertyRNA rna_SequenceEditor_rna_properties;
PointerPropertyRNA rna_SequenceEditor_rna_type;
CollectionPropertyRNA rna_SequenceEditor_sequences;
CollectionPropertyRNA rna_SequenceEditor_sequences_all;
CollectionPropertyRNA rna_SequenceEditor_meta_stack;
PointerPropertyRNA rna_SequenceEditor_active_strip;
BoolPropertyRNA rna_SequenceEditor_show_overlay;
BoolPropertyRNA rna_SequenceEditor_use_overlay_lock;
IntPropertyRNA rna_SequenceEditor_overlay_frame;


CollectionPropertyRNA rna_Sequences_rna_properties;
PointerPropertyRNA rna_Sequences_rna_type;

extern FunctionRNA rna_Sequences_new_clip_func;
extern StringPropertyRNA rna_Sequences_new_clip_name;
extern PointerPropertyRNA rna_Sequences_new_clip_clip;
extern IntPropertyRNA rna_Sequences_new_clip_channel;
extern IntPropertyRNA rna_Sequences_new_clip_frame_start;
extern PointerPropertyRNA rna_Sequences_new_clip_sequence;

extern FunctionRNA rna_Sequences_new_mask_func;
extern StringPropertyRNA rna_Sequences_new_mask_name;
extern PointerPropertyRNA rna_Sequences_new_mask_mask;
extern IntPropertyRNA rna_Sequences_new_mask_channel;
extern IntPropertyRNA rna_Sequences_new_mask_frame_start;
extern PointerPropertyRNA rna_Sequences_new_mask_sequence;

extern FunctionRNA rna_Sequences_new_scene_func;
extern StringPropertyRNA rna_Sequences_new_scene_name;
extern PointerPropertyRNA rna_Sequences_new_scene_scene;
extern IntPropertyRNA rna_Sequences_new_scene_channel;
extern IntPropertyRNA rna_Sequences_new_scene_frame_start;
extern PointerPropertyRNA rna_Sequences_new_scene_sequence;

extern FunctionRNA rna_Sequences_new_image_func;
extern StringPropertyRNA rna_Sequences_new_image_name;
extern StringPropertyRNA rna_Sequences_new_image_filepath;
extern IntPropertyRNA rna_Sequences_new_image_channel;
extern IntPropertyRNA rna_Sequences_new_image_frame_start;
extern PointerPropertyRNA rna_Sequences_new_image_sequence;

extern FunctionRNA rna_Sequences_new_movie_func;
extern StringPropertyRNA rna_Sequences_new_movie_name;
extern StringPropertyRNA rna_Sequences_new_movie_filepath;
extern IntPropertyRNA rna_Sequences_new_movie_channel;
extern IntPropertyRNA rna_Sequences_new_movie_frame_start;
extern PointerPropertyRNA rna_Sequences_new_movie_sequence;

extern FunctionRNA rna_Sequences_new_sound_func;
extern StringPropertyRNA rna_Sequences_new_sound_name;
extern StringPropertyRNA rna_Sequences_new_sound_filepath;
extern IntPropertyRNA rna_Sequences_new_sound_channel;
extern IntPropertyRNA rna_Sequences_new_sound_frame_start;
extern PointerPropertyRNA rna_Sequences_new_sound_sequence;

extern FunctionRNA rna_Sequences_new_effect_func;
extern StringPropertyRNA rna_Sequences_new_effect_name;
extern EnumPropertyRNA rna_Sequences_new_effect_type;
extern IntPropertyRNA rna_Sequences_new_effect_channel;
extern IntPropertyRNA rna_Sequences_new_effect_frame_start;
extern IntPropertyRNA rna_Sequences_new_effect_frame_end;
extern PointerPropertyRNA rna_Sequences_new_effect_seq1;
extern PointerPropertyRNA rna_Sequences_new_effect_seq2;
extern PointerPropertyRNA rna_Sequences_new_effect_seq3;
extern PointerPropertyRNA rna_Sequences_new_effect_sequence;

extern FunctionRNA rna_Sequences_remove_func;
extern PointerPropertyRNA rna_Sequences_remove_sequence;



extern CollectionPropertyRNA rna_Sequence_rna_properties;
extern PointerPropertyRNA rna_Sequence_rna_type;
extern StringPropertyRNA rna_Sequence_name;
extern EnumPropertyRNA rna_Sequence_type;
extern BoolPropertyRNA rna_Sequence_select;
extern BoolPropertyRNA rna_Sequence_select_left_handle;
extern BoolPropertyRNA rna_Sequence_select_right_handle;
extern BoolPropertyRNA rna_Sequence_mute;
extern BoolPropertyRNA rna_Sequence_lock;
extern IntPropertyRNA rna_Sequence_frame_final_duration;
extern IntPropertyRNA rna_Sequence_frame_duration;
extern IntPropertyRNA rna_Sequence_frame_start;
extern IntPropertyRNA rna_Sequence_frame_final_start;
extern IntPropertyRNA rna_Sequence_frame_final_end;
extern IntPropertyRNA rna_Sequence_frame_offset_start;
extern IntPropertyRNA rna_Sequence_frame_offset_end;
extern IntPropertyRNA rna_Sequence_frame_still_start;
extern IntPropertyRNA rna_Sequence_frame_still_end;
extern IntPropertyRNA rna_Sequence_channel;
extern BoolPropertyRNA rna_Sequence_use_linear_modifiers;
extern EnumPropertyRNA rna_Sequence_blend_type;
extern FloatPropertyRNA rna_Sequence_blend_alpha;
extern FloatPropertyRNA rna_Sequence_effect_fader;
extern BoolPropertyRNA rna_Sequence_use_default_fade;
extern FloatPropertyRNA rna_Sequence_speed_factor;
extern CollectionPropertyRNA rna_Sequence_modifiers;

StringPropertyRNA rna_ImageSequence_directory;
CollectionPropertyRNA rna_ImageSequence_elements;
BoolPropertyRNA rna_ImageSequence_use_deinterlace;
EnumPropertyRNA rna_ImageSequence_alpha_mode;
BoolPropertyRNA rna_ImageSequence_use_flip_x;
BoolPropertyRNA rna_ImageSequence_use_flip_y;
BoolPropertyRNA rna_ImageSequence_use_float;
BoolPropertyRNA rna_ImageSequence_use_reverse_frames;
FloatPropertyRNA rna_ImageSequence_color_multiply;
FloatPropertyRNA rna_ImageSequence_color_saturation;
FloatPropertyRNA rna_ImageSequence_strobe;
BoolPropertyRNA rna_ImageSequence_use_translation;
PointerPropertyRNA rna_ImageSequence_transform;
BoolPropertyRNA rna_ImageSequence_use_crop;
PointerPropertyRNA rna_ImageSequence_crop;
BoolPropertyRNA rna_ImageSequence_use_proxy;
PointerPropertyRNA rna_ImageSequence_proxy;
BoolPropertyRNA rna_ImageSequence_use_proxy_custom_directory;
BoolPropertyRNA rna_ImageSequence_use_proxy_custom_file;
IntPropertyRNA rna_ImageSequence_animation_offset_start;
IntPropertyRNA rna_ImageSequence_animation_offset_end;
PointerPropertyRNA rna_ImageSequence_colorspace_settings;

extern FunctionRNA rna_Sequence_update_func;
extern BoolPropertyRNA rna_Sequence_update_data;

extern FunctionRNA rna_Sequence_strip_elem_from_frame_func;
extern IntPropertyRNA rna_Sequence_strip_elem_from_frame_frame;
extern PointerPropertyRNA rna_Sequence_strip_elem_from_frame_elem;

extern FunctionRNA rna_Sequence_swap_func;
extern PointerPropertyRNA rna_Sequence_swap_other;



CollectionPropertyRNA rna_SequenceElements_rna_properties;
PointerPropertyRNA rna_SequenceElements_rna_type;

extern FunctionRNA rna_SequenceElements_append_func;
extern StringPropertyRNA rna_SequenceElements_append_filename;
extern PointerPropertyRNA rna_SequenceElements_append_elem;

extern FunctionRNA rna_SequenceElements_pop_func;
extern IntPropertyRNA rna_SequenceElements_pop_index;



extern CollectionPropertyRNA rna_Sequence_rna_properties;
extern PointerPropertyRNA rna_Sequence_rna_type;
extern StringPropertyRNA rna_Sequence_name;
extern EnumPropertyRNA rna_Sequence_type;
extern BoolPropertyRNA rna_Sequence_select;
extern BoolPropertyRNA rna_Sequence_select_left_handle;
extern BoolPropertyRNA rna_Sequence_select_right_handle;
extern BoolPropertyRNA rna_Sequence_mute;
extern BoolPropertyRNA rna_Sequence_lock;
extern IntPropertyRNA rna_Sequence_frame_final_duration;
extern IntPropertyRNA rna_Sequence_frame_duration;
extern IntPropertyRNA rna_Sequence_frame_start;
extern IntPropertyRNA rna_Sequence_frame_final_start;
extern IntPropertyRNA rna_Sequence_frame_final_end;
extern IntPropertyRNA rna_Sequence_frame_offset_start;
extern IntPropertyRNA rna_Sequence_frame_offset_end;
extern IntPropertyRNA rna_Sequence_frame_still_start;
extern IntPropertyRNA rna_Sequence_frame_still_end;
extern IntPropertyRNA rna_Sequence_channel;
extern BoolPropertyRNA rna_Sequence_use_linear_modifiers;
extern EnumPropertyRNA rna_Sequence_blend_type;
extern FloatPropertyRNA rna_Sequence_blend_alpha;
extern FloatPropertyRNA rna_Sequence_effect_fader;
extern BoolPropertyRNA rna_Sequence_use_default_fade;
extern FloatPropertyRNA rna_Sequence_speed_factor;
extern CollectionPropertyRNA rna_Sequence_modifiers;

CollectionPropertyRNA rna_MetaSequence_sequences;
BoolPropertyRNA rna_MetaSequence_use_deinterlace;
EnumPropertyRNA rna_MetaSequence_alpha_mode;
BoolPropertyRNA rna_MetaSequence_use_flip_x;
BoolPropertyRNA rna_MetaSequence_use_flip_y;
BoolPropertyRNA rna_MetaSequence_use_float;
BoolPropertyRNA rna_MetaSequence_use_reverse_frames;
FloatPropertyRNA rna_MetaSequence_color_multiply;
FloatPropertyRNA rna_MetaSequence_color_saturation;
FloatPropertyRNA rna_MetaSequence_strobe;
BoolPropertyRNA rna_MetaSequence_use_translation;
PointerPropertyRNA rna_MetaSequence_transform;
BoolPropertyRNA rna_MetaSequence_use_crop;
PointerPropertyRNA rna_MetaSequence_crop;
BoolPropertyRNA rna_MetaSequence_use_proxy;
PointerPropertyRNA rna_MetaSequence_proxy;
BoolPropertyRNA rna_MetaSequence_use_proxy_custom_directory;
BoolPropertyRNA rna_MetaSequence_use_proxy_custom_file;
IntPropertyRNA rna_MetaSequence_animation_offset_start;
IntPropertyRNA rna_MetaSequence_animation_offset_end;

extern FunctionRNA rna_Sequence_update_func;
extern BoolPropertyRNA rna_Sequence_update_data;

extern FunctionRNA rna_Sequence_strip_elem_from_frame_func;
extern IntPropertyRNA rna_Sequence_strip_elem_from_frame_frame;
extern PointerPropertyRNA rna_Sequence_strip_elem_from_frame_elem;

extern FunctionRNA rna_Sequence_swap_func;
extern PointerPropertyRNA rna_Sequence_swap_other;



extern CollectionPropertyRNA rna_Sequence_rna_properties;
extern PointerPropertyRNA rna_Sequence_rna_type;
extern StringPropertyRNA rna_Sequence_name;
extern EnumPropertyRNA rna_Sequence_type;
extern BoolPropertyRNA rna_Sequence_select;
extern BoolPropertyRNA rna_Sequence_select_left_handle;
extern BoolPropertyRNA rna_Sequence_select_right_handle;
extern BoolPropertyRNA rna_Sequence_mute;
extern BoolPropertyRNA rna_Sequence_lock;
extern IntPropertyRNA rna_Sequence_frame_final_duration;
extern IntPropertyRNA rna_Sequence_frame_duration;
extern IntPropertyRNA rna_Sequence_frame_start;
extern IntPropertyRNA rna_Sequence_frame_final_start;
extern IntPropertyRNA rna_Sequence_frame_final_end;
extern IntPropertyRNA rna_Sequence_frame_offset_start;
extern IntPropertyRNA rna_Sequence_frame_offset_end;
extern IntPropertyRNA rna_Sequence_frame_still_start;
extern IntPropertyRNA rna_Sequence_frame_still_end;
extern IntPropertyRNA rna_Sequence_channel;
extern BoolPropertyRNA rna_Sequence_use_linear_modifiers;
extern EnumPropertyRNA rna_Sequence_blend_type;
extern FloatPropertyRNA rna_Sequence_blend_alpha;
extern FloatPropertyRNA rna_Sequence_effect_fader;
extern BoolPropertyRNA rna_Sequence_use_default_fade;
extern FloatPropertyRNA rna_Sequence_speed_factor;
extern CollectionPropertyRNA rna_Sequence_modifiers;

PointerPropertyRNA rna_SceneSequence_scene;
PointerPropertyRNA rna_SceneSequence_scene_camera;
BoolPropertyRNA rna_SceneSequence_use_deinterlace;
EnumPropertyRNA rna_SceneSequence_alpha_mode;
BoolPropertyRNA rna_SceneSequence_use_flip_x;
BoolPropertyRNA rna_SceneSequence_use_flip_y;
BoolPropertyRNA rna_SceneSequence_use_float;
BoolPropertyRNA rna_SceneSequence_use_reverse_frames;
FloatPropertyRNA rna_SceneSequence_color_multiply;
FloatPropertyRNA rna_SceneSequence_color_saturation;
FloatPropertyRNA rna_SceneSequence_strobe;
BoolPropertyRNA rna_SceneSequence_use_translation;
PointerPropertyRNA rna_SceneSequence_transform;
BoolPropertyRNA rna_SceneSequence_use_crop;
PointerPropertyRNA rna_SceneSequence_crop;
BoolPropertyRNA rna_SceneSequence_use_proxy;
PointerPropertyRNA rna_SceneSequence_proxy;
BoolPropertyRNA rna_SceneSequence_use_proxy_custom_directory;
BoolPropertyRNA rna_SceneSequence_use_proxy_custom_file;
IntPropertyRNA rna_SceneSequence_animation_offset_start;
IntPropertyRNA rna_SceneSequence_animation_offset_end;

extern FunctionRNA rna_Sequence_update_func;
extern BoolPropertyRNA rna_Sequence_update_data;

extern FunctionRNA rna_Sequence_strip_elem_from_frame_func;
extern IntPropertyRNA rna_Sequence_strip_elem_from_frame_frame;
extern PointerPropertyRNA rna_Sequence_strip_elem_from_frame_elem;

extern FunctionRNA rna_Sequence_swap_func;
extern PointerPropertyRNA rna_Sequence_swap_other;



extern CollectionPropertyRNA rna_Sequence_rna_properties;
extern PointerPropertyRNA rna_Sequence_rna_type;
extern StringPropertyRNA rna_Sequence_name;
extern EnumPropertyRNA rna_Sequence_type;
extern BoolPropertyRNA rna_Sequence_select;
extern BoolPropertyRNA rna_Sequence_select_left_handle;
extern BoolPropertyRNA rna_Sequence_select_right_handle;
extern BoolPropertyRNA rna_Sequence_mute;
extern BoolPropertyRNA rna_Sequence_lock;
extern IntPropertyRNA rna_Sequence_frame_final_duration;
extern IntPropertyRNA rna_Sequence_frame_duration;
extern IntPropertyRNA rna_Sequence_frame_start;
extern IntPropertyRNA rna_Sequence_frame_final_start;
extern IntPropertyRNA rna_Sequence_frame_final_end;
extern IntPropertyRNA rna_Sequence_frame_offset_start;
extern IntPropertyRNA rna_Sequence_frame_offset_end;
extern IntPropertyRNA rna_Sequence_frame_still_start;
extern IntPropertyRNA rna_Sequence_frame_still_end;
extern IntPropertyRNA rna_Sequence_channel;
extern BoolPropertyRNA rna_Sequence_use_linear_modifiers;
extern EnumPropertyRNA rna_Sequence_blend_type;
extern FloatPropertyRNA rna_Sequence_blend_alpha;
extern FloatPropertyRNA rna_Sequence_effect_fader;
extern BoolPropertyRNA rna_Sequence_use_default_fade;
extern FloatPropertyRNA rna_Sequence_speed_factor;
extern CollectionPropertyRNA rna_Sequence_modifiers;

IntPropertyRNA rna_MovieSequence_mpeg_preseek;
IntPropertyRNA rna_MovieSequence_stream_index;
CollectionPropertyRNA rna_MovieSequence_elements;
StringPropertyRNA rna_MovieSequence_filepath;
BoolPropertyRNA rna_MovieSequence_use_deinterlace;
EnumPropertyRNA rna_MovieSequence_alpha_mode;
BoolPropertyRNA rna_MovieSequence_use_flip_x;
BoolPropertyRNA rna_MovieSequence_use_flip_y;
BoolPropertyRNA rna_MovieSequence_use_float;
BoolPropertyRNA rna_MovieSequence_use_reverse_frames;
FloatPropertyRNA rna_MovieSequence_color_multiply;
FloatPropertyRNA rna_MovieSequence_color_saturation;
FloatPropertyRNA rna_MovieSequence_strobe;
BoolPropertyRNA rna_MovieSequence_use_translation;
PointerPropertyRNA rna_MovieSequence_transform;
BoolPropertyRNA rna_MovieSequence_use_crop;
PointerPropertyRNA rna_MovieSequence_crop;
BoolPropertyRNA rna_MovieSequence_use_proxy;
PointerPropertyRNA rna_MovieSequence_proxy;
BoolPropertyRNA rna_MovieSequence_use_proxy_custom_directory;
BoolPropertyRNA rna_MovieSequence_use_proxy_custom_file;
IntPropertyRNA rna_MovieSequence_animation_offset_start;
IntPropertyRNA rna_MovieSequence_animation_offset_end;
PointerPropertyRNA rna_MovieSequence_colorspace_settings;

extern FunctionRNA rna_Sequence_update_func;
extern BoolPropertyRNA rna_Sequence_update_data;

extern FunctionRNA rna_Sequence_strip_elem_from_frame_func;
extern IntPropertyRNA rna_Sequence_strip_elem_from_frame_frame;
extern PointerPropertyRNA rna_Sequence_strip_elem_from_frame_elem;

extern FunctionRNA rna_Sequence_swap_func;
extern PointerPropertyRNA rna_Sequence_swap_other;



extern CollectionPropertyRNA rna_Sequence_rna_properties;
extern PointerPropertyRNA rna_Sequence_rna_type;
extern StringPropertyRNA rna_Sequence_name;
extern EnumPropertyRNA rna_Sequence_type;
extern BoolPropertyRNA rna_Sequence_select;
extern BoolPropertyRNA rna_Sequence_select_left_handle;
extern BoolPropertyRNA rna_Sequence_select_right_handle;
extern BoolPropertyRNA rna_Sequence_mute;
extern BoolPropertyRNA rna_Sequence_lock;
extern IntPropertyRNA rna_Sequence_frame_final_duration;
extern IntPropertyRNA rna_Sequence_frame_duration;
extern IntPropertyRNA rna_Sequence_frame_start;
extern IntPropertyRNA rna_Sequence_frame_final_start;
extern IntPropertyRNA rna_Sequence_frame_final_end;
extern IntPropertyRNA rna_Sequence_frame_offset_start;
extern IntPropertyRNA rna_Sequence_frame_offset_end;
extern IntPropertyRNA rna_Sequence_frame_still_start;
extern IntPropertyRNA rna_Sequence_frame_still_end;
extern IntPropertyRNA rna_Sequence_channel;
extern BoolPropertyRNA rna_Sequence_use_linear_modifiers;
extern EnumPropertyRNA rna_Sequence_blend_type;
extern FloatPropertyRNA rna_Sequence_blend_alpha;
extern FloatPropertyRNA rna_Sequence_effect_fader;
extern BoolPropertyRNA rna_Sequence_use_default_fade;
extern FloatPropertyRNA rna_Sequence_speed_factor;
extern CollectionPropertyRNA rna_Sequence_modifiers;

BoolPropertyRNA rna_MovieClipSequence_undistort;
BoolPropertyRNA rna_MovieClipSequence_stabilize2d;
BoolPropertyRNA rna_MovieClipSequence_use_deinterlace;
EnumPropertyRNA rna_MovieClipSequence_alpha_mode;
BoolPropertyRNA rna_MovieClipSequence_use_flip_x;
BoolPropertyRNA rna_MovieClipSequence_use_flip_y;
BoolPropertyRNA rna_MovieClipSequence_use_float;
BoolPropertyRNA rna_MovieClipSequence_use_reverse_frames;
FloatPropertyRNA rna_MovieClipSequence_color_multiply;
FloatPropertyRNA rna_MovieClipSequence_color_saturation;
FloatPropertyRNA rna_MovieClipSequence_strobe;
BoolPropertyRNA rna_MovieClipSequence_use_translation;
PointerPropertyRNA rna_MovieClipSequence_transform;
BoolPropertyRNA rna_MovieClipSequence_use_crop;
PointerPropertyRNA rna_MovieClipSequence_crop;
IntPropertyRNA rna_MovieClipSequence_animation_offset_start;
IntPropertyRNA rna_MovieClipSequence_animation_offset_end;

extern FunctionRNA rna_Sequence_update_func;
extern BoolPropertyRNA rna_Sequence_update_data;

extern FunctionRNA rna_Sequence_strip_elem_from_frame_func;
extern IntPropertyRNA rna_Sequence_strip_elem_from_frame_frame;
extern PointerPropertyRNA rna_Sequence_strip_elem_from_frame_elem;

extern FunctionRNA rna_Sequence_swap_func;
extern PointerPropertyRNA rna_Sequence_swap_other;



extern CollectionPropertyRNA rna_Sequence_rna_properties;
extern PointerPropertyRNA rna_Sequence_rna_type;
extern StringPropertyRNA rna_Sequence_name;
extern EnumPropertyRNA rna_Sequence_type;
extern BoolPropertyRNA rna_Sequence_select;
extern BoolPropertyRNA rna_Sequence_select_left_handle;
extern BoolPropertyRNA rna_Sequence_select_right_handle;
extern BoolPropertyRNA rna_Sequence_mute;
extern BoolPropertyRNA rna_Sequence_lock;
extern IntPropertyRNA rna_Sequence_frame_final_duration;
extern IntPropertyRNA rna_Sequence_frame_duration;
extern IntPropertyRNA rna_Sequence_frame_start;
extern IntPropertyRNA rna_Sequence_frame_final_start;
extern IntPropertyRNA rna_Sequence_frame_final_end;
extern IntPropertyRNA rna_Sequence_frame_offset_start;
extern IntPropertyRNA rna_Sequence_frame_offset_end;
extern IntPropertyRNA rna_Sequence_frame_still_start;
extern IntPropertyRNA rna_Sequence_frame_still_end;
extern IntPropertyRNA rna_Sequence_channel;
extern BoolPropertyRNA rna_Sequence_use_linear_modifiers;
extern EnumPropertyRNA rna_Sequence_blend_type;
extern FloatPropertyRNA rna_Sequence_blend_alpha;
extern FloatPropertyRNA rna_Sequence_effect_fader;
extern BoolPropertyRNA rna_Sequence_use_default_fade;
extern FloatPropertyRNA rna_Sequence_speed_factor;
extern CollectionPropertyRNA rna_Sequence_modifiers;

PointerPropertyRNA rna_MaskSequence_mask;
BoolPropertyRNA rna_MaskSequence_use_deinterlace;
EnumPropertyRNA rna_MaskSequence_alpha_mode;
BoolPropertyRNA rna_MaskSequence_use_flip_x;
BoolPropertyRNA rna_MaskSequence_use_flip_y;
BoolPropertyRNA rna_MaskSequence_use_float;
BoolPropertyRNA rna_MaskSequence_use_reverse_frames;
FloatPropertyRNA rna_MaskSequence_color_multiply;
FloatPropertyRNA rna_MaskSequence_color_saturation;
FloatPropertyRNA rna_MaskSequence_strobe;
BoolPropertyRNA rna_MaskSequence_use_translation;
PointerPropertyRNA rna_MaskSequence_transform;
BoolPropertyRNA rna_MaskSequence_use_crop;
PointerPropertyRNA rna_MaskSequence_crop;
IntPropertyRNA rna_MaskSequence_animation_offset_start;
IntPropertyRNA rna_MaskSequence_animation_offset_end;

extern FunctionRNA rna_Sequence_update_func;
extern BoolPropertyRNA rna_Sequence_update_data;

extern FunctionRNA rna_Sequence_strip_elem_from_frame_func;
extern IntPropertyRNA rna_Sequence_strip_elem_from_frame_frame;
extern PointerPropertyRNA rna_Sequence_strip_elem_from_frame_elem;

extern FunctionRNA rna_Sequence_swap_func;
extern PointerPropertyRNA rna_Sequence_swap_other;



extern CollectionPropertyRNA rna_Sequence_rna_properties;
extern PointerPropertyRNA rna_Sequence_rna_type;
extern StringPropertyRNA rna_Sequence_name;
extern EnumPropertyRNA rna_Sequence_type;
extern BoolPropertyRNA rna_Sequence_select;
extern BoolPropertyRNA rna_Sequence_select_left_handle;
extern BoolPropertyRNA rna_Sequence_select_right_handle;
extern BoolPropertyRNA rna_Sequence_mute;
extern BoolPropertyRNA rna_Sequence_lock;
extern IntPropertyRNA rna_Sequence_frame_final_duration;
extern IntPropertyRNA rna_Sequence_frame_duration;
extern IntPropertyRNA rna_Sequence_frame_start;
extern IntPropertyRNA rna_Sequence_frame_final_start;
extern IntPropertyRNA rna_Sequence_frame_final_end;
extern IntPropertyRNA rna_Sequence_frame_offset_start;
extern IntPropertyRNA rna_Sequence_frame_offset_end;
extern IntPropertyRNA rna_Sequence_frame_still_start;
extern IntPropertyRNA rna_Sequence_frame_still_end;
extern IntPropertyRNA rna_Sequence_channel;
extern BoolPropertyRNA rna_Sequence_use_linear_modifiers;
extern EnumPropertyRNA rna_Sequence_blend_type;
extern FloatPropertyRNA rna_Sequence_blend_alpha;
extern FloatPropertyRNA rna_Sequence_effect_fader;
extern BoolPropertyRNA rna_Sequence_use_default_fade;
extern FloatPropertyRNA rna_Sequence_speed_factor;
extern CollectionPropertyRNA rna_Sequence_modifiers;

PointerPropertyRNA rna_SoundSequence_sound;
FloatPropertyRNA rna_SoundSequence_volume;
FloatPropertyRNA rna_SoundSequence_pitch;
FloatPropertyRNA rna_SoundSequence_pan;
StringPropertyRNA rna_SoundSequence_filepath;
BoolPropertyRNA rna_SoundSequence_show_waveform;
IntPropertyRNA rna_SoundSequence_animation_offset_start;
IntPropertyRNA rna_SoundSequence_animation_offset_end;

extern FunctionRNA rna_Sequence_update_func;
extern BoolPropertyRNA rna_Sequence_update_data;

extern FunctionRNA rna_Sequence_strip_elem_from_frame_func;
extern IntPropertyRNA rna_Sequence_strip_elem_from_frame_frame;
extern PointerPropertyRNA rna_Sequence_strip_elem_from_frame_elem;

extern FunctionRNA rna_Sequence_swap_func;
extern PointerPropertyRNA rna_Sequence_swap_other;



extern CollectionPropertyRNA rna_Sequence_rna_properties;
extern PointerPropertyRNA rna_Sequence_rna_type;
extern StringPropertyRNA rna_Sequence_name;
extern EnumPropertyRNA rna_Sequence_type;
extern BoolPropertyRNA rna_Sequence_select;
extern BoolPropertyRNA rna_Sequence_select_left_handle;
extern BoolPropertyRNA rna_Sequence_select_right_handle;
extern BoolPropertyRNA rna_Sequence_mute;
extern BoolPropertyRNA rna_Sequence_lock;
extern IntPropertyRNA rna_Sequence_frame_final_duration;
extern IntPropertyRNA rna_Sequence_frame_duration;
extern IntPropertyRNA rna_Sequence_frame_start;
extern IntPropertyRNA rna_Sequence_frame_final_start;
extern IntPropertyRNA rna_Sequence_frame_final_end;
extern IntPropertyRNA rna_Sequence_frame_offset_start;
extern IntPropertyRNA rna_Sequence_frame_offset_end;
extern IntPropertyRNA rna_Sequence_frame_still_start;
extern IntPropertyRNA rna_Sequence_frame_still_end;
extern IntPropertyRNA rna_Sequence_channel;
extern BoolPropertyRNA rna_Sequence_use_linear_modifiers;
extern EnumPropertyRNA rna_Sequence_blend_type;
extern FloatPropertyRNA rna_Sequence_blend_alpha;
extern FloatPropertyRNA rna_Sequence_effect_fader;
extern BoolPropertyRNA rna_Sequence_use_default_fade;
extern FloatPropertyRNA rna_Sequence_speed_factor;
extern CollectionPropertyRNA rna_Sequence_modifiers;

BoolPropertyRNA rna_EffectSequence_use_deinterlace;
EnumPropertyRNA rna_EffectSequence_alpha_mode;
BoolPropertyRNA rna_EffectSequence_use_flip_x;
BoolPropertyRNA rna_EffectSequence_use_flip_y;
BoolPropertyRNA rna_EffectSequence_use_float;
BoolPropertyRNA rna_EffectSequence_use_reverse_frames;
FloatPropertyRNA rna_EffectSequence_color_multiply;
FloatPropertyRNA rna_EffectSequence_color_saturation;
FloatPropertyRNA rna_EffectSequence_strobe;
BoolPropertyRNA rna_EffectSequence_use_translation;
PointerPropertyRNA rna_EffectSequence_transform;
BoolPropertyRNA rna_EffectSequence_use_crop;
PointerPropertyRNA rna_EffectSequence_crop;
BoolPropertyRNA rna_EffectSequence_use_proxy;
PointerPropertyRNA rna_EffectSequence_proxy;
BoolPropertyRNA rna_EffectSequence_use_proxy_custom_directory;
BoolPropertyRNA rna_EffectSequence_use_proxy_custom_file;

extern FunctionRNA rna_Sequence_update_func;
extern BoolPropertyRNA rna_Sequence_update_data;

extern FunctionRNA rna_Sequence_strip_elem_from_frame_func;
extern IntPropertyRNA rna_Sequence_strip_elem_from_frame_frame;
extern PointerPropertyRNA rna_Sequence_strip_elem_from_frame_elem;

extern FunctionRNA rna_Sequence_swap_func;
extern PointerPropertyRNA rna_Sequence_swap_other;



extern BoolPropertyRNA rna_EffectSequence_use_deinterlace;
extern EnumPropertyRNA rna_EffectSequence_alpha_mode;
extern BoolPropertyRNA rna_EffectSequence_use_flip_x;
extern BoolPropertyRNA rna_EffectSequence_use_flip_y;
extern BoolPropertyRNA rna_EffectSequence_use_float;
extern BoolPropertyRNA rna_EffectSequence_use_reverse_frames;
extern FloatPropertyRNA rna_EffectSequence_color_multiply;
extern FloatPropertyRNA rna_EffectSequence_color_saturation;
extern FloatPropertyRNA rna_EffectSequence_strobe;
extern BoolPropertyRNA rna_EffectSequence_use_translation;
extern PointerPropertyRNA rna_EffectSequence_transform;
extern BoolPropertyRNA rna_EffectSequence_use_crop;
extern PointerPropertyRNA rna_EffectSequence_crop;
extern BoolPropertyRNA rna_EffectSequence_use_proxy;
extern PointerPropertyRNA rna_EffectSequence_proxy;
extern BoolPropertyRNA rna_EffectSequence_use_proxy_custom_directory;
extern BoolPropertyRNA rna_EffectSequence_use_proxy_custom_file;

extern CollectionPropertyRNA rna_Sequence_rna_properties;
extern PointerPropertyRNA rna_Sequence_rna_type;
extern StringPropertyRNA rna_Sequence_name;
extern EnumPropertyRNA rna_Sequence_type;
extern BoolPropertyRNA rna_Sequence_select;
extern BoolPropertyRNA rna_Sequence_select_left_handle;
extern BoolPropertyRNA rna_Sequence_select_right_handle;
extern BoolPropertyRNA rna_Sequence_mute;
extern BoolPropertyRNA rna_Sequence_lock;
extern IntPropertyRNA rna_Sequence_frame_final_duration;
extern IntPropertyRNA rna_Sequence_frame_duration;
extern IntPropertyRNA rna_Sequence_frame_start;
extern IntPropertyRNA rna_Sequence_frame_final_start;
extern IntPropertyRNA rna_Sequence_frame_final_end;
extern IntPropertyRNA rna_Sequence_frame_offset_start;
extern IntPropertyRNA rna_Sequence_frame_offset_end;
extern IntPropertyRNA rna_Sequence_frame_still_start;
extern IntPropertyRNA rna_Sequence_frame_still_end;
extern IntPropertyRNA rna_Sequence_channel;
extern BoolPropertyRNA rna_Sequence_use_linear_modifiers;
extern EnumPropertyRNA rna_Sequence_blend_type;
extern FloatPropertyRNA rna_Sequence_blend_alpha;
extern FloatPropertyRNA rna_Sequence_effect_fader;
extern BoolPropertyRNA rna_Sequence_use_default_fade;
extern FloatPropertyRNA rna_Sequence_speed_factor;
extern CollectionPropertyRNA rna_Sequence_modifiers;

IntPropertyRNA rna_AddSequence_input_count;
PointerPropertyRNA rna_AddSequence_input_1;
PointerPropertyRNA rna_AddSequence_input_2;

extern FunctionRNA rna_Sequence_update_func;
extern BoolPropertyRNA rna_Sequence_update_data;

extern FunctionRNA rna_Sequence_strip_elem_from_frame_func;
extern IntPropertyRNA rna_Sequence_strip_elem_from_frame_frame;
extern PointerPropertyRNA rna_Sequence_strip_elem_from_frame_elem;

extern FunctionRNA rna_Sequence_swap_func;
extern PointerPropertyRNA rna_Sequence_swap_other;



extern BoolPropertyRNA rna_EffectSequence_use_deinterlace;
extern EnumPropertyRNA rna_EffectSequence_alpha_mode;
extern BoolPropertyRNA rna_EffectSequence_use_flip_x;
extern BoolPropertyRNA rna_EffectSequence_use_flip_y;
extern BoolPropertyRNA rna_EffectSequence_use_float;
extern BoolPropertyRNA rna_EffectSequence_use_reverse_frames;
extern FloatPropertyRNA rna_EffectSequence_color_multiply;
extern FloatPropertyRNA rna_EffectSequence_color_saturation;
extern FloatPropertyRNA rna_EffectSequence_strobe;
extern BoolPropertyRNA rna_EffectSequence_use_translation;
extern PointerPropertyRNA rna_EffectSequence_transform;
extern BoolPropertyRNA rna_EffectSequence_use_crop;
extern PointerPropertyRNA rna_EffectSequence_crop;
extern BoolPropertyRNA rna_EffectSequence_use_proxy;
extern PointerPropertyRNA rna_EffectSequence_proxy;
extern BoolPropertyRNA rna_EffectSequence_use_proxy_custom_directory;
extern BoolPropertyRNA rna_EffectSequence_use_proxy_custom_file;

extern CollectionPropertyRNA rna_Sequence_rna_properties;
extern PointerPropertyRNA rna_Sequence_rna_type;
extern StringPropertyRNA rna_Sequence_name;
extern EnumPropertyRNA rna_Sequence_type;
extern BoolPropertyRNA rna_Sequence_select;
extern BoolPropertyRNA rna_Sequence_select_left_handle;
extern BoolPropertyRNA rna_Sequence_select_right_handle;
extern BoolPropertyRNA rna_Sequence_mute;
extern BoolPropertyRNA rna_Sequence_lock;
extern IntPropertyRNA rna_Sequence_frame_final_duration;
extern IntPropertyRNA rna_Sequence_frame_duration;
extern IntPropertyRNA rna_Sequence_frame_start;
extern IntPropertyRNA rna_Sequence_frame_final_start;
extern IntPropertyRNA rna_Sequence_frame_final_end;
extern IntPropertyRNA rna_Sequence_frame_offset_start;
extern IntPropertyRNA rna_Sequence_frame_offset_end;
extern IntPropertyRNA rna_Sequence_frame_still_start;
extern IntPropertyRNA rna_Sequence_frame_still_end;
extern IntPropertyRNA rna_Sequence_channel;
extern BoolPropertyRNA rna_Sequence_use_linear_modifiers;
extern EnumPropertyRNA rna_Sequence_blend_type;
extern FloatPropertyRNA rna_Sequence_blend_alpha;
extern FloatPropertyRNA rna_Sequence_effect_fader;
extern BoolPropertyRNA rna_Sequence_use_default_fade;
extern FloatPropertyRNA rna_Sequence_speed_factor;
extern CollectionPropertyRNA rna_Sequence_modifiers;

IntPropertyRNA rna_AdjustmentSequence_input_count;
IntPropertyRNA rna_AdjustmentSequence_animation_offset_start;
IntPropertyRNA rna_AdjustmentSequence_animation_offset_end;

extern FunctionRNA rna_Sequence_update_func;
extern BoolPropertyRNA rna_Sequence_update_data;

extern FunctionRNA rna_Sequence_strip_elem_from_frame_func;
extern IntPropertyRNA rna_Sequence_strip_elem_from_frame_frame;
extern PointerPropertyRNA rna_Sequence_strip_elem_from_frame_elem;

extern FunctionRNA rna_Sequence_swap_func;
extern PointerPropertyRNA rna_Sequence_swap_other;



extern BoolPropertyRNA rna_EffectSequence_use_deinterlace;
extern EnumPropertyRNA rna_EffectSequence_alpha_mode;
extern BoolPropertyRNA rna_EffectSequence_use_flip_x;
extern BoolPropertyRNA rna_EffectSequence_use_flip_y;
extern BoolPropertyRNA rna_EffectSequence_use_float;
extern BoolPropertyRNA rna_EffectSequence_use_reverse_frames;
extern FloatPropertyRNA rna_EffectSequence_color_multiply;
extern FloatPropertyRNA rna_EffectSequence_color_saturation;
extern FloatPropertyRNA rna_EffectSequence_strobe;
extern BoolPropertyRNA rna_EffectSequence_use_translation;
extern PointerPropertyRNA rna_EffectSequence_transform;
extern BoolPropertyRNA rna_EffectSequence_use_crop;
extern PointerPropertyRNA rna_EffectSequence_crop;
extern BoolPropertyRNA rna_EffectSequence_use_proxy;
extern PointerPropertyRNA rna_EffectSequence_proxy;
extern BoolPropertyRNA rna_EffectSequence_use_proxy_custom_directory;
extern BoolPropertyRNA rna_EffectSequence_use_proxy_custom_file;

extern CollectionPropertyRNA rna_Sequence_rna_properties;
extern PointerPropertyRNA rna_Sequence_rna_type;
extern StringPropertyRNA rna_Sequence_name;
extern EnumPropertyRNA rna_Sequence_type;
extern BoolPropertyRNA rna_Sequence_select;
extern BoolPropertyRNA rna_Sequence_select_left_handle;
extern BoolPropertyRNA rna_Sequence_select_right_handle;
extern BoolPropertyRNA rna_Sequence_mute;
extern BoolPropertyRNA rna_Sequence_lock;
extern IntPropertyRNA rna_Sequence_frame_final_duration;
extern IntPropertyRNA rna_Sequence_frame_duration;
extern IntPropertyRNA rna_Sequence_frame_start;
extern IntPropertyRNA rna_Sequence_frame_final_start;
extern IntPropertyRNA rna_Sequence_frame_final_end;
extern IntPropertyRNA rna_Sequence_frame_offset_start;
extern IntPropertyRNA rna_Sequence_frame_offset_end;
extern IntPropertyRNA rna_Sequence_frame_still_start;
extern IntPropertyRNA rna_Sequence_frame_still_end;
extern IntPropertyRNA rna_Sequence_channel;
extern BoolPropertyRNA rna_Sequence_use_linear_modifiers;
extern EnumPropertyRNA rna_Sequence_blend_type;
extern FloatPropertyRNA rna_Sequence_blend_alpha;
extern FloatPropertyRNA rna_Sequence_effect_fader;
extern BoolPropertyRNA rna_Sequence_use_default_fade;
extern FloatPropertyRNA rna_Sequence_speed_factor;
extern CollectionPropertyRNA rna_Sequence_modifiers;

IntPropertyRNA rna_AlphaOverSequence_input_count;
PointerPropertyRNA rna_AlphaOverSequence_input_1;
PointerPropertyRNA rna_AlphaOverSequence_input_2;

extern FunctionRNA rna_Sequence_update_func;
extern BoolPropertyRNA rna_Sequence_update_data;

extern FunctionRNA rna_Sequence_strip_elem_from_frame_func;
extern IntPropertyRNA rna_Sequence_strip_elem_from_frame_frame;
extern PointerPropertyRNA rna_Sequence_strip_elem_from_frame_elem;

extern FunctionRNA rna_Sequence_swap_func;
extern PointerPropertyRNA rna_Sequence_swap_other;



extern BoolPropertyRNA rna_EffectSequence_use_deinterlace;
extern EnumPropertyRNA rna_EffectSequence_alpha_mode;
extern BoolPropertyRNA rna_EffectSequence_use_flip_x;
extern BoolPropertyRNA rna_EffectSequence_use_flip_y;
extern BoolPropertyRNA rna_EffectSequence_use_float;
extern BoolPropertyRNA rna_EffectSequence_use_reverse_frames;
extern FloatPropertyRNA rna_EffectSequence_color_multiply;
extern FloatPropertyRNA rna_EffectSequence_color_saturation;
extern FloatPropertyRNA rna_EffectSequence_strobe;
extern BoolPropertyRNA rna_EffectSequence_use_translation;
extern PointerPropertyRNA rna_EffectSequence_transform;
extern BoolPropertyRNA rna_EffectSequence_use_crop;
extern PointerPropertyRNA rna_EffectSequence_crop;
extern BoolPropertyRNA rna_EffectSequence_use_proxy;
extern PointerPropertyRNA rna_EffectSequence_proxy;
extern BoolPropertyRNA rna_EffectSequence_use_proxy_custom_directory;
extern BoolPropertyRNA rna_EffectSequence_use_proxy_custom_file;

extern CollectionPropertyRNA rna_Sequence_rna_properties;
extern PointerPropertyRNA rna_Sequence_rna_type;
extern StringPropertyRNA rna_Sequence_name;
extern EnumPropertyRNA rna_Sequence_type;
extern BoolPropertyRNA rna_Sequence_select;
extern BoolPropertyRNA rna_Sequence_select_left_handle;
extern BoolPropertyRNA rna_Sequence_select_right_handle;
extern BoolPropertyRNA rna_Sequence_mute;
extern BoolPropertyRNA rna_Sequence_lock;
extern IntPropertyRNA rna_Sequence_frame_final_duration;
extern IntPropertyRNA rna_Sequence_frame_duration;
extern IntPropertyRNA rna_Sequence_frame_start;
extern IntPropertyRNA rna_Sequence_frame_final_start;
extern IntPropertyRNA rna_Sequence_frame_final_end;
extern IntPropertyRNA rna_Sequence_frame_offset_start;
extern IntPropertyRNA rna_Sequence_frame_offset_end;
extern IntPropertyRNA rna_Sequence_frame_still_start;
extern IntPropertyRNA rna_Sequence_frame_still_end;
extern IntPropertyRNA rna_Sequence_channel;
extern BoolPropertyRNA rna_Sequence_use_linear_modifiers;
extern EnumPropertyRNA rna_Sequence_blend_type;
extern FloatPropertyRNA rna_Sequence_blend_alpha;
extern FloatPropertyRNA rna_Sequence_effect_fader;
extern BoolPropertyRNA rna_Sequence_use_default_fade;
extern FloatPropertyRNA rna_Sequence_speed_factor;
extern CollectionPropertyRNA rna_Sequence_modifiers;

IntPropertyRNA rna_AlphaUnderSequence_input_count;
PointerPropertyRNA rna_AlphaUnderSequence_input_1;
PointerPropertyRNA rna_AlphaUnderSequence_input_2;

extern FunctionRNA rna_Sequence_update_func;
extern BoolPropertyRNA rna_Sequence_update_data;

extern FunctionRNA rna_Sequence_strip_elem_from_frame_func;
extern IntPropertyRNA rna_Sequence_strip_elem_from_frame_frame;
extern PointerPropertyRNA rna_Sequence_strip_elem_from_frame_elem;

extern FunctionRNA rna_Sequence_swap_func;
extern PointerPropertyRNA rna_Sequence_swap_other;



extern BoolPropertyRNA rna_EffectSequence_use_deinterlace;
extern EnumPropertyRNA rna_EffectSequence_alpha_mode;
extern BoolPropertyRNA rna_EffectSequence_use_flip_x;
extern BoolPropertyRNA rna_EffectSequence_use_flip_y;
extern BoolPropertyRNA rna_EffectSequence_use_float;
extern BoolPropertyRNA rna_EffectSequence_use_reverse_frames;
extern FloatPropertyRNA rna_EffectSequence_color_multiply;
extern FloatPropertyRNA rna_EffectSequence_color_saturation;
extern FloatPropertyRNA rna_EffectSequence_strobe;
extern BoolPropertyRNA rna_EffectSequence_use_translation;
extern PointerPropertyRNA rna_EffectSequence_transform;
extern BoolPropertyRNA rna_EffectSequence_use_crop;
extern PointerPropertyRNA rna_EffectSequence_crop;
extern BoolPropertyRNA rna_EffectSequence_use_proxy;
extern PointerPropertyRNA rna_EffectSequence_proxy;
extern BoolPropertyRNA rna_EffectSequence_use_proxy_custom_directory;
extern BoolPropertyRNA rna_EffectSequence_use_proxy_custom_file;

extern CollectionPropertyRNA rna_Sequence_rna_properties;
extern PointerPropertyRNA rna_Sequence_rna_type;
extern StringPropertyRNA rna_Sequence_name;
extern EnumPropertyRNA rna_Sequence_type;
extern BoolPropertyRNA rna_Sequence_select;
extern BoolPropertyRNA rna_Sequence_select_left_handle;
extern BoolPropertyRNA rna_Sequence_select_right_handle;
extern BoolPropertyRNA rna_Sequence_mute;
extern BoolPropertyRNA rna_Sequence_lock;
extern IntPropertyRNA rna_Sequence_frame_final_duration;
extern IntPropertyRNA rna_Sequence_frame_duration;
extern IntPropertyRNA rna_Sequence_frame_start;
extern IntPropertyRNA rna_Sequence_frame_final_start;
extern IntPropertyRNA rna_Sequence_frame_final_end;
extern IntPropertyRNA rna_Sequence_frame_offset_start;
extern IntPropertyRNA rna_Sequence_frame_offset_end;
extern IntPropertyRNA rna_Sequence_frame_still_start;
extern IntPropertyRNA rna_Sequence_frame_still_end;
extern IntPropertyRNA rna_Sequence_channel;
extern BoolPropertyRNA rna_Sequence_use_linear_modifiers;
extern EnumPropertyRNA rna_Sequence_blend_type;
extern FloatPropertyRNA rna_Sequence_blend_alpha;
extern FloatPropertyRNA rna_Sequence_effect_fader;
extern BoolPropertyRNA rna_Sequence_use_default_fade;
extern FloatPropertyRNA rna_Sequence_speed_factor;
extern CollectionPropertyRNA rna_Sequence_modifiers;

IntPropertyRNA rna_ColorSequence_input_count;
FloatPropertyRNA rna_ColorSequence_color;

extern FunctionRNA rna_Sequence_update_func;
extern BoolPropertyRNA rna_Sequence_update_data;

extern FunctionRNA rna_Sequence_strip_elem_from_frame_func;
extern IntPropertyRNA rna_Sequence_strip_elem_from_frame_frame;
extern PointerPropertyRNA rna_Sequence_strip_elem_from_frame_elem;

extern FunctionRNA rna_Sequence_swap_func;
extern PointerPropertyRNA rna_Sequence_swap_other;



extern BoolPropertyRNA rna_EffectSequence_use_deinterlace;
extern EnumPropertyRNA rna_EffectSequence_alpha_mode;
extern BoolPropertyRNA rna_EffectSequence_use_flip_x;
extern BoolPropertyRNA rna_EffectSequence_use_flip_y;
extern BoolPropertyRNA rna_EffectSequence_use_float;
extern BoolPropertyRNA rna_EffectSequence_use_reverse_frames;
extern FloatPropertyRNA rna_EffectSequence_color_multiply;
extern FloatPropertyRNA rna_EffectSequence_color_saturation;
extern FloatPropertyRNA rna_EffectSequence_strobe;
extern BoolPropertyRNA rna_EffectSequence_use_translation;
extern PointerPropertyRNA rna_EffectSequence_transform;
extern BoolPropertyRNA rna_EffectSequence_use_crop;
extern PointerPropertyRNA rna_EffectSequence_crop;
extern BoolPropertyRNA rna_EffectSequence_use_proxy;
extern PointerPropertyRNA rna_EffectSequence_proxy;
extern BoolPropertyRNA rna_EffectSequence_use_proxy_custom_directory;
extern BoolPropertyRNA rna_EffectSequence_use_proxy_custom_file;

extern CollectionPropertyRNA rna_Sequence_rna_properties;
extern PointerPropertyRNA rna_Sequence_rna_type;
extern StringPropertyRNA rna_Sequence_name;
extern EnumPropertyRNA rna_Sequence_type;
extern BoolPropertyRNA rna_Sequence_select;
extern BoolPropertyRNA rna_Sequence_select_left_handle;
extern BoolPropertyRNA rna_Sequence_select_right_handle;
extern BoolPropertyRNA rna_Sequence_mute;
extern BoolPropertyRNA rna_Sequence_lock;
extern IntPropertyRNA rna_Sequence_frame_final_duration;
extern IntPropertyRNA rna_Sequence_frame_duration;
extern IntPropertyRNA rna_Sequence_frame_start;
extern IntPropertyRNA rna_Sequence_frame_final_start;
extern IntPropertyRNA rna_Sequence_frame_final_end;
extern IntPropertyRNA rna_Sequence_frame_offset_start;
extern IntPropertyRNA rna_Sequence_frame_offset_end;
extern IntPropertyRNA rna_Sequence_frame_still_start;
extern IntPropertyRNA rna_Sequence_frame_still_end;
extern IntPropertyRNA rna_Sequence_channel;
extern BoolPropertyRNA rna_Sequence_use_linear_modifiers;
extern EnumPropertyRNA rna_Sequence_blend_type;
extern FloatPropertyRNA rna_Sequence_blend_alpha;
extern FloatPropertyRNA rna_Sequence_effect_fader;
extern BoolPropertyRNA rna_Sequence_use_default_fade;
extern FloatPropertyRNA rna_Sequence_speed_factor;
extern CollectionPropertyRNA rna_Sequence_modifiers;

IntPropertyRNA rna_CrossSequence_input_count;
PointerPropertyRNA rna_CrossSequence_input_1;
PointerPropertyRNA rna_CrossSequence_input_2;

extern FunctionRNA rna_Sequence_update_func;
extern BoolPropertyRNA rna_Sequence_update_data;

extern FunctionRNA rna_Sequence_strip_elem_from_frame_func;
extern IntPropertyRNA rna_Sequence_strip_elem_from_frame_frame;
extern PointerPropertyRNA rna_Sequence_strip_elem_from_frame_elem;

extern FunctionRNA rna_Sequence_swap_func;
extern PointerPropertyRNA rna_Sequence_swap_other;



extern BoolPropertyRNA rna_EffectSequence_use_deinterlace;
extern EnumPropertyRNA rna_EffectSequence_alpha_mode;
extern BoolPropertyRNA rna_EffectSequence_use_flip_x;
extern BoolPropertyRNA rna_EffectSequence_use_flip_y;
extern BoolPropertyRNA rna_EffectSequence_use_float;
extern BoolPropertyRNA rna_EffectSequence_use_reverse_frames;
extern FloatPropertyRNA rna_EffectSequence_color_multiply;
extern FloatPropertyRNA rna_EffectSequence_color_saturation;
extern FloatPropertyRNA rna_EffectSequence_strobe;
extern BoolPropertyRNA rna_EffectSequence_use_translation;
extern PointerPropertyRNA rna_EffectSequence_transform;
extern BoolPropertyRNA rna_EffectSequence_use_crop;
extern PointerPropertyRNA rna_EffectSequence_crop;
extern BoolPropertyRNA rna_EffectSequence_use_proxy;
extern PointerPropertyRNA rna_EffectSequence_proxy;
extern BoolPropertyRNA rna_EffectSequence_use_proxy_custom_directory;
extern BoolPropertyRNA rna_EffectSequence_use_proxy_custom_file;

extern CollectionPropertyRNA rna_Sequence_rna_properties;
extern PointerPropertyRNA rna_Sequence_rna_type;
extern StringPropertyRNA rna_Sequence_name;
extern EnumPropertyRNA rna_Sequence_type;
extern BoolPropertyRNA rna_Sequence_select;
extern BoolPropertyRNA rna_Sequence_select_left_handle;
extern BoolPropertyRNA rna_Sequence_select_right_handle;
extern BoolPropertyRNA rna_Sequence_mute;
extern BoolPropertyRNA rna_Sequence_lock;
extern IntPropertyRNA rna_Sequence_frame_final_duration;
extern IntPropertyRNA rna_Sequence_frame_duration;
extern IntPropertyRNA rna_Sequence_frame_start;
extern IntPropertyRNA rna_Sequence_frame_final_start;
extern IntPropertyRNA rna_Sequence_frame_final_end;
extern IntPropertyRNA rna_Sequence_frame_offset_start;
extern IntPropertyRNA rna_Sequence_frame_offset_end;
extern IntPropertyRNA rna_Sequence_frame_still_start;
extern IntPropertyRNA rna_Sequence_frame_still_end;
extern IntPropertyRNA rna_Sequence_channel;
extern BoolPropertyRNA rna_Sequence_use_linear_modifiers;
extern EnumPropertyRNA rna_Sequence_blend_type;
extern FloatPropertyRNA rna_Sequence_blend_alpha;
extern FloatPropertyRNA rna_Sequence_effect_fader;
extern BoolPropertyRNA rna_Sequence_use_default_fade;
extern FloatPropertyRNA rna_Sequence_speed_factor;
extern CollectionPropertyRNA rna_Sequence_modifiers;

IntPropertyRNA rna_GammaCrossSequence_input_count;
PointerPropertyRNA rna_GammaCrossSequence_input_1;
PointerPropertyRNA rna_GammaCrossSequence_input_2;

extern FunctionRNA rna_Sequence_update_func;
extern BoolPropertyRNA rna_Sequence_update_data;

extern FunctionRNA rna_Sequence_strip_elem_from_frame_func;
extern IntPropertyRNA rna_Sequence_strip_elem_from_frame_frame;
extern PointerPropertyRNA rna_Sequence_strip_elem_from_frame_elem;

extern FunctionRNA rna_Sequence_swap_func;
extern PointerPropertyRNA rna_Sequence_swap_other;



extern BoolPropertyRNA rna_EffectSequence_use_deinterlace;
extern EnumPropertyRNA rna_EffectSequence_alpha_mode;
extern BoolPropertyRNA rna_EffectSequence_use_flip_x;
extern BoolPropertyRNA rna_EffectSequence_use_flip_y;
extern BoolPropertyRNA rna_EffectSequence_use_float;
extern BoolPropertyRNA rna_EffectSequence_use_reverse_frames;
extern FloatPropertyRNA rna_EffectSequence_color_multiply;
extern FloatPropertyRNA rna_EffectSequence_color_saturation;
extern FloatPropertyRNA rna_EffectSequence_strobe;
extern BoolPropertyRNA rna_EffectSequence_use_translation;
extern PointerPropertyRNA rna_EffectSequence_transform;
extern BoolPropertyRNA rna_EffectSequence_use_crop;
extern PointerPropertyRNA rna_EffectSequence_crop;
extern BoolPropertyRNA rna_EffectSequence_use_proxy;
extern PointerPropertyRNA rna_EffectSequence_proxy;
extern BoolPropertyRNA rna_EffectSequence_use_proxy_custom_directory;
extern BoolPropertyRNA rna_EffectSequence_use_proxy_custom_file;

extern CollectionPropertyRNA rna_Sequence_rna_properties;
extern PointerPropertyRNA rna_Sequence_rna_type;
extern StringPropertyRNA rna_Sequence_name;
extern EnumPropertyRNA rna_Sequence_type;
extern BoolPropertyRNA rna_Sequence_select;
extern BoolPropertyRNA rna_Sequence_select_left_handle;
extern BoolPropertyRNA rna_Sequence_select_right_handle;
extern BoolPropertyRNA rna_Sequence_mute;
extern BoolPropertyRNA rna_Sequence_lock;
extern IntPropertyRNA rna_Sequence_frame_final_duration;
extern IntPropertyRNA rna_Sequence_frame_duration;
extern IntPropertyRNA rna_Sequence_frame_start;
extern IntPropertyRNA rna_Sequence_frame_final_start;
extern IntPropertyRNA rna_Sequence_frame_final_end;
extern IntPropertyRNA rna_Sequence_frame_offset_start;
extern IntPropertyRNA rna_Sequence_frame_offset_end;
extern IntPropertyRNA rna_Sequence_frame_still_start;
extern IntPropertyRNA rna_Sequence_frame_still_end;
extern IntPropertyRNA rna_Sequence_channel;
extern BoolPropertyRNA rna_Sequence_use_linear_modifiers;
extern EnumPropertyRNA rna_Sequence_blend_type;
extern FloatPropertyRNA rna_Sequence_blend_alpha;
extern FloatPropertyRNA rna_Sequence_effect_fader;
extern BoolPropertyRNA rna_Sequence_use_default_fade;
extern FloatPropertyRNA rna_Sequence_speed_factor;
extern CollectionPropertyRNA rna_Sequence_modifiers;

IntPropertyRNA rna_GlowSequence_input_count;
PointerPropertyRNA rna_GlowSequence_input_1;
FloatPropertyRNA rna_GlowSequence_threshold;
FloatPropertyRNA rna_GlowSequence_clamp;
FloatPropertyRNA rna_GlowSequence_boost_factor;
FloatPropertyRNA rna_GlowSequence_blur_radius;
IntPropertyRNA rna_GlowSequence_quality;
BoolPropertyRNA rna_GlowSequence_use_only_boost;

extern FunctionRNA rna_Sequence_update_func;
extern BoolPropertyRNA rna_Sequence_update_data;

extern FunctionRNA rna_Sequence_strip_elem_from_frame_func;
extern IntPropertyRNA rna_Sequence_strip_elem_from_frame_frame;
extern PointerPropertyRNA rna_Sequence_strip_elem_from_frame_elem;

extern FunctionRNA rna_Sequence_swap_func;
extern PointerPropertyRNA rna_Sequence_swap_other;



extern BoolPropertyRNA rna_EffectSequence_use_deinterlace;
extern EnumPropertyRNA rna_EffectSequence_alpha_mode;
extern BoolPropertyRNA rna_EffectSequence_use_flip_x;
extern BoolPropertyRNA rna_EffectSequence_use_flip_y;
extern BoolPropertyRNA rna_EffectSequence_use_float;
extern BoolPropertyRNA rna_EffectSequence_use_reverse_frames;
extern FloatPropertyRNA rna_EffectSequence_color_multiply;
extern FloatPropertyRNA rna_EffectSequence_color_saturation;
extern FloatPropertyRNA rna_EffectSequence_strobe;
extern BoolPropertyRNA rna_EffectSequence_use_translation;
extern PointerPropertyRNA rna_EffectSequence_transform;
extern BoolPropertyRNA rna_EffectSequence_use_crop;
extern PointerPropertyRNA rna_EffectSequence_crop;
extern BoolPropertyRNA rna_EffectSequence_use_proxy;
extern PointerPropertyRNA rna_EffectSequence_proxy;
extern BoolPropertyRNA rna_EffectSequence_use_proxy_custom_directory;
extern BoolPropertyRNA rna_EffectSequence_use_proxy_custom_file;

extern CollectionPropertyRNA rna_Sequence_rna_properties;
extern PointerPropertyRNA rna_Sequence_rna_type;
extern StringPropertyRNA rna_Sequence_name;
extern EnumPropertyRNA rna_Sequence_type;
extern BoolPropertyRNA rna_Sequence_select;
extern BoolPropertyRNA rna_Sequence_select_left_handle;
extern BoolPropertyRNA rna_Sequence_select_right_handle;
extern BoolPropertyRNA rna_Sequence_mute;
extern BoolPropertyRNA rna_Sequence_lock;
extern IntPropertyRNA rna_Sequence_frame_final_duration;
extern IntPropertyRNA rna_Sequence_frame_duration;
extern IntPropertyRNA rna_Sequence_frame_start;
extern IntPropertyRNA rna_Sequence_frame_final_start;
extern IntPropertyRNA rna_Sequence_frame_final_end;
extern IntPropertyRNA rna_Sequence_frame_offset_start;
extern IntPropertyRNA rna_Sequence_frame_offset_end;
extern IntPropertyRNA rna_Sequence_frame_still_start;
extern IntPropertyRNA rna_Sequence_frame_still_end;
extern IntPropertyRNA rna_Sequence_channel;
extern BoolPropertyRNA rna_Sequence_use_linear_modifiers;
extern EnumPropertyRNA rna_Sequence_blend_type;
extern FloatPropertyRNA rna_Sequence_blend_alpha;
extern FloatPropertyRNA rna_Sequence_effect_fader;
extern BoolPropertyRNA rna_Sequence_use_default_fade;
extern FloatPropertyRNA rna_Sequence_speed_factor;
extern CollectionPropertyRNA rna_Sequence_modifiers;

IntPropertyRNA rna_MulticamSequence_input_count;
IntPropertyRNA rna_MulticamSequence_multicam_source;
IntPropertyRNA rna_MulticamSequence_animation_offset_start;
IntPropertyRNA rna_MulticamSequence_animation_offset_end;

extern FunctionRNA rna_Sequence_update_func;
extern BoolPropertyRNA rna_Sequence_update_data;

extern FunctionRNA rna_Sequence_strip_elem_from_frame_func;
extern IntPropertyRNA rna_Sequence_strip_elem_from_frame_frame;
extern PointerPropertyRNA rna_Sequence_strip_elem_from_frame_elem;

extern FunctionRNA rna_Sequence_swap_func;
extern PointerPropertyRNA rna_Sequence_swap_other;



extern BoolPropertyRNA rna_EffectSequence_use_deinterlace;
extern EnumPropertyRNA rna_EffectSequence_alpha_mode;
extern BoolPropertyRNA rna_EffectSequence_use_flip_x;
extern BoolPropertyRNA rna_EffectSequence_use_flip_y;
extern BoolPropertyRNA rna_EffectSequence_use_float;
extern BoolPropertyRNA rna_EffectSequence_use_reverse_frames;
extern FloatPropertyRNA rna_EffectSequence_color_multiply;
extern FloatPropertyRNA rna_EffectSequence_color_saturation;
extern FloatPropertyRNA rna_EffectSequence_strobe;
extern BoolPropertyRNA rna_EffectSequence_use_translation;
extern PointerPropertyRNA rna_EffectSequence_transform;
extern BoolPropertyRNA rna_EffectSequence_use_crop;
extern PointerPropertyRNA rna_EffectSequence_crop;
extern BoolPropertyRNA rna_EffectSequence_use_proxy;
extern PointerPropertyRNA rna_EffectSequence_proxy;
extern BoolPropertyRNA rna_EffectSequence_use_proxy_custom_directory;
extern BoolPropertyRNA rna_EffectSequence_use_proxy_custom_file;

extern CollectionPropertyRNA rna_Sequence_rna_properties;
extern PointerPropertyRNA rna_Sequence_rna_type;
extern StringPropertyRNA rna_Sequence_name;
extern EnumPropertyRNA rna_Sequence_type;
extern BoolPropertyRNA rna_Sequence_select;
extern BoolPropertyRNA rna_Sequence_select_left_handle;
extern BoolPropertyRNA rna_Sequence_select_right_handle;
extern BoolPropertyRNA rna_Sequence_mute;
extern BoolPropertyRNA rna_Sequence_lock;
extern IntPropertyRNA rna_Sequence_frame_final_duration;
extern IntPropertyRNA rna_Sequence_frame_duration;
extern IntPropertyRNA rna_Sequence_frame_start;
extern IntPropertyRNA rna_Sequence_frame_final_start;
extern IntPropertyRNA rna_Sequence_frame_final_end;
extern IntPropertyRNA rna_Sequence_frame_offset_start;
extern IntPropertyRNA rna_Sequence_frame_offset_end;
extern IntPropertyRNA rna_Sequence_frame_still_start;
extern IntPropertyRNA rna_Sequence_frame_still_end;
extern IntPropertyRNA rna_Sequence_channel;
extern BoolPropertyRNA rna_Sequence_use_linear_modifiers;
extern EnumPropertyRNA rna_Sequence_blend_type;
extern FloatPropertyRNA rna_Sequence_blend_alpha;
extern FloatPropertyRNA rna_Sequence_effect_fader;
extern BoolPropertyRNA rna_Sequence_use_default_fade;
extern FloatPropertyRNA rna_Sequence_speed_factor;
extern CollectionPropertyRNA rna_Sequence_modifiers;

IntPropertyRNA rna_MultiplySequence_input_count;
PointerPropertyRNA rna_MultiplySequence_input_1;
PointerPropertyRNA rna_MultiplySequence_input_2;

extern FunctionRNA rna_Sequence_update_func;
extern BoolPropertyRNA rna_Sequence_update_data;

extern FunctionRNA rna_Sequence_strip_elem_from_frame_func;
extern IntPropertyRNA rna_Sequence_strip_elem_from_frame_frame;
extern PointerPropertyRNA rna_Sequence_strip_elem_from_frame_elem;

extern FunctionRNA rna_Sequence_swap_func;
extern PointerPropertyRNA rna_Sequence_swap_other;



extern BoolPropertyRNA rna_EffectSequence_use_deinterlace;
extern EnumPropertyRNA rna_EffectSequence_alpha_mode;
extern BoolPropertyRNA rna_EffectSequence_use_flip_x;
extern BoolPropertyRNA rna_EffectSequence_use_flip_y;
extern BoolPropertyRNA rna_EffectSequence_use_float;
extern BoolPropertyRNA rna_EffectSequence_use_reverse_frames;
extern FloatPropertyRNA rna_EffectSequence_color_multiply;
extern FloatPropertyRNA rna_EffectSequence_color_saturation;
extern FloatPropertyRNA rna_EffectSequence_strobe;
extern BoolPropertyRNA rna_EffectSequence_use_translation;
extern PointerPropertyRNA rna_EffectSequence_transform;
extern BoolPropertyRNA rna_EffectSequence_use_crop;
extern PointerPropertyRNA rna_EffectSequence_crop;
extern BoolPropertyRNA rna_EffectSequence_use_proxy;
extern PointerPropertyRNA rna_EffectSequence_proxy;
extern BoolPropertyRNA rna_EffectSequence_use_proxy_custom_directory;
extern BoolPropertyRNA rna_EffectSequence_use_proxy_custom_file;

extern CollectionPropertyRNA rna_Sequence_rna_properties;
extern PointerPropertyRNA rna_Sequence_rna_type;
extern StringPropertyRNA rna_Sequence_name;
extern EnumPropertyRNA rna_Sequence_type;
extern BoolPropertyRNA rna_Sequence_select;
extern BoolPropertyRNA rna_Sequence_select_left_handle;
extern BoolPropertyRNA rna_Sequence_select_right_handle;
extern BoolPropertyRNA rna_Sequence_mute;
extern BoolPropertyRNA rna_Sequence_lock;
extern IntPropertyRNA rna_Sequence_frame_final_duration;
extern IntPropertyRNA rna_Sequence_frame_duration;
extern IntPropertyRNA rna_Sequence_frame_start;
extern IntPropertyRNA rna_Sequence_frame_final_start;
extern IntPropertyRNA rna_Sequence_frame_final_end;
extern IntPropertyRNA rna_Sequence_frame_offset_start;
extern IntPropertyRNA rna_Sequence_frame_offset_end;
extern IntPropertyRNA rna_Sequence_frame_still_start;
extern IntPropertyRNA rna_Sequence_frame_still_end;
extern IntPropertyRNA rna_Sequence_channel;
extern BoolPropertyRNA rna_Sequence_use_linear_modifiers;
extern EnumPropertyRNA rna_Sequence_blend_type;
extern FloatPropertyRNA rna_Sequence_blend_alpha;
extern FloatPropertyRNA rna_Sequence_effect_fader;
extern BoolPropertyRNA rna_Sequence_use_default_fade;
extern FloatPropertyRNA rna_Sequence_speed_factor;
extern CollectionPropertyRNA rna_Sequence_modifiers;

IntPropertyRNA rna_OverDropSequence_input_count;
PointerPropertyRNA rna_OverDropSequence_input_1;
PointerPropertyRNA rna_OverDropSequence_input_2;

extern FunctionRNA rna_Sequence_update_func;
extern BoolPropertyRNA rna_Sequence_update_data;

extern FunctionRNA rna_Sequence_strip_elem_from_frame_func;
extern IntPropertyRNA rna_Sequence_strip_elem_from_frame_frame;
extern PointerPropertyRNA rna_Sequence_strip_elem_from_frame_elem;

extern FunctionRNA rna_Sequence_swap_func;
extern PointerPropertyRNA rna_Sequence_swap_other;



extern BoolPropertyRNA rna_EffectSequence_use_deinterlace;
extern EnumPropertyRNA rna_EffectSequence_alpha_mode;
extern BoolPropertyRNA rna_EffectSequence_use_flip_x;
extern BoolPropertyRNA rna_EffectSequence_use_flip_y;
extern BoolPropertyRNA rna_EffectSequence_use_float;
extern BoolPropertyRNA rna_EffectSequence_use_reverse_frames;
extern FloatPropertyRNA rna_EffectSequence_color_multiply;
extern FloatPropertyRNA rna_EffectSequence_color_saturation;
extern FloatPropertyRNA rna_EffectSequence_strobe;
extern BoolPropertyRNA rna_EffectSequence_use_translation;
extern PointerPropertyRNA rna_EffectSequence_transform;
extern BoolPropertyRNA rna_EffectSequence_use_crop;
extern PointerPropertyRNA rna_EffectSequence_crop;
extern BoolPropertyRNA rna_EffectSequence_use_proxy;
extern PointerPropertyRNA rna_EffectSequence_proxy;
extern BoolPropertyRNA rna_EffectSequence_use_proxy_custom_directory;
extern BoolPropertyRNA rna_EffectSequence_use_proxy_custom_file;

extern CollectionPropertyRNA rna_Sequence_rna_properties;
extern PointerPropertyRNA rna_Sequence_rna_type;
extern StringPropertyRNA rna_Sequence_name;
extern EnumPropertyRNA rna_Sequence_type;
extern BoolPropertyRNA rna_Sequence_select;
extern BoolPropertyRNA rna_Sequence_select_left_handle;
extern BoolPropertyRNA rna_Sequence_select_right_handle;
extern BoolPropertyRNA rna_Sequence_mute;
extern BoolPropertyRNA rna_Sequence_lock;
extern IntPropertyRNA rna_Sequence_frame_final_duration;
extern IntPropertyRNA rna_Sequence_frame_duration;
extern IntPropertyRNA rna_Sequence_frame_start;
extern IntPropertyRNA rna_Sequence_frame_final_start;
extern IntPropertyRNA rna_Sequence_frame_final_end;
extern IntPropertyRNA rna_Sequence_frame_offset_start;
extern IntPropertyRNA rna_Sequence_frame_offset_end;
extern IntPropertyRNA rna_Sequence_frame_still_start;
extern IntPropertyRNA rna_Sequence_frame_still_end;
extern IntPropertyRNA rna_Sequence_channel;
extern BoolPropertyRNA rna_Sequence_use_linear_modifiers;
extern EnumPropertyRNA rna_Sequence_blend_type;
extern FloatPropertyRNA rna_Sequence_blend_alpha;
extern FloatPropertyRNA rna_Sequence_effect_fader;
extern BoolPropertyRNA rna_Sequence_use_default_fade;
extern FloatPropertyRNA rna_Sequence_speed_factor;
extern CollectionPropertyRNA rna_Sequence_modifiers;

IntPropertyRNA rna_SpeedControlSequence_input_count;
PointerPropertyRNA rna_SpeedControlSequence_input_1;
FloatPropertyRNA rna_SpeedControlSequence_multiply_speed;
BoolPropertyRNA rna_SpeedControlSequence_use_as_speed;
BoolPropertyRNA rna_SpeedControlSequence_scale_to_length;

extern FunctionRNA rna_Sequence_update_func;
extern BoolPropertyRNA rna_Sequence_update_data;

extern FunctionRNA rna_Sequence_strip_elem_from_frame_func;
extern IntPropertyRNA rna_Sequence_strip_elem_from_frame_frame;
extern PointerPropertyRNA rna_Sequence_strip_elem_from_frame_elem;

extern FunctionRNA rna_Sequence_swap_func;
extern PointerPropertyRNA rna_Sequence_swap_other;



extern BoolPropertyRNA rna_EffectSequence_use_deinterlace;
extern EnumPropertyRNA rna_EffectSequence_alpha_mode;
extern BoolPropertyRNA rna_EffectSequence_use_flip_x;
extern BoolPropertyRNA rna_EffectSequence_use_flip_y;
extern BoolPropertyRNA rna_EffectSequence_use_float;
extern BoolPropertyRNA rna_EffectSequence_use_reverse_frames;
extern FloatPropertyRNA rna_EffectSequence_color_multiply;
extern FloatPropertyRNA rna_EffectSequence_color_saturation;
extern FloatPropertyRNA rna_EffectSequence_strobe;
extern BoolPropertyRNA rna_EffectSequence_use_translation;
extern PointerPropertyRNA rna_EffectSequence_transform;
extern BoolPropertyRNA rna_EffectSequence_use_crop;
extern PointerPropertyRNA rna_EffectSequence_crop;
extern BoolPropertyRNA rna_EffectSequence_use_proxy;
extern PointerPropertyRNA rna_EffectSequence_proxy;
extern BoolPropertyRNA rna_EffectSequence_use_proxy_custom_directory;
extern BoolPropertyRNA rna_EffectSequence_use_proxy_custom_file;

extern CollectionPropertyRNA rna_Sequence_rna_properties;
extern PointerPropertyRNA rna_Sequence_rna_type;
extern StringPropertyRNA rna_Sequence_name;
extern EnumPropertyRNA rna_Sequence_type;
extern BoolPropertyRNA rna_Sequence_select;
extern BoolPropertyRNA rna_Sequence_select_left_handle;
extern BoolPropertyRNA rna_Sequence_select_right_handle;
extern BoolPropertyRNA rna_Sequence_mute;
extern BoolPropertyRNA rna_Sequence_lock;
extern IntPropertyRNA rna_Sequence_frame_final_duration;
extern IntPropertyRNA rna_Sequence_frame_duration;
extern IntPropertyRNA rna_Sequence_frame_start;
extern IntPropertyRNA rna_Sequence_frame_final_start;
extern IntPropertyRNA rna_Sequence_frame_final_end;
extern IntPropertyRNA rna_Sequence_frame_offset_start;
extern IntPropertyRNA rna_Sequence_frame_offset_end;
extern IntPropertyRNA rna_Sequence_frame_still_start;
extern IntPropertyRNA rna_Sequence_frame_still_end;
extern IntPropertyRNA rna_Sequence_channel;
extern BoolPropertyRNA rna_Sequence_use_linear_modifiers;
extern EnumPropertyRNA rna_Sequence_blend_type;
extern FloatPropertyRNA rna_Sequence_blend_alpha;
extern FloatPropertyRNA rna_Sequence_effect_fader;
extern BoolPropertyRNA rna_Sequence_use_default_fade;
extern FloatPropertyRNA rna_Sequence_speed_factor;
extern CollectionPropertyRNA rna_Sequence_modifiers;

IntPropertyRNA rna_SubtractSequence_input_count;
PointerPropertyRNA rna_SubtractSequence_input_1;
PointerPropertyRNA rna_SubtractSequence_input_2;

extern FunctionRNA rna_Sequence_update_func;
extern BoolPropertyRNA rna_Sequence_update_data;

extern FunctionRNA rna_Sequence_strip_elem_from_frame_func;
extern IntPropertyRNA rna_Sequence_strip_elem_from_frame_frame;
extern PointerPropertyRNA rna_Sequence_strip_elem_from_frame_elem;

extern FunctionRNA rna_Sequence_swap_func;
extern PointerPropertyRNA rna_Sequence_swap_other;



extern BoolPropertyRNA rna_EffectSequence_use_deinterlace;
extern EnumPropertyRNA rna_EffectSequence_alpha_mode;
extern BoolPropertyRNA rna_EffectSequence_use_flip_x;
extern BoolPropertyRNA rna_EffectSequence_use_flip_y;
extern BoolPropertyRNA rna_EffectSequence_use_float;
extern BoolPropertyRNA rna_EffectSequence_use_reverse_frames;
extern FloatPropertyRNA rna_EffectSequence_color_multiply;
extern FloatPropertyRNA rna_EffectSequence_color_saturation;
extern FloatPropertyRNA rna_EffectSequence_strobe;
extern BoolPropertyRNA rna_EffectSequence_use_translation;
extern PointerPropertyRNA rna_EffectSequence_transform;
extern BoolPropertyRNA rna_EffectSequence_use_crop;
extern PointerPropertyRNA rna_EffectSequence_crop;
extern BoolPropertyRNA rna_EffectSequence_use_proxy;
extern PointerPropertyRNA rna_EffectSequence_proxy;
extern BoolPropertyRNA rna_EffectSequence_use_proxy_custom_directory;
extern BoolPropertyRNA rna_EffectSequence_use_proxy_custom_file;

extern CollectionPropertyRNA rna_Sequence_rna_properties;
extern PointerPropertyRNA rna_Sequence_rna_type;
extern StringPropertyRNA rna_Sequence_name;
extern EnumPropertyRNA rna_Sequence_type;
extern BoolPropertyRNA rna_Sequence_select;
extern BoolPropertyRNA rna_Sequence_select_left_handle;
extern BoolPropertyRNA rna_Sequence_select_right_handle;
extern BoolPropertyRNA rna_Sequence_mute;
extern BoolPropertyRNA rna_Sequence_lock;
extern IntPropertyRNA rna_Sequence_frame_final_duration;
extern IntPropertyRNA rna_Sequence_frame_duration;
extern IntPropertyRNA rna_Sequence_frame_start;
extern IntPropertyRNA rna_Sequence_frame_final_start;
extern IntPropertyRNA rna_Sequence_frame_final_end;
extern IntPropertyRNA rna_Sequence_frame_offset_start;
extern IntPropertyRNA rna_Sequence_frame_offset_end;
extern IntPropertyRNA rna_Sequence_frame_still_start;
extern IntPropertyRNA rna_Sequence_frame_still_end;
extern IntPropertyRNA rna_Sequence_channel;
extern BoolPropertyRNA rna_Sequence_use_linear_modifiers;
extern EnumPropertyRNA rna_Sequence_blend_type;
extern FloatPropertyRNA rna_Sequence_blend_alpha;
extern FloatPropertyRNA rna_Sequence_effect_fader;
extern BoolPropertyRNA rna_Sequence_use_default_fade;
extern FloatPropertyRNA rna_Sequence_speed_factor;
extern CollectionPropertyRNA rna_Sequence_modifiers;

IntPropertyRNA rna_TransformSequence_input_count;
PointerPropertyRNA rna_TransformSequence_input_1;
FloatPropertyRNA rna_TransformSequence_scale_start_x;
FloatPropertyRNA rna_TransformSequence_scale_start_y;
BoolPropertyRNA rna_TransformSequence_use_uniform_scale;
FloatPropertyRNA rna_TransformSequence_translate_start_x;
FloatPropertyRNA rna_TransformSequence_translate_start_y;
FloatPropertyRNA rna_TransformSequence_rotation_start;
EnumPropertyRNA rna_TransformSequence_translation_unit;
EnumPropertyRNA rna_TransformSequence_interpolation;

extern FunctionRNA rna_Sequence_update_func;
extern BoolPropertyRNA rna_Sequence_update_data;

extern FunctionRNA rna_Sequence_strip_elem_from_frame_func;
extern IntPropertyRNA rna_Sequence_strip_elem_from_frame_frame;
extern PointerPropertyRNA rna_Sequence_strip_elem_from_frame_elem;

extern FunctionRNA rna_Sequence_swap_func;
extern PointerPropertyRNA rna_Sequence_swap_other;



extern BoolPropertyRNA rna_EffectSequence_use_deinterlace;
extern EnumPropertyRNA rna_EffectSequence_alpha_mode;
extern BoolPropertyRNA rna_EffectSequence_use_flip_x;
extern BoolPropertyRNA rna_EffectSequence_use_flip_y;
extern BoolPropertyRNA rna_EffectSequence_use_float;
extern BoolPropertyRNA rna_EffectSequence_use_reverse_frames;
extern FloatPropertyRNA rna_EffectSequence_color_multiply;
extern FloatPropertyRNA rna_EffectSequence_color_saturation;
extern FloatPropertyRNA rna_EffectSequence_strobe;
extern BoolPropertyRNA rna_EffectSequence_use_translation;
extern PointerPropertyRNA rna_EffectSequence_transform;
extern BoolPropertyRNA rna_EffectSequence_use_crop;
extern PointerPropertyRNA rna_EffectSequence_crop;
extern BoolPropertyRNA rna_EffectSequence_use_proxy;
extern PointerPropertyRNA rna_EffectSequence_proxy;
extern BoolPropertyRNA rna_EffectSequence_use_proxy_custom_directory;
extern BoolPropertyRNA rna_EffectSequence_use_proxy_custom_file;

extern CollectionPropertyRNA rna_Sequence_rna_properties;
extern PointerPropertyRNA rna_Sequence_rna_type;
extern StringPropertyRNA rna_Sequence_name;
extern EnumPropertyRNA rna_Sequence_type;
extern BoolPropertyRNA rna_Sequence_select;
extern BoolPropertyRNA rna_Sequence_select_left_handle;
extern BoolPropertyRNA rna_Sequence_select_right_handle;
extern BoolPropertyRNA rna_Sequence_mute;
extern BoolPropertyRNA rna_Sequence_lock;
extern IntPropertyRNA rna_Sequence_frame_final_duration;
extern IntPropertyRNA rna_Sequence_frame_duration;
extern IntPropertyRNA rna_Sequence_frame_start;
extern IntPropertyRNA rna_Sequence_frame_final_start;
extern IntPropertyRNA rna_Sequence_frame_final_end;
extern IntPropertyRNA rna_Sequence_frame_offset_start;
extern IntPropertyRNA rna_Sequence_frame_offset_end;
extern IntPropertyRNA rna_Sequence_frame_still_start;
extern IntPropertyRNA rna_Sequence_frame_still_end;
extern IntPropertyRNA rna_Sequence_channel;
extern BoolPropertyRNA rna_Sequence_use_linear_modifiers;
extern EnumPropertyRNA rna_Sequence_blend_type;
extern FloatPropertyRNA rna_Sequence_blend_alpha;
extern FloatPropertyRNA rna_Sequence_effect_fader;
extern BoolPropertyRNA rna_Sequence_use_default_fade;
extern FloatPropertyRNA rna_Sequence_speed_factor;
extern CollectionPropertyRNA rna_Sequence_modifiers;

IntPropertyRNA rna_WipeSequence_input_count;
PointerPropertyRNA rna_WipeSequence_input_1;
FloatPropertyRNA rna_WipeSequence_blur_width;
FloatPropertyRNA rna_WipeSequence_angle;
EnumPropertyRNA rna_WipeSequence_direction;
EnumPropertyRNA rna_WipeSequence_transition_type;

extern FunctionRNA rna_Sequence_update_func;
extern BoolPropertyRNA rna_Sequence_update_data;

extern FunctionRNA rna_Sequence_strip_elem_from_frame_func;
extern IntPropertyRNA rna_Sequence_strip_elem_from_frame_frame;
extern PointerPropertyRNA rna_Sequence_strip_elem_from_frame_elem;

extern FunctionRNA rna_Sequence_swap_func;
extern PointerPropertyRNA rna_Sequence_swap_other;



extern BoolPropertyRNA rna_EffectSequence_use_deinterlace;
extern EnumPropertyRNA rna_EffectSequence_alpha_mode;
extern BoolPropertyRNA rna_EffectSequence_use_flip_x;
extern BoolPropertyRNA rna_EffectSequence_use_flip_y;
extern BoolPropertyRNA rna_EffectSequence_use_float;
extern BoolPropertyRNA rna_EffectSequence_use_reverse_frames;
extern FloatPropertyRNA rna_EffectSequence_color_multiply;
extern FloatPropertyRNA rna_EffectSequence_color_saturation;
extern FloatPropertyRNA rna_EffectSequence_strobe;
extern BoolPropertyRNA rna_EffectSequence_use_translation;
extern PointerPropertyRNA rna_EffectSequence_transform;
extern BoolPropertyRNA rna_EffectSequence_use_crop;
extern PointerPropertyRNA rna_EffectSequence_crop;
extern BoolPropertyRNA rna_EffectSequence_use_proxy;
extern PointerPropertyRNA rna_EffectSequence_proxy;
extern BoolPropertyRNA rna_EffectSequence_use_proxy_custom_directory;
extern BoolPropertyRNA rna_EffectSequence_use_proxy_custom_file;

extern CollectionPropertyRNA rna_Sequence_rna_properties;
extern PointerPropertyRNA rna_Sequence_rna_type;
extern StringPropertyRNA rna_Sequence_name;
extern EnumPropertyRNA rna_Sequence_type;
extern BoolPropertyRNA rna_Sequence_select;
extern BoolPropertyRNA rna_Sequence_select_left_handle;
extern BoolPropertyRNA rna_Sequence_select_right_handle;
extern BoolPropertyRNA rna_Sequence_mute;
extern BoolPropertyRNA rna_Sequence_lock;
extern IntPropertyRNA rna_Sequence_frame_final_duration;
extern IntPropertyRNA rna_Sequence_frame_duration;
extern IntPropertyRNA rna_Sequence_frame_start;
extern IntPropertyRNA rna_Sequence_frame_final_start;
extern IntPropertyRNA rna_Sequence_frame_final_end;
extern IntPropertyRNA rna_Sequence_frame_offset_start;
extern IntPropertyRNA rna_Sequence_frame_offset_end;
extern IntPropertyRNA rna_Sequence_frame_still_start;
extern IntPropertyRNA rna_Sequence_frame_still_end;
extern IntPropertyRNA rna_Sequence_channel;
extern BoolPropertyRNA rna_Sequence_use_linear_modifiers;
extern EnumPropertyRNA rna_Sequence_blend_type;
extern FloatPropertyRNA rna_Sequence_blend_alpha;
extern FloatPropertyRNA rna_Sequence_effect_fader;
extern BoolPropertyRNA rna_Sequence_use_default_fade;
extern FloatPropertyRNA rna_Sequence_speed_factor;
extern CollectionPropertyRNA rna_Sequence_modifiers;

IntPropertyRNA rna_GaussianBlurSequence_input_count;
PointerPropertyRNA rna_GaussianBlurSequence_input_1;
FloatPropertyRNA rna_GaussianBlurSequence_size_x;
FloatPropertyRNA rna_GaussianBlurSequence_size_y;

extern FunctionRNA rna_Sequence_update_func;
extern BoolPropertyRNA rna_Sequence_update_data;

extern FunctionRNA rna_Sequence_strip_elem_from_frame_func;
extern IntPropertyRNA rna_Sequence_strip_elem_from_frame_frame;
extern PointerPropertyRNA rna_Sequence_strip_elem_from_frame_elem;

extern FunctionRNA rna_Sequence_swap_func;
extern PointerPropertyRNA rna_Sequence_swap_other;



CollectionPropertyRNA rna_SequenceModifier_rna_properties;
PointerPropertyRNA rna_SequenceModifier_rna_type;
StringPropertyRNA rna_SequenceModifier_name;
EnumPropertyRNA rna_SequenceModifier_type;
BoolPropertyRNA rna_SequenceModifier_mute;
BoolPropertyRNA rna_SequenceModifier_show_expanded;
EnumPropertyRNA rna_SequenceModifier_input_mask_type;
PointerPropertyRNA rna_SequenceModifier_input_mask_strip;
PointerPropertyRNA rna_SequenceModifier_input_mask_id;


extern CollectionPropertyRNA rna_SequenceModifier_rna_properties;
extern PointerPropertyRNA rna_SequenceModifier_rna_type;
extern StringPropertyRNA rna_SequenceModifier_name;
extern EnumPropertyRNA rna_SequenceModifier_type;
extern BoolPropertyRNA rna_SequenceModifier_mute;
extern BoolPropertyRNA rna_SequenceModifier_show_expanded;
extern EnumPropertyRNA rna_SequenceModifier_input_mask_type;
extern PointerPropertyRNA rna_SequenceModifier_input_mask_strip;
extern PointerPropertyRNA rna_SequenceModifier_input_mask_id;

PointerPropertyRNA rna_ColorBalanceModifier_color_balance;
FloatPropertyRNA rna_ColorBalanceModifier_color_multiply;


extern CollectionPropertyRNA rna_SequenceModifier_rna_properties;
extern PointerPropertyRNA rna_SequenceModifier_rna_type;
extern StringPropertyRNA rna_SequenceModifier_name;
extern EnumPropertyRNA rna_SequenceModifier_type;
extern BoolPropertyRNA rna_SequenceModifier_mute;
extern BoolPropertyRNA rna_SequenceModifier_show_expanded;
extern EnumPropertyRNA rna_SequenceModifier_input_mask_type;
extern PointerPropertyRNA rna_SequenceModifier_input_mask_strip;
extern PointerPropertyRNA rna_SequenceModifier_input_mask_id;

PointerPropertyRNA rna_CurvesModifier_curve_mapping;


extern CollectionPropertyRNA rna_SequenceModifier_rna_properties;
extern PointerPropertyRNA rna_SequenceModifier_rna_type;
extern StringPropertyRNA rna_SequenceModifier_name;
extern EnumPropertyRNA rna_SequenceModifier_type;
extern BoolPropertyRNA rna_SequenceModifier_mute;
extern BoolPropertyRNA rna_SequenceModifier_show_expanded;
extern EnumPropertyRNA rna_SequenceModifier_input_mask_type;
extern PointerPropertyRNA rna_SequenceModifier_input_mask_strip;
extern PointerPropertyRNA rna_SequenceModifier_input_mask_id;

PointerPropertyRNA rna_HueCorrectModifier_curve_mapping;


extern CollectionPropertyRNA rna_SequenceModifier_rna_properties;
extern PointerPropertyRNA rna_SequenceModifier_rna_type;
extern StringPropertyRNA rna_SequenceModifier_name;
extern EnumPropertyRNA rna_SequenceModifier_type;
extern BoolPropertyRNA rna_SequenceModifier_mute;
extern BoolPropertyRNA rna_SequenceModifier_show_expanded;
extern EnumPropertyRNA rna_SequenceModifier_input_mask_type;
extern PointerPropertyRNA rna_SequenceModifier_input_mask_strip;
extern PointerPropertyRNA rna_SequenceModifier_input_mask_id;

FloatPropertyRNA rna_BrightContrastModifier_bright;
FloatPropertyRNA rna_BrightContrastModifier_contrast;

static PointerRNA SequenceColorBalanceData_rna_properties_get(CollectionPropertyIterator *iter)
{
	return rna_builtin_properties_get(iter);
}

void SequenceColorBalanceData_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

	memset(iter, 0, sizeof(*iter));
	iter->parent = *ptr;
	iter->prop = (PropertyRNA *)&rna_SequenceColorBalanceData_rna_properties;

	rna_builtin_properties_begin(iter, ptr);

	if (iter->valid)
		iter->ptr = SequenceColorBalanceData_rna_properties_get(iter);
}

void SequenceColorBalanceData_rna_properties_next(CollectionPropertyIterator *iter)
{
	rna_builtin_properties_next(iter);

	if (iter->valid)
		iter->ptr = SequenceColorBalanceData_rna_properties_get(iter);
}

void SequenceColorBalanceData_rna_properties_end(CollectionPropertyIterator *iter)
{
	rna_iterator_listbase_end(iter);
}

int SequenceColorBalanceData_rna_properties_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
	return rna_builtin_properties_lookup_string(ptr, key, r_ptr);
}

PointerRNA SequenceColorBalanceData_rna_type_get(PointerRNA *ptr)
{
	return rna_builtin_type_get(ptr);
}

void SequenceColorBalanceData_lift_get(PointerRNA *ptr, float values[3])
{
	StripColorBalance *data = (StripColorBalance *)(ptr->data);
	unsigned int i;

	for (i = 0; i < 3; i++) {
		values[i] = (float)(((float *)data->lift)[i]);
	}
}

void SequenceColorBalanceData_lift_set(PointerRNA *ptr, const float values[3])
{
	StripColorBalance *data = (StripColorBalance *)(ptr->data);
	unsigned int i;

	for (i = 0; i < 3; i++) {
		((float *)data->lift)[i] = CLAMPIS(values[i], 0.0f, FLT_MAX);
	}
}

void SequenceColorBalanceData_gamma_get(PointerRNA *ptr, float values[3])
{
	StripColorBalance *data = (StripColorBalance *)(ptr->data);
	unsigned int i;

	for (i = 0; i < 3; i++) {
		values[i] = (float)(((float *)data->gamma)[i]);
	}
}

void SequenceColorBalanceData_gamma_set(PointerRNA *ptr, const float values[3])
{
	StripColorBalance *data = (StripColorBalance *)(ptr->data);
	unsigned int i;

	for (i = 0; i < 3; i++) {
		((float *)data->gamma)[i] = CLAMPIS(values[i], 0.0f, FLT_MAX);
	}
}

void SequenceColorBalanceData_gain_get(PointerRNA *ptr, float values[3])
{
	StripColorBalance *data = (StripColorBalance *)(ptr->data);
	unsigned int i;

	for (i = 0; i < 3; i++) {
		values[i] = (float)(((float *)data->gain)[i]);
	}
}

void SequenceColorBalanceData_gain_set(PointerRNA *ptr, const float values[3])
{
	StripColorBalance *data = (StripColorBalance *)(ptr->data);
	unsigned int i;

	for (i = 0; i < 3; i++) {
		((float *)data->gain)[i] = CLAMPIS(values[i], 0.0f, FLT_MAX);
	}
}

int SequenceColorBalanceData_invert_gain_get(PointerRNA *ptr)
{
	StripColorBalance *data = (StripColorBalance *)(ptr->data);
	return (((data->flag) & 1) != 0);
}

void SequenceColorBalanceData_invert_gain_set(PointerRNA *ptr, int value)
{
	StripColorBalance *data = (StripColorBalance *)(ptr->data);
	if (value) data->flag |= 1;
	else data->flag &= ~1;
}

int SequenceColorBalanceData_invert_gamma_get(PointerRNA *ptr)
{
	StripColorBalance *data = (StripColorBalance *)(ptr->data);
	return (((data->flag) & 2) != 0);
}

void SequenceColorBalanceData_invert_gamma_set(PointerRNA *ptr, int value)
{
	StripColorBalance *data = (StripColorBalance *)(ptr->data);
	if (value) data->flag |= 2;
	else data->flag &= ~2;
}

int SequenceColorBalanceData_invert_lift_get(PointerRNA *ptr)
{
	StripColorBalance *data = (StripColorBalance *)(ptr->data);
	return (((data->flag) & 4) != 0);
}

void SequenceColorBalanceData_invert_lift_set(PointerRNA *ptr, int value)
{
	StripColorBalance *data = (StripColorBalance *)(ptr->data);
	if (value) data->flag |= 4;
	else data->flag &= ~4;
}

static PointerRNA SequenceElement_rna_properties_get(CollectionPropertyIterator *iter)
{
	return rna_builtin_properties_get(iter);
}

void SequenceElement_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

	memset(iter, 0, sizeof(*iter));
	iter->parent = *ptr;
	iter->prop = (PropertyRNA *)&rna_SequenceElement_rna_properties;

	rna_builtin_properties_begin(iter, ptr);

	if (iter->valid)
		iter->ptr = SequenceElement_rna_properties_get(iter);
}

void SequenceElement_rna_properties_next(CollectionPropertyIterator *iter)
{
	rna_builtin_properties_next(iter);

	if (iter->valid)
		iter->ptr = SequenceElement_rna_properties_get(iter);
}

void SequenceElement_rna_properties_end(CollectionPropertyIterator *iter)
{
	rna_iterator_listbase_end(iter);
}

int SequenceElement_rna_properties_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
	return rna_builtin_properties_lookup_string(ptr, key, r_ptr);
}

PointerRNA SequenceElement_rna_type_get(PointerRNA *ptr)
{
	return rna_builtin_type_get(ptr);
}

void SequenceElement_filename_get(PointerRNA *ptr, char *value)
{
	StripElem *data = (StripElem *)(ptr->data);
	BLI_strncpy(value, data->name, 256);
}

int SequenceElement_filename_length(PointerRNA *ptr)
{
	StripElem *data = (StripElem *)(ptr->data);
	return strlen(data->name);
}

void SequenceElement_filename_set(PointerRNA *ptr, const char *value)
{
	StripElem *data = (StripElem *)(ptr->data);
	BLI_strncpy(data->name, value, 256);
}

int SequenceElement_orig_width_get(PointerRNA *ptr)
{
	StripElem *data = (StripElem *)(ptr->data);
	return (int)(data->orig_width);
}

int SequenceElement_orig_height_get(PointerRNA *ptr)
{
	StripElem *data = (StripElem *)(ptr->data);
	return (int)(data->orig_height);
}

static PointerRNA SequenceProxy_rna_properties_get(CollectionPropertyIterator *iter)
{
	return rna_builtin_properties_get(iter);
}

void SequenceProxy_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

	memset(iter, 0, sizeof(*iter));
	iter->parent = *ptr;
	iter->prop = (PropertyRNA *)&rna_SequenceProxy_rna_properties;

	rna_builtin_properties_begin(iter, ptr);

	if (iter->valid)
		iter->ptr = SequenceProxy_rna_properties_get(iter);
}

void SequenceProxy_rna_properties_next(CollectionPropertyIterator *iter)
{
	rna_builtin_properties_next(iter);

	if (iter->valid)
		iter->ptr = SequenceProxy_rna_properties_get(iter);
}

void SequenceProxy_rna_properties_end(CollectionPropertyIterator *iter)
{
	rna_iterator_listbase_end(iter);
}

int SequenceProxy_rna_properties_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
	return rna_builtin_properties_lookup_string(ptr, key, r_ptr);
}

PointerRNA SequenceProxy_rna_type_get(PointerRNA *ptr)
{
	return rna_builtin_type_get(ptr);
}

void SequenceProxy_directory_get(PointerRNA *ptr, char *value)
{
	StripProxy *data = (StripProxy *)(ptr->data);
	BLI_strncpy(value, data->dir, 768);
}

int SequenceProxy_directory_length(PointerRNA *ptr)
{
	StripProxy *data = (StripProxy *)(ptr->data);
	return strlen(data->dir);
}

void SequenceProxy_directory_set(PointerRNA *ptr, const char *value)
{
	StripProxy *data = (StripProxy *)(ptr->data);
	BLI_strncpy(data->dir, value, 768);
}

void SequenceProxy_filepath_get(PointerRNA *ptr, char *value)
{
	rna_Sequence_proxy_filepath_get(ptr, value);
}

int SequenceProxy_filepath_length(PointerRNA *ptr)
{
	return rna_Sequence_proxy_filepath_length(ptr);
}

void SequenceProxy_filepath_set(PointerRNA *ptr, const char *value)
{
	rna_Sequence_proxy_filepath_set(ptr, value);
}

int SequenceProxy_build_25_get(PointerRNA *ptr)
{
	StripProxy *data = (StripProxy *)(ptr->data);
	return (((data->build_size_flags) & 1) != 0);
}

void SequenceProxy_build_25_set(PointerRNA *ptr, int value)
{
	StripProxy *data = (StripProxy *)(ptr->data);
	if (value) data->build_size_flags |= 1;
	else data->build_size_flags &= ~1;
}

int SequenceProxy_build_50_get(PointerRNA *ptr)
{
	StripProxy *data = (StripProxy *)(ptr->data);
	return (((data->build_size_flags) & 2) != 0);
}

void SequenceProxy_build_50_set(PointerRNA *ptr, int value)
{
	StripProxy *data = (StripProxy *)(ptr->data);
	if (value) data->build_size_flags |= 2;
	else data->build_size_flags &= ~2;
}

int SequenceProxy_build_75_get(PointerRNA *ptr)
{
	StripProxy *data = (StripProxy *)(ptr->data);
	return (((data->build_size_flags) & 4) != 0);
}

void SequenceProxy_build_75_set(PointerRNA *ptr, int value)
{
	StripProxy *data = (StripProxy *)(ptr->data);
	if (value) data->build_size_flags |= 4;
	else data->build_size_flags &= ~4;
}

int SequenceProxy_build_100_get(PointerRNA *ptr)
{
	StripProxy *data = (StripProxy *)(ptr->data);
	return (((data->build_size_flags) & 8) != 0);
}

void SequenceProxy_build_100_set(PointerRNA *ptr, int value)
{
	StripProxy *data = (StripProxy *)(ptr->data);
	if (value) data->build_size_flags |= 8;
	else data->build_size_flags &= ~8;
}

int SequenceProxy_build_record_run_get(PointerRNA *ptr)
{
	StripProxy *data = (StripProxy *)(ptr->data);
	return (((data->build_tc_flags) & 1) != 0);
}

void SequenceProxy_build_record_run_set(PointerRNA *ptr, int value)
{
	StripProxy *data = (StripProxy *)(ptr->data);
	if (value) data->build_tc_flags |= 1;
	else data->build_tc_flags &= ~1;
}

int SequenceProxy_build_free_run_get(PointerRNA *ptr)
{
	StripProxy *data = (StripProxy *)(ptr->data);
	return (((data->build_tc_flags) & 2) != 0);
}

void SequenceProxy_build_free_run_set(PointerRNA *ptr, int value)
{
	StripProxy *data = (StripProxy *)(ptr->data);
	if (value) data->build_tc_flags |= 2;
	else data->build_tc_flags &= ~2;
}

int SequenceProxy_build_free_run_rec_date_get(PointerRNA *ptr)
{
	StripProxy *data = (StripProxy *)(ptr->data);
	return (((data->build_tc_flags) & 4) != 0);
}

void SequenceProxy_build_free_run_rec_date_set(PointerRNA *ptr, int value)
{
	StripProxy *data = (StripProxy *)(ptr->data);
	if (value) data->build_tc_flags |= 4;
	else data->build_tc_flags &= ~4;
}

int SequenceProxy_quality_get(PointerRNA *ptr)
{
	StripProxy *data = (StripProxy *)(ptr->data);
	return (int)(data->quality);
}

void SequenceProxy_quality_set(PointerRNA *ptr, int value)
{
	StripProxy *data = (StripProxy *)(ptr->data);
	data->quality = CLAMPIS(value, 0, 32767);
}

int SequenceProxy_timecode_get(PointerRNA *ptr)
{
	StripProxy *data = (StripProxy *)(ptr->data);
	return (int)(data->tc);
}

void SequenceProxy_timecode_set(PointerRNA *ptr, int value)
{
	StripProxy *data = (StripProxy *)(ptr->data);
	data->tc = value;
}

static PointerRNA SequenceCrop_rna_properties_get(CollectionPropertyIterator *iter)
{
	return rna_builtin_properties_get(iter);
}

void SequenceCrop_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

	memset(iter, 0, sizeof(*iter));
	iter->parent = *ptr;
	iter->prop = (PropertyRNA *)&rna_SequenceCrop_rna_properties;

	rna_builtin_properties_begin(iter, ptr);

	if (iter->valid)
		iter->ptr = SequenceCrop_rna_properties_get(iter);
}

void SequenceCrop_rna_properties_next(CollectionPropertyIterator *iter)
{
	rna_builtin_properties_next(iter);

	if (iter->valid)
		iter->ptr = SequenceCrop_rna_properties_get(iter);
}

void SequenceCrop_rna_properties_end(CollectionPropertyIterator *iter)
{
	rna_iterator_listbase_end(iter);
}

int SequenceCrop_rna_properties_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
	return rna_builtin_properties_lookup_string(ptr, key, r_ptr);
}

PointerRNA SequenceCrop_rna_type_get(PointerRNA *ptr)
{
	return rna_builtin_type_get(ptr);
}

int SequenceCrop_max_y_get(PointerRNA *ptr)
{
	StripCrop *data = (StripCrop *)(ptr->data);
	return (int)(data->top);
}

void SequenceCrop_max_y_set(PointerRNA *ptr, int value)
{
	StripCrop *data = (StripCrop *)(ptr->data);
	data->top = CLAMPIS(value, 0, INT_MAX);
}

int SequenceCrop_min_y_get(PointerRNA *ptr)
{
	StripCrop *data = (StripCrop *)(ptr->data);
	return (int)(data->bottom);
}

void SequenceCrop_min_y_set(PointerRNA *ptr, int value)
{
	StripCrop *data = (StripCrop *)(ptr->data);
	data->bottom = CLAMPIS(value, 0, INT_MAX);
}

int SequenceCrop_min_x_get(PointerRNA *ptr)
{
	StripCrop *data = (StripCrop *)(ptr->data);
	return (int)(data->left);
}

void SequenceCrop_min_x_set(PointerRNA *ptr, int value)
{
	StripCrop *data = (StripCrop *)(ptr->data);
	data->left = CLAMPIS(value, 0, INT_MAX);
}

int SequenceCrop_max_x_get(PointerRNA *ptr)
{
	StripCrop *data = (StripCrop *)(ptr->data);
	return (int)(data->right);
}

void SequenceCrop_max_x_set(PointerRNA *ptr, int value)
{
	StripCrop *data = (StripCrop *)(ptr->data);
	data->right = CLAMPIS(value, 0, INT_MAX);
}

static PointerRNA SequenceTransform_rna_properties_get(CollectionPropertyIterator *iter)
{
	return rna_builtin_properties_get(iter);
}

void SequenceTransform_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

	memset(iter, 0, sizeof(*iter));
	iter->parent = *ptr;
	iter->prop = (PropertyRNA *)&rna_SequenceTransform_rna_properties;

	rna_builtin_properties_begin(iter, ptr);

	if (iter->valid)
		iter->ptr = SequenceTransform_rna_properties_get(iter);
}

void SequenceTransform_rna_properties_next(CollectionPropertyIterator *iter)
{
	rna_builtin_properties_next(iter);

	if (iter->valid)
		iter->ptr = SequenceTransform_rna_properties_get(iter);
}

void SequenceTransform_rna_properties_end(CollectionPropertyIterator *iter)
{
	rna_iterator_listbase_end(iter);
}

int SequenceTransform_rna_properties_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
	return rna_builtin_properties_lookup_string(ptr, key, r_ptr);
}

PointerRNA SequenceTransform_rna_type_get(PointerRNA *ptr)
{
	return rna_builtin_type_get(ptr);
}

int SequenceTransform_offset_x_get(PointerRNA *ptr)
{
	StripTransform *data = (StripTransform *)(ptr->data);
	return (int)(data->xofs);
}

void SequenceTransform_offset_x_set(PointerRNA *ptr, int value)
{
	StripTransform *data = (StripTransform *)(ptr->data);
	data->xofs = value;
}

int SequenceTransform_offset_y_get(PointerRNA *ptr)
{
	StripTransform *data = (StripTransform *)(ptr->data);
	return (int)(data->yofs);
}

void SequenceTransform_offset_y_set(PointerRNA *ptr, int value)
{
	StripTransform *data = (StripTransform *)(ptr->data);
	data->yofs = value;
}

static PointerRNA Sequence_rna_properties_get(CollectionPropertyIterator *iter)
{
	return rna_builtin_properties_get(iter);
}

void Sequence_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

	memset(iter, 0, sizeof(*iter));
	iter->parent = *ptr;
	iter->prop = (PropertyRNA *)&rna_Sequence_rna_properties;

	rna_builtin_properties_begin(iter, ptr);

	if (iter->valid)
		iter->ptr = Sequence_rna_properties_get(iter);
}

void Sequence_rna_properties_next(CollectionPropertyIterator *iter)
{
	rna_builtin_properties_next(iter);

	if (iter->valid)
		iter->ptr = Sequence_rna_properties_get(iter);
}

void Sequence_rna_properties_end(CollectionPropertyIterator *iter)
{
	rna_iterator_listbase_end(iter);
}

int Sequence_rna_properties_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
	return rna_builtin_properties_lookup_string(ptr, key, r_ptr);
}

PointerRNA Sequence_rna_type_get(PointerRNA *ptr)
{
	return rna_builtin_type_get(ptr);
}

void Sequence_name_get(PointerRNA *ptr, char *value)
{
	rna_Sequence_name_get(ptr, value);
}

int Sequence_name_length(PointerRNA *ptr)
{
	return rna_Sequence_name_length(ptr);
}

void Sequence_name_set(PointerRNA *ptr, const char *value)
{
	rna_Sequence_name_set(ptr, value);
}

int Sequence_type_get(PointerRNA *ptr)
{
	Sequence *data = (Sequence *)(ptr->data);
	return (int)(data->type);
}

int Sequence_select_get(PointerRNA *ptr)
{
	Sequence *data = (Sequence *)(ptr->data);
	return (((data->flag) & 1) != 0);
}

void Sequence_select_set(PointerRNA *ptr, int value)
{
	Sequence *data = (Sequence *)(ptr->data);
	if (value) data->flag |= 1;
	else data->flag &= ~1;
}

int Sequence_select_left_handle_get(PointerRNA *ptr)
{
	Sequence *data = (Sequence *)(ptr->data);
	return (((data->flag) & 2) != 0);
}

void Sequence_select_left_handle_set(PointerRNA *ptr, int value)
{
	Sequence *data = (Sequence *)(ptr->data);
	if (value) data->flag |= 2;
	else data->flag &= ~2;
}

int Sequence_select_right_handle_get(PointerRNA *ptr)
{
	Sequence *data = (Sequence *)(ptr->data);
	return (((data->flag) & 4) != 0);
}

void Sequence_select_right_handle_set(PointerRNA *ptr, int value)
{
	Sequence *data = (Sequence *)(ptr->data);
	if (value) data->flag |= 4;
	else data->flag &= ~4;
}

int Sequence_mute_get(PointerRNA *ptr)
{
	Sequence *data = (Sequence *)(ptr->data);
	return (((data->flag) & 32) != 0);
}

void Sequence_mute_set(PointerRNA *ptr, int value)
{
	Sequence *data = (Sequence *)(ptr->data);
	if (value) data->flag |= 32;
	else data->flag &= ~32;
}

int Sequence_lock_get(PointerRNA *ptr)
{
	Sequence *data = (Sequence *)(ptr->data);
	return (((data->flag) & 16384) != 0);
}

void Sequence_lock_set(PointerRNA *ptr, int value)
{
	Sequence *data = (Sequence *)(ptr->data);
	if (value) data->flag |= 16384;
	else data->flag &= ~16384;
}

int Sequence_frame_final_duration_get(PointerRNA *ptr)
{
	return rna_Sequence_frame_length_get(ptr);
}

void Sequence_frame_final_duration_set(PointerRNA *ptr, int value)
{
	rna_Sequence_frame_length_set(ptr, value);
}

int Sequence_frame_duration_get(PointerRNA *ptr)
{
	Sequence *data = (Sequence *)(ptr->data);
	return (int)(data->len);
}

int Sequence_frame_start_get(PointerRNA *ptr)
{
	Sequence *data = (Sequence *)(ptr->data);
	return (int)(data->start);
}

void Sequence_frame_start_set(PointerRNA *ptr, int value)
{
	rna_Sequence_start_frame_set(ptr, value);
}

int Sequence_frame_final_start_get(PointerRNA *ptr)
{
	Sequence *data = (Sequence *)(ptr->data);
	return (int)(data->startdisp);
}

void Sequence_frame_final_start_set(PointerRNA *ptr, int value)
{
	rna_Sequence_start_frame_final_set(ptr, value);
}

int Sequence_frame_final_end_get(PointerRNA *ptr)
{
	Sequence *data = (Sequence *)(ptr->data);
	return (int)(data->enddisp);
}

void Sequence_frame_final_end_set(PointerRNA *ptr, int value)
{
	rna_Sequence_end_frame_final_set(ptr, value);
}

int Sequence_frame_offset_start_get(PointerRNA *ptr)
{
	Sequence *data = (Sequence *)(ptr->data);
	return (int)(data->startofs);
}

void Sequence_frame_offset_start_set(PointerRNA *ptr, int value)
{
	Sequence *data = (Sequence *)(ptr->data);
	int prop_clamp_min = INT_MIN, prop_clamp_max = INT_MAX, prop_soft_min, prop_soft_max;
	rna_Sequence_frame_offset_range(ptr, &prop_clamp_min, &prop_clamp_max, &prop_soft_min, &prop_soft_max);
	data->startofs = CLAMPIS(value, prop_clamp_min, prop_clamp_max);}

int Sequence_frame_offset_end_get(PointerRNA *ptr)
{
	Sequence *data = (Sequence *)(ptr->data);
	return (int)(data->endofs);
}

void Sequence_frame_offset_end_set(PointerRNA *ptr, int value)
{
	Sequence *data = (Sequence *)(ptr->data);
	int prop_clamp_min = INT_MIN, prop_clamp_max = INT_MAX, prop_soft_min, prop_soft_max;
	rna_Sequence_frame_offset_range(ptr, &prop_clamp_min, &prop_clamp_max, &prop_soft_min, &prop_soft_max);
	data->endofs = CLAMPIS(value, prop_clamp_min, prop_clamp_max);}

int Sequence_frame_still_start_get(PointerRNA *ptr)
{
	Sequence *data = (Sequence *)(ptr->data);
	return (int)(data->startstill);
}

void Sequence_frame_still_start_set(PointerRNA *ptr, int value)
{
	Sequence *data = (Sequence *)(ptr->data);
	data->startstill = CLAMPIS(value, 0, 300000);
}

int Sequence_frame_still_end_get(PointerRNA *ptr)
{
	Sequence *data = (Sequence *)(ptr->data);
	return (int)(data->endstill);
}

void Sequence_frame_still_end_set(PointerRNA *ptr, int value)
{
	Sequence *data = (Sequence *)(ptr->data);
	data->endstill = CLAMPIS(value, 0, 300000);
}

int Sequence_channel_get(PointerRNA *ptr)
{
	Sequence *data = (Sequence *)(ptr->data);
	return (int)(data->machine);
}

void Sequence_channel_set(PointerRNA *ptr, int value)
{
	rna_Sequence_channel_set(ptr, value);
}

int Sequence_use_linear_modifiers_get(PointerRNA *ptr)
{
	Sequence *data = (Sequence *)(ptr->data);
	return (((data->flag) & 8388608) != 0);
}

void Sequence_use_linear_modifiers_set(PointerRNA *ptr, int value)
{
	Sequence *data = (Sequence *)(ptr->data);
	if (value) data->flag |= 8388608;
	else data->flag &= ~8388608;
}

int Sequence_blend_type_get(PointerRNA *ptr)
{
	Sequence *data = (Sequence *)(ptr->data);
	return (int)(data->blend_mode);
}

void Sequence_blend_type_set(PointerRNA *ptr, int value)
{
	Sequence *data = (Sequence *)(ptr->data);
	data->blend_mode = value;
}

float Sequence_blend_alpha_get(PointerRNA *ptr)
{
	return rna_Sequence_opacity_get(ptr);
}

void Sequence_blend_alpha_set(PointerRNA *ptr, float value)
{
	rna_Sequence_opacity_set(ptr, value);
}

float Sequence_effect_fader_get(PointerRNA *ptr)
{
	Sequence *data = (Sequence *)(ptr->data);
	return (float)(data->effect_fader);
}

void Sequence_effect_fader_set(PointerRNA *ptr, float value)
{
	Sequence *data = (Sequence *)(ptr->data);
	data->effect_fader = CLAMPIS(value, 0.0f, 1.0f);
}

int Sequence_use_default_fade_get(PointerRNA *ptr)
{
	Sequence *data = (Sequence *)(ptr->data);
	return (((data->flag) & 4194304) != 0);
}

void Sequence_use_default_fade_set(PointerRNA *ptr, int value)
{
	Sequence *data = (Sequence *)(ptr->data);
	if (value) data->flag |= 4194304;
	else data->flag &= ~4194304;
}

float Sequence_speed_factor_get(PointerRNA *ptr)
{
	Sequence *data = (Sequence *)(ptr->data);
	return (float)(data->speed_fader);
}

void Sequence_speed_factor_set(PointerRNA *ptr, float value)
{
	Sequence *data = (Sequence *)(ptr->data);
	data->speed_fader = value;
}

static PointerRNA Sequence_modifiers_get(CollectionPropertyIterator *iter)
{
	return rna_pointer_inherit_refine(&iter->parent, &RNA_SequenceModifier, rna_iterator_listbase_get(iter));
}

void Sequence_modifiers_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{
	Sequence *data = (Sequence *)(ptr->data);

	memset(iter, 0, sizeof(*iter));
	iter->parent = *ptr;
	iter->prop = (PropertyRNA *)&rna_Sequence_modifiers;

	rna_iterator_listbase_begin(iter, &data->modifiers, NULL);

	if (iter->valid)
		iter->ptr = Sequence_modifiers_get(iter);
}

void Sequence_modifiers_next(CollectionPropertyIterator *iter)
{
	rna_iterator_listbase_next(iter);

	if (iter->valid)
		iter->ptr = Sequence_modifiers_get(iter);
}

void Sequence_modifiers_end(CollectionPropertyIterator *iter)
{
	rna_iterator_listbase_end(iter);
}

int Sequence_modifiers_lookup_int(PointerRNA *ptr, int index, PointerRNA *r_ptr)
{
	int found = 0;
	CollectionPropertyIterator iter;

	Sequence_modifiers_begin(&iter, ptr);

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
		if (found) *r_ptr = Sequence_modifiers_get(&iter);
	}

	Sequence_modifiers_end(&iter);

	return found;
}

int Sequence_modifiers_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
	extern int SequenceModifier_name_length(PointerRNA *);
	extern void SequenceModifier_name_get(PointerRNA *, char *);

	bool found = false;
	CollectionPropertyIterator iter;
	char namebuf[1024];
	char *name;

	Sequence_modifiers_begin(&iter, ptr);

	while (iter.valid) {
		if (iter.ptr.data) {
			int namelen = SequenceModifier_name_length(&iter.ptr);
			if (namelen < 1024) {
				SequenceModifier_name_get(&iter.ptr, namebuf);
				if (strcmp(namebuf, key) == 0) {
					found = true;
					*r_ptr = iter.ptr;
					break;
				}
			}
			else {
				name = MEM_mallocN(namelen+1, "name string");
				SequenceModifier_name_get(&iter.ptr, name);
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
		Sequence_modifiers_next(&iter);
	}
	Sequence_modifiers_end(&iter);

	return found;
}

static PointerRNA SequenceModifiers_rna_properties_get(CollectionPropertyIterator *iter)
{
	return rna_builtin_properties_get(iter);
}

void SequenceModifiers_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

	memset(iter, 0, sizeof(*iter));
	iter->parent = *ptr;
	iter->prop = (PropertyRNA *)&rna_SequenceModifiers_rna_properties;

	rna_builtin_properties_begin(iter, ptr);

	if (iter->valid)
		iter->ptr = SequenceModifiers_rna_properties_get(iter);
}

void SequenceModifiers_rna_properties_next(CollectionPropertyIterator *iter)
{
	rna_builtin_properties_next(iter);

	if (iter->valid)
		iter->ptr = SequenceModifiers_rna_properties_get(iter);
}

void SequenceModifiers_rna_properties_end(CollectionPropertyIterator *iter)
{
	rna_iterator_listbase_end(iter);
}

int SequenceModifiers_rna_properties_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
	return rna_builtin_properties_lookup_string(ptr, key, r_ptr);
}

PointerRNA SequenceModifiers_rna_type_get(PointerRNA *ptr)
{
	return rna_builtin_type_get(ptr);
}

static PointerRNA SequenceEditor_rna_properties_get(CollectionPropertyIterator *iter)
{
	return rna_builtin_properties_get(iter);
}

void SequenceEditor_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

	memset(iter, 0, sizeof(*iter));
	iter->parent = *ptr;
	iter->prop = (PropertyRNA *)&rna_SequenceEditor_rna_properties;

	rna_builtin_properties_begin(iter, ptr);

	if (iter->valid)
		iter->ptr = SequenceEditor_rna_properties_get(iter);
}

void SequenceEditor_rna_properties_next(CollectionPropertyIterator *iter)
{
	rna_builtin_properties_next(iter);

	if (iter->valid)
		iter->ptr = SequenceEditor_rna_properties_get(iter);
}

void SequenceEditor_rna_properties_end(CollectionPropertyIterator *iter)
{
	rna_iterator_listbase_end(iter);
}

int SequenceEditor_rna_properties_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
	return rna_builtin_properties_lookup_string(ptr, key, r_ptr);
}

PointerRNA SequenceEditor_rna_type_get(PointerRNA *ptr)
{
	return rna_builtin_type_get(ptr);
}

static PointerRNA SequenceEditor_sequences_get(CollectionPropertyIterator *iter)
{
	return rna_pointer_inherit_refine(&iter->parent, &RNA_Sequence, rna_iterator_listbase_get(iter));
}

void SequenceEditor_sequences_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{
	Editing *data = (Editing *)(ptr->data);

	memset(iter, 0, sizeof(*iter));
	iter->parent = *ptr;
	iter->prop = (PropertyRNA *)&rna_SequenceEditor_sequences;

	rna_iterator_listbase_begin(iter, &data->seqbase, NULL);

	if (iter->valid)
		iter->ptr = SequenceEditor_sequences_get(iter);
}

void SequenceEditor_sequences_next(CollectionPropertyIterator *iter)
{
	rna_iterator_listbase_next(iter);

	if (iter->valid)
		iter->ptr = SequenceEditor_sequences_get(iter);
}

void SequenceEditor_sequences_end(CollectionPropertyIterator *iter)
{
	rna_iterator_listbase_end(iter);
}

int SequenceEditor_sequences_lookup_int(PointerRNA *ptr, int index, PointerRNA *r_ptr)
{
	int found = 0;
	CollectionPropertyIterator iter;

	SequenceEditor_sequences_begin(&iter, ptr);

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
		if (found) *r_ptr = SequenceEditor_sequences_get(&iter);
	}

	SequenceEditor_sequences_end(&iter);

	return found;
}

int SequenceEditor_sequences_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
	extern int Sequence_name_length(PointerRNA *);
	extern void Sequence_name_get(PointerRNA *, char *);

	bool found = false;
	CollectionPropertyIterator iter;
	char namebuf[1024];
	char *name;

	SequenceEditor_sequences_begin(&iter, ptr);

	while (iter.valid) {
		if (iter.ptr.data) {
			int namelen = Sequence_name_length(&iter.ptr);
			if (namelen < 1024) {
				Sequence_name_get(&iter.ptr, namebuf);
				if (strcmp(namebuf, key) == 0) {
					found = true;
					*r_ptr = iter.ptr;
					break;
				}
			}
			else {
				name = MEM_mallocN(namelen+1, "name string");
				Sequence_name_get(&iter.ptr, name);
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
		SequenceEditor_sequences_next(&iter);
	}
	SequenceEditor_sequences_end(&iter);

	return found;
}

static PointerRNA SequenceEditor_sequences_all_get(CollectionPropertyIterator *iter)
{
	return rna_pointer_inherit_refine(&iter->parent, &RNA_Sequence, rna_iterator_listbase_get(iter));
}

void SequenceEditor_sequences_all_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

	memset(iter, 0, sizeof(*iter));
	iter->parent = *ptr;
	iter->prop = (PropertyRNA *)&rna_SequenceEditor_sequences_all;

	rna_SequenceEditor_sequences_all_begin(iter, ptr);

	if (iter->valid)
		iter->ptr = SequenceEditor_sequences_all_get(iter);
}

void SequenceEditor_sequences_all_next(CollectionPropertyIterator *iter)
{
	rna_SequenceEditor_sequences_all_next(iter);

	if (iter->valid)
		iter->ptr = SequenceEditor_sequences_all_get(iter);
}

void SequenceEditor_sequences_all_end(CollectionPropertyIterator *iter)
{
	rna_iterator_listbase_end(iter);
}

int SequenceEditor_sequences_all_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
	extern int Sequence_name_length(PointerRNA *);
	extern void Sequence_name_get(PointerRNA *, char *);

	bool found = false;
	CollectionPropertyIterator iter;
	char namebuf[1024];
	char *name;

	SequenceEditor_sequences_all_begin(&iter, ptr);

	while (iter.valid) {
		if (iter.ptr.data) {
			int namelen = Sequence_name_length(&iter.ptr);
			if (namelen < 1024) {
				Sequence_name_get(&iter.ptr, namebuf);
				if (strcmp(namebuf, key) == 0) {
					found = true;
					*r_ptr = iter.ptr;
					break;
				}
			}
			else {
				name = MEM_mallocN(namelen+1, "name string");
				Sequence_name_get(&iter.ptr, name);
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
		SequenceEditor_sequences_all_next(&iter);
	}
	SequenceEditor_sequences_all_end(&iter);

	return found;
}

static PointerRNA SequenceEditor_meta_stack_get(CollectionPropertyIterator *iter)
{
	return rna_SequenceEditor_meta_stack_get(iter);
}

void SequenceEditor_meta_stack_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{
	Editing *data = (Editing *)(ptr->data);

	memset(iter, 0, sizeof(*iter));
	iter->parent = *ptr;
	iter->prop = (PropertyRNA *)&rna_SequenceEditor_meta_stack;

	rna_iterator_listbase_begin(iter, &data->metastack, NULL);

	if (iter->valid)
		iter->ptr = SequenceEditor_meta_stack_get(iter);
}

void SequenceEditor_meta_stack_next(CollectionPropertyIterator *iter)
{
	rna_iterator_listbase_next(iter);

	if (iter->valid)
		iter->ptr = SequenceEditor_meta_stack_get(iter);
}

void SequenceEditor_meta_stack_end(CollectionPropertyIterator *iter)
{
	rna_iterator_listbase_end(iter);
}

int SequenceEditor_meta_stack_lookup_int(PointerRNA *ptr, int index, PointerRNA *r_ptr)
{
	int found = 0;
	CollectionPropertyIterator iter;

	SequenceEditor_meta_stack_begin(&iter, ptr);

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
		if (found) *r_ptr = SequenceEditor_meta_stack_get(&iter);
	}

	SequenceEditor_meta_stack_end(&iter);

	return found;
}

int SequenceEditor_meta_stack_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
	extern int Sequence_name_length(PointerRNA *);
	extern void Sequence_name_get(PointerRNA *, char *);

	bool found = false;
	CollectionPropertyIterator iter;
	char namebuf[1024];
	char *name;

	SequenceEditor_meta_stack_begin(&iter, ptr);

	while (iter.valid) {
		if (iter.ptr.data) {
			int namelen = Sequence_name_length(&iter.ptr);
			if (namelen < 1024) {
				Sequence_name_get(&iter.ptr, namebuf);
				if (strcmp(namebuf, key) == 0) {
					found = true;
					*r_ptr = iter.ptr;
					break;
				}
			}
			else {
				name = MEM_mallocN(namelen+1, "name string");
				Sequence_name_get(&iter.ptr, name);
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
		SequenceEditor_meta_stack_next(&iter);
	}
	SequenceEditor_meta_stack_end(&iter);

	return found;
}

PointerRNA SequenceEditor_active_strip_get(PointerRNA *ptr)
{
	Editing *data = (Editing *)(ptr->data);
	return rna_pointer_inherit_refine(ptr, &RNA_Sequence, data->act_seq);
}

void SequenceEditor_active_strip_set(PointerRNA *ptr, PointerRNA value)
{
	Editing *data = (Editing *)(ptr->data);
	data->act_seq = value.data;
}

int SequenceEditor_show_overlay_get(PointerRNA *ptr)
{
	Editing *data = (Editing *)(ptr->data);
	return (((data->over_flag) & 1) != 0);
}

void SequenceEditor_show_overlay_set(PointerRNA *ptr, int value)
{
	Editing *data = (Editing *)(ptr->data);
	if (value) data->over_flag |= 1;
	else data->over_flag &= ~1;
}

int SequenceEditor_use_overlay_lock_get(PointerRNA *ptr)
{
	Editing *data = (Editing *)(ptr->data);
	return (((data->over_flag) & 2) != 0);
}

void SequenceEditor_use_overlay_lock_set(PointerRNA *ptr, int value)
{
	rna_SequenceEditor_overlay_lock_set(ptr, value);
}

int SequenceEditor_overlay_frame_get(PointerRNA *ptr)
{
	return rna_SequenceEditor_overlay_frame_get(ptr);
}

void SequenceEditor_overlay_frame_set(PointerRNA *ptr, int value)
{
	rna_SequenceEditor_overlay_frame_set(ptr, value);
}

static PointerRNA Sequences_rna_properties_get(CollectionPropertyIterator *iter)
{
	return rna_builtin_properties_get(iter);
}

void Sequences_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

	memset(iter, 0, sizeof(*iter));
	iter->parent = *ptr;
	iter->prop = (PropertyRNA *)&rna_Sequences_rna_properties;

	rna_builtin_properties_begin(iter, ptr);

	if (iter->valid)
		iter->ptr = Sequences_rna_properties_get(iter);
}

void Sequences_rna_properties_next(CollectionPropertyIterator *iter)
{
	rna_builtin_properties_next(iter);

	if (iter->valid)
		iter->ptr = Sequences_rna_properties_get(iter);
}

void Sequences_rna_properties_end(CollectionPropertyIterator *iter)
{
	rna_iterator_listbase_end(iter);
}

int Sequences_rna_properties_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
	return rna_builtin_properties_lookup_string(ptr, key, r_ptr);
}

PointerRNA Sequences_rna_type_get(PointerRNA *ptr)
{
	return rna_builtin_type_get(ptr);
}

void ImageSequence_directory_get(PointerRNA *ptr, char *value)
{
	Sequence *data = (Sequence *)(ptr->data);
	BLI_strncpy(value, data->strip->dir, 768);
}

int ImageSequence_directory_length(PointerRNA *ptr)
{
	Sequence *data = (Sequence *)(ptr->data);
	return strlen(data->strip->dir);
}

void ImageSequence_directory_set(PointerRNA *ptr, const char *value)
{
	Sequence *data = (Sequence *)(ptr->data);
	BLI_strncpy(data->strip->dir, value, 768);
}

static PointerRNA ImageSequence_elements_get(CollectionPropertyIterator *iter)
{
	return rna_pointer_inherit_refine(&iter->parent, &RNA_SequenceElement, rna_iterator_array_get(iter));
}

void ImageSequence_elements_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

	memset(iter, 0, sizeof(*iter));
	iter->parent = *ptr;
	iter->prop = (PropertyRNA *)&rna_ImageSequence_elements;

	rna_SequenceEditor_elements_begin(iter, ptr);

	if (iter->valid)
		iter->ptr = ImageSequence_elements_get(iter);
}

void ImageSequence_elements_next(CollectionPropertyIterator *iter)
{
	rna_iterator_array_next(iter);

	if (iter->valid)
		iter->ptr = ImageSequence_elements_get(iter);
}

void ImageSequence_elements_end(CollectionPropertyIterator *iter)
{
	rna_iterator_array_end(iter);
}

int ImageSequence_elements_lookup_int(PointerRNA *ptr, int index, PointerRNA *r_ptr)
{
	int found = 0;
	CollectionPropertyIterator iter;

	ImageSequence_elements_begin(&iter, ptr);

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
		if (found) *r_ptr = ImageSequence_elements_get(&iter);
	}

	ImageSequence_elements_end(&iter);

	return found;
}

int ImageSequence_use_deinterlace_get(PointerRNA *ptr)
{
	Sequence *data = (Sequence *)(ptr->data);
	return (((data->flag) & 16) != 0);
}

void ImageSequence_use_deinterlace_set(PointerRNA *ptr, int value)
{
	Sequence *data = (Sequence *)(ptr->data);
	if (value) data->flag |= 16;
	else data->flag &= ~16;
}

int ImageSequence_alpha_mode_get(PointerRNA *ptr)
{
	Sequence *data = (Sequence *)(ptr->data);
	return (int)(data->alpha_mode);
}

void ImageSequence_alpha_mode_set(PointerRNA *ptr, int value)
{
	Sequence *data = (Sequence *)(ptr->data);
	data->alpha_mode = value;
}

int ImageSequence_use_flip_x_get(PointerRNA *ptr)
{
	Sequence *data = (Sequence *)(ptr->data);
	return (((data->flag) & 2048) != 0);
}

void ImageSequence_use_flip_x_set(PointerRNA *ptr, int value)
{
	Sequence *data = (Sequence *)(ptr->data);
	if (value) data->flag |= 2048;
	else data->flag &= ~2048;
}

int ImageSequence_use_flip_y_get(PointerRNA *ptr)
{
	Sequence *data = (Sequence *)(ptr->data);
	return (((data->flag) & 4096) != 0);
}

void ImageSequence_use_flip_y_set(PointerRNA *ptr, int value)
{
	Sequence *data = (Sequence *)(ptr->data);
	if (value) data->flag |= 4096;
	else data->flag &= ~4096;
}

int ImageSequence_use_float_get(PointerRNA *ptr)
{
	Sequence *data = (Sequence *)(ptr->data);
	return (((data->flag) & 8192) != 0);
}

void ImageSequence_use_float_set(PointerRNA *ptr, int value)
{
	Sequence *data = (Sequence *)(ptr->data);
	if (value) data->flag |= 8192;
	else data->flag &= ~8192;
}

int ImageSequence_use_reverse_frames_get(PointerRNA *ptr)
{
	Sequence *data = (Sequence *)(ptr->data);
	return (((data->flag) & 128) != 0);
}

void ImageSequence_use_reverse_frames_set(PointerRNA *ptr, int value)
{
	Sequence *data = (Sequence *)(ptr->data);
	if (value) data->flag |= 128;
	else data->flag &= ~128;
}

float ImageSequence_color_multiply_get(PointerRNA *ptr)
{
	Sequence *data = (Sequence *)(ptr->data);
	return (float)(data->mul);
}

void ImageSequence_color_multiply_set(PointerRNA *ptr, float value)
{
	Sequence *data = (Sequence *)(ptr->data);
	data->mul = CLAMPIS(value, 0.0f, 20.0f);
}

float ImageSequence_color_saturation_get(PointerRNA *ptr)
{
	Sequence *data = (Sequence *)(ptr->data);
	return (float)(data->sat);
}

void ImageSequence_color_saturation_set(PointerRNA *ptr, float value)
{
	Sequence *data = (Sequence *)(ptr->data);
	data->sat = CLAMPIS(value, 0.0f, 20.0f);
}

float ImageSequence_strobe_get(PointerRNA *ptr)
{
	Sequence *data = (Sequence *)(ptr->data);
	return (float)(data->strobe);
}

void ImageSequence_strobe_set(PointerRNA *ptr, float value)
{
	Sequence *data = (Sequence *)(ptr->data);
	data->strobe = CLAMPIS(value, 1.0f, 30.0f);
}

int ImageSequence_use_translation_get(PointerRNA *ptr)
{
	Sequence *data = (Sequence *)(ptr->data);
	return (((data->flag) & 65536) != 0);
}

void ImageSequence_use_translation_set(PointerRNA *ptr, int value)
{
	rna_Sequence_use_translation_set(ptr, value);
}

PointerRNA ImageSequence_transform_get(PointerRNA *ptr)
{
	Sequence *data = (Sequence *)(ptr->data);
	return rna_pointer_inherit_refine(ptr, &RNA_SequenceTransform, data->strip->transform);
}

int ImageSequence_use_crop_get(PointerRNA *ptr)
{
	Sequence *data = (Sequence *)(ptr->data);
	return (((data->flag) & 131072) != 0);
}

void ImageSequence_use_crop_set(PointerRNA *ptr, int value)
{
	rna_Sequence_use_crop_set(ptr, value);
}

PointerRNA ImageSequence_crop_get(PointerRNA *ptr)
{
	Sequence *data = (Sequence *)(ptr->data);
	return rna_pointer_inherit_refine(ptr, &RNA_SequenceCrop, data->strip->crop);
}

int ImageSequence_use_proxy_get(PointerRNA *ptr)
{
	Sequence *data = (Sequence *)(ptr->data);
	return (((data->flag) & 32768) != 0);
}

void ImageSequence_use_proxy_set(PointerRNA *ptr, int value)
{
	rna_Sequence_use_proxy_set(ptr, value);
}

PointerRNA ImageSequence_proxy_get(PointerRNA *ptr)
{
	Sequence *data = (Sequence *)(ptr->data);
	return rna_pointer_inherit_refine(ptr, &RNA_SequenceProxy, data->strip->proxy);
}

int ImageSequence_use_proxy_custom_directory_get(PointerRNA *ptr)
{
	Sequence *data = (Sequence *)(ptr->data);
	return (((data->flag) & 524288) != 0);
}

void ImageSequence_use_proxy_custom_directory_set(PointerRNA *ptr, int value)
{
	Sequence *data = (Sequence *)(ptr->data);
	if (value) data->flag |= 524288;
	else data->flag &= ~524288;
}

int ImageSequence_use_proxy_custom_file_get(PointerRNA *ptr)
{
	Sequence *data = (Sequence *)(ptr->data);
	return (((data->flag) & 2097152) != 0);
}

void ImageSequence_use_proxy_custom_file_set(PointerRNA *ptr, int value)
{
	Sequence *data = (Sequence *)(ptr->data);
	if (value) data->flag |= 2097152;
	else data->flag &= ~2097152;
}

int ImageSequence_animation_offset_start_get(PointerRNA *ptr)
{
	Sequence *data = (Sequence *)(ptr->data);
	return (int)(data->anim_startofs);
}

void ImageSequence_animation_offset_start_set(PointerRNA *ptr, int value)
{
	rna_Sequence_anim_startofs_final_set(ptr, value);
}

int ImageSequence_animation_offset_end_get(PointerRNA *ptr)
{
	Sequence *data = (Sequence *)(ptr->data);
	return (int)(data->anim_endofs);
}

void ImageSequence_animation_offset_end_set(PointerRNA *ptr, int value)
{
	rna_Sequence_anim_endofs_final_set(ptr, value);
}

PointerRNA ImageSequence_colorspace_settings_get(PointerRNA *ptr)
{
	Sequence *data = (Sequence *)(ptr->data);
	return rna_pointer_inherit_refine(ptr, &RNA_ColorManagedInputColorspaceSettings, &data->strip->colorspace_settings);
}

static PointerRNA SequenceElements_rna_properties_get(CollectionPropertyIterator *iter)
{
	return rna_builtin_properties_get(iter);
}

void SequenceElements_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

	memset(iter, 0, sizeof(*iter));
	iter->parent = *ptr;
	iter->prop = (PropertyRNA *)&rna_SequenceElements_rna_properties;

	rna_builtin_properties_begin(iter, ptr);

	if (iter->valid)
		iter->ptr = SequenceElements_rna_properties_get(iter);
}

void SequenceElements_rna_properties_next(CollectionPropertyIterator *iter)
{
	rna_builtin_properties_next(iter);

	if (iter->valid)
		iter->ptr = SequenceElements_rna_properties_get(iter);
}

void SequenceElements_rna_properties_end(CollectionPropertyIterator *iter)
{
	rna_iterator_listbase_end(iter);
}

int SequenceElements_rna_properties_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
	return rna_builtin_properties_lookup_string(ptr, key, r_ptr);
}

PointerRNA SequenceElements_rna_type_get(PointerRNA *ptr)
{
	return rna_builtin_type_get(ptr);
}

static PointerRNA MetaSequence_sequences_get(CollectionPropertyIterator *iter)
{
	return rna_pointer_inherit_refine(&iter->parent, &RNA_Sequence, rna_iterator_listbase_get(iter));
}

void MetaSequence_sequences_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{
	Sequence *data = (Sequence *)(ptr->data);

	memset(iter, 0, sizeof(*iter));
	iter->parent = *ptr;
	iter->prop = (PropertyRNA *)&rna_MetaSequence_sequences;

	rna_iterator_listbase_begin(iter, &data->seqbase, NULL);

	if (iter->valid)
		iter->ptr = MetaSequence_sequences_get(iter);
}

void MetaSequence_sequences_next(CollectionPropertyIterator *iter)
{
	rna_iterator_listbase_next(iter);

	if (iter->valid)
		iter->ptr = MetaSequence_sequences_get(iter);
}

void MetaSequence_sequences_end(CollectionPropertyIterator *iter)
{
	rna_iterator_listbase_end(iter);
}

int MetaSequence_sequences_lookup_int(PointerRNA *ptr, int index, PointerRNA *r_ptr)
{
	int found = 0;
	CollectionPropertyIterator iter;

	MetaSequence_sequences_begin(&iter, ptr);

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
		if (found) *r_ptr = MetaSequence_sequences_get(&iter);
	}

	MetaSequence_sequences_end(&iter);

	return found;
}

int MetaSequence_sequences_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
	extern int Sequence_name_length(PointerRNA *);
	extern void Sequence_name_get(PointerRNA *, char *);

	bool found = false;
	CollectionPropertyIterator iter;
	char namebuf[1024];
	char *name;

	MetaSequence_sequences_begin(&iter, ptr);

	while (iter.valid) {
		if (iter.ptr.data) {
			int namelen = Sequence_name_length(&iter.ptr);
			if (namelen < 1024) {
				Sequence_name_get(&iter.ptr, namebuf);
				if (strcmp(namebuf, key) == 0) {
					found = true;
					*r_ptr = iter.ptr;
					break;
				}
			}
			else {
				name = MEM_mallocN(namelen+1, "name string");
				Sequence_name_get(&iter.ptr, name);
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
		MetaSequence_sequences_next(&iter);
	}
	MetaSequence_sequences_end(&iter);

	return found;
}

int MetaSequence_use_deinterlace_get(PointerRNA *ptr)
{
	Sequence *data = (Sequence *)(ptr->data);
	return (((data->flag) & 16) != 0);
}

void MetaSequence_use_deinterlace_set(PointerRNA *ptr, int value)
{
	Sequence *data = (Sequence *)(ptr->data);
	if (value) data->flag |= 16;
	else data->flag &= ~16;
}

int MetaSequence_alpha_mode_get(PointerRNA *ptr)
{
	Sequence *data = (Sequence *)(ptr->data);
	return (int)(data->alpha_mode);
}

void MetaSequence_alpha_mode_set(PointerRNA *ptr, int value)
{
	Sequence *data = (Sequence *)(ptr->data);
	data->alpha_mode = value;
}

int MetaSequence_use_flip_x_get(PointerRNA *ptr)
{
	Sequence *data = (Sequence *)(ptr->data);
	return (((data->flag) & 2048) != 0);
}

void MetaSequence_use_flip_x_set(PointerRNA *ptr, int value)
{
	Sequence *data = (Sequence *)(ptr->data);
	if (value) data->flag |= 2048;
	else data->flag &= ~2048;
}

int MetaSequence_use_flip_y_get(PointerRNA *ptr)
{
	Sequence *data = (Sequence *)(ptr->data);
	return (((data->flag) & 4096) != 0);
}

void MetaSequence_use_flip_y_set(PointerRNA *ptr, int value)
{
	Sequence *data = (Sequence *)(ptr->data);
	if (value) data->flag |= 4096;
	else data->flag &= ~4096;
}

int MetaSequence_use_float_get(PointerRNA *ptr)
{
	Sequence *data = (Sequence *)(ptr->data);
	return (((data->flag) & 8192) != 0);
}

void MetaSequence_use_float_set(PointerRNA *ptr, int value)
{
	Sequence *data = (Sequence *)(ptr->data);
	if (value) data->flag |= 8192;
	else data->flag &= ~8192;
}

int MetaSequence_use_reverse_frames_get(PointerRNA *ptr)
{
	Sequence *data = (Sequence *)(ptr->data);
	return (((data->flag) & 128) != 0);
}

void MetaSequence_use_reverse_frames_set(PointerRNA *ptr, int value)
{
	Sequence *data = (Sequence *)(ptr->data);
	if (value) data->flag |= 128;
	else data->flag &= ~128;
}

float MetaSequence_color_multiply_get(PointerRNA *ptr)
{
	Sequence *data = (Sequence *)(ptr->data);
	return (float)(data->mul);
}

void MetaSequence_color_multiply_set(PointerRNA *ptr, float value)
{
	Sequence *data = (Sequence *)(ptr->data);
	data->mul = CLAMPIS(value, 0.0f, 20.0f);
}

float MetaSequence_color_saturation_get(PointerRNA *ptr)
{
	Sequence *data = (Sequence *)(ptr->data);
	return (float)(data->sat);
}

void MetaSequence_color_saturation_set(PointerRNA *ptr, float value)
{
	Sequence *data = (Sequence *)(ptr->data);
	data->sat = CLAMPIS(value, 0.0f, 20.0f);
}

float MetaSequence_strobe_get(PointerRNA *ptr)
{
	Sequence *data = (Sequence *)(ptr->data);
	return (float)(data->strobe);
}

void MetaSequence_strobe_set(PointerRNA *ptr, float value)
{
	Sequence *data = (Sequence *)(ptr->data);
	data->strobe = CLAMPIS(value, 1.0f, 30.0f);
}

int MetaSequence_use_translation_get(PointerRNA *ptr)
{
	Sequence *data = (Sequence *)(ptr->data);
	return (((data->flag) & 65536) != 0);
}

void MetaSequence_use_translation_set(PointerRNA *ptr, int value)
{
	rna_Sequence_use_translation_set(ptr, value);
}

PointerRNA MetaSequence_transform_get(PointerRNA *ptr)
{
	Sequence *data = (Sequence *)(ptr->data);
	return rna_pointer_inherit_refine(ptr, &RNA_SequenceTransform, data->strip->transform);
}

int MetaSequence_use_crop_get(PointerRNA *ptr)
{
	Sequence *data = (Sequence *)(ptr->data);
	return (((data->flag) & 131072) != 0);
}

void MetaSequence_use_crop_set(PointerRNA *ptr, int value)
{
	rna_Sequence_use_crop_set(ptr, value);
}

PointerRNA MetaSequence_crop_get(PointerRNA *ptr)
{
	Sequence *data = (Sequence *)(ptr->data);
	return rna_pointer_inherit_refine(ptr, &RNA_SequenceCrop, data->strip->crop);
}

int MetaSequence_use_proxy_get(PointerRNA *ptr)
{
	Sequence *data = (Sequence *)(ptr->data);
	return (((data->flag) & 32768) != 0);
}

void MetaSequence_use_proxy_set(PointerRNA *ptr, int value)
{
	rna_Sequence_use_proxy_set(ptr, value);
}

PointerRNA MetaSequence_proxy_get(PointerRNA *ptr)
{
	Sequence *data = (Sequence *)(ptr->data);
	return rna_pointer_inherit_refine(ptr, &RNA_SequenceProxy, data->strip->proxy);
}

int MetaSequence_use_proxy_custom_directory_get(PointerRNA *ptr)
{
	Sequence *data = (Sequence *)(ptr->data);
	return (((data->flag) & 524288) != 0);
}

void MetaSequence_use_proxy_custom_directory_set(PointerRNA *ptr, int value)
{
	Sequence *data = (Sequence *)(ptr->data);
	if (value) data->flag |= 524288;
	else data->flag &= ~524288;
}

int MetaSequence_use_proxy_custom_file_get(PointerRNA *ptr)
{
	Sequence *data = (Sequence *)(ptr->data);
	return (((data->flag) & 2097152) != 0);
}

void MetaSequence_use_proxy_custom_file_set(PointerRNA *ptr, int value)
{
	Sequence *data = (Sequence *)(ptr->data);
	if (value) data->flag |= 2097152;
	else data->flag &= ~2097152;
}

int MetaSequence_animation_offset_start_get(PointerRNA *ptr)
{
	Sequence *data = (Sequence *)(ptr->data);
	return (int)(data->anim_startofs);
}

void MetaSequence_animation_offset_start_set(PointerRNA *ptr, int value)
{
	rna_Sequence_anim_startofs_final_set(ptr, value);
}

int MetaSequence_animation_offset_end_get(PointerRNA *ptr)
{
	Sequence *data = (Sequence *)(ptr->data);
	return (int)(data->anim_endofs);
}

void MetaSequence_animation_offset_end_set(PointerRNA *ptr, int value)
{
	rna_Sequence_anim_endofs_final_set(ptr, value);
}

PointerRNA SceneSequence_scene_get(PointerRNA *ptr)
{
	Sequence *data = (Sequence *)(ptr->data);
	return rna_pointer_inherit_refine(ptr, &RNA_Scene, data->scene);
}

void SceneSequence_scene_set(PointerRNA *ptr, PointerRNA value)
{
	Sequence *data = (Sequence *)(ptr->data);
	if (value.data)
		id_lib_extern((ID *)value.data);

	data->scene = value.data;
}

PointerRNA SceneSequence_scene_camera_get(PointerRNA *ptr)
{
	Sequence *data = (Sequence *)(ptr->data);
	return rna_pointer_inherit_refine(ptr, &RNA_Object, data->scene_camera);
}

void SceneSequence_scene_camera_set(PointerRNA *ptr, PointerRNA value)
{
	Sequence *data = (Sequence *)(ptr->data);
	if (value.data)
		id_lib_extern((ID *)value.data);

	data->scene_camera = value.data;
}

int SceneSequence_use_deinterlace_get(PointerRNA *ptr)
{
	Sequence *data = (Sequence *)(ptr->data);
	return (((data->flag) & 16) != 0);
}

void SceneSequence_use_deinterlace_set(PointerRNA *ptr, int value)
{
	Sequence *data = (Sequence *)(ptr->data);
	if (value) data->flag |= 16;
	else data->flag &= ~16;
}

int SceneSequence_alpha_mode_get(PointerRNA *ptr)
{
	Sequence *data = (Sequence *)(ptr->data);
	return (int)(data->alpha_mode);
}

void SceneSequence_alpha_mode_set(PointerRNA *ptr, int value)
{
	Sequence *data = (Sequence *)(ptr->data);
	data->alpha_mode = value;
}

int SceneSequence_use_flip_x_get(PointerRNA *ptr)
{
	Sequence *data = (Sequence *)(ptr->data);
	return (((data->flag) & 2048) != 0);
}

void SceneSequence_use_flip_x_set(PointerRNA *ptr, int value)
{
	Sequence *data = (Sequence *)(ptr->data);
	if (value) data->flag |= 2048;
	else data->flag &= ~2048;
}

int SceneSequence_use_flip_y_get(PointerRNA *ptr)
{
	Sequence *data = (Sequence *)(ptr->data);
	return (((data->flag) & 4096) != 0);
}

void SceneSequence_use_flip_y_set(PointerRNA *ptr, int value)
{
	Sequence *data = (Sequence *)(ptr->data);
	if (value) data->flag |= 4096;
	else data->flag &= ~4096;
}

int SceneSequence_use_float_get(PointerRNA *ptr)
{
	Sequence *data = (Sequence *)(ptr->data);
	return (((data->flag) & 8192) != 0);
}

void SceneSequence_use_float_set(PointerRNA *ptr, int value)
{
	Sequence *data = (Sequence *)(ptr->data);
	if (value) data->flag |= 8192;
	else data->flag &= ~8192;
}

int SceneSequence_use_reverse_frames_get(PointerRNA *ptr)
{
	Sequence *data = (Sequence *)(ptr->data);
	return (((data->flag) & 128) != 0);
}

void SceneSequence_use_reverse_frames_set(PointerRNA *ptr, int value)
{
	Sequence *data = (Sequence *)(ptr->data);
	if (value) data->flag |= 128;
	else data->flag &= ~128;
}

float SceneSequence_color_multiply_get(PointerRNA *ptr)
{
	Sequence *data = (Sequence *)(ptr->data);
	return (float)(data->mul);
}

void SceneSequence_color_multiply_set(PointerRNA *ptr, float value)
{
	Sequence *data = (Sequence *)(ptr->data);
	data->mul = CLAMPIS(value, 0.0f, 20.0f);
}

float SceneSequence_color_saturation_get(PointerRNA *ptr)
{
	Sequence *data = (Sequence *)(ptr->data);
	return (float)(data->sat);
}

void SceneSequence_color_saturation_set(PointerRNA *ptr, float value)
{
	Sequence *data = (Sequence *)(ptr->data);
	data->sat = CLAMPIS(value, 0.0f, 20.0f);
}

float SceneSequence_strobe_get(PointerRNA *ptr)
{
	Sequence *data = (Sequence *)(ptr->data);
	return (float)(data->strobe);
}

void SceneSequence_strobe_set(PointerRNA *ptr, float value)
{
	Sequence *data = (Sequence *)(ptr->data);
	data->strobe = CLAMPIS(value, 1.0f, 30.0f);
}

int SceneSequence_use_translation_get(PointerRNA *ptr)
{
	Sequence *data = (Sequence *)(ptr->data);
	return (((data->flag) & 65536) != 0);
}

void SceneSequence_use_translation_set(PointerRNA *ptr, int value)
{
	rna_Sequence_use_translation_set(ptr, value);
}

PointerRNA SceneSequence_transform_get(PointerRNA *ptr)
{
	Sequence *data = (Sequence *)(ptr->data);
	return rna_pointer_inherit_refine(ptr, &RNA_SequenceTransform, data->strip->transform);
}

int SceneSequence_use_crop_get(PointerRNA *ptr)
{
	Sequence *data = (Sequence *)(ptr->data);
	return (((data->flag) & 131072) != 0);
}

void SceneSequence_use_crop_set(PointerRNA *ptr, int value)
{
	rna_Sequence_use_crop_set(ptr, value);
}

PointerRNA SceneSequence_crop_get(PointerRNA *ptr)
{
	Sequence *data = (Sequence *)(ptr->data);
	return rna_pointer_inherit_refine(ptr, &RNA_SequenceCrop, data->strip->crop);
}

int SceneSequence_use_proxy_get(PointerRNA *ptr)
{
	Sequence *data = (Sequence *)(ptr->data);
	return (((data->flag) & 32768) != 0);
}

void SceneSequence_use_proxy_set(PointerRNA *ptr, int value)
{
	rna_Sequence_use_proxy_set(ptr, value);
}

PointerRNA SceneSequence_proxy_get(PointerRNA *ptr)
{
	Sequence *data = (Sequence *)(ptr->data);
	return rna_pointer_inherit_refine(ptr, &RNA_SequenceProxy, data->strip->proxy);
}

int SceneSequence_use_proxy_custom_directory_get(PointerRNA *ptr)
{
	Sequence *data = (Sequence *)(ptr->data);
	return (((data->flag) & 524288) != 0);
}

void SceneSequence_use_proxy_custom_directory_set(PointerRNA *ptr, int value)
{
	Sequence *data = (Sequence *)(ptr->data);
	if (value) data->flag |= 524288;
	else data->flag &= ~524288;
}

int SceneSequence_use_proxy_custom_file_get(PointerRNA *ptr)
{
	Sequence *data = (Sequence *)(ptr->data);
	return (((data->flag) & 2097152) != 0);
}

void SceneSequence_use_proxy_custom_file_set(PointerRNA *ptr, int value)
{
	Sequence *data = (Sequence *)(ptr->data);
	if (value) data->flag |= 2097152;
	else data->flag &= ~2097152;
}

int SceneSequence_animation_offset_start_get(PointerRNA *ptr)
{
	Sequence *data = (Sequence *)(ptr->data);
	return (int)(data->anim_startofs);
}

void SceneSequence_animation_offset_start_set(PointerRNA *ptr, int value)
{
	rna_Sequence_anim_startofs_final_set(ptr, value);
}

int SceneSequence_animation_offset_end_get(PointerRNA *ptr)
{
	Sequence *data = (Sequence *)(ptr->data);
	return (int)(data->anim_endofs);
}

void SceneSequence_animation_offset_end_set(PointerRNA *ptr, int value)
{
	rna_Sequence_anim_endofs_final_set(ptr, value);
}

int MovieSequence_mpeg_preseek_get(PointerRNA *ptr)
{
	Sequence *data = (Sequence *)(ptr->data);
	return (int)(data->anim_preseek);
}

void MovieSequence_mpeg_preseek_set(PointerRNA *ptr, int value)
{
	Sequence *data = (Sequence *)(ptr->data);
	data->anim_preseek = CLAMPIS(value, 0, 50);
}

int MovieSequence_stream_index_get(PointerRNA *ptr)
{
	Sequence *data = (Sequence *)(ptr->data);
	return (int)(data->streamindex);
}

void MovieSequence_stream_index_set(PointerRNA *ptr, int value)
{
	Sequence *data = (Sequence *)(ptr->data);
	data->streamindex = CLAMPIS(value, 0, 20);
}

static PointerRNA MovieSequence_elements_get(CollectionPropertyIterator *iter)
{
	return rna_pointer_inherit_refine(&iter->parent, &RNA_SequenceElement, rna_iterator_array_get(iter));
}

void MovieSequence_elements_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

	memset(iter, 0, sizeof(*iter));
	iter->parent = *ptr;
	iter->prop = (PropertyRNA *)&rna_MovieSequence_elements;

	rna_SequenceEditor_elements_begin(iter, ptr);

	if (iter->valid)
		iter->ptr = MovieSequence_elements_get(iter);
}

void MovieSequence_elements_next(CollectionPropertyIterator *iter)
{
	rna_iterator_array_next(iter);

	if (iter->valid)
		iter->ptr = MovieSequence_elements_get(iter);
}

void MovieSequence_elements_end(CollectionPropertyIterator *iter)
{
	rna_iterator_array_end(iter);
}

int MovieSequence_elements_lookup_int(PointerRNA *ptr, int index, PointerRNA *r_ptr)
{
	int found = 0;
	CollectionPropertyIterator iter;

	MovieSequence_elements_begin(&iter, ptr);

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
		if (found) *r_ptr = MovieSequence_elements_get(&iter);
	}

	MovieSequence_elements_end(&iter);

	return found;
}

void MovieSequence_filepath_get(PointerRNA *ptr, char *value)
{
	rna_Sequence_filepath_get(ptr, value);
}

int MovieSequence_filepath_length(PointerRNA *ptr)
{
	return rna_Sequence_filepath_length(ptr);
}

void MovieSequence_filepath_set(PointerRNA *ptr, const char *value)
{
	rna_Sequence_filepath_set(ptr, value);
}

int MovieSequence_use_deinterlace_get(PointerRNA *ptr)
{
	Sequence *data = (Sequence *)(ptr->data);
	return (((data->flag) & 16) != 0);
}

void MovieSequence_use_deinterlace_set(PointerRNA *ptr, int value)
{
	Sequence *data = (Sequence *)(ptr->data);
	if (value) data->flag |= 16;
	else data->flag &= ~16;
}

int MovieSequence_alpha_mode_get(PointerRNA *ptr)
{
	Sequence *data = (Sequence *)(ptr->data);
	return (int)(data->alpha_mode);
}

void MovieSequence_alpha_mode_set(PointerRNA *ptr, int value)
{
	Sequence *data = (Sequence *)(ptr->data);
	data->alpha_mode = value;
}

int MovieSequence_use_flip_x_get(PointerRNA *ptr)
{
	Sequence *data = (Sequence *)(ptr->data);
	return (((data->flag) & 2048) != 0);
}

void MovieSequence_use_flip_x_set(PointerRNA *ptr, int value)
{
	Sequence *data = (Sequence *)(ptr->data);
	if (value) data->flag |= 2048;
	else data->flag &= ~2048;
}

int MovieSequence_use_flip_y_get(PointerRNA *ptr)
{
	Sequence *data = (Sequence *)(ptr->data);
	return (((data->flag) & 4096) != 0);
}

void MovieSequence_use_flip_y_set(PointerRNA *ptr, int value)
{
	Sequence *data = (Sequence *)(ptr->data);
	if (value) data->flag |= 4096;
	else data->flag &= ~4096;
}

int MovieSequence_use_float_get(PointerRNA *ptr)
{
	Sequence *data = (Sequence *)(ptr->data);
	return (((data->flag) & 8192) != 0);
}

void MovieSequence_use_float_set(PointerRNA *ptr, int value)
{
	Sequence *data = (Sequence *)(ptr->data);
	if (value) data->flag |= 8192;
	else data->flag &= ~8192;
}

int MovieSequence_use_reverse_frames_get(PointerRNA *ptr)
{
	Sequence *data = (Sequence *)(ptr->data);
	return (((data->flag) & 128) != 0);
}

void MovieSequence_use_reverse_frames_set(PointerRNA *ptr, int value)
{
	Sequence *data = (Sequence *)(ptr->data);
	if (value) data->flag |= 128;
	else data->flag &= ~128;
}

float MovieSequence_color_multiply_get(PointerRNA *ptr)
{
	Sequence *data = (Sequence *)(ptr->data);
	return (float)(data->mul);
}

void MovieSequence_color_multiply_set(PointerRNA *ptr, float value)
{
	Sequence *data = (Sequence *)(ptr->data);
	data->mul = CLAMPIS(value, 0.0f, 20.0f);
}

float MovieSequence_color_saturation_get(PointerRNA *ptr)
{
	Sequence *data = (Sequence *)(ptr->data);
	return (float)(data->sat);
}

void MovieSequence_color_saturation_set(PointerRNA *ptr, float value)
{
	Sequence *data = (Sequence *)(ptr->data);
	data->sat = CLAMPIS(value, 0.0f, 20.0f);
}

float MovieSequence_strobe_get(PointerRNA *ptr)
{
	Sequence *data = (Sequence *)(ptr->data);
	return (float)(data->strobe);
}

void MovieSequence_strobe_set(PointerRNA *ptr, float value)
{
	Sequence *data = (Sequence *)(ptr->data);
	data->strobe = CLAMPIS(value, 1.0f, 30.0f);
}

int MovieSequence_use_translation_get(PointerRNA *ptr)
{
	Sequence *data = (Sequence *)(ptr->data);
	return (((data->flag) & 65536) != 0);
}

void MovieSequence_use_translation_set(PointerRNA *ptr, int value)
{
	rna_Sequence_use_translation_set(ptr, value);
}

PointerRNA MovieSequence_transform_get(PointerRNA *ptr)
{
	Sequence *data = (Sequence *)(ptr->data);
	return rna_pointer_inherit_refine(ptr, &RNA_SequenceTransform, data->strip->transform);
}

int MovieSequence_use_crop_get(PointerRNA *ptr)
{
	Sequence *data = (Sequence *)(ptr->data);
	return (((data->flag) & 131072) != 0);
}

void MovieSequence_use_crop_set(PointerRNA *ptr, int value)
{
	rna_Sequence_use_crop_set(ptr, value);
}

PointerRNA MovieSequence_crop_get(PointerRNA *ptr)
{
	Sequence *data = (Sequence *)(ptr->data);
	return rna_pointer_inherit_refine(ptr, &RNA_SequenceCrop, data->strip->crop);
}

int MovieSequence_use_proxy_get(PointerRNA *ptr)
{
	Sequence *data = (Sequence *)(ptr->data);
	return (((data->flag) & 32768) != 0);
}

void MovieSequence_use_proxy_set(PointerRNA *ptr, int value)
{
	rna_Sequence_use_proxy_set(ptr, value);
}

PointerRNA MovieSequence_proxy_get(PointerRNA *ptr)
{
	Sequence *data = (Sequence *)(ptr->data);
	return rna_pointer_inherit_refine(ptr, &RNA_SequenceProxy, data->strip->proxy);
}

int MovieSequence_use_proxy_custom_directory_get(PointerRNA *ptr)
{
	Sequence *data = (Sequence *)(ptr->data);
	return (((data->flag) & 524288) != 0);
}

void MovieSequence_use_proxy_custom_directory_set(PointerRNA *ptr, int value)
{
	Sequence *data = (Sequence *)(ptr->data);
	if (value) data->flag |= 524288;
	else data->flag &= ~524288;
}

int MovieSequence_use_proxy_custom_file_get(PointerRNA *ptr)
{
	Sequence *data = (Sequence *)(ptr->data);
	return (((data->flag) & 2097152) != 0);
}

void MovieSequence_use_proxy_custom_file_set(PointerRNA *ptr, int value)
{
	Sequence *data = (Sequence *)(ptr->data);
	if (value) data->flag |= 2097152;
	else data->flag &= ~2097152;
}

int MovieSequence_animation_offset_start_get(PointerRNA *ptr)
{
	Sequence *data = (Sequence *)(ptr->data);
	return (int)(data->anim_startofs);
}

void MovieSequence_animation_offset_start_set(PointerRNA *ptr, int value)
{
	rna_Sequence_anim_startofs_final_set(ptr, value);
}

int MovieSequence_animation_offset_end_get(PointerRNA *ptr)
{
	Sequence *data = (Sequence *)(ptr->data);
	return (int)(data->anim_endofs);
}

void MovieSequence_animation_offset_end_set(PointerRNA *ptr, int value)
{
	rna_Sequence_anim_endofs_final_set(ptr, value);
}

PointerRNA MovieSequence_colorspace_settings_get(PointerRNA *ptr)
{
	Sequence *data = (Sequence *)(ptr->data);
	return rna_pointer_inherit_refine(ptr, &RNA_ColorManagedInputColorspaceSettings, &data->strip->colorspace_settings);
}

int MovieClipSequence_undistort_get(PointerRNA *ptr)
{
	Sequence *data = (Sequence *)(ptr->data);
	return (((data->clip_flag) & 1) != 0);
}

void MovieClipSequence_undistort_set(PointerRNA *ptr, int value)
{
	Sequence *data = (Sequence *)(ptr->data);
	if (value) data->clip_flag |= 1;
	else data->clip_flag &= ~1;
}

int MovieClipSequence_stabilize2d_get(PointerRNA *ptr)
{
	Sequence *data = (Sequence *)(ptr->data);
	return (((data->clip_flag) & 2) != 0);
}

void MovieClipSequence_stabilize2d_set(PointerRNA *ptr, int value)
{
	Sequence *data = (Sequence *)(ptr->data);
	if (value) data->clip_flag |= 2;
	else data->clip_flag &= ~2;
}

int MovieClipSequence_use_deinterlace_get(PointerRNA *ptr)
{
	Sequence *data = (Sequence *)(ptr->data);
	return (((data->flag) & 16) != 0);
}

void MovieClipSequence_use_deinterlace_set(PointerRNA *ptr, int value)
{
	Sequence *data = (Sequence *)(ptr->data);
	if (value) data->flag |= 16;
	else data->flag &= ~16;
}

int MovieClipSequence_alpha_mode_get(PointerRNA *ptr)
{
	Sequence *data = (Sequence *)(ptr->data);
	return (int)(data->alpha_mode);
}

void MovieClipSequence_alpha_mode_set(PointerRNA *ptr, int value)
{
	Sequence *data = (Sequence *)(ptr->data);
	data->alpha_mode = value;
}

int MovieClipSequence_use_flip_x_get(PointerRNA *ptr)
{
	Sequence *data = (Sequence *)(ptr->data);
	return (((data->flag) & 2048) != 0);
}

void MovieClipSequence_use_flip_x_set(PointerRNA *ptr, int value)
{
	Sequence *data = (Sequence *)(ptr->data);
	if (value) data->flag |= 2048;
	else data->flag &= ~2048;
}

int MovieClipSequence_use_flip_y_get(PointerRNA *ptr)
{
	Sequence *data = (Sequence *)(ptr->data);
	return (((data->flag) & 4096) != 0);
}

void MovieClipSequence_use_flip_y_set(PointerRNA *ptr, int value)
{
	Sequence *data = (Sequence *)(ptr->data);
	if (value) data->flag |= 4096;
	else data->flag &= ~4096;
}

int MovieClipSequence_use_float_get(PointerRNA *ptr)
{
	Sequence *data = (Sequence *)(ptr->data);
	return (((data->flag) & 8192) != 0);
}

void MovieClipSequence_use_float_set(PointerRNA *ptr, int value)
{
	Sequence *data = (Sequence *)(ptr->data);
	if (value) data->flag |= 8192;
	else data->flag &= ~8192;
}

int MovieClipSequence_use_reverse_frames_get(PointerRNA *ptr)
{
	Sequence *data = (Sequence *)(ptr->data);
	return (((data->flag) & 128) != 0);
}

void MovieClipSequence_use_reverse_frames_set(PointerRNA *ptr, int value)
{
	Sequence *data = (Sequence *)(ptr->data);
	if (value) data->flag |= 128;
	else data->flag &= ~128;
}

float MovieClipSequence_color_multiply_get(PointerRNA *ptr)
{
	Sequence *data = (Sequence *)(ptr->data);
	return (float)(data->mul);
}

void MovieClipSequence_color_multiply_set(PointerRNA *ptr, float value)
{
	Sequence *data = (Sequence *)(ptr->data);
	data->mul = CLAMPIS(value, 0.0f, 20.0f);
}

float MovieClipSequence_color_saturation_get(PointerRNA *ptr)
{
	Sequence *data = (Sequence *)(ptr->data);
	return (float)(data->sat);
}

void MovieClipSequence_color_saturation_set(PointerRNA *ptr, float value)
{
	Sequence *data = (Sequence *)(ptr->data);
	data->sat = CLAMPIS(value, 0.0f, 20.0f);
}

float MovieClipSequence_strobe_get(PointerRNA *ptr)
{
	Sequence *data = (Sequence *)(ptr->data);
	return (float)(data->strobe);
}

void MovieClipSequence_strobe_set(PointerRNA *ptr, float value)
{
	Sequence *data = (Sequence *)(ptr->data);
	data->strobe = CLAMPIS(value, 1.0f, 30.0f);
}

int MovieClipSequence_use_translation_get(PointerRNA *ptr)
{
	Sequence *data = (Sequence *)(ptr->data);
	return (((data->flag) & 65536) != 0);
}

void MovieClipSequence_use_translation_set(PointerRNA *ptr, int value)
{
	rna_Sequence_use_translation_set(ptr, value);
}

PointerRNA MovieClipSequence_transform_get(PointerRNA *ptr)
{
	Sequence *data = (Sequence *)(ptr->data);
	return rna_pointer_inherit_refine(ptr, &RNA_SequenceTransform, data->strip->transform);
}

int MovieClipSequence_use_crop_get(PointerRNA *ptr)
{
	Sequence *data = (Sequence *)(ptr->data);
	return (((data->flag) & 131072) != 0);
}

void MovieClipSequence_use_crop_set(PointerRNA *ptr, int value)
{
	rna_Sequence_use_crop_set(ptr, value);
}

PointerRNA MovieClipSequence_crop_get(PointerRNA *ptr)
{
	Sequence *data = (Sequence *)(ptr->data);
	return rna_pointer_inherit_refine(ptr, &RNA_SequenceCrop, data->strip->crop);
}

int MovieClipSequence_animation_offset_start_get(PointerRNA *ptr)
{
	Sequence *data = (Sequence *)(ptr->data);
	return (int)(data->anim_startofs);
}

void MovieClipSequence_animation_offset_start_set(PointerRNA *ptr, int value)
{
	rna_Sequence_anim_startofs_final_set(ptr, value);
}

int MovieClipSequence_animation_offset_end_get(PointerRNA *ptr)
{
	Sequence *data = (Sequence *)(ptr->data);
	return (int)(data->anim_endofs);
}

void MovieClipSequence_animation_offset_end_set(PointerRNA *ptr, int value)
{
	rna_Sequence_anim_endofs_final_set(ptr, value);
}

PointerRNA MaskSequence_mask_get(PointerRNA *ptr)
{
	Sequence *data = (Sequence *)(ptr->data);
	return rna_pointer_inherit_refine(ptr, &RNA_Mask, data->mask);
}

void MaskSequence_mask_set(PointerRNA *ptr, PointerRNA value)
{
	Sequence *data = (Sequence *)(ptr->data);

	if (data->mask)
		id_us_min((ID *)data->mask);
	if (value.data)
		id_us_plus((ID *)value.data);

	data->mask = value.data;
}

int MaskSequence_use_deinterlace_get(PointerRNA *ptr)
{
	Sequence *data = (Sequence *)(ptr->data);
	return (((data->flag) & 16) != 0);
}

void MaskSequence_use_deinterlace_set(PointerRNA *ptr, int value)
{
	Sequence *data = (Sequence *)(ptr->data);
	if (value) data->flag |= 16;
	else data->flag &= ~16;
}

int MaskSequence_alpha_mode_get(PointerRNA *ptr)
{
	Sequence *data = (Sequence *)(ptr->data);
	return (int)(data->alpha_mode);
}

void MaskSequence_alpha_mode_set(PointerRNA *ptr, int value)
{
	Sequence *data = (Sequence *)(ptr->data);
	data->alpha_mode = value;
}

int MaskSequence_use_flip_x_get(PointerRNA *ptr)
{
	Sequence *data = (Sequence *)(ptr->data);
	return (((data->flag) & 2048) != 0);
}

void MaskSequence_use_flip_x_set(PointerRNA *ptr, int value)
{
	Sequence *data = (Sequence *)(ptr->data);
	if (value) data->flag |= 2048;
	else data->flag &= ~2048;
}

int MaskSequence_use_flip_y_get(PointerRNA *ptr)
{
	Sequence *data = (Sequence *)(ptr->data);
	return (((data->flag) & 4096) != 0);
}

void MaskSequence_use_flip_y_set(PointerRNA *ptr, int value)
{
	Sequence *data = (Sequence *)(ptr->data);
	if (value) data->flag |= 4096;
	else data->flag &= ~4096;
}

int MaskSequence_use_float_get(PointerRNA *ptr)
{
	Sequence *data = (Sequence *)(ptr->data);
	return (((data->flag) & 8192) != 0);
}

void MaskSequence_use_float_set(PointerRNA *ptr, int value)
{
	Sequence *data = (Sequence *)(ptr->data);
	if (value) data->flag |= 8192;
	else data->flag &= ~8192;
}

int MaskSequence_use_reverse_frames_get(PointerRNA *ptr)
{
	Sequence *data = (Sequence *)(ptr->data);
	return (((data->flag) & 128) != 0);
}

void MaskSequence_use_reverse_frames_set(PointerRNA *ptr, int value)
{
	Sequence *data = (Sequence *)(ptr->data);
	if (value) data->flag |= 128;
	else data->flag &= ~128;
}

float MaskSequence_color_multiply_get(PointerRNA *ptr)
{
	Sequence *data = (Sequence *)(ptr->data);
	return (float)(data->mul);
}

void MaskSequence_color_multiply_set(PointerRNA *ptr, float value)
{
	Sequence *data = (Sequence *)(ptr->data);
	data->mul = CLAMPIS(value, 0.0f, 20.0f);
}

float MaskSequence_color_saturation_get(PointerRNA *ptr)
{
	Sequence *data = (Sequence *)(ptr->data);
	return (float)(data->sat);
}

void MaskSequence_color_saturation_set(PointerRNA *ptr, float value)
{
	Sequence *data = (Sequence *)(ptr->data);
	data->sat = CLAMPIS(value, 0.0f, 20.0f);
}

float MaskSequence_strobe_get(PointerRNA *ptr)
{
	Sequence *data = (Sequence *)(ptr->data);
	return (float)(data->strobe);
}

void MaskSequence_strobe_set(PointerRNA *ptr, float value)
{
	Sequence *data = (Sequence *)(ptr->data);
	data->strobe = CLAMPIS(value, 1.0f, 30.0f);
}

int MaskSequence_use_translation_get(PointerRNA *ptr)
{
	Sequence *data = (Sequence *)(ptr->data);
	return (((data->flag) & 65536) != 0);
}

void MaskSequence_use_translation_set(PointerRNA *ptr, int value)
{
	rna_Sequence_use_translation_set(ptr, value);
}

PointerRNA MaskSequence_transform_get(PointerRNA *ptr)
{
	Sequence *data = (Sequence *)(ptr->data);
	return rna_pointer_inherit_refine(ptr, &RNA_SequenceTransform, data->strip->transform);
}

int MaskSequence_use_crop_get(PointerRNA *ptr)
{
	Sequence *data = (Sequence *)(ptr->data);
	return (((data->flag) & 131072) != 0);
}

void MaskSequence_use_crop_set(PointerRNA *ptr, int value)
{
	rna_Sequence_use_crop_set(ptr, value);
}

PointerRNA MaskSequence_crop_get(PointerRNA *ptr)
{
	Sequence *data = (Sequence *)(ptr->data);
	return rna_pointer_inherit_refine(ptr, &RNA_SequenceCrop, data->strip->crop);
}

int MaskSequence_animation_offset_start_get(PointerRNA *ptr)
{
	Sequence *data = (Sequence *)(ptr->data);
	return (int)(data->anim_startofs);
}

void MaskSequence_animation_offset_start_set(PointerRNA *ptr, int value)
{
	rna_Sequence_anim_startofs_final_set(ptr, value);
}

int MaskSequence_animation_offset_end_get(PointerRNA *ptr)
{
	Sequence *data = (Sequence *)(ptr->data);
	return (int)(data->anim_endofs);
}

void MaskSequence_animation_offset_end_set(PointerRNA *ptr, int value)
{
	rna_Sequence_anim_endofs_final_set(ptr, value);
}

PointerRNA SoundSequence_sound_get(PointerRNA *ptr)
{
	Sequence *data = (Sequence *)(ptr->data);
	return rna_pointer_inherit_refine(ptr, &RNA_Sound, data->sound);
}

float SoundSequence_volume_get(PointerRNA *ptr)
{
	Sequence *data = (Sequence *)(ptr->data);
	return (float)(data->volume);
}

void SoundSequence_volume_set(PointerRNA *ptr, float value)
{
	rna_Sequence_volume_set(ptr, value);
}

float SoundSequence_pitch_get(PointerRNA *ptr)
{
	Sequence *data = (Sequence *)(ptr->data);
	return (float)(data->pitch);
}

void SoundSequence_pitch_set(PointerRNA *ptr, float value)
{
	rna_Sequence_pitch_set(ptr, value);
}

float SoundSequence_pan_get(PointerRNA *ptr)
{
	Sequence *data = (Sequence *)(ptr->data);
	return (float)(data->pan);
}

void SoundSequence_pan_set(PointerRNA *ptr, float value)
{
	rna_Sequence_pan_set(ptr, value);
}

void SoundSequence_filepath_get(PointerRNA *ptr, char *value)
{
	rna_Sequence_filepath_get(ptr, value);
}

int SoundSequence_filepath_length(PointerRNA *ptr)
{
	return rna_Sequence_filepath_length(ptr);
}

void SoundSequence_filepath_set(PointerRNA *ptr, const char *value)
{
	rna_Sequence_filepath_set(ptr, value);
}

int SoundSequence_show_waveform_get(PointerRNA *ptr)
{
	Sequence *data = (Sequence *)(ptr->data);
	return (((data->flag) & 134217728) != 0);
}

void SoundSequence_show_waveform_set(PointerRNA *ptr, int value)
{
	Sequence *data = (Sequence *)(ptr->data);
	if (value) data->flag |= 134217728;
	else data->flag &= ~134217728;
}

int SoundSequence_animation_offset_start_get(PointerRNA *ptr)
{
	Sequence *data = (Sequence *)(ptr->data);
	return (int)(data->anim_startofs);
}

void SoundSequence_animation_offset_start_set(PointerRNA *ptr, int value)
{
	rna_Sequence_anim_startofs_final_set(ptr, value);
}

int SoundSequence_animation_offset_end_get(PointerRNA *ptr)
{
	Sequence *data = (Sequence *)(ptr->data);
	return (int)(data->anim_endofs);
}

void SoundSequence_animation_offset_end_set(PointerRNA *ptr, int value)
{
	rna_Sequence_anim_endofs_final_set(ptr, value);
}

int EffectSequence_use_deinterlace_get(PointerRNA *ptr)
{
	Sequence *data = (Sequence *)(ptr->data);
	return (((data->flag) & 16) != 0);
}

void EffectSequence_use_deinterlace_set(PointerRNA *ptr, int value)
{
	Sequence *data = (Sequence *)(ptr->data);
	if (value) data->flag |= 16;
	else data->flag &= ~16;
}

int EffectSequence_alpha_mode_get(PointerRNA *ptr)
{
	Sequence *data = (Sequence *)(ptr->data);
	return (int)(data->alpha_mode);
}

void EffectSequence_alpha_mode_set(PointerRNA *ptr, int value)
{
	Sequence *data = (Sequence *)(ptr->data);
	data->alpha_mode = value;
}

int EffectSequence_use_flip_x_get(PointerRNA *ptr)
{
	Sequence *data = (Sequence *)(ptr->data);
	return (((data->flag) & 2048) != 0);
}

void EffectSequence_use_flip_x_set(PointerRNA *ptr, int value)
{
	Sequence *data = (Sequence *)(ptr->data);
	if (value) data->flag |= 2048;
	else data->flag &= ~2048;
}

int EffectSequence_use_flip_y_get(PointerRNA *ptr)
{
	Sequence *data = (Sequence *)(ptr->data);
	return (((data->flag) & 4096) != 0);
}

void EffectSequence_use_flip_y_set(PointerRNA *ptr, int value)
{
	Sequence *data = (Sequence *)(ptr->data);
	if (value) data->flag |= 4096;
	else data->flag &= ~4096;
}

int EffectSequence_use_float_get(PointerRNA *ptr)
{
	Sequence *data = (Sequence *)(ptr->data);
	return (((data->flag) & 8192) != 0);
}

void EffectSequence_use_float_set(PointerRNA *ptr, int value)
{
	Sequence *data = (Sequence *)(ptr->data);
	if (value) data->flag |= 8192;
	else data->flag &= ~8192;
}

int EffectSequence_use_reverse_frames_get(PointerRNA *ptr)
{
	Sequence *data = (Sequence *)(ptr->data);
	return (((data->flag) & 128) != 0);
}

void EffectSequence_use_reverse_frames_set(PointerRNA *ptr, int value)
{
	Sequence *data = (Sequence *)(ptr->data);
	if (value) data->flag |= 128;
	else data->flag &= ~128;
}

float EffectSequence_color_multiply_get(PointerRNA *ptr)
{
	Sequence *data = (Sequence *)(ptr->data);
	return (float)(data->mul);
}

void EffectSequence_color_multiply_set(PointerRNA *ptr, float value)
{
	Sequence *data = (Sequence *)(ptr->data);
	data->mul = CLAMPIS(value, 0.0f, 20.0f);
}

float EffectSequence_color_saturation_get(PointerRNA *ptr)
{
	Sequence *data = (Sequence *)(ptr->data);
	return (float)(data->sat);
}

void EffectSequence_color_saturation_set(PointerRNA *ptr, float value)
{
	Sequence *data = (Sequence *)(ptr->data);
	data->sat = CLAMPIS(value, 0.0f, 20.0f);
}

float EffectSequence_strobe_get(PointerRNA *ptr)
{
	Sequence *data = (Sequence *)(ptr->data);
	return (float)(data->strobe);
}

void EffectSequence_strobe_set(PointerRNA *ptr, float value)
{
	Sequence *data = (Sequence *)(ptr->data);
	data->strobe = CLAMPIS(value, 1.0f, 30.0f);
}

int EffectSequence_use_translation_get(PointerRNA *ptr)
{
	Sequence *data = (Sequence *)(ptr->data);
	return (((data->flag) & 65536) != 0);
}

void EffectSequence_use_translation_set(PointerRNA *ptr, int value)
{
	rna_Sequence_use_translation_set(ptr, value);
}

PointerRNA EffectSequence_transform_get(PointerRNA *ptr)
{
	Sequence *data = (Sequence *)(ptr->data);
	return rna_pointer_inherit_refine(ptr, &RNA_SequenceTransform, data->strip->transform);
}

int EffectSequence_use_crop_get(PointerRNA *ptr)
{
	Sequence *data = (Sequence *)(ptr->data);
	return (((data->flag) & 131072) != 0);
}

void EffectSequence_use_crop_set(PointerRNA *ptr, int value)
{
	rna_Sequence_use_crop_set(ptr, value);
}

PointerRNA EffectSequence_crop_get(PointerRNA *ptr)
{
	Sequence *data = (Sequence *)(ptr->data);
	return rna_pointer_inherit_refine(ptr, &RNA_SequenceCrop, data->strip->crop);
}

int EffectSequence_use_proxy_get(PointerRNA *ptr)
{
	Sequence *data = (Sequence *)(ptr->data);
	return (((data->flag) & 32768) != 0);
}

void EffectSequence_use_proxy_set(PointerRNA *ptr, int value)
{
	rna_Sequence_use_proxy_set(ptr, value);
}

PointerRNA EffectSequence_proxy_get(PointerRNA *ptr)
{
	Sequence *data = (Sequence *)(ptr->data);
	return rna_pointer_inherit_refine(ptr, &RNA_SequenceProxy, data->strip->proxy);
}

int EffectSequence_use_proxy_custom_directory_get(PointerRNA *ptr)
{
	Sequence *data = (Sequence *)(ptr->data);
	return (((data->flag) & 524288) != 0);
}

void EffectSequence_use_proxy_custom_directory_set(PointerRNA *ptr, int value)
{
	Sequence *data = (Sequence *)(ptr->data);
	if (value) data->flag |= 524288;
	else data->flag &= ~524288;
}

int EffectSequence_use_proxy_custom_file_get(PointerRNA *ptr)
{
	Sequence *data = (Sequence *)(ptr->data);
	return (((data->flag) & 2097152) != 0);
}

void EffectSequence_use_proxy_custom_file_set(PointerRNA *ptr, int value)
{
	Sequence *data = (Sequence *)(ptr->data);
	if (value) data->flag |= 2097152;
	else data->flag &= ~2097152;
}

int AddSequence_input_count_get(PointerRNA *ptr)
{
	return rna_Sequence_input_count_get(ptr);
}

PointerRNA AddSequence_input_1_get(PointerRNA *ptr)
{
	Sequence *data = (Sequence *)(ptr->data);
	return rna_pointer_inherit_refine(ptr, &RNA_Sequence, data->seq1);
}

void AddSequence_input_1_set(PointerRNA *ptr, PointerRNA value)
{
	Sequence *data = (Sequence *)(ptr->data);
	data->seq1 = value.data;
}

PointerRNA AddSequence_input_2_get(PointerRNA *ptr)
{
	Sequence *data = (Sequence *)(ptr->data);
	return rna_pointer_inherit_refine(ptr, &RNA_Sequence, data->seq2);
}

void AddSequence_input_2_set(PointerRNA *ptr, PointerRNA value)
{
	Sequence *data = (Sequence *)(ptr->data);
	data->seq2 = value.data;
}

int AdjustmentSequence_input_count_get(PointerRNA *ptr)
{
	return rna_Sequence_input_count_get(ptr);
}

int AdjustmentSequence_animation_offset_start_get(PointerRNA *ptr)
{
	Sequence *data = (Sequence *)(ptr->data);
	return (int)(data->anim_startofs);
}

void AdjustmentSequence_animation_offset_start_set(PointerRNA *ptr, int value)
{
	rna_Sequence_anim_startofs_final_set(ptr, value);
}

int AdjustmentSequence_animation_offset_end_get(PointerRNA *ptr)
{
	Sequence *data = (Sequence *)(ptr->data);
	return (int)(data->anim_endofs);
}

void AdjustmentSequence_animation_offset_end_set(PointerRNA *ptr, int value)
{
	rna_Sequence_anim_endofs_final_set(ptr, value);
}

int AlphaOverSequence_input_count_get(PointerRNA *ptr)
{
	return rna_Sequence_input_count_get(ptr);
}

PointerRNA AlphaOverSequence_input_1_get(PointerRNA *ptr)
{
	Sequence *data = (Sequence *)(ptr->data);
	return rna_pointer_inherit_refine(ptr, &RNA_Sequence, data->seq1);
}

void AlphaOverSequence_input_1_set(PointerRNA *ptr, PointerRNA value)
{
	Sequence *data = (Sequence *)(ptr->data);
	data->seq1 = value.data;
}

PointerRNA AlphaOverSequence_input_2_get(PointerRNA *ptr)
{
	Sequence *data = (Sequence *)(ptr->data);
	return rna_pointer_inherit_refine(ptr, &RNA_Sequence, data->seq2);
}

void AlphaOverSequence_input_2_set(PointerRNA *ptr, PointerRNA value)
{
	Sequence *data = (Sequence *)(ptr->data);
	data->seq2 = value.data;
}

int AlphaUnderSequence_input_count_get(PointerRNA *ptr)
{
	return rna_Sequence_input_count_get(ptr);
}

PointerRNA AlphaUnderSequence_input_1_get(PointerRNA *ptr)
{
	Sequence *data = (Sequence *)(ptr->data);
	return rna_pointer_inherit_refine(ptr, &RNA_Sequence, data->seq1);
}

void AlphaUnderSequence_input_1_set(PointerRNA *ptr, PointerRNA value)
{
	Sequence *data = (Sequence *)(ptr->data);
	data->seq1 = value.data;
}

PointerRNA AlphaUnderSequence_input_2_get(PointerRNA *ptr)
{
	Sequence *data = (Sequence *)(ptr->data);
	return rna_pointer_inherit_refine(ptr, &RNA_Sequence, data->seq2);
}

void AlphaUnderSequence_input_2_set(PointerRNA *ptr, PointerRNA value)
{
	Sequence *data = (Sequence *)(ptr->data);
	data->seq2 = value.data;
}

int ColorSequence_input_count_get(PointerRNA *ptr)
{
	return rna_Sequence_input_count_get(ptr);
}

void ColorSequence_color_get(PointerRNA *ptr, float values[3])
{
	SolidColorVars *data = (SolidColorVars *)(((Sequence *)ptr->data)->effectdata);
	unsigned int i;

	for (i = 0; i < 3; i++) {
		values[i] = (float)(((float *)data->col)[i]);
	}
}

void ColorSequence_color_set(PointerRNA *ptr, const float values[3])
{
	SolidColorVars *data = (SolidColorVars *)(((Sequence *)ptr->data)->effectdata);
	unsigned int i;

	for (i = 0; i < 3; i++) {
		((float *)data->col)[i] = CLAMPIS(values[i], 0.0f, FLT_MAX);
	}
}

int CrossSequence_input_count_get(PointerRNA *ptr)
{
	return rna_Sequence_input_count_get(ptr);
}

PointerRNA CrossSequence_input_1_get(PointerRNA *ptr)
{
	Sequence *data = (Sequence *)(ptr->data);
	return rna_pointer_inherit_refine(ptr, &RNA_Sequence, data->seq1);
}

void CrossSequence_input_1_set(PointerRNA *ptr, PointerRNA value)
{
	Sequence *data = (Sequence *)(ptr->data);
	data->seq1 = value.data;
}

PointerRNA CrossSequence_input_2_get(PointerRNA *ptr)
{
	Sequence *data = (Sequence *)(ptr->data);
	return rna_pointer_inherit_refine(ptr, &RNA_Sequence, data->seq2);
}

void CrossSequence_input_2_set(PointerRNA *ptr, PointerRNA value)
{
	Sequence *data = (Sequence *)(ptr->data);
	data->seq2 = value.data;
}

int GammaCrossSequence_input_count_get(PointerRNA *ptr)
{
	return rna_Sequence_input_count_get(ptr);
}

PointerRNA GammaCrossSequence_input_1_get(PointerRNA *ptr)
{
	Sequence *data = (Sequence *)(ptr->data);
	return rna_pointer_inherit_refine(ptr, &RNA_Sequence, data->seq1);
}

void GammaCrossSequence_input_1_set(PointerRNA *ptr, PointerRNA value)
{
	Sequence *data = (Sequence *)(ptr->data);
	data->seq1 = value.data;
}

PointerRNA GammaCrossSequence_input_2_get(PointerRNA *ptr)
{
	Sequence *data = (Sequence *)(ptr->data);
	return rna_pointer_inherit_refine(ptr, &RNA_Sequence, data->seq2);
}

void GammaCrossSequence_input_2_set(PointerRNA *ptr, PointerRNA value)
{
	Sequence *data = (Sequence *)(ptr->data);
	data->seq2 = value.data;
}

int GlowSequence_input_count_get(PointerRNA *ptr)
{
	return rna_Sequence_input_count_get(ptr);
}

PointerRNA GlowSequence_input_1_get(PointerRNA *ptr)
{
	Sequence *data = (Sequence *)(ptr->data);
	return rna_pointer_inherit_refine(ptr, &RNA_Sequence, data->seq1);
}

void GlowSequence_input_1_set(PointerRNA *ptr, PointerRNA value)
{
	Sequence *data = (Sequence *)(ptr->data);
	data->seq1 = value.data;
}

float GlowSequence_threshold_get(PointerRNA *ptr)
{
	GlowVars *data = (GlowVars *)(((Sequence *)ptr->data)->effectdata);
	return (float)(data->fMini);
}

void GlowSequence_threshold_set(PointerRNA *ptr, float value)
{
	GlowVars *data = (GlowVars *)(((Sequence *)ptr->data)->effectdata);
	data->fMini = CLAMPIS(value, 0.0f, 1.0f);
}

float GlowSequence_clamp_get(PointerRNA *ptr)
{
	GlowVars *data = (GlowVars *)(((Sequence *)ptr->data)->effectdata);
	return (float)(data->fClamp);
}

void GlowSequence_clamp_set(PointerRNA *ptr, float value)
{
	GlowVars *data = (GlowVars *)(((Sequence *)ptr->data)->effectdata);
	data->fClamp = CLAMPIS(value, 0.0f, 1.0f);
}

float GlowSequence_boost_factor_get(PointerRNA *ptr)
{
	GlowVars *data = (GlowVars *)(((Sequence *)ptr->data)->effectdata);
	return (float)(data->fBoost);
}

void GlowSequence_boost_factor_set(PointerRNA *ptr, float value)
{
	GlowVars *data = (GlowVars *)(((Sequence *)ptr->data)->effectdata);
	data->fBoost = CLAMPIS(value, 0.0f, 10.0f);
}

float GlowSequence_blur_radius_get(PointerRNA *ptr)
{
	GlowVars *data = (GlowVars *)(((Sequence *)ptr->data)->effectdata);
	return (float)(data->dDist);
}

void GlowSequence_blur_radius_set(PointerRNA *ptr, float value)
{
	GlowVars *data = (GlowVars *)(((Sequence *)ptr->data)->effectdata);
	data->dDist = CLAMPIS(value, 0.5000000000f, 20.0f);
}

int GlowSequence_quality_get(PointerRNA *ptr)
{
	GlowVars *data = (GlowVars *)(((Sequence *)ptr->data)->effectdata);
	return (int)(data->dQuality);
}

void GlowSequence_quality_set(PointerRNA *ptr, int value)
{
	GlowVars *data = (GlowVars *)(((Sequence *)ptr->data)->effectdata);
	data->dQuality = CLAMPIS(value, 1, 5);
}

int GlowSequence_use_only_boost_get(PointerRNA *ptr)
{
	GlowVars *data = (GlowVars *)(((Sequence *)ptr->data)->effectdata);
	return (int)(data->bNoComp);
}

void GlowSequence_use_only_boost_set(PointerRNA *ptr, int value)
{
	GlowVars *data = (GlowVars *)(((Sequence *)ptr->data)->effectdata);
	data->bNoComp = value;
}

int MulticamSequence_input_count_get(PointerRNA *ptr)
{
	return rna_Sequence_input_count_get(ptr);
}

int MulticamSequence_multicam_source_get(PointerRNA *ptr)
{
	Sequence *data = (Sequence *)(ptr->data);
	return (int)(data->multicam_source);
}

void MulticamSequence_multicam_source_set(PointerRNA *ptr, int value)
{
	Sequence *data = (Sequence *)(ptr->data);
	data->multicam_source = CLAMPIS(value, 0, 31);
}

int MulticamSequence_animation_offset_start_get(PointerRNA *ptr)
{
	Sequence *data = (Sequence *)(ptr->data);
	return (int)(data->anim_startofs);
}

void MulticamSequence_animation_offset_start_set(PointerRNA *ptr, int value)
{
	rna_Sequence_anim_startofs_final_set(ptr, value);
}

int MulticamSequence_animation_offset_end_get(PointerRNA *ptr)
{
	Sequence *data = (Sequence *)(ptr->data);
	return (int)(data->anim_endofs);
}

void MulticamSequence_animation_offset_end_set(PointerRNA *ptr, int value)
{
	rna_Sequence_anim_endofs_final_set(ptr, value);
}

int MultiplySequence_input_count_get(PointerRNA *ptr)
{
	return rna_Sequence_input_count_get(ptr);
}

PointerRNA MultiplySequence_input_1_get(PointerRNA *ptr)
{
	Sequence *data = (Sequence *)(ptr->data);
	return rna_pointer_inherit_refine(ptr, &RNA_Sequence, data->seq1);
}

void MultiplySequence_input_1_set(PointerRNA *ptr, PointerRNA value)
{
	Sequence *data = (Sequence *)(ptr->data);
	data->seq1 = value.data;
}

PointerRNA MultiplySequence_input_2_get(PointerRNA *ptr)
{
	Sequence *data = (Sequence *)(ptr->data);
	return rna_pointer_inherit_refine(ptr, &RNA_Sequence, data->seq2);
}

void MultiplySequence_input_2_set(PointerRNA *ptr, PointerRNA value)
{
	Sequence *data = (Sequence *)(ptr->data);
	data->seq2 = value.data;
}

int OverDropSequence_input_count_get(PointerRNA *ptr)
{
	return rna_Sequence_input_count_get(ptr);
}

PointerRNA OverDropSequence_input_1_get(PointerRNA *ptr)
{
	Sequence *data = (Sequence *)(ptr->data);
	return rna_pointer_inherit_refine(ptr, &RNA_Sequence, data->seq1);
}

void OverDropSequence_input_1_set(PointerRNA *ptr, PointerRNA value)
{
	Sequence *data = (Sequence *)(ptr->data);
	data->seq1 = value.data;
}

PointerRNA OverDropSequence_input_2_get(PointerRNA *ptr)
{
	Sequence *data = (Sequence *)(ptr->data);
	return rna_pointer_inherit_refine(ptr, &RNA_Sequence, data->seq2);
}

void OverDropSequence_input_2_set(PointerRNA *ptr, PointerRNA value)
{
	Sequence *data = (Sequence *)(ptr->data);
	data->seq2 = value.data;
}

int SpeedControlSequence_input_count_get(PointerRNA *ptr)
{
	return rna_Sequence_input_count_get(ptr);
}

PointerRNA SpeedControlSequence_input_1_get(PointerRNA *ptr)
{
	Sequence *data = (Sequence *)(ptr->data);
	return rna_pointer_inherit_refine(ptr, &RNA_Sequence, data->seq1);
}

void SpeedControlSequence_input_1_set(PointerRNA *ptr, PointerRNA value)
{
	Sequence *data = (Sequence *)(ptr->data);
	data->seq1 = value.data;
}

float SpeedControlSequence_multiply_speed_get(PointerRNA *ptr)
{
	SpeedControlVars *data = (SpeedControlVars *)(((Sequence *)ptr->data)->effectdata);
	return (float)(data->globalSpeed);
}

void SpeedControlSequence_multiply_speed_set(PointerRNA *ptr, float value)
{
	SpeedControlVars *data = (SpeedControlVars *)(((Sequence *)ptr->data)->effectdata);
	data->globalSpeed = CLAMPIS(value, 0.0f, FLT_MAX);
}

int SpeedControlSequence_use_as_speed_get(PointerRNA *ptr)
{
	SpeedControlVars *data = (SpeedControlVars *)(((Sequence *)ptr->data)->effectdata);
	return (((data->flags) & 1) != 0);
}

void SpeedControlSequence_use_as_speed_set(PointerRNA *ptr, int value)
{
	SpeedControlVars *data = (SpeedControlVars *)(((Sequence *)ptr->data)->effectdata);
	if (value) data->flags |= 1;
	else data->flags &= ~1;
}

int SpeedControlSequence_scale_to_length_get(PointerRNA *ptr)
{
	SpeedControlVars *data = (SpeedControlVars *)(((Sequence *)ptr->data)->effectdata);
	return (((data->flags) & 4) != 0);
}

void SpeedControlSequence_scale_to_length_set(PointerRNA *ptr, int value)
{
	SpeedControlVars *data = (SpeedControlVars *)(((Sequence *)ptr->data)->effectdata);
	if (value) data->flags |= 4;
	else data->flags &= ~4;
}

int SubtractSequence_input_count_get(PointerRNA *ptr)
{
	return rna_Sequence_input_count_get(ptr);
}

PointerRNA SubtractSequence_input_1_get(PointerRNA *ptr)
{
	Sequence *data = (Sequence *)(ptr->data);
	return rna_pointer_inherit_refine(ptr, &RNA_Sequence, data->seq1);
}

void SubtractSequence_input_1_set(PointerRNA *ptr, PointerRNA value)
{
	Sequence *data = (Sequence *)(ptr->data);
	data->seq1 = value.data;
}

PointerRNA SubtractSequence_input_2_get(PointerRNA *ptr)
{
	Sequence *data = (Sequence *)(ptr->data);
	return rna_pointer_inherit_refine(ptr, &RNA_Sequence, data->seq2);
}

void SubtractSequence_input_2_set(PointerRNA *ptr, PointerRNA value)
{
	Sequence *data = (Sequence *)(ptr->data);
	data->seq2 = value.data;
}

int TransformSequence_input_count_get(PointerRNA *ptr)
{
	return rna_Sequence_input_count_get(ptr);
}

PointerRNA TransformSequence_input_1_get(PointerRNA *ptr)
{
	Sequence *data = (Sequence *)(ptr->data);
	return rna_pointer_inherit_refine(ptr, &RNA_Sequence, data->seq1);
}

void TransformSequence_input_1_set(PointerRNA *ptr, PointerRNA value)
{
	Sequence *data = (Sequence *)(ptr->data);
	data->seq1 = value.data;
}

float TransformSequence_scale_start_x_get(PointerRNA *ptr)
{
	TransformVars *data = (TransformVars *)(((Sequence *)ptr->data)->effectdata);
	return (float)(data->ScalexIni);
}

void TransformSequence_scale_start_x_set(PointerRNA *ptr, float value)
{
	TransformVars *data = (TransformVars *)(((Sequence *)ptr->data)->effectdata);
	data->ScalexIni = CLAMPIS(value, 0.0f, FLT_MAX);
}

float TransformSequence_scale_start_y_get(PointerRNA *ptr)
{
	TransformVars *data = (TransformVars *)(((Sequence *)ptr->data)->effectdata);
	return (float)(data->ScaleyIni);
}

void TransformSequence_scale_start_y_set(PointerRNA *ptr, float value)
{
	TransformVars *data = (TransformVars *)(((Sequence *)ptr->data)->effectdata);
	data->ScaleyIni = CLAMPIS(value, 0.0f, FLT_MAX);
}

int TransformSequence_use_uniform_scale_get(PointerRNA *ptr)
{
	TransformVars *data = (TransformVars *)(((Sequence *)ptr->data)->effectdata);
	return (int)(data->uniform_scale);
}

void TransformSequence_use_uniform_scale_set(PointerRNA *ptr, int value)
{
	TransformVars *data = (TransformVars *)(((Sequence *)ptr->data)->effectdata);
	data->uniform_scale = value;
}

float TransformSequence_translate_start_x_get(PointerRNA *ptr)
{
	TransformVars *data = (TransformVars *)(((Sequence *)ptr->data)->effectdata);
	return (float)(data->xIni);
}

void TransformSequence_translate_start_x_set(PointerRNA *ptr, float value)
{
	TransformVars *data = (TransformVars *)(((Sequence *)ptr->data)->effectdata);
	data->xIni = value;
}

float TransformSequence_translate_start_y_get(PointerRNA *ptr)
{
	TransformVars *data = (TransformVars *)(((Sequence *)ptr->data)->effectdata);
	return (float)(data->yIni);
}

void TransformSequence_translate_start_y_set(PointerRNA *ptr, float value)
{
	TransformVars *data = (TransformVars *)(((Sequence *)ptr->data)->effectdata);
	data->yIni = value;
}

float TransformSequence_rotation_start_get(PointerRNA *ptr)
{
	TransformVars *data = (TransformVars *)(((Sequence *)ptr->data)->effectdata);
	return (float)(data->rotIni);
}

void TransformSequence_rotation_start_set(PointerRNA *ptr, float value)
{
	TransformVars *data = (TransformVars *)(((Sequence *)ptr->data)->effectdata);
	data->rotIni = CLAMPIS(value, -360.0f, 360.0f);
}

int TransformSequence_translation_unit_get(PointerRNA *ptr)
{
	TransformVars *data = (TransformVars *)(((Sequence *)ptr->data)->effectdata);
	return (int)(data->percent);
}

void TransformSequence_translation_unit_set(PointerRNA *ptr, int value)
{
	TransformVars *data = (TransformVars *)(((Sequence *)ptr->data)->effectdata);
	data->percent = value;
}

int TransformSequence_interpolation_get(PointerRNA *ptr)
{
	TransformVars *data = (TransformVars *)(((Sequence *)ptr->data)->effectdata);
	return (int)(data->interpolation);
}

void TransformSequence_interpolation_set(PointerRNA *ptr, int value)
{
	TransformVars *data = (TransformVars *)(((Sequence *)ptr->data)->effectdata);
	data->interpolation = value;
}

int WipeSequence_input_count_get(PointerRNA *ptr)
{
	return rna_Sequence_input_count_get(ptr);
}

PointerRNA WipeSequence_input_1_get(PointerRNA *ptr)
{
	Sequence *data = (Sequence *)(ptr->data);
	return rna_pointer_inherit_refine(ptr, &RNA_Sequence, data->seq1);
}

void WipeSequence_input_1_set(PointerRNA *ptr, PointerRNA value)
{
	Sequence *data = (Sequence *)(ptr->data);
	data->seq1 = value.data;
}

float WipeSequence_blur_width_get(PointerRNA *ptr)
{
	WipeVars *data = (WipeVars *)(((Sequence *)ptr->data)->effectdata);
	return (float)(data->edgeWidth);
}

void WipeSequence_blur_width_set(PointerRNA *ptr, float value)
{
	WipeVars *data = (WipeVars *)(((Sequence *)ptr->data)->effectdata);
	data->edgeWidth = CLAMPIS(value, 0.0f, 1.0f);
}

float WipeSequence_angle_get(PointerRNA *ptr)
{
	WipeVars *data = (WipeVars *)(((Sequence *)ptr->data)->effectdata);
	return (float)(data->angle);
}

void WipeSequence_angle_set(PointerRNA *ptr, float value)
{
	WipeVars *data = (WipeVars *)(((Sequence *)ptr->data)->effectdata);
	data->angle = CLAMPIS(value, -1.5707963705f, 1.5707963705f);
}

int WipeSequence_direction_get(PointerRNA *ptr)
{
	WipeVars *data = (WipeVars *)(((Sequence *)ptr->data)->effectdata);
	return (int)(data->forward);
}

void WipeSequence_direction_set(PointerRNA *ptr, int value)
{
	WipeVars *data = (WipeVars *)(((Sequence *)ptr->data)->effectdata);
	data->forward = value;
}

int WipeSequence_transition_type_get(PointerRNA *ptr)
{
	WipeVars *data = (WipeVars *)(((Sequence *)ptr->data)->effectdata);
	return (int)(data->wipetype);
}

void WipeSequence_transition_type_set(PointerRNA *ptr, int value)
{
	WipeVars *data = (WipeVars *)(((Sequence *)ptr->data)->effectdata);
	data->wipetype = value;
}

int GaussianBlurSequence_input_count_get(PointerRNA *ptr)
{
	return rna_Sequence_input_count_get(ptr);
}

PointerRNA GaussianBlurSequence_input_1_get(PointerRNA *ptr)
{
	Sequence *data = (Sequence *)(ptr->data);
	return rna_pointer_inherit_refine(ptr, &RNA_Sequence, data->seq1);
}

void GaussianBlurSequence_input_1_set(PointerRNA *ptr, PointerRNA value)
{
	Sequence *data = (Sequence *)(ptr->data);
	data->seq1 = value.data;
}

float GaussianBlurSequence_size_x_get(PointerRNA *ptr)
{
	GaussianBlurVars *data = (GaussianBlurVars *)(((Sequence *)ptr->data)->effectdata);
	return (float)(data->size_x);
}

void GaussianBlurSequence_size_x_set(PointerRNA *ptr, float value)
{
	GaussianBlurVars *data = (GaussianBlurVars *)(((Sequence *)ptr->data)->effectdata);
	data->size_x = CLAMPIS(value, 0.0f, FLT_MAX);
}

float GaussianBlurSequence_size_y_get(PointerRNA *ptr)
{
	GaussianBlurVars *data = (GaussianBlurVars *)(((Sequence *)ptr->data)->effectdata);
	return (float)(data->size_y);
}

void GaussianBlurSequence_size_y_set(PointerRNA *ptr, float value)
{
	GaussianBlurVars *data = (GaussianBlurVars *)(((Sequence *)ptr->data)->effectdata);
	data->size_y = CLAMPIS(value, 0.0f, FLT_MAX);
}

static PointerRNA SequenceModifier_rna_properties_get(CollectionPropertyIterator *iter)
{
	return rna_builtin_properties_get(iter);
}

void SequenceModifier_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

	memset(iter, 0, sizeof(*iter));
	iter->parent = *ptr;
	iter->prop = (PropertyRNA *)&rna_SequenceModifier_rna_properties;

	rna_builtin_properties_begin(iter, ptr);

	if (iter->valid)
		iter->ptr = SequenceModifier_rna_properties_get(iter);
}

void SequenceModifier_rna_properties_next(CollectionPropertyIterator *iter)
{
	rna_builtin_properties_next(iter);

	if (iter->valid)
		iter->ptr = SequenceModifier_rna_properties_get(iter);
}

void SequenceModifier_rna_properties_end(CollectionPropertyIterator *iter)
{
	rna_iterator_listbase_end(iter);
}

int SequenceModifier_rna_properties_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
	return rna_builtin_properties_lookup_string(ptr, key, r_ptr);
}

PointerRNA SequenceModifier_rna_type_get(PointerRNA *ptr)
{
	return rna_builtin_type_get(ptr);
}

void SequenceModifier_name_get(PointerRNA *ptr, char *value)
{
	SequenceModifierData *data = (SequenceModifierData *)(ptr->data);
	BLI_strncpy_utf8(value, data->name, 64);
}

int SequenceModifier_name_length(PointerRNA *ptr)
{
	SequenceModifierData *data = (SequenceModifierData *)(ptr->data);
	return strlen(data->name);
}

void SequenceModifier_name_set(PointerRNA *ptr, const char *value)
{
	rna_SequenceModifier_name_set(ptr, value);
}

int SequenceModifier_type_get(PointerRNA *ptr)
{
	SequenceModifierData *data = (SequenceModifierData *)(ptr->data);
	return (int)(data->type);
}

int SequenceModifier_mute_get(PointerRNA *ptr)
{
	SequenceModifierData *data = (SequenceModifierData *)(ptr->data);
	return (((data->flag) & 1) != 0);
}

void SequenceModifier_mute_set(PointerRNA *ptr, int value)
{
	SequenceModifierData *data = (SequenceModifierData *)(ptr->data);
	if (value) data->flag |= 1;
	else data->flag &= ~1;
}

int SequenceModifier_show_expanded_get(PointerRNA *ptr)
{
	SequenceModifierData *data = (SequenceModifierData *)(ptr->data);
	return (((data->flag) & 2) != 0);
}

void SequenceModifier_show_expanded_set(PointerRNA *ptr, int value)
{
	SequenceModifierData *data = (SequenceModifierData *)(ptr->data);
	if (value) data->flag |= 2;
	else data->flag &= ~2;
}

int SequenceModifier_input_mask_type_get(PointerRNA *ptr)
{
	SequenceModifierData *data = (SequenceModifierData *)(ptr->data);
	return (int)(data->mask_input_type);
}

void SequenceModifier_input_mask_type_set(PointerRNA *ptr, int value)
{
	SequenceModifierData *data = (SequenceModifierData *)(ptr->data);
	data->mask_input_type = value;
}

PointerRNA SequenceModifier_input_mask_strip_get(PointerRNA *ptr)
{
	SequenceModifierData *data = (SequenceModifierData *)(ptr->data);
	return rna_pointer_inherit_refine(ptr, &RNA_Sequence, data->mask_sequence);
}

void SequenceModifier_input_mask_strip_set(PointerRNA *ptr, PointerRNA value)
{
	SequenceModifierData *data = (SequenceModifierData *)(ptr->data);
	data->mask_sequence = value.data;
}

PointerRNA SequenceModifier_input_mask_id_get(PointerRNA *ptr)
{
	SequenceModifierData *data = (SequenceModifierData *)(ptr->data);
	return rna_pointer_inherit_refine(ptr, &RNA_Mask, data->mask_id);
}

void SequenceModifier_input_mask_id_set(PointerRNA *ptr, PointerRNA value)
{
	SequenceModifierData *data = (SequenceModifierData *)(ptr->data);

	if (data->mask_id)
		id_us_min((ID *)data->mask_id);
	if (value.data)
		id_us_plus((ID *)value.data);

	data->mask_id = value.data;
}

PointerRNA ColorBalanceModifier_color_balance_get(PointerRNA *ptr)
{
	ColorBalanceModifierData *data = (ColorBalanceModifierData *)(ptr->data);
	return rna_pointer_inherit_refine(ptr, &RNA_SequenceColorBalanceData, &data->color_balance);
}

float ColorBalanceModifier_color_multiply_get(PointerRNA *ptr)
{
	ColorBalanceModifierData *data = (ColorBalanceModifierData *)(ptr->data);
	return (float)(data->color_multiply);
}

void ColorBalanceModifier_color_multiply_set(PointerRNA *ptr, float value)
{
	ColorBalanceModifierData *data = (ColorBalanceModifierData *)(ptr->data);
	data->color_multiply = CLAMPIS(value, 0.0f, 20.0f);
}

PointerRNA CurvesModifier_curve_mapping_get(PointerRNA *ptr)
{
	CurvesModifierData *data = (CurvesModifierData *)(ptr->data);
	return rna_pointer_inherit_refine(ptr, &RNA_CurveMapping, &data->curve_mapping);
}

PointerRNA HueCorrectModifier_curve_mapping_get(PointerRNA *ptr)
{
	HueCorrectModifierData *data = (HueCorrectModifierData *)(ptr->data);
	return rna_pointer_inherit_refine(ptr, &RNA_CurveMapping, &data->curve_mapping);
}

float BrightContrastModifier_bright_get(PointerRNA *ptr)
{
	BrightContrastModifierData *data = (BrightContrastModifierData *)(ptr->data);
	return (float)(data->bright);
}

void BrightContrastModifier_bright_set(PointerRNA *ptr, float value)
{
	BrightContrastModifierData *data = (BrightContrastModifierData *)(ptr->data);
	data->bright = value;
}

float BrightContrastModifier_contrast_get(PointerRNA *ptr)
{
	BrightContrastModifierData *data = (BrightContrastModifierData *)(ptr->data);
	return (float)(data->contrast);
}

void BrightContrastModifier_contrast_set(PointerRNA *ptr, float value)
{
	BrightContrastModifierData *data = (BrightContrastModifierData *)(ptr->data);
	data->contrast = value;
}







void Sequence_update(struct ID *_selfid, struct Sequence *_self, int data)
{
	rna_Sequence_update_rnafunc(_selfid, _self, data);
}

void Sequence_update_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	struct ID *_selfid;
	struct Sequence *_self;
	int data;
	char *_data;
	
	_selfid = (struct ID *)_ptr->id.data;
	_self = (struct Sequence *)_ptr->data;
	_data = (char *)_parms->data;
	data = *((int *)_data);
	
	rna_Sequence_update_rnafunc(_selfid, _self, data);
}

struct StripElem *Sequence_strip_elem_from_frame(struct Sequence *_self, int frame)
{
	return BKE_sequencer_give_stripelem(_self, frame);
}

void Sequence_strip_elem_from_frame_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	struct Sequence *_self;
	int frame;
	struct StripElem *elem;
	char *_data, *_retdata;
	
	_self = (struct Sequence *)_ptr->data;
	_data = (char *)_parms->data;
	frame = *((int *)_data);
	_data += 4;
	_retdata = _data;
	
	elem = BKE_sequencer_give_stripelem(_self, frame);
	*((struct StripElem **)_retdata) = elem;
}

void Sequence_swap(struct Sequence *_self, ReportList *reports, struct Sequence *other)
{
	rna_Sequence_swap_internal(_self, reports, other);
}

void Sequence_swap_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	struct Sequence *_self;
	struct Sequence *other;
	char *_data;
	
	_self = (struct Sequence *)_ptr->data;
	_data = (char *)_parms->data;
	other = *((struct Sequence **)_data);
	
	rna_Sequence_swap_internal(_self, reports, other);
}

/* Repeated prototypes to detect errors */

void rna_Sequence_update_rnafunc(struct ID *_selfid, struct Sequence *_self, int data);
struct StripElem *BKE_sequencer_give_stripelem(struct Sequence *_self, int frame);
void rna_Sequence_swap_internal(struct Sequence *_self, ReportList *reports, struct Sequence *other);

struct SequenceModifierData *SequenceModifiers_new(struct Sequence *_self, bContext *C, ReportList *reports, const char * name, int type)
{
	return rna_Sequence_modifier_new(_self, C, reports, name, type);
}

void SequenceModifiers_new_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	struct Sequence *_self;
	const char * name;
	int type;
	struct SequenceModifierData *modifier;
	char *_data, *_retdata;
	
	_self = (struct Sequence *)_ptr->data;
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
	
	modifier = rna_Sequence_modifier_new(_self, C, reports, name, type);
	*((struct SequenceModifierData **)_retdata) = modifier;
}

void SequenceModifiers_remove(struct Sequence *_self, bContext *C, ReportList *reports, struct PointerRNA *modifier)
{
	rna_Sequence_modifier_remove(_self, C, reports, modifier);
}

void SequenceModifiers_remove_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	struct Sequence *_self;
	struct PointerRNA *modifier;
	char *_data;
	
	_self = (struct Sequence *)_ptr->data;
	_data = (char *)_parms->data;
	modifier = *((struct PointerRNA **)_data);
	
	rna_Sequence_modifier_remove(_self, C, reports, modifier);
}

void SequenceModifiers_clear(struct Sequence *_self, bContext *C)
{
	rna_Sequence_modifier_clear(_self, C);
}

void SequenceModifiers_clear_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	struct Sequence *_self;
	_self = (struct Sequence *)_ptr->data;
	
	rna_Sequence_modifier_clear(_self, C);
}

/* Repeated prototypes to detect errors */

struct SequenceModifierData *rna_Sequence_modifier_new(struct Sequence *_self, bContext *C, ReportList *reports, const char * name, int type);
void rna_Sequence_modifier_remove(struct Sequence *_self, bContext *C, ReportList *reports, struct PointerRNA *modifier);
void rna_Sequence_modifier_clear(struct Sequence *_self, bContext *C);


struct Sequence *Sequences_new_clip(struct ID *_selfid, struct Editing *_self, const char * name, struct MovieClip *clip, int channel, int frame_start)
{
	return rna_Sequences_new_clip(_selfid, _self, name, clip, channel, frame_start);
}

void Sequences_new_clip_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	struct ID *_selfid;
	struct Editing *_self;
	const char * name;
	struct MovieClip *clip;
	int channel;
	int frame_start;
	struct Sequence *sequence;
	char *_data, *_retdata;
	
	_selfid = (struct ID *)_ptr->id.data;
	_self = (struct Editing *)_ptr->data;
	_data = (char *)_parms->data;
	name = *((const char * *)_data);
#if defined(SPEC_ILP32)
	_data += 4;
#else
	_data += 8;
#endif
	clip = *((struct MovieClip **)_data);
#if defined(SPEC_ILP32)
	_data += 4;
#else
	_data += 8;
#endif
	channel = *((int *)_data);
	_data += 4;
	frame_start = *((int *)_data);
	_data += 4;
	_retdata = _data;
	
	sequence = rna_Sequences_new_clip(_selfid, _self, name, clip, channel, frame_start);
	*((struct Sequence **)_retdata) = sequence;
}

struct Sequence *Sequences_new_mask(struct ID *_selfid, struct Editing *_self, const char * name, struct Mask *mask, int channel, int frame_start)
{
	return rna_Sequences_new_mask(_selfid, _self, name, mask, channel, frame_start);
}

void Sequences_new_mask_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	struct ID *_selfid;
	struct Editing *_self;
	const char * name;
	struct Mask *mask;
	int channel;
	int frame_start;
	struct Sequence *sequence;
	char *_data, *_retdata;
	
	_selfid = (struct ID *)_ptr->id.data;
	_self = (struct Editing *)_ptr->data;
	_data = (char *)_parms->data;
	name = *((const char * *)_data);
#if defined(SPEC_ILP32)
	_data += 4;
#else
	_data += 8;
#endif
	mask = *((struct Mask **)_data);
#if defined(SPEC_ILP32)
	_data += 4;
#else
	_data += 8;
#endif
	channel = *((int *)_data);
	_data += 4;
	frame_start = *((int *)_data);
	_data += 4;
	_retdata = _data;
	
	sequence = rna_Sequences_new_mask(_selfid, _self, name, mask, channel, frame_start);
	*((struct Sequence **)_retdata) = sequence;
}

struct Sequence *Sequences_new_scene(struct ID *_selfid, struct Editing *_self, const char * name, struct Scene *scene, int channel, int frame_start)
{
	return rna_Sequences_new_scene(_selfid, _self, name, scene, channel, frame_start);
}

void Sequences_new_scene_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	struct ID *_selfid;
	struct Editing *_self;
	const char * name;
	struct Scene *scene;
	int channel;
	int frame_start;
	struct Sequence *sequence;
	char *_data, *_retdata;
	
	_selfid = (struct ID *)_ptr->id.data;
	_self = (struct Editing *)_ptr->data;
	_data = (char *)_parms->data;
	name = *((const char * *)_data);
#if defined(SPEC_ILP32)
	_data += 4;
#else
	_data += 8;
#endif
	scene = *((struct Scene **)_data);
#if defined(SPEC_ILP32)
	_data += 4;
#else
	_data += 8;
#endif
	channel = *((int *)_data);
	_data += 4;
	frame_start = *((int *)_data);
	_data += 4;
	_retdata = _data;
	
	sequence = rna_Sequences_new_scene(_selfid, _self, name, scene, channel, frame_start);
	*((struct Sequence **)_retdata) = sequence;
}

struct Sequence *Sequences_new_image(struct ID *_selfid, struct Editing *_self, ReportList *reports, const char * name, const char * filepath, int channel, int frame_start)
{
	return rna_Sequences_new_image(_selfid, _self, reports, name, filepath, channel, frame_start);
}

void Sequences_new_image_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	struct ID *_selfid;
	struct Editing *_self;
	const char * name;
	const char * filepath;
	int channel;
	int frame_start;
	struct Sequence *sequence;
	char *_data, *_retdata;
	
	_selfid = (struct ID *)_ptr->id.data;
	_self = (struct Editing *)_ptr->data;
	_data = (char *)_parms->data;
	name = *((const char * *)_data);
#if defined(SPEC_ILP32)
	_data += 4;
#else
	_data += 8;
#endif
	filepath = *((const char * *)_data);
#if defined(SPEC_ILP32)
	_data += 4;
#else
	_data += 8;
#endif
	channel = *((int *)_data);
	_data += 4;
	frame_start = *((int *)_data);
	_data += 4;
	_retdata = _data;
	
	sequence = rna_Sequences_new_image(_selfid, _self, reports, name, filepath, channel, frame_start);
	*((struct Sequence **)_retdata) = sequence;
}

struct Sequence *Sequences_new_movie(struct ID *_selfid, struct Editing *_self, ReportList *reports, const char * name, const char * filepath, int channel, int frame_start)
{
	return rna_Sequences_new_movie(_selfid, _self, reports, name, filepath, channel, frame_start);
}

void Sequences_new_movie_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	struct ID *_selfid;
	struct Editing *_self;
	const char * name;
	const char * filepath;
	int channel;
	int frame_start;
	struct Sequence *sequence;
	char *_data, *_retdata;
	
	_selfid = (struct ID *)_ptr->id.data;
	_self = (struct Editing *)_ptr->data;
	_data = (char *)_parms->data;
	name = *((const char * *)_data);
#if defined(SPEC_ILP32)
	_data += 4;
#else
	_data += 8;
#endif
	filepath = *((const char * *)_data);
#if defined(SPEC_ILP32)
	_data += 4;
#else
	_data += 8;
#endif
	channel = *((int *)_data);
	_data += 4;
	frame_start = *((int *)_data);
	_data += 4;
	_retdata = _data;
	
	sequence = rna_Sequences_new_movie(_selfid, _self, reports, name, filepath, channel, frame_start);
	*((struct Sequence **)_retdata) = sequence;
}

struct Sequence *Sequences_new_sound(struct ID *_selfid, struct Editing *_self, Main *bmain, ReportList *reports, const char * name, const char * filepath, int channel, int frame_start)
{
	return rna_Sequences_new_sound(_selfid, _self, bmain, reports, name, filepath, channel, frame_start);
}

void Sequences_new_sound_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	struct ID *_selfid;
	struct Editing *_self;
	const char * name;
	const char * filepath;
	int channel;
	int frame_start;
	struct Sequence *sequence;
	char *_data, *_retdata;
	
	_selfid = (struct ID *)_ptr->id.data;
	_self = (struct Editing *)_ptr->data;
	_data = (char *)_parms->data;
	name = *((const char * *)_data);
#if defined(SPEC_ILP32)
	_data += 4;
#else
	_data += 8;
#endif
	filepath = *((const char * *)_data);
#if defined(SPEC_ILP32)
	_data += 4;
#else
	_data += 8;
#endif
	channel = *((int *)_data);
	_data += 4;
	frame_start = *((int *)_data);
	_data += 4;
	_retdata = _data;
	
	sequence = rna_Sequences_new_sound(_selfid, _self, CTX_data_main(C), reports, name, filepath, channel, frame_start);
	*((struct Sequence **)_retdata) = sequence;
}

struct Sequence *Sequences_new_effect(struct ID *_selfid, struct Editing *_self, ReportList *reports, const char * name, int type, int channel, int frame_start, int frame_end, struct Sequence *seq1, struct Sequence *seq2, struct Sequence *seq3)
{
	return rna_Sequences_new_effect(_selfid, _self, reports, name, type, channel, frame_start, frame_end, seq1, seq2, seq3);
}

void Sequences_new_effect_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	struct ID *_selfid;
	struct Editing *_self;
	const char * name;
	int type;
	int channel;
	int frame_start;
	int frame_end;
	struct Sequence *seq1;
	struct Sequence *seq2;
	struct Sequence *seq3;
	struct Sequence *sequence;
	char *_data, *_retdata;
	
	_selfid = (struct ID *)_ptr->id.data;
	_self = (struct Editing *)_ptr->data;
	_data = (char *)_parms->data;
	name = *((const char * *)_data);
#if defined(SPEC_ILP32)
	_data += 4;
#else
	_data += 8;
#endif
	type = *((int *)_data);
	_data += 4;
	channel = *((int *)_data);
	_data += 4;
	frame_start = *((int *)_data);
	_data += 4;
	frame_end = *((int *)_data);
	_data += 4;
	seq1 = *((struct Sequence **)_data);
#if defined(SPEC_ILP32)
	_data += 4;
#else
	_data += 8;
#endif
	seq2 = *((struct Sequence **)_data);
#if defined(SPEC_ILP32)
	_data += 4;
#else
	_data += 8;
#endif
	seq3 = *((struct Sequence **)_data);
#if defined(SPEC_ILP32)
	_data += 4;
#else
	_data += 8;
#endif
	_retdata = _data;
	
	sequence = rna_Sequences_new_effect(_selfid, _self, reports, name, type, channel, frame_start, frame_end, seq1, seq2, seq3);
	*((struct Sequence **)_retdata) = sequence;
}

void Sequences_remove(struct ID *_selfid, struct Editing *_self, ReportList *reports, struct PointerRNA *sequence)
{
	rna_Sequences_remove(_selfid, _self, reports, sequence);
}

void Sequences_remove_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	struct ID *_selfid;
	struct Editing *_self;
	struct PointerRNA *sequence;
	char *_data;
	
	_selfid = (struct ID *)_ptr->id.data;
	_self = (struct Editing *)_ptr->data;
	_data = (char *)_parms->data;
	sequence = *((struct PointerRNA **)_data);
	
	rna_Sequences_remove(_selfid, _self, reports, sequence);
}

/* Repeated prototypes to detect errors */

struct Sequence *rna_Sequences_new_clip(struct ID *_selfid, struct Editing *_self, const char * name, struct MovieClip *clip, int channel, int frame_start);
struct Sequence *rna_Sequences_new_mask(struct ID *_selfid, struct Editing *_self, const char * name, struct Mask *mask, int channel, int frame_start);
struct Sequence *rna_Sequences_new_scene(struct ID *_selfid, struct Editing *_self, const char * name, struct Scene *scene, int channel, int frame_start);
struct Sequence *rna_Sequences_new_image(struct ID *_selfid, struct Editing *_self, ReportList *reports, const char * name, const char * filepath, int channel, int frame_start);
struct Sequence *rna_Sequences_new_movie(struct ID *_selfid, struct Editing *_self, ReportList *reports, const char * name, const char * filepath, int channel, int frame_start);
struct Sequence *rna_Sequences_new_sound(struct ID *_selfid, struct Editing *_self, Main *bmain, ReportList *reports, const char * name, const char * filepath, int channel, int frame_start);
struct Sequence *rna_Sequences_new_effect(struct ID *_selfid, struct Editing *_self, ReportList *reports, const char * name, int type, int channel, int frame_start, int frame_end, struct Sequence *seq1, struct Sequence *seq2, struct Sequence *seq3);
void rna_Sequences_remove(struct ID *_selfid, struct Editing *_self, ReportList *reports, struct PointerRNA *sequence);


struct StripElem *SequenceElements_append(struct ID *_selfid, struct Sequence *_self, const char * filename)
{
	return rna_SequenceElements_append(_selfid, _self, filename);
}

void SequenceElements_append_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	struct ID *_selfid;
	struct Sequence *_self;
	const char * filename;
	struct StripElem *elem;
	char *_data, *_retdata;
	
	_selfid = (struct ID *)_ptr->id.data;
	_self = (struct Sequence *)_ptr->data;
	_data = (char *)_parms->data;
	filename = *((const char * *)_data);
#if defined(SPEC_ILP32)
	_data += 4;
#else
	_data += 8;
#endif
	_retdata = _data;
	
	elem = rna_SequenceElements_append(_selfid, _self, filename);
	*((struct StripElem **)_retdata) = elem;
}

void SequenceElements_pop(struct ID *_selfid, struct Sequence *_self, ReportList *reports, int index)
{
	rna_SequenceElements_pop(_selfid, _self, reports, index);
}

void SequenceElements_pop_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	struct ID *_selfid;
	struct Sequence *_self;
	int index;
	char *_data;
	
	_selfid = (struct ID *)_ptr->id.data;
	_self = (struct Sequence *)_ptr->data;
	_data = (char *)_parms->data;
	index = *((int *)_data);
	
	rna_SequenceElements_pop(_selfid, _self, reports, index);
}

/* Repeated prototypes to detect errors */

struct StripElem *rna_SequenceElements_append(struct ID *_selfid, struct Sequence *_self, const char * filename);
void rna_SequenceElements_pop(struct ID *_selfid, struct Sequence *_self, ReportList *reports, int index);





























/* Sequence Color Balance Data */
CollectionPropertyRNA rna_SequenceColorBalanceData_rna_properties = {
	{(PropertyRNA *)&rna_SequenceColorBalanceData_rna_type, NULL,
	-1, "rna_properties", 128, "Properties",
	"RNA property collection",
	0, "*",
	PROP_COLLECTION, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	SequenceColorBalanceData_rna_properties_begin, SequenceColorBalanceData_rna_properties_next, SequenceColorBalanceData_rna_properties_end, SequenceColorBalanceData_rna_properties_get, NULL, NULL, SequenceColorBalanceData_rna_properties_lookup_string, NULL, &RNA_Property
};

PointerPropertyRNA rna_SequenceColorBalanceData_rna_type = {
	{(PropertyRNA *)&rna_SequenceColorBalanceData_lift, (PropertyRNA *)&rna_SequenceColorBalanceData_rna_properties,
	-1, "rna_type", 8912896, "RNA",
	"RNA type definition",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	SequenceColorBalanceData_rna_type_get, NULL, NULL, NULL,&RNA_Struct
};

static float rna_SequenceColorBalanceData_lift_default[3] = {
	1.0f,
	1.0f,
	1.0f
};

FloatPropertyRNA rna_SequenceColorBalanceData_lift = {
	{(PropertyRNA *)&rna_SequenceColorBalanceData_gamma, (PropertyRNA *)&rna_SequenceColorBalanceData_rna_type,
	-1, "lift", 8195, "Lift",
	"Color balance lift (shadows)",
	0, "*",
	PROP_FLOAT, PROP_COLOR_GAMMA | PROP_UNIT_NONE, NULL, 1, {3, 0, 0}, 3,
	rna_SequenceColorBalance_update, 67502080, NULL, NULL,
	offsetof(StripColorBalance, lift), 4, NULL},
	NULL, NULL, SequenceColorBalanceData_lift_get, SequenceColorBalanceData_lift_set, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 2.0f, 0.0f, FLT_MAX, 0.1000000015f, 3, 1.0f, rna_SequenceColorBalanceData_lift_default
};

static float rna_SequenceColorBalanceData_gamma_default[3] = {
	1.0f,
	1.0f,
	1.0f
};

FloatPropertyRNA rna_SequenceColorBalanceData_gamma = {
	{(PropertyRNA *)&rna_SequenceColorBalanceData_gain, (PropertyRNA *)&rna_SequenceColorBalanceData_lift,
	-1, "gamma", 8195, "Gamma",
	"Color balance gamma (midtones)",
	0, "*",
	PROP_FLOAT, PROP_COLOR_GAMMA | PROP_UNIT_NONE, NULL, 1, {3, 0, 0}, 3,
	rna_SequenceColorBalance_update, 67502080, NULL, NULL,
	offsetof(StripColorBalance, gamma), 4, NULL},
	NULL, NULL, SequenceColorBalanceData_gamma_get, SequenceColorBalanceData_gamma_set, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 2.0f, 0.0f, FLT_MAX, 0.1000000015f, 3, 1.0f, rna_SequenceColorBalanceData_gamma_default
};

static float rna_SequenceColorBalanceData_gain_default[3] = {
	1.0f,
	1.0f,
	1.0f
};

FloatPropertyRNA rna_SequenceColorBalanceData_gain = {
	{(PropertyRNA *)&rna_SequenceColorBalanceData_invert_gain, (PropertyRNA *)&rna_SequenceColorBalanceData_gamma,
	-1, "gain", 8195, "Gain",
	"Color balance gain (highlights)",
	0, "*",
	PROP_FLOAT, PROP_COLOR_GAMMA | PROP_UNIT_NONE, NULL, 1, {3, 0, 0}, 3,
	rna_SequenceColorBalance_update, 67502080, NULL, NULL,
	offsetof(StripColorBalance, gain), 4, NULL},
	NULL, NULL, SequenceColorBalanceData_gain_get, SequenceColorBalanceData_gain_set, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 2.0f, 0.0f, FLT_MAX, 0.1000000015f, 3, 1.0f, rna_SequenceColorBalanceData_gain_default
};

BoolPropertyRNA rna_SequenceColorBalanceData_invert_gain = {
	{(PropertyRNA *)&rna_SequenceColorBalanceData_invert_gamma, (PropertyRNA *)&rna_SequenceColorBalanceData_gain,
	-1, "invert_gain", 3, "Inverse Gain",
	"",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_SequenceColorBalance_update, 67502080, NULL, NULL,
	0, -1, NULL},
	SequenceColorBalanceData_invert_gain_get, SequenceColorBalanceData_invert_gain_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_SequenceColorBalanceData_invert_gamma = {
	{(PropertyRNA *)&rna_SequenceColorBalanceData_invert_lift, (PropertyRNA *)&rna_SequenceColorBalanceData_invert_gain,
	-1, "invert_gamma", 3, "Inverse Gamma",
	"",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_SequenceColorBalance_update, 67502080, NULL, NULL,
	0, -1, NULL},
	SequenceColorBalanceData_invert_gamma_get, SequenceColorBalanceData_invert_gamma_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_SequenceColorBalanceData_invert_lift = {
	{NULL, (PropertyRNA *)&rna_SequenceColorBalanceData_invert_gamma,
	-1, "invert_lift", 3, "Inverse Lift",
	"",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_SequenceColorBalance_update, 67502080, NULL, NULL,
	0, -1, NULL},
	SequenceColorBalanceData_invert_lift_get, SequenceColorBalanceData_invert_lift_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

StructRNA RNA_SequenceColorBalanceData = {
	{(ContainerRNA *)&RNA_SequenceElement, (ContainerRNA *)&RNA_JoystickSensor,
	NULL,
	{(PropertyRNA *)&rna_SequenceColorBalanceData_rna_properties, (PropertyRNA *)&rna_SequenceColorBalanceData_invert_lift}},
	"SequenceColorBalanceData", NULL, NULL, 4, "Sequence Color Balance Data",
	"Color balance parameters for a sequence strip and it\'s modifiers",
	"*", 17,
	NULL, (PropertyRNA *)&rna_SequenceColorBalanceData_rna_properties,
	NULL,
	NULL,
	NULL,
	rna_SequenceColorBalance_path,
	NULL,
	NULL,
	NULL,
	NULL,
	{NULL, NULL}
};

/* Sequence Element */
CollectionPropertyRNA rna_SequenceElement_rna_properties = {
	{(PropertyRNA *)&rna_SequenceElement_rna_type, NULL,
	-1, "rna_properties", 128, "Properties",
	"RNA property collection",
	0, "*",
	PROP_COLLECTION, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	SequenceElement_rna_properties_begin, SequenceElement_rna_properties_next, SequenceElement_rna_properties_end, SequenceElement_rna_properties_get, NULL, NULL, SequenceElement_rna_properties_lookup_string, NULL, &RNA_Property
};

PointerPropertyRNA rna_SequenceElement_rna_type = {
	{(PropertyRNA *)&rna_SequenceElement_filename, (PropertyRNA *)&rna_SequenceElement_rna_properties,
	-1, "rna_type", 8912896, "RNA",
	"RNA type definition",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	SequenceElement_rna_type_get, NULL, NULL, NULL,&RNA_Struct
};

StringPropertyRNA rna_SequenceElement_filename = {
	{(PropertyRNA *)&rna_SequenceElement_orig_width, (PropertyRNA *)&rna_SequenceElement_rna_type,
	-1, "filename", 262145, "Filename",
	"",
	0, "*",
	PROP_STRING, PROP_FILENAME | PROP_UNIT_NONE, NULL, 0, {256, 0, 0}, 0,
	rna_SequenceElement_update, 67502080, NULL, NULL,
	0, -1, NULL},
	SequenceElement_filename_get, SequenceElement_filename_length, SequenceElement_filename_set, NULL, NULL, NULL, 256, ""
};

IntPropertyRNA rna_SequenceElement_orig_width = {
	{(PropertyRNA *)&rna_SequenceElement_orig_height, (PropertyRNA *)&rna_SequenceElement_filename,
	-1, "orig_width", 8194, "Orig Width",
	"Original image width",
	0, "*",
	PROP_INT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	offsetof(StripElem, orig_width), 0, NULL},
	SequenceElement_orig_width_get, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL,
	-10000, 10000, INT_MIN, INT_MAX, 1, 0, NULL
};

IntPropertyRNA rna_SequenceElement_orig_height = {
	{NULL, (PropertyRNA *)&rna_SequenceElement_orig_width,
	-1, "orig_height", 8194, "Orig Height",
	"Original image height",
	0, "*",
	PROP_INT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	offsetof(StripElem, orig_height), 0, NULL},
	SequenceElement_orig_height_get, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL,
	-10000, 10000, INT_MIN, INT_MAX, 1, 0, NULL
};

StructRNA RNA_SequenceElement = {
	{(ContainerRNA *)&RNA_SequenceProxy, (ContainerRNA *)&RNA_SequenceColorBalanceData,
	NULL,
	{(PropertyRNA *)&rna_SequenceElement_rna_properties, (PropertyRNA *)&rna_SequenceElement_orig_height}},
	"SequenceElement", NULL, NULL, 4, "Sequence Element",
	"Sequence strip data for a single frame",
	"*", 17,
	NULL, (PropertyRNA *)&rna_SequenceElement_rna_properties,
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

/* Sequence Proxy */
CollectionPropertyRNA rna_SequenceProxy_rna_properties = {
	{(PropertyRNA *)&rna_SequenceProxy_rna_type, NULL,
	-1, "rna_properties", 128, "Properties",
	"RNA property collection",
	0, "*",
	PROP_COLLECTION, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	SequenceProxy_rna_properties_begin, SequenceProxy_rna_properties_next, SequenceProxy_rna_properties_end, SequenceProxy_rna_properties_get, NULL, NULL, SequenceProxy_rna_properties_lookup_string, NULL, &RNA_Property
};

PointerPropertyRNA rna_SequenceProxy_rna_type = {
	{(PropertyRNA *)&rna_SequenceProxy_directory, (PropertyRNA *)&rna_SequenceProxy_rna_properties,
	-1, "rna_type", 8912896, "RNA",
	"RNA type definition",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	SequenceProxy_rna_type_get, NULL, NULL, NULL,&RNA_Struct
};

StringPropertyRNA rna_SequenceProxy_directory = {
	{(PropertyRNA *)&rna_SequenceProxy_filepath, (PropertyRNA *)&rna_SequenceProxy_rna_type,
	-1, "directory", 262145, "Directory",
	"Location to store the proxy files",
	0, "*",
	PROP_STRING, PROP_DIRPATH | PROP_UNIT_NONE, NULL, 0, {768, 0, 0}, 0,
	rna_SequenceProxy_update, 67502080, NULL, NULL,
	0, -1, NULL},
	SequenceProxy_directory_get, SequenceProxy_directory_length, SequenceProxy_directory_set, NULL, NULL, NULL, 768, ""
};

StringPropertyRNA rna_SequenceProxy_filepath = {
	{(PropertyRNA *)&rna_SequenceProxy_build_25, (PropertyRNA *)&rna_SequenceProxy_directory,
	-1, "filepath", 262145, "Path",
	"Location of custom proxy file",
	0, "*",
	PROP_STRING, PROP_FILEPATH | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_SequenceProxy_update, 67502080, NULL, NULL,
	0, -1, NULL},
	SequenceProxy_filepath_get, SequenceProxy_filepath_length, SequenceProxy_filepath_set, NULL, NULL, NULL, 0, ""
};

BoolPropertyRNA rna_SequenceProxy_build_25 = {
	{(PropertyRNA *)&rna_SequenceProxy_build_50, (PropertyRNA *)&rna_SequenceProxy_filepath,
	-1, "build_25", 3, "25%",
	"Build 25% proxy resolution",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	SequenceProxy_build_25_get, SequenceProxy_build_25_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_SequenceProxy_build_50 = {
	{(PropertyRNA *)&rna_SequenceProxy_build_75, (PropertyRNA *)&rna_SequenceProxy_build_25,
	-1, "build_50", 3, "50%",
	"Build 50% proxy resolution",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	SequenceProxy_build_50_get, SequenceProxy_build_50_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_SequenceProxy_build_75 = {
	{(PropertyRNA *)&rna_SequenceProxy_build_100, (PropertyRNA *)&rna_SequenceProxy_build_50,
	-1, "build_75", 3, "75%",
	"Build 75% proxy resolution",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	SequenceProxy_build_75_get, SequenceProxy_build_75_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_SequenceProxy_build_100 = {
	{(PropertyRNA *)&rna_SequenceProxy_build_record_run, (PropertyRNA *)&rna_SequenceProxy_build_75,
	-1, "build_100", 3, "100%",
	"Build 100% proxy resolution",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	SequenceProxy_build_100_get, SequenceProxy_build_100_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_SequenceProxy_build_record_run = {
	{(PropertyRNA *)&rna_SequenceProxy_build_free_run, (PropertyRNA *)&rna_SequenceProxy_build_100,
	-1, "build_record_run", 3, "Rec Run",
	"Build record run time code index",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	SequenceProxy_build_record_run_get, SequenceProxy_build_record_run_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_SequenceProxy_build_free_run = {
	{(PropertyRNA *)&rna_SequenceProxy_build_free_run_rec_date, (PropertyRNA *)&rna_SequenceProxy_build_record_run,
	-1, "build_free_run", 3, "Free Run",
	"Build free run time code index",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	SequenceProxy_build_free_run_get, SequenceProxy_build_free_run_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_SequenceProxy_build_free_run_rec_date = {
	{(PropertyRNA *)&rna_SequenceProxy_quality, (PropertyRNA *)&rna_SequenceProxy_build_free_run,
	-1, "build_free_run_rec_date", 3, "Free Run (Rec Date)",
	"Build free run time code index using Record Date/Time",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	SequenceProxy_build_free_run_rec_date_get, SequenceProxy_build_free_run_rec_date_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

IntPropertyRNA rna_SequenceProxy_quality = {
	{(PropertyRNA *)&rna_SequenceProxy_timecode, (PropertyRNA *)&rna_SequenceProxy_build_free_run_rec_date,
	-1, "quality", 8195, "Quality",
	"JPEG Quality of proxies to build",
	0, "*",
	PROP_INT, PROP_UNSIGNED | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	offsetof(StripProxy, quality), 1, NULL},
	SequenceProxy_quality_get, SequenceProxy_quality_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL,
	1, 100, 0, 32767, 1, 0, NULL
};

static EnumPropertyItem rna_SequenceProxy_timecode_items[6] = {
	{0, "NONE", 0, "No TC in use", ""},
	{1, "RECORD_RUN", 0, "Record Run", "Use images in the order as they are recorded"},
	{2, "FREE_RUN", 0, "Free Run", "Use global timestamp written by recording device"},
	{4, "FREE_RUN_REC_DATE", 0, "Free Run (rec date)", "Interpolate a global timestamp using the record date and time written by recording device"},
	{8, "RECORD_RUN_NO_GAPS", 0, "Record Run No Gaps", "Like record run, but ignore timecode, changes in framerate or dropouts"},
	{0, NULL, 0, NULL, NULL}
};

EnumPropertyRNA rna_SequenceProxy_timecode = {
	{NULL, (PropertyRNA *)&rna_SequenceProxy_quality,
	-1, "timecode", 3, "Timecode",
	"",
	0, "*",
	PROP_ENUM, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Sequence_tcindex_update, 67502080, NULL, NULL,
	0, -1, NULL},
	SequenceProxy_timecode_get, SequenceProxy_timecode_set, NULL, NULL, NULL, NULL, rna_SequenceProxy_timecode_items, 5, 0
};

StructRNA RNA_SequenceProxy = {
	{(ContainerRNA *)&RNA_SequenceColorBalance, (ContainerRNA *)&RNA_SequenceElement,
	NULL,
	{(PropertyRNA *)&rna_SequenceProxy_rna_properties, (PropertyRNA *)&rna_SequenceProxy_timecode}},
	"SequenceProxy", NULL, NULL, 4, "Sequence Proxy",
	"Proxy parameters for a sequence strip",
	"*", 17,
	NULL, (PropertyRNA *)&rna_SequenceProxy_rna_properties,
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

/* Sequence Color Balance */
StructRNA RNA_SequenceColorBalance = {
	{(ContainerRNA *)&RNA_SequenceCrop, (ContainerRNA *)&RNA_SequenceProxy,
	NULL,
	{NULL, NULL}},
	"SequenceColorBalance", NULL, NULL, 4, "Sequence Color Balance",
	"Color balance parameters for a sequence strip",
	"*", 17,
	NULL, (PropertyRNA *)&rna_SequenceColorBalanceData_rna_properties,
	&RNA_SequenceColorBalanceData,
	NULL,
	NULL,
	rna_SequenceColorBalance_path,
	NULL,
	NULL,
	NULL,
	NULL,
	{NULL, NULL}
};

/* Sequence Crop */
CollectionPropertyRNA rna_SequenceCrop_rna_properties = {
	{(PropertyRNA *)&rna_SequenceCrop_rna_type, NULL,
	-1, "rna_properties", 128, "Properties",
	"RNA property collection",
	0, "*",
	PROP_COLLECTION, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	SequenceCrop_rna_properties_begin, SequenceCrop_rna_properties_next, SequenceCrop_rna_properties_end, SequenceCrop_rna_properties_get, NULL, NULL, SequenceCrop_rna_properties_lookup_string, NULL, &RNA_Property
};

PointerPropertyRNA rna_SequenceCrop_rna_type = {
	{(PropertyRNA *)&rna_SequenceCrop_max_y, (PropertyRNA *)&rna_SequenceCrop_rna_properties,
	-1, "rna_type", 8912896, "RNA",
	"RNA type definition",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	SequenceCrop_rna_type_get, NULL, NULL, NULL,&RNA_Struct
};

IntPropertyRNA rna_SequenceCrop_max_y = {
	{(PropertyRNA *)&rna_SequenceCrop_min_y, (PropertyRNA *)&rna_SequenceCrop_rna_type,
	-1, "max_y", 8195, "Top",
	"",
	0, "*",
	PROP_INT, PROP_UNSIGNED | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_SequenceCrop_update, 67502080, NULL, NULL,
	offsetof(StripCrop, top), 0, NULL},
	SequenceCrop_max_y_get, SequenceCrop_max_y_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL,
	0, 4096, 0, INT_MAX, 1, 0, NULL
};

IntPropertyRNA rna_SequenceCrop_min_y = {
	{(PropertyRNA *)&rna_SequenceCrop_min_x, (PropertyRNA *)&rna_SequenceCrop_max_y,
	-1, "min_y", 8195, "Bottom",
	"",
	0, "*",
	PROP_INT, PROP_UNSIGNED | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_SequenceCrop_update, 67502080, NULL, NULL,
	offsetof(StripCrop, bottom), 0, NULL},
	SequenceCrop_min_y_get, SequenceCrop_min_y_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL,
	0, 4096, 0, INT_MAX, 1, 0, NULL
};

IntPropertyRNA rna_SequenceCrop_min_x = {
	{(PropertyRNA *)&rna_SequenceCrop_max_x, (PropertyRNA *)&rna_SequenceCrop_min_y,
	-1, "min_x", 8195, "Left",
	"",
	0, "*",
	PROP_INT, PROP_UNSIGNED | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_SequenceCrop_update, 67502080, NULL, NULL,
	offsetof(StripCrop, left), 0, NULL},
	SequenceCrop_min_x_get, SequenceCrop_min_x_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL,
	0, 4096, 0, INT_MAX, 1, 0, NULL
};

IntPropertyRNA rna_SequenceCrop_max_x = {
	{NULL, (PropertyRNA *)&rna_SequenceCrop_min_x,
	-1, "max_x", 8195, "Right",
	"",
	0, "*",
	PROP_INT, PROP_UNSIGNED | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_SequenceCrop_update, 67502080, NULL, NULL,
	offsetof(StripCrop, right), 0, NULL},
	SequenceCrop_max_x_get, SequenceCrop_max_x_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL,
	0, 4096, 0, INT_MAX, 1, 0, NULL
};

StructRNA RNA_SequenceCrop = {
	{(ContainerRNA *)&RNA_SequenceTransform, (ContainerRNA *)&RNA_SequenceColorBalance,
	NULL,
	{(PropertyRNA *)&rna_SequenceCrop_rna_properties, (PropertyRNA *)&rna_SequenceCrop_max_x}},
	"SequenceCrop", NULL, NULL, 4, "Sequence Crop",
	"Cropping parameters for a sequence strip",
	"*", 17,
	NULL, (PropertyRNA *)&rna_SequenceCrop_rna_properties,
	NULL,
	NULL,
	NULL,
	rna_SequenceCrop_path,
	NULL,
	NULL,
	NULL,
	NULL,
	{NULL, NULL}
};

/* Sequence Transform */
CollectionPropertyRNA rna_SequenceTransform_rna_properties = {
	{(PropertyRNA *)&rna_SequenceTransform_rna_type, NULL,
	-1, "rna_properties", 128, "Properties",
	"RNA property collection",
	0, "*",
	PROP_COLLECTION, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	SequenceTransform_rna_properties_begin, SequenceTransform_rna_properties_next, SequenceTransform_rna_properties_end, SequenceTransform_rna_properties_get, NULL, NULL, SequenceTransform_rna_properties_lookup_string, NULL, &RNA_Property
};

PointerPropertyRNA rna_SequenceTransform_rna_type = {
	{(PropertyRNA *)&rna_SequenceTransform_offset_x, (PropertyRNA *)&rna_SequenceTransform_rna_properties,
	-1, "rna_type", 8912896, "RNA",
	"RNA type definition",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	SequenceTransform_rna_type_get, NULL, NULL, NULL,&RNA_Struct
};

IntPropertyRNA rna_SequenceTransform_offset_x = {
	{(PropertyRNA *)&rna_SequenceTransform_offset_y, (PropertyRNA *)&rna_SequenceTransform_rna_type,
	-1, "offset_x", 8195, "Offset X",
	"",
	0, "*",
	PROP_INT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_SequenceTransform_update, 67502080, NULL, NULL,
	offsetof(StripTransform, xofs), 0, NULL},
	SequenceTransform_offset_x_get, SequenceTransform_offset_x_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL,
	-4096, 4096, INT_MIN, INT_MAX, 1, 0, NULL
};

IntPropertyRNA rna_SequenceTransform_offset_y = {
	{NULL, (PropertyRNA *)&rna_SequenceTransform_offset_x,
	-1, "offset_y", 8195, "Offset Y",
	"",
	0, "*",
	PROP_INT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_SequenceTransform_update, 67502080, NULL, NULL,
	offsetof(StripTransform, yofs), 0, NULL},
	SequenceTransform_offset_y_get, SequenceTransform_offset_y_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL,
	-4096, 4096, INT_MIN, INT_MAX, 1, 0, NULL
};

StructRNA RNA_SequenceTransform = {
	{(ContainerRNA *)&RNA_Sequence, (ContainerRNA *)&RNA_SequenceCrop,
	NULL,
	{(PropertyRNA *)&rna_SequenceTransform_rna_properties, (PropertyRNA *)&rna_SequenceTransform_offset_y}},
	"SequenceTransform", NULL, NULL, 4, "Sequence Transform",
	"Transform parameters for a sequence strip",
	"*", 17,
	NULL, (PropertyRNA *)&rna_SequenceTransform_rna_properties,
	NULL,
	NULL,
	NULL,
	rna_SequenceTransform_path,
	NULL,
	NULL,
	NULL,
	NULL,
	{NULL, NULL}
};

/* Sequence */
CollectionPropertyRNA rna_Sequence_rna_properties = {
	{(PropertyRNA *)&rna_Sequence_rna_type, NULL,
	-1, "rna_properties", 128, "Properties",
	"RNA property collection",
	0, "*",
	PROP_COLLECTION, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	Sequence_rna_properties_begin, Sequence_rna_properties_next, Sequence_rna_properties_end, Sequence_rna_properties_get, NULL, NULL, Sequence_rna_properties_lookup_string, NULL, &RNA_Property
};

PointerPropertyRNA rna_Sequence_rna_type = {
	{(PropertyRNA *)&rna_Sequence_name, (PropertyRNA *)&rna_Sequence_rna_properties,
	-1, "rna_type", 8912896, "RNA",
	"RNA type definition",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	Sequence_rna_type_get, NULL, NULL, NULL,&RNA_Struct
};

StringPropertyRNA rna_Sequence_name = {
	{(PropertyRNA *)&rna_Sequence_type, (PropertyRNA *)&rna_Sequence_rna_type,
	-1, "name", 262145, "Name",
	"",
	0, "*",
	PROP_STRING, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {64, 0, 0}, 0,
	NULL, 67502080, NULL, NULL,
	0, -1, NULL},
	Sequence_name_get, Sequence_name_length, Sequence_name_set, NULL, NULL, NULL, 62, ""
};

static EnumPropertyItem rna_Sequence_type_items[24] = {
	{0, "IMAGE", 0, "Image", ""},
	{1, "META", 0, "Meta", ""},
	{2, "SCENE", 0, "Scene", ""},
	{3, "MOVIE", 0, "Movie", ""},
	{6, "MOVIECLIP", 0, "Clip", ""},
	{7, "MASK", 0, "Mask", ""},
	{4, "SOUND", 0, "Sound", ""},
	{8, "CROSS", 0, "Cross", ""},
	{9, "ADD", 0, "Add", ""},
	{10, "SUBTRACT", 0, "Subtract", ""},
	{11, "ALPHA_OVER", 0, "Alpha Over", ""},
	{12, "ALPHA_UNDER", 0, "Alpha Under", ""},
	{13, "GAMMA_CROSS", 0, "Gamma Cross", ""},
	{14, "MULTIPLY", 0, "Multiply", ""},
	{15, "OVER_DROP", 0, "Over Drop", ""},
	{25, "WIPE", 0, "Wipe", ""},
	{26, "GLOW", 0, "Glow", ""},
	{27, "TRANSFORM", 0, "Transform", ""},
	{28, "COLOR", 0, "Color", ""},
	{29, "SPEED", 0, "Speed", ""},
	{30, "MULTICAM", 0, "Multicam Selector", ""},
	{31, "ADJUSTMENT", 0, "Adjustment Layer", ""},
	{40, "GAUSSIAN_BLUR", 0, "Gaussian Blur", ""},
	{0, NULL, 0, NULL, NULL}
};

EnumPropertyRNA rna_Sequence_type = {
	{(PropertyRNA *)&rna_Sequence_select, (PropertyRNA *)&rna_Sequence_name,
	-1, "type", 2, "Type",
	"",
	0, "Sequence",
	PROP_ENUM, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Sequence_update, 67502080, NULL, NULL,
	0, -1, NULL},
	Sequence_type_get, NULL, NULL, NULL, NULL, NULL, rna_Sequence_type_items, 23, 0
};

BoolPropertyRNA rna_Sequence_select = {
	{(PropertyRNA *)&rna_Sequence_select_left_handle, (PropertyRNA *)&rna_Sequence_type,
	-1, "select", 3, "Select",
	"",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 67502086, NULL, NULL,
	0, -1, NULL},
	Sequence_select_get, Sequence_select_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_Sequence_select_left_handle = {
	{(PropertyRNA *)&rna_Sequence_select_right_handle, (PropertyRNA *)&rna_Sequence_select,
	-1, "select_left_handle", 3, "Left Handle Selected",
	"",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 67502086, NULL, NULL,
	0, -1, NULL},
	Sequence_select_left_handle_get, Sequence_select_left_handle_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_Sequence_select_right_handle = {
	{(PropertyRNA *)&rna_Sequence_mute, (PropertyRNA *)&rna_Sequence_select_left_handle,
	-1, "select_right_handle", 3, "Right Handle Selected",
	"",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 67502086, NULL, NULL,
	0, -1, NULL},
	Sequence_select_right_handle_get, Sequence_select_right_handle_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_Sequence_mute = {
	{(PropertyRNA *)&rna_Sequence_lock, (PropertyRNA *)&rna_Sequence_select_right_handle,
	-1, "mute", 4099, "Mute",
	"",
	253, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Sequence_mute_update, 67502080, NULL, NULL,
	0, -1, NULL},
	Sequence_mute_get, Sequence_mute_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_Sequence_lock = {
	{(PropertyRNA *)&rna_Sequence_frame_final_duration, (PropertyRNA *)&rna_Sequence_mute,
	-1, "lock", 4099, "Lock",
	"Lock strip so that it can\'t be transformed",
	40, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 67502080, NULL, NULL,
	0, -1, NULL},
	Sequence_lock_get, Sequence_lock_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

IntPropertyRNA rna_Sequence_frame_final_duration = {
	{(PropertyRNA *)&rna_Sequence_frame_duration, (PropertyRNA *)&rna_Sequence_lock,
	-1, "frame_final_duration", 1, "Length",
	"The length of the contents of this strip after the handles are applied",
	0, "*",
	PROP_INT, PROP_TIME | PROP_UNIT_TIME, NULL, 0, {0, 0, 0}, 0,
	rna_Sequence_update, 67502080, rna_Sequence_frame_editable, NULL,
	0, -1, NULL},
	Sequence_frame_final_duration_get, Sequence_frame_final_duration_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL,
	1, 300000, 1, 300000, 1, 0, NULL
};

IntPropertyRNA rna_Sequence_frame_duration = {
	{(PropertyRNA *)&rna_Sequence_frame_start, (PropertyRNA *)&rna_Sequence_frame_final_duration,
	-1, "frame_duration", 8192, "Length",
	"The length of the contents of this strip before the handles are applied",
	0, "*",
	PROP_INT, PROP_TIME | PROP_UNIT_TIME, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	offsetof(Sequence, len), 0, NULL},
	Sequence_frame_duration_get, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL,
	1, 300000, 1, 300000, 1, 0, NULL
};

IntPropertyRNA rna_Sequence_frame_start = {
	{(PropertyRNA *)&rna_Sequence_frame_final_start, (PropertyRNA *)&rna_Sequence_frame_duration,
	-1, "frame_start", 1, "Start Frame",
	"",
	0, "*",
	PROP_INT, PROP_TIME | PROP_UNIT_TIME, NULL, 0, {0, 0, 0}, 0,
	rna_Sequence_update, 67502080, rna_Sequence_frame_editable, NULL,
	0, -1, NULL},
	Sequence_frame_start_get, Sequence_frame_start_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL,
	-10000, 10000, INT_MIN, INT_MAX, 1, 0, NULL
};

IntPropertyRNA rna_Sequence_frame_final_start = {
	{(PropertyRNA *)&rna_Sequence_frame_final_end, (PropertyRNA *)&rna_Sequence_frame_start,
	-1, "frame_final_start", 1, "Start Frame",
	"Start frame displayed in the sequence editor after offsets are applied, setting this is equivalent to moving the handle, not the actual start frame",
	0, "*",
	PROP_INT, PROP_TIME | PROP_UNIT_TIME, NULL, 0, {0, 0, 0}, 0,
	rna_Sequence_update, 67502080, rna_Sequence_frame_editable, NULL,
	0, -1, NULL},
	Sequence_frame_final_start_get, Sequence_frame_final_start_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL,
	-10000, 10000, INT_MIN, INT_MAX, 1, 0, NULL
};

IntPropertyRNA rna_Sequence_frame_final_end = {
	{(PropertyRNA *)&rna_Sequence_frame_offset_start, (PropertyRNA *)&rna_Sequence_frame_final_start,
	-1, "frame_final_end", 1, "End Frame",
	"End frame displayed in the sequence editor after offsets are applied",
	0, "*",
	PROP_INT, PROP_TIME | PROP_UNIT_TIME, NULL, 0, {0, 0, 0}, 0,
	rna_Sequence_update, 67502080, rna_Sequence_frame_editable, NULL,
	0, -1, NULL},
	Sequence_frame_final_end_get, Sequence_frame_final_end_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL,
	-10000, 10000, INT_MIN, INT_MAX, 1, 0, NULL
};

IntPropertyRNA rna_Sequence_frame_offset_start = {
	{(PropertyRNA *)&rna_Sequence_frame_offset_end, (PropertyRNA *)&rna_Sequence_frame_final_end,
	-1, "frame_offset_start", 8195, "Start Offset",
	"",
	0, "*",
	PROP_INT, PROP_TIME | PROP_UNIT_TIME, NULL, 0, {0, 0, 0}, 0,
	rna_Sequence_frame_change_update, 67502080, NULL, NULL,
	offsetof(Sequence, startofs), 0, NULL},
	Sequence_frame_offset_start_get, Sequence_frame_offset_start_set, NULL, NULL, rna_Sequence_frame_offset_range, NULL, NULL, NULL, NULL, NULL,
	-10000, 10000, INT_MIN, INT_MAX, 1, 0, NULL
};

IntPropertyRNA rna_Sequence_frame_offset_end = {
	{(PropertyRNA *)&rna_Sequence_frame_still_start, (PropertyRNA *)&rna_Sequence_frame_offset_start,
	-1, "frame_offset_end", 8195, "End Offset",
	"",
	0, "*",
	PROP_INT, PROP_TIME | PROP_UNIT_TIME, NULL, 0, {0, 0, 0}, 0,
	rna_Sequence_frame_change_update, 67502080, NULL, NULL,
	offsetof(Sequence, endofs), 0, NULL},
	Sequence_frame_offset_end_get, Sequence_frame_offset_end_set, NULL, NULL, rna_Sequence_frame_offset_range, NULL, NULL, NULL, NULL, NULL,
	-10000, 10000, INT_MIN, INT_MAX, 1, 0, NULL
};

IntPropertyRNA rna_Sequence_frame_still_start = {
	{(PropertyRNA *)&rna_Sequence_frame_still_end, (PropertyRNA *)&rna_Sequence_frame_offset_end,
	-1, "frame_still_start", 8195, "Start Still",
	"",
	0, "*",
	PROP_INT, PROP_TIME | PROP_UNIT_TIME, NULL, 0, {0, 0, 0}, 0,
	rna_Sequence_frame_change_update, 67502080, NULL, NULL,
	offsetof(Sequence, startstill), 0, NULL},
	Sequence_frame_still_start_get, Sequence_frame_still_start_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL,
	0, 300000, 0, 300000, 1, 0, NULL
};

IntPropertyRNA rna_Sequence_frame_still_end = {
	{(PropertyRNA *)&rna_Sequence_channel, (PropertyRNA *)&rna_Sequence_frame_still_start,
	-1, "frame_still_end", 8195, "End Still",
	"",
	0, "*",
	PROP_INT, PROP_TIME | PROP_UNIT_TIME, NULL, 0, {0, 0, 0}, 0,
	rna_Sequence_frame_change_update, 67502080, NULL, NULL,
	offsetof(Sequence, endstill), 0, NULL},
	Sequence_frame_still_end_get, Sequence_frame_still_end_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL,
	0, 300000, 0, 300000, 1, 0, NULL
};

IntPropertyRNA rna_Sequence_channel = {
	{(PropertyRNA *)&rna_Sequence_use_linear_modifiers, (PropertyRNA *)&rna_Sequence_frame_still_end,
	-1, "channel", 3, "Channel",
	"Y position of the sequence strip",
	0, "*",
	PROP_INT, PROP_UNSIGNED | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Sequence_update, 67502080, NULL, NULL,
	0, -1, NULL},
	Sequence_channel_get, Sequence_channel_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL,
	0, 31, 0, 31, 1, 0, NULL
};

BoolPropertyRNA rna_Sequence_use_linear_modifiers = {
	{(PropertyRNA *)&rna_Sequence_blend_type, (PropertyRNA *)&rna_Sequence_channel,
	-1, "use_linear_modifiers", 3, "Use Linear Modifiers",
	"Calculate modifiers in linear space instead of sequencer\'s space",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Sequence_update, 67502080, NULL, NULL,
	0, -1, NULL},
	Sequence_use_linear_modifiers_get, Sequence_use_linear_modifiers_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

static EnumPropertyItem rna_Sequence_blend_type_items[10] = {
	{0, "REPLACE", 0, "Replace", ""},
	{8, "CROSS", 0, "Cross", ""},
	{9, "ADD", 0, "Add", ""},
	{10, "SUBTRACT", 0, "Subtract", ""},
	{11, "ALPHA_OVER", 0, "Alpha Over", ""},
	{12, "ALPHA_UNDER", 0, "Alpha Under", ""},
	{13, "GAMMA_CROSS", 0, "Gamma Cross", ""},
	{14, "MULTIPLY", 0, "Multiply", ""},
	{15, "OVER_DROP", 0, "Over Drop", ""},
	{0, NULL, 0, NULL, NULL}
};

EnumPropertyRNA rna_Sequence_blend_type = {
	{(PropertyRNA *)&rna_Sequence_blend_alpha, (PropertyRNA *)&rna_Sequence_use_linear_modifiers,
	-1, "blend_type", 3, "Blend Mode",
	"",
	0, "*",
	PROP_ENUM, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Sequence_update, 67502080, NULL, NULL,
	0, -1, NULL},
	Sequence_blend_type_get, Sequence_blend_type_set, NULL, NULL, NULL, NULL, rna_Sequence_blend_type_items, 9, 0
};

FloatPropertyRNA rna_Sequence_blend_alpha = {
	{(PropertyRNA *)&rna_Sequence_effect_fader, (PropertyRNA *)&rna_Sequence_blend_type,
	-1, "blend_alpha", 3, "Blend Opacity",
	"",
	0, "*",
	PROP_FLOAT, PROP_FACTOR | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Sequence_update, 67502080, NULL, NULL,
	0, -1, NULL},
	Sequence_blend_alpha_get, Sequence_blend_alpha_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 1.0f, 0.0f, 1.0f, 10.0f, 3, 0.0f, NULL
};

FloatPropertyRNA rna_Sequence_effect_fader = {
	{(PropertyRNA *)&rna_Sequence_use_default_fade, (PropertyRNA *)&rna_Sequence_blend_alpha,
	-1, "effect_fader", 8195, "Effect fader position",
	"",
	0, "*",
	PROP_FLOAT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Sequence_update, 67502080, NULL, NULL,
	offsetof(Sequence, effect_fader), 4, NULL},
	Sequence_effect_fader_get, Sequence_effect_fader_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 1.0f, 0.0f, 1.0f, 0.1000000015f, 3, 0.0f, NULL
};

BoolPropertyRNA rna_Sequence_use_default_fade = {
	{(PropertyRNA *)&rna_Sequence_speed_factor, (PropertyRNA *)&rna_Sequence_effect_fader,
	-1, "use_default_fade", 3, "Use Default Fade",
	"Fade effect using the built-in default (usually make transition as long as effect strip)",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Sequence_update, 67502080, NULL, NULL,
	0, -1, NULL},
	Sequence_use_default_fade_get, Sequence_use_default_fade_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

FloatPropertyRNA rna_Sequence_speed_factor = {
	{(PropertyRNA *)&rna_Sequence_modifiers, (PropertyRNA *)&rna_Sequence_use_default_fade,
	-1, "speed_factor", 8195, "Speed factor",
	"Multiply the current speed of the sequence with this number or remap current frame to this frame",
	0, "*",
	PROP_FLOAT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Sequence_update, 67502080, NULL, NULL,
	offsetof(Sequence, speed_fader), 4, NULL},
	Sequence_speed_factor_get, Sequence_speed_factor_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, -10000.0f, 10000.0f, -FLT_MAX, FLT_MAX, 10.0f, 3, 0.0f, NULL
};

CollectionPropertyRNA rna_Sequence_modifiers = {
	{NULL, (PropertyRNA *)&rna_Sequence_speed_factor,
	-1, "modifiers", 0, "Modifiers",
	"Modifiers affecting this strip",
	0, "*",
	PROP_COLLECTION, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, &RNA_SequenceModifiers},
	Sequence_modifiers_begin, Sequence_modifiers_next, Sequence_modifiers_end, Sequence_modifiers_get, NULL, Sequence_modifiers_lookup_int, Sequence_modifiers_lookup_string, NULL, &RNA_SequenceModifier
};

BoolPropertyRNA rna_Sequence_update_data = {
	{NULL, NULL,
	-1, "data", 3, "Data",
	"Update strip data",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

FunctionRNA rna_Sequence_update_func = {
	{(FunctionRNA *)&rna_Sequence_strip_elem_from_frame_func, NULL,
	NULL,
	{(PropertyRNA *)&rna_Sequence_update_data, (PropertyRNA *)&rna_Sequence_update_data}},
	"update", 2048, "Update the strip dimensions",
	Sequence_update_call,
	NULL
};

IntPropertyRNA rna_Sequence_strip_elem_from_frame_frame = {
	{(PropertyRNA *)&rna_Sequence_strip_elem_from_frame_elem, NULL,
	-1, "frame", 7, "Frame",
	"The frame to get the strip element from",
	0, "*",
	PROP_INT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL,
	-300000, 300000, -300000, 300000, 1, 0, NULL
};

PointerPropertyRNA rna_Sequence_strip_elem_from_frame_elem = {
	{NULL, (PropertyRNA *)&rna_Sequence_strip_elem_from_frame_frame,
	-1, "elem", 8388616, "",
	"strip element of the current frame",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	NULL, NULL, NULL, NULL,&RNA_SequenceElement
};

FunctionRNA rna_Sequence_strip_elem_from_frame_func = {
	{(FunctionRNA *)&rna_Sequence_swap_func, (FunctionRNA *)&rna_Sequence_update_func,
	NULL,
	{(PropertyRNA *)&rna_Sequence_strip_elem_from_frame_frame, (PropertyRNA *)&rna_Sequence_strip_elem_from_frame_elem}},
	"strip_elem_from_frame", 0, "Return the strip element from a given frame or None",
	Sequence_strip_elem_from_frame_call,
	(PropertyRNA *)&rna_Sequence_strip_elem_from_frame_elem
};

PointerPropertyRNA rna_Sequence_swap_other = {
	{NULL, NULL,
	-1, "other", 8650756, "Other",
	"",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	NULL, NULL, NULL, NULL,&RNA_Sequence
};

FunctionRNA rna_Sequence_swap_func = {
	{NULL, (FunctionRNA *)&rna_Sequence_strip_elem_from_frame_func,
	NULL,
	{(PropertyRNA *)&rna_Sequence_swap_other, (PropertyRNA *)&rna_Sequence_swap_other}},
	"swap", 16, "swap",
	Sequence_swap_call,
	NULL
};

StructRNA RNA_Sequence = {
	{(ContainerRNA *)&RNA_SequenceModifiers, (ContainerRNA *)&RNA_SequenceTransform,
	NULL,
	{(PropertyRNA *)&rna_Sequence_rna_properties, (PropertyRNA *)&rna_Sequence_modifiers}},
	"Sequence", NULL, NULL, 4, "Sequence",
	"Sequence strip in the sequence editor",
	"*", 17,
	(PropertyRNA *)&rna_Sequence_name, (PropertyRNA *)&rna_Sequence_rna_properties,
	NULL,
	NULL,
	rna_Sequence_refine,
	rna_Sequence_path,
	NULL,
	NULL,
	NULL,
	NULL,
	{(FunctionRNA *)&rna_Sequence_update_func, (FunctionRNA *)&rna_Sequence_swap_func}
};

/* Strip Modifiers */
CollectionPropertyRNA rna_SequenceModifiers_rna_properties = {
	{(PropertyRNA *)&rna_SequenceModifiers_rna_type, NULL,
	-1, "rna_properties", 128, "Properties",
	"RNA property collection",
	0, "*",
	PROP_COLLECTION, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	SequenceModifiers_rna_properties_begin, SequenceModifiers_rna_properties_next, SequenceModifiers_rna_properties_end, SequenceModifiers_rna_properties_get, NULL, NULL, SequenceModifiers_rna_properties_lookup_string, NULL, &RNA_Property
};

PointerPropertyRNA rna_SequenceModifiers_rna_type = {
	{NULL, (PropertyRNA *)&rna_SequenceModifiers_rna_properties,
	-1, "rna_type", 8912896, "RNA",
	"RNA type definition",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	SequenceModifiers_rna_type_get, NULL, NULL, NULL,&RNA_Struct
};

StringPropertyRNA rna_SequenceModifiers_new_name = {
	{(PropertyRNA *)&rna_SequenceModifiers_new_type, NULL,
	-1, "name", 262149, "",
	"New name for the modifier",
	0, "*",
	PROP_STRING, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	NULL, NULL, NULL, NULL, NULL, NULL, 0, "Name"
};

static EnumPropertyItem rna_SequenceModifiers_new_type_items[6] = {
	{1, "COLOR_BALANCE", 0, "Color Balance", ""},
	{2, "CURVES", 0, "Curves", ""},
	{3, "HUE_CORRECT", 0, "Hue Correct", ""},
	{4, "BRIGHT_CONTRAST", 0, "Bright/Contrast", ""},
	{5, "MASK", 0, "Mask", ""},
	{0, NULL, 0, NULL, NULL}
};

EnumPropertyRNA rna_SequenceModifiers_new_type = {
	{(PropertyRNA *)&rna_SequenceModifiers_new_modifier, (PropertyRNA *)&rna_SequenceModifiers_new_name,
	-1, "type", 7, "",
	"Modifier type to add",
	0, "*",
	PROP_ENUM, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	NULL, NULL, NULL, NULL, NULL, NULL, rna_SequenceModifiers_new_type_items, 5, 1
};

PointerPropertyRNA rna_SequenceModifiers_new_modifier = {
	{NULL, (PropertyRNA *)&rna_SequenceModifiers_new_type,
	-1, "modifier", 8388616, "",
	"Newly created modifier",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	NULL, NULL, NULL, NULL,&RNA_SequenceModifier
};

FunctionRNA rna_SequenceModifiers_new_func = {
	{(FunctionRNA *)&rna_SequenceModifiers_remove_func, NULL,
	NULL,
	{(PropertyRNA *)&rna_SequenceModifiers_new_name, (PropertyRNA *)&rna_SequenceModifiers_new_modifier}},
	"new", 24, "Add a new modifier",
	SequenceModifiers_new_call,
	(PropertyRNA *)&rna_SequenceModifiers_new_modifier
};

PointerPropertyRNA rna_SequenceModifiers_remove_modifier = {
	{NULL, NULL,
	-1, "modifier", 264196, "",
	"Modifier to remove",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	NULL, NULL, NULL, NULL,&RNA_SequenceModifier
};

FunctionRNA rna_SequenceModifiers_remove_func = {
	{(FunctionRNA *)&rna_SequenceModifiers_clear_func, (FunctionRNA *)&rna_SequenceModifiers_new_func,
	NULL,
	{(PropertyRNA *)&rna_SequenceModifiers_remove_modifier, (PropertyRNA *)&rna_SequenceModifiers_remove_modifier}},
	"remove", 24, "Remove an existing modifier from the sequence",
	SequenceModifiers_remove_call,
	NULL
};

FunctionRNA rna_SequenceModifiers_clear_func = {
	{NULL, (FunctionRNA *)&rna_SequenceModifiers_remove_func,
	NULL,
	{NULL, NULL}},
	"clear", 8, "Remove all modifiers from the sequence",
	SequenceModifiers_clear_call,
	NULL
};

StructRNA RNA_SequenceModifiers = {
	{(ContainerRNA *)&RNA_SequenceEditor, (ContainerRNA *)&RNA_Sequence,
	NULL,
	{(PropertyRNA *)&rna_SequenceModifiers_rna_properties, (PropertyRNA *)&rna_SequenceModifiers_rna_type}},
	"SequenceModifiers", NULL, NULL, 4, "Strip Modifiers",
	"Collection of strip modifiers",
	"*", 17,
	NULL, (PropertyRNA *)&rna_SequenceModifiers_rna_properties,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	{(FunctionRNA *)&rna_SequenceModifiers_new_func, (FunctionRNA *)&rna_SequenceModifiers_clear_func}
};

/* Sequence Editor */
CollectionPropertyRNA rna_SequenceEditor_rna_properties = {
	{(PropertyRNA *)&rna_SequenceEditor_rna_type, NULL,
	-1, "rna_properties", 128, "Properties",
	"RNA property collection",
	0, "*",
	PROP_COLLECTION, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	SequenceEditor_rna_properties_begin, SequenceEditor_rna_properties_next, SequenceEditor_rna_properties_end, SequenceEditor_rna_properties_get, NULL, NULL, SequenceEditor_rna_properties_lookup_string, NULL, &RNA_Property
};

PointerPropertyRNA rna_SequenceEditor_rna_type = {
	{(PropertyRNA *)&rna_SequenceEditor_sequences, (PropertyRNA *)&rna_SequenceEditor_rna_properties,
	-1, "rna_type", 8912896, "RNA",
	"RNA type definition",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	SequenceEditor_rna_type_get, NULL, NULL, NULL,&RNA_Struct
};

CollectionPropertyRNA rna_SequenceEditor_sequences = {
	{(PropertyRNA *)&rna_SequenceEditor_sequences_all, (PropertyRNA *)&rna_SequenceEditor_rna_type,
	-1, "sequences", 0, "Sequences",
	"Top-level strips only",
	0, "*",
	PROP_COLLECTION, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, &RNA_Sequences},
	SequenceEditor_sequences_begin, SequenceEditor_sequences_next, SequenceEditor_sequences_end, SequenceEditor_sequences_get, NULL, SequenceEditor_sequences_lookup_int, SequenceEditor_sequences_lookup_string, NULL, &RNA_Sequence
};

CollectionPropertyRNA rna_SequenceEditor_sequences_all = {
	{(PropertyRNA *)&rna_SequenceEditor_meta_stack, (PropertyRNA *)&rna_SequenceEditor_sequences,
	-1, "sequences_all", 0, "All Sequences",
	"All strips, recursively including those inside metastrips",
	0, "*",
	PROP_COLLECTION, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	SequenceEditor_sequences_all_begin, SequenceEditor_sequences_all_next, SequenceEditor_sequences_all_end, SequenceEditor_sequences_all_get, NULL, NULL, SequenceEditor_sequences_all_lookup_string, NULL, &RNA_Sequence
};

CollectionPropertyRNA rna_SequenceEditor_meta_stack = {
	{(PropertyRNA *)&rna_SequenceEditor_active_strip, (PropertyRNA *)&rna_SequenceEditor_sequences_all,
	-1, "meta_stack", 0, "Meta Stack",
	"Meta strip stack, last is currently edited meta strip",
	0, "*",
	PROP_COLLECTION, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	SequenceEditor_meta_stack_begin, SequenceEditor_meta_stack_next, SequenceEditor_meta_stack_end, SequenceEditor_meta_stack_get, NULL, SequenceEditor_meta_stack_lookup_int, SequenceEditor_meta_stack_lookup_string, NULL, &RNA_Sequence
};

PointerPropertyRNA rna_SequenceEditor_active_strip = {
	{(PropertyRNA *)&rna_SequenceEditor_show_overlay, (PropertyRNA *)&rna_SequenceEditor_meta_stack,
	-1, "active_strip", 8388609, "Active Strip",
	"Sequencer\'s active strip",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	SequenceEditor_active_strip_get, SequenceEditor_active_strip_set, NULL, NULL,&RNA_Sequence
};

BoolPropertyRNA rna_SequenceEditor_show_overlay = {
	{(PropertyRNA *)&rna_SequenceEditor_use_overlay_lock, (PropertyRNA *)&rna_SequenceEditor_active_strip,
	-1, "show_overlay", 3, "Draw Axes",
	"Partial overlay on top of the sequencer",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 252706816, NULL, NULL,
	0, -1, NULL},
	SequenceEditor_show_overlay_get, SequenceEditor_show_overlay_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_SequenceEditor_use_overlay_lock = {
	{(PropertyRNA *)&rna_SequenceEditor_overlay_frame, (PropertyRNA *)&rna_SequenceEditor_show_overlay,
	-1, "use_overlay_lock", 3, "Overlay Lock",
	"",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 252706816, NULL, NULL,
	0, -1, NULL},
	SequenceEditor_use_overlay_lock_get, SequenceEditor_use_overlay_lock_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

IntPropertyRNA rna_SequenceEditor_overlay_frame = {
	{NULL, (PropertyRNA *)&rna_SequenceEditor_use_overlay_lock,
	-1, "overlay_frame", 3, "Overlay Offset",
	"",
	0, "*",
	PROP_INT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 252706816, NULL, NULL,
	0, -1, NULL},
	SequenceEditor_overlay_frame_get, SequenceEditor_overlay_frame_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL,
	-10000, 10000, INT_MIN, INT_MAX, 1, 0, NULL
};

StructRNA RNA_SequenceEditor = {
	{(ContainerRNA *)&RNA_Sequences, (ContainerRNA *)&RNA_SequenceModifiers,
	NULL,
	{(PropertyRNA *)&rna_SequenceEditor_rna_properties, (PropertyRNA *)&rna_SequenceEditor_overlay_frame}},
	"SequenceEditor", NULL, NULL, 4, "Sequence Editor",
	"Sequence editing data for a Scene datablock",
	"*", 111,
	NULL, (PropertyRNA *)&rna_SequenceEditor_rna_properties,
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

/* Sequences */
CollectionPropertyRNA rna_Sequences_rna_properties = {
	{(PropertyRNA *)&rna_Sequences_rna_type, NULL,
	-1, "rna_properties", 128, "Properties",
	"RNA property collection",
	0, "*",
	PROP_COLLECTION, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	Sequences_rna_properties_begin, Sequences_rna_properties_next, Sequences_rna_properties_end, Sequences_rna_properties_get, NULL, NULL, Sequences_rna_properties_lookup_string, NULL, &RNA_Property
};

PointerPropertyRNA rna_Sequences_rna_type = {
	{NULL, (PropertyRNA *)&rna_Sequences_rna_properties,
	-1, "rna_type", 8912896, "RNA",
	"RNA type definition",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	Sequences_rna_type_get, NULL, NULL, NULL,&RNA_Struct
};

StringPropertyRNA rna_Sequences_new_clip_name = {
	{(PropertyRNA *)&rna_Sequences_new_clip_clip, NULL,
	-1, "name", 262149, "",
	"Name for the new sequence",
	0, "*",
	PROP_STRING, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	NULL, NULL, NULL, NULL, NULL, NULL, 0, "Name"
};

PointerPropertyRNA rna_Sequences_new_clip_clip = {
	{(PropertyRNA *)&rna_Sequences_new_clip_channel, (PropertyRNA *)&rna_Sequences_new_clip_name,
	-1, "clip", 8650756, "",
	"Movie clip to add",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	NULL, NULL, NULL, NULL,&RNA_MovieClip
};

IntPropertyRNA rna_Sequences_new_clip_channel = {
	{(PropertyRNA *)&rna_Sequences_new_clip_frame_start, (PropertyRNA *)&rna_Sequences_new_clip_clip,
	-1, "channel", 7, "Channel",
	"The channel for the new sequence",
	0, "*",
	PROP_INT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL,
	0, 31, 0, 31, 1, 0, NULL
};

IntPropertyRNA rna_Sequences_new_clip_frame_start = {
	{(PropertyRNA *)&rna_Sequences_new_clip_sequence, (PropertyRNA *)&rna_Sequences_new_clip_channel,
	-1, "frame_start", 7, "",
	"The start frame for the new sequence",
	0, "*",
	PROP_INT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL,
	-300000, 300000, -300000, 300000, 1, 0, NULL
};

PointerPropertyRNA rna_Sequences_new_clip_sequence = {
	{NULL, (PropertyRNA *)&rna_Sequences_new_clip_frame_start,
	-1, "sequence", 8388616, "",
	"New Sequence",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	NULL, NULL, NULL, NULL,&RNA_Sequence
};

FunctionRNA rna_Sequences_new_clip_func = {
	{(FunctionRNA *)&rna_Sequences_new_mask_func, NULL,
	NULL,
	{(PropertyRNA *)&rna_Sequences_new_clip_name, (PropertyRNA *)&rna_Sequences_new_clip_sequence}},
	"new_clip", 2048, "Add a new movie clip sequence",
	Sequences_new_clip_call,
	(PropertyRNA *)&rna_Sequences_new_clip_sequence
};

StringPropertyRNA rna_Sequences_new_mask_name = {
	{(PropertyRNA *)&rna_Sequences_new_mask_mask, NULL,
	-1, "name", 262149, "",
	"Name for the new sequence",
	0, "*",
	PROP_STRING, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	NULL, NULL, NULL, NULL, NULL, NULL, 0, "Name"
};

PointerPropertyRNA rna_Sequences_new_mask_mask = {
	{(PropertyRNA *)&rna_Sequences_new_mask_channel, (PropertyRNA *)&rna_Sequences_new_mask_name,
	-1, "mask", 8650756, "",
	"Mask to add",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	NULL, NULL, NULL, NULL,&RNA_Mask
};

IntPropertyRNA rna_Sequences_new_mask_channel = {
	{(PropertyRNA *)&rna_Sequences_new_mask_frame_start, (PropertyRNA *)&rna_Sequences_new_mask_mask,
	-1, "channel", 7, "Channel",
	"The channel for the new sequence",
	0, "*",
	PROP_INT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL,
	0, 31, 0, 31, 1, 0, NULL
};

IntPropertyRNA rna_Sequences_new_mask_frame_start = {
	{(PropertyRNA *)&rna_Sequences_new_mask_sequence, (PropertyRNA *)&rna_Sequences_new_mask_channel,
	-1, "frame_start", 7, "",
	"The start frame for the new sequence",
	0, "*",
	PROP_INT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL,
	-300000, 300000, -300000, 300000, 1, 0, NULL
};

PointerPropertyRNA rna_Sequences_new_mask_sequence = {
	{NULL, (PropertyRNA *)&rna_Sequences_new_mask_frame_start,
	-1, "sequence", 8388616, "",
	"New Sequence",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	NULL, NULL, NULL, NULL,&RNA_Sequence
};

FunctionRNA rna_Sequences_new_mask_func = {
	{(FunctionRNA *)&rna_Sequences_new_scene_func, (FunctionRNA *)&rna_Sequences_new_clip_func,
	NULL,
	{(PropertyRNA *)&rna_Sequences_new_mask_name, (PropertyRNA *)&rna_Sequences_new_mask_sequence}},
	"new_mask", 2048, "Add a new mask sequence",
	Sequences_new_mask_call,
	(PropertyRNA *)&rna_Sequences_new_mask_sequence
};

StringPropertyRNA rna_Sequences_new_scene_name = {
	{(PropertyRNA *)&rna_Sequences_new_scene_scene, NULL,
	-1, "name", 262149, "",
	"Name for the new sequence",
	0, "*",
	PROP_STRING, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	NULL, NULL, NULL, NULL, NULL, NULL, 0, "Name"
};

PointerPropertyRNA rna_Sequences_new_scene_scene = {
	{(PropertyRNA *)&rna_Sequences_new_scene_channel, (PropertyRNA *)&rna_Sequences_new_scene_name,
	-1, "scene", 8650756, "",
	"Scene to add",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	NULL, NULL, NULL, NULL,&RNA_Scene
};

IntPropertyRNA rna_Sequences_new_scene_channel = {
	{(PropertyRNA *)&rna_Sequences_new_scene_frame_start, (PropertyRNA *)&rna_Sequences_new_scene_scene,
	-1, "channel", 7, "Channel",
	"The channel for the new sequence",
	0, "*",
	PROP_INT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL,
	0, 31, 0, 31, 1, 0, NULL
};

IntPropertyRNA rna_Sequences_new_scene_frame_start = {
	{(PropertyRNA *)&rna_Sequences_new_scene_sequence, (PropertyRNA *)&rna_Sequences_new_scene_channel,
	-1, "frame_start", 7, "",
	"The start frame for the new sequence",
	0, "*",
	PROP_INT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL,
	-300000, 300000, -300000, 300000, 1, 0, NULL
};

PointerPropertyRNA rna_Sequences_new_scene_sequence = {
	{NULL, (PropertyRNA *)&rna_Sequences_new_scene_frame_start,
	-1, "sequence", 8388616, "",
	"New Sequence",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	NULL, NULL, NULL, NULL,&RNA_Sequence
};

FunctionRNA rna_Sequences_new_scene_func = {
	{(FunctionRNA *)&rna_Sequences_new_image_func, (FunctionRNA *)&rna_Sequences_new_mask_func,
	NULL,
	{(PropertyRNA *)&rna_Sequences_new_scene_name, (PropertyRNA *)&rna_Sequences_new_scene_sequence}},
	"new_scene", 2048, "Add a new scene sequence",
	Sequences_new_scene_call,
	(PropertyRNA *)&rna_Sequences_new_scene_sequence
};

StringPropertyRNA rna_Sequences_new_image_name = {
	{(PropertyRNA *)&rna_Sequences_new_image_filepath, NULL,
	-1, "name", 262149, "",
	"Name for the new sequence",
	0, "*",
	PROP_STRING, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	NULL, NULL, NULL, NULL, NULL, NULL, 0, "Name"
};

StringPropertyRNA rna_Sequences_new_image_filepath = {
	{(PropertyRNA *)&rna_Sequences_new_image_channel, (PropertyRNA *)&rna_Sequences_new_image_name,
	-1, "filepath", 262149, "",
	"Filepath to image",
	0, "*",
	PROP_STRING, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	NULL, NULL, NULL, NULL, NULL, NULL, 0, "File"
};

IntPropertyRNA rna_Sequences_new_image_channel = {
	{(PropertyRNA *)&rna_Sequences_new_image_frame_start, (PropertyRNA *)&rna_Sequences_new_image_filepath,
	-1, "channel", 7, "Channel",
	"The channel for the new sequence",
	0, "*",
	PROP_INT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL,
	0, 31, 0, 31, 1, 0, NULL
};

IntPropertyRNA rna_Sequences_new_image_frame_start = {
	{(PropertyRNA *)&rna_Sequences_new_image_sequence, (PropertyRNA *)&rna_Sequences_new_image_channel,
	-1, "frame_start", 7, "",
	"The start frame for the new sequence",
	0, "*",
	PROP_INT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL,
	-300000, 300000, -300000, 300000, 1, 0, NULL
};

PointerPropertyRNA rna_Sequences_new_image_sequence = {
	{NULL, (PropertyRNA *)&rna_Sequences_new_image_frame_start,
	-1, "sequence", 8388616, "",
	"New Sequence",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	NULL, NULL, NULL, NULL,&RNA_Sequence
};

FunctionRNA rna_Sequences_new_image_func = {
	{(FunctionRNA *)&rna_Sequences_new_movie_func, (FunctionRNA *)&rna_Sequences_new_scene_func,
	NULL,
	{(PropertyRNA *)&rna_Sequences_new_image_name, (PropertyRNA *)&rna_Sequences_new_image_sequence}},
	"new_image", 2064, "Add a new image sequence",
	Sequences_new_image_call,
	(PropertyRNA *)&rna_Sequences_new_image_sequence
};

StringPropertyRNA rna_Sequences_new_movie_name = {
	{(PropertyRNA *)&rna_Sequences_new_movie_filepath, NULL,
	-1, "name", 262149, "",
	"Name for the new sequence",
	0, "*",
	PROP_STRING, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	NULL, NULL, NULL, NULL, NULL, NULL, 0, "Name"
};

StringPropertyRNA rna_Sequences_new_movie_filepath = {
	{(PropertyRNA *)&rna_Sequences_new_movie_channel, (PropertyRNA *)&rna_Sequences_new_movie_name,
	-1, "filepath", 262149, "",
	"Filepath to movie",
	0, "*",
	PROP_STRING, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	NULL, NULL, NULL, NULL, NULL, NULL, 0, "File"
};

IntPropertyRNA rna_Sequences_new_movie_channel = {
	{(PropertyRNA *)&rna_Sequences_new_movie_frame_start, (PropertyRNA *)&rna_Sequences_new_movie_filepath,
	-1, "channel", 7, "Channel",
	"The channel for the new sequence",
	0, "*",
	PROP_INT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL,
	0, 31, 0, 31, 1, 0, NULL
};

IntPropertyRNA rna_Sequences_new_movie_frame_start = {
	{(PropertyRNA *)&rna_Sequences_new_movie_sequence, (PropertyRNA *)&rna_Sequences_new_movie_channel,
	-1, "frame_start", 7, "",
	"The start frame for the new sequence",
	0, "*",
	PROP_INT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL,
	-300000, 300000, -300000, 300000, 1, 0, NULL
};

PointerPropertyRNA rna_Sequences_new_movie_sequence = {
	{NULL, (PropertyRNA *)&rna_Sequences_new_movie_frame_start,
	-1, "sequence", 8388616, "",
	"New Sequence",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	NULL, NULL, NULL, NULL,&RNA_Sequence
};

FunctionRNA rna_Sequences_new_movie_func = {
	{(FunctionRNA *)&rna_Sequences_new_sound_func, (FunctionRNA *)&rna_Sequences_new_image_func,
	NULL,
	{(PropertyRNA *)&rna_Sequences_new_movie_name, (PropertyRNA *)&rna_Sequences_new_movie_sequence}},
	"new_movie", 2064, "Add a new movie sequence",
	Sequences_new_movie_call,
	(PropertyRNA *)&rna_Sequences_new_movie_sequence
};

StringPropertyRNA rna_Sequences_new_sound_name = {
	{(PropertyRNA *)&rna_Sequences_new_sound_filepath, NULL,
	-1, "name", 262149, "",
	"Name for the new sequence",
	0, "*",
	PROP_STRING, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	NULL, NULL, NULL, NULL, NULL, NULL, 0, "Name"
};

StringPropertyRNA rna_Sequences_new_sound_filepath = {
	{(PropertyRNA *)&rna_Sequences_new_sound_channel, (PropertyRNA *)&rna_Sequences_new_sound_name,
	-1, "filepath", 262149, "",
	"Filepath to movie",
	0, "*",
	PROP_STRING, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	NULL, NULL, NULL, NULL, NULL, NULL, 0, "File"
};

IntPropertyRNA rna_Sequences_new_sound_channel = {
	{(PropertyRNA *)&rna_Sequences_new_sound_frame_start, (PropertyRNA *)&rna_Sequences_new_sound_filepath,
	-1, "channel", 7, "Channel",
	"The channel for the new sequence",
	0, "*",
	PROP_INT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL,
	0, 31, 0, 31, 1, 0, NULL
};

IntPropertyRNA rna_Sequences_new_sound_frame_start = {
	{(PropertyRNA *)&rna_Sequences_new_sound_sequence, (PropertyRNA *)&rna_Sequences_new_sound_channel,
	-1, "frame_start", 7, "",
	"The start frame for the new sequence",
	0, "*",
	PROP_INT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL,
	-300000, 300000, -300000, 300000, 1, 0, NULL
};

PointerPropertyRNA rna_Sequences_new_sound_sequence = {
	{NULL, (PropertyRNA *)&rna_Sequences_new_sound_frame_start,
	-1, "sequence", 8388616, "",
	"New Sequence",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	NULL, NULL, NULL, NULL,&RNA_Sequence
};

FunctionRNA rna_Sequences_new_sound_func = {
	{(FunctionRNA *)&rna_Sequences_new_effect_func, (FunctionRNA *)&rna_Sequences_new_movie_func,
	NULL,
	{(PropertyRNA *)&rna_Sequences_new_sound_name, (PropertyRNA *)&rna_Sequences_new_sound_sequence}},
	"new_sound", 2068, "Add a new sound sequence",
	Sequences_new_sound_call,
	(PropertyRNA *)&rna_Sequences_new_sound_sequence
};

StringPropertyRNA rna_Sequences_new_effect_name = {
	{(PropertyRNA *)&rna_Sequences_new_effect_type, NULL,
	-1, "name", 262149, "",
	"Name for the new sequence",
	0, "*",
	PROP_STRING, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	NULL, NULL, NULL, NULL, NULL, NULL, 0, "Name"
};

static EnumPropertyItem rna_Sequences_new_effect_type_items[17] = {
	{8, "CROSS", 0, "Cross", ""},
	{9, "ADD", 0, "Add", ""},
	{10, "SUBTRACT", 0, "Subtract", ""},
	{11, "ALPHA_OVER", 0, "Alpha Over", ""},
	{12, "ALPHA_UNDER", 0, "Alpha Under", ""},
	{13, "GAMMA_CROSS", 0, "Gamma Cross", ""},
	{14, "MULTIPLY", 0, "Multiply", ""},
	{15, "OVER_DROP", 0, "Over Drop", ""},
	{25, "WIPE", 0, "Wipe", ""},
	{26, "GLOW", 0, "Glow", ""},
	{27, "TRANSFORM", 0, "Transform", ""},
	{28, "COLOR", 0, "Color", ""},
	{29, "SPEED", 0, "Speed", ""},
	{30, "MULTICAM", 0, "Multicam Selector", ""},
	{31, "ADJUSTMENT", 0, "Adjustment Layer", ""},
	{40, "GAUSSIAN_BLUR", 0, "Gaussian Blur", ""},
	{0, NULL, 0, NULL, NULL}
};

EnumPropertyRNA rna_Sequences_new_effect_type = {
	{(PropertyRNA *)&rna_Sequences_new_effect_channel, (PropertyRNA *)&rna_Sequences_new_effect_name,
	-1, "type", 7, "Type",
	"type for the new sequence",
	0, "*",
	PROP_ENUM, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	NULL, NULL, NULL, NULL, NULL, NULL, rna_Sequences_new_effect_type_items, 16, 8
};

IntPropertyRNA rna_Sequences_new_effect_channel = {
	{(PropertyRNA *)&rna_Sequences_new_effect_frame_start, (PropertyRNA *)&rna_Sequences_new_effect_type,
	-1, "channel", 7, "Channel",
	"The channel for the new sequence",
	0, "*",
	PROP_INT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL,
	0, 31, 0, 31, 1, 0, NULL
};

IntPropertyRNA rna_Sequences_new_effect_frame_start = {
	{(PropertyRNA *)&rna_Sequences_new_effect_frame_end, (PropertyRNA *)&rna_Sequences_new_effect_channel,
	-1, "frame_start", 7, "",
	"The start frame for the new sequence",
	0, "*",
	PROP_INT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL,
	INT_MIN, INT_MAX, INT_MIN, INT_MAX, 1, 0, NULL
};

IntPropertyRNA rna_Sequences_new_effect_frame_end = {
	{(PropertyRNA *)&rna_Sequences_new_effect_seq1, (PropertyRNA *)&rna_Sequences_new_effect_frame_start,
	-1, "frame_end", 3, "",
	"The end frame for the new sequence",
	0, "*",
	PROP_INT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL,
	INT_MIN, INT_MAX, INT_MIN, INT_MAX, 1, 0, NULL
};

PointerPropertyRNA rna_Sequences_new_effect_seq1 = {
	{(PropertyRNA *)&rna_Sequences_new_effect_seq2, (PropertyRNA *)&rna_Sequences_new_effect_frame_end,
	-1, "seq1", 8388608, "",
	"Sequence 1 for effect",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	NULL, NULL, NULL, NULL,&RNA_Sequence
};

PointerPropertyRNA rna_Sequences_new_effect_seq2 = {
	{(PropertyRNA *)&rna_Sequences_new_effect_seq3, (PropertyRNA *)&rna_Sequences_new_effect_seq1,
	-1, "seq2", 8388608, "",
	"Sequence 2 for effect",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	NULL, NULL, NULL, NULL,&RNA_Sequence
};

PointerPropertyRNA rna_Sequences_new_effect_seq3 = {
	{(PropertyRNA *)&rna_Sequences_new_effect_sequence, (PropertyRNA *)&rna_Sequences_new_effect_seq2,
	-1, "seq3", 8388608, "",
	"Sequence 3 for effect",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	NULL, NULL, NULL, NULL,&RNA_Sequence
};

PointerPropertyRNA rna_Sequences_new_effect_sequence = {
	{NULL, (PropertyRNA *)&rna_Sequences_new_effect_seq3,
	-1, "sequence", 8388616, "",
	"New Sequence",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	NULL, NULL, NULL, NULL,&RNA_Sequence
};

FunctionRNA rna_Sequences_new_effect_func = {
	{(FunctionRNA *)&rna_Sequences_remove_func, (FunctionRNA *)&rna_Sequences_new_sound_func,
	NULL,
	{(PropertyRNA *)&rna_Sequences_new_effect_name, (PropertyRNA *)&rna_Sequences_new_effect_sequence}},
	"new_effect", 2064, "Add a new effect sequence",
	Sequences_new_effect_call,
	(PropertyRNA *)&rna_Sequences_new_effect_sequence
};

PointerPropertyRNA rna_Sequences_remove_sequence = {
	{NULL, NULL,
	-1, "sequence", 264196, "",
	"Sequence to remove",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	NULL, NULL, NULL, NULL,&RNA_Sequence
};

FunctionRNA rna_Sequences_remove_func = {
	{NULL, (FunctionRNA *)&rna_Sequences_new_effect_func,
	NULL,
	{(PropertyRNA *)&rna_Sequences_remove_sequence, (PropertyRNA *)&rna_Sequences_remove_sequence}},
	"remove", 2064, "Remove a Sequence",
	Sequences_remove_call,
	NULL
};

StructRNA RNA_Sequences = {
	{(ContainerRNA *)&RNA_ImageSequence, (ContainerRNA *)&RNA_SequenceEditor,
	NULL,
	{(PropertyRNA *)&rna_Sequences_rna_properties, (PropertyRNA *)&rna_Sequences_rna_type}},
	"Sequences", NULL, NULL, 4, "Sequences",
	"Collection of Sequences",
	"*", 17,
	NULL, (PropertyRNA *)&rna_Sequences_rna_properties,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	{(FunctionRNA *)&rna_Sequences_new_clip_func, (FunctionRNA *)&rna_Sequences_remove_func}
};

/* Image Sequence */
StringPropertyRNA rna_ImageSequence_directory = {
	{(PropertyRNA *)&rna_ImageSequence_elements, NULL,
	-1, "directory", 262145, "Directory",
	"",
	0, "*",
	PROP_STRING, PROP_DIRPATH | PROP_UNIT_NONE, NULL, 0, {768, 0, 0}, 0,
	rna_Sequence_update, 67502080, NULL, NULL,
	0, -1, NULL},
	ImageSequence_directory_get, ImageSequence_directory_length, ImageSequence_directory_set, NULL, NULL, NULL, 768, ""
};

CollectionPropertyRNA rna_ImageSequence_elements = {
	{(PropertyRNA *)&rna_ImageSequence_use_deinterlace, (PropertyRNA *)&rna_ImageSequence_directory,
	-1, "elements", 16384, "Elements",
	"",
	0, "*",
	PROP_COLLECTION, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, &RNA_SequenceElements},
	ImageSequence_elements_begin, ImageSequence_elements_next, ImageSequence_elements_end, ImageSequence_elements_get, rna_SequenceEditor_elements_length, ImageSequence_elements_lookup_int, NULL, NULL, &RNA_SequenceElement
};

BoolPropertyRNA rna_ImageSequence_use_deinterlace = {
	{(PropertyRNA *)&rna_ImageSequence_alpha_mode, (PropertyRNA *)&rna_ImageSequence_elements,
	-1, "use_deinterlace", 3, "De-Interlace",
	"For video movies to remove fields",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Sequence_update_reopen_files, 67502080, NULL, NULL,
	0, -1, NULL},
	ImageSequence_use_deinterlace_get, ImageSequence_use_deinterlace_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

static EnumPropertyItem rna_ImageSequence_alpha_mode_items[3] = {
	{0, "STRAIGHT", 0, "Straight", "RGB channels in transparent pixels are unaffected by the alpha channel"},
	{1, "PREMUL", 0, "Premultiplied", "RGB channels in transparent pixels are multiplied by the alpha channel"},
	{0, NULL, 0, NULL, NULL}
};

EnumPropertyRNA rna_ImageSequence_alpha_mode = {
	{(PropertyRNA *)&rna_ImageSequence_use_flip_x, (PropertyRNA *)&rna_ImageSequence_use_deinterlace,
	-1, "alpha_mode", 3, "Alpha Mode",
	"Representation of alpha information in the RGBA pixels",
	0, "*",
	PROP_ENUM, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Sequence_update, 67502080, NULL, NULL,
	0, -1, NULL},
	ImageSequence_alpha_mode_get, ImageSequence_alpha_mode_set, NULL, NULL, NULL, NULL, rna_ImageSequence_alpha_mode_items, 2, 0
};

BoolPropertyRNA rna_ImageSequence_use_flip_x = {
	{(PropertyRNA *)&rna_ImageSequence_use_flip_y, (PropertyRNA *)&rna_ImageSequence_alpha_mode,
	-1, "use_flip_x", 3, "Flip X",
	"Flip on the X axis",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Sequence_update, 67502080, NULL, NULL,
	0, -1, NULL},
	ImageSequence_use_flip_x_get, ImageSequence_use_flip_x_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_ImageSequence_use_flip_y = {
	{(PropertyRNA *)&rna_ImageSequence_use_float, (PropertyRNA *)&rna_ImageSequence_use_flip_x,
	-1, "use_flip_y", 3, "Flip Y",
	"Flip on the Y axis",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Sequence_update, 67502080, NULL, NULL,
	0, -1, NULL},
	ImageSequence_use_flip_y_get, ImageSequence_use_flip_y_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_ImageSequence_use_float = {
	{(PropertyRNA *)&rna_ImageSequence_use_reverse_frames, (PropertyRNA *)&rna_ImageSequence_use_flip_y,
	-1, "use_float", 3, "Convert Float",
	"Convert input to float data",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Sequence_update, 67502080, NULL, NULL,
	0, -1, NULL},
	ImageSequence_use_float_get, ImageSequence_use_float_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_ImageSequence_use_reverse_frames = {
	{(PropertyRNA *)&rna_ImageSequence_color_multiply, (PropertyRNA *)&rna_ImageSequence_use_float,
	-1, "use_reverse_frames", 3, "Flip Time",
	"Reverse frame order",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Sequence_update, 67502080, NULL, NULL,
	0, -1, NULL},
	ImageSequence_use_reverse_frames_get, ImageSequence_use_reverse_frames_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

FloatPropertyRNA rna_ImageSequence_color_multiply = {
	{(PropertyRNA *)&rna_ImageSequence_color_saturation, (PropertyRNA *)&rna_ImageSequence_use_reverse_frames,
	-1, "color_multiply", 8195, "Multiply Colors",
	"",
	0, "*",
	PROP_FLOAT, PROP_UNSIGNED | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Sequence_update, 67502080, NULL, NULL,
	offsetof(Sequence, mul), 4, NULL},
	ImageSequence_color_multiply_get, ImageSequence_color_multiply_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 20.0f, 0.0f, 20.0f, 10.0f, 3, 1.0f, NULL
};

FloatPropertyRNA rna_ImageSequence_color_saturation = {
	{(PropertyRNA *)&rna_ImageSequence_strobe, (PropertyRNA *)&rna_ImageSequence_color_multiply,
	-1, "color_saturation", 8195, "Saturation",
	"",
	0, "*",
	PROP_FLOAT, PROP_UNSIGNED | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Sequence_update, 67502080, NULL, NULL,
	offsetof(Sequence, sat), 4, NULL},
	ImageSequence_color_saturation_get, ImageSequence_color_saturation_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 2.0f, 0.0f, 20.0f, 3.0f, 3, 1.0f, NULL
};

FloatPropertyRNA rna_ImageSequence_strobe = {
	{(PropertyRNA *)&rna_ImageSequence_use_translation, (PropertyRNA *)&rna_ImageSequence_color_saturation,
	-1, "strobe", 8195, "Strobe",
	"Only display every nth frame",
	0, "*",
	PROP_FLOAT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Sequence_update, 67502080, NULL, NULL,
	offsetof(Sequence, strobe), 4, NULL},
	ImageSequence_strobe_get, ImageSequence_strobe_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 1.0f, 30.0f, 1.0f, 30.0f, 10.0f, 3, 0.0f, NULL
};

BoolPropertyRNA rna_ImageSequence_use_translation = {
	{(PropertyRNA *)&rna_ImageSequence_transform, (PropertyRNA *)&rna_ImageSequence_strobe,
	-1, "use_translation", 3, "Use Translation",
	"Translate image before processing",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Sequence_update, 67502080, NULL, NULL,
	0, -1, NULL},
	ImageSequence_use_translation_get, ImageSequence_use_translation_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

PointerPropertyRNA rna_ImageSequence_transform = {
	{(PropertyRNA *)&rna_ImageSequence_use_crop, (PropertyRNA *)&rna_ImageSequence_use_translation,
	-1, "transform", 8388608, "Transform",
	"",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	ImageSequence_transform_get, NULL, NULL, NULL,&RNA_SequenceTransform
};

BoolPropertyRNA rna_ImageSequence_use_crop = {
	{(PropertyRNA *)&rna_ImageSequence_crop, (PropertyRNA *)&rna_ImageSequence_transform,
	-1, "use_crop", 3, "Use Crop",
	"Crop image before processing",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Sequence_update, 67502080, NULL, NULL,
	0, -1, NULL},
	ImageSequence_use_crop_get, ImageSequence_use_crop_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

PointerPropertyRNA rna_ImageSequence_crop = {
	{(PropertyRNA *)&rna_ImageSequence_use_proxy, (PropertyRNA *)&rna_ImageSequence_use_crop,
	-1, "crop", 8388608, "Crop",
	"",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	ImageSequence_crop_get, NULL, NULL, NULL,&RNA_SequenceCrop
};

BoolPropertyRNA rna_ImageSequence_use_proxy = {
	{(PropertyRNA *)&rna_ImageSequence_proxy, (PropertyRNA *)&rna_ImageSequence_crop,
	-1, "use_proxy", 3, "Use Proxy / Timecode",
	"Use a preview proxy and/or timecode index for this strip",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	ImageSequence_use_proxy_get, ImageSequence_use_proxy_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

PointerPropertyRNA rna_ImageSequence_proxy = {
	{(PropertyRNA *)&rna_ImageSequence_use_proxy_custom_directory, (PropertyRNA *)&rna_ImageSequence_use_proxy,
	-1, "proxy", 8388608, "Proxy",
	"",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	ImageSequence_proxy_get, NULL, NULL, NULL,&RNA_SequenceProxy
};

BoolPropertyRNA rna_ImageSequence_use_proxy_custom_directory = {
	{(PropertyRNA *)&rna_ImageSequence_use_proxy_custom_file, (PropertyRNA *)&rna_ImageSequence_proxy,
	-1, "use_proxy_custom_directory", 3, "Proxy Custom Directory",
	"Use a custom directory to store data",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Sequence_update, 67502080, NULL, NULL,
	0, -1, NULL},
	ImageSequence_use_proxy_custom_directory_get, ImageSequence_use_proxy_custom_directory_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_ImageSequence_use_proxy_custom_file = {
	{(PropertyRNA *)&rna_ImageSequence_animation_offset_start, (PropertyRNA *)&rna_ImageSequence_use_proxy_custom_directory,
	-1, "use_proxy_custom_file", 3, "Proxy Custom File",
	"Use a custom file to read proxy data from",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Sequence_update, 67502080, NULL, NULL,
	0, -1, NULL},
	ImageSequence_use_proxy_custom_file_get, ImageSequence_use_proxy_custom_file_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

IntPropertyRNA rna_ImageSequence_animation_offset_start = {
	{(PropertyRNA *)&rna_ImageSequence_animation_offset_end, (PropertyRNA *)&rna_ImageSequence_use_proxy_custom_file,
	-1, "animation_offset_start", 1, "Animation Start Offset",
	"Animation start offset (trim start)",
	0, "*",
	PROP_INT, PROP_UNSIGNED | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Sequence_update, 67502080, NULL, NULL,
	0, -1, NULL},
	ImageSequence_animation_offset_start_get, ImageSequence_animation_offset_start_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL,
	0, 10000, 0, INT_MAX, 1, 0, NULL
};

IntPropertyRNA rna_ImageSequence_animation_offset_end = {
	{(PropertyRNA *)&rna_ImageSequence_colorspace_settings, (PropertyRNA *)&rna_ImageSequence_animation_offset_start,
	-1, "animation_offset_end", 1, "Animation End Offset",
	"Animation end offset (trim end)",
	0, "*",
	PROP_INT, PROP_UNSIGNED | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Sequence_update, 67502080, NULL, NULL,
	0, -1, NULL},
	ImageSequence_animation_offset_end_get, ImageSequence_animation_offset_end_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL,
	0, 10000, 0, INT_MAX, 1, 0, NULL
};

PointerPropertyRNA rna_ImageSequence_colorspace_settings = {
	{NULL, (PropertyRNA *)&rna_ImageSequence_animation_offset_end,
	-1, "colorspace_settings", 8388608, "Color Space Settings",
	"Input color space settings",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	ImageSequence_colorspace_settings_get, NULL, NULL, NULL,&RNA_ColorManagedInputColorspaceSettings
};

StructRNA RNA_ImageSequence = {
	{(ContainerRNA *)&RNA_SequenceElements, (ContainerRNA *)&RNA_Sequences,
	NULL,
	{(PropertyRNA *)&rna_ImageSequence_directory, (PropertyRNA *)&rna_ImageSequence_colorspace_settings}},
	"ImageSequence", NULL, NULL, 4, "Image Sequence",
	"Sequence strip to load one or more images",
	"*", 17,
	(PropertyRNA *)&rna_Sequence_name, (PropertyRNA *)&rna_Sequence_rna_properties,
	&RNA_Sequence,
	NULL,
	rna_Sequence_refine,
	rna_Sequence_path,
	NULL,
	NULL,
	NULL,
	NULL,
	{NULL, NULL}
};

/* SequenceElements */
CollectionPropertyRNA rna_SequenceElements_rna_properties = {
	{(PropertyRNA *)&rna_SequenceElements_rna_type, NULL,
	-1, "rna_properties", 128, "Properties",
	"RNA property collection",
	0, "*",
	PROP_COLLECTION, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	SequenceElements_rna_properties_begin, SequenceElements_rna_properties_next, SequenceElements_rna_properties_end, SequenceElements_rna_properties_get, NULL, NULL, SequenceElements_rna_properties_lookup_string, NULL, &RNA_Property
};

PointerPropertyRNA rna_SequenceElements_rna_type = {
	{NULL, (PropertyRNA *)&rna_SequenceElements_rna_properties,
	-1, "rna_type", 8912896, "RNA",
	"RNA type definition",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	SequenceElements_rna_type_get, NULL, NULL, NULL,&RNA_Struct
};

StringPropertyRNA rna_SequenceElements_append_filename = {
	{(PropertyRNA *)&rna_SequenceElements_append_elem, NULL,
	-1, "filename", 262149, "",
	"Filepath to image",
	0, "*",
	PROP_STRING, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	NULL, NULL, NULL, NULL, NULL, NULL, 0, "File"
};

PointerPropertyRNA rna_SequenceElements_append_elem = {
	{NULL, (PropertyRNA *)&rna_SequenceElements_append_filename,
	-1, "elem", 8388616, "",
	"New SequenceElement",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	NULL, NULL, NULL, NULL,&RNA_SequenceElement
};

FunctionRNA rna_SequenceElements_append_func = {
	{(FunctionRNA *)&rna_SequenceElements_pop_func, NULL,
	NULL,
	{(PropertyRNA *)&rna_SequenceElements_append_filename, (PropertyRNA *)&rna_SequenceElements_append_elem}},
	"append", 2048, "Push an image from ImageSequence.directory",
	SequenceElements_append_call,
	(PropertyRNA *)&rna_SequenceElements_append_elem
};

IntPropertyRNA rna_SequenceElements_pop_index = {
	{NULL, NULL,
	-1, "index", 7, "",
	"Index of image to remove",
	0, "*",
	PROP_INT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL,
	INT_MIN, INT_MAX, INT_MIN, INT_MAX, 1, -1, NULL
};

FunctionRNA rna_SequenceElements_pop_func = {
	{NULL, (FunctionRNA *)&rna_SequenceElements_append_func,
	NULL,
	{(PropertyRNA *)&rna_SequenceElements_pop_index, (PropertyRNA *)&rna_SequenceElements_pop_index}},
	"pop", 2064, "Pop an image off the collection",
	SequenceElements_pop_call,
	NULL
};

StructRNA RNA_SequenceElements = {
	{(ContainerRNA *)&RNA_MetaSequence, (ContainerRNA *)&RNA_ImageSequence,
	NULL,
	{(PropertyRNA *)&rna_SequenceElements_rna_properties, (PropertyRNA *)&rna_SequenceElements_rna_type}},
	"SequenceElements", NULL, NULL, 4, "SequenceElements",
	"Collection of SequenceElement",
	"*", 17,
	NULL, (PropertyRNA *)&rna_SequenceElements_rna_properties,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	{(FunctionRNA *)&rna_SequenceElements_append_func, (FunctionRNA *)&rna_SequenceElements_pop_func}
};

/* Meta Sequence */
CollectionPropertyRNA rna_MetaSequence_sequences = {
	{(PropertyRNA *)&rna_MetaSequence_use_deinterlace, NULL,
	-1, "sequences", 0, "Sequences",
	"",
	0, "*",
	PROP_COLLECTION, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	MetaSequence_sequences_begin, MetaSequence_sequences_next, MetaSequence_sequences_end, MetaSequence_sequences_get, NULL, MetaSequence_sequences_lookup_int, MetaSequence_sequences_lookup_string, NULL, &RNA_Sequence
};

BoolPropertyRNA rna_MetaSequence_use_deinterlace = {
	{(PropertyRNA *)&rna_MetaSequence_alpha_mode, (PropertyRNA *)&rna_MetaSequence_sequences,
	-1, "use_deinterlace", 3, "De-Interlace",
	"For video movies to remove fields",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Sequence_update_reopen_files, 67502080, NULL, NULL,
	0, -1, NULL},
	MetaSequence_use_deinterlace_get, MetaSequence_use_deinterlace_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

static EnumPropertyItem rna_MetaSequence_alpha_mode_items[3] = {
	{0, "STRAIGHT", 0, "Straight", "RGB channels in transparent pixels are unaffected by the alpha channel"},
	{1, "PREMUL", 0, "Premultiplied", "RGB channels in transparent pixels are multiplied by the alpha channel"},
	{0, NULL, 0, NULL, NULL}
};

EnumPropertyRNA rna_MetaSequence_alpha_mode = {
	{(PropertyRNA *)&rna_MetaSequence_use_flip_x, (PropertyRNA *)&rna_MetaSequence_use_deinterlace,
	-1, "alpha_mode", 3, "Alpha Mode",
	"Representation of alpha information in the RGBA pixels",
	0, "*",
	PROP_ENUM, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Sequence_update, 67502080, NULL, NULL,
	0, -1, NULL},
	MetaSequence_alpha_mode_get, MetaSequence_alpha_mode_set, NULL, NULL, NULL, NULL, rna_MetaSequence_alpha_mode_items, 2, 0
};

BoolPropertyRNA rna_MetaSequence_use_flip_x = {
	{(PropertyRNA *)&rna_MetaSequence_use_flip_y, (PropertyRNA *)&rna_MetaSequence_alpha_mode,
	-1, "use_flip_x", 3, "Flip X",
	"Flip on the X axis",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Sequence_update, 67502080, NULL, NULL,
	0, -1, NULL},
	MetaSequence_use_flip_x_get, MetaSequence_use_flip_x_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_MetaSequence_use_flip_y = {
	{(PropertyRNA *)&rna_MetaSequence_use_float, (PropertyRNA *)&rna_MetaSequence_use_flip_x,
	-1, "use_flip_y", 3, "Flip Y",
	"Flip on the Y axis",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Sequence_update, 67502080, NULL, NULL,
	0, -1, NULL},
	MetaSequence_use_flip_y_get, MetaSequence_use_flip_y_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_MetaSequence_use_float = {
	{(PropertyRNA *)&rna_MetaSequence_use_reverse_frames, (PropertyRNA *)&rna_MetaSequence_use_flip_y,
	-1, "use_float", 3, "Convert Float",
	"Convert input to float data",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Sequence_update, 67502080, NULL, NULL,
	0, -1, NULL},
	MetaSequence_use_float_get, MetaSequence_use_float_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_MetaSequence_use_reverse_frames = {
	{(PropertyRNA *)&rna_MetaSequence_color_multiply, (PropertyRNA *)&rna_MetaSequence_use_float,
	-1, "use_reverse_frames", 3, "Flip Time",
	"Reverse frame order",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Sequence_update, 67502080, NULL, NULL,
	0, -1, NULL},
	MetaSequence_use_reverse_frames_get, MetaSequence_use_reverse_frames_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

FloatPropertyRNA rna_MetaSequence_color_multiply = {
	{(PropertyRNA *)&rna_MetaSequence_color_saturation, (PropertyRNA *)&rna_MetaSequence_use_reverse_frames,
	-1, "color_multiply", 8195, "Multiply Colors",
	"",
	0, "*",
	PROP_FLOAT, PROP_UNSIGNED | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Sequence_update, 67502080, NULL, NULL,
	offsetof(Sequence, mul), 4, NULL},
	MetaSequence_color_multiply_get, MetaSequence_color_multiply_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 20.0f, 0.0f, 20.0f, 10.0f, 3, 1.0f, NULL
};

FloatPropertyRNA rna_MetaSequence_color_saturation = {
	{(PropertyRNA *)&rna_MetaSequence_strobe, (PropertyRNA *)&rna_MetaSequence_color_multiply,
	-1, "color_saturation", 8195, "Saturation",
	"",
	0, "*",
	PROP_FLOAT, PROP_UNSIGNED | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Sequence_update, 67502080, NULL, NULL,
	offsetof(Sequence, sat), 4, NULL},
	MetaSequence_color_saturation_get, MetaSequence_color_saturation_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 2.0f, 0.0f, 20.0f, 3.0f, 3, 1.0f, NULL
};

FloatPropertyRNA rna_MetaSequence_strobe = {
	{(PropertyRNA *)&rna_MetaSequence_use_translation, (PropertyRNA *)&rna_MetaSequence_color_saturation,
	-1, "strobe", 8195, "Strobe",
	"Only display every nth frame",
	0, "*",
	PROP_FLOAT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Sequence_update, 67502080, NULL, NULL,
	offsetof(Sequence, strobe), 4, NULL},
	MetaSequence_strobe_get, MetaSequence_strobe_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 1.0f, 30.0f, 1.0f, 30.0f, 10.0f, 3, 0.0f, NULL
};

BoolPropertyRNA rna_MetaSequence_use_translation = {
	{(PropertyRNA *)&rna_MetaSequence_transform, (PropertyRNA *)&rna_MetaSequence_strobe,
	-1, "use_translation", 3, "Use Translation",
	"Translate image before processing",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Sequence_update, 67502080, NULL, NULL,
	0, -1, NULL},
	MetaSequence_use_translation_get, MetaSequence_use_translation_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

PointerPropertyRNA rna_MetaSequence_transform = {
	{(PropertyRNA *)&rna_MetaSequence_use_crop, (PropertyRNA *)&rna_MetaSequence_use_translation,
	-1, "transform", 8388608, "Transform",
	"",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	MetaSequence_transform_get, NULL, NULL, NULL,&RNA_SequenceTransform
};

BoolPropertyRNA rna_MetaSequence_use_crop = {
	{(PropertyRNA *)&rna_MetaSequence_crop, (PropertyRNA *)&rna_MetaSequence_transform,
	-1, "use_crop", 3, "Use Crop",
	"Crop image before processing",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Sequence_update, 67502080, NULL, NULL,
	0, -1, NULL},
	MetaSequence_use_crop_get, MetaSequence_use_crop_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

PointerPropertyRNA rna_MetaSequence_crop = {
	{(PropertyRNA *)&rna_MetaSequence_use_proxy, (PropertyRNA *)&rna_MetaSequence_use_crop,
	-1, "crop", 8388608, "Crop",
	"",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	MetaSequence_crop_get, NULL, NULL, NULL,&RNA_SequenceCrop
};

BoolPropertyRNA rna_MetaSequence_use_proxy = {
	{(PropertyRNA *)&rna_MetaSequence_proxy, (PropertyRNA *)&rna_MetaSequence_crop,
	-1, "use_proxy", 3, "Use Proxy / Timecode",
	"Use a preview proxy and/or timecode index for this strip",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	MetaSequence_use_proxy_get, MetaSequence_use_proxy_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

PointerPropertyRNA rna_MetaSequence_proxy = {
	{(PropertyRNA *)&rna_MetaSequence_use_proxy_custom_directory, (PropertyRNA *)&rna_MetaSequence_use_proxy,
	-1, "proxy", 8388608, "Proxy",
	"",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	MetaSequence_proxy_get, NULL, NULL, NULL,&RNA_SequenceProxy
};

BoolPropertyRNA rna_MetaSequence_use_proxy_custom_directory = {
	{(PropertyRNA *)&rna_MetaSequence_use_proxy_custom_file, (PropertyRNA *)&rna_MetaSequence_proxy,
	-1, "use_proxy_custom_directory", 3, "Proxy Custom Directory",
	"Use a custom directory to store data",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Sequence_update, 67502080, NULL, NULL,
	0, -1, NULL},
	MetaSequence_use_proxy_custom_directory_get, MetaSequence_use_proxy_custom_directory_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_MetaSequence_use_proxy_custom_file = {
	{(PropertyRNA *)&rna_MetaSequence_animation_offset_start, (PropertyRNA *)&rna_MetaSequence_use_proxy_custom_directory,
	-1, "use_proxy_custom_file", 3, "Proxy Custom File",
	"Use a custom file to read proxy data from",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Sequence_update, 67502080, NULL, NULL,
	0, -1, NULL},
	MetaSequence_use_proxy_custom_file_get, MetaSequence_use_proxy_custom_file_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

IntPropertyRNA rna_MetaSequence_animation_offset_start = {
	{(PropertyRNA *)&rna_MetaSequence_animation_offset_end, (PropertyRNA *)&rna_MetaSequence_use_proxy_custom_file,
	-1, "animation_offset_start", 1, "Animation Start Offset",
	"Animation start offset (trim start)",
	0, "*",
	PROP_INT, PROP_UNSIGNED | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Sequence_update, 67502080, NULL, NULL,
	0, -1, NULL},
	MetaSequence_animation_offset_start_get, MetaSequence_animation_offset_start_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL,
	0, 10000, 0, INT_MAX, 1, 0, NULL
};

IntPropertyRNA rna_MetaSequence_animation_offset_end = {
	{NULL, (PropertyRNA *)&rna_MetaSequence_animation_offset_start,
	-1, "animation_offset_end", 1, "Animation End Offset",
	"Animation end offset (trim end)",
	0, "*",
	PROP_INT, PROP_UNSIGNED | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Sequence_update, 67502080, NULL, NULL,
	0, -1, NULL},
	MetaSequence_animation_offset_end_get, MetaSequence_animation_offset_end_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL,
	0, 10000, 0, INT_MAX, 1, 0, NULL
};

StructRNA RNA_MetaSequence = {
	{(ContainerRNA *)&RNA_SceneSequence, (ContainerRNA *)&RNA_SequenceElements,
	NULL,
	{(PropertyRNA *)&rna_MetaSequence_sequences, (PropertyRNA *)&rna_MetaSequence_animation_offset_end}},
	"MetaSequence", NULL, NULL, 4, "Meta Sequence",
	"Sequence strip to group other strips as a single sequence strip",
	"*", 17,
	(PropertyRNA *)&rna_Sequence_name, (PropertyRNA *)&rna_Sequence_rna_properties,
	&RNA_Sequence,
	NULL,
	rna_Sequence_refine,
	rna_Sequence_path,
	NULL,
	NULL,
	NULL,
	NULL,
	{NULL, NULL}
};

/* Scene Sequence */
PointerPropertyRNA rna_SceneSequence_scene = {
	{(PropertyRNA *)&rna_SceneSequence_scene_camera, NULL,
	-1, "scene", 8388609, "Scene",
	"Scene that this sequence uses",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Sequence_update, 67502080, NULL, NULL,
	0, -1, NULL},
	SceneSequence_scene_get, SceneSequence_scene_set, NULL, NULL,&RNA_Scene
};

PointerPropertyRNA rna_SceneSequence_scene_camera = {
	{(PropertyRNA *)&rna_SceneSequence_use_deinterlace, (PropertyRNA *)&rna_SceneSequence_scene,
	-1, "scene_camera", 8388609, "Camera Override",
	"Override the scenes active camera",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Sequence_update, 67502080, NULL, NULL,
	0, -1, NULL},
	SceneSequence_scene_camera_get, SceneSequence_scene_camera_set, NULL, rna_Camera_object_poll,&RNA_Object
};

BoolPropertyRNA rna_SceneSequence_use_deinterlace = {
	{(PropertyRNA *)&rna_SceneSequence_alpha_mode, (PropertyRNA *)&rna_SceneSequence_scene_camera,
	-1, "use_deinterlace", 3, "De-Interlace",
	"For video movies to remove fields",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Sequence_update_reopen_files, 67502080, NULL, NULL,
	0, -1, NULL},
	SceneSequence_use_deinterlace_get, SceneSequence_use_deinterlace_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

static EnumPropertyItem rna_SceneSequence_alpha_mode_items[3] = {
	{0, "STRAIGHT", 0, "Straight", "RGB channels in transparent pixels are unaffected by the alpha channel"},
	{1, "PREMUL", 0, "Premultiplied", "RGB channels in transparent pixels are multiplied by the alpha channel"},
	{0, NULL, 0, NULL, NULL}
};

EnumPropertyRNA rna_SceneSequence_alpha_mode = {
	{(PropertyRNA *)&rna_SceneSequence_use_flip_x, (PropertyRNA *)&rna_SceneSequence_use_deinterlace,
	-1, "alpha_mode", 3, "Alpha Mode",
	"Representation of alpha information in the RGBA pixels",
	0, "*",
	PROP_ENUM, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Sequence_update, 67502080, NULL, NULL,
	0, -1, NULL},
	SceneSequence_alpha_mode_get, SceneSequence_alpha_mode_set, NULL, NULL, NULL, NULL, rna_SceneSequence_alpha_mode_items, 2, 0
};

BoolPropertyRNA rna_SceneSequence_use_flip_x = {
	{(PropertyRNA *)&rna_SceneSequence_use_flip_y, (PropertyRNA *)&rna_SceneSequence_alpha_mode,
	-1, "use_flip_x", 3, "Flip X",
	"Flip on the X axis",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Sequence_update, 67502080, NULL, NULL,
	0, -1, NULL},
	SceneSequence_use_flip_x_get, SceneSequence_use_flip_x_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_SceneSequence_use_flip_y = {
	{(PropertyRNA *)&rna_SceneSequence_use_float, (PropertyRNA *)&rna_SceneSequence_use_flip_x,
	-1, "use_flip_y", 3, "Flip Y",
	"Flip on the Y axis",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Sequence_update, 67502080, NULL, NULL,
	0, -1, NULL},
	SceneSequence_use_flip_y_get, SceneSequence_use_flip_y_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_SceneSequence_use_float = {
	{(PropertyRNA *)&rna_SceneSequence_use_reverse_frames, (PropertyRNA *)&rna_SceneSequence_use_flip_y,
	-1, "use_float", 3, "Convert Float",
	"Convert input to float data",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Sequence_update, 67502080, NULL, NULL,
	0, -1, NULL},
	SceneSequence_use_float_get, SceneSequence_use_float_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_SceneSequence_use_reverse_frames = {
	{(PropertyRNA *)&rna_SceneSequence_color_multiply, (PropertyRNA *)&rna_SceneSequence_use_float,
	-1, "use_reverse_frames", 3, "Flip Time",
	"Reverse frame order",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Sequence_update, 67502080, NULL, NULL,
	0, -1, NULL},
	SceneSequence_use_reverse_frames_get, SceneSequence_use_reverse_frames_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

FloatPropertyRNA rna_SceneSequence_color_multiply = {
	{(PropertyRNA *)&rna_SceneSequence_color_saturation, (PropertyRNA *)&rna_SceneSequence_use_reverse_frames,
	-1, "color_multiply", 8195, "Multiply Colors",
	"",
	0, "*",
	PROP_FLOAT, PROP_UNSIGNED | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Sequence_update, 67502080, NULL, NULL,
	offsetof(Sequence, mul), 4, NULL},
	SceneSequence_color_multiply_get, SceneSequence_color_multiply_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 20.0f, 0.0f, 20.0f, 10.0f, 3, 1.0f, NULL
};

FloatPropertyRNA rna_SceneSequence_color_saturation = {
	{(PropertyRNA *)&rna_SceneSequence_strobe, (PropertyRNA *)&rna_SceneSequence_color_multiply,
	-1, "color_saturation", 8195, "Saturation",
	"",
	0, "*",
	PROP_FLOAT, PROP_UNSIGNED | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Sequence_update, 67502080, NULL, NULL,
	offsetof(Sequence, sat), 4, NULL},
	SceneSequence_color_saturation_get, SceneSequence_color_saturation_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 2.0f, 0.0f, 20.0f, 3.0f, 3, 1.0f, NULL
};

FloatPropertyRNA rna_SceneSequence_strobe = {
	{(PropertyRNA *)&rna_SceneSequence_use_translation, (PropertyRNA *)&rna_SceneSequence_color_saturation,
	-1, "strobe", 8195, "Strobe",
	"Only display every nth frame",
	0, "*",
	PROP_FLOAT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Sequence_update, 67502080, NULL, NULL,
	offsetof(Sequence, strobe), 4, NULL},
	SceneSequence_strobe_get, SceneSequence_strobe_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 1.0f, 30.0f, 1.0f, 30.0f, 10.0f, 3, 0.0f, NULL
};

BoolPropertyRNA rna_SceneSequence_use_translation = {
	{(PropertyRNA *)&rna_SceneSequence_transform, (PropertyRNA *)&rna_SceneSequence_strobe,
	-1, "use_translation", 3, "Use Translation",
	"Translate image before processing",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Sequence_update, 67502080, NULL, NULL,
	0, -1, NULL},
	SceneSequence_use_translation_get, SceneSequence_use_translation_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

PointerPropertyRNA rna_SceneSequence_transform = {
	{(PropertyRNA *)&rna_SceneSequence_use_crop, (PropertyRNA *)&rna_SceneSequence_use_translation,
	-1, "transform", 8388608, "Transform",
	"",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	SceneSequence_transform_get, NULL, NULL, NULL,&RNA_SequenceTransform
};

BoolPropertyRNA rna_SceneSequence_use_crop = {
	{(PropertyRNA *)&rna_SceneSequence_crop, (PropertyRNA *)&rna_SceneSequence_transform,
	-1, "use_crop", 3, "Use Crop",
	"Crop image before processing",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Sequence_update, 67502080, NULL, NULL,
	0, -1, NULL},
	SceneSequence_use_crop_get, SceneSequence_use_crop_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

PointerPropertyRNA rna_SceneSequence_crop = {
	{(PropertyRNA *)&rna_SceneSequence_use_proxy, (PropertyRNA *)&rna_SceneSequence_use_crop,
	-1, "crop", 8388608, "Crop",
	"",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	SceneSequence_crop_get, NULL, NULL, NULL,&RNA_SequenceCrop
};

BoolPropertyRNA rna_SceneSequence_use_proxy = {
	{(PropertyRNA *)&rna_SceneSequence_proxy, (PropertyRNA *)&rna_SceneSequence_crop,
	-1, "use_proxy", 3, "Use Proxy / Timecode",
	"Use a preview proxy and/or timecode index for this strip",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	SceneSequence_use_proxy_get, SceneSequence_use_proxy_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

PointerPropertyRNA rna_SceneSequence_proxy = {
	{(PropertyRNA *)&rna_SceneSequence_use_proxy_custom_directory, (PropertyRNA *)&rna_SceneSequence_use_proxy,
	-1, "proxy", 8388608, "Proxy",
	"",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	SceneSequence_proxy_get, NULL, NULL, NULL,&RNA_SequenceProxy
};

BoolPropertyRNA rna_SceneSequence_use_proxy_custom_directory = {
	{(PropertyRNA *)&rna_SceneSequence_use_proxy_custom_file, (PropertyRNA *)&rna_SceneSequence_proxy,
	-1, "use_proxy_custom_directory", 3, "Proxy Custom Directory",
	"Use a custom directory to store data",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Sequence_update, 67502080, NULL, NULL,
	0, -1, NULL},
	SceneSequence_use_proxy_custom_directory_get, SceneSequence_use_proxy_custom_directory_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_SceneSequence_use_proxy_custom_file = {
	{(PropertyRNA *)&rna_SceneSequence_animation_offset_start, (PropertyRNA *)&rna_SceneSequence_use_proxy_custom_directory,
	-1, "use_proxy_custom_file", 3, "Proxy Custom File",
	"Use a custom file to read proxy data from",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Sequence_update, 67502080, NULL, NULL,
	0, -1, NULL},
	SceneSequence_use_proxy_custom_file_get, SceneSequence_use_proxy_custom_file_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

IntPropertyRNA rna_SceneSequence_animation_offset_start = {
	{(PropertyRNA *)&rna_SceneSequence_animation_offset_end, (PropertyRNA *)&rna_SceneSequence_use_proxy_custom_file,
	-1, "animation_offset_start", 1, "Animation Start Offset",
	"Animation start offset (trim start)",
	0, "*",
	PROP_INT, PROP_UNSIGNED | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Sequence_update, 67502080, NULL, NULL,
	0, -1, NULL},
	SceneSequence_animation_offset_start_get, SceneSequence_animation_offset_start_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL,
	0, 10000, 0, INT_MAX, 1, 0, NULL
};

IntPropertyRNA rna_SceneSequence_animation_offset_end = {
	{NULL, (PropertyRNA *)&rna_SceneSequence_animation_offset_start,
	-1, "animation_offset_end", 1, "Animation End Offset",
	"Animation end offset (trim end)",
	0, "*",
	PROP_INT, PROP_UNSIGNED | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Sequence_update, 67502080, NULL, NULL,
	0, -1, NULL},
	SceneSequence_animation_offset_end_get, SceneSequence_animation_offset_end_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL,
	0, 10000, 0, INT_MAX, 1, 0, NULL
};

StructRNA RNA_SceneSequence = {
	{(ContainerRNA *)&RNA_MovieSequence, (ContainerRNA *)&RNA_MetaSequence,
	NULL,
	{(PropertyRNA *)&rna_SceneSequence_scene, (PropertyRNA *)&rna_SceneSequence_animation_offset_end}},
	"SceneSequence", NULL, NULL, 4, "Scene Sequence",
	"Sequence strip to used the rendered image of a scene",
	"*", 17,
	(PropertyRNA *)&rna_Sequence_name, (PropertyRNA *)&rna_Sequence_rna_properties,
	&RNA_Sequence,
	NULL,
	rna_Sequence_refine,
	rna_Sequence_path,
	NULL,
	NULL,
	NULL,
	NULL,
	{NULL, NULL}
};

/* Movie Sequence */
IntPropertyRNA rna_MovieSequence_mpeg_preseek = {
	{(PropertyRNA *)&rna_MovieSequence_stream_index, NULL,
	-1, "mpeg_preseek", 8195, "MPEG Preseek",
	"For MPEG movies, preseek this many frames",
	0, "*",
	PROP_INT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Sequence_update, 67502080, NULL, NULL,
	offsetof(Sequence, anim_preseek), 1, NULL},
	MovieSequence_mpeg_preseek_get, MovieSequence_mpeg_preseek_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL,
	0, 50, 0, 50, 1, 0, NULL
};

IntPropertyRNA rna_MovieSequence_stream_index = {
	{(PropertyRNA *)&rna_MovieSequence_elements, (PropertyRNA *)&rna_MovieSequence_mpeg_preseek,
	-1, "stream_index", 8195, "Stream Index",
	"For files with several movie streams, use the stream with the given index",
	0, "*",
	PROP_INT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Sequence_update_reopen_files, 67502080, NULL, NULL,
	offsetof(Sequence, streamindex), 1, NULL},
	MovieSequence_stream_index_get, MovieSequence_stream_index_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL,
	0, 20, 0, 20, 1, 0, NULL
};

CollectionPropertyRNA rna_MovieSequence_elements = {
	{(PropertyRNA *)&rna_MovieSequence_filepath, (PropertyRNA *)&rna_MovieSequence_stream_index,
	-1, "elements", 16384, "Elements",
	"",
	0, "*",
	PROP_COLLECTION, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	MovieSequence_elements_begin, MovieSequence_elements_next, MovieSequence_elements_end, MovieSequence_elements_get, rna_SequenceEditor_elements_length, MovieSequence_elements_lookup_int, NULL, NULL, &RNA_SequenceElement
};

StringPropertyRNA rna_MovieSequence_filepath = {
	{(PropertyRNA *)&rna_MovieSequence_use_deinterlace, (PropertyRNA *)&rna_MovieSequence_elements,
	-1, "filepath", 262145, "File",
	"",
	0, "*",
	PROP_STRING, PROP_FILEPATH | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Sequence_filepath_update, 67502080, NULL, NULL,
	0, -1, NULL},
	MovieSequence_filepath_get, MovieSequence_filepath_length, MovieSequence_filepath_set, NULL, NULL, NULL, 0, ""
};

BoolPropertyRNA rna_MovieSequence_use_deinterlace = {
	{(PropertyRNA *)&rna_MovieSequence_alpha_mode, (PropertyRNA *)&rna_MovieSequence_filepath,
	-1, "use_deinterlace", 3, "De-Interlace",
	"For video movies to remove fields",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Sequence_update_reopen_files, 67502080, NULL, NULL,
	0, -1, NULL},
	MovieSequence_use_deinterlace_get, MovieSequence_use_deinterlace_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

static EnumPropertyItem rna_MovieSequence_alpha_mode_items[3] = {
	{0, "STRAIGHT", 0, "Straight", "RGB channels in transparent pixels are unaffected by the alpha channel"},
	{1, "PREMUL", 0, "Premultiplied", "RGB channels in transparent pixels are multiplied by the alpha channel"},
	{0, NULL, 0, NULL, NULL}
};

EnumPropertyRNA rna_MovieSequence_alpha_mode = {
	{(PropertyRNA *)&rna_MovieSequence_use_flip_x, (PropertyRNA *)&rna_MovieSequence_use_deinterlace,
	-1, "alpha_mode", 3, "Alpha Mode",
	"Representation of alpha information in the RGBA pixels",
	0, "*",
	PROP_ENUM, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Sequence_update, 67502080, NULL, NULL,
	0, -1, NULL},
	MovieSequence_alpha_mode_get, MovieSequence_alpha_mode_set, NULL, NULL, NULL, NULL, rna_MovieSequence_alpha_mode_items, 2, 0
};

BoolPropertyRNA rna_MovieSequence_use_flip_x = {
	{(PropertyRNA *)&rna_MovieSequence_use_flip_y, (PropertyRNA *)&rna_MovieSequence_alpha_mode,
	-1, "use_flip_x", 3, "Flip X",
	"Flip on the X axis",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Sequence_update, 67502080, NULL, NULL,
	0, -1, NULL},
	MovieSequence_use_flip_x_get, MovieSequence_use_flip_x_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_MovieSequence_use_flip_y = {
	{(PropertyRNA *)&rna_MovieSequence_use_float, (PropertyRNA *)&rna_MovieSequence_use_flip_x,
	-1, "use_flip_y", 3, "Flip Y",
	"Flip on the Y axis",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Sequence_update, 67502080, NULL, NULL,
	0, -1, NULL},
	MovieSequence_use_flip_y_get, MovieSequence_use_flip_y_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_MovieSequence_use_float = {
	{(PropertyRNA *)&rna_MovieSequence_use_reverse_frames, (PropertyRNA *)&rna_MovieSequence_use_flip_y,
	-1, "use_float", 3, "Convert Float",
	"Convert input to float data",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Sequence_update, 67502080, NULL, NULL,
	0, -1, NULL},
	MovieSequence_use_float_get, MovieSequence_use_float_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_MovieSequence_use_reverse_frames = {
	{(PropertyRNA *)&rna_MovieSequence_color_multiply, (PropertyRNA *)&rna_MovieSequence_use_float,
	-1, "use_reverse_frames", 3, "Flip Time",
	"Reverse frame order",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Sequence_update, 67502080, NULL, NULL,
	0, -1, NULL},
	MovieSequence_use_reverse_frames_get, MovieSequence_use_reverse_frames_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

FloatPropertyRNA rna_MovieSequence_color_multiply = {
	{(PropertyRNA *)&rna_MovieSequence_color_saturation, (PropertyRNA *)&rna_MovieSequence_use_reverse_frames,
	-1, "color_multiply", 8195, "Multiply Colors",
	"",
	0, "*",
	PROP_FLOAT, PROP_UNSIGNED | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Sequence_update, 67502080, NULL, NULL,
	offsetof(Sequence, mul), 4, NULL},
	MovieSequence_color_multiply_get, MovieSequence_color_multiply_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 20.0f, 0.0f, 20.0f, 10.0f, 3, 1.0f, NULL
};

FloatPropertyRNA rna_MovieSequence_color_saturation = {
	{(PropertyRNA *)&rna_MovieSequence_strobe, (PropertyRNA *)&rna_MovieSequence_color_multiply,
	-1, "color_saturation", 8195, "Saturation",
	"",
	0, "*",
	PROP_FLOAT, PROP_UNSIGNED | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Sequence_update, 67502080, NULL, NULL,
	offsetof(Sequence, sat), 4, NULL},
	MovieSequence_color_saturation_get, MovieSequence_color_saturation_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 2.0f, 0.0f, 20.0f, 3.0f, 3, 1.0f, NULL
};

FloatPropertyRNA rna_MovieSequence_strobe = {
	{(PropertyRNA *)&rna_MovieSequence_use_translation, (PropertyRNA *)&rna_MovieSequence_color_saturation,
	-1, "strobe", 8195, "Strobe",
	"Only display every nth frame",
	0, "*",
	PROP_FLOAT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Sequence_update, 67502080, NULL, NULL,
	offsetof(Sequence, strobe), 4, NULL},
	MovieSequence_strobe_get, MovieSequence_strobe_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 1.0f, 30.0f, 1.0f, 30.0f, 10.0f, 3, 0.0f, NULL
};

BoolPropertyRNA rna_MovieSequence_use_translation = {
	{(PropertyRNA *)&rna_MovieSequence_transform, (PropertyRNA *)&rna_MovieSequence_strobe,
	-1, "use_translation", 3, "Use Translation",
	"Translate image before processing",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Sequence_update, 67502080, NULL, NULL,
	0, -1, NULL},
	MovieSequence_use_translation_get, MovieSequence_use_translation_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

PointerPropertyRNA rna_MovieSequence_transform = {
	{(PropertyRNA *)&rna_MovieSequence_use_crop, (PropertyRNA *)&rna_MovieSequence_use_translation,
	-1, "transform", 8388608, "Transform",
	"",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	MovieSequence_transform_get, NULL, NULL, NULL,&RNA_SequenceTransform
};

BoolPropertyRNA rna_MovieSequence_use_crop = {
	{(PropertyRNA *)&rna_MovieSequence_crop, (PropertyRNA *)&rna_MovieSequence_transform,
	-1, "use_crop", 3, "Use Crop",
	"Crop image before processing",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Sequence_update, 67502080, NULL, NULL,
	0, -1, NULL},
	MovieSequence_use_crop_get, MovieSequence_use_crop_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

PointerPropertyRNA rna_MovieSequence_crop = {
	{(PropertyRNA *)&rna_MovieSequence_use_proxy, (PropertyRNA *)&rna_MovieSequence_use_crop,
	-1, "crop", 8388608, "Crop",
	"",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	MovieSequence_crop_get, NULL, NULL, NULL,&RNA_SequenceCrop
};

BoolPropertyRNA rna_MovieSequence_use_proxy = {
	{(PropertyRNA *)&rna_MovieSequence_proxy, (PropertyRNA *)&rna_MovieSequence_crop,
	-1, "use_proxy", 3, "Use Proxy / Timecode",
	"Use a preview proxy and/or timecode index for this strip",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	MovieSequence_use_proxy_get, MovieSequence_use_proxy_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

PointerPropertyRNA rna_MovieSequence_proxy = {
	{(PropertyRNA *)&rna_MovieSequence_use_proxy_custom_directory, (PropertyRNA *)&rna_MovieSequence_use_proxy,
	-1, "proxy", 8388608, "Proxy",
	"",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	MovieSequence_proxy_get, NULL, NULL, NULL,&RNA_SequenceProxy
};

BoolPropertyRNA rna_MovieSequence_use_proxy_custom_directory = {
	{(PropertyRNA *)&rna_MovieSequence_use_proxy_custom_file, (PropertyRNA *)&rna_MovieSequence_proxy,
	-1, "use_proxy_custom_directory", 3, "Proxy Custom Directory",
	"Use a custom directory to store data",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Sequence_update, 67502080, NULL, NULL,
	0, -1, NULL},
	MovieSequence_use_proxy_custom_directory_get, MovieSequence_use_proxy_custom_directory_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_MovieSequence_use_proxy_custom_file = {
	{(PropertyRNA *)&rna_MovieSequence_animation_offset_start, (PropertyRNA *)&rna_MovieSequence_use_proxy_custom_directory,
	-1, "use_proxy_custom_file", 3, "Proxy Custom File",
	"Use a custom file to read proxy data from",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Sequence_update, 67502080, NULL, NULL,
	0, -1, NULL},
	MovieSequence_use_proxy_custom_file_get, MovieSequence_use_proxy_custom_file_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

IntPropertyRNA rna_MovieSequence_animation_offset_start = {
	{(PropertyRNA *)&rna_MovieSequence_animation_offset_end, (PropertyRNA *)&rna_MovieSequence_use_proxy_custom_file,
	-1, "animation_offset_start", 1, "Animation Start Offset",
	"Animation start offset (trim start)",
	0, "*",
	PROP_INT, PROP_UNSIGNED | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Sequence_update, 67502080, NULL, NULL,
	0, -1, NULL},
	MovieSequence_animation_offset_start_get, MovieSequence_animation_offset_start_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL,
	0, 10000, 0, INT_MAX, 1, 0, NULL
};

IntPropertyRNA rna_MovieSequence_animation_offset_end = {
	{(PropertyRNA *)&rna_MovieSequence_colorspace_settings, (PropertyRNA *)&rna_MovieSequence_animation_offset_start,
	-1, "animation_offset_end", 1, "Animation End Offset",
	"Animation end offset (trim end)",
	0, "*",
	PROP_INT, PROP_UNSIGNED | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Sequence_update, 67502080, NULL, NULL,
	0, -1, NULL},
	MovieSequence_animation_offset_end_get, MovieSequence_animation_offset_end_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL,
	0, 10000, 0, INT_MAX, 1, 0, NULL
};

PointerPropertyRNA rna_MovieSequence_colorspace_settings = {
	{NULL, (PropertyRNA *)&rna_MovieSequence_animation_offset_end,
	-1, "colorspace_settings", 8388608, "Color Space Settings",
	"Input color space settings",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	MovieSequence_colorspace_settings_get, NULL, NULL, NULL,&RNA_ColorManagedInputColorspaceSettings
};

StructRNA RNA_MovieSequence = {
	{(ContainerRNA *)&RNA_MovieClipSequence, (ContainerRNA *)&RNA_SceneSequence,
	NULL,
	{(PropertyRNA *)&rna_MovieSequence_mpeg_preseek, (PropertyRNA *)&rna_MovieSequence_colorspace_settings}},
	"MovieSequence", NULL, NULL, 4, "Movie Sequence",
	"Sequence strip to load a video",
	"*", 17,
	(PropertyRNA *)&rna_Sequence_name, (PropertyRNA *)&rna_Sequence_rna_properties,
	&RNA_Sequence,
	NULL,
	rna_Sequence_refine,
	rna_Sequence_path,
	NULL,
	NULL,
	NULL,
	NULL,
	{NULL, NULL}
};

/* MovieClip Sequence */
BoolPropertyRNA rna_MovieClipSequence_undistort = {
	{(PropertyRNA *)&rna_MovieClipSequence_stabilize2d, NULL,
	-1, "undistort", 3, "Undistort Clip",
	"Use the undistorted version of the clip",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Sequence_update, 67502080, NULL, NULL,
	0, -1, NULL},
	MovieClipSequence_undistort_get, MovieClipSequence_undistort_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_MovieClipSequence_stabilize2d = {
	{(PropertyRNA *)&rna_MovieClipSequence_use_deinterlace, (PropertyRNA *)&rna_MovieClipSequence_undistort,
	-1, "stabilize2d", 3, "Stabilize 2D Clip",
	"Use the 2D stabilized version of the clip",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Sequence_update, 67502080, NULL, NULL,
	0, -1, NULL},
	MovieClipSequence_stabilize2d_get, MovieClipSequence_stabilize2d_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_MovieClipSequence_use_deinterlace = {
	{(PropertyRNA *)&rna_MovieClipSequence_alpha_mode, (PropertyRNA *)&rna_MovieClipSequence_stabilize2d,
	-1, "use_deinterlace", 3, "De-Interlace",
	"For video movies to remove fields",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Sequence_update_reopen_files, 67502080, NULL, NULL,
	0, -1, NULL},
	MovieClipSequence_use_deinterlace_get, MovieClipSequence_use_deinterlace_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

static EnumPropertyItem rna_MovieClipSequence_alpha_mode_items[3] = {
	{0, "STRAIGHT", 0, "Straight", "RGB channels in transparent pixels are unaffected by the alpha channel"},
	{1, "PREMUL", 0, "Premultiplied", "RGB channels in transparent pixels are multiplied by the alpha channel"},
	{0, NULL, 0, NULL, NULL}
};

EnumPropertyRNA rna_MovieClipSequence_alpha_mode = {
	{(PropertyRNA *)&rna_MovieClipSequence_use_flip_x, (PropertyRNA *)&rna_MovieClipSequence_use_deinterlace,
	-1, "alpha_mode", 3, "Alpha Mode",
	"Representation of alpha information in the RGBA pixels",
	0, "*",
	PROP_ENUM, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Sequence_update, 67502080, NULL, NULL,
	0, -1, NULL},
	MovieClipSequence_alpha_mode_get, MovieClipSequence_alpha_mode_set, NULL, NULL, NULL, NULL, rna_MovieClipSequence_alpha_mode_items, 2, 0
};

BoolPropertyRNA rna_MovieClipSequence_use_flip_x = {
	{(PropertyRNA *)&rna_MovieClipSequence_use_flip_y, (PropertyRNA *)&rna_MovieClipSequence_alpha_mode,
	-1, "use_flip_x", 3, "Flip X",
	"Flip on the X axis",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Sequence_update, 67502080, NULL, NULL,
	0, -1, NULL},
	MovieClipSequence_use_flip_x_get, MovieClipSequence_use_flip_x_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_MovieClipSequence_use_flip_y = {
	{(PropertyRNA *)&rna_MovieClipSequence_use_float, (PropertyRNA *)&rna_MovieClipSequence_use_flip_x,
	-1, "use_flip_y", 3, "Flip Y",
	"Flip on the Y axis",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Sequence_update, 67502080, NULL, NULL,
	0, -1, NULL},
	MovieClipSequence_use_flip_y_get, MovieClipSequence_use_flip_y_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_MovieClipSequence_use_float = {
	{(PropertyRNA *)&rna_MovieClipSequence_use_reverse_frames, (PropertyRNA *)&rna_MovieClipSequence_use_flip_y,
	-1, "use_float", 3, "Convert Float",
	"Convert input to float data",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Sequence_update, 67502080, NULL, NULL,
	0, -1, NULL},
	MovieClipSequence_use_float_get, MovieClipSequence_use_float_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_MovieClipSequence_use_reverse_frames = {
	{(PropertyRNA *)&rna_MovieClipSequence_color_multiply, (PropertyRNA *)&rna_MovieClipSequence_use_float,
	-1, "use_reverse_frames", 3, "Flip Time",
	"Reverse frame order",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Sequence_update, 67502080, NULL, NULL,
	0, -1, NULL},
	MovieClipSequence_use_reverse_frames_get, MovieClipSequence_use_reverse_frames_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

FloatPropertyRNA rna_MovieClipSequence_color_multiply = {
	{(PropertyRNA *)&rna_MovieClipSequence_color_saturation, (PropertyRNA *)&rna_MovieClipSequence_use_reverse_frames,
	-1, "color_multiply", 8195, "Multiply Colors",
	"",
	0, "*",
	PROP_FLOAT, PROP_UNSIGNED | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Sequence_update, 67502080, NULL, NULL,
	offsetof(Sequence, mul), 4, NULL},
	MovieClipSequence_color_multiply_get, MovieClipSequence_color_multiply_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 20.0f, 0.0f, 20.0f, 10.0f, 3, 1.0f, NULL
};

FloatPropertyRNA rna_MovieClipSequence_color_saturation = {
	{(PropertyRNA *)&rna_MovieClipSequence_strobe, (PropertyRNA *)&rna_MovieClipSequence_color_multiply,
	-1, "color_saturation", 8195, "Saturation",
	"",
	0, "*",
	PROP_FLOAT, PROP_UNSIGNED | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Sequence_update, 67502080, NULL, NULL,
	offsetof(Sequence, sat), 4, NULL},
	MovieClipSequence_color_saturation_get, MovieClipSequence_color_saturation_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 2.0f, 0.0f, 20.0f, 3.0f, 3, 1.0f, NULL
};

FloatPropertyRNA rna_MovieClipSequence_strobe = {
	{(PropertyRNA *)&rna_MovieClipSequence_use_translation, (PropertyRNA *)&rna_MovieClipSequence_color_saturation,
	-1, "strobe", 8195, "Strobe",
	"Only display every nth frame",
	0, "*",
	PROP_FLOAT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Sequence_update, 67502080, NULL, NULL,
	offsetof(Sequence, strobe), 4, NULL},
	MovieClipSequence_strobe_get, MovieClipSequence_strobe_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 1.0f, 30.0f, 1.0f, 30.0f, 10.0f, 3, 0.0f, NULL
};

BoolPropertyRNA rna_MovieClipSequence_use_translation = {
	{(PropertyRNA *)&rna_MovieClipSequence_transform, (PropertyRNA *)&rna_MovieClipSequence_strobe,
	-1, "use_translation", 3, "Use Translation",
	"Translate image before processing",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Sequence_update, 67502080, NULL, NULL,
	0, -1, NULL},
	MovieClipSequence_use_translation_get, MovieClipSequence_use_translation_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

PointerPropertyRNA rna_MovieClipSequence_transform = {
	{(PropertyRNA *)&rna_MovieClipSequence_use_crop, (PropertyRNA *)&rna_MovieClipSequence_use_translation,
	-1, "transform", 8388608, "Transform",
	"",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	MovieClipSequence_transform_get, NULL, NULL, NULL,&RNA_SequenceTransform
};

BoolPropertyRNA rna_MovieClipSequence_use_crop = {
	{(PropertyRNA *)&rna_MovieClipSequence_crop, (PropertyRNA *)&rna_MovieClipSequence_transform,
	-1, "use_crop", 3, "Use Crop",
	"Crop image before processing",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Sequence_update, 67502080, NULL, NULL,
	0, -1, NULL},
	MovieClipSequence_use_crop_get, MovieClipSequence_use_crop_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

PointerPropertyRNA rna_MovieClipSequence_crop = {
	{(PropertyRNA *)&rna_MovieClipSequence_animation_offset_start, (PropertyRNA *)&rna_MovieClipSequence_use_crop,
	-1, "crop", 8388608, "Crop",
	"",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	MovieClipSequence_crop_get, NULL, NULL, NULL,&RNA_SequenceCrop
};

IntPropertyRNA rna_MovieClipSequence_animation_offset_start = {
	{(PropertyRNA *)&rna_MovieClipSequence_animation_offset_end, (PropertyRNA *)&rna_MovieClipSequence_crop,
	-1, "animation_offset_start", 1, "Animation Start Offset",
	"Animation start offset (trim start)",
	0, "*",
	PROP_INT, PROP_UNSIGNED | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Sequence_update, 67502080, NULL, NULL,
	0, -1, NULL},
	MovieClipSequence_animation_offset_start_get, MovieClipSequence_animation_offset_start_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL,
	0, 10000, 0, INT_MAX, 1, 0, NULL
};

IntPropertyRNA rna_MovieClipSequence_animation_offset_end = {
	{NULL, (PropertyRNA *)&rna_MovieClipSequence_animation_offset_start,
	-1, "animation_offset_end", 1, "Animation End Offset",
	"Animation end offset (trim end)",
	0, "*",
	PROP_INT, PROP_UNSIGNED | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Sequence_update, 67502080, NULL, NULL,
	0, -1, NULL},
	MovieClipSequence_animation_offset_end_get, MovieClipSequence_animation_offset_end_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL,
	0, 10000, 0, INT_MAX, 1, 0, NULL
};

StructRNA RNA_MovieClipSequence = {
	{(ContainerRNA *)&RNA_MaskSequence, (ContainerRNA *)&RNA_MovieSequence,
	NULL,
	{(PropertyRNA *)&rna_MovieClipSequence_undistort, (PropertyRNA *)&rna_MovieClipSequence_animation_offset_end}},
	"MovieClipSequence", NULL, NULL, 4, "MovieClip Sequence",
	"Sequence strip to load a video from the clip editor",
	"*", 17,
	(PropertyRNA *)&rna_Sequence_name, (PropertyRNA *)&rna_Sequence_rna_properties,
	&RNA_Sequence,
	NULL,
	rna_Sequence_refine,
	rna_Sequence_path,
	NULL,
	NULL,
	NULL,
	NULL,
	{NULL, NULL}
};

/* Mask Sequence */
PointerPropertyRNA rna_MaskSequence_mask = {
	{(PropertyRNA *)&rna_MaskSequence_use_deinterlace, NULL,
	-1, "mask", 8388673, "Mask",
	"Mask that this sequence uses",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Sequence_update, 67502080, NULL, NULL,
	0, -1, NULL},
	MaskSequence_mask_get, MaskSequence_mask_set, NULL, NULL,&RNA_Mask
};

BoolPropertyRNA rna_MaskSequence_use_deinterlace = {
	{(PropertyRNA *)&rna_MaskSequence_alpha_mode, (PropertyRNA *)&rna_MaskSequence_mask,
	-1, "use_deinterlace", 3, "De-Interlace",
	"For video movies to remove fields",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Sequence_update_reopen_files, 67502080, NULL, NULL,
	0, -1, NULL},
	MaskSequence_use_deinterlace_get, MaskSequence_use_deinterlace_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

static EnumPropertyItem rna_MaskSequence_alpha_mode_items[3] = {
	{0, "STRAIGHT", 0, "Straight", "RGB channels in transparent pixels are unaffected by the alpha channel"},
	{1, "PREMUL", 0, "Premultiplied", "RGB channels in transparent pixels are multiplied by the alpha channel"},
	{0, NULL, 0, NULL, NULL}
};

EnumPropertyRNA rna_MaskSequence_alpha_mode = {
	{(PropertyRNA *)&rna_MaskSequence_use_flip_x, (PropertyRNA *)&rna_MaskSequence_use_deinterlace,
	-1, "alpha_mode", 3, "Alpha Mode",
	"Representation of alpha information in the RGBA pixels",
	0, "*",
	PROP_ENUM, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Sequence_update, 67502080, NULL, NULL,
	0, -1, NULL},
	MaskSequence_alpha_mode_get, MaskSequence_alpha_mode_set, NULL, NULL, NULL, NULL, rna_MaskSequence_alpha_mode_items, 2, 0
};

BoolPropertyRNA rna_MaskSequence_use_flip_x = {
	{(PropertyRNA *)&rna_MaskSequence_use_flip_y, (PropertyRNA *)&rna_MaskSequence_alpha_mode,
	-1, "use_flip_x", 3, "Flip X",
	"Flip on the X axis",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Sequence_update, 67502080, NULL, NULL,
	0, -1, NULL},
	MaskSequence_use_flip_x_get, MaskSequence_use_flip_x_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_MaskSequence_use_flip_y = {
	{(PropertyRNA *)&rna_MaskSequence_use_float, (PropertyRNA *)&rna_MaskSequence_use_flip_x,
	-1, "use_flip_y", 3, "Flip Y",
	"Flip on the Y axis",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Sequence_update, 67502080, NULL, NULL,
	0, -1, NULL},
	MaskSequence_use_flip_y_get, MaskSequence_use_flip_y_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_MaskSequence_use_float = {
	{(PropertyRNA *)&rna_MaskSequence_use_reverse_frames, (PropertyRNA *)&rna_MaskSequence_use_flip_y,
	-1, "use_float", 3, "Convert Float",
	"Convert input to float data",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Sequence_update, 67502080, NULL, NULL,
	0, -1, NULL},
	MaskSequence_use_float_get, MaskSequence_use_float_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_MaskSequence_use_reverse_frames = {
	{(PropertyRNA *)&rna_MaskSequence_color_multiply, (PropertyRNA *)&rna_MaskSequence_use_float,
	-1, "use_reverse_frames", 3, "Flip Time",
	"Reverse frame order",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Sequence_update, 67502080, NULL, NULL,
	0, -1, NULL},
	MaskSequence_use_reverse_frames_get, MaskSequence_use_reverse_frames_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

FloatPropertyRNA rna_MaskSequence_color_multiply = {
	{(PropertyRNA *)&rna_MaskSequence_color_saturation, (PropertyRNA *)&rna_MaskSequence_use_reverse_frames,
	-1, "color_multiply", 8195, "Multiply Colors",
	"",
	0, "*",
	PROP_FLOAT, PROP_UNSIGNED | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Sequence_update, 67502080, NULL, NULL,
	offsetof(Sequence, mul), 4, NULL},
	MaskSequence_color_multiply_get, MaskSequence_color_multiply_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 20.0f, 0.0f, 20.0f, 10.0f, 3, 1.0f, NULL
};

FloatPropertyRNA rna_MaskSequence_color_saturation = {
	{(PropertyRNA *)&rna_MaskSequence_strobe, (PropertyRNA *)&rna_MaskSequence_color_multiply,
	-1, "color_saturation", 8195, "Saturation",
	"",
	0, "*",
	PROP_FLOAT, PROP_UNSIGNED | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Sequence_update, 67502080, NULL, NULL,
	offsetof(Sequence, sat), 4, NULL},
	MaskSequence_color_saturation_get, MaskSequence_color_saturation_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 2.0f, 0.0f, 20.0f, 3.0f, 3, 1.0f, NULL
};

FloatPropertyRNA rna_MaskSequence_strobe = {
	{(PropertyRNA *)&rna_MaskSequence_use_translation, (PropertyRNA *)&rna_MaskSequence_color_saturation,
	-1, "strobe", 8195, "Strobe",
	"Only display every nth frame",
	0, "*",
	PROP_FLOAT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Sequence_update, 67502080, NULL, NULL,
	offsetof(Sequence, strobe), 4, NULL},
	MaskSequence_strobe_get, MaskSequence_strobe_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 1.0f, 30.0f, 1.0f, 30.0f, 10.0f, 3, 0.0f, NULL
};

BoolPropertyRNA rna_MaskSequence_use_translation = {
	{(PropertyRNA *)&rna_MaskSequence_transform, (PropertyRNA *)&rna_MaskSequence_strobe,
	-1, "use_translation", 3, "Use Translation",
	"Translate image before processing",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Sequence_update, 67502080, NULL, NULL,
	0, -1, NULL},
	MaskSequence_use_translation_get, MaskSequence_use_translation_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

PointerPropertyRNA rna_MaskSequence_transform = {
	{(PropertyRNA *)&rna_MaskSequence_use_crop, (PropertyRNA *)&rna_MaskSequence_use_translation,
	-1, "transform", 8388608, "Transform",
	"",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	MaskSequence_transform_get, NULL, NULL, NULL,&RNA_SequenceTransform
};

BoolPropertyRNA rna_MaskSequence_use_crop = {
	{(PropertyRNA *)&rna_MaskSequence_crop, (PropertyRNA *)&rna_MaskSequence_transform,
	-1, "use_crop", 3, "Use Crop",
	"Crop image before processing",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Sequence_update, 67502080, NULL, NULL,
	0, -1, NULL},
	MaskSequence_use_crop_get, MaskSequence_use_crop_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

PointerPropertyRNA rna_MaskSequence_crop = {
	{(PropertyRNA *)&rna_MaskSequence_animation_offset_start, (PropertyRNA *)&rna_MaskSequence_use_crop,
	-1, "crop", 8388608, "Crop",
	"",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	MaskSequence_crop_get, NULL, NULL, NULL,&RNA_SequenceCrop
};

IntPropertyRNA rna_MaskSequence_animation_offset_start = {
	{(PropertyRNA *)&rna_MaskSequence_animation_offset_end, (PropertyRNA *)&rna_MaskSequence_crop,
	-1, "animation_offset_start", 1, "Animation Start Offset",
	"Animation start offset (trim start)",
	0, "*",
	PROP_INT, PROP_UNSIGNED | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Sequence_update, 67502080, NULL, NULL,
	0, -1, NULL},
	MaskSequence_animation_offset_start_get, MaskSequence_animation_offset_start_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL,
	0, 10000, 0, INT_MAX, 1, 0, NULL
};

IntPropertyRNA rna_MaskSequence_animation_offset_end = {
	{NULL, (PropertyRNA *)&rna_MaskSequence_animation_offset_start,
	-1, "animation_offset_end", 1, "Animation End Offset",
	"Animation end offset (trim end)",
	0, "*",
	PROP_INT, PROP_UNSIGNED | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Sequence_update, 67502080, NULL, NULL,
	0, -1, NULL},
	MaskSequence_animation_offset_end_get, MaskSequence_animation_offset_end_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL,
	0, 10000, 0, INT_MAX, 1, 0, NULL
};

StructRNA RNA_MaskSequence = {
	{(ContainerRNA *)&RNA_SoundSequence, (ContainerRNA *)&RNA_MovieClipSequence,
	NULL,
	{(PropertyRNA *)&rna_MaskSequence_mask, (PropertyRNA *)&rna_MaskSequence_animation_offset_end}},
	"MaskSequence", NULL, NULL, 4, "Mask Sequence",
	"Sequence strip to load a video from a mask",
	"*", 17,
	(PropertyRNA *)&rna_Sequence_name, (PropertyRNA *)&rna_Sequence_rna_properties,
	&RNA_Sequence,
	NULL,
	rna_Sequence_refine,
	rna_Sequence_path,
	NULL,
	NULL,
	NULL,
	NULL,
	{NULL, NULL}
};

/* Sound Sequence */
PointerPropertyRNA rna_SoundSequence_sound = {
	{(PropertyRNA *)&rna_SoundSequence_volume, NULL,
	-1, "sound", 8388672, "Sound",
	"Sound datablock used by this sequence",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Sequence_update, 67502080, NULL, NULL,
	0, -1, NULL},
	SoundSequence_sound_get, NULL, NULL, NULL,&RNA_Sound
};

FloatPropertyRNA rna_SoundSequence_volume = {
	{(PropertyRNA *)&rna_SoundSequence_pitch, (PropertyRNA *)&rna_SoundSequence_sound,
	-1, "volume", 3, "Volume",
	"Playback volume of the sound",
	0, "Sound",
	PROP_FLOAT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Sequence_update, 67502080, NULL, NULL,
	0, -1, NULL},
	SoundSequence_volume_get, SoundSequence_volume_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 100.0f, 0.0f, 100.0f, 10.0f, 3, 0.0f, NULL
};

FloatPropertyRNA rna_SoundSequence_pitch = {
	{(PropertyRNA *)&rna_SoundSequence_pan, (PropertyRNA *)&rna_SoundSequence_volume,
	-1, "pitch", 3, "Pitch",
	"Playback pitch of the sound",
	0, "Sound",
	PROP_FLOAT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Sequence_update, 67502080, NULL, NULL,
	0, -1, NULL},
	SoundSequence_pitch_get, SoundSequence_pitch_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.1000000015f, 10.0f, 0.1000000015f, 10.0f, 10.0f, 3, 0.0f, NULL
};

FloatPropertyRNA rna_SoundSequence_pan = {
	{(PropertyRNA *)&rna_SoundSequence_filepath, (PropertyRNA *)&rna_SoundSequence_pitch,
	-1, "pan", 3, "Pan",
	"Playback panning of the sound (only for Mono sources)",
	0, "*",
	PROP_FLOAT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Sequence_update, 67502080, NULL, NULL,
	0, -1, NULL},
	SoundSequence_pan_get, SoundSequence_pan_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, -2.0f, 2.0f, -2.0f, 2.0f, 10.0f, 3, 0.0f, NULL
};

StringPropertyRNA rna_SoundSequence_filepath = {
	{(PropertyRNA *)&rna_SoundSequence_show_waveform, (PropertyRNA *)&rna_SoundSequence_pan,
	-1, "filepath", 262145, "File",
	"",
	0, "*",
	PROP_STRING, PROP_FILEPATH | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Sequence_filepath_update, 67502080, NULL, NULL,
	0, -1, NULL},
	SoundSequence_filepath_get, SoundSequence_filepath_length, SoundSequence_filepath_set, NULL, NULL, NULL, 0, ""
};

BoolPropertyRNA rna_SoundSequence_show_waveform = {
	{(PropertyRNA *)&rna_SoundSequence_animation_offset_start, (PropertyRNA *)&rna_SoundSequence_filepath,
	-1, "show_waveform", 3, "Draw Waveform",
	"Whether to draw the sound\'s waveform",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 67502080, NULL, NULL,
	0, -1, NULL},
	SoundSequence_show_waveform_get, SoundSequence_show_waveform_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

IntPropertyRNA rna_SoundSequence_animation_offset_start = {
	{(PropertyRNA *)&rna_SoundSequence_animation_offset_end, (PropertyRNA *)&rna_SoundSequence_show_waveform,
	-1, "animation_offset_start", 1, "Animation Start Offset",
	"Animation start offset (trim start)",
	0, "*",
	PROP_INT, PROP_UNSIGNED | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Sequence_update, 67502080, NULL, NULL,
	0, -1, NULL},
	SoundSequence_animation_offset_start_get, SoundSequence_animation_offset_start_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL,
	0, 10000, 0, INT_MAX, 1, 0, NULL
};

IntPropertyRNA rna_SoundSequence_animation_offset_end = {
	{NULL, (PropertyRNA *)&rna_SoundSequence_animation_offset_start,
	-1, "animation_offset_end", 1, "Animation End Offset",
	"Animation end offset (trim end)",
	0, "*",
	PROP_INT, PROP_UNSIGNED | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Sequence_update, 67502080, NULL, NULL,
	0, -1, NULL},
	SoundSequence_animation_offset_end_get, SoundSequence_animation_offset_end_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL,
	0, 10000, 0, INT_MAX, 1, 0, NULL
};

StructRNA RNA_SoundSequence = {
	{(ContainerRNA *)&RNA_EffectSequence, (ContainerRNA *)&RNA_MaskSequence,
	NULL,
	{(PropertyRNA *)&rna_SoundSequence_sound, (PropertyRNA *)&rna_SoundSequence_animation_offset_end}},
	"SoundSequence", NULL, NULL, 4, "Sound Sequence",
	"Sequence strip defining a sound to be played over a period of time",
	"*", 17,
	(PropertyRNA *)&rna_Sequence_name, (PropertyRNA *)&rna_Sequence_rna_properties,
	&RNA_Sequence,
	NULL,
	rna_Sequence_refine,
	rna_Sequence_path,
	NULL,
	NULL,
	NULL,
	NULL,
	{NULL, NULL}
};

/* Effect Sequence */
BoolPropertyRNA rna_EffectSequence_use_deinterlace = {
	{(PropertyRNA *)&rna_EffectSequence_alpha_mode, NULL,
	-1, "use_deinterlace", 3, "De-Interlace",
	"For video movies to remove fields",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Sequence_update_reopen_files, 67502080, NULL, NULL,
	0, -1, NULL},
	EffectSequence_use_deinterlace_get, EffectSequence_use_deinterlace_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

static EnumPropertyItem rna_EffectSequence_alpha_mode_items[3] = {
	{0, "STRAIGHT", 0, "Straight", "RGB channels in transparent pixels are unaffected by the alpha channel"},
	{1, "PREMUL", 0, "Premultiplied", "RGB channels in transparent pixels are multiplied by the alpha channel"},
	{0, NULL, 0, NULL, NULL}
};

EnumPropertyRNA rna_EffectSequence_alpha_mode = {
	{(PropertyRNA *)&rna_EffectSequence_use_flip_x, (PropertyRNA *)&rna_EffectSequence_use_deinterlace,
	-1, "alpha_mode", 3, "Alpha Mode",
	"Representation of alpha information in the RGBA pixels",
	0, "*",
	PROP_ENUM, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Sequence_update, 67502080, NULL, NULL,
	0, -1, NULL},
	EffectSequence_alpha_mode_get, EffectSequence_alpha_mode_set, NULL, NULL, NULL, NULL, rna_EffectSequence_alpha_mode_items, 2, 0
};

BoolPropertyRNA rna_EffectSequence_use_flip_x = {
	{(PropertyRNA *)&rna_EffectSequence_use_flip_y, (PropertyRNA *)&rna_EffectSequence_alpha_mode,
	-1, "use_flip_x", 3, "Flip X",
	"Flip on the X axis",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Sequence_update, 67502080, NULL, NULL,
	0, -1, NULL},
	EffectSequence_use_flip_x_get, EffectSequence_use_flip_x_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_EffectSequence_use_flip_y = {
	{(PropertyRNA *)&rna_EffectSequence_use_float, (PropertyRNA *)&rna_EffectSequence_use_flip_x,
	-1, "use_flip_y", 3, "Flip Y",
	"Flip on the Y axis",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Sequence_update, 67502080, NULL, NULL,
	0, -1, NULL},
	EffectSequence_use_flip_y_get, EffectSequence_use_flip_y_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_EffectSequence_use_float = {
	{(PropertyRNA *)&rna_EffectSequence_use_reverse_frames, (PropertyRNA *)&rna_EffectSequence_use_flip_y,
	-1, "use_float", 3, "Convert Float",
	"Convert input to float data",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Sequence_update, 67502080, NULL, NULL,
	0, -1, NULL},
	EffectSequence_use_float_get, EffectSequence_use_float_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_EffectSequence_use_reverse_frames = {
	{(PropertyRNA *)&rna_EffectSequence_color_multiply, (PropertyRNA *)&rna_EffectSequence_use_float,
	-1, "use_reverse_frames", 3, "Flip Time",
	"Reverse frame order",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Sequence_update, 67502080, NULL, NULL,
	0, -1, NULL},
	EffectSequence_use_reverse_frames_get, EffectSequence_use_reverse_frames_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

FloatPropertyRNA rna_EffectSequence_color_multiply = {
	{(PropertyRNA *)&rna_EffectSequence_color_saturation, (PropertyRNA *)&rna_EffectSequence_use_reverse_frames,
	-1, "color_multiply", 8195, "Multiply Colors",
	"",
	0, "*",
	PROP_FLOAT, PROP_UNSIGNED | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Sequence_update, 67502080, NULL, NULL,
	offsetof(Sequence, mul), 4, NULL},
	EffectSequence_color_multiply_get, EffectSequence_color_multiply_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 20.0f, 0.0f, 20.0f, 10.0f, 3, 1.0f, NULL
};

FloatPropertyRNA rna_EffectSequence_color_saturation = {
	{(PropertyRNA *)&rna_EffectSequence_strobe, (PropertyRNA *)&rna_EffectSequence_color_multiply,
	-1, "color_saturation", 8195, "Saturation",
	"",
	0, "*",
	PROP_FLOAT, PROP_UNSIGNED | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Sequence_update, 67502080, NULL, NULL,
	offsetof(Sequence, sat), 4, NULL},
	EffectSequence_color_saturation_get, EffectSequence_color_saturation_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 2.0f, 0.0f, 20.0f, 3.0f, 3, 1.0f, NULL
};

FloatPropertyRNA rna_EffectSequence_strobe = {
	{(PropertyRNA *)&rna_EffectSequence_use_translation, (PropertyRNA *)&rna_EffectSequence_color_saturation,
	-1, "strobe", 8195, "Strobe",
	"Only display every nth frame",
	0, "*",
	PROP_FLOAT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Sequence_update, 67502080, NULL, NULL,
	offsetof(Sequence, strobe), 4, NULL},
	EffectSequence_strobe_get, EffectSequence_strobe_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 1.0f, 30.0f, 1.0f, 30.0f, 10.0f, 3, 0.0f, NULL
};

BoolPropertyRNA rna_EffectSequence_use_translation = {
	{(PropertyRNA *)&rna_EffectSequence_transform, (PropertyRNA *)&rna_EffectSequence_strobe,
	-1, "use_translation", 3, "Use Translation",
	"Translate image before processing",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Sequence_update, 67502080, NULL, NULL,
	0, -1, NULL},
	EffectSequence_use_translation_get, EffectSequence_use_translation_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

PointerPropertyRNA rna_EffectSequence_transform = {
	{(PropertyRNA *)&rna_EffectSequence_use_crop, (PropertyRNA *)&rna_EffectSequence_use_translation,
	-1, "transform", 8388608, "Transform",
	"",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	EffectSequence_transform_get, NULL, NULL, NULL,&RNA_SequenceTransform
};

BoolPropertyRNA rna_EffectSequence_use_crop = {
	{(PropertyRNA *)&rna_EffectSequence_crop, (PropertyRNA *)&rna_EffectSequence_transform,
	-1, "use_crop", 3, "Use Crop",
	"Crop image before processing",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Sequence_update, 67502080, NULL, NULL,
	0, -1, NULL},
	EffectSequence_use_crop_get, EffectSequence_use_crop_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

PointerPropertyRNA rna_EffectSequence_crop = {
	{(PropertyRNA *)&rna_EffectSequence_use_proxy, (PropertyRNA *)&rna_EffectSequence_use_crop,
	-1, "crop", 8388608, "Crop",
	"",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	EffectSequence_crop_get, NULL, NULL, NULL,&RNA_SequenceCrop
};

BoolPropertyRNA rna_EffectSequence_use_proxy = {
	{(PropertyRNA *)&rna_EffectSequence_proxy, (PropertyRNA *)&rna_EffectSequence_crop,
	-1, "use_proxy", 3, "Use Proxy / Timecode",
	"Use a preview proxy and/or timecode index for this strip",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	EffectSequence_use_proxy_get, EffectSequence_use_proxy_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

PointerPropertyRNA rna_EffectSequence_proxy = {
	{(PropertyRNA *)&rna_EffectSequence_use_proxy_custom_directory, (PropertyRNA *)&rna_EffectSequence_use_proxy,
	-1, "proxy", 8388608, "Proxy",
	"",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	EffectSequence_proxy_get, NULL, NULL, NULL,&RNA_SequenceProxy
};

BoolPropertyRNA rna_EffectSequence_use_proxy_custom_directory = {
	{(PropertyRNA *)&rna_EffectSequence_use_proxy_custom_file, (PropertyRNA *)&rna_EffectSequence_proxy,
	-1, "use_proxy_custom_directory", 3, "Proxy Custom Directory",
	"Use a custom directory to store data",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Sequence_update, 67502080, NULL, NULL,
	0, -1, NULL},
	EffectSequence_use_proxy_custom_directory_get, EffectSequence_use_proxy_custom_directory_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_EffectSequence_use_proxy_custom_file = {
	{NULL, (PropertyRNA *)&rna_EffectSequence_use_proxy_custom_directory,
	-1, "use_proxy_custom_file", 3, "Proxy Custom File",
	"Use a custom file to read proxy data from",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Sequence_update, 67502080, NULL, NULL,
	0, -1, NULL},
	EffectSequence_use_proxy_custom_file_get, EffectSequence_use_proxy_custom_file_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

StructRNA RNA_EffectSequence = {
	{(ContainerRNA *)&RNA_AddSequence, (ContainerRNA *)&RNA_SoundSequence,
	NULL,
	{(PropertyRNA *)&rna_EffectSequence_use_deinterlace, (PropertyRNA *)&rna_EffectSequence_use_proxy_custom_file}},
	"EffectSequence", NULL, NULL, 4, "Effect Sequence",
	"Sequence strip applying an effect on the images created by other strips",
	"*", 17,
	(PropertyRNA *)&rna_Sequence_name, (PropertyRNA *)&rna_Sequence_rna_properties,
	&RNA_Sequence,
	NULL,
	rna_Sequence_refine,
	rna_Sequence_path,
	NULL,
	NULL,
	NULL,
	NULL,
	{NULL, NULL}
};

/* Add Sequence */
IntPropertyRNA rna_AddSequence_input_count = {
	{(PropertyRNA *)&rna_AddSequence_input_1, NULL,
	-1, "input_count", 2, "input_count",
	"",
	0, "*",
	PROP_INT, PROP_UNSIGNED | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	AddSequence_input_count_get, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL,
	0, 10000, 0, INT_MAX, 1, 0, NULL
};

PointerPropertyRNA rna_AddSequence_input_1 = {
	{(PropertyRNA *)&rna_AddSequence_input_2, (PropertyRNA *)&rna_AddSequence_input_count,
	-1, "input_1", 8650753, "Input 1",
	"First input for the effect strip",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	AddSequence_input_1_get, AddSequence_input_1_set, NULL, NULL,&RNA_Sequence
};

PointerPropertyRNA rna_AddSequence_input_2 = {
	{NULL, (PropertyRNA *)&rna_AddSequence_input_1,
	-1, "input_2", 8650753, "Input 2",
	"Second input for the effect strip",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	AddSequence_input_2_get, AddSequence_input_2_set, NULL, NULL,&RNA_Sequence
};

StructRNA RNA_AddSequence = {
	{(ContainerRNA *)&RNA_AdjustmentSequence, (ContainerRNA *)&RNA_EffectSequence,
	NULL,
	{(PropertyRNA *)&rna_AddSequence_input_count, (PropertyRNA *)&rna_AddSequence_input_2}},
	"AddSequence", NULL, NULL, 4, "Add Sequence",
	"Add Sequence",
	"*", 17,
	(PropertyRNA *)&rna_Sequence_name, (PropertyRNA *)&rna_Sequence_rna_properties,
	&RNA_EffectSequence,
	NULL,
	rna_Sequence_refine,
	rna_Sequence_path,
	NULL,
	NULL,
	NULL,
	NULL,
	{NULL, NULL}
};

/* Adjustment Layer Sequence */
IntPropertyRNA rna_AdjustmentSequence_input_count = {
	{(PropertyRNA *)&rna_AdjustmentSequence_animation_offset_start, NULL,
	-1, "input_count", 2, "input_count",
	"",
	0, "*",
	PROP_INT, PROP_UNSIGNED | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	AdjustmentSequence_input_count_get, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL,
	0, 10000, 0, INT_MAX, 1, 0, NULL
};

IntPropertyRNA rna_AdjustmentSequence_animation_offset_start = {
	{(PropertyRNA *)&rna_AdjustmentSequence_animation_offset_end, (PropertyRNA *)&rna_AdjustmentSequence_input_count,
	-1, "animation_offset_start", 1, "Animation Start Offset",
	"Animation start offset (trim start)",
	0, "*",
	PROP_INT, PROP_UNSIGNED | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Sequence_update, 67502080, NULL, NULL,
	0, -1, NULL},
	AdjustmentSequence_animation_offset_start_get, AdjustmentSequence_animation_offset_start_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL,
	0, 10000, 0, INT_MAX, 1, 0, NULL
};

IntPropertyRNA rna_AdjustmentSequence_animation_offset_end = {
	{NULL, (PropertyRNA *)&rna_AdjustmentSequence_animation_offset_start,
	-1, "animation_offset_end", 1, "Animation End Offset",
	"Animation end offset (trim end)",
	0, "*",
	PROP_INT, PROP_UNSIGNED | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Sequence_update, 67502080, NULL, NULL,
	0, -1, NULL},
	AdjustmentSequence_animation_offset_end_get, AdjustmentSequence_animation_offset_end_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL,
	0, 10000, 0, INT_MAX, 1, 0, NULL
};

StructRNA RNA_AdjustmentSequence = {
	{(ContainerRNA *)&RNA_AlphaOverSequence, (ContainerRNA *)&RNA_AddSequence,
	NULL,
	{(PropertyRNA *)&rna_AdjustmentSequence_input_count, (PropertyRNA *)&rna_AdjustmentSequence_animation_offset_end}},
	"AdjustmentSequence", NULL, NULL, 4, "Adjustment Layer Sequence",
	"Sequence strip to perform filter adjustments to layers below",
	"*", 17,
	(PropertyRNA *)&rna_Sequence_name, (PropertyRNA *)&rna_Sequence_rna_properties,
	&RNA_EffectSequence,
	NULL,
	rna_Sequence_refine,
	rna_Sequence_path,
	NULL,
	NULL,
	NULL,
	NULL,
	{NULL, NULL}
};

/* Alpha Over Sequence */
IntPropertyRNA rna_AlphaOverSequence_input_count = {
	{(PropertyRNA *)&rna_AlphaOverSequence_input_1, NULL,
	-1, "input_count", 2, "input_count",
	"",
	0, "*",
	PROP_INT, PROP_UNSIGNED | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	AlphaOverSequence_input_count_get, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL,
	0, 10000, 0, INT_MAX, 1, 0, NULL
};

PointerPropertyRNA rna_AlphaOverSequence_input_1 = {
	{(PropertyRNA *)&rna_AlphaOverSequence_input_2, (PropertyRNA *)&rna_AlphaOverSequence_input_count,
	-1, "input_1", 8650753, "Input 1",
	"First input for the effect strip",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	AlphaOverSequence_input_1_get, AlphaOverSequence_input_1_set, NULL, NULL,&RNA_Sequence
};

PointerPropertyRNA rna_AlphaOverSequence_input_2 = {
	{NULL, (PropertyRNA *)&rna_AlphaOverSequence_input_1,
	-1, "input_2", 8650753, "Input 2",
	"Second input for the effect strip",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	AlphaOverSequence_input_2_get, AlphaOverSequence_input_2_set, NULL, NULL,&RNA_Sequence
};

StructRNA RNA_AlphaOverSequence = {
	{(ContainerRNA *)&RNA_AlphaUnderSequence, (ContainerRNA *)&RNA_AdjustmentSequence,
	NULL,
	{(PropertyRNA *)&rna_AlphaOverSequence_input_count, (PropertyRNA *)&rna_AlphaOverSequence_input_2}},
	"AlphaOverSequence", NULL, NULL, 4, "Alpha Over Sequence",
	"Alpha Over Sequence",
	"*", 17,
	(PropertyRNA *)&rna_Sequence_name, (PropertyRNA *)&rna_Sequence_rna_properties,
	&RNA_EffectSequence,
	NULL,
	rna_Sequence_refine,
	rna_Sequence_path,
	NULL,
	NULL,
	NULL,
	NULL,
	{NULL, NULL}
};

/* Alpha Under Sequence */
IntPropertyRNA rna_AlphaUnderSequence_input_count = {
	{(PropertyRNA *)&rna_AlphaUnderSequence_input_1, NULL,
	-1, "input_count", 2, "input_count",
	"",
	0, "*",
	PROP_INT, PROP_UNSIGNED | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	AlphaUnderSequence_input_count_get, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL,
	0, 10000, 0, INT_MAX, 1, 0, NULL
};

PointerPropertyRNA rna_AlphaUnderSequence_input_1 = {
	{(PropertyRNA *)&rna_AlphaUnderSequence_input_2, (PropertyRNA *)&rna_AlphaUnderSequence_input_count,
	-1, "input_1", 8650753, "Input 1",
	"First input for the effect strip",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	AlphaUnderSequence_input_1_get, AlphaUnderSequence_input_1_set, NULL, NULL,&RNA_Sequence
};

PointerPropertyRNA rna_AlphaUnderSequence_input_2 = {
	{NULL, (PropertyRNA *)&rna_AlphaUnderSequence_input_1,
	-1, "input_2", 8650753, "Input 2",
	"Second input for the effect strip",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	AlphaUnderSequence_input_2_get, AlphaUnderSequence_input_2_set, NULL, NULL,&RNA_Sequence
};

StructRNA RNA_AlphaUnderSequence = {
	{(ContainerRNA *)&RNA_ColorSequence, (ContainerRNA *)&RNA_AlphaOverSequence,
	NULL,
	{(PropertyRNA *)&rna_AlphaUnderSequence_input_count, (PropertyRNA *)&rna_AlphaUnderSequence_input_2}},
	"AlphaUnderSequence", NULL, NULL, 4, "Alpha Under Sequence",
	"Alpha Under Sequence",
	"*", 17,
	(PropertyRNA *)&rna_Sequence_name, (PropertyRNA *)&rna_Sequence_rna_properties,
	&RNA_EffectSequence,
	NULL,
	rna_Sequence_refine,
	rna_Sequence_path,
	NULL,
	NULL,
	NULL,
	NULL,
	{NULL, NULL}
};

/* Color Sequence */
IntPropertyRNA rna_ColorSequence_input_count = {
	{(PropertyRNA *)&rna_ColorSequence_color, NULL,
	-1, "input_count", 2, "input_count",
	"",
	0, "*",
	PROP_INT, PROP_UNSIGNED | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	ColorSequence_input_count_get, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL,
	0, 10000, 0, INT_MAX, 1, 0, NULL
};

static float rna_ColorSequence_color_default[3] = {
	0.0f,
	0.0f,
	0.0f
};

FloatPropertyRNA rna_ColorSequence_color = {
	{NULL, (PropertyRNA *)&rna_ColorSequence_input_count,
	-1, "color", 8195, "Color",
	"",
	0, "*",
	PROP_FLOAT, PROP_COLOR_GAMMA | PROP_UNIT_NONE, NULL, 1, {3, 0, 0}, 3,
	rna_Sequence_update, 67502080, NULL, NULL,
	offsetof(SolidColorVars, col), 4, NULL},
	NULL, NULL, ColorSequence_color_get, ColorSequence_color_set, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 1.0f, 0.0f, FLT_MAX, 10.0f, 3, 0.0f, rna_ColorSequence_color_default
};

StructRNA RNA_ColorSequence = {
	{(ContainerRNA *)&RNA_CrossSequence, (ContainerRNA *)&RNA_AlphaUnderSequence,
	NULL,
	{(PropertyRNA *)&rna_ColorSequence_input_count, (PropertyRNA *)&rna_ColorSequence_color}},
	"ColorSequence", NULL, NULL, 4, "Color Sequence",
	"Sequence strip creating an image filled with a single color",
	"*", 17,
	(PropertyRNA *)&rna_Sequence_name, (PropertyRNA *)&rna_Sequence_rna_properties,
	&RNA_EffectSequence,
	NULL,
	rna_Sequence_refine,
	rna_Sequence_path,
	NULL,
	NULL,
	NULL,
	NULL,
	{NULL, NULL}
};

/* Cross Sequence */
IntPropertyRNA rna_CrossSequence_input_count = {
	{(PropertyRNA *)&rna_CrossSequence_input_1, NULL,
	-1, "input_count", 2, "input_count",
	"",
	0, "*",
	PROP_INT, PROP_UNSIGNED | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	CrossSequence_input_count_get, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL,
	0, 10000, 0, INT_MAX, 1, 0, NULL
};

PointerPropertyRNA rna_CrossSequence_input_1 = {
	{(PropertyRNA *)&rna_CrossSequence_input_2, (PropertyRNA *)&rna_CrossSequence_input_count,
	-1, "input_1", 8650753, "Input 1",
	"First input for the effect strip",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	CrossSequence_input_1_get, CrossSequence_input_1_set, NULL, NULL,&RNA_Sequence
};

PointerPropertyRNA rna_CrossSequence_input_2 = {
	{NULL, (PropertyRNA *)&rna_CrossSequence_input_1,
	-1, "input_2", 8650753, "Input 2",
	"Second input for the effect strip",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	CrossSequence_input_2_get, CrossSequence_input_2_set, NULL, NULL,&RNA_Sequence
};

StructRNA RNA_CrossSequence = {
	{(ContainerRNA *)&RNA_GammaCrossSequence, (ContainerRNA *)&RNA_ColorSequence,
	NULL,
	{(PropertyRNA *)&rna_CrossSequence_input_count, (PropertyRNA *)&rna_CrossSequence_input_2}},
	"CrossSequence", NULL, NULL, 4, "Cross Sequence",
	"Cross Sequence",
	"*", 17,
	(PropertyRNA *)&rna_Sequence_name, (PropertyRNA *)&rna_Sequence_rna_properties,
	&RNA_EffectSequence,
	NULL,
	rna_Sequence_refine,
	rna_Sequence_path,
	NULL,
	NULL,
	NULL,
	NULL,
	{NULL, NULL}
};

/* Gamma Cross Sequence */
IntPropertyRNA rna_GammaCrossSequence_input_count = {
	{(PropertyRNA *)&rna_GammaCrossSequence_input_1, NULL,
	-1, "input_count", 2, "input_count",
	"",
	0, "*",
	PROP_INT, PROP_UNSIGNED | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	GammaCrossSequence_input_count_get, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL,
	0, 10000, 0, INT_MAX, 1, 0, NULL
};

PointerPropertyRNA rna_GammaCrossSequence_input_1 = {
	{(PropertyRNA *)&rna_GammaCrossSequence_input_2, (PropertyRNA *)&rna_GammaCrossSequence_input_count,
	-1, "input_1", 8650753, "Input 1",
	"First input for the effect strip",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	GammaCrossSequence_input_1_get, GammaCrossSequence_input_1_set, NULL, NULL,&RNA_Sequence
};

PointerPropertyRNA rna_GammaCrossSequence_input_2 = {
	{NULL, (PropertyRNA *)&rna_GammaCrossSequence_input_1,
	-1, "input_2", 8650753, "Input 2",
	"Second input for the effect strip",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	GammaCrossSequence_input_2_get, GammaCrossSequence_input_2_set, NULL, NULL,&RNA_Sequence
};

StructRNA RNA_GammaCrossSequence = {
	{(ContainerRNA *)&RNA_GlowSequence, (ContainerRNA *)&RNA_CrossSequence,
	NULL,
	{(PropertyRNA *)&rna_GammaCrossSequence_input_count, (PropertyRNA *)&rna_GammaCrossSequence_input_2}},
	"GammaCrossSequence", NULL, NULL, 4, "Gamma Cross Sequence",
	"Gamma Cross Sequence",
	"*", 17,
	(PropertyRNA *)&rna_Sequence_name, (PropertyRNA *)&rna_Sequence_rna_properties,
	&RNA_EffectSequence,
	NULL,
	rna_Sequence_refine,
	rna_Sequence_path,
	NULL,
	NULL,
	NULL,
	NULL,
	{NULL, NULL}
};

/* Glow Sequence */
IntPropertyRNA rna_GlowSequence_input_count = {
	{(PropertyRNA *)&rna_GlowSequence_input_1, NULL,
	-1, "input_count", 2, "input_count",
	"",
	0, "*",
	PROP_INT, PROP_UNSIGNED | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	GlowSequence_input_count_get, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL,
	0, 10000, 0, INT_MAX, 1, 0, NULL
};

PointerPropertyRNA rna_GlowSequence_input_1 = {
	{(PropertyRNA *)&rna_GlowSequence_threshold, (PropertyRNA *)&rna_GlowSequence_input_count,
	-1, "input_1", 8650753, "Input 1",
	"First input for the effect strip",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	GlowSequence_input_1_get, GlowSequence_input_1_set, NULL, NULL,&RNA_Sequence
};

FloatPropertyRNA rna_GlowSequence_threshold = {
	{(PropertyRNA *)&rna_GlowSequence_clamp, (PropertyRNA *)&rna_GlowSequence_input_1,
	-1, "threshold", 8195, "Threshold",
	"Minimum intensity to trigger a glow",
	0, "*",
	PROP_FLOAT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Sequence_update, 67502080, NULL, NULL,
	offsetof(GlowVars, fMini), 4, NULL},
	GlowSequence_threshold_get, GlowSequence_threshold_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 1.0f, 0.0f, 1.0f, 10.0f, 3, 0.0f, NULL
};

FloatPropertyRNA rna_GlowSequence_clamp = {
	{(PropertyRNA *)&rna_GlowSequence_boost_factor, (PropertyRNA *)&rna_GlowSequence_threshold,
	-1, "clamp", 8195, "Clamp",
	"Brightness limit of intensity",
	0, "*",
	PROP_FLOAT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Sequence_update, 67502080, NULL, NULL,
	offsetof(GlowVars, fClamp), 4, NULL},
	GlowSequence_clamp_get, GlowSequence_clamp_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 1.0f, 0.0f, 1.0f, 10.0f, 3, 0.0f, NULL
};

FloatPropertyRNA rna_GlowSequence_boost_factor = {
	{(PropertyRNA *)&rna_GlowSequence_blur_radius, (PropertyRNA *)&rna_GlowSequence_clamp,
	-1, "boost_factor", 8195, "Boost Factor",
	"Brightness multiplier",
	0, "*",
	PROP_FLOAT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Sequence_update, 67502080, NULL, NULL,
	offsetof(GlowVars, fBoost), 4, NULL},
	GlowSequence_boost_factor_get, GlowSequence_boost_factor_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 10.0f, 0.0f, 10.0f, 10.0f, 3, 0.0f, NULL
};

FloatPropertyRNA rna_GlowSequence_blur_radius = {
	{(PropertyRNA *)&rna_GlowSequence_quality, (PropertyRNA *)&rna_GlowSequence_boost_factor,
	-1, "blur_radius", 8195, "Blur Distance",
	"Radius of glow effect",
	0, "*",
	PROP_FLOAT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Sequence_update, 67502080, NULL, NULL,
	offsetof(GlowVars, dDist), 4, NULL},
	GlowSequence_blur_radius_get, GlowSequence_blur_radius_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.5000000000f, 20.0f, 0.5000000000f, 20.0f, 10.0f, 3, 0.0f, NULL
};

IntPropertyRNA rna_GlowSequence_quality = {
	{(PropertyRNA *)&rna_GlowSequence_use_only_boost, (PropertyRNA *)&rna_GlowSequence_blur_radius,
	-1, "quality", 8195, "Quality",
	"Accuracy of the blur effect",
	0, "*",
	PROP_INT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Sequence_update, 67502080, NULL, NULL,
	offsetof(GlowVars, dQuality), 0, NULL},
	GlowSequence_quality_get, GlowSequence_quality_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL,
	1, 5, 1, 5, 1, 0, NULL
};

BoolPropertyRNA rna_GlowSequence_use_only_boost = {
	{NULL, (PropertyRNA *)&rna_GlowSequence_quality,
	-1, "use_only_boost", 8195, "Only Boost",
	"Show the glow buffer only",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Sequence_update, 67502080, NULL, NULL,
	offsetof(GlowVars, bNoComp), 0, NULL},
	GlowSequence_use_only_boost_get, GlowSequence_use_only_boost_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

StructRNA RNA_GlowSequence = {
	{(ContainerRNA *)&RNA_MulticamSequence, (ContainerRNA *)&RNA_GammaCrossSequence,
	NULL,
	{(PropertyRNA *)&rna_GlowSequence_input_count, (PropertyRNA *)&rna_GlowSequence_use_only_boost}},
	"GlowSequence", NULL, NULL, 4, "Glow Sequence",
	"Sequence strip creating a glow effect",
	"*", 17,
	(PropertyRNA *)&rna_Sequence_name, (PropertyRNA *)&rna_Sequence_rna_properties,
	&RNA_EffectSequence,
	NULL,
	rna_Sequence_refine,
	rna_Sequence_path,
	NULL,
	NULL,
	NULL,
	NULL,
	{NULL, NULL}
};

/* Multicam Select Sequence */
IntPropertyRNA rna_MulticamSequence_input_count = {
	{(PropertyRNA *)&rna_MulticamSequence_multicam_source, NULL,
	-1, "input_count", 2, "input_count",
	"",
	0, "*",
	PROP_INT, PROP_UNSIGNED | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	MulticamSequence_input_count_get, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL,
	0, 10000, 0, INT_MAX, 1, 0, NULL
};

IntPropertyRNA rna_MulticamSequence_multicam_source = {
	{(PropertyRNA *)&rna_MulticamSequence_animation_offset_start, (PropertyRNA *)&rna_MulticamSequence_input_count,
	-1, "multicam_source", 8195, "Multicam Source Channel",
	"",
	0, "*",
	PROP_INT, PROP_UNSIGNED | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Sequence_update, 67502080, NULL, NULL,
	offsetof(Sequence, multicam_source), 0, NULL},
	MulticamSequence_multicam_source_get, MulticamSequence_multicam_source_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL,
	0, 31, 0, 31, 1, 0, NULL
};

IntPropertyRNA rna_MulticamSequence_animation_offset_start = {
	{(PropertyRNA *)&rna_MulticamSequence_animation_offset_end, (PropertyRNA *)&rna_MulticamSequence_multicam_source,
	-1, "animation_offset_start", 1, "Animation Start Offset",
	"Animation start offset (trim start)",
	0, "*",
	PROP_INT, PROP_UNSIGNED | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Sequence_update, 67502080, NULL, NULL,
	0, -1, NULL},
	MulticamSequence_animation_offset_start_get, MulticamSequence_animation_offset_start_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL,
	0, 10000, 0, INT_MAX, 1, 0, NULL
};

IntPropertyRNA rna_MulticamSequence_animation_offset_end = {
	{NULL, (PropertyRNA *)&rna_MulticamSequence_animation_offset_start,
	-1, "animation_offset_end", 1, "Animation End Offset",
	"Animation end offset (trim end)",
	0, "*",
	PROP_INT, PROP_UNSIGNED | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Sequence_update, 67502080, NULL, NULL,
	0, -1, NULL},
	MulticamSequence_animation_offset_end_get, MulticamSequence_animation_offset_end_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL,
	0, 10000, 0, INT_MAX, 1, 0, NULL
};

StructRNA RNA_MulticamSequence = {
	{(ContainerRNA *)&RNA_MultiplySequence, (ContainerRNA *)&RNA_GlowSequence,
	NULL,
	{(PropertyRNA *)&rna_MulticamSequence_input_count, (PropertyRNA *)&rna_MulticamSequence_animation_offset_end}},
	"MulticamSequence", NULL, NULL, 4, "Multicam Select Sequence",
	"Sequence strip to perform multicam editing",
	"*", 17,
	(PropertyRNA *)&rna_Sequence_name, (PropertyRNA *)&rna_Sequence_rna_properties,
	&RNA_EffectSequence,
	NULL,
	rna_Sequence_refine,
	rna_Sequence_path,
	NULL,
	NULL,
	NULL,
	NULL,
	{NULL, NULL}
};

/* Multiply Sequence */
IntPropertyRNA rna_MultiplySequence_input_count = {
	{(PropertyRNA *)&rna_MultiplySequence_input_1, NULL,
	-1, "input_count", 2, "input_count",
	"",
	0, "*",
	PROP_INT, PROP_UNSIGNED | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	MultiplySequence_input_count_get, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL,
	0, 10000, 0, INT_MAX, 1, 0, NULL
};

PointerPropertyRNA rna_MultiplySequence_input_1 = {
	{(PropertyRNA *)&rna_MultiplySequence_input_2, (PropertyRNA *)&rna_MultiplySequence_input_count,
	-1, "input_1", 8650753, "Input 1",
	"First input for the effect strip",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	MultiplySequence_input_1_get, MultiplySequence_input_1_set, NULL, NULL,&RNA_Sequence
};

PointerPropertyRNA rna_MultiplySequence_input_2 = {
	{NULL, (PropertyRNA *)&rna_MultiplySequence_input_1,
	-1, "input_2", 8650753, "Input 2",
	"Second input for the effect strip",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	MultiplySequence_input_2_get, MultiplySequence_input_2_set, NULL, NULL,&RNA_Sequence
};

StructRNA RNA_MultiplySequence = {
	{(ContainerRNA *)&RNA_OverDropSequence, (ContainerRNA *)&RNA_MulticamSequence,
	NULL,
	{(PropertyRNA *)&rna_MultiplySequence_input_count, (PropertyRNA *)&rna_MultiplySequence_input_2}},
	"MultiplySequence", NULL, NULL, 4, "Multiply Sequence",
	"Multiply Sequence",
	"*", 17,
	(PropertyRNA *)&rna_Sequence_name, (PropertyRNA *)&rna_Sequence_rna_properties,
	&RNA_EffectSequence,
	NULL,
	rna_Sequence_refine,
	rna_Sequence_path,
	NULL,
	NULL,
	NULL,
	NULL,
	{NULL, NULL}
};

/* Over Drop Sequence */
IntPropertyRNA rna_OverDropSequence_input_count = {
	{(PropertyRNA *)&rna_OverDropSequence_input_1, NULL,
	-1, "input_count", 2, "input_count",
	"",
	0, "*",
	PROP_INT, PROP_UNSIGNED | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	OverDropSequence_input_count_get, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL,
	0, 10000, 0, INT_MAX, 1, 0, NULL
};

PointerPropertyRNA rna_OverDropSequence_input_1 = {
	{(PropertyRNA *)&rna_OverDropSequence_input_2, (PropertyRNA *)&rna_OverDropSequence_input_count,
	-1, "input_1", 8650753, "Input 1",
	"First input for the effect strip",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	OverDropSequence_input_1_get, OverDropSequence_input_1_set, NULL, NULL,&RNA_Sequence
};

PointerPropertyRNA rna_OverDropSequence_input_2 = {
	{NULL, (PropertyRNA *)&rna_OverDropSequence_input_1,
	-1, "input_2", 8650753, "Input 2",
	"Second input for the effect strip",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	OverDropSequence_input_2_get, OverDropSequence_input_2_set, NULL, NULL,&RNA_Sequence
};

StructRNA RNA_OverDropSequence = {
	{(ContainerRNA *)&RNA_SpeedControlSequence, (ContainerRNA *)&RNA_MultiplySequence,
	NULL,
	{(PropertyRNA *)&rna_OverDropSequence_input_count, (PropertyRNA *)&rna_OverDropSequence_input_2}},
	"OverDropSequence", NULL, NULL, 4, "Over Drop Sequence",
	"Over Drop Sequence",
	"*", 17,
	(PropertyRNA *)&rna_Sequence_name, (PropertyRNA *)&rna_Sequence_rna_properties,
	&RNA_EffectSequence,
	NULL,
	rna_Sequence_refine,
	rna_Sequence_path,
	NULL,
	NULL,
	NULL,
	NULL,
	{NULL, NULL}
};

/* SpeedControl Sequence */
IntPropertyRNA rna_SpeedControlSequence_input_count = {
	{(PropertyRNA *)&rna_SpeedControlSequence_input_1, NULL,
	-1, "input_count", 2, "input_count",
	"",
	0, "*",
	PROP_INT, PROP_UNSIGNED | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	SpeedControlSequence_input_count_get, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL,
	0, 10000, 0, INT_MAX, 1, 0, NULL
};

PointerPropertyRNA rna_SpeedControlSequence_input_1 = {
	{(PropertyRNA *)&rna_SpeedControlSequence_multiply_speed, (PropertyRNA *)&rna_SpeedControlSequence_input_count,
	-1, "input_1", 8650753, "Input 1",
	"First input for the effect strip",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	SpeedControlSequence_input_1_get, SpeedControlSequence_input_1_set, NULL, NULL,&RNA_Sequence
};

FloatPropertyRNA rna_SpeedControlSequence_multiply_speed = {
	{(PropertyRNA *)&rna_SpeedControlSequence_use_as_speed, (PropertyRNA *)&rna_SpeedControlSequence_input_1,
	-1, "multiply_speed", 8193, "Multiply Speed",
	"Multiply the resulting speed after the speed factor",
	0, "*",
	PROP_FLOAT, PROP_UNSIGNED | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Sequence_update, 67502080, NULL, NULL,
	offsetof(SpeedControlVars, globalSpeed), 4, NULL},
	SpeedControlSequence_multiply_speed_get, SpeedControlSequence_multiply_speed_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 100.0f, 0.0f, FLT_MAX, 1.0f, -1, 0.0f, NULL
};

BoolPropertyRNA rna_SpeedControlSequence_use_as_speed = {
	{(PropertyRNA *)&rna_SpeedControlSequence_scale_to_length, (PropertyRNA *)&rna_SpeedControlSequence_multiply_speed,
	-1, "use_as_speed", 3, "Use as speed",
	"Interpret the value as speed instead of a frame number",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Sequence_update, 67502080, NULL, NULL,
	0, -1, NULL},
	SpeedControlSequence_use_as_speed_get, SpeedControlSequence_use_as_speed_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_SpeedControlSequence_scale_to_length = {
	{NULL, (PropertyRNA *)&rna_SpeedControlSequence_use_as_speed,
	-1, "scale_to_length", 3, "Scale to length",
	"Scale values from 0.0 to 1.0 to target sequence length",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Sequence_update, 67502080, NULL, NULL,
	0, -1, NULL},
	SpeedControlSequence_scale_to_length_get, SpeedControlSequence_scale_to_length_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

StructRNA RNA_SpeedControlSequence = {
	{(ContainerRNA *)&RNA_SubtractSequence, (ContainerRNA *)&RNA_OverDropSequence,
	NULL,
	{(PropertyRNA *)&rna_SpeedControlSequence_input_count, (PropertyRNA *)&rna_SpeedControlSequence_scale_to_length}},
	"SpeedControlSequence", NULL, NULL, 4, "SpeedControl Sequence",
	"Sequence strip to control the speed of other strips",
	"*", 17,
	(PropertyRNA *)&rna_Sequence_name, (PropertyRNA *)&rna_Sequence_rna_properties,
	&RNA_EffectSequence,
	NULL,
	rna_Sequence_refine,
	rna_Sequence_path,
	NULL,
	NULL,
	NULL,
	NULL,
	{NULL, NULL}
};

/* Subtract Sequence */
IntPropertyRNA rna_SubtractSequence_input_count = {
	{(PropertyRNA *)&rna_SubtractSequence_input_1, NULL,
	-1, "input_count", 2, "input_count",
	"",
	0, "*",
	PROP_INT, PROP_UNSIGNED | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	SubtractSequence_input_count_get, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL,
	0, 10000, 0, INT_MAX, 1, 0, NULL
};

PointerPropertyRNA rna_SubtractSequence_input_1 = {
	{(PropertyRNA *)&rna_SubtractSequence_input_2, (PropertyRNA *)&rna_SubtractSequence_input_count,
	-1, "input_1", 8650753, "Input 1",
	"First input for the effect strip",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	SubtractSequence_input_1_get, SubtractSequence_input_1_set, NULL, NULL,&RNA_Sequence
};

PointerPropertyRNA rna_SubtractSequence_input_2 = {
	{NULL, (PropertyRNA *)&rna_SubtractSequence_input_1,
	-1, "input_2", 8650753, "Input 2",
	"Second input for the effect strip",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	SubtractSequence_input_2_get, SubtractSequence_input_2_set, NULL, NULL,&RNA_Sequence
};

StructRNA RNA_SubtractSequence = {
	{(ContainerRNA *)&RNA_TransformSequence, (ContainerRNA *)&RNA_SpeedControlSequence,
	NULL,
	{(PropertyRNA *)&rna_SubtractSequence_input_count, (PropertyRNA *)&rna_SubtractSequence_input_2}},
	"SubtractSequence", NULL, NULL, 4, "Subtract Sequence",
	"Subtract Sequence",
	"*", 17,
	(PropertyRNA *)&rna_Sequence_name, (PropertyRNA *)&rna_Sequence_rna_properties,
	&RNA_EffectSequence,
	NULL,
	rna_Sequence_refine,
	rna_Sequence_path,
	NULL,
	NULL,
	NULL,
	NULL,
	{NULL, NULL}
};

/* Transform Sequence */
IntPropertyRNA rna_TransformSequence_input_count = {
	{(PropertyRNA *)&rna_TransformSequence_input_1, NULL,
	-1, "input_count", 2, "input_count",
	"",
	0, "*",
	PROP_INT, PROP_UNSIGNED | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	TransformSequence_input_count_get, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL,
	0, 10000, 0, INT_MAX, 1, 0, NULL
};

PointerPropertyRNA rna_TransformSequence_input_1 = {
	{(PropertyRNA *)&rna_TransformSequence_scale_start_x, (PropertyRNA *)&rna_TransformSequence_input_count,
	-1, "input_1", 8650753, "Input 1",
	"First input for the effect strip",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	TransformSequence_input_1_get, TransformSequence_input_1_set, NULL, NULL,&RNA_Sequence
};

FloatPropertyRNA rna_TransformSequence_scale_start_x = {
	{(PropertyRNA *)&rna_TransformSequence_scale_start_y, (PropertyRNA *)&rna_TransformSequence_input_1,
	-1, "scale_start_x", 8195, "Scale X",
	"",
	0, "*",
	PROP_FLOAT, PROP_UNSIGNED | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Sequence_update, 67502080, NULL, NULL,
	offsetof(TransformVars, ScalexIni), 4, NULL},
	TransformSequence_scale_start_x_get, TransformSequence_scale_start_x_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 10.0f, 0.0f, FLT_MAX, 3.0f, 6, 0.0f, NULL
};

FloatPropertyRNA rna_TransformSequence_scale_start_y = {
	{(PropertyRNA *)&rna_TransformSequence_use_uniform_scale, (PropertyRNA *)&rna_TransformSequence_scale_start_x,
	-1, "scale_start_y", 8195, "Scale Y",
	"",
	0, "*",
	PROP_FLOAT, PROP_UNSIGNED | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Sequence_update, 67502080, NULL, NULL,
	offsetof(TransformVars, ScaleyIni), 4, NULL},
	TransformSequence_scale_start_y_get, TransformSequence_scale_start_y_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 10.0f, 0.0f, FLT_MAX, 3.0f, 6, 0.0f, NULL
};

BoolPropertyRNA rna_TransformSequence_use_uniform_scale = {
	{(PropertyRNA *)&rna_TransformSequence_translate_start_x, (PropertyRNA *)&rna_TransformSequence_scale_start_y,
	-1, "use_uniform_scale", 8195, "Uniform Scale",
	"Scale uniformly, preserving aspect ratio",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Sequence_update, 67502080, NULL, NULL,
	offsetof(TransformVars, uniform_scale), 0, NULL},
	TransformSequence_use_uniform_scale_get, TransformSequence_use_uniform_scale_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

FloatPropertyRNA rna_TransformSequence_translate_start_x = {
	{(PropertyRNA *)&rna_TransformSequence_translate_start_y, (PropertyRNA *)&rna_TransformSequence_use_uniform_scale,
	-1, "translate_start_x", 8195, "Translate X",
	"",
	0, "*",
	PROP_FLOAT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Sequence_update, 67502080, NULL, NULL,
	offsetof(TransformVars, xIni), 4, NULL},
	TransformSequence_translate_start_x_get, TransformSequence_translate_start_x_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, -4000.0f, 4000.0f, -FLT_MAX, FLT_MAX, 3.0f, 6, 0.0f, NULL
};

FloatPropertyRNA rna_TransformSequence_translate_start_y = {
	{(PropertyRNA *)&rna_TransformSequence_rotation_start, (PropertyRNA *)&rna_TransformSequence_translate_start_x,
	-1, "translate_start_y", 8195, "Translate Y",
	"",
	0, "*",
	PROP_FLOAT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Sequence_update, 67502080, NULL, NULL,
	offsetof(TransformVars, yIni), 4, NULL},
	TransformSequence_translate_start_y_get, TransformSequence_translate_start_y_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, -4000.0f, 4000.0f, -FLT_MAX, FLT_MAX, 3.0f, 6, 0.0f, NULL
};

FloatPropertyRNA rna_TransformSequence_rotation_start = {
	{(PropertyRNA *)&rna_TransformSequence_translation_unit, (PropertyRNA *)&rna_TransformSequence_translate_start_y,
	-1, "rotation_start", 8195, "Rotation",
	"",
	0, "*",
	PROP_FLOAT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Sequence_update, 67502080, NULL, NULL,
	offsetof(TransformVars, rotIni), 4, NULL},
	TransformSequence_rotation_start_get, TransformSequence_rotation_start_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, -360.0f, 360.0f, -360.0f, 360.0f, 10.0f, 3, 0.0f, NULL
};

static EnumPropertyItem rna_TransformSequence_translation_unit_items[3] = {
	{0, "PIXELS", 0, "Pixels", ""},
	{1, "PERCENT", 0, "Percent", ""},
	{0, NULL, 0, NULL, NULL}
};

EnumPropertyRNA rna_TransformSequence_translation_unit = {
	{(PropertyRNA *)&rna_TransformSequence_interpolation, (PropertyRNA *)&rna_TransformSequence_rotation_start,
	-1, "translation_unit", 1, "Translation Unit",
	"",
	0, "*",
	PROP_ENUM, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Sequence_update, 67502080, NULL, NULL,
	0, -1, NULL},
	TransformSequence_translation_unit_get, TransformSequence_translation_unit_set, NULL, NULL, NULL, NULL, rna_TransformSequence_translation_unit_items, 2, 0
};

static EnumPropertyItem rna_TransformSequence_interpolation_items[4] = {
	{0, "NONE", 0, "None", "No interpolation"},
	{1, "BILINEAR", 0, "Bilinear", "Bilinear interpolation"},
	{2, "BICUBIC", 0, "Bicubic", "Bicubic interpolation"},
	{0, NULL, 0, NULL, NULL}
};

EnumPropertyRNA rna_TransformSequence_interpolation = {
	{NULL, (PropertyRNA *)&rna_TransformSequence_translation_unit,
	-1, "interpolation", 1, "Interpolation",
	"",
	0, "*",
	PROP_ENUM, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Sequence_update, 67502080, NULL, NULL,
	0, -1, NULL},
	TransformSequence_interpolation_get, TransformSequence_interpolation_set, NULL, NULL, NULL, NULL, rna_TransformSequence_interpolation_items, 3, 0
};

StructRNA RNA_TransformSequence = {
	{(ContainerRNA *)&RNA_WipeSequence, (ContainerRNA *)&RNA_SubtractSequence,
	NULL,
	{(PropertyRNA *)&rna_TransformSequence_input_count, (PropertyRNA *)&rna_TransformSequence_interpolation}},
	"TransformSequence", NULL, NULL, 4, "Transform Sequence",
	"Sequence strip applying affine transformations to other strips",
	"*", 17,
	(PropertyRNA *)&rna_Sequence_name, (PropertyRNA *)&rna_Sequence_rna_properties,
	&RNA_EffectSequence,
	NULL,
	rna_Sequence_refine,
	rna_Sequence_path,
	NULL,
	NULL,
	NULL,
	NULL,
	{NULL, NULL}
};

/* Wipe Sequence */
IntPropertyRNA rna_WipeSequence_input_count = {
	{(PropertyRNA *)&rna_WipeSequence_input_1, NULL,
	-1, "input_count", 2, "input_count",
	"",
	0, "*",
	PROP_INT, PROP_UNSIGNED | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	WipeSequence_input_count_get, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL,
	0, 10000, 0, INT_MAX, 1, 0, NULL
};

PointerPropertyRNA rna_WipeSequence_input_1 = {
	{(PropertyRNA *)&rna_WipeSequence_blur_width, (PropertyRNA *)&rna_WipeSequence_input_count,
	-1, "input_1", 8650753, "Input 1",
	"First input for the effect strip",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	WipeSequence_input_1_get, WipeSequence_input_1_set, NULL, NULL,&RNA_Sequence
};

FloatPropertyRNA rna_WipeSequence_blur_width = {
	{(PropertyRNA *)&rna_WipeSequence_angle, (PropertyRNA *)&rna_WipeSequence_input_1,
	-1, "blur_width", 8195, "Blur Width",
	"Width of the blur edge, in percentage relative to the image size",
	0, "*",
	PROP_FLOAT, PROP_UNSIGNED | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Sequence_update, 67502080, NULL, NULL,
	offsetof(WipeVars, edgeWidth), 4, NULL},
	WipeSequence_blur_width_get, WipeSequence_blur_width_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 1.0f, 0.0f, 1.0f, 10.0f, 3, 0.0f, NULL
};

FloatPropertyRNA rna_WipeSequence_angle = {
	{(PropertyRNA *)&rna_WipeSequence_direction, (PropertyRNA *)&rna_WipeSequence_blur_width,
	-1, "angle", 8195, "Angle",
	"Edge angle",
	0, "*",
	PROP_FLOAT, PROP_ANGLE | PROP_UNIT_ROTATION, NULL, 0, {0, 0, 0}, 0,
	rna_Sequence_update, 67502080, NULL, NULL,
	offsetof(WipeVars, angle), 4, NULL},
	WipeSequence_angle_get, WipeSequence_angle_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, -1.5707963705f, 1.5707963705f, -1.5707963705f, 1.5707963705f, 10.0f, 3, 0.0f, NULL
};

static EnumPropertyItem rna_WipeSequence_direction_items[3] = {
	{0, "OUT", 0, "Out", ""},
	{1, "IN", 0, "In", ""},
	{0, NULL, 0, NULL, NULL}
};

EnumPropertyRNA rna_WipeSequence_direction = {
	{(PropertyRNA *)&rna_WipeSequence_transition_type, (PropertyRNA *)&rna_WipeSequence_angle,
	-1, "direction", 3, "Direction",
	"Wipe direction",
	0, "*",
	PROP_ENUM, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Sequence_update, 67502080, NULL, NULL,
	0, -1, NULL},
	WipeSequence_direction_get, WipeSequence_direction_set, NULL, NULL, NULL, NULL, rna_WipeSequence_direction_items, 2, 0
};

static EnumPropertyItem rna_WipeSequence_transition_type_items[5] = {
	{0, "SINGLE", 0, "Single", ""},
	{1, "DOUBLE", 0, "Double", ""},
	{4, "IRIS", 0, "Iris", ""},
	{5, "CLOCK", 0, "Clock", ""},
	{0, NULL, 0, NULL, NULL}
};

EnumPropertyRNA rna_WipeSequence_transition_type = {
	{NULL, (PropertyRNA *)&rna_WipeSequence_direction,
	-1, "transition_type", 3, "Transition Type",
	"",
	0, "*",
	PROP_ENUM, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Sequence_update, 67502080, NULL, NULL,
	0, -1, NULL},
	WipeSequence_transition_type_get, WipeSequence_transition_type_set, NULL, NULL, NULL, NULL, rna_WipeSequence_transition_type_items, 4, 0
};

StructRNA RNA_WipeSequence = {
	{(ContainerRNA *)&RNA_GaussianBlurSequence, (ContainerRNA *)&RNA_TransformSequence,
	NULL,
	{(PropertyRNA *)&rna_WipeSequence_input_count, (PropertyRNA *)&rna_WipeSequence_transition_type}},
	"WipeSequence", NULL, NULL, 4, "Wipe Sequence",
	"Sequence strip creating a wipe transition",
	"*", 17,
	(PropertyRNA *)&rna_Sequence_name, (PropertyRNA *)&rna_Sequence_rna_properties,
	&RNA_EffectSequence,
	NULL,
	rna_Sequence_refine,
	rna_Sequence_path,
	NULL,
	NULL,
	NULL,
	NULL,
	{NULL, NULL}
};

/* Gaussian Blur Sequence */
IntPropertyRNA rna_GaussianBlurSequence_input_count = {
	{(PropertyRNA *)&rna_GaussianBlurSequence_input_1, NULL,
	-1, "input_count", 2, "input_count",
	"",
	0, "*",
	PROP_INT, PROP_UNSIGNED | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	GaussianBlurSequence_input_count_get, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL,
	0, 10000, 0, INT_MAX, 1, 0, NULL
};

PointerPropertyRNA rna_GaussianBlurSequence_input_1 = {
	{(PropertyRNA *)&rna_GaussianBlurSequence_size_x, (PropertyRNA *)&rna_GaussianBlurSequence_input_count,
	-1, "input_1", 8650753, "Input 1",
	"First input for the effect strip",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	GaussianBlurSequence_input_1_get, GaussianBlurSequence_input_1_set, NULL, NULL,&RNA_Sequence
};

FloatPropertyRNA rna_GaussianBlurSequence_size_x = {
	{(PropertyRNA *)&rna_GaussianBlurSequence_size_y, (PropertyRNA *)&rna_GaussianBlurSequence_input_1,
	-1, "size_x", 8195, "Size X",
	"Size of the blur along X axis",
	0, "*",
	PROP_FLOAT, PROP_UNSIGNED | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Sequence_update, 67502080, NULL, NULL,
	offsetof(GaussianBlurVars, size_x), 4, NULL},
	GaussianBlurSequence_size_x_get, GaussianBlurSequence_size_x_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, FLT_MAX, 0.0f, FLT_MAX, 1.0f, -1, 0.0f, NULL
};

FloatPropertyRNA rna_GaussianBlurSequence_size_y = {
	{NULL, (PropertyRNA *)&rna_GaussianBlurSequence_size_x,
	-1, "size_y", 8195, "Size Y",
	"Size of the blur along Y axis",
	0, "*",
	PROP_FLOAT, PROP_UNSIGNED | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Sequence_update, 67502080, NULL, NULL,
	offsetof(GaussianBlurVars, size_y), 4, NULL},
	GaussianBlurSequence_size_y_get, GaussianBlurSequence_size_y_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, FLT_MAX, 0.0f, FLT_MAX, 1.0f, -1, 0.0f, NULL
};

StructRNA RNA_GaussianBlurSequence = {
	{(ContainerRNA *)&RNA_SequenceModifier, (ContainerRNA *)&RNA_WipeSequence,
	NULL,
	{(PropertyRNA *)&rna_GaussianBlurSequence_input_count, (PropertyRNA *)&rna_GaussianBlurSequence_size_y}},
	"GaussianBlurSequence", NULL, NULL, 4, "Gaussian Blur Sequence",
	"Sequence strip creating a gaussian blur",
	"*", 17,
	(PropertyRNA *)&rna_Sequence_name, (PropertyRNA *)&rna_Sequence_rna_properties,
	&RNA_EffectSequence,
	NULL,
	rna_Sequence_refine,
	rna_Sequence_path,
	NULL,
	NULL,
	NULL,
	NULL,
	{NULL, NULL}
};

/* SequenceModifier */
CollectionPropertyRNA rna_SequenceModifier_rna_properties = {
	{(PropertyRNA *)&rna_SequenceModifier_rna_type, NULL,
	-1, "rna_properties", 128, "Properties",
	"RNA property collection",
	0, "*",
	PROP_COLLECTION, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	SequenceModifier_rna_properties_begin, SequenceModifier_rna_properties_next, SequenceModifier_rna_properties_end, SequenceModifier_rna_properties_get, NULL, NULL, SequenceModifier_rna_properties_lookup_string, NULL, &RNA_Property
};

PointerPropertyRNA rna_SequenceModifier_rna_type = {
	{(PropertyRNA *)&rna_SequenceModifier_name, (PropertyRNA *)&rna_SequenceModifier_rna_properties,
	-1, "rna_type", 8912896, "RNA",
	"RNA type definition",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	SequenceModifier_rna_type_get, NULL, NULL, NULL,&RNA_Struct
};

StringPropertyRNA rna_SequenceModifier_name = {
	{(PropertyRNA *)&rna_SequenceModifier_type, (PropertyRNA *)&rna_SequenceModifier_rna_type,
	-1, "name", 262145, "Name",
	"",
	0, "*",
	PROP_STRING, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {64, 0, 0}, 0,
	NULL, 67502080, NULL, NULL,
	0, -1, NULL},
	SequenceModifier_name_get, SequenceModifier_name_length, SequenceModifier_name_set, NULL, NULL, NULL, 64, ""
};

static EnumPropertyItem rna_SequenceModifier_type_items[6] = {
	{1, "COLOR_BALANCE", 0, "Color Balance", ""},
	{2, "CURVES", 0, "Curves", ""},
	{3, "HUE_CORRECT", 0, "Hue Correct", ""},
	{4, "BRIGHT_CONTRAST", 0, "Bright/Contrast", ""},
	{5, "MASK", 0, "Mask", ""},
	{0, NULL, 0, NULL, NULL}
};

EnumPropertyRNA rna_SequenceModifier_type = {
	{(PropertyRNA *)&rna_SequenceModifier_mute, (PropertyRNA *)&rna_SequenceModifier_name,
	-1, "type", 2, "Type",
	"",
	0, "*",
	PROP_ENUM, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 67502080, NULL, NULL,
	0, -1, NULL},
	SequenceModifier_type_get, NULL, NULL, NULL, NULL, NULL, rna_SequenceModifier_type_items, 5, 1
};

BoolPropertyRNA rna_SequenceModifier_mute = {
	{(PropertyRNA *)&rna_SequenceModifier_show_expanded, (PropertyRNA *)&rna_SequenceModifier_type,
	-1, "mute", 4099, "Mute",
	"Mute this modifier",
	253, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_SequenceModifier_update, 67502080, NULL, NULL,
	0, -1, NULL},
	SequenceModifier_mute_get, SequenceModifier_mute_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_SequenceModifier_show_expanded = {
	{(PropertyRNA *)&rna_SequenceModifier_input_mask_type, (PropertyRNA *)&rna_SequenceModifier_mute,
	-1, "show_expanded", 4099, "Expanded",
	"Mute expanded settings for the modifier",
	4, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 67502080, NULL, NULL,
	0, -1, NULL},
	SequenceModifier_show_expanded_get, SequenceModifier_show_expanded_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

static EnumPropertyItem rna_SequenceModifier_input_mask_type_items[3] = {
	{0, "STRIP", 0, "Strip", "Use sequencer strip as mask input"},
	{1, "ID", 0, "Mask", "Use mask ID as mask input"},
	{0, NULL, 0, NULL, NULL}
};

EnumPropertyRNA rna_SequenceModifier_input_mask_type = {
	{(PropertyRNA *)&rna_SequenceModifier_input_mask_strip, (PropertyRNA *)&rna_SequenceModifier_show_expanded,
	-1, "input_mask_type", 3, "Mask Input Type",
	"Type of input data used for mask",
	0, "*",
	PROP_ENUM, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_SequenceModifier_update, 67502080, NULL, NULL,
	0, -1, NULL},
	SequenceModifier_input_mask_type_get, SequenceModifier_input_mask_type_set, NULL, NULL, NULL, NULL, rna_SequenceModifier_input_mask_type_items, 2, 0
};

PointerPropertyRNA rna_SequenceModifier_input_mask_strip = {
	{(PropertyRNA *)&rna_SequenceModifier_input_mask_id, (PropertyRNA *)&rna_SequenceModifier_input_mask_type,
	-1, "input_mask_strip", 8388609, "Mask Strip",
	"Strip used as mask input for the modifier",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_SequenceModifier_update, 67502080, NULL, NULL,
	0, -1, NULL},
	SequenceModifier_input_mask_strip_get, SequenceModifier_input_mask_strip_set, NULL, rna_SequenceModifier_otherSequence_poll,&RNA_Sequence
};

PointerPropertyRNA rna_SequenceModifier_input_mask_id = {
	{NULL, (PropertyRNA *)&rna_SequenceModifier_input_mask_strip,
	-1, "input_mask_id", 8388673, "Mask",
	"Mask ID used as mask input for the modifier",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_SequenceModifier_update, 67502080, NULL, NULL,
	0, -1, NULL},
	SequenceModifier_input_mask_id_get, SequenceModifier_input_mask_id_set, NULL, NULL,&RNA_Mask
};

StructRNA RNA_SequenceModifier = {
	{(ContainerRNA *)&RNA_ColorBalanceModifier, (ContainerRNA *)&RNA_GaussianBlurSequence,
	NULL,
	{(PropertyRNA *)&rna_SequenceModifier_rna_properties, (PropertyRNA *)&rna_SequenceModifier_input_mask_id}},
	"SequenceModifier", NULL, NULL, 4, "SequenceModifier",
	"Modifier for sequence strip",
	"*", 17,
	(PropertyRNA *)&rna_SequenceModifier_name, (PropertyRNA *)&rna_SequenceModifier_rna_properties,
	NULL,
	NULL,
	rna_SequenceModifier_refine,
	rna_SequenceModifier_path,
	NULL,
	NULL,
	NULL,
	NULL,
	{NULL, NULL}
};

/* ColorBalanceModifier */
PointerPropertyRNA rna_ColorBalanceModifier_color_balance = {
	{(PropertyRNA *)&rna_ColorBalanceModifier_color_multiply, NULL,
	-1, "color_balance", 8388608, "color_balance",
	"",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	ColorBalanceModifier_color_balance_get, NULL, NULL, NULL,&RNA_SequenceColorBalanceData
};

FloatPropertyRNA rna_ColorBalanceModifier_color_multiply = {
	{NULL, (PropertyRNA *)&rna_ColorBalanceModifier_color_balance,
	-1, "color_multiply", 8195, "Multiply Colors",
	"",
	0, "*",
	PROP_FLOAT, PROP_UNSIGNED | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_SequenceModifier_update, 67502080, NULL, NULL,
	offsetof(ColorBalanceModifierData, color_multiply), 4, NULL},
	ColorBalanceModifier_color_multiply_get, ColorBalanceModifier_color_multiply_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 20.0f, 0.0f, 20.0f, 10.0f, 3, 1.0f, NULL
};

StructRNA RNA_ColorBalanceModifier = {
	{(ContainerRNA *)&RNA_CurvesModifier, (ContainerRNA *)&RNA_SequenceModifier,
	NULL,
	{(PropertyRNA *)&rna_ColorBalanceModifier_color_balance, (PropertyRNA *)&rna_ColorBalanceModifier_color_multiply}},
	"ColorBalanceModifier", NULL, NULL, 4, "ColorBalanceModifier",
	"Color balance modifier for sequence strip",
	"*", 17,
	(PropertyRNA *)&rna_SequenceModifier_name, (PropertyRNA *)&rna_SequenceModifier_rna_properties,
	&RNA_SequenceModifier,
	NULL,
	rna_SequenceModifier_refine,
	rna_SequenceModifier_path,
	NULL,
	NULL,
	NULL,
	NULL,
	{NULL, NULL}
};

/* CurvesModifier */
PointerPropertyRNA rna_CurvesModifier_curve_mapping = {
	{NULL, NULL,
	-1, "curve_mapping", 8388608, "Curve Mapping",
	"",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_SequenceModifier_update, 67502080, NULL, NULL,
	0, -1, NULL},
	CurvesModifier_curve_mapping_get, NULL, NULL, NULL,&RNA_CurveMapping
};

StructRNA RNA_CurvesModifier = {
	{(ContainerRNA *)&RNA_HueCorrectModifier, (ContainerRNA *)&RNA_ColorBalanceModifier,
	NULL,
	{(PropertyRNA *)&rna_CurvesModifier_curve_mapping, (PropertyRNA *)&rna_CurvesModifier_curve_mapping}},
	"CurvesModifier", NULL, NULL, 4, "CurvesModifier",
	"RGB curves modifier for sequence strip",
	"*", 17,
	(PropertyRNA *)&rna_SequenceModifier_name, (PropertyRNA *)&rna_SequenceModifier_rna_properties,
	&RNA_SequenceModifier,
	NULL,
	rna_SequenceModifier_refine,
	rna_SequenceModifier_path,
	NULL,
	NULL,
	NULL,
	NULL,
	{NULL, NULL}
};

/* HueCorrectModifier */
PointerPropertyRNA rna_HueCorrectModifier_curve_mapping = {
	{NULL, NULL,
	-1, "curve_mapping", 8388608, "Curve Mapping",
	"",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_SequenceModifier_update, 67502080, NULL, NULL,
	0, -1, NULL},
	HueCorrectModifier_curve_mapping_get, NULL, NULL, NULL,&RNA_CurveMapping
};

StructRNA RNA_HueCorrectModifier = {
	{(ContainerRNA *)&RNA_BrightContrastModifier, (ContainerRNA *)&RNA_CurvesModifier,
	NULL,
	{(PropertyRNA *)&rna_HueCorrectModifier_curve_mapping, (PropertyRNA *)&rna_HueCorrectModifier_curve_mapping}},
	"HueCorrectModifier", NULL, NULL, 4, "HueCorrectModifier",
	"Hue correction modifier for sequence strip",
	"*", 17,
	(PropertyRNA *)&rna_SequenceModifier_name, (PropertyRNA *)&rna_SequenceModifier_rna_properties,
	&RNA_SequenceModifier,
	NULL,
	rna_SequenceModifier_refine,
	rna_SequenceModifier_path,
	NULL,
	NULL,
	NULL,
	NULL,
	{NULL, NULL}
};

/* BrightContrastModifier */
FloatPropertyRNA rna_BrightContrastModifier_bright = {
	{(PropertyRNA *)&rna_BrightContrastModifier_contrast, NULL,
	-1, "bright", 8195, "Bright",
	"",
	0, "*",
	PROP_FLOAT, PROP_UNSIGNED | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_SequenceModifier_update, 67502080, NULL, NULL,
	offsetof(BrightContrastModifierData, bright), 4, NULL},
	BrightContrastModifier_bright_get, BrightContrastModifier_bright_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, -FLT_MAX, FLT_MAX, -FLT_MAX, FLT_MAX, 10.0f, 3, 0.0f, NULL
};

FloatPropertyRNA rna_BrightContrastModifier_contrast = {
	{NULL, (PropertyRNA *)&rna_BrightContrastModifier_bright,
	-1, "contrast", 8195, "Contrast",
	"",
	0, "*",
	PROP_FLOAT, PROP_UNSIGNED | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_SequenceModifier_update, 67502080, NULL, NULL,
	offsetof(BrightContrastModifierData, contrast), 4, NULL},
	BrightContrastModifier_contrast_get, BrightContrastModifier_contrast_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, -FLT_MAX, FLT_MAX, -FLT_MAX, FLT_MAX, 10.0f, 3, 0.0f, NULL
};

StructRNA RNA_BrightContrastModifier = {
	{(ContainerRNA *)&RNA_SmokeDomainSettings, (ContainerRNA *)&RNA_HueCorrectModifier,
	NULL,
	{(PropertyRNA *)&rna_BrightContrastModifier_bright, (PropertyRNA *)&rna_BrightContrastModifier_contrast}},
	"BrightContrastModifier", NULL, NULL, 4, "BrightContrastModifier",
	"Bright/contrast modifier data for sequence strip",
	"*", 17,
	(PropertyRNA *)&rna_SequenceModifier_name, (PropertyRNA *)&rna_SequenceModifier_rna_properties,
	&RNA_SequenceModifier,
	NULL,
	rna_SequenceModifier_refine,
	rna_SequenceModifier_path,
	NULL,
	NULL,
	NULL,
	NULL,
	{NULL, NULL}
};

