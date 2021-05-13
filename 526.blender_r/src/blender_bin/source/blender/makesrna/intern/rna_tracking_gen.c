
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

#include "rna_tracking.c"

#pragma GCC diagnostic ignored "-Wunused-parameter"

/* Autogenerated Functions */


CollectionPropertyRNA rna_MovieTrackingSettings_rna_properties;
PointerPropertyRNA rna_MovieTrackingSettings_rna_type;
EnumPropertyRNA rna_MovieTrackingSettings_speed;
BoolPropertyRNA rna_MovieTrackingSettings_use_keyframe_selection;
EnumPropertyRNA rna_MovieTrackingSettings_refine_intrinsics;
FloatPropertyRNA rna_MovieTrackingSettings_distance;
IntPropertyRNA rna_MovieTrackingSettings_clean_frames;
FloatPropertyRNA rna_MovieTrackingSettings_clean_error;
EnumPropertyRNA rna_MovieTrackingSettings_clean_action;
BoolPropertyRNA rna_MovieTrackingSettings_show_default_expanded;
BoolPropertyRNA rna_MovieTrackingSettings_show_extra_expanded;
BoolPropertyRNA rna_MovieTrackingSettings_use_tripod_solver;
IntPropertyRNA rna_MovieTrackingSettings_default_frames_limit;
EnumPropertyRNA rna_MovieTrackingSettings_default_pattern_match;
IntPropertyRNA rna_MovieTrackingSettings_default_margin;
EnumPropertyRNA rna_MovieTrackingSettings_default_motion_model;
BoolPropertyRNA rna_MovieTrackingSettings_use_default_brute;
BoolPropertyRNA rna_MovieTrackingSettings_use_default_mask;
BoolPropertyRNA rna_MovieTrackingSettings_use_default_normalization;
FloatPropertyRNA rna_MovieTrackingSettings_default_correlation_min;
IntPropertyRNA rna_MovieTrackingSettings_default_pattern_size;
IntPropertyRNA rna_MovieTrackingSettings_default_search_size;
BoolPropertyRNA rna_MovieTrackingSettings_use_default_red_channel;
BoolPropertyRNA rna_MovieTrackingSettings_use_default_green_channel;
BoolPropertyRNA rna_MovieTrackingSettings_use_default_blue_channel;
FloatPropertyRNA rna_MovieTrackingSettings_default_weight;
FloatPropertyRNA rna_MovieTrackingSettings_object_distance;


CollectionPropertyRNA rna_MovieTrackingCamera_rna_properties;
PointerPropertyRNA rna_MovieTrackingCamera_rna_type;
EnumPropertyRNA rna_MovieTrackingCamera_distortion_model;
FloatPropertyRNA rna_MovieTrackingCamera_sensor_width;
FloatPropertyRNA rna_MovieTrackingCamera_focal_length;
FloatPropertyRNA rna_MovieTrackingCamera_focal_length_pixels;
EnumPropertyRNA rna_MovieTrackingCamera_units;
FloatPropertyRNA rna_MovieTrackingCamera_principal;
FloatPropertyRNA rna_MovieTrackingCamera_k1;
FloatPropertyRNA rna_MovieTrackingCamera_k2;
FloatPropertyRNA rna_MovieTrackingCamera_k3;
FloatPropertyRNA rna_MovieTrackingCamera_division_k1;
FloatPropertyRNA rna_MovieTrackingCamera_division_k2;
FloatPropertyRNA rna_MovieTrackingCamera_pixel_aspect;


CollectionPropertyRNA rna_MovieTrackingMarker_rna_properties;
PointerPropertyRNA rna_MovieTrackingMarker_rna_type;
FloatPropertyRNA rna_MovieTrackingMarker_co;
IntPropertyRNA rna_MovieTrackingMarker_frame;
BoolPropertyRNA rna_MovieTrackingMarker_mute;
FloatPropertyRNA rna_MovieTrackingMarker_pattern_corners;
FloatPropertyRNA rna_MovieTrackingMarker_pattern_bound_box;
FloatPropertyRNA rna_MovieTrackingMarker_search_min;
FloatPropertyRNA rna_MovieTrackingMarker_search_max;
BoolPropertyRNA rna_MovieTrackingMarker_is_keyed;


CollectionPropertyRNA rna_MovieTrackingTrack_rna_properties;
PointerPropertyRNA rna_MovieTrackingTrack_rna_type;
StringPropertyRNA rna_MovieTrackingTrack_name;
IntPropertyRNA rna_MovieTrackingTrack_frames_limit;
EnumPropertyRNA rna_MovieTrackingTrack_pattern_match;
IntPropertyRNA rna_MovieTrackingTrack_margin;
EnumPropertyRNA rna_MovieTrackingTrack_motion_model;
FloatPropertyRNA rna_MovieTrackingTrack_correlation_min;
BoolPropertyRNA rna_MovieTrackingTrack_use_brute;
BoolPropertyRNA rna_MovieTrackingTrack_use_mask;
BoolPropertyRNA rna_MovieTrackingTrack_use_normalization;
CollectionPropertyRNA rna_MovieTrackingTrack_markers;
BoolPropertyRNA rna_MovieTrackingTrack_use_red_channel;
BoolPropertyRNA rna_MovieTrackingTrack_use_green_channel;
BoolPropertyRNA rna_MovieTrackingTrack_use_blue_channel;
BoolPropertyRNA rna_MovieTrackingTrack_use_grayscale_preview;
BoolPropertyRNA rna_MovieTrackingTrack_use_alpha_preview;
BoolPropertyRNA rna_MovieTrackingTrack_has_bundle;
FloatPropertyRNA rna_MovieTrackingTrack_bundle;
BoolPropertyRNA rna_MovieTrackingTrack_hide;
BoolPropertyRNA rna_MovieTrackingTrack_select;
BoolPropertyRNA rna_MovieTrackingTrack_select_anchor;
BoolPropertyRNA rna_MovieTrackingTrack_select_pattern;
BoolPropertyRNA rna_MovieTrackingTrack_select_search;
BoolPropertyRNA rna_MovieTrackingTrack_lock;
BoolPropertyRNA rna_MovieTrackingTrack_use_custom_color;
FloatPropertyRNA rna_MovieTrackingTrack_color;
FloatPropertyRNA rna_MovieTrackingTrack_average_error;
PointerPropertyRNA rna_MovieTrackingTrack_grease_pencil;
FloatPropertyRNA rna_MovieTrackingTrack_weight;
FloatPropertyRNA rna_MovieTrackingTrack_offset;


CollectionPropertyRNA rna_MovieTrackingMarkers_rna_properties;
PointerPropertyRNA rna_MovieTrackingMarkers_rna_type;

extern FunctionRNA rna_MovieTrackingMarkers_find_frame_func;
extern IntPropertyRNA rna_MovieTrackingMarkers_find_frame_frame;
extern BoolPropertyRNA rna_MovieTrackingMarkers_find_frame_exact;
extern PointerPropertyRNA rna_MovieTrackingMarkers_find_frame_marker;

extern FunctionRNA rna_MovieTrackingMarkers_insert_frame_func;
extern IntPropertyRNA rna_MovieTrackingMarkers_insert_frame_frame;
extern FloatPropertyRNA rna_MovieTrackingMarkers_insert_frame_co;
extern PointerPropertyRNA rna_MovieTrackingMarkers_insert_frame_marker;

extern FunctionRNA rna_MovieTrackingMarkers_delete_frame_func;
extern IntPropertyRNA rna_MovieTrackingMarkers_delete_frame_frame;



CollectionPropertyRNA rna_MovieTrackingPlaneMarker_rna_properties;
PointerPropertyRNA rna_MovieTrackingPlaneMarker_rna_type;
IntPropertyRNA rna_MovieTrackingPlaneMarker_frame;
FloatPropertyRNA rna_MovieTrackingPlaneMarker_corners;
BoolPropertyRNA rna_MovieTrackingPlaneMarker_mute;


CollectionPropertyRNA rna_MovieTrackingPlaneTrack_rna_properties;
PointerPropertyRNA rna_MovieTrackingPlaneTrack_rna_type;
StringPropertyRNA rna_MovieTrackingPlaneTrack_name;
CollectionPropertyRNA rna_MovieTrackingPlaneTrack_markers;
BoolPropertyRNA rna_MovieTrackingPlaneTrack_select;
BoolPropertyRNA rna_MovieTrackingPlaneTrack_use_auto_keying;
PointerPropertyRNA rna_MovieTrackingPlaneTrack_image;
FloatPropertyRNA rna_MovieTrackingPlaneTrack_image_opacity;


CollectionPropertyRNA rna_MovieTrackingPlaneMarkers_rna_properties;
PointerPropertyRNA rna_MovieTrackingPlaneMarkers_rna_type;

extern FunctionRNA rna_MovieTrackingPlaneMarkers_find_frame_func;
extern IntPropertyRNA rna_MovieTrackingPlaneMarkers_find_frame_frame;
extern BoolPropertyRNA rna_MovieTrackingPlaneMarkers_find_frame_exact;
extern PointerPropertyRNA rna_MovieTrackingPlaneMarkers_find_frame_plane_marker;

extern FunctionRNA rna_MovieTrackingPlaneMarkers_insert_frame_func;
extern IntPropertyRNA rna_MovieTrackingPlaneMarkers_insert_frame_frame;
extern PointerPropertyRNA rna_MovieTrackingPlaneMarkers_insert_frame_plane_marker;

extern FunctionRNA rna_MovieTrackingPlaneMarkers_delete_frame_func;
extern IntPropertyRNA rna_MovieTrackingPlaneMarkers_delete_frame_frame;



CollectionPropertyRNA rna_MovieTrackingTracks_rna_properties;
PointerPropertyRNA rna_MovieTrackingTracks_rna_type;
PointerPropertyRNA rna_MovieTrackingTracks_active;

extern FunctionRNA rna_MovieTrackingTracks_new_func;
extern StringPropertyRNA rna_MovieTrackingTracks_new_name;
extern IntPropertyRNA rna_MovieTrackingTracks_new_frame;
extern PointerPropertyRNA rna_MovieTrackingTracks_new_track;



CollectionPropertyRNA rna_MovieTrackingPlaneTracks_rna_properties;
PointerPropertyRNA rna_MovieTrackingPlaneTracks_rna_type;
PointerPropertyRNA rna_MovieTrackingPlaneTracks_active;


CollectionPropertyRNA rna_MovieTrackingObjectTracks_rna_properties;
PointerPropertyRNA rna_MovieTrackingObjectTracks_rna_type;
PointerPropertyRNA rna_MovieTrackingObjectTracks_active;

extern FunctionRNA rna_MovieTrackingObjectTracks_new_func;
extern StringPropertyRNA rna_MovieTrackingObjectTracks_new_name;
extern IntPropertyRNA rna_MovieTrackingObjectTracks_new_frame;
extern PointerPropertyRNA rna_MovieTrackingObjectTracks_new_track;



CollectionPropertyRNA rna_MovieTrackingObjectPlaneTracks_rna_properties;
PointerPropertyRNA rna_MovieTrackingObjectPlaneTracks_rna_type;
PointerPropertyRNA rna_MovieTrackingObjectPlaneTracks_active;


CollectionPropertyRNA rna_MovieTrackingStabilization_rna_properties;
PointerPropertyRNA rna_MovieTrackingStabilization_rna_type;
BoolPropertyRNA rna_MovieTrackingStabilization_use_2d_stabilization;
CollectionPropertyRNA rna_MovieTrackingStabilization_tracks;
PointerPropertyRNA rna_MovieTrackingStabilization_rotation_track;
IntPropertyRNA rna_MovieTrackingStabilization_active_track_index;
BoolPropertyRNA rna_MovieTrackingStabilization_use_autoscale;
FloatPropertyRNA rna_MovieTrackingStabilization_scale_max;
FloatPropertyRNA rna_MovieTrackingStabilization_influence_location;
FloatPropertyRNA rna_MovieTrackingStabilization_influence_scale;
BoolPropertyRNA rna_MovieTrackingStabilization_use_stabilize_rotation;
FloatPropertyRNA rna_MovieTrackingStabilization_influence_rotation;
EnumPropertyRNA rna_MovieTrackingStabilization_filter_type;


CollectionPropertyRNA rna_MovieTrackingReconstructedCameras_rna_properties;
PointerPropertyRNA rna_MovieTrackingReconstructedCameras_rna_type;

extern FunctionRNA rna_MovieTrackingReconstructedCameras_find_frame_func;
extern IntPropertyRNA rna_MovieTrackingReconstructedCameras_find_frame_frame;
extern PointerPropertyRNA rna_MovieTrackingReconstructedCameras_find_frame_camera;

extern FunctionRNA rna_MovieTrackingReconstructedCameras_matrix_from_frame_func;
extern IntPropertyRNA rna_MovieTrackingReconstructedCameras_matrix_from_frame_frame;
extern FloatPropertyRNA rna_MovieTrackingReconstructedCameras_matrix_from_frame_matrix;



CollectionPropertyRNA rna_MovieReconstructedCamera_rna_properties;
PointerPropertyRNA rna_MovieReconstructedCamera_rna_type;
IntPropertyRNA rna_MovieReconstructedCamera_frame;
FloatPropertyRNA rna_MovieReconstructedCamera_matrix;
FloatPropertyRNA rna_MovieReconstructedCamera_average_error;


CollectionPropertyRNA rna_MovieTrackingReconstruction_rna_properties;
PointerPropertyRNA rna_MovieTrackingReconstruction_rna_type;
BoolPropertyRNA rna_MovieTrackingReconstruction_is_valid;
FloatPropertyRNA rna_MovieTrackingReconstruction_average_error;
CollectionPropertyRNA rna_MovieTrackingReconstruction_cameras;


CollectionPropertyRNA rna_MovieTrackingObject_rna_properties;
PointerPropertyRNA rna_MovieTrackingObject_rna_type;
StringPropertyRNA rna_MovieTrackingObject_name;
BoolPropertyRNA rna_MovieTrackingObject_is_camera;
CollectionPropertyRNA rna_MovieTrackingObject_tracks;
CollectionPropertyRNA rna_MovieTrackingObject_plane_tracks;
PointerPropertyRNA rna_MovieTrackingObject_reconstruction;
FloatPropertyRNA rna_MovieTrackingObject_scale;
IntPropertyRNA rna_MovieTrackingObject_keyframe_a;
IntPropertyRNA rna_MovieTrackingObject_keyframe_b;


CollectionPropertyRNA rna_MovieTrackingDopesheet_rna_properties;
PointerPropertyRNA rna_MovieTrackingDopesheet_rna_type;
EnumPropertyRNA rna_MovieTrackingDopesheet_sort_method;
BoolPropertyRNA rna_MovieTrackingDopesheet_use_invert_sort;
BoolPropertyRNA rna_MovieTrackingDopesheet_show_only_selected;
BoolPropertyRNA rna_MovieTrackingDopesheet_show_hidden;


CollectionPropertyRNA rna_MovieTracking_rna_properties;
PointerPropertyRNA rna_MovieTracking_rna_type;
PointerPropertyRNA rna_MovieTracking_settings;
PointerPropertyRNA rna_MovieTracking_camera;
CollectionPropertyRNA rna_MovieTracking_tracks;
CollectionPropertyRNA rna_MovieTracking_plane_tracks;
PointerPropertyRNA rna_MovieTracking_stabilization;
PointerPropertyRNA rna_MovieTracking_reconstruction;
CollectionPropertyRNA rna_MovieTracking_objects;
IntPropertyRNA rna_MovieTracking_active_object_index;
PointerPropertyRNA rna_MovieTracking_dopesheet;


CollectionPropertyRNA rna_MovieTrackingObjects_rna_properties;
PointerPropertyRNA rna_MovieTrackingObjects_rna_type;
PointerPropertyRNA rna_MovieTrackingObjects_active;

extern FunctionRNA rna_MovieTrackingObjects_new_func;
extern StringPropertyRNA rna_MovieTrackingObjects_new_name;
extern PointerPropertyRNA rna_MovieTrackingObjects_new_object;

extern FunctionRNA rna_MovieTrackingObjects_remove_func;
extern PointerPropertyRNA rna_MovieTrackingObjects_remove_object;


static PointerRNA MovieTrackingSettings_rna_properties_get(CollectionPropertyIterator *iter)
{
	return rna_builtin_properties_get(iter);
}

void MovieTrackingSettings_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

	memset(iter, 0, sizeof(*iter));
	iter->parent = *ptr;
	iter->prop = (PropertyRNA *)&rna_MovieTrackingSettings_rna_properties;

	rna_builtin_properties_begin(iter, ptr);

	if (iter->valid)
		iter->ptr = MovieTrackingSettings_rna_properties_get(iter);
}

void MovieTrackingSettings_rna_properties_next(CollectionPropertyIterator *iter)
{
	rna_builtin_properties_next(iter);

	if (iter->valid)
		iter->ptr = MovieTrackingSettings_rna_properties_get(iter);
}

void MovieTrackingSettings_rna_properties_end(CollectionPropertyIterator *iter)
{
	rna_iterator_listbase_end(iter);
}

int MovieTrackingSettings_rna_properties_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
	return rna_builtin_properties_lookup_string(ptr, key, r_ptr);
}

PointerRNA MovieTrackingSettings_rna_type_get(PointerRNA *ptr)
{
	return rna_builtin_type_get(ptr);
}

int MovieTrackingSettings_speed_get(PointerRNA *ptr)
{
	MovieTrackingSettings *data = (MovieTrackingSettings *)(ptr->data);
	return (int)(data->speed);
}

void MovieTrackingSettings_speed_set(PointerRNA *ptr, int value)
{
	MovieTrackingSettings *data = (MovieTrackingSettings *)(ptr->data);
	data->speed = value;
}

int MovieTrackingSettings_use_keyframe_selection_get(PointerRNA *ptr)
{
	MovieTrackingSettings *data = (MovieTrackingSettings *)(ptr->data);
	return (((data->reconstruction_flag) & 2) != 0);
}

void MovieTrackingSettings_use_keyframe_selection_set(PointerRNA *ptr, int value)
{
	MovieTrackingSettings *data = (MovieTrackingSettings *)(ptr->data);
	if (value) data->reconstruction_flag |= 2;
	else data->reconstruction_flag &= ~2;
}

int MovieTrackingSettings_refine_intrinsics_get(PointerRNA *ptr)
{
	MovieTrackingSettings *data = (MovieTrackingSettings *)(ptr->data);
	return (int)(data->refine_camera_intrinsics);
}

void MovieTrackingSettings_refine_intrinsics_set(PointerRNA *ptr, int value)
{
	MovieTrackingSettings *data = (MovieTrackingSettings *)(ptr->data);
	data->refine_camera_intrinsics = value;
}

float MovieTrackingSettings_distance_get(PointerRNA *ptr)
{
	MovieTrackingSettings *data = (MovieTrackingSettings *)(ptr->data);
	return (float)(data->dist);
}

void MovieTrackingSettings_distance_set(PointerRNA *ptr, float value)
{
	MovieTrackingSettings *data = (MovieTrackingSettings *)(ptr->data);
	data->dist = value;
}

int MovieTrackingSettings_clean_frames_get(PointerRNA *ptr)
{
	MovieTrackingSettings *data = (MovieTrackingSettings *)(ptr->data);
	return (int)(data->clean_frames);
}

void MovieTrackingSettings_clean_frames_set(PointerRNA *ptr, int value)
{
	MovieTrackingSettings *data = (MovieTrackingSettings *)(ptr->data);
	data->clean_frames = CLAMPIS(value, 0, INT_MAX);
}

float MovieTrackingSettings_clean_error_get(PointerRNA *ptr)
{
	MovieTrackingSettings *data = (MovieTrackingSettings *)(ptr->data);
	return (float)(data->clean_error);
}

void MovieTrackingSettings_clean_error_set(PointerRNA *ptr, float value)
{
	MovieTrackingSettings *data = (MovieTrackingSettings *)(ptr->data);
	data->clean_error = CLAMPIS(value, 0.0f, FLT_MAX);
}

int MovieTrackingSettings_clean_action_get(PointerRNA *ptr)
{
	MovieTrackingSettings *data = (MovieTrackingSettings *)(ptr->data);
	return (int)(data->clean_action);
}

void MovieTrackingSettings_clean_action_set(PointerRNA *ptr, int value)
{
	MovieTrackingSettings *data = (MovieTrackingSettings *)(ptr->data);
	data->clean_action = value;
}

int MovieTrackingSettings_show_default_expanded_get(PointerRNA *ptr)
{
	MovieTrackingSettings *data = (MovieTrackingSettings *)(ptr->data);
	return (((data->flag) & 1) != 0);
}

void MovieTrackingSettings_show_default_expanded_set(PointerRNA *ptr, int value)
{
	MovieTrackingSettings *data = (MovieTrackingSettings *)(ptr->data);
	if (value) data->flag |= 1;
	else data->flag &= ~1;
}

int MovieTrackingSettings_show_extra_expanded_get(PointerRNA *ptr)
{
	MovieTrackingSettings *data = (MovieTrackingSettings *)(ptr->data);
	return (((data->flag) & 2) != 0);
}

void MovieTrackingSettings_show_extra_expanded_set(PointerRNA *ptr, int value)
{
	MovieTrackingSettings *data = (MovieTrackingSettings *)(ptr->data);
	if (value) data->flag |= 2;
	else data->flag &= ~2;
}

int MovieTrackingSettings_use_tripod_solver_get(PointerRNA *ptr)
{
	MovieTrackingSettings *data = (MovieTrackingSettings *)(ptr->data);
	return (((data->motion_flag) & 1) != 0);
}

void MovieTrackingSettings_use_tripod_solver_set(PointerRNA *ptr, int value)
{
	MovieTrackingSettings *data = (MovieTrackingSettings *)(ptr->data);
	if (value) data->motion_flag |= 1;
	else data->motion_flag &= ~1;
}

int MovieTrackingSettings_default_frames_limit_get(PointerRNA *ptr)
{
	MovieTrackingSettings *data = (MovieTrackingSettings *)(ptr->data);
	return (int)(data->default_frames_limit);
}

void MovieTrackingSettings_default_frames_limit_set(PointerRNA *ptr, int value)
{
	MovieTrackingSettings *data = (MovieTrackingSettings *)(ptr->data);
	data->default_frames_limit = CLAMPIS(value, 0, 32767);
}

int MovieTrackingSettings_default_pattern_match_get(PointerRNA *ptr)
{
	MovieTrackingSettings *data = (MovieTrackingSettings *)(ptr->data);
	return (int)(data->default_pattern_match);
}

void MovieTrackingSettings_default_pattern_match_set(PointerRNA *ptr, int value)
{
	MovieTrackingSettings *data = (MovieTrackingSettings *)(ptr->data);
	data->default_pattern_match = value;
}

int MovieTrackingSettings_default_margin_get(PointerRNA *ptr)
{
	MovieTrackingSettings *data = (MovieTrackingSettings *)(ptr->data);
	return (int)(data->default_margin);
}

void MovieTrackingSettings_default_margin_set(PointerRNA *ptr, int value)
{
	MovieTrackingSettings *data = (MovieTrackingSettings *)(ptr->data);
	data->default_margin = CLAMPIS(value, 0, 300);
}

int MovieTrackingSettings_default_motion_model_get(PointerRNA *ptr)
{
	MovieTrackingSettings *data = (MovieTrackingSettings *)(ptr->data);
	return (int)(data->default_motion_model);
}

void MovieTrackingSettings_default_motion_model_set(PointerRNA *ptr, int value)
{
	MovieTrackingSettings *data = (MovieTrackingSettings *)(ptr->data);
	data->default_motion_model = value;
}

int MovieTrackingSettings_use_default_brute_get(PointerRNA *ptr)
{
	MovieTrackingSettings *data = (MovieTrackingSettings *)(ptr->data);
	return (((data->default_algorithm_flag) & 1) != 0);
}

void MovieTrackingSettings_use_default_brute_set(PointerRNA *ptr, int value)
{
	MovieTrackingSettings *data = (MovieTrackingSettings *)(ptr->data);
	if (value) data->default_algorithm_flag |= 1;
	else data->default_algorithm_flag &= ~1;
}

int MovieTrackingSettings_use_default_mask_get(PointerRNA *ptr)
{
	MovieTrackingSettings *data = (MovieTrackingSettings *)(ptr->data);
	return (((data->default_algorithm_flag) & 8) != 0);
}

void MovieTrackingSettings_use_default_mask_set(PointerRNA *ptr, int value)
{
	MovieTrackingSettings *data = (MovieTrackingSettings *)(ptr->data);
	if (value) data->default_algorithm_flag |= 8;
	else data->default_algorithm_flag &= ~8;
}

int MovieTrackingSettings_use_default_normalization_get(PointerRNA *ptr)
{
	MovieTrackingSettings *data = (MovieTrackingSettings *)(ptr->data);
	return (((data->default_algorithm_flag) & 4) != 0);
}

void MovieTrackingSettings_use_default_normalization_set(PointerRNA *ptr, int value)
{
	MovieTrackingSettings *data = (MovieTrackingSettings *)(ptr->data);
	if (value) data->default_algorithm_flag |= 4;
	else data->default_algorithm_flag &= ~4;
}

float MovieTrackingSettings_default_correlation_min_get(PointerRNA *ptr)
{
	MovieTrackingSettings *data = (MovieTrackingSettings *)(ptr->data);
	return (float)(data->default_minimum_correlation);
}

void MovieTrackingSettings_default_correlation_min_set(PointerRNA *ptr, float value)
{
	MovieTrackingSettings *data = (MovieTrackingSettings *)(ptr->data);
	data->default_minimum_correlation = CLAMPIS(value, 0.0f, 1.0f);
}

int MovieTrackingSettings_default_pattern_size_get(PointerRNA *ptr)
{
	MovieTrackingSettings *data = (MovieTrackingSettings *)(ptr->data);
	return (int)(data->default_pattern_size);
}

void MovieTrackingSettings_default_pattern_size_set(PointerRNA *ptr, int value)
{
	MovieTrackingSettings *data = (MovieTrackingSettings *)(ptr->data);
	data->default_pattern_size = CLAMPIS(value, 5, 1000);
}

int MovieTrackingSettings_default_search_size_get(PointerRNA *ptr)
{
	MovieTrackingSettings *data = (MovieTrackingSettings *)(ptr->data);
	return (int)(data->default_search_size);
}

void MovieTrackingSettings_default_search_size_set(PointerRNA *ptr, int value)
{
	MovieTrackingSettings *data = (MovieTrackingSettings *)(ptr->data);
	data->default_search_size = CLAMPIS(value, 5, 1000);
}

int MovieTrackingSettings_use_default_red_channel_get(PointerRNA *ptr)
{
	MovieTrackingSettings *data = (MovieTrackingSettings *)(ptr->data);
	return !(((data->default_flag) & 4) != 0);
}

void MovieTrackingSettings_use_default_red_channel_set(PointerRNA *ptr, int value)
{
	MovieTrackingSettings *data = (MovieTrackingSettings *)(ptr->data);
	if (!value) data->default_flag |= 4;
	else data->default_flag &= ~4;
}

int MovieTrackingSettings_use_default_green_channel_get(PointerRNA *ptr)
{
	MovieTrackingSettings *data = (MovieTrackingSettings *)(ptr->data);
	return !(((data->default_flag) & 8) != 0);
}

void MovieTrackingSettings_use_default_green_channel_set(PointerRNA *ptr, int value)
{
	MovieTrackingSettings *data = (MovieTrackingSettings *)(ptr->data);
	if (!value) data->default_flag |= 8;
	else data->default_flag &= ~8;
}

int MovieTrackingSettings_use_default_blue_channel_get(PointerRNA *ptr)
{
	MovieTrackingSettings *data = (MovieTrackingSettings *)(ptr->data);
	return !(((data->default_flag) & 16) != 0);
}

void MovieTrackingSettings_use_default_blue_channel_set(PointerRNA *ptr, int value)
{
	MovieTrackingSettings *data = (MovieTrackingSettings *)(ptr->data);
	if (!value) data->default_flag |= 16;
	else data->default_flag &= ~16;
}

float MovieTrackingSettings_default_weight_get(PointerRNA *ptr)
{
	MovieTrackingSettings *data = (MovieTrackingSettings *)(ptr->data);
	return (float)(data->default_weight);
}

void MovieTrackingSettings_default_weight_set(PointerRNA *ptr, float value)
{
	MovieTrackingSettings *data = (MovieTrackingSettings *)(ptr->data);
	data->default_weight = CLAMPIS(value, 0.0f, 1.0f);
}

float MovieTrackingSettings_object_distance_get(PointerRNA *ptr)
{
	MovieTrackingSettings *data = (MovieTrackingSettings *)(ptr->data);
	return (float)(data->object_distance);
}

void MovieTrackingSettings_object_distance_set(PointerRNA *ptr, float value)
{
	MovieTrackingSettings *data = (MovieTrackingSettings *)(ptr->data);
	data->object_distance = CLAMPIS(value, 0.0010000000f, 10000.0f);
}

static PointerRNA MovieTrackingCamera_rna_properties_get(CollectionPropertyIterator *iter)
{
	return rna_builtin_properties_get(iter);
}

void MovieTrackingCamera_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

	memset(iter, 0, sizeof(*iter));
	iter->parent = *ptr;
	iter->prop = (PropertyRNA *)&rna_MovieTrackingCamera_rna_properties;

	rna_builtin_properties_begin(iter, ptr);

	if (iter->valid)
		iter->ptr = MovieTrackingCamera_rna_properties_get(iter);
}

void MovieTrackingCamera_rna_properties_next(CollectionPropertyIterator *iter)
{
	rna_builtin_properties_next(iter);

	if (iter->valid)
		iter->ptr = MovieTrackingCamera_rna_properties_get(iter);
}

void MovieTrackingCamera_rna_properties_end(CollectionPropertyIterator *iter)
{
	rna_iterator_listbase_end(iter);
}

int MovieTrackingCamera_rna_properties_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
	return rna_builtin_properties_lookup_string(ptr, key, r_ptr);
}

PointerRNA MovieTrackingCamera_rna_type_get(PointerRNA *ptr)
{
	return rna_builtin_type_get(ptr);
}

int MovieTrackingCamera_distortion_model_get(PointerRNA *ptr)
{
	MovieTrackingCamera *data = (MovieTrackingCamera *)(ptr->data);
	return (int)(data->distortion_model);
}

void MovieTrackingCamera_distortion_model_set(PointerRNA *ptr, int value)
{
	MovieTrackingCamera *data = (MovieTrackingCamera *)(ptr->data);
	data->distortion_model = value;
}

float MovieTrackingCamera_sensor_width_get(PointerRNA *ptr)
{
	MovieTrackingCamera *data = (MovieTrackingCamera *)(ptr->data);
	return (float)(data->sensor_width);
}

void MovieTrackingCamera_sensor_width_set(PointerRNA *ptr, float value)
{
	MovieTrackingCamera *data = (MovieTrackingCamera *)(ptr->data);
	data->sensor_width = CLAMPIS(value, 0.0f, 500.0f);
}

float MovieTrackingCamera_focal_length_get(PointerRNA *ptr)
{
	return rna_trackingCamera_focal_mm_get(ptr);
}

void MovieTrackingCamera_focal_length_set(PointerRNA *ptr, float value)
{
	rna_trackingCamera_focal_mm_set(ptr, value);
}

float MovieTrackingCamera_focal_length_pixels_get(PointerRNA *ptr)
{
	MovieTrackingCamera *data = (MovieTrackingCamera *)(ptr->data);
	return (float)(data->focal);
}

void MovieTrackingCamera_focal_length_pixels_set(PointerRNA *ptr, float value)
{
	MovieTrackingCamera *data = (MovieTrackingCamera *)(ptr->data);
	data->focal = CLAMPIS(value, 0.0f, FLT_MAX);
}

