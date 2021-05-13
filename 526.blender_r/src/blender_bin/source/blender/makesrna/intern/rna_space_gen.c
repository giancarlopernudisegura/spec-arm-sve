
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

#include "rna_space.c"
#include "rna_space_api.c"

#pragma GCC diagnostic ignored "-Wunused-parameter"

/* Autogenerated Functions */


CollectionPropertyRNA rna_Space_rna_properties;
PointerPropertyRNA rna_Space_rna_type;
EnumPropertyRNA rna_Space_type;
BoolPropertyRNA rna_Space_show_locked_time;


extern CollectionPropertyRNA rna_Space_rna_properties;
extern PointerPropertyRNA rna_Space_rna_type;
extern EnumPropertyRNA rna_Space_type;
extern BoolPropertyRNA rna_Space_show_locked_time;

PointerPropertyRNA rna_SpaceImageEditor_image;
PointerPropertyRNA rna_SpaceImageEditor_image_user;
PointerPropertyRNA rna_SpaceImageEditor_scopes;
BoolPropertyRNA rna_SpaceImageEditor_use_image_pin;
PointerPropertyRNA rna_SpaceImageEditor_sample_histogram;
FloatPropertyRNA rna_SpaceImageEditor_zoom;
BoolPropertyRNA rna_SpaceImageEditor_show_repeat;
BoolPropertyRNA rna_SpaceImageEditor_show_grease_pencil;
EnumPropertyRNA rna_SpaceImageEditor_draw_channels;
PointerPropertyRNA rna_SpaceImageEditor_uv_editor;
EnumPropertyRNA rna_SpaceImageEditor_mode;
FloatPropertyRNA rna_SpaceImageEditor_cursor_location;
EnumPropertyRNA rna_SpaceImageEditor_pivot_point;
PointerPropertyRNA rna_SpaceImageEditor_grease_pencil;
BoolPropertyRNA rna_SpaceImageEditor_use_realtime_update;
BoolPropertyRNA rna_SpaceImageEditor_show_render;
BoolPropertyRNA rna_SpaceImageEditor_show_paint;
BoolPropertyRNA rna_SpaceImageEditor_show_uvedit;
BoolPropertyRNA rna_SpaceImageEditor_show_maskedit;
PointerPropertyRNA rna_SpaceImageEditor_mask;
EnumPropertyRNA rna_SpaceImageEditor_mask_draw_type;
BoolPropertyRNA rna_SpaceImageEditor_show_mask_smooth;
BoolPropertyRNA rna_SpaceImageEditor_show_mask_overlay;
EnumPropertyRNA rna_SpaceImageEditor_mask_overlay_mode;


CollectionPropertyRNA rna_SpaceUVEditor_rna_properties;
PointerPropertyRNA rna_SpaceUVEditor_rna_type;
EnumPropertyRNA rna_SpaceUVEditor_sticky_select_mode;
EnumPropertyRNA rna_SpaceUVEditor_edge_draw_type;
BoolPropertyRNA rna_SpaceUVEditor_show_smooth_edges;
BoolPropertyRNA rna_SpaceUVEditor_show_stretch;
EnumPropertyRNA rna_SpaceUVEditor_draw_stretch_type;
BoolPropertyRNA rna_SpaceUVEditor_show_modified_edges;
BoolPropertyRNA rna_SpaceUVEditor_show_other_objects;
BoolPropertyRNA rna_SpaceUVEditor_show_texpaint;
BoolPropertyRNA rna_SpaceUVEditor_show_normalized_coords;
BoolPropertyRNA rna_SpaceUVEditor_show_faces;
BoolPropertyRNA rna_SpaceUVEditor_use_snap_to_pixels;
BoolPropertyRNA rna_SpaceUVEditor_lock_bounds;
BoolPropertyRNA rna_SpaceUVEditor_use_live_unwrap;


extern CollectionPropertyRNA rna_Space_rna_properties;
extern PointerPropertyRNA rna_Space_rna_type;
extern EnumPropertyRNA rna_Space_type;
extern BoolPropertyRNA rna_Space_show_locked_time;

EnumPropertyRNA rna_SpaceSequenceEditor_view_type;
EnumPropertyRNA rna_SpaceSequenceEditor_display_mode;
BoolPropertyRNA rna_SpaceSequenceEditor_show_frame_indicator;
BoolPropertyRNA rna_SpaceSequenceEditor_show_frames;
BoolPropertyRNA rna_SpaceSequenceEditor_use_marker_sync;
BoolPropertyRNA rna_SpaceSequenceEditor_show_separate_color;
BoolPropertyRNA rna_SpaceSequenceEditor_show_safe_margin;
BoolPropertyRNA rna_SpaceSequenceEditor_show_seconds;
BoolPropertyRNA rna_SpaceSequenceEditor_show_grease_pencil;
IntPropertyRNA rna_SpaceSequenceEditor_display_channel;
EnumPropertyRNA rna_SpaceSequenceEditor_preview_channels;
IntPropertyRNA rna_SpaceSequenceEditor_draw_overexposed;
EnumPropertyRNA rna_SpaceSequenceEditor_proxy_render_size;
PointerPropertyRNA rna_SpaceSequenceEditor_grease_pencil;
EnumPropertyRNA rna_SpaceSequenceEditor_overlay_type;


extern CollectionPropertyRNA rna_Space_rna_properties;
extern PointerPropertyRNA rna_Space_rna_type;
extern EnumPropertyRNA rna_Space_type;
extern BoolPropertyRNA rna_Space_show_locked_time;

PointerPropertyRNA rna_SpaceTextEditor_text;
BoolPropertyRNA rna_SpaceTextEditor_show_word_wrap;
BoolPropertyRNA rna_SpaceTextEditor_show_line_numbers;
BoolPropertyRNA rna_SpaceTextEditor_show_syntax_highlight;
BoolPropertyRNA rna_SpaceTextEditor_show_line_highlight;
IntPropertyRNA rna_SpaceTextEditor_tab_width;
IntPropertyRNA rna_SpaceTextEditor_font_size;
BoolPropertyRNA rna_SpaceTextEditor_show_margin;
IntPropertyRNA rna_SpaceTextEditor_margin_column;
IntPropertyRNA rna_SpaceTextEditor_top;
IntPropertyRNA rna_SpaceTextEditor_visible_lines;
BoolPropertyRNA rna_SpaceTextEditor_use_overwrite;
BoolPropertyRNA rna_SpaceTextEditor_use_live_edit;
BoolPropertyRNA rna_SpaceTextEditor_use_find_all;
BoolPropertyRNA rna_SpaceTextEditor_use_find_wrap;
BoolPropertyRNA rna_SpaceTextEditor_use_match_case;
StringPropertyRNA rna_SpaceTextEditor_find_text;
StringPropertyRNA rna_SpaceTextEditor_replace_text;


CollectionPropertyRNA rna_FileSelectParams_rna_properties;
PointerPropertyRNA rna_FileSelectParams_rna_type;
StringPropertyRNA rna_FileSelectParams_title;
StringPropertyRNA rna_FileSelectParams_directory;
StringPropertyRNA rna_FileSelectParams_filename;
EnumPropertyRNA rna_FileSelectParams_display_type;
BoolPropertyRNA rna_FileSelectParams_use_filter;
BoolPropertyRNA rna_FileSelectParams_show_hidden;
EnumPropertyRNA rna_FileSelectParams_sort_method;
BoolPropertyRNA rna_FileSelectParams_use_filter_image;
BoolPropertyRNA rna_FileSelectParams_use_filter_blender;
BoolPropertyRNA rna_FileSelectParams_use_filter_backup;
BoolPropertyRNA rna_FileSelectParams_use_filter_movie;
BoolPropertyRNA rna_FileSelectParams_use_filter_script;
BoolPropertyRNA rna_FileSelectParams_use_filter_font;
BoolPropertyRNA rna_FileSelectParams_use_filter_sound;
BoolPropertyRNA rna_FileSelectParams_use_filter_text;
BoolPropertyRNA rna_FileSelectParams_use_filter_folder;
StringPropertyRNA rna_FileSelectParams_filter_glob;


extern CollectionPropertyRNA rna_Space_rna_properties;
extern PointerPropertyRNA rna_Space_rna_type;
extern EnumPropertyRNA rna_Space_type;
extern BoolPropertyRNA rna_Space_show_locked_time;

PointerPropertyRNA rna_SpaceFileBrowser_params;
PointerPropertyRNA rna_SpaceFileBrowser_active_operator;
PointerPropertyRNA rna_SpaceFileBrowser_operator;


extern CollectionPropertyRNA rna_Space_rna_properties;
extern PointerPropertyRNA rna_Space_rna_type;
extern EnumPropertyRNA rna_Space_type;
extern BoolPropertyRNA rna_Space_show_locked_time;

EnumPropertyRNA rna_SpaceOutliner_display_mode;
StringPropertyRNA rna_SpaceOutliner_filter_text;
BoolPropertyRNA rna_SpaceOutliner_use_filter_case_sensitive;
BoolPropertyRNA rna_SpaceOutliner_use_filter_complete;
BoolPropertyRNA rna_SpaceOutliner_show_restrict_columns;


CollectionPropertyRNA rna_BackgroundImage_rna_properties;
PointerPropertyRNA rna_BackgroundImage_rna_type;
EnumPropertyRNA rna_BackgroundImage_source;
PointerPropertyRNA rna_BackgroundImage_image;
PointerPropertyRNA rna_BackgroundImage_clip;
PointerPropertyRNA rna_BackgroundImage_image_user;
PointerPropertyRNA rna_BackgroundImage_clip_user;
FloatPropertyRNA rna_BackgroundImage_offset_x;
FloatPropertyRNA rna_BackgroundImage_offset_y;
FloatPropertyRNA rna_BackgroundImage_size;
FloatPropertyRNA rna_BackgroundImage_opacity;
EnumPropertyRNA rna_BackgroundImage_view_axis;
BoolPropertyRNA rna_BackgroundImage_show_expanded;
BoolPropertyRNA rna_BackgroundImage_use_camera_clip;
BoolPropertyRNA rna_BackgroundImage_show_background_image;
BoolPropertyRNA rna_BackgroundImage_show_on_foreground;
EnumPropertyRNA rna_BackgroundImage_draw_depth;
EnumPropertyRNA rna_BackgroundImage_frame_method;


extern CollectionPropertyRNA rna_Space_rna_properties;
extern PointerPropertyRNA rna_Space_rna_type;
extern EnumPropertyRNA rna_Space_type;
extern BoolPropertyRNA rna_Space_show_locked_time;

PointerPropertyRNA rna_SpaceView3D_camera;
BoolPropertyRNA rna_SpaceView3D_use_render_border;
FloatPropertyRNA rna_SpaceView3D_render_border_min_x;
FloatPropertyRNA rna_SpaceView3D_render_border_min_y;
FloatPropertyRNA rna_SpaceView3D_render_border_max_x;
FloatPropertyRNA rna_SpaceView3D_render_border_max_y;
PointerPropertyRNA rna_SpaceView3D_lock_object;
StringPropertyRNA rna_SpaceView3D_lock_bone;
BoolPropertyRNA rna_SpaceView3D_lock_cursor;
EnumPropertyRNA rna_SpaceView3D_viewport_shade;
PointerPropertyRNA rna_SpaceView3D_local_view;
FloatPropertyRNA rna_SpaceView3D_cursor_location;
FloatPropertyRNA rna_SpaceView3D_lens;
FloatPropertyRNA rna_SpaceView3D_clip_start;
FloatPropertyRNA rna_SpaceView3D_clip_end;
FloatPropertyRNA rna_SpaceView3D_grid_scale;
IntPropertyRNA rna_SpaceView3D_grid_lines;
IntPropertyRNA rna_SpaceView3D_grid_subdivisions;
FloatPropertyRNA rna_SpaceView3D_grid_scale_unit;
BoolPropertyRNA rna_SpaceView3D_show_floor;
BoolPropertyRNA rna_SpaceView3D_show_axis_x;
BoolPropertyRNA rna_SpaceView3D_show_axis_y;
BoolPropertyRNA rna_SpaceView3D_show_axis_z;
BoolPropertyRNA rna_SpaceView3D_show_outline_selected;
BoolPropertyRNA rna_SpaceView3D_show_all_objects_origin;
BoolPropertyRNA rna_SpaceView3D_show_relationship_lines;
BoolPropertyRNA rna_SpaceView3D_show_grease_pencil;
BoolPropertyRNA rna_SpaceView3D_show_textured_solid;
BoolPropertyRNA rna_SpaceView3D_show_backface_culling;
BoolPropertyRNA rna_SpaceView3D_show_textured_shadeless;
BoolPropertyRNA rna_SpaceView3D_show_occlude_wire;
BoolPropertyRNA rna_SpaceView3D_lock_camera;
BoolPropertyRNA rna_SpaceView3D_show_only_render;
BoolPropertyRNA rna_SpaceView3D_use_occlude_geometry;
CollectionPropertyRNA rna_SpaceView3D_background_images;
BoolPropertyRNA rna_SpaceView3D_show_background_images;
EnumPropertyRNA rna_SpaceView3D_pivot_point;
BoolPropertyRNA rna_SpaceView3D_use_pivot_point_align;
BoolPropertyRNA rna_SpaceView3D_show_manipulator;
EnumPropertyRNA rna_SpaceView3D_transform_manipulators;
EnumPropertyRNA rna_SpaceView3D_transform_orientation;
PointerPropertyRNA rna_SpaceView3D_current_orientation;
BoolPropertyRNA rna_SpaceView3D_lock_camera_and_layers;
BoolPropertyRNA rna_SpaceView3D_layers;
BoolPropertyRNA rna_SpaceView3D_layers_local_view;
BoolPropertyRNA rna_SpaceView3D_layers_used;
PointerPropertyRNA rna_SpaceView3D_region_3d;
CollectionPropertyRNA rna_SpaceView3D_region_quadviews;
BoolPropertyRNA rna_SpaceView3D_show_reconstruction;
FloatPropertyRNA rna_SpaceView3D_tracks_draw_size;
EnumPropertyRNA rna_SpaceView3D_tracks_draw_type;
BoolPropertyRNA rna_SpaceView3D_show_camera_path;
BoolPropertyRNA rna_SpaceView3D_show_bundle_names;
BoolPropertyRNA rna_SpaceView3D_use_matcap;
EnumPropertyRNA rna_SpaceView3D_matcap_icon;


CollectionPropertyRNA rna_BackgroundImages_rna_properties;
PointerPropertyRNA rna_BackgroundImages_rna_type;

extern FunctionRNA rna_BackgroundImages_new_func;
extern PointerPropertyRNA rna_BackgroundImages_new_image;

extern FunctionRNA rna_BackgroundImages_remove_func;
extern PointerPropertyRNA rna_BackgroundImages_remove_image;

extern FunctionRNA rna_BackgroundImages_clear_func;


CollectionPropertyRNA rna_RegionView3D_rna_properties;
PointerPropertyRNA rna_RegionView3D_rna_type;
BoolPropertyRNA rna_RegionView3D_lock_rotation;
BoolPropertyRNA rna_RegionView3D_show_sync_view;
BoolPropertyRNA rna_RegionView3D_use_box_clip;
FloatPropertyRNA rna_RegionView3D_perspective_matrix;
FloatPropertyRNA rna_RegionView3D_view_matrix;
EnumPropertyRNA rna_RegionView3D_view_perspective;
BoolPropertyRNA rna_RegionView3D_is_perspective;
FloatPropertyRNA rna_RegionView3D_view_location;
FloatPropertyRNA rna_RegionView3D_view_rotation;
FloatPropertyRNA rna_RegionView3D_view_distance;
FloatPropertyRNA rna_RegionView3D_view_camera_zoom;
FloatPropertyRNA rna_RegionView3D_view_camera_offset;

extern FunctionRNA rna_RegionView3D_update_func;


extern CollectionPropertyRNA rna_Space_rna_properties;
extern PointerPropertyRNA rna_Space_rna_type;
extern EnumPropertyRNA rna_Space_type;
extern BoolPropertyRNA rna_Space_show_locked_time;

EnumPropertyRNA rna_SpaceProperties_context;
EnumPropertyRNA rna_SpaceProperties_align;
EnumPropertyRNA rna_SpaceProperties_texture_context;
BoolPropertyRNA rna_SpaceProperties_use_limited_texture_context;
PointerPropertyRNA rna_SpaceProperties_pin_id;
BoolPropertyRNA rna_SpaceProperties_use_pin_id;


extern CollectionPropertyRNA rna_Space_rna_properties;
extern PointerPropertyRNA rna_Space_rna_type;
extern EnumPropertyRNA rna_Space_type;
extern BoolPropertyRNA rna_Space_show_locked_time;

PointerPropertyRNA rna_SpaceDopeSheetEditor_action;
EnumPropertyRNA rna_SpaceDopeSheetEditor_mode;
BoolPropertyRNA rna_SpaceDopeSheetEditor_show_seconds;
BoolPropertyRNA rna_SpaceDopeSheetEditor_show_frame_indicator;
BoolPropertyRNA rna_SpaceDopeSheetEditor_show_sliders;
BoolPropertyRNA rna_SpaceDopeSheetEditor_show_pose_markers;
BoolPropertyRNA rna_SpaceDopeSheetEditor_show_group_colors;
BoolPropertyRNA rna_SpaceDopeSheetEditor_use_auto_merge_keyframes;
BoolPropertyRNA rna_SpaceDopeSheetEditor_use_realtime_update;
BoolPropertyRNA rna_SpaceDopeSheetEditor_use_marker_sync;
PointerPropertyRNA rna_SpaceDopeSheetEditor_dopesheet;
EnumPropertyRNA rna_SpaceDopeSheetEditor_auto_snap;


extern CollectionPropertyRNA rna_Space_rna_properties;
extern PointerPropertyRNA rna_Space_rna_type;
extern EnumPropertyRNA rna_Space_type;
extern BoolPropertyRNA rna_Space_show_locked_time;

EnumPropertyRNA rna_SpaceGraphEditor_mode;
BoolPropertyRNA rna_SpaceGraphEditor_show_seconds;
BoolPropertyRNA rna_SpaceGraphEditor_show_frame_indicator;
BoolPropertyRNA rna_SpaceGraphEditor_show_sliders;
BoolPropertyRNA rna_SpaceGraphEditor_show_handles;
BoolPropertyRNA rna_SpaceGraphEditor_use_only_selected_curves_handles;
BoolPropertyRNA rna_SpaceGraphEditor_use_only_selected_keyframe_handles;
BoolPropertyRNA rna_SpaceGraphEditor_use_beauty_drawing;
BoolPropertyRNA rna_SpaceGraphEditor_show_group_colors;
BoolPropertyRNA rna_SpaceGraphEditor_use_auto_merge_keyframes;
BoolPropertyRNA rna_SpaceGraphEditor_use_realtime_update;
BoolPropertyRNA rna_SpaceGraphEditor_show_cursor;
FloatPropertyRNA rna_SpaceGraphEditor_cursor_position_y;
EnumPropertyRNA rna_SpaceGraphEditor_pivot_point;
PointerPropertyRNA rna_SpaceGraphEditor_dopesheet;
EnumPropertyRNA rna_SpaceGraphEditor_auto_snap;
BoolPropertyRNA rna_SpaceGraphEditor_has_ghost_curves;
BoolPropertyRNA rna_SpaceGraphEditor_use_normalization;
BoolPropertyRNA rna_SpaceGraphEditor_use_auto_normalization;


extern CollectionPropertyRNA rna_Space_rna_properties;
extern PointerPropertyRNA rna_Space_rna_type;
extern EnumPropertyRNA rna_Space_type;
extern BoolPropertyRNA rna_Space_show_locked_time;

BoolPropertyRNA rna_SpaceNLA_show_seconds;
BoolPropertyRNA rna_SpaceNLA_show_frame_indicator;
BoolPropertyRNA rna_SpaceNLA_show_strip_curves;
BoolPropertyRNA rna_SpaceNLA_use_realtime_update;
PointerPropertyRNA rna_SpaceNLA_dopesheet;
EnumPropertyRNA rna_SpaceNLA_auto_snap;


extern CollectionPropertyRNA rna_Space_rna_properties;
extern PointerPropertyRNA rna_Space_rna_type;
extern EnumPropertyRNA rna_Space_type;
extern BoolPropertyRNA rna_Space_show_locked_time;

BoolPropertyRNA rna_SpaceTimeline_show_frame_indicator;
BoolPropertyRNA rna_SpaceTimeline_show_seconds;
BoolPropertyRNA rna_SpaceTimeline_show_cache;
BoolPropertyRNA rna_SpaceTimeline_cache_softbody;
BoolPropertyRNA rna_SpaceTimeline_cache_particles;
BoolPropertyRNA rna_SpaceTimeline_cache_cloth;
BoolPropertyRNA rna_SpaceTimeline_cache_smoke;
BoolPropertyRNA rna_SpaceTimeline_cache_dynamicpaint;
BoolPropertyRNA rna_SpaceTimeline_cache_rigidbody;


extern CollectionPropertyRNA rna_Space_rna_properties;
extern PointerPropertyRNA rna_Space_rna_type;
extern EnumPropertyRNA rna_Space_type;
extern BoolPropertyRNA rna_Space_show_locked_time;

IntPropertyRNA rna_SpaceConsole_font_size;
IntPropertyRNA rna_SpaceConsole_select_start;
IntPropertyRNA rna_SpaceConsole_select_end;
StringPropertyRNA rna_SpaceConsole_prompt;
StringPropertyRNA rna_SpaceConsole_language;
CollectionPropertyRNA rna_SpaceConsole_history;
CollectionPropertyRNA rna_SpaceConsole_scrollback;


CollectionPropertyRNA rna_ConsoleLine_rna_properties;
PointerPropertyRNA rna_ConsoleLine_rna_type;
StringPropertyRNA rna_ConsoleLine_body;
IntPropertyRNA rna_ConsoleLine_current_character;
EnumPropertyRNA rna_ConsoleLine_type;


extern CollectionPropertyRNA rna_Space_rna_properties;
extern PointerPropertyRNA rna_Space_rna_type;
extern EnumPropertyRNA rna_Space_type;
extern BoolPropertyRNA rna_Space_show_locked_time;

BoolPropertyRNA rna_SpaceInfo_show_report_debug;
BoolPropertyRNA rna_SpaceInfo_show_report_info;
BoolPropertyRNA rna_SpaceInfo_show_report_operator;
BoolPropertyRNA rna_SpaceInfo_show_report_warning;
BoolPropertyRNA rna_SpaceInfo_show_report_error;


extern CollectionPropertyRNA rna_Space_rna_properties;
extern PointerPropertyRNA rna_Space_rna_type;
extern EnumPropertyRNA rna_Space_type;
extern BoolPropertyRNA rna_Space_show_locked_time;

EnumPropertyRNA rna_SpaceUserPreferences_filter_type;
StringPropertyRNA rna_SpaceUserPreferences_filter_text;


CollectionPropertyRNA rna_NodeTreePath_rna_properties;
PointerPropertyRNA rna_NodeTreePath_rna_type;
PointerPropertyRNA rna_NodeTreePath_node_tree;


extern CollectionPropertyRNA rna_Space_rna_properties;
extern PointerPropertyRNA rna_Space_rna_type;
extern EnumPropertyRNA rna_Space_type;
extern BoolPropertyRNA rna_Space_show_locked_time;

EnumPropertyRNA rna_SpaceNodeEditor_tree_type;
EnumPropertyRNA rna_SpaceNodeEditor_texture_type;
EnumPropertyRNA rna_SpaceNodeEditor_shader_type;
PointerPropertyRNA rna_SpaceNodeEditor_id;
PointerPropertyRNA rna_SpaceNodeEditor_id_from;
CollectionPropertyRNA rna_SpaceNodeEditor_path;
PointerPropertyRNA rna_SpaceNodeEditor_node_tree;
PointerPropertyRNA rna_SpaceNodeEditor_edit_tree;
BoolPropertyRNA rna_SpaceNodeEditor_pin;
BoolPropertyRNA rna_SpaceNodeEditor_show_backdrop;
BoolPropertyRNA rna_SpaceNodeEditor_show_grease_pencil;
BoolPropertyRNA rna_SpaceNodeEditor_use_auto_render;
FloatPropertyRNA rna_SpaceNodeEditor_backdrop_zoom;
FloatPropertyRNA rna_SpaceNodeEditor_backdrop_x;
FloatPropertyRNA rna_SpaceNodeEditor_backdrop_y;
EnumPropertyRNA rna_SpaceNodeEditor_backdrop_channels;
BoolPropertyRNA rna_SpaceNodeEditor_show_highlight;
FloatPropertyRNA rna_SpaceNodeEditor_cursor_location;

extern FunctionRNA rna_SpaceNodeEditor_cursor_location_from_region_func;
extern IntPropertyRNA rna_SpaceNodeEditor_cursor_location_from_region_x;
extern IntPropertyRNA rna_SpaceNodeEditor_cursor_location_from_region_y;



CollectionPropertyRNA rna_SpaceNodeEditorPath_rna_properties;
PointerPropertyRNA rna_SpaceNodeEditorPath_rna_type;
StringPropertyRNA rna_SpaceNodeEditorPath_to_string;

extern FunctionRNA rna_SpaceNodeEditorPath_clear_func;
extern FunctionRNA rna_SpaceNodeEditorPath_start_func;
extern PointerPropertyRNA rna_SpaceNodeEditorPath_start_node_tree;

extern FunctionRNA rna_SpaceNodeEditorPath_append_func;
extern PointerPropertyRNA rna_SpaceNodeEditorPath_append_node_tree;
extern PointerPropertyRNA rna_SpaceNodeEditorPath_append_node;

extern FunctionRNA rna_SpaceNodeEditorPath_pop_func;


extern CollectionPropertyRNA rna_Space_rna_properties;
extern PointerPropertyRNA rna_Space_rna_type;
extern EnumPropertyRNA rna_Space_type;
extern BoolPropertyRNA rna_Space_show_locked_time;

BoolPropertyRNA rna_SpaceLogicEditor_show_sensors_selected_objects;
BoolPropertyRNA rna_SpaceLogicEditor_show_sensors_active_object;
BoolPropertyRNA rna_SpaceLogicEditor_show_sensors_linked_controller;
BoolPropertyRNA rna_SpaceLogicEditor_show_sensors_active_states;
BoolPropertyRNA rna_SpaceLogicEditor_show_controllers_selected_objects;
BoolPropertyRNA rna_SpaceLogicEditor_show_controllers_active_object;
BoolPropertyRNA rna_SpaceLogicEditor_show_controllers_linked_controller;
BoolPropertyRNA rna_SpaceLogicEditor_show_actuators_selected_objects;
BoolPropertyRNA rna_SpaceLogicEditor_show_actuators_active_object;
BoolPropertyRNA rna_SpaceLogicEditor_show_actuators_linked_controller;
BoolPropertyRNA rna_SpaceLogicEditor_show_actuators_active_states;


extern CollectionPropertyRNA rna_Space_rna_properties;
extern PointerPropertyRNA rna_Space_rna_type;
extern EnumPropertyRNA rna_Space_type;
extern BoolPropertyRNA rna_Space_show_locked_time;

PointerPropertyRNA rna_SpaceClipEditor_clip;
PointerPropertyRNA rna_SpaceClipEditor_clip_user;
PointerPropertyRNA rna_SpaceClipEditor_mask;
EnumPropertyRNA rna_SpaceClipEditor_mask_draw_type;
BoolPropertyRNA rna_SpaceClipEditor_show_mask_smooth;
BoolPropertyRNA rna_SpaceClipEditor_show_mask_overlay;
EnumPropertyRNA rna_SpaceClipEditor_mask_overlay_mode;
EnumPropertyRNA rna_SpaceClipEditor_mode;
EnumPropertyRNA rna_SpaceClipEditor_view;
BoolPropertyRNA rna_SpaceClipEditor_show_marker_pattern;
BoolPropertyRNA rna_SpaceClipEditor_show_marker_search;
BoolPropertyRNA rna_SpaceClipEditor_lock_selection;
BoolPropertyRNA rna_SpaceClipEditor_lock_time_cursor;
BoolPropertyRNA rna_SpaceClipEditor_show_track_path;
IntPropertyRNA rna_SpaceClipEditor_path_length;
BoolPropertyRNA rna_SpaceClipEditor_show_tiny_markers;
BoolPropertyRNA rna_SpaceClipEditor_show_bundles;
BoolPropertyRNA rna_SpaceClipEditor_use_mute_footage;
BoolPropertyRNA rna_SpaceClipEditor_show_disabled;
PointerPropertyRNA rna_SpaceClipEditor_scopes;
BoolPropertyRNA rna_SpaceClipEditor_show_names;
BoolPropertyRNA rna_SpaceClipEditor_show_grid;
BoolPropertyRNA rna_SpaceClipEditor_show_stable;
BoolPropertyRNA rna_SpaceClipEditor_use_manual_calibration;
BoolPropertyRNA rna_SpaceClipEditor_show_grease_pencil;
BoolPropertyRNA rna_SpaceClipEditor_show_filters;
BoolPropertyRNA rna_SpaceClipEditor_show_graph_frames;
BoolPropertyRNA rna_SpaceClipEditor_show_graph_tracks_motion;
BoolPropertyRNA rna_SpaceClipEditor_show_graph_tracks_error;
BoolPropertyRNA rna_SpaceClipEditor_show_graph_only_selected;
BoolPropertyRNA rna_SpaceClipEditor_show_graph_hidden;
BoolPropertyRNA rna_SpaceClipEditor_show_red_channel;
BoolPropertyRNA rna_SpaceClipEditor_show_green_channel;
BoolPropertyRNA rna_SpaceClipEditor_show_blue_channel;
BoolPropertyRNA rna_SpaceClipEditor_use_grayscale_preview;
BoolPropertyRNA rna_SpaceClipEditor_show_seconds;
EnumPropertyRNA rna_SpaceClipEditor_grease_pencil_source;
EnumPropertyRNA rna_SpaceClipEditor_pivot_point;

static PointerRNA Space_rna_properties_get(CollectionPropertyIterator *iter)
{
	return rna_builtin_properties_get(iter);
}

void Space_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

	memset(iter, 0, sizeof(*iter));
	iter->parent = *ptr;
	iter->prop = (PropertyRNA *)&rna_Space_rna_properties;

	rna_builtin_properties_begin(iter, ptr);

	if (iter->valid)
		iter->ptr = Space_rna_properties_get(iter);
}

void Space_rna_properties_next(CollectionPropertyIterator *iter)
{
	rna_builtin_properties_next(iter);

	if (iter->valid)
		iter->ptr = Space_rna_properties_get(iter);
}

void Space_rna_properties_end(CollectionPropertyIterator *iter)
{
	rna_iterator_listbase_end(iter);
}

int Space_rna_properties_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
	return rna_builtin_properties_lookup_string(ptr, key, r_ptr);
}

PointerRNA Space_rna_type_get(PointerRNA *ptr)
{
	return rna_builtin_type_get(ptr);
}

int Space_type_get(PointerRNA *ptr)
{
	SpaceLink *data = (SpaceLink *)(ptr->data);
	return (int)(data->spacetype);
}

int Space_show_locked_time_get(PointerRNA *ptr)
{
	return rna_Space_view2d_sync_get(ptr);
}

void Space_show_locked_time_set(PointerRNA *ptr, int value)
{
	rna_Space_view2d_sync_set(ptr, value);
}

PointerRNA SpaceImageEditor_image_get(PointerRNA *ptr)
{
	SpaceImage *data = (SpaceImage *)(ptr->data);
	return rna_pointer_inherit_refine(ptr, &RNA_Image, data->image);
}

void SpaceImageEditor_image_set(PointerRNA *ptr, PointerRNA value)
{
	rna_SpaceImageEditor_image_set(ptr, value);
}

PointerRNA SpaceImageEditor_image_user_get(PointerRNA *ptr)
{
	SpaceImage *data = (SpaceImage *)(ptr->data);
	return rna_pointer_inherit_refine(ptr, &RNA_ImageUser, &data->iuser);
}

PointerRNA SpaceImageEditor_scopes_get(PointerRNA *ptr)
{
	SpaceImage *data = (SpaceImage *)(ptr->data);
	return rna_pointer_inherit_refine(ptr, &RNA_Scopes, &data->scopes);
}

int SpaceImageEditor_use_image_pin_get(PointerRNA *ptr)
{
	SpaceImage *data = (SpaceImage *)(ptr->data);
	return (int)(data->pin);
}

void SpaceImageEditor_use_image_pin_set(PointerRNA *ptr, int value)
{
	SpaceImage *data = (SpaceImage *)(ptr->data);
	data->pin = value;
}

PointerRNA SpaceImageEditor_sample_histogram_get(PointerRNA *ptr)
{
	SpaceImage *data = (SpaceImage *)(ptr->data);
	return rna_pointer_inherit_refine(ptr, &RNA_Histogram, &data->sample_line_hist);
}

void SpaceImageEditor_zoom_get(PointerRNA *ptr, float values[2])
{
	rna_SpaceImageEditor_zoom_get(ptr, values);
}

int SpaceImageEditor_show_repeat_get(PointerRNA *ptr)
{
	SpaceImage *data = (SpaceImage *)(ptr->data);
	return (((data->flag) & 524288) != 0);
}

void SpaceImageEditor_show_repeat_set(PointerRNA *ptr, int value)
{
	SpaceImage *data = (SpaceImage *)(ptr->data);
	if (value) data->flag |= 524288;
	else data->flag &= ~524288;
}

int SpaceImageEditor_show_grease_pencil_get(PointerRNA *ptr)
{
	SpaceImage *data = (SpaceImage *)(ptr->data);
	return (((data->flag) & 4194304) != 0);
}

void SpaceImageEditor_show_grease_pencil_set(PointerRNA *ptr, int value)
{
	SpaceImage *data = (SpaceImage *)(ptr->data);
	if (value) data->flag |= 4194304;
	else data->flag &= ~4194304;
}

int SpaceImageEditor_draw_channels_get(PointerRNA *ptr)
{
	SpaceImage *data = (SpaceImage *)(ptr->data);
	return ((data->flag) & 28672);
}

void SpaceImageEditor_draw_channels_set(PointerRNA *ptr, int value)
{
	SpaceImage *data = (SpaceImage *)(ptr->data);
	data->flag &= ~28672;
	data->flag |= value;
}

PointerRNA SpaceImageEditor_uv_editor_get(PointerRNA *ptr)
{
	return rna_SpaceImageEditor_uvedit_get(ptr);
}

int SpaceImageEditor_mode_get(PointerRNA *ptr)
{
	SpaceImage *data = (SpaceImage *)(ptr->data);
	return (int)(data->mode);
}

void SpaceImageEditor_mode_set(PointerRNA *ptr, int value)
{
	SpaceImage *data = (SpaceImage *)(ptr->data);
	data->mode = value;
}

void SpaceImageEditor_cursor_location_get(PointerRNA *ptr, float values[2])
{
	rna_SpaceImageEditor_cursor_location_get(ptr, values);
}

void SpaceImageEditor_cursor_location_set(PointerRNA *ptr, const float values[2])
{
	rna_SpaceImageEditor_cursor_location_set(ptr, values);
}

int SpaceImageEditor_pivot_point_get(PointerRNA *ptr)
{
	SpaceImage *data = (SpaceImage *)(ptr->data);
	return (int)(data->around);
}

void SpaceImageEditor_pivot_point_set(PointerRNA *ptr, int value)
{
	SpaceImage *data = (SpaceImage *)(ptr->data);
	data->around = value;
}

PointerRNA SpaceImageEditor_grease_pencil_get(PointerRNA *ptr)
{
	SpaceImage *data = (SpaceImage *)(ptr->data);
	return rna_pointer_inherit_refine(ptr, &RNA_GreasePencil, data->gpd);
}

void SpaceImageEditor_grease_pencil_set(PointerRNA *ptr, PointerRNA value)
{
	SpaceImage *data = (SpaceImage *)(ptr->data);

	if (data->gpd)
		id_us_min((ID *)data->gpd);
	if (value.data)
		id_us_plus((ID *)value.data);

	data->gpd = value.data;
}

int SpaceImageEditor_use_realtime_update_get(PointerRNA *ptr)
{
	SpaceImage *data = (SpaceImage *)(ptr->data);
	return (int)(data->lock);
}

void SpaceImageEditor_use_realtime_update_set(PointerRNA *ptr, int value)
{
	SpaceImage *data = (SpaceImage *)(ptr->data);
	data->lock = value;
}

int SpaceImageEditor_show_render_get(PointerRNA *ptr)
{
	return rna_SpaceImageEditor_show_render_get(ptr);
}

int SpaceImageEditor_show_paint_get(PointerRNA *ptr)
{
	return rna_SpaceImageEditor_show_paint_get(ptr);
}

int SpaceImageEditor_show_uvedit_get(PointerRNA *ptr)
{
	return rna_SpaceImageEditor_show_uvedit_get(ptr);
}

int SpaceImageEditor_show_maskedit_get(PointerRNA *ptr)
{
	return rna_SpaceImageEditor_show_maskedit_get(ptr);
}

PointerRNA SpaceImageEditor_mask_get(PointerRNA *ptr)
{
	SpaceImage *data = (SpaceImage *)(ptr->data);
	return rna_pointer_inherit_refine(ptr, &RNA_Mask, data->mask_info.mask);
}

void SpaceImageEditor_mask_set(PointerRNA *ptr, PointerRNA value)
{
	rna_SpaceImageEditor_mask_set(ptr, value);
}

int SpaceImageEditor_mask_draw_type_get(PointerRNA *ptr)
{
	SpaceImage *data = (SpaceImage *)(ptr->data);
	return (int)(data->mask_info.draw_type);
}

void SpaceImageEditor_mask_draw_type_set(PointerRNA *ptr, int value)
{
	SpaceImage *data = (SpaceImage *)(ptr->data);
	data->mask_info.draw_type = value;
}

int SpaceImageEditor_show_mask_smooth_get(PointerRNA *ptr)
{
	SpaceImage *data = (SpaceImage *)(ptr->data);
	return (((data->mask_info.draw_flag) & 1) != 0);
}

void SpaceImageEditor_show_mask_smooth_set(PointerRNA *ptr, int value)
{
	SpaceImage *data = (SpaceImage *)(ptr->data);
	if (value) data->mask_info.draw_flag |= 1;
	else data->mask_info.draw_flag &= ~1;
}

int SpaceImageEditor_show_mask_overlay_get(PointerRNA *ptr)
{
	SpaceImage *data = (SpaceImage *)(ptr->data);
	return (((data->mask_info.draw_flag) & 2) != 0);
}

void SpaceImageEditor_show_mask_overlay_set(PointerRNA *ptr, int value)
{
	SpaceImage *data = (SpaceImage *)(ptr->data);
	if (value) data->mask_info.draw_flag |= 2;
	else data->mask_info.draw_flag &= ~2;
}

int SpaceImageEditor_mask_overlay_mode_get(PointerRNA *ptr)
{
	SpaceImage *data = (SpaceImage *)(ptr->data);
	return (int)(data->mask_info.overlay_mode);
}

void SpaceImageEditor_mask_overlay_mode_set(PointerRNA *ptr, int value)
{
	SpaceImage *data = (SpaceImage *)(ptr->data);
	data->mask_info.overlay_mode = value;
}

static PointerRNA SpaceUVEditor_rna_properties_get(CollectionPropertyIterator *iter)
{
	return rna_builtin_properties_get(iter);
}

void SpaceUVEditor_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

	memset(iter, 0, sizeof(*iter));
	iter->parent = *ptr;
	iter->prop = (PropertyRNA *)&rna_SpaceUVEditor_rna_properties;

	rna_builtin_properties_begin(iter, ptr);

	if (iter->valid)
		iter->ptr = SpaceUVEditor_rna_properties_get(iter);
}

void SpaceUVEditor_rna_properties_next(CollectionPropertyIterator *iter)
{
	rna_builtin_properties_next(iter);

	if (iter->valid)
		iter->ptr = SpaceUVEditor_rna_properties_get(iter);
}

void SpaceUVEditor_rna_properties_end(CollectionPropertyIterator *iter)
{
	rna_iterator_listbase_end(iter);
}

int SpaceUVEditor_rna_properties_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
	return rna_builtin_properties_lookup_string(ptr, key, r_ptr);
}

PointerRNA SpaceUVEditor_rna_type_get(PointerRNA *ptr)
{
	return rna_builtin_type_get(ptr);
}

int SpaceUVEditor_sticky_select_mode_get(PointerRNA *ptr)
{
	SpaceImage *data = (SpaceImage *)(ptr->data);
	return (int)(data->sticky);
}

void SpaceUVEditor_sticky_select_mode_set(PointerRNA *ptr, int value)
{
	SpaceImage *data = (SpaceImage *)(ptr->data);
	data->sticky = value;
}

int SpaceUVEditor_edge_draw_type_get(PointerRNA *ptr)
{
	SpaceImage *data = (SpaceImage *)(ptr->data);
	return (int)(data->dt_uv);
}

void SpaceUVEditor_edge_draw_type_set(PointerRNA *ptr, int value)
{
	SpaceImage *data = (SpaceImage *)(ptr->data);
	data->dt_uv = value;
}

int SpaceUVEditor_show_smooth_edges_get(PointerRNA *ptr)
{
	SpaceImage *data = (SpaceImage *)(ptr->data);
	return (((data->flag) & 1048576) != 0);
}

void SpaceUVEditor_show_smooth_edges_set(PointerRNA *ptr, int value)
{
	SpaceImage *data = (SpaceImage *)(ptr->data);
	if (value) data->flag |= 1048576;
	else data->flag &= ~1048576;
}

int SpaceUVEditor_show_stretch_get(PointerRNA *ptr)
{
	SpaceImage *data = (SpaceImage *)(ptr->data);
	return (((data->flag) & 2097152) != 0);
}

void SpaceUVEditor_show_stretch_set(PointerRNA *ptr, int value)
{
	SpaceImage *data = (SpaceImage *)(ptr->data);
	if (value) data->flag |= 2097152;
	else data->flag &= ~2097152;
}

int SpaceUVEditor_draw_stretch_type_get(PointerRNA *ptr)
{
	SpaceImage *data = (SpaceImage *)(ptr->data);
	return (int)(data->dt_uvstretch);
}

void SpaceUVEditor_draw_stretch_type_set(PointerRNA *ptr, int value)
{
	SpaceImage *data = (SpaceImage *)(ptr->data);
	data->dt_uvstretch = value;
}

int SpaceUVEditor_show_modified_edges_get(PointerRNA *ptr)
{
	SpaceImage *data = (SpaceImage *)(ptr->data);
	return (((data->flag) & 32) != 0);
}

void SpaceUVEditor_show_modified_edges_set(PointerRNA *ptr, int value)
{
	SpaceImage *data = (SpaceImage *)(ptr->data);
	if (value) data->flag |= 32;
	else data->flag &= ~32;
}

int SpaceUVEditor_show_other_objects_get(PointerRNA *ptr)
{
	SpaceImage *data = (SpaceImage *)(ptr->data);
	return (((data->flag) & 8388608) != 0);
}

void SpaceUVEditor_show_other_objects_set(PointerRNA *ptr, int value)
{
	SpaceImage *data = (SpaceImage *)(ptr->data);
	if (value) data->flag |= 8388608;
	else data->flag &= ~8388608;
}

int SpaceUVEditor_show_texpaint_get(PointerRNA *ptr)
{
	SpaceImage *data = (SpaceImage *)(ptr->data);
	return !(((data->flag) & 33554432) != 0);
}

void SpaceUVEditor_show_texpaint_set(PointerRNA *ptr, int value)
{
	SpaceImage *data = (SpaceImage *)(ptr->data);
	if (!value) data->flag |= 33554432;
	else data->flag &= ~33554432;
}

int SpaceUVEditor_show_normalized_coords_get(PointerRNA *ptr)
{
	SpaceImage *data = (SpaceImage *)(ptr->data);
	return (((data->flag) & 512) != 0);
}

void SpaceUVEditor_show_normalized_coords_set(PointerRNA *ptr, int value)
{
	SpaceImage *data = (SpaceImage *)(ptr->data);
	if (value) data->flag |= 512;
	else data->flag &= ~512;
}

int SpaceUVEditor_show_faces_get(PointerRNA *ptr)
{
	SpaceImage *data = (SpaceImage *)(ptr->data);
	return !(((data->flag) & 16) != 0);
}

void SpaceUVEditor_show_faces_set(PointerRNA *ptr, int value)
{
	SpaceImage *data = (SpaceImage *)(ptr->data);
	if (!value) data->flag |= 16;
	else data->flag &= ~16;
}

int SpaceUVEditor_use_snap_to_pixels_get(PointerRNA *ptr)
{
	SpaceImage *data = (SpaceImage *)(ptr->data);
	return (((data->flag) & 1024) != 0);
}

void SpaceUVEditor_use_snap_to_pixels_set(PointerRNA *ptr, int value)
{
	SpaceImage *data = (SpaceImage *)(ptr->data);
	if (value) data->flag |= 1024;
	else data->flag &= ~1024;
}

int SpaceUVEditor_lock_bounds_get(PointerRNA *ptr)
{
	SpaceImage *data = (SpaceImage *)(ptr->data);
	return (((data->flag) & 4) != 0);
}

void SpaceUVEditor_lock_bounds_set(PointerRNA *ptr, int value)
{
	SpaceImage *data = (SpaceImage *)(ptr->data);
	if (value) data->flag |= 4;
	else data->flag &= ~4;
}

int SpaceUVEditor_use_live_unwrap_get(PointerRNA *ptr)
{
	SpaceImage *data = (SpaceImage *)(ptr->data);
	return (((data->flag) & 2048) != 0);
}

void SpaceUVEditor_use_live_unwrap_set(PointerRNA *ptr, int value)
{
	SpaceImage *data = (SpaceImage *)(ptr->data);
	if (value) data->flag |= 2048;
	else data->flag &= ~2048;
}

int SpaceSequenceEditor_view_type_get(PointerRNA *ptr)
{
	SpaceSeq *data = (SpaceSeq *)(ptr->data);
	return (int)(data->view);
}

void SpaceSequenceEditor_view_type_set(PointerRNA *ptr, int value)
{
	SpaceSeq *data = (SpaceSeq *)(ptr->data);
	data->view = value;
}

int SpaceSequenceEditor_display_mode_get(PointerRNA *ptr)
{
	SpaceSeq *data = (SpaceSeq *)(ptr->data);
	return (int)(data->mainb);
}

void SpaceSequenceEditor_display_mode_set(PointerRNA *ptr, int value)
{
	SpaceSeq *data = (SpaceSeq *)(ptr->data);
	data->mainb = value;
}

int SpaceSequenceEditor_show_frame_indicator_get(PointerRNA *ptr)
{
	SpaceSeq *data = (SpaceSeq *)(ptr->data);
	return !(((data->flag) & 32) != 0);
}

void SpaceSequenceEditor_show_frame_indicator_set(PointerRNA *ptr, int value)
{
	SpaceSeq *data = (SpaceSeq *)(ptr->data);
	if (!value) data->flag |= 32;
	else data->flag &= ~32;
}

int SpaceSequenceEditor_show_frames_get(PointerRNA *ptr)
{
	SpaceSeq *data = (SpaceSeq *)(ptr->data);
	return (((data->flag) & 1) != 0);
}

void SpaceSequenceEditor_show_frames_set(PointerRNA *ptr, int value)
{
	SpaceSeq *data = (SpaceSeq *)(ptr->data);
	if (value) data->flag |= 1;
	else data->flag &= ~1;
}

int SpaceSequenceEditor_use_marker_sync_get(PointerRNA *ptr)
{
	SpaceSeq *data = (SpaceSeq *)(ptr->data);
	return (((data->flag) & 2) != 0);
}

void SpaceSequenceEditor_use_marker_sync_set(PointerRNA *ptr, int value)
{
	SpaceSeq *data = (SpaceSeq *)(ptr->data);
	if (value) data->flag |= 2;
	else data->flag &= ~2;
}

int SpaceSequenceEditor_show_separate_color_get(PointerRNA *ptr)
{
	SpaceSeq *data = (SpaceSeq *)(ptr->data);
	return (((data->flag) & 4) != 0);
}

void SpaceSequenceEditor_show_separate_color_set(PointerRNA *ptr, int value)
{
	SpaceSeq *data = (SpaceSeq *)(ptr->data);
	if (value) data->flag |= 4;
	else data->flag &= ~4;
}

int SpaceSequenceEditor_show_safe_margin_get(PointerRNA *ptr)
{
	SpaceSeq *data = (SpaceSeq *)(ptr->data);
	return (((data->flag) & 8) != 0);
}

void SpaceSequenceEditor_show_safe_margin_set(PointerRNA *ptr, int value)
{
	SpaceSeq *data = (SpaceSeq *)(ptr->data);
	if (value) data->flag |= 8;
	else data->flag &= ~8;
}

int SpaceSequenceEditor_show_seconds_get(PointerRNA *ptr)
{
	SpaceSeq *data = (SpaceSeq *)(ptr->data);
	return !(((data->flag) & 1) != 0);
}

void SpaceSequenceEditor_show_seconds_set(PointerRNA *ptr, int value)
{
	SpaceSeq *data = (SpaceSeq *)(ptr->data);
	if (!value) data->flag |= 1;
	else data->flag &= ~1;
}

int SpaceSequenceEditor_show_grease_pencil_get(PointerRNA *ptr)
{
	SpaceSeq *data = (SpaceSeq *)(ptr->data);
	return (((data->flag) & 16) != 0);
}

void SpaceSequenceEditor_show_grease_pencil_set(PointerRNA *ptr, int value)
{
	SpaceSeq *data = (SpaceSeq *)(ptr->data);
	if (value) data->flag |= 16;
	else data->flag &= ~16;
}

int SpaceSequenceEditor_display_channel_get(PointerRNA *ptr)
{
	SpaceSeq *data = (SpaceSeq *)(ptr->data);
	return (int)(data->chanshown);
}

void SpaceSequenceEditor_display_channel_set(PointerRNA *ptr, int value)
{
	SpaceSeq *data = (SpaceSeq *)(ptr->data);
	data->chanshown = CLAMPIS(value, -5, 32);
}

int SpaceSequenceEditor_preview_channels_get(PointerRNA *ptr)
{
	SpaceSeq *data = (SpaceSeq *)(ptr->data);
	return ((data->flag) & 64);
}

void SpaceSequenceEditor_preview_channels_set(PointerRNA *ptr, int value)
{
	SpaceSeq *data = (SpaceSeq *)(ptr->data);
	data->flag &= ~64;
	data->flag |= value;
}

int SpaceSequenceEditor_draw_overexposed_get(PointerRNA *ptr)
{
	SpaceSeq *data = (SpaceSeq *)(ptr->data);
	return (int)(data->zebra);
}

void SpaceSequenceEditor_draw_overexposed_set(PointerRNA *ptr, int value)
{
	SpaceSeq *data = (SpaceSeq *)(ptr->data);
	data->zebra = CLAMPIS(value, 0, 110);
}

int SpaceSequenceEditor_proxy_render_size_get(PointerRNA *ptr)
{
	SpaceSeq *data = (SpaceSeq *)(ptr->data);
	return (int)(data->render_size);
}

void SpaceSequenceEditor_proxy_render_size_set(PointerRNA *ptr, int value)
{
	SpaceSeq *data = (SpaceSeq *)(ptr->data);
	data->render_size = value;
}

PointerRNA SpaceSequenceEditor_grease_pencil_get(PointerRNA *ptr)
{
	SpaceSeq *data = (SpaceSeq *)(ptr->data);
	return rna_pointer_inherit_refine(ptr, &RNA_GreasePencil, data->gpd);
}

void SpaceSequenceEditor_grease_pencil_set(PointerRNA *ptr, PointerRNA value)
{
	SpaceSeq *data = (SpaceSeq *)(ptr->data);

	if (data->gpd)
		id_us_min((ID *)data->gpd);
	if (value.data)
		id_us_plus((ID *)value.data);

	data->gpd = value.data;
}

int SpaceSequenceEditor_overlay_type_get(PointerRNA *ptr)
{
	SpaceSeq *data = (SpaceSeq *)(ptr->data);
	return (int)(data->overlay_type);
}

void SpaceSequenceEditor_overlay_type_set(PointerRNA *ptr, int value)
{
	SpaceSeq *data = (SpaceSeq *)(ptr->data);
	data->overlay_type = value;
}

PointerRNA SpaceTextEditor_text_get(PointerRNA *ptr)
{
	SpaceText *data = (SpaceText *)(ptr->data);
	return rna_pointer_inherit_refine(ptr, &RNA_Text, data->text);
}

void SpaceTextEditor_text_set(PointerRNA *ptr, PointerRNA value)
{
	rna_SpaceTextEditor_text_set(ptr, value);
}

int SpaceTextEditor_show_word_wrap_get(PointerRNA *ptr)
{
	SpaceText *data = (SpaceText *)(ptr->data);
	return (int)(data->wordwrap);
}

void SpaceTextEditor_show_word_wrap_set(PointerRNA *ptr, int value)
{
	rna_SpaceTextEditor_word_wrap_set(ptr, value);
}

int SpaceTextEditor_show_line_numbers_get(PointerRNA *ptr)
{
	SpaceText *data = (SpaceText *)(ptr->data);
	return (int)(data->showlinenrs);
}

void SpaceTextEditor_show_line_numbers_set(PointerRNA *ptr, int value)
{
	SpaceText *data = (SpaceText *)(ptr->data);
	data->showlinenrs = value;
}

int SpaceTextEditor_show_syntax_highlight_get(PointerRNA *ptr)
{
	SpaceText *data = (SpaceText *)(ptr->data);
	return (int)(data->showsyntax);
}

void SpaceTextEditor_show_syntax_highlight_set(PointerRNA *ptr, int value)
{
	SpaceText *data = (SpaceText *)(ptr->data);
	data->showsyntax = value;
}

int SpaceTextEditor_show_line_highlight_get(PointerRNA *ptr)
{
	SpaceText *data = (SpaceText *)(ptr->data);
	return (int)(data->line_hlight);
}

void SpaceTextEditor_show_line_highlight_set(PointerRNA *ptr, int value)
{
	SpaceText *data = (SpaceText *)(ptr->data);
	data->line_hlight = value;
}

int SpaceTextEditor_tab_width_get(PointerRNA *ptr)
{
	SpaceText *data = (SpaceText *)(ptr->data);
	return (int)(data->tabnumber);
}

void SpaceTextEditor_tab_width_set(PointerRNA *ptr, int value)
{
	SpaceText *data = (SpaceText *)(ptr->data);
	data->tabnumber = CLAMPIS(value, 2, 8);
}

int SpaceTextEditor_font_size_get(PointerRNA *ptr)
{
	SpaceText *data = (SpaceText *)(ptr->data);
	return (int)(data->lheight);
}

void SpaceTextEditor_font_size_set(PointerRNA *ptr, int value)
{
	SpaceText *data = (SpaceText *)(ptr->data);
	data->lheight = CLAMPIS(value, 8, 32);
}

int SpaceTextEditor_show_margin_get(PointerRNA *ptr)
{
	SpaceText *data = (SpaceText *)(ptr->data);
	return (((data->flags) & 128) != 0);
}

void SpaceTextEditor_show_margin_set(PointerRNA *ptr, int value)
{
	SpaceText *data = (SpaceText *)(ptr->data);
	if (value) data->flags |= 128;
	else data->flags &= ~128;
}

int SpaceTextEditor_margin_column_get(PointerRNA *ptr)
{
	SpaceText *data = (SpaceText *)(ptr->data);
	return (int)(data->margin_column);
}

void SpaceTextEditor_margin_column_set(PointerRNA *ptr, int value)
{
	SpaceText *data = (SpaceText *)(ptr->data);
	data->margin_column = CLAMPIS(value, 0, 1024);
}

int SpaceTextEditor_top_get(PointerRNA *ptr)
{
	SpaceText *data = (SpaceText *)(ptr->data);
	return (int)(data->top);
}

int SpaceTextEditor_visible_lines_get(PointerRNA *ptr)
{
	SpaceText *data = (SpaceText *)(ptr->data);
	return (int)(data->viewlines);
}

int SpaceTextEditor_use_overwrite_get(PointerRNA *ptr)
{
	SpaceText *data = (SpaceText *)(ptr->data);
	return (((data->overwrite) & 1) != 0);
}

void SpaceTextEditor_use_overwrite_set(PointerRNA *ptr, int value)
{
	SpaceText *data = (SpaceText *)(ptr->data);
	if (value) data->overwrite |= 1;
	else data->overwrite &= ~1;
}

int SpaceTextEditor_use_live_edit_get(PointerRNA *ptr)
{
	SpaceText *data = (SpaceText *)(ptr->data);
	return (((data->live_edit) & 1) != 0);
}

void SpaceTextEditor_use_live_edit_set(PointerRNA *ptr, int value)
{
	SpaceText *data = (SpaceText *)(ptr->data);
	if (value) data->live_edit |= 1;
	else data->live_edit &= ~1;
}

int SpaceTextEditor_use_find_all_get(PointerRNA *ptr)
{
	SpaceText *data = (SpaceText *)(ptr->data);
	return (((data->flags) & 64) != 0);
}

void SpaceTextEditor_use_find_all_set(PointerRNA *ptr, int value)
{
	SpaceText *data = (SpaceText *)(ptr->data);
	if (value) data->flags |= 64;
	else data->flags &= ~64;
}

int SpaceTextEditor_use_find_wrap_get(PointerRNA *ptr)
{
	SpaceText *data = (SpaceText *)(ptr->data);
	return (((data->flags) & 32) != 0);
}

void SpaceTextEditor_use_find_wrap_set(PointerRNA *ptr, int value)
{
	SpaceText *data = (SpaceText *)(ptr->data);
	if (value) data->flags |= 32;
	else data->flags &= ~32;
}

int SpaceTextEditor_use_match_case_get(PointerRNA *ptr)
{
	SpaceText *data = (SpaceText *)(ptr->data);
	return (((data->flags) & 256) != 0);
}

void SpaceTextEditor_use_match_case_set(PointerRNA *ptr, int value)
{
	SpaceText *data = (SpaceText *)(ptr->data);
	if (value) data->flags |= 256;
	else data->flags &= ~256;
}

void SpaceTextEditor_find_text_get(PointerRNA *ptr, char *value)
{
	SpaceText *data = (SpaceText *)(ptr->data);
	BLI_strncpy_utf8(value, data->findstr, 256);
}

int SpaceTextEditor_find_text_length(PointerRNA *ptr)
{
	SpaceText *data = (SpaceText *)(ptr->data);
	return strlen(data->findstr);
}

void SpaceTextEditor_find_text_set(PointerRNA *ptr, const char *value)
{
	SpaceText *data = (SpaceText *)(ptr->data);
	BLI_strncpy_utf8(data->findstr, value, 256);
}

void SpaceTextEditor_replace_text_get(PointerRNA *ptr, char *value)
{
	SpaceText *data = (SpaceText *)(ptr->data);
	BLI_strncpy_utf8(value, data->replacestr, 256);
}

int SpaceTextEditor_replace_text_length(PointerRNA *ptr)
{
	SpaceText *data = (SpaceText *)(ptr->data);
	return strlen(data->replacestr);
}

void SpaceTextEditor_replace_text_set(PointerRNA *ptr, const char *value)
{
	SpaceText *data = (SpaceText *)(ptr->data);
	BLI_strncpy_utf8(data->replacestr, value, 256);
}

static PointerRNA FileSelectParams_rna_properties_get(CollectionPropertyIterator *iter)
{
	return rna_builtin_properties_get(iter);
}

void FileSelectParams_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

	memset(iter, 0, sizeof(*iter));
	iter->parent = *ptr;
	iter->prop = (PropertyRNA *)&rna_FileSelectParams_rna_properties;

	rna_builtin_properties_begin(iter, ptr);

	if (iter->valid)
		iter->ptr = FileSelectParams_rna_properties_get(iter);
}

void FileSelectParams_rna_properties_next(CollectionPropertyIterator *iter)
{
	rna_builtin_properties_next(iter);

	if (iter->valid)
		iter->ptr = FileSelectParams_rna_properties_get(iter);
}

void FileSelectParams_rna_properties_end(CollectionPropertyIterator *iter)
{
	rna_iterator_listbase_end(iter);
}

int FileSelectParams_rna_properties_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
	return rna_builtin_properties_lookup_string(ptr, key, r_ptr);
}

PointerRNA FileSelectParams_rna_type_get(PointerRNA *ptr)
{
	return rna_builtin_type_get(ptr);
}

void FileSelectParams_title_get(PointerRNA *ptr, char *value)
{
	FileSelectParams *data = (FileSelectParams *)(ptr->data);
	BLI_strncpy_utf8(value, data->title, 96);
}

int FileSelectParams_title_length(PointerRNA *ptr)
{
	FileSelectParams *data = (FileSelectParams *)(ptr->data);
	return strlen(data->title);
}

void FileSelectParams_directory_get(PointerRNA *ptr, char *value)
{
	FileSelectParams *data = (FileSelectParams *)(ptr->data);
	BLI_strncpy(value, data->dir, 1056);
}

int FileSelectParams_directory_length(PointerRNA *ptr)
{
	FileSelectParams *data = (FileSelectParams *)(ptr->data);
	return strlen(data->dir);
}

void FileSelectParams_directory_set(PointerRNA *ptr, const char *value)
{
	FileSelectParams *data = (FileSelectParams *)(ptr->data);
	BLI_strncpy(data->dir, value, 1056);
}

void FileSelectParams_filename_get(PointerRNA *ptr, char *value)
{
	FileSelectParams *data = (FileSelectParams *)(ptr->data);
	BLI_strncpy(value, data->file, 256);
}

int FileSelectParams_filename_length(PointerRNA *ptr)
{
	FileSelectParams *data = (FileSelectParams *)(ptr->data);
	return strlen(data->file);
}

void FileSelectParams_filename_set(PointerRNA *ptr, const char *value)
{
	FileSelectParams *data = (FileSelectParams *)(ptr->data);
	BLI_strncpy(data->file, value, 256);
}

int FileSelectParams_display_type_get(PointerRNA *ptr)
{
	FileSelectParams *data = (FileSelectParams *)(ptr->data);
	return (int)(data->display);
}

void FileSelectParams_display_type_set(PointerRNA *ptr, int value)
{
	FileSelectParams *data = (FileSelectParams *)(ptr->data);
	data->display = value;
}

int FileSelectParams_use_filter_get(PointerRNA *ptr)
{
	FileSelectParams *data = (FileSelectParams *)(ptr->data);
	return (((data->flag) & 256) != 0);
}

void FileSelectParams_use_filter_set(PointerRNA *ptr, int value)
{
	FileSelectParams *data = (FileSelectParams *)(ptr->data);
	if (value) data->flag |= 256;
	else data->flag &= ~256;
}

int FileSelectParams_show_hidden_get(PointerRNA *ptr)
{
	FileSelectParams *data = (FileSelectParams *)(ptr->data);
	return !(((data->flag) & 8) != 0);
}

void FileSelectParams_show_hidden_set(PointerRNA *ptr, int value)
{
	FileSelectParams *data = (FileSelectParams *)(ptr->data);
	if (!value) data->flag |= 8;
	else data->flag &= ~8;
}

int FileSelectParams_sort_method_get(PointerRNA *ptr)
{
	FileSelectParams *data = (FileSelectParams *)(ptr->data);
	return (int)(data->sort);
}

void FileSelectParams_sort_method_set(PointerRNA *ptr, int value)
{
	FileSelectParams *data = (FileSelectParams *)(ptr->data);
	data->sort = value;
}

int FileSelectParams_use_filter_image_get(PointerRNA *ptr)
{
	FileSelectParams *data = (FileSelectParams *)(ptr->data);
	return (((data->filter) & 16) != 0);
}

void FileSelectParams_use_filter_image_set(PointerRNA *ptr, int value)
{
	FileSelectParams *data = (FileSelectParams *)(ptr->data);
	if (value) data->filter |= 16;
	else data->filter &= ~16;
}

int FileSelectParams_use_filter_blender_get(PointerRNA *ptr)
{
	FileSelectParams *data = (FileSelectParams *)(ptr->data);
	return (((data->filter) & 4) != 0);
}

void FileSelectParams_use_filter_blender_set(PointerRNA *ptr, int value)
{
	FileSelectParams *data = (FileSelectParams *)(ptr->data);
	if (value) data->filter |= 4;
	else data->filter &= ~4;
}

int FileSelectParams_use_filter_backup_get(PointerRNA *ptr)
{
	FileSelectParams *data = (FileSelectParams *)(ptr->data);
	return (((data->filter) & 8) != 0);
}

void FileSelectParams_use_filter_backup_set(PointerRNA *ptr, int value)
{
	FileSelectParams *data = (FileSelectParams *)(ptr->data);
	if (value) data->filter |= 8;
	else data->filter &= ~8;
}

int FileSelectParams_use_filter_movie_get(PointerRNA *ptr)
{
	FileSelectParams *data = (FileSelectParams *)(ptr->data);
	return (((data->filter) & 32) != 0);
}

void FileSelectParams_use_filter_movie_set(PointerRNA *ptr, int value)
{
	FileSelectParams *data = (FileSelectParams *)(ptr->data);
	if (value) data->filter |= 32;
	else data->filter &= ~32;
}

int FileSelectParams_use_filter_script_get(PointerRNA *ptr)
{
	FileSelectParams *data = (FileSelectParams *)(ptr->data);
	return (((data->filter) & 64) != 0);
}

void FileSelectParams_use_filter_script_set(PointerRNA *ptr, int value)
{
	FileSelectParams *data = (FileSelectParams *)(ptr->data);
	if (value) data->filter |= 64;
	else data->filter &= ~64;
}

int FileSelectParams_use_filter_font_get(PointerRNA *ptr)
{
	FileSelectParams *data = (FileSelectParams *)(ptr->data);
	return (((data->filter) & 128) != 0);
}

void FileSelectParams_use_filter_font_set(PointerRNA *ptr, int value)
{
	FileSelectParams *data = (FileSelectParams *)(ptr->data);
	if (value) data->filter |= 128;
	else data->filter &= ~128;
}

int FileSelectParams_use_filter_sound_get(PointerRNA *ptr)
{
	FileSelectParams *data = (FileSelectParams *)(ptr->data);
	return (((data->filter) & 256) != 0);
}

void FileSelectParams_use_filter_sound_set(PointerRNA *ptr, int value)
{
	FileSelectParams *data = (FileSelectParams *)(ptr->data);
	if (value) data->filter |= 256;
	else data->filter &= ~256;
}

int FileSelectParams_use_filter_text_get(PointerRNA *ptr)
{
	FileSelectParams *data = (FileSelectParams *)(ptr->data);
	return (((data->filter) & 512) != 0);
}

void FileSelectParams_use_filter_text_set(PointerRNA *ptr, int value)
{
	FileSelectParams *data = (FileSelectParams *)(ptr->data);
	if (value) data->filter |= 512;
	else data->filter &= ~512;
}

int FileSelectParams_use_filter_folder_get(PointerRNA *ptr)
{
	FileSelectParams *data = (FileSelectParams *)(ptr->data);
	return (((data->filter) & 2048) != 0);
}

void FileSelectParams_use_filter_folder_set(PointerRNA *ptr, int value)
{
	FileSelectParams *data = (FileSelectParams *)(ptr->data);
	if (value) data->filter |= 2048;
	else data->filter &= ~2048;
}

void FileSelectParams_filter_glob_get(PointerRNA *ptr, char *value)
{
	FileSelectParams *data = (FileSelectParams *)(ptr->data);
	BLI_strncpy_utf8(value, data->filter_glob, 64);
}

int FileSelectParams_filter_glob_length(PointerRNA *ptr)
{
	FileSelectParams *data = (FileSelectParams *)(ptr->data);
	return strlen(data->filter_glob);
}

void FileSelectParams_filter_glob_set(PointerRNA *ptr, const char *value)
{
	FileSelectParams *data = (FileSelectParams *)(ptr->data);
	BLI_strncpy_utf8(data->filter_glob, value, 64);
}

PointerRNA SpaceFileBrowser_params_get(PointerRNA *ptr)
{
	SpaceFile *data = (SpaceFile *)(ptr->data);
	return rna_pointer_inherit_refine(ptr, &RNA_FileSelectParams, data->params);
}

PointerRNA SpaceFileBrowser_active_operator_get(PointerRNA *ptr)
{
	SpaceFile *data = (SpaceFile *)(ptr->data);
	return rna_pointer_inherit_refine(ptr, &RNA_Operator, data->op);
}

PointerRNA SpaceFileBrowser_operator_value_get(PointerRNA *ptr)
{
	SpaceFile *data = (SpaceFile *)(ptr->data);
	return rna_pointer_inherit_refine(ptr, &RNA_Operator, data->op);
}

int SpaceOutliner_display_mode_get(PointerRNA *ptr)
{
	SpaceOops *data = (SpaceOops *)(ptr->data);
	return (int)(data->outlinevis);
}

void SpaceOutliner_display_mode_set(PointerRNA *ptr, int value)
{
	SpaceOops *data = (SpaceOops *)(ptr->data);
	data->outlinevis = value;
}

void SpaceOutliner_filter_text_get(PointerRNA *ptr, char *value)
{
	SpaceOops *data = (SpaceOops *)(ptr->data);
	BLI_strncpy_utf8(value, data->search_string, 32);
}

int SpaceOutliner_filter_text_length(PointerRNA *ptr)
{
	SpaceOops *data = (SpaceOops *)(ptr->data);
	return strlen(data->search_string);
}

void SpaceOutliner_filter_text_set(PointerRNA *ptr, const char *value)
{
	SpaceOops *data = (SpaceOops *)(ptr->data);
	BLI_strncpy_utf8(data->search_string, value, 32);
}

int SpaceOutliner_use_filter_case_sensitive_get(PointerRNA *ptr)
{
	SpaceOops *data = (SpaceOops *)(ptr->data);
	return (((data->search_flags) & 1) != 0);
}

void SpaceOutliner_use_filter_case_sensitive_set(PointerRNA *ptr, int value)
{
	SpaceOops *data = (SpaceOops *)(ptr->data);
	if (value) data->search_flags |= 1;
	else data->search_flags &= ~1;
}

int SpaceOutliner_use_filter_complete_get(PointerRNA *ptr)
{
	SpaceOops *data = (SpaceOops *)(ptr->data);
	return (((data->search_flags) & 2) != 0);
}

void SpaceOutliner_use_filter_complete_set(PointerRNA *ptr, int value)
{
	SpaceOops *data = (SpaceOops *)(ptr->data);
	if (value) data->search_flags |= 2;
	else data->search_flags &= ~2;
}

int SpaceOutliner_show_restrict_columns_get(PointerRNA *ptr)
{
	SpaceOops *data = (SpaceOops *)(ptr->data);
	return !(((data->flag) & 4) != 0);
}

void SpaceOutliner_show_restrict_columns_set(PointerRNA *ptr, int value)
{
	SpaceOops *data = (SpaceOops *)(ptr->data);
	if (!value) data->flag |= 4;
	else data->flag &= ~4;
}

static PointerRNA BackgroundImage_rna_properties_get(CollectionPropertyIterator *iter)
{
	return rna_builtin_properties_get(iter);
}

void BackgroundImage_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

	memset(iter, 0, sizeof(*iter));
	iter->parent = *ptr;
	iter->prop = (PropertyRNA *)&rna_BackgroundImage_rna_properties;

	rna_builtin_properties_begin(iter, ptr);

	if (iter->valid)
		iter->ptr = BackgroundImage_rna_properties_get(iter);
}

void BackgroundImage_rna_properties_next(CollectionPropertyIterator *iter)
{
	rna_builtin_properties_next(iter);

	if (iter->valid)
		iter->ptr = BackgroundImage_rna_properties_get(iter);
}

void BackgroundImage_rna_properties_end(CollectionPropertyIterator *iter)
{
	rna_iterator_listbase_end(iter);
}

int BackgroundImage_rna_properties_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
	return rna_builtin_properties_lookup_string(ptr, key, r_ptr);
}

PointerRNA BackgroundImage_rna_type_get(PointerRNA *ptr)
{
	return rna_builtin_type_get(ptr);
}

int BackgroundImage_source_get(PointerRNA *ptr)
{
	BGpic *data = (BGpic *)(ptr->data);
	return (int)(data->source);
}

void BackgroundImage_source_set(PointerRNA *ptr, int value)
{
	BGpic *data = (BGpic *)(ptr->data);
	data->source = value;
}

PointerRNA BackgroundImage_image_get(PointerRNA *ptr)
{
	BGpic *data = (BGpic *)(ptr->data);
	return rna_pointer_inherit_refine(ptr, &RNA_Image, data->ima);
}

void BackgroundImage_image_set(PointerRNA *ptr, PointerRNA value)
{
	BGpic *data = (BGpic *)(ptr->data);

	if (data->ima)
		id_us_min((ID *)data->ima);
	if (value.data)
		id_us_plus((ID *)value.data);

	data->ima = value.data;
}

PointerRNA BackgroundImage_clip_get(PointerRNA *ptr)
{
	BGpic *data = (BGpic *)(ptr->data);
	return rna_pointer_inherit_refine(ptr, &RNA_MovieClip, data->clip);
}

void BackgroundImage_clip_set(PointerRNA *ptr, PointerRNA value)
{
	BGpic *data = (BGpic *)(ptr->data);

	if (data->clip)
		id_us_min((ID *)data->clip);
	if (value.data)
		id_us_plus((ID *)value.data);

	data->clip = value.data;
}

PointerRNA BackgroundImage_image_user_get(PointerRNA *ptr)
{
	BGpic *data = (BGpic *)(ptr->data);
	return rna_pointer_inherit_refine(ptr, &RNA_ImageUser, &data->iuser);
}

PointerRNA BackgroundImage_clip_user_get(PointerRNA *ptr)
{
	BGpic *data = (BGpic *)(ptr->data);
	return rna_pointer_inherit_refine(ptr, &RNA_MovieClipUser, &data->cuser);
}

float BackgroundImage_offset_x_get(PointerRNA *ptr)
{
	BGpic *data = (BGpic *)(ptr->data);
	return (float)(data->xof);
}

void BackgroundImage_offset_x_set(PointerRNA *ptr, float value)
{
	BGpic *data = (BGpic *)(ptr->data);
	data->xof = value;
}

float BackgroundImage_offset_y_get(PointerRNA *ptr)
{
	BGpic *data = (BGpic *)(ptr->data);
	return (float)(data->yof);
}

void BackgroundImage_offset_y_set(PointerRNA *ptr, float value)
{
	BGpic *data = (BGpic *)(ptr->data);
	data->yof = value;
}

float BackgroundImage_size_get(PointerRNA *ptr)
{
	BGpic *data = (BGpic *)(ptr->data);
	return (float)(data->size);
}

void BackgroundImage_size_set(PointerRNA *ptr, float value)
{
	BGpic *data = (BGpic *)(ptr->data);
	data->size = CLAMPIS(value, 0.0f, FLT_MAX);
}

float BackgroundImage_opacity_get(PointerRNA *ptr)
{
	return rna_BackgroundImage_opacity_get(ptr);
}

void BackgroundImage_opacity_set(PointerRNA *ptr, float value)
{
	rna_BackgroundImage_opacity_set(ptr, value);
}

int BackgroundImage_view_axis_get(PointerRNA *ptr)
{
	BGpic *data = (BGpic *)(ptr->data);
	return (int)(data->view);
}

void BackgroundImage_view_axis_set(PointerRNA *ptr, int value)
{
	BGpic *data = (BGpic *)(ptr->data);
	data->view = value;
}

int BackgroundImage_show_expanded_get(PointerRNA *ptr)
{
	BGpic *data = (BGpic *)(ptr->data);
	return (((data->flag) & 6) != 0);
}

void BackgroundImage_show_expanded_set(PointerRNA *ptr, int value)
{
	BGpic *data = (BGpic *)(ptr->data);
	if (value) data->flag |= 6;
	else data->flag &= ~6;
}

int BackgroundImage_use_camera_clip_get(PointerRNA *ptr)
{
	BGpic *data = (BGpic *)(ptr->data);
	return (((data->flag) & 4) != 0);
}

void BackgroundImage_use_camera_clip_set(PointerRNA *ptr, int value)
{
	BGpic *data = (BGpic *)(ptr->data);
	if (value) data->flag |= 4;
	else data->flag &= ~4;
}

int BackgroundImage_show_background_image_get(PointerRNA *ptr)
{
	BGpic *data = (BGpic *)(ptr->data);
	return !(((data->flag) & 8) != 0);
}

void BackgroundImage_show_background_image_set(PointerRNA *ptr, int value)
{
	BGpic *data = (BGpic *)(ptr->data);
	if (!value) data->flag |= 8;
	else data->flag &= ~8;
}

int BackgroundImage_show_on_foreground_get(PointerRNA *ptr)
{
	BGpic *data = (BGpic *)(ptr->data);
	return (((data->flag) & 16) != 0);
}

void BackgroundImage_show_on_foreground_set(PointerRNA *ptr, int value)
{
	BGpic *data = (BGpic *)(ptr->data);
	if (value) data->flag |= 16;
	else data->flag &= ~16;
}

int BackgroundImage_draw_depth_get(PointerRNA *ptr)
{
	BGpic *data = (BGpic *)(ptr->data);
	return ((data->flag) & 16);
}

void BackgroundImage_draw_depth_set(PointerRNA *ptr, int value)
{
	BGpic *data = (BGpic *)(ptr->data);
	data->flag &= ~16;
	data->flag |= value;
}

int BackgroundImage_frame_method_get(PointerRNA *ptr)
{
	BGpic *data = (BGpic *)(ptr->data);
	return ((data->flag) & 96);
}

void BackgroundImage_frame_method_set(PointerRNA *ptr, int value)
{
	BGpic *data = (BGpic *)(ptr->data);
	data->flag &= ~96;
	data->flag |= value;
}

PointerRNA SpaceView3D_camera_get(PointerRNA *ptr)
{
	View3D *data = (View3D *)(ptr->data);
	return rna_pointer_inherit_refine(ptr, &RNA_Object, data->camera);
}

void SpaceView3D_camera_set(PointerRNA *ptr, PointerRNA value)
{
	View3D *data = (View3D *)(ptr->data);
	if (value.data)
		id_lib_extern((ID *)value.data);

	data->camera = value.data;
}

int SpaceView3D_use_render_border_get(PointerRNA *ptr)
{
	View3D *data = (View3D *)(ptr->data);
	return (((data->flag2) & 2048) != 0);
}

void SpaceView3D_use_render_border_set(PointerRNA *ptr, int value)
{
	View3D *data = (View3D *)(ptr->data);
	if (value) data->flag2 |= 2048;
	else data->flag2 &= ~2048;
}

float SpaceView3D_render_border_min_x_get(PointerRNA *ptr)
{
	View3D *data = (View3D *)(ptr->data);
	return (float)(data->render_border.xmin);
}

void SpaceView3D_render_border_min_x_set(PointerRNA *ptr, float value)
{
	View3D *data = (View3D *)(ptr->data);
	data->render_border.xmin = CLAMPIS(value, 0.0f, 1.0f);
}

float SpaceView3D_render_border_min_y_get(PointerRNA *ptr)
{
	View3D *data = (View3D *)(ptr->data);
	return (float)(data->render_border.ymin);
}

void SpaceView3D_render_border_min_y_set(PointerRNA *ptr, float value)
{
	View3D *data = (View3D *)(ptr->data);
	data->render_border.ymin = CLAMPIS(value, 0.0f, 1.0f);
}

float SpaceView3D_render_border_max_x_get(PointerRNA *ptr)
{
	View3D *data = (View3D *)(ptr->data);
	return (float)(data->render_border.xmax);
}

void SpaceView3D_render_border_max_x_set(PointerRNA *ptr, float value)
{
	View3D *data = (View3D *)(ptr->data);
	data->render_border.xmax = CLAMPIS(value, 0.0f, 1.0f);
}

float SpaceView3D_render_border_max_y_get(PointerRNA *ptr)
{
	View3D *data = (View3D *)(ptr->data);
	return (float)(data->render_border.ymax);
}

void SpaceView3D_render_border_max_y_set(PointerRNA *ptr, float value)
{
	View3D *data = (View3D *)(ptr->data);
	data->render_border.ymax = CLAMPIS(value, 0.0f, 1.0f);
}

PointerRNA SpaceView3D_lock_object_get(PointerRNA *ptr)
{
	View3D *data = (View3D *)(ptr->data);
	return rna_pointer_inherit_refine(ptr, &RNA_Object, data->ob_centre);
}

void SpaceView3D_lock_object_set(PointerRNA *ptr, PointerRNA value)
{
	View3D *data = (View3D *)(ptr->data);
	if (value.data)
		id_lib_extern((ID *)value.data);

	data->ob_centre = value.data;
}

void SpaceView3D_lock_bone_get(PointerRNA *ptr, char *value)
{
	View3D *data = (View3D *)(ptr->data);
	BLI_strncpy_utf8(value, data->ob_centre_bone, 64);
}

int SpaceView3D_lock_bone_length(PointerRNA *ptr)
{
	View3D *data = (View3D *)(ptr->data);
	return strlen(data->ob_centre_bone);
}

void SpaceView3D_lock_bone_set(PointerRNA *ptr, const char *value)
{
	View3D *data = (View3D *)(ptr->data);
	BLI_strncpy_utf8(data->ob_centre_bone, value, 64);
}

int SpaceView3D_lock_cursor_get(PointerRNA *ptr)
{
	View3D *data = (View3D *)(ptr->data);
	return (((data->ob_centre_cursor) & 1) != 0);
}

void SpaceView3D_lock_cursor_set(PointerRNA *ptr, int value)
{
	View3D *data = (View3D *)(ptr->data);
	if (value) data->ob_centre_cursor |= 1;
	else data->ob_centre_cursor &= ~1;
}

int SpaceView3D_viewport_shade_get(PointerRNA *ptr)
{
	return rna_SpaceView3D_viewport_shade_get(ptr);
}

void SpaceView3D_viewport_shade_set(PointerRNA *ptr, int value)
{
	View3D *data = (View3D *)(ptr->data);
	data->drawtype = value;
}

PointerRNA SpaceView3D_local_view_get(PointerRNA *ptr)
{
	View3D *data = (View3D *)(ptr->data);
	return rna_pointer_inherit_refine(ptr, &RNA_SpaceView3D, data->localvd);
}

void SpaceView3D_cursor_location_get(PointerRNA *ptr, float values[3])
{
	rna_View3D_CursorLocation_get(ptr, values);
}

void SpaceView3D_cursor_location_set(PointerRNA *ptr, const float values[3])
{
	rna_View3D_CursorLocation_set(ptr, values);
}

float SpaceView3D_lens_get(PointerRNA *ptr)
{
	View3D *data = (View3D *)(ptr->data);
	return (float)(data->lens);
}

void SpaceView3D_lens_set(PointerRNA *ptr, float value)
{
	View3D *data = (View3D *)(ptr->data);
	data->lens = CLAMPIS(value, 1.0f, 250.0f);
}

float SpaceView3D_clip_start_get(PointerRNA *ptr)
{
	View3D *data = (View3D *)(ptr->data);
	return (float)(data->near);
}

void SpaceView3D_clip_start_set(PointerRNA *ptr, float value)
{
	View3D *data = (View3D *)(ptr->data);
	data->near = CLAMPIS(value, 0.0010000000f, FLT_MAX);
}

float SpaceView3D_clip_end_get(PointerRNA *ptr)
{
	View3D *data = (View3D *)(ptr->data);
	return (float)(data->far);
}

void SpaceView3D_clip_end_set(PointerRNA *ptr, float value)
{
	View3D *data = (View3D *)(ptr->data);
	data->far = CLAMPIS(value, 1.0f, FLT_MAX);
}

float SpaceView3D_grid_scale_get(PointerRNA *ptr)
{
	View3D *data = (View3D *)(ptr->data);
	return (float)(data->grid);
}

void SpaceView3D_grid_scale_set(PointerRNA *ptr, float value)
{
	View3D *data = (View3D *)(ptr->data);
	data->grid = CLAMPIS(value, 0.0f, FLT_MAX);
}

int SpaceView3D_grid_lines_get(PointerRNA *ptr)
{
	View3D *data = (View3D *)(ptr->data);
	return (int)(data->gridlines);
}

void SpaceView3D_grid_lines_set(PointerRNA *ptr, int value)
{
	View3D *data = (View3D *)(ptr->data);
	data->gridlines = CLAMPIS(value, 0, 1024);
}

int SpaceView3D_grid_subdivisions_get(PointerRNA *ptr)
{
	View3D *data = (View3D *)(ptr->data);
	return (int)(data->gridsubdiv);
}

void SpaceView3D_grid_subdivisions_set(PointerRNA *ptr, int value)
{
	View3D *data = (View3D *)(ptr->data);
	data->gridsubdiv = CLAMPIS(value, 1, 1024);
}

float SpaceView3D_grid_scale_unit_get(PointerRNA *ptr)
{
	return rna_View3D_GridScaleUnit_get(ptr);
}

int SpaceView3D_show_floor_get(PointerRNA *ptr)
{
	View3D *data = (View3D *)(ptr->data);
	return (((data->gridflag) & 1) != 0);
}

void SpaceView3D_show_floor_set(PointerRNA *ptr, int value)
{
	View3D *data = (View3D *)(ptr->data);
	if (value) data->gridflag |= 1;
	else data->gridflag &= ~1;
}

int SpaceView3D_show_axis_x_get(PointerRNA *ptr)
{
	View3D *data = (View3D *)(ptr->data);
	return (((data->gridflag) & 2) != 0);
}

void SpaceView3D_show_axis_x_set(PointerRNA *ptr, int value)
{
	View3D *data = (View3D *)(ptr->data);
	if (value) data->gridflag |= 2;
	else data->gridflag &= ~2;
}

int SpaceView3D_show_axis_y_get(PointerRNA *ptr)
{
	View3D *data = (View3D *)(ptr->data);
	return (((data->gridflag) & 4) != 0);
}

void SpaceView3D_show_axis_y_set(PointerRNA *ptr, int value)
{
	View3D *data = (View3D *)(ptr->data);
	if (value) data->gridflag |= 4;
	else data->gridflag &= ~4;
}

int SpaceView3D_show_axis_z_get(PointerRNA *ptr)
{
	View3D *data = (View3D *)(ptr->data);
	return (((data->gridflag) & 8) != 0);
}

void SpaceView3D_show_axis_z_set(PointerRNA *ptr, int value)
{
	View3D *data = (View3D *)(ptr->data);
	if (value) data->gridflag |= 8;
	else data->gridflag &= ~8;
}

int SpaceView3D_show_outline_selected_get(PointerRNA *ptr)
{
	View3D *data = (View3D *)(ptr->data);
	return (((data->flag) & 2048) != 0);
}

void SpaceView3D_show_outline_selected_set(PointerRNA *ptr, int value)
{
	View3D *data = (View3D *)(ptr->data);
	if (value) data->flag |= 2048;
	else data->flag &= ~2048;
}

int SpaceView3D_show_all_objects_origin_get(PointerRNA *ptr)
{
	View3D *data = (View3D *)(ptr->data);
	return (((data->flag) & 32768) != 0);
}

void SpaceView3D_show_all_objects_origin_set(PointerRNA *ptr, int value)
{
	View3D *data = (View3D *)(ptr->data);
	if (value) data->flag |= 32768;
	else data->flag &= ~32768;
}

int SpaceView3D_show_relationship_lines_get(PointerRNA *ptr)
{
	View3D *data = (View3D *)(ptr->data);
	return !(((data->flag) & 4) != 0);
}

void SpaceView3D_show_relationship_lines_set(PointerRNA *ptr, int value)
{
	View3D *data = (View3D *)(ptr->data);
	if (!value) data->flag |= 4;
	else data->flag &= ~4;
}

int SpaceView3D_show_grease_pencil_get(PointerRNA *ptr)
{
	View3D *data = (View3D *)(ptr->data);
	return (((data->flag2) & 16) != 0);
}

void SpaceView3D_show_grease_pencil_set(PointerRNA *ptr, int value)
{
	View3D *data = (View3D *)(ptr->data);
	if (value) data->flag2 |= 16;
	else data->flag2 &= ~16;
}

int SpaceView3D_show_textured_solid_get(PointerRNA *ptr)
{
	View3D *data = (View3D *)(ptr->data);
	return (((data->flag2) & 8) != 0);
}

void SpaceView3D_show_textured_solid_set(PointerRNA *ptr, int value)
{
	View3D *data = (View3D *)(ptr->data);
	if (value) data->flag2 |= 8;
	else data->flag2 &= ~8;
}

int SpaceView3D_show_backface_culling_get(PointerRNA *ptr)
{
	View3D *data = (View3D *)(ptr->data);
	return (((data->flag2) & 1024) != 0);
}

void SpaceView3D_show_backface_culling_set(PointerRNA *ptr, int value)
{
	View3D *data = (View3D *)(ptr->data);
	if (value) data->flag2 |= 1024;
	else data->flag2 &= ~1024;
}

int SpaceView3D_show_textured_shadeless_get(PointerRNA *ptr)
{
	View3D *data = (View3D *)(ptr->data);
	return (((data->flag2) & 32768) != 0);
}

void SpaceView3D_show_textured_shadeless_set(PointerRNA *ptr, int value)
{
	View3D *data = (View3D *)(ptr->data);
	if (value) data->flag2 |= 32768;
	else data->flag2 &= ~32768;
}

int SpaceView3D_show_occlude_wire_get(PointerRNA *ptr)
{
	View3D *data = (View3D *)(ptr->data);
	return (((data->flag2) & 16384) != 0);
}

void SpaceView3D_show_occlude_wire_set(PointerRNA *ptr, int value)
{
	View3D *data = (View3D *)(ptr->data);
	if (value) data->flag2 |= 16384;
	else data->flag2 &= ~16384;
}

int SpaceView3D_lock_camera_get(PointerRNA *ptr)
{
	View3D *data = (View3D *)(ptr->data);
	return (((data->flag2) & 32) != 0);
}

void SpaceView3D_lock_camera_set(PointerRNA *ptr, int value)
{
	View3D *data = (View3D *)(ptr->data);
	if (value) data->flag2 |= 32;
	else data->flag2 &= ~32;
}

int SpaceView3D_show_only_render_get(PointerRNA *ptr)
{
	View3D *data = (View3D *)(ptr->data);
	return (((data->flag2) & 4) != 0);
}

void SpaceView3D_show_only_render_set(PointerRNA *ptr, int value)
{
	View3D *data = (View3D *)(ptr->data);
	if (value) data->flag2 |= 4;
	else data->flag2 &= ~4;
}

int SpaceView3D_use_occlude_geometry_get(PointerRNA *ptr)
{
	View3D *data = (View3D *)(ptr->data);
	return (((data->flag) & 4096) != 0);
}

void SpaceView3D_use_occlude_geometry_set(PointerRNA *ptr, int value)
{
	View3D *data = (View3D *)(ptr->data);
	if (value) data->flag |= 4096;
	else data->flag &= ~4096;
}

static PointerRNA SpaceView3D_background_images_get(CollectionPropertyIterator *iter)
{
	return rna_pointer_inherit_refine(&iter->parent, &RNA_BackgroundImage, rna_iterator_listbase_get(iter));
}

void SpaceView3D_background_images_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{
	View3D *data = (View3D *)(ptr->data);

	memset(iter, 0, sizeof(*iter));
	iter->parent = *ptr;
	iter->prop = (PropertyRNA *)&rna_SpaceView3D_background_images;

	rna_iterator_listbase_begin(iter, &data->bgpicbase, NULL);

	if (iter->valid)
		iter->ptr = SpaceView3D_background_images_get(iter);
}

void SpaceView3D_background_images_next(CollectionPropertyIterator *iter)
{
	rna_iterator_listbase_next(iter);

	if (iter->valid)
		iter->ptr = SpaceView3D_background_images_get(iter);
}

void SpaceView3D_background_images_end(CollectionPropertyIterator *iter)
{
	rna_iterator_listbase_end(iter);
}

int SpaceView3D_background_images_lookup_int(PointerRNA *ptr, int index, PointerRNA *r_ptr)
{
	int found = 0;
	CollectionPropertyIterator iter;

	SpaceView3D_background_images_begin(&iter, ptr);

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
		if (found) *r_ptr = SpaceView3D_background_images_get(&iter);
	}

	SpaceView3D_background_images_end(&iter);

	return found;
}

int SpaceView3D_show_background_images_get(PointerRNA *ptr)
{
	View3D *data = (View3D *)(ptr->data);
	return (((data->flag) & 2) != 0);
}

void SpaceView3D_show_background_images_set(PointerRNA *ptr, int value)
{
	View3D *data = (View3D *)(ptr->data);
	if (value) data->flag |= 2;
	else data->flag &= ~2;
}

int SpaceView3D_pivot_point_get(PointerRNA *ptr)
{
	View3D *data = (View3D *)(ptr->data);
	return (int)(data->around);
}

void SpaceView3D_pivot_point_set(PointerRNA *ptr, int value)
{
	View3D *data = (View3D *)(ptr->data);
	data->around = value;
}

int SpaceView3D_use_pivot_point_align_get(PointerRNA *ptr)
{
	View3D *data = (View3D *)(ptr->data);
	return (((data->flag) & 1024) != 0);
}

void SpaceView3D_use_pivot_point_align_set(PointerRNA *ptr, int value)
{
	View3D *data = (View3D *)(ptr->data);
	if (value) data->flag |= 1024;
	else data->flag &= ~1024;
}

int SpaceView3D_show_manipulator_get(PointerRNA *ptr)
{
	View3D *data = (View3D *)(ptr->data);
	return (((data->twflag) & 1) != 0);
}

void SpaceView3D_show_manipulator_set(PointerRNA *ptr, int value)
{
	View3D *data = (View3D *)(ptr->data);
	if (value) data->twflag |= 1;
	else data->twflag &= ~1;
}

int SpaceView3D_transform_manipulators_get(PointerRNA *ptr)
{
	View3D *data = (View3D *)(ptr->data);
	return (int)(data->twtype);
}

void SpaceView3D_transform_manipulators_set(PointerRNA *ptr, int value)
{
	View3D *data = (View3D *)(ptr->data);
	data->twtype = value;
}

int SpaceView3D_transform_orientation_get(PointerRNA *ptr)
{
	View3D *data = (View3D *)(ptr->data);
	return (int)(data->twmode);
}

void SpaceView3D_transform_orientation_set(PointerRNA *ptr, int value)
{
	View3D *data = (View3D *)(ptr->data);
	data->twmode = value;
}

PointerRNA SpaceView3D_current_orientation_get(PointerRNA *ptr)
{
	return rna_CurrentOrientation_get(ptr);
}

int SpaceView3D_lock_camera_and_layers_get(PointerRNA *ptr)
{
	View3D *data = (View3D *)(ptr->data);
	return (((data->scenelock) & 1) != 0);
}

void SpaceView3D_lock_camera_and_layers_set(PointerRNA *ptr, int value)
{
	rna_SpaceView3D_lock_camera_and_layers_set(ptr, value);
}

void SpaceView3D_layers_get(PointerRNA *ptr, int values[20])
{
	View3D *data = (View3D *)(ptr->data);
	unsigned int i;

	for (i = 0; i < 20; i++) {
		values[i] = ((data->lay & (1u << i)) != 0);
	}
}

void SpaceView3D_layers_set(PointerRNA *ptr, const int values[20])
{
	rna_SpaceView3D_layer_set(ptr, values);
}

void SpaceView3D_layers_local_view_get(PointerRNA *ptr, int values[8])
{
	View3D *data = (View3D *)(ptr->data);
	unsigned int i;

	for (i = 0; i < 8; i++) {
		values[i] = ((data->lay & (16777216u << i)) != 0);
	}
}

void SpaceView3D_layers_used_get(PointerRNA *ptr, int values[20])
{
	View3D *data = (View3D *)(ptr->data);
	unsigned int i;

	for (i = 0; i < 20; i++) {
		values[i] = ((data->lay_used & (1u << i)) != 0);
	}
}

PointerRNA SpaceView3D_region_3d_get(PointerRNA *ptr)
{
	return rna_SpaceView3D_region_3d_get(ptr);
}

static PointerRNA SpaceView3D_region_quadviews_get(CollectionPropertyIterator *iter)
{
	return rna_SpaceView3D_region_quadviews_get(iter);
}

void SpaceView3D_region_quadviews_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

	memset(iter, 0, sizeof(*iter));
	iter->parent = *ptr;
	iter->prop = (PropertyRNA *)&rna_SpaceView3D_region_quadviews;

	rna_SpaceView3D_region_quadviews_begin(iter, ptr);

	if (iter->valid)
		iter->ptr = SpaceView3D_region_quadviews_get(iter);
}

void SpaceView3D_region_quadviews_next(CollectionPropertyIterator *iter)
{
	rna_iterator_listbase_next(iter);

	if (iter->valid)
		iter->ptr = SpaceView3D_region_quadviews_get(iter);
}

void SpaceView3D_region_quadviews_end(CollectionPropertyIterator *iter)
{
	rna_iterator_listbase_end(iter);
}

int SpaceView3D_show_reconstruction_get(PointerRNA *ptr)
{
	View3D *data = (View3D *)(ptr->data);
	return (((data->flag2) & 128) != 0);
}

void SpaceView3D_show_reconstruction_set(PointerRNA *ptr, int value)
{
	View3D *data = (View3D *)(ptr->data);
	if (value) data->flag2 |= 128;
	else data->flag2 &= ~128;
}

float SpaceView3D_tracks_draw_size_get(PointerRNA *ptr)
{
	View3D *data = (View3D *)(ptr->data);
	return (float)(data->bundle_size);
}

void SpaceView3D_tracks_draw_size_set(PointerRNA *ptr, float value)
{
	View3D *data = (View3D *)(ptr->data);
	data->bundle_size = CLAMPIS(value, 0.0f, FLT_MAX);
}

int SpaceView3D_tracks_draw_type_get(PointerRNA *ptr)
{
	View3D *data = (View3D *)(ptr->data);
	return (int)(data->bundle_drawtype);
}

void SpaceView3D_tracks_draw_type_set(PointerRNA *ptr, int value)
{
	View3D *data = (View3D *)(ptr->data);
	data->bundle_drawtype = value;
}

int SpaceView3D_show_camera_path_get(PointerRNA *ptr)
{
	View3D *data = (View3D *)(ptr->data);
	return (((data->flag2) & 256) != 0);
}

void SpaceView3D_show_camera_path_set(PointerRNA *ptr, int value)
{
	View3D *data = (View3D *)(ptr->data);
	if (value) data->flag2 |= 256;
	else data->flag2 &= ~256;
}

int SpaceView3D_show_bundle_names_get(PointerRNA *ptr)
{
	View3D *data = (View3D *)(ptr->data);
	return (((data->flag2) & 512) != 0);
}

void SpaceView3D_show_bundle_names_set(PointerRNA *ptr, int value)
{
	View3D *data = (View3D *)(ptr->data);
	if (value) data->flag2 |= 512;
	else data->flag2 &= ~512;
}

int SpaceView3D_use_matcap_get(PointerRNA *ptr)
{
	View3D *data = (View3D *)(ptr->data);
	return (((data->flag2) & 4096) != 0);
}

void SpaceView3D_use_matcap_set(PointerRNA *ptr, int value)
{
	View3D *data = (View3D *)(ptr->data);
	if (value) data->flag2 |= 4096;
	else data->flag2 &= ~4096;
}

int SpaceView3D_matcap_icon_get(PointerRNA *ptr)
{
	View3D *data = (View3D *)(ptr->data);
	return (int)(data->matcap_icon);
}

void SpaceView3D_matcap_icon_set(PointerRNA *ptr, int value)
{
	View3D *data = (View3D *)(ptr->data);
	data->matcap_icon = value;
}

static PointerRNA BackgroundImages_rna_properties_get(CollectionPropertyIterator *iter)
{
	return rna_builtin_properties_get(iter);
}

void BackgroundImages_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

	memset(iter, 0, sizeof(*iter));
	iter->parent = *ptr;
	iter->prop = (PropertyRNA *)&rna_BackgroundImages_rna_properties;

	rna_builtin_properties_begin(iter, ptr);

	if (iter->valid)
		iter->ptr = BackgroundImages_rna_properties_get(iter);
}

void BackgroundImages_rna_properties_next(CollectionPropertyIterator *iter)
{
	rna_builtin_properties_next(iter);

	if (iter->valid)
		iter->ptr = BackgroundImages_rna_properties_get(iter);
}

void BackgroundImages_rna_properties_end(CollectionPropertyIterator *iter)
{
	rna_iterator_listbase_end(iter);
}

int BackgroundImages_rna_properties_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
	return rna_builtin_properties_lookup_string(ptr, key, r_ptr);
}

PointerRNA BackgroundImages_rna_type_get(PointerRNA *ptr)
{
	return rna_builtin_type_get(ptr);
}

static PointerRNA RegionView3D_rna_properties_get(CollectionPropertyIterator *iter)
{
	return rna_builtin_properties_get(iter);
}

void RegionView3D_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

	memset(iter, 0, sizeof(*iter));
	iter->parent = *ptr;
	iter->prop = (PropertyRNA *)&rna_RegionView3D_rna_properties;

	rna_builtin_properties_begin(iter, ptr);

	if (iter->valid)
		iter->ptr = RegionView3D_rna_properties_get(iter);
}

void RegionView3D_rna_properties_next(CollectionPropertyIterator *iter)
{
	rna_builtin_properties_next(iter);

	if (iter->valid)
		iter->ptr = RegionView3D_rna_properties_get(iter);
}

void RegionView3D_rna_properties_end(CollectionPropertyIterator *iter)
{
	rna_iterator_listbase_end(iter);
}

int RegionView3D_rna_properties_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
	return rna_builtin_properties_lookup_string(ptr, key, r_ptr);
}

PointerRNA RegionView3D_rna_type_get(PointerRNA *ptr)
{
	return rna_builtin_type_get(ptr);
}

int RegionView3D_lock_rotation_get(PointerRNA *ptr)
{
	RegionView3D *data = (RegionView3D *)(ptr->data);
	return (((data->viewlock) & 1) != 0);
}

void RegionView3D_lock_rotation_set(PointerRNA *ptr, int value)
{
	RegionView3D *data = (RegionView3D *)(ptr->data);
	if (value) data->viewlock |= 1;
	else data->viewlock &= ~1;
}

int RegionView3D_show_sync_view_get(PointerRNA *ptr)
{
	RegionView3D *data = (RegionView3D *)(ptr->data);
	return (((data->viewlock) & 2) != 0);
}

void RegionView3D_show_sync_view_set(PointerRNA *ptr, int value)
{
	RegionView3D *data = (RegionView3D *)(ptr->data);
	if (value) data->viewlock |= 2;
	else data->viewlock &= ~2;
}

int RegionView3D_use_box_clip_get(PointerRNA *ptr)
{
	RegionView3D *data = (RegionView3D *)(ptr->data);
	return (((data->viewlock) & 4) != 0);
}

void RegionView3D_use_box_clip_set(PointerRNA *ptr, int value)
{
	RegionView3D *data = (RegionView3D *)(ptr->data);
	if (value) data->viewlock |= 4;
	else data->viewlock &= ~4;
}

void RegionView3D_perspective_matrix_get(PointerRNA *ptr, float values[16])
{
	RegionView3D *data = (RegionView3D *)(ptr->data);
	unsigned int i;

	for (i = 0; i < 16; i++) {
		values[i] = (float)(((float *)data->persmat)[i]);
	}
}

void RegionView3D_view_matrix_get(PointerRNA *ptr, float values[16])
{
	RegionView3D *data = (RegionView3D *)(ptr->data);
	unsigned int i;

	for (i = 0; i < 16; i++) {
		values[i] = (float)(((float *)data->viewmat)[i]);
	}
}

void RegionView3D_view_matrix_set(PointerRNA *ptr, const float values[16])
{
	rna_RegionView3D_view_matrix_set(ptr, values);
}

int RegionView3D_view_perspective_get(PointerRNA *ptr)
{
	RegionView3D *data = (RegionView3D *)(ptr->data);
	return (int)(data->persp);
}

void RegionView3D_view_perspective_set(PointerRNA *ptr, int value)
{
	RegionView3D *data = (RegionView3D *)(ptr->data);
	data->persp = value;
}

int RegionView3D_is_perspective_get(PointerRNA *ptr)
{
	RegionView3D *data = (RegionView3D *)(ptr->data);
	return (((data->is_persp) & 1) != 0);
}

void RegionView3D_is_perspective_set(PointerRNA *ptr, int value)
{
	RegionView3D *data = (RegionView3D *)(ptr->data);
	if (value) data->is_persp |= 1;
	else data->is_persp &= ~1;
}

void RegionView3D_view_location_get(PointerRNA *ptr, float values[3])
{
	rna_RegionView3D_view_location_get(ptr, values);
}

void RegionView3D_view_location_set(PointerRNA *ptr, const float values[3])
{
	rna_RegionView3D_view_location_set(ptr, values);
}

void RegionView3D_view_rotation_get(PointerRNA *ptr, float values[4])
{
	rna_RegionView3D_view_rotation_get(ptr, values);
}

void RegionView3D_view_rotation_set(PointerRNA *ptr, const float values[4])
{
	rna_RegionView3D_view_rotation_set(ptr, values);
}

float RegionView3D_view_distance_get(PointerRNA *ptr)
{
	RegionView3D *data = (RegionView3D *)(ptr->data);
	return (float)(data->dist);
}

void RegionView3D_view_distance_set(PointerRNA *ptr, float value)
{
	RegionView3D *data = (RegionView3D *)(ptr->data);
	data->dist = CLAMPIS(value, 0.0f, FLT_MAX);
}

float RegionView3D_view_camera_zoom_get(PointerRNA *ptr)
{
	RegionView3D *data = (RegionView3D *)(ptr->data);
	return (float)(data->camzoom);
}

void RegionView3D_view_camera_zoom_set(PointerRNA *ptr, float value)
{
	RegionView3D *data = (RegionView3D *)(ptr->data);
	data->camzoom = CLAMPIS(value, -30.0f, 600.0f);
}

void RegionView3D_view_camera_offset_get(PointerRNA *ptr, float values[2])
{
	RegionView3D *data = (RegionView3D *)(ptr->data);
	unsigned int i;

	for (i = 0; i < 2; i++) {
		values[i] = (float)((&data->camdx)[i]);
	}
}

void RegionView3D_view_camera_offset_set(PointerRNA *ptr, const float values[2])
{
	RegionView3D *data = (RegionView3D *)(ptr->data);
	unsigned int i;

	for (i = 0; i < 2; i++) {
		(&data->camdx)[i] = values[i];
	}
}

int SpaceProperties_context_get(PointerRNA *ptr)
{
	SpaceButs *data = (SpaceButs *)(ptr->data);
	return (int)(data->mainb);
}

void SpaceProperties_context_set(PointerRNA *ptr, int value)
{
	rna_SpaceProperties_context_set(ptr, value);
}

int SpaceProperties_align_get(PointerRNA *ptr)
{
	SpaceButs *data = (SpaceButs *)(ptr->data);
	return (int)(data->align);
}

void SpaceProperties_align_set(PointerRNA *ptr, int value)
{
	rna_SpaceProperties_align_set(ptr, value);
}

int SpaceProperties_texture_context_get(PointerRNA *ptr)
{
	SpaceButs *data = (SpaceButs *)(ptr->data);
	return (int)(data->texture_context);
}

void SpaceProperties_texture_context_set(PointerRNA *ptr, int value)
{
	rna_SpaceProperties_texture_context_set(ptr, value);
}

int SpaceProperties_use_limited_texture_context_get(PointerRNA *ptr)
{
	SpaceButs *data = (SpaceButs *)(ptr->data);
	return (((data->flag) & 8) != 0);
}

void SpaceProperties_use_limited_texture_context_set(PointerRNA *ptr, int value)
{
	SpaceButs *data = (SpaceButs *)(ptr->data);
	if (value) data->flag |= 8;
	else data->flag &= ~8;
}

PointerRNA SpaceProperties_pin_id_get(PointerRNA *ptr)
{
	SpaceButs *data = (SpaceButs *)(ptr->data);
	return rna_pointer_inherit_refine(ptr, &RNA_ID, data->pinid);
}

void SpaceProperties_pin_id_set(PointerRNA *ptr, PointerRNA value)
{
	rna_SpaceProperties_pin_id_set(ptr, value);
}

int SpaceProperties_use_pin_id_get(PointerRNA *ptr)
{
	SpaceButs *data = (SpaceButs *)(ptr->data);
	return (((data->flag) & 2) != 0);
}

void SpaceProperties_use_pin_id_set(PointerRNA *ptr, int value)
{
	SpaceButs *data = (SpaceButs *)(ptr->data);
	if (value) data->flag |= 2;
	else data->flag &= ~2;
}

PointerRNA SpaceDopeSheetEditor_action_get(PointerRNA *ptr)
{
	SpaceAction *data = (SpaceAction *)(ptr->data);
	return rna_pointer_inherit_refine(ptr, &RNA_Action, data->action);
}

void SpaceDopeSheetEditor_action_set(PointerRNA *ptr, PointerRNA value)
{
	rna_SpaceDopeSheetEditor_action_set(ptr, value);
}

int SpaceDopeSheetEditor_mode_get(PointerRNA *ptr)
{
	SpaceAction *data = (SpaceAction *)(ptr->data);
	return (int)(data->mode);
}

void SpaceDopeSheetEditor_mode_set(PointerRNA *ptr, int value)
{
	SpaceAction *data = (SpaceAction *)(ptr->data);
	data->mode = value;
}

int SpaceDopeSheetEditor_show_seconds_get(PointerRNA *ptr)
{
	SpaceAction *data = (SpaceAction *)(ptr->data);
	return (((data->flag) & 4) != 0);
}

void SpaceDopeSheetEditor_show_seconds_set(PointerRNA *ptr, int value)
{
	SpaceAction *data = (SpaceAction *)(ptr->data);
	if (value) data->flag |= 4;
	else data->flag &= ~4;
}

int SpaceDopeSheetEditor_show_frame_indicator_get(PointerRNA *ptr)
{
	SpaceAction *data = (SpaceAction *)(ptr->data);
	return !(((data->flag) & 256) != 0);
}

void SpaceDopeSheetEditor_show_frame_indicator_set(PointerRNA *ptr, int value)
{
	SpaceAction *data = (SpaceAction *)(ptr->data);
	if (!value) data->flag |= 256;
	else data->flag &= ~256;
}

int SpaceDopeSheetEditor_show_sliders_get(PointerRNA *ptr)
{
	SpaceAction *data = (SpaceAction *)(ptr->data);
	return (((data->flag) & 2) != 0);
}

void SpaceDopeSheetEditor_show_sliders_set(PointerRNA *ptr, int value)
{
	SpaceAction *data = (SpaceAction *)(ptr->data);
	if (value) data->flag |= 2;
	else data->flag &= ~2;
}

int SpaceDopeSheetEditor_show_pose_markers_get(PointerRNA *ptr)
{
	SpaceAction *data = (SpaceAction *)(ptr->data);
	return (((data->flag) & 64) != 0);
}

void SpaceDopeSheetEditor_show_pose_markers_set(PointerRNA *ptr, int value)
{
	SpaceAction *data = (SpaceAction *)(ptr->data);
	if (value) data->flag |= 64;
	else data->flag &= ~64;
}

int SpaceDopeSheetEditor_show_group_colors_get(PointerRNA *ptr)
{
	SpaceAction *data = (SpaceAction *)(ptr->data);
	return !(((data->flag) & 128) != 0);
}

void SpaceDopeSheetEditor_show_group_colors_set(PointerRNA *ptr, int value)
{
	SpaceAction *data = (SpaceAction *)(ptr->data);
	if (!value) data->flag |= 128;
	else data->flag &= ~128;
}

int SpaceDopeSheetEditor_use_auto_merge_keyframes_get(PointerRNA *ptr)
{
	SpaceAction *data = (SpaceAction *)(ptr->data);
	return !(((data->flag) & 16) != 0);
}

void SpaceDopeSheetEditor_use_auto_merge_keyframes_set(PointerRNA *ptr, int value)
{
	SpaceAction *data = (SpaceAction *)(ptr->data);
	if (!value) data->flag |= 16;
	else data->flag &= ~16;
}

int SpaceDopeSheetEditor_use_realtime_update_get(PointerRNA *ptr)
{
	SpaceAction *data = (SpaceAction *)(ptr->data);
	return !(((data->flag) & 1024) != 0);
}

void SpaceDopeSheetEditor_use_realtime_update_set(PointerRNA *ptr, int value)
{
	SpaceAction *data = (SpaceAction *)(ptr->data);
	if (!value) data->flag |= 1024;
	else data->flag &= ~1024;
}

int SpaceDopeSheetEditor_use_marker_sync_get(PointerRNA *ptr)
{
	SpaceAction *data = (SpaceAction *)(ptr->data);
	return (((data->flag) & 2048) != 0);
}

void SpaceDopeSheetEditor_use_marker_sync_set(PointerRNA *ptr, int value)
{
	SpaceAction *data = (SpaceAction *)(ptr->data);
	if (value) data->flag |= 2048;
	else data->flag &= ~2048;
}

PointerRNA SpaceDopeSheetEditor_dopesheet_get(PointerRNA *ptr)
{
	SpaceAction *data = (SpaceAction *)(ptr->data);
	return rna_pointer_inherit_refine(ptr, &RNA_DopeSheet, &data->ads);
}

int SpaceDopeSheetEditor_auto_snap_get(PointerRNA *ptr)
{
	SpaceAction *data = (SpaceAction *)(ptr->data);
	return (int)(data->autosnap);
}

void SpaceDopeSheetEditor_auto_snap_set(PointerRNA *ptr, int value)
{
	SpaceAction *data = (SpaceAction *)(ptr->data);
	data->autosnap = value;
}

int SpaceGraphEditor_mode_get(PointerRNA *ptr)
{
	SpaceIpo *data = (SpaceIpo *)(ptr->data);
	return (int)(data->mode);
}

void SpaceGraphEditor_mode_set(PointerRNA *ptr, int value)
{
	SpaceIpo *data = (SpaceIpo *)(ptr->data);
	data->mode = value;
}

int SpaceGraphEditor_show_seconds_get(PointerRNA *ptr)
{
	SpaceIpo *data = (SpaceIpo *)(ptr->data);
	return (((data->flag) & 16) != 0);
}

void SpaceGraphEditor_show_seconds_set(PointerRNA *ptr, int value)
{
	SpaceIpo *data = (SpaceIpo *)(ptr->data);
	if (value) data->flag |= 16;
	else data->flag &= ~16;
}

int SpaceGraphEditor_show_frame_indicator_get(PointerRNA *ptr)
{
	SpaceIpo *data = (SpaceIpo *)(ptr->data);
	return !(((data->flag) & 8) != 0);
}

void SpaceGraphEditor_show_frame_indicator_set(PointerRNA *ptr, int value)
{
	SpaceIpo *data = (SpaceIpo *)(ptr->data);
	if (!value) data->flag |= 8;
	else data->flag &= ~8;
}

int SpaceGraphEditor_show_sliders_get(PointerRNA *ptr)
{
	SpaceIpo *data = (SpaceIpo *)(ptr->data);
	return (((data->flag) & 128) != 0);
}

void SpaceGraphEditor_show_sliders_set(PointerRNA *ptr, int value)
{
	SpaceIpo *data = (SpaceIpo *)(ptr->data);
	if (value) data->flag |= 128;
	else data->flag &= ~128;
}

int SpaceGraphEditor_show_handles_get(PointerRNA *ptr)
{
	SpaceIpo *data = (SpaceIpo *)(ptr->data);
	return !(((data->flag) & 4) != 0);
}

void SpaceGraphEditor_show_handles_set(PointerRNA *ptr, int value)
{
	SpaceIpo *data = (SpaceIpo *)(ptr->data);
	if (!value) data->flag |= 4;
	else data->flag &= ~4;
}

int SpaceGraphEditor_use_only_selected_curves_handles_get(PointerRNA *ptr)
{
	SpaceIpo *data = (SpaceIpo *)(ptr->data);
	return (((data->flag) & 32) != 0);
}

void SpaceGraphEditor_use_only_selected_curves_handles_set(PointerRNA *ptr, int value)
{
	SpaceIpo *data = (SpaceIpo *)(ptr->data);
	if (value) data->flag |= 32;
	else data->flag &= ~32;
}

int SpaceGraphEditor_use_only_selected_keyframe_handles_get(PointerRNA *ptr)
{
	SpaceIpo *data = (SpaceIpo *)(ptr->data);
	return (((data->flag) & 512) != 0);
}

void SpaceGraphEditor_use_only_selected_keyframe_handles_set(PointerRNA *ptr, int value)
{
	SpaceIpo *data = (SpaceIpo *)(ptr->data);
	if (value) data->flag |= 512;
	else data->flag &= ~512;
}

int SpaceGraphEditor_use_beauty_drawing_get(PointerRNA *ptr)
{
	SpaceIpo *data = (SpaceIpo *)(ptr->data);
	return !(((data->flag) & 4096) != 0);
}

void SpaceGraphEditor_use_beauty_drawing_set(PointerRNA *ptr, int value)
{
	SpaceIpo *data = (SpaceIpo *)(ptr->data);
	if (!value) data->flag |= 4096;
	else data->flag &= ~4096;
}

int SpaceGraphEditor_show_group_colors_get(PointerRNA *ptr)
{
	SpaceIpo *data = (SpaceIpo *)(ptr->data);
	return !(((data->flag) & 8192) != 0);
}

void SpaceGraphEditor_show_group_colors_set(PointerRNA *ptr, int value)
{
	SpaceIpo *data = (SpaceIpo *)(ptr->data);
	if (!value) data->flag |= 8192;
	else data->flag &= ~8192;
}

int SpaceGraphEditor_use_auto_merge_keyframes_get(PointerRNA *ptr)
{
	SpaceIpo *data = (SpaceIpo *)(ptr->data);
	return !(((data->flag) & 2) != 0);
}

void SpaceGraphEditor_use_auto_merge_keyframes_set(PointerRNA *ptr, int value)
{
	SpaceIpo *data = (SpaceIpo *)(ptr->data);
	if (!value) data->flag |= 2;
	else data->flag &= ~2;
}

int SpaceGraphEditor_use_realtime_update_get(PointerRNA *ptr)
{
	SpaceIpo *data = (SpaceIpo *)(ptr->data);
	return !(((data->flag) & 2048) != 0);
}

void SpaceGraphEditor_use_realtime_update_set(PointerRNA *ptr, int value)
{
	SpaceIpo *data = (SpaceIpo *)(ptr->data);
	if (!value) data->flag |= 2048;
	else data->flag &= ~2048;
}

int SpaceGraphEditor_show_cursor_get(PointerRNA *ptr)
{
	SpaceIpo *data = (SpaceIpo *)(ptr->data);
	return !(((data->flag) & 256) != 0);
}

void SpaceGraphEditor_show_cursor_set(PointerRNA *ptr, int value)
{
	SpaceIpo *data = (SpaceIpo *)(ptr->data);
	if (!value) data->flag |= 256;
	else data->flag &= ~256;
}

float SpaceGraphEditor_cursor_position_y_get(PointerRNA *ptr)
{
	SpaceIpo *data = (SpaceIpo *)(ptr->data);
	return (float)(data->cursorVal);
}

void SpaceGraphEditor_cursor_position_y_set(PointerRNA *ptr, float value)
{
	SpaceIpo *data = (SpaceIpo *)(ptr->data);
	data->cursorVal = value;
}

int SpaceGraphEditor_pivot_point_get(PointerRNA *ptr)
{
	SpaceIpo *data = (SpaceIpo *)(ptr->data);
	return (int)(data->around);
}

void SpaceGraphEditor_pivot_point_set(PointerRNA *ptr, int value)
{
	SpaceIpo *data = (SpaceIpo *)(ptr->data);
	data->around = value;
}

PointerRNA SpaceGraphEditor_dopesheet_get(PointerRNA *ptr)
{
	SpaceIpo *data = (SpaceIpo *)(ptr->data);
	return rna_pointer_inherit_refine(ptr, &RNA_DopeSheet, data->ads);
}

int SpaceGraphEditor_auto_snap_get(PointerRNA *ptr)
{
	SpaceIpo *data = (SpaceIpo *)(ptr->data);
	return (int)(data->autosnap);
}

void SpaceGraphEditor_auto_snap_set(PointerRNA *ptr, int value)
{
	SpaceIpo *data = (SpaceIpo *)(ptr->data);
	data->autosnap = value;
}

int SpaceGraphEditor_has_ghost_curves_get(PointerRNA *ptr)
{
	return rna_SpaceGraphEditor_has_ghost_curves_get(ptr);
}

void SpaceGraphEditor_has_ghost_curves_set(PointerRNA *ptr, int value)
{
	SpaceIpo *data = (SpaceIpo *)(ptr->data);
	data->flag = value;
}

int SpaceGraphEditor_use_normalization_get(PointerRNA *ptr)
{
	SpaceIpo *data = (SpaceIpo *)(ptr->data);
	return (((data->flag) & 16384) != 0);
}

void SpaceGraphEditor_use_normalization_set(PointerRNA *ptr, int value)
{
	SpaceIpo *data = (SpaceIpo *)(ptr->data);
	if (value) data->flag |= 16384;
	else data->flag &= ~16384;
}

int SpaceGraphEditor_use_auto_normalization_get(PointerRNA *ptr)
{
	SpaceIpo *data = (SpaceIpo *)(ptr->data);
	return !(((data->flag) & 32768) != 0);
}

void SpaceGraphEditor_use_auto_normalization_set(PointerRNA *ptr, int value)
{
	SpaceIpo *data = (SpaceIpo *)(ptr->data);
	if (!value) data->flag |= 32768;
	else data->flag &= ~32768;
}

int SpaceNLA_show_seconds_get(PointerRNA *ptr)
{
	SpaceNla *data = (SpaceNla *)(ptr->data);
	return (((data->flag) & 4) != 0);
}

void SpaceNLA_show_seconds_set(PointerRNA *ptr, int value)
{
	SpaceNla *data = (SpaceNla *)(ptr->data);
	if (value) data->flag |= 4;
	else data->flag &= ~4;
}

int SpaceNLA_show_frame_indicator_get(PointerRNA *ptr)
{
	SpaceNla *data = (SpaceNla *)(ptr->data);
	return !(((data->flag) & 16) != 0);
}

void SpaceNLA_show_frame_indicator_set(PointerRNA *ptr, int value)
{
	SpaceNla *data = (SpaceNla *)(ptr->data);
	if (!value) data->flag |= 16;
	else data->flag &= ~16;
}

int SpaceNLA_show_strip_curves_get(PointerRNA *ptr)
{
	SpaceNla *data = (SpaceNla *)(ptr->data);
	return !(((data->flag) & 32) != 0);
}

void SpaceNLA_show_strip_curves_set(PointerRNA *ptr, int value)
{
	SpaceNla *data = (SpaceNla *)(ptr->data);
	if (!value) data->flag |= 32;
	else data->flag &= ~32;
}

int SpaceNLA_use_realtime_update_get(PointerRNA *ptr)
{
	SpaceNla *data = (SpaceNla *)(ptr->data);
	return !(((data->flag) & 64) != 0);
}

void SpaceNLA_use_realtime_update_set(PointerRNA *ptr, int value)
{
	SpaceNla *data = (SpaceNla *)(ptr->data);
	if (!value) data->flag |= 64;
	else data->flag &= ~64;
}

PointerRNA SpaceNLA_dopesheet_get(PointerRNA *ptr)
{
	SpaceNla *data = (SpaceNla *)(ptr->data);
	return rna_pointer_inherit_refine(ptr, &RNA_DopeSheet, data->ads);
}

int SpaceNLA_auto_snap_get(PointerRNA *ptr)
{
	SpaceNla *data = (SpaceNla *)(ptr->data);
	return (int)(data->autosnap);
}

void SpaceNLA_auto_snap_set(PointerRNA *ptr, int value)
{
	SpaceNla *data = (SpaceNla *)(ptr->data);
	data->autosnap = value;
}

int SpaceTimeline_show_frame_indicator_get(PointerRNA *ptr)
{
	SpaceTime *data = (SpaceTime *)(ptr->data);
	return (((data->flag) & 2) != 0);
}

void SpaceTimeline_show_frame_indicator_set(PointerRNA *ptr, int value)
{
	SpaceTime *data = (SpaceTime *)(ptr->data);
	if (value) data->flag |= 2;
	else data->flag &= ~2;
}

int SpaceTimeline_show_seconds_get(PointerRNA *ptr)
{
	SpaceTime *data = (SpaceTime *)(ptr->data);
	return !(((data->flag) & 1) != 0);
}

void SpaceTimeline_show_seconds_set(PointerRNA *ptr, int value)
{
	SpaceTime *data = (SpaceTime *)(ptr->data);
	if (!value) data->flag |= 1;
	else data->flag &= ~1;
}

int SpaceTimeline_show_cache_get(PointerRNA *ptr)
{
	SpaceTime *data = (SpaceTime *)(ptr->data);
	return (((data->cache_display) & 1) != 0);
}

void SpaceTimeline_show_cache_set(PointerRNA *ptr, int value)
{
	SpaceTime *data = (SpaceTime *)(ptr->data);
	if (value) data->cache_display |= 1;
	else data->cache_display &= ~1;
}

int SpaceTimeline_cache_softbody_get(PointerRNA *ptr)
{
	SpaceTime *data = (SpaceTime *)(ptr->data);
	return (((data->cache_display) & 2) != 0);
}

void SpaceTimeline_cache_softbody_set(PointerRNA *ptr, int value)
{
	SpaceTime *data = (SpaceTime *)(ptr->data);
	if (value) data->cache_display |= 2;
	else data->cache_display &= ~2;
}

int SpaceTimeline_cache_particles_get(PointerRNA *ptr)
{
	SpaceTime *data = (SpaceTime *)(ptr->data);
	return (((data->cache_display) & 4) != 0);
}

void SpaceTimeline_cache_particles_set(PointerRNA *ptr, int value)
{
	SpaceTime *data = (SpaceTime *)(ptr->data);
	if (value) data->cache_display |= 4;
	else data->cache_display &= ~4;
}

int SpaceTimeline_cache_cloth_get(PointerRNA *ptr)
{
	SpaceTime *data = (SpaceTime *)(ptr->data);
	return (((data->cache_display) & 8) != 0);
}

void SpaceTimeline_cache_cloth_set(PointerRNA *ptr, int value)
{
	SpaceTime *data = (SpaceTime *)(ptr->data);
	if (value) data->cache_display |= 8;
	else data->cache_display &= ~8;
}

int SpaceTimeline_cache_smoke_get(PointerRNA *ptr)
{
	SpaceTime *data = (SpaceTime *)(ptr->data);
	return (((data->cache_display) & 16) != 0);
}

void SpaceTimeline_cache_smoke_set(PointerRNA *ptr, int value)
{
	SpaceTime *data = (SpaceTime *)(ptr->data);
	if (value) data->cache_display |= 16;
	else data->cache_display &= ~16;
}

int SpaceTimeline_cache_dynamicpaint_get(PointerRNA *ptr)
{
	SpaceTime *data = (SpaceTime *)(ptr->data);
	return (((data->cache_display) & 32) != 0);
}

void SpaceTimeline_cache_dynamicpaint_set(PointerRNA *ptr, int value)
{
	SpaceTime *data = (SpaceTime *)(ptr->data);
	if (value) data->cache_display |= 32;
	else data->cache_display &= ~32;
}

int SpaceTimeline_cache_rigidbody_get(PointerRNA *ptr)
{
	SpaceTime *data = (SpaceTime *)(ptr->data);
	return (((data->cache_display) & 64) != 0);
}

void SpaceTimeline_cache_rigidbody_set(PointerRNA *ptr, int value)
{
	SpaceTime *data = (SpaceTime *)(ptr->data);
	if (value) data->cache_display |= 64;
	else data->cache_display &= ~64;
}

int SpaceConsole_font_size_get(PointerRNA *ptr)
{
	SpaceConsole *data = (SpaceConsole *)(ptr->data);
	return (int)(data->lheight);
}

void SpaceConsole_font_size_set(PointerRNA *ptr, int value)
{
	SpaceConsole *data = (SpaceConsole *)(ptr->data);
	data->lheight = CLAMPIS(value, 8, 32);
}

int SpaceConsole_select_start_get(PointerRNA *ptr)
{
	SpaceConsole *data = (SpaceConsole *)(ptr->data);
	return (int)(data->sel_start);
}

void SpaceConsole_select_start_set(PointerRNA *ptr, int value)
{
	SpaceConsole *data = (SpaceConsole *)(ptr->data);
	data->sel_start = CLAMPIS(value, 0, INT_MAX);
}

int SpaceConsole_select_end_get(PointerRNA *ptr)
{
	SpaceConsole *data = (SpaceConsole *)(ptr->data);
	return (int)(data->sel_end);
}

void SpaceConsole_select_end_set(PointerRNA *ptr, int value)
{
	SpaceConsole *data = (SpaceConsole *)(ptr->data);
	data->sel_end = CLAMPIS(value, 0, INT_MAX);
}

void SpaceConsole_prompt_get(PointerRNA *ptr, char *value)
{
	SpaceConsole *data = (SpaceConsole *)(ptr->data);
	BLI_strncpy_utf8(value, data->prompt, 256);
}

int SpaceConsole_prompt_length(PointerRNA *ptr)
{
	SpaceConsole *data = (SpaceConsole *)(ptr->data);
	return strlen(data->prompt);
}

void SpaceConsole_prompt_set(PointerRNA *ptr, const char *value)
{
	SpaceConsole *data = (SpaceConsole *)(ptr->data);
	BLI_strncpy_utf8(data->prompt, value, 256);
}

void SpaceConsole_language_get(PointerRNA *ptr, char *value)
{
	SpaceConsole *data = (SpaceConsole *)(ptr->data);
	BLI_strncpy_utf8(value, data->language, 32);
}

int SpaceConsole_language_length(PointerRNA *ptr)
{
	SpaceConsole *data = (SpaceConsole *)(ptr->data);
	return strlen(data->language);
}

void SpaceConsole_language_set(PointerRNA *ptr, const char *value)
{
	SpaceConsole *data = (SpaceConsole *)(ptr->data);
	BLI_strncpy_utf8(data->language, value, 32);
}

static PointerRNA SpaceConsole_history_get(CollectionPropertyIterator *iter)
{
	return rna_pointer_inherit_refine(&iter->parent, &RNA_ConsoleLine, rna_iterator_listbase_get(iter));
}

void SpaceConsole_history_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{
	SpaceConsole *data = (SpaceConsole *)(ptr->data);

	memset(iter, 0, sizeof(*iter));
	iter->parent = *ptr;
	iter->prop = (PropertyRNA *)&rna_SpaceConsole_history;

	rna_iterator_listbase_begin(iter, &data->history, NULL);

	if (iter->valid)
		iter->ptr = SpaceConsole_history_get(iter);
}

void SpaceConsole_history_next(CollectionPropertyIterator *iter)
{
	rna_iterator_listbase_next(iter);

	if (iter->valid)
		iter->ptr = SpaceConsole_history_get(iter);
}

void SpaceConsole_history_end(CollectionPropertyIterator *iter)
{
	rna_iterator_listbase_end(iter);
}

int SpaceConsole_history_lookup_int(PointerRNA *ptr, int index, PointerRNA *r_ptr)
{
	int found = 0;
	CollectionPropertyIterator iter;

	SpaceConsole_history_begin(&iter, ptr);

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
		if (found) *r_ptr = SpaceConsole_history_get(&iter);
	}

	SpaceConsole_history_end(&iter);

	return found;
}

static PointerRNA SpaceConsole_scrollback_get(CollectionPropertyIterator *iter)
{
	return rna_pointer_inherit_refine(&iter->parent, &RNA_ConsoleLine, rna_iterator_listbase_get(iter));
}

void SpaceConsole_scrollback_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{
	SpaceConsole *data = (SpaceConsole *)(ptr->data);

	memset(iter, 0, sizeof(*iter));
	iter->parent = *ptr;
	iter->prop = (PropertyRNA *)&rna_SpaceConsole_scrollback;

	rna_iterator_listbase_begin(iter, &data->scrollback, NULL);

	if (iter->valid)
		iter->ptr = SpaceConsole_scrollback_get(iter);
}

void SpaceConsole_scrollback_next(CollectionPropertyIterator *iter)
{
	rna_iterator_listbase_next(iter);

	if (iter->valid)
		iter->ptr = SpaceConsole_scrollback_get(iter);
}

void SpaceConsole_scrollback_end(CollectionPropertyIterator *iter)
{
	rna_iterator_listbase_end(iter);
}

int SpaceConsole_scrollback_lookup_int(PointerRNA *ptr, int index, PointerRNA *r_ptr)
{
	int found = 0;
	CollectionPropertyIterator iter;

	SpaceConsole_scrollback_begin(&iter, ptr);

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
		if (found) *r_ptr = SpaceConsole_scrollback_get(&iter);
	}

	SpaceConsole_scrollback_end(&iter);

	return found;
}

static PointerRNA ConsoleLine_rna_properties_get(CollectionPropertyIterator *iter)
{
	return rna_builtin_properties_get(iter);
}

void ConsoleLine_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

	memset(iter, 0, sizeof(*iter));
	iter->parent = *ptr;
	iter->prop = (PropertyRNA *)&rna_ConsoleLine_rna_properties;

	rna_builtin_properties_begin(iter, ptr);

	if (iter->valid)
		iter->ptr = ConsoleLine_rna_properties_get(iter);
}

void ConsoleLine_rna_properties_next(CollectionPropertyIterator *iter)
{
	rna_builtin_properties_next(iter);

	if (iter->valid)
		iter->ptr = ConsoleLine_rna_properties_get(iter);
}

void ConsoleLine_rna_properties_end(CollectionPropertyIterator *iter)
{
	rna_iterator_listbase_end(iter);
}

int ConsoleLine_rna_properties_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
	return rna_builtin_properties_lookup_string(ptr, key, r_ptr);
}

PointerRNA ConsoleLine_rna_type_get(PointerRNA *ptr)
{
	return rna_builtin_type_get(ptr);
}

void ConsoleLine_body_get(PointerRNA *ptr, char *value)
{
	rna_ConsoleLine_body_get(ptr, value);
}

int ConsoleLine_body_length(PointerRNA *ptr)
{
	return rna_ConsoleLine_body_length(ptr);
}

void ConsoleLine_body_set(PointerRNA *ptr, const char *value)
{
	rna_ConsoleLine_body_set(ptr, value);
}

int ConsoleLine_current_character_get(PointerRNA *ptr)
{
	ConsoleLine *data = (ConsoleLine *)(ptr->data);
	return (int)(data->cursor);
}

void ConsoleLine_current_character_set(PointerRNA *ptr, int value)
{
	ConsoleLine *data = (ConsoleLine *)(ptr->data);
	int prop_clamp_min = INT_MIN, prop_clamp_max = INT_MAX, prop_soft_min, prop_soft_max;
	rna_ConsoleLine_cursor_index_range(ptr, &prop_clamp_min, &prop_clamp_max, &prop_soft_min, &prop_soft_max);
	data->cursor = CLAMPIS(value, prop_clamp_min, prop_clamp_max);}

int ConsoleLine_type_get(PointerRNA *ptr)
{
	ConsoleLine *data = (ConsoleLine *)(ptr->data);
	return (int)(data->type);
}

void ConsoleLine_type_set(PointerRNA *ptr, int value)
{
	ConsoleLine *data = (ConsoleLine *)(ptr->data);
	data->type = value;
}

int SpaceInfo_show_report_debug_get(PointerRNA *ptr)
{
	SpaceInfo *data = (SpaceInfo *)(ptr->data);
	return (((data->rpt_mask) & 1) != 0);
}

void SpaceInfo_show_report_debug_set(PointerRNA *ptr, int value)
{
	SpaceInfo *data = (SpaceInfo *)(ptr->data);
	if (value) data->rpt_mask |= 1;
	else data->rpt_mask &= ~1;
}

int SpaceInfo_show_report_info_get(PointerRNA *ptr)
{
	SpaceInfo *data = (SpaceInfo *)(ptr->data);
	return (((data->rpt_mask) & 2) != 0);
}

void SpaceInfo_show_report_info_set(PointerRNA *ptr, int value)
{
	SpaceInfo *data = (SpaceInfo *)(ptr->data);
	if (value) data->rpt_mask |= 2;
	else data->rpt_mask &= ~2;
}

int SpaceInfo_show_report_operator_get(PointerRNA *ptr)
{
	SpaceInfo *data = (SpaceInfo *)(ptr->data);
	return (((data->rpt_mask) & 4) != 0);
}

void SpaceInfo_show_report_operator_set(PointerRNA *ptr, int value)
{
	SpaceInfo *data = (SpaceInfo *)(ptr->data);
	if (value) data->rpt_mask |= 4;
	else data->rpt_mask &= ~4;
}

int SpaceInfo_show_report_warning_get(PointerRNA *ptr)
{
	SpaceInfo *data = (SpaceInfo *)(ptr->data);
	return (((data->rpt_mask) & 8) != 0);
}

void SpaceInfo_show_report_warning_set(PointerRNA *ptr, int value)
{
	SpaceInfo *data = (SpaceInfo *)(ptr->data);
	if (value) data->rpt_mask |= 8;
	else data->rpt_mask &= ~8;
}

int SpaceInfo_show_report_error_get(PointerRNA *ptr)
{
	SpaceInfo *data = (SpaceInfo *)(ptr->data);
	return (((data->rpt_mask) & 16) != 0);
}

void SpaceInfo_show_report_error_set(PointerRNA *ptr, int value)
{
	SpaceInfo *data = (SpaceInfo *)(ptr->data);
	if (value) data->rpt_mask |= 16;
	else data->rpt_mask &= ~16;
}

int SpaceUserPreferences_filter_type_get(PointerRNA *ptr)
{
	SpaceUserPref *data = (SpaceUserPref *)(ptr->data);
	return (int)(data->filter_type);
}

void SpaceUserPreferences_filter_type_set(PointerRNA *ptr, int value)
{
	SpaceUserPref *data = (SpaceUserPref *)(ptr->data);
	data->filter_type = value;
}

void SpaceUserPreferences_filter_text_get(PointerRNA *ptr, char *value)
{
	SpaceUserPref *data = (SpaceUserPref *)(ptr->data);
	BLI_strncpy_utf8(value, data->filter, 64);
}

int SpaceUserPreferences_filter_text_length(PointerRNA *ptr)
{
	SpaceUserPref *data = (SpaceUserPref *)(ptr->data);
	return strlen(data->filter);
}

void SpaceUserPreferences_filter_text_set(PointerRNA *ptr, const char *value)
{
	SpaceUserPref *data = (SpaceUserPref *)(ptr->data);
	BLI_strncpy_utf8(data->filter, value, 64);
}

static PointerRNA NodeTreePath_rna_properties_get(CollectionPropertyIterator *iter)
{
	return rna_builtin_properties_get(iter);
}

void NodeTreePath_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

	memset(iter, 0, sizeof(*iter));
	iter->parent = *ptr;
	iter->prop = (PropertyRNA *)&rna_NodeTreePath_rna_properties;

	rna_builtin_properties_begin(iter, ptr);

	if (iter->valid)
		iter->ptr = NodeTreePath_rna_properties_get(iter);
}

void NodeTreePath_rna_properties_next(CollectionPropertyIterator *iter)
{
	rna_builtin_properties_next(iter);

	if (iter->valid)
		iter->ptr = NodeTreePath_rna_properties_get(iter);
}

void NodeTreePath_rna_properties_end(CollectionPropertyIterator *iter)
{
	rna_iterator_listbase_end(iter);
}

int NodeTreePath_rna_properties_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
	return rna_builtin_properties_lookup_string(ptr, key, r_ptr);
}

PointerRNA NodeTreePath_rna_type_get(PointerRNA *ptr)
{
	return rna_builtin_type_get(ptr);
}

PointerRNA NodeTreePath_node_tree_get(PointerRNA *ptr)
{
	bNodeTreePath *data = (bNodeTreePath *)(ptr->data);
	return rna_pointer_inherit_refine(ptr, &RNA_NodeTree, data->nodetree);
}

int SpaceNodeEditor_tree_type_get(PointerRNA *ptr)
{
	return rna_SpaceNodeEditor_tree_type_get(ptr);
}

void SpaceNodeEditor_tree_type_set(PointerRNA *ptr, int value)
{
	rna_SpaceNodeEditor_tree_type_set(ptr, value);
}

int SpaceNodeEditor_texture_type_get(PointerRNA *ptr)
{
	SpaceNode *data = (SpaceNode *)(ptr->data);
	return (int)(data->texfrom);
}

void SpaceNodeEditor_texture_type_set(PointerRNA *ptr, int value)
{
	SpaceNode *data = (SpaceNode *)(ptr->data);
	data->texfrom = value;
}

int SpaceNodeEditor_shader_type_get(PointerRNA *ptr)
{
	SpaceNode *data = (SpaceNode *)(ptr->data);
	return (int)(data->shaderfrom);
}

void SpaceNodeEditor_shader_type_set(PointerRNA *ptr, int value)
{
	SpaceNode *data = (SpaceNode *)(ptr->data);
	data->shaderfrom = value;
}

PointerRNA SpaceNodeEditor_id_get(PointerRNA *ptr)
{
	SpaceNode *data = (SpaceNode *)(ptr->data);
	return rna_pointer_inherit_refine(ptr, &RNA_ID, data->id);
}

PointerRNA SpaceNodeEditor_id_from_get(PointerRNA *ptr)
{
	SpaceNode *data = (SpaceNode *)(ptr->data);
	return rna_pointer_inherit_refine(ptr, &RNA_ID, data->from);
}

static PointerRNA SpaceNodeEditor_path_get(CollectionPropertyIterator *iter)
{
	return rna_pointer_inherit_refine(&iter->parent, &RNA_NodeTreePath, rna_iterator_listbase_get(iter));
}

void SpaceNodeEditor_path_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{
	SpaceNode *data = (SpaceNode *)(ptr->data);

	memset(iter, 0, sizeof(*iter));
	iter->parent = *ptr;
	iter->prop = (PropertyRNA *)&rna_SpaceNodeEditor_path;

	rna_iterator_listbase_begin(iter, &data->treepath, NULL);

	if (iter->valid)
		iter->ptr = SpaceNodeEditor_path_get(iter);
}

void SpaceNodeEditor_path_next(CollectionPropertyIterator *iter)
{
	rna_iterator_listbase_next(iter);

	if (iter->valid)
		iter->ptr = SpaceNodeEditor_path_get(iter);
}

void SpaceNodeEditor_path_end(CollectionPropertyIterator *iter)
{
	rna_iterator_listbase_end(iter);
}

int SpaceNodeEditor_path_lookup_int(PointerRNA *ptr, int index, PointerRNA *r_ptr)
{
	int found = 0;
	CollectionPropertyIterator iter;

	SpaceNodeEditor_path_begin(&iter, ptr);

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
		if (found) *r_ptr = SpaceNodeEditor_path_get(&iter);
	}

	SpaceNodeEditor_path_end(&iter);

	return found;
}

PointerRNA SpaceNodeEditor_node_tree_get(PointerRNA *ptr)
{
	SpaceNode *data = (SpaceNode *)(ptr->data);
	return rna_pointer_inherit_refine(ptr, &RNA_NodeTree, data->nodetree);
}

void SpaceNodeEditor_node_tree_set(PointerRNA *ptr, PointerRNA value)
{
	rna_SpaceNodeEditor_node_tree_set(ptr, value);
}

PointerRNA SpaceNodeEditor_edit_tree_get(PointerRNA *ptr)
{
	SpaceNode *data = (SpaceNode *)(ptr->data);
	return rna_pointer_inherit_refine(ptr, &RNA_NodeTree, data->edittree);
}

int SpaceNodeEditor_pin_get(PointerRNA *ptr)
{
	SpaceNode *data = (SpaceNode *)(ptr->data);
	return (((data->flag) & 4096) != 0);
}

void SpaceNodeEditor_pin_set(PointerRNA *ptr, int value)
{
	SpaceNode *data = (SpaceNode *)(ptr->data);
	if (value) data->flag |= 4096;
	else data->flag &= ~4096;
}

int SpaceNodeEditor_show_backdrop_get(PointerRNA *ptr)
{
	SpaceNode *data = (SpaceNode *)(ptr->data);
	return (((data->flag) & 2) != 0);
}

void SpaceNodeEditor_show_backdrop_set(PointerRNA *ptr, int value)
{
	SpaceNode *data = (SpaceNode *)(ptr->data);
	if (value) data->flag |= 2;
	else data->flag &= ~2;
}

int SpaceNodeEditor_show_grease_pencil_get(PointerRNA *ptr)
{
	SpaceNode *data = (SpaceNode *)(ptr->data);
	return (((data->flag) & 4) != 0);
}

void SpaceNodeEditor_show_grease_pencil_set(PointerRNA *ptr, int value)
{
	SpaceNode *data = (SpaceNode *)(ptr->data);
	if (value) data->flag |= 4;
	else data->flag &= ~4;
}

int SpaceNodeEditor_use_auto_render_get(PointerRNA *ptr)
{
	SpaceNode *data = (SpaceNode *)(ptr->data);
	return (((data->flag) & 32) != 0);
}

void SpaceNodeEditor_use_auto_render_set(PointerRNA *ptr, int value)
{
	SpaceNode *data = (SpaceNode *)(ptr->data);
	if (value) data->flag |= 32;
	else data->flag &= ~32;
}

float SpaceNodeEditor_backdrop_zoom_get(PointerRNA *ptr)
{
	SpaceNode *data = (SpaceNode *)(ptr->data);
	return (float)(data->zoom);
}

void SpaceNodeEditor_backdrop_zoom_set(PointerRNA *ptr, float value)
{
	SpaceNode *data = (SpaceNode *)(ptr->data);
	data->zoom = CLAMPIS(value, 0.0099999998f, FLT_MAX);
}

float SpaceNodeEditor_backdrop_x_get(PointerRNA *ptr)
{
	SpaceNode *data = (SpaceNode *)(ptr->data);
	return (float)(data->xof);
}

void SpaceNodeEditor_backdrop_x_set(PointerRNA *ptr, float value)
{
	SpaceNode *data = (SpaceNode *)(ptr->data);
	data->xof = value;
}

float SpaceNodeEditor_backdrop_y_get(PointerRNA *ptr)
{
	SpaceNode *data = (SpaceNode *)(ptr->data);
	return (float)(data->yof);
}

void SpaceNodeEditor_backdrop_y_set(PointerRNA *ptr, float value)
{
	SpaceNode *data = (SpaceNode *)(ptr->data);
	data->yof = value;
}

int SpaceNodeEditor_backdrop_channels_get(PointerRNA *ptr)
{
	SpaceNode *data = (SpaceNode *)(ptr->data);
	return ((data->flag) & 920);
}

void SpaceNodeEditor_backdrop_channels_set(PointerRNA *ptr, int value)
{
	SpaceNode *data = (SpaceNode *)(ptr->data);
	data->flag &= ~920;
	data->flag |= value;
}

int SpaceNodeEditor_show_highlight_get(PointerRNA *ptr)
{
	SpaceNode *data = (SpaceNode *)(ptr->data);
	return (((data->flag) & 64) != 0);
}

void SpaceNodeEditor_show_highlight_set(PointerRNA *ptr, int value)
{
	SpaceNode *data = (SpaceNode *)(ptr->data);
	if (value) data->flag |= 64;
	else data->flag &= ~64;
}

void SpaceNodeEditor_cursor_location_get(PointerRNA *ptr, float values[2])
{
	SpaceNode *data = (SpaceNode *)(ptr->data);
	unsigned int i;

	for (i = 0; i < 2; i++) {
		values[i] = (float)(((float *)data->cursor)[i]);
	}
}

void SpaceNodeEditor_cursor_location_set(PointerRNA *ptr, const float values[2])
{
	SpaceNode *data = (SpaceNode *)(ptr->data);
	unsigned int i;

	for (i = 0; i < 2; i++) {
		((float *)data->cursor)[i] = values[i];
	}
}

static PointerRNA SpaceNodeEditorPath_rna_properties_get(CollectionPropertyIterator *iter)
{
	return rna_builtin_properties_get(iter);
}

void SpaceNodeEditorPath_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

	memset(iter, 0, sizeof(*iter));
	iter->parent = *ptr;
	iter->prop = (PropertyRNA *)&rna_SpaceNodeEditorPath_rna_properties;

	rna_builtin_properties_begin(iter, ptr);

	if (iter->valid)
		iter->ptr = SpaceNodeEditorPath_rna_properties_get(iter);
}

void SpaceNodeEditorPath_rna_properties_next(CollectionPropertyIterator *iter)
{
	rna_builtin_properties_next(iter);

	if (iter->valid)
		iter->ptr = SpaceNodeEditorPath_rna_properties_get(iter);
}

void SpaceNodeEditorPath_rna_properties_end(CollectionPropertyIterator *iter)
{
	rna_iterator_listbase_end(iter);
}

int SpaceNodeEditorPath_rna_properties_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
	return rna_builtin_properties_lookup_string(ptr, key, r_ptr);
}

PointerRNA SpaceNodeEditorPath_rna_type_get(PointerRNA *ptr)
{
	return rna_builtin_type_get(ptr);
}

void SpaceNodeEditorPath_to_string_get(PointerRNA *ptr, char *value)
{
	rna_SpaceNodeEditor_path_get(ptr, value);
}

int SpaceNodeEditorPath_to_string_length(PointerRNA *ptr)
{
	return rna_SpaceNodeEditor_path_length(ptr);
}

int SpaceLogicEditor_show_sensors_selected_objects_get(PointerRNA *ptr)
{
	SpaceLogic *data = (SpaceLogic *)(ptr->data);
	return (((data->scaflag) & 1) != 0);
}

void SpaceLogicEditor_show_sensors_selected_objects_set(PointerRNA *ptr, int value)
{
	SpaceLogic *data = (SpaceLogic *)(ptr->data);
	if (value) data->scaflag |= 1;
	else data->scaflag &= ~1;
}

int SpaceLogicEditor_show_sensors_active_object_get(PointerRNA *ptr)
{
	SpaceLogic *data = (SpaceLogic *)(ptr->data);
	return (((data->scaflag) & 2) != 0);
}

void SpaceLogicEditor_show_sensors_active_object_set(PointerRNA *ptr, int value)
{
	SpaceLogic *data = (SpaceLogic *)(ptr->data);
	if (value) data->scaflag |= 2;
	else data->scaflag &= ~2;
}

int SpaceLogicEditor_show_sensors_linked_controller_get(PointerRNA *ptr)
{
	SpaceLogic *data = (SpaceLogic *)(ptr->data);
	return (((data->scaflag) & 4) != 0);
}

void SpaceLogicEditor_show_sensors_linked_controller_set(PointerRNA *ptr, int value)
{
	SpaceLogic *data = (SpaceLogic *)(ptr->data);
	if (value) data->scaflag |= 4;
	else data->scaflag &= ~4;
}

int SpaceLogicEditor_show_sensors_active_states_get(PointerRNA *ptr)
{
	SpaceLogic *data = (SpaceLogic *)(ptr->data);
	return (((data->scaflag) & 512) != 0);
}

void SpaceLogicEditor_show_sensors_active_states_set(PointerRNA *ptr, int value)
{
	SpaceLogic *data = (SpaceLogic *)(ptr->data);
	if (value) data->scaflag |= 512;
	else data->scaflag &= ~512;
}

int SpaceLogicEditor_show_controllers_selected_objects_get(PointerRNA *ptr)
{
	SpaceLogic *data = (SpaceLogic *)(ptr->data);
	return (((data->scaflag) & 8) != 0);
}

void SpaceLogicEditor_show_controllers_selected_objects_set(PointerRNA *ptr, int value)
{
	SpaceLogic *data = (SpaceLogic *)(ptr->data);
	if (value) data->scaflag |= 8;
	else data->scaflag &= ~8;
}

int SpaceLogicEditor_show_controllers_active_object_get(PointerRNA *ptr)
{
	SpaceLogic *data = (SpaceLogic *)(ptr->data);
	return (((data->scaflag) & 16) != 0);
}

void SpaceLogicEditor_show_controllers_active_object_set(PointerRNA *ptr, int value)
{
	SpaceLogic *data = (SpaceLogic *)(ptr->data);
	if (value) data->scaflag |= 16;
	else data->scaflag &= ~16;
}

int SpaceLogicEditor_show_controllers_linked_controller_get(PointerRNA *ptr)
{
	SpaceLogic *data = (SpaceLogic *)(ptr->data);
	return (((data->scaflag) & 32) != 0);
}

void SpaceLogicEditor_show_controllers_linked_controller_set(PointerRNA *ptr, int value)
{
	SpaceLogic *data = (SpaceLogic *)(ptr->data);
	if (value) data->scaflag |= 32;
	else data->scaflag &= ~32;
}

int SpaceLogicEditor_show_actuators_selected_objects_get(PointerRNA *ptr)
{
	SpaceLogic *data = (SpaceLogic *)(ptr->data);
	return (((data->scaflag) & 64) != 0);
}

void SpaceLogicEditor_show_actuators_selected_objects_set(PointerRNA *ptr, int value)
{
	SpaceLogic *data = (SpaceLogic *)(ptr->data);
	if (value) data->scaflag |= 64;
	else data->scaflag &= ~64;
}

int SpaceLogicEditor_show_actuators_active_object_get(PointerRNA *ptr)
{
	SpaceLogic *data = (SpaceLogic *)(ptr->data);
	return (((data->scaflag) & 128) != 0);
}

void SpaceLogicEditor_show_actuators_active_object_set(PointerRNA *ptr, int value)
{
	SpaceLogic *data = (SpaceLogic *)(ptr->data);
	if (value) data->scaflag |= 128;
	else data->scaflag &= ~128;
}

int SpaceLogicEditor_show_actuators_linked_controller_get(PointerRNA *ptr)
{
	SpaceLogic *data = (SpaceLogic *)(ptr->data);
	return (((data->scaflag) & 256) != 0);
}

void SpaceLogicEditor_show_actuators_linked_controller_set(PointerRNA *ptr, int value)
{
	SpaceLogic *data = (SpaceLogic *)(ptr->data);
	if (value) data->scaflag |= 256;
	else data->scaflag &= ~256;
}

int SpaceLogicEditor_show_actuators_active_states_get(PointerRNA *ptr)
{
	SpaceLogic *data = (SpaceLogic *)(ptr->data);
	return (((data->scaflag) & 1024) != 0);
}

void SpaceLogicEditor_show_actuators_active_states_set(PointerRNA *ptr, int value)
{
	SpaceLogic *data = (SpaceLogic *)(ptr->data);
	if (value) data->scaflag |= 1024;
	else data->scaflag &= ~1024;
}

PointerRNA SpaceClipEditor_clip_get(PointerRNA *ptr)
{
	SpaceClip *data = (SpaceClip *)(ptr->data);
	return rna_pointer_inherit_refine(ptr, &RNA_MovieClip, data->clip);
}

void SpaceClipEditor_clip_set(PointerRNA *ptr, PointerRNA value)
{
	rna_SpaceClipEditor_clip_set(ptr, value);
}

PointerRNA SpaceClipEditor_clip_user_get(PointerRNA *ptr)
{
	SpaceClip *data = (SpaceClip *)(ptr->data);
	return rna_pointer_inherit_refine(ptr, &RNA_MovieClipUser, &data->user);
}

PointerRNA SpaceClipEditor_mask_get(PointerRNA *ptr)
{
	SpaceClip *data = (SpaceClip *)(ptr->data);
	return rna_pointer_inherit_refine(ptr, &RNA_Mask, data->mask_info.mask);
}

void SpaceClipEditor_mask_set(PointerRNA *ptr, PointerRNA value)
{
	rna_SpaceClipEditor_mask_set(ptr, value);
}

int SpaceClipEditor_mask_draw_type_get(PointerRNA *ptr)
{
	SpaceClip *data = (SpaceClip *)(ptr->data);
	return (int)(data->mask_info.draw_type);
}

void SpaceClipEditor_mask_draw_type_set(PointerRNA *ptr, int value)
{
	SpaceClip *data = (SpaceClip *)(ptr->data);
	data->mask_info.draw_type = value;
}

int SpaceClipEditor_show_mask_smooth_get(PointerRNA *ptr)
{
	SpaceClip *data = (SpaceClip *)(ptr->data);
	return (((data->mask_info.draw_flag) & 1) != 0);
}

void SpaceClipEditor_show_mask_smooth_set(PointerRNA *ptr, int value)
{
	SpaceClip *data = (SpaceClip *)(ptr->data);
	if (value) data->mask_info.draw_flag |= 1;
	else data->mask_info.draw_flag &= ~1;
}

int SpaceClipEditor_show_mask_overlay_get(PointerRNA *ptr)
{
	SpaceClip *data = (SpaceClip *)(ptr->data);
	return (((data->mask_info.draw_flag) & 2) != 0);
}

void SpaceClipEditor_show_mask_overlay_set(PointerRNA *ptr, int value)
{
	SpaceClip *data = (SpaceClip *)(ptr->data);
	if (value) data->mask_info.draw_flag |= 2;
	else data->mask_info.draw_flag &= ~2;
}

int SpaceClipEditor_mask_overlay_mode_get(PointerRNA *ptr)
{
	SpaceClip *data = (SpaceClip *)(ptr->data);
	return (int)(data->mask_info.overlay_mode);
}

void SpaceClipEditor_mask_overlay_mode_set(PointerRNA *ptr, int value)
{
	SpaceClip *data = (SpaceClip *)(ptr->data);
	data->mask_info.overlay_mode = value;
}

int SpaceClipEditor_mode_get(PointerRNA *ptr)
{
	SpaceClip *data = (SpaceClip *)(ptr->data);
	return (int)(data->mode);
}

void SpaceClipEditor_mode_set(PointerRNA *ptr, int value)
{
	SpaceClip *data = (SpaceClip *)(ptr->data);
	data->mode = value;
}

int SpaceClipEditor_view_get(PointerRNA *ptr)
{
	SpaceClip *data = (SpaceClip *)(ptr->data);
	return (int)(data->view);
}

void SpaceClipEditor_view_set(PointerRNA *ptr, int value)
{
	SpaceClip *data = (SpaceClip *)(ptr->data);
	data->view = value;
}

int SpaceClipEditor_show_marker_pattern_get(PointerRNA *ptr)
{
	SpaceClip *data = (SpaceClip *)(ptr->data);
	return (((data->flag) & 1) != 0);
}

void SpaceClipEditor_show_marker_pattern_set(PointerRNA *ptr, int value)
{
	SpaceClip *data = (SpaceClip *)(ptr->data);
	if (value) data->flag |= 1;
	else data->flag &= ~1;
}

int SpaceClipEditor_show_marker_search_get(PointerRNA *ptr)
{
	SpaceClip *data = (SpaceClip *)(ptr->data);
	return (((data->flag) & 2) != 0);
}

void SpaceClipEditor_show_marker_search_set(PointerRNA *ptr, int value)
{
	SpaceClip *data = (SpaceClip *)(ptr->data);
	if (value) data->flag |= 2;
	else data->flag &= ~2;
}

int SpaceClipEditor_lock_selection_get(PointerRNA *ptr)
{
	SpaceClip *data = (SpaceClip *)(ptr->data);
	return (((data->flag) & 4) != 0);
}

void SpaceClipEditor_lock_selection_set(PointerRNA *ptr, int value)
{
	SpaceClip *data = (SpaceClip *)(ptr->data);
	if (value) data->flag |= 4;
	else data->flag &= ~4;
}

int SpaceClipEditor_lock_time_cursor_get(PointerRNA *ptr)
{
	SpaceClip *data = (SpaceClip *)(ptr->data);
	return (((data->flag) & 131072) != 0);
}

void SpaceClipEditor_lock_time_cursor_set(PointerRNA *ptr, int value)
{
	SpaceClip *data = (SpaceClip *)(ptr->data);
	if (value) data->flag |= 131072;
	else data->flag &= ~131072;
}

int SpaceClipEditor_show_track_path_get(PointerRNA *ptr)
{
	SpaceClip *data = (SpaceClip *)(ptr->data);
	return (((data->flag) & 16) != 0);
}

void SpaceClipEditor_show_track_path_set(PointerRNA *ptr, int value)
{
	SpaceClip *data = (SpaceClip *)(ptr->data);
	if (value) data->flag |= 16;
	else data->flag &= ~16;
}

int SpaceClipEditor_path_length_get(PointerRNA *ptr)
{
	SpaceClip *data = (SpaceClip *)(ptr->data);
	return (int)(data->path_length);
}

void SpaceClipEditor_path_length_set(PointerRNA *ptr, int value)
{
	SpaceClip *data = (SpaceClip *)(ptr->data);
	data->path_length = CLAMPIS(value, 0, 50);
}

int SpaceClipEditor_show_tiny_markers_get(PointerRNA *ptr)
{
	SpaceClip *data = (SpaceClip *)(ptr->data);
	return (((data->flag) & 8) != 0);
}

void SpaceClipEditor_show_tiny_markers_set(PointerRNA *ptr, int value)
{
	SpaceClip *data = (SpaceClip *)(ptr->data);
	if (value) data->flag |= 8;
	else data->flag &= ~8;
}

int SpaceClipEditor_show_bundles_get(PointerRNA *ptr)
{
	SpaceClip *data = (SpaceClip *)(ptr->data);
	return (((data->flag) & 32) != 0);
}

void SpaceClipEditor_show_bundles_set(PointerRNA *ptr, int value)
{
	SpaceClip *data = (SpaceClip *)(ptr->data);
	if (value) data->flag |= 32;
	else data->flag &= ~32;
}

int SpaceClipEditor_use_mute_footage_get(PointerRNA *ptr)
{
	SpaceClip *data = (SpaceClip *)(ptr->data);
	return (((data->flag) & 64) != 0);
}

void SpaceClipEditor_use_mute_footage_set(PointerRNA *ptr, int value)
{
	SpaceClip *data = (SpaceClip *)(ptr->data);
	if (value) data->flag |= 64;
	else data->flag &= ~64;
}

int SpaceClipEditor_show_disabled_get(PointerRNA *ptr)
{
	SpaceClip *data = (SpaceClip *)(ptr->data);
	return !(((data->flag) & 128) != 0);
}

void SpaceClipEditor_show_disabled_set(PointerRNA *ptr, int value)
{
	SpaceClip *data = (SpaceClip *)(ptr->data);
	if (!value) data->flag |= 128;
	else data->flag &= ~128;
}

PointerRNA SpaceClipEditor_scopes_get(PointerRNA *ptr)
{
	SpaceClip *data = (SpaceClip *)(ptr->data);
	return rna_pointer_inherit_refine(ptr, &RNA_MovieClipScopes, &data->scopes);
}

int SpaceClipEditor_show_names_get(PointerRNA *ptr)
{
	SpaceClip *data = (SpaceClip *)(ptr->data);
	return (((data->flag) & 256) != 0);
}

void SpaceClipEditor_show_names_set(PointerRNA *ptr, int value)
{
	SpaceClip *data = (SpaceClip *)(ptr->data);
	if (value) data->flag |= 256;
	else data->flag &= ~256;
}

int SpaceClipEditor_show_grid_get(PointerRNA *ptr)
{
	SpaceClip *data = (SpaceClip *)(ptr->data);
	return (((data->flag) & 512) != 0);
}

void SpaceClipEditor_show_grid_set(PointerRNA *ptr, int value)
{
	SpaceClip *data = (SpaceClip *)(ptr->data);
	if (value) data->flag |= 512;
	else data->flag &= ~512;
}

int SpaceClipEditor_show_stable_get(PointerRNA *ptr)
{
	SpaceClip *data = (SpaceClip *)(ptr->data);
	return (((data->flag) & 1024) != 0);
}

void SpaceClipEditor_show_stable_set(PointerRNA *ptr, int value)
{
	SpaceClip *data = (SpaceClip *)(ptr->data);
	if (value) data->flag |= 1024;
	else data->flag &= ~1024;
}

int SpaceClipEditor_use_manual_calibration_get(PointerRNA *ptr)
{
	SpaceClip *data = (SpaceClip *)(ptr->data);
	return (((data->flag) & 2048) != 0);
}

void SpaceClipEditor_use_manual_calibration_set(PointerRNA *ptr, int value)
{
	SpaceClip *data = (SpaceClip *)(ptr->data);
	if (value) data->flag |= 2048;
	else data->flag &= ~2048;
}

int SpaceClipEditor_show_grease_pencil_get(PointerRNA *ptr)
{
	SpaceClip *data = (SpaceClip *)(ptr->data);
	return (((data->flag) & 4096) != 0);
}

void SpaceClipEditor_show_grease_pencil_set(PointerRNA *ptr, int value)
{
	SpaceClip *data = (SpaceClip *)(ptr->data);
	if (value) data->flag |= 4096;
	else data->flag &= ~4096;
}

int SpaceClipEditor_show_filters_get(PointerRNA *ptr)
{
	SpaceClip *data = (SpaceClip *)(ptr->data);
	return (((data->flag) & 8192) != 0);
}

void SpaceClipEditor_show_filters_set(PointerRNA *ptr, int value)
{
	SpaceClip *data = (SpaceClip *)(ptr->data);
	if (value) data->flag |= 8192;
	else data->flag &= ~8192;
}

int SpaceClipEditor_show_graph_frames_get(PointerRNA *ptr)
{
	SpaceClip *data = (SpaceClip *)(ptr->data);
	return (((data->flag) & 16384) != 0);
}

void SpaceClipEditor_show_graph_frames_set(PointerRNA *ptr, int value)
{
	SpaceClip *data = (SpaceClip *)(ptr->data);
	if (value) data->flag |= 16384;
	else data->flag &= ~16384;
}

int SpaceClipEditor_show_graph_tracks_motion_get(PointerRNA *ptr)
{
	SpaceClip *data = (SpaceClip *)(ptr->data);
	return (((data->flag) & 32768) != 0);
}

void SpaceClipEditor_show_graph_tracks_motion_set(PointerRNA *ptr, int value)
{
	SpaceClip *data = (SpaceClip *)(ptr->data);
	if (value) data->flag |= 32768;
	else data->flag &= ~32768;
}

int SpaceClipEditor_show_graph_tracks_error_get(PointerRNA *ptr)
{
	SpaceClip *data = (SpaceClip *)(ptr->data);
	return (((data->flag) & 2097152) != 0);
}

void SpaceClipEditor_show_graph_tracks_error_set(PointerRNA *ptr, int value)
{
	SpaceClip *data = (SpaceClip *)(ptr->data);
	if (value) data->flag |= 2097152;
	else data->flag &= ~2097152;
}

int SpaceClipEditor_show_graph_only_selected_get(PointerRNA *ptr)
{
	SpaceClip *data = (SpaceClip *)(ptr->data);
	return (((data->flag) & 524288) != 0);
}

void SpaceClipEditor_show_graph_only_selected_set(PointerRNA *ptr, int value)
{
	SpaceClip *data = (SpaceClip *)(ptr->data);
	if (value) data->flag |= 524288;
	else data->flag &= ~524288;
}

int SpaceClipEditor_show_graph_hidden_get(PointerRNA *ptr)
{
	SpaceClip *data = (SpaceClip *)(ptr->data);
	return (((data->flag) & 1048576) != 0);
}

void SpaceClipEditor_show_graph_hidden_set(PointerRNA *ptr, int value)
{
	SpaceClip *data = (SpaceClip *)(ptr->data);
	if (value) data->flag |= 1048576;
	else data->flag &= ~1048576;
}

int SpaceClipEditor_show_red_channel_get(PointerRNA *ptr)
{
	SpaceClip *data = (SpaceClip *)(ptr->data);
	return !(((data->postproc_flag) & 1) != 0);
}

void SpaceClipEditor_show_red_channel_set(PointerRNA *ptr, int value)
{
	SpaceClip *data = (SpaceClip *)(ptr->data);
	if (!value) data->postproc_flag |= 1;
	else data->postproc_flag &= ~1;
}

int SpaceClipEditor_show_green_channel_get(PointerRNA *ptr)
{
	SpaceClip *data = (SpaceClip *)(ptr->data);
	return !(((data->postproc_flag) & 2) != 0);
}

void SpaceClipEditor_show_green_channel_set(PointerRNA *ptr, int value)
{
	SpaceClip *data = (SpaceClip *)(ptr->data);
	if (!value) data->postproc_flag |= 2;
	else data->postproc_flag &= ~2;
}

int SpaceClipEditor_show_blue_channel_get(PointerRNA *ptr)
{
	SpaceClip *data = (SpaceClip *)(ptr->data);
	return !(((data->postproc_flag) & 4) != 0);
}

void SpaceClipEditor_show_blue_channel_set(PointerRNA *ptr, int value)
{
	SpaceClip *data = (SpaceClip *)(ptr->data);
	if (!value) data->postproc_flag |= 4;
	else data->postproc_flag &= ~4;
}

int SpaceClipEditor_use_grayscale_preview_get(PointerRNA *ptr)
{
	SpaceClip *data = (SpaceClip *)(ptr->data);
	return (((data->postproc_flag) & 8) != 0);
}

void SpaceClipEditor_use_grayscale_preview_set(PointerRNA *ptr, int value)
{
	SpaceClip *data = (SpaceClip *)(ptr->data);
	if (value) data->postproc_flag |= 8;
	else data->postproc_flag &= ~8;
}

int SpaceClipEditor_show_seconds_get(PointerRNA *ptr)
{
	SpaceClip *data = (SpaceClip *)(ptr->data);
	return (((data->flag) & 262144) != 0);
}

void SpaceClipEditor_show_seconds_set(PointerRNA *ptr, int value)
{
	SpaceClip *data = (SpaceClip *)(ptr->data);
	if (value) data->flag |= 262144;
	else data->flag &= ~262144;
}

int SpaceClipEditor_grease_pencil_source_get(PointerRNA *ptr)
{
	SpaceClip *data = (SpaceClip *)(ptr->data);
	return (int)(data->gpencil_src);
}

void SpaceClipEditor_grease_pencil_source_set(PointerRNA *ptr, int value)
{
	SpaceClip *data = (SpaceClip *)(ptr->data);
	data->gpencil_src = value;
}

int SpaceClipEditor_pivot_point_get(PointerRNA *ptr)
{
	SpaceClip *data = (SpaceClip *)(ptr->data);
	return (int)(data->around);
}

void SpaceClipEditor_pivot_point_set(PointerRNA *ptr, int value)
{
	SpaceClip *data = (SpaceClip *)(ptr->data);
	data->around = value;
}











struct BGpic *BackgroundImages_new(struct View3D *_self)
{
	return rna_BackgroundImage_new(_self);
}

void BackgroundImages_new_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	struct View3D *_self;
	struct BGpic *image;
	char *_data, *_retdata;
	
	_self = (struct View3D *)_ptr->data;
	_data = (char *)_parms->data;
	_retdata = _data;
	
	image = rna_BackgroundImage_new(_self);
	*((struct BGpic **)_retdata) = image;
}

void BackgroundImages_remove(struct View3D *_self, ReportList *reports, struct PointerRNA *image)
{
	rna_BackgroundImage_remove(_self, reports, image);
}

void BackgroundImages_remove_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	struct View3D *_self;
	struct PointerRNA *image;
	char *_data;
	
	_self = (struct View3D *)_ptr->data;
	_data = (char *)_parms->data;
	image = *((struct PointerRNA **)_data);
	
	rna_BackgroundImage_remove(_self, reports, image);
}

void BackgroundImages_clear(struct View3D *_self)
{
	rna_BackgroundImage_clear(_self);
}

void BackgroundImages_clear_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	struct View3D *_self;
	_self = (struct View3D *)_ptr->data;
	
	rna_BackgroundImage_clear(_self);
}

/* Repeated prototypes to detect errors */

struct BGpic *rna_BackgroundImage_new(struct View3D *_self);
void rna_BackgroundImage_remove(struct View3D *_self, ReportList *reports, struct PointerRNA *image);
void rna_BackgroundImage_clear(struct View3D *_self);

void RegionView3D_update(struct ID *_selfid, struct RegionView3D *_self)
{
	rna_RegionView3D_update(_selfid, _self);
}

void RegionView3D_update_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	struct ID *_selfid;
	struct RegionView3D *_self;
	_selfid = (struct ID *)_ptr->id.data;
	_self = (struct RegionView3D *)_ptr->data;
	
	rna_RegionView3D_update(_selfid, _self);
}

/* Repeated prototypes to detect errors */

void rna_RegionView3D_update(struct ID *_selfid, struct RegionView3D *_self);











void SpaceNodeEditor_cursor_location_from_region(struct SpaceNode *_self, bContext *C, int x, int y)
{
	rna_SpaceNodeEditor_cursor_location_from_region(_self, C, x, y);
}

void SpaceNodeEditor_cursor_location_from_region_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	struct SpaceNode *_self;
	int x;
	int y;
	char *_data;
	
	_self = (struct SpaceNode *)_ptr->data;
	_data = (char *)_parms->data;
	x = *((int *)_data);
	_data += 4;
	y = *((int *)_data);
	
	rna_SpaceNodeEditor_cursor_location_from_region(_self, C, x, y);
}

/* Repeated prototypes to detect errors */

void rna_SpaceNodeEditor_cursor_location_from_region(struct SpaceNode *_self, bContext *C, int x, int y);

void SpaceNodeEditorPath_clear(struct SpaceNode *_self, bContext *C)
{
	rna_SpaceNodeEditor_path_clear(_self, C);
}

void SpaceNodeEditorPath_clear_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	struct SpaceNode *_self;
	_self = (struct SpaceNode *)_ptr->data;
	
	rna_SpaceNodeEditor_path_clear(_self, C);
}

void SpaceNodeEditorPath_start(struct SpaceNode *_self, bContext *C, struct PointerRNA *node_tree)
{
	rna_SpaceNodeEditor_path_start(_self, C, node_tree);
}

void SpaceNodeEditorPath_start_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	struct SpaceNode *_self;
	struct PointerRNA *node_tree;
	char *_data;
	
	_self = (struct SpaceNode *)_ptr->data;
	_data = (char *)_parms->data;
	node_tree = ((struct PointerRNA *)_data);
	
	rna_SpaceNodeEditor_path_start(_self, C, node_tree);
}

void SpaceNodeEditorPath_append(struct SpaceNode *_self, bContext *C, struct PointerRNA *node_tree, struct PointerRNA *node)
{
	rna_SpaceNodeEditor_path_append(_self, C, node_tree, node);
}

void SpaceNodeEditorPath_append_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	struct SpaceNode *_self;
	struct PointerRNA *node_tree;
	struct PointerRNA *node;
	char *_data;
	
	_self = (struct SpaceNode *)_ptr->data;
	_data = (char *)_parms->data;
	node_tree = ((struct PointerRNA *)_data);
#if defined(SPEC_ILP32)
	_data += 12;
#else
	_data += 24;
#endif
	node = ((struct PointerRNA *)_data);
	
	rna_SpaceNodeEditor_path_append(_self, C, node_tree, node);
}

void SpaceNodeEditorPath_pop(struct SpaceNode *_self, bContext *C)
{
	rna_SpaceNodeEditor_path_pop(_self, C);
}

void SpaceNodeEditorPath_pop_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	struct SpaceNode *_self;
	_self = (struct SpaceNode *)_ptr->data;
	
	rna_SpaceNodeEditor_path_pop(_self, C);
}

/* Repeated prototypes to detect errors */

void rna_SpaceNodeEditor_path_clear(struct SpaceNode *_self, bContext *C);
void rna_SpaceNodeEditor_path_start(struct SpaceNode *_self, bContext *C, struct PointerRNA *node_tree);
void rna_SpaceNodeEditor_path_append(struct SpaceNode *_self, bContext *C, struct PointerRNA *node_tree, struct PointerRNA *node);
void rna_SpaceNodeEditor_path_pop(struct SpaceNode *_self, bContext *C);



/* Space */
CollectionPropertyRNA rna_Space_rna_properties = {
	{(PropertyRNA *)&rna_Space_rna_type, NULL,
	-1, "rna_properties", 128, "Properties",
	"RNA property collection",
	0, "*",
	PROP_COLLECTION, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	Space_rna_properties_begin, Space_rna_properties_next, Space_rna_properties_end, Space_rna_properties_get, NULL, NULL, Space_rna_properties_lookup_string, NULL, &RNA_Property
};

PointerPropertyRNA rna_Space_rna_type = {
	{(PropertyRNA *)&rna_Space_type, (PropertyRNA *)&rna_Space_rna_properties,
	-1, "rna_type", 8912896, "RNA",
	"RNA type definition",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	Space_rna_type_get, NULL, NULL, NULL,&RNA_Struct
};

static EnumPropertyItem rna_Space_type_items[24] = {
	{0, "EMPTY", 0, "Empty", ""},
	{1, "VIEW_3D", 104, "3D View", "3D viewport"},
	{0, "", 0, NULL, NULL},
	{15, "TIMELINE", 118, "Timeline", "Timeline and playback controls"},
	{2, "GRAPH_EDITOR", 105, "Graph Editor", "Edit drivers and keyframe interpolation"},
	{12, "DOPESHEET_EDITOR", 115, "Dope Sheet", "Adjust timing of keyframes"},
	{13, "NLA_EDITOR", 116, "NLA Editor", "Combine and layer Actions"},
	{0, "", 0, NULL, NULL},
	{6, "IMAGE_EDITOR", 109, "UV/Image Editor", "View and edit images and UV Maps"},
	{8, "SEQUENCE_EDITOR", 111, "Video Sequence Editor", "Video editing tools"},
	{20, "CLIP_EDITOR", 123, "Movie Clip Editor", "Motion tracking tools"},
	{9, "TEXT_EDITOR", 112, "Text Editor", "Edit scripts and in-file documentation"},
	{16, "NODE_EDITOR", 119, "Node Editor", "Editor for node-based shading and compositing tools"},
	{17, "LOGIC_EDITOR", 120, "Logic Editor", "Game logic editing"},
	{0, "", 0, NULL, NULL},
	{4, "PROPERTIES", 107, "Properties", "Edit properties of active object and related datablocks"},
	{3, "OUTLINER", 106, "Outliner", "Overview of scene graph and all available datablocks"},
	{19, "USER_PREFERENCES", 122, "User Preferences", "Edit persistent configuration settings"},
	{7, "INFO", 110, "Info", "Main menu bar and list of error messages (drag down to expand and display)"},
	{0, "", 0, NULL, NULL},
	{5, "FILE_BROWSER", 108, "File Browser", "Browse for files and assets"},
	{0, "", 0, NULL, NULL},
	{18, "CONSOLE", 121, "Python Console", "Interactive programmatic console for advanced editing and script development"},
	{0, NULL, 0, NULL, NULL}
};

EnumPropertyRNA rna_Space_type = {
	{(PropertyRNA *)&rna_Space_show_locked_time, (PropertyRNA *)&rna_Space_rna_type,
	-1, "type", 2, "Type",
	"Space data type",
	0, "*",
	PROP_ENUM, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	Space_type_get, NULL, NULL, NULL, NULL, NULL, rna_Space_type_items, 23, 0
};

BoolPropertyRNA rna_Space_show_locked_time = {
	{NULL, (PropertyRNA *)&rna_Space_type,
	-1, "show_locked_time", 3, "Lock Time to Other Windows",
	"",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Space_view2d_sync_update, 252444672, NULL, NULL,
	0, -1, NULL},
	Space_show_locked_time_get, Space_show_locked_time_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

StructRNA RNA_Space = {
	{(ContainerRNA *)&RNA_SpaceImageEditor, (ContainerRNA *)&RNA_SmokeCollSettings,
	NULL,
	{(PropertyRNA *)&rna_Space_rna_properties, (PropertyRNA *)&rna_Space_show_locked_time}},
	"Space", NULL, NULL, 4, "Space",
	"Space data for a screen area",
	"*", 17,
	NULL, (PropertyRNA *)&rna_Space_rna_properties,
	NULL,
	NULL,
	rna_Space_refine,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	{NULL, NULL}
};

/* Space Image Editor */
PointerPropertyRNA rna_SpaceImageEditor_image = {
	{(PropertyRNA *)&rna_SpaceImageEditor_image_user, NULL,
	-1, "image", 8388673, "Image",
	"Image displayed and edited in this space",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 274399232, NULL, NULL,
	0, -1, NULL},
	SpaceImageEditor_image_get, SpaceImageEditor_image_set, NULL, NULL,&RNA_Image
};

PointerPropertyRNA rna_SpaceImageEditor_image_user = {
	{(PropertyRNA *)&rna_SpaceImageEditor_scopes, (PropertyRNA *)&rna_SpaceImageEditor_image,
	-1, "image_user", 8650752, "Image User",
	"Parameters defining which layer, pass and frame of the image is displayed",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 251920384, NULL, NULL,
	0, -1, NULL},
	SpaceImageEditor_image_user_get, NULL, NULL, NULL,&RNA_ImageUser
};

PointerPropertyRNA rna_SpaceImageEditor_scopes = {
	{(PropertyRNA *)&rna_SpaceImageEditor_use_image_pin, (PropertyRNA *)&rna_SpaceImageEditor_image_user,
	-1, "scopes", 8388608, "Scopes",
	"Scopes to visualize image statistics",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_SpaceImageEditor_scopes_update, 251920384, NULL, NULL,
	0, -1, NULL},
	SpaceImageEditor_scopes_get, NULL, NULL, NULL,&RNA_Scopes
};

BoolPropertyRNA rna_SpaceImageEditor_use_image_pin = {
	{(PropertyRNA *)&rna_SpaceImageEditor_sample_histogram, (PropertyRNA *)&rna_SpaceImageEditor_scopes,
	-1, "use_image_pin", 12291, "Image Pin",
	"Display current image regardless of object selection",
	42, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 251920384, NULL, NULL,
	offsetof(SpaceImage, pin), 2, NULL},
	SpaceImageEditor_use_image_pin_get, SpaceImageEditor_use_image_pin_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

PointerPropertyRNA rna_SpaceImageEditor_sample_histogram = {
	{(PropertyRNA *)&rna_SpaceImageEditor_zoom, (PropertyRNA *)&rna_SpaceImageEditor_use_image_pin,
	-1, "sample_histogram", 8388608, "Line sample",
	"Sampled colors along line",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	SpaceImageEditor_sample_histogram_get, NULL, NULL, NULL,&RNA_Histogram
};

static float rna_SpaceImageEditor_zoom_default[2] = {
	0.0f,
	0.0f
};

FloatPropertyRNA rna_SpaceImageEditor_zoom = {
	{(PropertyRNA *)&rna_SpaceImageEditor_show_repeat, (PropertyRNA *)&rna_SpaceImageEditor_sample_histogram,
	-1, "zoom", 2, "Zoom",
	"Zoom factor",
	0, "*",
	PROP_FLOAT, PROP_NONE | PROP_UNIT_NONE, NULL, 1, {2, 0, 0}, 2,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	NULL, NULL, SpaceImageEditor_zoom_get, NULL, NULL, NULL, NULL, NULL, NULL, NULL, -10000.0f, 10000.0f, -FLT_MAX, FLT_MAX, 10.0f, 3, 0.0f, rna_SpaceImageEditor_zoom_default
};

BoolPropertyRNA rna_SpaceImageEditor_show_repeat = {
	{(PropertyRNA *)&rna_SpaceImageEditor_show_grease_pencil, (PropertyRNA *)&rna_SpaceImageEditor_zoom,
	-1, "show_repeat", 3, "Draw Repeated",
	"Draw the image repeated outside of the main view",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 251920384, NULL, NULL,
	0, -1, NULL},
	SpaceImageEditor_show_repeat_get, SpaceImageEditor_show_repeat_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_SpaceImageEditor_show_grease_pencil = {
	{(PropertyRNA *)&rna_SpaceImageEditor_draw_channels, (PropertyRNA *)&rna_SpaceImageEditor_show_repeat,
	-1, "show_grease_pencil", 3, "Show Grease Pencil",
	"Show grease pencil for this view",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 251920384, NULL, NULL,
	0, -1, NULL},
	SpaceImageEditor_show_grease_pencil_get, SpaceImageEditor_show_grease_pencil_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

static EnumPropertyItem rna_SpaceImageEditor_draw_channels_items[5] = {
	{4096, "COLOR_ALPHA", 764, "Color and Alpha", "Draw image with RGB colors and alpha transparency"},
	{0, "COLOR", 763, "Color", "Draw image with RGB colors"},
	{8192, "ALPHA", 765, "Alpha", "Draw alpha transparency channel"},
	{16384, "Z_BUFFER", 766, "Z-Buffer", "Draw Z-buffer associated with image (mapped from camera clip start to end)"},
	{0, NULL, 0, NULL, NULL}
};

EnumPropertyRNA rna_SpaceImageEditor_draw_channels = {
	{(PropertyRNA *)&rna_SpaceImageEditor_uv_editor, (PropertyRNA *)&rna_SpaceImageEditor_show_grease_pencil,
	-1, "draw_channels", 3, "Draw Channels",
	"Channels of the image to draw",
	0, "*",
	PROP_ENUM, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 251920384, NULL, NULL,
	0, -1, NULL},
	SpaceImageEditor_draw_channels_get, SpaceImageEditor_draw_channels_set, rna_SpaceImageEditor_draw_channels_itemf, NULL, NULL, NULL, rna_SpaceImageEditor_draw_channels_items, 4, 0
};

PointerPropertyRNA rna_SpaceImageEditor_uv_editor = {
	{(PropertyRNA *)&rna_SpaceImageEditor_mode, (PropertyRNA *)&rna_SpaceImageEditor_draw_channels,
	-1, "uv_editor", 8650752, "UV Editor",
	"UV editor settings",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	SpaceImageEditor_uv_editor_get, NULL, NULL, NULL,&RNA_SpaceUVEditor
};

static EnumPropertyItem rna_SpaceImageEditor_mode_items[4] = {
	{0, "VIEW", 696, "View", "View the image and UV edit in mesh editmode"},
	{1, "PAINT", 134, "Paint", "2D image painting mode"},
	{2, "MASK", 467, "Mask", "Mask editing"},
	{0, NULL, 0, NULL, NULL}
};

EnumPropertyRNA rna_SpaceImageEditor_mode = {
	{(PropertyRNA *)&rna_SpaceImageEditor_cursor_location, (PropertyRNA *)&rna_SpaceImageEditor_uv_editor,
	-1, "mode", 3, "Mode",
	"Editing context being displayed",
	0, "*",
	PROP_ENUM, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_SpaceImageEditor_mode_update, 251920384, NULL, NULL,
	0, -1, NULL},
	SpaceImageEditor_mode_get, SpaceImageEditor_mode_set, NULL, NULL, NULL, NULL, rna_SpaceImageEditor_mode_items, 3, 0
};

static float rna_SpaceImageEditor_cursor_location_default[2] = {
	0.0f,
	0.0f
};

FloatPropertyRNA rna_SpaceImageEditor_cursor_location = {
	{(PropertyRNA *)&rna_SpaceImageEditor_pivot_point, (PropertyRNA *)&rna_SpaceImageEditor_mode,
	-1, "cursor_location", 3, "2D Cursor Location",
	"2D cursor location for this view",
	0, "*",
	PROP_FLOAT, PROP_XYZ | PROP_UNIT_NONE, NULL, 1, {2, 0, 0}, 2,
	NULL, 251920384, NULL, NULL,
	0, -1, NULL},
	NULL, NULL, SpaceImageEditor_cursor_location_get, SpaceImageEditor_cursor_location_set, NULL, NULL, NULL, NULL, NULL, NULL, -10000.0f, 10000.0f, -FLT_MAX, FLT_MAX, 10.0f, 3, 0.0f, rna_SpaceImageEditor_cursor_location_default
};

static EnumPropertyItem rna_SpaceImageEditor_pivot_point_items[6] = {
	{0, "BOUNDING_BOX_CENTER", 551, "Bounding Box Center", "Pivot around bounding box center of selected object(s)"},
	{1, "CURSOR", 552, "3D Cursor", "Pivot around the 3D cursor"},
	{2, "INDIVIDUAL_ORIGINS", 553, "Individual Origins", "Pivot around each object\'s own origin"},
	{3, "MEDIAN_POINT", 554, "Median Point", "Pivot around the median point of selected objects"},
	{4, "ACTIVE_ELEMENT", 555, "Active Element", "Pivot around active object"},
	{0, NULL, 0, NULL, NULL}
};

EnumPropertyRNA rna_SpaceImageEditor_pivot_point = {
	{(PropertyRNA *)&rna_SpaceImageEditor_grease_pencil, (PropertyRNA *)&rna_SpaceImageEditor_cursor_location,
	-1, "pivot_point", 3, "Pivot",
	"Rotation/Scaling Pivot",
	0, "*",
	PROP_ENUM, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 251920384, NULL, NULL,
	0, -1, NULL},
	SpaceImageEditor_pivot_point_get, SpaceImageEditor_pivot_point_set, rna_SpaceImageEditor_pivot_itemf, NULL, NULL, NULL, rna_SpaceImageEditor_pivot_point_items, 5, 0
};

PointerPropertyRNA rna_SpaceImageEditor_grease_pencil = {
	{(PropertyRNA *)&rna_SpaceImageEditor_use_realtime_update, (PropertyRNA *)&rna_SpaceImageEditor_pivot_point,
	-1, "grease_pencil", 8388673, "Grease Pencil",
	"Grease pencil data for this space",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 251920384, NULL, NULL,
	0, -1, NULL},
	SpaceImageEditor_grease_pencil_get, SpaceImageEditor_grease_pencil_set, NULL, NULL,&RNA_GreasePencil
};

BoolPropertyRNA rna_SpaceImageEditor_use_realtime_update = {
	{(PropertyRNA *)&rna_SpaceImageEditor_show_render, (PropertyRNA *)&rna_SpaceImageEditor_grease_pencil,
	-1, "use_realtime_update", 8195, "Update Automatically",
	"Update other affected window spaces automatically to reflect changes during interactive operations such as transform",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	offsetof(SpaceImage, lock), 1, NULL},
	SpaceImageEditor_use_realtime_update_get, SpaceImageEditor_use_realtime_update_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_SpaceImageEditor_show_render = {
	{(PropertyRNA *)&rna_SpaceImageEditor_show_paint, (PropertyRNA *)&rna_SpaceImageEditor_use_realtime_update,
	-1, "show_render", 2, "Show Render",
	"Show render related properties",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	SpaceImageEditor_show_render_get, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_SpaceImageEditor_show_paint = {
	{(PropertyRNA *)&rna_SpaceImageEditor_show_uvedit, (PropertyRNA *)&rna_SpaceImageEditor_show_render,
	-1, "show_paint", 2, "Show Paint",
	"Show paint related properties",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	SpaceImageEditor_show_paint_get, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_SpaceImageEditor_show_uvedit = {
	{(PropertyRNA *)&rna_SpaceImageEditor_show_maskedit, (PropertyRNA *)&rna_SpaceImageEditor_show_paint,
	-1, "show_uvedit", 2, "Show UV Editor",
	"Show UV editing related properties",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	SpaceImageEditor_show_uvedit_get, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_SpaceImageEditor_show_maskedit = {
	{(PropertyRNA *)&rna_SpaceImageEditor_mask, (PropertyRNA *)&rna_SpaceImageEditor_show_uvedit,
	-1, "show_maskedit", 2, "Show Mask Editor",
	"Show Mask editing related properties",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	SpaceImageEditor_show_maskedit_get, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

PointerPropertyRNA rna_SpaceImageEditor_mask = {
	{(PropertyRNA *)&rna_SpaceImageEditor_mask_draw_type, (PropertyRNA *)&rna_SpaceImageEditor_show_maskedit,
	-1, "mask", 8388673, "Mask",
	"Mask displayed and edited in this space",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 251920384, NULL, NULL,
	0, -1, NULL},
	SpaceImageEditor_mask_get, SpaceImageEditor_mask_set, NULL, NULL,&RNA_Mask
};

static EnumPropertyItem rna_SpaceImageEditor_mask_draw_type_items[5] = {
	{0, "OUTLINE", 0, "Outline", "Draw white edges with black outline"},
	{1, "DASH", 0, "Dash", "Draw dashed black-white edges"},
	{2, "BLACK", 0, "Black", "Draw black edges"},
	{3, "WHITE", 0, "White", "Draw white edges"},
	{0, NULL, 0, NULL, NULL}
};

EnumPropertyRNA rna_SpaceImageEditor_mask_draw_type = {
	{(PropertyRNA *)&rna_SpaceImageEditor_show_mask_smooth, (PropertyRNA *)&rna_SpaceImageEditor_mask,
	-1, "mask_draw_type", 3, "Edge Draw Type",
	"Draw type for mask splines",
	0, "*",
	PROP_ENUM, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 251920384, NULL, NULL,
	0, -1, NULL},
	SpaceImageEditor_mask_draw_type_get, SpaceImageEditor_mask_draw_type_set, NULL, NULL, NULL, NULL, rna_SpaceImageEditor_mask_draw_type_items, 4, 0
};

BoolPropertyRNA rna_SpaceImageEditor_show_mask_smooth = {
	{(PropertyRNA *)&rna_SpaceImageEditor_show_mask_overlay, (PropertyRNA *)&rna_SpaceImageEditor_mask_draw_type,
	-1, "show_mask_smooth", 3, "Draw Smooth Splines",
	"",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 251920384, NULL, NULL,
	0, -1, NULL},
	SpaceImageEditor_show_mask_smooth_get, SpaceImageEditor_show_mask_smooth_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_SpaceImageEditor_show_mask_overlay = {
	{(PropertyRNA *)&rna_SpaceImageEditor_mask_overlay_mode, (PropertyRNA *)&rna_SpaceImageEditor_show_mask_smooth,
	-1, "show_mask_overlay", 3, "Show Mask Overlay",
	"",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 251920384, NULL, NULL,
	0, -1, NULL},
	SpaceImageEditor_show_mask_overlay_get, SpaceImageEditor_show_mask_overlay_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

static EnumPropertyItem rna_SpaceImageEditor_mask_overlay_mode_items[3] = {
	{0, "ALPHACHANNEL", 0, "Alpha Channel", "Show alpha channel of the mask"},
	{1, "COMBINED", 0, "Combined", "Combine space background image with the mask"},
	{0, NULL, 0, NULL, NULL}
};

EnumPropertyRNA rna_SpaceImageEditor_mask_overlay_mode = {
	{NULL, (PropertyRNA *)&rna_SpaceImageEditor_show_mask_overlay,
	-1, "mask_overlay_mode", 3, "Overlay Mode",
	"Overlay mode of rasterized mask",
	0, "*",
	PROP_ENUM, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 251920384, NULL, NULL,
	0, -1, NULL},
	SpaceImageEditor_mask_overlay_mode_get, SpaceImageEditor_mask_overlay_mode_set, NULL, NULL, NULL, NULL, rna_SpaceImageEditor_mask_overlay_mode_items, 2, 0
};

StructRNA RNA_SpaceImageEditor = {
	{(ContainerRNA *)&RNA_SpaceUVEditor, (ContainerRNA *)&RNA_Space,
	NULL,
	{(PropertyRNA *)&rna_SpaceImageEditor_image, (PropertyRNA *)&rna_SpaceImageEditor_mask_overlay_mode}},
	"SpaceImageEditor", NULL, NULL, 4, "Space Image Editor",
	"Image and UV editor space data",
	"*", 17,
	NULL, (PropertyRNA *)&rna_Space_rna_properties,
	&RNA_Space,
	NULL,
	rna_Space_refine,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	{NULL, NULL}
};

/* Space UV Editor */
CollectionPropertyRNA rna_SpaceUVEditor_rna_properties = {
	{(PropertyRNA *)&rna_SpaceUVEditor_rna_type, NULL,
	-1, "rna_properties", 128, "Properties",
	"RNA property collection",
	0, "*",
	PROP_COLLECTION, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	SpaceUVEditor_rna_properties_begin, SpaceUVEditor_rna_properties_next, SpaceUVEditor_rna_properties_end, SpaceUVEditor_rna_properties_get, NULL, NULL, SpaceUVEditor_rna_properties_lookup_string, NULL, &RNA_Property
};

PointerPropertyRNA rna_SpaceUVEditor_rna_type = {
	{(PropertyRNA *)&rna_SpaceUVEditor_sticky_select_mode, (PropertyRNA *)&rna_SpaceUVEditor_rna_properties,
	-1, "rna_type", 8912896, "RNA",
	"RNA type definition",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	SpaceUVEditor_rna_type_get, NULL, NULL, NULL,&RNA_Struct
};

static EnumPropertyItem rna_SpaceUVEditor_sticky_select_mode_items[4] = {
	{1, "DISABLED", 586, "Disabled", "Sticky vertex selection disabled"},
	{0, "SHARED_LOCATION", 585, "Shared Location", "Select UVs that are at the same location and share a mesh vertex"},
	{2, "SHARED_VERTEX", 587, "Shared Vertex", "Select UVs that share mesh vertex, irrespective if they are in the same location"},
	{0, NULL, 0, NULL, NULL}
};

EnumPropertyRNA rna_SpaceUVEditor_sticky_select_mode = {
	{(PropertyRNA *)&rna_SpaceUVEditor_edge_draw_type, (PropertyRNA *)&rna_SpaceUVEditor_rna_type,
	-1, "sticky_select_mode", 3, "Sticky Selection Mode",
	"Automatically select also UVs sharing the same vertex as the ones being selected",
	0, "*",
	PROP_ENUM, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 251920384, NULL, NULL,
	0, -1, NULL},
	SpaceUVEditor_sticky_select_mode_get, SpaceUVEditor_sticky_select_mode_set, NULL, NULL, NULL, NULL, rna_SpaceUVEditor_sticky_select_mode_items, 3, 0
};

static EnumPropertyItem rna_SpaceUVEditor_edge_draw_type_items[5] = {
	{0, "OUTLINE", 0, "Outline", "Draw white edges with black outline"},
	{1, "DASH", 0, "Dash", "Draw dashed black-white edges"},
	{2, "BLACK", 0, "Black", "Draw black edges"},
	{3, "WHITE", 0, "White", "Draw white edges"},
	{0, NULL, 0, NULL, NULL}
};

EnumPropertyRNA rna_SpaceUVEditor_edge_draw_type = {
	{(PropertyRNA *)&rna_SpaceUVEditor_show_smooth_edges, (PropertyRNA *)&rna_SpaceUVEditor_sticky_select_mode,
	-1, "edge_draw_type", 3, "Edge Draw Type",
	"Draw type for drawing UV edges",
	0, "*",
	PROP_ENUM, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 251920384, NULL, NULL,
	0, -1, NULL},
	SpaceUVEditor_edge_draw_type_get, SpaceUVEditor_edge_draw_type_set, NULL, NULL, NULL, NULL, rna_SpaceUVEditor_edge_draw_type_items, 4, 0
};

BoolPropertyRNA rna_SpaceUVEditor_show_smooth_edges = {
	{(PropertyRNA *)&rna_SpaceUVEditor_show_stretch, (PropertyRNA *)&rna_SpaceUVEditor_edge_draw_type,
	-1, "show_smooth_edges", 3, "Draw Smooth Edges",
	"Draw UV edges anti-aliased",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 251920384, NULL, NULL,
	0, -1, NULL},
	SpaceUVEditor_show_smooth_edges_get, SpaceUVEditor_show_smooth_edges_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_SpaceUVEditor_show_stretch = {
	{(PropertyRNA *)&rna_SpaceUVEditor_draw_stretch_type, (PropertyRNA *)&rna_SpaceUVEditor_show_smooth_edges,
	-1, "show_stretch", 3, "Draw Stretch",
	"Draw faces colored according to the difference in shape between UVs and their 3D coordinates (blue for low distortion, red for high distortion)",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 251920384, NULL, NULL,
	0, -1, NULL},
	SpaceUVEditor_show_stretch_get, SpaceUVEditor_show_stretch_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

static EnumPropertyItem rna_SpaceUVEditor_draw_stretch_type_items[3] = {
	{0, "ANGLE", 0, "Angle", "Angular distortion between UV and 3D angles"},
	{1, "AREA", 0, "Area", "Area distortion between UV and 3D faces"},
	{0, NULL, 0, NULL, NULL}
};

EnumPropertyRNA rna_SpaceUVEditor_draw_stretch_type = {
	{(PropertyRNA *)&rna_SpaceUVEditor_show_modified_edges, (PropertyRNA *)&rna_SpaceUVEditor_show_stretch,
	-1, "draw_stretch_type", 3, "Draw Stretch Type",
	"Type of stretch to draw",
	0, "*",
	PROP_ENUM, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 251920384, NULL, NULL,
	0, -1, NULL},
	SpaceUVEditor_draw_stretch_type_get, SpaceUVEditor_draw_stretch_type_set, NULL, NULL, NULL, NULL, rna_SpaceUVEditor_draw_stretch_type_items, 2, 0
};

BoolPropertyRNA rna_SpaceUVEditor_show_modified_edges = {
	{(PropertyRNA *)&rna_SpaceUVEditor_show_other_objects, (PropertyRNA *)&rna_SpaceUVEditor_draw_stretch_type,
	-1, "show_modified_edges", 3, "Draw Modified Edges",
	"Draw edges after modifiers are applied",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 251920384, NULL, NULL,
	0, -1, NULL},
	SpaceUVEditor_show_modified_edges_get, SpaceUVEditor_show_modified_edges_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_SpaceUVEditor_show_other_objects = {
	{(PropertyRNA *)&rna_SpaceUVEditor_show_texpaint, (PropertyRNA *)&rna_SpaceUVEditor_show_modified_edges,
	-1, "show_other_objects", 3, "Draw Other Objects",
	"Draw other selected objects that share the same image",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 251920384, NULL, NULL,
	0, -1, NULL},
	SpaceUVEditor_show_other_objects_get, SpaceUVEditor_show_other_objects_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_SpaceUVEditor_show_texpaint = {
	{(PropertyRNA *)&rna_SpaceUVEditor_show_normalized_coords, (PropertyRNA *)&rna_SpaceUVEditor_show_other_objects,
	-1, "show_texpaint", 3, "Draw Texture Paint UVs",
	"Draw overlay of texture paint uv layer",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 251920384, NULL, NULL,
	0, -1, NULL},
	SpaceUVEditor_show_texpaint_get, SpaceUVEditor_show_texpaint_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_SpaceUVEditor_show_normalized_coords = {
	{(PropertyRNA *)&rna_SpaceUVEditor_show_faces, (PropertyRNA *)&rna_SpaceUVEditor_show_texpaint,
	-1, "show_normalized_coords", 3, "Normalized Coordinates",
	"Display UV coordinates from 0.0 to 1.0 rather than in pixels",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 251920384, NULL, NULL,
	0, -1, NULL},
	SpaceUVEditor_show_normalized_coords_get, SpaceUVEditor_show_normalized_coords_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_SpaceUVEditor_show_faces = {
	{(PropertyRNA *)&rna_SpaceUVEditor_use_snap_to_pixels, (PropertyRNA *)&rna_SpaceUVEditor_show_normalized_coords,
	-1, "show_faces", 3, "Draw Faces",
	"Draw faces over the image",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 251920384, NULL, NULL,
	0, -1, NULL},
	SpaceUVEditor_show_faces_get, SpaceUVEditor_show_faces_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_SpaceUVEditor_use_snap_to_pixels = {
	{(PropertyRNA *)&rna_SpaceUVEditor_lock_bounds, (PropertyRNA *)&rna_SpaceUVEditor_show_faces,
	-1, "use_snap_to_pixels", 3, "Snap to Pixels",
	"Snap UVs to pixel locations while editing",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 251920384, NULL, NULL,
	0, -1, NULL},
	SpaceUVEditor_use_snap_to_pixels_get, SpaceUVEditor_use_snap_to_pixels_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_SpaceUVEditor_lock_bounds = {
	{(PropertyRNA *)&rna_SpaceUVEditor_use_live_unwrap, (PropertyRNA *)&rna_SpaceUVEditor_use_snap_to_pixels,
	-1, "lock_bounds", 3, "Constrain to Image Bounds",
	"Constraint to stay within the image bounds while editing",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 251920384, NULL, NULL,
	0, -1, NULL},
	SpaceUVEditor_lock_bounds_get, SpaceUVEditor_lock_bounds_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_SpaceUVEditor_use_live_unwrap = {
	{NULL, (PropertyRNA *)&rna_SpaceUVEditor_lock_bounds,
	-1, "use_live_unwrap", 3, "Live Unwrap",
	"Continuously unwrap the selected UV island while transforming pinned vertices",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 251920384, NULL, NULL,
	0, -1, NULL},
	SpaceUVEditor_use_live_unwrap_get, SpaceUVEditor_use_live_unwrap_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

StructRNA RNA_SpaceUVEditor = {
	{(ContainerRNA *)&RNA_SpaceSequenceEditor, (ContainerRNA *)&RNA_SpaceImageEditor,
	NULL,
	{(PropertyRNA *)&rna_SpaceUVEditor_rna_properties, (PropertyRNA *)&rna_SpaceUVEditor_use_live_unwrap}},
	"SpaceUVEditor", NULL, NULL, 4, "Space UV Editor",
	"UV editor data for the image editor space",
	"*", 17,
	NULL, (PropertyRNA *)&rna_SpaceUVEditor_rna_properties,
	NULL,
	&RNA_SpaceImageEditor,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	{NULL, NULL}
};

/* Space Sequence Editor */
static EnumPropertyItem rna_SpaceSequenceEditor_view_type_items[4] = {
	{1, "SEQUENCER", 754, "Sequencer", ""},
	{2, "PREVIEW", 755, "Image Preview", ""},
	{3, "SEQUENCER_PREVIEW", 759, "Sequencer and Image Preview", ""},
	{0, NULL, 0, NULL, NULL}
};

EnumPropertyRNA rna_SpaceSequenceEditor_view_type = {
	{(PropertyRNA *)&rna_SpaceSequenceEditor_display_mode, NULL,
	-1, "view_type", 3, "View Type",
	"Type of the Sequencer view (sequencer, preview or both)",
	0, "*",
	PROP_ENUM, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Sequencer_view_type_update, 0, NULL, NULL,
	0, -1, NULL},
	SpaceSequenceEditor_view_type_get, SpaceSequenceEditor_view_type_set, NULL, NULL, NULL, NULL, rna_SpaceSequenceEditor_view_type_items, 3, 1
};

static EnumPropertyItem rna_SpaceSequenceEditor_display_mode_items[5] = {
	{1, "IMAGE", 755, "Image Preview", ""},
	{2, "WAVEFORM", 756, "Luma Waveform", ""},
	{3, "VECTOR_SCOPE", 757, "Chroma Vectorscope", ""},
	{4, "HISTOGRAM", 758, "Histogram", ""},
	{0, NULL, 0, NULL, NULL}
};

EnumPropertyRNA rna_SpaceSequenceEditor_display_mode = {
	{(PropertyRNA *)&rna_SpaceSequenceEditor_show_frame_indicator, (PropertyRNA *)&rna_SpaceSequenceEditor_view_type,
	-1, "display_mode", 3, "Display Mode",
	"View mode to use for displaying sequencer output",
	0, "*",
	PROP_ENUM, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 252706816, NULL, NULL,
	0, -1, NULL},
	SpaceSequenceEditor_display_mode_get, SpaceSequenceEditor_display_mode_set, NULL, NULL, NULL, NULL, rna_SpaceSequenceEditor_display_mode_items, 4, 1
};

BoolPropertyRNA rna_SpaceSequenceEditor_show_frame_indicator = {
	{(PropertyRNA *)&rna_SpaceSequenceEditor_show_frames, (PropertyRNA *)&rna_SpaceSequenceEditor_display_mode,
	-1, "show_frame_indicator", 3, "Show Frame Number Indicator",
	"Show frame number beside the current frame indicator line",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 252706816, NULL, NULL,
	0, -1, NULL},
	SpaceSequenceEditor_show_frame_indicator_get, SpaceSequenceEditor_show_frame_indicator_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_SpaceSequenceEditor_show_frames = {
	{(PropertyRNA *)&rna_SpaceSequenceEditor_use_marker_sync, (PropertyRNA *)&rna_SpaceSequenceEditor_show_frame_indicator,
	-1, "show_frames", 3, "Draw Frames",
	"Draw frames rather than seconds",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 252706816, NULL, NULL,
	0, -1, NULL},
	SpaceSequenceEditor_show_frames_get, SpaceSequenceEditor_show_frames_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_SpaceSequenceEditor_use_marker_sync = {
	{(PropertyRNA *)&rna_SpaceSequenceEditor_show_separate_color, (PropertyRNA *)&rna_SpaceSequenceEditor_show_frames,
	-1, "use_marker_sync", 3, "Sync Markers",
	"Transform markers as well as strips",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 252706816, NULL, NULL,
	0, -1, NULL},
	SpaceSequenceEditor_use_marker_sync_get, SpaceSequenceEditor_use_marker_sync_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_SpaceSequenceEditor_show_separate_color = {
	{(PropertyRNA *)&rna_SpaceSequenceEditor_show_safe_margin, (PropertyRNA *)&rna_SpaceSequenceEditor_use_marker_sync,
	-1, "show_separate_color", 3, "Separate Colors",
	"Separate color channels in preview",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 252706816, NULL, NULL,
	0, -1, NULL},
	SpaceSequenceEditor_show_separate_color_get, SpaceSequenceEditor_show_separate_color_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_SpaceSequenceEditor_show_safe_margin = {
	{(PropertyRNA *)&rna_SpaceSequenceEditor_show_seconds, (PropertyRNA *)&rna_SpaceSequenceEditor_show_separate_color,
	-1, "show_safe_margin", 3, "Safe Margin",
	"Draw title safe margins in preview",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 252706816, NULL, NULL,
	0, -1, NULL},
	SpaceSequenceEditor_show_safe_margin_get, SpaceSequenceEditor_show_safe_margin_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_SpaceSequenceEditor_show_seconds = {
	{(PropertyRNA *)&rna_SpaceSequenceEditor_show_grease_pencil, (PropertyRNA *)&rna_SpaceSequenceEditor_show_safe_margin,
	-1, "show_seconds", 3, "Show Seconds",
	"Show timing in seconds not frames",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 252706816, NULL, NULL,
	0, -1, NULL},
	SpaceSequenceEditor_show_seconds_get, SpaceSequenceEditor_show_seconds_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_SpaceSequenceEditor_show_grease_pencil = {
	{(PropertyRNA *)&rna_SpaceSequenceEditor_display_channel, (PropertyRNA *)&rna_SpaceSequenceEditor_show_seconds,
	-1, "show_grease_pencil", 3, "Show Grease Pencil",
	"Show grease pencil for this view",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 252706816, NULL, NULL,
	0, -1, NULL},
	SpaceSequenceEditor_show_grease_pencil_get, SpaceSequenceEditor_show_grease_pencil_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

IntPropertyRNA rna_SpaceSequenceEditor_display_channel = {
	{(PropertyRNA *)&rna_SpaceSequenceEditor_preview_channels, (PropertyRNA *)&rna_SpaceSequenceEditor_show_grease_pencil,
	-1, "display_channel", 8195, "Display Channel",
	"The channel number shown in the image preview. 0 is the result of all strips combined",
	0, "*",
	PROP_INT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 252706816, NULL, NULL,
	offsetof(SpaceSeq, chanshown), 1, NULL},
	SpaceSequenceEditor_display_channel_get, SpaceSequenceEditor_display_channel_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL,
	-5, 32, -5, 32, 1, 0, NULL
};

static EnumPropertyItem rna_SpaceSequenceEditor_preview_channels_items[3] = {
	{64, "COLOR_ALPHA", 764, "Color and Alpha", "Draw image with RGB colors and alpha transparency"},
	{0, "COLOR", 763, "Color", "Draw image with RGB colors"},
	{0, NULL, 0, NULL, NULL}
};

EnumPropertyRNA rna_SpaceSequenceEditor_preview_channels = {
	{(PropertyRNA *)&rna_SpaceSequenceEditor_draw_overexposed, (PropertyRNA *)&rna_SpaceSequenceEditor_display_channel,
	-1, "preview_channels", 3, "Draw Channels",
	"Channels of the preview to draw",
	0, "*",
	PROP_ENUM, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 252706816, NULL, NULL,
	0, -1, NULL},
	SpaceSequenceEditor_preview_channels_get, SpaceSequenceEditor_preview_channels_set, NULL, NULL, NULL, NULL, rna_SpaceSequenceEditor_preview_channels_items, 2, 0
};

IntPropertyRNA rna_SpaceSequenceEditor_draw_overexposed = {
	{(PropertyRNA *)&rna_SpaceSequenceEditor_proxy_render_size, (PropertyRNA *)&rna_SpaceSequenceEditor_preview_channels,
	-1, "draw_overexposed", 8195, "Show Overexposed",
	"Show overexposed areas with zebra stripes",
	0, "*",
	PROP_INT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 252706816, NULL, NULL,
	offsetof(SpaceSeq, zebra), 1, NULL},
	SpaceSequenceEditor_draw_overexposed_get, SpaceSequenceEditor_draw_overexposed_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL,
	0, 110, 0, 110, 1, 0, NULL
};

static EnumPropertyItem rna_SpaceSequenceEditor_proxy_render_size_items[8] = {
	{-1, "NONE", 0, "No display", ""},
	{0, "SCENE", 0, "Scene render size", ""},
	{25, "PROXY_25", 0, "Proxy size 25%", ""},
	{50, "PROXY_50", 0, "Proxy size 50%", ""},
	{75, "PROXY_75", 0, "Proxy size 75%", ""},
	{99, "PROXY_100", 0, "Proxy size 100%", ""},
	{100, "FULL", 0, "No proxy, full render", ""},
	{0, NULL, 0, NULL, NULL}
};

EnumPropertyRNA rna_SpaceSequenceEditor_proxy_render_size = {
	{(PropertyRNA *)&rna_SpaceSequenceEditor_grease_pencil, (PropertyRNA *)&rna_SpaceSequenceEditor_draw_overexposed,
	-1, "proxy_render_size", 3, "Proxy render size",
	"Draw preview using full resolution or different proxy resolutions",
	0, "*",
	PROP_ENUM, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 252706816, NULL, NULL,
	0, -1, NULL},
	SpaceSequenceEditor_proxy_render_size_get, SpaceSequenceEditor_proxy_render_size_set, NULL, NULL, NULL, NULL, rna_SpaceSequenceEditor_proxy_render_size_items, 7, 0
};

PointerPropertyRNA rna_SpaceSequenceEditor_grease_pencil = {
	{(PropertyRNA *)&rna_SpaceSequenceEditor_overlay_type, (PropertyRNA *)&rna_SpaceSequenceEditor_proxy_render_size,
	-1, "grease_pencil", 8388673, "Grease Pencil",
	"Grease pencil data for this space",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 252706816, NULL, NULL,
	0, -1, NULL},
	SpaceSequenceEditor_grease_pencil_get, SpaceSequenceEditor_grease_pencil_set, NULL, NULL,&RNA_GreasePencil
};

static EnumPropertyItem rna_SpaceSequenceEditor_overlay_type_items[4] = {
	{0, "RECTANGLE", 0, "Rectangle", "Show rectangle area overlay"},
	{1, "REFERENCE", 0, "Reference", "Show reference frame only"},
	{2, "CURRENT", 0, "Current", "Show current frame only"},
	{0, NULL, 0, NULL, NULL}
};

EnumPropertyRNA rna_SpaceSequenceEditor_overlay_type = {
	{NULL, (PropertyRNA *)&rna_SpaceSequenceEditor_grease_pencil,
	-1, "overlay_type", 3, "Overlay Type",
	"Overlay draw type",
	0, "*",
	PROP_ENUM, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 252706816, NULL, NULL,
	0, -1, NULL},
	SpaceSequenceEditor_overlay_type_get, SpaceSequenceEditor_overlay_type_set, NULL, NULL, NULL, NULL, rna_SpaceSequenceEditor_overlay_type_items, 3, 0
};

StructRNA RNA_SpaceSequenceEditor = {
	{(ContainerRNA *)&RNA_SpaceTextEditor, (ContainerRNA *)&RNA_SpaceUVEditor,
	NULL,
	{(PropertyRNA *)&rna_SpaceSequenceEditor_view_type, (PropertyRNA *)&rna_SpaceSequenceEditor_overlay_type}},
	"SpaceSequenceEditor", NULL, NULL, 4, "Space Sequence Editor",
	"Sequence editor space data",
	"*", 17,
	NULL, (PropertyRNA *)&rna_Space_rna_properties,
	&RNA_Space,
	NULL,
	rna_Space_refine,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	{NULL, NULL}
};

/* Space Text Editor */
PointerPropertyRNA rna_SpaceTextEditor_text = {
	{(PropertyRNA *)&rna_SpaceTextEditor_show_word_wrap, NULL,
	-1, "text", 8388609, "Text",
	"Text displayed and edited in this space",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 252379136, NULL, NULL,
	0, -1, NULL},
	SpaceTextEditor_text_get, SpaceTextEditor_text_set, NULL, NULL,&RNA_Text
};

BoolPropertyRNA rna_SpaceTextEditor_show_word_wrap = {
	{(PropertyRNA *)&rna_SpaceTextEditor_show_line_numbers, (PropertyRNA *)&rna_SpaceTextEditor_text,
	-1, "show_word_wrap", 4099, "Word Wrap",
	"Wrap words if there is not enough horizontal space",
	740, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 252379136, NULL, NULL,
	0, -1, NULL},
	SpaceTextEditor_show_word_wrap_get, SpaceTextEditor_show_word_wrap_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_SpaceTextEditor_show_line_numbers = {
	{(PropertyRNA *)&rna_SpaceTextEditor_show_syntax_highlight, (PropertyRNA *)&rna_SpaceTextEditor_show_word_wrap,
	-1, "show_line_numbers", 12291, "Line Numbers",
	"Show line numbers next to the text",
	744, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 252379136, NULL, NULL,
	offsetof(SpaceText, showlinenrs), 0, NULL},
	SpaceTextEditor_show_line_numbers_get, SpaceTextEditor_show_line_numbers_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_SpaceTextEditor_show_syntax_highlight = {
	{(PropertyRNA *)&rna_SpaceTextEditor_show_line_highlight, (PropertyRNA *)&rna_SpaceTextEditor_show_line_numbers,
	-1, "show_syntax_highlight", 12291, "Syntax Highlight",
	"Syntax highlight for scripting",
	742, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 252379136, NULL, NULL,
	offsetof(SpaceText, showsyntax), 1, NULL},
	SpaceTextEditor_show_syntax_highlight_get, SpaceTextEditor_show_syntax_highlight_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_SpaceTextEditor_show_line_highlight = {
	{(PropertyRNA *)&rna_SpaceTextEditor_tab_width, (PropertyRNA *)&rna_SpaceTextEditor_show_syntax_highlight,
	-1, "show_line_highlight", 8195, "Highlight Line",
	"Highlight the current line",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 252379136, NULL, NULL,
	offsetof(SpaceText, line_hlight), 1, NULL},
	SpaceTextEditor_show_line_highlight_get, SpaceTextEditor_show_line_highlight_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

IntPropertyRNA rna_SpaceTextEditor_tab_width = {
	{(PropertyRNA *)&rna_SpaceTextEditor_font_size, (PropertyRNA *)&rna_SpaceTextEditor_show_line_highlight,
	-1, "tab_width", 8195, "Tab Width",
	"Number of spaces to display tabs with",
	0, "*",
	PROP_INT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_SpaceTextEditor_updateEdited, 252379136, NULL, NULL,
	offsetof(SpaceText, tabnumber), 0, NULL},
	SpaceTextEditor_tab_width_get, SpaceTextEditor_tab_width_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL,
	2, 8, 2, 8, 1, 0, NULL
};

IntPropertyRNA rna_SpaceTextEditor_font_size = {
	{(PropertyRNA *)&rna_SpaceTextEditor_show_margin, (PropertyRNA *)&rna_SpaceTextEditor_tab_width,
	-1, "font_size", 8195, "Font Size",
	"Font size to use for displaying the text",
	0, "*",
	PROP_INT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 252379136, NULL, NULL,
	offsetof(SpaceText, lheight), 1, NULL},
	SpaceTextEditor_font_size_get, SpaceTextEditor_font_size_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL,
	8, 32, 8, 32, 1, 0, NULL
};

BoolPropertyRNA rna_SpaceTextEditor_show_margin = {
	{(PropertyRNA *)&rna_SpaceTextEditor_margin_column, (PropertyRNA *)&rna_SpaceTextEditor_font_size,
	-1, "show_margin", 3, "Show Margin",
	"Show right margin",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 252379136, NULL, NULL,
	0, -1, NULL},
	SpaceTextEditor_show_margin_get, SpaceTextEditor_show_margin_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

IntPropertyRNA rna_SpaceTextEditor_margin_column = {
	{(PropertyRNA *)&rna_SpaceTextEditor_top, (PropertyRNA *)&rna_SpaceTextEditor_show_margin,
	-1, "margin_column", 8195, "Margin Column",
	"Column number to show right margin at",
	0, "*",
	PROP_INT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 252379136, NULL, NULL,
	offsetof(SpaceText, margin_column), 1, NULL},
	SpaceTextEditor_margin_column_get, SpaceTextEditor_margin_column_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL,
	0, 1024, 0, 1024, 1, 0, NULL
};

IntPropertyRNA rna_SpaceTextEditor_top = {
	{(PropertyRNA *)&rna_SpaceTextEditor_visible_lines, (PropertyRNA *)&rna_SpaceTextEditor_margin_column,
	-1, "top", 8194, "Top Line",
	"Top line visible",
	0, "*",
	PROP_INT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	offsetof(SpaceText, top), 0, NULL},
	SpaceTextEditor_top_get, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL,
	-10000, 10000, INT_MIN, INT_MAX, 1, 0, NULL
};

IntPropertyRNA rna_SpaceTextEditor_visible_lines = {
	{(PropertyRNA *)&rna_SpaceTextEditor_use_overwrite, (PropertyRNA *)&rna_SpaceTextEditor_top,
	-1, "visible_lines", 8194, "Top Line",
	"Amount of lines that can be visible in current editor",
	0, "*",
	PROP_INT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	offsetof(SpaceText, viewlines), 0, NULL},
	SpaceTextEditor_visible_lines_get, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL,
	-10000, 10000, INT_MIN, INT_MAX, 1, 0, NULL
};

BoolPropertyRNA rna_SpaceTextEditor_use_overwrite = {
	{(PropertyRNA *)&rna_SpaceTextEditor_use_live_edit, (PropertyRNA *)&rna_SpaceTextEditor_visible_lines,
	-1, "use_overwrite", 3, "Overwrite",
	"Overwrite characters when typing rather than inserting them",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 252379136, NULL, NULL,
	0, -1, NULL},
	SpaceTextEditor_use_overwrite_get, SpaceTextEditor_use_overwrite_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_SpaceTextEditor_use_live_edit = {
	{(PropertyRNA *)&rna_SpaceTextEditor_use_find_all, (PropertyRNA *)&rna_SpaceTextEditor_use_overwrite,
	-1, "use_live_edit", 3, "Live Edit",
	"Run python while editing",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 252379136, NULL, NULL,
	0, -1, NULL},
	SpaceTextEditor_use_live_edit_get, SpaceTextEditor_use_live_edit_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_SpaceTextEditor_use_find_all = {
	{(PropertyRNA *)&rna_SpaceTextEditor_use_find_wrap, (PropertyRNA *)&rna_SpaceTextEditor_use_live_edit,
	-1, "use_find_all", 3, "Find All",
	"Search in all text datablocks, instead of only the active one",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 252379136, NULL, NULL,
	0, -1, NULL},
	SpaceTextEditor_use_find_all_get, SpaceTextEditor_use_find_all_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_SpaceTextEditor_use_find_wrap = {
	{(PropertyRNA *)&rna_SpaceTextEditor_use_match_case, (PropertyRNA *)&rna_SpaceTextEditor_use_find_all,
	-1, "use_find_wrap", 3, "Find Wrap",
	"Search again from the start of the file when reaching the end",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 252379136, NULL, NULL,
	0, -1, NULL},
	SpaceTextEditor_use_find_wrap_get, SpaceTextEditor_use_find_wrap_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_SpaceTextEditor_use_match_case = {
	{(PropertyRNA *)&rna_SpaceTextEditor_find_text, (PropertyRNA *)&rna_SpaceTextEditor_use_find_wrap,
	-1, "use_match_case", 3, "Match case",
	"Search string is sensitive to uppercase and lowercase letters",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 252379136, NULL, NULL,
	0, -1, NULL},
	SpaceTextEditor_use_match_case_get, SpaceTextEditor_use_match_case_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

StringPropertyRNA rna_SpaceTextEditor_find_text = {
	{(PropertyRNA *)&rna_SpaceTextEditor_replace_text, (PropertyRNA *)&rna_SpaceTextEditor_use_match_case,
	-1, "find_text", 262145, "Find Text",
	"Text to search for with the find tool",
	0, "*",
	PROP_STRING, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {256, 0, 0}, 0,
	NULL, 252379136, NULL, NULL,
	0, -1, NULL},
	SpaceTextEditor_find_text_get, SpaceTextEditor_find_text_length, SpaceTextEditor_find_text_set, NULL, NULL, NULL, 256, ""
};

StringPropertyRNA rna_SpaceTextEditor_replace_text = {
	{NULL, (PropertyRNA *)&rna_SpaceTextEditor_find_text,
	-1, "replace_text", 262145, "Replace Text",
	"Text to replace selected text with using the replace tool",
	0, "*",
	PROP_STRING, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {256, 0, 0}, 0,
	NULL, 252379136, NULL, NULL,
	0, -1, NULL},
	SpaceTextEditor_replace_text_get, SpaceTextEditor_replace_text_length, SpaceTextEditor_replace_text_set, NULL, NULL, NULL, 256, ""
};

StructRNA RNA_SpaceTextEditor = {
	{(ContainerRNA *)&RNA_FileSelectParams, (ContainerRNA *)&RNA_SpaceSequenceEditor,
	NULL,
	{(PropertyRNA *)&rna_SpaceTextEditor_text, (PropertyRNA *)&rna_SpaceTextEditor_replace_text}},
	"SpaceTextEditor", NULL, NULL, 4, "Space Text Editor",
	"Text editor space data",
	"*", 17,
	NULL, (PropertyRNA *)&rna_Space_rna_properties,
	&RNA_Space,
	NULL,
	rna_Space_refine,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	{NULL, NULL}
};

/* File Select Parameters */
CollectionPropertyRNA rna_FileSelectParams_rna_properties = {
	{(PropertyRNA *)&rna_FileSelectParams_rna_type, NULL,
	-1, "rna_properties", 128, "Properties",
	"RNA property collection",
	0, "*",
	PROP_COLLECTION, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	FileSelectParams_rna_properties_begin, FileSelectParams_rna_properties_next, FileSelectParams_rna_properties_end, FileSelectParams_rna_properties_get, NULL, NULL, FileSelectParams_rna_properties_lookup_string, NULL, &RNA_Property
};

PointerPropertyRNA rna_FileSelectParams_rna_type = {
	{(PropertyRNA *)&rna_FileSelectParams_title, (PropertyRNA *)&rna_FileSelectParams_rna_properties,
	-1, "rna_type", 8912896, "RNA",
	"RNA type definition",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	FileSelectParams_rna_type_get, NULL, NULL, NULL,&RNA_Struct
};

StringPropertyRNA rna_FileSelectParams_title = {
	{(PropertyRNA *)&rna_FileSelectParams_directory, (PropertyRNA *)&rna_FileSelectParams_rna_type,
	-1, "title", 262144, "Title",
	"Title for the file browser",
	0, "*",
	PROP_STRING, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {96, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	FileSelectParams_title_get, FileSelectParams_title_length, NULL, NULL, NULL, NULL, 96, ""
};

StringPropertyRNA rna_FileSelectParams_directory = {
	{(PropertyRNA *)&rna_FileSelectParams_filename, (PropertyRNA *)&rna_FileSelectParams_title,
	-1, "directory", 262145, "Directory",
	"Directory displayed in the file browser",
	0, "*",
	PROP_STRING, PROP_DIRPATH | PROP_UNIT_NONE, NULL, 0, {1056, 0, 0}, 0,
	NULL, 251985920, NULL, NULL,
	0, -1, NULL},
	FileSelectParams_directory_get, FileSelectParams_directory_length, FileSelectParams_directory_set, NULL, NULL, NULL, 1056, ""
};

StringPropertyRNA rna_FileSelectParams_filename = {
	{(PropertyRNA *)&rna_FileSelectParams_display_type, (PropertyRNA *)&rna_FileSelectParams_directory,
	-1, "filename", 262145, "File Name",
	"Active file in the file browser",
	0, "*",
	PROP_STRING, PROP_FILENAME | PROP_UNIT_NONE, NULL, 0, {256, 0, 0}, 0,
	NULL, 251985920, NULL, NULL,
	0, -1, NULL},
	FileSelectParams_filename_get, FileSelectParams_filename_length, FileSelectParams_filename_set, NULL, NULL, NULL, 256, ""
};

static EnumPropertyItem rna_FileSelectParams_display_type_items[4] = {
	{1, "FILE_SHORTDISPLAY", 681, "Short List", "Display files as short list"},
	{2, "FILE_LONGDISPLAY", 680, "Long List", "Display files as a detailed list"},
	{3, "FILE_IMGDISPLAY", 683, "Thumbnails", "Display files as thumbnails"},
	{0, NULL, 0, NULL, NULL}
};

EnumPropertyRNA rna_FileSelectParams_display_type = {
	{(PropertyRNA *)&rna_FileSelectParams_use_filter, (PropertyRNA *)&rna_FileSelectParams_filename,
	-1, "display_type", 3, "Display Mode",
	"Display mode for the file list",
	0, "*",
	PROP_ENUM, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 251985920, NULL, NULL,
	0, -1, NULL},
	FileSelectParams_display_type_get, FileSelectParams_display_type_set, NULL, NULL, NULL, NULL, rna_FileSelectParams_display_type_items, 3, 1
};

BoolPropertyRNA rna_FileSelectParams_use_filter = {
	{(PropertyRNA *)&rna_FileSelectParams_show_hidden, (PropertyRNA *)&rna_FileSelectParams_display_type,
	-1, "use_filter", 3, "Filter Files",
	"Enable filtering of files",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 251985920, NULL, NULL,
	0, -1, NULL},
	FileSelectParams_use_filter_get, FileSelectParams_use_filter_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_FileSelectParams_show_hidden = {
	{(PropertyRNA *)&rna_FileSelectParams_sort_method, (PropertyRNA *)&rna_FileSelectParams_use_filter,
	-1, "show_hidden", 3, "Show Hidden",
	"Show hidden dot files",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 251985920, NULL, NULL,
	0, -1, NULL},
	FileSelectParams_show_hidden_get, FileSelectParams_show_hidden_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

static EnumPropertyItem rna_FileSelectParams_sort_method_items[5] = {
	{1, "FILE_SORT_ALPHA", 676, "Sort alphabetically", "Sort the file list alphabetically"},
	{2, "FILE_SORT_EXTENSION", 677, "Sort by extension", "Sort the file list by extension"},
	{3, "FILE_SORT_TIME", 678, "Sort by time", "Sort files by modification time"},
	{4, "FILE_SORT_SIZE", 679, "Sort by size", "Sort files by size"},
	{0, NULL, 0, NULL, NULL}
};

EnumPropertyRNA rna_FileSelectParams_sort_method = {
	{(PropertyRNA *)&rna_FileSelectParams_use_filter_image, (PropertyRNA *)&rna_FileSelectParams_show_hidden,
	-1, "sort_method", 3, "Sort",
	"",
	0, "*",
	PROP_ENUM, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 251985920, NULL, NULL,
	0, -1, NULL},
	FileSelectParams_sort_method_get, FileSelectParams_sort_method_set, NULL, NULL, NULL, NULL, rna_FileSelectParams_sort_method_items, 4, 1
};

BoolPropertyRNA rna_FileSelectParams_use_filter_image = {
	{(PropertyRNA *)&rna_FileSelectParams_use_filter_blender, (PropertyRNA *)&rna_FileSelectParams_sort_method,
	-1, "use_filter_image", 3, "Filter Images",
	"Show image files",
	696, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 251985920, NULL, NULL,
	0, -1, NULL},
	FileSelectParams_use_filter_image_get, FileSelectParams_use_filter_image_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_FileSelectParams_use_filter_blender = {
	{(PropertyRNA *)&rna_FileSelectParams_use_filter_backup, (PropertyRNA *)&rna_FileSelectParams_use_filter_image,
	-1, "use_filter_blender", 3, "Filter Blender",
	"Show .blend files",
	695, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 251985920, NULL, NULL,
	0, -1, NULL},
	FileSelectParams_use_filter_blender_get, FileSelectParams_use_filter_blender_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_FileSelectParams_use_filter_backup = {
	{(PropertyRNA *)&rna_FileSelectParams_use_filter_movie, (PropertyRNA *)&rna_FileSelectParams_use_filter_blender,
	-1, "use_filter_backup", 3, "Filter BlenderBackup files",
	"Show .blend1, .blend2, etc. files",
	726, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 251985920, NULL, NULL,
	0, -1, NULL},
	FileSelectParams_use_filter_backup_get, FileSelectParams_use_filter_backup_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_FileSelectParams_use_filter_movie = {
	{(PropertyRNA *)&rna_FileSelectParams_use_filter_script, (PropertyRNA *)&rna_FileSelectParams_use_filter_backup,
	-1, "use_filter_movie", 3, "Filter Movies",
	"Show movie files",
	697, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 251985920, NULL, NULL,
	0, -1, NULL},
	FileSelectParams_use_filter_movie_get, FileSelectParams_use_filter_movie_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_FileSelectParams_use_filter_script = {
	{(PropertyRNA *)&rna_FileSelectParams_use_filter_font, (PropertyRNA *)&rna_FileSelectParams_use_filter_movie,
	-1, "use_filter_script", 3, "Filter Script",
	"Show script files",
	698, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 251985920, NULL, NULL,
	0, -1, NULL},
	FileSelectParams_use_filter_script_get, FileSelectParams_use_filter_script_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_FileSelectParams_use_filter_font = {
	{(PropertyRNA *)&rna_FileSelectParams_use_filter_sound, (PropertyRNA *)&rna_FileSelectParams_use_filter_script,
	-1, "use_filter_font", 3, "Filter Fonts",
	"Show font files",
	700, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 251985920, NULL, NULL,
	0, -1, NULL},
	FileSelectParams_use_filter_font_get, FileSelectParams_use_filter_font_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_FileSelectParams_use_filter_sound = {
	{(PropertyRNA *)&rna_FileSelectParams_use_filter_text, (PropertyRNA *)&rna_FileSelectParams_use_filter_font,
	-1, "use_filter_sound", 3, "Filter Sound",
	"Show sound files",
	699, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 251985920, NULL, NULL,
	0, -1, NULL},
	FileSelectParams_use_filter_sound_get, FileSelectParams_use_filter_sound_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_FileSelectParams_use_filter_text = {
	{(PropertyRNA *)&rna_FileSelectParams_use_filter_folder, (PropertyRNA *)&rna_FileSelectParams_use_filter_sound,
	-1, "use_filter_text", 3, "Filter Text",
	"Show text files",
	701, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 251985920, NULL, NULL,
	0, -1, NULL},
	FileSelectParams_use_filter_text_get, FileSelectParams_use_filter_text_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_FileSelectParams_use_filter_folder = {
	{(PropertyRNA *)&rna_FileSelectParams_filter_glob, (PropertyRNA *)&rna_FileSelectParams_use_filter_text,
	-1, "use_filter_folder", 3, "Filter Folder",
	"Show folders",
	693, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 251985920, NULL, NULL,
	0, -1, NULL},
	FileSelectParams_use_filter_folder_get, FileSelectParams_use_filter_folder_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

StringPropertyRNA rna_FileSelectParams_filter_glob = {
	{NULL, (PropertyRNA *)&rna_FileSelectParams_use_filter_folder,
	-1, "filter_glob", 262145, "Extension Filter",
	"",
	0, "*",
	PROP_STRING, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {64, 0, 0}, 0,
	NULL, 252051456, NULL, NULL,
	0, -1, NULL},
	FileSelectParams_filter_glob_get, FileSelectParams_filter_glob_length, FileSelectParams_filter_glob_set, NULL, NULL, NULL, 64, ""
};

StructRNA RNA_FileSelectParams = {
	{(ContainerRNA *)&RNA_SpaceFileBrowser, (ContainerRNA *)&RNA_SpaceTextEditor,
	NULL,
	{(PropertyRNA *)&rna_FileSelectParams_rna_properties, (PropertyRNA *)&rna_FileSelectParams_filter_glob}},
	"FileSelectParams", NULL, NULL, 4, "File Select Parameters",
	"File Select Parameters",
	"*", 17,
	NULL, (PropertyRNA *)&rna_FileSelectParams_rna_properties,
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

/* Space File Browser */
PointerPropertyRNA rna_SpaceFileBrowser_params = {
	{(PropertyRNA *)&rna_SpaceFileBrowser_active_operator, NULL,
	-1, "params", 8388608, "Filebrowser Parameter",
	"Parameters and Settings for the Filebrowser",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	SpaceFileBrowser_params_get, NULL, NULL, NULL,&RNA_FileSelectParams
};

PointerPropertyRNA rna_SpaceFileBrowser_active_operator = {
	{(PropertyRNA *)&rna_SpaceFileBrowser_operator, (PropertyRNA *)&rna_SpaceFileBrowser_params,
	-1, "active_operator", 8388608, "Active Operator",
	"",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	SpaceFileBrowser_active_operator_get, NULL, NULL, NULL,&RNA_Operator
};

PointerPropertyRNA rna_SpaceFileBrowser_operator = {
	{NULL, (PropertyRNA *)&rna_SpaceFileBrowser_active_operator,
	-1, "operator", 8388608, "Active Operator",
	"",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	SpaceFileBrowser_operator_value_get, NULL, NULL, NULL,&RNA_Operator
};

StructRNA RNA_SpaceFileBrowser = {
	{(ContainerRNA *)&RNA_SpaceOutliner, (ContainerRNA *)&RNA_FileSelectParams,
	NULL,
	{(PropertyRNA *)&rna_SpaceFileBrowser_params, (PropertyRNA *)&rna_SpaceFileBrowser_operator}},
	"SpaceFileBrowser", NULL, NULL, 4, "Space File Browser",
	"File browser space data",
	"*", 17,
	NULL, (PropertyRNA *)&rna_Space_rna_properties,
	&RNA_Space,
	NULL,
	rna_Space_refine,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	{NULL, NULL}
};

/* Space Outliner */
static EnumPropertyItem rna_SpaceOutliner_display_mode_items[12] = {
	{0, "ALL_SCENES", 0, "All Scenes", "Display datablocks in all scenes"},
	{1, "CURRENT_SCENE", 0, "Current Scene", "Display datablocks in current scene"},
	{2, "VISIBLE_LAYERS", 0, "Visible Layers", "Display datablocks in visible layers"},
	{3, "SELECTED", 0, "Selected", "Display datablocks of selected objects"},
	{4, "ACTIVE", 0, "Active", "Display datablocks of active object"},
	{5, "SAME_TYPES", 0, "Same Types", "Display datablocks of all objects of same type as selected object"},
	{6, "GROUPS", 0, "Groups", "Display groups and their datablocks"},
	{10, "SEQUENCE", 0, "Sequence", "Display sequence datablocks"},
	{7, "LIBRARIES", 0, "Blender File", "Display data of current file and linked libraries"},
	{11, "DATABLOCKS", 0, "Datablocks", "Display all raw datablocks"},
	{12, "USER_PREFERENCES", 0, "User Preferences", "Display the user preference datablocks"},
	{0, NULL, 0, NULL, NULL}
};

EnumPropertyRNA rna_SpaceOutliner_display_mode = {
	{(PropertyRNA *)&rna_SpaceOutliner_filter_text, NULL,
	-1, "display_mode", 3, "Display Mode",
	"Type of information to display",
	0, "*",
	PROP_ENUM, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 252182528, NULL, NULL,
	0, -1, NULL},
	SpaceOutliner_display_mode_get, SpaceOutliner_display_mode_set, NULL, NULL, NULL, NULL, rna_SpaceOutliner_display_mode_items, 11, 0
};

StringPropertyRNA rna_SpaceOutliner_filter_text = {
	{(PropertyRNA *)&rna_SpaceOutliner_use_filter_case_sensitive, (PropertyRNA *)&rna_SpaceOutliner_display_mode,
	-1, "filter_text", 262145, "Display Filter",
	"Live search filtering string",
	0, "*",
	PROP_STRING, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {32, 0, 0}, 0,
	NULL, 252182528, NULL, NULL,
	0, -1, NULL},
	SpaceOutliner_filter_text_get, SpaceOutliner_filter_text_length, SpaceOutliner_filter_text_set, NULL, NULL, NULL, 32, ""
};

BoolPropertyRNA rna_SpaceOutliner_use_filter_case_sensitive = {
	{(PropertyRNA *)&rna_SpaceOutliner_use_filter_complete, (PropertyRNA *)&rna_SpaceOutliner_filter_text,
	-1, "use_filter_case_sensitive", 3, "Case Sensitive Matches Only",
	"Only use case sensitive matches of search string",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 252182528, NULL, NULL,
	0, -1, NULL},
	SpaceOutliner_use_filter_case_sensitive_get, SpaceOutliner_use_filter_case_sensitive_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_SpaceOutliner_use_filter_complete = {
	{(PropertyRNA *)&rna_SpaceOutliner_show_restrict_columns, (PropertyRNA *)&rna_SpaceOutliner_use_filter_case_sensitive,
	-1, "use_filter_complete", 3, "Complete Matches Only",
	"Only use complete matches of search string",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 252182528, NULL, NULL,
	0, -1, NULL},
	SpaceOutliner_use_filter_complete_get, SpaceOutliner_use_filter_complete_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_SpaceOutliner_show_restrict_columns = {
	{NULL, (PropertyRNA *)&rna_SpaceOutliner_use_filter_complete,
	-1, "show_restrict_columns", 3, "Show Restriction Columns",
	"Show column",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 252182528, NULL, NULL,
	0, -1, NULL},
	SpaceOutliner_show_restrict_columns_get, SpaceOutliner_show_restrict_columns_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

StructRNA RNA_SpaceOutliner = {
	{(ContainerRNA *)&RNA_BackgroundImage, (ContainerRNA *)&RNA_SpaceFileBrowser,
	NULL,
	{(PropertyRNA *)&rna_SpaceOutliner_display_mode, (PropertyRNA *)&rna_SpaceOutliner_show_restrict_columns}},
	"SpaceOutliner", NULL, NULL, 4, "Space Outliner",
	"Outliner space data",
	"*", 17,
	NULL, (PropertyRNA *)&rna_Space_rna_properties,
	&RNA_Space,
	NULL,
	rna_Space_refine,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	{NULL, NULL}
};

/* Background Image */
CollectionPropertyRNA rna_BackgroundImage_rna_properties = {
	{(PropertyRNA *)&rna_BackgroundImage_rna_type, NULL,
	-1, "rna_properties", 128, "Properties",
	"RNA property collection",
	0, "*",
	PROP_COLLECTION, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	BackgroundImage_rna_properties_begin, BackgroundImage_rna_properties_next, BackgroundImage_rna_properties_end, BackgroundImage_rna_properties_get, NULL, NULL, BackgroundImage_rna_properties_lookup_string, NULL, &RNA_Property
};

PointerPropertyRNA rna_BackgroundImage_rna_type = {
	{(PropertyRNA *)&rna_BackgroundImage_source, (PropertyRNA *)&rna_BackgroundImage_rna_properties,
	-1, "rna_type", 8912896, "RNA",
	"RNA type definition",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	BackgroundImage_rna_type_get, NULL, NULL, NULL,&RNA_Struct
};

static EnumPropertyItem rna_BackgroundImage_source_items[3] = {
	{0, "IMAGE", 0, "Image", ""},
	{1, "MOVIE_CLIP", 0, "Movie Clip", ""},
	{0, NULL, 0, NULL, NULL}
};

EnumPropertyRNA rna_BackgroundImage_source = {
	{(PropertyRNA *)&rna_BackgroundImage_image, (PropertyRNA *)&rna_BackgroundImage_rna_type,
	-1, "source", 3, "Background Source",
	"Data source used for background",
	0, "*",
	PROP_ENUM, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 252248064, NULL, NULL,
	0, -1, NULL},
	BackgroundImage_source_get, BackgroundImage_source_set, NULL, NULL, NULL, NULL, rna_BackgroundImage_source_items, 2, 0
};

PointerPropertyRNA rna_BackgroundImage_image = {
	{(PropertyRNA *)&rna_BackgroundImage_clip, (PropertyRNA *)&rna_BackgroundImage_source,
	-1, "image", 8388673, "Image",
	"Image displayed and edited in this space",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 252248064, NULL, NULL,
	0, -1, NULL},
	BackgroundImage_image_get, BackgroundImage_image_set, NULL, NULL,&RNA_Image
};

PointerPropertyRNA rna_BackgroundImage_clip = {
	{(PropertyRNA *)&rna_BackgroundImage_image_user, (PropertyRNA *)&rna_BackgroundImage_image,
	-1, "clip", 8388673, "MovieClip",
	"Movie clip displayed and edited in this space",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 252248064, NULL, NULL,
	0, -1, NULL},
	BackgroundImage_clip_get, BackgroundImage_clip_set, NULL, NULL,&RNA_MovieClip
};

PointerPropertyRNA rna_BackgroundImage_image_user = {
	{(PropertyRNA *)&rna_BackgroundImage_clip_user, (PropertyRNA *)&rna_BackgroundImage_clip,
	-1, "image_user", 8650752, "Image User",
	"Parameters defining which layer, pass and frame of the image is displayed",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 252248064, NULL, NULL,
	0, -1, NULL},
	BackgroundImage_image_user_get, NULL, NULL, NULL,&RNA_ImageUser
};

PointerPropertyRNA rna_BackgroundImage_clip_user = {
	{(PropertyRNA *)&rna_BackgroundImage_offset_x, (PropertyRNA *)&rna_BackgroundImage_image_user,
	-1, "clip_user", 8650752, "Clip User",
	"Parameters defining which frame of the movie clip is displayed",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 252248064, NULL, NULL,
	0, -1, NULL},
	BackgroundImage_clip_user_get, NULL, NULL, NULL,&RNA_MovieClipUser
};

FloatPropertyRNA rna_BackgroundImage_offset_x = {
	{(PropertyRNA *)&rna_BackgroundImage_offset_y, (PropertyRNA *)&rna_BackgroundImage_clip_user,
	-1, "offset_x", 8195, "X Offset",
	"Offset image horizontally from the world origin",
	0, "*",
	PROP_FLOAT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 252248064, NULL, NULL,
	offsetof(BGpic, xof), 4, NULL},
	BackgroundImage_offset_x_get, BackgroundImage_offset_x_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, -10000.0f, 10000.0f, -FLT_MAX, FLT_MAX, 10.0f, 3, 0.0f, NULL
};

FloatPropertyRNA rna_BackgroundImage_offset_y = {
	{(PropertyRNA *)&rna_BackgroundImage_size, (PropertyRNA *)&rna_BackgroundImage_offset_x,
	-1, "offset_y", 8195, "Y Offset",
	"Offset image vertically from the world origin",
	0, "*",
	PROP_FLOAT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 252248064, NULL, NULL,
	offsetof(BGpic, yof), 4, NULL},
	BackgroundImage_offset_y_get, BackgroundImage_offset_y_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, -10000.0f, 10000.0f, -FLT_MAX, FLT_MAX, 10.0f, 3, 0.0f, NULL
};

FloatPropertyRNA rna_BackgroundImage_size = {
	{(PropertyRNA *)&rna_BackgroundImage_opacity, (PropertyRNA *)&rna_BackgroundImage_offset_y,
	-1, "size", 8195, "Size",
	"Scaling factor for the background image",
	0, "*",
	PROP_FLOAT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 252248064, NULL, NULL,
	offsetof(BGpic, size), 4, NULL},
	BackgroundImage_size_get, BackgroundImage_size_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, FLT_MAX, 0.0f, FLT_MAX, 10.0f, 3, 0.0f, NULL
};

FloatPropertyRNA rna_BackgroundImage_opacity = {
	{(PropertyRNA *)&rna_BackgroundImage_view_axis, (PropertyRNA *)&rna_BackgroundImage_size,
	-1, "opacity", 3, "Opacity",
	"Image opacity to blend the image against the background color",
	0, "*",
	PROP_FLOAT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 252248064, NULL, NULL,
	0, -1, NULL},
	BackgroundImage_opacity_get, BackgroundImage_opacity_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 1.0f, 0.0f, 1.0f, 10.0f, 3, 0.0f, NULL
};

static EnumPropertyItem rna_BackgroundImage_view_axis_items[13] = {
	{0, "", 0, "X Axis", ""},
	{8, "LEFT", 0, "Left", "Show background image while looking to the left"},
	{16, "RIGHT", 0, "Right", "Show background image while looking to the right"},
	{0, "", 0, "Y Axis", ""},
	{4, "BACK", 0, "Back", "Show background image in back view"},
	{2, "FRONT", 0, "Front", "Show background image in front view"},
	{0, "", 0, "Z Axis", ""},
	{64, "BOTTOM", 0, "Bottom", "Show background image in bottom view"},
	{32, "TOP", 0, "Top", "Show background image in top view"},
	{0, "", 0, "Other", ""},
	{0, "ALL", 0, "All Views", "Show background image in all views"},
	{256, "CAMERA", 0, "Camera", "Show background image in camera view"},
	{0, NULL, 0, NULL, NULL}
};

EnumPropertyRNA rna_BackgroundImage_view_axis = {
	{(PropertyRNA *)&rna_BackgroundImage_show_expanded, (PropertyRNA *)&rna_BackgroundImage_opacity,
	-1, "view_axis", 3, "Image Axis",
	"The axis to display the image on",
	0, "*",
	PROP_ENUM, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 252248064, NULL, NULL,
	0, -1, NULL},
	BackgroundImage_view_axis_get, BackgroundImage_view_axis_set, NULL, NULL, NULL, NULL, rna_BackgroundImage_view_axis_items, 12, 0
};

BoolPropertyRNA rna_BackgroundImage_show_expanded = {
	{(PropertyRNA *)&rna_BackgroundImage_use_camera_clip, (PropertyRNA *)&rna_BackgroundImage_view_axis,
	-1, "show_expanded", 4099, "Show Expanded",
	"Show the expanded in the user interface",
	4, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	BackgroundImage_show_expanded_get, BackgroundImage_show_expanded_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_BackgroundImage_use_camera_clip = {
	{(PropertyRNA *)&rna_BackgroundImage_show_background_image, (PropertyRNA *)&rna_BackgroundImage_show_expanded,
	-1, "use_camera_clip", 3, "Camera Clip",
	"Use movie clip from active scene camera",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 252248064, NULL, NULL,
	0, -1, NULL},
	BackgroundImage_use_camera_clip_get, BackgroundImage_use_camera_clip_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_BackgroundImage_show_background_image = {
	{(PropertyRNA *)&rna_BackgroundImage_show_on_foreground, (PropertyRNA *)&rna_BackgroundImage_use_camera_clip,
	-1, "show_background_image", 3, "Show Background Image",
	"Show this image as background",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 252248064, NULL, NULL,
	0, -1, NULL},
	BackgroundImage_show_background_image_get, BackgroundImage_show_background_image_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_BackgroundImage_show_on_foreground = {
	{(PropertyRNA *)&rna_BackgroundImage_draw_depth, (PropertyRNA *)&rna_BackgroundImage_show_background_image,
	-1, "show_on_foreground", 3, "Show On Foreground",
	"Show this image in front of objects in viewport",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 252248064, NULL, NULL,
	0, -1, NULL},
	BackgroundImage_show_on_foreground_get, BackgroundImage_show_on_foreground_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

static EnumPropertyItem rna_BackgroundImage_draw_depth_items[3] = {
	{0, "BACK", 0, "Back", ""},
	{16, "FRONT", 0, "Front", ""},
	{0, NULL, 0, NULL, NULL}
};

EnumPropertyRNA rna_BackgroundImage_draw_depth = {
	{(PropertyRNA *)&rna_BackgroundImage_frame_method, (PropertyRNA *)&rna_BackgroundImage_show_on_foreground,
	-1, "draw_depth", 3, "Depth",
	"Draw under or over everything",
	0, "*",
	PROP_ENUM, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 252248064, NULL, NULL,
	0, -1, NULL},
	BackgroundImage_draw_depth_get, BackgroundImage_draw_depth_set, NULL, NULL, NULL, NULL, rna_BackgroundImage_draw_depth_items, 2, 0
};

static EnumPropertyItem rna_BackgroundImage_frame_method_items[4] = {
	{0, "STRETCH", 0, "Stretch", ""},
	{32, "FIT", 0, "Fit", ""},
	{96, "CROP", 0, "Crop", ""},
	{0, NULL, 0, NULL, NULL}
};

EnumPropertyRNA rna_BackgroundImage_frame_method = {
	{NULL, (PropertyRNA *)&rna_BackgroundImage_draw_depth,
	-1, "frame_method", 3, "Frame Method",
	"How the image fits in the camera frame",
	0, "*",
	PROP_ENUM, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 252248064, NULL, NULL,
	0, -1, NULL},
	BackgroundImage_frame_method_get, BackgroundImage_frame_method_set, NULL, NULL, NULL, NULL, rna_BackgroundImage_frame_method_items, 3, 0
};

StructRNA RNA_BackgroundImage = {
	{(ContainerRNA *)&RNA_SpaceView3D, (ContainerRNA *)&RNA_SpaceOutliner,
	NULL,
	{(PropertyRNA *)&rna_BackgroundImage_rna_properties, (PropertyRNA *)&rna_BackgroundImage_frame_method}},
	"BackgroundImage", NULL, NULL, 4, "Background Image",
	"Image and settings for display in the 3D View background",
	"*", 17,
	NULL, (PropertyRNA *)&rna_BackgroundImage_rna_properties,
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

/* 3D View Space */
PointerPropertyRNA rna_SpaceView3D_camera = {
	{(PropertyRNA *)&rna_SpaceView3D_use_render_border, NULL,
	-1, "camera", 8388609, "Camera",
	"Active camera used in this view (when unlocked from the scene\'s active camera)",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 252248064, NULL, NULL,
	0, -1, NULL},
	SpaceView3D_camera_get, SpaceView3D_camera_set, NULL, NULL,&RNA_Object
};

BoolPropertyRNA rna_SpaceView3D_use_render_border = {
	{(PropertyRNA *)&rna_SpaceView3D_render_border_min_x, (PropertyRNA *)&rna_SpaceView3D_camera,
	-1, "use_render_border", 1, "Render Border",
	"Use a region within the frame size for rendered viewport (when not viewing through the camera)",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 252248064, NULL, NULL,
	0, -1, NULL},
	SpaceView3D_use_render_border_get, SpaceView3D_use_render_border_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

FloatPropertyRNA rna_SpaceView3D_render_border_min_x = {
	{(PropertyRNA *)&rna_SpaceView3D_render_border_min_y, (PropertyRNA *)&rna_SpaceView3D_use_render_border,
	-1, "render_border_min_x", 8195, "Border Minimum X",
	"Minimum X value to for the render border",
	0, "*",
	PROP_FLOAT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 252248064, NULL, NULL,
	offsetof(View3D, render_border.xmin), 4, NULL},
	SpaceView3D_render_border_min_x_get, SpaceView3D_render_border_min_x_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 1.0f, 0.0f, 1.0f, 10.0f, 3, 0.0f, NULL
};

FloatPropertyRNA rna_SpaceView3D_render_border_min_y = {
	{(PropertyRNA *)&rna_SpaceView3D_render_border_max_x, (PropertyRNA *)&rna_SpaceView3D_render_border_min_x,
	-1, "render_border_min_y", 8195, "Border Minimum Y",
	"Minimum Y value for the render border",
	0, "*",
	PROP_FLOAT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 252248064, NULL, NULL,
	offsetof(View3D, render_border.ymin), 4, NULL},
	SpaceView3D_render_border_min_y_get, SpaceView3D_render_border_min_y_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 1.0f, 0.0f, 1.0f, 10.0f, 3, 0.0f, NULL
};

FloatPropertyRNA rna_SpaceView3D_render_border_max_x = {
	{(PropertyRNA *)&rna_SpaceView3D_render_border_max_y, (PropertyRNA *)&rna_SpaceView3D_render_border_min_y,
	-1, "render_border_max_x", 8195, "Border Maximum X",
	"Maximum X value for the render border",
	0, "*",
	PROP_FLOAT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 252248064, NULL, NULL,
	offsetof(View3D, render_border.xmax), 4, NULL},
	SpaceView3D_render_border_max_x_get, SpaceView3D_render_border_max_x_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 1.0f, 0.0f, 1.0f, 10.0f, 3, 0.0f, NULL
};

FloatPropertyRNA rna_SpaceView3D_render_border_max_y = {
	{(PropertyRNA *)&rna_SpaceView3D_lock_object, (PropertyRNA *)&rna_SpaceView3D_render_border_max_x,
	-1, "render_border_max_y", 8195, "Border Maximum Y",
	"Maximum Y value for the render border",
	0, "*",
	PROP_FLOAT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 252248064, NULL, NULL,
	offsetof(View3D, render_border.ymax), 4, NULL},
	SpaceView3D_render_border_max_y_get, SpaceView3D_render_border_max_y_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 1.0f, 0.0f, 1.0f, 10.0f, 3, 0.0f, NULL
};

PointerPropertyRNA rna_SpaceView3D_lock_object = {
	{(PropertyRNA *)&rna_SpaceView3D_lock_bone, (PropertyRNA *)&rna_SpaceView3D_render_border_max_y,
	-1, "lock_object", 8388609, "Lock to Object",
	"3D View center is locked to this object\'s position",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 252248064, NULL, NULL,
	0, -1, NULL},
	SpaceView3D_lock_object_get, SpaceView3D_lock_object_set, NULL, NULL,&RNA_Object
};

StringPropertyRNA rna_SpaceView3D_lock_bone = {
	{(PropertyRNA *)&rna_SpaceView3D_lock_cursor, (PropertyRNA *)&rna_SpaceView3D_lock_object,
	-1, "lock_bone", 262145, "Lock to Bone",
	"3D View center is locked to this bone\'s position",
	0, "*",
	PROP_STRING, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {64, 0, 0}, 0,
	NULL, 252248064, NULL, NULL,
	0, -1, NULL},
	SpaceView3D_lock_bone_get, SpaceView3D_lock_bone_length, SpaceView3D_lock_bone_set, NULL, NULL, NULL, 64, ""
};

BoolPropertyRNA rna_SpaceView3D_lock_cursor = {
	{(PropertyRNA *)&rna_SpaceView3D_viewport_shade, (PropertyRNA *)&rna_SpaceView3D_lock_bone,
	-1, "lock_cursor", 3, "Lock to Cursor",
	"3D View center is locked to the cursor\'s position",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 252248064, NULL, NULL,
	0, -1, NULL},
	SpaceView3D_lock_cursor_get, SpaceView3D_lock_cursor_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

static EnumPropertyItem rna_SpaceView3D_viewport_shade_items[7] = {
	{1, "BOUNDBOX", 624, "Bounding Box", "Display the object\'s local bounding boxes only"},
	{2, "WIREFRAME", 625, "Wireframe", "Display the object as wire edges"},
	{3, "SOLID", 626, "Solid", "Display the object solid, lit with default OpenGL lights"},
	{5, "TEXTURED", 628, "Texture", "Display the object solid, with a texture"},
	{4, "MATERIAL", 165, "Material", "Display objects solid, with GLSL material"},
	{6, "RENDERED", 627, "Rendered", "Display render preview"},
	{0, NULL, 0, NULL, NULL}
};

EnumPropertyRNA rna_SpaceView3D_viewport_shade = {
	{(PropertyRNA *)&rna_SpaceView3D_local_view, (PropertyRNA *)&rna_SpaceView3D_lock_cursor,
	-1, "viewport_shade", 3, "Viewport Shading",
	"Method to display/shade objects in the 3D View",
	0, "*",
	PROP_ENUM, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_SpaceView3D_viewport_shade_update, 252248064, NULL, NULL,
	0, -1, NULL},
	SpaceView3D_viewport_shade_get, SpaceView3D_viewport_shade_set, rna_SpaceView3D_viewport_shade_itemf, NULL, NULL, NULL, rna_SpaceView3D_viewport_shade_items, 6, 1
};

PointerPropertyRNA rna_SpaceView3D_local_view = {
	{(PropertyRNA *)&rna_SpaceView3D_cursor_location, (PropertyRNA *)&rna_SpaceView3D_viewport_shade,
	-1, "local_view", 8388608, "Local View",
	"Display an isolated sub-set of objects, apart from the scene visibility",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	SpaceView3D_local_view_get, NULL, NULL, NULL,&RNA_SpaceView3D
};

static float rna_SpaceView3D_cursor_location_default[3] = {
	0.0f,
	0.0f,
	0.0f
};

FloatPropertyRNA rna_SpaceView3D_cursor_location = {
	{(PropertyRNA *)&rna_SpaceView3D_lens, (PropertyRNA *)&rna_SpaceView3D_local_view,
	-1, "cursor_location", 3, "3D Cursor Location",
	"3D cursor location for this view (dependent on local view setting)",
	0, "*",
	PROP_FLOAT, PROP_XYZ | PROP_UNIT_LENGTH, NULL, 1, {3, 0, 0}, 3,
	NULL, 252248064, NULL, NULL,
	0, -1, NULL},
	NULL, NULL, SpaceView3D_cursor_location_get, SpaceView3D_cursor_location_set, NULL, NULL, NULL, NULL, NULL, NULL, -10000.0f, 10000.0f, -FLT_MAX, FLT_MAX, 10.0f, 4, 0.0f, rna_SpaceView3D_cursor_location_default
};

FloatPropertyRNA rna_SpaceView3D_lens = {
	{(PropertyRNA *)&rna_SpaceView3D_clip_start, (PropertyRNA *)&rna_SpaceView3D_cursor_location,
	-1, "lens", 8195, "Lens",
	"Viewport lens angle",
	0, "*",
	PROP_FLOAT, PROP_NONE | PROP_UNIT_CAMERA, NULL, 0, {0, 0, 0}, 0,
	NULL, 252248064, NULL, NULL,
	offsetof(View3D, lens), 4, NULL},
	SpaceView3D_lens_get, SpaceView3D_lens_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 1.0f, 250.0f, 1.0f, 250.0f, 10.0f, 3, 0.0f, NULL
};

FloatPropertyRNA rna_SpaceView3D_clip_start = {
	{(PropertyRNA *)&rna_SpaceView3D_clip_end, (PropertyRNA *)&rna_SpaceView3D_lens,
	-1, "clip_start", 8195, "Clip Start",
	"3D View near clipping distance (perspective view only)",
	0, "*",
	PROP_FLOAT, PROP_DISTANCE | PROP_UNIT_LENGTH, NULL, 0, {0, 0, 0}, 0,
	NULL, 252248064, NULL, NULL,
	offsetof(View3D, near), 4, NULL},
	SpaceView3D_clip_start_get, SpaceView3D_clip_start_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0010000000f, FLT_MAX, 0.0010000000f, FLT_MAX, 10.0f, 3, 0.1000000015f, NULL
};

FloatPropertyRNA rna_SpaceView3D_clip_end = {
	{(PropertyRNA *)&rna_SpaceView3D_grid_scale, (PropertyRNA *)&rna_SpaceView3D_clip_start,
	-1, "clip_end", 8195, "Clip End",
	"3D View far clipping distance",
	0, "*",
	PROP_FLOAT, PROP_DISTANCE | PROP_UNIT_LENGTH, NULL, 0, {0, 0, 0}, 0,
	NULL, 252248064, NULL, NULL,
	offsetof(View3D, far), 4, NULL},
	SpaceView3D_clip_end_get, SpaceView3D_clip_end_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 1.0f, FLT_MAX, 1.0f, FLT_MAX, 10.0f, 3, 1000.0f, NULL
};

FloatPropertyRNA rna_SpaceView3D_grid_scale = {
	{(PropertyRNA *)&rna_SpaceView3D_grid_lines, (PropertyRNA *)&rna_SpaceView3D_clip_end,
	-1, "grid_scale", 8195, "Grid Scale",
	"Distance between 3D View grid lines",
	0, "*",
	PROP_FLOAT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 252248064, NULL, NULL,
	offsetof(View3D, grid), 4, NULL},
	SpaceView3D_grid_scale_get, SpaceView3D_grid_scale_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0010000000f, 1000.0f, 0.0f, FLT_MAX, 0.1000000015f, 3, 1.0f, NULL
};

IntPropertyRNA rna_SpaceView3D_grid_lines = {
	{(PropertyRNA *)&rna_SpaceView3D_grid_subdivisions, (PropertyRNA *)&rna_SpaceView3D_grid_scale,
	-1, "grid_lines", 8195, "Grid Lines",
	"Number of grid lines to display in perspective view",
	0, "*",
	PROP_INT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 252248064, NULL, NULL,
	offsetof(View3D, gridlines), 1, NULL},
	SpaceView3D_grid_lines_get, SpaceView3D_grid_lines_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL,
	0, 1024, 0, 1024, 1, 16, NULL
};

IntPropertyRNA rna_SpaceView3D_grid_subdivisions = {
	{(PropertyRNA *)&rna_SpaceView3D_grid_scale_unit, (PropertyRNA *)&rna_SpaceView3D_grid_lines,
	-1, "grid_subdivisions", 8195, "Grid Subdivisions",
	"Number of subdivisions between grid lines",
	0, "*",
	PROP_INT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 252248064, NULL, NULL,
	offsetof(View3D, gridsubdiv), 1, NULL},
	SpaceView3D_grid_subdivisions_get, SpaceView3D_grid_subdivisions_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL,
	1, 1024, 1, 1024, 1, 10, NULL
};

FloatPropertyRNA rna_SpaceView3D_grid_scale_unit = {
	{(PropertyRNA *)&rna_SpaceView3D_show_floor, (PropertyRNA *)&rna_SpaceView3D_grid_subdivisions,
	-1, "grid_scale_unit", 2, "Grid Scale Unit",
	"Grid cell size scaled by scene unit system settings",
	0, "*",
	PROP_FLOAT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	SpaceView3D_grid_scale_unit_get, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, -10000.0f, 10000.0f, -FLT_MAX, FLT_MAX, 10.0f, 3, 0.0f, NULL
};

BoolPropertyRNA rna_SpaceView3D_show_floor = {
	{(PropertyRNA *)&rna_SpaceView3D_show_axis_x, (PropertyRNA *)&rna_SpaceView3D_grid_scale_unit,
	-1, "show_floor", 3, "Display Grid Floor",
	"Show the ground plane grid in perspective view",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 252248064, NULL, NULL,
	0, -1, NULL},
	SpaceView3D_show_floor_get, SpaceView3D_show_floor_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_SpaceView3D_show_axis_x = {
	{(PropertyRNA *)&rna_SpaceView3D_show_axis_y, (PropertyRNA *)&rna_SpaceView3D_show_floor,
	-1, "show_axis_x", 3, "Display X Axis",
	"Show the X axis line in perspective view",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 252248064, NULL, NULL,
	0, -1, NULL},
	SpaceView3D_show_axis_x_get, SpaceView3D_show_axis_x_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_SpaceView3D_show_axis_y = {
	{(PropertyRNA *)&rna_SpaceView3D_show_axis_z, (PropertyRNA *)&rna_SpaceView3D_show_axis_x,
	-1, "show_axis_y", 3, "Display Y Axis",
	"Show the Y axis line in perspective view",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 252248064, NULL, NULL,
	0, -1, NULL},
	SpaceView3D_show_axis_y_get, SpaceView3D_show_axis_y_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_SpaceView3D_show_axis_z = {
	{(PropertyRNA *)&rna_SpaceView3D_show_outline_selected, (PropertyRNA *)&rna_SpaceView3D_show_axis_y,
	-1, "show_axis_z", 3, "Display Z Axis",
	"Show the Z axis line in perspective view",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 252248064, NULL, NULL,
	0, -1, NULL},
	SpaceView3D_show_axis_z_get, SpaceView3D_show_axis_z_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_SpaceView3D_show_outline_selected = {
	{(PropertyRNA *)&rna_SpaceView3D_show_all_objects_origin, (PropertyRNA *)&rna_SpaceView3D_show_axis_z,
	-1, "show_outline_selected", 3, "Outline Selected",
	"Show an outline highlight around selected objects in non-wireframe views",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 252248064, NULL, NULL,
	0, -1, NULL},
	SpaceView3D_show_outline_selected_get, SpaceView3D_show_outline_selected_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_SpaceView3D_show_all_objects_origin = {
	{(PropertyRNA *)&rna_SpaceView3D_show_relationship_lines, (PropertyRNA *)&rna_SpaceView3D_show_outline_selected,
	-1, "show_all_objects_origin", 3, "All Object Origins",
	"Show the object origin center dot for all (selected and unselected) objects",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 252248064, NULL, NULL,
	0, -1, NULL},
	SpaceView3D_show_all_objects_origin_get, SpaceView3D_show_all_objects_origin_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_SpaceView3D_show_relationship_lines = {
	{(PropertyRNA *)&rna_SpaceView3D_show_grease_pencil, (PropertyRNA *)&rna_SpaceView3D_show_all_objects_origin,
	-1, "show_relationship_lines", 3, "Relationship Lines",
	"Show dashed lines indicating parent or constraint relationships",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 252248064, NULL, NULL,
	0, -1, NULL},
	SpaceView3D_show_relationship_lines_get, SpaceView3D_show_relationship_lines_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_SpaceView3D_show_grease_pencil = {
	{(PropertyRNA *)&rna_SpaceView3D_show_textured_solid, (PropertyRNA *)&rna_SpaceView3D_show_relationship_lines,
	-1, "show_grease_pencil", 3, "Show Grease Pencil",
	"Show grease pencil for this view",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 252248064, NULL, NULL,
	0, -1, NULL},
	SpaceView3D_show_grease_pencil_get, SpaceView3D_show_grease_pencil_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_SpaceView3D_show_textured_solid = {
	{(PropertyRNA *)&rna_SpaceView3D_show_backface_culling, (PropertyRNA *)&rna_SpaceView3D_show_grease_pencil,
	-1, "show_textured_solid", 3, "Textured Solid",
	"Display face-assigned textures in solid view",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 252248064, NULL, NULL,
	0, -1, NULL},
	SpaceView3D_show_textured_solid_get, SpaceView3D_show_textured_solid_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_SpaceView3D_show_backface_culling = {
	{(PropertyRNA *)&rna_SpaceView3D_show_textured_shadeless, (PropertyRNA *)&rna_SpaceView3D_show_textured_solid,
	-1, "show_backface_culling", 3, "Backface Culling",
	"Use back face culling to hide the back side of faces",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 252248064, NULL, NULL,
	0, -1, NULL},
	SpaceView3D_show_backface_culling_get, SpaceView3D_show_backface_culling_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_SpaceView3D_show_textured_shadeless = {
	{(PropertyRNA *)&rna_SpaceView3D_show_occlude_wire, (PropertyRNA *)&rna_SpaceView3D_show_backface_culling,
	-1, "show_textured_shadeless", 3, "Shadeless",
	"Show shadeless texture without lighting in textured draw mode",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 252248064, NULL, NULL,
	0, -1, NULL},
	SpaceView3D_show_textured_shadeless_get, SpaceView3D_show_textured_shadeless_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_SpaceView3D_show_occlude_wire = {
	{(PropertyRNA *)&rna_SpaceView3D_lock_camera, (PropertyRNA *)&rna_SpaceView3D_show_textured_shadeless,
	-1, "show_occlude_wire", 3, "Hidden Wire",
	"Use hidden wireframe display",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 252248064, NULL, NULL,
	0, -1, NULL},
	SpaceView3D_show_occlude_wire_get, SpaceView3D_show_occlude_wire_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_SpaceView3D_lock_camera = {
	{(PropertyRNA *)&rna_SpaceView3D_show_only_render, (PropertyRNA *)&rna_SpaceView3D_show_occlude_wire,
	-1, "lock_camera", 3, "Lock Camera to View",
	"Enable view navigation within the camera view",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 252248064, NULL, NULL,
	0, -1, NULL},
	SpaceView3D_lock_camera_get, SpaceView3D_lock_camera_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_SpaceView3D_show_only_render = {
	{(PropertyRNA *)&rna_SpaceView3D_use_occlude_geometry, (PropertyRNA *)&rna_SpaceView3D_lock_camera,
	-1, "show_only_render", 3, "Only Render",
	"Display only objects which will be rendered",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 252248064, NULL, NULL,
	0, -1, NULL},
	SpaceView3D_show_only_render_get, SpaceView3D_show_only_render_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_SpaceView3D_use_occlude_geometry = {
	{(PropertyRNA *)&rna_SpaceView3D_background_images, (PropertyRNA *)&rna_SpaceView3D_show_only_render,
	-1, "use_occlude_geometry", 3, "Occlude Geometry",
	"Limit selection to visible (clipped with depth buffer)",
	630, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 252248064, NULL, NULL,
	0, -1, NULL},
	SpaceView3D_use_occlude_geometry_get, SpaceView3D_use_occlude_geometry_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

CollectionPropertyRNA rna_SpaceView3D_background_images = {
	{(PropertyRNA *)&rna_SpaceView3D_show_background_images, (PropertyRNA *)&rna_SpaceView3D_use_occlude_geometry,
	-1, "background_images", 0, "Background Images",
	"List of background images",
	0, "*",
	PROP_COLLECTION, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 252248064, NULL, NULL,
	0, -1, &RNA_BackgroundImages},
	SpaceView3D_background_images_begin, SpaceView3D_background_images_next, SpaceView3D_background_images_end, SpaceView3D_background_images_get, NULL, SpaceView3D_background_images_lookup_int, NULL, NULL, &RNA_BackgroundImage
};

BoolPropertyRNA rna_SpaceView3D_show_background_images = {
	{(PropertyRNA *)&rna_SpaceView3D_pivot_point, (PropertyRNA *)&rna_SpaceView3D_background_images,
	-1, "show_background_images", 3, "Display Background Images",
	"Display reference images behind objects in the 3D View",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 252248064, NULL, NULL,
	0, -1, NULL},
	SpaceView3D_show_background_images_get, SpaceView3D_show_background_images_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

static EnumPropertyItem rna_SpaceView3D_pivot_point_items[6] = {
	{0, "BOUNDING_BOX_CENTER", 551, "Bounding Box Center", "Pivot around bounding box center of selected object(s)"},
	{1, "CURSOR", 552, "3D Cursor", "Pivot around the 3D cursor"},
	{2, "INDIVIDUAL_ORIGINS", 553, "Individual Origins", "Pivot around each object\'s own origin"},
	{3, "MEDIAN_POINT", 554, "Median Point", "Pivot around the median point of selected objects"},
	{4, "ACTIVE_ELEMENT", 555, "Active Element", "Pivot around active object"},
	{0, NULL, 0, NULL, NULL}
};

EnumPropertyRNA rna_SpaceView3D_pivot_point = {
	{(PropertyRNA *)&rna_SpaceView3D_use_pivot_point_align, (PropertyRNA *)&rna_SpaceView3D_show_background_images,
	-1, "pivot_point", 3, "Pivot Point",
	"Pivot center for rotation/scaling",
	0, "*",
	PROP_ENUM, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_SpaceView3D_pivot_update, 252248064, NULL, NULL,
	0, -1, NULL},
	SpaceView3D_pivot_point_get, SpaceView3D_pivot_point_set, NULL, NULL, NULL, NULL, rna_SpaceView3D_pivot_point_items, 5, 0
};

BoolPropertyRNA rna_SpaceView3D_use_pivot_point_align = {
	{(PropertyRNA *)&rna_SpaceView3D_show_manipulator, (PropertyRNA *)&rna_SpaceView3D_pivot_point,
	-1, "use_pivot_point_align", 3, "Align",
	"Manipulate center points (object and pose mode only)",
	556, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_SpaceView3D_pivot_update, 252248064, NULL, NULL,
	0, -1, NULL},
	SpaceView3D_use_pivot_point_align_get, SpaceView3D_use_pivot_point_align_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_SpaceView3D_show_manipulator = {
	{(PropertyRNA *)&rna_SpaceView3D_transform_manipulators, (PropertyRNA *)&rna_SpaceView3D_use_pivot_point_align,
	-1, "show_manipulator", 3, "Manipulator",
	"Use a 3D manipulator widget for controlling transforms",
	575, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 252248064, NULL, NULL,
	0, -1, NULL},
	SpaceView3D_show_manipulator_get, SpaceView3D_show_manipulator_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

static EnumPropertyItem rna_SpaceView3D_transform_manipulators_items[4] = {
	{1, "TRANSLATE", 572, "Translate", "Use the manipulator for movement transformations"},
	{2, "ROTATE", 573, "Rotate", "Use the manipulator for rotation transformations"},
	{4, "SCALE", 574, "Scale", "Use the manipulator for scale transformations"},
	{0, NULL, 0, NULL, NULL}
};

EnumPropertyRNA rna_SpaceView3D_transform_manipulators = {
	{(PropertyRNA *)&rna_SpaceView3D_transform_orientation, (PropertyRNA *)&rna_SpaceView3D_show_manipulator,
	-1, "transform_manipulators", 2097155, "Transform Manipulators",
	"Transformation manipulators",
	0, "*",
	PROP_ENUM, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 252248064, NULL, NULL,
	0, -1, NULL},
	SpaceView3D_transform_manipulators_get, SpaceView3D_transform_manipulators_set, NULL, NULL, NULL, NULL, rna_SpaceView3D_transform_manipulators_items, 3, 1
};

static EnumPropertyItem rna_SpaceView3D_transform_orientation_items[6] = {
	{0, "GLOBAL", 0, "Global", "Align the transformation axes to world space"},
	{1, "LOCAL", 0, "Local", "Align the transformation axes to the selected objects\' local space"},
	{2, "NORMAL", 0, "Normal", "Align the transformation axes to average normal of selected elements (bone Y axis for pose mode)"},
	{4, "GIMBAL", 0, "Gimbal", "Align each axis to the Euler rotation axis as used for input"},
	{3, "VIEW", 0, "View", "Align the transformation axes to the window"},
	{0, NULL, 0, NULL, NULL}
};

EnumPropertyRNA rna_SpaceView3D_transform_orientation = {
	{(PropertyRNA *)&rna_SpaceView3D_current_orientation, (PropertyRNA *)&rna_SpaceView3D_transform_manipulators,
	-1, "transform_orientation", 3, "Transform Orientation",
	"Transformation orientation",
	0, "*",
	PROP_ENUM, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 252248064, NULL, NULL,
	0, -1, NULL},
	SpaceView3D_transform_orientation_get, SpaceView3D_transform_orientation_set, rna_TransformOrientation_itemf, NULL, NULL, NULL, rna_SpaceView3D_transform_orientation_items, 5, 0
};

PointerPropertyRNA rna_SpaceView3D_current_orientation = {
	{(PropertyRNA *)&rna_SpaceView3D_lock_camera_and_layers, (PropertyRNA *)&rna_SpaceView3D_transform_orientation,
	-1, "current_orientation", 8388608, "Current Transform Orientation",
	"Current transformation orientation",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	SpaceView3D_current_orientation_get, NULL, NULL, NULL,&RNA_TransformOrientation
};

BoolPropertyRNA rna_SpaceView3D_lock_camera_and_layers = {
	{(PropertyRNA *)&rna_SpaceView3D_layers, (PropertyRNA *)&rna_SpaceView3D_current_orientation,
	-1, "lock_camera_and_layers", 4099, "Lock Camera and Layers",
	"Use the scene\'s active camera and layers in this view, rather than local layers",
	633, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 252248064, NULL, NULL,
	0, -1, NULL},
	SpaceView3D_lock_camera_and_layers_get, SpaceView3D_lock_camera_and_layers_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

static int rna_SpaceView3D_layers_default[20] = {
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

BoolPropertyRNA rna_SpaceView3D_layers = {
	{(PropertyRNA *)&rna_SpaceView3D_layers_local_view, (PropertyRNA *)&rna_SpaceView3D_lock_camera_and_layers,
	-1, "layers", 3, "Visible Layers",
	"Layers visible in this 3D View",
	0, "*",
	PROP_BOOLEAN, PROP_LAYER_MEMBER | PROP_UNIT_NONE, NULL, 1, {20, 0, 0}, 20,
	rna_SpaceView3D_layer_update, 252248064, NULL, NULL,
	0, -1, NULL},
	NULL, NULL, SpaceView3D_layers_get, SpaceView3D_layers_set, NULL, NULL, NULL, NULL, 0, rna_SpaceView3D_layers_default
};

static int rna_SpaceView3D_layers_local_view_default[8] = {
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0
};

BoolPropertyRNA rna_SpaceView3D_layers_local_view = {
	{(PropertyRNA *)&rna_SpaceView3D_layers_used, (PropertyRNA *)&rna_SpaceView3D_layers,
	-1, "layers_local_view", 2, "Local View Layers",
	"Local view layers visible in this 3D View",
	0, "*",
	PROP_BOOLEAN, PROP_LAYER_MEMBER | PROP_UNIT_NONE, NULL, 1, {8, 0, 0}, 8,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	NULL, NULL, SpaceView3D_layers_local_view_get, NULL, NULL, NULL, NULL, NULL, 0, rna_SpaceView3D_layers_local_view_default
};

static int rna_SpaceView3D_layers_used_default[20] = {
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

BoolPropertyRNA rna_SpaceView3D_layers_used = {
	{(PropertyRNA *)&rna_SpaceView3D_region_3d, (PropertyRNA *)&rna_SpaceView3D_layers_local_view,
	-1, "layers_used", 2, "Used Layers",
	"Layers that contain something",
	0, "*",
	PROP_BOOLEAN, PROP_LAYER_MEMBER | PROP_UNIT_NONE, NULL, 1, {20, 0, 0}, 20,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	NULL, NULL, SpaceView3D_layers_used_get, NULL, NULL, NULL, NULL, NULL, 0, rna_SpaceView3D_layers_used_default
};

PointerPropertyRNA rna_SpaceView3D_region_3d = {
	{(PropertyRNA *)&rna_SpaceView3D_region_quadviews, (PropertyRNA *)&rna_SpaceView3D_layers_used,
	-1, "region_3d", 8388608, "3D Region",
	"3D region in this space, in case of quad view the camera region",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	SpaceView3D_region_3d_get, NULL, NULL, NULL,&RNA_RegionView3D
};

CollectionPropertyRNA rna_SpaceView3D_region_quadviews = {
	{(PropertyRNA *)&rna_SpaceView3D_show_reconstruction, (PropertyRNA *)&rna_SpaceView3D_region_3d,
	-1, "region_quadviews", 0, "Quad View Regions",
	"3D regions (the third one defines quad view settings, the forth one is same as \'region_3d\')",
	0, "*",
	PROP_COLLECTION, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	SpaceView3D_region_quadviews_begin, SpaceView3D_region_quadviews_next, SpaceView3D_region_quadviews_end, SpaceView3D_region_quadviews_get, NULL, NULL, NULL, NULL, &RNA_RegionView3D
};

BoolPropertyRNA rna_SpaceView3D_show_reconstruction = {
	{(PropertyRNA *)&rna_SpaceView3D_tracks_draw_size, (PropertyRNA *)&rna_SpaceView3D_region_quadviews,
	-1, "show_reconstruction", 3, "Show Reconstruction",
	"Display reconstruction data from active movie clip",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 252248064, NULL, NULL,
	0, -1, NULL},
	SpaceView3D_show_reconstruction_get, SpaceView3D_show_reconstruction_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

FloatPropertyRNA rna_SpaceView3D_tracks_draw_size = {
	{(PropertyRNA *)&rna_SpaceView3D_tracks_draw_type, (PropertyRNA *)&rna_SpaceView3D_show_reconstruction,
	-1, "tracks_draw_size", 8195, "Tracks Size",
	"Display size of tracks from reconstructed data",
	0, "*",
	PROP_FLOAT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 252248064, NULL, NULL,
	offsetof(View3D, bundle_size), 4, NULL},
	SpaceView3D_tracks_draw_size_get, SpaceView3D_tracks_draw_size_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 5.0f, 0.0f, FLT_MAX, 1.0f, 3, 0.0f, NULL
};

static EnumPropertyItem rna_SpaceView3D_tracks_draw_type_items[8] = {
	{2, "PLAIN_AXES", 0, "Plain Axes", ""},
	{1, "ARROWS", 0, "Arrows", ""},
	{4, "SINGLE_ARROW", 0, "Single Arrow", ""},
	{3, "CIRCLE", 0, "Circle", ""},
	{5, "CUBE", 0, "Cube", ""},
	{6, "SPHERE", 0, "Sphere", ""},
	{7, "CONE", 0, "Cone", ""},
	{0, NULL, 0, NULL, NULL}
};

EnumPropertyRNA rna_SpaceView3D_tracks_draw_type = {
	{(PropertyRNA *)&rna_SpaceView3D_show_camera_path, (PropertyRNA *)&rna_SpaceView3D_tracks_draw_size,
	-1, "tracks_draw_type", 3, "Tracks Display Type",
	"Viewport display style for tracks",
	0, "*",
	PROP_ENUM, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 252248064, NULL, NULL,
	0, -1, NULL},
	SpaceView3D_tracks_draw_type_get, SpaceView3D_tracks_draw_type_set, NULL, NULL, NULL, NULL, rna_SpaceView3D_tracks_draw_type_items, 7, 2
};

BoolPropertyRNA rna_SpaceView3D_show_camera_path = {
	{(PropertyRNA *)&rna_SpaceView3D_show_bundle_names, (PropertyRNA *)&rna_SpaceView3D_tracks_draw_type,
	-1, "show_camera_path", 3, "Show Camera Path",
	"Show reconstructed camera path",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 252248064, NULL, NULL,
	0, -1, NULL},
	SpaceView3D_show_camera_path_get, SpaceView3D_show_camera_path_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_SpaceView3D_show_bundle_names = {
	{(PropertyRNA *)&rna_SpaceView3D_use_matcap, (PropertyRNA *)&rna_SpaceView3D_show_camera_path,
	-1, "show_bundle_names", 3, "Show 3D Marker Names",
	"Show names for reconstructed tracks objects",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 252248064, NULL, NULL,
	0, -1, NULL},
	SpaceView3D_show_bundle_names_get, SpaceView3D_show_bundle_names_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_SpaceView3D_use_matcap = {
	{(PropertyRNA *)&rna_SpaceView3D_matcap_icon, (PropertyRNA *)&rna_SpaceView3D_show_bundle_names,
	-1, "use_matcap", 3, "Matcap",
	"Active Objects draw images mapped on normals, enhancing Solid Draw Mode",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_SpaceView3D_matcap_enable, 252248064, NULL, NULL,
	0, -1, NULL},
	SpaceView3D_use_matcap_get, SpaceView3D_use_matcap_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

static EnumPropertyItem rna_SpaceView3D_matcap_icon_items[25] = {
	{812, "01", 812, "", ""},
	{813, "02", 813, "", ""},
	{814, "03", 814, "", ""},
	{815, "04", 815, "", ""},
	{816, "05", 816, "", ""},
	{817, "06", 817, "", ""},
	{818, "07", 818, "", ""},
	{819, "08", 819, "", ""},
	{820, "09", 820, "", ""},
	{821, "10", 821, "", ""},
	{822, "11", 822, "", ""},
	{823, "12", 823, "", ""},
	{824, "13", 824, "", ""},
	{825, "14", 825, "", ""},
	{826, "15", 826, "", ""},
	{827, "16", 827, "", ""},
	{828, "17", 828, "", ""},
	{829, "18", 829, "", ""},
	{830, "19", 830, "", ""},
	{831, "20", 831, "", ""},
	{832, "21", 832, "", ""},
	{833, "22", 833, "", ""},
	{834, "23", 834, "", ""},
	{835, "24", 835, "", ""},
	{0, NULL, 0, NULL, NULL}
};

EnumPropertyRNA rna_SpaceView3D_matcap_icon = {
	{NULL, (PropertyRNA *)&rna_SpaceView3D_use_matcap,
	-1, "matcap_icon", 3, "Matcap",
	"Image to use for Material Capture, active objects only",
	0, "*",
	PROP_ENUM, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_SpaceView3D_matcap_update, 252248064, NULL, NULL,
	0, -1, NULL},
	SpaceView3D_matcap_icon_get, SpaceView3D_matcap_icon_set, NULL, NULL, NULL, NULL, rna_SpaceView3D_matcap_icon_items, 24, 812
};

StructRNA RNA_SpaceView3D = {
	{(ContainerRNA *)&RNA_BackgroundImages, (ContainerRNA *)&RNA_BackgroundImage,
	NULL,
	{(PropertyRNA *)&rna_SpaceView3D_camera, (PropertyRNA *)&rna_SpaceView3D_matcap_icon}},
	"SpaceView3D", NULL, NULL, 4, "3D View Space",
	"3D View space data",
	"*", 17,
	NULL, (PropertyRNA *)&rna_Space_rna_properties,
	&RNA_Space,
	NULL,
	rna_Space_refine,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	{NULL, NULL}
};

/* Background Images */
CollectionPropertyRNA rna_BackgroundImages_rna_properties = {
	{(PropertyRNA *)&rna_BackgroundImages_rna_type, NULL,
	-1, "rna_properties", 128, "Properties",
	"RNA property collection",
	0, "*",
	PROP_COLLECTION, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	BackgroundImages_rna_properties_begin, BackgroundImages_rna_properties_next, BackgroundImages_rna_properties_end, BackgroundImages_rna_properties_get, NULL, NULL, BackgroundImages_rna_properties_lookup_string, NULL, &RNA_Property
};

PointerPropertyRNA rna_BackgroundImages_rna_type = {
	{NULL, (PropertyRNA *)&rna_BackgroundImages_rna_properties,
	-1, "rna_type", 8912896, "RNA",
	"RNA type definition",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	BackgroundImages_rna_type_get, NULL, NULL, NULL,&RNA_Struct
};

PointerPropertyRNA rna_BackgroundImages_new_image = {
	{NULL, NULL,
	-1, "image", 8388616, "",
	"Image displayed as viewport background",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	NULL, NULL, NULL, NULL,&RNA_BackgroundImage
};

FunctionRNA rna_BackgroundImages_new_func = {
	{(FunctionRNA *)&rna_BackgroundImages_remove_func, NULL,
	NULL,
	{(PropertyRNA *)&rna_BackgroundImages_new_image, (PropertyRNA *)&rna_BackgroundImages_new_image}},
	"new", 0, "Add new background image",
	BackgroundImages_new_call,
	(PropertyRNA *)&rna_BackgroundImages_new_image
};

PointerPropertyRNA rna_BackgroundImages_remove_image = {
	{NULL, NULL,
	-1, "image", 264196, "",
	"Image displayed as viewport background",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	NULL, NULL, NULL, NULL,&RNA_BackgroundImage
};

FunctionRNA rna_BackgroundImages_remove_func = {
	{(FunctionRNA *)&rna_BackgroundImages_clear_func, (FunctionRNA *)&rna_BackgroundImages_new_func,
	NULL,
	{(PropertyRNA *)&rna_BackgroundImages_remove_image, (PropertyRNA *)&rna_BackgroundImages_remove_image}},
	"remove", 16, "Remove background image",
	BackgroundImages_remove_call,
	NULL
};

FunctionRNA rna_BackgroundImages_clear_func = {
	{NULL, (FunctionRNA *)&rna_BackgroundImages_remove_func,
	NULL,
	{NULL, NULL}},
	"clear", 0, "Remove all background images",
	BackgroundImages_clear_call,
	NULL
};

StructRNA RNA_BackgroundImages = {
	{(ContainerRNA *)&RNA_RegionView3D, (ContainerRNA *)&RNA_SpaceView3D,
	NULL,
	{(PropertyRNA *)&rna_BackgroundImages_rna_properties, (PropertyRNA *)&rna_BackgroundImages_rna_type}},
	"BackgroundImages", NULL, NULL, 4, "Background Images",
	"Collection of background images",
	"*", 17,
	NULL, (PropertyRNA *)&rna_BackgroundImages_rna_properties,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	{(FunctionRNA *)&rna_BackgroundImages_new_func, (FunctionRNA *)&rna_BackgroundImages_clear_func}
};

/* 3D View Region */
CollectionPropertyRNA rna_RegionView3D_rna_properties = {
	{(PropertyRNA *)&rna_RegionView3D_rna_type, NULL,
	-1, "rna_properties", 128, "Properties",
	"RNA property collection",
	0, "*",
	PROP_COLLECTION, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	RegionView3D_rna_properties_begin, RegionView3D_rna_properties_next, RegionView3D_rna_properties_end, RegionView3D_rna_properties_get, NULL, NULL, RegionView3D_rna_properties_lookup_string, NULL, &RNA_Property
};

PointerPropertyRNA rna_RegionView3D_rna_type = {
	{(PropertyRNA *)&rna_RegionView3D_lock_rotation, (PropertyRNA *)&rna_RegionView3D_rna_properties,
	-1, "rna_type", 8912896, "RNA",
	"RNA type definition",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	RegionView3D_rna_type_get, NULL, NULL, NULL,&RNA_Struct
};

BoolPropertyRNA rna_RegionView3D_lock_rotation = {
	{(PropertyRNA *)&rna_RegionView3D_show_sync_view, (PropertyRNA *)&rna_RegionView3D_rna_type,
	-1, "lock_rotation", 3, "Lock",
	"Lock view rotation in side views",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_RegionView3D_quadview_update, 252248064, NULL, NULL,
	0, -1, NULL},
	RegionView3D_lock_rotation_get, RegionView3D_lock_rotation_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_RegionView3D_show_sync_view = {
	{(PropertyRNA *)&rna_RegionView3D_use_box_clip, (PropertyRNA *)&rna_RegionView3D_lock_rotation,
	-1, "show_sync_view", 3, "Box",
	"Sync view position between side views",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_RegionView3D_quadview_update, 252248064, NULL, NULL,
	0, -1, NULL},
	RegionView3D_show_sync_view_get, RegionView3D_show_sync_view_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_RegionView3D_use_box_clip = {
	{(PropertyRNA *)&rna_RegionView3D_perspective_matrix, (PropertyRNA *)&rna_RegionView3D_show_sync_view,
	-1, "use_box_clip", 3, "Clip",
	"Clip objects based on what\'s visible in other side views",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_RegionView3D_quadview_clip_update, 252248064, NULL, NULL,
	0, -1, NULL},
	RegionView3D_use_box_clip_get, RegionView3D_use_box_clip_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

static float rna_RegionView3D_perspective_matrix_default[16] = {
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

FloatPropertyRNA rna_RegionView3D_perspective_matrix = {
	{(PropertyRNA *)&rna_RegionView3D_view_matrix, (PropertyRNA *)&rna_RegionView3D_use_box_clip,
	-1, "perspective_matrix", 8194, "Perspective Matrix",
	"Current perspective matrix of the 3D region",
	0, "*",
	PROP_FLOAT, PROP_MATRIX | PROP_UNIT_NONE, NULL, 2, {4, 4, 0}, 16,
	NULL, 0, NULL, NULL,
	offsetof(RegionView3D, persmat), 4, NULL},
	NULL, NULL, RegionView3D_perspective_matrix_get, NULL, NULL, NULL, NULL, NULL, NULL, NULL, -10000.0f, 10000.0f, -FLT_MAX, FLT_MAX, 10.0f, 3, 0.0f, rna_RegionView3D_perspective_matrix_default
};

static float rna_RegionView3D_view_matrix_default[16] = {
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

FloatPropertyRNA rna_RegionView3D_view_matrix = {
	{(PropertyRNA *)&rna_RegionView3D_view_perspective, (PropertyRNA *)&rna_RegionView3D_perspective_matrix,
	-1, "view_matrix", 3, "View Matrix",
	"Current view matrix of the 3D region",
	0, "*",
	PROP_FLOAT, PROP_MATRIX | PROP_UNIT_NONE, NULL, 2, {4, 4, 0}, 16,
	NULL, 252248064, NULL, NULL,
	0, -1, NULL},
	NULL, NULL, RegionView3D_view_matrix_get, RegionView3D_view_matrix_set, NULL, NULL, NULL, NULL, NULL, NULL, -10000.0f, 10000.0f, -FLT_MAX, FLT_MAX, 10.0f, 3, 0.0f, rna_RegionView3D_view_matrix_default
};

static EnumPropertyItem rna_RegionView3D_view_perspective_items[4] = {
	{1, "PERSP", 0, "Perspective", ""},
	{0, "ORTHO", 0, "Orthographic", ""},
	{2, "CAMERA", 0, "Camera", ""},
	{0, NULL, 0, NULL, NULL}
};

EnumPropertyRNA rna_RegionView3D_view_perspective = {
	{(PropertyRNA *)&rna_RegionView3D_is_perspective, (PropertyRNA *)&rna_RegionView3D_view_matrix,
	-1, "view_perspective", 3, "Perspective",
	"View Perspective",
	0, "*",
	PROP_ENUM, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 252248064, NULL, NULL,
	0, -1, NULL},
	RegionView3D_view_perspective_get, RegionView3D_view_perspective_set, NULL, NULL, NULL, NULL, rna_RegionView3D_view_perspective_items, 3, 0
};

BoolPropertyRNA rna_RegionView3D_is_perspective = {
	{(PropertyRNA *)&rna_RegionView3D_view_location, (PropertyRNA *)&rna_RegionView3D_view_perspective,
	-1, "is_perspective", 3, "Is Perspective",
	"",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	RegionView3D_is_perspective_get, RegionView3D_is_perspective_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

static float rna_RegionView3D_view_location_default[3] = {
	0.0f,
	0.0f,
	0.0f
};

FloatPropertyRNA rna_RegionView3D_view_location = {
	{(PropertyRNA *)&rna_RegionView3D_view_rotation, (PropertyRNA *)&rna_RegionView3D_is_perspective,
	-1, "view_location", 3, "View Location",
	"View pivot location",
	0, "*",
	PROP_FLOAT, PROP_TRANSLATION | PROP_UNIT_LENGTH, NULL, 1, {3, 0, 0}, 3,
	NULL, 33554432, NULL, NULL,
	0, -1, NULL},
	NULL, NULL, RegionView3D_view_location_get, RegionView3D_view_location_set, NULL, NULL, NULL, NULL, NULL, NULL, -10000.0f, 10000.0f, -FLT_MAX, FLT_MAX, 10.0f, 5, 0.0f, rna_RegionView3D_view_location_default
};

static float rna_RegionView3D_view_rotation_default[4] = {
	0.0f,
	0.0f,
	0.0f,
	0.0f
};

FloatPropertyRNA rna_RegionView3D_view_rotation = {
	{(PropertyRNA *)&rna_RegionView3D_view_distance, (PropertyRNA *)&rna_RegionView3D_view_location,
	-1, "view_rotation", 3, "View Rotation",
	"Rotation in quaternions (keep normalized)",
	0, "*",
	PROP_FLOAT, PROP_QUATERNION | PROP_UNIT_NONE, NULL, 1, {4, 0, 0}, 4,
	NULL, 252248064, NULL, NULL,
	0, -1, NULL},
	NULL, NULL, RegionView3D_view_rotation_get, RegionView3D_view_rotation_set, NULL, NULL, NULL, NULL, NULL, NULL, -10000.0f, 10000.0f, -FLT_MAX, FLT_MAX, 10.0f, 3, 0.0f, rna_RegionView3D_view_rotation_default
};

FloatPropertyRNA rna_RegionView3D_view_distance = {
	{(PropertyRNA *)&rna_RegionView3D_view_camera_zoom, (PropertyRNA *)&rna_RegionView3D_view_rotation,
	-1, "view_distance", 8195, "Distance",
	"Distance to the view location",
	0, "*",
	PROP_FLOAT, PROP_UNSIGNED | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 252248064, NULL, NULL,
	offsetof(RegionView3D, dist), 4, NULL},
	RegionView3D_view_distance_get, RegionView3D_view_distance_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 10000.0f, 0.0f, FLT_MAX, 10.0f, 3, 0.0f, NULL
};

FloatPropertyRNA rna_RegionView3D_view_camera_zoom = {
	{(PropertyRNA *)&rna_RegionView3D_view_camera_offset, (PropertyRNA *)&rna_RegionView3D_view_distance,
	-1, "view_camera_zoom", 8195, "Camera Zoom",
	"Zoom factor in camera view",
	0, "*",
	PROP_FLOAT, PROP_UNSIGNED | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 252248064, NULL, NULL,
	offsetof(RegionView3D, camzoom), 4, NULL},
	RegionView3D_view_camera_zoom_get, RegionView3D_view_camera_zoom_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, -30.0f, 600.0f, -30.0f, 600.0f, 10.0f, 3, 0.0f, NULL
};

static float rna_RegionView3D_view_camera_offset_default[2] = {
	0.0f,
	0.0f
};

FloatPropertyRNA rna_RegionView3D_view_camera_offset = {
	{NULL, (PropertyRNA *)&rna_RegionView3D_view_camera_zoom,
	-1, "view_camera_offset", 8195, "Camera Offset",
	"View shift in camera view",
	0, "*",
	PROP_FLOAT, PROP_NONE | PROP_UNIT_NONE, NULL, 1, {2, 0, 0}, 2,
	NULL, 252248064, NULL, NULL,
	offsetof(RegionView3D, camdx), 4, NULL},
	NULL, NULL, RegionView3D_view_camera_offset_get, RegionView3D_view_camera_offset_set, NULL, NULL, NULL, NULL, NULL, NULL, -10000.0f, 10000.0f, -FLT_MAX, FLT_MAX, 10.0f, 3, 0.0f, rna_RegionView3D_view_camera_offset_default
};

FunctionRNA rna_RegionView3D_update_func = {
	{NULL, NULL,
	NULL,
	{NULL, NULL}},
	"update", 2048, "Recalculate the view matrices",
	RegionView3D_update_call,
	NULL
};

StructRNA RNA_RegionView3D = {
	{(ContainerRNA *)&RNA_SpaceProperties, (ContainerRNA *)&RNA_BackgroundImages,
	NULL,
	{(PropertyRNA *)&rna_RegionView3D_rna_properties, (PropertyRNA *)&rna_RegionView3D_view_camera_offset}},
	"RegionView3D", NULL, NULL, 4, "3D View Region",
	"3D View region data",
	"*", 17,
	NULL, (PropertyRNA *)&rna_RegionView3D_rna_properties,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	{(FunctionRNA *)&rna_RegionView3D_update_func, (FunctionRNA *)&rna_RegionView3D_update_func}
};

/* Properties Space */
static EnumPropertyItem rna_SpaceProperties_context_items[15] = {
	{1, "SCENE", 156, "Scene", "Scene"},
	{0, "RENDER", 83, "Render", "Render"},
	{13, "RENDER_LAYER", 157, "Render Layers", "Render layers"},
	{2, "WORLD", 82, "World", "World"},
	{3, "OBJECT", 159, "Object", "Object"},
	{11, "CONSTRAINT", 175, "Constraints", "Object constraints"},
	{10, "MODIFIER", 442, "Modifiers", "Object modifiers"},
	{4, "DATA", 0, "Data", "Object data"},
	{9, "BONE", 174, "Bone", "Bone"},
	{12, "BONE_CONSTRAINT", 177, "Bone Constraints", "Bone constraints"},
	{5, "MATERIAL", 79, "Material", "Material"},
	{6, "TEXTURE", 80, "Texture", "Texture"},
	{7, "PARTICLES", 88, "Particles", "Particle"},
	{8, "PHYSICS", 89, "Physics", "Physics"},
	{0, NULL, 0, NULL, NULL}
};

EnumPropertyRNA rna_SpaceProperties_context = {
	{(PropertyRNA *)&rna_SpaceProperties_align, NULL,
	-1, "context", 3, "Context",
	"Type of active data to display and edit",
	0, "*",
	PROP_ENUM, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 252313600, NULL, NULL,
	0, -1, NULL},
	SpaceProperties_context_get, SpaceProperties_context_set, rna_SpaceProperties_context_itemf, NULL, NULL, NULL, rna_SpaceProperties_context_items, 14, 0
};

static EnumPropertyItem rna_SpaceProperties_align_items[3] = {
	{1, "HORIZONTAL", 0, "Horizontal", ""},
	{2, "VERTICAL", 0, "Vertical", ""},
	{0, NULL, 0, NULL, NULL}
};

EnumPropertyRNA rna_SpaceProperties_align = {
	{(PropertyRNA *)&rna_SpaceProperties_texture_context, (PropertyRNA *)&rna_SpaceProperties_context,
	-1, "align", 3, "Align",
	"Arrangement of the panels",
	0, "*",
	PROP_ENUM, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 252313600, NULL, NULL,
	0, -1, NULL},
	SpaceProperties_align_get, SpaceProperties_align_set, NULL, NULL, NULL, NULL, rna_SpaceProperties_align_items, 2, 1
};

static EnumPropertyItem rna_SpaceProperties_texture_context_items[7] = {
	{0, "MATERIAL", 79, "", "Show material textures"},
	{1, "WORLD", 82, "", "Show world textures"},
	{2, "LAMP", 78, "", "Show lamp textures"},
	{3, "PARTICLES", 88, "", "Show particles textures"},
	{5, "LINESTYLE", 198, "", "Show linestyle textures"},
	{4, "OTHER", 80, "", "Show other data textures"},
	{0, NULL, 0, NULL, NULL}
};

EnumPropertyRNA rna_SpaceProperties_texture_context = {
	{(PropertyRNA *)&rna_SpaceProperties_use_limited_texture_context, (PropertyRNA *)&rna_SpaceProperties_align,
	-1, "texture_context", 3, "Texture Context",
	"Type of texture data to display and edit",
	0, "*",
	PROP_ENUM, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 117440512, NULL, NULL,
	0, -1, NULL},
	SpaceProperties_texture_context_get, SpaceProperties_texture_context_set, rna_SpaceProperties_texture_context_itemf, NULL, NULL, NULL, rna_SpaceProperties_texture_context_items, 6, 0
};

BoolPropertyRNA rna_SpaceProperties_use_limited_texture_context = {
	{(PropertyRNA *)&rna_SpaceProperties_pin_id, (PropertyRNA *)&rna_SpaceProperties_texture_context,
	-1, "use_limited_texture_context", 3, "Limited Texture Context",
	"Use the limited version of texture user (for \'old shading\' mode)",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	SpaceProperties_use_limited_texture_context_get, SpaceProperties_use_limited_texture_context_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

PointerPropertyRNA rna_SpaceProperties_pin_id = {
	{(PropertyRNA *)&rna_SpaceProperties_use_pin_id, (PropertyRNA *)&rna_SpaceProperties_use_limited_texture_context,
	-1, "pin_id", 41943105, "pin_id",
	"",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_SpaceProperties_pin_id_update, 252313600, NULL, NULL,
	0, -1, NULL},
	SpaceProperties_pin_id_get, SpaceProperties_pin_id_set, rna_SpaceProperties_pin_id_typef, NULL,&RNA_ID
};

BoolPropertyRNA rna_SpaceProperties_use_pin_id = {
	{NULL, (PropertyRNA *)&rna_SpaceProperties_pin_id,
	-1, "use_pin_id", 3, "Pin ID",
	"Use the pinned context",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	SpaceProperties_use_pin_id_get, SpaceProperties_use_pin_id_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

StructRNA RNA_SpaceProperties = {
	{(ContainerRNA *)&RNA_SpaceDopeSheetEditor, (ContainerRNA *)&RNA_RegionView3D,
	NULL,
	{(PropertyRNA *)&rna_SpaceProperties_context, (PropertyRNA *)&rna_SpaceProperties_use_pin_id}},
	"SpaceProperties", NULL, NULL, 4, "Properties Space",
	"Properties space data",
	"*", 17,
	NULL, (PropertyRNA *)&rna_Space_rna_properties,
	&RNA_Space,
	NULL,
	rna_Space_refine,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	{NULL, NULL}
};

/* Space Dope Sheet Editor */
PointerPropertyRNA rna_SpaceDopeSheetEditor_action = {
	{(PropertyRNA *)&rna_SpaceDopeSheetEditor_mode, NULL,
	-1, "action", 8388673, "Action",
	"Action displayed and edited in this space",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_SpaceDopeSheetEditor_action_update, 239468545, NULL, NULL,
	0, -1, NULL},
	SpaceDopeSheetEditor_action_get, SpaceDopeSheetEditor_action_set, NULL, rna_Action_actedit_assign_poll,&RNA_Action
};

static EnumPropertyItem rna_SpaceDopeSheetEditor_mode_items[6] = {
	{3, "DOPESHEET", 106, "Dope Sheet", "Edit all keyframes in scene"},
	{0, "ACTION", 159, "Action Editor", "Edit keyframes in active object\'s Object-level action"},
	{1, "SHAPEKEY", 176, "Shape Key Editor", "Edit keyframes in active object\'s Shape Keys action"},
	{2, "GPENCIL", 197, "Grease Pencil", "Edit timings for all Grease Pencil sketches in file"},
	{4, "MASK", 467, "Mask", "Edit timings for Mask Editor splines"},
	{0, NULL, 0, NULL, NULL}
};

EnumPropertyRNA rna_SpaceDopeSheetEditor_mode = {
	{(PropertyRNA *)&rna_SpaceDopeSheetEditor_show_seconds, (PropertyRNA *)&rna_SpaceDopeSheetEditor_action,
	-1, "mode", 3, "Mode",
	"Editing context being displayed",
	0, "*",
	PROP_ENUM, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_SpaceDopeSheetEditor_mode_update, 252575744, NULL, NULL,
	0, -1, NULL},
	SpaceDopeSheetEditor_mode_get, SpaceDopeSheetEditor_mode_set, NULL, NULL, NULL, NULL, rna_SpaceDopeSheetEditor_mode_items, 5, 0
};

BoolPropertyRNA rna_SpaceDopeSheetEditor_show_seconds = {
	{(PropertyRNA *)&rna_SpaceDopeSheetEditor_show_frame_indicator, (PropertyRNA *)&rna_SpaceDopeSheetEditor_mode,
	-1, "show_seconds", 3, "Show Seconds",
	"Show timing in seconds not frames",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 252575744, NULL, NULL,
	0, -1, NULL},
	SpaceDopeSheetEditor_show_seconds_get, SpaceDopeSheetEditor_show_seconds_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_SpaceDopeSheetEditor_show_frame_indicator = {
	{(PropertyRNA *)&rna_SpaceDopeSheetEditor_show_sliders, (PropertyRNA *)&rna_SpaceDopeSheetEditor_show_seconds,
	-1, "show_frame_indicator", 3, "Show Frame Number Indicator",
	"Show frame number beside the current frame indicator line",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 252575744, NULL, NULL,
	0, -1, NULL},
	SpaceDopeSheetEditor_show_frame_indicator_get, SpaceDopeSheetEditor_show_frame_indicator_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_SpaceDopeSheetEditor_show_sliders = {
	{(PropertyRNA *)&rna_SpaceDopeSheetEditor_show_pose_markers, (PropertyRNA *)&rna_SpaceDopeSheetEditor_show_frame_indicator,
	-1, "show_sliders", 3, "Show Sliders",
	"Show sliders beside F-Curve channels",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 252575744, NULL, NULL,
	0, -1, NULL},
	SpaceDopeSheetEditor_show_sliders_get, SpaceDopeSheetEditor_show_sliders_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_SpaceDopeSheetEditor_show_pose_markers = {
	{(PropertyRNA *)&rna_SpaceDopeSheetEditor_show_group_colors, (PropertyRNA *)&rna_SpaceDopeSheetEditor_show_sliders,
	-1, "show_pose_markers", 3, "Show Pose Markers",
	"Show markers belonging to the active action instead of Scene markers (Action and Shape Key Editors only)",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 252575744, NULL, NULL,
	0, -1, NULL},
	SpaceDopeSheetEditor_show_pose_markers_get, SpaceDopeSheetEditor_show_pose_markers_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_SpaceDopeSheetEditor_show_group_colors = {
	{(PropertyRNA *)&rna_SpaceDopeSheetEditor_use_auto_merge_keyframes, (PropertyRNA *)&rna_SpaceDopeSheetEditor_show_pose_markers,
	-1, "show_group_colors", 3, "Show Group Colors",
	"Draw groups and channels with colors matching their corresponding groups",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 252575744, NULL, NULL,
	0, -1, NULL},
	SpaceDopeSheetEditor_show_group_colors_get, SpaceDopeSheetEditor_show_group_colors_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_SpaceDopeSheetEditor_use_auto_merge_keyframes = {
	{(PropertyRNA *)&rna_SpaceDopeSheetEditor_use_realtime_update, (PropertyRNA *)&rna_SpaceDopeSheetEditor_show_group_colors,
	-1, "use_auto_merge_keyframes", 3, "AutoMerge Keyframes",
	"Automatically merge nearby keyframes",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 252575744, NULL, NULL,
	0, -1, NULL},
	SpaceDopeSheetEditor_use_auto_merge_keyframes_get, SpaceDopeSheetEditor_use_auto_merge_keyframes_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_SpaceDopeSheetEditor_use_realtime_update = {
	{(PropertyRNA *)&rna_SpaceDopeSheetEditor_use_marker_sync, (PropertyRNA *)&rna_SpaceDopeSheetEditor_use_auto_merge_keyframes,
	-1, "use_realtime_update", 3, "Realtime Updates",
	"When transforming keyframes, changes to the animation data are flushed to other views",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 252575744, NULL, NULL,
	0, -1, NULL},
	SpaceDopeSheetEditor_use_realtime_update_get, SpaceDopeSheetEditor_use_realtime_update_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_SpaceDopeSheetEditor_use_marker_sync = {
	{(PropertyRNA *)&rna_SpaceDopeSheetEditor_dopesheet, (PropertyRNA *)&rna_SpaceDopeSheetEditor_use_realtime_update,
	-1, "use_marker_sync", 3, "Sync Markers",
	"Sync Markers with keyframe edits",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	SpaceDopeSheetEditor_use_marker_sync_get, SpaceDopeSheetEditor_use_marker_sync_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

PointerPropertyRNA rna_SpaceDopeSheetEditor_dopesheet = {
	{(PropertyRNA *)&rna_SpaceDopeSheetEditor_auto_snap, (PropertyRNA *)&rna_SpaceDopeSheetEditor_use_marker_sync,
	-1, "dopesheet", 8388608, "Dope Sheet",
	"Settings for filtering animation data",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	SpaceDopeSheetEditor_dopesheet_get, NULL, NULL, NULL,&RNA_DopeSheet
};

static EnumPropertyItem rna_SpaceDopeSheetEditor_auto_snap_items[7] = {
	{0, "NONE", 0, "No Auto-Snap", ""},
	{1, "STEP", 0, "Frame Step", "Snap to 1.0 frame intervals"},
	{5, "TIME_STEP", 0, "Second Step", "Snap to 1.0 second intervals"},
	{2, "FRAME", 0, "Nearest Frame", "Snap to actual frames (nla-action time)"},
	{4, "SECOND", 0, "Nearest Second", "Snap to actual seconds (nla-action time)"},
	{3, "MARKER", 0, "Nearest Marker", "Snap to nearest marker"},
	{0, NULL, 0, NULL, NULL}
};

EnumPropertyRNA rna_SpaceDopeSheetEditor_auto_snap = {
	{NULL, (PropertyRNA *)&rna_SpaceDopeSheetEditor_dopesheet,
	-1, "auto_snap", 3, "Auto Snap",
	"Automatic time snapping settings for transformations",
	0, "*",
	PROP_ENUM, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 252575744, NULL, NULL,
	0, -1, NULL},
	SpaceDopeSheetEditor_auto_snap_get, SpaceDopeSheetEditor_auto_snap_set, NULL, NULL, NULL, NULL, rna_SpaceDopeSheetEditor_auto_snap_items, 6, 0
};

StructRNA RNA_SpaceDopeSheetEditor = {
	{(ContainerRNA *)&RNA_SpaceGraphEditor, (ContainerRNA *)&RNA_SpaceProperties,
	NULL,
	{(PropertyRNA *)&rna_SpaceDopeSheetEditor_action, (PropertyRNA *)&rna_SpaceDopeSheetEditor_auto_snap}},
	"SpaceDopeSheetEditor", NULL, NULL, 4, "Space Dope Sheet Editor",
	"Dope Sheet space data",
	"*", 17,
	NULL, (PropertyRNA *)&rna_Space_rna_properties,
	&RNA_Space,
	NULL,
	rna_Space_refine,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	{NULL, NULL}
};

/* Space Graph Editor */
static EnumPropertyItem rna_SpaceGraphEditor_mode_items[3] = {
	{0, "FCURVES", 105, "F-Curve", "Edit animation/keyframes displayed as 2D curves"},
	{1, "DRIVERS", 519, "Drivers", "Edit drivers"},
	{0, NULL, 0, NULL, NULL}
};

EnumPropertyRNA rna_SpaceGraphEditor_mode = {
	{(PropertyRNA *)&rna_SpaceGraphEditor_show_seconds, NULL,
	-1, "mode", 3, "Mode",
	"Editing context being displayed",
	0, "*",
	PROP_ENUM, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_SpaceGraphEditor_display_mode_update, 252510208, NULL, NULL,
	0, -1, NULL},
	SpaceGraphEditor_mode_get, SpaceGraphEditor_mode_set, NULL, NULL, NULL, NULL, rna_SpaceGraphEditor_mode_items, 2, 0
};

BoolPropertyRNA rna_SpaceGraphEditor_show_seconds = {
	{(PropertyRNA *)&rna_SpaceGraphEditor_show_frame_indicator, (PropertyRNA *)&rna_SpaceGraphEditor_mode,
	-1, "show_seconds", 3, "Show Seconds",
	"Show timing in seconds not frames",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 252510208, NULL, NULL,
	0, -1, NULL},
	SpaceGraphEditor_show_seconds_get, SpaceGraphEditor_show_seconds_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_SpaceGraphEditor_show_frame_indicator = {
	{(PropertyRNA *)&rna_SpaceGraphEditor_show_sliders, (PropertyRNA *)&rna_SpaceGraphEditor_show_seconds,
	-1, "show_frame_indicator", 3, "Show Frame Number Indicator",
	"Show frame number beside the current frame indicator line",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 252510208, NULL, NULL,
	0, -1, NULL},
	SpaceGraphEditor_show_frame_indicator_get, SpaceGraphEditor_show_frame_indicator_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_SpaceGraphEditor_show_sliders = {
	{(PropertyRNA *)&rna_SpaceGraphEditor_show_handles, (PropertyRNA *)&rna_SpaceGraphEditor_show_frame_indicator,
	-1, "show_sliders", 3, "Show Sliders",
	"Show sliders beside F-Curve channels",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 252510208, NULL, NULL,
	0, -1, NULL},
	SpaceGraphEditor_show_sliders_get, SpaceGraphEditor_show_sliders_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_SpaceGraphEditor_show_handles = {
	{(PropertyRNA *)&rna_SpaceGraphEditor_use_only_selected_curves_handles, (PropertyRNA *)&rna_SpaceGraphEditor_show_sliders,
	-1, "show_handles", 3, "Show Handles",
	"Show handles of Bezier control points",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 252510208, NULL, NULL,
	0, -1, NULL},
	SpaceGraphEditor_show_handles_get, SpaceGraphEditor_show_handles_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_SpaceGraphEditor_use_only_selected_curves_handles = {
	{(PropertyRNA *)&rna_SpaceGraphEditor_use_only_selected_keyframe_handles, (PropertyRNA *)&rna_SpaceGraphEditor_show_handles,
	-1, "use_only_selected_curves_handles", 3, "Only Selected Curve Keyframes",
	"Only keyframes of selected F-Curves are visible and editable",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 252510208, NULL, NULL,
	0, -1, NULL},
	SpaceGraphEditor_use_only_selected_curves_handles_get, SpaceGraphEditor_use_only_selected_curves_handles_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_SpaceGraphEditor_use_only_selected_keyframe_handles = {
	{(PropertyRNA *)&rna_SpaceGraphEditor_use_beauty_drawing, (PropertyRNA *)&rna_SpaceGraphEditor_use_only_selected_curves_handles,
	-1, "use_only_selected_keyframe_handles", 3, "Only Selected Keyframes Handles",
	"Only show and edit handles of selected keyframes",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 252510208, NULL, NULL,
	0, -1, NULL},
	SpaceGraphEditor_use_only_selected_keyframe_handles_get, SpaceGraphEditor_use_only_selected_keyframe_handles_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_SpaceGraphEditor_use_beauty_drawing = {
	{(PropertyRNA *)&rna_SpaceGraphEditor_show_group_colors, (PropertyRNA *)&rna_SpaceGraphEditor_use_only_selected_keyframe_handles,
	-1, "use_beauty_drawing", 3, "Use High Quality Drawing",
	"Draw F-Curves using Anti-Aliasing and other fancy effects (disable for better performance)",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 252510208, NULL, NULL,
	0, -1, NULL},
	SpaceGraphEditor_use_beauty_drawing_get, SpaceGraphEditor_use_beauty_drawing_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_SpaceGraphEditor_show_group_colors = {
	{(PropertyRNA *)&rna_SpaceGraphEditor_use_auto_merge_keyframes, (PropertyRNA *)&rna_SpaceGraphEditor_use_beauty_drawing,
	-1, "show_group_colors", 3, "Show Group Colors",
	"Draw groups and channels with colors matching their corresponding groups",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 252510208, NULL, NULL,
	0, -1, NULL},
	SpaceGraphEditor_show_group_colors_get, SpaceGraphEditor_show_group_colors_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_SpaceGraphEditor_use_auto_merge_keyframes = {
	{(PropertyRNA *)&rna_SpaceGraphEditor_use_realtime_update, (PropertyRNA *)&rna_SpaceGraphEditor_show_group_colors,
	-1, "use_auto_merge_keyframes", 3, "AutoMerge Keyframes",
	"Automatically merge nearby keyframes",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 252510208, NULL, NULL,
	0, -1, NULL},
	SpaceGraphEditor_use_auto_merge_keyframes_get, SpaceGraphEditor_use_auto_merge_keyframes_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_SpaceGraphEditor_use_realtime_update = {
	{(PropertyRNA *)&rna_SpaceGraphEditor_show_cursor, (PropertyRNA *)&rna_SpaceGraphEditor_use_auto_merge_keyframes,
	-1, "use_realtime_update", 3, "Realtime Updates",
	"When transforming keyframes, changes to the animation data are flushed to other views",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 252510208, NULL, NULL,
	0, -1, NULL},
	SpaceGraphEditor_use_realtime_update_get, SpaceGraphEditor_use_realtime_update_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_SpaceGraphEditor_show_cursor = {
	{(PropertyRNA *)&rna_SpaceGraphEditor_cursor_position_y, (PropertyRNA *)&rna_SpaceGraphEditor_use_realtime_update,
	-1, "show_cursor", 3, "Show Cursor",
	"Show 2D cursor",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 252510208, NULL, NULL,
	0, -1, NULL},
	SpaceGraphEditor_show_cursor_get, SpaceGraphEditor_show_cursor_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

FloatPropertyRNA rna_SpaceGraphEditor_cursor_position_y = {
	{(PropertyRNA *)&rna_SpaceGraphEditor_pivot_point, (PropertyRNA *)&rna_SpaceGraphEditor_show_cursor,
	-1, "cursor_position_y", 8195, "Cursor Y-Value",
	"Graph Editor 2D-Value cursor - Y-Value component",
	0, "*",
	PROP_FLOAT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 252510208, NULL, NULL,
	offsetof(SpaceIpo, cursorVal), 4, NULL},
	SpaceGraphEditor_cursor_position_y_get, SpaceGraphEditor_cursor_position_y_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, -10000.0f, 10000.0f, -FLT_MAX, FLT_MAX, 10.0f, 3, 0.0f, NULL
};

static EnumPropertyItem rna_SpaceGraphEditor_pivot_point_items[4] = {
	{0, "BOUNDING_BOX_CENTER", 551, "Bounding Box Center", ""},
	{1, "CURSOR", 552, "2D Cursor", ""},
	{2, "INDIVIDUAL_ORIGINS", 553, "Individual Centers", ""},
	{0, NULL, 0, NULL, NULL}
};

EnumPropertyRNA rna_SpaceGraphEditor_pivot_point = {
	{(PropertyRNA *)&rna_SpaceGraphEditor_dopesheet, (PropertyRNA *)&rna_SpaceGraphEditor_cursor_position_y,
	-1, "pivot_point", 3, "Pivot Point",
	"Pivot center for rotation/scaling",
	0, "*",
	PROP_ENUM, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 252510208, NULL, NULL,
	0, -1, NULL},
	SpaceGraphEditor_pivot_point_get, SpaceGraphEditor_pivot_point_set, NULL, NULL, NULL, NULL, rna_SpaceGraphEditor_pivot_point_items, 3, 0
};

PointerPropertyRNA rna_SpaceGraphEditor_dopesheet = {
	{(PropertyRNA *)&rna_SpaceGraphEditor_auto_snap, (PropertyRNA *)&rna_SpaceGraphEditor_pivot_point,
	-1, "dopesheet", 8388608, "Dope Sheet",
	"Settings for filtering animation data",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	SpaceGraphEditor_dopesheet_get, NULL, NULL, NULL,&RNA_DopeSheet
};

static EnumPropertyItem rna_SpaceGraphEditor_auto_snap_items[7] = {
	{0, "NONE", 0, "No Auto-Snap", ""},
	{1, "STEP", 0, "Frame Step", "Snap to 1.0 frame intervals"},
	{5, "TIME_STEP", 0, "Second Step", "Snap to 1.0 second intervals"},
	{2, "FRAME", 0, "Nearest Frame", "Snap to actual frames (nla-action time)"},
	{4, "SECOND", 0, "Nearest Second", "Snap to actual seconds (nla-action time)"},
	{3, "MARKER", 0, "Nearest Marker", "Snap to nearest marker"},
	{0, NULL, 0, NULL, NULL}
};

EnumPropertyRNA rna_SpaceGraphEditor_auto_snap = {
	{(PropertyRNA *)&rna_SpaceGraphEditor_has_ghost_curves, (PropertyRNA *)&rna_SpaceGraphEditor_dopesheet,
	-1, "auto_snap", 3, "Auto Snap",
	"Automatic time snapping settings for transformations",
	0, "*",
	PROP_ENUM, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 252510208, NULL, NULL,
	0, -1, NULL},
	SpaceGraphEditor_auto_snap_get, SpaceGraphEditor_auto_snap_set, NULL, NULL, NULL, NULL, rna_SpaceGraphEditor_auto_snap_items, 6, 0
};

BoolPropertyRNA rna_SpaceGraphEditor_has_ghost_curves = {
	{(PropertyRNA *)&rna_SpaceGraphEditor_use_normalization, (PropertyRNA *)&rna_SpaceGraphEditor_auto_snap,
	-1, "has_ghost_curves", 3, "Has Ghost Curves",
	"Graph Editor instance has some ghost curves stored",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 252510208, NULL, NULL,
	0, -1, NULL},
	SpaceGraphEditor_has_ghost_curves_get, SpaceGraphEditor_has_ghost_curves_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_SpaceGraphEditor_use_normalization = {
	{(PropertyRNA *)&rna_SpaceGraphEditor_use_auto_normalization, (PropertyRNA *)&rna_SpaceGraphEditor_has_ghost_curves,
	-1, "use_normalization", 3, "Use Normalization",
	"Display curves in normalized to -1..1 range, for easier editing of multiple curves with different ranges",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 252510208, NULL, NULL,
	0, -1, NULL},
	SpaceGraphEditor_use_normalization_get, SpaceGraphEditor_use_normalization_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_SpaceGraphEditor_use_auto_normalization = {
	{NULL, (PropertyRNA *)&rna_SpaceGraphEditor_use_normalization,
	-1, "use_auto_normalization", 3, "Auto Normalization",
	"Automatically recalculate curve normalization on every curve edit",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 252510208, NULL, NULL,
	0, -1, NULL},
	SpaceGraphEditor_use_auto_normalization_get, SpaceGraphEditor_use_auto_normalization_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

StructRNA RNA_SpaceGraphEditor = {
	{(ContainerRNA *)&RNA_SpaceNLA, (ContainerRNA *)&RNA_SpaceDopeSheetEditor,
	NULL,
	{(PropertyRNA *)&rna_SpaceGraphEditor_mode, (PropertyRNA *)&rna_SpaceGraphEditor_use_auto_normalization}},
	"SpaceGraphEditor", NULL, NULL, 4, "Space Graph Editor",
	"Graph Editor space data",
	"*", 17,
	NULL, (PropertyRNA *)&rna_Space_rna_properties,
	&RNA_Space,
	NULL,
	rna_Space_refine,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	{NULL, NULL}
};

/* Space Nla Editor */
BoolPropertyRNA rna_SpaceNLA_show_seconds = {
	{(PropertyRNA *)&rna_SpaceNLA_show_frame_indicator, NULL,
	-1, "show_seconds", 3, "Show Seconds",
	"Show timing in seconds not frames",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 252641280, NULL, NULL,
	0, -1, NULL},
	SpaceNLA_show_seconds_get, SpaceNLA_show_seconds_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_SpaceNLA_show_frame_indicator = {
	{(PropertyRNA *)&rna_SpaceNLA_show_strip_curves, (PropertyRNA *)&rna_SpaceNLA_show_seconds,
	-1, "show_frame_indicator", 3, "Show Frame Number Indicator",
	"Show frame number beside the current frame indicator line",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 252641280, NULL, NULL,
	0, -1, NULL},
	SpaceNLA_show_frame_indicator_get, SpaceNLA_show_frame_indicator_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_SpaceNLA_show_strip_curves = {
	{(PropertyRNA *)&rna_SpaceNLA_use_realtime_update, (PropertyRNA *)&rna_SpaceNLA_show_frame_indicator,
	-1, "show_strip_curves", 3, "Show Control F-Curves",
	"Show influence F-Curves on strips",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 252641280, NULL, NULL,
	0, -1, NULL},
	SpaceNLA_show_strip_curves_get, SpaceNLA_show_strip_curves_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_SpaceNLA_use_realtime_update = {
	{(PropertyRNA *)&rna_SpaceNLA_dopesheet, (PropertyRNA *)&rna_SpaceNLA_show_strip_curves,
	-1, "use_realtime_update", 3, "Realtime Updates",
	"When transforming strips, changes to the animation data are flushed to other views",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 252641280, NULL, NULL,
	0, -1, NULL},
	SpaceNLA_use_realtime_update_get, SpaceNLA_use_realtime_update_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

PointerPropertyRNA rna_SpaceNLA_dopesheet = {
	{(PropertyRNA *)&rna_SpaceNLA_auto_snap, (PropertyRNA *)&rna_SpaceNLA_use_realtime_update,
	-1, "dopesheet", 8388608, "Dope Sheet",
	"Settings for filtering animation data",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	SpaceNLA_dopesheet_get, NULL, NULL, NULL,&RNA_DopeSheet
};

static EnumPropertyItem rna_SpaceNLA_auto_snap_items[7] = {
	{0, "NONE", 0, "No Auto-Snap", ""},
	{1, "STEP", 0, "Frame Step", "Snap to 1.0 frame intervals"},
	{5, "TIME_STEP", 0, "Second Step", "Snap to 1.0 second intervals"},
	{2, "FRAME", 0, "Nearest Frame", "Snap to actual frames (nla-action time)"},
	{4, "SECOND", 0, "Nearest Second", "Snap to actual seconds (nla-action time)"},
	{3, "MARKER", 0, "Nearest Marker", "Snap to nearest marker"},
	{0, NULL, 0, NULL, NULL}
};

EnumPropertyRNA rna_SpaceNLA_auto_snap = {
	{NULL, (PropertyRNA *)&rna_SpaceNLA_dopesheet,
	-1, "auto_snap", 3, "Auto Snap",
	"Automatic time snapping settings for transformations",
	0, "*",
	PROP_ENUM, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 252641280, NULL, NULL,
	0, -1, NULL},
	SpaceNLA_auto_snap_get, SpaceNLA_auto_snap_set, NULL, NULL, NULL, NULL, rna_SpaceNLA_auto_snap_items, 6, 0
};

StructRNA RNA_SpaceNLA = {
	{(ContainerRNA *)&RNA_SpaceTimeline, (ContainerRNA *)&RNA_SpaceGraphEditor,
	NULL,
	{(PropertyRNA *)&rna_SpaceNLA_show_seconds, (PropertyRNA *)&rna_SpaceNLA_auto_snap}},
	"SpaceNLA", NULL, NULL, 4, "Space Nla Editor",
	"NLA editor space data",
	"*", 17,
	NULL, (PropertyRNA *)&rna_Space_rna_properties,
	&RNA_Space,
	NULL,
	rna_Space_refine,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	{NULL, NULL}
};

/* Space Timeline Editor */
BoolPropertyRNA rna_SpaceTimeline_show_frame_indicator = {
	{(PropertyRNA *)&rna_SpaceTimeline_show_seconds, NULL,
	-1, "show_frame_indicator", 3, "Show Frame Number Indicator",
	"Show frame number beside the current frame indicator line",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 252444672, NULL, NULL,
	0, -1, NULL},
	SpaceTimeline_show_frame_indicator_get, SpaceTimeline_show_frame_indicator_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_SpaceTimeline_show_seconds = {
	{(PropertyRNA *)&rna_SpaceTimeline_show_cache, (PropertyRNA *)&rna_SpaceTimeline_show_frame_indicator,
	-1, "show_seconds", 3, "Show Seconds",
	"Show timing in seconds not frames",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 252444672, NULL, NULL,
	0, -1, NULL},
	SpaceTimeline_show_seconds_get, SpaceTimeline_show_seconds_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_SpaceTimeline_show_cache = {
	{(PropertyRNA *)&rna_SpaceTimeline_cache_softbody, (PropertyRNA *)&rna_SpaceTimeline_show_seconds,
	-1, "show_cache", 3, "Show Cache",
	"Show the status of cached frames in the timeline",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 252444672, NULL, NULL,
	0, -1, NULL},
	SpaceTimeline_show_cache_get, SpaceTimeline_show_cache_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_SpaceTimeline_cache_softbody = {
	{(PropertyRNA *)&rna_SpaceTimeline_cache_particles, (PropertyRNA *)&rna_SpaceTimeline_show_cache,
	-1, "cache_softbody", 3, "Softbody",
	"Show the active object\'s softbody point cache",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 252444672, NULL, NULL,
	0, -1, NULL},
	SpaceTimeline_cache_softbody_get, SpaceTimeline_cache_softbody_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_SpaceTimeline_cache_particles = {
	{(PropertyRNA *)&rna_SpaceTimeline_cache_cloth, (PropertyRNA *)&rna_SpaceTimeline_cache_softbody,
	-1, "cache_particles", 3, "Particles",
	"Show the active object\'s particle point cache",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 252444672, NULL, NULL,
	0, -1, NULL},
	SpaceTimeline_cache_particles_get, SpaceTimeline_cache_particles_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_SpaceTimeline_cache_cloth = {
	{(PropertyRNA *)&rna_SpaceTimeline_cache_smoke, (PropertyRNA *)&rna_SpaceTimeline_cache_particles,
	-1, "cache_cloth", 3, "Cloth",
	"Show the active object\'s cloth point cache",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 252444672, NULL, NULL,
	0, -1, NULL},
	SpaceTimeline_cache_cloth_get, SpaceTimeline_cache_cloth_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_SpaceTimeline_cache_smoke = {
	{(PropertyRNA *)&rna_SpaceTimeline_cache_dynamicpaint, (PropertyRNA *)&rna_SpaceTimeline_cache_cloth,
	-1, "cache_smoke", 3, "Smoke",
	"Show the active object\'s smoke cache",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 252444672, NULL, NULL,
	0, -1, NULL},
	SpaceTimeline_cache_smoke_get, SpaceTimeline_cache_smoke_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_SpaceTimeline_cache_dynamicpaint = {
	{(PropertyRNA *)&rna_SpaceTimeline_cache_rigidbody, (PropertyRNA *)&rna_SpaceTimeline_cache_smoke,
	-1, "cache_dynamicpaint", 3, "Dynamic Paint",
	"Show the active object\'s Dynamic Paint cache",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 252444672, NULL, NULL,
	0, -1, NULL},
	SpaceTimeline_cache_dynamicpaint_get, SpaceTimeline_cache_dynamicpaint_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_SpaceTimeline_cache_rigidbody = {
	{NULL, (PropertyRNA *)&rna_SpaceTimeline_cache_dynamicpaint,
	-1, "cache_rigidbody", 3, "Rigid Body",
	"Show the active object\'s Rigid Body cache",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 252444672, NULL, NULL,
	0, -1, NULL},
	SpaceTimeline_cache_rigidbody_get, SpaceTimeline_cache_rigidbody_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

StructRNA RNA_SpaceTimeline = {
	{(ContainerRNA *)&RNA_SpaceConsole, (ContainerRNA *)&RNA_SpaceNLA,
	NULL,
	{(PropertyRNA *)&rna_SpaceTimeline_show_frame_indicator, (PropertyRNA *)&rna_SpaceTimeline_cache_rigidbody}},
	"SpaceTimeline", NULL, NULL, 4, "Space Timeline Editor",
	"Timeline editor space data",
	"*", 17,
	NULL, (PropertyRNA *)&rna_Space_rna_properties,
	&RNA_Space,
	NULL,
	rna_Space_refine,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	{NULL, NULL}
};

/* Space Console */
IntPropertyRNA rna_SpaceConsole_font_size = {
	{(PropertyRNA *)&rna_SpaceConsole_select_start, NULL,
	-1, "font_size", 8195, "Font Size",
	"Font size to use for displaying the text",
	0, "*",
	PROP_INT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 251723776, NULL, NULL,
	offsetof(SpaceConsole, lheight), 0, NULL},
	SpaceConsole_font_size_get, SpaceConsole_font_size_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL,
	8, 32, 8, 32, 1, 0, NULL
};

IntPropertyRNA rna_SpaceConsole_select_start = {
	{(PropertyRNA *)&rna_SpaceConsole_select_end, (PropertyRNA *)&rna_SpaceConsole_font_size,
	-1, "select_start", 8195, "select_start",
	"",
	0, "*",
	PROP_INT, PROP_UNSIGNED | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 251723776, NULL, NULL,
	offsetof(SpaceConsole, sel_start), 0, NULL},
	SpaceConsole_select_start_get, SpaceConsole_select_start_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL,
	0, 10000, 0, INT_MAX, 1, 0, NULL
};

IntPropertyRNA rna_SpaceConsole_select_end = {
	{(PropertyRNA *)&rna_SpaceConsole_prompt, (PropertyRNA *)&rna_SpaceConsole_select_start,
	-1, "select_end", 8195, "select_end",
	"",
	0, "*",
	PROP_INT, PROP_UNSIGNED | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 251723776, NULL, NULL,
	offsetof(SpaceConsole, sel_end), 0, NULL},
	SpaceConsole_select_end_get, SpaceConsole_select_end_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL,
	0, 10000, 0, INT_MAX, 1, 0, NULL
};

StringPropertyRNA rna_SpaceConsole_prompt = {
	{(PropertyRNA *)&rna_SpaceConsole_language, (PropertyRNA *)&rna_SpaceConsole_select_end,
	-1, "prompt", 262145, "Prompt",
	"Command line prompt",
	0, "*",
	PROP_STRING, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {256, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	SpaceConsole_prompt_get, SpaceConsole_prompt_length, SpaceConsole_prompt_set, NULL, NULL, NULL, 256, ""
};

StringPropertyRNA rna_SpaceConsole_language = {
	{(PropertyRNA *)&rna_SpaceConsole_history, (PropertyRNA *)&rna_SpaceConsole_prompt,
	-1, "language", 262145, "Language",
	"Command line prompt language",
	0, "*",
	PROP_STRING, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {32, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	SpaceConsole_language_get, SpaceConsole_language_length, SpaceConsole_language_set, NULL, NULL, NULL, 32, ""
};

CollectionPropertyRNA rna_SpaceConsole_history = {
	{(PropertyRNA *)&rna_SpaceConsole_scrollback, (PropertyRNA *)&rna_SpaceConsole_language,
	-1, "history", 0, "History",
	"Command history",
	0, "*",
	PROP_COLLECTION, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	SpaceConsole_history_begin, SpaceConsole_history_next, SpaceConsole_history_end, SpaceConsole_history_get, NULL, SpaceConsole_history_lookup_int, NULL, NULL, &RNA_ConsoleLine
};

CollectionPropertyRNA rna_SpaceConsole_scrollback = {
	{NULL, (PropertyRNA *)&rna_SpaceConsole_history,
	-1, "scrollback", 0, "Output",
	"Command output",
	0, "*",
	PROP_COLLECTION, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	SpaceConsole_scrollback_begin, SpaceConsole_scrollback_next, SpaceConsole_scrollback_end, SpaceConsole_scrollback_get, NULL, SpaceConsole_scrollback_lookup_int, NULL, NULL, &RNA_ConsoleLine
};

StructRNA RNA_SpaceConsole = {
	{(ContainerRNA *)&RNA_ConsoleLine, (ContainerRNA *)&RNA_SpaceTimeline,
	NULL,
	{(PropertyRNA *)&rna_SpaceConsole_font_size, (PropertyRNA *)&rna_SpaceConsole_scrollback}},
	"SpaceConsole", NULL, NULL, 4, "Space Console",
	"Interactive python console",
	"*", 17,
	NULL, (PropertyRNA *)&rna_Space_rna_properties,
	&RNA_Space,
	NULL,
	rna_Space_refine,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	{NULL, NULL}
};

/* Console Input */
CollectionPropertyRNA rna_ConsoleLine_rna_properties = {
	{(PropertyRNA *)&rna_ConsoleLine_rna_type, NULL,
	-1, "rna_properties", 128, "Properties",
	"RNA property collection",
	0, "*",
	PROP_COLLECTION, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	ConsoleLine_rna_properties_begin, ConsoleLine_rna_properties_next, ConsoleLine_rna_properties_end, ConsoleLine_rna_properties_get, NULL, NULL, ConsoleLine_rna_properties_lookup_string, NULL, &RNA_Property
};

PointerPropertyRNA rna_ConsoleLine_rna_type = {
	{(PropertyRNA *)&rna_ConsoleLine_body, (PropertyRNA *)&rna_ConsoleLine_rna_properties,
	-1, "rna_type", 8912896, "RNA",
	"RNA type definition",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	ConsoleLine_rna_type_get, NULL, NULL, NULL,&RNA_Struct
};

StringPropertyRNA rna_ConsoleLine_body = {
	{(PropertyRNA *)&rna_ConsoleLine_current_character, (PropertyRNA *)&rna_ConsoleLine_rna_type,
	-1, "body", 262145, "Line",
	"Text in the line",
	0, "Text",
	PROP_STRING, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 251723776, NULL, NULL,
	0, -1, NULL},
	ConsoleLine_body_get, ConsoleLine_body_length, ConsoleLine_body_set, NULL, NULL, NULL, 0, ""
};

IntPropertyRNA rna_ConsoleLine_current_character = {
	{(PropertyRNA *)&rna_ConsoleLine_type, (PropertyRNA *)&rna_ConsoleLine_body,
	-1, "current_character", 8195, "current_character",
	"",
	0, "*",
	PROP_INT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 251723776, NULL, NULL,
	offsetof(ConsoleLine, cursor), 0, NULL},
	ConsoleLine_current_character_get, ConsoleLine_current_character_set, NULL, NULL, rna_ConsoleLine_cursor_index_range, NULL, NULL, NULL, NULL, NULL,
	-10000, 10000, INT_MIN, INT_MAX, 1, 0, NULL
};

static EnumPropertyItem rna_ConsoleLine_type_items[5] = {
	{0, "OUTPUT", 0, "Output", ""},
	{1, "INPUT", 0, "Input", ""},
	{2, "INFO", 0, "Info", ""},
	{3, "ERROR", 0, "Error", ""},
	{0, NULL, 0, NULL, NULL}
};

EnumPropertyRNA rna_ConsoleLine_type = {
	{NULL, (PropertyRNA *)&rna_ConsoleLine_current_character,
	-1, "type", 3, "Type",
	"Console line type when used in scrollback",
	0, "*",
	PROP_ENUM, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	ConsoleLine_type_get, ConsoleLine_type_set, NULL, NULL, NULL, NULL, rna_ConsoleLine_type_items, 4, 0
};

StructRNA RNA_ConsoleLine = {
	{(ContainerRNA *)&RNA_SpaceInfo, (ContainerRNA *)&RNA_SpaceConsole,
	NULL,
	{(PropertyRNA *)&rna_ConsoleLine_rna_properties, (PropertyRNA *)&rna_ConsoleLine_type}},
	"ConsoleLine", NULL, NULL, 4, "Console Input",
	"Input line for the interactive console",
	"*", 17,
	NULL, (PropertyRNA *)&rna_ConsoleLine_rna_properties,
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

/* Space Info */
BoolPropertyRNA rna_SpaceInfo_show_report_debug = {
	{(PropertyRNA *)&rna_SpaceInfo_show_report_info, NULL,
	-1, "show_report_debug", 3, "Show Debug",
	"Display debug reporting info",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 251789312, NULL, NULL,
	0, -1, NULL},
	SpaceInfo_show_report_debug_get, SpaceInfo_show_report_debug_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_SpaceInfo_show_report_info = {
	{(PropertyRNA *)&rna_SpaceInfo_show_report_operator, (PropertyRNA *)&rna_SpaceInfo_show_report_debug,
	-1, "show_report_info", 3, "Show Info",
	"Display general information",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 251789312, NULL, NULL,
	0, -1, NULL},
	SpaceInfo_show_report_info_get, SpaceInfo_show_report_info_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_SpaceInfo_show_report_operator = {
	{(PropertyRNA *)&rna_SpaceInfo_show_report_warning, (PropertyRNA *)&rna_SpaceInfo_show_report_info,
	-1, "show_report_operator", 3, "Show Operator",
	"Display the operator log",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 251789312, NULL, NULL,
	0, -1, NULL},
	SpaceInfo_show_report_operator_get, SpaceInfo_show_report_operator_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_SpaceInfo_show_report_warning = {
	{(PropertyRNA *)&rna_SpaceInfo_show_report_error, (PropertyRNA *)&rna_SpaceInfo_show_report_operator,
	-1, "show_report_warning", 3, "Show Warn",
	"Display warnings",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 251789312, NULL, NULL,
	0, -1, NULL},
	SpaceInfo_show_report_warning_get, SpaceInfo_show_report_warning_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_SpaceInfo_show_report_error = {
	{NULL, (PropertyRNA *)&rna_SpaceInfo_show_report_warning,
	-1, "show_report_error", 3, "Show Error",
	"Display error text",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 251789312, NULL, NULL,
	0, -1, NULL},
	SpaceInfo_show_report_error_get, SpaceInfo_show_report_error_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

StructRNA RNA_SpaceInfo = {
	{(ContainerRNA *)&RNA_SpaceUserPreferences, (ContainerRNA *)&RNA_ConsoleLine,
	NULL,
	{(PropertyRNA *)&rna_SpaceInfo_show_report_debug, (PropertyRNA *)&rna_SpaceInfo_show_report_error}},
	"SpaceInfo", NULL, NULL, 4, "Space Info",
	"Info space data",
	"*", 17,
	NULL, (PropertyRNA *)&rna_Space_rna_properties,
	&RNA_Space,
	NULL,
	rna_Space_refine,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	{NULL, NULL}
};

/* Space User Preferences */
static EnumPropertyItem rna_SpaceUserPreferences_filter_type_items[3] = {
	{0, "NAME", 0, "Name", "Filter based on the operator name"},
	{1, "KEY", 0, "Key-Binding", "Filter based on key bindings"},
	{0, NULL, 0, NULL, NULL}
};

EnumPropertyRNA rna_SpaceUserPreferences_filter_type = {
	{(PropertyRNA *)&rna_SpaceUserPreferences_filter_text, NULL,
	-1, "filter_type", 3, "Filter Type",
	"Filter method",
	0, "*",
	PROP_ENUM, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 252116992, NULL, NULL,
	0, -1, NULL},
	SpaceUserPreferences_filter_type_get, SpaceUserPreferences_filter_type_set, NULL, NULL, NULL, NULL, rna_SpaceUserPreferences_filter_type_items, 2, 0
};

StringPropertyRNA rna_SpaceUserPreferences_filter_text = {
	{NULL, (PropertyRNA *)&rna_SpaceUserPreferences_filter_type,
	-1, "filter_text", 262145, "Filter",
	"Search term for filtering in the UI",
	0, "*",
	PROP_STRING, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {64, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	SpaceUserPreferences_filter_text_get, SpaceUserPreferences_filter_text_length, SpaceUserPreferences_filter_text_set, NULL, NULL, NULL, 64, ""
};

StructRNA RNA_SpaceUserPreferences = {
	{(ContainerRNA *)&RNA_NodeTreePath, (ContainerRNA *)&RNA_SpaceInfo,
	NULL,
	{(PropertyRNA *)&rna_SpaceUserPreferences_filter_type, (PropertyRNA *)&rna_SpaceUserPreferences_filter_text}},
	"SpaceUserPreferences", NULL, NULL, 4, "Space User Preferences",
	"User preferences space data",
	"*", 17,
	NULL, (PropertyRNA *)&rna_Space_rna_properties,
	&RNA_Space,
	NULL,
	rna_Space_refine,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	{NULL, NULL}
};

/* Node Tree Path */
CollectionPropertyRNA rna_NodeTreePath_rna_properties = {
	{(PropertyRNA *)&rna_NodeTreePath_rna_type, NULL,
	-1, "rna_properties", 128, "Properties",
	"RNA property collection",
	0, "*",
	PROP_COLLECTION, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	NodeTreePath_rna_properties_begin, NodeTreePath_rna_properties_next, NodeTreePath_rna_properties_end, NodeTreePath_rna_properties_get, NULL, NULL, NodeTreePath_rna_properties_lookup_string, NULL, &RNA_Property
};

PointerPropertyRNA rna_NodeTreePath_rna_type = {
	{(PropertyRNA *)&rna_NodeTreePath_node_tree, (PropertyRNA *)&rna_NodeTreePath_rna_properties,
	-1, "rna_type", 8912896, "RNA",
	"RNA type definition",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	NodeTreePath_rna_type_get, NULL, NULL, NULL,&RNA_Struct
};

PointerPropertyRNA rna_NodeTreePath_node_tree = {
	{NULL, (PropertyRNA *)&rna_NodeTreePath_rna_type,
	-1, "node_tree", 8388672, "Node Tree",
	"Base node tree from context",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	NodeTreePath_node_tree_get, NULL, NULL, NULL,&RNA_NodeTree
};

StructRNA RNA_NodeTreePath = {
	{(ContainerRNA *)&RNA_SpaceNodeEditor, (ContainerRNA *)&RNA_SpaceUserPreferences,
	NULL,
	{(PropertyRNA *)&rna_NodeTreePath_rna_properties, (PropertyRNA *)&rna_NodeTreePath_node_tree}},
	"NodeTreePath", NULL, NULL, 4, "Node Tree Path",
	"Element of the node space tree path",
	"*", 17,
	NULL, (PropertyRNA *)&rna_NodeTreePath_rna_properties,
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

/* Space Node Editor */
static EnumPropertyItem rna_SpaceNodeEditor_tree_type_items[2] = {
	{0, "DUMMY", 0, "", ""},
	{0, NULL, 0, NULL, NULL}
};

EnumPropertyRNA rna_SpaceNodeEditor_tree_type = {
	{(PropertyRNA *)&rna_SpaceNodeEditor_texture_type, NULL,
	-1, "tree_type", 3, "Tree Type",
	"Node tree type to display and edit",
	0, "*",
	PROP_ENUM, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 252116992, NULL, NULL,
	0, -1, NULL},
	SpaceNodeEditor_tree_type_get, SpaceNodeEditor_tree_type_set, rna_SpaceNodeEditor_tree_type_itemf, NULL, NULL, NULL, rna_SpaceNodeEditor_tree_type_items, 1, 0
};

static EnumPropertyItem rna_SpaceNodeEditor_texture_type_items[4] = {
	{0, "OBJECT", 159, "Object", "Edit texture nodes from Object"},
	{1, "WORLD", 158, "World", "Edit texture nodes from World"},
	{2, "BRUSH", 182, "Brush", "Edit texture nodes from Brush"},
	{0, NULL, 0, NULL, NULL}
};

EnumPropertyRNA rna_SpaceNodeEditor_texture_type = {
	{(PropertyRNA *)&rna_SpaceNodeEditor_shader_type, (PropertyRNA *)&rna_SpaceNodeEditor_tree_type,
	-1, "texture_type", 3, "Texture Type",
	"Type of data to take texture from",
	0, "*",
	PROP_ENUM, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 252116992, NULL, NULL,
	0, -1, NULL},
	SpaceNodeEditor_texture_type_get, SpaceNodeEditor_texture_type_set, NULL, NULL, NULL, NULL, rna_SpaceNodeEditor_texture_type_items, 3, 0
};

static EnumPropertyItem rna_SpaceNodeEditor_shader_type_items[3] = {
	{0, "OBJECT", 159, "Object", "Edit shader nodes from Object"},
	{1, "WORLD", 158, "World", "Edit shader nodes from World"},
	{0, NULL, 0, NULL, NULL}
};

EnumPropertyRNA rna_SpaceNodeEditor_shader_type = {
	{(PropertyRNA *)&rna_SpaceNodeEditor_id, (PropertyRNA *)&rna_SpaceNodeEditor_texture_type,
	-1, "shader_type", 3, "Shader Type",
	"Type of data to take shader from",
	0, "*",
	PROP_ENUM, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 252116992, NULL, NULL,
	0, -1, NULL},
	SpaceNodeEditor_shader_type_get, SpaceNodeEditor_shader_type_set, NULL, NULL, NULL, NULL, rna_SpaceNodeEditor_shader_type_items, 2, 0
};

PointerPropertyRNA rna_SpaceNodeEditor_id = {
	{(PropertyRNA *)&rna_SpaceNodeEditor_id_from, (PropertyRNA *)&rna_SpaceNodeEditor_shader_type,
	-1, "id", 8388672, "ID",
	"Datablock whose nodes are being edited",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	SpaceNodeEditor_id_get, NULL, NULL, NULL,&RNA_ID
};

PointerPropertyRNA rna_SpaceNodeEditor_id_from = {
	{(PropertyRNA *)&rna_SpaceNodeEditor_path, (PropertyRNA *)&rna_SpaceNodeEditor_id,
	-1, "id_from", 8388672, "ID From",
	"Datablock from which the edited datablock is linked",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	SpaceNodeEditor_id_from_get, NULL, NULL, NULL,&RNA_ID
};

CollectionPropertyRNA rna_SpaceNodeEditor_path = {
	{(PropertyRNA *)&rna_SpaceNodeEditor_node_tree, (PropertyRNA *)&rna_SpaceNodeEditor_id_from,
	-1, "path", 0, "Node Tree Path",
	"Path from the data block to the currently edited node tree",
	0, "*",
	PROP_COLLECTION, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, &RNA_SpaceNodeEditorPath},
	SpaceNodeEditor_path_begin, SpaceNodeEditor_path_next, SpaceNodeEditor_path_end, SpaceNodeEditor_path_get, NULL, SpaceNodeEditor_path_lookup_int, NULL, NULL, &RNA_NodeTreePath
};

PointerPropertyRNA rna_SpaceNodeEditor_node_tree = {
	{(PropertyRNA *)&rna_SpaceNodeEditor_edit_tree, (PropertyRNA *)&rna_SpaceNodeEditor_path,
	-1, "node_tree", 12582977, "Node Tree",
	"Base node tree from context",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	(UpdateFunc)rna_SpaceNodeEditor_node_tree_update, 252116992, NULL, NULL,
	0, -1, NULL},
	SpaceNodeEditor_node_tree_get, SpaceNodeEditor_node_tree_set, NULL, rna_SpaceNodeEditor_node_tree_poll,&RNA_NodeTree
};

PointerPropertyRNA rna_SpaceNodeEditor_edit_tree = {
	{(PropertyRNA *)&rna_SpaceNodeEditor_pin, (PropertyRNA *)&rna_SpaceNodeEditor_node_tree,
	-1, "edit_tree", 8388672, "Edit Tree",
	"Node tree being displayed and edited",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	SpaceNodeEditor_edit_tree_get, NULL, NULL, NULL,&RNA_NodeTree
};

BoolPropertyRNA rna_SpaceNodeEditor_pin = {
	{(PropertyRNA *)&rna_SpaceNodeEditor_show_backdrop, (PropertyRNA *)&rna_SpaceNodeEditor_edit_tree,
	-1, "pin", 4099, "Pinned",
	"Use the pinned node tree",
	42, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 252116992, NULL, NULL,
	0, -1, NULL},
	SpaceNodeEditor_pin_get, SpaceNodeEditor_pin_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_SpaceNodeEditor_show_backdrop = {
	{(PropertyRNA *)&rna_SpaceNodeEditor_show_grease_pencil, (PropertyRNA *)&rna_SpaceNodeEditor_pin,
	-1, "show_backdrop", 3, "Backdrop",
	"Use active Viewer Node output as backdrop for compositing nodes",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_SpaceNodeEditor_show_backdrop_update, 252772352, NULL, NULL,
	0, -1, NULL},
	SpaceNodeEditor_show_backdrop_get, SpaceNodeEditor_show_backdrop_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_SpaceNodeEditor_show_grease_pencil = {
	{(PropertyRNA *)&rna_SpaceNodeEditor_use_auto_render, (PropertyRNA *)&rna_SpaceNodeEditor_show_backdrop,
	-1, "show_grease_pencil", 3, "Show Grease Pencil",
	"Show grease pencil for this view",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 252772352, NULL, NULL,
	0, -1, NULL},
	SpaceNodeEditor_show_grease_pencil_get, SpaceNodeEditor_show_grease_pencil_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_SpaceNodeEditor_use_auto_render = {
	{(PropertyRNA *)&rna_SpaceNodeEditor_backdrop_zoom, (PropertyRNA *)&rna_SpaceNodeEditor_show_grease_pencil,
	-1, "use_auto_render", 3, "Auto Render",
	"Re-render and composite changed layers on 3D edits",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 252772352, NULL, NULL,
	0, -1, NULL},
	SpaceNodeEditor_use_auto_render_get, SpaceNodeEditor_use_auto_render_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

FloatPropertyRNA rna_SpaceNodeEditor_backdrop_zoom = {
	{(PropertyRNA *)&rna_SpaceNodeEditor_backdrop_x, (PropertyRNA *)&rna_SpaceNodeEditor_use_auto_render,
	-1, "backdrop_zoom", 8195, "Backdrop Zoom",
	"Backdrop zoom factor",
	0, "*",
	PROP_FLOAT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 252772352, NULL, NULL,
	offsetof(SpaceNode, zoom), 4, NULL},
	SpaceNodeEditor_backdrop_zoom_get, SpaceNodeEditor_backdrop_zoom_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0099999998f, 100.0f, 0.0099999998f, FLT_MAX, 1.0f, 2, 1.0f, NULL
};

FloatPropertyRNA rna_SpaceNodeEditor_backdrop_x = {
	{(PropertyRNA *)&rna_SpaceNodeEditor_backdrop_y, (PropertyRNA *)&rna_SpaceNodeEditor_backdrop_zoom,
	-1, "backdrop_x", 8195, "Backdrop X",
	"Backdrop X offset",
	0, "*",
	PROP_FLOAT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 252772352, NULL, NULL,
	offsetof(SpaceNode, xof), 4, NULL},
	SpaceNodeEditor_backdrop_x_get, SpaceNodeEditor_backdrop_x_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, -10000.0f, 10000.0f, -FLT_MAX, FLT_MAX, 10.0f, 3, 0.0f, NULL
};

FloatPropertyRNA rna_SpaceNodeEditor_backdrop_y = {
	{(PropertyRNA *)&rna_SpaceNodeEditor_backdrop_channels, (PropertyRNA *)&rna_SpaceNodeEditor_backdrop_x,
	-1, "backdrop_y", 8195, "Backdrop Y",
	"Backdrop Y offset",
	0, "*",
	PROP_FLOAT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 252772352, NULL, NULL,
	offsetof(SpaceNode, yof), 4, NULL},
	SpaceNodeEditor_backdrop_y_get, SpaceNodeEditor_backdrop_y_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, -10000.0f, 10000.0f, -FLT_MAX, FLT_MAX, 10.0f, 3, 0.0f, NULL
};

static EnumPropertyItem rna_SpaceNodeEditor_backdrop_channels_items[7] = {
	{8, "COLOR_ALPHA", 764, "Color and Alpha", "Draw image with RGB colors and alpha transparency"},
	{0, "COLOR", 763, "Color", "Draw image with RGB colors"},
	{16, "ALPHA", 765, "Alpha", "Draw alpha transparency channel"},
	{128, "RED", 331, "Red", ""},
	{256, "GREEN", 332, "Green", ""},
	{512, "BLUE", 333, "Blue", ""},
	{0, NULL, 0, NULL, NULL}
};

EnumPropertyRNA rna_SpaceNodeEditor_backdrop_channels = {
	{(PropertyRNA *)&rna_SpaceNodeEditor_show_highlight, (PropertyRNA *)&rna_SpaceNodeEditor_backdrop_y,
	-1, "backdrop_channels", 3, "Draw Channels",
	"Channels of the image to draw",
	0, "*",
	PROP_ENUM, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 252772352, NULL, NULL,
	0, -1, NULL},
	SpaceNodeEditor_backdrop_channels_get, SpaceNodeEditor_backdrop_channels_set, NULL, NULL, NULL, NULL, rna_SpaceNodeEditor_backdrop_channels_items, 6, 0
};

BoolPropertyRNA rna_SpaceNodeEditor_show_highlight = {
	{(PropertyRNA *)&rna_SpaceNodeEditor_cursor_location, (PropertyRNA *)&rna_SpaceNodeEditor_backdrop_channels,
	-1, "show_highlight", 3, "Highlight",
	"Highlight nodes that are being calculated",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 252772352, NULL, NULL,
	0, -1, NULL},
	SpaceNodeEditor_show_highlight_get, SpaceNodeEditor_show_highlight_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

static float rna_SpaceNodeEditor_cursor_location_default[2] = {
	0.0f,
	0.0f
};

FloatPropertyRNA rna_SpaceNodeEditor_cursor_location = {
	{NULL, (PropertyRNA *)&rna_SpaceNodeEditor_show_highlight,
	-1, "cursor_location", 8195, "Cursor Location",
	"Location for adding new nodes",
	0, "*",
	PROP_FLOAT, PROP_XYZ | PROP_UNIT_NONE, NULL, 1, {2, 0, 0}, 2,
	NULL, 252772352, NULL, NULL,
	offsetof(SpaceNode, cursor), 4, NULL},
	NULL, NULL, SpaceNodeEditor_cursor_location_get, SpaceNodeEditor_cursor_location_set, NULL, NULL, NULL, NULL, NULL, NULL, -10000.0f, 10000.0f, -FLT_MAX, FLT_MAX, 10.0f, 3, 0.0f, rna_SpaceNodeEditor_cursor_location_default
};

IntPropertyRNA rna_SpaceNodeEditor_cursor_location_from_region_x = {
	{(PropertyRNA *)&rna_SpaceNodeEditor_cursor_location_from_region_y, NULL,
	-1, "x", 7, "x",
	"Region x coordinate",
	0, "*",
	PROP_INT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL,
	-10000, 10000, INT_MIN, INT_MAX, 1, 0, NULL
};

IntPropertyRNA rna_SpaceNodeEditor_cursor_location_from_region_y = {
	{NULL, (PropertyRNA *)&rna_SpaceNodeEditor_cursor_location_from_region_x,
	-1, "y", 7, "y",
	"Region y coordinate",
	0, "*",
	PROP_INT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL,
	-10000, 10000, INT_MIN, INT_MAX, 1, 0, NULL
};

FunctionRNA rna_SpaceNodeEditor_cursor_location_from_region_func = {
	{NULL, NULL,
	NULL,
	{(PropertyRNA *)&rna_SpaceNodeEditor_cursor_location_from_region_x, (PropertyRNA *)&rna_SpaceNodeEditor_cursor_location_from_region_y}},
	"cursor_location_from_region", 8, "Set the cursor location using region coordinates",
	SpaceNodeEditor_cursor_location_from_region_call,
	NULL
};

StructRNA RNA_SpaceNodeEditor = {
	{(ContainerRNA *)&RNA_SpaceNodeEditorPath, (ContainerRNA *)&RNA_NodeTreePath,
	NULL,
	{(PropertyRNA *)&rna_SpaceNodeEditor_tree_type, (PropertyRNA *)&rna_SpaceNodeEditor_cursor_location}},
	"SpaceNodeEditor", NULL, NULL, 4, "Space Node Editor",
	"Node editor space data",
	"*", 17,
	NULL, (PropertyRNA *)&rna_Space_rna_properties,
	&RNA_Space,
	NULL,
	rna_Space_refine,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	{(FunctionRNA *)&rna_SpaceNodeEditor_cursor_location_from_region_func, (FunctionRNA *)&rna_SpaceNodeEditor_cursor_location_from_region_func}
};

/* Path */
CollectionPropertyRNA rna_SpaceNodeEditorPath_rna_properties = {
	{(PropertyRNA *)&rna_SpaceNodeEditorPath_rna_type, NULL,
	-1, "rna_properties", 128, "Properties",
	"RNA property collection",
	0, "*",
	PROP_COLLECTION, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	SpaceNodeEditorPath_rna_properties_begin, SpaceNodeEditorPath_rna_properties_next, SpaceNodeEditorPath_rna_properties_end, SpaceNodeEditorPath_rna_properties_get, NULL, NULL, SpaceNodeEditorPath_rna_properties_lookup_string, NULL, &RNA_Property
};

PointerPropertyRNA rna_SpaceNodeEditorPath_rna_type = {
	{(PropertyRNA *)&rna_SpaceNodeEditorPath_to_string, (PropertyRNA *)&rna_SpaceNodeEditorPath_rna_properties,
	-1, "rna_type", 8912896, "RNA",
	"RNA type definition",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	SpaceNodeEditorPath_rna_type_get, NULL, NULL, NULL,&RNA_Struct
};

StringPropertyRNA rna_SpaceNodeEditorPath_to_string = {
	{NULL, (PropertyRNA *)&rna_SpaceNodeEditorPath_rna_type,
	-1, "to_string", 262144, "to_string",
	"",
	0, "*",
	PROP_STRING, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	SpaceNodeEditorPath_to_string_get, SpaceNodeEditorPath_to_string_length, NULL, NULL, NULL, NULL, 0, ""
};

FunctionRNA rna_SpaceNodeEditorPath_clear_func = {
	{(FunctionRNA *)&rna_SpaceNodeEditorPath_start_func, NULL,
	NULL,
	{NULL, NULL}},
	"clear", 8, "Reset the node tree path",
	SpaceNodeEditorPath_clear_call,
	NULL
};

PointerPropertyRNA rna_SpaceNodeEditorPath_start_node_tree = {
	{NULL, NULL,
	-1, "node_tree", 8390660, "Node Tree",
	"",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	NULL, NULL, NULL, NULL,&RNA_NodeTree
};

FunctionRNA rna_SpaceNodeEditorPath_start_func = {
	{(FunctionRNA *)&rna_SpaceNodeEditorPath_append_func, (FunctionRNA *)&rna_SpaceNodeEditorPath_clear_func,
	NULL,
	{(PropertyRNA *)&rna_SpaceNodeEditorPath_start_node_tree, (PropertyRNA *)&rna_SpaceNodeEditorPath_start_node_tree}},
	"start", 8, "Set the root node tree",
	SpaceNodeEditorPath_start_call,
	NULL
};

PointerPropertyRNA rna_SpaceNodeEditorPath_append_node_tree = {
	{(PropertyRNA *)&rna_SpaceNodeEditorPath_append_node, NULL,
	-1, "node_tree", 8390660, "Node Tree",
	"Node tree to append to the node editor path",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	NULL, NULL, NULL, NULL,&RNA_NodeTree
};

PointerPropertyRNA rna_SpaceNodeEditorPath_append_node = {
	{NULL, (PropertyRNA *)&rna_SpaceNodeEditorPath_append_node_tree,
	-1, "node", 8390656, "Node",
	"Group node linking to this node tree",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	NULL, NULL, NULL, NULL,&RNA_Node
};

FunctionRNA rna_SpaceNodeEditorPath_append_func = {
	{(FunctionRNA *)&rna_SpaceNodeEditorPath_pop_func, (FunctionRNA *)&rna_SpaceNodeEditorPath_start_func,
	NULL,
	{(PropertyRNA *)&rna_SpaceNodeEditorPath_append_node_tree, (PropertyRNA *)&rna_SpaceNodeEditorPath_append_node}},
	"append", 8, "Append a node group tree to the path",
	SpaceNodeEditorPath_append_call,
	NULL
};

FunctionRNA rna_SpaceNodeEditorPath_pop_func = {
	{NULL, (FunctionRNA *)&rna_SpaceNodeEditorPath_append_func,
	NULL,
	{NULL, NULL}},
	"pop", 8, "Remove the last node tree from the path",
	SpaceNodeEditorPath_pop_call,
	NULL
};

StructRNA RNA_SpaceNodeEditorPath = {
	{(ContainerRNA *)&RNA_SpaceLogicEditor, (ContainerRNA *)&RNA_SpaceNodeEditor,
	NULL,
	{(PropertyRNA *)&rna_SpaceNodeEditorPath_rna_properties, (PropertyRNA *)&rna_SpaceNodeEditorPath_to_string}},
	"SpaceNodeEditorPath", NULL, NULL, 4, "Path",
	"Get the node tree path as a string",
	"*", 17,
	NULL, (PropertyRNA *)&rna_SpaceNodeEditorPath_rna_properties,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	{(FunctionRNA *)&rna_SpaceNodeEditorPath_clear_func, (FunctionRNA *)&rna_SpaceNodeEditorPath_pop_func}
};

/* Space Logic Editor */
BoolPropertyRNA rna_SpaceLogicEditor_show_sensors_selected_objects = {
	{(PropertyRNA *)&rna_SpaceLogicEditor_show_sensors_active_object, NULL,
	-1, "show_sensors_selected_objects", 3, "Show Selected Object",
	"Show sensors of all selected objects",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 318767104, NULL, NULL,
	0, -1, NULL},
	SpaceLogicEditor_show_sensors_selected_objects_get, SpaceLogicEditor_show_sensors_selected_objects_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_SpaceLogicEditor_show_sensors_active_object = {
	{(PropertyRNA *)&rna_SpaceLogicEditor_show_sensors_linked_controller, (PropertyRNA *)&rna_SpaceLogicEditor_show_sensors_selected_objects,
	-1, "show_sensors_active_object", 3, "Show Active Object",
	"Show sensors of active object",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 318767104, NULL, NULL,
	0, -1, NULL},
	SpaceLogicEditor_show_sensors_active_object_get, SpaceLogicEditor_show_sensors_active_object_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_SpaceLogicEditor_show_sensors_linked_controller = {
	{(PropertyRNA *)&rna_SpaceLogicEditor_show_sensors_active_states, (PropertyRNA *)&rna_SpaceLogicEditor_show_sensors_active_object,
	-1, "show_sensors_linked_controller", 3, "Show Linked to Controller",
	"Show linked objects to the controller",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 318767104, NULL, NULL,
	0, -1, NULL},
	SpaceLogicEditor_show_sensors_linked_controller_get, SpaceLogicEditor_show_sensors_linked_controller_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_SpaceLogicEditor_show_sensors_active_states = {
	{(PropertyRNA *)&rna_SpaceLogicEditor_show_controllers_selected_objects, (PropertyRNA *)&rna_SpaceLogicEditor_show_sensors_linked_controller,
	-1, "show_sensors_active_states", 3, "Show Active States",
	"Show only sensors connected to active states",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 318767104, NULL, NULL,
	0, -1, NULL},
	SpaceLogicEditor_show_sensors_active_states_get, SpaceLogicEditor_show_sensors_active_states_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_SpaceLogicEditor_show_controllers_selected_objects = {
	{(PropertyRNA *)&rna_SpaceLogicEditor_show_controllers_active_object, (PropertyRNA *)&rna_SpaceLogicEditor_show_sensors_active_states,
	-1, "show_controllers_selected_objects", 3, "Show Selected Object",
	"Show controllers of all selected objects",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 318767104, NULL, NULL,
	0, -1, NULL},
	SpaceLogicEditor_show_controllers_selected_objects_get, SpaceLogicEditor_show_controllers_selected_objects_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_SpaceLogicEditor_show_controllers_active_object = {
	{(PropertyRNA *)&rna_SpaceLogicEditor_show_controllers_linked_controller, (PropertyRNA *)&rna_SpaceLogicEditor_show_controllers_selected_objects,
	-1, "show_controllers_active_object", 3, "Show Active Object",
	"Show controllers of active object",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 318767104, NULL, NULL,
	0, -1, NULL},
	SpaceLogicEditor_show_controllers_active_object_get, SpaceLogicEditor_show_controllers_active_object_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_SpaceLogicEditor_show_controllers_linked_controller = {
	{(PropertyRNA *)&rna_SpaceLogicEditor_show_actuators_selected_objects, (PropertyRNA *)&rna_SpaceLogicEditor_show_controllers_active_object,
	-1, "show_controllers_linked_controller", 3, "Show Linked to Controller",
	"Show linked objects to sensor/actuator",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 318767104, NULL, NULL,
	0, -1, NULL},
	SpaceLogicEditor_show_controllers_linked_controller_get, SpaceLogicEditor_show_controllers_linked_controller_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_SpaceLogicEditor_show_actuators_selected_objects = {
	{(PropertyRNA *)&rna_SpaceLogicEditor_show_actuators_active_object, (PropertyRNA *)&rna_SpaceLogicEditor_show_controllers_linked_controller,
	-1, "show_actuators_selected_objects", 3, "Show Selected Object",
	"Show actuators of all selected objects",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 318767104, NULL, NULL,
	0, -1, NULL},
	SpaceLogicEditor_show_actuators_selected_objects_get, SpaceLogicEditor_show_actuators_selected_objects_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_SpaceLogicEditor_show_actuators_active_object = {
	{(PropertyRNA *)&rna_SpaceLogicEditor_show_actuators_linked_controller, (PropertyRNA *)&rna_SpaceLogicEditor_show_actuators_selected_objects,
	-1, "show_actuators_active_object", 3, "Show Active Object",
	"Show actuators of active object",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 318767104, NULL, NULL,
	0, -1, NULL},
	SpaceLogicEditor_show_actuators_active_object_get, SpaceLogicEditor_show_actuators_active_object_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_SpaceLogicEditor_show_actuators_linked_controller = {
	{(PropertyRNA *)&rna_SpaceLogicEditor_show_actuators_active_states, (PropertyRNA *)&rna_SpaceLogicEditor_show_actuators_active_object,
	-1, "show_actuators_linked_controller", 3, "Show Linked to Actuator",
	"Show linked objects to the actuator",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 318767104, NULL, NULL,
	0, -1, NULL},
	SpaceLogicEditor_show_actuators_linked_controller_get, SpaceLogicEditor_show_actuators_linked_controller_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_SpaceLogicEditor_show_actuators_active_states = {
	{NULL, (PropertyRNA *)&rna_SpaceLogicEditor_show_actuators_linked_controller,
	-1, "show_actuators_active_states", 3, "Show Active States",
	"Show only actuators connected to active states",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 318767104, NULL, NULL,
	0, -1, NULL},
	SpaceLogicEditor_show_actuators_active_states_get, SpaceLogicEditor_show_actuators_active_states_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

StructRNA RNA_SpaceLogicEditor = {
	{(ContainerRNA *)&RNA_SpaceClipEditor, (ContainerRNA *)&RNA_SpaceNodeEditorPath,
	NULL,
	{(PropertyRNA *)&rna_SpaceLogicEditor_show_sensors_selected_objects, (PropertyRNA *)&rna_SpaceLogicEditor_show_actuators_active_states}},
	"SpaceLogicEditor", NULL, NULL, 4, "Space Logic Editor",
	"Logic editor space data",
	"*", 17,
	NULL, (PropertyRNA *)&rna_Space_rna_properties,
	&RNA_Space,
	NULL,
	rna_Space_refine,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	{NULL, NULL}
};

/* Space Clip Editor */
PointerPropertyRNA rna_SpaceClipEditor_clip = {
	{(PropertyRNA *)&rna_SpaceClipEditor_clip_user, NULL,
	-1, "clip", 8388673, "Movie Clip",
	"Movie clip displayed and edited in this space",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 252903424, NULL, NULL,
	0, -1, NULL},
	SpaceClipEditor_clip_get, SpaceClipEditor_clip_set, NULL, NULL,&RNA_MovieClip
};

PointerPropertyRNA rna_SpaceClipEditor_clip_user = {
	{(PropertyRNA *)&rna_SpaceClipEditor_mask, (PropertyRNA *)&rna_SpaceClipEditor_clip,
	-1, "clip_user", 8650752, "Movie Clip User",
	"Parameters defining which frame of the movie clip is displayed",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 252903424, NULL, NULL,
	0, -1, NULL},
	SpaceClipEditor_clip_user_get, NULL, NULL, NULL,&RNA_MovieClipUser
};

PointerPropertyRNA rna_SpaceClipEditor_mask = {
	{(PropertyRNA *)&rna_SpaceClipEditor_mask_draw_type, (PropertyRNA *)&rna_SpaceClipEditor_clip_user,
	-1, "mask", 8388673, "Mask",
	"Mask displayed and edited in this space",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 252903424, NULL, NULL,
	0, -1, NULL},
	SpaceClipEditor_mask_get, SpaceClipEditor_mask_set, NULL, NULL,&RNA_Mask
};

static EnumPropertyItem rna_SpaceClipEditor_mask_draw_type_items[5] = {
	{0, "OUTLINE", 0, "Outline", "Draw white edges with black outline"},
	{1, "DASH", 0, "Dash", "Draw dashed black-white edges"},
	{2, "BLACK", 0, "Black", "Draw black edges"},
	{3, "WHITE", 0, "White", "Draw white edges"},
	{0, NULL, 0, NULL, NULL}
};

EnumPropertyRNA rna_SpaceClipEditor_mask_draw_type = {
	{(PropertyRNA *)&rna_SpaceClipEditor_show_mask_smooth, (PropertyRNA *)&rna_SpaceClipEditor_mask,
	-1, "mask_draw_type", 3, "Edge Draw Type",
	"Draw type for mask splines",
	0, "*",
	PROP_ENUM, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 252903424, NULL, NULL,
	0, -1, NULL},
	SpaceClipEditor_mask_draw_type_get, SpaceClipEditor_mask_draw_type_set, NULL, NULL, NULL, NULL, rna_SpaceClipEditor_mask_draw_type_items, 4, 0
};

BoolPropertyRNA rna_SpaceClipEditor_show_mask_smooth = {
	{(PropertyRNA *)&rna_SpaceClipEditor_show_mask_overlay, (PropertyRNA *)&rna_SpaceClipEditor_mask_draw_type,
	-1, "show_mask_smooth", 3, "Draw Smooth Splines",
	"",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 252903424, NULL, NULL,
	0, -1, NULL},
	SpaceClipEditor_show_mask_smooth_get, SpaceClipEditor_show_mask_smooth_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_SpaceClipEditor_show_mask_overlay = {
	{(PropertyRNA *)&rna_SpaceClipEditor_mask_overlay_mode, (PropertyRNA *)&rna_SpaceClipEditor_show_mask_smooth,
	-1, "show_mask_overlay", 3, "Show Mask Overlay",
	"",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 252903424, NULL, NULL,
	0, -1, NULL},
	SpaceClipEditor_show_mask_overlay_get, SpaceClipEditor_show_mask_overlay_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

static EnumPropertyItem rna_SpaceClipEditor_mask_overlay_mode_items[3] = {
	{0, "ALPHACHANNEL", 0, "Alpha Channel", "Show alpha channel of the mask"},
	{1, "COMBINED", 0, "Combined", "Combine space background image with the mask"},
	{0, NULL, 0, NULL, NULL}
};

EnumPropertyRNA rna_SpaceClipEditor_mask_overlay_mode = {
	{(PropertyRNA *)&rna_SpaceClipEditor_mode, (PropertyRNA *)&rna_SpaceClipEditor_show_mask_overlay,
	-1, "mask_overlay_mode", 3, "Overlay Mode",
	"Overlay mode of rasterized mask",
	0, "*",
	PROP_ENUM, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 252903424, NULL, NULL,
	0, -1, NULL},
	SpaceClipEditor_mask_overlay_mode_get, SpaceClipEditor_mask_overlay_mode_set, NULL, NULL, NULL, NULL, rna_SpaceClipEditor_mask_overlay_mode_items, 2, 0
};

static EnumPropertyItem rna_SpaceClipEditor_mode_items[3] = {
	{0, "TRACKING", 167, "Tracking", "Show tracking and solving tools"},
	{3, "MASK", 467, "Mask", "Show mask editing tools"},
	{0, NULL, 0, NULL, NULL}
};

EnumPropertyRNA rna_SpaceClipEditor_mode = {
	{(PropertyRNA *)&rna_SpaceClipEditor_view, (PropertyRNA *)&rna_SpaceClipEditor_mask_overlay_mode,
	-1, "mode", 3, "Mode",
	"Editing context being displayed",
	0, "*",
	PROP_ENUM, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_SpaceClipEditor_clip_mode_update, 252903424, NULL, NULL,
	0, -1, NULL},
	SpaceClipEditor_mode_get, SpaceClipEditor_mode_set, NULL, NULL, NULL, NULL, rna_SpaceClipEditor_mode_items, 2, 0
};

static EnumPropertyItem rna_SpaceClipEditor_view_items[4] = {
	{0, "CLIP", 111, "Clip", "Show editing clip preview"},
	{1, "GRAPH", 105, "Graph", "Show graph view for active element"},
	{2, "DOPESHEET", 115, "Dopesheet", "Dopesheet view for tracking data"},
	{0, NULL, 0, NULL, NULL}
};

EnumPropertyRNA rna_SpaceClipEditor_view = {
	{(PropertyRNA *)&rna_SpaceClipEditor_show_marker_pattern, (PropertyRNA *)&rna_SpaceClipEditor_mode,
	-1, "view", 3, "View",
	"Type of the clip editor view",
	0, "MovieClip",
	PROP_ENUM, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_SpaceClipEditor_view_type_update, 252903424, NULL, NULL,
	0, -1, NULL},
	SpaceClipEditor_view_get, SpaceClipEditor_view_set, NULL, NULL, NULL, NULL, rna_SpaceClipEditor_view_items, 3, 0
};

BoolPropertyRNA rna_SpaceClipEditor_show_marker_pattern = {
	{(PropertyRNA *)&rna_SpaceClipEditor_show_marker_search, (PropertyRNA *)&rna_SpaceClipEditor_view,
	-1, "show_marker_pattern", 3, "Show Marker Pattern",
	"Show pattern boundbox for markers",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 252903424, NULL, NULL,
	0, -1, NULL},
	SpaceClipEditor_show_marker_pattern_get, SpaceClipEditor_show_marker_pattern_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_SpaceClipEditor_show_marker_search = {
	{(PropertyRNA *)&rna_SpaceClipEditor_lock_selection, (PropertyRNA *)&rna_SpaceClipEditor_show_marker_pattern,
	-1, "show_marker_search", 3, "Show Marker Search",
	"Show search boundbox for markers",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 252903424, NULL, NULL,
	0, -1, NULL},
	SpaceClipEditor_show_marker_search_get, SpaceClipEditor_show_marker_search_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_SpaceClipEditor_lock_selection = {
	{(PropertyRNA *)&rna_SpaceClipEditor_lock_time_cursor, (PropertyRNA *)&rna_SpaceClipEditor_show_marker_search,
	-1, "lock_selection", 3, "Lock to Selection",
	"Lock viewport to selected markers during playback",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_SpaceClipEditor_lock_selection_update, 252903424, NULL, NULL,
	0, -1, NULL},
	SpaceClipEditor_lock_selection_get, SpaceClipEditor_lock_selection_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_SpaceClipEditor_lock_time_cursor = {
	{(PropertyRNA *)&rna_SpaceClipEditor_show_track_path, (PropertyRNA *)&rna_SpaceClipEditor_lock_selection,
	-1, "lock_time_cursor", 3, "Lock to Time Cursor",
	"Lock curves view to time cursor during playback and tracking",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 252903424, NULL, NULL,
	0, -1, NULL},
	SpaceClipEditor_lock_time_cursor_get, SpaceClipEditor_lock_time_cursor_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_SpaceClipEditor_show_track_path = {
	{(PropertyRNA *)&rna_SpaceClipEditor_path_length, (PropertyRNA *)&rna_SpaceClipEditor_lock_time_cursor,
	-1, "show_track_path", 3, "Show Track Path",
	"Show path of how track moves",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 252903424, NULL, NULL,
	0, -1, NULL},
	SpaceClipEditor_show_track_path_get, SpaceClipEditor_show_track_path_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

IntPropertyRNA rna_SpaceClipEditor_path_length = {
	{(PropertyRNA *)&rna_SpaceClipEditor_show_tiny_markers, (PropertyRNA *)&rna_SpaceClipEditor_show_track_path,
	-1, "path_length", 8195, "Path Length",
	"Length of displaying path, in frames",
	0, "*",
	PROP_INT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 252903424, NULL, NULL,
	offsetof(SpaceClip, path_length), 0, NULL},
	SpaceClipEditor_path_length_get, SpaceClipEditor_path_length_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL,
	0, 50, 0, 50, 1, 0, NULL
};

BoolPropertyRNA rna_SpaceClipEditor_show_tiny_markers = {
	{(PropertyRNA *)&rna_SpaceClipEditor_show_bundles, (PropertyRNA *)&rna_SpaceClipEditor_path_length,
	-1, "show_tiny_markers", 3, "Show Tiny Markers",
	"Show markers in a more compact manner",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 252903424, NULL, NULL,
	0, -1, NULL},
	SpaceClipEditor_show_tiny_markers_get, SpaceClipEditor_show_tiny_markers_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_SpaceClipEditor_show_bundles = {
	{(PropertyRNA *)&rna_SpaceClipEditor_use_mute_footage, (PropertyRNA *)&rna_SpaceClipEditor_show_tiny_markers,
	-1, "show_bundles", 3, "Show Bundles",
	"Show projection of 3D markers into footage",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 252903424, NULL, NULL,
	0, -1, NULL},
	SpaceClipEditor_show_bundles_get, SpaceClipEditor_show_bundles_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_SpaceClipEditor_use_mute_footage = {
	{(PropertyRNA *)&rna_SpaceClipEditor_show_disabled, (PropertyRNA *)&rna_SpaceClipEditor_show_bundles,
	-1, "use_mute_footage", 3, "Mute Footage",
	"Mute footage and show black background instead",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 252903424, NULL, NULL,
	0, -1, NULL},
	SpaceClipEditor_use_mute_footage_get, SpaceClipEditor_use_mute_footage_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_SpaceClipEditor_show_disabled = {
	{(PropertyRNA *)&rna_SpaceClipEditor_scopes, (PropertyRNA *)&rna_SpaceClipEditor_use_mute_footage,
	-1, "show_disabled", 3, "Show Disabled",
	"Show disabled tracks from the footage",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 252903424, NULL, NULL,
	0, -1, NULL},
	SpaceClipEditor_show_disabled_get, SpaceClipEditor_show_disabled_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

PointerPropertyRNA rna_SpaceClipEditor_scopes = {
	{(PropertyRNA *)&rna_SpaceClipEditor_show_names, (PropertyRNA *)&rna_SpaceClipEditor_show_disabled,
	-1, "scopes", 8388608, "Scopes",
	"Scopes to visualize movie clip statistics",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	SpaceClipEditor_scopes_get, NULL, NULL, NULL,&RNA_MovieClipScopes
};

BoolPropertyRNA rna_SpaceClipEditor_show_names = {
	{(PropertyRNA *)&rna_SpaceClipEditor_show_grid, (PropertyRNA *)&rna_SpaceClipEditor_scopes,
	-1, "show_names", 3, "Show Names",
	"Show track names and status",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 252903424, NULL, NULL,
	0, -1, NULL},
	SpaceClipEditor_show_names_get, SpaceClipEditor_show_names_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_SpaceClipEditor_show_grid = {
	{(PropertyRNA *)&rna_SpaceClipEditor_show_stable, (PropertyRNA *)&rna_SpaceClipEditor_show_names,
	-1, "show_grid", 3, "Show Grid",
	"Show grid showing lens distortion",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 252903424, NULL, NULL,
	0, -1, NULL},
	SpaceClipEditor_show_grid_get, SpaceClipEditor_show_grid_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_SpaceClipEditor_show_stable = {
	{(PropertyRNA *)&rna_SpaceClipEditor_use_manual_calibration, (PropertyRNA *)&rna_SpaceClipEditor_show_grid,
	-1, "show_stable", 3, "Show Stable",
	"Show stable footage in editor (if stabilization is enabled)",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 252903424, NULL, NULL,
	0, -1, NULL},
	SpaceClipEditor_show_stable_get, SpaceClipEditor_show_stable_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_SpaceClipEditor_use_manual_calibration = {
	{(PropertyRNA *)&rna_SpaceClipEditor_show_grease_pencil, (PropertyRNA *)&rna_SpaceClipEditor_show_stable,
	-1, "use_manual_calibration", 3, "Manual Calibration",
	"Use manual calibration helpers",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 252903424, NULL, NULL,
	0, -1, NULL},
	SpaceClipEditor_use_manual_calibration_get, SpaceClipEditor_use_manual_calibration_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_SpaceClipEditor_show_grease_pencil = {
	{(PropertyRNA *)&rna_SpaceClipEditor_show_filters, (PropertyRNA *)&rna_SpaceClipEditor_use_manual_calibration,
	-1, "show_grease_pencil", 3, "Show Grease Pencil",
	"Show grease pencil for this view",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 252903424, NULL, NULL,
	0, -1, NULL},
	SpaceClipEditor_show_grease_pencil_get, SpaceClipEditor_show_grease_pencil_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_SpaceClipEditor_show_filters = {
	{(PropertyRNA *)&rna_SpaceClipEditor_show_graph_frames, (PropertyRNA *)&rna_SpaceClipEditor_show_grease_pencil,
	-1, "show_filters", 3, "Show Filters",
	"Show filters for graph editor",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 252903424, NULL, NULL,
	0, -1, NULL},
	SpaceClipEditor_show_filters_get, SpaceClipEditor_show_filters_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_SpaceClipEditor_show_graph_frames = {
	{(PropertyRNA *)&rna_SpaceClipEditor_show_graph_tracks_motion, (PropertyRNA *)&rna_SpaceClipEditor_show_filters,
	-1, "show_graph_frames", 3, "Show Frames",
	"Show curve for per-frame average error (camera motion should be solved first)",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 252903424, NULL, NULL,
	0, -1, NULL},
	SpaceClipEditor_show_graph_frames_get, SpaceClipEditor_show_graph_frames_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_SpaceClipEditor_show_graph_tracks_motion = {
	{(PropertyRNA *)&rna_SpaceClipEditor_show_graph_tracks_error, (PropertyRNA *)&rna_SpaceClipEditor_show_graph_frames,
	-1, "show_graph_tracks_motion", 3, "Show Tracks Motion",
	"Display the speed curves (in \"x\" direction red, in \"y\" direction green) for the selected tracks",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 252903424, NULL, NULL,
	0, -1, NULL},
	SpaceClipEditor_show_graph_tracks_motion_get, SpaceClipEditor_show_graph_tracks_motion_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_SpaceClipEditor_show_graph_tracks_error = {
	{(PropertyRNA *)&rna_SpaceClipEditor_show_graph_only_selected, (PropertyRNA *)&rna_SpaceClipEditor_show_graph_tracks_motion,
	-1, "show_graph_tracks_error", 3, "Show Tracks Error",
	"Display the reprojection error curve for selected tracks",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 252903424, NULL, NULL,
	0, -1, NULL},
	SpaceClipEditor_show_graph_tracks_error_get, SpaceClipEditor_show_graph_tracks_error_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_SpaceClipEditor_show_graph_only_selected = {
	{(PropertyRNA *)&rna_SpaceClipEditor_show_graph_hidden, (PropertyRNA *)&rna_SpaceClipEditor_show_graph_tracks_error,
	-1, "show_graph_only_selected", 3, "Only Selected",
	"Only include channels relating to selected objects and data",
	255, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 252903424, NULL, NULL,
	0, -1, NULL},
	SpaceClipEditor_show_graph_only_selected_get, SpaceClipEditor_show_graph_only_selected_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_SpaceClipEditor_show_graph_hidden = {
	{(PropertyRNA *)&rna_SpaceClipEditor_show_red_channel, (PropertyRNA *)&rna_SpaceClipEditor_show_graph_only_selected,
	-1, "show_graph_hidden", 3, "Display Hidden",
	"Include channels from objects/bone that aren\'t visible",
	53, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 252903424, NULL, NULL,
	0, -1, NULL},
	SpaceClipEditor_show_graph_hidden_get, SpaceClipEditor_show_graph_hidden_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_SpaceClipEditor_show_red_channel = {
	{(PropertyRNA *)&rna_SpaceClipEditor_show_green_channel, (PropertyRNA *)&rna_SpaceClipEditor_show_graph_hidden,
	-1, "show_red_channel", 3, "Show Red Channel",
	"Show red channel in the frame",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 252903424, NULL, NULL,
	0, -1, NULL},
	SpaceClipEditor_show_red_channel_get, SpaceClipEditor_show_red_channel_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_SpaceClipEditor_show_green_channel = {
	{(PropertyRNA *)&rna_SpaceClipEditor_show_blue_channel, (PropertyRNA *)&rna_SpaceClipEditor_show_red_channel,
	-1, "show_green_channel", 3, "Show Green Channel",
	"Show green channel in the frame",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 252903424, NULL, NULL,
	0, -1, NULL},
	SpaceClipEditor_show_green_channel_get, SpaceClipEditor_show_green_channel_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_SpaceClipEditor_show_blue_channel = {
	{(PropertyRNA *)&rna_SpaceClipEditor_use_grayscale_preview, (PropertyRNA *)&rna_SpaceClipEditor_show_green_channel,
	-1, "show_blue_channel", 3, "Show Blue Channel",
	"Show blue channel in the frame",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 252903424, NULL, NULL,
	0, -1, NULL},
	SpaceClipEditor_show_blue_channel_get, SpaceClipEditor_show_blue_channel_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_SpaceClipEditor_use_grayscale_preview = {
	{(PropertyRNA *)&rna_SpaceClipEditor_show_seconds, (PropertyRNA *)&rna_SpaceClipEditor_show_blue_channel,
	-1, "use_grayscale_preview", 3, "Grayscale",
	"Display frame in grayscale mode",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 338886656, NULL, NULL,
	0, -1, NULL},
	SpaceClipEditor_use_grayscale_preview_get, SpaceClipEditor_use_grayscale_preview_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_SpaceClipEditor_show_seconds = {
	{(PropertyRNA *)&rna_SpaceClipEditor_grease_pencil_source, (PropertyRNA *)&rna_SpaceClipEditor_use_grayscale_preview,
	-1, "show_seconds", 3, "Show Seconds",
	"Show timing in seconds not frames",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 338886656, NULL, NULL,
	0, -1, NULL},
	SpaceClipEditor_show_seconds_get, SpaceClipEditor_show_seconds_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

static EnumPropertyItem rna_SpaceClipEditor_grease_pencil_source_items[3] = {
	{0, "CLIP", 0, "Clip", "Show grease pencil datablock which belongs to movie clip"},
	{1, "TRACK", 0, "Track", "Show grease pencil datablock which belongs to active track"},
	{0, NULL, 0, NULL, NULL}
};

EnumPropertyRNA rna_SpaceClipEditor_grease_pencil_source = {
	{(PropertyRNA *)&rna_SpaceClipEditor_pivot_point, (PropertyRNA *)&rna_SpaceClipEditor_show_seconds,
	-1, "grease_pencil_source", 3, "Grease Pencil Source",
	"Where the grease pencil comes from",
	0, "MovieClip",
	PROP_ENUM, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 338886656, NULL, NULL,
	0, -1, NULL},
	SpaceClipEditor_grease_pencil_source_get, SpaceClipEditor_grease_pencil_source_set, NULL, NULL, NULL, NULL, rna_SpaceClipEditor_grease_pencil_source_items, 2, 0
};

static EnumPropertyItem rna_SpaceClipEditor_pivot_point_items[5] = {
	{0, "BOUNDING_BOX_CENTER", 551, "Bounding Box Center", "Pivot around bounding box center of selected object(s)"},
	{1, "CURSOR", 552, "2D Cursor", "Pivot around the 2D cursor"},
	{2, "INDIVIDUAL_ORIGINS", 553, "Individual Origins", "Pivot around each object\'s own origin"},
	{3, "MEDIAN_POINT", 554, "Median Point", "Pivot around the median point of selected objects"},
	{0, NULL, 0, NULL, NULL}
};

EnumPropertyRNA rna_SpaceClipEditor_pivot_point = {
	{NULL, (PropertyRNA *)&rna_SpaceClipEditor_grease_pencil_source,
	-1, "pivot_point", 3, "Pivot Point",
	"Pivot center for rotation/scaling",
	0, "*",
	PROP_ENUM, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 252903424, NULL, NULL,
	0, -1, NULL},
	SpaceClipEditor_pivot_point_get, SpaceClipEditor_pivot_point_set, NULL, NULL, NULL, NULL, rna_SpaceClipEditor_pivot_point_items, 4, 0
};

StructRNA RNA_SpaceClipEditor = {
	{(ContainerRNA *)&RNA_Speaker, (ContainerRNA *)&RNA_SpaceLogicEditor,
	NULL,
	{(PropertyRNA *)&rna_SpaceClipEditor_clip, (PropertyRNA *)&rna_SpaceClipEditor_pivot_point}},
	"SpaceClipEditor", NULL, NULL, 4, "Space Clip Editor",
	"Clip editor space data",
	"*", 17,
	NULL, (PropertyRNA *)&rna_Space_rna_properties,
	&RNA_Space,
	NULL,
	rna_Space_refine,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	{NULL, NULL}
};