int MovieTrackingCamera_units_get(PointerRNA *ptr)
{
	MovieTrackingCamera *data = (MovieTrackingCamera *)(ptr->data);
	return (int)(data->units);
}

void MovieTrackingCamera_units_set(PointerRNA *ptr, int value)
{
	MovieTrackingCamera *data = (MovieTrackingCamera *)(ptr->data);
	data->units = value;
}

void MovieTrackingCamera_principal_get(PointerRNA *ptr, float values[2])
{
	MovieTrackingCamera *data = (MovieTrackingCamera *)(ptr->data);
	unsigned int i;

	for (i = 0; i < 2; i++) {
		values[i] = (float)(((float *)data->principal)[i]);
	}
}

void MovieTrackingCamera_principal_set(PointerRNA *ptr, const float values[2])
{
	MovieTrackingCamera *data = (MovieTrackingCamera *)(ptr->data);
	unsigned int i;

	for (i = 0; i < 2; i++) {
		((float *)data->principal)[i] = values[i];
	}
}

float MovieTrackingCamera_k1_get(PointerRNA *ptr)
{
	MovieTrackingCamera *data = (MovieTrackingCamera *)(ptr->data);
	return (float)(data->k1);
}

void MovieTrackingCamera_k1_set(PointerRNA *ptr, float value)
{
	MovieTrackingCamera *data = (MovieTrackingCamera *)(ptr->data);
	data->k1 = value;
}

float MovieTrackingCamera_k2_get(PointerRNA *ptr)
{
	MovieTrackingCamera *data = (MovieTrackingCamera *)(ptr->data);
	return (float)(data->k2);
}

void MovieTrackingCamera_k2_set(PointerRNA *ptr, float value)
{
	MovieTrackingCamera *data = (MovieTrackingCamera *)(ptr->data);
	data->k2 = value;
}

float MovieTrackingCamera_k3_get(PointerRNA *ptr)
{
	MovieTrackingCamera *data = (MovieTrackingCamera *)(ptr->data);
	return (float)(data->k3);
}

void MovieTrackingCamera_k3_set(PointerRNA *ptr, float value)
{
	MovieTrackingCamera *data = (MovieTrackingCamera *)(ptr->data);
	data->k3 = value;
}

float MovieTrackingCamera_division_k1_get(PointerRNA *ptr)
{
	MovieTrackingCamera *data = (MovieTrackingCamera *)(ptr->data);
	return (float)(data->division_k1);
}

void MovieTrackingCamera_division_k1_set(PointerRNA *ptr, float value)
{
	MovieTrackingCamera *data = (MovieTrackingCamera *)(ptr->data);
	data->division_k1 = value;
}

float MovieTrackingCamera_division_k2_get(PointerRNA *ptr)
{
	MovieTrackingCamera *data = (MovieTrackingCamera *)(ptr->data);
	return (float)(data->division_k2);
}

void MovieTrackingCamera_division_k2_set(PointerRNA *ptr, float value)
{
	MovieTrackingCamera *data = (MovieTrackingCamera *)(ptr->data);
	data->division_k2 = value;
}

float MovieTrackingCamera_pixel_aspect_get(PointerRNA *ptr)
{
	MovieTrackingCamera *data = (MovieTrackingCamera *)(ptr->data);
	return (float)(data->pixel_aspect);
}

void MovieTrackingCamera_pixel_aspect_set(PointerRNA *ptr, float value)
{
	MovieTrackingCamera *data = (MovieTrackingCamera *)(ptr->data);
	data->pixel_aspect = CLAMPIS(value, 0.1000000015f, FLT_MAX);
}

static PointerRNA MovieTrackingMarker_rna_properties_get(CollectionPropertyIterator *iter)
{
	return rna_builtin_properties_get(iter);
}

void MovieTrackingMarker_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

	memset(iter, 0, sizeof(*iter));
	iter->parent = *ptr;
	iter->prop = (PropertyRNA *)&rna_MovieTrackingMarker_rna_properties;

	rna_builtin_properties_begin(iter, ptr);

	if (iter->valid)
		iter->ptr = MovieTrackingMarker_rna_properties_get(iter);
}

void MovieTrackingMarker_rna_properties_next(CollectionPropertyIterator *iter)
{
	rna_builtin_properties_next(iter);

	if (iter->valid)
		iter->ptr = MovieTrackingMarker_rna_properties_get(iter);
}

void MovieTrackingMarker_rna_properties_end(CollectionPropertyIterator *iter)
{
	rna_iterator_listbase_end(iter);
}

int MovieTrackingMarker_rna_properties_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
	return rna_builtin_properties_lookup_string(ptr, key, r_ptr);
}

PointerRNA MovieTrackingMarker_rna_type_get(PointerRNA *ptr)
{
	return rna_builtin_type_get(ptr);
}

void MovieTrackingMarker_co_get(PointerRNA *ptr, float values[2])
{
	MovieTrackingMarker *data = (MovieTrackingMarker *)(ptr->data);
	unsigned int i;

	for (i = 0; i < 2; i++) {
		values[i] = (float)(((float *)data->pos)[i]);
	}
}

void MovieTrackingMarker_co_set(PointerRNA *ptr, const float values[2])
{
	MovieTrackingMarker *data = (MovieTrackingMarker *)(ptr->data);
	unsigned int i;

	for (i = 0; i < 2; i++) {
		((float *)data->pos)[i] = values[i];
	}
}

int MovieTrackingMarker_frame_get(PointerRNA *ptr)
{
	MovieTrackingMarker *data = (MovieTrackingMarker *)(ptr->data);
	return (int)(data->framenr);
}

void MovieTrackingMarker_frame_set(PointerRNA *ptr, int value)
{
	rna_trackingMarker_frame_set(ptr, value);
}

int MovieTrackingMarker_mute_get(PointerRNA *ptr)
{
	MovieTrackingMarker *data = (MovieTrackingMarker *)(ptr->data);
	return (((data->flag) & 1) != 0);
}

void MovieTrackingMarker_mute_set(PointerRNA *ptr, int value)
{
	MovieTrackingMarker *data = (MovieTrackingMarker *)(ptr->data);
	if (value) data->flag |= 1;
	else data->flag &= ~1;
}

void MovieTrackingMarker_pattern_corners_get(PointerRNA *ptr, float values[8])
{
	MovieTrackingMarker *data = (MovieTrackingMarker *)(ptr->data);
	unsigned int i;

	for (i = 0; i < 8; i++) {
		values[i] = (float)(((float *)data->pattern_corners)[i]);
	}
}

void MovieTrackingMarker_pattern_corners_set(PointerRNA *ptr, const float values[8])
{
	MovieTrackingMarker *data = (MovieTrackingMarker *)(ptr->data);
	unsigned int i;

	for (i = 0; i < 8; i++) {
		((float *)data->pattern_corners)[i] = values[i];
	}
}

void MovieTrackingMarker_pattern_bound_box_get(PointerRNA *ptr, float values[4])
{
	rna_tracking_markerPattern_boundbox_get(ptr, values);
}

void MovieTrackingMarker_search_min_get(PointerRNA *ptr, float values[2])
{
	MovieTrackingMarker *data = (MovieTrackingMarker *)(ptr->data);
	unsigned int i;

	for (i = 0; i < 2; i++) {
		values[i] = (float)(((float *)data->search_min)[i]);
	}
}

void MovieTrackingMarker_search_min_set(PointerRNA *ptr, const float values[2])
{
	MovieTrackingMarker *data = (MovieTrackingMarker *)(ptr->data);
	unsigned int i;

	for (i = 0; i < 2; i++) {
		((float *)data->search_min)[i] = values[i];
	}
}

void MovieTrackingMarker_search_max_get(PointerRNA *ptr, float values[2])
{
	MovieTrackingMarker *data = (MovieTrackingMarker *)(ptr->data);
	unsigned int i;

	for (i = 0; i < 2; i++) {
		values[i] = (float)(((float *)data->search_max)[i]);
	}
}

void MovieTrackingMarker_search_max_set(PointerRNA *ptr, const float values[2])
{
	MovieTrackingMarker *data = (MovieTrackingMarker *)(ptr->data);
	unsigned int i;

	for (i = 0; i < 2; i++) {
		((float *)data->search_max)[i] = values[i];
	}
}

int MovieTrackingMarker_is_keyed_get(PointerRNA *ptr)
{
	MovieTrackingMarker *data = (MovieTrackingMarker *)(ptr->data);
	return !(((data->flag) & 2) != 0);
}

void MovieTrackingMarker_is_keyed_set(PointerRNA *ptr, int value)
{
	MovieTrackingMarker *data = (MovieTrackingMarker *)(ptr->data);
	if (!value) data->flag |= 2;
	else data->flag &= ~2;
}

static PointerRNA MovieTrackingTrack_rna_properties_get(CollectionPropertyIterator *iter)
{
	return rna_builtin_properties_get(iter);
}

void MovieTrackingTrack_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

	memset(iter, 0, sizeof(*iter));
	iter->parent = *ptr;
	iter->prop = (PropertyRNA *)&rna_MovieTrackingTrack_rna_properties;

	rna_builtin_properties_begin(iter, ptr);

	if (iter->valid)
		iter->ptr = MovieTrackingTrack_rna_properties_get(iter);
}

void MovieTrackingTrack_rna_properties_next(CollectionPropertyIterator *iter)
{
	rna_builtin_properties_next(iter);

	if (iter->valid)
		iter->ptr = MovieTrackingTrack_rna_properties_get(iter);
}

void MovieTrackingTrack_rna_properties_end(CollectionPropertyIterator *iter)
{
	rna_iterator_listbase_end(iter);
}

int MovieTrackingTrack_rna_properties_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
	return rna_builtin_properties_lookup_string(ptr, key, r_ptr);
}

PointerRNA MovieTrackingTrack_rna_type_get(PointerRNA *ptr)
{
	return rna_builtin_type_get(ptr);
}

void MovieTrackingTrack_name_get(PointerRNA *ptr, char *value)
{
	MovieTrackingTrack *data = (MovieTrackingTrack *)(ptr->data);
	BLI_strncpy_utf8(value, data->name, 64);
}

int MovieTrackingTrack_name_length(PointerRNA *ptr)
{
	MovieTrackingTrack *data = (MovieTrackingTrack *)(ptr->data);
	return strlen(data->name);
}

void MovieTrackingTrack_name_set(PointerRNA *ptr, const char *value)
{
	rna_trackingTrack_name_set(ptr, value);
}

int MovieTrackingTrack_frames_limit_get(PointerRNA *ptr)
{
	MovieTrackingTrack *data = (MovieTrackingTrack *)(ptr->data);
	return (int)(data->frames_limit);
}

void MovieTrackingTrack_frames_limit_set(PointerRNA *ptr, int value)
{
	MovieTrackingTrack *data = (MovieTrackingTrack *)(ptr->data);
	data->frames_limit = CLAMPIS(value, 0, 32767);
}

int MovieTrackingTrack_pattern_match_get(PointerRNA *ptr)
{
	MovieTrackingTrack *data = (MovieTrackingTrack *)(ptr->data);
	return (int)(data->pattern_match);
}

void MovieTrackingTrack_pattern_match_set(PointerRNA *ptr, int value)
{
	MovieTrackingTrack *data = (MovieTrackingTrack *)(ptr->data);
	data->pattern_match = value;
}

int MovieTrackingTrack_margin_get(PointerRNA *ptr)
{
	MovieTrackingTrack *data = (MovieTrackingTrack *)(ptr->data);
	return (int)(data->margin);
}

void MovieTrackingTrack_margin_set(PointerRNA *ptr, int value)
{
	MovieTrackingTrack *data = (MovieTrackingTrack *)(ptr->data);
	data->margin = CLAMPIS(value, 0, 300);
}

int MovieTrackingTrack_motion_model_get(PointerRNA *ptr)
{
	MovieTrackingTrack *data = (MovieTrackingTrack *)(ptr->data);
	return (int)(data->motion_model);
}

void MovieTrackingTrack_motion_model_set(PointerRNA *ptr, int value)
{
	MovieTrackingTrack *data = (MovieTrackingTrack *)(ptr->data);
	data->motion_model = value;
}

float MovieTrackingTrack_correlation_min_get(PointerRNA *ptr)
{
	MovieTrackingTrack *data = (MovieTrackingTrack *)(ptr->data);
	return (float)(data->minimum_correlation);
}

void MovieTrackingTrack_correlation_min_set(PointerRNA *ptr, float value)
{
	MovieTrackingTrack *data = (MovieTrackingTrack *)(ptr->data);
	data->minimum_correlation = CLAMPIS(value, 0.0f, 1.0f);
}

int MovieTrackingTrack_use_brute_get(PointerRNA *ptr)
{
	MovieTrackingTrack *data = (MovieTrackingTrack *)(ptr->data);
	return (((data->algorithm_flag) & 1) != 0);
}

void MovieTrackingTrack_use_brute_set(PointerRNA *ptr, int value)
{
	MovieTrackingTrack *data = (MovieTrackingTrack *)(ptr->data);
	if (value) data->algorithm_flag |= 1;
	else data->algorithm_flag &= ~1;
}

int MovieTrackingTrack_use_mask_get(PointerRNA *ptr)
{
	MovieTrackingTrack *data = (MovieTrackingTrack *)(ptr->data);
	return (((data->algorithm_flag) & 8) != 0);
}

void MovieTrackingTrack_use_mask_set(PointerRNA *ptr, int value)
{
	MovieTrackingTrack *data = (MovieTrackingTrack *)(ptr->data);
	if (value) data->algorithm_flag |= 8;
	else data->algorithm_flag &= ~8;
}

int MovieTrackingTrack_use_normalization_get(PointerRNA *ptr)
{
	MovieTrackingTrack *data = (MovieTrackingTrack *)(ptr->data);
	return (((data->algorithm_flag) & 4) != 0);
}

void MovieTrackingTrack_use_normalization_set(PointerRNA *ptr, int value)
{
	MovieTrackingTrack *data = (MovieTrackingTrack *)(ptr->data);
	if (value) data->algorithm_flag |= 4;
	else data->algorithm_flag &= ~4;
}

int MovieTrackingTrack_markers_length(PointerRNA *ptr)
{
	MovieTrackingTrack *data = (MovieTrackingTrack *)(ptr->data);
	return (data->markers == NULL) ? 0 : data->markersnr;
}

static PointerRNA MovieTrackingTrack_markers_get(CollectionPropertyIterator *iter)
{
	return rna_pointer_inherit_refine(&iter->parent, &RNA_MovieTrackingMarker, rna_iterator_array_get(iter));
}

void MovieTrackingTrack_markers_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{
	MovieTrackingTrack *data = (MovieTrackingTrack *)(ptr->data);

	memset(iter, 0, sizeof(*iter));
	iter->parent = *ptr;
	iter->prop = (PropertyRNA *)&rna_MovieTrackingTrack_markers;

	rna_iterator_array_begin(iter, data->markers, sizeof(data->markers[0]), data->markersnr, 0, NULL);

	if (iter->valid)
		iter->ptr = MovieTrackingTrack_markers_get(iter);
}

void MovieTrackingTrack_markers_next(CollectionPropertyIterator *iter)
{
	rna_iterator_array_next(iter);

	if (iter->valid)
		iter->ptr = MovieTrackingTrack_markers_get(iter);
}

void MovieTrackingTrack_markers_end(CollectionPropertyIterator *iter)
{
	rna_iterator_array_end(iter);
}

int MovieTrackingTrack_markers_lookup_int(PointerRNA *ptr, int index, PointerRNA *r_ptr)
{
	int found = 0;
	CollectionPropertyIterator iter;

	MovieTrackingTrack_markers_begin(&iter, ptr);

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
		if (found) *r_ptr = MovieTrackingTrack_markers_get(&iter);
	}

	MovieTrackingTrack_markers_end(&iter);

	return found;
}

int MovieTrackingTrack_use_red_channel_get(PointerRNA *ptr)
{
	MovieTrackingTrack *data = (MovieTrackingTrack *)(ptr->data);
	return !(((data->flag) & 4) != 0);
}

void MovieTrackingTrack_use_red_channel_set(PointerRNA *ptr, int value)
{
	MovieTrackingTrack *data = (MovieTrackingTrack *)(ptr->data);
	if (!value) data->flag |= 4;
	else data->flag &= ~4;
}

int MovieTrackingTrack_use_green_channel_get(PointerRNA *ptr)
{
	MovieTrackingTrack *data = (MovieTrackingTrack *)(ptr->data);
	return !(((data->flag) & 8) != 0);
}

void MovieTrackingTrack_use_green_channel_set(PointerRNA *ptr, int value)
{
	MovieTrackingTrack *data = (MovieTrackingTrack *)(ptr->data);
	if (!value) data->flag |= 8;
	else data->flag &= ~8;
}

int MovieTrackingTrack_use_blue_channel_get(PointerRNA *ptr)
{
	MovieTrackingTrack *data = (MovieTrackingTrack *)(ptr->data);
	return !(((data->flag) & 16) != 0);
}

void MovieTrackingTrack_use_blue_channel_set(PointerRNA *ptr, int value)
{
	MovieTrackingTrack *data = (MovieTrackingTrack *)(ptr->data);
	if (!value) data->flag |= 16;
	else data->flag &= ~16;
}

int MovieTrackingTrack_use_grayscale_preview_get(PointerRNA *ptr)
{
	MovieTrackingTrack *data = (MovieTrackingTrack *)(ptr->data);
	return (((data->flag) & 512) != 0);
}

void MovieTrackingTrack_use_grayscale_preview_set(PointerRNA *ptr, int value)
{
	MovieTrackingTrack *data = (MovieTrackingTrack *)(ptr->data);
	if (value) data->flag |= 512;
	else data->flag &= ~512;
}

int MovieTrackingTrack_use_alpha_preview_get(PointerRNA *ptr)
{
	MovieTrackingTrack *data = (MovieTrackingTrack *)(ptr->data);
	return (((data->flag) & 2048) != 0);
}

void MovieTrackingTrack_use_alpha_preview_set(PointerRNA *ptr, int value)
{
	MovieTrackingTrack *data = (MovieTrackingTrack *)(ptr->data);
	if (value) data->flag |= 2048;
	else data->flag &= ~2048;
}

int MovieTrackingTrack_has_bundle_get(PointerRNA *ptr)
{
	MovieTrackingTrack *data = (MovieTrackingTrack *)(ptr->data);
	return (((data->flag) & 2) != 0);
}

void MovieTrackingTrack_bundle_get(PointerRNA *ptr, float values[3])
{
	MovieTrackingTrack *data = (MovieTrackingTrack *)(ptr->data);
	unsigned int i;

	for (i = 0; i < 3; i++) {
		values[i] = (float)(((float *)data->bundle_pos)[i]);
	}
}

int MovieTrackingTrack_hide_get(PointerRNA *ptr)
{
	MovieTrackingTrack *data = (MovieTrackingTrack *)(ptr->data);
	return (((data->flag) & 32) != 0);
}

void MovieTrackingTrack_hide_set(PointerRNA *ptr, int value)
{
	MovieTrackingTrack *data = (MovieTrackingTrack *)(ptr->data);
	if (value) data->flag |= 32;
	else data->flag &= ~32;
}

int MovieTrackingTrack_select_get(PointerRNA *ptr)
{
	return rna_trackingTrack_select_get(ptr);
}

void MovieTrackingTrack_select_set(PointerRNA *ptr, int value)
{
	rna_trackingTrack_select_set(ptr, value);
}

int MovieTrackingTrack_select_anchor_get(PointerRNA *ptr)
{
	MovieTrackingTrack *data = (MovieTrackingTrack *)(ptr->data);
	return (((data->flag) & 1) != 0);
}

void MovieTrackingTrack_select_anchor_set(PointerRNA *ptr, int value)
{
	MovieTrackingTrack *data = (MovieTrackingTrack *)(ptr->data);
	if (value) data->flag |= 1;
	else data->flag &= ~1;
}

int MovieTrackingTrack_select_pattern_get(PointerRNA *ptr)
{
	MovieTrackingTrack *data = (MovieTrackingTrack *)(ptr->data);
	return (((data->pat_flag) & 1) != 0);
}

void MovieTrackingTrack_select_pattern_set(PointerRNA *ptr, int value)
{
	MovieTrackingTrack *data = (MovieTrackingTrack *)(ptr->data);
	if (value) data->pat_flag |= 1;
	else data->pat_flag &= ~1;
}

int MovieTrackingTrack_select_search_get(PointerRNA *ptr)
{
	MovieTrackingTrack *data = (MovieTrackingTrack *)(ptr->data);
	return (((data->search_flag) & 1) != 0);
}

void MovieTrackingTrack_select_search_set(PointerRNA *ptr, int value)
{
	MovieTrackingTrack *data = (MovieTrackingTrack *)(ptr->data);
	if (value) data->search_flag |= 1;
	else data->search_flag &= ~1;
}

int MovieTrackingTrack_lock_get(PointerRNA *ptr)
{
	MovieTrackingTrack *data = (MovieTrackingTrack *)(ptr->data);
	return (((data->flag) & 64) != 0);
}

void MovieTrackingTrack_lock_set(PointerRNA *ptr, int value)
{
	MovieTrackingTrack *data = (MovieTrackingTrack *)(ptr->data);
	if (value) data->flag |= 64;
	else data->flag &= ~64;
}

int MovieTrackingTrack_use_custom_color_get(PointerRNA *ptr)
{
	MovieTrackingTrack *data = (MovieTrackingTrack *)(ptr->data);
	return (((data->flag) & 128) != 0);
}

void MovieTrackingTrack_use_custom_color_set(PointerRNA *ptr, int value)
{
	MovieTrackingTrack *data = (MovieTrackingTrack *)(ptr->data);
	if (value) data->flag |= 128;
	else data->flag &= ~128;
}

void MovieTrackingTrack_color_get(PointerRNA *ptr, float values[3])
{
	MovieTrackingTrack *data = (MovieTrackingTrack *)(ptr->data);
	unsigned int i;

	for (i = 0; i < 3; i++) {
		values[i] = (float)(((float *)data->color)[i]);
	}
}

void MovieTrackingTrack_color_set(PointerRNA *ptr, const float values[3])
{
	MovieTrackingTrack *data = (MovieTrackingTrack *)(ptr->data);
	unsigned int i;

	for (i = 0; i < 3; i++) {
		((float *)data->color)[i] = CLAMPIS(values[i], 0.0f, 1.0f);
	}
}

float MovieTrackingTrack_average_error_get(PointerRNA *ptr)
{
	MovieTrackingTrack *data = (MovieTrackingTrack *)(ptr->data);
	return (float)(data->error);
}

PointerRNA MovieTrackingTrack_grease_pencil_get(PointerRNA *ptr)
{
	MovieTrackingTrack *data = (MovieTrackingTrack *)(ptr->data);
	return rna_pointer_inherit_refine(ptr, &RNA_GreasePencil, data->gpd);
}

void MovieTrackingTrack_grease_pencil_set(PointerRNA *ptr, PointerRNA value)
{
	MovieTrackingTrack *data = (MovieTrackingTrack *)(ptr->data);

	if (data->gpd)
		id_us_min((ID *)data->gpd);
	if (value.data)
		id_us_plus((ID *)value.data);

	data->gpd = value.data;
}

float MovieTrackingTrack_weight_get(PointerRNA *ptr)
{
	MovieTrackingTrack *data = (MovieTrackingTrack *)(ptr->data);
	return (float)(data->weight);
}

void MovieTrackingTrack_weight_set(PointerRNA *ptr, float value)
{
	MovieTrackingTrack *data = (MovieTrackingTrack *)(ptr->data);
	data->weight = CLAMPIS(value, 0.0f, 1.0f);
}

void MovieTrackingTrack_offset_get(PointerRNA *ptr, float values[2])
{
	MovieTrackingTrack *data = (MovieTrackingTrack *)(ptr->data);
	unsigned int i;

	for (i = 0; i < 2; i++) {
		values[i] = (float)(((float *)data->offset)[i]);
	}
}

void MovieTrackingTrack_offset_set(PointerRNA *ptr, const float values[2])
{
	MovieTrackingTrack *data = (MovieTrackingTrack *)(ptr->data);
	unsigned int i;

	for (i = 0; i < 2; i++) {
		((float *)data->offset)[i] = values[i];
	}
}

static PointerRNA MovieTrackingMarkers_rna_properties_get(CollectionPropertyIterator *iter)
{
	return rna_builtin_properties_get(iter);
}

void MovieTrackingMarkers_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

	memset(iter, 0, sizeof(*iter));
	iter->parent = *ptr;
	iter->prop = (PropertyRNA *)&rna_MovieTrackingMarkers_rna_properties;

	rna_builtin_properties_begin(iter, ptr);

	if (iter->valid)
		iter->ptr = MovieTrackingMarkers_rna_properties_get(iter);
}

void MovieTrackingMarkers_rna_properties_next(CollectionPropertyIterator *iter)
{
	rna_builtin_properties_next(iter);

	if (iter->valid)
		iter->ptr = MovieTrackingMarkers_rna_properties_get(iter);
}

void MovieTrackingMarkers_rna_properties_end(CollectionPropertyIterator *iter)
{
	rna_iterator_listbase_end(iter);
}

int MovieTrackingMarkers_rna_properties_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
	return rna_builtin_properties_lookup_string(ptr, key, r_ptr);
}

PointerRNA MovieTrackingMarkers_rna_type_get(PointerRNA *ptr)
{
	return rna_builtin_type_get(ptr);
}

static PointerRNA MovieTrackingPlaneMarker_rna_properties_get(CollectionPropertyIterator *iter)
{
	return rna_builtin_properties_get(iter);
}

void MovieTrackingPlaneMarker_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

	memset(iter, 0, sizeof(*iter));
	iter->parent = *ptr;
	iter->prop = (PropertyRNA *)&rna_MovieTrackingPlaneMarker_rna_properties;

	rna_builtin_properties_begin(iter, ptr);

	if (iter->valid)
		iter->ptr = MovieTrackingPlaneMarker_rna_properties_get(iter);
}

void MovieTrackingPlaneMarker_rna_properties_next(CollectionPropertyIterator *iter)
{
	rna_builtin_properties_next(iter);

	if (iter->valid)
		iter->ptr = MovieTrackingPlaneMarker_rna_properties_get(iter);
}

void MovieTrackingPlaneMarker_rna_properties_end(CollectionPropertyIterator *iter)
{
	rna_iterator_listbase_end(iter);
}

int MovieTrackingPlaneMarker_rna_properties_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
	return rna_builtin_properties_lookup_string(ptr, key, r_ptr);
}

PointerRNA MovieTrackingPlaneMarker_rna_type_get(PointerRNA *ptr)
{
	return rna_builtin_type_get(ptr);
}

int MovieTrackingPlaneMarker_frame_get(PointerRNA *ptr)
{
	MovieTrackingPlaneMarker *data = (MovieTrackingPlaneMarker *)(ptr->data);
	return (int)(data->framenr);
}

void MovieTrackingPlaneMarker_frame_set(PointerRNA *ptr, int value)
{
	rna_trackingPlaneMarker_frame_set(ptr, value);
}

void MovieTrackingPlaneMarker_corners_get(PointerRNA *ptr, float values[8])
{
	MovieTrackingPlaneMarker *data = (MovieTrackingPlaneMarker *)(ptr->data);
	unsigned int i;

	for (i = 0; i < 8; i++) {
		values[i] = (float)(((float *)data->corners)[i]);
	}
}

void MovieTrackingPlaneMarker_corners_set(PointerRNA *ptr, const float values[8])
{
	MovieTrackingPlaneMarker *data = (MovieTrackingPlaneMarker *)(ptr->data);
	unsigned int i;

	for (i = 0; i < 8; i++) {
		((float *)data->corners)[i] = values[i];
	}
}

int MovieTrackingPlaneMarker_mute_get(PointerRNA *ptr)
{
	MovieTrackingPlaneMarker *data = (MovieTrackingPlaneMarker *)(ptr->data);
	return (((data->flag) & 1) != 0);
}

void MovieTrackingPlaneMarker_mute_set(PointerRNA *ptr, int value)
{
	MovieTrackingPlaneMarker *data = (MovieTrackingPlaneMarker *)(ptr->data);
	if (value) data->flag |= 1;
	else data->flag &= ~1;
}

static PointerRNA MovieTrackingPlaneTrack_rna_properties_get(CollectionPropertyIterator *iter)
{
	return rna_builtin_properties_get(iter);
}

void MovieTrackingPlaneTrack_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

	memset(iter, 0, sizeof(*iter));
	iter->parent = *ptr;
	iter->prop = (PropertyRNA *)&rna_MovieTrackingPlaneTrack_rna_properties;

	rna_builtin_properties_begin(iter, ptr);

	if (iter->valid)
		iter->ptr = MovieTrackingPlaneTrack_rna_properties_get(iter);
}

void MovieTrackingPlaneTrack_rna_properties_next(CollectionPropertyIterator *iter)
{
	rna_builtin_properties_next(iter);

	if (iter->valid)
		iter->ptr = MovieTrackingPlaneTrack_rna_properties_get(iter);
}

void MovieTrackingPlaneTrack_rna_properties_end(CollectionPropertyIterator *iter)
{
	rna_iterator_listbase_end(iter);
}

int MovieTrackingPlaneTrack_rna_properties_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
	return rna_builtin_properties_lookup_string(ptr, key, r_ptr);
}

PointerRNA MovieTrackingPlaneTrack_rna_type_get(PointerRNA *ptr)
{
	return rna_builtin_type_get(ptr);
}

void MovieTrackingPlaneTrack_name_get(PointerRNA *ptr, char *value)
{
	MovieTrackingPlaneTrack *data = (MovieTrackingPlaneTrack *)(ptr->data);
	BLI_strncpy_utf8(value, data->name, 64);
}

int MovieTrackingPlaneTrack_name_length(PointerRNA *ptr)
{
	MovieTrackingPlaneTrack *data = (MovieTrackingPlaneTrack *)(ptr->data);
	return strlen(data->name);
}

void MovieTrackingPlaneTrack_name_set(PointerRNA *ptr, const char *value)
{
	rna_trackingPlaneTrack_name_set(ptr, value);
}

int MovieTrackingPlaneTrack_markers_length(PointerRNA *ptr)
{
	MovieTrackingPlaneTrack *data = (MovieTrackingPlaneTrack *)(ptr->data);
	return (data->markers == NULL) ? 0 : data->markersnr;
}

static PointerRNA MovieTrackingPlaneTrack_markers_get(CollectionPropertyIterator *iter)
{
	return rna_pointer_inherit_refine(&iter->parent, &RNA_MovieTrackingPlaneMarker, rna_iterator_array_get(iter));
}

void MovieTrackingPlaneTrack_markers_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{
	MovieTrackingPlaneTrack *data = (MovieTrackingPlaneTrack *)(ptr->data);

	memset(iter, 0, sizeof(*iter));
	iter->parent = *ptr;
	iter->prop = (PropertyRNA *)&rna_MovieTrackingPlaneTrack_markers;

	rna_iterator_array_begin(iter, data->markers, sizeof(data->markers[0]), data->markersnr, 0, NULL);

	if (iter->valid)
		iter->ptr = MovieTrackingPlaneTrack_markers_get(iter);
}

void MovieTrackingPlaneTrack_markers_next(CollectionPropertyIterator *iter)
{
	rna_iterator_array_next(iter);

	if (iter->valid)
		iter->ptr = MovieTrackingPlaneTrack_markers_get(iter);
}

void MovieTrackingPlaneTrack_markers_end(CollectionPropertyIterator *iter)
{
	rna_iterator_array_end(iter);
}

int MovieTrackingPlaneTrack_markers_lookup_int(PointerRNA *ptr, int index, PointerRNA *r_ptr)
{
	int found = 0;
	CollectionPropertyIterator iter;

	MovieTrackingPlaneTrack_markers_begin(&iter, ptr);

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
		if (found) *r_ptr = MovieTrackingPlaneTrack_markers_get(&iter);
	}

	MovieTrackingPlaneTrack_markers_end(&iter);

	return found;
}

int MovieTrackingPlaneTrack_select_get(PointerRNA *ptr)
{
	MovieTrackingPlaneTrack *data = (MovieTrackingPlaneTrack *)(ptr->data);
	return (((data->flag) & 1) != 0);
}

void MovieTrackingPlaneTrack_select_set(PointerRNA *ptr, int value)
{
	MovieTrackingPlaneTrack *data = (MovieTrackingPlaneTrack *)(ptr->data);
	if (value) data->flag |= 1;
	else data->flag &= ~1;
}

int MovieTrackingPlaneTrack_use_auto_keying_get(PointerRNA *ptr)
{
	MovieTrackingPlaneTrack *data = (MovieTrackingPlaneTrack *)(ptr->data);
	return (((data->flag) & 8) != 0);
}

void MovieTrackingPlaneTrack_use_auto_keying_set(PointerRNA *ptr, int value)
{
	MovieTrackingPlaneTrack *data = (MovieTrackingPlaneTrack *)(ptr->data);
	if (value) data->flag |= 8;
	else data->flag &= ~8;
}

PointerRNA MovieTrackingPlaneTrack_image_get(PointerRNA *ptr)
{
	MovieTrackingPlaneTrack *data = (MovieTrackingPlaneTrack *)(ptr->data);
	return rna_pointer_inherit_refine(ptr, &RNA_Image, data->image);
}

void MovieTrackingPlaneTrack_image_set(PointerRNA *ptr, PointerRNA value)
{
	MovieTrackingPlaneTrack *data = (MovieTrackingPlaneTrack *)(ptr->data);

	if (data->image)
		id_us_min((ID *)data->image);
	if (value.data)
		id_us_plus((ID *)value.data);

	data->image = value.data;
}

float MovieTrackingPlaneTrack_image_opacity_get(PointerRNA *ptr)
{
	MovieTrackingPlaneTrack *data = (MovieTrackingPlaneTrack *)(ptr->data);
	return (float)(data->image_opacity);
}

void MovieTrackingPlaneTrack_image_opacity_set(PointerRNA *ptr, float value)
{
	MovieTrackingPlaneTrack *data = (MovieTrackingPlaneTrack *)(ptr->data);
	data->image_opacity = CLAMPIS(value, 0.0f, 1.0f);
}

static PointerRNA MovieTrackingPlaneMarkers_rna_properties_get(CollectionPropertyIterator *iter)
{
	return rna_builtin_properties_get(iter);
}

void MovieTrackingPlaneMarkers_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

	memset(iter, 0, sizeof(*iter));
	iter->parent = *ptr;
	iter->prop = (PropertyRNA *)&rna_MovieTrackingPlaneMarkers_rna_properties;

	rna_builtin_properties_begin(iter, ptr);

	if (iter->valid)
		iter->ptr = MovieTrackingPlaneMarkers_rna_properties_get(iter);
}

void MovieTrackingPlaneMarkers_rna_properties_next(CollectionPropertyIterator *iter)
{
	rna_builtin_properties_next(iter);

	if (iter->valid)
		iter->ptr = MovieTrackingPlaneMarkers_rna_properties_get(iter);
}

void MovieTrackingPlaneMarkers_rna_properties_end(CollectionPropertyIterator *iter)
{
	rna_iterator_listbase_end(iter);
}

int MovieTrackingPlaneMarkers_rna_properties_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
	return rna_builtin_properties_lookup_string(ptr, key, r_ptr);
}

PointerRNA MovieTrackingPlaneMarkers_rna_type_get(PointerRNA *ptr)
{
	return rna_builtin_type_get(ptr);
}

static PointerRNA MovieTrackingTracks_rna_properties_get(CollectionPropertyIterator *iter)
{
	return rna_builtin_properties_get(iter);
}

void MovieTrackingTracks_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

	memset(iter, 0, sizeof(*iter));
	iter->parent = *ptr;
	iter->prop = (PropertyRNA *)&rna_MovieTrackingTracks_rna_properties;

	rna_builtin_properties_begin(iter, ptr);

	if (iter->valid)
		iter->ptr = MovieTrackingTracks_rna_properties_get(iter);
}

void MovieTrackingTracks_rna_properties_next(CollectionPropertyIterator *iter)
{
	rna_builtin_properties_next(iter);

	if (iter->valid)
		iter->ptr = MovieTrackingTracks_rna_properties_get(iter);
}

void MovieTrackingTracks_rna_properties_end(CollectionPropertyIterator *iter)
{
	rna_iterator_listbase_end(iter);
}

int MovieTrackingTracks_rna_properties_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
	return rna_builtin_properties_lookup_string(ptr, key, r_ptr);
}

PointerRNA MovieTrackingTracks_rna_type_get(PointerRNA *ptr)
{
	return rna_builtin_type_get(ptr);
}

PointerRNA MovieTrackingTracks_active_get(PointerRNA *ptr)
{
	return rna_tracking_active_track_get(ptr);
}

void MovieTrackingTracks_active_set(PointerRNA *ptr, PointerRNA value)
{
	rna_tracking_active_track_set(ptr, value);
}

static PointerRNA MovieTrackingPlaneTracks_rna_properties_get(CollectionPropertyIterator *iter)
{
	return rna_builtin_properties_get(iter);
}

void MovieTrackingPlaneTracks_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

	memset(iter, 0, sizeof(*iter));
	iter->parent = *ptr;
	iter->prop = (PropertyRNA *)&rna_MovieTrackingPlaneTracks_rna_properties;

	rna_builtin_properties_begin(iter, ptr);

	if (iter->valid)
		iter->ptr = MovieTrackingPlaneTracks_rna_properties_get(iter);
}

void MovieTrackingPlaneTracks_rna_properties_next(CollectionPropertyIterator *iter)
{
	rna_builtin_properties_next(iter);

	if (iter->valid)
		iter->ptr = MovieTrackingPlaneTracks_rna_properties_get(iter);
}

void MovieTrackingPlaneTracks_rna_properties_end(CollectionPropertyIterator *iter)
{
	rna_iterator_listbase_end(iter);
}

int MovieTrackingPlaneTracks_rna_properties_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
	return rna_builtin_properties_lookup_string(ptr, key, r_ptr);
}

PointerRNA MovieTrackingPlaneTracks_rna_type_get(PointerRNA *ptr)
{
	return rna_builtin_type_get(ptr);
}

PointerRNA MovieTrackingPlaneTracks_active_get(PointerRNA *ptr)
{
	return rna_tracking_active_plane_track_get(ptr);
}

void MovieTrackingPlaneTracks_active_set(PointerRNA *ptr, PointerRNA value)
{
	rna_tracking_active_plane_track_set(ptr, value);
}

static PointerRNA MovieTrackingObjectTracks_rna_properties_get(CollectionPropertyIterator *iter)
{
	return rna_builtin_properties_get(iter);
}

void MovieTrackingObjectTracks_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

	memset(iter, 0, sizeof(*iter));
	iter->parent = *ptr;
	iter->prop = (PropertyRNA *)&rna_MovieTrackingObjectTracks_rna_properties;

	rna_builtin_properties_begin(iter, ptr);

	if (iter->valid)
		iter->ptr = MovieTrackingObjectTracks_rna_properties_get(iter);
}

void MovieTrackingObjectTracks_rna_properties_next(CollectionPropertyIterator *iter)
{
	rna_builtin_properties_next(iter);

	if (iter->valid)
		iter->ptr = MovieTrackingObjectTracks_rna_properties_get(iter);
}

void MovieTrackingObjectTracks_rna_properties_end(CollectionPropertyIterator *iter)
{
	rna_iterator_listbase_end(iter);
}

int MovieTrackingObjectTracks_rna_properties_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
	return rna_builtin_properties_lookup_string(ptr, key, r_ptr);
}

PointerRNA MovieTrackingObjectTracks_rna_type_get(PointerRNA *ptr)
{
	return rna_builtin_type_get(ptr);
}

PointerRNA MovieTrackingObjectTracks_active_get(PointerRNA *ptr)
{
	return rna_tracking_active_track_get(ptr);
}

void MovieTrackingObjectTracks_active_set(PointerRNA *ptr, PointerRNA value)
{
	rna_tracking_active_track_set(ptr, value);
}

static PointerRNA MovieTrackingObjectPlaneTracks_rna_properties_get(CollectionPropertyIterator *iter)
{
	return rna_builtin_properties_get(iter);
}

void MovieTrackingObjectPlaneTracks_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

	memset(iter, 0, sizeof(*iter));
	iter->parent = *ptr;
	iter->prop = (PropertyRNA *)&rna_MovieTrackingObjectPlaneTracks_rna_properties;

	rna_builtin_properties_begin(iter, ptr);

	if (iter->valid)
		iter->ptr = MovieTrackingObjectPlaneTracks_rna_properties_get(iter);
}

void MovieTrackingObjectPlaneTracks_rna_properties_next(CollectionPropertyIterator *iter)
{
	rna_builtin_properties_next(iter);

	if (iter->valid)
		iter->ptr = MovieTrackingObjectPlaneTracks_rna_properties_get(iter);
}

void MovieTrackingObjectPlaneTracks_rna_properties_end(CollectionPropertyIterator *iter)
{
	rna_iterator_listbase_end(iter);
}

int MovieTrackingObjectPlaneTracks_rna_properties_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
	return rna_builtin_properties_lookup_string(ptr, key, r_ptr);
}

PointerRNA MovieTrackingObjectPlaneTracks_rna_type_get(PointerRNA *ptr)
{
	return rna_builtin_type_get(ptr);
}

PointerRNA MovieTrackingObjectPlaneTracks_active_get(PointerRNA *ptr)
{
	return rna_tracking_active_plane_track_get(ptr);
}

void MovieTrackingObjectPlaneTracks_active_set(PointerRNA *ptr, PointerRNA value)
{
	rna_tracking_active_plane_track_set(ptr, value);
}

static PointerRNA MovieTrackingStabilization_rna_properties_get(CollectionPropertyIterator *iter)
{
	return rna_builtin_properties_get(iter);
}

void MovieTrackingStabilization_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

	memset(iter, 0, sizeof(*iter));
	iter->parent = *ptr;
	iter->prop = (PropertyRNA *)&rna_MovieTrackingStabilization_rna_properties;

	rna_builtin_properties_begin(iter, ptr);

	if (iter->valid)
		iter->ptr = MovieTrackingStabilization_rna_properties_get(iter);
}

void MovieTrackingStabilization_rna_properties_next(CollectionPropertyIterator *iter)
{
	rna_builtin_properties_next(iter);

	if (iter->valid)
		iter->ptr = MovieTrackingStabilization_rna_properties_get(iter);
}

void MovieTrackingStabilization_rna_properties_end(CollectionPropertyIterator *iter)
{
	rna_iterator_listbase_end(iter);
}

int MovieTrackingStabilization_rna_properties_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
	return rna_builtin_properties_lookup_string(ptr, key, r_ptr);
}

PointerRNA MovieTrackingStabilization_rna_type_get(PointerRNA *ptr)
{
	return rna_builtin_type_get(ptr);
}

int MovieTrackingStabilization_use_2d_stabilization_get(PointerRNA *ptr)
{
	MovieTrackingStabilization *data = (MovieTrackingStabilization *)(ptr->data);
	return (((data->flag) & 1) != 0);
}

void MovieTrackingStabilization_use_2d_stabilization_set(PointerRNA *ptr, int value)
{
	MovieTrackingStabilization *data = (MovieTrackingStabilization *)(ptr->data);
	if (value) data->flag |= 1;
	else data->flag &= ~1;
}

static PointerRNA MovieTrackingStabilization_tracks_get(CollectionPropertyIterator *iter)
{
	return rna_pointer_inherit_refine(&iter->parent, &RNA_MovieTrackingTrack, rna_iterator_listbase_get(iter));
}

void MovieTrackingStabilization_tracks_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

	memset(iter, 0, sizeof(*iter));
	iter->parent = *ptr;
	iter->prop = (PropertyRNA *)&rna_MovieTrackingStabilization_tracks;

	rna_tracking_stabTracks_begin(iter, ptr);

	if (iter->valid)
		iter->ptr = MovieTrackingStabilization_tracks_get(iter);
}

void MovieTrackingStabilization_tracks_next(CollectionPropertyIterator *iter)
{
	rna_iterator_listbase_next(iter);

	if (iter->valid)
		iter->ptr = MovieTrackingStabilization_tracks_get(iter);
}

void MovieTrackingStabilization_tracks_end(CollectionPropertyIterator *iter)
{
	rna_iterator_listbase_end(iter);
}

PointerRNA MovieTrackingStabilization_rotation_track_get(PointerRNA *ptr)
{
	MovieTrackingStabilization *data = (MovieTrackingStabilization *)(ptr->data);
	return rna_pointer_inherit_refine(ptr, &RNA_MovieTrackingTrack, data->rot_track);
}

void MovieTrackingStabilization_rotation_track_set(PointerRNA *ptr, PointerRNA value)
{
	MovieTrackingStabilization *data = (MovieTrackingStabilization *)(ptr->data);
	data->rot_track = value.data;
}

int MovieTrackingStabilization_active_track_index_get(PointerRNA *ptr)
{
	return rna_tracking_stabTracks_active_index_get(ptr);
}

void MovieTrackingStabilization_active_track_index_set(PointerRNA *ptr, int value)
{
	rna_tracking_stabTracks_active_index_set(ptr, value);
}

int MovieTrackingStabilization_use_autoscale_get(PointerRNA *ptr)
{
	MovieTrackingStabilization *data = (MovieTrackingStabilization *)(ptr->data);
	return (((data->flag) & 2) != 0);
}

void MovieTrackingStabilization_use_autoscale_set(PointerRNA *ptr, int value)
{
	MovieTrackingStabilization *data = (MovieTrackingStabilization *)(ptr->data);
	if (value) data->flag |= 2;
	else data->flag &= ~2;
}

float MovieTrackingStabilization_scale_max_get(PointerRNA *ptr)
{
	MovieTrackingStabilization *data = (MovieTrackingStabilization *)(ptr->data);
	return (float)(data->maxscale);
}

void MovieTrackingStabilization_scale_max_set(PointerRNA *ptr, float value)
{
	MovieTrackingStabilization *data = (MovieTrackingStabilization *)(ptr->data);
	data->maxscale = CLAMPIS(value, 0.0f, 10.0f);
}

float MovieTrackingStabilization_influence_location_get(PointerRNA *ptr)
{
	MovieTrackingStabilization *data = (MovieTrackingStabilization *)(ptr->data);
	return (float)(data->locinf);
}

void MovieTrackingStabilization_influence_location_set(PointerRNA *ptr, float value)
{
	MovieTrackingStabilization *data = (MovieTrackingStabilization *)(ptr->data);
	data->locinf = CLAMPIS(value, 0.0f, 1.0f);
}

float MovieTrackingStabilization_influence_scale_get(PointerRNA *ptr)
{
	MovieTrackingStabilization *data = (MovieTrackingStabilization *)(ptr->data);
	return (float)(data->scaleinf);
}

void MovieTrackingStabilization_influence_scale_set(PointerRNA *ptr, float value)
{
	MovieTrackingStabilization *data = (MovieTrackingStabilization *)(ptr->data);
	data->scaleinf = CLAMPIS(value, 0.0f, 1.0f);
}

int MovieTrackingStabilization_use_stabilize_rotation_get(PointerRNA *ptr)
{
	MovieTrackingStabilization *data = (MovieTrackingStabilization *)(ptr->data);
	return (((data->flag) & 4) != 0);
}

void MovieTrackingStabilization_use_stabilize_rotation_set(PointerRNA *ptr, int value)
{
	MovieTrackingStabilization *data = (MovieTrackingStabilization *)(ptr->data);
	if (value) data->flag |= 4;
	else data->flag &= ~4;
}

float MovieTrackingStabilization_influence_rotation_get(PointerRNA *ptr)
{
	MovieTrackingStabilization *data = (MovieTrackingStabilization *)(ptr->data);
	return (float)(data->rotinf);
}

void MovieTrackingStabilization_influence_rotation_set(PointerRNA *ptr, float value)
{
	MovieTrackingStabilization *data = (MovieTrackingStabilization *)(ptr->data);
	data->rotinf = CLAMPIS(value, 0.0f, 1.0f);
}

int MovieTrackingStabilization_filter_type_get(PointerRNA *ptr)
{
	MovieTrackingStabilization *data = (MovieTrackingStabilization *)(ptr->data);
	return (int)(data->filter);
}

void MovieTrackingStabilization_filter_type_set(PointerRNA *ptr, int value)
{
	MovieTrackingStabilization *data = (MovieTrackingStabilization *)(ptr->data);
	data->filter = value;
}

static PointerRNA MovieTrackingReconstructedCameras_rna_properties_get(CollectionPropertyIterator *iter)
{
	return rna_builtin_properties_get(iter);
}

void MovieTrackingReconstructedCameras_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

	memset(iter, 0, sizeof(*iter));
	iter->parent = *ptr;
	iter->prop = (PropertyRNA *)&rna_MovieTrackingReconstructedCameras_rna_properties;

	rna_builtin_properties_begin(iter, ptr);

	if (iter->valid)
		iter->ptr = MovieTrackingReconstructedCameras_rna_properties_get(iter);
}

void MovieTrackingReconstructedCameras_rna_properties_next(CollectionPropertyIterator *iter)
{
	rna_builtin_properties_next(iter);

	if (iter->valid)
		iter->ptr = MovieTrackingReconstructedCameras_rna_properties_get(iter);
}

void MovieTrackingReconstructedCameras_rna_properties_end(CollectionPropertyIterator *iter)
{
	rna_iterator_listbase_end(iter);
}

int MovieTrackingReconstructedCameras_rna_properties_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
	return rna_builtin_properties_lookup_string(ptr, key, r_ptr);
}

PointerRNA MovieTrackingReconstructedCameras_rna_type_get(PointerRNA *ptr)
{
	return rna_builtin_type_get(ptr);
}

static PointerRNA MovieReconstructedCamera_rna_properties_get(CollectionPropertyIterator *iter)
{
	return rna_builtin_properties_get(iter);
}

void MovieReconstructedCamera_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

	memset(iter, 0, sizeof(*iter));
	iter->parent = *ptr;
	iter->prop = (PropertyRNA *)&rna_MovieReconstructedCamera_rna_properties;

	rna_builtin_properties_begin(iter, ptr);

	if (iter->valid)
		iter->ptr = MovieReconstructedCamera_rna_properties_get(iter);
}

void MovieReconstructedCamera_rna_properties_next(CollectionPropertyIterator *iter)
{
	rna_builtin_properties_next(iter);

	if (iter->valid)
		iter->ptr = MovieReconstructedCamera_rna_properties_get(iter);
}

void MovieReconstructedCamera_rna_properties_end(CollectionPropertyIterator *iter)
{
	rna_iterator_listbase_end(iter);
}

int MovieReconstructedCamera_rna_properties_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
	return rna_builtin_properties_lookup_string(ptr, key, r_ptr);
}

PointerRNA MovieReconstructedCamera_rna_type_get(PointerRNA *ptr)
{
	return rna_builtin_type_get(ptr);
}

int MovieReconstructedCamera_frame_get(PointerRNA *ptr)
{
	MovieReconstructedCamera *data = (MovieReconstructedCamera *)(ptr->data);
	return (int)(data->framenr);
}

void MovieReconstructedCamera_matrix_get(PointerRNA *ptr, float values[16])
{
	MovieReconstructedCamera *data = (MovieReconstructedCamera *)(ptr->data);
	unsigned int i;

	for (i = 0; i < 16; i++) {
		values[i] = (float)(((float *)data->mat)[i]);
	}
}

float MovieReconstructedCamera_average_error_get(PointerRNA *ptr)
{
	MovieReconstructedCamera *data = (MovieReconstructedCamera *)(ptr->data);
	return (float)(data->error);
}

static PointerRNA MovieTrackingReconstruction_rna_properties_get(CollectionPropertyIterator *iter)
{
	return rna_builtin_properties_get(iter);
}

void MovieTrackingReconstruction_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

	memset(iter, 0, sizeof(*iter));
	iter->parent = *ptr;
	iter->prop = (PropertyRNA *)&rna_MovieTrackingReconstruction_rna_properties;

	rna_builtin_properties_begin(iter, ptr);

	if (iter->valid)
		iter->ptr = MovieTrackingReconstruction_rna_properties_get(iter);
}

void MovieTrackingReconstruction_rna_properties_next(CollectionPropertyIterator *iter)
{
	rna_builtin_properties_next(iter);

	if (iter->valid)
		iter->ptr = MovieTrackingReconstruction_rna_properties_get(iter);
}

void MovieTrackingReconstruction_rna_properties_end(CollectionPropertyIterator *iter)
{
	rna_iterator_listbase_end(iter);
}

int MovieTrackingReconstruction_rna_properties_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
	return rna_builtin_properties_lookup_string(ptr, key, r_ptr);
}

PointerRNA MovieTrackingReconstruction_rna_type_get(PointerRNA *ptr)
{
	return rna_builtin_type_get(ptr);
}

int MovieTrackingReconstruction_is_valid_get(PointerRNA *ptr)
{
	MovieTrackingReconstruction *data = (MovieTrackingReconstruction *)(ptr->data);
	return (((data->flag) & 1) != 0);
}

float MovieTrackingReconstruction_average_error_get(PointerRNA *ptr)
{
	MovieTrackingReconstruction *data = (MovieTrackingReconstruction *)(ptr->data);
	return (float)(data->error);
}

int MovieTrackingReconstruction_cameras_length(PointerRNA *ptr)
{
	MovieTrackingReconstruction *data = (MovieTrackingReconstruction *)(ptr->data);
	return (data->cameras == NULL) ? 0 : data->camnr;
}

static PointerRNA MovieTrackingReconstruction_cameras_get(CollectionPropertyIterator *iter)
{
	return rna_pointer_inherit_refine(&iter->parent, &RNA_MovieReconstructedCamera, rna_iterator_array_get(iter));
}

void MovieTrackingReconstruction_cameras_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{
	MovieTrackingReconstruction *data = (MovieTrackingReconstruction *)(ptr->data);

	memset(iter, 0, sizeof(*iter));
	iter->parent = *ptr;
	iter->prop = (PropertyRNA *)&rna_MovieTrackingReconstruction_cameras;

	rna_iterator_array_begin(iter, data->cameras, sizeof(data->cameras[0]), data->camnr, 0, NULL);

	if (iter->valid)
		iter->ptr = MovieTrackingReconstruction_cameras_get(iter);
}

void MovieTrackingReconstruction_cameras_next(CollectionPropertyIterator *iter)
{
	rna_iterator_array_next(iter);

	if (iter->valid)
		iter->ptr = MovieTrackingReconstruction_cameras_get(iter);
}

void MovieTrackingReconstruction_cameras_end(CollectionPropertyIterator *iter)
{
	rna_iterator_array_end(iter);
}

int MovieTrackingReconstruction_cameras_lookup_int(PointerRNA *ptr, int index, PointerRNA *r_ptr)
{
	int found = 0;
	CollectionPropertyIterator iter;

	MovieTrackingReconstruction_cameras_begin(&iter, ptr);

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
		if (found) *r_ptr = MovieTrackingReconstruction_cameras_get(&iter);
	}

	MovieTrackingReconstruction_cameras_end(&iter);

	return found;
}

static PointerRNA MovieTrackingObject_rna_properties_get(CollectionPropertyIterator *iter)
{
	return rna_builtin_properties_get(iter);
}

void MovieTrackingObject_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

	memset(iter, 0, sizeof(*iter));
	iter->parent = *ptr;
	iter->prop = (PropertyRNA *)&rna_MovieTrackingObject_rna_properties;

	rna_builtin_properties_begin(iter, ptr);

	if (iter->valid)
		iter->ptr = MovieTrackingObject_rna_properties_get(iter);
}

void MovieTrackingObject_rna_properties_next(CollectionPropertyIterator *iter)
{
	rna_builtin_properties_next(iter);

	if (iter->valid)
		iter->ptr = MovieTrackingObject_rna_properties_get(iter);
}

void MovieTrackingObject_rna_properties_end(CollectionPropertyIterator *iter)
{
	rna_iterator_listbase_end(iter);
}

int MovieTrackingObject_rna_properties_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
	return rna_builtin_properties_lookup_string(ptr, key, r_ptr);
}

PointerRNA MovieTrackingObject_rna_type_get(PointerRNA *ptr)
{
	return rna_builtin_type_get(ptr);
}

void MovieTrackingObject_name_get(PointerRNA *ptr, char *value)
{
	MovieTrackingObject *data = (MovieTrackingObject *)(ptr->data);
	BLI_strncpy_utf8(value, data->name, 64);
}

int MovieTrackingObject_name_length(PointerRNA *ptr)
{
	MovieTrackingObject *data = (MovieTrackingObject *)(ptr->data);
	return strlen(data->name);
}

void MovieTrackingObject_name_set(PointerRNA *ptr, const char *value)
{
	rna_trackingObject_name_set(ptr, value);
}

int MovieTrackingObject_is_camera_get(PointerRNA *ptr)
{
	MovieTrackingObject *data = (MovieTrackingObject *)(ptr->data);
	return (((data->flag) & 1) != 0);
}

static PointerRNA MovieTrackingObject_tracks_get(CollectionPropertyIterator *iter)
{
	return rna_pointer_inherit_refine(&iter->parent, &RNA_MovieTrackingTrack, rna_iterator_listbase_get(iter));
}

void MovieTrackingObject_tracks_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

	memset(iter, 0, sizeof(*iter));
	iter->parent = *ptr;
	iter->prop = (PropertyRNA *)&rna_MovieTrackingObject_tracks;

	rna_trackingObject_tracks_begin(iter, ptr);

	if (iter->valid)
		iter->ptr = MovieTrackingObject_tracks_get(iter);
}

void MovieTrackingObject_tracks_next(CollectionPropertyIterator *iter)
{
	rna_iterator_listbase_next(iter);

	if (iter->valid)
		iter->ptr = MovieTrackingObject_tracks_get(iter);
}

void MovieTrackingObject_tracks_end(CollectionPropertyIterator *iter)
{
	rna_iterator_listbase_end(iter);
}

int MovieTrackingObject_tracks_lookup_int(PointerRNA *ptr, int index, PointerRNA *r_ptr)
{
	int found = 0;
	CollectionPropertyIterator iter;

	MovieTrackingObject_tracks_begin(&iter, ptr);

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
		if (found) *r_ptr = MovieTrackingObject_tracks_get(&iter);
	}

	MovieTrackingObject_tracks_end(&iter);

	return found;
}

int MovieTrackingObject_tracks_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
	extern int MovieTrackingTrack_name_length(PointerRNA *);
	extern void MovieTrackingTrack_name_get(PointerRNA *, char *);

	bool found = false;
	CollectionPropertyIterator iter;
	char namebuf[1024];
	char *name;

	MovieTrackingObject_tracks_begin(&iter, ptr);

	while (iter.valid) {
		if (iter.ptr.data) {
			int namelen = MovieTrackingTrack_name_length(&iter.ptr);
			if (namelen < 1024) {
				MovieTrackingTrack_name_get(&iter.ptr, namebuf);
				if (strcmp(namebuf, key) == 0) {
					found = true;
					*r_ptr = iter.ptr;
					break;
				}
			}
			else {
				name = MEM_mallocN(namelen+1, "name string");
				MovieTrackingTrack_name_get(&iter.ptr, name);
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
		MovieTrackingObject_tracks_next(&iter);
	}
	MovieTrackingObject_tracks_end(&iter);

	return found;
}

static PointerRNA MovieTrackingObject_plane_tracks_get(CollectionPropertyIterator *iter)
{
	return rna_pointer_inherit_refine(&iter->parent, &RNA_MovieTrackingPlaneTrack, rna_iterator_listbase_get(iter));
}

void MovieTrackingObject_plane_tracks_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

	memset(iter, 0, sizeof(*iter));
	iter->parent = *ptr;
	iter->prop = (PropertyRNA *)&rna_MovieTrackingObject_plane_tracks;

	rna_trackingObject_plane_tracks_begin(iter, ptr);

	if (iter->valid)
		iter->ptr = MovieTrackingObject_plane_tracks_get(iter);
}

void MovieTrackingObject_plane_tracks_next(CollectionPropertyIterator *iter)
{
	rna_iterator_listbase_next(iter);

	if (iter->valid)
		iter->ptr = MovieTrackingObject_plane_tracks_get(iter);
}

void MovieTrackingObject_plane_tracks_end(CollectionPropertyIterator *iter)
{
	rna_iterator_listbase_end(iter);
}

int MovieTrackingObject_plane_tracks_lookup_int(PointerRNA *ptr, int index, PointerRNA *r_ptr)
{
	int found = 0;
	CollectionPropertyIterator iter;

	MovieTrackingObject_plane_tracks_begin(&iter, ptr);

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
		if (found) *r_ptr = MovieTrackingObject_plane_tracks_get(&iter);
	}

	MovieTrackingObject_plane_tracks_end(&iter);

	return found;
}

int MovieTrackingObject_plane_tracks_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
	extern int MovieTrackingPlaneTrack_name_length(PointerRNA *);
	extern void MovieTrackingPlaneTrack_name_get(PointerRNA *, char *);

	bool found = false;
	CollectionPropertyIterator iter;
	char namebuf[1024];
	char *name;

	MovieTrackingObject_plane_tracks_begin(&iter, ptr);

	while (iter.valid) {
		if (iter.ptr.data) {
			int namelen = MovieTrackingPlaneTrack_name_length(&iter.ptr);
			if (namelen < 1024) {
				MovieTrackingPlaneTrack_name_get(&iter.ptr, namebuf);
				if (strcmp(namebuf, key) == 0) {
					found = true;
					*r_ptr = iter.ptr;
					break;
				}
			}
			else {
				name = MEM_mallocN(namelen+1, "name string");
				MovieTrackingPlaneTrack_name_get(&iter.ptr, name);
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
		MovieTrackingObject_plane_tracks_next(&iter);
	}
	MovieTrackingObject_plane_tracks_end(&iter);

	return found;
}

PointerRNA MovieTrackingObject_reconstruction_get(PointerRNA *ptr)
{
	return rna_trackingObject_reconstruction_get(ptr);
}

float MovieTrackingObject_scale_get(PointerRNA *ptr)
{
	MovieTrackingObject *data = (MovieTrackingObject *)(ptr->data);
	return (float)(data->scale);
}

void MovieTrackingObject_scale_set(PointerRNA *ptr, float value)
{
	MovieTrackingObject *data = (MovieTrackingObject *)(ptr->data);
	data->scale = CLAMPIS(value, 0.0001000000f, 10000.0f);
}

int MovieTrackingObject_keyframe_a_get(PointerRNA *ptr)
{
	MovieTrackingObject *data = (MovieTrackingObject *)(ptr->data);
	return (int)(data->keyframe1);
}

void MovieTrackingObject_keyframe_a_set(PointerRNA *ptr, int value)
{
	MovieTrackingObject *data = (MovieTrackingObject *)(ptr->data);
	data->keyframe1 = value;
}

int MovieTrackingObject_keyframe_b_get(PointerRNA *ptr)
{
	MovieTrackingObject *data = (MovieTrackingObject *)(ptr->data);
	return (int)(data->keyframe2);
}

void MovieTrackingObject_keyframe_b_set(PointerRNA *ptr, int value)
{
	MovieTrackingObject *data = (MovieTrackingObject *)(ptr->data);
	data->keyframe2 = value;
}

static PointerRNA MovieTrackingDopesheet_rna_properties_get(CollectionPropertyIterator *iter)
{
	return rna_builtin_properties_get(iter);
}

void MovieTrackingDopesheet_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

	memset(iter, 0, sizeof(*iter));
	iter->parent = *ptr;
	iter->prop = (PropertyRNA *)&rna_MovieTrackingDopesheet_rna_properties;

	rna_builtin_properties_begin(iter, ptr);

	if (iter->valid)
		iter->ptr = MovieTrackingDopesheet_rna_properties_get(iter);
}

void MovieTrackingDopesheet_rna_properties_next(CollectionPropertyIterator *iter)
{
	rna_builtin_properties_next(iter);

	if (iter->valid)
		iter->ptr = MovieTrackingDopesheet_rna_properties_get(iter);
}

void MovieTrackingDopesheet_rna_properties_end(CollectionPropertyIterator *iter)
{
	rna_iterator_listbase_end(iter);
}

int MovieTrackingDopesheet_rna_properties_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
	return rna_builtin_properties_lookup_string(ptr, key, r_ptr);
}

PointerRNA MovieTrackingDopesheet_rna_type_get(PointerRNA *ptr)
{
	return rna_builtin_type_get(ptr);
}

int MovieTrackingDopesheet_sort_method_get(PointerRNA *ptr)
{
	MovieTrackingDopesheet *data = (MovieTrackingDopesheet *)(ptr->data);
	return (int)(data->sort_method);
}

void MovieTrackingDopesheet_sort_method_set(PointerRNA *ptr, int value)
{
	MovieTrackingDopesheet *data = (MovieTrackingDopesheet *)(ptr->data);
	data->sort_method = value;
}

int MovieTrackingDopesheet_use_invert_sort_get(PointerRNA *ptr)
{
	MovieTrackingDopesheet *data = (MovieTrackingDopesheet *)(ptr->data);
	return (((data->flag) & 1) != 0);
}

void MovieTrackingDopesheet_use_invert_sort_set(PointerRNA *ptr, int value)
{
	MovieTrackingDopesheet *data = (MovieTrackingDopesheet *)(ptr->data);
	if (value) data->flag |= 1;
	else data->flag &= ~1;
}

int MovieTrackingDopesheet_show_only_selected_get(PointerRNA *ptr)
{
	MovieTrackingDopesheet *data = (MovieTrackingDopesheet *)(ptr->data);
	return (((data->flag) & 2) != 0);
}

void MovieTrackingDopesheet_show_only_selected_set(PointerRNA *ptr, int value)
{
	MovieTrackingDopesheet *data = (MovieTrackingDopesheet *)(ptr->data);
	if (value) data->flag |= 2;
	else data->flag &= ~2;
}

int MovieTrackingDopesheet_show_hidden_get(PointerRNA *ptr)
{
	MovieTrackingDopesheet *data = (MovieTrackingDopesheet *)(ptr->data);
	return (((data->flag) & 4) != 0);
}

void MovieTrackingDopesheet_show_hidden_set(PointerRNA *ptr, int value)
{
	MovieTrackingDopesheet *data = (MovieTrackingDopesheet *)(ptr->data);
	if (value) data->flag |= 4;
	else data->flag &= ~4;
}

static PointerRNA MovieTracking_rna_properties_get(CollectionPropertyIterator *iter)
{
	return rna_builtin_properties_get(iter);
}

void MovieTracking_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

	memset(iter, 0, sizeof(*iter));
	iter->parent = *ptr;
	iter->prop = (PropertyRNA *)&rna_MovieTracking_rna_properties;

	rna_builtin_properties_begin(iter, ptr);

	if (iter->valid)
		iter->ptr = MovieTracking_rna_properties_get(iter);
}

void MovieTracking_rna_properties_next(CollectionPropertyIterator *iter)
{
	rna_builtin_properties_next(iter);

	if (iter->valid)
		iter->ptr = MovieTracking_rna_properties_get(iter);
}

void MovieTracking_rna_properties_end(CollectionPropertyIterator *iter)
{
	rna_iterator_listbase_end(iter);
}

int MovieTracking_rna_properties_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
	return rna_builtin_properties_lookup_string(ptr, key, r_ptr);
}

PointerRNA MovieTracking_rna_type_get(PointerRNA *ptr)
{
	return rna_builtin_type_get(ptr);
}

PointerRNA MovieTracking_settings_get(PointerRNA *ptr)
{
	MovieTracking *data = (MovieTracking *)(ptr->data);
	return rna_pointer_inherit_refine(ptr, &RNA_MovieTrackingSettings, &data->settings);
}

PointerRNA MovieTracking_camera_get(PointerRNA *ptr)
{
	MovieTracking *data = (MovieTracking *)(ptr->data);
	return rna_pointer_inherit_refine(ptr, &RNA_MovieTrackingCamera, &data->camera);
}

static PointerRNA MovieTracking_tracks_get(CollectionPropertyIterator *iter)
{
	return rna_pointer_inherit_refine(&iter->parent, &RNA_MovieTrackingTrack, rna_iterator_listbase_get(iter));
}

void MovieTracking_tracks_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

	memset(iter, 0, sizeof(*iter));
	iter->parent = *ptr;
	iter->prop = (PropertyRNA *)&rna_MovieTracking_tracks;

	rna_trackingTracks_begin(iter, ptr);

	if (iter->valid)
		iter->ptr = MovieTracking_tracks_get(iter);
}

void MovieTracking_tracks_next(CollectionPropertyIterator *iter)
{
	rna_iterator_listbase_next(iter);

	if (iter->valid)
		iter->ptr = MovieTracking_tracks_get(iter);
}

void MovieTracking_tracks_end(CollectionPropertyIterator *iter)
{
	rna_iterator_listbase_end(iter);
}

int MovieTracking_tracks_lookup_int(PointerRNA *ptr, int index, PointerRNA *r_ptr)
{
	int found = 0;
	CollectionPropertyIterator iter;

	MovieTracking_tracks_begin(&iter, ptr);

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
		if (found) *r_ptr = MovieTracking_tracks_get(&iter);
	}

	MovieTracking_tracks_end(&iter);

	return found;
}

int MovieTracking_tracks_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
	extern int MovieTrackingTrack_name_length(PointerRNA *);
	extern void MovieTrackingTrack_name_get(PointerRNA *, char *);

	bool found = false;
	CollectionPropertyIterator iter;
	char namebuf[1024];
	char *name;

	MovieTracking_tracks_begin(&iter, ptr);

	while (iter.valid) {
		if (iter.ptr.data) {
			int namelen = MovieTrackingTrack_name_length(&iter.ptr);
			if (namelen < 1024) {
				MovieTrackingTrack_name_get(&iter.ptr, namebuf);
				if (strcmp(namebuf, key) == 0) {
					found = true;
					*r_ptr = iter.ptr;
					break;
				}
			}
			else {
				name = MEM_mallocN(namelen+1, "name string");
				MovieTrackingTrack_name_get(&iter.ptr, name);
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
		MovieTracking_tracks_next(&iter);
	}
	MovieTracking_tracks_end(&iter);

	return found;
}

static PointerRNA MovieTracking_plane_tracks_get(CollectionPropertyIterator *iter)
{
	return rna_pointer_inherit_refine(&iter->parent, &RNA_MovieTrackingPlaneTrack, rna_iterator_listbase_get(iter));
}

void MovieTracking_plane_tracks_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

	memset(iter, 0, sizeof(*iter));
	iter->parent = *ptr;
	iter->prop = (PropertyRNA *)&rna_MovieTracking_plane_tracks;

	rna_trackingPlaneTracks_begin(iter, ptr);

	if (iter->valid)
		iter->ptr = MovieTracking_plane_tracks_get(iter);
}

void MovieTracking_plane_tracks_next(CollectionPropertyIterator *iter)
{
	rna_iterator_listbase_next(iter);

	if (iter->valid)
		iter->ptr = MovieTracking_plane_tracks_get(iter);
}

void MovieTracking_plane_tracks_end(CollectionPropertyIterator *iter)
{
	rna_iterator_listbase_end(iter);
}

int MovieTracking_plane_tracks_lookup_int(PointerRNA *ptr, int index, PointerRNA *r_ptr)
{
	int found = 0;
	CollectionPropertyIterator iter;

	MovieTracking_plane_tracks_begin(&iter, ptr);

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
		if (found) *r_ptr = MovieTracking_plane_tracks_get(&iter);
	}

	MovieTracking_plane_tracks_end(&iter);

	return found;
}

int MovieTracking_plane_tracks_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
	extern int MovieTrackingPlaneTrack_name_length(PointerRNA *);
	extern void MovieTrackingPlaneTrack_name_get(PointerRNA *, char *);

	bool found = false;
	CollectionPropertyIterator iter;
	char namebuf[1024];
	char *name;

	MovieTracking_plane_tracks_begin(&iter, ptr);

	while (iter.valid) {
		if (iter.ptr.data) {
			int namelen = MovieTrackingPlaneTrack_name_length(&iter.ptr);
			if (namelen < 1024) {
				MovieTrackingPlaneTrack_name_get(&iter.ptr, namebuf);
				if (strcmp(namebuf, key) == 0) {
					found = true;
					*r_ptr = iter.ptr;
					break;
				}
			}
			else {
				name = MEM_mallocN(namelen+1, "name string");
				MovieTrackingPlaneTrack_name_get(&iter.ptr, name);
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
		MovieTracking_plane_tracks_next(&iter);
	}
	MovieTracking_plane_tracks_end(&iter);

	return found;
}

PointerRNA MovieTracking_stabilization_get(PointerRNA *ptr)
{
	MovieTracking *data = (MovieTracking *)(ptr->data);
	return rna_pointer_inherit_refine(ptr, &RNA_MovieTrackingStabilization, &data->stabilization);
}

PointerRNA MovieTracking_reconstruction_get(PointerRNA *ptr)
{
	MovieTracking *data = (MovieTracking *)(ptr->data);
	return rna_pointer_inherit_refine(ptr, &RNA_MovieTrackingReconstruction, &data->reconstruction);
}

static PointerRNA MovieTracking_objects_get(CollectionPropertyIterator *iter)
{
	return rna_pointer_inherit_refine(&iter->parent, &RNA_MovieTrackingObject, rna_iterator_listbase_get(iter));
}

void MovieTracking_objects_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

	memset(iter, 0, sizeof(*iter));
	iter->parent = *ptr;
	iter->prop = (PropertyRNA *)&rna_MovieTracking_objects;

	rna_trackingObjects_begin(iter, ptr);

	if (iter->valid)
		iter->ptr = MovieTracking_objects_get(iter);
}

void MovieTracking_objects_next(CollectionPropertyIterator *iter)
{
	rna_iterator_listbase_next(iter);

	if (iter->valid)
		iter->ptr = MovieTracking_objects_get(iter);
}

void MovieTracking_objects_end(CollectionPropertyIterator *iter)
{
	rna_iterator_listbase_end(iter);
}

int MovieTracking_objects_lookup_int(PointerRNA *ptr, int index, PointerRNA *r_ptr)
{
	int found = 0;
	CollectionPropertyIterator iter;

	MovieTracking_objects_begin(&iter, ptr);

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
		if (found) *r_ptr = MovieTracking_objects_get(&iter);
	}

	MovieTracking_objects_end(&iter);

	return found;
}

int MovieTracking_objects_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
	extern int MovieTrackingObject_name_length(PointerRNA *);
	extern void MovieTrackingObject_name_get(PointerRNA *, char *);

	bool found = false;
	CollectionPropertyIterator iter;
	char namebuf[1024];
	char *name;

	MovieTracking_objects_begin(&iter, ptr);

	while (iter.valid) {
		if (iter.ptr.data) {
			int namelen = MovieTrackingObject_name_length(&iter.ptr);
			if (namelen < 1024) {
				MovieTrackingObject_name_get(&iter.ptr, namebuf);
				if (strcmp(namebuf, key) == 0) {
					found = true;
					*r_ptr = iter.ptr;
					break;
				}
			}
			else {
				name = MEM_mallocN(namelen+1, "name string");
				MovieTrackingObject_name_get(&iter.ptr, name);
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
		MovieTracking_objects_next(&iter);
	}
	MovieTracking_objects_end(&iter);

	return found;
}

int MovieTracking_active_object_index_get(PointerRNA *ptr)
{
	return rna_tracking_active_object_index_get(ptr);
}

void MovieTracking_active_object_index_set(PointerRNA *ptr, int value)
{
	rna_tracking_active_object_index_set(ptr, value);
}

PointerRNA MovieTracking_dopesheet_get(PointerRNA *ptr)
{
	MovieTracking *data = (MovieTracking *)(ptr->data);
	return rna_pointer_inherit_refine(ptr, &RNA_MovieTrackingDopesheet, &data->dopesheet);
}

static PointerRNA MovieTrackingObjects_rna_properties_get(CollectionPropertyIterator *iter)
{
	return rna_builtin_properties_get(iter);
}

void MovieTrackingObjects_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

	memset(iter, 0, sizeof(*iter));
	iter->parent = *ptr;
	iter->prop = (PropertyRNA *)&rna_MovieTrackingObjects_rna_properties;

	rna_builtin_properties_begin(iter, ptr);

	if (iter->valid)
		iter->ptr = MovieTrackingObjects_rna_properties_get(iter);
}

void MovieTrackingObjects_rna_properties_next(CollectionPropertyIterator *iter)
{
	rna_builtin_properties_next(iter);

	if (iter->valid)
		iter->ptr = MovieTrackingObjects_rna_properties_get(iter);
}

void MovieTrackingObjects_rna_properties_end(CollectionPropertyIterator *iter)
{
	rna_iterator_listbase_end(iter);
}

int MovieTrackingObjects_rna_properties_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
	return rna_builtin_properties_lookup_string(ptr, key, r_ptr);
}

PointerRNA MovieTrackingObjects_rna_type_get(PointerRNA *ptr)
{
	return rna_builtin_type_get(ptr);
}

PointerRNA MovieTrackingObjects_active_get(PointerRNA *ptr)
{
	return rna_tracking_active_object_get(ptr);
}

void MovieTrackingObjects_active_set(PointerRNA *ptr, PointerRNA value)
{
	rna_tracking_active_object_set(ptr, value);
}





struct MovieTrackingMarker *MovieTrackingMarkers_find_frame(struct MovieTrackingTrack *_self, int frame, int exact)
{
	return rna_trackingMarkers_find_frame(_self, frame, exact);
}

void MovieTrackingMarkers_find_frame_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	struct MovieTrackingTrack *_self;
	int frame;
	int exact;
	struct MovieTrackingMarker *marker;
	char *_data, *_retdata;
	
	_self = (struct MovieTrackingTrack *)_ptr->data;
	_data = (char *)_parms->data;
	frame = *((int *)_data);
	_data += 4;
	exact = *((int *)_data);
	_data += 4;
	_retdata = _data;
	
	marker = rna_trackingMarkers_find_frame(_self, frame, exact);
	*((struct MovieTrackingMarker **)_retdata) = marker;
}

struct MovieTrackingMarker *MovieTrackingMarkers_insert_frame(struct MovieTrackingTrack *_self, int frame, float co[2])
{
	return rna_trackingMarkers_insert_frame(_self, frame, co);
}

void MovieTrackingMarkers_insert_frame_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	struct MovieTrackingTrack *_self;
	int frame;
	float *co;
	struct MovieTrackingMarker *marker;
	char *_data, *_retdata;
	
	_self = (struct MovieTrackingTrack *)_ptr->data;
	_data = (char *)_parms->data;
	frame = *((int *)_data);
	_data += 4;
	co = ((float *)_data);
	_data += 8;
	_retdata = _data;
	
	marker = rna_trackingMarkers_insert_frame(_self, frame, co);
	*((struct MovieTrackingMarker **)_retdata) = marker;
}

void MovieTrackingMarkers_delete_frame(struct MovieTrackingTrack *_self, int frame)
{
	rna_trackingMarkers_delete_frame(_self, frame);
}

void MovieTrackingMarkers_delete_frame_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	struct MovieTrackingTrack *_self;
	int frame;
	char *_data;
	
	_self = (struct MovieTrackingTrack *)_ptr->data;
	_data = (char *)_parms->data;
	frame = *((int *)_data);
	
	rna_trackingMarkers_delete_frame(_self, frame);
}

/* Repeated prototypes to detect errors */

struct MovieTrackingMarker *rna_trackingMarkers_find_frame(struct MovieTrackingTrack *_self, int frame, int exact);
struct MovieTrackingMarker *rna_trackingMarkers_insert_frame(struct MovieTrackingTrack *_self, int frame, float co[2]);
void rna_trackingMarkers_delete_frame(struct MovieTrackingTrack *_self, int frame);



struct MovieTrackingPlaneMarker *MovieTrackingPlaneMarkers_find_frame(struct MovieTrackingPlaneTrack *_self, int frame, int exact)
{
	return rna_trackingPlaneMarkers_find_frame(_self, frame, exact);
}

void MovieTrackingPlaneMarkers_find_frame_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	struct MovieTrackingPlaneTrack *_self;
	int frame;
	int exact;
	struct MovieTrackingPlaneMarker *plane_marker;
	char *_data, *_retdata;
	
	_self = (struct MovieTrackingPlaneTrack *)_ptr->data;
	_data = (char *)_parms->data;
	frame = *((int *)_data);
	_data += 4;
	exact = *((int *)_data);
	_data += 4;
	_retdata = _data;
	
	plane_marker = rna_trackingPlaneMarkers_find_frame(_self, frame, exact);
	*((struct MovieTrackingPlaneMarker **)_retdata) = plane_marker;
}

struct MovieTrackingPlaneMarker *MovieTrackingPlaneMarkers_insert_frame(struct MovieTrackingPlaneTrack *_self, int frame)
{
	return rna_trackingPlaneMarkers_insert_frame(_self, frame);
}

void MovieTrackingPlaneMarkers_insert_frame_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	struct MovieTrackingPlaneTrack *_self;
	int frame;
	struct MovieTrackingPlaneMarker *plane_marker;
	char *_data, *_retdata;
	
	_self = (struct MovieTrackingPlaneTrack *)_ptr->data;
	_data = (char *)_parms->data;
	frame = *((int *)_data);
	_data += 4;
	_retdata = _data;
	
	plane_marker = rna_trackingPlaneMarkers_insert_frame(_self, frame);
	*((struct MovieTrackingPlaneMarker **)_retdata) = plane_marker;
}

void MovieTrackingPlaneMarkers_delete_frame(struct MovieTrackingPlaneTrack *_self, int frame)
{
	rna_trackingPlaneMarkers_delete_frame(_self, frame);
}

void MovieTrackingPlaneMarkers_delete_frame_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	struct MovieTrackingPlaneTrack *_self;
	int frame;
	char *_data;
	
	_self = (struct MovieTrackingPlaneTrack *)_ptr->data;
	_data = (char *)_parms->data;
	frame = *((int *)_data);
	
	rna_trackingPlaneMarkers_delete_frame(_self, frame);
}

/* Repeated prototypes to detect errors */

struct MovieTrackingPlaneMarker *rna_trackingPlaneMarkers_find_frame(struct MovieTrackingPlaneTrack *_self, int frame, int exact);
struct MovieTrackingPlaneMarker *rna_trackingPlaneMarkers_insert_frame(struct MovieTrackingPlaneTrack *_self, int frame);
void rna_trackingPlaneMarkers_delete_frame(struct MovieTrackingPlaneTrack *_self, int frame);

struct MovieTrackingTrack *MovieTrackingTracks_new(struct ID *_selfid, struct MovieTracking *_self, const char * name, int frame)
{
	return rna_trackingTracks_new(_selfid, _self, name, frame);
}

void MovieTrackingTracks_new_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	struct ID *_selfid;
	struct MovieTracking *_self;
	const char * name;
	int frame;
	struct MovieTrackingTrack *track;
	char *_data, *_retdata;
	
	_selfid = (struct ID *)_ptr->id.data;
	_self = (struct MovieTracking *)_ptr->data;
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
	
	track = rna_trackingTracks_new(_selfid, _self, name, frame);
	*((struct MovieTrackingTrack **)_retdata) = track;
}

/* Repeated prototypes to detect errors */

struct MovieTrackingTrack *rna_trackingTracks_new(struct ID *_selfid, struct MovieTracking *_self, const char * name, int frame);


struct MovieTrackingTrack *MovieTrackingObjectTracks_new(struct ID *_selfid, struct MovieTrackingObject *_self, const char * name, int frame)
{
	return rna_trackingObject_tracks_new(_selfid, _self, name, frame);
}

void MovieTrackingObjectTracks_new_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	struct ID *_selfid;
	struct MovieTrackingObject *_self;
	const char * name;
	int frame;
	struct MovieTrackingTrack *track;
	char *_data, *_retdata;
	
	_selfid = (struct ID *)_ptr->id.data;
	_self = (struct MovieTrackingObject *)_ptr->data;
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
	
	track = rna_trackingObject_tracks_new(_selfid, _self, name, frame);
	*((struct MovieTrackingTrack **)_retdata) = track;
}

/* Repeated prototypes to detect errors */

struct MovieTrackingTrack *rna_trackingObject_tracks_new(struct ID *_selfid, struct MovieTrackingObject *_self, const char * name, int frame);



struct MovieReconstructedCamera *MovieTrackingReconstructedCameras_find_frame(struct ID *_selfid, struct MovieTrackingReconstruction *_self, int frame)
{
	return rna_trackingCameras_find_frame(_selfid, _self, frame);
}

void MovieTrackingReconstructedCameras_find_frame_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	struct ID *_selfid;
	struct MovieTrackingReconstruction *_self;
	int frame;
	struct MovieReconstructedCamera *camera;
	char *_data, *_retdata;
	
	_selfid = (struct ID *)_ptr->id.data;
	_self = (struct MovieTrackingReconstruction *)_ptr->data;
	_data = (char *)_parms->data;
	frame = *((int *)_data);
	_data += 4;
	_retdata = _data;
	
	camera = rna_trackingCameras_find_frame(_selfid, _self, frame);
	*((struct MovieReconstructedCamera **)_retdata) = camera;
}

void MovieTrackingReconstructedCameras_matrix_from_frame(struct ID *_selfid, struct MovieTrackingReconstruction *_self, int frame, float matrix[16])
{
	rna_trackingCameras_matrix_from_frame(_selfid, _self, frame, matrix);
}

void MovieTrackingReconstructedCameras_matrix_from_frame_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	struct ID *_selfid;
	struct MovieTrackingReconstruction *_self;
	int frame;
	float *matrix;
	char *_data;
	
	_selfid = (struct ID *)_ptr->id.data;
	_self = (struct MovieTrackingReconstruction *)_ptr->data;
	_data = (char *)_parms->data;
	frame = *((int *)_data);
	_data += 4;
	matrix = ((float *)_data);
	
	rna_trackingCameras_matrix_from_frame(_selfid, _self, frame, matrix);
}

/* Repeated prototypes to detect errors */

struct MovieReconstructedCamera *rna_trackingCameras_find_frame(struct ID *_selfid, struct MovieTrackingReconstruction *_self, int frame);
void rna_trackingCameras_matrix_from_frame(struct ID *_selfid, struct MovieTrackingReconstruction *_self, int frame, float matrix[16]);






struct MovieTrackingObject *MovieTrackingObjects_new(struct MovieTracking *_self, const char * name)
{
	return rna_trackingObject_new(_self, name);
}

void MovieTrackingObjects_new_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	struct MovieTracking *_self;
	const char * name;
	struct MovieTrackingObject *object;
	char *_data, *_retdata;
	
	_self = (struct MovieTracking *)_ptr->data;
	_data = (char *)_parms->data;
	name = *((const char * *)_data);
#if defined(SPEC_ILP32)
	_data += 4;
#else
	_data += 8;
#endif
	_retdata = _data;
	
	object = rna_trackingObject_new(_self, name);
	*((struct MovieTrackingObject **)_retdata) = object;
}

void MovieTrackingObjects_remove(struct MovieTracking *_self, ReportList *reports, struct PointerRNA *object)
{
	rna_trackingObject_remove(_self, reports, object);
}

void MovieTrackingObjects_remove_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	struct MovieTracking *_self;
	struct PointerRNA *object;
	char *_data;
	
	_self = (struct MovieTracking *)_ptr->data;
	_data = (char *)_parms->data;
	object = *((struct PointerRNA **)_data);
	
	rna_trackingObject_remove(_self, reports, object);
}

/* Repeated prototypes to detect errors */

struct MovieTrackingObject *rna_trackingObject_new(struct MovieTracking *_self, const char * name);
void rna_trackingObject_remove(struct MovieTracking *_self, ReportList *reports, struct PointerRNA *object);

/* Movie tracking settings */
CollectionPropertyRNA rna_MovieTrackingSettings_rna_properties = {
	{(PropertyRNA *)&rna_MovieTrackingSettings_rna_type, NULL,
	-1, "rna_properties", 128, "Properties",
	"RNA property collection",
	0, "*",
	PROP_COLLECTION, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	MovieTrackingSettings_rna_properties_begin, MovieTrackingSettings_rna_properties_next, MovieTrackingSettings_rna_properties_end, MovieTrackingSettings_rna_properties_get, NULL, NULL, MovieTrackingSettings_rna_properties_lookup_string, NULL, &RNA_Property
};

PointerPropertyRNA rna_MovieTrackingSettings_rna_type = {
	{(PropertyRNA *)&rna_MovieTrackingSettings_speed, (PropertyRNA *)&rna_MovieTrackingSettings_rna_properties,
	-1, "rna_type", 8912896, "RNA",
	"RNA type definition",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	MovieTrackingSettings_rna_type_get, NULL, NULL, NULL,&RNA_Struct
};

static EnumPropertyItem rna_MovieTrackingSettings_speed_items[6] = {
	{0, "FASTEST", 0, "Fastest", "Track as fast as it\'s possible"},
	{5, "DOUBLE", 0, "Double", "Track with double speed"},
	{1, "REALTIME", 0, "Realtime", "Track with realtime speed"},
	{2, "HALF", 0, "Half", "Track with half of realtime speed"},
	{4, "QUARTER", 0, "Quarter", "Track with quarter of realtime speed"},
	{0, NULL, 0, NULL, NULL}
};

EnumPropertyRNA rna_MovieTrackingSettings_speed = {
	{(PropertyRNA *)&rna_MovieTrackingSettings_use_keyframe_selection, (PropertyRNA *)&rna_MovieTrackingSettings_rna_type,
	-1, "speed", 1, "Speed",
	"Limit speed of tracking to make visual feedback easier (this does not affect the tracking quality)",
	0, "*",
	PROP_ENUM, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	MovieTrackingSettings_speed_get, MovieTrackingSettings_speed_set, NULL, NULL, NULL, NULL, rna_MovieTrackingSettings_speed_items, 5, 0
};

BoolPropertyRNA rna_MovieTrackingSettings_use_keyframe_selection = {
	{(PropertyRNA *)&rna_MovieTrackingSettings_refine_intrinsics, (PropertyRNA *)&rna_MovieTrackingSettings_speed,
	-1, "use_keyframe_selection", 1, "Keyframe Selection",
	"Automatically select keyframes when solving camera/object motion",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	MovieTrackingSettings_use_keyframe_selection_get, MovieTrackingSettings_use_keyframe_selection_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

static EnumPropertyItem rna_MovieTrackingSettings_refine_intrinsics_items[8] = {
	{0, "NONE", 0, "Nothing", "Do not refine camera intrinsics"},
	{1, "FOCAL_LENGTH", 0, "Focal Length", "Refine focal length"},
	{5, "FOCAL_LENGTH_RADIAL_K1", 0, "Focal length, K1", "Refine focal length and radial distortion K1"},
	{21, "FOCAL_LENGTH_RADIAL_K1_K2", 0, "Focal length, K1, K2", "Refine focal length and radial distortion K1 and K2"},
	{23, "FOCAL_LENGTH_PRINCIPAL_POINT_RADIAL_K1_K2", 0, "Focal Length, Optical Center, K1, K2", "Refine focal length, optical center and radial distortion K1 and K2"},
	{3, "FOCAL_LENGTH_PRINCIPAL_POINT", 0, "Focal Length, Optical Center", "Refine focal length and optical center"},
	{20, "RADIAL_K1_K2", 0, "K1, K2", "Refine radial distortion K1 and K2"},
	{0, NULL, 0, NULL, NULL}
};

EnumPropertyRNA rna_MovieTrackingSettings_refine_intrinsics = {
	{(PropertyRNA *)&rna_MovieTrackingSettings_distance, (PropertyRNA *)&rna_MovieTrackingSettings_use_keyframe_selection,
	-1, "refine_intrinsics", 1, "Refine",
	"Refine intrinsics during camera solving",
	0, "*",
	PROP_ENUM, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	MovieTrackingSettings_refine_intrinsics_get, MovieTrackingSettings_refine_intrinsics_set, NULL, NULL, NULL, NULL, rna_MovieTrackingSettings_refine_intrinsics_items, 7, 0
};

FloatPropertyRNA rna_MovieTrackingSettings_distance = {
	{(PropertyRNA *)&rna_MovieTrackingSettings_clean_frames, (PropertyRNA *)&rna_MovieTrackingSettings_refine_intrinsics,
	-1, "distance", 8193, "Distance",
	"Distance between two bundles used for scene scaling",
	0, "*",
	PROP_FLOAT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	offsetof(MovieTrackingSettings, dist), 4, NULL},
	MovieTrackingSettings_distance_get, MovieTrackingSettings_distance_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, -10000.0f, 10000.0f, -FLT_MAX, FLT_MAX, 10.0f, 3, 1.0f, NULL
};

IntPropertyRNA rna_MovieTrackingSettings_clean_frames = {
	{(PropertyRNA *)&rna_MovieTrackingSettings_clean_error, (PropertyRNA *)&rna_MovieTrackingSettings_distance,
	-1, "clean_frames", 8193, "Tracked Frames",
	"Effect on tracks which are tracked less than the specified amount of frames",
	0, "*",
	PROP_INT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	offsetof(MovieTrackingSettings, clean_frames), 0, NULL},
	MovieTrackingSettings_clean_frames_get, MovieTrackingSettings_clean_frames_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL,
	0, INT_MAX, 0, INT_MAX, 1, 0, NULL
};

FloatPropertyRNA rna_MovieTrackingSettings_clean_error = {
	{(PropertyRNA *)&rna_MovieTrackingSettings_clean_action, (PropertyRNA *)&rna_MovieTrackingSettings_clean_frames,
	-1, "clean_error", 8193, "Reprojection Error",
	"Effect on tracks which have a larger re-projection error",
	0, "*",
	PROP_FLOAT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	offsetof(MovieTrackingSettings, clean_error), 4, NULL},
	MovieTrackingSettings_clean_error_get, MovieTrackingSettings_clean_error_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, FLT_MAX, 0.0f, FLT_MAX, 10.0f, 3, 0.0f, NULL
};

static EnumPropertyItem rna_MovieTrackingSettings_clean_action_items[4] = {
	{0, "SELECT", 0, "Select", "Select unclean tracks"},
	{1, "DELETE_TRACK", 0, "Delete Track", "Delete unclean tracks"},
	{2, "DELETE_SEGMENTS", 0, "Delete Segments", "Delete unclean segments of tracks"},
	{0, NULL, 0, NULL, NULL}
};

EnumPropertyRNA rna_MovieTrackingSettings_clean_action = {
	{(PropertyRNA *)&rna_MovieTrackingSettings_show_default_expanded, (PropertyRNA *)&rna_MovieTrackingSettings_clean_error,
	-1, "clean_action", 1, "Action",
	"Cleanup action to execute",
	0, "*",
	PROP_ENUM, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	MovieTrackingSettings_clean_action_get, MovieTrackingSettings_clean_action_set, NULL, NULL, NULL, NULL, rna_MovieTrackingSettings_clean_action_items, 3, 0
};

BoolPropertyRNA rna_MovieTrackingSettings_show_default_expanded = {
	{(PropertyRNA *)&rna_MovieTrackingSettings_show_extra_expanded, (PropertyRNA *)&rna_MovieTrackingSettings_clean_action,
	-1, "show_default_expanded", 4097, "Show Expanded",
	"Show default options expanded in the user interface",
	4, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	MovieTrackingSettings_show_default_expanded_get, MovieTrackingSettings_show_default_expanded_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_MovieTrackingSettings_show_extra_expanded = {
	{(PropertyRNA *)&rna_MovieTrackingSettings_use_tripod_solver, (PropertyRNA *)&rna_MovieTrackingSettings_show_default_expanded,
	-1, "show_extra_expanded", 4097, "Show Expanded",
	"Show extra options expanded in the user interface",
	4, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	MovieTrackingSettings_show_extra_expanded_get, MovieTrackingSettings_show_extra_expanded_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_MovieTrackingSettings_use_tripod_solver = {
	{(PropertyRNA *)&rna_MovieTrackingSettings_default_frames_limit, (PropertyRNA *)&rna_MovieTrackingSettings_show_extra_expanded,
	-1, "use_tripod_solver", 1, "Tripod Motion",
	"Use special solver to track a stable camera position, such as a tripod",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	MovieTrackingSettings_use_tripod_solver_get, MovieTrackingSettings_use_tripod_solver_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

IntPropertyRNA rna_MovieTrackingSettings_default_frames_limit = {
	{(PropertyRNA *)&rna_MovieTrackingSettings_default_pattern_match, (PropertyRNA *)&rna_MovieTrackingSettings_use_tripod_solver,
	-1, "default_frames_limit", 8193, "Frames Limit",
	"Every tracking cycle, this number of frames are tracked",
	0, "*",
	PROP_INT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	offsetof(MovieTrackingSettings, default_frames_limit), 1, NULL},
	MovieTrackingSettings_default_frames_limit_get, MovieTrackingSettings_default_frames_limit_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL,
	0, 32767, 0, 32767, 1, 0, NULL
};

static EnumPropertyItem rna_MovieTrackingSettings_default_pattern_match_items[3] = {
	{0, "KEYFRAME", 0, "Keyframe", "Track pattern from keyframe to next frame"},
	{1, "PREV_FRAME", 0, "Previous frame", "Track pattern from current frame to next frame"},
	{0, NULL, 0, NULL, NULL}
};

EnumPropertyRNA rna_MovieTrackingSettings_default_pattern_match = {
	{(PropertyRNA *)&rna_MovieTrackingSettings_default_margin, (PropertyRNA *)&rna_MovieTrackingSettings_default_frames_limit,
	-1, "default_pattern_match", 1, "Pattern Match",
	"Track pattern from given frame when tracking marker to next frame",
	0, "*",
	PROP_ENUM, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	MovieTrackingSettings_default_pattern_match_get, MovieTrackingSettings_default_pattern_match_set, NULL, NULL, NULL, NULL, rna_MovieTrackingSettings_default_pattern_match_items, 2, 0
};

IntPropertyRNA rna_MovieTrackingSettings_default_margin = {
	{(PropertyRNA *)&rna_MovieTrackingSettings_default_motion_model, (PropertyRNA *)&rna_MovieTrackingSettings_default_pattern_match,
	-1, "default_margin", 8193, "Margin",
	"Default distance from image boundary at which marker stops tracking",
	0, "*",
	PROP_INT, PROP_PIXEL | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	offsetof(MovieTrackingSettings, default_margin), 1, NULL},
	MovieTrackingSettings_default_margin_get, MovieTrackingSettings_default_margin_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL,
	0, 300, 0, 300, 1, 0, NULL
};

static EnumPropertyItem rna_MovieTrackingSettings_default_motion_model_items[7] = {
	{5, "Perspective", 0, "Perspective", "Search for markers that are perspectively deformed (homography) between frames"},
	{4, "Affine", 0, "Affine", "Search for markers that are affine-deformed (t, r, k, and skew) between frames"},
	{3, "LocRotScale", 0, "LocRotScale", "Search for markers that are translated, rotated, and scaled between frames"},
	{2, "LocScale", 0, "LocScale", "Search for markers that are translated and scaled between frames"},
	{1, "LocRot", 0, "LocRot", "Search for markers that are translated and rotated between frames"},
	{0, "Loc", 0, "Loc", "Search for markers that are translated between frames"},
	{0, NULL, 0, NULL, NULL}
};

EnumPropertyRNA rna_MovieTrackingSettings_default_motion_model = {
	{(PropertyRNA *)&rna_MovieTrackingSettings_use_default_brute, (PropertyRNA *)&rna_MovieTrackingSettings_default_margin,
	-1, "default_motion_model", 1, "Motion model",
	"Default motion model to use for tracking",
	0, "*",
	PROP_ENUM, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	MovieTrackingSettings_default_motion_model_get, MovieTrackingSettings_default_motion_model_set, NULL, NULL, NULL, NULL, rna_MovieTrackingSettings_default_motion_model_items, 6, 0
};

BoolPropertyRNA rna_MovieTrackingSettings_use_default_brute = {
	{(PropertyRNA *)&rna_MovieTrackingSettings_use_default_mask, (PropertyRNA *)&rna_MovieTrackingSettings_default_motion_model,
	-1, "use_default_brute", 3, "Prepass",
	"Use a brute-force translation-only initialization when tracking",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 338886656, NULL, NULL,
	0, -1, NULL},
	MovieTrackingSettings_use_default_brute_get, MovieTrackingSettings_use_default_brute_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_MovieTrackingSettings_use_default_mask = {
	{(PropertyRNA *)&rna_MovieTrackingSettings_use_default_normalization, (PropertyRNA *)&rna_MovieTrackingSettings_use_default_brute,
	-1, "use_default_mask", 3, "Use Mask",
	"Use a grease pencil datablock as a mask to use only specified areas of pattern when tracking",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 338886656, NULL, NULL,
	0, -1, NULL},
	MovieTrackingSettings_use_default_mask_get, MovieTrackingSettings_use_default_mask_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_MovieTrackingSettings_use_default_normalization = {
	{(PropertyRNA *)&rna_MovieTrackingSettings_default_correlation_min, (PropertyRNA *)&rna_MovieTrackingSettings_use_default_mask,
	-1, "use_default_normalization", 3, "Normalize",
	"Normalize light intensities while tracking (slower)",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 338886656, NULL, NULL,
	0, -1, NULL},
	MovieTrackingSettings_use_default_normalization_get, MovieTrackingSettings_use_default_normalization_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

FloatPropertyRNA rna_MovieTrackingSettings_default_correlation_min = {
	{(PropertyRNA *)&rna_MovieTrackingSettings_default_pattern_size, (PropertyRNA *)&rna_MovieTrackingSettings_use_default_normalization,
	-1, "default_correlation_min", 8193, "Correlation",
	"Default minimum value of correlation between matched pattern and reference that is still treated as successful tracking",
	0, "*",
	PROP_FLOAT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	offsetof(MovieTrackingSettings, default_minimum_correlation), 4, NULL},
	MovieTrackingSettings_default_correlation_min_get, MovieTrackingSettings_default_correlation_min_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 1.0f, 0.0f, 1.0f, 0.0500000007f, 3, 0.0f, NULL
};

IntPropertyRNA rna_MovieTrackingSettings_default_pattern_size = {
	{(PropertyRNA *)&rna_MovieTrackingSettings_default_search_size, (PropertyRNA *)&rna_MovieTrackingSettings_default_correlation_min,
	-1, "default_pattern_size", 8193, "Pattern Size",
	"Size of pattern area for newly created tracks",
	0, "*",
	PROP_INT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_tracking_defaultSettings_patternUpdate, 0, NULL, NULL,
	offsetof(MovieTrackingSettings, default_pattern_size), 1, NULL},
	MovieTrackingSettings_default_pattern_size_get, MovieTrackingSettings_default_pattern_size_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL,
	5, 1000, 5, 1000, 1, 0, NULL
};

IntPropertyRNA rna_MovieTrackingSettings_default_search_size = {
	{(PropertyRNA *)&rna_MovieTrackingSettings_use_default_red_channel, (PropertyRNA *)&rna_MovieTrackingSettings_default_pattern_size,
	-1, "default_search_size", 8193, "Search Size",
	"Size of search area for newly created tracks",
	0, "*",
	PROP_INT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_tracking_defaultSettings_searchUpdate, 0, NULL, NULL,
	offsetof(MovieTrackingSettings, default_search_size), 1, NULL},
	MovieTrackingSettings_default_search_size_get, MovieTrackingSettings_default_search_size_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL,
	5, 1000, 5, 1000, 1, 0, NULL
};

BoolPropertyRNA rna_MovieTrackingSettings_use_default_red_channel = {
	{(PropertyRNA *)&rna_MovieTrackingSettings_use_default_green_channel, (PropertyRNA *)&rna_MovieTrackingSettings_default_search_size,
	-1, "use_default_red_channel", 3, "Use Red Channel",
	"Use red channel from footage for tracking",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 338886656, NULL, NULL,
	0, -1, NULL},
	MovieTrackingSettings_use_default_red_channel_get, MovieTrackingSettings_use_default_red_channel_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_MovieTrackingSettings_use_default_green_channel = {
	{(PropertyRNA *)&rna_MovieTrackingSettings_use_default_blue_channel, (PropertyRNA *)&rna_MovieTrackingSettings_use_default_red_channel,
	-1, "use_default_green_channel", 3, "Use Green Channel",
	"Use green channel from footage for tracking",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 338886656, NULL, NULL,
	0, -1, NULL},
	MovieTrackingSettings_use_default_green_channel_get, MovieTrackingSettings_use_default_green_channel_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_MovieTrackingSettings_use_default_blue_channel = {
	{(PropertyRNA *)&rna_MovieTrackingSettings_default_weight, (PropertyRNA *)&rna_MovieTrackingSettings_use_default_green_channel,
	-1, "use_default_blue_channel", 3, "Use Blue Channel",
	"Use blue channel from footage for tracking",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 338886656, NULL, NULL,
	0, -1, NULL},
	MovieTrackingSettings_use_default_blue_channel_get, MovieTrackingSettings_use_default_blue_channel_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

FloatPropertyRNA rna_MovieTrackingSettings_default_weight = {
	{(PropertyRNA *)&rna_MovieTrackingSettings_object_distance, (PropertyRNA *)&rna_MovieTrackingSettings_use_default_blue_channel,
	-1, "default_weight", 8195, "Weight",
	"Influence of newly created track on a final solution",
	0, "*",
	PROP_FLOAT, PROP_FACTOR | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	offsetof(MovieTrackingSettings, default_weight), 4, NULL},
	MovieTrackingSettings_default_weight_get, MovieTrackingSettings_default_weight_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 1.0f, 0.0f, 1.0f, 10.0f, 3, 0.0f, NULL
};

FloatPropertyRNA rna_MovieTrackingSettings_object_distance = {
	{NULL, (PropertyRNA *)&rna_MovieTrackingSettings_default_weight,
	-1, "object_distance", 8193, "Distance",
	"Distance between two bundles used for object scaling",
	0, "*",
	PROP_FLOAT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	offsetof(MovieTrackingSettings, object_distance), 4, NULL},
	MovieTrackingSettings_object_distance_get, MovieTrackingSettings_object_distance_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0010000000f, 10000.0f, 0.0010000000f, 10000.0f, 1.0f, 3, 1.0f, NULL
};

StructRNA RNA_MovieTrackingSettings = {
	{(ContainerRNA *)&RNA_MovieTrackingCamera, (ContainerRNA *)&RNA_MovieClipScopes,
	NULL,
	{(PropertyRNA *)&rna_MovieTrackingSettings_rna_properties, (PropertyRNA *)&rna_MovieTrackingSettings_object_distance}},
	"MovieTrackingSettings", NULL, NULL, 4, "Movie tracking settings",
	"Match moving settings",
	"*", 17,
	NULL, (PropertyRNA *)&rna_MovieTrackingSettings_rna_properties,
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

/* Movie tracking camera data */
CollectionPropertyRNA rna_MovieTrackingCamera_rna_properties = {
	{(PropertyRNA *)&rna_MovieTrackingCamera_rna_type, NULL,
	-1, "rna_properties", 128, "Properties",
	"RNA property collection",
	0, "*",
	PROP_COLLECTION, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	MovieTrackingCamera_rna_properties_begin, MovieTrackingCamera_rna_properties_next, MovieTrackingCamera_rna_properties_end, MovieTrackingCamera_rna_properties_get, NULL, NULL, MovieTrackingCamera_rna_properties_lookup_string, NULL, &RNA_Property
};

PointerPropertyRNA rna_MovieTrackingCamera_rna_type = {
	{(PropertyRNA *)&rna_MovieTrackingCamera_distortion_model, (PropertyRNA *)&rna_MovieTrackingCamera_rna_properties,
	-1, "rna_type", 8912896, "RNA",
	"RNA type definition",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	MovieTrackingCamera_rna_type_get, NULL, NULL, NULL,&RNA_Struct
};

static EnumPropertyItem rna_MovieTrackingCamera_distortion_model_items[3] = {
	{0, "POLYNOMIAL", 0, "Polynomial", "Radial distortion model which fits common cameras"},
	{1, "DIVISION", 0, "Divisions", "Division distortion model which better represents wide-angle cameras"},
	{0, NULL, 0, NULL, NULL}
};

EnumPropertyRNA rna_MovieTrackingCamera_distortion_model = {
	{(PropertyRNA *)&rna_MovieTrackingCamera_sensor_width, (PropertyRNA *)&rna_MovieTrackingCamera_rna_type,
	-1, "distortion_model", 1, "Distortion Model",
	"Distortion model used for camera lenses",
	0, "*",
	PROP_ENUM, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_tracking_resetIntrinsics, 335544321, NULL, NULL,
	0, -1, NULL},
	MovieTrackingCamera_distortion_model_get, MovieTrackingCamera_distortion_model_set, NULL, NULL, NULL, NULL, rna_MovieTrackingCamera_distortion_model_items, 2, 0
};

FloatPropertyRNA rna_MovieTrackingCamera_sensor_width = {
	{(PropertyRNA *)&rna_MovieTrackingCamera_focal_length, (PropertyRNA *)&rna_MovieTrackingCamera_distortion_model,
	-1, "sensor_width", 8193, "Sensor",
	"Width of CCD sensor in millimeters",
	0, "*",
	PROP_FLOAT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 335544321, NULL, NULL,
	offsetof(MovieTrackingCamera, sensor_width), 4, NULL},
	MovieTrackingCamera_sensor_width_get, MovieTrackingCamera_sensor_width_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 500.0f, 0.0f, 500.0f, 10.0f, 3, 0.0f, NULL
};

FloatPropertyRNA rna_MovieTrackingCamera_focal_length = {
	{(PropertyRNA *)&rna_MovieTrackingCamera_focal_length_pixels, (PropertyRNA *)&rna_MovieTrackingCamera_sensor_width,
	-1, "focal_length", 1, "Focal Length",
	"Camera\'s focal length",
	0, "*",
	PROP_FLOAT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 335544321, NULL, NULL,
	0, -1, NULL},
	MovieTrackingCamera_focal_length_get, MovieTrackingCamera_focal_length_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0001000000f, 5000.0f, 0.0001000000f, FLT_MAX, 1.0f, 2, 0.0f, NULL
};

FloatPropertyRNA rna_MovieTrackingCamera_focal_length_pixels = {
	{(PropertyRNA *)&rna_MovieTrackingCamera_units, (PropertyRNA *)&rna_MovieTrackingCamera_focal_length,
	-1, "focal_length_pixels", 8193, "Focal Length",
	"Camera\'s focal length",
	0, "*",
	PROP_FLOAT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 335544321, NULL, NULL,
	offsetof(MovieTrackingCamera, focal), 4, NULL},
	MovieTrackingCamera_focal_length_pixels_get, MovieTrackingCamera_focal_length_pixels_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 5000.0f, 0.0f, FLT_MAX, 1.0f, 2, 0.0f, NULL
};

static EnumPropertyItem rna_MovieTrackingCamera_units_items[3] = {
	{0, "PIXELS", 0, "px", "Use pixels for units of focal length"},
	{1, "MILLIMETERS", 0, "mm", "Use millimeters for units of focal length"},
	{0, NULL, 0, NULL, NULL}
};

EnumPropertyRNA rna_MovieTrackingCamera_units = {
	{(PropertyRNA *)&rna_MovieTrackingCamera_principal, (PropertyRNA *)&rna_MovieTrackingCamera_focal_length_pixels,
	-1, "units", 1, "Units",
	"Units used for camera focal length",
	0, "*",
	PROP_ENUM, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	MovieTrackingCamera_units_get, MovieTrackingCamera_units_set, NULL, NULL, NULL, NULL, rna_MovieTrackingCamera_units_items, 2, 0
};

static float rna_MovieTrackingCamera_principal_default[2] = {
	0.0f,
	0.0f
};

FloatPropertyRNA rna_MovieTrackingCamera_principal = {
	{(PropertyRNA *)&rna_MovieTrackingCamera_k1, (PropertyRNA *)&rna_MovieTrackingCamera_units,
	-1, "principal", 8193, "Principal Point",
	"Optical center of lens",
	0, "*",
	PROP_FLOAT, PROP_PIXEL | PROP_UNIT_NONE, NULL, 1, {2, 0, 0}, 2,
	NULL, 335544321, NULL, NULL,
	offsetof(MovieTrackingCamera, principal), 4, NULL},
	NULL, NULL, MovieTrackingCamera_principal_get, MovieTrackingCamera_principal_set, NULL, NULL, NULL, NULL, NULL, NULL, -10000.0f, 10000.0f, -FLT_MAX, FLT_MAX, 10.0f, 3, 0.0f, rna_MovieTrackingCamera_principal_default
};

FloatPropertyRNA rna_MovieTrackingCamera_k1 = {
	{(PropertyRNA *)&rna_MovieTrackingCamera_k2, (PropertyRNA *)&rna_MovieTrackingCamera_principal,
	-1, "k1", 8193, "K1",
	"First coefficient of third order polynomial radial distortion",
	0, "*",
	PROP_FLOAT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_tracking_flushUpdate, 335544321, NULL, NULL,
	offsetof(MovieTrackingCamera, k1), 4, NULL},
	MovieTrackingCamera_k1_get, MovieTrackingCamera_k1_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, -10.0f, 10.0f, -FLT_MAX, FLT_MAX, 0.1000000015f, 3, 0.0f, NULL
};

FloatPropertyRNA rna_MovieTrackingCamera_k2 = {
	{(PropertyRNA *)&rna_MovieTrackingCamera_k3, (PropertyRNA *)&rna_MovieTrackingCamera_k1,
	-1, "k2", 8193, "K2",
	"Second coefficient of third order polynomial radial distortion",
	0, "*",
	PROP_FLOAT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_tracking_flushUpdate, 335544321, NULL, NULL,
	offsetof(MovieTrackingCamera, k2), 4, NULL},
	MovieTrackingCamera_k2_get, MovieTrackingCamera_k2_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, -10.0f, 10.0f, -FLT_MAX, FLT_MAX, 0.1000000015f, 3, 0.0f, NULL
};

FloatPropertyRNA rna_MovieTrackingCamera_k3 = {
	{(PropertyRNA *)&rna_MovieTrackingCamera_division_k1, (PropertyRNA *)&rna_MovieTrackingCamera_k2,
	-1, "k3", 8193, "K3",
	"Third coefficient of third order polynomial radial distortion",
	0, "*",
	PROP_FLOAT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_tracking_flushUpdate, 335544321, NULL, NULL,
	offsetof(MovieTrackingCamera, k3), 4, NULL},
	MovieTrackingCamera_k3_get, MovieTrackingCamera_k3_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, -10.0f, 10.0f, -FLT_MAX, FLT_MAX, 0.1000000015f, 3, 0.0f, NULL
};

FloatPropertyRNA rna_MovieTrackingCamera_division_k1 = {
	{(PropertyRNA *)&rna_MovieTrackingCamera_division_k2, (PropertyRNA *)&rna_MovieTrackingCamera_k3,
	-1, "division_k1", 8193, "K1",
	"First coefficient of second order division distortion",
	0, "*",
	PROP_FLOAT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_tracking_flushUpdate, 335544321, NULL, NULL,
	offsetof(MovieTrackingCamera, division_k1), 4, NULL},
	MovieTrackingCamera_division_k1_get, MovieTrackingCamera_division_k1_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, -10.0f, 10.0f, -FLT_MAX, FLT_MAX, 0.1000000015f, 3, 0.0f, NULL
};

FloatPropertyRNA rna_MovieTrackingCamera_division_k2 = {
	{(PropertyRNA *)&rna_MovieTrackingCamera_pixel_aspect, (PropertyRNA *)&rna_MovieTrackingCamera_division_k1,
	-1, "division_k2", 8193, "K2",
	"First coefficient of second order division distortion",
	0, "*",
	PROP_FLOAT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_tracking_flushUpdate, 335544321, NULL, NULL,
	offsetof(MovieTrackingCamera, division_k2), 4, NULL},
	MovieTrackingCamera_division_k2_get, MovieTrackingCamera_division_k2_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, -10.0f, 10.0f, -FLT_MAX, FLT_MAX, 0.1000000015f, 3, 0.0f, NULL
};

FloatPropertyRNA rna_MovieTrackingCamera_pixel_aspect = {
	{NULL, (PropertyRNA *)&rna_MovieTrackingCamera_division_k2,
	-1, "pixel_aspect", 8193, "Pixel Aspect Ratio",
	"Pixel aspect ratio",
	0, "*",
	PROP_FLOAT, PROP_XYZ | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_tracking_flushUpdate, 338886656, NULL, NULL,
	offsetof(MovieTrackingCamera, pixel_aspect), 4, NULL},
	MovieTrackingCamera_pixel_aspect_get, MovieTrackingCamera_pixel_aspect_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.1000000015f, 5000.0f, 0.1000000015f, FLT_MAX, 1.0f, 2, 1.0f, NULL
};

StructRNA RNA_MovieTrackingCamera = {
	{(ContainerRNA *)&RNA_MovieTrackingMarker, (ContainerRNA *)&RNA_MovieTrackingSettings,
	NULL,
	{(PropertyRNA *)&rna_MovieTrackingCamera_rna_properties, (PropertyRNA *)&rna_MovieTrackingCamera_pixel_aspect}},
	"MovieTrackingCamera", NULL, NULL, 4, "Movie tracking camera data",
	"Match-moving camera data for tracking",
	"*", 17,
	NULL, (PropertyRNA *)&rna_MovieTrackingCamera_rna_properties,
	NULL,
	NULL,
	NULL,
	rna_trackingCamera_path,
	NULL,
	NULL,
	NULL,
	NULL,
	{NULL, NULL}
};

/* Movie tracking marker data */
CollectionPropertyRNA rna_MovieTrackingMarker_rna_properties = {
	{(PropertyRNA *)&rna_MovieTrackingMarker_rna_type, NULL,
	-1, "rna_properties", 128, "Properties",
	"RNA property collection",
	0, "*",
	PROP_COLLECTION, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	MovieTrackingMarker_rna_properties_begin, MovieTrackingMarker_rna_properties_next, MovieTrackingMarker_rna_properties_end, MovieTrackingMarker_rna_properties_get, NULL, NULL, MovieTrackingMarker_rna_properties_lookup_string, NULL, &RNA_Property
};

PointerPropertyRNA rna_MovieTrackingMarker_rna_type = {
	{(PropertyRNA *)&rna_MovieTrackingMarker_co, (PropertyRNA *)&rna_MovieTrackingMarker_rna_properties,
	-1, "rna_type", 8912896, "RNA",
	"RNA type definition",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	MovieTrackingMarker_rna_type_get, NULL, NULL, NULL,&RNA_Struct
};

static float rna_MovieTrackingMarker_co_default[2] = {
	0.0f,
	0.0f
};

FloatPropertyRNA rna_MovieTrackingMarker_co = {
	{(PropertyRNA *)&rna_MovieTrackingMarker_frame, (PropertyRNA *)&rna_MovieTrackingMarker_rna_type,
	-1, "co", 8195, "Position",
	"Marker position at frame in normalized coordinates",
	0, "*",
	PROP_FLOAT, PROP_TRANSLATION | PROP_UNIT_LENGTH, NULL, 1, {2, 0, 0}, 2,
	NULL, 335544321, NULL, NULL,
	offsetof(MovieTrackingMarker, pos), 4, NULL},
	NULL, NULL, MovieTrackingMarker_co_get, MovieTrackingMarker_co_set, NULL, NULL, NULL, NULL, NULL, NULL, -FLT_MAX, FLT_MAX, -FLT_MAX, FLT_MAX, 1.0f, 5, 0.0f, rna_MovieTrackingMarker_co_default
};

IntPropertyRNA rna_MovieTrackingMarker_frame = {
	{(PropertyRNA *)&rna_MovieTrackingMarker_mute, (PropertyRNA *)&rna_MovieTrackingMarker_co,
	-1, "frame", 3, "Frame",
	"Frame number marker is keyframed on",
	0, "*",
	PROP_INT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 335544321, NULL, NULL,
	0, -1, NULL},
	MovieTrackingMarker_frame_get, MovieTrackingMarker_frame_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL,
	-10000, 10000, INT_MIN, INT_MAX, 1, 0, NULL
};

BoolPropertyRNA rna_MovieTrackingMarker_mute = {
	{(PropertyRNA *)&rna_MovieTrackingMarker_pattern_corners, (PropertyRNA *)&rna_MovieTrackingMarker_frame,
	-1, "mute", 3, "Mode",
	"Is marker muted for current frame",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 335544321, NULL, NULL,
	0, -1, NULL},
	MovieTrackingMarker_mute_get, MovieTrackingMarker_mute_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

static float rna_MovieTrackingMarker_pattern_corners_default[8] = {
	0.0f,
	0.0f,
	0.0f,
	0.0f,
	0.0f,
	0.0f,
	0.0f,
	0.0f
};

FloatPropertyRNA rna_MovieTrackingMarker_pattern_corners = {
	{(PropertyRNA *)&rna_MovieTrackingMarker_pattern_bound_box, (PropertyRNA *)&rna_MovieTrackingMarker_mute,
	-1, "pattern_corners", 8193, "Pattern Corners",
	"Array of coordinates which represents pattern\'s corners in normalized coordinates relative to marker position",
	0, "*",
	PROP_FLOAT, PROP_MATRIX | PROP_UNIT_NONE, NULL, 2, {4, 2, 0}, 8,
	rna_tracking_markerPattern_update, 335544321, NULL, NULL,
	offsetof(MovieTrackingMarker, pattern_corners), 4, NULL},
	NULL, NULL, MovieTrackingMarker_pattern_corners_get, MovieTrackingMarker_pattern_corners_set, NULL, NULL, NULL, NULL, NULL, NULL, -FLT_MAX, FLT_MAX, -FLT_MAX, FLT_MAX, 1.0f, 5, 0.0f, rna_MovieTrackingMarker_pattern_corners_default
};

static float rna_MovieTrackingMarker_pattern_bound_box_default[4] = {
	0.0f,
	0.0f,
	0.0f,
	0.0f
};

FloatPropertyRNA rna_MovieTrackingMarker_pattern_bound_box = {
	{(PropertyRNA *)&rna_MovieTrackingMarker_search_min, (PropertyRNA *)&rna_MovieTrackingMarker_pattern_corners,
	-1, "pattern_bound_box", 2, "Pattern Bounding Box",
	"Pattern area bounding box in normalized coordinates",
	0, "*",
	PROP_FLOAT, PROP_NONE | PROP_UNIT_NONE, NULL, 2, {2, 2, 0}, 4,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	NULL, NULL, MovieTrackingMarker_pattern_bound_box_get, NULL, NULL, NULL, NULL, NULL, NULL, NULL, -10000.0f, 10000.0f, -FLT_MAX, FLT_MAX, 10.0f, 3, 0.0f, rna_MovieTrackingMarker_pattern_bound_box_default
};

static float rna_MovieTrackingMarker_search_min_default[2] = {
	0.0f,
	0.0f
};

FloatPropertyRNA rna_MovieTrackingMarker_search_min = {
	{(PropertyRNA *)&rna_MovieTrackingMarker_search_max, (PropertyRNA *)&rna_MovieTrackingMarker_pattern_bound_box,
	-1, "search_min", 8193, "Search Min",
	"Left-bottom corner of search area in normalized coordinates relative to marker position",
	0, "*",
	PROP_FLOAT, PROP_TRANSLATION | PROP_UNIT_LENGTH, NULL, 1, {2, 0, 0}, 2,
	rna_tracking_markerSearch_update, 335544321, NULL, NULL,
	offsetof(MovieTrackingMarker, search_min), 4, NULL},
	NULL, NULL, MovieTrackingMarker_search_min_get, MovieTrackingMarker_search_min_set, NULL, NULL, NULL, NULL, NULL, NULL, -FLT_MAX, FLT_MAX, -FLT_MAX, FLT_MAX, 1.0f, 5, 0.0f, rna_MovieTrackingMarker_search_min_default
};

static float rna_MovieTrackingMarker_search_max_default[2] = {
	0.0f,
	0.0f
};

FloatPropertyRNA rna_MovieTrackingMarker_search_max = {
	{(PropertyRNA *)&rna_MovieTrackingMarker_is_keyed, (PropertyRNA *)&rna_MovieTrackingMarker_search_min,
	-1, "search_max", 8193, "Search Max",
	"Right-bottom corner of search area in normalized coordinates relative to marker position",
	0, "*",
	PROP_FLOAT, PROP_TRANSLATION | PROP_UNIT_LENGTH, NULL, 1, {2, 0, 0}, 2,
	rna_tracking_markerSearch_update, 335544321, NULL, NULL,
	offsetof(MovieTrackingMarker, search_max), 4, NULL},
	NULL, NULL, MovieTrackingMarker_search_max_get, MovieTrackingMarker_search_max_set, NULL, NULL, NULL, NULL, NULL, NULL, -FLT_MAX, FLT_MAX, -FLT_MAX, FLT_MAX, 1.0f, 5, 0.0f, rna_MovieTrackingMarker_search_max_default
};

BoolPropertyRNA rna_MovieTrackingMarker_is_keyed = {
	{NULL, (PropertyRNA *)&rna_MovieTrackingMarker_search_max,
	-1, "is_keyed", 1, "Keyframed",
	"Whether the position of the marker is keyframed or tracked",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	MovieTrackingMarker_is_keyed_get, MovieTrackingMarker_is_keyed_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

StructRNA RNA_MovieTrackingMarker = {
	{(ContainerRNA *)&RNA_MovieTrackingTrack, (ContainerRNA *)&RNA_MovieTrackingCamera,
	NULL,
	{(PropertyRNA *)&rna_MovieTrackingMarker_rna_properties, (PropertyRNA *)&rna_MovieTrackingMarker_is_keyed}},
	"MovieTrackingMarker", NULL, NULL, 4, "Movie tracking marker data",
	"Match-moving marker data for tracking",
	"*", 17,
	NULL, (PropertyRNA *)&rna_MovieTrackingMarker_rna_properties,
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

/* Movie tracking track data */
CollectionPropertyRNA rna_MovieTrackingTrack_rna_properties = {
	{(PropertyRNA *)&rna_MovieTrackingTrack_rna_type, NULL,
	-1, "rna_properties", 128, "Properties",
	"RNA property collection",
	0, "*",
	PROP_COLLECTION, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	MovieTrackingTrack_rna_properties_begin, MovieTrackingTrack_rna_properties_next, MovieTrackingTrack_rna_properties_end, MovieTrackingTrack_rna_properties_get, NULL, NULL, MovieTrackingTrack_rna_properties_lookup_string, NULL, &RNA_Property
};

PointerPropertyRNA rna_MovieTrackingTrack_rna_type = {
	{(PropertyRNA *)&rna_MovieTrackingTrack_name, (PropertyRNA *)&rna_MovieTrackingTrack_rna_properties,
	-1, "rna_type", 8912896, "RNA",
	"RNA type definition",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	MovieTrackingTrack_rna_type_get, NULL, NULL, NULL,&RNA_Struct
};

StringPropertyRNA rna_MovieTrackingTrack_name = {
	{(PropertyRNA *)&rna_MovieTrackingTrack_frames_limit, (PropertyRNA *)&rna_MovieTrackingTrack_rna_type,
	-1, "name", 262145, "Name",
	"Unique name of track",
	0, "*",
	PROP_STRING, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {64, 0, 0}, 0,
	NULL, 335544321, NULL, NULL,
	0, -1, NULL},
	MovieTrackingTrack_name_get, MovieTrackingTrack_name_length, MovieTrackingTrack_name_set, NULL, NULL, NULL, 64, ""
};

IntPropertyRNA rna_MovieTrackingTrack_frames_limit = {
	{(PropertyRNA *)&rna_MovieTrackingTrack_pattern_match, (PropertyRNA *)&rna_MovieTrackingTrack_name,
	-1, "frames_limit", 8193, "Frames Limit",
	"Every tracking cycle, this number of frames are tracked",
	0, "*",
	PROP_INT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	offsetof(MovieTrackingTrack, frames_limit), 1, NULL},
	MovieTrackingTrack_frames_limit_get, MovieTrackingTrack_frames_limit_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL,
	0, 32767, 0, 32767, 1, 0, NULL
};

static EnumPropertyItem rna_MovieTrackingTrack_pattern_match_items[3] = {
	{0, "KEYFRAME", 0, "Keyframe", "Track pattern from keyframe to next frame"},
	{1, "PREV_FRAME", 0, "Previous frame", "Track pattern from current frame to next frame"},
	{0, NULL, 0, NULL, NULL}
};

EnumPropertyRNA rna_MovieTrackingTrack_pattern_match = {
	{(PropertyRNA *)&rna_MovieTrackingTrack_margin, (PropertyRNA *)&rna_MovieTrackingTrack_frames_limit,
	-1, "pattern_match", 1, "Pattern Match",
	"Track pattern from given frame when tracking marker to next frame",
	0, "*",
	PROP_ENUM, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	MovieTrackingTrack_pattern_match_get, MovieTrackingTrack_pattern_match_set, NULL, NULL, NULL, NULL, rna_MovieTrackingTrack_pattern_match_items, 2, 0
};

IntPropertyRNA rna_MovieTrackingTrack_margin = {
	{(PropertyRNA *)&rna_MovieTrackingTrack_motion_model, (PropertyRNA *)&rna_MovieTrackingTrack_pattern_match,
	-1, "margin", 8193, "Margin",
	"Distance from image boundary at which marker stops tracking",
	0, "*",
	PROP_INT, PROP_PIXEL | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	offsetof(MovieTrackingTrack, margin), 1, NULL},
	MovieTrackingTrack_margin_get, MovieTrackingTrack_margin_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL,
	0, 300, 0, 300, 1, 0, NULL
};

static EnumPropertyItem rna_MovieTrackingTrack_motion_model_items[7] = {
	{5, "Perspective", 0, "Perspective", "Search for markers that are perspectively deformed (homography) between frames"},
	{4, "Affine", 0, "Affine", "Search for markers that are affine-deformed (t, r, k, and skew) between frames"},
	{3, "LocRotScale", 0, "LocRotScale", "Search for markers that are translated, rotated, and scaled between frames"},
	{2, "LocScale", 0, "LocScale", "Search for markers that are translated and scaled between frames"},
	{1, "LocRot", 0, "LocRot", "Search for markers that are translated and rotated between frames"},
	{0, "Loc", 0, "Loc", "Search for markers that are translated between frames"},
	{0, NULL, 0, NULL, NULL}
};

EnumPropertyRNA rna_MovieTrackingTrack_motion_model = {
	{(PropertyRNA *)&rna_MovieTrackingTrack_correlation_min, (PropertyRNA *)&rna_MovieTrackingTrack_margin,
	-1, "motion_model", 1, "Motion model",
	"Default motion model to use for tracking",
	0, "*",
	PROP_ENUM, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	MovieTrackingTrack_motion_model_get, MovieTrackingTrack_motion_model_set, NULL, NULL, NULL, NULL, rna_MovieTrackingTrack_motion_model_items, 6, 0
};

FloatPropertyRNA rna_MovieTrackingTrack_correlation_min = {
	{(PropertyRNA *)&rna_MovieTrackingTrack_use_brute, (PropertyRNA *)&rna_MovieTrackingTrack_motion_model,
	-1, "correlation_min", 8193, "Correlation",
	"Minimal value of correlation between matched pattern and reference that is still treated as successful tracking",
	0, "*",
	PROP_FLOAT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	offsetof(MovieTrackingTrack, minimum_correlation), 4, NULL},
	MovieTrackingTrack_correlation_min_get, MovieTrackingTrack_correlation_min_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 1.0f, 0.0f, 1.0f, 0.0500000007f, 3, 0.0f, NULL
};

BoolPropertyRNA rna_MovieTrackingTrack_use_brute = {
	{(PropertyRNA *)&rna_MovieTrackingTrack_use_mask, (PropertyRNA *)&rna_MovieTrackingTrack_correlation_min,
	-1, "use_brute", 1, "Prepass",
	"Use a brute-force translation only pre-track before refinement",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 338886656, NULL, NULL,
	0, -1, NULL},
	MovieTrackingTrack_use_brute_get, MovieTrackingTrack_use_brute_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_MovieTrackingTrack_use_mask = {
	{(PropertyRNA *)&rna_MovieTrackingTrack_use_normalization, (PropertyRNA *)&rna_MovieTrackingTrack_use_brute,
	-1, "use_mask", 3, "Use Mask",
	"Use a grease pencil datablock as a mask to use only specified areas of pattern when tracking",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 338886656, NULL, NULL,
	0, -1, NULL},
	MovieTrackingTrack_use_mask_get, MovieTrackingTrack_use_mask_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_MovieTrackingTrack_use_normalization = {
	{(PropertyRNA *)&rna_MovieTrackingTrack_markers, (PropertyRNA *)&rna_MovieTrackingTrack_use_mask,
	-1, "use_normalization", 1, "Normalize",
	"Normalize light intensities while tracking. Slower",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 338886656, NULL, NULL,
	0, -1, NULL},
	MovieTrackingTrack_use_normalization_get, MovieTrackingTrack_use_normalization_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

CollectionPropertyRNA rna_MovieTrackingTrack_markers = {
	{(PropertyRNA *)&rna_MovieTrackingTrack_use_red_channel, (PropertyRNA *)&rna_MovieTrackingTrack_use_normalization,
	-1, "markers", 16384, "Markers",
	"Collection of markers in track",
	0, "*",
	PROP_COLLECTION, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, &RNA_MovieTrackingMarkers},
	MovieTrackingTrack_markers_begin, MovieTrackingTrack_markers_next, MovieTrackingTrack_markers_end, MovieTrackingTrack_markers_get, MovieTrackingTrack_markers_length, MovieTrackingTrack_markers_lookup_int, NULL, NULL, &RNA_MovieTrackingMarker
};

BoolPropertyRNA rna_MovieTrackingTrack_use_red_channel = {
	{(PropertyRNA *)&rna_MovieTrackingTrack_use_green_channel, (PropertyRNA *)&rna_MovieTrackingTrack_markers,
	-1, "use_red_channel", 1, "Use Red Channel",
	"Use red channel from footage for tracking",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 338886656, NULL, NULL,
	0, -1, NULL},
	MovieTrackingTrack_use_red_channel_get, MovieTrackingTrack_use_red_channel_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_MovieTrackingTrack_use_green_channel = {
	{(PropertyRNA *)&rna_MovieTrackingTrack_use_blue_channel, (PropertyRNA *)&rna_MovieTrackingTrack_use_red_channel,
	-1, "use_green_channel", 1, "Use Green Channel",
	"Use green channel from footage for tracking",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 338886656, NULL, NULL,
	0, -1, NULL},
	MovieTrackingTrack_use_green_channel_get, MovieTrackingTrack_use_green_channel_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_MovieTrackingTrack_use_blue_channel = {
	{(PropertyRNA *)&rna_MovieTrackingTrack_use_grayscale_preview, (PropertyRNA *)&rna_MovieTrackingTrack_use_green_channel,
	-1, "use_blue_channel", 1, "Use Blue Channel",
	"Use blue channel from footage for tracking",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 338886656, NULL, NULL,
	0, -1, NULL},
	MovieTrackingTrack_use_blue_channel_get, MovieTrackingTrack_use_blue_channel_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_MovieTrackingTrack_use_grayscale_preview = {
	{(PropertyRNA *)&rna_MovieTrackingTrack_use_alpha_preview, (PropertyRNA *)&rna_MovieTrackingTrack_use_blue_channel,
	-1, "use_grayscale_preview", 1, "Grayscale",
	"Display what the tracking algorithm sees in the preview",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 338886656, NULL, NULL,
	0, -1, NULL},
	MovieTrackingTrack_use_grayscale_preview_get, MovieTrackingTrack_use_grayscale_preview_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_MovieTrackingTrack_use_alpha_preview = {
	{(PropertyRNA *)&rna_MovieTrackingTrack_has_bundle, (PropertyRNA *)&rna_MovieTrackingTrack_use_grayscale_preview,
	-1, "use_alpha_preview", 1, "Alpha",
	"Apply track\'s mask on displaying preview",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 338886656, NULL, NULL,
	0, -1, NULL},
	MovieTrackingTrack_use_alpha_preview_get, MovieTrackingTrack_use_alpha_preview_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_MovieTrackingTrack_has_bundle = {
	{(PropertyRNA *)&rna_MovieTrackingTrack_bundle, (PropertyRNA *)&rna_MovieTrackingTrack_use_alpha_preview,
	-1, "has_bundle", 2, "Has Bundle",
	"True if track has a valid bundle",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	MovieTrackingTrack_has_bundle_get, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

static float rna_MovieTrackingTrack_bundle_default[3] = {
	0.0f,
	0.0f,
	0.0f
};

FloatPropertyRNA rna_MovieTrackingTrack_bundle = {
	{(PropertyRNA *)&rna_MovieTrackingTrack_hide, (PropertyRNA *)&rna_MovieTrackingTrack_has_bundle,
	-1, "bundle", 8194, "Bundle",
	"Position of bundle reconstructed from this track",
	0, "*",
	PROP_FLOAT, PROP_TRANSLATION | PROP_UNIT_LENGTH, NULL, 1, {3, 0, 0}, 3,
	NULL, 0, NULL, NULL,
	offsetof(MovieTrackingTrack, bundle_pos), 4, NULL},
	NULL, NULL, MovieTrackingTrack_bundle_get, NULL, NULL, NULL, NULL, NULL, NULL, NULL, -FLT_MAX, FLT_MAX, -FLT_MAX, FLT_MAX, 1.0f, 5, 0.0f, rna_MovieTrackingTrack_bundle_default
};

BoolPropertyRNA rna_MovieTrackingTrack_hide = {
	{(PropertyRNA *)&rna_MovieTrackingTrack_select, (PropertyRNA *)&rna_MovieTrackingTrack_bundle,
	-1, "hide", 1, "Hide",
	"Track is hidden",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 338886656, NULL, NULL,
	0, -1, NULL},
	MovieTrackingTrack_hide_get, MovieTrackingTrack_hide_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_MovieTrackingTrack_select = {
	{(PropertyRNA *)&rna_MovieTrackingTrack_select_anchor, (PropertyRNA *)&rna_MovieTrackingTrack_hide,
	-1, "select", 3, "Select",
	"Track is selected",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 338886656, NULL, NULL,
	0, -1, NULL},
	MovieTrackingTrack_select_get, MovieTrackingTrack_select_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_MovieTrackingTrack_select_anchor = {
	{(PropertyRNA *)&rna_MovieTrackingTrack_select_pattern, (PropertyRNA *)&rna_MovieTrackingTrack_select,
	-1, "select_anchor", 3, "Select Anchor",
	"Track\'s anchor point is selected",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 338886656, NULL, NULL,
	0, -1, NULL},
	MovieTrackingTrack_select_anchor_get, MovieTrackingTrack_select_anchor_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_MovieTrackingTrack_select_pattern = {
	{(PropertyRNA *)&rna_MovieTrackingTrack_select_search, (PropertyRNA *)&rna_MovieTrackingTrack_select_anchor,
	-1, "select_pattern", 3, "Select Pattern",
	"Track\'s pattern area is selected",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 338886656, NULL, NULL,
	0, -1, NULL},
	MovieTrackingTrack_select_pattern_get, MovieTrackingTrack_select_pattern_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_MovieTrackingTrack_select_search = {
	{(PropertyRNA *)&rna_MovieTrackingTrack_lock, (PropertyRNA *)&rna_MovieTrackingTrack_select_pattern,
	-1, "select_search", 3, "Select Search",
	"Track\'s search area is selected",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 338886656, NULL, NULL,
	0, -1, NULL},
	MovieTrackingTrack_select_search_get, MovieTrackingTrack_select_search_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_MovieTrackingTrack_lock = {
	{(PropertyRNA *)&rna_MovieTrackingTrack_use_custom_color, (PropertyRNA *)&rna_MovieTrackingTrack_select_search,
	-1, "lock", 1, "Lock",
	"Track is locked and all changes to it are disabled",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 338886656, NULL, NULL,
	0, -1, NULL},
	MovieTrackingTrack_lock_get, MovieTrackingTrack_lock_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_MovieTrackingTrack_use_custom_color = {
	{(PropertyRNA *)&rna_MovieTrackingTrack_color, (PropertyRNA *)&rna_MovieTrackingTrack_lock,
	-1, "use_custom_color", 1, "Custom Color",
	"Use custom color instead of theme-defined",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 338886656, NULL, NULL,
	0, -1, NULL},
	MovieTrackingTrack_use_custom_color_get, MovieTrackingTrack_use_custom_color_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

static float rna_MovieTrackingTrack_color_default[3] = {
	0.0f,
	0.0f,
	0.0f
};

FloatPropertyRNA rna_MovieTrackingTrack_color = {
	{(PropertyRNA *)&rna_MovieTrackingTrack_average_error, (PropertyRNA *)&rna_MovieTrackingTrack_use_custom_color,
	-1, "color", 8195, "Color",
	"Color of the track in the Movie Clip Editor and the 3D viewport after a solve",
	0, "*",
	PROP_FLOAT, PROP_COLOR | PROP_UNIT_NONE, NULL, 1, {3, 0, 0}, 3,
	NULL, 338886656, NULL, NULL,
	offsetof(MovieTrackingTrack, color), 4, NULL},
	NULL, NULL, MovieTrackingTrack_color_get, MovieTrackingTrack_color_set, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 1.0f, 0.0f, 1.0f, 10.0f, 3, 0.0f, rna_MovieTrackingTrack_color_default
};

FloatPropertyRNA rna_MovieTrackingTrack_average_error = {
	{(PropertyRNA *)&rna_MovieTrackingTrack_grease_pencil, (PropertyRNA *)&rna_MovieTrackingTrack_color,
	-1, "average_error", 8194, "Average Error",
	"Average error of re-projection",
	0, "*",
	PROP_FLOAT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	offsetof(MovieTrackingTrack, error), 4, NULL},
	MovieTrackingTrack_average_error_get, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, -10000.0f, 10000.0f, -FLT_MAX, FLT_MAX, 10.0f, 3, 0.0f, NULL
};

PointerPropertyRNA rna_MovieTrackingTrack_grease_pencil = {
	{(PropertyRNA *)&rna_MovieTrackingTrack_weight, (PropertyRNA *)&rna_MovieTrackingTrack_average_error,
	-1, "grease_pencil", 8388673, "Grease Pencil",
	"Grease pencil data for this track",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 338886656, NULL, NULL,
	0, -1, NULL},
	MovieTrackingTrack_grease_pencil_get, MovieTrackingTrack_grease_pencil_set, NULL, NULL,&RNA_GreasePencil
};

FloatPropertyRNA rna_MovieTrackingTrack_weight = {
	{(PropertyRNA *)&rna_MovieTrackingTrack_offset, (PropertyRNA *)&rna_MovieTrackingTrack_grease_pencil,
	-1, "weight", 8195, "Weight",
	"Influence of this track on a final solution",
	0, "*",
	PROP_FLOAT, PROP_FACTOR | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	offsetof(MovieTrackingTrack, weight), 4, NULL},
	MovieTrackingTrack_weight_get, MovieTrackingTrack_weight_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 1.0f, 0.0f, 1.0f, 10.0f, 3, 0.0f, NULL
};

static float rna_MovieTrackingTrack_offset_default[2] = {
	0.0f,
	0.0f
};

FloatPropertyRNA rna_MovieTrackingTrack_offset = {
	{NULL, (PropertyRNA *)&rna_MovieTrackingTrack_weight,
	-1, "offset", 8195, "Offset",
	"Offset of track from the parenting point",
	0, "*",
	PROP_FLOAT, PROP_TRANSLATION | PROP_UNIT_LENGTH, NULL, 1, {2, 0, 0}, 2,
	NULL, 335544321, NULL, NULL,
	offsetof(MovieTrackingTrack, offset), 4, NULL},
	NULL, NULL, MovieTrackingTrack_offset_get, MovieTrackingTrack_offset_set, NULL, NULL, NULL, NULL, NULL, NULL, -FLT_MAX, FLT_MAX, -FLT_MAX, FLT_MAX, 1.0f, 5, 0.0f, rna_MovieTrackingTrack_offset_default
};

StructRNA RNA_MovieTrackingTrack = {
	{(ContainerRNA *)&RNA_MovieTrackingMarkers, (ContainerRNA *)&RNA_MovieTrackingMarker,
	NULL,
	{(PropertyRNA *)&rna_MovieTrackingTrack_rna_properties, (PropertyRNA *)&rna_MovieTrackingTrack_offset}},
	"MovieTrackingTrack", NULL, NULL, 4, "Movie tracking track data",
	"Match-moving track data for tracking",
	"*", 167,
	(PropertyRNA *)&rna_MovieTrackingTrack_name, (PropertyRNA *)&rna_MovieTrackingTrack_rna_properties,
	NULL,
	NULL,
	NULL,
	rna_trackingTrack_path,
	NULL,
	NULL,
	NULL,
	NULL,
	{NULL, NULL}
};

/* Movie Tracking Markers */
CollectionPropertyRNA rna_MovieTrackingMarkers_rna_properties = {
	{(PropertyRNA *)&rna_MovieTrackingMarkers_rna_type, NULL,
	-1, "rna_properties", 128, "Properties",
	"RNA property collection",
	0, "*",
	PROP_COLLECTION, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	MovieTrackingMarkers_rna_properties_begin, MovieTrackingMarkers_rna_properties_next, MovieTrackingMarkers_rna_properties_end, MovieTrackingMarkers_rna_properties_get, NULL, NULL, MovieTrackingMarkers_rna_properties_lookup_string, NULL, &RNA_Property
};

PointerPropertyRNA rna_MovieTrackingMarkers_rna_type = {
	{NULL, (PropertyRNA *)&rna_MovieTrackingMarkers_rna_properties,
	-1, "rna_type", 8912896, "RNA",
	"RNA type definition",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	MovieTrackingMarkers_rna_type_get, NULL, NULL, NULL,&RNA_Struct
};

IntPropertyRNA rna_MovieTrackingMarkers_find_frame_frame = {
	{(PropertyRNA *)&rna_MovieTrackingMarkers_find_frame_exact, NULL,
	-1, "frame", 7, "Frame",
	"Frame number to find marker for",
	0, "*",
	PROP_INT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL,
	0, 300000, 0, 300000, 1, 1, NULL
};

BoolPropertyRNA rna_MovieTrackingMarkers_find_frame_exact = {
	{(PropertyRNA *)&rna_MovieTrackingMarkers_find_frame_marker, (PropertyRNA *)&rna_MovieTrackingMarkers_find_frame_frame,
	-1, "exact", 3, "Exact",
	"Get marker at exact frame number rather than get estimated marker",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 1, NULL
};

PointerPropertyRNA rna_MovieTrackingMarkers_find_frame_marker = {
	{NULL, (PropertyRNA *)&rna_MovieTrackingMarkers_find_frame_exact,
	-1, "marker", 8388616, "",
	"Marker for specified frame",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	NULL, NULL, NULL, NULL,&RNA_MovieTrackingMarker
};

FunctionRNA rna_MovieTrackingMarkers_find_frame_func = {
	{(FunctionRNA *)&rna_MovieTrackingMarkers_insert_frame_func, NULL,
	NULL,
	{(PropertyRNA *)&rna_MovieTrackingMarkers_find_frame_frame, (PropertyRNA *)&rna_MovieTrackingMarkers_find_frame_marker}},
	"find_frame", 0, "Get marker for specified frame",
	MovieTrackingMarkers_find_frame_call,
	(PropertyRNA *)&rna_MovieTrackingMarkers_find_frame_marker
};

IntPropertyRNA rna_MovieTrackingMarkers_insert_frame_frame = {
	{(PropertyRNA *)&rna_MovieTrackingMarkers_insert_frame_co, NULL,
	-1, "frame", 7, "Frame",
	"Frame number to insert marker to",
	0, "*",
	PROP_INT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL,
	0, 300000, 0, 300000, 1, 1, NULL
};

static float rna_MovieTrackingMarkers_insert_frame_co_default[2] = {
	0.0f,
	0.0f
};

FloatPropertyRNA rna_MovieTrackingMarkers_insert_frame_co = {
	{(PropertyRNA *)&rna_MovieTrackingMarkers_insert_frame_marker, (PropertyRNA *)&rna_MovieTrackingMarkers_insert_frame_frame,
	-1, "co", 3, "Coordinate",
	"Place new marker at the given frame using specified in normalized space coordinates",
	0, "*",
	PROP_FLOAT, PROP_XYZ | PROP_UNIT_NONE, NULL, 1, {2, 0, 0}, 2,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, -1.0f, 1.0f, -1.0f, 1.0f, 1.0f, 3, 0.0f, rna_MovieTrackingMarkers_insert_frame_co_default
};

PointerPropertyRNA rna_MovieTrackingMarkers_insert_frame_marker = {
	{NULL, (PropertyRNA *)&rna_MovieTrackingMarkers_insert_frame_co,
	-1, "marker", 8388616, "",
	"Newly created marker",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	NULL, NULL, NULL, NULL,&RNA_MovieTrackingMarker
};

FunctionRNA rna_MovieTrackingMarkers_insert_frame_func = {
	{(FunctionRNA *)&rna_MovieTrackingMarkers_delete_frame_func, (FunctionRNA *)&rna_MovieTrackingMarkers_find_frame_func,
	NULL,
	{(PropertyRNA *)&rna_MovieTrackingMarkers_insert_frame_frame, (PropertyRNA *)&rna_MovieTrackingMarkers_insert_frame_marker}},
	"insert_frame", 0, "Insert a new marker at the specified frame",
	MovieTrackingMarkers_insert_frame_call,
	(PropertyRNA *)&rna_MovieTrackingMarkers_insert_frame_marker
};

IntPropertyRNA rna_MovieTrackingMarkers_delete_frame_frame = {
	{NULL, NULL,
	-1, "frame", 7, "Frame",
	"Frame number to delete marker from",
	0, "*",
	PROP_INT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL,
	0, 300000, 0, 300000, 1, 1, NULL
};

FunctionRNA rna_MovieTrackingMarkers_delete_frame_func = {
	{NULL, (FunctionRNA *)&rna_MovieTrackingMarkers_insert_frame_func,
	NULL,
	{(PropertyRNA *)&rna_MovieTrackingMarkers_delete_frame_frame, (PropertyRNA *)&rna_MovieTrackingMarkers_delete_frame_frame}},
	"delete_frame", 0, "Delete marker at specified frame",
	MovieTrackingMarkers_delete_frame_call,
	NULL
};

StructRNA RNA_MovieTrackingMarkers = {
	{(ContainerRNA *)&RNA_MovieTrackingPlaneMarker, (ContainerRNA *)&RNA_MovieTrackingTrack,
	NULL,
	{(PropertyRNA *)&rna_MovieTrackingMarkers_rna_properties, (PropertyRNA *)&rna_MovieTrackingMarkers_rna_type}},
	"MovieTrackingMarkers", NULL, NULL, 4, "Movie Tracking Markers",
	"Collection of markers for movie tracking track",
	"*", 17,
	NULL, (PropertyRNA *)&rna_MovieTrackingMarkers_rna_properties,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	{(FunctionRNA *)&rna_MovieTrackingMarkers_find_frame_func, (FunctionRNA *)&rna_MovieTrackingMarkers_delete_frame_func}
};

/* Movie Tracking Plane Marker Data */
CollectionPropertyRNA rna_MovieTrackingPlaneMarker_rna_properties = {
	{(PropertyRNA *)&rna_MovieTrackingPlaneMarker_rna_type, NULL,
	-1, "rna_properties", 128, "Properties",
	"RNA property collection",
	0, "*",
	PROP_COLLECTION, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	MovieTrackingPlaneMarker_rna_properties_begin, MovieTrackingPlaneMarker_rna_properties_next, MovieTrackingPlaneMarker_rna_properties_end, MovieTrackingPlaneMarker_rna_properties_get, NULL, NULL, MovieTrackingPlaneMarker_rna_properties_lookup_string, NULL, &RNA_Property
};

PointerPropertyRNA rna_MovieTrackingPlaneMarker_rna_type = {
	{(PropertyRNA *)&rna_MovieTrackingPlaneMarker_frame, (PropertyRNA *)&rna_MovieTrackingPlaneMarker_rna_properties,
	-1, "rna_type", 8912896, "RNA",
	"RNA type definition",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	MovieTrackingPlaneMarker_rna_type_get, NULL, NULL, NULL,&RNA_Struct
};

IntPropertyRNA rna_MovieTrackingPlaneMarker_frame = {
	{(PropertyRNA *)&rna_MovieTrackingPlaneMarker_corners, (PropertyRNA *)&rna_MovieTrackingPlaneMarker_rna_type,
	-1, "frame", 3, "Frame",
	"Frame number marker is keyframed on",
	0, "*",
	PROP_INT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 335544321, NULL, NULL,
	0, -1, NULL},
	MovieTrackingPlaneMarker_frame_get, MovieTrackingPlaneMarker_frame_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL,
	-10000, 10000, INT_MIN, INT_MAX, 1, 0, NULL
};

static float rna_MovieTrackingPlaneMarker_corners_default[8] = {
	0.0f,
	0.0f,
	0.0f,
	0.0f,
	0.0f,
	0.0f,
	0.0f,
	0.0f
};

FloatPropertyRNA rna_MovieTrackingPlaneMarker_corners = {
	{(PropertyRNA *)&rna_MovieTrackingPlaneMarker_mute, (PropertyRNA *)&rna_MovieTrackingPlaneMarker_frame,
	-1, "corners", 8193, "Corners",
	"Array of coordinates which represents UI rectangle corners in frame normalized coordinates",
	0, "*",
	PROP_FLOAT, PROP_MATRIX | PROP_UNIT_NONE, NULL, 2, {4, 2, 0}, 8,
	NULL, 335544321, NULL, NULL,
	offsetof(MovieTrackingPlaneMarker, corners), 4, NULL},
	NULL, NULL, MovieTrackingPlaneMarker_corners_get, MovieTrackingPlaneMarker_corners_set, NULL, NULL, NULL, NULL, NULL, NULL, -FLT_MAX, FLT_MAX, -FLT_MAX, FLT_MAX, 1.0f, 5, 0.0f, rna_MovieTrackingPlaneMarker_corners_default
};

BoolPropertyRNA rna_MovieTrackingPlaneMarker_mute = {
	{NULL, (PropertyRNA *)&rna_MovieTrackingPlaneMarker_corners,
	-1, "mute", 3, "Mode",
	"Is marker muted for current frame",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 335544321, NULL, NULL,
	0, -1, NULL},
	MovieTrackingPlaneMarker_mute_get, MovieTrackingPlaneMarker_mute_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

StructRNA RNA_MovieTrackingPlaneMarker = {
	{(ContainerRNA *)&RNA_MovieTrackingPlaneTrack, (ContainerRNA *)&RNA_MovieTrackingMarkers,
	NULL,
	{(PropertyRNA *)&rna_MovieTrackingPlaneMarker_rna_properties, (PropertyRNA *)&rna_MovieTrackingPlaneMarker_mute}},
	"MovieTrackingPlaneMarker", NULL, NULL, 4, "Movie Tracking Plane Marker Data",
	"Match-moving plane marker data for tracking",
	"*", 17,
	NULL, (PropertyRNA *)&rna_MovieTrackingPlaneMarker_rna_properties,
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

/* Movie tracking plane track data */
CollectionPropertyRNA rna_MovieTrackingPlaneTrack_rna_properties = {
	{(PropertyRNA *)&rna_MovieTrackingPlaneTrack_rna_type, NULL,
	-1, "rna_properties", 128, "Properties",
	"RNA property collection",
	0, "*",
	PROP_COLLECTION, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	MovieTrackingPlaneTrack_rna_properties_begin, MovieTrackingPlaneTrack_rna_properties_next, MovieTrackingPlaneTrack_rna_properties_end, MovieTrackingPlaneTrack_rna_properties_get, NULL, NULL, MovieTrackingPlaneTrack_rna_properties_lookup_string, NULL, &RNA_Property
};

PointerPropertyRNA rna_MovieTrackingPlaneTrack_rna_type = {
	{(PropertyRNA *)&rna_MovieTrackingPlaneTrack_name, (PropertyRNA *)&rna_MovieTrackingPlaneTrack_rna_properties,
	-1, "rna_type", 8912896, "RNA",
	"RNA type definition",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	MovieTrackingPlaneTrack_rna_type_get, NULL, NULL, NULL,&RNA_Struct
};

StringPropertyRNA rna_MovieTrackingPlaneTrack_name = {
	{(PropertyRNA *)&rna_MovieTrackingPlaneTrack_markers, (PropertyRNA *)&rna_MovieTrackingPlaneTrack_rna_type,
	-1, "name", 262145, "Name",
	"Unique name of track",
	0, "*",
	PROP_STRING, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {64, 0, 0}, 0,
	NULL, 335544321, NULL, NULL,
	0, -1, NULL},
	MovieTrackingPlaneTrack_name_get, MovieTrackingPlaneTrack_name_length, MovieTrackingPlaneTrack_name_set, NULL, NULL, NULL, 64, ""
};

CollectionPropertyRNA rna_MovieTrackingPlaneTrack_markers = {
	{(PropertyRNA *)&rna_MovieTrackingPlaneTrack_select, (PropertyRNA *)&rna_MovieTrackingPlaneTrack_name,
	-1, "markers", 16384, "Markers",
	"Collection of markers in track",
	0, "*",
	PROP_COLLECTION, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, &RNA_MovieTrackingPlaneMarkers},
	MovieTrackingPlaneTrack_markers_begin, MovieTrackingPlaneTrack_markers_next, MovieTrackingPlaneTrack_markers_end, MovieTrackingPlaneTrack_markers_get, MovieTrackingPlaneTrack_markers_length, MovieTrackingPlaneTrack_markers_lookup_int, NULL, NULL, &RNA_MovieTrackingPlaneMarker
};

BoolPropertyRNA rna_MovieTrackingPlaneTrack_select = {
	{(PropertyRNA *)&rna_MovieTrackingPlaneTrack_use_auto_keying, (PropertyRNA *)&rna_MovieTrackingPlaneTrack_markers,
	-1, "select", 3, "Select",
	"Plane track is selected",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 338886656, NULL, NULL,
	0, -1, NULL},
	MovieTrackingPlaneTrack_select_get, MovieTrackingPlaneTrack_select_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_MovieTrackingPlaneTrack_use_auto_keying = {
	{(PropertyRNA *)&rna_MovieTrackingPlaneTrack_image, (PropertyRNA *)&rna_MovieTrackingPlaneTrack_select,
	-1, "use_auto_keying", 3, "Auto Keyframe",
	"Automatic keyframe insertion when moving plane corners",
	494, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	MovieTrackingPlaneTrack_use_auto_keying_get, MovieTrackingPlaneTrack_use_auto_keying_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

PointerPropertyRNA rna_MovieTrackingPlaneTrack_image = {
	{(PropertyRNA *)&rna_MovieTrackingPlaneTrack_image_opacity, (PropertyRNA *)&rna_MovieTrackingPlaneTrack_use_auto_keying,
	-1, "image", 8388673, "Image",
	"Image displayed in the track during editing in clip editor",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 338886656, NULL, NULL,
	0, -1, NULL},
	MovieTrackingPlaneTrack_image_get, MovieTrackingPlaneTrack_image_set, NULL, NULL,&RNA_Image
};

FloatPropertyRNA rna_MovieTrackingPlaneTrack_image_opacity = {
	{NULL, (PropertyRNA *)&rna_MovieTrackingPlaneTrack_image,
	-1, "image_opacity", 8193, "Image Opacity",
	"Opacity of the image",
	0, "*",
	PROP_FLOAT, PROP_FACTOR | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 338886656, NULL, NULL,
	offsetof(MovieTrackingPlaneTrack, image_opacity), 4, NULL},
	MovieTrackingPlaneTrack_image_opacity_get, MovieTrackingPlaneTrack_image_opacity_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 1.0f, 0.0f, 1.0f, 10.0f, 3, 0.0f, NULL
};

StructRNA RNA_MovieTrackingPlaneTrack = {
	{(ContainerRNA *)&RNA_MovieTrackingPlaneMarkers, (ContainerRNA *)&RNA_MovieTrackingPlaneMarker,
	NULL,
	{(PropertyRNA *)&rna_MovieTrackingPlaneTrack_rna_properties, (PropertyRNA *)&rna_MovieTrackingPlaneTrack_image_opacity}},
	"MovieTrackingPlaneTrack", NULL, NULL, 4, "Movie tracking plane track data",
	"Match-moving plane track data for tracking",
	"*", 167,
	(PropertyRNA *)&rna_MovieTrackingPlaneTrack_name, (PropertyRNA *)&rna_MovieTrackingPlaneTrack_rna_properties,
	NULL,
	NULL,
	NULL,
	rna_trackingPlaneTrack_path,
	NULL,
	NULL,
	NULL,
	NULL,
	{NULL, NULL}
};

/* Movie Tracking Plane Markers */
CollectionPropertyRNA rna_MovieTrackingPlaneMarkers_rna_properties = {
	{(PropertyRNA *)&rna_MovieTrackingPlaneMarkers_rna_type, NULL,
	-1, "rna_properties", 128, "Properties",
	"RNA property collection",
	0, "*",
	PROP_COLLECTION, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	MovieTrackingPlaneMarkers_rna_properties_begin, MovieTrackingPlaneMarkers_rna_properties_next, MovieTrackingPlaneMarkers_rna_properties_end, MovieTrackingPlaneMarkers_rna_properties_get, NULL, NULL, MovieTrackingPlaneMarkers_rna_properties_lookup_string, NULL, &RNA_Property
};

PointerPropertyRNA rna_MovieTrackingPlaneMarkers_rna_type = {
	{NULL, (PropertyRNA *)&rna_MovieTrackingPlaneMarkers_rna_properties,
	-1, "rna_type", 8912896, "RNA",
	"RNA type definition",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	MovieTrackingPlaneMarkers_rna_type_get, NULL, NULL, NULL,&RNA_Struct
};

IntPropertyRNA rna_MovieTrackingPlaneMarkers_find_frame_frame = {
	{(PropertyRNA *)&rna_MovieTrackingPlaneMarkers_find_frame_exact, NULL,
	-1, "frame", 7, "Frame",
	"Frame number to find marker for",
	0, "*",
	PROP_INT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL,
	0, 300000, 0, 300000, 1, 1, NULL
};

BoolPropertyRNA rna_MovieTrackingPlaneMarkers_find_frame_exact = {
	{(PropertyRNA *)&rna_MovieTrackingPlaneMarkers_find_frame_plane_marker, (PropertyRNA *)&rna_MovieTrackingPlaneMarkers_find_frame_frame,
	-1, "exact", 3, "Exact",
	"Get plane marker at exact frame number rather than get estimated marker",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 1, NULL
};

PointerPropertyRNA rna_MovieTrackingPlaneMarkers_find_frame_plane_marker = {
	{NULL, (PropertyRNA *)&rna_MovieTrackingPlaneMarkers_find_frame_exact,
	-1, "plane_marker", 8388616, "",
	"Plane marker for specified frame",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	NULL, NULL, NULL, NULL,&RNA_MovieTrackingPlaneMarker
};

FunctionRNA rna_MovieTrackingPlaneMarkers_find_frame_func = {
	{(FunctionRNA *)&rna_MovieTrackingPlaneMarkers_insert_frame_func, NULL,
	NULL,
	{(PropertyRNA *)&rna_MovieTrackingPlaneMarkers_find_frame_frame, (PropertyRNA *)&rna_MovieTrackingPlaneMarkers_find_frame_plane_marker}},
	"find_frame", 0, "Get plane marker for specified frame",
	MovieTrackingPlaneMarkers_find_frame_call,
	(PropertyRNA *)&rna_MovieTrackingPlaneMarkers_find_frame_plane_marker
};

IntPropertyRNA rna_MovieTrackingPlaneMarkers_insert_frame_frame = {
	{(PropertyRNA *)&rna_MovieTrackingPlaneMarkers_insert_frame_plane_marker, NULL,
	-1, "frame", 7, "Frame",
	"Frame number to insert marker to",
	0, "*",
	PROP_INT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL,
	0, 300000, 0, 300000, 1, 1, NULL
};

PointerPropertyRNA rna_MovieTrackingPlaneMarkers_insert_frame_plane_marker = {
	{NULL, (PropertyRNA *)&rna_MovieTrackingPlaneMarkers_insert_frame_frame,
	-1, "plane_marker", 8388616, "",
	"Newly created plane marker",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	NULL, NULL, NULL, NULL,&RNA_MovieTrackingPlaneMarker
};

FunctionRNA rna_MovieTrackingPlaneMarkers_insert_frame_func = {
	{(FunctionRNA *)&rna_MovieTrackingPlaneMarkers_delete_frame_func, (FunctionRNA *)&rna_MovieTrackingPlaneMarkers_find_frame_func,
	NULL,
	{(PropertyRNA *)&rna_MovieTrackingPlaneMarkers_insert_frame_frame, (PropertyRNA *)&rna_MovieTrackingPlaneMarkers_insert_frame_plane_marker}},
	"insert_frame", 0, "Insert a new plane marker at the specified frame",
	MovieTrackingPlaneMarkers_insert_frame_call,
	(PropertyRNA *)&rna_MovieTrackingPlaneMarkers_insert_frame_plane_marker
};

IntPropertyRNA rna_MovieTrackingPlaneMarkers_delete_frame_frame = {
	{NULL, NULL,
	-1, "frame", 7, "Frame",
	"Frame number to delete plane marker from",
	0, "*",
	PROP_INT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL,
	0, 300000, 0, 300000, 1, 1, NULL
};

FunctionRNA rna_MovieTrackingPlaneMarkers_delete_frame_func = {
	{NULL, (FunctionRNA *)&rna_MovieTrackingPlaneMarkers_insert_frame_func,
	NULL,
	{(PropertyRNA *)&rna_MovieTrackingPlaneMarkers_delete_frame_frame, (PropertyRNA *)&rna_MovieTrackingPlaneMarkers_delete_frame_frame}},
	"delete_frame", 0, "Delete plane marker at specified frame",
	MovieTrackingPlaneMarkers_delete_frame_call,
	NULL
};

StructRNA RNA_MovieTrackingPlaneMarkers = {
	{(ContainerRNA *)&RNA_MovieTrackingTracks, (ContainerRNA *)&RNA_MovieTrackingPlaneTrack,
	NULL,
	{(PropertyRNA *)&rna_MovieTrackingPlaneMarkers_rna_properties, (PropertyRNA *)&rna_MovieTrackingPlaneMarkers_rna_type}},
	"MovieTrackingPlaneMarkers", NULL, NULL, 4, "Movie Tracking Plane Markers",
	"Collection of markers for movie tracking plane track",
	"*", 17,
	NULL, (PropertyRNA *)&rna_MovieTrackingPlaneMarkers_rna_properties,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	{(FunctionRNA *)&rna_MovieTrackingPlaneMarkers_find_frame_func, (FunctionRNA *)&rna_MovieTrackingPlaneMarkers_delete_frame_func}
};

/* Movie Tracks */
CollectionPropertyRNA rna_MovieTrackingTracks_rna_properties = {
	{(PropertyRNA *)&rna_MovieTrackingTracks_rna_type, NULL,
	-1, "rna_properties", 128, "Properties",
	"RNA property collection",
	0, "*",
	PROP_COLLECTION, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	MovieTrackingTracks_rna_properties_begin, MovieTrackingTracks_rna_properties_next, MovieTrackingTracks_rna_properties_end, MovieTrackingTracks_rna_properties_get, NULL, NULL, MovieTrackingTracks_rna_properties_lookup_string, NULL, &RNA_Property
};

PointerPropertyRNA rna_MovieTrackingTracks_rna_type = {
	{(PropertyRNA *)&rna_MovieTrackingTracks_active, (PropertyRNA *)&rna_MovieTrackingTracks_rna_properties,
	-1, "rna_type", 8912896, "RNA",
	"RNA type definition",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	MovieTrackingTracks_rna_type_get, NULL, NULL, NULL,&RNA_Struct
};

PointerPropertyRNA rna_MovieTrackingTracks_active = {
	{NULL, (PropertyRNA *)&rna_MovieTrackingTracks_rna_type,
	-1, "active", 41943041, "Active Track",
	"Active track in this tracking data object",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	MovieTrackingTracks_active_get, MovieTrackingTracks_active_set, NULL, NULL,&RNA_MovieTrackingTrack
};

StringPropertyRNA rna_MovieTrackingTracks_new_name = {
	{(PropertyRNA *)&rna_MovieTrackingTracks_new_frame, NULL,
	-1, "name", 262145, "",
	"Name of new track",
	0, "*",
	PROP_STRING, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	NULL, NULL, NULL, NULL, NULL, NULL, 0, ""
};

IntPropertyRNA rna_MovieTrackingTracks_new_frame = {
	{(PropertyRNA *)&rna_MovieTrackingTracks_new_track, (PropertyRNA *)&rna_MovieTrackingTracks_new_name,
	-1, "frame", 3, "Frame",
	"Frame number to add track on",
	0, "*",
	PROP_INT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL,
	0, 300000, 0, 300000, 1, 1, NULL
};

PointerPropertyRNA rna_MovieTrackingTracks_new_track = {
	{NULL, (PropertyRNA *)&rna_MovieTrackingTracks_new_frame,
	-1, "track", 8388616, "",
	"Newly created track",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	NULL, NULL, NULL, NULL,&RNA_MovieTrackingTrack
};

FunctionRNA rna_MovieTrackingTracks_new_func = {
	{NULL, NULL,
	NULL,
	{(PropertyRNA *)&rna_MovieTrackingTracks_new_name, (PropertyRNA *)&rna_MovieTrackingTracks_new_track}},
	"new", 2048, "Create new motion track in this movie clip",
	MovieTrackingTracks_new_call,
	(PropertyRNA *)&rna_MovieTrackingTracks_new_track
};

StructRNA RNA_MovieTrackingTracks = {
	{(ContainerRNA *)&RNA_MovieTrackingPlaneTracks, (ContainerRNA *)&RNA_MovieTrackingPlaneMarkers,
	NULL,
	{(PropertyRNA *)&rna_MovieTrackingTracks_rna_properties, (PropertyRNA *)&rna_MovieTrackingTracks_active}},
	"MovieTrackingTracks", NULL, NULL, 4, "Movie Tracks",
	"Collection of movie tracking tracks",
	"*", 17,
	NULL, (PropertyRNA *)&rna_MovieTrackingTracks_rna_properties,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	{(FunctionRNA *)&rna_MovieTrackingTracks_new_func, (FunctionRNA *)&rna_MovieTrackingTracks_new_func}
};

/* Movie Plane Tracks */
CollectionPropertyRNA rna_MovieTrackingPlaneTracks_rna_properties = {
	{(PropertyRNA *)&rna_MovieTrackingPlaneTracks_rna_type, NULL,
	-1, "rna_properties", 128, "Properties",
	"RNA property collection",
	0, "*",
	PROP_COLLECTION, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	MovieTrackingPlaneTracks_rna_properties_begin, MovieTrackingPlaneTracks_rna_properties_next, MovieTrackingPlaneTracks_rna_properties_end, MovieTrackingPlaneTracks_rna_properties_get, NULL, NULL, MovieTrackingPlaneTracks_rna_properties_lookup_string, NULL, &RNA_Property
};

PointerPropertyRNA rna_MovieTrackingPlaneTracks_rna_type = {
	{(PropertyRNA *)&rna_MovieTrackingPlaneTracks_active, (PropertyRNA *)&rna_MovieTrackingPlaneTracks_rna_properties,
	-1, "rna_type", 8912896, "RNA",
	"RNA type definition",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	MovieTrackingPlaneTracks_rna_type_get, NULL, NULL, NULL,&RNA_Struct
};

PointerPropertyRNA rna_MovieTrackingPlaneTracks_active = {
	{NULL, (PropertyRNA *)&rna_MovieTrackingPlaneTracks_rna_type,
	-1, "active", 41943041, "Active Plane Track",
	"Active plane track in this tracking data object",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	MovieTrackingPlaneTracks_active_get, MovieTrackingPlaneTracks_active_set, NULL, NULL,&RNA_MovieTrackingPlaneTrack
};

StructRNA RNA_MovieTrackingPlaneTracks = {
	{(ContainerRNA *)&RNA_MovieTrackingObjectTracks, (ContainerRNA *)&RNA_MovieTrackingTracks,
	NULL,
	{(PropertyRNA *)&rna_MovieTrackingPlaneTracks_rna_properties, (PropertyRNA *)&rna_MovieTrackingPlaneTracks_active}},
	"MovieTrackingPlaneTracks", NULL, NULL, 4, "Movie Plane Tracks",
	"Collection of movie tracking plane tracks",
	"*", 17,
	NULL, (PropertyRNA *)&rna_MovieTrackingPlaneTracks_rna_properties,
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

/* Movie Tracks */
CollectionPropertyRNA rna_MovieTrackingObjectTracks_rna_properties = {
	{(PropertyRNA *)&rna_MovieTrackingObjectTracks_rna_type, NULL,
	-1, "rna_properties", 128, "Properties",
	"RNA property collection",
	0, "*",
	PROP_COLLECTION, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	MovieTrackingObjectTracks_rna_properties_begin, MovieTrackingObjectTracks_rna_properties_next, MovieTrackingObjectTracks_rna_properties_end, MovieTrackingObjectTracks_rna_properties_get, NULL, NULL, MovieTrackingObjectTracks_rna_properties_lookup_string, NULL, &RNA_Property
};

PointerPropertyRNA rna_MovieTrackingObjectTracks_rna_type = {
	{(PropertyRNA *)&rna_MovieTrackingObjectTracks_active, (PropertyRNA *)&rna_MovieTrackingObjectTracks_rna_properties,
	-1, "rna_type", 8912896, "RNA",
	"RNA type definition",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	MovieTrackingObjectTracks_rna_type_get, NULL, NULL, NULL,&RNA_Struct
};

PointerPropertyRNA rna_MovieTrackingObjectTracks_active = {
	{NULL, (PropertyRNA *)&rna_MovieTrackingObjectTracks_rna_type,
	-1, "active", 41943041, "Active Track",
	"Active track in this tracking data object",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	MovieTrackingObjectTracks_active_get, MovieTrackingObjectTracks_active_set, NULL, NULL,&RNA_MovieTrackingTrack
};

StringPropertyRNA rna_MovieTrackingObjectTracks_new_name = {
	{(PropertyRNA *)&rna_MovieTrackingObjectTracks_new_frame, NULL,
	-1, "name", 262145, "",
	"Name of new track",
	0, "*",
	PROP_STRING, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	NULL, NULL, NULL, NULL, NULL, NULL, 0, ""
};

IntPropertyRNA rna_MovieTrackingObjectTracks_new_frame = {
	{(PropertyRNA *)&rna_MovieTrackingObjectTracks_new_track, (PropertyRNA *)&rna_MovieTrackingObjectTracks_new_name,
	-1, "frame", 3, "Frame",
	"Frame number to add tracks on",
	0, "*",
	PROP_INT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL,
	0, 300000, 0, 300000, 1, 1, NULL
};

PointerPropertyRNA rna_MovieTrackingObjectTracks_new_track = {
	{NULL, (PropertyRNA *)&rna_MovieTrackingObjectTracks_new_frame,
	-1, "track", 8388616, "",
	"Newly created track",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	NULL, NULL, NULL, NULL,&RNA_MovieTrackingTrack
};

FunctionRNA rna_MovieTrackingObjectTracks_new_func = {
	{NULL, NULL,
	NULL,
	{(PropertyRNA *)&rna_MovieTrackingObjectTracks_new_name, (PropertyRNA *)&rna_MovieTrackingObjectTracks_new_track}},
	"new", 2048, "create new motion track in this movie clip",
	MovieTrackingObjectTracks_new_call,
	(PropertyRNA *)&rna_MovieTrackingObjectTracks_new_track
};

StructRNA RNA_MovieTrackingObjectTracks = {
	{(ContainerRNA *)&RNA_MovieTrackingObjectPlaneTracks, (ContainerRNA *)&RNA_MovieTrackingPlaneTracks,
	NULL,
	{(PropertyRNA *)&rna_MovieTrackingObjectTracks_rna_properties, (PropertyRNA *)&rna_MovieTrackingObjectTracks_active}},
	"MovieTrackingObjectTracks", NULL, NULL, 4, "Movie Tracks",
	"Collection of movie tracking tracks",
	"*", 17,
	NULL, (PropertyRNA *)&rna_MovieTrackingObjectTracks_rna_properties,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	{(FunctionRNA *)&rna_MovieTrackingObjectTracks_new_func, (FunctionRNA *)&rna_MovieTrackingObjectTracks_new_func}
};

/* Plane Tracks */
CollectionPropertyRNA rna_MovieTrackingObjectPlaneTracks_rna_properties = {
	{(PropertyRNA *)&rna_MovieTrackingObjectPlaneTracks_rna_type, NULL,
	-1, "rna_properties", 128, "Properties",
	"RNA property collection",
	0, "*",
	PROP_COLLECTION, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	MovieTrackingObjectPlaneTracks_rna_properties_begin, MovieTrackingObjectPlaneTracks_rna_properties_next, MovieTrackingObjectPlaneTracks_rna_properties_end, MovieTrackingObjectPlaneTracks_rna_properties_get, NULL, NULL, MovieTrackingObjectPlaneTracks_rna_properties_lookup_string, NULL, &RNA_Property
};

PointerPropertyRNA rna_MovieTrackingObjectPlaneTracks_rna_type = {
	{(PropertyRNA *)&rna_MovieTrackingObjectPlaneTracks_active, (PropertyRNA *)&rna_MovieTrackingObjectPlaneTracks_rna_properties,
	-1, "rna_type", 8912896, "RNA",
	"RNA type definition",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	MovieTrackingObjectPlaneTracks_rna_type_get, NULL, NULL, NULL,&RNA_Struct
};

PointerPropertyRNA rna_MovieTrackingObjectPlaneTracks_active = {
	{NULL, (PropertyRNA *)&rna_MovieTrackingObjectPlaneTracks_rna_type,
	-1, "active", 41943041, "Active Track",
	"Active track in this tracking data object",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	MovieTrackingObjectPlaneTracks_active_get, MovieTrackingObjectPlaneTracks_active_set, NULL, NULL,&RNA_MovieTrackingTrack
};

StructRNA RNA_MovieTrackingObjectPlaneTracks = {
	{(ContainerRNA *)&RNA_MovieTrackingStabilization, (ContainerRNA *)&RNA_MovieTrackingObjectTracks,
	NULL,
	{(PropertyRNA *)&rna_MovieTrackingObjectPlaneTracks_rna_properties, (PropertyRNA *)&rna_MovieTrackingObjectPlaneTracks_active}},
	"MovieTrackingObjectPlaneTracks", NULL, NULL, 4, "Plane Tracks",
	"Collection of tracking plane tracks",
	"*", 17,
	NULL, (PropertyRNA *)&rna_MovieTrackingObjectPlaneTracks_rna_properties,
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

/* Movie tracking stabilization data */
CollectionPropertyRNA rna_MovieTrackingStabilization_rna_properties = {
	{(PropertyRNA *)&rna_MovieTrackingStabilization_rna_type, NULL,
	-1, "rna_properties", 128, "Properties",
	"RNA property collection",
	0, "*",
	PROP_COLLECTION, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	MovieTrackingStabilization_rna_properties_begin, MovieTrackingStabilization_rna_properties_next, MovieTrackingStabilization_rna_properties_end, MovieTrackingStabilization_rna_properties_get, NULL, NULL, MovieTrackingStabilization_rna_properties_lookup_string, NULL, &RNA_Property
};

PointerPropertyRNA rna_MovieTrackingStabilization_rna_type = {
	{(PropertyRNA *)&rna_MovieTrackingStabilization_use_2d_stabilization, (PropertyRNA *)&rna_MovieTrackingStabilization_rna_properties,
	-1, "rna_type", 8912896, "RNA",
	"RNA type definition",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	MovieTrackingStabilization_rna_type_get, NULL, NULL, NULL,&RNA_Struct
};

BoolPropertyRNA rna_MovieTrackingStabilization_use_2d_stabilization = {
	{(PropertyRNA *)&rna_MovieTrackingStabilization_tracks, (PropertyRNA *)&rna_MovieTrackingStabilization_rna_type,
	-1, "use_2d_stabilization", 1, "Use 2D stabilization",
	"Use 2D stabilization for footage",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_tracking_flushUpdate, 338886656, NULL, NULL,
	0, -1, NULL},
	MovieTrackingStabilization_use_2d_stabilization_get, MovieTrackingStabilization_use_2d_stabilization_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

CollectionPropertyRNA rna_MovieTrackingStabilization_tracks = {
	{(PropertyRNA *)&rna_MovieTrackingStabilization_rotation_track, (PropertyRNA *)&rna_MovieTrackingStabilization_use_2d_stabilization,
	-1, "tracks", 0, "Tracks",
	"Collection of tracks used for stabilization",
	0, "*",
	PROP_COLLECTION, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_tracking_flushUpdate, 338886656, NULL, NULL,
	0, -1, NULL},
	MovieTrackingStabilization_tracks_begin, MovieTrackingStabilization_tracks_next, MovieTrackingStabilization_tracks_end, MovieTrackingStabilization_tracks_get, NULL, NULL, NULL, NULL, &RNA_MovieTrackingTrack
};

PointerPropertyRNA rna_MovieTrackingStabilization_rotation_track = {
	{(PropertyRNA *)&rna_MovieTrackingStabilization_active_track_index, (PropertyRNA *)&rna_MovieTrackingStabilization_tracks,
	-1, "rotation_track", 8388609, "Rotation Track",
	"Track used to compensate rotation",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_tracking_flushUpdate, 335544321, NULL, NULL,
	0, -1, NULL},
	MovieTrackingStabilization_rotation_track_get, MovieTrackingStabilization_rotation_track_set, NULL, NULL,&RNA_MovieTrackingTrack
};

IntPropertyRNA rna_MovieTrackingStabilization_active_track_index = {
	{(PropertyRNA *)&rna_MovieTrackingStabilization_use_autoscale, (PropertyRNA *)&rna_MovieTrackingStabilization_rotation_track,
	-1, "active_track_index", 1, "Active Track Index",
	"Index of active track in stabilization tracks list",
	0, "*",
	PROP_INT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	MovieTrackingStabilization_active_track_index_get, MovieTrackingStabilization_active_track_index_set, NULL, NULL, rna_tracking_stabTracks_active_index_range, NULL, NULL, NULL, NULL, NULL,
	-10000, 10000, INT_MIN, INT_MAX, 1, 0, NULL
};

BoolPropertyRNA rna_MovieTrackingStabilization_use_autoscale = {
	{(PropertyRNA *)&rna_MovieTrackingStabilization_scale_max, (PropertyRNA *)&rna_MovieTrackingStabilization_active_track_index,
	-1, "use_autoscale", 1, "Autoscale",
	"Automatically scale footage to cover unfilled areas when stabilizing",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_tracking_flushUpdate, 338886656, NULL, NULL,
	0, -1, NULL},
	MovieTrackingStabilization_use_autoscale_get, MovieTrackingStabilization_use_autoscale_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

FloatPropertyRNA rna_MovieTrackingStabilization_scale_max = {
	{(PropertyRNA *)&rna_MovieTrackingStabilization_influence_location, (PropertyRNA *)&rna_MovieTrackingStabilization_use_autoscale,
	-1, "scale_max", 8195, "Maximal Scale",
	"Limit the amount of automatic scaling",
	0, "*",
	PROP_FLOAT, PROP_FACTOR | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_tracking_flushUpdate, 338886656, NULL, NULL,
	offsetof(MovieTrackingStabilization, maxscale), 4, NULL},
	MovieTrackingStabilization_scale_max_get, MovieTrackingStabilization_scale_max_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 10.0f, 0.0f, 10.0f, 10.0f, 3, 0.0f, NULL
};

FloatPropertyRNA rna_MovieTrackingStabilization_influence_location = {
	{(PropertyRNA *)&rna_MovieTrackingStabilization_influence_scale, (PropertyRNA *)&rna_MovieTrackingStabilization_scale_max,
	-1, "influence_location", 8195, "Location Influence",
	"Influence of stabilization algorithm on footage location",
	0, "*",
	PROP_FLOAT, PROP_FACTOR | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_tracking_flushUpdate, 338886656, NULL, NULL,
	offsetof(MovieTrackingStabilization, locinf), 4, NULL},
	MovieTrackingStabilization_influence_location_get, MovieTrackingStabilization_influence_location_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 1.0f, 0.0f, 1.0f, 10.0f, 3, 0.0f, NULL
};

FloatPropertyRNA rna_MovieTrackingStabilization_influence_scale = {
	{(PropertyRNA *)&rna_MovieTrackingStabilization_use_stabilize_rotation, (PropertyRNA *)&rna_MovieTrackingStabilization_influence_location,
	-1, "influence_scale", 8195, "Scale Influence",
	"Influence of stabilization algorithm on footage scale",
	0, "*",
	PROP_FLOAT, PROP_FACTOR | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_tracking_flushUpdate, 338886656, NULL, NULL,
	offsetof(MovieTrackingStabilization, scaleinf), 4, NULL},
	MovieTrackingStabilization_influence_scale_get, MovieTrackingStabilization_influence_scale_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 1.0f, 0.0f, 1.0f, 10.0f, 3, 0.0f, NULL
};

BoolPropertyRNA rna_MovieTrackingStabilization_use_stabilize_rotation = {
	{(PropertyRNA *)&rna_MovieTrackingStabilization_influence_rotation, (PropertyRNA *)&rna_MovieTrackingStabilization_influence_scale,
	-1, "use_stabilize_rotation", 1, "Stabilize Rotation",
	"Stabilize horizon line on the shot",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_tracking_flushUpdate, 338886656, NULL, NULL,
	0, -1, NULL},
	MovieTrackingStabilization_use_stabilize_rotation_get, MovieTrackingStabilization_use_stabilize_rotation_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

FloatPropertyRNA rna_MovieTrackingStabilization_influence_rotation = {
	{(PropertyRNA *)&rna_MovieTrackingStabilization_filter_type, (PropertyRNA *)&rna_MovieTrackingStabilization_use_stabilize_rotation,
	-1, "influence_rotation", 8195, "Rotation Influence",
	"Influence of stabilization algorithm on footage rotation",
	0, "*",
	PROP_FLOAT, PROP_FACTOR | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_tracking_flushUpdate, 338886656, NULL, NULL,
	offsetof(MovieTrackingStabilization, rotinf), 4, NULL},
	MovieTrackingStabilization_influence_rotation_get, MovieTrackingStabilization_influence_rotation_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 1.0f, 0.0f, 1.0f, 10.0f, 3, 0.0f, NULL
};

static EnumPropertyItem rna_MovieTrackingStabilization_filter_type_items[4] = {
	{0, "NEAREST", 0, "Nearest", ""},
	{1, "BILINEAR", 0, "Bilinear", ""},
	{2, "BICUBIC", 0, "Bicubic", ""},
	{0, NULL, 0, NULL, NULL}
};

EnumPropertyRNA rna_MovieTrackingStabilization_filter_type = {
	{NULL, (PropertyRNA *)&rna_MovieTrackingStabilization_influence_rotation,
	-1, "filter_type", 3, "Filter",
	"Method to use to filter stabilization",
	0, "*",
	PROP_ENUM, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_tracking_flushUpdate, 338886656, NULL, NULL,
	0, -1, NULL},
	MovieTrackingStabilization_filter_type_get, MovieTrackingStabilization_filter_type_set, NULL, NULL, NULL, NULL, rna_MovieTrackingStabilization_filter_type_items, 3, 0
};

StructRNA RNA_MovieTrackingStabilization = {
	{(ContainerRNA *)&RNA_MovieTrackingReconstructedCameras, (ContainerRNA *)&RNA_MovieTrackingObjectPlaneTracks,
	NULL,
	{(PropertyRNA *)&rna_MovieTrackingStabilization_rna_properties, (PropertyRNA *)&rna_MovieTrackingStabilization_filter_type}},
	"MovieTrackingStabilization", NULL, NULL, 4, "Movie tracking stabilization data",
	"Match-moving stabilization data for tracking",
	"*", 17,
	NULL, (PropertyRNA *)&rna_MovieTrackingStabilization_rna_properties,
	NULL,
	NULL,
	NULL,
	rna_trackingStabilization_path,
	NULL,
	NULL,
	NULL,
	NULL,
	{NULL, NULL}
};

/* Reconstructed Cameras */
CollectionPropertyRNA rna_MovieTrackingReconstructedCameras_rna_properties = {
	{(PropertyRNA *)&rna_MovieTrackingReconstructedCameras_rna_type, NULL,
	-1, "rna_properties", 128, "Properties",
	"RNA property collection",
	0, "*",
	PROP_COLLECTION, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	MovieTrackingReconstructedCameras_rna_properties_begin, MovieTrackingReconstructedCameras_rna_properties_next, MovieTrackingReconstructedCameras_rna_properties_end, MovieTrackingReconstructedCameras_rna_properties_get, NULL, NULL, MovieTrackingReconstructedCameras_rna_properties_lookup_string, NULL, &RNA_Property
};

PointerPropertyRNA rna_MovieTrackingReconstructedCameras_rna_type = {
	{NULL, (PropertyRNA *)&rna_MovieTrackingReconstructedCameras_rna_properties,
	-1, "rna_type", 8912896, "RNA",
	"RNA type definition",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	MovieTrackingReconstructedCameras_rna_type_get, NULL, NULL, NULL,&RNA_Struct
};

IntPropertyRNA rna_MovieTrackingReconstructedCameras_find_frame_frame = {
	{(PropertyRNA *)&rna_MovieTrackingReconstructedCameras_find_frame_camera, NULL,
	-1, "frame", 3, "Frame",
	"Frame number to find camera for",
	0, "*",
	PROP_INT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL,
	0, 300000, 0, 300000, 1, 1, NULL
};

PointerPropertyRNA rna_MovieTrackingReconstructedCameras_find_frame_camera = {
	{NULL, (PropertyRNA *)&rna_MovieTrackingReconstructedCameras_find_frame_frame,
	-1, "camera", 8388616, "",
	"Camera for a given frame",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	NULL, NULL, NULL, NULL,&RNA_MovieReconstructedCamera
};

FunctionRNA rna_MovieTrackingReconstructedCameras_find_frame_func = {
	{(FunctionRNA *)&rna_MovieTrackingReconstructedCameras_matrix_from_frame_func, NULL,
	NULL,
	{(PropertyRNA *)&rna_MovieTrackingReconstructedCameras_find_frame_frame, (PropertyRNA *)&rna_MovieTrackingReconstructedCameras_find_frame_camera}},
	"find_frame", 2048, "Find a reconstructed camera for a give frame number",
	MovieTrackingReconstructedCameras_find_frame_call,
	(PropertyRNA *)&rna_MovieTrackingReconstructedCameras_find_frame_camera
};

IntPropertyRNA rna_MovieTrackingReconstructedCameras_matrix_from_frame_frame = {
	{(PropertyRNA *)&rna_MovieTrackingReconstructedCameras_matrix_from_frame_matrix, NULL,
	-1, "frame", 3, "Frame",
	"Frame number to find camera for",
	0, "*",
	PROP_INT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL,
	0, 300000, 0, 300000, 1, 1, NULL
};

static float rna_MovieTrackingReconstructedCameras_matrix_from_frame_matrix_default[16] = {
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

FloatPropertyRNA rna_MovieTrackingReconstructedCameras_matrix_from_frame_matrix = {
	{NULL, (PropertyRNA *)&rna_MovieTrackingReconstructedCameras_matrix_from_frame_frame,
	-1, "matrix", 8388619, "Matrix",
	"Interpolated camera matrix for a given frame",
	0, "*",
	PROP_FLOAT, PROP_MATRIX | PROP_UNIT_NONE, NULL, 2, {4, 4, 0}, 16,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0000000000f, FLT_MAX, 0.0000000000f, FLT_MAX, 1.0f, 3, 0.0f, rna_MovieTrackingReconstructedCameras_matrix_from_frame_matrix_default
};

FunctionRNA rna_MovieTrackingReconstructedCameras_matrix_from_frame_func = {
	{NULL, (FunctionRNA *)&rna_MovieTrackingReconstructedCameras_find_frame_func,
	NULL,
	{(PropertyRNA *)&rna_MovieTrackingReconstructedCameras_matrix_from_frame_frame, (PropertyRNA *)&rna_MovieTrackingReconstructedCameras_matrix_from_frame_matrix}},
	"matrix_from_frame", 2048, "Return interpolated camera matrix for a given frame",
	MovieTrackingReconstructedCameras_matrix_from_frame_call,
	NULL
};

StructRNA RNA_MovieTrackingReconstructedCameras = {
	{(ContainerRNA *)&RNA_MovieReconstructedCamera, (ContainerRNA *)&RNA_MovieTrackingStabilization,
	NULL,
	{(PropertyRNA *)&rna_MovieTrackingReconstructedCameras_rna_properties, (PropertyRNA *)&rna_MovieTrackingReconstructedCameras_rna_type}},
	"MovieTrackingReconstructedCameras", NULL, NULL, 4, "Reconstructed Cameras",
	"Collection of solved cameras",
	"*", 17,
	NULL, (PropertyRNA *)&rna_MovieTrackingReconstructedCameras_rna_properties,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	{(FunctionRNA *)&rna_MovieTrackingReconstructedCameras_find_frame_func, (FunctionRNA *)&rna_MovieTrackingReconstructedCameras_matrix_from_frame_func}
};

/* Movie tracking reconstructed camera data */
CollectionPropertyRNA rna_MovieReconstructedCamera_rna_properties = {
	{(PropertyRNA *)&rna_MovieReconstructedCamera_rna_type, NULL,
	-1, "rna_properties", 128, "Properties",
	"RNA property collection",
	0, "*",
	PROP_COLLECTION, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	MovieReconstructedCamera_rna_properties_begin, MovieReconstructedCamera_rna_properties_next, MovieReconstructedCamera_rna_properties_end, MovieReconstructedCamera_rna_properties_get, NULL, NULL, MovieReconstructedCamera_rna_properties_lookup_string, NULL, &RNA_Property
};

PointerPropertyRNA rna_MovieReconstructedCamera_rna_type = {
	{(PropertyRNA *)&rna_MovieReconstructedCamera_frame, (PropertyRNA *)&rna_MovieReconstructedCamera_rna_properties,
	-1, "rna_type", 8912896, "RNA",
	"RNA type definition",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	MovieReconstructedCamera_rna_type_get, NULL, NULL, NULL,&RNA_Struct
};

IntPropertyRNA rna_MovieReconstructedCamera_frame = {
	{(PropertyRNA *)&rna_MovieReconstructedCamera_matrix, (PropertyRNA *)&rna_MovieReconstructedCamera_rna_type,
	-1, "frame", 8194, "Frame",
	"Frame number marker is keyframed on",
	0, "*",
	PROP_INT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	offsetof(MovieReconstructedCamera, framenr), 0, NULL},
	MovieReconstructedCamera_frame_get, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL,
	-10000, 10000, INT_MIN, INT_MAX, 1, 0, NULL
};

static float rna_MovieReconstructedCamera_matrix_default[16] = {
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

FloatPropertyRNA rna_MovieReconstructedCamera_matrix = {
	{(PropertyRNA *)&rna_MovieReconstructedCamera_average_error, (PropertyRNA *)&rna_MovieReconstructedCamera_frame,
	-1, "matrix", 8194, "Matrix",
	"Worldspace transformation matrix",
	0, "*",
	PROP_FLOAT, PROP_MATRIX | PROP_UNIT_NONE, NULL, 2, {4, 4, 0}, 16,
	NULL, 0, NULL, NULL,
	offsetof(MovieReconstructedCamera, mat), 4, NULL},
	NULL, NULL, MovieReconstructedCamera_matrix_get, NULL, NULL, NULL, NULL, NULL, NULL, NULL, -10000.0f, 10000.0f, -FLT_MAX, FLT_MAX, 10.0f, 3, 0.0f, rna_MovieReconstructedCamera_matrix_default
};

FloatPropertyRNA rna_MovieReconstructedCamera_average_error = {
	{NULL, (PropertyRNA *)&rna_MovieReconstructedCamera_matrix,
	-1, "average_error", 8194, "Average Error",
	"Average error of reconstruction",
	0, "*",
	PROP_FLOAT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	offsetof(MovieReconstructedCamera, error), 4, NULL},
	MovieReconstructedCamera_average_error_get, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, -10000.0f, 10000.0f, -FLT_MAX, FLT_MAX, 10.0f, 3, 0.0f, NULL
};

StructRNA RNA_MovieReconstructedCamera = {
	{(ContainerRNA *)&RNA_MovieTrackingReconstruction, (ContainerRNA *)&RNA_MovieTrackingReconstructedCameras,
	NULL,
	{(PropertyRNA *)&rna_MovieReconstructedCamera_rna_properties, (PropertyRNA *)&rna_MovieReconstructedCamera_average_error}},
	"MovieReconstructedCamera", NULL, NULL, 4, "Movie tracking reconstructed camera data",
	"Match-moving reconstructed camera data from tracker",
	"*", 17,
	NULL, (PropertyRNA *)&rna_MovieReconstructedCamera_rna_properties,
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

/* Movie tracking reconstruction data */
CollectionPropertyRNA rna_MovieTrackingReconstruction_rna_properties = {
	{(PropertyRNA *)&rna_MovieTrackingReconstruction_rna_type, NULL,
	-1, "rna_properties", 128, "Properties",
	"RNA property collection",
	0, "*",
	PROP_COLLECTION, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	MovieTrackingReconstruction_rna_properties_begin, MovieTrackingReconstruction_rna_properties_next, MovieTrackingReconstruction_rna_properties_end, MovieTrackingReconstruction_rna_properties_get, NULL, NULL, MovieTrackingReconstruction_rna_properties_lookup_string, NULL, &RNA_Property
};

PointerPropertyRNA rna_MovieTrackingReconstruction_rna_type = {
	{(PropertyRNA *)&rna_MovieTrackingReconstruction_is_valid, (PropertyRNA *)&rna_MovieTrackingReconstruction_rna_properties,
	-1, "rna_type", 8912896, "RNA",
	"RNA type definition",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	MovieTrackingReconstruction_rna_type_get, NULL, NULL, NULL,&RNA_Struct
};

BoolPropertyRNA rna_MovieTrackingReconstruction_is_valid = {
	{(PropertyRNA *)&rna_MovieTrackingReconstruction_average_error, (PropertyRNA *)&rna_MovieTrackingReconstruction_rna_type,
	-1, "is_valid", 2, "Reconstructed",
	"Is tracking data contains valid reconstruction information",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	MovieTrackingReconstruction_is_valid_get, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

FloatPropertyRNA rna_MovieTrackingReconstruction_average_error = {
	{(PropertyRNA *)&rna_MovieTrackingReconstruction_cameras, (PropertyRNA *)&rna_MovieTrackingReconstruction_is_valid,
	-1, "average_error", 8194, "Average Error",
	"Average error of reconstruction",
	0, "*",
	PROP_FLOAT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	offsetof(MovieTrackingReconstruction, error), 4, NULL},
	MovieTrackingReconstruction_average_error_get, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, -10000.0f, 10000.0f, -FLT_MAX, FLT_MAX, 10.0f, 3, 0.0f, NULL
};

CollectionPropertyRNA rna_MovieTrackingReconstruction_cameras = {
	{NULL, (PropertyRNA *)&rna_MovieTrackingReconstruction_average_error,
	-1, "cameras", 16384, "Cameras",
	"Collection of solved cameras",
	0, "*",
	PROP_COLLECTION, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, &RNA_MovieTrackingReconstructedCameras},
	MovieTrackingReconstruction_cameras_begin, MovieTrackingReconstruction_cameras_next, MovieTrackingReconstruction_cameras_end, MovieTrackingReconstruction_cameras_get, MovieTrackingReconstruction_cameras_length, MovieTrackingReconstruction_cameras_lookup_int, NULL, NULL, &RNA_MovieReconstructedCamera
};

StructRNA RNA_MovieTrackingReconstruction = {
	{(ContainerRNA *)&RNA_MovieTrackingObject, (ContainerRNA *)&RNA_MovieReconstructedCamera,
	NULL,
	{(PropertyRNA *)&rna_MovieTrackingReconstruction_rna_properties, (PropertyRNA *)&rna_MovieTrackingReconstruction_cameras}},
	"MovieTrackingReconstruction", NULL, NULL, 4, "Movie tracking reconstruction data",
	"Match-moving reconstruction data from tracker",
	"*", 17,
	NULL, (PropertyRNA *)&rna_MovieTrackingReconstruction_rna_properties,
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

/* Movie tracking object data */
CollectionPropertyRNA rna_MovieTrackingObject_rna_properties = {
	{(PropertyRNA *)&rna_MovieTrackingObject_rna_type, NULL,
	-1, "rna_properties", 128, "Properties",
	"RNA property collection",
	0, "*",
	PROP_COLLECTION, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	MovieTrackingObject_rna_properties_begin, MovieTrackingObject_rna_properties_next, MovieTrackingObject_rna_properties_end, MovieTrackingObject_rna_properties_get, NULL, NULL, MovieTrackingObject_rna_properties_lookup_string, NULL, &RNA_Property
};

PointerPropertyRNA rna_MovieTrackingObject_rna_type = {
	{(PropertyRNA *)&rna_MovieTrackingObject_name, (PropertyRNA *)&rna_MovieTrackingObject_rna_properties,
	-1, "rna_type", 8912896, "RNA",
	"RNA type definition",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	MovieTrackingObject_rna_type_get, NULL, NULL, NULL,&RNA_Struct
};

StringPropertyRNA rna_MovieTrackingObject_name = {
	{(PropertyRNA *)&rna_MovieTrackingObject_is_camera, (PropertyRNA *)&rna_MovieTrackingObject_rna_type,
	-1, "name", 262145, "Name",
	"Unique name of object",
	0, "*",
	PROP_STRING, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {64, 0, 0}, 0,
	NULL, 335544321, NULL, NULL,
	0, -1, NULL},
	MovieTrackingObject_name_get, MovieTrackingObject_name_length, MovieTrackingObject_name_set, NULL, NULL, NULL, 64, ""
};

BoolPropertyRNA rna_MovieTrackingObject_is_camera = {
	{(PropertyRNA *)&rna_MovieTrackingObject_tracks, (PropertyRNA *)&rna_MovieTrackingObject_name,
	-1, "is_camera", 2, "Camera",
	"Object is used for camera tracking",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 338886656, NULL, NULL,
	0, -1, NULL},
	MovieTrackingObject_is_camera_get, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

CollectionPropertyRNA rna_MovieTrackingObject_tracks = {
	{(PropertyRNA *)&rna_MovieTrackingObject_plane_tracks, (PropertyRNA *)&rna_MovieTrackingObject_is_camera,
	-1, "tracks", 0, "Tracks",
	"Collection of tracks in this tracking data object",
	0, "*",
	PROP_COLLECTION, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, &RNA_MovieTrackingObjectTracks},
	MovieTrackingObject_tracks_begin, MovieTrackingObject_tracks_next, MovieTrackingObject_tracks_end, MovieTrackingObject_tracks_get, NULL, MovieTrackingObject_tracks_lookup_int, MovieTrackingObject_tracks_lookup_string, NULL, &RNA_MovieTrackingTrack
};

CollectionPropertyRNA rna_MovieTrackingObject_plane_tracks = {
	{(PropertyRNA *)&rna_MovieTrackingObject_reconstruction, (PropertyRNA *)&rna_MovieTrackingObject_tracks,
	-1, "plane_tracks", 0, "Plane Tracks",
	"Collection of plane tracks in this tracking data object",
	0, "*",
	PROP_COLLECTION, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, &RNA_MovieTrackingObjectPlaneTracks},
	MovieTrackingObject_plane_tracks_begin, MovieTrackingObject_plane_tracks_next, MovieTrackingObject_plane_tracks_end, MovieTrackingObject_plane_tracks_get, NULL, MovieTrackingObject_plane_tracks_lookup_int, MovieTrackingObject_plane_tracks_lookup_string, NULL, &RNA_MovieTrackingPlaneTrack
};

PointerPropertyRNA rna_MovieTrackingObject_reconstruction = {
	{(PropertyRNA *)&rna_MovieTrackingObject_scale, (PropertyRNA *)&rna_MovieTrackingObject_plane_tracks,
	-1, "reconstruction", 8388608, "reconstruction",
	"",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	MovieTrackingObject_reconstruction_get, NULL, NULL, NULL,&RNA_MovieTrackingReconstruction
};

FloatPropertyRNA rna_MovieTrackingObject_scale = {
	{(PropertyRNA *)&rna_MovieTrackingObject_keyframe_a, (PropertyRNA *)&rna_MovieTrackingObject_reconstruction,
	-1, "scale", 8193, "Scale",
	"Scale of object solution in camera space",
	0, "*",
	PROP_FLOAT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_trackingObject_flushUpdate, 335544321, NULL, NULL,
	offsetof(MovieTrackingObject, scale), 4, NULL},
	MovieTrackingObject_scale_get, MovieTrackingObject_scale_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0001000000f, 10000.0f, 0.0001000000f, 10000.0f, 1.0f, 4, 1.0f, NULL
};

IntPropertyRNA rna_MovieTrackingObject_keyframe_a = {
	{(PropertyRNA *)&rna_MovieTrackingObject_keyframe_b, (PropertyRNA *)&rna_MovieTrackingObject_scale,
	-1, "keyframe_a", 8193, "Keyframe A",
	"First keyframe used for reconstruction initialization",
	0, "*",
	PROP_INT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	offsetof(MovieTrackingObject, keyframe1), 0, NULL},
	MovieTrackingObject_keyframe_a_get, MovieTrackingObject_keyframe_a_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL,
	-10000, 10000, INT_MIN, INT_MAX, 1, 0, NULL
};

IntPropertyRNA rna_MovieTrackingObject_keyframe_b = {
	{NULL, (PropertyRNA *)&rna_MovieTrackingObject_keyframe_a,
	-1, "keyframe_b", 8193, "Keyframe B",
	"Second keyframe used for reconstruction initialization",
	0, "*",
	PROP_INT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	offsetof(MovieTrackingObject, keyframe2), 0, NULL},
	MovieTrackingObject_keyframe_b_get, MovieTrackingObject_keyframe_b_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL,
	-10000, 10000, INT_MIN, INT_MAX, 1, 0, NULL
};

StructRNA RNA_MovieTrackingObject = {
	{(ContainerRNA *)&RNA_MovieTrackingDopesheet, (ContainerRNA *)&RNA_MovieTrackingReconstruction,
	NULL,
	{(PropertyRNA *)&rna_MovieTrackingObject_rna_properties, (PropertyRNA *)&rna_MovieTrackingObject_keyframe_b}},
	"MovieTrackingObject", NULL, NULL, 4, "Movie tracking object data",
	"Match-moving object tracking and reconstruction data",
	"*", 17,
	(PropertyRNA *)&rna_MovieTrackingObject_name, (PropertyRNA *)&rna_MovieTrackingObject_rna_properties,
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

/* Movie Tracking Dopesheet */
CollectionPropertyRNA rna_MovieTrackingDopesheet_rna_properties = {
	{(PropertyRNA *)&rna_MovieTrackingDopesheet_rna_type, NULL,
	-1, "rna_properties", 128, "Properties",
	"RNA property collection",
	0, "*",
	PROP_COLLECTION, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	MovieTrackingDopesheet_rna_properties_begin, MovieTrackingDopesheet_rna_properties_next, MovieTrackingDopesheet_rna_properties_end, MovieTrackingDopesheet_rna_properties_get, NULL, NULL, MovieTrackingDopesheet_rna_properties_lookup_string, NULL, &RNA_Property
};

PointerPropertyRNA rna_MovieTrackingDopesheet_rna_type = {
	{(PropertyRNA *)&rna_MovieTrackingDopesheet_sort_method, (PropertyRNA *)&rna_MovieTrackingDopesheet_rna_properties,
	-1, "rna_type", 8912896, "RNA",
	"RNA type definition",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	MovieTrackingDopesheet_rna_type_get, NULL, NULL, NULL,&RNA_Struct
};

static EnumPropertyItem rna_MovieTrackingDopesheet_sort_method_items[5] = {
	{0, "NAME", 0, "Name", "Sort channels by their names"},
	{1, "LONGEST", 0, "Longest", "Sort channels by longest tracked segment"},
	{2, "TOTAL", 0, "Total", "Sort channels by overall amount of tracked segments"},
	{3, "AVERAGE_ERROR", 0, "Average Error", "Sort channels by average reprojection error of tracks after solve"},
	{0, NULL, 0, NULL, NULL}
};

EnumPropertyRNA rna_MovieTrackingDopesheet_sort_method = {
	{(PropertyRNA *)&rna_MovieTrackingDopesheet_use_invert_sort, (PropertyRNA *)&rna_MovieTrackingDopesheet_rna_type,
	-1, "sort_method", 3, "Dopesheet Sort Field",
	"Method to be used to sort channels in dopesheet view",
	0, "*",
	PROP_ENUM, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_trackingDopesheet_tagUpdate, 335544321, NULL, NULL,
	0, -1, NULL},
	MovieTrackingDopesheet_sort_method_get, MovieTrackingDopesheet_sort_method_set, NULL, NULL, NULL, NULL, rna_MovieTrackingDopesheet_sort_method_items, 4, 0
};

BoolPropertyRNA rna_MovieTrackingDopesheet_use_invert_sort = {
	{(PropertyRNA *)&rna_MovieTrackingDopesheet_show_only_selected, (PropertyRNA *)&rna_MovieTrackingDopesheet_sort_method,
	-1, "use_invert_sort", 3, "Invert Dopesheet Sort",
	"Invert sort order of dopesheet channels",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_trackingDopesheet_tagUpdate, 335544321, NULL, NULL,
	0, -1, NULL},
	MovieTrackingDopesheet_use_invert_sort_get, MovieTrackingDopesheet_use_invert_sort_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_MovieTrackingDopesheet_show_only_selected = {
	{(PropertyRNA *)&rna_MovieTrackingDopesheet_show_hidden, (PropertyRNA *)&rna_MovieTrackingDopesheet_use_invert_sort,
	-1, "show_only_selected", 3, "Only Selected",
	"Only include channels relating to selected objects and data",
	255, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_trackingDopesheet_tagUpdate, 335544321, NULL, NULL,
	0, -1, NULL},
	MovieTrackingDopesheet_show_only_selected_get, MovieTrackingDopesheet_show_only_selected_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_MovieTrackingDopesheet_show_hidden = {
	{NULL, (PropertyRNA *)&rna_MovieTrackingDopesheet_show_only_selected,
	-1, "show_hidden", 3, "Display Hidden",
	"Include channels from objects/bone that aren\'t visible",
	53, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_trackingDopesheet_tagUpdate, 335544321, NULL, NULL,
	0, -1, NULL},
	MovieTrackingDopesheet_show_hidden_get, MovieTrackingDopesheet_show_hidden_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

StructRNA RNA_MovieTrackingDopesheet = {
	{(ContainerRNA *)&RNA_MovieTracking, (ContainerRNA *)&RNA_MovieTrackingObject,
	NULL,
	{(PropertyRNA *)&rna_MovieTrackingDopesheet_rna_properties, (PropertyRNA *)&rna_MovieTrackingDopesheet_show_hidden}},
	"MovieTrackingDopesheet", NULL, NULL, 4, "Movie Tracking Dopesheet",
	"Match-moving dopesheet data",
	"*", 17,
	NULL, (PropertyRNA *)&rna_MovieTrackingDopesheet_rna_properties,
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

/* Movie tracking data */
CollectionPropertyRNA rna_MovieTracking_rna_properties = {
	{(PropertyRNA *)&rna_MovieTracking_rna_type, NULL,
	-1, "rna_properties", 128, "Properties",
	"RNA property collection",
	0, "*",
	PROP_COLLECTION, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	MovieTracking_rna_properties_begin, MovieTracking_rna_properties_next, MovieTracking_rna_properties_end, MovieTracking_rna_properties_get, NULL, NULL, MovieTracking_rna_properties_lookup_string, NULL, &RNA_Property
};

PointerPropertyRNA rna_MovieTracking_rna_type = {
	{(PropertyRNA *)&rna_MovieTracking_settings, (PropertyRNA *)&rna_MovieTracking_rna_properties,
	-1, "rna_type", 8912896, "RNA",
	"RNA type definition",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	MovieTracking_rna_type_get, NULL, NULL, NULL,&RNA_Struct
};

PointerPropertyRNA rna_MovieTracking_settings = {
	{(PropertyRNA *)&rna_MovieTracking_camera, (PropertyRNA *)&rna_MovieTracking_rna_type,
	-1, "settings", 8388608, "settings",
	"",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	MovieTracking_settings_get, NULL, NULL, NULL,&RNA_MovieTrackingSettings
};

PointerPropertyRNA rna_MovieTracking_camera = {
	{(PropertyRNA *)&rna_MovieTracking_tracks, (PropertyRNA *)&rna_MovieTracking_settings,
	-1, "camera", 8388608, "camera",
	"",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	MovieTracking_camera_get, NULL, NULL, NULL,&RNA_MovieTrackingCamera
};

CollectionPropertyRNA rna_MovieTracking_tracks = {
	{(PropertyRNA *)&rna_MovieTracking_plane_tracks, (PropertyRNA *)&rna_MovieTracking_camera,
	-1, "tracks", 0, "Tracks",
	"Collection of tracks in this tracking data object",
	0, "*",
	PROP_COLLECTION, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, &RNA_MovieTrackingTracks},
	MovieTracking_tracks_begin, MovieTracking_tracks_next, MovieTracking_tracks_end, MovieTracking_tracks_get, NULL, MovieTracking_tracks_lookup_int, MovieTracking_tracks_lookup_string, NULL, &RNA_MovieTrackingTrack
};

CollectionPropertyRNA rna_MovieTracking_plane_tracks = {
	{(PropertyRNA *)&rna_MovieTracking_stabilization, (PropertyRNA *)&rna_MovieTracking_tracks,
	-1, "plane_tracks", 0, "Plane Tracks",
	"Collection of plane tracks in this tracking data object",
	0, "*",
	PROP_COLLECTION, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, &RNA_MovieTrackingPlaneTracks},
	MovieTracking_plane_tracks_begin, MovieTracking_plane_tracks_next, MovieTracking_plane_tracks_end, MovieTracking_plane_tracks_get, NULL, MovieTracking_plane_tracks_lookup_int, MovieTracking_plane_tracks_lookup_string, NULL, &RNA_MovieTrackingPlaneTrack
};

PointerPropertyRNA rna_MovieTracking_stabilization = {
	{(PropertyRNA *)&rna_MovieTracking_reconstruction, (PropertyRNA *)&rna_MovieTracking_plane_tracks,
	-1, "stabilization", 8388608, "stabilization",
	"",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	MovieTracking_stabilization_get, NULL, NULL, NULL,&RNA_MovieTrackingStabilization
};

PointerPropertyRNA rna_MovieTracking_reconstruction = {
	{(PropertyRNA *)&rna_MovieTracking_objects, (PropertyRNA *)&rna_MovieTracking_stabilization,
	-1, "reconstruction", 8388608, "reconstruction",
	"",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	MovieTracking_reconstruction_get, NULL, NULL, NULL,&RNA_MovieTrackingReconstruction
};

CollectionPropertyRNA rna_MovieTracking_objects = {
	{(PropertyRNA *)&rna_MovieTracking_active_object_index, (PropertyRNA *)&rna_MovieTracking_reconstruction,
	-1, "objects", 0, "Objects",
	"Collection of objects in this tracking data object",
	0, "*",
	PROP_COLLECTION, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, &RNA_MovieTrackingObjects},
	MovieTracking_objects_begin, MovieTracking_objects_next, MovieTracking_objects_end, MovieTracking_objects_get, NULL, MovieTracking_objects_lookup_int, MovieTracking_objects_lookup_string, NULL, &RNA_MovieTrackingObject
};

IntPropertyRNA rna_MovieTracking_active_object_index = {
	{(PropertyRNA *)&rna_MovieTracking_dopesheet, (PropertyRNA *)&rna_MovieTracking_objects,
	-1, "active_object_index", 1, "Active Object Index",
	"Index of active object",
	0, "*",
	PROP_INT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 338886656, NULL, NULL,
	0, -1, NULL},
	MovieTracking_active_object_index_get, MovieTracking_active_object_index_set, NULL, NULL, rna_tracking_active_object_index_range, NULL, NULL, NULL, NULL, NULL,
	-10000, 10000, INT_MIN, INT_MAX, 1, 0, NULL
};

PointerPropertyRNA rna_MovieTracking_dopesheet = {
	{NULL, (PropertyRNA *)&rna_MovieTracking_active_object_index,
	-1, "dopesheet", 8388608, "dopesheet",
	"",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	MovieTracking_dopesheet_get, NULL, NULL, NULL,&RNA_MovieTrackingDopesheet
};

StructRNA RNA_MovieTracking = {
	{(ContainerRNA *)&RNA_MovieTrackingObjects, (ContainerRNA *)&RNA_MovieTrackingDopesheet,
	NULL,
	{(PropertyRNA *)&rna_MovieTracking_rna_properties, (PropertyRNA *)&rna_MovieTracking_dopesheet}},
	"MovieTracking", NULL, NULL, 4, "Movie tracking data",
	"Match-moving data for tracking",
	"*", 17,
	NULL, (PropertyRNA *)&rna_MovieTracking_rna_properties,
	NULL,
	NULL,
	NULL,
	rna_tracking_path,
	NULL,
	NULL,
	NULL,
	NULL,
	{NULL, NULL}
};

/* Movie Objects */
CollectionPropertyRNA rna_MovieTrackingObjects_rna_properties = {
	{(PropertyRNA *)&rna_MovieTrackingObjects_rna_type, NULL,
	-1, "rna_properties", 128, "Properties",
	"RNA property collection",
	0, "*",
	PROP_COLLECTION, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	MovieTrackingObjects_rna_properties_begin, MovieTrackingObjects_rna_properties_next, MovieTrackingObjects_rna_properties_end, MovieTrackingObjects_rna_properties_get, NULL, NULL, MovieTrackingObjects_rna_properties_lookup_string, NULL, &RNA_Property
};

PointerPropertyRNA rna_MovieTrackingObjects_rna_type = {
	{(PropertyRNA *)&rna_MovieTrackingObjects_active, (PropertyRNA *)&rna_MovieTrackingObjects_rna_properties,
	-1, "rna_type", 8912896, "RNA",
	"RNA type definition",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	MovieTrackingObjects_rna_type_get, NULL, NULL, NULL,&RNA_Struct
};

PointerPropertyRNA rna_MovieTrackingObjects_active = {
	{NULL, (PropertyRNA *)&rna_MovieTrackingObjects_rna_type,
	-1, "active", 41943041, "Active Object",
	"Active object in this tracking data object",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	MovieTrackingObjects_active_get, MovieTrackingObjects_active_set, NULL, NULL,&RNA_MovieTrackingObject
};

StringPropertyRNA rna_MovieTrackingObjects_new_name = {
	{(PropertyRNA *)&rna_MovieTrackingObjects_new_object, NULL,
	-1, "name", 262149, "",
	"Name of new object",
	0, "*",
	PROP_STRING, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	NULL, NULL, NULL, NULL, NULL, NULL, 0, ""
};

PointerPropertyRNA rna_MovieTrackingObjects_new_object = {
	{NULL, (PropertyRNA *)&rna_MovieTrackingObjects_new_name,
	-1, "object", 8388616, "",
	"New motion tracking object",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	NULL, NULL, NULL, NULL,&RNA_MovieTrackingObject
};

FunctionRNA rna_MovieTrackingObjects_new_func = {
	{(FunctionRNA *)&rna_MovieTrackingObjects_remove_func, NULL,
	NULL,
	{(PropertyRNA *)&rna_MovieTrackingObjects_new_name, (PropertyRNA *)&rna_MovieTrackingObjects_new_object}},
	"new", 0, "Add tracking object to this movie clip",
	MovieTrackingObjects_new_call,
	(PropertyRNA *)&rna_MovieTrackingObjects_new_object
};

PointerPropertyRNA rna_MovieTrackingObjects_remove_object = {
	{NULL, NULL,
	-1, "object", 264196, "",
	"Motion tracking object to be removed",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	NULL, NULL, NULL, NULL,&RNA_MovieTrackingObject
};

FunctionRNA rna_MovieTrackingObjects_remove_func = {
	{NULL, (FunctionRNA *)&rna_MovieTrackingObjects_new_func,
	NULL,
	{(PropertyRNA *)&rna_MovieTrackingObjects_remove_object, (PropertyRNA *)&rna_MovieTrackingObjects_remove_object}},
	"remove", 16, "Remove tracking object from this movie clip",
	MovieTrackingObjects_remove_call,
	NULL
};

StructRNA RNA_MovieTrackingObjects = {
	{(ContainerRNA *)&RNA_MaskParent, (ContainerRNA *)&RNA_MovieTracking,
	NULL,
	{(PropertyRNA *)&rna_MovieTrackingObjects_rna_properties, (PropertyRNA *)&rna_MovieTrackingObjects_active}},
	"MovieTrackingObjects", NULL, NULL, 4, "Movie Objects",
	"Collection of movie trackingobjects",
	"*", 17,
	NULL, (PropertyRNA *)&rna_MovieTrackingObjects_rna_properties,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	{(FunctionRNA *)&rna_MovieTrackingObjects_new_func, (FunctionRNA *)&rna_MovieTrackingObjects_remove_func}
};

