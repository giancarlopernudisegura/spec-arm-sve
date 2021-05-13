
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

#include "rna_ui.c"
#include "rna_ui_api.c"

#pragma GCC diagnostic ignored "-Wunused-parameter"

/* Autogenerated Functions */


CollectionPropertyRNA rna_UILayout_rna_properties;
PointerPropertyRNA rna_UILayout_rna_type;
BoolPropertyRNA rna_UILayout_active;
EnumPropertyRNA rna_UILayout_operator_context;
BoolPropertyRNA rna_UILayout_enabled;
BoolPropertyRNA rna_UILayout_alert;
EnumPropertyRNA rna_UILayout_alignment;
FloatPropertyRNA rna_UILayout_scale_x;
FloatPropertyRNA rna_UILayout_scale_y;

extern FunctionRNA rna_UILayout_row_func;
extern PointerPropertyRNA rna_UILayout_row_layout;
extern BoolPropertyRNA rna_UILayout_row_align;

extern FunctionRNA rna_UILayout_column_func;
extern PointerPropertyRNA rna_UILayout_column_layout;
extern BoolPropertyRNA rna_UILayout_column_align;

extern FunctionRNA rna_UILayout_column_flow_func;
extern IntPropertyRNA rna_UILayout_column_flow_columns;
extern PointerPropertyRNA rna_UILayout_column_flow_layout;
extern BoolPropertyRNA rna_UILayout_column_flow_align;

extern FunctionRNA rna_UILayout_box_func;
extern PointerPropertyRNA rna_UILayout_box_layout;

extern FunctionRNA rna_UILayout_split_func;
extern PointerPropertyRNA rna_UILayout_split_layout;
extern FloatPropertyRNA rna_UILayout_split_percentage;
extern BoolPropertyRNA rna_UILayout_split_align;

extern FunctionRNA rna_UILayout_menu_pie_func;
extern PointerPropertyRNA rna_UILayout_menu_pie_layout;

extern FunctionRNA rna_UILayout_icon_func;
extern IntPropertyRNA rna_UILayout_icon_icon_value;
extern PointerPropertyRNA rna_UILayout_icon_data;

extern FunctionRNA rna_UILayout_enum_item_name_func;
extern StringPropertyRNA rna_UILayout_enum_item_name_name;
extern PointerPropertyRNA rna_UILayout_enum_item_name_data;
extern StringPropertyRNA rna_UILayout_enum_item_name_property;
extern StringPropertyRNA rna_UILayout_enum_item_name_identifier;

extern FunctionRNA rna_UILayout_enum_item_description_func;
extern StringPropertyRNA rna_UILayout_enum_item_description_description;
extern PointerPropertyRNA rna_UILayout_enum_item_description_data;
extern StringPropertyRNA rna_UILayout_enum_item_description_property;
extern StringPropertyRNA rna_UILayout_enum_item_description_identifier;

extern FunctionRNA rna_UILayout_enum_item_icon_func;
extern IntPropertyRNA rna_UILayout_enum_item_icon_icon_value;
extern PointerPropertyRNA rna_UILayout_enum_item_icon_data;
extern StringPropertyRNA rna_UILayout_enum_item_icon_property;
extern StringPropertyRNA rna_UILayout_enum_item_icon_identifier;

extern FunctionRNA rna_UILayout_prop_func;
extern PointerPropertyRNA rna_UILayout_prop_data;
extern StringPropertyRNA rna_UILayout_prop_property;
extern StringPropertyRNA rna_UILayout_prop_text;
extern StringPropertyRNA rna_UILayout_prop_text_ctxt;
extern BoolPropertyRNA rna_UILayout_prop_translate;
extern EnumPropertyRNA rna_UILayout_prop_icon;
extern BoolPropertyRNA rna_UILayout_prop_expand;
extern BoolPropertyRNA rna_UILayout_prop_slider;
extern BoolPropertyRNA rna_UILayout_prop_toggle;
extern BoolPropertyRNA rna_UILayout_prop_icon_only;
extern BoolPropertyRNA rna_UILayout_prop_event;
extern BoolPropertyRNA rna_UILayout_prop_full_event;
extern BoolPropertyRNA rna_UILayout_prop_emboss;
extern IntPropertyRNA rna_UILayout_prop_index;
extern IntPropertyRNA rna_UILayout_prop_icon_value;

extern FunctionRNA rna_UILayout_props_enum_func;
extern PointerPropertyRNA rna_UILayout_props_enum_data;
extern StringPropertyRNA rna_UILayout_props_enum_property;

extern FunctionRNA rna_UILayout_prop_menu_enum_func;
extern PointerPropertyRNA rna_UILayout_prop_menu_enum_data;
extern StringPropertyRNA rna_UILayout_prop_menu_enum_property;
extern StringPropertyRNA rna_UILayout_prop_menu_enum_text;
extern StringPropertyRNA rna_UILayout_prop_menu_enum_text_ctxt;
extern BoolPropertyRNA rna_UILayout_prop_menu_enum_translate;
extern EnumPropertyRNA rna_UILayout_prop_menu_enum_icon;

extern FunctionRNA rna_UILayout_prop_enum_func;
extern PointerPropertyRNA rna_UILayout_prop_enum_data;
extern StringPropertyRNA rna_UILayout_prop_enum_property;
extern StringPropertyRNA rna_UILayout_prop_enum_value;
extern StringPropertyRNA rna_UILayout_prop_enum_text;
extern StringPropertyRNA rna_UILayout_prop_enum_text_ctxt;
extern BoolPropertyRNA rna_UILayout_prop_enum_translate;
extern EnumPropertyRNA rna_UILayout_prop_enum_icon;

extern FunctionRNA rna_UILayout_prop_search_func;
extern PointerPropertyRNA rna_UILayout_prop_search_data;
extern StringPropertyRNA rna_UILayout_prop_search_property;
extern PointerPropertyRNA rna_UILayout_prop_search_search_data;
extern StringPropertyRNA rna_UILayout_prop_search_search_property;
extern StringPropertyRNA rna_UILayout_prop_search_text;
extern StringPropertyRNA rna_UILayout_prop_search_text_ctxt;
extern BoolPropertyRNA rna_UILayout_prop_search_translate;
extern EnumPropertyRNA rna_UILayout_prop_search_icon;

extern FunctionRNA rna_UILayout_operator_func;
extern StringPropertyRNA rna_UILayout_operator_operator;
extern StringPropertyRNA rna_UILayout_operator_text;
extern StringPropertyRNA rna_UILayout_operator_text_ctxt;
extern BoolPropertyRNA rna_UILayout_operator_translate;
extern EnumPropertyRNA rna_UILayout_operator_icon;
extern BoolPropertyRNA rna_UILayout_operator_emboss;
extern PointerPropertyRNA rna_UILayout_operator_properties;

extern FunctionRNA rna_UILayout_operator_enum_func;
extern StringPropertyRNA rna_UILayout_operator_enum_operator;
extern StringPropertyRNA rna_UILayout_operator_enum_property;

extern FunctionRNA rna_UILayout_operator_menu_enum_func;
extern StringPropertyRNA rna_UILayout_operator_menu_enum_operator;
extern StringPropertyRNA rna_UILayout_operator_menu_enum_property;
extern StringPropertyRNA rna_UILayout_operator_menu_enum_text;
extern StringPropertyRNA rna_UILayout_operator_menu_enum_text_ctxt;
extern BoolPropertyRNA rna_UILayout_operator_menu_enum_translate;
extern EnumPropertyRNA rna_UILayout_operator_menu_enum_icon;

extern FunctionRNA rna_UILayout_label_func;
extern StringPropertyRNA rna_UILayout_label_text;
extern StringPropertyRNA rna_UILayout_label_text_ctxt;
extern BoolPropertyRNA rna_UILayout_label_translate;
extern EnumPropertyRNA rna_UILayout_label_icon;
extern IntPropertyRNA rna_UILayout_label_icon_value;

extern FunctionRNA rna_UILayout_menu_func;
extern StringPropertyRNA rna_UILayout_menu_menu;
extern StringPropertyRNA rna_UILayout_menu_text;
extern StringPropertyRNA rna_UILayout_menu_text_ctxt;
extern BoolPropertyRNA rna_UILayout_menu_translate;
extern EnumPropertyRNA rna_UILayout_menu_icon;

extern FunctionRNA rna_UILayout_separator_func;
extern FunctionRNA rna_UILayout_context_pointer_set_func;
extern StringPropertyRNA rna_UILayout_context_pointer_set_name;
extern PointerPropertyRNA rna_UILayout_context_pointer_set_data;

extern FunctionRNA rna_UILayout_template_header_func;
extern FunctionRNA rna_UILayout_template_ID_func;
extern PointerPropertyRNA rna_UILayout_template_ID_data;
extern StringPropertyRNA rna_UILayout_template_ID_property;
extern StringPropertyRNA rna_UILayout_template_ID_new;
extern StringPropertyRNA rna_UILayout_template_ID_open;
extern StringPropertyRNA rna_UILayout_template_ID_unlink;

extern FunctionRNA rna_UILayout_template_ID_preview_func;
extern PointerPropertyRNA rna_UILayout_template_ID_preview_data;
extern StringPropertyRNA rna_UILayout_template_ID_preview_property;
extern StringPropertyRNA rna_UILayout_template_ID_preview_new;
extern StringPropertyRNA rna_UILayout_template_ID_preview_open;
extern StringPropertyRNA rna_UILayout_template_ID_preview_unlink;
extern IntPropertyRNA rna_UILayout_template_ID_preview_rows;
extern IntPropertyRNA rna_UILayout_template_ID_preview_cols;

extern FunctionRNA rna_UILayout_template_any_ID_func;
extern PointerPropertyRNA rna_UILayout_template_any_ID_data;
extern StringPropertyRNA rna_UILayout_template_any_ID_property;
extern StringPropertyRNA rna_UILayout_template_any_ID_type_property;
extern StringPropertyRNA rna_UILayout_template_any_ID_text;
extern StringPropertyRNA rna_UILayout_template_any_ID_text_ctxt;
extern BoolPropertyRNA rna_UILayout_template_any_ID_translate;

extern FunctionRNA rna_UILayout_template_path_builder_func;
extern PointerPropertyRNA rna_UILayout_template_path_builder_data;
extern StringPropertyRNA rna_UILayout_template_path_builder_property;
extern PointerPropertyRNA rna_UILayout_template_path_builder_root;
extern StringPropertyRNA rna_UILayout_template_path_builder_text;
extern StringPropertyRNA rna_UILayout_template_path_builder_text_ctxt;
extern BoolPropertyRNA rna_UILayout_template_path_builder_translate;

extern FunctionRNA rna_UILayout_template_modifier_func;
extern PointerPropertyRNA rna_UILayout_template_modifier_data;
extern PointerPropertyRNA rna_UILayout_template_modifier_layout;

extern FunctionRNA rna_UILayout_template_constraint_func;
extern PointerPropertyRNA rna_UILayout_template_constraint_data;
extern PointerPropertyRNA rna_UILayout_template_constraint_layout;

extern FunctionRNA rna_UILayout_template_preview_func;
extern PointerPropertyRNA rna_UILayout_template_preview_id;
extern BoolPropertyRNA rna_UILayout_template_preview_show_buttons;
extern PointerPropertyRNA rna_UILayout_template_preview_parent;
extern PointerPropertyRNA rna_UILayout_template_preview_slot;
extern StringPropertyRNA rna_UILayout_template_preview_preview_id;

extern FunctionRNA rna_UILayout_template_curve_mapping_func;
extern PointerPropertyRNA rna_UILayout_template_curve_mapping_data;
extern StringPropertyRNA rna_UILayout_template_curve_mapping_property;
extern EnumPropertyRNA rna_UILayout_template_curve_mapping_type;
extern BoolPropertyRNA rna_UILayout_template_curve_mapping_levels;
extern BoolPropertyRNA rna_UILayout_template_curve_mapping_brush;
extern BoolPropertyRNA rna_UILayout_template_curve_mapping_use_negative_slope;

extern FunctionRNA rna_UILayout_template_color_ramp_func;
extern PointerPropertyRNA rna_UILayout_template_color_ramp_data;
extern StringPropertyRNA rna_UILayout_template_color_ramp_property;
extern BoolPropertyRNA rna_UILayout_template_color_ramp_expand;

extern FunctionRNA rna_UILayout_template_icon_view_func;
extern PointerPropertyRNA rna_UILayout_template_icon_view_data;
extern StringPropertyRNA rna_UILayout_template_icon_view_property;

extern FunctionRNA rna_UILayout_template_histogram_func;
extern PointerPropertyRNA rna_UILayout_template_histogram_data;
extern StringPropertyRNA rna_UILayout_template_histogram_property;

extern FunctionRNA rna_UILayout_template_waveform_func;
extern PointerPropertyRNA rna_UILayout_template_waveform_data;
extern StringPropertyRNA rna_UILayout_template_waveform_property;

extern FunctionRNA rna_UILayout_template_vectorscope_func;
extern PointerPropertyRNA rna_UILayout_template_vectorscope_data;
extern StringPropertyRNA rna_UILayout_template_vectorscope_property;

extern FunctionRNA rna_UILayout_template_layers_func;
extern PointerPropertyRNA rna_UILayout_template_layers_data;
extern StringPropertyRNA rna_UILayout_template_layers_property;
extern PointerPropertyRNA rna_UILayout_template_layers_used_layers_data;
extern StringPropertyRNA rna_UILayout_template_layers_used_layers_property;
extern IntPropertyRNA rna_UILayout_template_layers_active_layer;

extern FunctionRNA rna_UILayout_template_color_picker_func;
extern PointerPropertyRNA rna_UILayout_template_color_picker_data;
extern StringPropertyRNA rna_UILayout_template_color_picker_property;
extern BoolPropertyRNA rna_UILayout_template_color_picker_value_slider;
extern BoolPropertyRNA rna_UILayout_template_color_picker_lock;
extern BoolPropertyRNA rna_UILayout_template_color_picker_lock_luminosity;
extern BoolPropertyRNA rna_UILayout_template_color_picker_cubic;

extern FunctionRNA rna_UILayout_template_palette_func;
extern PointerPropertyRNA rna_UILayout_template_palette_data;
extern StringPropertyRNA rna_UILayout_template_palette_property;
extern BoolPropertyRNA rna_UILayout_template_palette_color;

extern FunctionRNA rna_UILayout_template_image_layers_func;
extern PointerPropertyRNA rna_UILayout_template_image_layers_image;
extern PointerPropertyRNA rna_UILayout_template_image_layers_image_user;

extern FunctionRNA rna_UILayout_template_image_func;
extern PointerPropertyRNA rna_UILayout_template_image_data;
extern StringPropertyRNA rna_UILayout_template_image_property;
extern PointerPropertyRNA rna_UILayout_template_image_image_user;
extern BoolPropertyRNA rna_UILayout_template_image_compact;

extern FunctionRNA rna_UILayout_template_image_settings_func;
extern PointerPropertyRNA rna_UILayout_template_image_settings_image_settings;
extern BoolPropertyRNA rna_UILayout_template_image_settings_color_management;

extern FunctionRNA rna_UILayout_template_movieclip_func;
extern PointerPropertyRNA rna_UILayout_template_movieclip_data;
extern StringPropertyRNA rna_UILayout_template_movieclip_property;
extern BoolPropertyRNA rna_UILayout_template_movieclip_compact;

extern FunctionRNA rna_UILayout_template_track_func;
extern PointerPropertyRNA rna_UILayout_template_track_data;
extern StringPropertyRNA rna_UILayout_template_track_property;

extern FunctionRNA rna_UILayout_template_marker_func;
extern PointerPropertyRNA rna_UILayout_template_marker_data;
extern StringPropertyRNA rna_UILayout_template_marker_property;
extern PointerPropertyRNA rna_UILayout_template_marker_clip_user;
extern PointerPropertyRNA rna_UILayout_template_marker_track;
extern BoolPropertyRNA rna_UILayout_template_marker_compact;

extern FunctionRNA rna_UILayout_template_movieclip_information_func;
extern PointerPropertyRNA rna_UILayout_template_movieclip_information_data;
extern StringPropertyRNA rna_UILayout_template_movieclip_information_property;
extern PointerPropertyRNA rna_UILayout_template_movieclip_information_clip_user;

extern FunctionRNA rna_UILayout_template_list_func;
extern StringPropertyRNA rna_UILayout_template_list_listtype_name;
extern StringPropertyRNA rna_UILayout_template_list_list_id;
extern PointerPropertyRNA rna_UILayout_template_list_dataptr;
extern StringPropertyRNA rna_UILayout_template_list_propname;
extern PointerPropertyRNA rna_UILayout_template_list_active_dataptr;
extern StringPropertyRNA rna_UILayout_template_list_active_propname;
extern IntPropertyRNA rna_UILayout_template_list_rows;
extern IntPropertyRNA rna_UILayout_template_list_maxrows;
extern EnumPropertyRNA rna_UILayout_template_list_type;
extern IntPropertyRNA rna_UILayout_template_list_columns;

extern FunctionRNA rna_UILayout_template_running_jobs_func;
extern FunctionRNA rna_UILayout_template_operator_search_func;
extern FunctionRNA rna_UILayout_template_header_3D_func;
extern FunctionRNA rna_UILayout_template_edit_mode_selection_func;
extern FunctionRNA rna_UILayout_template_reports_banner_func;
extern FunctionRNA rna_UILayout_template_node_link_func;
extern PointerPropertyRNA rna_UILayout_template_node_link_ntree;
extern PointerPropertyRNA rna_UILayout_template_node_link_node;
extern PointerPropertyRNA rna_UILayout_template_node_link_socket;

extern FunctionRNA rna_UILayout_template_node_view_func;
extern PointerPropertyRNA rna_UILayout_template_node_view_ntree;
extern PointerPropertyRNA rna_UILayout_template_node_view_node;
extern PointerPropertyRNA rna_UILayout_template_node_view_socket;

extern FunctionRNA rna_UILayout_template_texture_user_func;
extern FunctionRNA rna_UILayout_template_keymap_item_properties_func;
extern PointerPropertyRNA rna_UILayout_template_keymap_item_properties_item;

extern FunctionRNA rna_UILayout_template_component_menu_func;
extern PointerPropertyRNA rna_UILayout_template_component_menu_data;
extern StringPropertyRNA rna_UILayout_template_component_menu_property;
extern StringPropertyRNA rna_UILayout_template_component_menu_name;

extern FunctionRNA rna_UILayout_introspect_func;
extern StringPropertyRNA rna_UILayout_introspect_string;

extern FunctionRNA rna_UILayout_template_colorspace_settings_func;
extern PointerPropertyRNA rna_UILayout_template_colorspace_settings_data;
extern StringPropertyRNA rna_UILayout_template_colorspace_settings_property;

extern FunctionRNA rna_UILayout_template_colormanaged_view_settings_func;
extern PointerPropertyRNA rna_UILayout_template_colormanaged_view_settings_data;
extern StringPropertyRNA rna_UILayout_template_colormanaged_view_settings_property;

extern FunctionRNA rna_UILayout_template_node_socket_func;
extern FloatPropertyRNA rna_UILayout_template_node_socket_color;



CollectionPropertyRNA rna_Panel_rna_properties;
PointerPropertyRNA rna_Panel_rna_type;
PointerPropertyRNA rna_Panel_layout;
StringPropertyRNA rna_Panel_text;
StringPropertyRNA rna_Panel_bl_idname;
StringPropertyRNA rna_Panel_bl_label;
StringPropertyRNA rna_Panel_bl_translation_context;
StringPropertyRNA rna_Panel_bl_category;
EnumPropertyRNA rna_Panel_bl_space_type;
EnumPropertyRNA rna_Panel_bl_region_type;
StringPropertyRNA rna_Panel_bl_context;
EnumPropertyRNA rna_Panel_bl_options;
BoolPropertyRNA rna_Panel_use_pin;

extern FunctionRNA rna_Panel_poll_func;
extern BoolPropertyRNA rna_Panel_poll_visible;
extern PointerPropertyRNA rna_Panel_poll_context;

extern FunctionRNA rna_Panel_draw_func;
extern PointerPropertyRNA rna_Panel_draw_context;

extern FunctionRNA rna_Panel_draw_header_func;
extern PointerPropertyRNA rna_Panel_draw_header_context;



CollectionPropertyRNA rna_UIList_rna_properties;
PointerPropertyRNA rna_UIList_rna_type;
StringPropertyRNA rna_UIList_bl_idname;
EnumPropertyRNA rna_UIList_layout_type;
BoolPropertyRNA rna_UIList_use_filter_show;
StringPropertyRNA rna_UIList_filter_name;
BoolPropertyRNA rna_UIList_use_filter_invert;
BoolPropertyRNA rna_UIList_use_filter_sort_alpha;
BoolPropertyRNA rna_UIList_use_filter_sort_reverse;
IntPropertyRNA rna_UIList_bitflag_filter_item;

extern FunctionRNA rna_UIList_draw_item_func;
extern PointerPropertyRNA rna_UIList_draw_item_context;
extern PointerPropertyRNA rna_UIList_draw_item_layout;
extern PointerPropertyRNA rna_UIList_draw_item_data;
extern PointerPropertyRNA rna_UIList_draw_item_item;
extern IntPropertyRNA rna_UIList_draw_item_icon;
extern PointerPropertyRNA rna_UIList_draw_item_active_data;
extern StringPropertyRNA rna_UIList_draw_item_active_property;
extern IntPropertyRNA rna_UIList_draw_item_index;
extern IntPropertyRNA rna_UIList_draw_item_flt_flag;

extern FunctionRNA rna_UIList_draw_filter_func;
extern PointerPropertyRNA rna_UIList_draw_filter_context;
extern PointerPropertyRNA rna_UIList_draw_filter_layout;

extern FunctionRNA rna_UIList_filter_items_func;
extern PointerPropertyRNA rna_UIList_filter_items_context;
extern PointerPropertyRNA rna_UIList_filter_items_data;
extern StringPropertyRNA rna_UIList_filter_items_property;
extern IntPropertyRNA rna_UIList_filter_items_filter_flags;
extern IntPropertyRNA rna_UIList_filter_items_filter_neworder;



CollectionPropertyRNA rna_Header_rna_properties;
PointerPropertyRNA rna_Header_rna_type;
PointerPropertyRNA rna_Header_layout;
StringPropertyRNA rna_Header_bl_idname;
EnumPropertyRNA rna_Header_bl_space_type;

extern FunctionRNA rna_Header_draw_func;
extern PointerPropertyRNA rna_Header_draw_context;



CollectionPropertyRNA rna_Menu_rna_properties;
PointerPropertyRNA rna_Menu_rna_type;
PointerPropertyRNA rna_Menu_layout;
StringPropertyRNA rna_Menu_bl_idname;
StringPropertyRNA rna_Menu_bl_label;
StringPropertyRNA rna_Menu_bl_translation_context;
StringPropertyRNA rna_Menu_bl_description;

extern FunctionRNA rna_Menu_poll_func;
extern BoolPropertyRNA rna_Menu_poll_visible;
extern PointerPropertyRNA rna_Menu_poll_context;

extern FunctionRNA rna_Menu_draw_func;
extern PointerPropertyRNA rna_Menu_draw_context;


static PointerRNA UILayout_rna_properties_get(CollectionPropertyIterator *iter)
{
	return rna_builtin_properties_get(iter);
}

void UILayout_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

	memset(iter, 0, sizeof(*iter));
	iter->parent = *ptr;
	iter->prop = (PropertyRNA *)&rna_UILayout_rna_properties;

	rna_builtin_properties_begin(iter, ptr);

	if (iter->valid)
		iter->ptr = UILayout_rna_properties_get(iter);
}

void UILayout_rna_properties_next(CollectionPropertyIterator *iter)
{
	rna_builtin_properties_next(iter);

	if (iter->valid)
		iter->ptr = UILayout_rna_properties_get(iter);
}

void UILayout_rna_properties_end(CollectionPropertyIterator *iter)
{
	rna_iterator_listbase_end(iter);
}

int UILayout_rna_properties_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
	return rna_builtin_properties_lookup_string(ptr, key, r_ptr);
}

PointerRNA UILayout_rna_type_get(PointerRNA *ptr)
{
	return rna_builtin_type_get(ptr);
}

int UILayout_active_get(PointerRNA *ptr)
{
	return rna_UILayout_active_get(ptr);
}

void UILayout_active_set(PointerRNA *ptr, int value)
{
	rna_UILayout_active_set(ptr, value);
}

int UILayout_operator_context_get(PointerRNA *ptr)
{
	return rna_UILayout_op_context_get(ptr);
}

void UILayout_operator_context_set(PointerRNA *ptr, int value)
{
	rna_UILayout_op_context_set(ptr, value);
}

int UILayout_enabled_get(PointerRNA *ptr)
{
	return rna_UILayout_enabled_get(ptr);
}

void UILayout_enabled_set(PointerRNA *ptr, int value)
{
	rna_UILayout_enabled_set(ptr, value);
}

int UILayout_alert_get(PointerRNA *ptr)
{
	return rna_UILayout_alert_get(ptr);
}

void UILayout_alert_set(PointerRNA *ptr, int value)
{
	rna_UILayout_alert_set(ptr, value);
}

int UILayout_alignment_get(PointerRNA *ptr)
{
	return rna_UILayout_alignment_get(ptr);
}

void UILayout_alignment_set(PointerRNA *ptr, int value)
{
	rna_UILayout_alignment_set(ptr, value);
}

float UILayout_scale_x_get(PointerRNA *ptr)
{
	return rna_UILayout_scale_x_get(ptr);
}

void UILayout_scale_x_set(PointerRNA *ptr, float value)
{
	rna_UILayout_scale_x_set(ptr, value);
}

float UILayout_scale_y_get(PointerRNA *ptr)
{
	return rna_UILayout_scale_y_get(ptr);
}

void UILayout_scale_y_set(PointerRNA *ptr, float value)
{
	rna_UILayout_scale_y_set(ptr, value);
}

static PointerRNA Panel_rna_properties_get(CollectionPropertyIterator *iter)
{
	return rna_builtin_properties_get(iter);
}

void Panel_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

	memset(iter, 0, sizeof(*iter));
	iter->parent = *ptr;
	iter->prop = (PropertyRNA *)&rna_Panel_rna_properties;

	rna_builtin_properties_begin(iter, ptr);

	if (iter->valid)
		iter->ptr = Panel_rna_properties_get(iter);
}

void Panel_rna_properties_next(CollectionPropertyIterator *iter)
{
	rna_builtin_properties_next(iter);

	if (iter->valid)
		iter->ptr = Panel_rna_properties_get(iter);
}

void Panel_rna_properties_end(CollectionPropertyIterator *iter)
{
	rna_iterator_listbase_end(iter);
}

int Panel_rna_properties_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
	return rna_builtin_properties_lookup_string(ptr, key, r_ptr);
}

PointerRNA Panel_rna_type_get(PointerRNA *ptr)
{
	return rna_builtin_type_get(ptr);
}

PointerRNA Panel_layout_get(PointerRNA *ptr)
{
	Panel *data = (Panel *)(ptr->data);
	return rna_pointer_inherit_refine(ptr, &RNA_UILayout, data->layout);
}

void Panel_text_get(PointerRNA *ptr, char *value)
{
	Panel *data = (Panel *)(ptr->data);
	BLI_strncpy_utf8(value, data->drawname, 64);
}

int Panel_text_length(PointerRNA *ptr)
{
	Panel *data = (Panel *)(ptr->data);
	return strlen(data->drawname);
}

void Panel_text_set(PointerRNA *ptr, const char *value)
{
	Panel *data = (Panel *)(ptr->data);
	BLI_strncpy_utf8(data->drawname, value, 64);
}

void Panel_bl_idname_get(PointerRNA *ptr, char *value)
{
	Panel *data = (Panel *)(ptr->data);
	BLI_strncpy_utf8(value, data->type->idname, sizeof(data->type->idname));
}

int Panel_bl_idname_length(PointerRNA *ptr)
{
	Panel *data = (Panel *)(ptr->data);
	return strlen(data->type->idname);
}

void Panel_bl_idname_set(PointerRNA *ptr, const char *value)
{
	Panel *data = (Panel *)(ptr->data);
	BLI_strncpy_utf8(data->type->idname, value, sizeof(data->type->idname));
}

void Panel_bl_label_get(PointerRNA *ptr, char *value)
{
	Panel *data = (Panel *)(ptr->data);
	BLI_strncpy_utf8(value, data->type->label, sizeof(data->type->label));
}

int Panel_bl_label_length(PointerRNA *ptr)
{
	Panel *data = (Panel *)(ptr->data);
	return strlen(data->type->label);
}

void Panel_bl_label_set(PointerRNA *ptr, const char *value)
{
	Panel *data = (Panel *)(ptr->data);
	BLI_strncpy_utf8(data->type->label, value, sizeof(data->type->label));
}

void Panel_bl_translation_context_get(PointerRNA *ptr, char *value)
{
	Panel *data = (Panel *)(ptr->data);
	BLI_strncpy_utf8(value, data->type->translation_context, sizeof(data->type->translation_context));
}

int Panel_bl_translation_context_length(PointerRNA *ptr)
{
	Panel *data = (Panel *)(ptr->data);
	return strlen(data->type->translation_context);
}

void Panel_bl_translation_context_set(PointerRNA *ptr, const char *value)
{
	Panel *data = (Panel *)(ptr->data);
	BLI_strncpy_utf8(data->type->translation_context, value, sizeof(data->type->translation_context));
}

void Panel_bl_category_get(PointerRNA *ptr, char *value)
{
	Panel *data = (Panel *)(ptr->data);
	BLI_strncpy_utf8(value, data->type->category, sizeof(data->type->category));
}

int Panel_bl_category_length(PointerRNA *ptr)
{
	Panel *data = (Panel *)(ptr->data);
	return strlen(data->type->category);
}

void Panel_bl_category_set(PointerRNA *ptr, const char *value)
{
	Panel *data = (Panel *)(ptr->data);
	BLI_strncpy_utf8(data->type->category, value, sizeof(data->type->category));
}

int Panel_bl_space_type_get(PointerRNA *ptr)
{
	Panel *data = (Panel *)(ptr->data);
	return (int)(data->type->space_type);
}

void Panel_bl_space_type_set(PointerRNA *ptr, int value)
{
	Panel *data = (Panel *)(ptr->data);
	data->type->space_type = value;
}

int Panel_bl_region_type_get(PointerRNA *ptr)
{
	Panel *data = (Panel *)(ptr->data);
	return (int)(data->type->region_type);
}

void Panel_bl_region_type_set(PointerRNA *ptr, int value)
{
	Panel *data = (Panel *)(ptr->data);
	data->type->region_type = value;
}

void Panel_bl_context_get(PointerRNA *ptr, char *value)
{
	Panel *data = (Panel *)(ptr->data);
	BLI_strncpy_utf8(value, data->type->context, sizeof(data->type->context));
}

int Panel_bl_context_length(PointerRNA *ptr)
{
	Panel *data = (Panel *)(ptr->data);
	return strlen(data->type->context);
}

void Panel_bl_context_set(PointerRNA *ptr, const char *value)
{
	Panel *data = (Panel *)(ptr->data);
	BLI_strncpy_utf8(data->type->context, value, sizeof(data->type->context));
}

int Panel_bl_options_get(PointerRNA *ptr)
{
	Panel *data = (Panel *)(ptr->data);
	return (int)(data->type->flag);
}

void Panel_bl_options_set(PointerRNA *ptr, int value)
{
	Panel *data = (Panel *)(ptr->data);
	data->type->flag = value;
}

int Panel_use_pin_get(PointerRNA *ptr)
{
	Panel *data = (Panel *)(ptr->data);
	return (((data->flag) & 32) != 0);
}

void Panel_use_pin_set(PointerRNA *ptr, int value)
{
	Panel *data = (Panel *)(ptr->data);
	if (value) data->flag |= 32;
	else data->flag &= ~32;
}

static PointerRNA UIList_rna_properties_get(CollectionPropertyIterator *iter)
{
	return rna_builtin_properties_get(iter);
}

void UIList_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

	memset(iter, 0, sizeof(*iter));
	iter->parent = *ptr;
	iter->prop = (PropertyRNA *)&rna_UIList_rna_properties;

	rna_builtin_properties_begin(iter, ptr);

	if (iter->valid)
		iter->ptr = UIList_rna_properties_get(iter);
}

void UIList_rna_properties_next(CollectionPropertyIterator *iter)
{
	rna_builtin_properties_next(iter);

	if (iter->valid)
		iter->ptr = UIList_rna_properties_get(iter);
}

void UIList_rna_properties_end(CollectionPropertyIterator *iter)
{
	rna_iterator_listbase_end(iter);
}

int UIList_rna_properties_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
	return rna_builtin_properties_lookup_string(ptr, key, r_ptr);
}

PointerRNA UIList_rna_type_get(PointerRNA *ptr)
{
	return rna_builtin_type_get(ptr);
}

void UIList_bl_idname_get(PointerRNA *ptr, char *value)
{
	uiList *data = (uiList *)(ptr->data);
	BLI_strncpy_utf8(value, data->type->idname, sizeof(data->type->idname));
}

int UIList_bl_idname_length(PointerRNA *ptr)
{
	uiList *data = (uiList *)(ptr->data);
	return strlen(data->type->idname);
}

void UIList_bl_idname_set(PointerRNA *ptr, const char *value)
{
	uiList *data = (uiList *)(ptr->data);
	BLI_strncpy_utf8(data->type->idname, value, sizeof(data->type->idname));
}

int UIList_layout_type_get(PointerRNA *ptr)
{
	uiList *data = (uiList *)(ptr->data);
	return (int)(data->layout_type);
}

int UIList_use_filter_show_get(PointerRNA *ptr)
{
	uiList *data = (uiList *)(ptr->data);
	return (((data->filter_flag) & 1) != 0);
}

void UIList_use_filter_show_set(PointerRNA *ptr, int value)
{
	uiList *data = (uiList *)(ptr->data);
	if (value) data->filter_flag |= 1;
	else data->filter_flag &= ~1;
}

void UIList_filter_name_get(PointerRNA *ptr, char *value)
{
	uiList *data = (uiList *)(ptr->data);
	BLI_strncpy_utf8(value, data->filter_byname, 64);
}

int UIList_filter_name_length(PointerRNA *ptr)
{
	uiList *data = (uiList *)(ptr->data);
	return strlen(data->filter_byname);
}

void UIList_filter_name_set(PointerRNA *ptr, const char *value)
{
	uiList *data = (uiList *)(ptr->data);
	BLI_strncpy_utf8(data->filter_byname, value, 64);
}

int UIList_use_filter_invert_get(PointerRNA *ptr)
{
	uiList *data = (uiList *)(ptr->data);
	return (((data->filter_flag) & INT_MIN) != 0);
}

void UIList_use_filter_invert_set(PointerRNA *ptr, int value)
{
	uiList *data = (uiList *)(ptr->data);
	if (value) data->filter_flag |= INT_MIN;
	else data->filter_flag &= ~INT_MIN;
}

int UIList_use_filter_sort_alpha_get(PointerRNA *ptr)
{
	uiList *data = (uiList *)(ptr->data);
	return (((data->filter_sort_flag) & 1) != 0);
}

void UIList_use_filter_sort_alpha_set(PointerRNA *ptr, int value)
{
	uiList *data = (uiList *)(ptr->data);
	if (value) data->filter_sort_flag |= 1;
	else data->filter_sort_flag &= ~1;
}

int UIList_use_filter_sort_reverse_get(PointerRNA *ptr)
{
	uiList *data = (uiList *)(ptr->data);
	return (((data->filter_sort_flag) & INT_MIN) != 0);
}

void UIList_use_filter_sort_reverse_set(PointerRNA *ptr, int value)
{
	uiList *data = (uiList *)(ptr->data);
	if (value) data->filter_sort_flag |= INT_MIN;
	else data->filter_sort_flag &= ~INT_MIN;
}

int UIList_bitflag_filter_item_get(PointerRNA *ptr)
{
	return rna_UIList_filter_const_FILTER_ITEM_get(ptr);
}

static PointerRNA Header_rna_properties_get(CollectionPropertyIterator *iter)
{
	return rna_builtin_properties_get(iter);
}

void Header_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

	memset(iter, 0, sizeof(*iter));
	iter->parent = *ptr;
	iter->prop = (PropertyRNA *)&rna_Header_rna_properties;

	rna_builtin_properties_begin(iter, ptr);

	if (iter->valid)
		iter->ptr = Header_rna_properties_get(iter);
}

void Header_rna_properties_next(CollectionPropertyIterator *iter)
{
	rna_builtin_properties_next(iter);

	if (iter->valid)
		iter->ptr = Header_rna_properties_get(iter);
}

void Header_rna_properties_end(CollectionPropertyIterator *iter)
{
	rna_iterator_listbase_end(iter);
}

int Header_rna_properties_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
	return rna_builtin_properties_lookup_string(ptr, key, r_ptr);
}

PointerRNA Header_rna_type_get(PointerRNA *ptr)
{
	return rna_builtin_type_get(ptr);
}

PointerRNA Header_layout_get(PointerRNA *ptr)
{
	Header *data = (Header *)(ptr->data);
	return rna_pointer_inherit_refine(ptr, &RNA_UILayout, data->layout);
}

void Header_bl_idname_get(PointerRNA *ptr, char *value)
{
	Header *data = (Header *)(ptr->data);
	BLI_strncpy_utf8(value, data->type->idname, sizeof(data->type->idname));
}

int Header_bl_idname_length(PointerRNA *ptr)
{
	Header *data = (Header *)(ptr->data);
	return strlen(data->type->idname);
}

void Header_bl_idname_set(PointerRNA *ptr, const char *value)
{
	Header *data = (Header *)(ptr->data);
	BLI_strncpy_utf8(data->type->idname, value, sizeof(data->type->idname));
}

int Header_bl_space_type_get(PointerRNA *ptr)
{
	Header *data = (Header *)(ptr->data);
	return (int)(data->type->space_type);
}

void Header_bl_space_type_set(PointerRNA *ptr, int value)
{
	Header *data = (Header *)(ptr->data);
	data->type->space_type = value;
}

static PointerRNA Menu_rna_properties_get(CollectionPropertyIterator *iter)
{
	return rna_builtin_properties_get(iter);
}

void Menu_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

	memset(iter, 0, sizeof(*iter));
	iter->parent = *ptr;
	iter->prop = (PropertyRNA *)&rna_Menu_rna_properties;

	rna_builtin_properties_begin(iter, ptr);

	if (iter->valid)
		iter->ptr = Menu_rna_properties_get(iter);
}

void Menu_rna_properties_next(CollectionPropertyIterator *iter)
{
	rna_builtin_properties_next(iter);

	if (iter->valid)
		iter->ptr = Menu_rna_properties_get(iter);
}

void Menu_rna_properties_end(CollectionPropertyIterator *iter)
{
	rna_iterator_listbase_end(iter);
}

int Menu_rna_properties_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
	return rna_builtin_properties_lookup_string(ptr, key, r_ptr);
}

PointerRNA Menu_rna_type_get(PointerRNA *ptr)
{
	return rna_builtin_type_get(ptr);
}

PointerRNA Menu_layout_get(PointerRNA *ptr)
{
	Menu *data = (Menu *)(ptr->data);
	return rna_pointer_inherit_refine(ptr, &RNA_UILayout, data->layout);
}

void Menu_bl_idname_get(PointerRNA *ptr, char *value)
{
	Menu *data = (Menu *)(ptr->data);
	BLI_strncpy_utf8(value, data->type->idname, sizeof(data->type->idname));
}

int Menu_bl_idname_length(PointerRNA *ptr)
{
	Menu *data = (Menu *)(ptr->data);
	return strlen(data->type->idname);
}

void Menu_bl_idname_set(PointerRNA *ptr, const char *value)
{
	Menu *data = (Menu *)(ptr->data);
	BLI_strncpy_utf8(data->type->idname, value, sizeof(data->type->idname));
}

void Menu_bl_label_get(PointerRNA *ptr, char *value)
{
	Menu *data = (Menu *)(ptr->data);
	BLI_strncpy_utf8(value, data->type->label, sizeof(data->type->label));
}

int Menu_bl_label_length(PointerRNA *ptr)
{
	Menu *data = (Menu *)(ptr->data);
	return strlen(data->type->label);
}

void Menu_bl_label_set(PointerRNA *ptr, const char *value)
{
	Menu *data = (Menu *)(ptr->data);
	BLI_strncpy_utf8(data->type->label, value, sizeof(data->type->label));
}

void Menu_bl_translation_context_get(PointerRNA *ptr, char *value)
{
	Menu *data = (Menu *)(ptr->data);
	BLI_strncpy_utf8(value, data->type->translation_context, sizeof(data->type->translation_context));
}

int Menu_bl_translation_context_length(PointerRNA *ptr)
{
	Menu *data = (Menu *)(ptr->data);
	return strlen(data->type->translation_context);
}

void Menu_bl_translation_context_set(PointerRNA *ptr, const char *value)
{
	Menu *data = (Menu *)(ptr->data);
	BLI_strncpy_utf8(data->type->translation_context, value, sizeof(data->type->translation_context));
}

void Menu_bl_description_get(PointerRNA *ptr, char *value)
{
	Menu *data = (Menu *)(ptr->data);
	if (data->type->description == NULL) {
		*value = '\0';
		return;
	}
	BLI_strncpy_utf8(value, data->type->description, 240);
}

int Menu_bl_description_length(PointerRNA *ptr)
{
	Menu *data = (Menu *)(ptr->data);
	if (data->type->description == NULL) return 0;
	return strlen(data->type->description);
}

void Menu_bl_description_set(PointerRNA *ptr, const char *value)
{
	rna_Menu_bl_description_set(ptr, value);
}

struct uiLayout *UILayout_row(struct uiLayout *_self, int align)
{
	return uiLayoutRow(_self, align);
}

void UILayout_row_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	struct uiLayout *_self;
	struct uiLayout *layout;
	int align;
	char *_data, *_retdata;
	
	_self = (struct uiLayout *)_ptr->data;
	_data = (char *)_parms->data;
	_retdata = _data;
#if defined(SPEC_ILP32)
	_data += 4;
#else
	_data += 8;
#endif
	align = *((int *)_data);
	
	layout = uiLayoutRow(_self, align);
	*((struct uiLayout **)_retdata) = layout;
}

struct uiLayout *UILayout_column(struct uiLayout *_self, int align)
{
	return uiLayoutColumn(_self, align);
}

void UILayout_column_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	struct uiLayout *_self;
	struct uiLayout *layout;
	int align;
	char *_data, *_retdata;
	
	_self = (struct uiLayout *)_ptr->data;
	_data = (char *)_parms->data;
	_retdata = _data;
#if defined(SPEC_ILP32)
	_data += 4;
#else
	_data += 8;
#endif
	align = *((int *)_data);
	
	layout = uiLayoutColumn(_self, align);
	*((struct uiLayout **)_retdata) = layout;
}

struct uiLayout *UILayout_column_flow(struct uiLayout *_self, int columns, int align)
{
	return uiLayoutColumnFlow(_self, columns, align);
}

void UILayout_column_flow_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	struct uiLayout *_self;
	int columns;
	struct uiLayout *layout;
	int align;
	char *_data, *_retdata;
	
	_self = (struct uiLayout *)_ptr->data;
	_data = (char *)_parms->data;
	columns = *((int *)_data);
	_data += 4;
	_retdata = _data;
#if defined(SPEC_ILP32)
	_data += 4;
#else
	_data += 8;
#endif
	align = *((int *)_data);
	
	layout = uiLayoutColumnFlow(_self, columns, align);
	*((struct uiLayout **)_retdata) = layout;
}

struct uiLayout *UILayout_box(struct uiLayout *_self)
{
	return uiLayoutBox(_self);
}

void UILayout_box_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	struct uiLayout *_self;
	struct uiLayout *layout;
	char *_data, *_retdata;
	
	_self = (struct uiLayout *)_ptr->data;
	_data = (char *)_parms->data;
	_retdata = _data;
	
	layout = uiLayoutBox(_self);
	*((struct uiLayout **)_retdata) = layout;
}

struct uiLayout *UILayout_split(struct uiLayout *_self, float percentage, int align)
{
	return uiLayoutSplit(_self, percentage, align);
}

void UILayout_split_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	struct uiLayout *_self;
	struct uiLayout *layout;
	float percentage;
	int align;
	char *_data, *_retdata;
	
	_self = (struct uiLayout *)_ptr->data;
	_data = (char *)_parms->data;
	_retdata = _data;
#if defined(SPEC_ILP32)
	_data += 4;
#else
	_data += 8;
#endif
	percentage = *((float *)_data);
	_data += 4;
	align = *((int *)_data);
	
	layout = uiLayoutSplit(_self, percentage, align);
	*((struct uiLayout **)_retdata) = layout;
}

struct uiLayout *UILayout_menu_pie(struct uiLayout *_self)
{
	return uiLayoutRadial(_self);
}

void UILayout_menu_pie_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	struct uiLayout *_self;
	struct uiLayout *layout;
	char *_data, *_retdata;
	
	_self = (struct uiLayout *)_ptr->data;
	_data = (char *)_parms->data;
	_retdata = _data;
	
	layout = uiLayoutRadial(_self);
	*((struct uiLayout **)_retdata) = layout;
}

int UILayout_icon(bContext *C, struct PointerRNA *data)
{
	return rna_ui_get_rnaptr_icon(C, data);
}

void UILayout_icon_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	int icon_value;
	struct PointerRNA *data;
	char *_data, *_retdata;
	
	_data = (char *)_parms->data;
	_retdata = _data;
	_data += 4;
	data = ((struct PointerRNA *)_data);
	
	icon_value = rna_ui_get_rnaptr_icon(C, data);
	*((int *)_retdata) = icon_value;
}

const char * UILayout_enum_item_name(bContext *C, struct PointerRNA *data, const char * property, const char * identifier)
{
	return rna_ui_get_enum_name(C, data, property, identifier);
}

void UILayout_enum_item_name_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	const char * name;
	struct PointerRNA *data;
	const char * property;
	const char * identifier;
	char *_data, *_retdata;
	
	_data = (char *)_parms->data;
	_retdata = _data;
#if defined(SPEC_ILP32)
	_data += 4;
#else
	_data += 8;
#endif
	data = ((struct PointerRNA *)_data);
#if defined(SPEC_ILP32)
	_data += 12;
#else
	_data += 24;
#endif
	property = *((const char * *)_data);
#if defined(SPEC_ILP32)
	_data += 4;
#else
	_data += 8;
#endif
	identifier = *((const char * *)_data);
	
	name = rna_ui_get_enum_name(C, data, property, identifier);
	*((const char * *)_retdata) = name;
}

const char * UILayout_enum_item_description(bContext *C, struct PointerRNA *data, const char * property, const char * identifier)
{
	return rna_ui_get_enum_description(C, data, property, identifier);
}

void UILayout_enum_item_description_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	const char * description;
	struct PointerRNA *data;
	const char * property;
	const char * identifier;
	char *_data, *_retdata;
	
	_data = (char *)_parms->data;
	_retdata = _data;
#if defined(SPEC_ILP32)
	_data += 4;
#else
	_data += 8;
#endif
	data = ((struct PointerRNA *)_data);
#if defined(SPEC_ILP32)
	_data += 12;
#else
	_data += 24;
#endif
	property = *((const char * *)_data);
#if defined(SPEC_ILP32)
	_data += 4;
#else
	_data += 8;
#endif
	identifier = *((const char * *)_data);
	
	description = rna_ui_get_enum_description(C, data, property, identifier);
	*((const char * *)_retdata) = description;
}

int UILayout_enum_item_icon(bContext *C, struct PointerRNA *data, const char * property, const char * identifier)
{
	return rna_ui_get_enum_icon(C, data, property, identifier);
}

void UILayout_enum_item_icon_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	int icon_value;
	struct PointerRNA *data;
	const char * property;
	const char * identifier;
	char *_data, *_retdata;
	
	_data = (char *)_parms->data;
	_retdata = _data;
	_data += 4;
	data = ((struct PointerRNA *)_data);
#if defined(SPEC_ILP32)
	_data += 12;
#else
	_data += 24;
#endif
	property = *((const char * *)_data);
#if defined(SPEC_ILP32)
	_data += 4;
#else
	_data += 8;
#endif
	identifier = *((const char * *)_data);
	
	icon_value = rna_ui_get_enum_icon(C, data, property, identifier);
	*((int *)_retdata) = icon_value;
}

void UILayout_prop(struct uiLayout *_self, struct PointerRNA *data, const char * property, const char * text, const char * text_ctxt, int translate, int icon, int expand, int slider, int toggle, int icon_only, int event, int full_event, int emboss, int index, int icon_value)
{
	rna_uiItemR(_self, data, property, text, text_ctxt, translate, icon, expand, slider, toggle, icon_only, event, full_event, emboss, index, icon_value);
}

void UILayout_prop_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	struct uiLayout *_self;
	struct PointerRNA *data;
	const char * property;
	const char * text;
	const char * text_ctxt;
	int translate;
	int icon;
	int expand;
	int slider;
	int toggle;
	int icon_only;
	int event;
	int full_event;
	int emboss;
	int index;
	int icon_value;
	char *_data;
	
	_self = (struct uiLayout *)_ptr->data;
	_data = (char *)_parms->data;
	data = ((struct PointerRNA *)_data);
#if defined(SPEC_ILP32)
	_data += 12;
#else
	_data += 24;
#endif
	property = *((const char * *)_data);
#if defined(SPEC_ILP32)
	_data += 4;
#else
	_data += 8;
#endif
	text = *((const char * *)_data);
#if defined(SPEC_ILP32)
	_data += 4;
#else
	_data += 8;
#endif
	text_ctxt = *((const char * *)_data);
#if defined(SPEC_ILP32)
	_data += 4;
#else
	_data += 8;
#endif
	translate = *((int *)_data);
	_data += 4;
	icon = *((int *)_data);
	_data += 4;
	expand = *((int *)_data);
	_data += 4;
	slider = *((int *)_data);
	_data += 4;
	toggle = *((int *)_data);
	_data += 4;
	icon_only = *((int *)_data);
	_data += 4;
	event = *((int *)_data);
	_data += 4;
	full_event = *((int *)_data);
	_data += 4;
	emboss = *((int *)_data);
	_data += 4;
	index = *((int *)_data);
	_data += 4;
	icon_value = *((int *)_data);
	
	rna_uiItemR(_self, data, property, text, text_ctxt, translate, icon, expand, slider, toggle, icon_only, event, full_event, emboss, index, icon_value);
}

void UILayout_props_enum(struct uiLayout *_self, struct PointerRNA *data, const char * property)
{
	uiItemsEnumR(_self, data, property);
}

void UILayout_props_enum_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	struct uiLayout *_self;
	struct PointerRNA *data;
	const char * property;
	char *_data;
	
	_self = (struct uiLayout *)_ptr->data;
	_data = (char *)_parms->data;
	data = ((struct PointerRNA *)_data);
#if defined(SPEC_ILP32)
	_data += 12;
#else
	_data += 24;
#endif
	property = *((const char * *)_data);
	
	uiItemsEnumR(_self, data, property);
}

void UILayout_prop_menu_enum(struct uiLayout *_self, struct PointerRNA *data, const char * property, const char * text, const char * text_ctxt, int translate, int icon)
{
	rna_uiItemMenuEnumR(_self, data, property, text, text_ctxt, translate, icon);
}

void UILayout_prop_menu_enum_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	struct uiLayout *_self;
	struct PointerRNA *data;
	const char * property;
	const char * text;
	const char * text_ctxt;
	int translate;
	int icon;
	char *_data;
	
	_self = (struct uiLayout *)_ptr->data;
	_data = (char *)_parms->data;
	data = ((struct PointerRNA *)_data);
#if defined(SPEC_ILP32)
	_data += 12;
#else
	_data += 24;
#endif
	property = *((const char * *)_data);
#if defined(SPEC_ILP32)
	_data += 4;
#else
	_data += 8;
#endif
	text = *((const char * *)_data);
#if defined(SPEC_ILP32)
	_data += 4;
#else
	_data += 8;
#endif
	text_ctxt = *((const char * *)_data);
#if defined(SPEC_ILP32)
	_data += 4;
#else
	_data += 8;
#endif
	translate = *((int *)_data);
	_data += 4;
	icon = *((int *)_data);
	
	rna_uiItemMenuEnumR(_self, data, property, text, text_ctxt, translate, icon);
}

void UILayout_prop_enum(struct uiLayout *_self, struct PointerRNA *data, const char * property, const char * value, const char * text, const char * text_ctxt, int translate, int icon)
{
	rna_uiItemEnumR_string(_self, data, property, value, text, text_ctxt, translate, icon);
}

void UILayout_prop_enum_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	struct uiLayout *_self;
	struct PointerRNA *data;
	const char * property;
	const char * value;
	const char * text;
	const char * text_ctxt;
	int translate;
	int icon;
	char *_data;
	
	_self = (struct uiLayout *)_ptr->data;
	_data = (char *)_parms->data;
	data = ((struct PointerRNA *)_data);
#if defined(SPEC_ILP32)
	_data += 12;
#else
	_data += 24;
#endif
	property = *((const char * *)_data);
#if defined(SPEC_ILP32)
	_data += 4;
#else
	_data += 8;
#endif
	value = *((const char * *)_data);
#if defined(SPEC_ILP32)
	_data += 4;
#else
	_data += 8;
#endif
	text = *((const char * *)_data);
#if defined(SPEC_ILP32)
	_data += 4;
#else
	_data += 8;
#endif
	text_ctxt = *((const char * *)_data);
#if defined(SPEC_ILP32)
	_data += 4;
#else
	_data += 8;
#endif
	translate = *((int *)_data);
	_data += 4;
	icon = *((int *)_data);
	
	rna_uiItemEnumR_string(_self, data, property, value, text, text_ctxt, translate, icon);
}

void UILayout_prop_search(struct uiLayout *_self, struct PointerRNA *data, const char * property, struct PointerRNA *search_data, const char * search_property, const char * text, const char * text_ctxt, int translate, int icon)
{
	rna_uiItemPointerR(_self, data, property, search_data, search_property, text, text_ctxt, translate, icon);
}

void UILayout_prop_search_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	struct uiLayout *_self;
	struct PointerRNA *data;
	const char * property;
	struct PointerRNA *search_data;
	const char * search_property;
	const char * text;
	const char * text_ctxt;
	int translate;
	int icon;
	char *_data;
	
	_self = (struct uiLayout *)_ptr->data;
	_data = (char *)_parms->data;
	data = ((struct PointerRNA *)_data);
#if defined(SPEC_ILP32)
	_data += 12;
#else
	_data += 24;
#endif
	property = *((const char * *)_data);
#if defined(SPEC_ILP32)
	_data += 4;
#else
	_data += 8;
#endif
	search_data = ((struct PointerRNA *)_data);
#if defined(SPEC_ILP32)
	_data += 12;
#else
	_data += 24;
#endif
	search_property = *((const char * *)_data);
#if defined(SPEC_ILP32)
	_data += 4;
#else
	_data += 8;
#endif
	text = *((const char * *)_data);
#if defined(SPEC_ILP32)
	_data += 4;
#else
	_data += 8;
#endif
	text_ctxt = *((const char * *)_data);
#if defined(SPEC_ILP32)
	_data += 4;
#else
	_data += 8;
#endif
	translate = *((int *)_data);
	_data += 4;
	icon = *((int *)_data);
	
	rna_uiItemPointerR(_self, data, property, search_data, search_property, text, text_ctxt, translate, icon);
}

struct PointerRNA UILayout_operator(struct uiLayout *_self, const char * operator_value, const char * text, const char * text_ctxt, int translate, int icon, int emboss)
{
	return rna_uiItemO(_self, operator_value, text, text_ctxt, translate, icon, emboss);
}

void UILayout_operator_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	struct uiLayout *_self;
	const char * operator;
	const char * text;
	const char * text_ctxt;
	int translate;
	int icon;
	int emboss;
	struct PointerRNA properties;
	char *_data, *_retdata;
	
	_self = (struct uiLayout *)_ptr->data;
	_data = (char *)_parms->data;
	operator = *((const char * *)_data);
#if defined(SPEC_ILP32)
	_data += 4;
#else
	_data += 8;
#endif
	text = *((const char * *)_data);
#if defined(SPEC_ILP32)
	_data += 4;
#else
	_data += 8;
#endif
	text_ctxt = *((const char * *)_data);
#if defined(SPEC_ILP32)
	_data += 4;
#else
	_data += 8;
#endif
	translate = *((int *)_data);
	_data += 4;
	icon = *((int *)_data);
	_data += 4;
	emboss = *((int *)_data);
	_data += 4;
	_retdata = _data;
	
	properties = rna_uiItemO(_self, operator, text, text_ctxt, translate, icon, emboss);
	*((struct PointerRNA *)_retdata) = properties;
}

void UILayout_operator_enum(struct uiLayout *_self, const char * operator_value, const char * property)
{
	uiItemsEnumO(_self, operator_value, property);
}

void UILayout_operator_enum_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	struct uiLayout *_self;
	const char * operator;
	const char * property;
	char *_data;
	
	_self = (struct uiLayout *)_ptr->data;
	_data = (char *)_parms->data;
	operator = *((const char * *)_data);
#if defined(SPEC_ILP32)
	_data += 4;
#else
	_data += 8;
#endif
	property = *((const char * *)_data);
	
	uiItemsEnumO(_self, operator, property);
}

void UILayout_operator_menu_enum(struct uiLayout *_self, bContext *C, const char * operator_value, const char * property, const char * text, const char * text_ctxt, int translate, int icon)
{
	rna_uiItemMenuEnumO(_self, C, operator_value, property, text, text_ctxt, translate, icon);
}

void UILayout_operator_menu_enum_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	struct uiLayout *_self;
	const char * operator;
	const char * property;
	const char * text;
	const char * text_ctxt;
	int translate;
	int icon;
	char *_data;
	
	_self = (struct uiLayout *)_ptr->data;
	_data = (char *)_parms->data;
	operator = *((const char * *)_data);
#if defined(SPEC_ILP32)
	_data += 4;
#else
	_data += 8;
#endif
	property = *((const char * *)_data);
#if defined(SPEC_ILP32)
	_data += 4;
#else
	_data += 8;
#endif
	text = *((const char * *)_data);
#if defined(SPEC_ILP32)
	_data += 4;
#else
	_data += 8;
#endif
	text_ctxt = *((const char * *)_data);
#if defined(SPEC_ILP32)
	_data += 4;
#else
	_data += 8;
#endif
	translate = *((int *)_data);
	_data += 4;
	icon = *((int *)_data);
	
	rna_uiItemMenuEnumO(_self, C, operator, property, text, text_ctxt, translate, icon);
}

void UILayout_label(struct uiLayout *_self, const char * text, const char * text_ctxt, int translate, int icon, int icon_value)
{
	rna_uiItemL(_self, text, text_ctxt, translate, icon, icon_value);
}

void UILayout_label_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	struct uiLayout *_self;
	const char * text;
	const char * text_ctxt;
	int translate;
	int icon;
	int icon_value;
	char *_data;
	
	_self = (struct uiLayout *)_ptr->data;
	_data = (char *)_parms->data;
	text = *((const char * *)_data);
#if defined(SPEC_ILP32)
	_data += 4;
#else
	_data += 8;
#endif
	text_ctxt = *((const char * *)_data);
#if defined(SPEC_ILP32)
	_data += 4;
#else
	_data += 8;
#endif
	translate = *((int *)_data);
	_data += 4;
	icon = *((int *)_data);
	_data += 4;
	icon_value = *((int *)_data);
	
	rna_uiItemL(_self, text, text_ctxt, translate, icon, icon_value);
}

void UILayout_menu(struct uiLayout *_self, bContext *C, const char * menu, const char * text, const char * text_ctxt, int translate, int icon)
{
	rna_uiItemM(_self, C, menu, text, text_ctxt, translate, icon);
}

void UILayout_menu_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	struct uiLayout *_self;
	const char * menu;
	const char * text;
	const char * text_ctxt;
	int translate;
	int icon;
	char *_data;
	
	_self = (struct uiLayout *)_ptr->data;
	_data = (char *)_parms->data;
	menu = *((const char * *)_data);
#if defined(SPEC_ILP32)
	_data += 4;
#else
	_data += 8;
#endif
	text = *((const char * *)_data);
#if defined(SPEC_ILP32)
	_data += 4;
#else
	_data += 8;
#endif
	text_ctxt = *((const char * *)_data);
#if defined(SPEC_ILP32)
	_data += 4;
#else
	_data += 8;
#endif
	translate = *((int *)_data);
	_data += 4;
	icon = *((int *)_data);
	
	rna_uiItemM(_self, C, menu, text, text_ctxt, translate, icon);
}

void UILayout_separator(struct uiLayout *_self)
{
	uiItemS(_self);
}

void UILayout_separator_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	struct uiLayout *_self;
	_self = (struct uiLayout *)_ptr->data;
	
	uiItemS(_self);
}

void UILayout_context_pointer_set(struct uiLayout *_self, const char * name, struct PointerRNA *data)
{
	uiLayoutSetContextPointer(_self, name, data);
}

void UILayout_context_pointer_set_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	struct uiLayout *_self;
	const char * name;
	struct PointerRNA *data;
	char *_data;
	
	_self = (struct uiLayout *)_ptr->data;
	_data = (char *)_parms->data;
	name = *((const char * *)_data);
#if defined(SPEC_ILP32)
	_data += 4;
#else
	_data += 8;
#endif
	data = ((struct PointerRNA *)_data);
	
	uiLayoutSetContextPointer(_self, name, data);
}

void UILayout_template_header(struct uiLayout *_self, bContext *C)
{
	uiTemplateHeader(_self, C);
}

void UILayout_template_header_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	struct uiLayout *_self;
	_self = (struct uiLayout *)_ptr->data;
	
	uiTemplateHeader(_self, C);
}

void UILayout_template_ID(struct uiLayout *_self, bContext *C, struct PointerRNA *data, const char * property, const char * create, const char * open, const char * unlink)
{
	uiTemplateID(_self, C, data, property, create, open, unlink);
}

void UILayout_template_ID_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	struct uiLayout *_self;
	struct PointerRNA *data;
	const char * property;
	const char * new;
	const char * open;
	const char * unlink;
	char *_data;
	
	_self = (struct uiLayout *)_ptr->data;
	_data = (char *)_parms->data;
	data = ((struct PointerRNA *)_data);
#if defined(SPEC_ILP32)
	_data += 12;
#else
	_data += 24;
#endif
	property = *((const char * *)_data);
#if defined(SPEC_ILP32)
	_data += 4;
#else
	_data += 8;
#endif
	new = *((const char * *)_data);
#if defined(SPEC_ILP32)
	_data += 4;
#else
	_data += 8;
#endif
	open = *((const char * *)_data);
#if defined(SPEC_ILP32)
	_data += 4;
#else
	_data += 8;
#endif
	unlink = *((const char * *)_data);
	
	uiTemplateID(_self, C, data, property, new, open, unlink);
}

void UILayout_template_ID_preview(struct uiLayout *_self, bContext *C, struct PointerRNA *data, const char * property, const char * create, const char * open, const char * unlink, int rows, int cols)
{
	uiTemplateIDPreview(_self, C, data, property, create, open, unlink, rows, cols);
}

void UILayout_template_ID_preview_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	struct uiLayout *_self;
	struct PointerRNA *data;
	const char * property;
	const char * new;
	const char * open;
	const char * unlink;
	int rows;
	int cols;
	char *_data;
	
	_self = (struct uiLayout *)_ptr->data;
	_data = (char *)_parms->data;
	data = ((struct PointerRNA *)_data);
#if defined(SPEC_ILP32)
	_data += 12;
#else
	_data += 24;
#endif
	property = *((const char * *)_data);
#if defined(SPEC_ILP32)
	_data += 4;
#else
	_data += 8;
#endif
	new = *((const char * *)_data);
#if defined(SPEC_ILP32)
	_data += 4;
#else
	_data += 8;
#endif
	open = *((const char * *)_data);
#if defined(SPEC_ILP32)
	_data += 4;
#else
	_data += 8;
#endif
	unlink = *((const char * *)_data);
#if defined(SPEC_ILP32)
	_data += 4;
#else
	_data += 8;
#endif
	rows = *((int *)_data);
	_data += 4;
	cols = *((int *)_data);
	
	uiTemplateIDPreview(_self, C, data, property, new, open, unlink, rows, cols);
}

void UILayout_template_any_ID(struct uiLayout *_self, struct PointerRNA *data, const char * property, const char * type_property, const char * text, const char * text_ctxt, int translate)
{
	rna_uiTemplateAnyID(_self, data, property, type_property, text, text_ctxt, translate);
}

void UILayout_template_any_ID_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	struct uiLayout *_self;
	struct PointerRNA *data;
	const char * property;
	const char * type_property;
	const char * text;
	const char * text_ctxt;
	int translate;
	char *_data;
	
	_self = (struct uiLayout *)_ptr->data;
	_data = (char *)_parms->data;
	data = ((struct PointerRNA *)_data);
#if defined(SPEC_ILP32)
	_data += 12;
#else
	_data += 24;
#endif
	property = *((const char * *)_data);
#if defined(SPEC_ILP32)
	_data += 4;
#else
	_data += 8;
#endif
	type_property = *((const char * *)_data);
#if defined(SPEC_ILP32)
	_data += 4;
#else
	_data += 8;
#endif
	text = *((const char * *)_data);
#if defined(SPEC_ILP32)
	_data += 4;
#else
	_data += 8;
#endif
	text_ctxt = *((const char * *)_data);
#if defined(SPEC_ILP32)
	_data += 4;
#else
	_data += 8;
#endif
	translate = *((int *)_data);
	
	rna_uiTemplateAnyID(_self, data, property, type_property, text, text_ctxt, translate);
}

void UILayout_template_path_builder(struct uiLayout *_self, struct PointerRNA *data, const char * property, struct PointerRNA *root, const char * text, const char * text_ctxt, int translate)
{
	rna_uiTemplatePathBuilder(_self, data, property, root, text, text_ctxt, translate);
}

void UILayout_template_path_builder_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	struct uiLayout *_self;
	struct PointerRNA *data;
	const char * property;
	struct PointerRNA *root;
	const char * text;
	const char * text_ctxt;
	int translate;
	char *_data;
	
	_self = (struct uiLayout *)_ptr->data;
	_data = (char *)_parms->data;
	data = ((struct PointerRNA *)_data);
#if defined(SPEC_ILP32)
	_data += 12;
#else
	_data += 24;
#endif
	property = *((const char * *)_data);
#if defined(SPEC_ILP32)
	_data += 4;
#else
	_data += 8;
#endif
	root = ((struct PointerRNA *)_data);
#if defined(SPEC_ILP32)
	_data += 12;
#else
	_data += 24;
#endif
	text = *((const char * *)_data);
#if defined(SPEC_ILP32)
	_data += 4;
#else
	_data += 8;
#endif
	text_ctxt = *((const char * *)_data);
#if defined(SPEC_ILP32)
	_data += 4;
#else
	_data += 8;
#endif
	translate = *((int *)_data);
	
	rna_uiTemplatePathBuilder(_self, data, property, root, text, text_ctxt, translate);
}

struct uiLayout *UILayout_template_modifier(struct uiLayout *_self, bContext *C, struct PointerRNA *data)
{
	return uiTemplateModifier(_self, C, data);
}

void UILayout_template_modifier_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	struct uiLayout *_self;
	struct PointerRNA *data;
	struct uiLayout *layout;
	char *_data, *_retdata;
	
	_self = (struct uiLayout *)_ptr->data;
	_data = (char *)_parms->data;
	data = ((struct PointerRNA *)_data);
#if defined(SPEC_ILP32)
	_data += 12;
#else
	_data += 24;
#endif
	_retdata = _data;
	
	layout = uiTemplateModifier(_self, C, data);
	*((struct uiLayout **)_retdata) = layout;
}

struct uiLayout *UILayout_template_constraint(struct uiLayout *_self, struct PointerRNA *data)
{
	return uiTemplateConstraint(_self, data);
}

void UILayout_template_constraint_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	struct uiLayout *_self;
	struct PointerRNA *data;
	struct uiLayout *layout;
	char *_data, *_retdata;
	
	_self = (struct uiLayout *)_ptr->data;
	_data = (char *)_parms->data;
	data = ((struct PointerRNA *)_data);
#if defined(SPEC_ILP32)
	_data += 12;
#else
	_data += 24;
#endif
	_retdata = _data;
	
	layout = uiTemplateConstraint(_self, data);
	*((struct uiLayout **)_retdata) = layout;
}

void UILayout_template_preview(struct uiLayout *_self, bContext *C, struct ID *id, int show_buttons, struct ID *parent, struct MTex *slot, const char * preview_id)
{
	uiTemplatePreview(_self, C, id, show_buttons, parent, slot, preview_id);
}

void UILayout_template_preview_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	struct uiLayout *_self;
	struct ID *id;
	int show_buttons;
	struct ID *parent;
	struct MTex *slot;
	const char * preview_id;
	char *_data;
	
	_self = (struct uiLayout *)_ptr->data;
	_data = (char *)_parms->data;
	id = *((struct ID **)_data);
#if defined(SPEC_ILP32)
	_data += 4;
#else
	_data += 8;
#endif
	show_buttons = *((int *)_data);
	_data += 4;
	parent = *((struct ID **)_data);
#if defined(SPEC_ILP32)
	_data += 4;
#else
	_data += 8;
#endif
	slot = *((struct MTex **)_data);
#if defined(SPEC_ILP32)
	_data += 4;
#else
	_data += 8;
#endif
	preview_id = *((const char * *)_data);
	
	uiTemplatePreview(_self, C, id, show_buttons, parent, slot, preview_id);
}

void UILayout_template_curve_mapping(struct uiLayout *_self, struct PointerRNA *data, const char * property, int type, int levels, int brush, int use_negative_slope)
{
	uiTemplateCurveMapping(_self, data, property, type, levels, brush, use_negative_slope);
}

void UILayout_template_curve_mapping_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	struct uiLayout *_self;
	struct PointerRNA *data;
	const char * property;
	int type;
	int levels;
	int brush;
	int use_negative_slope;
	char *_data;
	
	_self = (struct uiLayout *)_ptr->data;
	_data = (char *)_parms->data;
	data = ((struct PointerRNA *)_data);
#if defined(SPEC_ILP32)
	_data += 12;
#else
	_data += 24;
#endif
	property = *((const char * *)_data);
#if defined(SPEC_ILP32)
	_data += 4;
#else
	_data += 8;
#endif
	type = *((int *)_data);
	_data += 4;
	levels = *((int *)_data);
	_data += 4;
	brush = *((int *)_data);
	_data += 4;
	use_negative_slope = *((int *)_data);
	
	uiTemplateCurveMapping(_self, data, property, type, levels, brush, use_negative_slope);
}

void UILayout_template_color_ramp(struct uiLayout *_self, struct PointerRNA *data, const char * property, int expand)
{
	uiTemplateColorRamp(_self, data, property, expand);
}

void UILayout_template_color_ramp_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	struct uiLayout *_self;
	struct PointerRNA *data;
	const char * property;
	int expand;
	char *_data;
	
	_self = (struct uiLayout *)_ptr->data;
	_data = (char *)_parms->data;
	data = ((struct PointerRNA *)_data);
#if defined(SPEC_ILP32)
	_data += 12;
#else
	_data += 24;
#endif
	property = *((const char * *)_data);
#if defined(SPEC_ILP32)
	_data += 4;
#else
	_data += 8;
#endif
	expand = *((int *)_data);
	
	uiTemplateColorRamp(_self, data, property, expand);
}

void UILayout_template_icon_view(struct uiLayout *_self, struct PointerRNA *data, const char * property)
{
	uiTemplateIconView(_self, data, property);
}

void UILayout_template_icon_view_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	struct uiLayout *_self;
	struct PointerRNA *data;
	const char * property;
	char *_data;
	
	_self = (struct uiLayout *)_ptr->data;
	_data = (char *)_parms->data;
	data = ((struct PointerRNA *)_data);
#if defined(SPEC_ILP32)
	_data += 12;
#else
	_data += 24;
#endif
	property = *((const char * *)_data);
	
	uiTemplateIconView(_self, data, property);
}

void UILayout_template_histogram(struct uiLayout *_self, struct PointerRNA *data, const char * property)
{
	uiTemplateHistogram(_self, data, property);
}

void UILayout_template_histogram_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	struct uiLayout *_self;
	struct PointerRNA *data;
	const char * property;
	char *_data;
	
	_self = (struct uiLayout *)_ptr->data;
	_data = (char *)_parms->data;
	data = ((struct PointerRNA *)_data);
#if defined(SPEC_ILP32)
	_data += 12;
#else
	_data += 24;
#endif
	property = *((const char * *)_data);
	
	uiTemplateHistogram(_self, data, property);
}

void UILayout_template_waveform(struct uiLayout *_self, struct PointerRNA *data, const char * property)
{
	uiTemplateWaveform(_self, data, property);
}

void UILayout_template_waveform_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	struct uiLayout *_self;
	struct PointerRNA *data;
	const char * property;
	char *_data;
	
	_self = (struct uiLayout *)_ptr->data;
	_data = (char *)_parms->data;
	data = ((struct PointerRNA *)_data);
#if defined(SPEC_ILP32)
	_data += 12;
#else
	_data += 24;
#endif
	property = *((const char * *)_data);
	
	uiTemplateWaveform(_self, data, property);
}

void UILayout_template_vectorscope(struct uiLayout *_self, struct PointerRNA *data, const char * property)
{
	uiTemplateVectorscope(_self, data, property);
}

void UILayout_template_vectorscope_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	struct uiLayout *_self;
	struct PointerRNA *data;
	const char * property;
	char *_data;
	
	_self = (struct uiLayout *)_ptr->data;
	_data = (char *)_parms->data;
	data = ((struct PointerRNA *)_data);
#if defined(SPEC_ILP32)
	_data += 12;
#else
	_data += 24;
#endif
	property = *((const char * *)_data);
	
	uiTemplateVectorscope(_self, data, property);
}

void UILayout_template_layers(struct uiLayout *_self, struct PointerRNA *data, const char * property, struct PointerRNA *used_layers_data, const char * used_layers_property, int active_layer)
{
	uiTemplateLayers(_self, data, property, used_layers_data, used_layers_property, active_layer);
}

void UILayout_template_layers_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	struct uiLayout *_self;
	struct PointerRNA *data;
	const char * property;
	struct PointerRNA *used_layers_data;
	const char * used_layers_property;
	int active_layer;
	char *_data;
	
	_self = (struct uiLayout *)_ptr->data;
	_data = (char *)_parms->data;
	data = ((struct PointerRNA *)_data);
#if defined(SPEC_ILP32)
	_data += 12;
#else
	_data += 24;
#endif
	property = *((const char * *)_data);
#if defined(SPEC_ILP32)
	_data += 4;
#else
	_data += 8;
#endif
	used_layers_data = ((struct PointerRNA *)_data);
#if defined(SPEC_ILP32)
	_data += 12;
#else
	_data += 24;
#endif
	used_layers_property = *((const char * *)_data);
#if defined(SPEC_ILP32)
	_data += 4;
#else
	_data += 8;
#endif
	active_layer = *((int *)_data);
	
	uiTemplateLayers(_self, data, property, used_layers_data, used_layers_property, active_layer);
}

void UILayout_template_color_picker(struct uiLayout *_self, struct PointerRNA *data, const char * property, int value_slider, int lock, int lock_luminosity, int cubic)
{
	uiTemplateColorPicker(_self, data, property, value_slider, lock, lock_luminosity, cubic);
}

void UILayout_template_color_picker_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	struct uiLayout *_self;
	struct PointerRNA *data;
	const char * property;
	int value_slider;
	int lock;
	int lock_luminosity;
	int cubic;
	char *_data;
	
	_self = (struct uiLayout *)_ptr->data;
	_data = (char *)_parms->data;
	data = ((struct PointerRNA *)_data);
#if defined(SPEC_ILP32)
	_data += 12;
#else
	_data += 24;
#endif
	property = *((const char * *)_data);
#if defined(SPEC_ILP32)
	_data += 4;
#else
	_data += 8;
#endif
	value_slider = *((int *)_data);
	_data += 4;
	lock = *((int *)_data);
	_data += 4;
	lock_luminosity = *((int *)_data);
	_data += 4;
	cubic = *((int *)_data);
	
	uiTemplateColorPicker(_self, data, property, value_slider, lock, lock_luminosity, cubic);
}

void UILayout_template_palette(struct uiLayout *_self, struct PointerRNA *data, const char * property, int color)
{
	uiTemplatePalette(_self, data, property, color);
}

void UILayout_template_palette_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	struct uiLayout *_self;
	struct PointerRNA *data;
	const char * property;
	int color;
	char *_data;
	
	_self = (struct uiLayout *)_ptr->data;
	_data = (char *)_parms->data;
	data = ((struct PointerRNA *)_data);
#if defined(SPEC_ILP32)
	_data += 12;
#else
	_data += 24;
#endif
	property = *((const char * *)_data);
#if defined(SPEC_ILP32)
	_data += 4;
#else
	_data += 8;
#endif
	color = *((int *)_data);
	
	uiTemplatePalette(_self, data, property, color);
}

void UILayout_template_image_layers(struct uiLayout *_self, bContext *C, struct Image *image, struct ImageUser *image_user)
{
	uiTemplateImageLayers(_self, C, image, image_user);
}

void UILayout_template_image_layers_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	struct uiLayout *_self;
	struct Image *image;
	struct ImageUser *image_user;
	char *_data;
	
	_self = (struct uiLayout *)_ptr->data;
	_data = (char *)_parms->data;
	image = *((struct Image **)_data);
#if defined(SPEC_ILP32)
	_data += 4;
#else
	_data += 8;
#endif
	image_user = *((struct ImageUser **)_data);
	
	uiTemplateImageLayers(_self, C, image, image_user);
}

void UILayout_template_image(struct uiLayout *_self, bContext *C, struct PointerRNA *data, const char * property, struct PointerRNA *image_user, int compact)
{
	uiTemplateImage(_self, C, data, property, image_user, compact);
}

void UILayout_template_image_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	struct uiLayout *_self;
	struct PointerRNA *data;
	const char * property;
	struct PointerRNA *image_user;
	int compact;
	char *_data;
	
	_self = (struct uiLayout *)_ptr->data;
	_data = (char *)_parms->data;
	data = ((struct PointerRNA *)_data);
#if defined(SPEC_ILP32)
	_data += 12;
#else
	_data += 24;
#endif
	property = *((const char * *)_data);
#if defined(SPEC_ILP32)
	_data += 4;
#else
	_data += 8;
#endif
	image_user = ((struct PointerRNA *)_data);
#if defined(SPEC_ILP32)
	_data += 12;
#else
	_data += 24;
#endif
	compact = *((int *)_data);
	
	uiTemplateImage(_self, C, data, property, image_user, compact);
}

void UILayout_template_image_settings(struct uiLayout *_self, struct PointerRNA *image_settings, int color_management)
{
	uiTemplateImageSettings(_self, image_settings, color_management);
}

void UILayout_template_image_settings_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	struct uiLayout *_self;
	struct PointerRNA *image_settings;
	int color_management;
	char *_data;
	
	_self = (struct uiLayout *)_ptr->data;
	_data = (char *)_parms->data;
	image_settings = ((struct PointerRNA *)_data);
#if defined(SPEC_ILP32)
	_data += 12;
#else
	_data += 24;
#endif
	color_management = *((int *)_data);
	
	uiTemplateImageSettings(_self, image_settings, color_management);
}

void UILayout_template_movieclip(struct uiLayout *_self, bContext *C, struct PointerRNA *data, const char * property, int compact)
{
	uiTemplateMovieClip(_self, C, data, property, compact);
}

void UILayout_template_movieclip_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	struct uiLayout *_self;
	struct PointerRNA *data;
	const char * property;
	int compact;
	char *_data;
	
	_self = (struct uiLayout *)_ptr->data;
	_data = (char *)_parms->data;
	data = ((struct PointerRNA *)_data);
#if defined(SPEC_ILP32)
	_data += 12;
#else
	_data += 24;
#endif
	property = *((const char * *)_data);
#if defined(SPEC_ILP32)
	_data += 4;
#else
	_data += 8;
#endif
	compact = *((int *)_data);
	
	uiTemplateMovieClip(_self, C, data, property, compact);
}

void UILayout_template_track(struct uiLayout *_self, struct PointerRNA *data, const char * property)
{
	uiTemplateTrack(_self, data, property);
}

void UILayout_template_track_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	struct uiLayout *_self;
	struct PointerRNA *data;
	const char * property;
	char *_data;
	
	_self = (struct uiLayout *)_ptr->data;
	_data = (char *)_parms->data;
	data = ((struct PointerRNA *)_data);
#if defined(SPEC_ILP32)
	_data += 12;
#else
	_data += 24;
#endif
	property = *((const char * *)_data);
	
	uiTemplateTrack(_self, data, property);
}

void UILayout_template_marker(struct uiLayout *_self, struct PointerRNA *data, const char * property, struct PointerRNA *clip_user, struct PointerRNA *track, int compact)
{
	uiTemplateMarker(_self, data, property, clip_user, track, compact);
}

void UILayout_template_marker_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	struct uiLayout *_self;
	struct PointerRNA *data;
	const char * property;
	struct PointerRNA *clip_user;
	struct PointerRNA *track;
	int compact;
	char *_data;
	
	_self = (struct uiLayout *)_ptr->data;
	_data = (char *)_parms->data;
	data = ((struct PointerRNA *)_data);
#if defined(SPEC_ILP32)
	_data += 12;
#else
	_data += 24;
#endif
	property = *((const char * *)_data);
#if defined(SPEC_ILP32)
	_data += 4;
#else
	_data += 8;
#endif
	clip_user = ((struct PointerRNA *)_data);
#if defined(SPEC_ILP32)
	_data += 12;
#else
	_data += 24;
#endif
	track = ((struct PointerRNA *)_data);
#if defined(SPEC_ILP32)
	_data += 12;
#else
	_data += 24;
#endif
	compact = *((int *)_data);
	
	uiTemplateMarker(_self, data, property, clip_user, track, compact);
}

void UILayout_template_movieclip_information(struct uiLayout *_self, struct PointerRNA *data, const char * property, struct PointerRNA *clip_user)
{
	uiTemplateMovieclipInformation(_self, data, property, clip_user);
}

void UILayout_template_movieclip_information_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	struct uiLayout *_self;
	struct PointerRNA *data;
	const char * property;
	struct PointerRNA *clip_user;
	char *_data;
	
	_self = (struct uiLayout *)_ptr->data;
	_data = (char *)_parms->data;
	data = ((struct PointerRNA *)_data);
#if defined(SPEC_ILP32)
	_data += 12;
#else
	_data += 24;
#endif
	property = *((const char * *)_data);
#if defined(SPEC_ILP32)
	_data += 4;
#else
	_data += 8;
#endif
	clip_user = ((struct PointerRNA *)_data);
	
	uiTemplateMovieclipInformation(_self, data, property, clip_user);
}

void UILayout_template_list(struct uiLayout *_self, bContext *C, const char * listtype_name, const char * list_id, struct PointerRNA *dataptr, const char * propname, struct PointerRNA *active_dataptr, const char * active_propname, int rows, int maxrows, int type, int columns)
{
	uiTemplateList(_self, C, listtype_name, list_id, dataptr, propname, active_dataptr, active_propname, rows, maxrows, type, columns);
}

void UILayout_template_list_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	struct uiLayout *_self;
	const char * listtype_name;
	const char * list_id;
	struct PointerRNA *dataptr;
	const char * propname;
	struct PointerRNA *active_dataptr;
	const char * active_propname;
	int rows;
	int maxrows;
	int type;
	int columns;
	char *_data;
	
	_self = (struct uiLayout *)_ptr->data;
	_data = (char *)_parms->data;
	listtype_name = *((const char * *)_data);
#if defined(SPEC_ILP32)
	_data += 4;
#else
	_data += 8;
#endif
	list_id = *((const char * *)_data);
#if defined(SPEC_ILP32)
	_data += 4;
#else
	_data += 8;
#endif
	dataptr = ((struct PointerRNA *)_data);
#if defined(SPEC_ILP32)
	_data += 12;
#else
	_data += 24;
#endif
	propname = *((const char * *)_data);
#if defined(SPEC_ILP32)
	_data += 4;
#else
	_data += 8;
#endif
	active_dataptr = ((struct PointerRNA *)_data);
#if defined(SPEC_ILP32)
	_data += 12;
#else
	_data += 24;
#endif
	active_propname = *((const char * *)_data);
#if defined(SPEC_ILP32)
	_data += 4;
#else
	_data += 8;
#endif
	rows = *((int *)_data);
	_data += 4;
	maxrows = *((int *)_data);
	_data += 4;
	type = *((int *)_data);
	_data += 4;
	columns = *((int *)_data);
	
	uiTemplateList(_self, C, listtype_name, list_id, dataptr, propname, active_dataptr, active_propname, rows, maxrows, type, columns);
}

void UILayout_template_running_jobs(struct uiLayout *_self, bContext *C)
{
	uiTemplateRunningJobs(_self, C);
}

void UILayout_template_running_jobs_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	struct uiLayout *_self;
	_self = (struct uiLayout *)_ptr->data;
	
	uiTemplateRunningJobs(_self, C);
}

void UILayout_template_operator_search(struct uiLayout *_self)
{
	uiTemplateOperatorSearch(_self);
}

void UILayout_template_operator_search_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	struct uiLayout *_self;
	_self = (struct uiLayout *)_ptr->data;
	
	uiTemplateOperatorSearch(_self);
}

void UILayout_template_header_3D(struct uiLayout *_self, bContext *C)
{
	uiTemplateHeader3D(_self, C);
}

void UILayout_template_header_3D_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	struct uiLayout *_self;
	_self = (struct uiLayout *)_ptr->data;
	
	uiTemplateHeader3D(_self, C);
}

void UILayout_template_edit_mode_selection(struct uiLayout *_self, bContext *C)
{
	uiTemplateEditModeSelection(_self, C);
}

void UILayout_template_edit_mode_selection_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	struct uiLayout *_self;
	_self = (struct uiLayout *)_ptr->data;
	
	uiTemplateEditModeSelection(_self, C);
}

void UILayout_template_reports_banner(struct uiLayout *_self, bContext *C)
{
	uiTemplateReportsBanner(_self, C);
}

void UILayout_template_reports_banner_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	struct uiLayout *_self;
	_self = (struct uiLayout *)_ptr->data;
	
	uiTemplateReportsBanner(_self, C);
}

void UILayout_template_node_link(struct uiLayout *_self, struct bNodeTree *ntree, struct bNode *node, struct bNodeSocket *socket)
{
	uiTemplateNodeLink(_self, ntree, node, socket);
}

void UILayout_template_node_link_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	struct uiLayout *_self;
	struct bNodeTree *ntree;
	struct bNode *node;
	struct bNodeSocket *socket;
	char *_data;
	
	_self = (struct uiLayout *)_ptr->data;
	_data = (char *)_parms->data;
	ntree = *((struct bNodeTree **)_data);
#if defined(SPEC_ILP32)
	_data += 4;
#else
	_data += 8;
#endif
	node = *((struct bNode **)_data);
#if defined(SPEC_ILP32)
	_data += 4;
#else
	_data += 8;
#endif
	socket = *((struct bNodeSocket **)_data);
	
	uiTemplateNodeLink(_self, ntree, node, socket);
}

void UILayout_template_node_view(struct uiLayout *_self, bContext *C, struct bNodeTree *ntree, struct bNode *node, struct bNodeSocket *socket)
{
	uiTemplateNodeView(_self, C, ntree, node, socket);
}

void UILayout_template_node_view_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	struct uiLayout *_self;
	struct bNodeTree *ntree;
	struct bNode *node;
	struct bNodeSocket *socket;
	char *_data;
	
	_self = (struct uiLayout *)_ptr->data;
	_data = (char *)_parms->data;
	ntree = *((struct bNodeTree **)_data);
#if defined(SPEC_ILP32)
	_data += 4;
#else
	_data += 8;
#endif
	node = *((struct bNode **)_data);
#if defined(SPEC_ILP32)
	_data += 4;
#else
	_data += 8;
#endif
	socket = *((struct bNodeSocket **)_data);
	
	uiTemplateNodeView(_self, C, ntree, node, socket);
}

void UILayout_template_texture_user(struct uiLayout *_self, bContext *C)
{
	uiTemplateTextureUser(_self, C);
}

void UILayout_template_texture_user_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	struct uiLayout *_self;
	_self = (struct uiLayout *)_ptr->data;
	
	uiTemplateTextureUser(_self, C);
}

void UILayout_template_keymap_item_properties(struct uiLayout *_self, struct PointerRNA *item)
{
	uiTemplateKeymapItemProperties(_self, item);
}

void UILayout_template_keymap_item_properties_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	struct uiLayout *_self;
	struct PointerRNA *item;
	char *_data;
	
	_self = (struct uiLayout *)_ptr->data;
	_data = (char *)_parms->data;
	item = ((struct PointerRNA *)_data);
	
	uiTemplateKeymapItemProperties(_self, item);
}

void UILayout_template_component_menu(struct uiLayout *_self, struct PointerRNA *data, const char * property, const char * name)
{
	uiTemplateComponentMenu(_self, data, property, name);
}

void UILayout_template_component_menu_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	struct uiLayout *_self;
	struct PointerRNA *data;
	const char * property;
	const char * name;
	char *_data;
	
	_self = (struct uiLayout *)_ptr->data;
	_data = (char *)_parms->data;
	data = ((struct PointerRNA *)_data);
#if defined(SPEC_ILP32)
	_data += 12;
#else
	_data += 24;
#endif
	property = *((const char * *)_data);
#if defined(SPEC_ILP32)
	_data += 4;
#else
	_data += 8;
#endif
	name = *((const char * *)_data);
	
	uiTemplateComponentMenu(_self, data, property, name);
}

const char * UILayout_introspect(struct uiLayout *_self)
{
	return uiLayoutIntrospect(_self);
}

void UILayout_introspect_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	struct uiLayout *_self;
	const char * string;
	char *_data, *_retdata;
	
	_self = (struct uiLayout *)_ptr->data;
	_data = (char *)_parms->data;
	_retdata = _data;
	
	string = uiLayoutIntrospect(_self);
	*((const char * *)_retdata) = string;
}

void UILayout_template_colorspace_settings(struct uiLayout *_self, struct PointerRNA *data, const char * property)
{
	uiTemplateColorspaceSettings(_self, data, property);
}

void UILayout_template_colorspace_settings_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	struct uiLayout *_self;
	struct PointerRNA *data;
	const char * property;
	char *_data;
	
	_self = (struct uiLayout *)_ptr->data;
	_data = (char *)_parms->data;
	data = ((struct PointerRNA *)_data);
#if defined(SPEC_ILP32)
	_data += 12;
#else
	_data += 24;
#endif
	property = *((const char * *)_data);
	
	uiTemplateColorspaceSettings(_self, data, property);
}

void UILayout_template_colormanaged_view_settings(struct uiLayout *_self, bContext *C, struct PointerRNA *data, const char * property)
{
	uiTemplateColormanagedViewSettings(_self, C, data, property);
}

void UILayout_template_colormanaged_view_settings_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	struct uiLayout *_self;
	struct PointerRNA *data;
	const char * property;
	char *_data;
	
	_self = (struct uiLayout *)_ptr->data;
	_data = (char *)_parms->data;
	data = ((struct PointerRNA *)_data);
#if defined(SPEC_ILP32)
	_data += 12;
#else
	_data += 24;
#endif
	property = *((const char * *)_data);
	
	uiTemplateColormanagedViewSettings(_self, C, data, property);
}

void UILayout_template_node_socket(struct uiLayout *_self, bContext *C, float color[4])
{
	uiTemplateNodeSocket(_self, C, color);
}

void UILayout_template_node_socket_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	struct uiLayout *_self;
	float *color;
	char *_data;
	
	_self = (struct uiLayout *)_ptr->data;
	_data = (char *)_parms->data;
	color = ((float *)_data);
	
	uiTemplateNodeSocket(_self, C, color);
}

/* Repeated prototypes to detect errors */

struct uiLayout *uiLayoutRow(struct uiLayout *_self, int align);
struct uiLayout *uiLayoutColumn(struct uiLayout *_self, int align);
struct uiLayout *uiLayoutColumnFlow(struct uiLayout *_self, int columns, int align);
struct uiLayout *uiLayoutBox(struct uiLayout *_self);
struct uiLayout *uiLayoutSplit(struct uiLayout *_self, float percentage, int align);
struct uiLayout *uiLayoutRadial(struct uiLayout *_self);
int rna_ui_get_rnaptr_icon(bContext *C, struct PointerRNA *data);
const char * rna_ui_get_enum_name(bContext *C, struct PointerRNA *data, const char * property, const char * identifier);
const char * rna_ui_get_enum_description(bContext *C, struct PointerRNA *data, const char * property, const char * identifier);
int rna_ui_get_enum_icon(bContext *C, struct PointerRNA *data, const char * property, const char * identifier);
void rna_uiItemR(struct uiLayout *_self, struct PointerRNA *data, const char * property, const char * text, const char * text_ctxt, int translate, int icon, int expand, int slider, int toggle, int icon_only, int event, int full_event, int emboss, int index, int icon_value);
void uiItemsEnumR(struct uiLayout *_self, struct PointerRNA *data, const char * property);
void rna_uiItemMenuEnumR(struct uiLayout *_self, struct PointerRNA *data, const char * property, const char * text, const char * text_ctxt, int translate, int icon);
void rna_uiItemEnumR_string(struct uiLayout *_self, struct PointerRNA *data, const char * property, const char * value, const char * text, const char * text_ctxt, int translate, int icon);
void rna_uiItemPointerR(struct uiLayout *_self, struct PointerRNA *data, const char * property, struct PointerRNA *search_data, const char * search_property, const char * text, const char * text_ctxt, int translate, int icon);
struct PointerRNA rna_uiItemO(struct uiLayout *_self, const char * operator_value, const char * text, const char * text_ctxt, int translate, int icon, int emboss);
void uiItemsEnumO(struct uiLayout *_self, const char * operator_value, const char * property);
void rna_uiItemMenuEnumO(struct uiLayout *_self, bContext *C, const char * operator_value, const char * property, const char * text, const char * text_ctxt, int translate, int icon);
void rna_uiItemL(struct uiLayout *_self, const char * text, const char * text_ctxt, int translate, int icon, int icon_value);
void rna_uiItemM(struct uiLayout *_self, bContext *C, const char * menu, const char * text, const char * text_ctxt, int translate, int icon);
void uiItemS(struct uiLayout *_self);
void uiLayoutSetContextPointer(struct uiLayout *_self, const char * name, struct PointerRNA *data);
void uiTemplateHeader(struct uiLayout *_self, bContext *C);
void uiTemplateID(struct uiLayout *_self, bContext *C, struct PointerRNA *data, const char * property, const char * create, const char * open, const char * unlink);
void uiTemplateIDPreview(struct uiLayout *_self, bContext *C, struct PointerRNA *data, const char * property, const char * create, const char * open, const char * unlink, int rows, int cols);
void rna_uiTemplateAnyID(struct uiLayout *_self, struct PointerRNA *data, const char * property, const char * type_property, const char * text, const char * text_ctxt, int translate);
void rna_uiTemplatePathBuilder(struct uiLayout *_self, struct PointerRNA *data, const char * property, struct PointerRNA *root, const char * text, const char * text_ctxt, int translate);
struct uiLayout *uiTemplateModifier(struct uiLayout *_self, bContext *C, struct PointerRNA *data);
struct uiLayout *uiTemplateConstraint(struct uiLayout *_self, struct PointerRNA *data);
void uiTemplatePreview(struct uiLayout *_self, bContext *C, struct ID *id, int show_buttons, struct ID *parent, struct MTex *slot, const char * preview_id);
void uiTemplateCurveMapping(struct uiLayout *_self, struct PointerRNA *data, const char * property, int type, int levels, int brush, int use_negative_slope);
void uiTemplateColorRamp(struct uiLayout *_self, struct PointerRNA *data, const char * property, int expand);
void uiTemplateIconView(struct uiLayout *_self, struct PointerRNA *data, const char * property);
void uiTemplateHistogram(struct uiLayout *_self, struct PointerRNA *data, const char * property);
void uiTemplateWaveform(struct uiLayout *_self, struct PointerRNA *data, const char * property);
void uiTemplateVectorscope(struct uiLayout *_self, struct PointerRNA *data, const char * property);
void uiTemplateLayers(struct uiLayout *_self, struct PointerRNA *data, const char * property, struct PointerRNA *used_layers_data, const char * used_layers_property, int active_layer);
void uiTemplateColorPicker(struct uiLayout *_self, struct PointerRNA *data, const char * property, int value_slider, int lock, int lock_luminosity, int cubic);
void uiTemplatePalette(struct uiLayout *_self, struct PointerRNA *data, const char * property, int color);
void uiTemplateImageLayers(struct uiLayout *_self, bContext *C, struct Image *image, struct ImageUser *image_user);
void uiTemplateImage(struct uiLayout *_self, bContext *C, struct PointerRNA *data, const char * property, struct PointerRNA *image_user, int compact);
void uiTemplateImageSettings(struct uiLayout *_self, struct PointerRNA *image_settings, int color_management);
void uiTemplateMovieClip(struct uiLayout *_self, bContext *C, struct PointerRNA *data, const char * property, int compact);
void uiTemplateTrack(struct uiLayout *_self, struct PointerRNA *data, const char * property);
void uiTemplateMarker(struct uiLayout *_self, struct PointerRNA *data, const char * property, struct PointerRNA *clip_user, struct PointerRNA *track, int compact);
void uiTemplateMovieclipInformation(struct uiLayout *_self, struct PointerRNA *data, const char * property, struct PointerRNA *clip_user);
void uiTemplateList(struct uiLayout *_self, bContext *C, const char * listtype_name, const char * list_id, struct PointerRNA *dataptr, const char * propname, struct PointerRNA *active_dataptr, const char * active_propname, int rows, int maxrows, int type, int columns);
void uiTemplateRunningJobs(struct uiLayout *_self, bContext *C);
void uiTemplateOperatorSearch(struct uiLayout *_self);
void uiTemplateHeader3D(struct uiLayout *_self, bContext *C);
void uiTemplateEditModeSelection(struct uiLayout *_self, bContext *C);
void uiTemplateReportsBanner(struct uiLayout *_self, bContext *C);
void uiTemplateNodeLink(struct uiLayout *_self, struct bNodeTree *ntree, struct bNode *node, struct bNodeSocket *socket);
void uiTemplateNodeView(struct uiLayout *_self, bContext *C, struct bNodeTree *ntree, struct bNode *node, struct bNodeSocket *socket);
void uiTemplateTextureUser(struct uiLayout *_self, bContext *C);
void uiTemplateKeymapItemProperties(struct uiLayout *_self, struct PointerRNA *item);
void uiTemplateComponentMenu(struct uiLayout *_self, struct PointerRNA *data, const char * property, const char * name);
const char * uiLayoutIntrospect(struct uiLayout *_self);
void uiTemplateColorspaceSettings(struct uiLayout *_self, struct PointerRNA *data, const char * property);
void uiTemplateColormanagedViewSettings(struct uiLayout *_self, bContext *C, struct PointerRNA *data, const char * property);
void uiTemplateNodeSocket(struct uiLayout *_self, bContext *C, float color[4]);





/* UI Layout */
CollectionPropertyRNA rna_UILayout_rna_properties = {
	{(PropertyRNA *)&rna_UILayout_rna_type, NULL,
	-1, "rna_properties", 128, "Properties",
	"RNA property collection",
	0, "*",
	PROP_COLLECTION, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	UILayout_rna_properties_begin, UILayout_rna_properties_next, UILayout_rna_properties_end, UILayout_rna_properties_get, NULL, NULL, UILayout_rna_properties_lookup_string, NULL, &RNA_Property
};

PointerPropertyRNA rna_UILayout_rna_type = {
	{(PropertyRNA *)&rna_UILayout_active, (PropertyRNA *)&rna_UILayout_rna_properties,
	-1, "rna_type", 8912896, "RNA",
	"RNA type definition",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	UILayout_rna_type_get, NULL, NULL, NULL,&RNA_Struct
};

BoolPropertyRNA rna_UILayout_active = {
	{(PropertyRNA *)&rna_UILayout_operator_context, (PropertyRNA *)&rna_UILayout_rna_type,
	-1, "active", 3, "active",
	"",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	UILayout_active_get, UILayout_active_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

static EnumPropertyItem rna_UILayout_operator_context_items[13] = {
	{0, "INVOKE_DEFAULT", 0, "Invoke Default", ""},
	{1, "INVOKE_REGION_WIN", 0, "Invoke Region Window", ""},
	{2, "INVOKE_REGION_CHANNELS", 0, "Invoke Region Channels", ""},
	{3, "INVOKE_REGION_PREVIEW", 0, "Invoke Region Preview", ""},
	{4, "INVOKE_AREA", 0, "Invoke Area", ""},
	{5, "INVOKE_SCREEN", 0, "Invoke Screen", ""},
	{6, "EXEC_DEFAULT", 0, "Exec Default", ""},
	{7, "EXEC_REGION_WIN", 0, "Exec Region Window", ""},
	{8, "EXEC_REGION_CHANNELS", 0, "Exec Region Channels", ""},
	{9, "EXEC_REGION_PREVIEW", 0, "Exec Region Preview", ""},
	{10, "EXEC_AREA", 0, "Exec Area", ""},
	{11, "EXEC_SCREEN", 0, "Exec Screen", ""},
	{0, NULL, 0, NULL, NULL}
};

EnumPropertyRNA rna_UILayout_operator_context = {
	{(PropertyRNA *)&rna_UILayout_enabled, (PropertyRNA *)&rna_UILayout_active,
	-1, "operator_context", 3, "operator_context",
	"",
	0, "*",
	PROP_ENUM, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	UILayout_operator_context_get, UILayout_operator_context_set, NULL, NULL, NULL, NULL, rna_UILayout_operator_context_items, 12, 0
};

BoolPropertyRNA rna_UILayout_enabled = {
	{(PropertyRNA *)&rna_UILayout_alert, (PropertyRNA *)&rna_UILayout_operator_context,
	-1, "enabled", 3, "Enabled",
	"When false, this (sub)layout is grayed out",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	UILayout_enabled_get, UILayout_enabled_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_UILayout_alert = {
	{(PropertyRNA *)&rna_UILayout_alignment, (PropertyRNA *)&rna_UILayout_enabled,
	-1, "alert", 3, "alert",
	"",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	UILayout_alert_get, UILayout_alert_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

static EnumPropertyItem rna_UILayout_alignment_items[5] = {
	{0, "EXPAND", 0, "Expand", ""},
	{1, "LEFT", 0, "Left", ""},
	{2, "CENTER", 0, "Center", ""},
	{3, "RIGHT", 0, "Right", ""},
	{0, NULL, 0, NULL, NULL}
};

EnumPropertyRNA rna_UILayout_alignment = {
	{(PropertyRNA *)&rna_UILayout_scale_x, (PropertyRNA *)&rna_UILayout_alert,
	-1, "alignment", 3, "alignment",
	"",
	0, "*",
	PROP_ENUM, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	UILayout_alignment_get, UILayout_alignment_set, NULL, NULL, NULL, NULL, rna_UILayout_alignment_items, 4, 0
};

FloatPropertyRNA rna_UILayout_scale_x = {
	{(PropertyRNA *)&rna_UILayout_scale_y, (PropertyRNA *)&rna_UILayout_alignment,
	-1, "scale_x", 3, "Scale X",
	"Scale factor along the X for items in this (sub)layout",
	0, "*",
	PROP_FLOAT, PROP_UNSIGNED | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	UILayout_scale_x_get, UILayout_scale_x_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 10000.0f, 0.0f, FLT_MAX, 10.0f, 3, 0.0f, NULL
};

FloatPropertyRNA rna_UILayout_scale_y = {
	{NULL, (PropertyRNA *)&rna_UILayout_scale_x,
	-1, "scale_y", 3, "Scale Y",
	"Scale factor along the Y for items in this (sub)layout",
	0, "*",
	PROP_FLOAT, PROP_UNSIGNED | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	UILayout_scale_y_get, UILayout_scale_y_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 10000.0f, 0.0f, FLT_MAX, 10.0f, 3, 0.0f, NULL
};

PointerPropertyRNA rna_UILayout_row_layout = {
	{(PropertyRNA *)&rna_UILayout_row_align, NULL,
	-1, "layout", 8388616, "",
	"Sub-layout to put items in",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	NULL, NULL, NULL, NULL,&RNA_UILayout
};

BoolPropertyRNA rna_UILayout_row_align = {
	{NULL, (PropertyRNA *)&rna_UILayout_row_layout,
	-1, "align", 3, "",
	"Align buttons to each other",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

FunctionRNA rna_UILayout_row_func = {
	{(FunctionRNA *)&rna_UILayout_column_func, NULL,
	NULL,
	{(PropertyRNA *)&rna_UILayout_row_layout, (PropertyRNA *)&rna_UILayout_row_align}},
	"row", 0, "Sub-layout. Items placed in this sublayout are placed next to each other in a row",
	UILayout_row_call,
	(PropertyRNA *)&rna_UILayout_row_layout
};

PointerPropertyRNA rna_UILayout_column_layout = {
	{(PropertyRNA *)&rna_UILayout_column_align, NULL,
	-1, "layout", 8388616, "",
	"Sub-layout to put items in",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	NULL, NULL, NULL, NULL,&RNA_UILayout
};

BoolPropertyRNA rna_UILayout_column_align = {
	{NULL, (PropertyRNA *)&rna_UILayout_column_layout,
	-1, "align", 3, "",
	"Align buttons to each other",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

FunctionRNA rna_UILayout_column_func = {
	{(FunctionRNA *)&rna_UILayout_column_flow_func, (FunctionRNA *)&rna_UILayout_row_func,
	NULL,
	{(PropertyRNA *)&rna_UILayout_column_layout, (PropertyRNA *)&rna_UILayout_column_align}},
	"column", 0, "Sub-layout. Items placed in this sublayout are placed under each other in a column",
	UILayout_column_call,
	(PropertyRNA *)&rna_UILayout_column_layout
};

IntPropertyRNA rna_UILayout_column_flow_columns = {
	{(PropertyRNA *)&rna_UILayout_column_flow_layout, NULL,
	-1, "columns", 3, "",
	"Number of columns, 0 is automatic",
	0, "*",
	PROP_INT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL,
	0, INT_MAX, 0, INT_MAX, 1, 0, NULL
};

PointerPropertyRNA rna_UILayout_column_flow_layout = {
	{(PropertyRNA *)&rna_UILayout_column_flow_align, (PropertyRNA *)&rna_UILayout_column_flow_columns,
	-1, "layout", 8388616, "",
	"Sub-layout to put items in",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	NULL, NULL, NULL, NULL,&RNA_UILayout
};

BoolPropertyRNA rna_UILayout_column_flow_align = {
	{NULL, (PropertyRNA *)&rna_UILayout_column_flow_layout,
	-1, "align", 3, "",
	"Align buttons to each other",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

FunctionRNA rna_UILayout_column_flow_func = {
	{(FunctionRNA *)&rna_UILayout_box_func, (FunctionRNA *)&rna_UILayout_column_func,
	NULL,
	{(PropertyRNA *)&rna_UILayout_column_flow_columns, (PropertyRNA *)&rna_UILayout_column_flow_align}},
	"column_flow", 0, "column_flow",
	UILayout_column_flow_call,
	(PropertyRNA *)&rna_UILayout_column_flow_layout
};

PointerPropertyRNA rna_UILayout_box_layout = {
	{NULL, NULL,
	-1, "layout", 8388616, "",
	"Sub-layout to put items in",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	NULL, NULL, NULL, NULL,&RNA_UILayout
};

FunctionRNA rna_UILayout_box_func = {
	{(FunctionRNA *)&rna_UILayout_split_func, (FunctionRNA *)&rna_UILayout_column_flow_func,
	NULL,
	{(PropertyRNA *)&rna_UILayout_box_layout, (PropertyRNA *)&rna_UILayout_box_layout}},
	"box", 0, "Sublayout (items placed in this sublayout are placed under each other in a column and are surrounded by a box)",
	UILayout_box_call,
	(PropertyRNA *)&rna_UILayout_box_layout
};

PointerPropertyRNA rna_UILayout_split_layout = {
	{(PropertyRNA *)&rna_UILayout_split_percentage, NULL,
	-1, "layout", 8388616, "",
	"Sub-layout to put items in",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	NULL, NULL, NULL, NULL,&RNA_UILayout
};

FloatPropertyRNA rna_UILayout_split_percentage = {
	{(PropertyRNA *)&rna_UILayout_split_align, (PropertyRNA *)&rna_UILayout_split_layout,
	-1, "percentage", 3, "Percentage",
	"Percentage of width to split at",
	0, "*",
	PROP_FLOAT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 1.0f, 0.0f, 1.0f, 1.0f, 3, 0.0f, NULL
};

BoolPropertyRNA rna_UILayout_split_align = {
	{NULL, (PropertyRNA *)&rna_UILayout_split_percentage,
	-1, "align", 3, "",
	"Align buttons to each other",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

FunctionRNA rna_UILayout_split_func = {
	{(FunctionRNA *)&rna_UILayout_menu_pie_func, (FunctionRNA *)&rna_UILayout_box_func,
	NULL,
	{(PropertyRNA *)&rna_UILayout_split_layout, (PropertyRNA *)&rna_UILayout_split_align}},
	"split", 0, "split",
	UILayout_split_call,
	(PropertyRNA *)&rna_UILayout_split_layout
};

PointerPropertyRNA rna_UILayout_menu_pie_layout = {
	{NULL, NULL,
	-1, "layout", 8388616, "",
	"Sub-layout to put items in",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	NULL, NULL, NULL, NULL,&RNA_UILayout
};

FunctionRNA rna_UILayout_menu_pie_func = {
	{(FunctionRNA *)&rna_UILayout_icon_func, (FunctionRNA *)&rna_UILayout_split_func,
	NULL,
	{(PropertyRNA *)&rna_UILayout_menu_pie_layout, (PropertyRNA *)&rna_UILayout_menu_pie_layout}},
	"menu_pie", 0, "Sublayout. Items placed in this sublayout are placed in a radial fashion around the menu center)",
	UILayout_menu_pie_call,
	(PropertyRNA *)&rna_UILayout_menu_pie_layout
};

IntPropertyRNA rna_UILayout_icon_icon_value = {
	{(PropertyRNA *)&rna_UILayout_icon_data, NULL,
	-1, "icon_value", 11, "",
	"Icon identifier",
	0, "*",
	PROP_INT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL,
	0, INT_MAX, 0, INT_MAX, 1, 0, NULL
};

PointerPropertyRNA rna_UILayout_icon_data = {
	{NULL, (PropertyRNA *)&rna_UILayout_icon_icon_value,
	-1, "data", 8652804, "",
	"Data from which to take the icon",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	NULL, NULL, NULL, NULL,&RNA_AnyType
};

FunctionRNA rna_UILayout_icon_func = {
	{(FunctionRNA *)&rna_UILayout_enum_item_name_func, (FunctionRNA *)&rna_UILayout_menu_pie_func,
	NULL,
	{(PropertyRNA *)&rna_UILayout_icon_icon_value, (PropertyRNA *)&rna_UILayout_icon_data}},
	"icon", 9, "Return the custom icon for this data, use it e.g. to get materials or texture icons",
	UILayout_icon_call,
	(PropertyRNA *)&rna_UILayout_icon_icon_value
};

StringPropertyRNA rna_UILayout_enum_item_name_name = {
	{(PropertyRNA *)&rna_UILayout_enum_item_name_data, NULL,
	-1, "name", 262153, "",
	"UI name of the enum item",
	0, "*",
	PROP_STRING, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	NULL, NULL, NULL, NULL, NULL, NULL, 0, ""
};

PointerPropertyRNA rna_UILayout_enum_item_name_data = {
	{(PropertyRNA *)&rna_UILayout_enum_item_name_property, (PropertyRNA *)&rna_UILayout_enum_item_name_name,
	-1, "data", 8652804, "",
	"Data from which to take property",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	NULL, NULL, NULL, NULL,&RNA_AnyType
};

StringPropertyRNA rna_UILayout_enum_item_name_property = {
	{(PropertyRNA *)&rna_UILayout_enum_item_name_identifier, (PropertyRNA *)&rna_UILayout_enum_item_name_data,
	-1, "property", 262149, "",
	"Identifier of property in data",
	0, "*",
	PROP_STRING, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	NULL, NULL, NULL, NULL, NULL, NULL, 0, ""
};

StringPropertyRNA rna_UILayout_enum_item_name_identifier = {
	{NULL, (PropertyRNA *)&rna_UILayout_enum_item_name_property,
	-1, "identifier", 262149, "",
	"Identifier of the enum item",
	0, "*",
	PROP_STRING, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	NULL, NULL, NULL, NULL, NULL, NULL, 0, ""
};

FunctionRNA rna_UILayout_enum_item_name_func = {
	{(FunctionRNA *)&rna_UILayout_enum_item_description_func, (FunctionRNA *)&rna_UILayout_icon_func,
	NULL,
	{(PropertyRNA *)&rna_UILayout_enum_item_name_name, (PropertyRNA *)&rna_UILayout_enum_item_name_identifier}},
	"enum_item_name", 9, "Return the UI name for this enum item",
	UILayout_enum_item_name_call,
	(PropertyRNA *)&rna_UILayout_enum_item_name_name
};

StringPropertyRNA rna_UILayout_enum_item_description_description = {
	{(PropertyRNA *)&rna_UILayout_enum_item_description_data, NULL,
	-1, "description", 262153, "",
	"UI description of the enum item",
	0, "*",
	PROP_STRING, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	NULL, NULL, NULL, NULL, NULL, NULL, 0, ""
};

PointerPropertyRNA rna_UILayout_enum_item_description_data = {
	{(PropertyRNA *)&rna_UILayout_enum_item_description_property, (PropertyRNA *)&rna_UILayout_enum_item_description_description,
	-1, "data", 8652804, "",
	"Data from which to take property",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	NULL, NULL, NULL, NULL,&RNA_AnyType
};

StringPropertyRNA rna_UILayout_enum_item_description_property = {
	{(PropertyRNA *)&rna_UILayout_enum_item_description_identifier, (PropertyRNA *)&rna_UILayout_enum_item_description_data,
	-1, "property", 262149, "",
	"Identifier of property in data",
	0, "*",
	PROP_STRING, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	NULL, NULL, NULL, NULL, NULL, NULL, 0, ""
};

StringPropertyRNA rna_UILayout_enum_item_description_identifier = {
	{NULL, (PropertyRNA *)&rna_UILayout_enum_item_description_property,
	-1, "identifier", 262149, "",
	"Identifier of the enum item",
	0, "*",
	PROP_STRING, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	NULL, NULL, NULL, NULL, NULL, NULL, 0, ""
};

FunctionRNA rna_UILayout_enum_item_description_func = {
	{(FunctionRNA *)&rna_UILayout_enum_item_icon_func, (FunctionRNA *)&rna_UILayout_enum_item_name_func,
	NULL,
	{(PropertyRNA *)&rna_UILayout_enum_item_description_description, (PropertyRNA *)&rna_UILayout_enum_item_description_identifier}},
	"enum_item_description", 9, "Return the UI description for this enum item",
	UILayout_enum_item_description_call,
	(PropertyRNA *)&rna_UILayout_enum_item_description_description
};

IntPropertyRNA rna_UILayout_enum_item_icon_icon_value = {
	{(PropertyRNA *)&rna_UILayout_enum_item_icon_data, NULL,
	-1, "icon_value", 11, "",
	"Icon identifier",
	0, "*",
	PROP_INT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL,
	0, INT_MAX, 0, INT_MAX, 1, 0, NULL
};

PointerPropertyRNA rna_UILayout_enum_item_icon_data = {
	{(PropertyRNA *)&rna_UILayout_enum_item_icon_property, (PropertyRNA *)&rna_UILayout_enum_item_icon_icon_value,
	-1, "data", 8652804, "",
	"Data from which to take property",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	NULL, NULL, NULL, NULL,&RNA_AnyType
};

StringPropertyRNA rna_UILayout_enum_item_icon_property = {
	{(PropertyRNA *)&rna_UILayout_enum_item_icon_identifier, (PropertyRNA *)&rna_UILayout_enum_item_icon_data,
	-1, "property", 262149, "",
	"Identifier of property in data",
	0, "*",
	PROP_STRING, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	NULL, NULL, NULL, NULL, NULL, NULL, 0, ""
};

StringPropertyRNA rna_UILayout_enum_item_icon_identifier = {
	{NULL, (PropertyRNA *)&rna_UILayout_enum_item_icon_property,
	-1, "identifier", 262149, "",
	"Identifier of the enum item",
	0, "*",
	PROP_STRING, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	NULL, NULL, NULL, NULL, NULL, NULL, 0, ""
};

FunctionRNA rna_UILayout_enum_item_icon_func = {
	{(FunctionRNA *)&rna_UILayout_prop_func, (FunctionRNA *)&rna_UILayout_enum_item_description_func,
	NULL,
	{(PropertyRNA *)&rna_UILayout_enum_item_icon_icon_value, (PropertyRNA *)&rna_UILayout_enum_item_icon_identifier}},
	"enum_item_icon", 9, "Return the icon for this enum item",
	UILayout_enum_item_icon_call,
	(PropertyRNA *)&rna_UILayout_enum_item_icon_icon_value
};

PointerPropertyRNA rna_UILayout_prop_data = {
	{(PropertyRNA *)&rna_UILayout_prop_property, NULL,
	-1, "data", 8652804, "",
	"Data from which to take property",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	NULL, NULL, NULL, NULL,&RNA_AnyType
};

StringPropertyRNA rna_UILayout_prop_property = {
	{(PropertyRNA *)&rna_UILayout_prop_text, (PropertyRNA *)&rna_UILayout_prop_data,
	-1, "property", 262149, "",
	"Identifier of property in data",
	0, "*",
	PROP_STRING, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	NULL, NULL, NULL, NULL, NULL, NULL, 0, ""
};

StringPropertyRNA rna_UILayout_prop_text = {
	{(PropertyRNA *)&rna_UILayout_prop_text_ctxt, (PropertyRNA *)&rna_UILayout_prop_property,
	-1, "text", 262145, "",
	"Override automatic text of the item",
	0, "*",
	PROP_STRING, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	NULL, NULL, NULL, NULL, NULL, NULL, 0, ""
};

StringPropertyRNA rna_UILayout_prop_text_ctxt = {
	{(PropertyRNA *)&rna_UILayout_prop_translate, (PropertyRNA *)&rna_UILayout_prop_text,
	-1, "text_ctxt", 262145, "",
	"Override automatic translation context of the given text",
	0, "*",
	PROP_STRING, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	NULL, NULL, NULL, NULL, NULL, NULL, 0, ""
};

BoolPropertyRNA rna_UILayout_prop_translate = {
	{(PropertyRNA *)&rna_UILayout_prop_icon, (PropertyRNA *)&rna_UILayout_prop_text_ctxt,
	-1, "translate", 3, "",
	"Translate the given text, when UI translation is enabled",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 1, NULL
};

static EnumPropertyItem rna_UILayout_prop_icon_items[543] = {
	{0, "NONE", 0, "NONE", ""},
	{1, "QUESTION", 0, "QUESTION", ""},
	{2, "ERROR", 0, "ERROR", ""},
	{3, "CANCEL", 0, "CANCEL", ""},
	{4, "TRIA_RIGHT", 0, "TRIA_RIGHT", ""},
	{5, "TRIA_DOWN", 0, "TRIA_DOWN", ""},
	{6, "TRIA_LEFT", 0, "TRIA_LEFT", ""},
	{7, "TRIA_UP", 0, "TRIA_UP", ""},
	{8, "ARROW_LEFTRIGHT", 0, "ARROW_LEFTRIGHT", ""},
	{9, "PLUS", 0, "PLUS", ""},
	{10, "DISCLOSURE_TRI_DOWN", 0, "DISCLOSURE_TRI_DOWN", ""},
	{11, "DISCLOSURE_TRI_RIGHT", 0, "DISCLOSURE_TRI_RIGHT", ""},
	{12, "RADIOBUT_OFF", 0, "RADIOBUT_OFF", ""},
	{13, "RADIOBUT_ON", 0, "RADIOBUT_ON", ""},
	{14, "MENU_PANEL", 0, "MENU_PANEL", ""},
	{15, "BLENDER", 0, "BLENDER", ""},
	{16, "GRIP", 0, "GRIP", ""},
	{17, "DOT", 0, "DOT", ""},
	{18, "COLLAPSEMENU", 0, "COLLAPSEMENU", ""},
	{19, "X", 0, "X", ""},
	{21, "GO_LEFT", 0, "GO_LEFT", ""},
	{22, "PLUG", 0, "PLUG", ""},
	{23, "UI", 0, "UI", ""},
	{24, "NODE", 0, "NODE", ""},
	{25, "NODE_SEL", 0, "NODE_SEL", ""},
	{26, "FULLSCREEN", 0, "FULLSCREEN", ""},
	{27, "SPLITSCREEN", 0, "SPLITSCREEN", ""},
	{28, "RIGHTARROW_THIN", 0, "RIGHTARROW_THIN", ""},
	{29, "BORDERMOVE", 0, "BORDERMOVE", ""},
	{30, "VIEWZOOM", 0, "VIEWZOOM", ""},
	{31, "ZOOMIN", 0, "ZOOMIN", ""},
	{32, "ZOOMOUT", 0, "ZOOMOUT", ""},
	{33, "PANEL_CLOSE", 0, "PANEL_CLOSE", ""},
	{34, "COPY_ID", 0, "COPY_ID", ""},
	{35, "EYEDROPPER", 0, "EYEDROPPER", ""},
	{36, "LINK_AREA", 0, "LINK_AREA", ""},
	{37, "AUTO", 0, "AUTO", ""},
	{38, "CHECKBOX_DEHLT", 0, "CHECKBOX_DEHLT", ""},
	{39, "CHECKBOX_HLT", 0, "CHECKBOX_HLT", ""},
	{40, "UNLOCKED", 0, "UNLOCKED", ""},
	{41, "LOCKED", 0, "LOCKED", ""},
	{42, "UNPINNED", 0, "UNPINNED", ""},
	{43, "PINNED", 0, "PINNED", ""},
	{44, "SCREEN_BACK", 0, "SCREEN_BACK", ""},
	{45, "RIGHTARROW", 0, "RIGHTARROW", ""},
	{46, "DOWNARROW_HLT", 0, "DOWNARROW_HLT", ""},
	{47, "DOTSUP", 0, "DOTSUP", ""},
	{48, "DOTSDOWN", 0, "DOTSDOWN", ""},
	{49, "LINK", 0, "LINK", ""},
	{50, "INLINK", 0, "INLINK", ""},
	{51, "PLUGIN", 0, "PLUGIN", ""},
	{52, "HELP", 0, "HELP", ""},
	{53, "GHOST_ENABLED", 0, "GHOST_ENABLED", ""},
	{54, "COLOR", 0, "COLOR", ""},
	{55, "LINKED", 0, "LINKED", ""},
	{56, "UNLINKED", 0, "UNLINKED", ""},
	{57, "HAND", 0, "HAND", ""},
	{58, "ZOOM_ALL", 0, "ZOOM_ALL", ""},
	{59, "ZOOM_SELECTED", 0, "ZOOM_SELECTED", ""},
	{60, "ZOOM_PREVIOUS", 0, "ZOOM_PREVIOUS", ""},
	{61, "ZOOM_IN", 0, "ZOOM_IN", ""},
	{62, "ZOOM_OUT", 0, "ZOOM_OUT", ""},
	{63, "RENDER_REGION", 0, "RENDER_REGION", ""},
	{64, "BORDER_RECT", 0, "BORDER_RECT", ""},
	{65, "BORDER_LASSO", 0, "BORDER_LASSO", ""},
	{66, "FREEZE", 0, "FREEZE", ""},
	{67, "STYLUS_PRESSURE", 0, "STYLUS_PRESSURE", ""},
	{68, "GHOST_DISABLED", 0, "GHOST_DISABLED", ""},
	{69, "NEW", 0, "NEW", ""},
	{70, "FILE_TICK", 0, "FILE_TICK", ""},
	{71, "QUIT", 0, "QUIT", ""},
	{72, "URL", 0, "URL", ""},
	{73, "RECOVER_LAST", 0, "RECOVER_LAST", ""},
	{75, "FULLSCREEN_ENTER", 0, "FULLSCREEN_ENTER", ""},
	{76, "FULLSCREEN_EXIT", 0, "FULLSCREEN_EXIT", ""},
	{77, "BLANK1", 0, "BLANK1", ""},
	{78, "LAMP", 0, "LAMP", ""},
	{79, "MATERIAL", 0, "MATERIAL", ""},
	{80, "TEXTURE", 0, "TEXTURE", ""},
	{81, "ANIM", 0, "ANIM", ""},
	{82, "WORLD", 0, "WORLD", ""},
	{83, "SCENE", 0, "SCENE", ""},
	{84, "EDIT", 0, "EDIT", ""},
	{85, "GAME", 0, "GAME", ""},
	{86, "RADIO", 0, "RADIO", ""},
	{87, "SCRIPT", 0, "SCRIPT", ""},
	{88, "PARTICLES", 0, "PARTICLES", ""},
	{89, "PHYSICS", 0, "PHYSICS", ""},
	{90, "SPEAKER", 0, "SPEAKER", ""},
	{91, "TEXTURE_SHADED", 0, "TEXTURE_SHADED", ""},
	{104, "VIEW3D", 0, "VIEW3D", ""},
	{105, "IPO", 0, "IPO", ""},
	{106, "OOPS", 0, "OOPS", ""},
	{107, "BUTS", 0, "BUTS", ""},
	{108, "FILESEL", 0, "FILESEL", ""},
	{109, "IMAGE_COL", 0, "IMAGE_COL", ""},
	{110, "INFO", 0, "INFO", ""},
	{111, "SEQUENCE", 0, "SEQUENCE", ""},
	{112, "TEXT", 0, "TEXT", ""},
	{113, "IMASEL", 0, "IMASEL", ""},
	{114, "SOUND", 0, "SOUND", ""},
	{115, "ACTION", 0, "ACTION", ""},
	{116, "NLA", 0, "NLA", ""},
	{117, "SCRIPTWIN", 0, "SCRIPTWIN", ""},
	{118, "TIME", 0, "TIME", ""},
	{119, "NODETREE", 0, "NODETREE", ""},
	{120, "LOGIC", 0, "LOGIC", ""},
	{121, "CONSOLE", 0, "CONSOLE", ""},
	{122, "PREFERENCES", 0, "PREFERENCES", ""},
	{123, "CLIP", 0, "CLIP", ""},
	{124, "ASSET_MANAGER", 0, "ASSET_MANAGER", ""},
	{130, "OBJECT_DATAMODE", 0, "OBJECT_DATAMODE", ""},
	{131, "EDITMODE_HLT", 0, "EDITMODE_HLT", ""},
	{132, "FACESEL_HLT", 0, "FACESEL_HLT", ""},
	{133, "VPAINT_HLT", 0, "VPAINT_HLT", ""},
	{134, "TPAINT_HLT", 0, "TPAINT_HLT", ""},
	{135, "WPAINT_HLT", 0, "WPAINT_HLT", ""},
	{136, "SCULPTMODE_HLT", 0, "SCULPTMODE_HLT", ""},
	{137, "POSE_HLT", 0, "POSE_HLT", ""},
	{138, "PARTICLEMODE", 0, "PARTICLEMODE", ""},
	{139, "LIGHTPAINT", 0, "LIGHTPAINT", ""},
	{156, "SCENE_DATA", 0, "SCENE_DATA", ""},
	{157, "RENDERLAYERS", 0, "RENDERLAYERS", ""},
	{158, "WORLD_DATA", 0, "WORLD_DATA", ""},
	{159, "OBJECT_DATA", 0, "OBJECT_DATA", ""},
	{160, "MESH_DATA", 0, "MESH_DATA", ""},
	{161, "CURVE_DATA", 0, "CURVE_DATA", ""},
	{162, "META_DATA", 0, "META_DATA", ""},
	{163, "LATTICE_DATA", 0, "LATTICE_DATA", ""},
	{164, "LAMP_DATA", 0, "LAMP_DATA", ""},
	{165, "MATERIAL_DATA", 0, "MATERIAL_DATA", ""},
	{166, "TEXTURE_DATA", 0, "TEXTURE_DATA", ""},
	{167, "ANIM_DATA", 0, "ANIM_DATA", ""},
	{168, "CAMERA_DATA", 0, "CAMERA_DATA", ""},
	{169, "PARTICLE_DATA", 0, "PARTICLE_DATA", ""},
	{170, "LIBRARY_DATA_DIRECT", 0, "LIBRARY_DATA_DIRECT", ""},
	{171, "GROUP", 0, "GROUP", ""},
	{172, "ARMATURE_DATA", 0, "ARMATURE_DATA", ""},
	{173, "POSE_DATA", 0, "POSE_DATA", ""},
	{174, "BONE_DATA", 0, "BONE_DATA", ""},
	{175, "CONSTRAINT", 0, "CONSTRAINT", ""},
	{176, "SHAPEKEY_DATA", 0, "SHAPEKEY_DATA", ""},
	{177, "CONSTRAINT_BONE", 0, "CONSTRAINT_BONE", ""},
	{178, "CAMERA_STEREO", 0, "CAMERA_STEREO", ""},
	{179, "PACKAGE", 0, "PACKAGE", ""},
	{180, "UGLYPACKAGE", 0, "UGLYPACKAGE", ""},
	{182, "BRUSH_DATA", 0, "BRUSH_DATA", ""},
	{183, "IMAGE_DATA", 0, "IMAGE_DATA", ""},
	{184, "FILE", 0, "FILE", ""},
	{185, "FCURVE", 0, "FCURVE", ""},
	{186, "FONT_DATA", 0, "FONT_DATA", ""},
	{187, "RENDER_RESULT", 0, "RENDER_RESULT", ""},
	{188, "SURFACE_DATA", 0, "SURFACE_DATA", ""},
	{189, "EMPTY_DATA", 0, "EMPTY_DATA", ""},
	{190, "SETTINGS", 0, "SETTINGS", ""},
	{191, "RENDER_ANIMATION", 0, "RENDER_ANIMATION", ""},
	{192, "RENDER_STILL", 0, "RENDER_STILL", ""},
	{194, "BOIDS", 0, "BOIDS", ""},
	{195, "STRANDS", 0, "STRANDS", ""},
	{196, "LIBRARY_DATA_INDIRECT", 0, "LIBRARY_DATA_INDIRECT", ""},
	{197, "GREASEPENCIL", 0, "GREASEPENCIL", ""},
	{198, "LINE_DATA", 0, "LINE_DATA", ""},
	{200, "GROUP_BONE", 0, "GROUP_BONE", ""},
	{201, "GROUP_VERTEX", 0, "GROUP_VERTEX", ""},
	{202, "GROUP_VCOL", 0, "GROUP_VCOL", ""},
	{203, "GROUP_UVS", 0, "GROUP_UVS", ""},
	{206, "RNA", 0, "RNA", ""},
	{207, "RNA_ADD", 0, "RNA_ADD", ""},
	{234, "OUTLINER_OB_EMPTY", 0, "OUTLINER_OB_EMPTY", ""},
	{235, "OUTLINER_OB_MESH", 0, "OUTLINER_OB_MESH", ""},
	{236, "OUTLINER_OB_CURVE", 0, "OUTLINER_OB_CURVE", ""},
	{237, "OUTLINER_OB_LATTICE", 0, "OUTLINER_OB_LATTICE", ""},
	{238, "OUTLINER_OB_META", 0, "OUTLINER_OB_META", ""},
	{239, "OUTLINER_OB_LAMP", 0, "OUTLINER_OB_LAMP", ""},
	{240, "OUTLINER_OB_CAMERA", 0, "OUTLINER_OB_CAMERA", ""},
	{241, "OUTLINER_OB_ARMATURE", 0, "OUTLINER_OB_ARMATURE", ""},
	{242, "OUTLINER_OB_FONT", 0, "OUTLINER_OB_FONT", ""},
	{243, "OUTLINER_OB_SURFACE", 0, "OUTLINER_OB_SURFACE", ""},
	{244, "OUTLINER_OB_SPEAKER", 0, "OUTLINER_OB_SPEAKER", ""},
	{253, "RESTRICT_VIEW_OFF", 0, "RESTRICT_VIEW_OFF", ""},
	{254, "RESTRICT_VIEW_ON", 0, "RESTRICT_VIEW_ON", ""},
	{255, "RESTRICT_SELECT_OFF", 0, "RESTRICT_SELECT_OFF", ""},
	{256, "RESTRICT_SELECT_ON", 0, "RESTRICT_SELECT_ON", ""},
	{257, "RESTRICT_RENDER_OFF", 0, "RESTRICT_RENDER_OFF", ""},
	{258, "RESTRICT_RENDER_ON", 0, "RESTRICT_RENDER_ON", ""},
	{260, "OUTLINER_DATA_EMPTY", 0, "OUTLINER_DATA_EMPTY", ""},
	{261, "OUTLINER_DATA_MESH", 0, "OUTLINER_DATA_MESH", ""},
	{262, "OUTLINER_DATA_CURVE", 0, "OUTLINER_DATA_CURVE", ""},
	{263, "OUTLINER_DATA_LATTICE", 0, "OUTLINER_DATA_LATTICE", ""},
	{264, "OUTLINER_DATA_META", 0, "OUTLINER_DATA_META", ""},
	{265, "OUTLINER_DATA_LAMP", 0, "OUTLINER_DATA_LAMP", ""},
	{266, "OUTLINER_DATA_CAMERA", 0, "OUTLINER_DATA_CAMERA", ""},
	{267, "OUTLINER_DATA_ARMATURE", 0, "OUTLINER_DATA_ARMATURE", ""},
	{268, "OUTLINER_DATA_FONT", 0, "OUTLINER_DATA_FONT", ""},
	{269, "OUTLINER_DATA_SURFACE", 0, "OUTLINER_DATA_SURFACE", ""},
	{270, "OUTLINER_DATA_SPEAKER", 0, "OUTLINER_DATA_SPEAKER", ""},
	{271, "OUTLINER_DATA_POSE", 0, "OUTLINER_DATA_POSE", ""},
	{286, "MESH_PLANE", 0, "MESH_PLANE", ""},
	{287, "MESH_CUBE", 0, "MESH_CUBE", ""},
	{288, "MESH_CIRCLE", 0, "MESH_CIRCLE", ""},
	{289, "MESH_UVSPHERE", 0, "MESH_UVSPHERE", ""},
	{290, "MESH_ICOSPHERE", 0, "MESH_ICOSPHERE", ""},
	{291, "MESH_GRID", 0, "MESH_GRID", ""},
	{292, "MESH_MONKEY", 0, "MESH_MONKEY", ""},
	{293, "MESH_CYLINDER", 0, "MESH_CYLINDER", ""},
	{294, "MESH_TORUS", 0, "MESH_TORUS", ""},
	{295, "MESH_CONE", 0, "MESH_CONE", ""},
	{298, "LAMP_POINT", 0, "LAMP_POINT", ""},
	{299, "LAMP_SUN", 0, "LAMP_SUN", ""},
	{300, "LAMP_SPOT", 0, "LAMP_SPOT", ""},
	{301, "LAMP_HEMI", 0, "LAMP_HEMI", ""},
	{302, "LAMP_AREA", 0, "LAMP_AREA", ""},
	{305, "META_EMPTY", 0, "META_EMPTY", ""},
	{306, "META_PLANE", 0, "META_PLANE", ""},
	{307, "META_CUBE", 0, "META_CUBE", ""},
	{308, "META_BALL", 0, "META_BALL", ""},
	{309, "META_ELLIPSOID", 0, "META_ELLIPSOID", ""},
	{310, "META_CAPSULE", 0, "META_CAPSULE", ""},
	{312, "SURFACE_NCURVE", 0, "SURFACE_NCURVE", ""},
	{313, "SURFACE_NCIRCLE", 0, "SURFACE_NCIRCLE", ""},
	{314, "SURFACE_NSURFACE", 0, "SURFACE_NSURFACE", ""},
	{315, "SURFACE_NCYLINDER", 0, "SURFACE_NCYLINDER", ""},
	{316, "SURFACE_NSPHERE", 0, "SURFACE_NSPHERE", ""},
	{317, "SURFACE_NTORUS", 0, "SURFACE_NTORUS", ""},
	{321, "CURVE_BEZCURVE", 0, "CURVE_BEZCURVE", ""},
	{322, "CURVE_BEZCIRCLE", 0, "CURVE_BEZCIRCLE", ""},
	{323, "CURVE_NCURVE", 0, "CURVE_NCURVE", ""},
	{324, "CURVE_NCIRCLE", 0, "CURVE_NCIRCLE", ""},
	{325, "CURVE_PATH", 0, "CURVE_PATH", ""},
	{331, "COLOR_RED", 0, "COLOR_RED", ""},
	{332, "COLOR_GREEN", 0, "COLOR_GREEN", ""},
	{333, "COLOR_BLUE", 0, "COLOR_BLUE", ""},
	{334, "TRIA_RIGHT_BAR", 0, "TRIA_RIGHT_BAR", ""},
	{335, "TRIA_DOWN_BAR", 0, "TRIA_DOWN_BAR", ""},
	{336, "TRIA_LEFT_BAR", 0, "TRIA_LEFT_BAR", ""},
	{337, "TRIA_UP_BAR", 0, "TRIA_UP_BAR", ""},
	{338, "FORCE_FORCE", 0, "FORCE_FORCE", ""},
	{339, "FORCE_WIND", 0, "FORCE_WIND", ""},
	{340, "FORCE_VORTEX", 0, "FORCE_VORTEX", ""},
	{341, "FORCE_MAGNETIC", 0, "FORCE_MAGNETIC", ""},
	{342, "FORCE_HARMONIC", 0, "FORCE_HARMONIC", ""},
	{343, "FORCE_CHARGE", 0, "FORCE_CHARGE", ""},
	{344, "FORCE_LENNARDJONES", 0, "FORCE_LENNARDJONES", ""},
	{345, "FORCE_TEXTURE", 0, "FORCE_TEXTURE", ""},
	{346, "FORCE_CURVE", 0, "FORCE_CURVE", ""},
	{347, "FORCE_BOID", 0, "FORCE_BOID", ""},
	{348, "FORCE_TURBULENCE", 0, "FORCE_TURBULENCE", ""},
	{349, "FORCE_DRAG", 0, "FORCE_DRAG", ""},
	{350, "FORCE_SMOKEFLOW", 0, "FORCE_SMOKEFLOW", ""},
	{442, "MODIFIER", 0, "MODIFIER", ""},
	{443, "MOD_WAVE", 0, "MOD_WAVE", ""},
	{444, "MOD_BUILD", 0, "MOD_BUILD", ""},
	{445, "MOD_DECIM", 0, "MOD_DECIM", ""},
	{446, "MOD_MIRROR", 0, "MOD_MIRROR", ""},
	{447, "MOD_SOFT", 0, "MOD_SOFT", ""},
	{448, "MOD_SUBSURF", 0, "MOD_SUBSURF", ""},
	{449, "HOOK", 0, "HOOK", ""},
	{450, "MOD_PHYSICS", 0, "MOD_PHYSICS", ""},
	{451, "MOD_PARTICLES", 0, "MOD_PARTICLES", ""},
	{452, "MOD_BOOLEAN", 0, "MOD_BOOLEAN", ""},
	{453, "MOD_EDGESPLIT", 0, "MOD_EDGESPLIT", ""},
	{454, "MOD_ARRAY", 0, "MOD_ARRAY", ""},
	{455, "MOD_UVPROJECT", 0, "MOD_UVPROJECT", ""},
	{456, "MOD_DISPLACE", 0, "MOD_DISPLACE", ""},
	{457, "MOD_CURVE", 0, "MOD_CURVE", ""},
	{458, "MOD_LATTICE", 0, "MOD_LATTICE", ""},
	{459, "CONSTRAINT_DATA", 0, "CONSTRAINT_DATA", ""},
	{460, "MOD_ARMATURE", 0, "MOD_ARMATURE", ""},
	{461, "MOD_SHRINKWRAP", 0, "MOD_SHRINKWRAP", ""},
	{462, "MOD_CAST", 0, "MOD_CAST", ""},
	{463, "MOD_MESHDEFORM", 0, "MOD_MESHDEFORM", ""},
	{464, "MOD_BEVEL", 0, "MOD_BEVEL", ""},
	{465, "MOD_SMOOTH", 0, "MOD_SMOOTH", ""},
	{466, "MOD_SIMPLEDEFORM", 0, "MOD_SIMPLEDEFORM", ""},
	{467, "MOD_MASK", 0, "MOD_MASK", ""},
	{468, "MOD_CLOTH", 0, "MOD_CLOTH", ""},
	{469, "MOD_EXPLODE", 0, "MOD_EXPLODE", ""},
	{470, "MOD_FLUIDSIM", 0, "MOD_FLUIDSIM", ""},
	{471, "MOD_MULTIRES", 0, "MOD_MULTIRES", ""},
	{472, "MOD_SMOKE", 0, "MOD_SMOKE", ""},
	{473, "MOD_SOLIDIFY", 0, "MOD_SOLIDIFY", ""},
	{474, "MOD_SCREW", 0, "MOD_SCREW", ""},
	{475, "MOD_VERTEX_WEIGHT", 0, "MOD_VERTEX_WEIGHT", ""},
	{476, "MOD_DYNAMICPAINT", 0, "MOD_DYNAMICPAINT", ""},
	{477, "MOD_REMESH", 0, "MOD_REMESH", ""},
	{478, "MOD_OCEAN", 0, "MOD_OCEAN", ""},
	{479, "MOD_WARP", 0, "MOD_WARP", ""},
	{480, "MOD_SKIN", 0, "MOD_SKIN", ""},
	{481, "MOD_TRIANGULATE", 0, "MOD_TRIANGULATE", ""},
	{482, "MOD_WIREFRAME", 0, "MOD_WIREFRAME", ""},
	{494, "REC", 0, "REC", ""},
	{495, "PLAY", 0, "PLAY", ""},
	{496, "FF", 0, "FF", ""},
	{497, "REW", 0, "REW", ""},
	{498, "PAUSE", 0, "PAUSE", ""},
	{499, "PREV_KEYFRAME", 0, "PREV_KEYFRAME", ""},
	{500, "NEXT_KEYFRAME", 0, "NEXT_KEYFRAME", ""},
	{501, "PLAY_AUDIO", 0, "PLAY_AUDIO", ""},
	{502, "PLAY_REVERSE", 0, "PLAY_REVERSE", ""},
	{503, "PREVIEW_RANGE", 0, "PREVIEW_RANGE", ""},
	{504, "ACTION_TWEAK", 0, "ACTION_TWEAK", ""},
	{505, "PMARKER_ACT", 0, "PMARKER_ACT", ""},
	{506, "PMARKER_SEL", 0, "PMARKER_SEL", ""},
	{507, "PMARKER", 0, "PMARKER", ""},
	{508, "MARKER_HLT", 0, "MARKER_HLT", ""},
	{509, "MARKER", 0, "MARKER", ""},
	{510, "SPACE2", 0, "SPACE2", ""},
	{511, "SPACE3", 0, "SPACE3", ""},
	{512, "KEYINGSET", 0, "KEYINGSET", ""},
	{513, "KEY_DEHLT", 0, "KEY_DEHLT", ""},
	{514, "KEY_HLT", 0, "KEY_HLT", ""},
	{515, "MUTE_IPO_OFF", 0, "MUTE_IPO_OFF", ""},
	{516, "MUTE_IPO_ON", 0, "MUTE_IPO_ON", ""},
	{517, "VISIBLE_IPO_OFF", 0, "VISIBLE_IPO_OFF", ""},
	{518, "VISIBLE_IPO_ON", 0, "VISIBLE_IPO_ON", ""},
	{519, "DRIVER", 0, "DRIVER", ""},
	{520, "SOLO_OFF", 0, "SOLO_OFF", ""},
	{521, "SOLO_ON", 0, "SOLO_ON", ""},
	{522, "FRAME_PREV", 0, "FRAME_PREV", ""},
	{523, "FRAME_NEXT", 0, "FRAME_NEXT", ""},
	{524, "NLA_PUSHDOWN", 0, "NLA_PUSHDOWN", ""},
	{525, "IPO_CONSTANT", 0, "IPO_CONSTANT", ""},
	{526, "IPO_LINEAR", 0, "IPO_LINEAR", ""},
	{527, "IPO_BEZIER", 0, "IPO_BEZIER", ""},
	{528, "IPO_SINE", 0, "IPO_SINE", ""},
	{529, "IPO_QUAD", 0, "IPO_QUAD", ""},
	{530, "IPO_CUBIC", 0, "IPO_CUBIC", ""},
	{531, "IPO_QUART", 0, "IPO_QUART", ""},
	{532, "IPO_QUINT", 0, "IPO_QUINT", ""},
	{533, "IPO_EXPO", 0, "IPO_EXPO", ""},
	{534, "IPO_CIRC", 0, "IPO_CIRC", ""},
	{535, "IPO_BOUNCE", 0, "IPO_BOUNCE", ""},
	{536, "IPO_ELASTIC", 0, "IPO_ELASTIC", ""},
	{537, "IPO_BACK", 0, "IPO_BACK", ""},
	{538, "IPO_EASE_IN", 0, "IPO_EASE_IN", ""},
	{539, "IPO_EASE_OUT", 0, "IPO_EASE_OUT", ""},
	{540, "IPO_EASE_IN_OUT", 0, "IPO_EASE_IN_OUT", ""},
	{546, "VERTEXSEL", 0, "VERTEXSEL", ""},
	{547, "EDGESEL", 0, "EDGESEL", ""},
	{548, "FACESEL", 0, "FACESEL", ""},
	{549, "LOOPSEL", 0, "LOOPSEL", ""},
	{551, "ROTATE", 0, "ROTATE", ""},
	{552, "CURSOR", 0, "CURSOR", ""},
	{553, "ROTATECOLLECTION", 0, "ROTATECOLLECTION", ""},
	{554, "ROTATECENTER", 0, "ROTATECENTER", ""},
	{555, "ROTACTIVE", 0, "ROTACTIVE", ""},
	{556, "ALIGN", 0, "ALIGN", ""},
	{558, "SMOOTHCURVE", 0, "SMOOTHCURVE", ""},
	{559, "SPHERECURVE", 0, "SPHERECURVE", ""},
	{560, "ROOTCURVE", 0, "ROOTCURVE", ""},
	{561, "SHARPCURVE", 0, "SHARPCURVE", ""},
	{562, "LINCURVE", 0, "LINCURVE", ""},
	{563, "NOCURVE", 0, "NOCURVE", ""},
	{564, "RNDCURVE", 0, "RNDCURVE", ""},
	{565, "PROP_OFF", 0, "PROP_OFF", ""},
	{566, "PROP_ON", 0, "PROP_ON", ""},
	{567, "PROP_CON", 0, "PROP_CON", ""},
	{568, "SCULPT_DYNTOPO", 0, "SCULPT_DYNTOPO", ""},
	{569, "PARTICLE_POINT", 0, "PARTICLE_POINT", ""},
	{570, "PARTICLE_TIP", 0, "PARTICLE_TIP", ""},
	{571, "PARTICLE_PATH", 0, "PARTICLE_PATH", ""},
	{572, "MAN_TRANS", 0, "MAN_TRANS", ""},
	{573, "MAN_ROT", 0, "MAN_ROT", ""},
	{574, "MAN_SCALE", 0, "MAN_SCALE", ""},
	{575, "MANIPUL", 0, "MANIPUL", ""},
	{576, "SNAP_OFF", 0, "SNAP_OFF", ""},
	{577, "SNAP_ON", 0, "SNAP_ON", ""},
	{578, "SNAP_NORMAL", 0, "SNAP_NORMAL", ""},
	{579, "SNAP_INCREMENT", 0, "SNAP_INCREMENT", ""},
	{580, "SNAP_VERTEX", 0, "SNAP_VERTEX", ""},
	{581, "SNAP_EDGE", 0, "SNAP_EDGE", ""},
	{582, "SNAP_FACE", 0, "SNAP_FACE", ""},
	{583, "SNAP_VOLUME", 0, "SNAP_VOLUME", ""},
	{585, "STICKY_UVS_LOC", 0, "STICKY_UVS_LOC", ""},
	{586, "STICKY_UVS_DISABLE", 0, "STICKY_UVS_DISABLE", ""},
	{587, "STICKY_UVS_VERT", 0, "STICKY_UVS_VERT", ""},
	{588, "CLIPUV_DEHLT", 0, "CLIPUV_DEHLT", ""},
	{589, "CLIPUV_HLT", 0, "CLIPUV_HLT", ""},
	{590, "SNAP_PEEL_OBJECT", 0, "SNAP_PEEL_OBJECT", ""},
	{591, "GRID", 0, "GRID", ""},
	{598, "PASTEDOWN", 0, "PASTEDOWN", ""},
	{599, "COPYDOWN", 0, "COPYDOWN", ""},
	{600, "PASTEFLIPUP", 0, "PASTEFLIPUP", ""},
	{601, "PASTEFLIPDOWN", 0, "PASTEFLIPDOWN", ""},
	{606, "SNAP_SURFACE", 0, "SNAP_SURFACE", ""},
	{607, "AUTOMERGE_ON", 0, "AUTOMERGE_ON", ""},
	{608, "AUTOMERGE_OFF", 0, "AUTOMERGE_OFF", ""},
	{609, "RETOPO", 0, "RETOPO", ""},
	{610, "UV_VERTEXSEL", 0, "UV_VERTEXSEL", ""},
	{611, "UV_EDGESEL", 0, "UV_EDGESEL", ""},
	{612, "UV_FACESEL", 0, "UV_FACESEL", ""},
	{613, "UV_ISLANDSEL", 0, "UV_ISLANDSEL", ""},
	{614, "UV_SYNC_SELECT", 0, "UV_SYNC_SELECT", ""},
	{624, "BBOX", 0, "BBOX", ""},
	{625, "WIRE", 0, "WIRE", ""},
	{626, "SOLID", 0, "SOLID", ""},
	{627, "SMOOTH", 0, "SMOOTH", ""},
	{628, "POTATO", 0, "POTATO", ""},
	{630, "ORTHO", 0, "ORTHO", ""},
	{633, "LOCKVIEW_OFF", 0, "LOCKVIEW_OFF", ""},
	{634, "LOCKVIEW_ON", 0, "LOCKVIEW_ON", ""},
	{636, "AXIS_SIDE", 0, "AXIS_SIDE", ""},
	{637, "AXIS_FRONT", 0, "AXIS_FRONT", ""},
	{638, "AXIS_TOP", 0, "AXIS_TOP", ""},
	{639, "NDOF_DOM", 0, "NDOF_DOM", ""},
	{640, "NDOF_TURN", 0, "NDOF_TURN", ""},
	{641, "NDOF_FLY", 0, "NDOF_FLY", ""},
	{642, "NDOF_TRANS", 0, "NDOF_TRANS", ""},
	{643, "LAYER_USED", 0, "LAYER_USED", ""},
	{644, "LAYER_ACTIVE", 0, "LAYER_ACTIVE", ""},
	{676, "SORTALPHA", 0, "SORTALPHA", ""},
	{677, "SORTBYEXT", 0, "SORTBYEXT", ""},
	{678, "SORTTIME", 0, "SORTTIME", ""},
	{679, "SORTSIZE", 0, "SORTSIZE", ""},
	{680, "LONGDISPLAY", 0, "LONGDISPLAY", ""},
	{681, "SHORTDISPLAY", 0, "SHORTDISPLAY", ""},
	{682, "GHOST", 0, "GHOST", ""},
	{683, "IMGDISPLAY", 0, "IMGDISPLAY", ""},
	{684, "SAVE_AS", 0, "SAVE_AS", ""},
	{685, "SAVE_COPY", 0, "SAVE_COPY", ""},
	{686, "BOOKMARKS", 0, "BOOKMARKS", ""},
	{687, "FONTPREVIEW", 0, "FONTPREVIEW", ""},
	{688, "FILTER", 0, "FILTER", ""},
	{689, "NEWFOLDER", 0, "NEWFOLDER", ""},
	{690, "OPEN_RECENT", 0, "OPEN_RECENT", ""},
	{691, "FILE_PARENT", 0, "FILE_PARENT", ""},
	{692, "FILE_REFRESH", 0, "FILE_REFRESH", ""},
	{693, "FILE_FOLDER", 0, "FILE_FOLDER", ""},
	{694, "FILE_BLANK", 0, "FILE_BLANK", ""},
	{695, "FILE_BLEND", 0, "FILE_BLEND", ""},
	{696, "FILE_IMAGE", 0, "FILE_IMAGE", ""},
	{697, "FILE_MOVIE", 0, "FILE_MOVIE", ""},
	{698, "FILE_SCRIPT", 0, "FILE_SCRIPT", ""},
	{699, "FILE_SOUND", 0, "FILE_SOUND", ""},
	{700, "FILE_FONT", 0, "FILE_FONT", ""},
	{701, "FILE_TEXT", 0, "FILE_TEXT", ""},
	{702, "RECOVER_AUTO", 0, "RECOVER_AUTO", ""},
	{703, "SAVE_PREFS", 0, "SAVE_PREFS", ""},
	{704, "LINK_BLEND", 0, "LINK_BLEND", ""},
	{705, "APPEND_BLEND", 0, "APPEND_BLEND", ""},
	{706, "IMPORT", 0, "IMPORT", ""},
	{707, "EXPORT", 0, "EXPORT", ""},
	{708, "EXTERNAL_DATA", 0, "EXTERNAL_DATA", ""},
	{709, "LOAD_FACTORY", 0, "LOAD_FACTORY", ""},
	{715, "LOOP_BACK", 0, "LOOP_BACK", ""},
	{716, "LOOP_FORWARDS", 0, "LOOP_FORWARDS", ""},
	{717, "BACK", 0, "BACK", ""},
	{718, "FORWARD", 0, "FORWARD", ""},
	{726, "FILE_BACKUP", 0, "FILE_BACKUP", ""},
	{727, "DISK_DRIVE", 0, "DISK_DRIVE", ""},
	{728, "MATPLANE", 0, "MATPLANE", ""},
	{729, "MATSPHERE", 0, "MATSPHERE", ""},
	{730, "MATCUBE", 0, "MATCUBE", ""},
	{731, "MONKEY", 0, "MONKEY", ""},
	{732, "HAIR", 0, "HAIR", ""},
	{733, "ALIASED", 0, "ALIASED", ""},
	{734, "ANTIALIASED", 0, "ANTIALIASED", ""},
	{735, "MAT_SPHERE_SKY", 0, "MAT_SPHERE_SKY", ""},
	{740, "WORDWRAP_OFF", 0, "WORDWRAP_OFF", ""},
	{741, "WORDWRAP_ON", 0, "WORDWRAP_ON", ""},
	{742, "SYNTAX_OFF", 0, "SYNTAX_OFF", ""},
	{743, "SYNTAX_ON", 0, "SYNTAX_ON", ""},
	{744, "LINENUMBERS_OFF", 0, "LINENUMBERS_OFF", ""},
	{745, "LINENUMBERS_ON", 0, "LINENUMBERS_ON", ""},
	{746, "SCRIPTPLUGINS", 0, "SCRIPTPLUGINS", ""},
	{754, "SEQ_SEQUENCER", 0, "SEQ_SEQUENCER", ""},
	{755, "SEQ_PREVIEW", 0, "SEQ_PREVIEW", ""},
	{756, "SEQ_LUMA_WAVEFORM", 0, "SEQ_LUMA_WAVEFORM", ""},
	{757, "SEQ_CHROMA_SCOPE", 0, "SEQ_CHROMA_SCOPE", ""},
	{758, "SEQ_HISTOGRAM", 0, "SEQ_HISTOGRAM", ""},
	{759, "SEQ_SPLITVIEW", 0, "SEQ_SPLITVIEW", ""},
	{763, "IMAGE_RGB", 0, "IMAGE_RGB", ""},
	{764, "IMAGE_RGB_ALPHA", 0, "IMAGE_RGB_ALPHA", ""},
	{765, "IMAGE_ALPHA", 0, "IMAGE_ALPHA", ""},
	{766, "IMAGE_ZDEPTH", 0, "IMAGE_ZDEPTH", ""},
	{767, "IMAGEFILE", 0, "IMAGEFILE", ""},
	{780, "BRUSH_ADD", 0, "BRUSH_ADD", ""},
	{781, "BRUSH_BLOB", 0, "BRUSH_BLOB", ""},
	{782, "BRUSH_BLUR", 0, "BRUSH_BLUR", ""},
	{783, "BRUSH_CLAY", 0, "BRUSH_CLAY", ""},
	{784, "BRUSH_CLAY_STRIPS", 0, "BRUSH_CLAY_STRIPS", ""},
	{785, "BRUSH_CLONE", 0, "BRUSH_CLONE", ""},
	{786, "BRUSH_CREASE", 0, "BRUSH_CREASE", ""},
	{787, "BRUSH_DARKEN", 0, "BRUSH_DARKEN", ""},
	{788, "BRUSH_FILL", 0, "BRUSH_FILL", ""},
	{789, "BRUSH_FLATTEN", 0, "BRUSH_FLATTEN", ""},
	{790, "BRUSH_GRAB", 0, "BRUSH_GRAB", ""},
	{791, "BRUSH_INFLATE", 0, "BRUSH_INFLATE", ""},
	{792, "BRUSH_LAYER", 0, "BRUSH_LAYER", ""},
	{793, "BRUSH_LIGHTEN", 0, "BRUSH_LIGHTEN", ""},
	{794, "BRUSH_MASK", 0, "BRUSH_MASK", ""},
	{795, "BRUSH_MIX", 0, "BRUSH_MIX", ""},
	{796, "BRUSH_MULTIPLY", 0, "BRUSH_MULTIPLY", ""},
	{797, "BRUSH_NUDGE", 0, "BRUSH_NUDGE", ""},
	{798, "BRUSH_PINCH", 0, "BRUSH_PINCH", ""},
	{799, "BRUSH_SCRAPE", 0, "BRUSH_SCRAPE", ""},
	{800, "BRUSH_SCULPT_DRAW", 0, "BRUSH_SCULPT_DRAW", ""},
	{801, "BRUSH_SMEAR", 0, "BRUSH_SMEAR", ""},
	{802, "BRUSH_SMOOTH", 0, "BRUSH_SMOOTH", ""},
	{803, "BRUSH_SNAKE_HOOK", 0, "BRUSH_SNAKE_HOOK", ""},
	{804, "BRUSH_SOFTEN", 0, "BRUSH_SOFTEN", ""},
	{805, "BRUSH_SUBTRACT", 0, "BRUSH_SUBTRACT", ""},
	{806, "BRUSH_TEXDRAW", 0, "BRUSH_TEXDRAW", ""},
	{807, "BRUSH_TEXFILL", 0, "BRUSH_TEXFILL", ""},
	{808, "BRUSH_TEXMASK", 0, "BRUSH_TEXMASK", ""},
	{809, "BRUSH_THUMB", 0, "BRUSH_THUMB", ""},
	{810, "BRUSH_ROTATE", 0, "BRUSH_ROTATE", ""},
	{811, "BRUSH_VERTEXDRAW", 0, "BRUSH_VERTEXDRAW", ""},
	{812, "MATCAP_01", 0, "MATCAP_01", ""},
	{813, "MATCAP_02", 0, "MATCAP_02", ""},
	{814, "MATCAP_03", 0, "MATCAP_03", ""},
	{815, "MATCAP_04", 0, "MATCAP_04", ""},
	{816, "MATCAP_05", 0, "MATCAP_05", ""},
	{817, "MATCAP_06", 0, "MATCAP_06", ""},
	{818, "MATCAP_07", 0, "MATCAP_07", ""},
	{819, "MATCAP_08", 0, "MATCAP_08", ""},
	{820, "MATCAP_09", 0, "MATCAP_09", ""},
	{821, "MATCAP_10", 0, "MATCAP_10", ""},
	{822, "MATCAP_11", 0, "MATCAP_11", ""},
	{823, "MATCAP_12", 0, "MATCAP_12", ""},
	{824, "MATCAP_13", 0, "MATCAP_13", ""},
	{825, "MATCAP_14", 0, "MATCAP_14", ""},
	{826, "MATCAP_15", 0, "MATCAP_15", ""},
	{827, "MATCAP_16", 0, "MATCAP_16", ""},
	{828, "MATCAP_17", 0, "MATCAP_17", ""},
	{829, "MATCAP_18", 0, "MATCAP_18", ""},
	{830, "MATCAP_19", 0, "MATCAP_19", ""},
	{831, "MATCAP_20", 0, "MATCAP_20", ""},
	{832, "MATCAP_21", 0, "MATCAP_21", ""},
	{833, "MATCAP_22", 0, "MATCAP_22", ""},
	{834, "MATCAP_23", 0, "MATCAP_23", ""},
	{835, "MATCAP_24", 0, "MATCAP_24", ""},
	{836, "VIEW3D_VEC", 0, "VIEW3D_VEC", ""},
	{837, "EDIT_VEC", 0, "EDIT_VEC", ""},
	{838, "EDITMODE_VEC_DEHLT", 0, "EDITMODE_VEC_DEHLT", ""},
	{839, "EDITMODE_VEC_HLT", 0, "EDITMODE_VEC_HLT", ""},
	{840, "DISCLOSURE_TRI_RIGHT_VEC", 0, "DISCLOSURE_TRI_RIGHT_VEC", ""},
	{841, "DISCLOSURE_TRI_DOWN_VEC", 0, "DISCLOSURE_TRI_DOWN_VEC", ""},
	{842, "MOVE_UP_VEC", 0, "MOVE_UP_VEC", ""},
	{843, "MOVE_DOWN_VEC", 0, "MOVE_DOWN_VEC", ""},
	{844, "X_VEC", 0, "X_VEC", ""},
	{845, "SMALL_TRI_RIGHT_VEC", 0, "SMALL_TRI_RIGHT_VEC", ""},
	{0, NULL, 0, NULL, NULL}
};

EnumPropertyRNA rna_UILayout_prop_icon = {
	{(PropertyRNA *)&rna_UILayout_prop_expand, (PropertyRNA *)&rna_UILayout_prop_translate,
	-1, "icon", 3, "Icon",
	"Override automatic icon of the item",
	0, "*",
	PROP_ENUM, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	NULL, NULL, NULL, NULL, NULL, NULL, rna_UILayout_prop_icon_items, 542, 0
};

BoolPropertyRNA rna_UILayout_prop_expand = {
	{(PropertyRNA *)&rna_UILayout_prop_slider, (PropertyRNA *)&rna_UILayout_prop_icon,
	-1, "expand", 3, "",
	"Expand button to show more detail",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_UILayout_prop_slider = {
	{(PropertyRNA *)&rna_UILayout_prop_toggle, (PropertyRNA *)&rna_UILayout_prop_expand,
	-1, "slider", 3, "",
	"Use slider widget for numeric values",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_UILayout_prop_toggle = {
	{(PropertyRNA *)&rna_UILayout_prop_icon_only, (PropertyRNA *)&rna_UILayout_prop_slider,
	-1, "toggle", 3, "",
	"Use toggle widget for boolean values",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_UILayout_prop_icon_only = {
	{(PropertyRNA *)&rna_UILayout_prop_event, (PropertyRNA *)&rna_UILayout_prop_toggle,
	-1, "icon_only", 3, "",
	"Draw only icons in buttons, no text",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_UILayout_prop_event = {
	{(PropertyRNA *)&rna_UILayout_prop_full_event, (PropertyRNA *)&rna_UILayout_prop_icon_only,
	-1, "event", 3, "",
	"Use button to input key events",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_UILayout_prop_full_event = {
	{(PropertyRNA *)&rna_UILayout_prop_emboss, (PropertyRNA *)&rna_UILayout_prop_event,
	-1, "full_event", 3, "",
	"Use button to input full events including modifiers",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_UILayout_prop_emboss = {
	{(PropertyRNA *)&rna_UILayout_prop_index, (PropertyRNA *)&rna_UILayout_prop_full_event,
	-1, "emboss", 3, "",
	"Draw the button itself, just the icon/text",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 1, NULL
};

IntPropertyRNA rna_UILayout_prop_index = {
	{(PropertyRNA *)&rna_UILayout_prop_icon_value, (PropertyRNA *)&rna_UILayout_prop_emboss,
	-1, "index", 3, "",
	"The index of this button, when set a single member of an array can be accessed, when set to -1 all array members are used",
	0, "*",
	PROP_INT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL,
	-2, INT_MAX, -2, INT_MAX, 1, -1, NULL
};

IntPropertyRNA rna_UILayout_prop_icon_value = {
	{NULL, (PropertyRNA *)&rna_UILayout_prop_index,
	-1, "icon_value", 3, "Icon Value",
	"Override automatic icon of the item (use it e.g. with custom material icons returned by icon()...)",
	0, "*",
	PROP_INT, PROP_UNSIGNED | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL,
	0, 10000, 0, INT_MAX, 1, 0, NULL
};

FunctionRNA rna_UILayout_prop_func = {
	{(FunctionRNA *)&rna_UILayout_props_enum_func, (FunctionRNA *)&rna_UILayout_enum_item_icon_func,
	NULL,
	{(PropertyRNA *)&rna_UILayout_prop_data, (PropertyRNA *)&rna_UILayout_prop_icon_value}},
	"prop", 0, "Item. Exposes an RNA item and places it into the layout",
	UILayout_prop_call,
	NULL
};

PointerPropertyRNA rna_UILayout_props_enum_data = {
	{(PropertyRNA *)&rna_UILayout_props_enum_property, NULL,
	-1, "data", 8652804, "",
	"Data from which to take property",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	NULL, NULL, NULL, NULL,&RNA_AnyType
};

StringPropertyRNA rna_UILayout_props_enum_property = {
	{NULL, (PropertyRNA *)&rna_UILayout_props_enum_data,
	-1, "property", 262149, "",
	"Identifier of property in data",
	0, "*",
	PROP_STRING, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	NULL, NULL, NULL, NULL, NULL, NULL, 0, ""
};

FunctionRNA rna_UILayout_props_enum_func = {
	{(FunctionRNA *)&rna_UILayout_prop_menu_enum_func, (FunctionRNA *)&rna_UILayout_prop_func,
	NULL,
	{(PropertyRNA *)&rna_UILayout_props_enum_data, (PropertyRNA *)&rna_UILayout_props_enum_property}},
	"props_enum", 0, "props_enum",
	UILayout_props_enum_call,
	NULL
};

PointerPropertyRNA rna_UILayout_prop_menu_enum_data = {
	{(PropertyRNA *)&rna_UILayout_prop_menu_enum_property, NULL,
	-1, "data", 8652804, "",
	"Data from which to take property",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	NULL, NULL, NULL, NULL,&RNA_AnyType
};

StringPropertyRNA rna_UILayout_prop_menu_enum_property = {
	{(PropertyRNA *)&rna_UILayout_prop_menu_enum_text, (PropertyRNA *)&rna_UILayout_prop_menu_enum_data,
	-1, "property", 262149, "",
	"Identifier of property in data",
	0, "*",
	PROP_STRING, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	NULL, NULL, NULL, NULL, NULL, NULL, 0, ""
};

StringPropertyRNA rna_UILayout_prop_menu_enum_text = {
	{(PropertyRNA *)&rna_UILayout_prop_menu_enum_text_ctxt, (PropertyRNA *)&rna_UILayout_prop_menu_enum_property,
	-1, "text", 262145, "",
	"Override automatic text of the item",
	0, "*",
	PROP_STRING, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	NULL, NULL, NULL, NULL, NULL, NULL, 0, ""
};

StringPropertyRNA rna_UILayout_prop_menu_enum_text_ctxt = {
	{(PropertyRNA *)&rna_UILayout_prop_menu_enum_translate, (PropertyRNA *)&rna_UILayout_prop_menu_enum_text,
	-1, "text_ctxt", 262145, "",
	"Override automatic translation context of the given text",
	0, "*",
	PROP_STRING, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	NULL, NULL, NULL, NULL, NULL, NULL, 0, ""
};

BoolPropertyRNA rna_UILayout_prop_menu_enum_translate = {
	{(PropertyRNA *)&rna_UILayout_prop_menu_enum_icon, (PropertyRNA *)&rna_UILayout_prop_menu_enum_text_ctxt,
	-1, "translate", 3, "",
	"Translate the given text, when UI translation is enabled",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 1, NULL
};

static EnumPropertyItem rna_UILayout_prop_menu_enum_icon_items[543] = {
	{0, "NONE", 0, "NONE", ""},
	{1, "QUESTION", 0, "QUESTION", ""},
	{2, "ERROR", 0, "ERROR", ""},
	{3, "CANCEL", 0, "CANCEL", ""},
	{4, "TRIA_RIGHT", 0, "TRIA_RIGHT", ""},
	{5, "TRIA_DOWN", 0, "TRIA_DOWN", ""},
	{6, "TRIA_LEFT", 0, "TRIA_LEFT", ""},
	{7, "TRIA_UP", 0, "TRIA_UP", ""},
	{8, "ARROW_LEFTRIGHT", 0, "ARROW_LEFTRIGHT", ""},
	{9, "PLUS", 0, "PLUS", ""},
	{10, "DISCLOSURE_TRI_DOWN", 0, "DISCLOSURE_TRI_DOWN", ""},
	{11, "DISCLOSURE_TRI_RIGHT", 0, "DISCLOSURE_TRI_RIGHT", ""},
	{12, "RADIOBUT_OFF", 0, "RADIOBUT_OFF", ""},
	{13, "RADIOBUT_ON", 0, "RADIOBUT_ON", ""},
	{14, "MENU_PANEL", 0, "MENU_PANEL", ""},
	{15, "BLENDER", 0, "BLENDER", ""},
	{16, "GRIP", 0, "GRIP", ""},
	{17, "DOT", 0, "DOT", ""},
	{18, "COLLAPSEMENU", 0, "COLLAPSEMENU", ""},
	{19, "X", 0, "X", ""},
	{21, "GO_LEFT", 0, "GO_LEFT", ""},
	{22, "PLUG", 0, "PLUG", ""},
	{23, "UI", 0, "UI", ""},
	{24, "NODE", 0, "NODE", ""},
	{25, "NODE_SEL", 0, "NODE_SEL", ""},
	{26, "FULLSCREEN", 0, "FULLSCREEN", ""},
	{27, "SPLITSCREEN", 0, "SPLITSCREEN", ""},
	{28, "RIGHTARROW_THIN", 0, "RIGHTARROW_THIN", ""},
	{29, "BORDERMOVE", 0, "BORDERMOVE", ""},
	{30, "VIEWZOOM", 0, "VIEWZOOM", ""},
	{31, "ZOOMIN", 0, "ZOOMIN", ""},
	{32, "ZOOMOUT", 0, "ZOOMOUT", ""},
	{33, "PANEL_CLOSE", 0, "PANEL_CLOSE", ""},
	{34, "COPY_ID", 0, "COPY_ID", ""},
	{35, "EYEDROPPER", 0, "EYEDROPPER", ""},
	{36, "LINK_AREA", 0, "LINK_AREA", ""},
	{37, "AUTO", 0, "AUTO", ""},
	{38, "CHECKBOX_DEHLT", 0, "CHECKBOX_DEHLT", ""},
	{39, "CHECKBOX_HLT", 0, "CHECKBOX_HLT", ""},
	{40, "UNLOCKED", 0, "UNLOCKED", ""},
	{41, "LOCKED", 0, "LOCKED", ""},
	{42, "UNPINNED", 0, "UNPINNED", ""},
	{43, "PINNED", 0, "PINNED", ""},
	{44, "SCREEN_BACK", 0, "SCREEN_BACK", ""},
	{45, "RIGHTARROW", 0, "RIGHTARROW", ""},
	{46, "DOWNARROW_HLT", 0, "DOWNARROW_HLT", ""},
	{47, "DOTSUP", 0, "DOTSUP", ""},
	{48, "DOTSDOWN", 0, "DOTSDOWN", ""},
	{49, "LINK", 0, "LINK", ""},
	{50, "INLINK", 0, "INLINK", ""},
	{51, "PLUGIN", 0, "PLUGIN", ""},
	{52, "HELP", 0, "HELP", ""},
	{53, "GHOST_ENABLED", 0, "GHOST_ENABLED", ""},
	{54, "COLOR", 0, "COLOR", ""},
	{55, "LINKED", 0, "LINKED", ""},
	{56, "UNLINKED", 0, "UNLINKED", ""},
	{57, "HAND", 0, "HAND", ""},
	{58, "ZOOM_ALL", 0, "ZOOM_ALL", ""},
	{59, "ZOOM_SELECTED", 0, "ZOOM_SELECTED", ""},
	{60, "ZOOM_PREVIOUS", 0, "ZOOM_PREVIOUS", ""},
	{61, "ZOOM_IN", 0, "ZOOM_IN", ""},
	{62, "ZOOM_OUT", 0, "ZOOM_OUT", ""},
	{63, "RENDER_REGION", 0, "RENDER_REGION", ""},
	{64, "BORDER_RECT", 0, "BORDER_RECT", ""},
	{65, "BORDER_LASSO", 0, "BORDER_LASSO", ""},
	{66, "FREEZE", 0, "FREEZE", ""},
	{67, "STYLUS_PRESSURE", 0, "STYLUS_PRESSURE", ""},
	{68, "GHOST_DISABLED", 0, "GHOST_DISABLED", ""},
	{69, "NEW", 0, "NEW", ""},
	{70, "FILE_TICK", 0, "FILE_TICK", ""},
	{71, "QUIT", 0, "QUIT", ""},
	{72, "URL", 0, "URL", ""},
	{73, "RECOVER_LAST", 0, "RECOVER_LAST", ""},
	{75, "FULLSCREEN_ENTER", 0, "FULLSCREEN_ENTER", ""},
	{76, "FULLSCREEN_EXIT", 0, "FULLSCREEN_EXIT", ""},
	{77, "BLANK1", 0, "BLANK1", ""},
	{78, "LAMP", 0, "LAMP", ""},
	{79, "MATERIAL", 0, "MATERIAL", ""},
	{80, "TEXTURE", 0, "TEXTURE", ""},
	{81, "ANIM", 0, "ANIM", ""},
	{82, "WORLD", 0, "WORLD", ""},
	{83, "SCENE", 0, "SCENE", ""},
	{84, "EDIT", 0, "EDIT", ""},
	{85, "GAME", 0, "GAME", ""},
	{86, "RADIO", 0, "RADIO", ""},
	{87, "SCRIPT", 0, "SCRIPT", ""},
	{88, "PARTICLES", 0, "PARTICLES", ""},
	{89, "PHYSICS", 0, "PHYSICS", ""},
	{90, "SPEAKER", 0, "SPEAKER", ""},
	{91, "TEXTURE_SHADED", 0, "TEXTURE_SHADED", ""},
	{104, "VIEW3D", 0, "VIEW3D", ""},
	{105, "IPO", 0, "IPO", ""},
	{106, "OOPS", 0, "OOPS", ""},
	{107, "BUTS", 0, "BUTS", ""},
	{108, "FILESEL", 0, "FILESEL", ""},
	{109, "IMAGE_COL", 0, "IMAGE_COL", ""},
	{110, "INFO", 0, "INFO", ""},
	{111, "SEQUENCE", 0, "SEQUENCE", ""},
	{112, "TEXT", 0, "TEXT", ""},
	{113, "IMASEL", 0, "IMASEL", ""},
	{114, "SOUND", 0, "SOUND", ""},
	{115, "ACTION", 0, "ACTION", ""},
	{116, "NLA", 0, "NLA", ""},
	{117, "SCRIPTWIN", 0, "SCRIPTWIN", ""},
	{118, "TIME", 0, "TIME", ""},
	{119, "NODETREE", 0, "NODETREE", ""},
	{120, "LOGIC", 0, "LOGIC", ""},
	{121, "CONSOLE", 0, "CONSOLE", ""},
	{122, "PREFERENCES", 0, "PREFERENCES", ""},
	{123, "CLIP", 0, "CLIP", ""},
	{124, "ASSET_MANAGER", 0, "ASSET_MANAGER", ""},
	{130, "OBJECT_DATAMODE", 0, "OBJECT_DATAMODE", ""},
	{131, "EDITMODE_HLT", 0, "EDITMODE_HLT", ""},
	{132, "FACESEL_HLT", 0, "FACESEL_HLT", ""},
	{133, "VPAINT_HLT", 0, "VPAINT_HLT", ""},
	{134, "TPAINT_HLT", 0, "TPAINT_HLT", ""},
	{135, "WPAINT_HLT", 0, "WPAINT_HLT", ""},
	{136, "SCULPTMODE_HLT", 0, "SCULPTMODE_HLT", ""},
	{137, "POSE_HLT", 0, "POSE_HLT", ""},
	{138, "PARTICLEMODE", 0, "PARTICLEMODE", ""},
	{139, "LIGHTPAINT", 0, "LIGHTPAINT", ""},
	{156, "SCENE_DATA", 0, "SCENE_DATA", ""},
	{157, "RENDERLAYERS", 0, "RENDERLAYERS", ""},
	{158, "WORLD_DATA", 0, "WORLD_DATA", ""},
	{159, "OBJECT_DATA", 0, "OBJECT_DATA", ""},
	{160, "MESH_DATA", 0, "MESH_DATA", ""},
	{161, "CURVE_DATA", 0, "CURVE_DATA", ""},
	{162, "META_DATA", 0, "META_DATA", ""},
	{163, "LATTICE_DATA", 0, "LATTICE_DATA", ""},
	{164, "LAMP_DATA", 0, "LAMP_DATA", ""},
	{165, "MATERIAL_DATA", 0, "MATERIAL_DATA", ""},
	{166, "TEXTURE_DATA", 0, "TEXTURE_DATA", ""},
	{167, "ANIM_DATA", 0, "ANIM_DATA", ""},
	{168, "CAMERA_DATA", 0, "CAMERA_DATA", ""},
	{169, "PARTICLE_DATA", 0, "PARTICLE_DATA", ""},
	{170, "LIBRARY_DATA_DIRECT", 0, "LIBRARY_DATA_DIRECT", ""},
	{171, "GROUP", 0, "GROUP", ""},
	{172, "ARMATURE_DATA", 0, "ARMATURE_DATA", ""},
	{173, "POSE_DATA", 0, "POSE_DATA", ""},
	{174, "BONE_DATA", 0, "BONE_DATA", ""},
	{175, "CONSTRAINT", 0, "CONSTRAINT", ""},
	{176, "SHAPEKEY_DATA", 0, "SHAPEKEY_DATA", ""},
	{177, "CONSTRAINT_BONE", 0, "CONSTRAINT_BONE", ""},
	{178, "CAMERA_STEREO", 0, "CAMERA_STEREO", ""},
	{179, "PACKAGE", 0, "PACKAGE", ""},
	{180, "UGLYPACKAGE", 0, "UGLYPACKAGE", ""},
	{182, "BRUSH_DATA", 0, "BRUSH_DATA", ""},
	{183, "IMAGE_DATA", 0, "IMAGE_DATA", ""},
	{184, "FILE", 0, "FILE", ""},
	{185, "FCURVE", 0, "FCURVE", ""},
	{186, "FONT_DATA", 0, "FONT_DATA", ""},
	{187, "RENDER_RESULT", 0, "RENDER_RESULT", ""},
	{188, "SURFACE_DATA", 0, "SURFACE_DATA", ""},
	{189, "EMPTY_DATA", 0, "EMPTY_DATA", ""},
	{190, "SETTINGS", 0, "SETTINGS", ""},
	{191, "RENDER_ANIMATION", 0, "RENDER_ANIMATION", ""},
	{192, "RENDER_STILL", 0, "RENDER_STILL", ""},
	{194, "BOIDS", 0, "BOIDS", ""},
	{195, "STRANDS", 0, "STRANDS", ""},
	{196, "LIBRARY_DATA_INDIRECT", 0, "LIBRARY_DATA_INDIRECT", ""},
	{197, "GREASEPENCIL", 0, "GREASEPENCIL", ""},
	{198, "LINE_DATA", 0, "LINE_DATA", ""},
	{200, "GROUP_BONE", 0, "GROUP_BONE", ""},
	{201, "GROUP_VERTEX", 0, "GROUP_VERTEX", ""},
	{202, "GROUP_VCOL", 0, "GROUP_VCOL", ""},
	{203, "GROUP_UVS", 0, "GROUP_UVS", ""},
	{206, "RNA", 0, "RNA", ""},
	{207, "RNA_ADD", 0, "RNA_ADD", ""},
	{234, "OUTLINER_OB_EMPTY", 0, "OUTLINER_OB_EMPTY", ""},
	{235, "OUTLINER_OB_MESH", 0, "OUTLINER_OB_MESH", ""},
	{236, "OUTLINER_OB_CURVE", 0, "OUTLINER_OB_CURVE", ""},
	{237, "OUTLINER_OB_LATTICE", 0, "OUTLINER_OB_LATTICE", ""},
	{238, "OUTLINER_OB_META", 0, "OUTLINER_OB_META", ""},
	{239, "OUTLINER_OB_LAMP", 0, "OUTLINER_OB_LAMP", ""},
	{240, "OUTLINER_OB_CAMERA", 0, "OUTLINER_OB_CAMERA", ""},
	{241, "OUTLINER_OB_ARMATURE", 0, "OUTLINER_OB_ARMATURE", ""},
	{242, "OUTLINER_OB_FONT", 0, "OUTLINER_OB_FONT", ""},
	{243, "OUTLINER_OB_SURFACE", 0, "OUTLINER_OB_SURFACE", ""},
	{244, "OUTLINER_OB_SPEAKER", 0, "OUTLINER_OB_SPEAKER", ""},
	{253, "RESTRICT_VIEW_OFF", 0, "RESTRICT_VIEW_OFF", ""},
	{254, "RESTRICT_VIEW_ON", 0, "RESTRICT_VIEW_ON", ""},
	{255, "RESTRICT_SELECT_OFF", 0, "RESTRICT_SELECT_OFF", ""},
	{256, "RESTRICT_SELECT_ON", 0, "RESTRICT_SELECT_ON", ""},
	{257, "RESTRICT_RENDER_OFF", 0, "RESTRICT_RENDER_OFF", ""},
	{258, "RESTRICT_RENDER_ON", 0, "RESTRICT_RENDER_ON", ""},
	{260, "OUTLINER_DATA_EMPTY", 0, "OUTLINER_DATA_EMPTY", ""},
	{261, "OUTLINER_DATA_MESH", 0, "OUTLINER_DATA_MESH", ""},
	{262, "OUTLINER_DATA_CURVE", 0, "OUTLINER_DATA_CURVE", ""},
	{263, "OUTLINER_DATA_LATTICE", 0, "OUTLINER_DATA_LATTICE", ""},
	{264, "OUTLINER_DATA_META", 0, "OUTLINER_DATA_META", ""},
	{265, "OUTLINER_DATA_LAMP", 0, "OUTLINER_DATA_LAMP", ""},
	{266, "OUTLINER_DATA_CAMERA", 0, "OUTLINER_DATA_CAMERA", ""},
	{267, "OUTLINER_DATA_ARMATURE", 0, "OUTLINER_DATA_ARMATURE", ""},
	{268, "OUTLINER_DATA_FONT", 0, "OUTLINER_DATA_FONT", ""},
	{269, "OUTLINER_DATA_SURFACE", 0, "OUTLINER_DATA_SURFACE", ""},
	{270, "OUTLINER_DATA_SPEAKER", 0, "OUTLINER_DATA_SPEAKER", ""},
	{271, "OUTLINER_DATA_POSE", 0, "OUTLINER_DATA_POSE", ""},
	{286, "MESH_PLANE", 0, "MESH_PLANE", ""},
	{287, "MESH_CUBE", 0, "MESH_CUBE", ""},
	{288, "MESH_CIRCLE", 0, "MESH_CIRCLE", ""},
	{289, "MESH_UVSPHERE", 0, "MESH_UVSPHERE", ""},
	{290, "MESH_ICOSPHERE", 0, "MESH_ICOSPHERE", ""},
	{291, "MESH_GRID", 0, "MESH_GRID", ""},
	{292, "MESH_MONKEY", 0, "MESH_MONKEY", ""},
	{293, "MESH_CYLINDER", 0, "MESH_CYLINDER", ""},
	{294, "MESH_TORUS", 0, "MESH_TORUS", ""},
	{295, "MESH_CONE", 0, "MESH_CONE", ""},
	{298, "LAMP_POINT", 0, "LAMP_POINT", ""},
	{299, "LAMP_SUN", 0, "LAMP_SUN", ""},
	{300, "LAMP_SPOT", 0, "LAMP_SPOT", ""},
	{301, "LAMP_HEMI", 0, "LAMP_HEMI", ""},
	{302, "LAMP_AREA", 0, "LAMP_AREA", ""},
	{305, "META_EMPTY", 0, "META_EMPTY", ""},
	{306, "META_PLANE", 0, "META_PLANE", ""},
	{307, "META_CUBE", 0, "META_CUBE", ""},
	{308, "META_BALL", 0, "META_BALL", ""},
	{309, "META_ELLIPSOID", 0, "META_ELLIPSOID", ""},
	{310, "META_CAPSULE", 0, "META_CAPSULE", ""},
	{312, "SURFACE_NCURVE", 0, "SURFACE_NCURVE", ""},
	{313, "SURFACE_NCIRCLE", 0, "SURFACE_NCIRCLE", ""},
	{314, "SURFACE_NSURFACE", 0, "SURFACE_NSURFACE", ""},
	{315, "SURFACE_NCYLINDER", 0, "SURFACE_NCYLINDER", ""},
	{316, "SURFACE_NSPHERE", 0, "SURFACE_NSPHERE", ""},
	{317, "SURFACE_NTORUS", 0, "SURFACE_NTORUS", ""},
	{321, "CURVE_BEZCURVE", 0, "CURVE_BEZCURVE", ""},
	{322, "CURVE_BEZCIRCLE", 0, "CURVE_BEZCIRCLE", ""},
	{323, "CURVE_NCURVE", 0, "CURVE_NCURVE", ""},
	{324, "CURVE_NCIRCLE", 0, "CURVE_NCIRCLE", ""},
	{325, "CURVE_PATH", 0, "CURVE_PATH", ""},
	{331, "COLOR_RED", 0, "COLOR_RED", ""},
	{332, "COLOR_GREEN", 0, "COLOR_GREEN", ""},
	{333, "COLOR_BLUE", 0, "COLOR_BLUE", ""},
	{334, "TRIA_RIGHT_BAR", 0, "TRIA_RIGHT_BAR", ""},
	{335, "TRIA_DOWN_BAR", 0, "TRIA_DOWN_BAR", ""},
	{336, "TRIA_LEFT_BAR", 0, "TRIA_LEFT_BAR", ""},
	{337, "TRIA_UP_BAR", 0, "TRIA_UP_BAR", ""},
	{338, "FORCE_FORCE", 0, "FORCE_FORCE", ""},
	{339, "FORCE_WIND", 0, "FORCE_WIND", ""},
	{340, "FORCE_VORTEX", 0, "FORCE_VORTEX", ""},
	{341, "FORCE_MAGNETIC", 0, "FORCE_MAGNETIC", ""},
	{342, "FORCE_HARMONIC", 0, "FORCE_HARMONIC", ""},
	{343, "FORCE_CHARGE", 0, "FORCE_CHARGE", ""},
	{344, "FORCE_LENNARDJONES", 0, "FORCE_LENNARDJONES", ""},
	{345, "FORCE_TEXTURE", 0, "FORCE_TEXTURE", ""},
	{346, "FORCE_CURVE", 0, "FORCE_CURVE", ""},
	{347, "FORCE_BOID", 0, "FORCE_BOID", ""},
	{348, "FORCE_TURBULENCE", 0, "FORCE_TURBULENCE", ""},
	{349, "FORCE_DRAG", 0, "FORCE_DRAG", ""},
	{350, "FORCE_SMOKEFLOW", 0, "FORCE_SMOKEFLOW", ""},
	{442, "MODIFIER", 0, "MODIFIER", ""},
	{443, "MOD_WAVE", 0, "MOD_WAVE", ""},
	{444, "MOD_BUILD", 0, "MOD_BUILD", ""},
	{445, "MOD_DECIM", 0, "MOD_DECIM", ""},
	{446, "MOD_MIRROR", 0, "MOD_MIRROR", ""},
	{447, "MOD_SOFT", 0, "MOD_SOFT", ""},
	{448, "MOD_SUBSURF", 0, "MOD_SUBSURF", ""},
	{449, "HOOK", 0, "HOOK", ""},
	{450, "MOD_PHYSICS", 0, "MOD_PHYSICS", ""},
	{451, "MOD_PARTICLES", 0, "MOD_PARTICLES", ""},
	{452, "MOD_BOOLEAN", 0, "MOD_BOOLEAN", ""},
	{453, "MOD_EDGESPLIT", 0, "MOD_EDGESPLIT", ""},
	{454, "MOD_ARRAY", 0, "MOD_ARRAY", ""},
	{455, "MOD_UVPROJECT", 0, "MOD_UVPROJECT", ""},
	{456, "MOD_DISPLACE", 0, "MOD_DISPLACE", ""},
	{457, "MOD_CURVE", 0, "MOD_CURVE", ""},
	{458, "MOD_LATTICE", 0, "MOD_LATTICE", ""},
	{459, "CONSTRAINT_DATA", 0, "CONSTRAINT_DATA", ""},
	{460, "MOD_ARMATURE", 0, "MOD_ARMATURE", ""},
	{461, "MOD_SHRINKWRAP", 0, "MOD_SHRINKWRAP", ""},
	{462, "MOD_CAST", 0, "MOD_CAST", ""},
	{463, "MOD_MESHDEFORM", 0, "MOD_MESHDEFORM", ""},
	{464, "MOD_BEVEL", 0, "MOD_BEVEL", ""},
	{465, "MOD_SMOOTH", 0, "MOD_SMOOTH", ""},
	{466, "MOD_SIMPLEDEFORM", 0, "MOD_SIMPLEDEFORM", ""},
	{467, "MOD_MASK", 0, "MOD_MASK", ""},
	{468, "MOD_CLOTH", 0, "MOD_CLOTH", ""},
	{469, "MOD_EXPLODE", 0, "MOD_EXPLODE", ""},
	{470, "MOD_FLUIDSIM", 0, "MOD_FLUIDSIM", ""},
	{471, "MOD_MULTIRES", 0, "MOD_MULTIRES", ""},
	{472, "MOD_SMOKE", 0, "MOD_SMOKE", ""},
	{473, "MOD_SOLIDIFY", 0, "MOD_SOLIDIFY", ""},
	{474, "MOD_SCREW", 0, "MOD_SCREW", ""},
	{475, "MOD_VERTEX_WEIGHT", 0, "MOD_VERTEX_WEIGHT", ""},
	{476, "MOD_DYNAMICPAINT", 0, "MOD_DYNAMICPAINT", ""},
	{477, "MOD_REMESH", 0, "MOD_REMESH", ""},
	{478, "MOD_OCEAN", 0, "MOD_OCEAN", ""},
	{479, "MOD_WARP", 0, "MOD_WARP", ""},
	{480, "MOD_SKIN", 0, "MOD_SKIN", ""},
	{481, "MOD_TRIANGULATE", 0, "MOD_TRIANGULATE", ""},
	{482, "MOD_WIREFRAME", 0, "MOD_WIREFRAME", ""},
	{494, "REC", 0, "REC", ""},
	{495, "PLAY", 0, "PLAY", ""},
	{496, "FF", 0, "FF", ""},
	{497, "REW", 0, "REW", ""},
	{498, "PAUSE", 0, "PAUSE", ""},
	{499, "PREV_KEYFRAME", 0, "PREV_KEYFRAME", ""},
	{500, "NEXT_KEYFRAME", 0, "NEXT_KEYFRAME", ""},
	{501, "PLAY_AUDIO", 0, "PLAY_AUDIO", ""},
	{502, "PLAY_REVERSE", 0, "PLAY_REVERSE", ""},
	{503, "PREVIEW_RANGE", 0, "PREVIEW_RANGE", ""},
	{504, "ACTION_TWEAK", 0, "ACTION_TWEAK", ""},
	{505, "PMARKER_ACT", 0, "PMARKER_ACT", ""},
	{506, "PMARKER_SEL", 0, "PMARKER_SEL", ""},
	{507, "PMARKER", 0, "PMARKER", ""},
	{508, "MARKER_HLT", 0, "MARKER_HLT", ""},
	{509, "MARKER", 0, "MARKER", ""},
	{510, "SPACE2", 0, "SPACE2", ""},
	{511, "SPACE3", 0, "SPACE3", ""},
	{512, "KEYINGSET", 0, "KEYINGSET", ""},
	{513, "KEY_DEHLT", 0, "KEY_DEHLT", ""},
	{514, "KEY_HLT", 0, "KEY_HLT", ""},
	{515, "MUTE_IPO_OFF", 0, "MUTE_IPO_OFF", ""},
	{516, "MUTE_IPO_ON", 0, "MUTE_IPO_ON", ""},
	{517, "VISIBLE_IPO_OFF", 0, "VISIBLE_IPO_OFF", ""},
	{518, "VISIBLE_IPO_ON", 0, "VISIBLE_IPO_ON", ""},
	{519, "DRIVER", 0, "DRIVER", ""},
	{520, "SOLO_OFF", 0, "SOLO_OFF", ""},
	{521, "SOLO_ON", 0, "SOLO_ON", ""},
	{522, "FRAME_PREV", 0, "FRAME_PREV", ""},
	{523, "FRAME_NEXT", 0, "FRAME_NEXT", ""},
	{524, "NLA_PUSHDOWN", 0, "NLA_PUSHDOWN", ""},
	{525, "IPO_CONSTANT", 0, "IPO_CONSTANT", ""},
	{526, "IPO_LINEAR", 0, "IPO_LINEAR", ""},
	{527, "IPO_BEZIER", 0, "IPO_BEZIER", ""},
	{528, "IPO_SINE", 0, "IPO_SINE", ""},
	{529, "IPO_QUAD", 0, "IPO_QUAD", ""},
	{530, "IPO_CUBIC", 0, "IPO_CUBIC", ""},
	{531, "IPO_QUART", 0, "IPO_QUART", ""},
	{532, "IPO_QUINT", 0, "IPO_QUINT", ""},
	{533, "IPO_EXPO", 0, "IPO_EXPO", ""},
	{534, "IPO_CIRC", 0, "IPO_CIRC", ""},
	{535, "IPO_BOUNCE", 0, "IPO_BOUNCE", ""},
	{536, "IPO_ELASTIC", 0, "IPO_ELASTIC", ""},
	{537, "IPO_BACK", 0, "IPO_BACK", ""},
	{538, "IPO_EASE_IN", 0, "IPO_EASE_IN", ""},
	{539, "IPO_EASE_OUT", 0, "IPO_EASE_OUT", ""},
	{540, "IPO_EASE_IN_OUT", 0, "IPO_EASE_IN_OUT", ""},
	{546, "VERTEXSEL", 0, "VERTEXSEL", ""},
	{547, "EDGESEL", 0, "EDGESEL", ""},
	{548, "FACESEL", 0, "FACESEL", ""},
	{549, "LOOPSEL", 0, "LOOPSEL", ""},
	{551, "ROTATE", 0, "ROTATE", ""},
	{552, "CURSOR", 0, "CURSOR", ""},
	{553, "ROTATECOLLECTION", 0, "ROTATECOLLECTION", ""},
	{554, "ROTATECENTER", 0, "ROTATECENTER", ""},
	{555, "ROTACTIVE", 0, "ROTACTIVE", ""},
	{556, "ALIGN", 0, "ALIGN", ""},
	{558, "SMOOTHCURVE", 0, "SMOOTHCURVE", ""},
	{559, "SPHERECURVE", 0, "SPHERECURVE", ""},
	{560, "ROOTCURVE", 0, "ROOTCURVE", ""},
	{561, "SHARPCURVE", 0, "SHARPCURVE", ""},
	{562, "LINCURVE", 0, "LINCURVE", ""},
	{563, "NOCURVE", 0, "NOCURVE", ""},
	{564, "RNDCURVE", 0, "RNDCURVE", ""},
	{565, "PROP_OFF", 0, "PROP_OFF", ""},
	{566, "PROP_ON", 0, "PROP_ON", ""},
	{567, "PROP_CON", 0, "PROP_CON", ""},
	{568, "SCULPT_DYNTOPO", 0, "SCULPT_DYNTOPO", ""},
	{569, "PARTICLE_POINT", 0, "PARTICLE_POINT", ""},
	{570, "PARTICLE_TIP", 0, "PARTICLE_TIP", ""},
	{571, "PARTICLE_PATH", 0, "PARTICLE_PATH", ""},
	{572, "MAN_TRANS", 0, "MAN_TRANS", ""},
	{573, "MAN_ROT", 0, "MAN_ROT", ""},
	{574, "MAN_SCALE", 0, "MAN_SCALE", ""},
	{575, "MANIPUL", 0, "MANIPUL", ""},
	{576, "SNAP_OFF", 0, "SNAP_OFF", ""},
	{577, "SNAP_ON", 0, "SNAP_ON", ""},
	{578, "SNAP_NORMAL", 0, "SNAP_NORMAL", ""},
	{579, "SNAP_INCREMENT", 0, "SNAP_INCREMENT", ""},
	{580, "SNAP_VERTEX", 0, "SNAP_VERTEX", ""},
	{581, "SNAP_EDGE", 0, "SNAP_EDGE", ""},
	{582, "SNAP_FACE", 0, "SNAP_FACE", ""},
	{583, "SNAP_VOLUME", 0, "SNAP_VOLUME", ""},
	{585, "STICKY_UVS_LOC", 0, "STICKY_UVS_LOC", ""},
	{586, "STICKY_UVS_DISABLE", 0, "STICKY_UVS_DISABLE", ""},
	{587, "STICKY_UVS_VERT", 0, "STICKY_UVS_VERT", ""},
	{588, "CLIPUV_DEHLT", 0, "CLIPUV_DEHLT", ""},
	{589, "CLIPUV_HLT", 0, "CLIPUV_HLT", ""},
	{590, "SNAP_PEEL_OBJECT", 0, "SNAP_PEEL_OBJECT", ""},
	{591, "GRID", 0, "GRID", ""},
	{598, "PASTEDOWN", 0, "PASTEDOWN", ""},
	{599, "COPYDOWN", 0, "COPYDOWN", ""},
	{600, "PASTEFLIPUP", 0, "PASTEFLIPUP", ""},
	{601, "PASTEFLIPDOWN", 0, "PASTEFLIPDOWN", ""},
	{606, "SNAP_SURFACE", 0, "SNAP_SURFACE", ""},
	{607, "AUTOMERGE_ON", 0, "AUTOMERGE_ON", ""},
	{608, "AUTOMERGE_OFF", 0, "AUTOMERGE_OFF", ""},
	{609, "RETOPO", 0, "RETOPO", ""},
	{610, "UV_VERTEXSEL", 0, "UV_VERTEXSEL", ""},
	{611, "UV_EDGESEL", 0, "UV_EDGESEL", ""},
	{612, "UV_FACESEL", 0, "UV_FACESEL", ""},
	{613, "UV_ISLANDSEL", 0, "UV_ISLANDSEL", ""},
	{614, "UV_SYNC_SELECT", 0, "UV_SYNC_SELECT", ""},
	{624, "BBOX", 0, "BBOX", ""},
	{625, "WIRE", 0, "WIRE", ""},
	{626, "SOLID", 0, "SOLID", ""},
	{627, "SMOOTH", 0, "SMOOTH", ""},
	{628, "POTATO", 0, "POTATO", ""},
	{630, "ORTHO", 0, "ORTHO", ""},
	{633, "LOCKVIEW_OFF", 0, "LOCKVIEW_OFF", ""},
	{634, "LOCKVIEW_ON", 0, "LOCKVIEW_ON", ""},
	{636, "AXIS_SIDE", 0, "AXIS_SIDE", ""},
	{637, "AXIS_FRONT", 0, "AXIS_FRONT", ""},
	{638, "AXIS_TOP", 0, "AXIS_TOP", ""},
	{639, "NDOF_DOM", 0, "NDOF_DOM", ""},
	{640, "NDOF_TURN", 0, "NDOF_TURN", ""},
	{641, "NDOF_FLY", 0, "NDOF_FLY", ""},
	{642, "NDOF_TRANS", 0, "NDOF_TRANS", ""},
	{643, "LAYER_USED", 0, "LAYER_USED", ""},
	{644, "LAYER_ACTIVE", 0, "LAYER_ACTIVE", ""},
	{676, "SORTALPHA", 0, "SORTALPHA", ""},
	{677, "SORTBYEXT", 0, "SORTBYEXT", ""},
	{678, "SORTTIME", 0, "SORTTIME", ""},
	{679, "SORTSIZE", 0, "SORTSIZE", ""},
	{680, "LONGDISPLAY", 0, "LONGDISPLAY", ""},
	{681, "SHORTDISPLAY", 0, "SHORTDISPLAY", ""},
	{682, "GHOST", 0, "GHOST", ""},
	{683, "IMGDISPLAY", 0, "IMGDISPLAY", ""},
	{684, "SAVE_AS", 0, "SAVE_AS", ""},
	{685, "SAVE_COPY", 0, "SAVE_COPY", ""},
	{686, "BOOKMARKS", 0, "BOOKMARKS", ""},
	{687, "FONTPREVIEW", 0, "FONTPREVIEW", ""},
	{688, "FILTER", 0, "FILTER", ""},
	{689, "NEWFOLDER", 0, "NEWFOLDER", ""},
	{690, "OPEN_RECENT", 0, "OPEN_RECENT", ""},
	{691, "FILE_PARENT", 0, "FILE_PARENT", ""},
	{692, "FILE_REFRESH", 0, "FILE_REFRESH", ""},
	{693, "FILE_FOLDER", 0, "FILE_FOLDER", ""},
	{694, "FILE_BLANK", 0, "FILE_BLANK", ""},
	{695, "FILE_BLEND", 0, "FILE_BLEND", ""},
	{696, "FILE_IMAGE", 0, "FILE_IMAGE", ""},
	{697, "FILE_MOVIE", 0, "FILE_MOVIE", ""},
	{698, "FILE_SCRIPT", 0, "FILE_SCRIPT", ""},
	{699, "FILE_SOUND", 0, "FILE_SOUND", ""},
	{700, "FILE_FONT", 0, "FILE_FONT", ""},
	{701, "FILE_TEXT", 0, "FILE_TEXT", ""},
	{702, "RECOVER_AUTO", 0, "RECOVER_AUTO", ""},
	{703, "SAVE_PREFS", 0, "SAVE_PREFS", ""},
	{704, "LINK_BLEND", 0, "LINK_BLEND", ""},
	{705, "APPEND_BLEND", 0, "APPEND_BLEND", ""},
	{706, "IMPORT", 0, "IMPORT", ""},
	{707, "EXPORT", 0, "EXPORT", ""},
	{708, "EXTERNAL_DATA", 0, "EXTERNAL_DATA", ""},
	{709, "LOAD_FACTORY", 0, "LOAD_FACTORY", ""},
	{715, "LOOP_BACK", 0, "LOOP_BACK", ""},
	{716, "LOOP_FORWARDS", 0, "LOOP_FORWARDS", ""},
	{717, "BACK", 0, "BACK", ""},
	{718, "FORWARD", 0, "FORWARD", ""},
	{726, "FILE_BACKUP", 0, "FILE_BACKUP", ""},
	{727, "DISK_DRIVE", 0, "DISK_DRIVE", ""},
	{728, "MATPLANE", 0, "MATPLANE", ""},
	{729, "MATSPHERE", 0, "MATSPHERE", ""},
	{730, "MATCUBE", 0, "MATCUBE", ""},
	{731, "MONKEY", 0, "MONKEY", ""},
	{732, "HAIR", 0, "HAIR", ""},
	{733, "ALIASED", 0, "ALIASED", ""},
	{734, "ANTIALIASED", 0, "ANTIALIASED", ""},
	{735, "MAT_SPHERE_SKY", 0, "MAT_SPHERE_SKY", ""},
	{740, "WORDWRAP_OFF", 0, "WORDWRAP_OFF", ""},
	{741, "WORDWRAP_ON", 0, "WORDWRAP_ON", ""},
	{742, "SYNTAX_OFF", 0, "SYNTAX_OFF", ""},
	{743, "SYNTAX_ON", 0, "SYNTAX_ON", ""},
	{744, "LINENUMBERS_OFF", 0, "LINENUMBERS_OFF", ""},
	{745, "LINENUMBERS_ON", 0, "LINENUMBERS_ON", ""},
	{746, "SCRIPTPLUGINS", 0, "SCRIPTPLUGINS", ""},
	{754, "SEQ_SEQUENCER", 0, "SEQ_SEQUENCER", ""},
	{755, "SEQ_PREVIEW", 0, "SEQ_PREVIEW", ""},
	{756, "SEQ_LUMA_WAVEFORM", 0, "SEQ_LUMA_WAVEFORM", ""},
	{757, "SEQ_CHROMA_SCOPE", 0, "SEQ_CHROMA_SCOPE", ""},
	{758, "SEQ_HISTOGRAM", 0, "SEQ_HISTOGRAM", ""},
	{759, "SEQ_SPLITVIEW", 0, "SEQ_SPLITVIEW", ""},
	{763, "IMAGE_RGB", 0, "IMAGE_RGB", ""},
	{764, "IMAGE_RGB_ALPHA", 0, "IMAGE_RGB_ALPHA", ""},
	{765, "IMAGE_ALPHA", 0, "IMAGE_ALPHA", ""},
	{766, "IMAGE_ZDEPTH", 0, "IMAGE_ZDEPTH", ""},
	{767, "IMAGEFILE", 0, "IMAGEFILE", ""},
	{780, "BRUSH_ADD", 0, "BRUSH_ADD", ""},
	{781, "BRUSH_BLOB", 0, "BRUSH_BLOB", ""},
	{782, "BRUSH_BLUR", 0, "BRUSH_BLUR", ""},
	{783, "BRUSH_CLAY", 0, "BRUSH_CLAY", ""},
	{784, "BRUSH_CLAY_STRIPS", 0, "BRUSH_CLAY_STRIPS", ""},
	{785, "BRUSH_CLONE", 0, "BRUSH_CLONE", ""},
	{786, "BRUSH_CREASE", 0, "BRUSH_CREASE", ""},
	{787, "BRUSH_DARKEN", 0, "BRUSH_DARKEN", ""},
	{788, "BRUSH_FILL", 0, "BRUSH_FILL", ""},
	{789, "BRUSH_FLATTEN", 0, "BRUSH_FLATTEN", ""},
	{790, "BRUSH_GRAB", 0, "BRUSH_GRAB", ""},
	{791, "BRUSH_INFLATE", 0, "BRUSH_INFLATE", ""},
	{792, "BRUSH_LAYER", 0, "BRUSH_LAYER", ""},
	{793, "BRUSH_LIGHTEN", 0, "BRUSH_LIGHTEN", ""},
	{794, "BRUSH_MASK", 0, "BRUSH_MASK", ""},
	{795, "BRUSH_MIX", 0, "BRUSH_MIX", ""},
	{796, "BRUSH_MULTIPLY", 0, "BRUSH_MULTIPLY", ""},
	{797, "BRUSH_NUDGE", 0, "BRUSH_NUDGE", ""},
	{798, "BRUSH_PINCH", 0, "BRUSH_PINCH", ""},
	{799, "BRUSH_SCRAPE", 0, "BRUSH_SCRAPE", ""},
	{800, "BRUSH_SCULPT_DRAW", 0, "BRUSH_SCULPT_DRAW", ""},
	{801, "BRUSH_SMEAR", 0, "BRUSH_SMEAR", ""},
	{802, "BRUSH_SMOOTH", 0, "BRUSH_SMOOTH", ""},
	{803, "BRUSH_SNAKE_HOOK", 0, "BRUSH_SNAKE_HOOK", ""},
	{804, "BRUSH_SOFTEN", 0, "BRUSH_SOFTEN", ""},
	{805, "BRUSH_SUBTRACT", 0, "BRUSH_SUBTRACT", ""},
	{806, "BRUSH_TEXDRAW", 0, "BRUSH_TEXDRAW", ""},
	{807, "BRUSH_TEXFILL", 0, "BRUSH_TEXFILL", ""},
	{808, "BRUSH_TEXMASK", 0, "BRUSH_TEXMASK", ""},
	{809, "BRUSH_THUMB", 0, "BRUSH_THUMB", ""},
	{810, "BRUSH_ROTATE", 0, "BRUSH_ROTATE", ""},
	{811, "BRUSH_VERTEXDRAW", 0, "BRUSH_VERTEXDRAW", ""},
	{812, "MATCAP_01", 0, "MATCAP_01", ""},
	{813, "MATCAP_02", 0, "MATCAP_02", ""},
	{814, "MATCAP_03", 0, "MATCAP_03", ""},
	{815, "MATCAP_04", 0, "MATCAP_04", ""},
	{816, "MATCAP_05", 0, "MATCAP_05", ""},
	{817, "MATCAP_06", 0, "MATCAP_06", ""},
	{818, "MATCAP_07", 0, "MATCAP_07", ""},
	{819, "MATCAP_08", 0, "MATCAP_08", ""},
	{820, "MATCAP_09", 0, "MATCAP_09", ""},
	{821, "MATCAP_10", 0, "MATCAP_10", ""},
	{822, "MATCAP_11", 0, "MATCAP_11", ""},
	{823, "MATCAP_12", 0, "MATCAP_12", ""},
	{824, "MATCAP_13", 0, "MATCAP_13", ""},
	{825, "MATCAP_14", 0, "MATCAP_14", ""},
	{826, "MATCAP_15", 0, "MATCAP_15", ""},
	{827, "MATCAP_16", 0, "MATCAP_16", ""},
	{828, "MATCAP_17", 0, "MATCAP_17", ""},
	{829, "MATCAP_18", 0, "MATCAP_18", ""},
	{830, "MATCAP_19", 0, "MATCAP_19", ""},
	{831, "MATCAP_20", 0, "MATCAP_20", ""},
	{832, "MATCAP_21", 0, "MATCAP_21", ""},
	{833, "MATCAP_22", 0, "MATCAP_22", ""},
	{834, "MATCAP_23", 0, "MATCAP_23", ""},
	{835, "MATCAP_24", 0, "MATCAP_24", ""},
	{836, "VIEW3D_VEC", 0, "VIEW3D_VEC", ""},
	{837, "EDIT_VEC", 0, "EDIT_VEC", ""},
	{838, "EDITMODE_VEC_DEHLT", 0, "EDITMODE_VEC_DEHLT", ""},
	{839, "EDITMODE_VEC_HLT", 0, "EDITMODE_VEC_HLT", ""},
	{840, "DISCLOSURE_TRI_RIGHT_VEC", 0, "DISCLOSURE_TRI_RIGHT_VEC", ""},
	{841, "DISCLOSURE_TRI_DOWN_VEC", 0, "DISCLOSURE_TRI_DOWN_VEC", ""},
	{842, "MOVE_UP_VEC", 0, "MOVE_UP_VEC", ""},
	{843, "MOVE_DOWN_VEC", 0, "MOVE_DOWN_VEC", ""},
	{844, "X_VEC", 0, "X_VEC", ""},
	{845, "SMALL_TRI_RIGHT_VEC", 0, "SMALL_TRI_RIGHT_VEC", ""},
	{0, NULL, 0, NULL, NULL}
};

EnumPropertyRNA rna_UILayout_prop_menu_enum_icon = {
	{NULL, (PropertyRNA *)&rna_UILayout_prop_menu_enum_translate,
	-1, "icon", 3, "Icon",
	"Override automatic icon of the item",
	0, "*",
	PROP_ENUM, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	NULL, NULL, NULL, NULL, NULL, NULL, rna_UILayout_prop_menu_enum_icon_items, 542, 0
};

FunctionRNA rna_UILayout_prop_menu_enum_func = {
	{(FunctionRNA *)&rna_UILayout_prop_enum_func, (FunctionRNA *)&rna_UILayout_props_enum_func,
	NULL,
	{(PropertyRNA *)&rna_UILayout_prop_menu_enum_data, (PropertyRNA *)&rna_UILayout_prop_menu_enum_icon}},
	"prop_menu_enum", 0, "prop_menu_enum",
	UILayout_prop_menu_enum_call,
	NULL
};

PointerPropertyRNA rna_UILayout_prop_enum_data = {
	{(PropertyRNA *)&rna_UILayout_prop_enum_property, NULL,
	-1, "data", 8652804, "",
	"Data from which to take property",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	NULL, NULL, NULL, NULL,&RNA_AnyType
};

StringPropertyRNA rna_UILayout_prop_enum_property = {
	{(PropertyRNA *)&rna_UILayout_prop_enum_value, (PropertyRNA *)&rna_UILayout_prop_enum_data,
	-1, "property", 262149, "",
	"Identifier of property in data",
	0, "*",
	PROP_STRING, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	NULL, NULL, NULL, NULL, NULL, NULL, 0, ""
};

StringPropertyRNA rna_UILayout_prop_enum_value = {
	{(PropertyRNA *)&rna_UILayout_prop_enum_text, (PropertyRNA *)&rna_UILayout_prop_enum_property,
	-1, "value", 262149, "",
	"Enum property value",
	0, "*",
	PROP_STRING, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	NULL, NULL, NULL, NULL, NULL, NULL, 0, ""
};

StringPropertyRNA rna_UILayout_prop_enum_text = {
	{(PropertyRNA *)&rna_UILayout_prop_enum_text_ctxt, (PropertyRNA *)&rna_UILayout_prop_enum_value,
	-1, "text", 262145, "",
	"Override automatic text of the item",
	0, "*",
	PROP_STRING, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	NULL, NULL, NULL, NULL, NULL, NULL, 0, ""
};

StringPropertyRNA rna_UILayout_prop_enum_text_ctxt = {
	{(PropertyRNA *)&rna_UILayout_prop_enum_translate, (PropertyRNA *)&rna_UILayout_prop_enum_text,
	-1, "text_ctxt", 262145, "",
	"Override automatic translation context of the given text",
	0, "*",
	PROP_STRING, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	NULL, NULL, NULL, NULL, NULL, NULL, 0, ""
};

BoolPropertyRNA rna_UILayout_prop_enum_translate = {
	{(PropertyRNA *)&rna_UILayout_prop_enum_icon, (PropertyRNA *)&rna_UILayout_prop_enum_text_ctxt,
	-1, "translate", 3, "",
	"Translate the given text, when UI translation is enabled",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 1, NULL
};

static EnumPropertyItem rna_UILayout_prop_enum_icon_items[543] = {
	{0, "NONE", 0, "NONE", ""},
	{1, "QUESTION", 0, "QUESTION", ""},
	{2, "ERROR", 0, "ERROR", ""},
	{3, "CANCEL", 0, "CANCEL", ""},
	{4, "TRIA_RIGHT", 0, "TRIA_RIGHT", ""},
	{5, "TRIA_DOWN", 0, "TRIA_DOWN", ""},
	{6, "TRIA_LEFT", 0, "TRIA_LEFT", ""},
	{7, "TRIA_UP", 0, "TRIA_UP", ""},
	{8, "ARROW_LEFTRIGHT", 0, "ARROW_LEFTRIGHT", ""},
	{9, "PLUS", 0, "PLUS", ""},
	{10, "DISCLOSURE_TRI_DOWN", 0, "DISCLOSURE_TRI_DOWN", ""},
	{11, "DISCLOSURE_TRI_RIGHT", 0, "DISCLOSURE_TRI_RIGHT", ""},
	{12, "RADIOBUT_OFF", 0, "RADIOBUT_OFF", ""},
	{13, "RADIOBUT_ON", 0, "RADIOBUT_ON", ""},
	{14, "MENU_PANEL", 0, "MENU_PANEL", ""},
	{15, "BLENDER", 0, "BLENDER", ""},
	{16, "GRIP", 0, "GRIP", ""},
	{17, "DOT", 0, "DOT", ""},
	{18, "COLLAPSEMENU", 0, "COLLAPSEMENU", ""},
	{19, "X", 0, "X", ""},
	{21, "GO_LEFT", 0, "GO_LEFT", ""},
	{22, "PLUG", 0, "PLUG", ""},
	{23, "UI", 0, "UI", ""},
	{24, "NODE", 0, "NODE", ""},
	{25, "NODE_SEL", 0, "NODE_SEL", ""},
	{26, "FULLSCREEN", 0, "FULLSCREEN", ""},
	{27, "SPLITSCREEN", 0, "SPLITSCREEN", ""},
	{28, "RIGHTARROW_THIN", 0, "RIGHTARROW_THIN", ""},
	{29, "BORDERMOVE", 0, "BORDERMOVE", ""},
	{30, "VIEWZOOM", 0, "VIEWZOOM", ""},
	{31, "ZOOMIN", 0, "ZOOMIN", ""},
	{32, "ZOOMOUT", 0, "ZOOMOUT", ""},
	{33, "PANEL_CLOSE", 0, "PANEL_CLOSE", ""},
	{34, "COPY_ID", 0, "COPY_ID", ""},
	{35, "EYEDROPPER", 0, "EYEDROPPER", ""},
	{36, "LINK_AREA", 0, "LINK_AREA", ""},
	{37, "AUTO", 0, "AUTO", ""},
	{38, "CHECKBOX_DEHLT", 0, "CHECKBOX_DEHLT", ""},
	{39, "CHECKBOX_HLT", 0, "CHECKBOX_HLT", ""},
	{40, "UNLOCKED", 0, "UNLOCKED", ""},
	{41, "LOCKED", 0, "LOCKED", ""},
	{42, "UNPINNED", 0, "UNPINNED", ""},
	{43, "PINNED", 0, "PINNED", ""},
	{44, "SCREEN_BACK", 0, "SCREEN_BACK", ""},
	{45, "RIGHTARROW", 0, "RIGHTARROW", ""},
	{46, "DOWNARROW_HLT", 0, "DOWNARROW_HLT", ""},
	{47, "DOTSUP", 0, "DOTSUP", ""},
	{48, "DOTSDOWN", 0, "DOTSDOWN", ""},
	{49, "LINK", 0, "LINK", ""},
	{50, "INLINK", 0, "INLINK", ""},
	{51, "PLUGIN", 0, "PLUGIN", ""},
	{52, "HELP", 0, "HELP", ""},
	{53, "GHOST_ENABLED", 0, "GHOST_ENABLED", ""},
	{54, "COLOR", 0, "COLOR", ""},
	{55, "LINKED", 0, "LINKED", ""},
	{56, "UNLINKED", 0, "UNLINKED", ""},
	{57, "HAND", 0, "HAND", ""},
	{58, "ZOOM_ALL", 0, "ZOOM_ALL", ""},
	{59, "ZOOM_SELECTED", 0, "ZOOM_SELECTED", ""},
	{60, "ZOOM_PREVIOUS", 0, "ZOOM_PREVIOUS", ""},
	{61, "ZOOM_IN", 0, "ZOOM_IN", ""},
	{62, "ZOOM_OUT", 0, "ZOOM_OUT", ""},
	{63, "RENDER_REGION", 0, "RENDER_REGION", ""},
	{64, "BORDER_RECT", 0, "BORDER_RECT", ""},
	{65, "BORDER_LASSO", 0, "BORDER_LASSO", ""},
	{66, "FREEZE", 0, "FREEZE", ""},
	{67, "STYLUS_PRESSURE", 0, "STYLUS_PRESSURE", ""},
	{68, "GHOST_DISABLED", 0, "GHOST_DISABLED", ""},
	{69, "NEW", 0, "NEW", ""},
	{70, "FILE_TICK", 0, "FILE_TICK", ""},
	{71, "QUIT", 0, "QUIT", ""},
	{72, "URL", 0, "URL", ""},
	{73, "RECOVER_LAST", 0, "RECOVER_LAST", ""},
	{75, "FULLSCREEN_ENTER", 0, "FULLSCREEN_ENTER", ""},
	{76, "FULLSCREEN_EXIT", 0, "FULLSCREEN_EXIT", ""},
	{77, "BLANK1", 0, "BLANK1", ""},
	{78, "LAMP", 0, "LAMP", ""},
	{79, "MATERIAL", 0, "MATERIAL", ""},
	{80, "TEXTURE", 0, "TEXTURE", ""},
	{81, "ANIM", 0, "ANIM", ""},
	{82, "WORLD", 0, "WORLD", ""},
	{83, "SCENE", 0, "SCENE", ""},
	{84, "EDIT", 0, "EDIT", ""},
	{85, "GAME", 0, "GAME", ""},
	{86, "RADIO", 0, "RADIO", ""},
	{87, "SCRIPT", 0, "SCRIPT", ""},
	{88, "PARTICLES", 0, "PARTICLES", ""},
	{89, "PHYSICS", 0, "PHYSICS", ""},
	{90, "SPEAKER", 0, "SPEAKER", ""},
	{91, "TEXTURE_SHADED", 0, "TEXTURE_SHADED", ""},
	{104, "VIEW3D", 0, "VIEW3D", ""},
	{105, "IPO", 0, "IPO", ""},
	{106, "OOPS", 0, "OOPS", ""},
	{107, "BUTS", 0, "BUTS", ""},
	{108, "FILESEL", 0, "FILESEL", ""},
	{109, "IMAGE_COL", 0, "IMAGE_COL", ""},
	{110, "INFO", 0, "INFO", ""},
	{111, "SEQUENCE", 0, "SEQUENCE", ""},
	{112, "TEXT", 0, "TEXT", ""},
	{113, "IMASEL", 0, "IMASEL", ""},
	{114, "SOUND", 0, "SOUND", ""},
	{115, "ACTION", 0, "ACTION", ""},
	{116, "NLA", 0, "NLA", ""},
	{117, "SCRIPTWIN", 0, "SCRIPTWIN", ""},
	{118, "TIME", 0, "TIME", ""},
	{119, "NODETREE", 0, "NODETREE", ""},
	{120, "LOGIC", 0, "LOGIC", ""},
	{121, "CONSOLE", 0, "CONSOLE", ""},
	{122, "PREFERENCES", 0, "PREFERENCES", ""},
	{123, "CLIP", 0, "CLIP", ""},
	{124, "ASSET_MANAGER", 0, "ASSET_MANAGER", ""},
	{130, "OBJECT_DATAMODE", 0, "OBJECT_DATAMODE", ""},
	{131, "EDITMODE_HLT", 0, "EDITMODE_HLT", ""},
	{132, "FACESEL_HLT", 0, "FACESEL_HLT", ""},
	{133, "VPAINT_HLT", 0, "VPAINT_HLT", ""},
	{134, "TPAINT_HLT", 0, "TPAINT_HLT", ""},
	{135, "WPAINT_HLT", 0, "WPAINT_HLT", ""},
	{136, "SCULPTMODE_HLT", 0, "SCULPTMODE_HLT", ""},
	{137, "POSE_HLT", 0, "POSE_HLT", ""},
	{138, "PARTICLEMODE", 0, "PARTICLEMODE", ""},
	{139, "LIGHTPAINT", 0, "LIGHTPAINT", ""},
	{156, "SCENE_DATA", 0, "SCENE_DATA", ""},
	{157, "RENDERLAYERS", 0, "RENDERLAYERS", ""},
	{158, "WORLD_DATA", 0, "WORLD_DATA", ""},
	{159, "OBJECT_DATA", 0, "OBJECT_DATA", ""},
	{160, "MESH_DATA", 0, "MESH_DATA", ""},
	{161, "CURVE_DATA", 0, "CURVE_DATA", ""},
	{162, "META_DATA", 0, "META_DATA", ""},
	{163, "LATTICE_DATA", 0, "LATTICE_DATA", ""},
	{164, "LAMP_DATA", 0, "LAMP_DATA", ""},
	{165, "MATERIAL_DATA", 0, "MATERIAL_DATA", ""},
	{166, "TEXTURE_DATA", 0, "TEXTURE_DATA", ""},
	{167, "ANIM_DATA", 0, "ANIM_DATA", ""},
	{168, "CAMERA_DATA", 0, "CAMERA_DATA", ""},
	{169, "PARTICLE_DATA", 0, "PARTICLE_DATA", ""},
	{170, "LIBRARY_DATA_DIRECT", 0, "LIBRARY_DATA_DIRECT", ""},
	{171, "GROUP", 0, "GROUP", ""},
	{172, "ARMATURE_DATA", 0, "ARMATURE_DATA", ""},
	{173, "POSE_DATA", 0, "POSE_DATA", ""},
	{174, "BONE_DATA", 0, "BONE_DATA", ""},
	{175, "CONSTRAINT", 0, "CONSTRAINT", ""},
	{176, "SHAPEKEY_DATA", 0, "SHAPEKEY_DATA", ""},
	{177, "CONSTRAINT_BONE", 0, "CONSTRAINT_BONE", ""},
	{178, "CAMERA_STEREO", 0, "CAMERA_STEREO", ""},
	{179, "PACKAGE", 0, "PACKAGE", ""},
	{180, "UGLYPACKAGE", 0, "UGLYPACKAGE", ""},
	{182, "BRUSH_DATA", 0, "BRUSH_DATA", ""},
	{183, "IMAGE_DATA", 0, "IMAGE_DATA", ""},
	{184, "FILE", 0, "FILE", ""},
	{185, "FCURVE", 0, "FCURVE", ""},
	{186, "FONT_DATA", 0, "FONT_DATA", ""},
	{187, "RENDER_RESULT", 0, "RENDER_RESULT", ""},
	{188, "SURFACE_DATA", 0, "SURFACE_DATA", ""},
	{189, "EMPTY_DATA", 0, "EMPTY_DATA", ""},
	{190, "SETTINGS", 0, "SETTINGS", ""},
	{191, "RENDER_ANIMATION", 0, "RENDER_ANIMATION", ""},
	{192, "RENDER_STILL", 0, "RENDER_STILL", ""},
	{194, "BOIDS", 0, "BOIDS", ""},
	{195, "STRANDS", 0, "STRANDS", ""},
	{196, "LIBRARY_DATA_INDIRECT", 0, "LIBRARY_DATA_INDIRECT", ""},
	{197, "GREASEPENCIL", 0, "GREASEPENCIL", ""},
	{198, "LINE_DATA", 0, "LINE_DATA", ""},
	{200, "GROUP_BONE", 0, "GROUP_BONE", ""},
	{201, "GROUP_VERTEX", 0, "GROUP_VERTEX", ""},
	{202, "GROUP_VCOL", 0, "GROUP_VCOL", ""},
	{203, "GROUP_UVS", 0, "GROUP_UVS", ""},
	{206, "RNA", 0, "RNA", ""},
	{207, "RNA_ADD", 0, "RNA_ADD", ""},
	{234, "OUTLINER_OB_EMPTY", 0, "OUTLINER_OB_EMPTY", ""},
	{235, "OUTLINER_OB_MESH", 0, "OUTLINER_OB_MESH", ""},
	{236, "OUTLINER_OB_CURVE", 0, "OUTLINER_OB_CURVE", ""},
	{237, "OUTLINER_OB_LATTICE", 0, "OUTLINER_OB_LATTICE", ""},
	{238, "OUTLINER_OB_META", 0, "OUTLINER_OB_META", ""},
	{239, "OUTLINER_OB_LAMP", 0, "OUTLINER_OB_LAMP", ""},
	{240, "OUTLINER_OB_CAMERA", 0, "OUTLINER_OB_CAMERA", ""},
	{241, "OUTLINER_OB_ARMATURE", 0, "OUTLINER_OB_ARMATURE", ""},
	{242, "OUTLINER_OB_FONT", 0, "OUTLINER_OB_FONT", ""},
	{243, "OUTLINER_OB_SURFACE", 0, "OUTLINER_OB_SURFACE", ""},
	{244, "OUTLINER_OB_SPEAKER", 0, "OUTLINER_OB_SPEAKER", ""},
	{253, "RESTRICT_VIEW_OFF", 0, "RESTRICT_VIEW_OFF", ""},
	{254, "RESTRICT_VIEW_ON", 0, "RESTRICT_VIEW_ON", ""},
	{255, "RESTRICT_SELECT_OFF", 0, "RESTRICT_SELECT_OFF", ""},
	{256, "RESTRICT_SELECT_ON", 0, "RESTRICT_SELECT_ON", ""},
	{257, "RESTRICT_RENDER_OFF", 0, "RESTRICT_RENDER_OFF", ""},
	{258, "RESTRICT_RENDER_ON", 0, "RESTRICT_RENDER_ON", ""},
	{260, "OUTLINER_DATA_EMPTY", 0, "OUTLINER_DATA_EMPTY", ""},
	{261, "OUTLINER_DATA_MESH", 0, "OUTLINER_DATA_MESH", ""},
	{262, "OUTLINER_DATA_CURVE", 0, "OUTLINER_DATA_CURVE", ""},
	{263, "OUTLINER_DATA_LATTICE", 0, "OUTLINER_DATA_LATTICE", ""},
	{264, "OUTLINER_DATA_META", 0, "OUTLINER_DATA_META", ""},
	{265, "OUTLINER_DATA_LAMP", 0, "OUTLINER_DATA_LAMP", ""},
	{266, "OUTLINER_DATA_CAMERA", 0, "OUTLINER_DATA_CAMERA", ""},
	{267, "OUTLINER_DATA_ARMATURE", 0, "OUTLINER_DATA_ARMATURE", ""},
	{268, "OUTLINER_DATA_FONT", 0, "OUTLINER_DATA_FONT", ""},
	{269, "OUTLINER_DATA_SURFACE", 0, "OUTLINER_DATA_SURFACE", ""},
	{270, "OUTLINER_DATA_SPEAKER", 0, "OUTLINER_DATA_SPEAKER", ""},
	{271, "OUTLINER_DATA_POSE", 0, "OUTLINER_DATA_POSE", ""},
	{286, "MESH_PLANE", 0, "MESH_PLANE", ""},
	{287, "MESH_CUBE", 0, "MESH_CUBE", ""},
	{288, "MESH_CIRCLE", 0, "MESH_CIRCLE", ""},
	{289, "MESH_UVSPHERE", 0, "MESH_UVSPHERE", ""},
	{290, "MESH_ICOSPHERE", 0, "MESH_ICOSPHERE", ""},
	{291, "MESH_GRID", 0, "MESH_GRID", ""},
	{292, "MESH_MONKEY", 0, "MESH_MONKEY", ""},
	{293, "MESH_CYLINDER", 0, "MESH_CYLINDER", ""},
	{294, "MESH_TORUS", 0, "MESH_TORUS", ""},
	{295, "MESH_CONE", 0, "MESH_CONE", ""},
	{298, "LAMP_POINT", 0, "LAMP_POINT", ""},
	{299, "LAMP_SUN", 0, "LAMP_SUN", ""},
	{300, "LAMP_SPOT", 0, "LAMP_SPOT", ""},
	{301, "LAMP_HEMI", 0, "LAMP_HEMI", ""},
	{302, "LAMP_AREA", 0, "LAMP_AREA", ""},
	{305, "META_EMPTY", 0, "META_EMPTY", ""},
	{306, "META_PLANE", 0, "META_PLANE", ""},
	{307, "META_CUBE", 0, "META_CUBE", ""},
	{308, "META_BALL", 0, "META_BALL", ""},
	{309, "META_ELLIPSOID", 0, "META_ELLIPSOID", ""},
	{310, "META_CAPSULE", 0, "META_CAPSULE", ""},
	{312, "SURFACE_NCURVE", 0, "SURFACE_NCURVE", ""},
	{313, "SURFACE_NCIRCLE", 0, "SURFACE_NCIRCLE", ""},
	{314, "SURFACE_NSURFACE", 0, "SURFACE_NSURFACE", ""},
	{315, "SURFACE_NCYLINDER", 0, "SURFACE_NCYLINDER", ""},
	{316, "SURFACE_NSPHERE", 0, "SURFACE_NSPHERE", ""},
	{317, "SURFACE_NTORUS", 0, "SURFACE_NTORUS", ""},
	{321, "CURVE_BEZCURVE", 0, "CURVE_BEZCURVE", ""},
	{322, "CURVE_BEZCIRCLE", 0, "CURVE_BEZCIRCLE", ""},
	{323, "CURVE_NCURVE", 0, "CURVE_NCURVE", ""},
	{324, "CURVE_NCIRCLE", 0, "CURVE_NCIRCLE", ""},
	{325, "CURVE_PATH", 0, "CURVE_PATH", ""},
	{331, "COLOR_RED", 0, "COLOR_RED", ""},
	{332, "COLOR_GREEN", 0, "COLOR_GREEN", ""},
	{333, "COLOR_BLUE", 0, "COLOR_BLUE", ""},
	{334, "TRIA_RIGHT_BAR", 0, "TRIA_RIGHT_BAR", ""},
	{335, "TRIA_DOWN_BAR", 0, "TRIA_DOWN_BAR", ""},
	{336, "TRIA_LEFT_BAR", 0, "TRIA_LEFT_BAR", ""},
	{337, "TRIA_UP_BAR", 0, "TRIA_UP_BAR", ""},
	{338, "FORCE_FORCE", 0, "FORCE_FORCE", ""},
	{339, "FORCE_WIND", 0, "FORCE_WIND", ""},
	{340, "FORCE_VORTEX", 0, "FORCE_VORTEX", ""},
	{341, "FORCE_MAGNETIC", 0, "FORCE_MAGNETIC", ""},
	{342, "FORCE_HARMONIC", 0, "FORCE_HARMONIC", ""},
	{343, "FORCE_CHARGE", 0, "FORCE_CHARGE", ""},
	{344, "FORCE_LENNARDJONES", 0, "FORCE_LENNARDJONES", ""},
	{345, "FORCE_TEXTURE", 0, "FORCE_TEXTURE", ""},
	{346, "FORCE_CURVE", 0, "FORCE_CURVE", ""},
	{347, "FORCE_BOID", 0, "FORCE_BOID", ""},
	{348, "FORCE_TURBULENCE", 0, "FORCE_TURBULENCE", ""},
	{349, "FORCE_DRAG", 0, "FORCE_DRAG", ""},
	{350, "FORCE_SMOKEFLOW", 0, "FORCE_SMOKEFLOW", ""},
	{442, "MODIFIER", 0, "MODIFIER", ""},
	{443, "MOD_WAVE", 0, "MOD_WAVE", ""},
	{444, "MOD_BUILD", 0, "MOD_BUILD", ""},
	{445, "MOD_DECIM", 0, "MOD_DECIM", ""},
	{446, "MOD_MIRROR", 0, "MOD_MIRROR", ""},
	{447, "MOD_SOFT", 0, "MOD_SOFT", ""},
	{448, "MOD_SUBSURF", 0, "MOD_SUBSURF", ""},
	{449, "HOOK", 0, "HOOK", ""},
	{450, "MOD_PHYSICS", 0, "MOD_PHYSICS", ""},
	{451, "MOD_PARTICLES", 0, "MOD_PARTICLES", ""},
	{452, "MOD_BOOLEAN", 0, "MOD_BOOLEAN", ""},
	{453, "MOD_EDGESPLIT", 0, "MOD_EDGESPLIT", ""},
	{454, "MOD_ARRAY", 0, "MOD_ARRAY", ""},
	{455, "MOD_UVPROJECT", 0, "MOD_UVPROJECT", ""},
	{456, "MOD_DISPLACE", 0, "MOD_DISPLACE", ""},
	{457, "MOD_CURVE", 0, "MOD_CURVE", ""},
	{458, "MOD_LATTICE", 0, "MOD_LATTICE", ""},
	{459, "CONSTRAINT_DATA", 0, "CONSTRAINT_DATA", ""},
	{460, "MOD_ARMATURE", 0, "MOD_ARMATURE", ""},
	{461, "MOD_SHRINKWRAP", 0, "MOD_SHRINKWRAP", ""},
	{462, "MOD_CAST", 0, "MOD_CAST", ""},
	{463, "MOD_MESHDEFORM", 0, "MOD_MESHDEFORM", ""},
	{464, "MOD_BEVEL", 0, "MOD_BEVEL", ""},
	{465, "MOD_SMOOTH", 0, "MOD_SMOOTH", ""},
	{466, "MOD_SIMPLEDEFORM", 0, "MOD_SIMPLEDEFORM", ""},
	{467, "MOD_MASK", 0, "MOD_MASK", ""},
	{468, "MOD_CLOTH", 0, "MOD_CLOTH", ""},
	{469, "MOD_EXPLODE", 0, "MOD_EXPLODE", ""},
	{470, "MOD_FLUIDSIM", 0, "MOD_FLUIDSIM", ""},
	{471, "MOD_MULTIRES", 0, "MOD_MULTIRES", ""},
	{472, "MOD_SMOKE", 0, "MOD_SMOKE", ""},
	{473, "MOD_SOLIDIFY", 0, "MOD_SOLIDIFY", ""},
	{474, "MOD_SCREW", 0, "MOD_SCREW", ""},
	{475, "MOD_VERTEX_WEIGHT", 0, "MOD_VERTEX_WEIGHT", ""},
	{476, "MOD_DYNAMICPAINT", 0, "MOD_DYNAMICPAINT", ""},
	{477, "MOD_REMESH", 0, "MOD_REMESH", ""},
	{478, "MOD_OCEAN", 0, "MOD_OCEAN", ""},
	{479, "MOD_WARP", 0, "MOD_WARP", ""},
	{480, "MOD_SKIN", 0, "MOD_SKIN", ""},
	{481, "MOD_TRIANGULATE", 0, "MOD_TRIANGULATE", ""},
	{482, "MOD_WIREFRAME", 0, "MOD_WIREFRAME", ""},
	{494, "REC", 0, "REC", ""},
	{495, "PLAY", 0, "PLAY", ""},
	{496, "FF", 0, "FF", ""},
	{497, "REW", 0, "REW", ""},
	{498, "PAUSE", 0, "PAUSE", ""},
	{499, "PREV_KEYFRAME", 0, "PREV_KEYFRAME", ""},
	{500, "NEXT_KEYFRAME", 0, "NEXT_KEYFRAME", ""},
	{501, "PLAY_AUDIO", 0, "PLAY_AUDIO", ""},
	{502, "PLAY_REVERSE", 0, "PLAY_REVERSE", ""},
	{503, "PREVIEW_RANGE", 0, "PREVIEW_RANGE", ""},
	{504, "ACTION_TWEAK", 0, "ACTION_TWEAK", ""},
	{505, "PMARKER_ACT", 0, "PMARKER_ACT", ""},
	{506, "PMARKER_SEL", 0, "PMARKER_SEL", ""},
	{507, "PMARKER", 0, "PMARKER", ""},
	{508, "MARKER_HLT", 0, "MARKER_HLT", ""},
	{509, "MARKER", 0, "MARKER", ""},
	{510, "SPACE2", 0, "SPACE2", ""},
	{511, "SPACE3", 0, "SPACE3", ""},
	{512, "KEYINGSET", 0, "KEYINGSET", ""},
	{513, "KEY_DEHLT", 0, "KEY_DEHLT", ""},
	{514, "KEY_HLT", 0, "KEY_HLT", ""},
	{515, "MUTE_IPO_OFF", 0, "MUTE_IPO_OFF", ""},
	{516, "MUTE_IPO_ON", 0, "MUTE_IPO_ON", ""},
	{517, "VISIBLE_IPO_OFF", 0, "VISIBLE_IPO_OFF", ""},
	{518, "VISIBLE_IPO_ON", 0, "VISIBLE_IPO_ON", ""},
	{519, "DRIVER", 0, "DRIVER", ""},
	{520, "SOLO_OFF", 0, "SOLO_OFF", ""},
	{521, "SOLO_ON", 0, "SOLO_ON", ""},
	{522, "FRAME_PREV", 0, "FRAME_PREV", ""},
	{523, "FRAME_NEXT", 0, "FRAME_NEXT", ""},
	{524, "NLA_PUSHDOWN", 0, "NLA_PUSHDOWN", ""},
	{525, "IPO_CONSTANT", 0, "IPO_CONSTANT", ""},
	{526, "IPO_LINEAR", 0, "IPO_LINEAR", ""},
	{527, "IPO_BEZIER", 0, "IPO_BEZIER", ""},
	{528, "IPO_SINE", 0, "IPO_SINE", ""},
	{529, "IPO_QUAD", 0, "IPO_QUAD", ""},
	{530, "IPO_CUBIC", 0, "IPO_CUBIC", ""},
	{531, "IPO_QUART", 0, "IPO_QUART", ""},
	{532, "IPO_QUINT", 0, "IPO_QUINT", ""},
	{533, "IPO_EXPO", 0, "IPO_EXPO", ""},
	{534, "IPO_CIRC", 0, "IPO_CIRC", ""},
	{535, "IPO_BOUNCE", 0, "IPO_BOUNCE", ""},
	{536, "IPO_ELASTIC", 0, "IPO_ELASTIC", ""},
	{537, "IPO_BACK", 0, "IPO_BACK", ""},
	{538, "IPO_EASE_IN", 0, "IPO_EASE_IN", ""},
	{539, "IPO_EASE_OUT", 0, "IPO_EASE_OUT", ""},
	{540, "IPO_EASE_IN_OUT", 0, "IPO_EASE_IN_OUT", ""},
	{546, "VERTEXSEL", 0, "VERTEXSEL", ""},
	{547, "EDGESEL", 0, "EDGESEL", ""},
	{548, "FACESEL", 0, "FACESEL", ""},
	{549, "LOOPSEL", 0, "LOOPSEL", ""},
	{551, "ROTATE", 0, "ROTATE", ""},
	{552, "CURSOR", 0, "CURSOR", ""},
	{553, "ROTATECOLLECTION", 0, "ROTATECOLLECTION", ""},
	{554, "ROTATECENTER", 0, "ROTATECENTER", ""},
	{555, "ROTACTIVE", 0, "ROTACTIVE", ""},
	{556, "ALIGN", 0, "ALIGN", ""},
	{558, "SMOOTHCURVE", 0, "SMOOTHCURVE", ""},
	{559, "SPHERECURVE", 0, "SPHERECURVE", ""},
	{560, "ROOTCURVE", 0, "ROOTCURVE", ""},
	{561, "SHARPCURVE", 0, "SHARPCURVE", ""},
	{562, "LINCURVE", 0, "LINCURVE", ""},
	{563, "NOCURVE", 0, "NOCURVE", ""},
	{564, "RNDCURVE", 0, "RNDCURVE", ""},
	{565, "PROP_OFF", 0, "PROP_OFF", ""},
	{566, "PROP_ON", 0, "PROP_ON", ""},
	{567, "PROP_CON", 0, "PROP_CON", ""},
	{568, "SCULPT_DYNTOPO", 0, "SCULPT_DYNTOPO", ""},
	{569, "PARTICLE_POINT", 0, "PARTICLE_POINT", ""},
	{570, "PARTICLE_TIP", 0, "PARTICLE_TIP", ""},
	{571, "PARTICLE_PATH", 0, "PARTICLE_PATH", ""},
	{572, "MAN_TRANS", 0, "MAN_TRANS", ""},
	{573, "MAN_ROT", 0, "MAN_ROT", ""},
	{574, "MAN_SCALE", 0, "MAN_SCALE", ""},
	{575, "MANIPUL", 0, "MANIPUL", ""},
	{576, "SNAP_OFF", 0, "SNAP_OFF", ""},
	{577, "SNAP_ON", 0, "SNAP_ON", ""},
	{578, "SNAP_NORMAL", 0, "SNAP_NORMAL", ""},
	{579, "SNAP_INCREMENT", 0, "SNAP_INCREMENT", ""},
	{580, "SNAP_VERTEX", 0, "SNAP_VERTEX", ""},
	{581, "SNAP_EDGE", 0, "SNAP_EDGE", ""},
	{582, "SNAP_FACE", 0, "SNAP_FACE", ""},
	{583, "SNAP_VOLUME", 0, "SNAP_VOLUME", ""},
	{585, "STICKY_UVS_LOC", 0, "STICKY_UVS_LOC", ""},
	{586, "STICKY_UVS_DISABLE", 0, "STICKY_UVS_DISABLE", ""},
	{587, "STICKY_UVS_VERT", 0, "STICKY_UVS_VERT", ""},
	{588, "CLIPUV_DEHLT", 0, "CLIPUV_DEHLT", ""},
	{589, "CLIPUV_HLT", 0, "CLIPUV_HLT", ""},
	{590, "SNAP_PEEL_OBJECT", 0, "SNAP_PEEL_OBJECT", ""},
	{591, "GRID", 0, "GRID", ""},
	{598, "PASTEDOWN", 0, "PASTEDOWN", ""},
	{599, "COPYDOWN", 0, "COPYDOWN", ""},
	{600, "PASTEFLIPUP", 0, "PASTEFLIPUP", ""},
	{601, "PASTEFLIPDOWN", 0, "PASTEFLIPDOWN", ""},
	{606, "SNAP_SURFACE", 0, "SNAP_SURFACE", ""},
	{607, "AUTOMERGE_ON", 0, "AUTOMERGE_ON", ""},
	{608, "AUTOMERGE_OFF", 0, "AUTOMERGE_OFF", ""},
	{609, "RETOPO", 0, "RETOPO", ""},
	{610, "UV_VERTEXSEL", 0, "UV_VERTEXSEL", ""},
	{611, "UV_EDGESEL", 0, "UV_EDGESEL", ""},
	{612, "UV_FACESEL", 0, "UV_FACESEL", ""},
	{613, "UV_ISLANDSEL", 0, "UV_ISLANDSEL", ""},
	{614, "UV_SYNC_SELECT", 0, "UV_SYNC_SELECT", ""},
	{624, "BBOX", 0, "BBOX", ""},
	{625, "WIRE", 0, "WIRE", ""},
	{626, "SOLID", 0, "SOLID", ""},
	{627, "SMOOTH", 0, "SMOOTH", ""},
	{628, "POTATO", 0, "POTATO", ""},
	{630, "ORTHO", 0, "ORTHO", ""},
	{633, "LOCKVIEW_OFF", 0, "LOCKVIEW_OFF", ""},
	{634, "LOCKVIEW_ON", 0, "LOCKVIEW_ON", ""},
	{636, "AXIS_SIDE", 0, "AXIS_SIDE", ""},
	{637, "AXIS_FRONT", 0, "AXIS_FRONT", ""},
	{638, "AXIS_TOP", 0, "AXIS_TOP", ""},
	{639, "NDOF_DOM", 0, "NDOF_DOM", ""},
	{640, "NDOF_TURN", 0, "NDOF_TURN", ""},
	{641, "NDOF_FLY", 0, "NDOF_FLY", ""},
	{642, "NDOF_TRANS", 0, "NDOF_TRANS", ""},
	{643, "LAYER_USED", 0, "LAYER_USED", ""},
	{644, "LAYER_ACTIVE", 0, "LAYER_ACTIVE", ""},
	{676, "SORTALPHA", 0, "SORTALPHA", ""},
	{677, "SORTBYEXT", 0, "SORTBYEXT", ""},
	{678, "SORTTIME", 0, "SORTTIME", ""},
	{679, "SORTSIZE", 0, "SORTSIZE", ""},
	{680, "LONGDISPLAY", 0, "LONGDISPLAY", ""},
	{681, "SHORTDISPLAY", 0, "SHORTDISPLAY", ""},
	{682, "GHOST", 0, "GHOST", ""},
	{683, "IMGDISPLAY", 0, "IMGDISPLAY", ""},
	{684, "SAVE_AS", 0, "SAVE_AS", ""},
	{685, "SAVE_COPY", 0, "SAVE_COPY", ""},
	{686, "BOOKMARKS", 0, "BOOKMARKS", ""},
	{687, "FONTPREVIEW", 0, "FONTPREVIEW", ""},
	{688, "FILTER", 0, "FILTER", ""},
	{689, "NEWFOLDER", 0, "NEWFOLDER", ""},
	{690, "OPEN_RECENT", 0, "OPEN_RECENT", ""},
	{691, "FILE_PARENT", 0, "FILE_PARENT", ""},
	{692, "FILE_REFRESH", 0, "FILE_REFRESH", ""},
	{693, "FILE_FOLDER", 0, "FILE_FOLDER", ""},
	{694, "FILE_BLANK", 0, "FILE_BLANK", ""},
	{695, "FILE_BLEND", 0, "FILE_BLEND", ""},
	{696, "FILE_IMAGE", 0, "FILE_IMAGE", ""},
	{697, "FILE_MOVIE", 0, "FILE_MOVIE", ""},
	{698, "FILE_SCRIPT", 0, "FILE_SCRIPT", ""},
	{699, "FILE_SOUND", 0, "FILE_SOUND", ""},
	{700, "FILE_FONT", 0, "FILE_FONT", ""},
	{701, "FILE_TEXT", 0, "FILE_TEXT", ""},
	{702, "RECOVER_AUTO", 0, "RECOVER_AUTO", ""},
	{703, "SAVE_PREFS", 0, "SAVE_PREFS", ""},
	{704, "LINK_BLEND", 0, "LINK_BLEND", ""},
	{705, "APPEND_BLEND", 0, "APPEND_BLEND", ""},
	{706, "IMPORT", 0, "IMPORT", ""},
	{707, "EXPORT", 0, "EXPORT", ""},
	{708, "EXTERNAL_DATA", 0, "EXTERNAL_DATA", ""},
	{709, "LOAD_FACTORY", 0, "LOAD_FACTORY", ""},
	{715, "LOOP_BACK", 0, "LOOP_BACK", ""},
	{716, "LOOP_FORWARDS", 0, "LOOP_FORWARDS", ""},
	{717, "BACK", 0, "BACK", ""},
	{718, "FORWARD", 0, "FORWARD", ""},
	{726, "FILE_BACKUP", 0, "FILE_BACKUP", ""},
	{727, "DISK_DRIVE", 0, "DISK_DRIVE", ""},
	{728, "MATPLANE", 0, "MATPLANE", ""},
	{729, "MATSPHERE", 0, "MATSPHERE", ""},
	{730, "MATCUBE", 0, "MATCUBE", ""},
	{731, "MONKEY", 0, "MONKEY", ""},
	{732, "HAIR", 0, "HAIR", ""},
	{733, "ALIASED", 0, "ALIASED", ""},
	{734, "ANTIALIASED", 0, "ANTIALIASED", ""},
	{735, "MAT_SPHERE_SKY", 0, "MAT_SPHERE_SKY", ""},
	{740, "WORDWRAP_OFF", 0, "WORDWRAP_OFF", ""},
	{741, "WORDWRAP_ON", 0, "WORDWRAP_ON", ""},
	{742, "SYNTAX_OFF", 0, "SYNTAX_OFF", ""},
	{743, "SYNTAX_ON", 0, "SYNTAX_ON", ""},
	{744, "LINENUMBERS_OFF", 0, "LINENUMBERS_OFF", ""},
	{745, "LINENUMBERS_ON", 0, "LINENUMBERS_ON", ""},
	{746, "SCRIPTPLUGINS", 0, "SCRIPTPLUGINS", ""},
	{754, "SEQ_SEQUENCER", 0, "SEQ_SEQUENCER", ""},
	{755, "SEQ_PREVIEW", 0, "SEQ_PREVIEW", ""},
	{756, "SEQ_LUMA_WAVEFORM", 0, "SEQ_LUMA_WAVEFORM", ""},
	{757, "SEQ_CHROMA_SCOPE", 0, "SEQ_CHROMA_SCOPE", ""},
	{758, "SEQ_HISTOGRAM", 0, "SEQ_HISTOGRAM", ""},
	{759, "SEQ_SPLITVIEW", 0, "SEQ_SPLITVIEW", ""},
	{763, "IMAGE_RGB", 0, "IMAGE_RGB", ""},
	{764, "IMAGE_RGB_ALPHA", 0, "IMAGE_RGB_ALPHA", ""},
	{765, "IMAGE_ALPHA", 0, "IMAGE_ALPHA", ""},
	{766, "IMAGE_ZDEPTH", 0, "IMAGE_ZDEPTH", ""},
	{767, "IMAGEFILE", 0, "IMAGEFILE", ""},
	{780, "BRUSH_ADD", 0, "BRUSH_ADD", ""},
	{781, "BRUSH_BLOB", 0, "BRUSH_BLOB", ""},
	{782, "BRUSH_BLUR", 0, "BRUSH_BLUR", ""},
	{783, "BRUSH_CLAY", 0, "BRUSH_CLAY", ""},
	{784, "BRUSH_CLAY_STRIPS", 0, "BRUSH_CLAY_STRIPS", ""},
	{785, "BRUSH_CLONE", 0, "BRUSH_CLONE", ""},
	{786, "BRUSH_CREASE", 0, "BRUSH_CREASE", ""},
	{787, "BRUSH_DARKEN", 0, "BRUSH_DARKEN", ""},
	{788, "BRUSH_FILL", 0, "BRUSH_FILL", ""},
	{789, "BRUSH_FLATTEN", 0, "BRUSH_FLATTEN", ""},
	{790, "BRUSH_GRAB", 0, "BRUSH_GRAB", ""},
	{791, "BRUSH_INFLATE", 0, "BRUSH_INFLATE", ""},
	{792, "BRUSH_LAYER", 0, "BRUSH_LAYER", ""},
	{793, "BRUSH_LIGHTEN", 0, "BRUSH_LIGHTEN", ""},
	{794, "BRUSH_MASK", 0, "BRUSH_MASK", ""},
	{795, "BRUSH_MIX", 0, "BRUSH_MIX", ""},
	{796, "BRUSH_MULTIPLY", 0, "BRUSH_MULTIPLY", ""},
	{797, "BRUSH_NUDGE", 0, "BRUSH_NUDGE", ""},
	{798, "BRUSH_PINCH", 0, "BRUSH_PINCH", ""},
	{799, "BRUSH_SCRAPE", 0, "BRUSH_SCRAPE", ""},
	{800, "BRUSH_SCULPT_DRAW", 0, "BRUSH_SCULPT_DRAW", ""},
	{801, "BRUSH_SMEAR", 0, "BRUSH_SMEAR", ""},
	{802, "BRUSH_SMOOTH", 0, "BRUSH_SMOOTH", ""},
	{803, "BRUSH_SNAKE_HOOK", 0, "BRUSH_SNAKE_HOOK", ""},
	{804, "BRUSH_SOFTEN", 0, "BRUSH_SOFTEN", ""},
	{805, "BRUSH_SUBTRACT", 0, "BRUSH_SUBTRACT", ""},
	{806, "BRUSH_TEXDRAW", 0, "BRUSH_TEXDRAW", ""},
	{807, "BRUSH_TEXFILL", 0, "BRUSH_TEXFILL", ""},
	{808, "BRUSH_TEXMASK", 0, "BRUSH_TEXMASK", ""},
	{809, "BRUSH_THUMB", 0, "BRUSH_THUMB", ""},
	{810, "BRUSH_ROTATE", 0, "BRUSH_ROTATE", ""},
	{811, "BRUSH_VERTEXDRAW", 0, "BRUSH_VERTEXDRAW", ""},
	{812, "MATCAP_01", 0, "MATCAP_01", ""},
	{813, "MATCAP_02", 0, "MATCAP_02", ""},
	{814, "MATCAP_03", 0, "MATCAP_03", ""},
	{815, "MATCAP_04", 0, "MATCAP_04", ""},
	{816, "MATCAP_05", 0, "MATCAP_05", ""},
	{817, "MATCAP_06", 0, "MATCAP_06", ""},
	{818, "MATCAP_07", 0, "MATCAP_07", ""},
	{819, "MATCAP_08", 0, "MATCAP_08", ""},
	{820, "MATCAP_09", 0, "MATCAP_09", ""},
	{821, "MATCAP_10", 0, "MATCAP_10", ""},
	{822, "MATCAP_11", 0, "MATCAP_11", ""},
	{823, "MATCAP_12", 0, "MATCAP_12", ""},
	{824, "MATCAP_13", 0, "MATCAP_13", ""},
	{825, "MATCAP_14", 0, "MATCAP_14", ""},
	{826, "MATCAP_15", 0, "MATCAP_15", ""},
	{827, "MATCAP_16", 0, "MATCAP_16", ""},
	{828, "MATCAP_17", 0, "MATCAP_17", ""},
	{829, "MATCAP_18", 0, "MATCAP_18", ""},
	{830, "MATCAP_19", 0, "MATCAP_19", ""},
	{831, "MATCAP_20", 0, "MATCAP_20", ""},
	{832, "MATCAP_21", 0, "MATCAP_21", ""},
	{833, "MATCAP_22", 0, "MATCAP_22", ""},
	{834, "MATCAP_23", 0, "MATCAP_23", ""},
	{835, "MATCAP_24", 0, "MATCAP_24", ""},
	{836, "VIEW3D_VEC", 0, "VIEW3D_VEC", ""},
	{837, "EDIT_VEC", 0, "EDIT_VEC", ""},
	{838, "EDITMODE_VEC_DEHLT", 0, "EDITMODE_VEC_DEHLT", ""},
	{839, "EDITMODE_VEC_HLT", 0, "EDITMODE_VEC_HLT", ""},
	{840, "DISCLOSURE_TRI_RIGHT_VEC", 0, "DISCLOSURE_TRI_RIGHT_VEC", ""},
	{841, "DISCLOSURE_TRI_DOWN_VEC", 0, "DISCLOSURE_TRI_DOWN_VEC", ""},
	{842, "MOVE_UP_VEC", 0, "MOVE_UP_VEC", ""},
	{843, "MOVE_DOWN_VEC", 0, "MOVE_DOWN_VEC", ""},
	{844, "X_VEC", 0, "X_VEC", ""},
	{845, "SMALL_TRI_RIGHT_VEC", 0, "SMALL_TRI_RIGHT_VEC", ""},
	{0, NULL, 0, NULL, NULL}
};

EnumPropertyRNA rna_UILayout_prop_enum_icon = {
	{NULL, (PropertyRNA *)&rna_UILayout_prop_enum_translate,
	-1, "icon", 3, "Icon",
	"Override automatic icon of the item",
	0, "*",
	PROP_ENUM, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	NULL, NULL, NULL, NULL, NULL, NULL, rna_UILayout_prop_enum_icon_items, 542, 0
};

FunctionRNA rna_UILayout_prop_enum_func = {
	{(FunctionRNA *)&rna_UILayout_prop_search_func, (FunctionRNA *)&rna_UILayout_prop_menu_enum_func,
	NULL,
	{(PropertyRNA *)&rna_UILayout_prop_enum_data, (PropertyRNA *)&rna_UILayout_prop_enum_icon}},
	"prop_enum", 0, "prop_enum",
	UILayout_prop_enum_call,
	NULL
};

PointerPropertyRNA rna_UILayout_prop_search_data = {
	{(PropertyRNA *)&rna_UILayout_prop_search_property, NULL,
	-1, "data", 8652804, "",
	"Data from which to take property",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	NULL, NULL, NULL, NULL,&RNA_AnyType
};

StringPropertyRNA rna_UILayout_prop_search_property = {
	{(PropertyRNA *)&rna_UILayout_prop_search_search_data, (PropertyRNA *)&rna_UILayout_prop_search_data,
	-1, "property", 262149, "",
	"Identifier of property in data",
	0, "*",
	PROP_STRING, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	NULL, NULL, NULL, NULL, NULL, NULL, 0, ""
};

PointerPropertyRNA rna_UILayout_prop_search_search_data = {
	{(PropertyRNA *)&rna_UILayout_prop_search_search_property, (PropertyRNA *)&rna_UILayout_prop_search_property,
	-1, "search_data", 8652804, "",
	"Data from which to take collection to search in",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	NULL, NULL, NULL, NULL,&RNA_AnyType
};

StringPropertyRNA rna_UILayout_prop_search_search_property = {
	{(PropertyRNA *)&rna_UILayout_prop_search_text, (PropertyRNA *)&rna_UILayout_prop_search_search_data,
	-1, "search_property", 262149, "",
	"Identifier of search collection property",
	0, "*",
	PROP_STRING, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	NULL, NULL, NULL, NULL, NULL, NULL, 0, ""
};

StringPropertyRNA rna_UILayout_prop_search_text = {
	{(PropertyRNA *)&rna_UILayout_prop_search_text_ctxt, (PropertyRNA *)&rna_UILayout_prop_search_search_property,
	-1, "text", 262145, "",
	"Override automatic text of the item",
	0, "*",
	PROP_STRING, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	NULL, NULL, NULL, NULL, NULL, NULL, 0, ""
};

StringPropertyRNA rna_UILayout_prop_search_text_ctxt = {
	{(PropertyRNA *)&rna_UILayout_prop_search_translate, (PropertyRNA *)&rna_UILayout_prop_search_text,
	-1, "text_ctxt", 262145, "",
	"Override automatic translation context of the given text",
	0, "*",
	PROP_STRING, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	NULL, NULL, NULL, NULL, NULL, NULL, 0, ""
};

BoolPropertyRNA rna_UILayout_prop_search_translate = {
	{(PropertyRNA *)&rna_UILayout_prop_search_icon, (PropertyRNA *)&rna_UILayout_prop_search_text_ctxt,
	-1, "translate", 3, "",
	"Translate the given text, when UI translation is enabled",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 1, NULL
};

static EnumPropertyItem rna_UILayout_prop_search_icon_items[543] = {
	{0, "NONE", 0, "NONE", ""},
	{1, "QUESTION", 0, "QUESTION", ""},
	{2, "ERROR", 0, "ERROR", ""},
	{3, "CANCEL", 0, "CANCEL", ""},
	{4, "TRIA_RIGHT", 0, "TRIA_RIGHT", ""},
	{5, "TRIA_DOWN", 0, "TRIA_DOWN", ""},
	{6, "TRIA_LEFT", 0, "TRIA_LEFT", ""},
	{7, "TRIA_UP", 0, "TRIA_UP", ""},
	{8, "ARROW_LEFTRIGHT", 0, "ARROW_LEFTRIGHT", ""},
	{9, "PLUS", 0, "PLUS", ""},
	{10, "DISCLOSURE_TRI_DOWN", 0, "DISCLOSURE_TRI_DOWN", ""},
	{11, "DISCLOSURE_TRI_RIGHT", 0, "DISCLOSURE_TRI_RIGHT", ""},
	{12, "RADIOBUT_OFF", 0, "RADIOBUT_OFF", ""},
	{13, "RADIOBUT_ON", 0, "RADIOBUT_ON", ""},
	{14, "MENU_PANEL", 0, "MENU_PANEL", ""},
	{15, "BLENDER", 0, "BLENDER", ""},
	{16, "GRIP", 0, "GRIP", ""},
	{17, "DOT", 0, "DOT", ""},
	{18, "COLLAPSEMENU", 0, "COLLAPSEMENU", ""},
	{19, "X", 0, "X", ""},
	{21, "GO_LEFT", 0, "GO_LEFT", ""},
	{22, "PLUG", 0, "PLUG", ""},
	{23, "UI", 0, "UI", ""},
	{24, "NODE", 0, "NODE", ""},
	{25, "NODE_SEL", 0, "NODE_SEL", ""},
	{26, "FULLSCREEN", 0, "FULLSCREEN", ""},
	{27, "SPLITSCREEN", 0, "SPLITSCREEN", ""},
	{28, "RIGHTARROW_THIN", 0, "RIGHTARROW_THIN", ""},
	{29, "BORDERMOVE", 0, "BORDERMOVE", ""},
	{30, "VIEWZOOM", 0, "VIEWZOOM", ""},
	{31, "ZOOMIN", 0, "ZOOMIN", ""},
	{32, "ZOOMOUT", 0, "ZOOMOUT", ""},
	{33, "PANEL_CLOSE", 0, "PANEL_CLOSE", ""},
	{34, "COPY_ID", 0, "COPY_ID", ""},
	{35, "EYEDROPPER", 0, "EYEDROPPER", ""},
	{36, "LINK_AREA", 0, "LINK_AREA", ""},
	{37, "AUTO", 0, "AUTO", ""},
	{38, "CHECKBOX_DEHLT", 0, "CHECKBOX_DEHLT", ""},
	{39, "CHECKBOX_HLT", 0, "CHECKBOX_HLT", ""},
	{40, "UNLOCKED", 0, "UNLOCKED", ""},
	{41, "LOCKED", 0, "LOCKED", ""},
	{42, "UNPINNED", 0, "UNPINNED", ""},
	{43, "PINNED", 0, "PINNED", ""},
	{44, "SCREEN_BACK", 0, "SCREEN_BACK", ""},
	{45, "RIGHTARROW", 0, "RIGHTARROW", ""},
	{46, "DOWNARROW_HLT", 0, "DOWNARROW_HLT", ""},
	{47, "DOTSUP", 0, "DOTSUP", ""},
	{48, "DOTSDOWN", 0, "DOTSDOWN", ""},
	{49, "LINK", 0, "LINK", ""},
	{50, "INLINK", 0, "INLINK", ""},
	{51, "PLUGIN", 0, "PLUGIN", ""},
	{52, "HELP", 0, "HELP", ""},
	{53, "GHOST_ENABLED", 0, "GHOST_ENABLED", ""},
	{54, "COLOR", 0, "COLOR", ""},
	{55, "LINKED", 0, "LINKED", ""},
	{56, "UNLINKED", 0, "UNLINKED", ""},
	{57, "HAND", 0, "HAND", ""},
	{58, "ZOOM_ALL", 0, "ZOOM_ALL", ""},
	{59, "ZOOM_SELECTED", 0, "ZOOM_SELECTED", ""},
	{60, "ZOOM_PREVIOUS", 0, "ZOOM_PREVIOUS", ""},
	{61, "ZOOM_IN", 0, "ZOOM_IN", ""},
	{62, "ZOOM_OUT", 0, "ZOOM_OUT", ""},
	{63, "RENDER_REGION", 0, "RENDER_REGION", ""},
	{64, "BORDER_RECT", 0, "BORDER_RECT", ""},
	{65, "BORDER_LASSO", 0, "BORDER_LASSO", ""},
	{66, "FREEZE", 0, "FREEZE", ""},
	{67, "STYLUS_PRESSURE", 0, "STYLUS_PRESSURE", ""},
	{68, "GHOST_DISABLED", 0, "GHOST_DISABLED", ""},
	{69, "NEW", 0, "NEW", ""},
	{70, "FILE_TICK", 0, "FILE_TICK", ""},
	{71, "QUIT", 0, "QUIT", ""},
	{72, "URL", 0, "URL", ""},
	{73, "RECOVER_LAST", 0, "RECOVER_LAST", ""},
	{75, "FULLSCREEN_ENTER", 0, "FULLSCREEN_ENTER", ""},
	{76, "FULLSCREEN_EXIT", 0, "FULLSCREEN_EXIT", ""},
	{77, "BLANK1", 0, "BLANK1", ""},
	{78, "LAMP", 0, "LAMP", ""},
	{79, "MATERIAL", 0, "MATERIAL", ""},
	{80, "TEXTURE", 0, "TEXTURE", ""},
	{81, "ANIM", 0, "ANIM", ""},
	{82, "WORLD", 0, "WORLD", ""},
	{83, "SCENE", 0, "SCENE", ""},
	{84, "EDIT", 0, "EDIT", ""},
	{85, "GAME", 0, "GAME", ""},
	{86, "RADIO", 0, "RADIO", ""},
	{87, "SCRIPT", 0, "SCRIPT", ""},
	{88, "PARTICLES", 0, "PARTICLES", ""},
	{89, "PHYSICS", 0, "PHYSICS", ""},
	{90, "SPEAKER", 0, "SPEAKER", ""},
	{91, "TEXTURE_SHADED", 0, "TEXTURE_SHADED", ""},
	{104, "VIEW3D", 0, "VIEW3D", ""},
	{105, "IPO", 0, "IPO", ""},
	{106, "OOPS", 0, "OOPS", ""},
	{107, "BUTS", 0, "BUTS", ""},
	{108, "FILESEL", 0, "FILESEL", ""},
	{109, "IMAGE_COL", 0, "IMAGE_COL", ""},
	{110, "INFO", 0, "INFO", ""},
	{111, "SEQUENCE", 0, "SEQUENCE", ""},
	{112, "TEXT", 0, "TEXT", ""},
	{113, "IMASEL", 0, "IMASEL", ""},
	{114, "SOUND", 0, "SOUND", ""},
	{115, "ACTION", 0, "ACTION", ""},
	{116, "NLA", 0, "NLA", ""},
	{117, "SCRIPTWIN", 0, "SCRIPTWIN", ""},
	{118, "TIME", 0, "TIME", ""},
	{119, "NODETREE", 0, "NODETREE", ""},
	{120, "LOGIC", 0, "LOGIC", ""},
	{121, "CONSOLE", 0, "CONSOLE", ""},
	{122, "PREFERENCES", 0, "PREFERENCES", ""},
	{123, "CLIP", 0, "CLIP", ""},
	{124, "ASSET_MANAGER", 0, "ASSET_MANAGER", ""},
	{130, "OBJECT_DATAMODE", 0, "OBJECT_DATAMODE", ""},
	{131, "EDITMODE_HLT", 0, "EDITMODE_HLT", ""},
	{132, "FACESEL_HLT", 0, "FACESEL_HLT", ""},
	{133, "VPAINT_HLT", 0, "VPAINT_HLT", ""},
	{134, "TPAINT_HLT", 0, "TPAINT_HLT", ""},
	{135, "WPAINT_HLT", 0, "WPAINT_HLT", ""},
	{136, "SCULPTMODE_HLT", 0, "SCULPTMODE_HLT", ""},
	{137, "POSE_HLT", 0, "POSE_HLT", ""},
	{138, "PARTICLEMODE", 0, "PARTICLEMODE", ""},
	{139, "LIGHTPAINT", 0, "LIGHTPAINT", ""},
	{156, "SCENE_DATA", 0, "SCENE_DATA", ""},
	{157, "RENDERLAYERS", 0, "RENDERLAYERS", ""},
	{158, "WORLD_DATA", 0, "WORLD_DATA", ""},
	{159, "OBJECT_DATA", 0, "OBJECT_DATA", ""},
	{160, "MESH_DATA", 0, "MESH_DATA", ""},
	{161, "CURVE_DATA", 0, "CURVE_DATA", ""},
	{162, "META_DATA", 0, "META_DATA", ""},
	{163, "LATTICE_DATA", 0, "LATTICE_DATA", ""},
	{164, "LAMP_DATA", 0, "LAMP_DATA", ""},
	{165, "MATERIAL_DATA", 0, "MATERIAL_DATA", ""},
	{166, "TEXTURE_DATA", 0, "TEXTURE_DATA", ""},
	{167, "ANIM_DATA", 0, "ANIM_DATA", ""},
	{168, "CAMERA_DATA", 0, "CAMERA_DATA", ""},
	{169, "PARTICLE_DATA", 0, "PARTICLE_DATA", ""},
	{170, "LIBRARY_DATA_DIRECT", 0, "LIBRARY_DATA_DIRECT", ""},
	{171, "GROUP", 0, "GROUP", ""},
	{172, "ARMATURE_DATA", 0, "ARMATURE_DATA", ""},
	{173, "POSE_DATA", 0, "POSE_DATA", ""},
	{174, "BONE_DATA", 0, "BONE_DATA", ""},
	{175, "CONSTRAINT", 0, "CONSTRAINT", ""},
	{176, "SHAPEKEY_DATA", 0, "SHAPEKEY_DATA", ""},
	{177, "CONSTRAINT_BONE", 0, "CONSTRAINT_BONE", ""},
	{178, "CAMERA_STEREO", 0, "CAMERA_STEREO", ""},
	{179, "PACKAGE", 0, "PACKAGE", ""},
	{180, "UGLYPACKAGE", 0, "UGLYPACKAGE", ""},
	{182, "BRUSH_DATA", 0, "BRUSH_DATA", ""},
	{183, "IMAGE_DATA", 0, "IMAGE_DATA", ""},
	{184, "FILE", 0, "FILE", ""},
	{185, "FCURVE", 0, "FCURVE", ""},
	{186, "FONT_DATA", 0, "FONT_DATA", ""},
	{187, "RENDER_RESULT", 0, "RENDER_RESULT", ""},
	{188, "SURFACE_DATA", 0, "SURFACE_DATA", ""},
	{189, "EMPTY_DATA", 0, "EMPTY_DATA", ""},
	{190, "SETTINGS", 0, "SETTINGS", ""},
	{191, "RENDER_ANIMATION", 0, "RENDER_ANIMATION", ""},
	{192, "RENDER_STILL", 0, "RENDER_STILL", ""},
	{194, "BOIDS", 0, "BOIDS", ""},
	{195, "STRANDS", 0, "STRANDS", ""},
	{196, "LIBRARY_DATA_INDIRECT", 0, "LIBRARY_DATA_INDIRECT", ""},
	{197, "GREASEPENCIL", 0, "GREASEPENCIL", ""},
	{198, "LINE_DATA", 0, "LINE_DATA", ""},
	{200, "GROUP_BONE", 0, "GROUP_BONE", ""},
	{201, "GROUP_VERTEX", 0, "GROUP_VERTEX", ""},
	{202, "GROUP_VCOL", 0, "GROUP_VCOL", ""},
	{203, "GROUP_UVS", 0, "GROUP_UVS", ""},
	{206, "RNA", 0, "RNA", ""},
	{207, "RNA_ADD", 0, "RNA_ADD", ""},
	{234, "OUTLINER_OB_EMPTY", 0, "OUTLINER_OB_EMPTY", ""},
	{235, "OUTLINER_OB_MESH", 0, "OUTLINER_OB_MESH", ""},
	{236, "OUTLINER_OB_CURVE", 0, "OUTLINER_OB_CURVE", ""},
	{237, "OUTLINER_OB_LATTICE", 0, "OUTLINER_OB_LATTICE", ""},
	{238, "OUTLINER_OB_META", 0, "OUTLINER_OB_META", ""},
	{239, "OUTLINER_OB_LAMP", 0, "OUTLINER_OB_LAMP", ""},
	{240, "OUTLINER_OB_CAMERA", 0, "OUTLINER_OB_CAMERA", ""},
	{241, "OUTLINER_OB_ARMATURE", 0, "OUTLINER_OB_ARMATURE", ""},
	{242, "OUTLINER_OB_FONT", 0, "OUTLINER_OB_FONT", ""},
	{243, "OUTLINER_OB_SURFACE", 0, "OUTLINER_OB_SURFACE", ""},
	{244, "OUTLINER_OB_SPEAKER", 0, "OUTLINER_OB_SPEAKER", ""},
	{253, "RESTRICT_VIEW_OFF", 0, "RESTRICT_VIEW_OFF", ""},
	{254, "RESTRICT_VIEW_ON", 0, "RESTRICT_VIEW_ON", ""},
	{255, "RESTRICT_SELECT_OFF", 0, "RESTRICT_SELECT_OFF", ""},
	{256, "RESTRICT_SELECT_ON", 0, "RESTRICT_SELECT_ON", ""},
	{257, "RESTRICT_RENDER_OFF", 0, "RESTRICT_RENDER_OFF", ""},
	{258, "RESTRICT_RENDER_ON", 0, "RESTRICT_RENDER_ON", ""},
	{260, "OUTLINER_DATA_EMPTY", 0, "OUTLINER_DATA_EMPTY", ""},
	{261, "OUTLINER_DATA_MESH", 0, "OUTLINER_DATA_MESH", ""},
	{262, "OUTLINER_DATA_CURVE", 0, "OUTLINER_DATA_CURVE", ""},
	{263, "OUTLINER_DATA_LATTICE", 0, "OUTLINER_DATA_LATTICE", ""},
	{264, "OUTLINER_DATA_META", 0, "OUTLINER_DATA_META", ""},
	{265, "OUTLINER_DATA_LAMP", 0, "OUTLINER_DATA_LAMP", ""},
	{266, "OUTLINER_DATA_CAMERA", 0, "OUTLINER_DATA_CAMERA", ""},
	{267, "OUTLINER_DATA_ARMATURE", 0, "OUTLINER_DATA_ARMATURE", ""},
	{268, "OUTLINER_DATA_FONT", 0, "OUTLINER_DATA_FONT", ""},
	{269, "OUTLINER_DATA_SURFACE", 0, "OUTLINER_DATA_SURFACE", ""},
	{270, "OUTLINER_DATA_SPEAKER", 0, "OUTLINER_DATA_SPEAKER", ""},
	{271, "OUTLINER_DATA_POSE", 0, "OUTLINER_DATA_POSE", ""},
	{286, "MESH_PLANE", 0, "MESH_PLANE", ""},
	{287, "MESH_CUBE", 0, "MESH_CUBE", ""},
	{288, "MESH_CIRCLE", 0, "MESH_CIRCLE", ""},
	{289, "MESH_UVSPHERE", 0, "MESH_UVSPHERE", ""},
	{290, "MESH_ICOSPHERE", 0, "MESH_ICOSPHERE", ""},
	{291, "MESH_GRID", 0, "MESH_GRID", ""},
	{292, "MESH_MONKEY", 0, "MESH_MONKEY", ""},
	{293, "MESH_CYLINDER", 0, "MESH_CYLINDER", ""},
	{294, "MESH_TORUS", 0, "MESH_TORUS", ""},
	{295, "MESH_CONE", 0, "MESH_CONE", ""},
	{298, "LAMP_POINT", 0, "LAMP_POINT", ""},
	{299, "LAMP_SUN", 0, "LAMP_SUN", ""},
	{300, "LAMP_SPOT", 0, "LAMP_SPOT", ""},
	{301, "LAMP_HEMI", 0, "LAMP_HEMI", ""},
	{302, "LAMP_AREA", 0, "LAMP_AREA", ""},
	{305, "META_EMPTY", 0, "META_EMPTY", ""},
	{306, "META_PLANE", 0, "META_PLANE", ""},
	{307, "META_CUBE", 0, "META_CUBE", ""},
	{308, "META_BALL", 0, "META_BALL", ""},
	{309, "META_ELLIPSOID", 0, "META_ELLIPSOID", ""},
	{310, "META_CAPSULE", 0, "META_CAPSULE", ""},
	{312, "SURFACE_NCURVE", 0, "SURFACE_NCURVE", ""},
	{313, "SURFACE_NCIRCLE", 0, "SURFACE_NCIRCLE", ""},
	{314, "SURFACE_NSURFACE", 0, "SURFACE_NSURFACE", ""},
	{315, "SURFACE_NCYLINDER", 0, "SURFACE_NCYLINDER", ""},
	{316, "SURFACE_NSPHERE", 0, "SURFACE_NSPHERE", ""},
	{317, "SURFACE_NTORUS", 0, "SURFACE_NTORUS", ""},
	{321, "CURVE_BEZCURVE", 0, "CURVE_BEZCURVE", ""},
	{322, "CURVE_BEZCIRCLE", 0, "CURVE_BEZCIRCLE", ""},
	{323, "CURVE_NCURVE", 0, "CURVE_NCURVE", ""},
	{324, "CURVE_NCIRCLE", 0, "CURVE_NCIRCLE", ""},
	{325, "CURVE_PATH", 0, "CURVE_PATH", ""},
	{331, "COLOR_RED", 0, "COLOR_RED", ""},
	{332, "COLOR_GREEN", 0, "COLOR_GREEN", ""},
	{333, "COLOR_BLUE", 0, "COLOR_BLUE", ""},
	{334, "TRIA_RIGHT_BAR", 0, "TRIA_RIGHT_BAR", ""},
	{335, "TRIA_DOWN_BAR", 0, "TRIA_DOWN_BAR", ""},
	{336, "TRIA_LEFT_BAR", 0, "TRIA_LEFT_BAR", ""},
	{337, "TRIA_UP_BAR", 0, "TRIA_UP_BAR", ""},
	{338, "FORCE_FORCE", 0, "FORCE_FORCE", ""},
	{339, "FORCE_WIND", 0, "FORCE_WIND", ""},
	{340, "FORCE_VORTEX", 0, "FORCE_VORTEX", ""},
	{341, "FORCE_MAGNETIC", 0, "FORCE_MAGNETIC", ""},
	{342, "FORCE_HARMONIC", 0, "FORCE_HARMONIC", ""},
	{343, "FORCE_CHARGE", 0, "FORCE_CHARGE", ""},
	{344, "FORCE_LENNARDJONES", 0, "FORCE_LENNARDJONES", ""},
	{345, "FORCE_TEXTURE", 0, "FORCE_TEXTURE", ""},
	{346, "FORCE_CURVE", 0, "FORCE_CURVE", ""},
	{347, "FORCE_BOID", 0, "FORCE_BOID", ""},
	{348, "FORCE_TURBULENCE", 0, "FORCE_TURBULENCE", ""},
	{349, "FORCE_DRAG", 0, "FORCE_DRAG", ""},
	{350, "FORCE_SMOKEFLOW", 0, "FORCE_SMOKEFLOW", ""},
	{442, "MODIFIER", 0, "MODIFIER", ""},
	{443, "MOD_WAVE", 0, "MOD_WAVE", ""},
	{444, "MOD_BUILD", 0, "MOD_BUILD", ""},
	{445, "MOD_DECIM", 0, "MOD_DECIM", ""},
	{446, "MOD_MIRROR", 0, "MOD_MIRROR", ""},
	{447, "MOD_SOFT", 0, "MOD_SOFT", ""},
	{448, "MOD_SUBSURF", 0, "MOD_SUBSURF", ""},
	{449, "HOOK", 0, "HOOK", ""},
	{450, "MOD_PHYSICS", 0, "MOD_PHYSICS", ""},
	{451, "MOD_PARTICLES", 0, "MOD_PARTICLES", ""},
	{452, "MOD_BOOLEAN", 0, "MOD_BOOLEAN", ""},
	{453, "MOD_EDGESPLIT", 0, "MOD_EDGESPLIT", ""},
	{454, "MOD_ARRAY", 0, "MOD_ARRAY", ""},
	{455, "MOD_UVPROJECT", 0, "MOD_UVPROJECT", ""},
	{456, "MOD_DISPLACE", 0, "MOD_DISPLACE", ""},
	{457, "MOD_CURVE", 0, "MOD_CURVE", ""},
	{458, "MOD_LATTICE", 0, "MOD_LATTICE", ""},
	{459, "CONSTRAINT_DATA", 0, "CONSTRAINT_DATA", ""},
	{460, "MOD_ARMATURE", 0, "MOD_ARMATURE", ""},
	{461, "MOD_SHRINKWRAP", 0, "MOD_SHRINKWRAP", ""},
	{462, "MOD_CAST", 0, "MOD_CAST", ""},
	{463, "MOD_MESHDEFORM", 0, "MOD_MESHDEFORM", ""},
	{464, "MOD_BEVEL", 0, "MOD_BEVEL", ""},
	{465, "MOD_SMOOTH", 0, "MOD_SMOOTH", ""},
	{466, "MOD_SIMPLEDEFORM", 0, "MOD_SIMPLEDEFORM", ""},
	{467, "MOD_MASK", 0, "MOD_MASK", ""},
	{468, "MOD_CLOTH", 0, "MOD_CLOTH", ""},
	{469, "MOD_EXPLODE", 0, "MOD_EXPLODE", ""},
	{470, "MOD_FLUIDSIM", 0, "MOD_FLUIDSIM", ""},
	{471, "MOD_MULTIRES", 0, "MOD_MULTIRES", ""},
	{472, "MOD_SMOKE", 0, "MOD_SMOKE", ""},
	{473, "MOD_SOLIDIFY", 0, "MOD_SOLIDIFY", ""},
	{474, "MOD_SCREW", 0, "MOD_SCREW", ""},
	{475, "MOD_VERTEX_WEIGHT", 0, "MOD_VERTEX_WEIGHT", ""},
	{476, "MOD_DYNAMICPAINT", 0, "MOD_DYNAMICPAINT", ""},
	{477, "MOD_REMESH", 0, "MOD_REMESH", ""},
	{478, "MOD_OCEAN", 0, "MOD_OCEAN", ""},
	{479, "MOD_WARP", 0, "MOD_WARP", ""},
	{480, "MOD_SKIN", 0, "MOD_SKIN", ""},
	{481, "MOD_TRIANGULATE", 0, "MOD_TRIANGULATE", ""},
	{482, "MOD_WIREFRAME", 0, "MOD_WIREFRAME", ""},
	{494, "REC", 0, "REC", ""},
	{495, "PLAY", 0, "PLAY", ""},
	{496, "FF", 0, "FF", ""},
	{497, "REW", 0, "REW", ""},
	{498, "PAUSE", 0, "PAUSE", ""},
	{499, "PREV_KEYFRAME", 0, "PREV_KEYFRAME", ""},
	{500, "NEXT_KEYFRAME", 0, "NEXT_KEYFRAME", ""},
	{501, "PLAY_AUDIO", 0, "PLAY_AUDIO", ""},
	{502, "PLAY_REVERSE", 0, "PLAY_REVERSE", ""},
	{503, "PREVIEW_RANGE", 0, "PREVIEW_RANGE", ""},
	{504, "ACTION_TWEAK", 0, "ACTION_TWEAK", ""},
	{505, "PMARKER_ACT", 0, "PMARKER_ACT", ""},
	{506, "PMARKER_SEL", 0, "PMARKER_SEL", ""},
	{507, "PMARKER", 0, "PMARKER", ""},
	{508, "MARKER_HLT", 0, "MARKER_HLT", ""},
	{509, "MARKER", 0, "MARKER", ""},
	{510, "SPACE2", 0, "SPACE2", ""},
	{511, "SPACE3", 0, "SPACE3", ""},
	{512, "KEYINGSET", 0, "KEYINGSET", ""},
	{513, "KEY_DEHLT", 0, "KEY_DEHLT", ""},
	{514, "KEY_HLT", 0, "KEY_HLT", ""},
	{515, "MUTE_IPO_OFF", 0, "MUTE_IPO_OFF", ""},
	{516, "MUTE_IPO_ON", 0, "MUTE_IPO_ON", ""},
	{517, "VISIBLE_IPO_OFF", 0, "VISIBLE_IPO_OFF", ""},
	{518, "VISIBLE_IPO_ON", 0, "VISIBLE_IPO_ON", ""},
	{519, "DRIVER", 0, "DRIVER", ""},
	{520, "SOLO_OFF", 0, "SOLO_OFF", ""},
	{521, "SOLO_ON", 0, "SOLO_ON", ""},
	{522, "FRAME_PREV", 0, "FRAME_PREV", ""},
	{523, "FRAME_NEXT", 0, "FRAME_NEXT", ""},
	{524, "NLA_PUSHDOWN", 0, "NLA_PUSHDOWN", ""},
	{525, "IPO_CONSTANT", 0, "IPO_CONSTANT", ""},
	{526, "IPO_LINEAR", 0, "IPO_LINEAR", ""},
	{527, "IPO_BEZIER", 0, "IPO_BEZIER", ""},
	{528, "IPO_SINE", 0, "IPO_SINE", ""},
	{529, "IPO_QUAD", 0, "IPO_QUAD", ""},
	{530, "IPO_CUBIC", 0, "IPO_CUBIC", ""},
	{531, "IPO_QUART", 0, "IPO_QUART", ""},
	{532, "IPO_QUINT", 0, "IPO_QUINT", ""},
	{533, "IPO_EXPO", 0, "IPO_EXPO", ""},
	{534, "IPO_CIRC", 0, "IPO_CIRC", ""},
	{535, "IPO_BOUNCE", 0, "IPO_BOUNCE", ""},
	{536, "IPO_ELASTIC", 0, "IPO_ELASTIC", ""},
	{537, "IPO_BACK", 0, "IPO_BACK", ""},
	{538, "IPO_EASE_IN", 0, "IPO_EASE_IN", ""},
	{539, "IPO_EASE_OUT", 0, "IPO_EASE_OUT", ""},
	{540, "IPO_EASE_IN_OUT", 0, "IPO_EASE_IN_OUT", ""},
	{546, "VERTEXSEL", 0, "VERTEXSEL", ""},
	{547, "EDGESEL", 0, "EDGESEL", ""},
	{548, "FACESEL", 0, "FACESEL", ""},
	{549, "LOOPSEL", 0, "LOOPSEL", ""},
	{551, "ROTATE", 0, "ROTATE", ""},
	{552, "CURSOR", 0, "CURSOR", ""},
	{553, "ROTATECOLLECTION", 0, "ROTATECOLLECTION", ""},
	{554, "ROTATECENTER", 0, "ROTATECENTER", ""},
	{555, "ROTACTIVE", 0, "ROTACTIVE", ""},
	{556, "ALIGN", 0, "ALIGN", ""},
	{558, "SMOOTHCURVE", 0, "SMOOTHCURVE", ""},
	{559, "SPHERECURVE", 0, "SPHERECURVE", ""},
	{560, "ROOTCURVE", 0, "ROOTCURVE", ""},
	{561, "SHARPCURVE", 0, "SHARPCURVE", ""},
	{562, "LINCURVE", 0, "LINCURVE", ""},
	{563, "NOCURVE", 0, "NOCURVE", ""},
	{564, "RNDCURVE", 0, "RNDCURVE", ""},
	{565, "PROP_OFF", 0, "PROP_OFF", ""},
	{566, "PROP_ON", 0, "PROP_ON", ""},
	{567, "PROP_CON", 0, "PROP_CON", ""},
	{568, "SCULPT_DYNTOPO", 0, "SCULPT_DYNTOPO", ""},
	{569, "PARTICLE_POINT", 0, "PARTICLE_POINT", ""},
	{570, "PARTICLE_TIP", 0, "PARTICLE_TIP", ""},
	{571, "PARTICLE_PATH", 0, "PARTICLE_PATH", ""},
	{572, "MAN_TRANS", 0, "MAN_TRANS", ""},
	{573, "MAN_ROT", 0, "MAN_ROT", ""},
	{574, "MAN_SCALE", 0, "MAN_SCALE", ""},
	{575, "MANIPUL", 0, "MANIPUL", ""},
	{576, "SNAP_OFF", 0, "SNAP_OFF", ""},
	{577, "SNAP_ON", 0, "SNAP_ON", ""},
	{578, "SNAP_NORMAL", 0, "SNAP_NORMAL", ""},
	{579, "SNAP_INCREMENT", 0, "SNAP_INCREMENT", ""},
	{580, "SNAP_VERTEX", 0, "SNAP_VERTEX", ""},
	{581, "SNAP_EDGE", 0, "SNAP_EDGE", ""},
	{582, "SNAP_FACE", 0, "SNAP_FACE", ""},
	{583, "SNAP_VOLUME", 0, "SNAP_VOLUME", ""},
	{585, "STICKY_UVS_LOC", 0, "STICKY_UVS_LOC", ""},
	{586, "STICKY_UVS_DISABLE", 0, "STICKY_UVS_DISABLE", ""},
	{587, "STICKY_UVS_VERT", 0, "STICKY_UVS_VERT", ""},
	{588, "CLIPUV_DEHLT", 0, "CLIPUV_DEHLT", ""},
	{589, "CLIPUV_HLT", 0, "CLIPUV_HLT", ""},
	{590, "SNAP_PEEL_OBJECT", 0, "SNAP_PEEL_OBJECT", ""},
	{591, "GRID", 0, "GRID", ""},
	{598, "PASTEDOWN", 0, "PASTEDOWN", ""},
	{599, "COPYDOWN", 0, "COPYDOWN", ""},
	{600, "PASTEFLIPUP", 0, "PASTEFLIPUP", ""},
	{601, "PASTEFLIPDOWN", 0, "PASTEFLIPDOWN", ""},
	{606, "SNAP_SURFACE", 0, "SNAP_SURFACE", ""},
	{607, "AUTOMERGE_ON", 0, "AUTOMERGE_ON", ""},
	{608, "AUTOMERGE_OFF", 0, "AUTOMERGE_OFF", ""},
	{609, "RETOPO", 0, "RETOPO", ""},
	{610, "UV_VERTEXSEL", 0, "UV_VERTEXSEL", ""},
	{611, "UV_EDGESEL", 0, "UV_EDGESEL", ""},
	{612, "UV_FACESEL", 0, "UV_FACESEL", ""},
	{613, "UV_ISLANDSEL", 0, "UV_ISLANDSEL", ""},
	{614, "UV_SYNC_SELECT", 0, "UV_SYNC_SELECT", ""},
	{624, "BBOX", 0, "BBOX", ""},
	{625, "WIRE", 0, "WIRE", ""},
	{626, "SOLID", 0, "SOLID", ""},
	{627, "SMOOTH", 0, "SMOOTH", ""},
	{628, "POTATO", 0, "POTATO", ""},
	{630, "ORTHO", 0, "ORTHO", ""},
	{633, "LOCKVIEW_OFF", 0, "LOCKVIEW_OFF", ""},
	{634, "LOCKVIEW_ON", 0, "LOCKVIEW_ON", ""},
	{636, "AXIS_SIDE", 0, "AXIS_SIDE", ""},
	{637, "AXIS_FRONT", 0, "AXIS_FRONT", ""},
	{638, "AXIS_TOP", 0, "AXIS_TOP", ""},
	{639, "NDOF_DOM", 0, "NDOF_DOM", ""},
	{640, "NDOF_TURN", 0, "NDOF_TURN", ""},
	{641, "NDOF_FLY", 0, "NDOF_FLY", ""},
	{642, "NDOF_TRANS", 0, "NDOF_TRANS", ""},
	{643, "LAYER_USED", 0, "LAYER_USED", ""},
	{644, "LAYER_ACTIVE", 0, "LAYER_ACTIVE", ""},
	{676, "SORTALPHA", 0, "SORTALPHA", ""},
	{677, "SORTBYEXT", 0, "SORTBYEXT", ""},
	{678, "SORTTIME", 0, "SORTTIME", ""},
	{679, "SORTSIZE", 0, "SORTSIZE", ""},
	{680, "LONGDISPLAY", 0, "LONGDISPLAY", ""},
	{681, "SHORTDISPLAY", 0, "SHORTDISPLAY", ""},
	{682, "GHOST", 0, "GHOST", ""},
	{683, "IMGDISPLAY", 0, "IMGDISPLAY", ""},
	{684, "SAVE_AS", 0, "SAVE_AS", ""},
	{685, "SAVE_COPY", 0, "SAVE_COPY", ""},
	{686, "BOOKMARKS", 0, "BOOKMARKS", ""},
	{687, "FONTPREVIEW", 0, "FONTPREVIEW", ""},
	{688, "FILTER", 0, "FILTER", ""},
	{689, "NEWFOLDER", 0, "NEWFOLDER", ""},
	{690, "OPEN_RECENT", 0, "OPEN_RECENT", ""},
	{691, "FILE_PARENT", 0, "FILE_PARENT", ""},
	{692, "FILE_REFRESH", 0, "FILE_REFRESH", ""},
	{693, "FILE_FOLDER", 0, "FILE_FOLDER", ""},
	{694, "FILE_BLANK", 0, "FILE_BLANK", ""},
	{695, "FILE_BLEND", 0, "FILE_BLEND", ""},
	{696, "FILE_IMAGE", 0, "FILE_IMAGE", ""},
	{697, "FILE_MOVIE", 0, "FILE_MOVIE", ""},
	{698, "FILE_SCRIPT", 0, "FILE_SCRIPT", ""},
	{699, "FILE_SOUND", 0, "FILE_SOUND", ""},
	{700, "FILE_FONT", 0, "FILE_FONT", ""},
	{701, "FILE_TEXT", 0, "FILE_TEXT", ""},
	{702, "RECOVER_AUTO", 0, "RECOVER_AUTO", ""},
	{703, "SAVE_PREFS", 0, "SAVE_PREFS", ""},
	{704, "LINK_BLEND", 0, "LINK_BLEND", ""},
	{705, "APPEND_BLEND", 0, "APPEND_BLEND", ""},
	{706, "IMPORT", 0, "IMPORT", ""},
	{707, "EXPORT", 0, "EXPORT", ""},
	{708, "EXTERNAL_DATA", 0, "EXTERNAL_DATA", ""},
	{709, "LOAD_FACTORY", 0, "LOAD_FACTORY", ""},
	{715, "LOOP_BACK", 0, "LOOP_BACK", ""},
	{716, "LOOP_FORWARDS", 0, "LOOP_FORWARDS", ""},
	{717, "BACK", 0, "BACK", ""},
	{718, "FORWARD", 0, "FORWARD", ""},
	{726, "FILE_BACKUP", 0, "FILE_BACKUP", ""},
	{727, "DISK_DRIVE", 0, "DISK_DRIVE", ""},
	{728, "MATPLANE", 0, "MATPLANE", ""},
	{729, "MATSPHERE", 0, "MATSPHERE", ""},
	{730, "MATCUBE", 0, "MATCUBE", ""},
	{731, "MONKEY", 0, "MONKEY", ""},
	{732, "HAIR", 0, "HAIR", ""},
	{733, "ALIASED", 0, "ALIASED", ""},
	{734, "ANTIALIASED", 0, "ANTIALIASED", ""},
	{735, "MAT_SPHERE_SKY", 0, "MAT_SPHERE_SKY", ""},
	{740, "WORDWRAP_OFF", 0, "WORDWRAP_OFF", ""},
	{741, "WORDWRAP_ON", 0, "WORDWRAP_ON", ""},
	{742, "SYNTAX_OFF", 0, "SYNTAX_OFF", ""},
	{743, "SYNTAX_ON", 0, "SYNTAX_ON", ""},
	{744, "LINENUMBERS_OFF", 0, "LINENUMBERS_OFF", ""},
	{745, "LINENUMBERS_ON", 0, "LINENUMBERS_ON", ""},
	{746, "SCRIPTPLUGINS", 0, "SCRIPTPLUGINS", ""},
	{754, "SEQ_SEQUENCER", 0, "SEQ_SEQUENCER", ""},
	{755, "SEQ_PREVIEW", 0, "SEQ_PREVIEW", ""},
	{756, "SEQ_LUMA_WAVEFORM", 0, "SEQ_LUMA_WAVEFORM", ""},
	{757, "SEQ_CHROMA_SCOPE", 0, "SEQ_CHROMA_SCOPE", ""},
	{758, "SEQ_HISTOGRAM", 0, "SEQ_HISTOGRAM", ""},
	{759, "SEQ_SPLITVIEW", 0, "SEQ_SPLITVIEW", ""},
	{763, "IMAGE_RGB", 0, "IMAGE_RGB", ""},
	{764, "IMAGE_RGB_ALPHA", 0, "IMAGE_RGB_ALPHA", ""},
	{765, "IMAGE_ALPHA", 0, "IMAGE_ALPHA", ""},
	{766, "IMAGE_ZDEPTH", 0, "IMAGE_ZDEPTH", ""},
	{767, "IMAGEFILE", 0, "IMAGEFILE", ""},
	{780, "BRUSH_ADD", 0, "BRUSH_ADD", ""},
	{781, "BRUSH_BLOB", 0, "BRUSH_BLOB", ""},
	{782, "BRUSH_BLUR", 0, "BRUSH_BLUR", ""},
	{783, "BRUSH_CLAY", 0, "BRUSH_CLAY", ""},
	{784, "BRUSH_CLAY_STRIPS", 0, "BRUSH_CLAY_STRIPS", ""},
	{785, "BRUSH_CLONE", 0, "BRUSH_CLONE", ""},
	{786, "BRUSH_CREASE", 0, "BRUSH_CREASE", ""},
	{787, "BRUSH_DARKEN", 0, "BRUSH_DARKEN", ""},
	{788, "BRUSH_FILL", 0, "BRUSH_FILL", ""},
	{789, "BRUSH_FLATTEN", 0, "BRUSH_FLATTEN", ""},
	{790, "BRUSH_GRAB", 0, "BRUSH_GRAB", ""},
	{791, "BRUSH_INFLATE", 0, "BRUSH_INFLATE", ""},
	{792, "BRUSH_LAYER", 0, "BRUSH_LAYER", ""},
	{793, "BRUSH_LIGHTEN", 0, "BRUSH_LIGHTEN", ""},
	{794, "BRUSH_MASK", 0, "BRUSH_MASK", ""},
	{795, "BRUSH_MIX", 0, "BRUSH_MIX", ""},
	{796, "BRUSH_MULTIPLY", 0, "BRUSH_MULTIPLY", ""},
	{797, "BRUSH_NUDGE", 0, "BRUSH_NUDGE", ""},
	{798, "BRUSH_PINCH", 0, "BRUSH_PINCH", ""},
	{799, "BRUSH_SCRAPE", 0, "BRUSH_SCRAPE", ""},
	{800, "BRUSH_SCULPT_DRAW", 0, "BRUSH_SCULPT_DRAW", ""},
	{801, "BRUSH_SMEAR", 0, "BRUSH_SMEAR", ""},
	{802, "BRUSH_SMOOTH", 0, "BRUSH_SMOOTH", ""},
	{803, "BRUSH_SNAKE_HOOK", 0, "BRUSH_SNAKE_HOOK", ""},
	{804, "BRUSH_SOFTEN", 0, "BRUSH_SOFTEN", ""},
	{805, "BRUSH_SUBTRACT", 0, "BRUSH_SUBTRACT", ""},
	{806, "BRUSH_TEXDRAW", 0, "BRUSH_TEXDRAW", ""},
	{807, "BRUSH_TEXFILL", 0, "BRUSH_TEXFILL", ""},
	{808, "BRUSH_TEXMASK", 0, "BRUSH_TEXMASK", ""},
	{809, "BRUSH_THUMB", 0, "BRUSH_THUMB", ""},
	{810, "BRUSH_ROTATE", 0, "BRUSH_ROTATE", ""},
	{811, "BRUSH_VERTEXDRAW", 0, "BRUSH_VERTEXDRAW", ""},
	{812, "MATCAP_01", 0, "MATCAP_01", ""},
	{813, "MATCAP_02", 0, "MATCAP_02", ""},
	{814, "MATCAP_03", 0, "MATCAP_03", ""},
	{815, "MATCAP_04", 0, "MATCAP_04", ""},
	{816, "MATCAP_05", 0, "MATCAP_05", ""},
	{817, "MATCAP_06", 0, "MATCAP_06", ""},
	{818, "MATCAP_07", 0, "MATCAP_07", ""},
	{819, "MATCAP_08", 0, "MATCAP_08", ""},
	{820, "MATCAP_09", 0, "MATCAP_09", ""},
	{821, "MATCAP_10", 0, "MATCAP_10", ""},
	{822, "MATCAP_11", 0, "MATCAP_11", ""},
	{823, "MATCAP_12", 0, "MATCAP_12", ""},
	{824, "MATCAP_13", 0, "MATCAP_13", ""},
	{825, "MATCAP_14", 0, "MATCAP_14", ""},
	{826, "MATCAP_15", 0, "MATCAP_15", ""},
	{827, "MATCAP_16", 0, "MATCAP_16", ""},
	{828, "MATCAP_17", 0, "MATCAP_17", ""},
	{829, "MATCAP_18", 0, "MATCAP_18", ""},
	{830, "MATCAP_19", 0, "MATCAP_19", ""},
	{831, "MATCAP_20", 0, "MATCAP_20", ""},
	{832, "MATCAP_21", 0, "MATCAP_21", ""},
	{833, "MATCAP_22", 0, "MATCAP_22", ""},
	{834, "MATCAP_23", 0, "MATCAP_23", ""},
	{835, "MATCAP_24", 0, "MATCAP_24", ""},
	{836, "VIEW3D_VEC", 0, "VIEW3D_VEC", ""},
	{837, "EDIT_VEC", 0, "EDIT_VEC", ""},
	{838, "EDITMODE_VEC_DEHLT", 0, "EDITMODE_VEC_DEHLT", ""},
	{839, "EDITMODE_VEC_HLT", 0, "EDITMODE_VEC_HLT", ""},
	{840, "DISCLOSURE_TRI_RIGHT_VEC", 0, "DISCLOSURE_TRI_RIGHT_VEC", ""},
	{841, "DISCLOSURE_TRI_DOWN_VEC", 0, "DISCLOSURE_TRI_DOWN_VEC", ""},
	{842, "MOVE_UP_VEC", 0, "MOVE_UP_VEC", ""},
	{843, "MOVE_DOWN_VEC", 0, "MOVE_DOWN_VEC", ""},
	{844, "X_VEC", 0, "X_VEC", ""},
	{845, "SMALL_TRI_RIGHT_VEC", 0, "SMALL_TRI_RIGHT_VEC", ""},
	{0, NULL, 0, NULL, NULL}
};

EnumPropertyRNA rna_UILayout_prop_search_icon = {
	{NULL, (PropertyRNA *)&rna_UILayout_prop_search_translate,
	-1, "icon", 3, "Icon",
	"Override automatic icon of the item",
	0, "*",
	PROP_ENUM, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	NULL, NULL, NULL, NULL, NULL, NULL, rna_UILayout_prop_search_icon_items, 542, 0
};

FunctionRNA rna_UILayout_prop_search_func = {
	{(FunctionRNA *)&rna_UILayout_operator_func, (FunctionRNA *)&rna_UILayout_prop_enum_func,
	NULL,
	{(PropertyRNA *)&rna_UILayout_prop_search_data, (PropertyRNA *)&rna_UILayout_prop_search_icon}},
	"prop_search", 0, "prop_search",
	UILayout_prop_search_call,
	NULL
};

StringPropertyRNA rna_UILayout_operator_operator = {
	{(PropertyRNA *)&rna_UILayout_operator_text, NULL,
	-1, "operator", 262149, "",
	"Identifier of the operator",
	0, "*",
	PROP_STRING, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	NULL, NULL, NULL, NULL, NULL, NULL, 0, ""
};

StringPropertyRNA rna_UILayout_operator_text = {
	{(PropertyRNA *)&rna_UILayout_operator_text_ctxt, (PropertyRNA *)&rna_UILayout_operator_operator,
	-1, "text", 262145, "",
	"Override automatic text of the item",
	0, "*",
	PROP_STRING, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	NULL, NULL, NULL, NULL, NULL, NULL, 0, ""
};

StringPropertyRNA rna_UILayout_operator_text_ctxt = {
	{(PropertyRNA *)&rna_UILayout_operator_translate, (PropertyRNA *)&rna_UILayout_operator_text,
	-1, "text_ctxt", 262145, "",
	"Override automatic translation context of the given text",
	0, "*",
	PROP_STRING, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	NULL, NULL, NULL, NULL, NULL, NULL, 0, ""
};

BoolPropertyRNA rna_UILayout_operator_translate = {
	{(PropertyRNA *)&rna_UILayout_operator_icon, (PropertyRNA *)&rna_UILayout_operator_text_ctxt,
	-1, "translate", 3, "",
	"Translate the given text, when UI translation is enabled",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 1, NULL
};

static EnumPropertyItem rna_UILayout_operator_icon_items[543] = {
	{0, "NONE", 0, "NONE", ""},
	{1, "QUESTION", 0, "QUESTION", ""},
	{2, "ERROR", 0, "ERROR", ""},
	{3, "CANCEL", 0, "CANCEL", ""},
	{4, "TRIA_RIGHT", 0, "TRIA_RIGHT", ""},
	{5, "TRIA_DOWN", 0, "TRIA_DOWN", ""},
	{6, "TRIA_LEFT", 0, "TRIA_LEFT", ""},
	{7, "TRIA_UP", 0, "TRIA_UP", ""},
	{8, "ARROW_LEFTRIGHT", 0, "ARROW_LEFTRIGHT", ""},
	{9, "PLUS", 0, "PLUS", ""},
	{10, "DISCLOSURE_TRI_DOWN", 0, "DISCLOSURE_TRI_DOWN", ""},
	{11, "DISCLOSURE_TRI_RIGHT", 0, "DISCLOSURE_TRI_RIGHT", ""},
	{12, "RADIOBUT_OFF", 0, "RADIOBUT_OFF", ""},
	{13, "RADIOBUT_ON", 0, "RADIOBUT_ON", ""},
	{14, "MENU_PANEL", 0, "MENU_PANEL", ""},
	{15, "BLENDER", 0, "BLENDER", ""},
	{16, "GRIP", 0, "GRIP", ""},
	{17, "DOT", 0, "DOT", ""},
	{18, "COLLAPSEMENU", 0, "COLLAPSEMENU", ""},
	{19, "X", 0, "X", ""},
	{21, "GO_LEFT", 0, "GO_LEFT", ""},
	{22, "PLUG", 0, "PLUG", ""},
	{23, "UI", 0, "UI", ""},
	{24, "NODE", 0, "NODE", ""},
	{25, "NODE_SEL", 0, "NODE_SEL", ""},
	{26, "FULLSCREEN", 0, "FULLSCREEN", ""},
	{27, "SPLITSCREEN", 0, "SPLITSCREEN", ""},
	{28, "RIGHTARROW_THIN", 0, "RIGHTARROW_THIN", ""},
	{29, "BORDERMOVE", 0, "BORDERMOVE", ""},
	{30, "VIEWZOOM", 0, "VIEWZOOM", ""},
	{31, "ZOOMIN", 0, "ZOOMIN", ""},
	{32, "ZOOMOUT", 0, "ZOOMOUT", ""},
	{33, "PANEL_CLOSE", 0, "PANEL_CLOSE", ""},
	{34, "COPY_ID", 0, "COPY_ID", ""},
	{35, "EYEDROPPER", 0, "EYEDROPPER", ""},
	{36, "LINK_AREA", 0, "LINK_AREA", ""},
	{37, "AUTO", 0, "AUTO", ""},
	{38, "CHECKBOX_DEHLT", 0, "CHECKBOX_DEHLT", ""},
	{39, "CHECKBOX_HLT", 0, "CHECKBOX_HLT", ""},
	{40, "UNLOCKED", 0, "UNLOCKED", ""},
	{41, "LOCKED", 0, "LOCKED", ""},
	{42, "UNPINNED", 0, "UNPINNED", ""},
	{43, "PINNED", 0, "PINNED", ""},
	{44, "SCREEN_BACK", 0, "SCREEN_BACK", ""},
	{45, "RIGHTARROW", 0, "RIGHTARROW", ""},
	{46, "DOWNARROW_HLT", 0, "DOWNARROW_HLT", ""},
	{47, "DOTSUP", 0, "DOTSUP", ""},
	{48, "DOTSDOWN", 0, "DOTSDOWN", ""},
	{49, "LINK", 0, "LINK", ""},
	{50, "INLINK", 0, "INLINK", ""},
	{51, "PLUGIN", 0, "PLUGIN", ""},
	{52, "HELP", 0, "HELP", ""},
	{53, "GHOST_ENABLED", 0, "GHOST_ENABLED", ""},
	{54, "COLOR", 0, "COLOR", ""},
	{55, "LINKED", 0, "LINKED", ""},
	{56, "UNLINKED", 0, "UNLINKED", ""},
	{57, "HAND", 0, "HAND", ""},
	{58, "ZOOM_ALL", 0, "ZOOM_ALL", ""},
	{59, "ZOOM_SELECTED", 0, "ZOOM_SELECTED", ""},
	{60, "ZOOM_PREVIOUS", 0, "ZOOM_PREVIOUS", ""},
	{61, "ZOOM_IN", 0, "ZOOM_IN", ""},
	{62, "ZOOM_OUT", 0, "ZOOM_OUT", ""},
	{63, "RENDER_REGION", 0, "RENDER_REGION", ""},
	{64, "BORDER_RECT", 0, "BORDER_RECT", ""},
	{65, "BORDER_LASSO", 0, "BORDER_LASSO", ""},
	{66, "FREEZE", 0, "FREEZE", ""},
	{67, "STYLUS_PRESSURE", 0, "STYLUS_PRESSURE", ""},
	{68, "GHOST_DISABLED", 0, "GHOST_DISABLED", ""},
	{69, "NEW", 0, "NEW", ""},
	{70, "FILE_TICK", 0, "FILE_TICK", ""},
	{71, "QUIT", 0, "QUIT", ""},
	{72, "URL", 0, "URL", ""},
	{73, "RECOVER_LAST", 0, "RECOVER_LAST", ""},
	{75, "FULLSCREEN_ENTER", 0, "FULLSCREEN_ENTER", ""},
	{76, "FULLSCREEN_EXIT", 0, "FULLSCREEN_EXIT", ""},
	{77, "BLANK1", 0, "BLANK1", ""},
	{78, "LAMP", 0, "LAMP", ""},
	{79, "MATERIAL", 0, "MATERIAL", ""},
	{80, "TEXTURE", 0, "TEXTURE", ""},
	{81, "ANIM", 0, "ANIM", ""},
	{82, "WORLD", 0, "WORLD", ""},
	{83, "SCENE", 0, "SCENE", ""},
	{84, "EDIT", 0, "EDIT", ""},
	{85, "GAME", 0, "GAME", ""},
	{86, "RADIO", 0, "RADIO", ""},
	{87, "SCRIPT", 0, "SCRIPT", ""},
	{88, "PARTICLES", 0, "PARTICLES", ""},
	{89, "PHYSICS", 0, "PHYSICS", ""},
	{90, "SPEAKER", 0, "SPEAKER", ""},
	{91, "TEXTURE_SHADED", 0, "TEXTURE_SHADED", ""},
	{104, "VIEW3D", 0, "VIEW3D", ""},
	{105, "IPO", 0, "IPO", ""},
	{106, "OOPS", 0, "OOPS", ""},
	{107, "BUTS", 0, "BUTS", ""},
	{108, "FILESEL", 0, "FILESEL", ""},
	{109, "IMAGE_COL", 0, "IMAGE_COL", ""},
	{110, "INFO", 0, "INFO", ""},
	{111, "SEQUENCE", 0, "SEQUENCE", ""},
	{112, "TEXT", 0, "TEXT", ""},
	{113, "IMASEL", 0, "IMASEL", ""},
	{114, "SOUND", 0, "SOUND", ""},
	{115, "ACTION", 0, "ACTION", ""},
	{116, "NLA", 0, "NLA", ""},
	{117, "SCRIPTWIN", 0, "SCRIPTWIN", ""},
	{118, "TIME", 0, "TIME", ""},
	{119, "NODETREE", 0, "NODETREE", ""},
	{120, "LOGIC", 0, "LOGIC", ""},
	{121, "CONSOLE", 0, "CONSOLE", ""},
	{122, "PREFERENCES", 0, "PREFERENCES", ""},
	{123, "CLIP", 0, "CLIP", ""},
	{124, "ASSET_MANAGER", 0, "ASSET_MANAGER", ""},
	{130, "OBJECT_DATAMODE", 0, "OBJECT_DATAMODE", ""},
	{131, "EDITMODE_HLT", 0, "EDITMODE_HLT", ""},
	{132, "FACESEL_HLT", 0, "FACESEL_HLT", ""},
	{133, "VPAINT_HLT", 0, "VPAINT_HLT", ""},
	{134, "TPAINT_HLT", 0, "TPAINT_HLT", ""},
	{135, "WPAINT_HLT", 0, "WPAINT_HLT", ""},
	{136, "SCULPTMODE_HLT", 0, "SCULPTMODE_HLT", ""},
	{137, "POSE_HLT", 0, "POSE_HLT", ""},
	{138, "PARTICLEMODE", 0, "PARTICLEMODE", ""},
	{139, "LIGHTPAINT", 0, "LIGHTPAINT", ""},
	{156, "SCENE_DATA", 0, "SCENE_DATA", ""},
	{157, "RENDERLAYERS", 0, "RENDERLAYERS", ""},
	{158, "WORLD_DATA", 0, "WORLD_DATA", ""},
	{159, "OBJECT_DATA", 0, "OBJECT_DATA", ""},
	{160, "MESH_DATA", 0, "MESH_DATA", ""},
	{161, "CURVE_DATA", 0, "CURVE_DATA", ""},
	{162, "META_DATA", 0, "META_DATA", ""},
	{163, "LATTICE_DATA", 0, "LATTICE_DATA", ""},
	{164, "LAMP_DATA", 0, "LAMP_DATA", ""},
	{165, "MATERIAL_DATA", 0, "MATERIAL_DATA", ""},
	{166, "TEXTURE_DATA", 0, "TEXTURE_DATA", ""},
	{167, "ANIM_DATA", 0, "ANIM_DATA", ""},
	{168, "CAMERA_DATA", 0, "CAMERA_DATA", ""},
	{169, "PARTICLE_DATA", 0, "PARTICLE_DATA", ""},
	{170, "LIBRARY_DATA_DIRECT", 0, "LIBRARY_DATA_DIRECT", ""},
	{171, "GROUP", 0, "GROUP", ""},
	{172, "ARMATURE_DATA", 0, "ARMATURE_DATA", ""},
	{173, "POSE_DATA", 0, "POSE_DATA", ""},
	{174, "BONE_DATA", 0, "BONE_DATA", ""},
	{175, "CONSTRAINT", 0, "CONSTRAINT", ""},
	{176, "SHAPEKEY_DATA", 0, "SHAPEKEY_DATA", ""},
	{177, "CONSTRAINT_BONE", 0, "CONSTRAINT_BONE", ""},
	{178, "CAMERA_STEREO", 0, "CAMERA_STEREO", ""},
	{179, "PACKAGE", 0, "PACKAGE", ""},
	{180, "UGLYPACKAGE", 0, "UGLYPACKAGE", ""},
	{182, "BRUSH_DATA", 0, "BRUSH_DATA", ""},
	{183, "IMAGE_DATA", 0, "IMAGE_DATA", ""},
	{184, "FILE", 0, "FILE", ""},
	{185, "FCURVE", 0, "FCURVE", ""},
	{186, "FONT_DATA", 0, "FONT_DATA", ""},
	{187, "RENDER_RESULT", 0, "RENDER_RESULT", ""},
	{188, "SURFACE_DATA", 0, "SURFACE_DATA", ""},
	{189, "EMPTY_DATA", 0, "EMPTY_DATA", ""},
	{190, "SETTINGS", 0, "SETTINGS", ""},
	{191, "RENDER_ANIMATION", 0, "RENDER_ANIMATION", ""},
	{192, "RENDER_STILL", 0, "RENDER_STILL", ""},
	{194, "BOIDS", 0, "BOIDS", ""},
	{195, "STRANDS", 0, "STRANDS", ""},
	{196, "LIBRARY_DATA_INDIRECT", 0, "LIBRARY_DATA_INDIRECT", ""},
	{197, "GREASEPENCIL", 0, "GREASEPENCIL", ""},
	{198, "LINE_DATA", 0, "LINE_DATA", ""},
	{200, "GROUP_BONE", 0, "GROUP_BONE", ""},
	{201, "GROUP_VERTEX", 0, "GROUP_VERTEX", ""},
	{202, "GROUP_VCOL", 0, "GROUP_VCOL", ""},
	{203, "GROUP_UVS", 0, "GROUP_UVS", ""},
	{206, "RNA", 0, "RNA", ""},
	{207, "RNA_ADD", 0, "RNA_ADD", ""},
	{234, "OUTLINER_OB_EMPTY", 0, "OUTLINER_OB_EMPTY", ""},
	{235, "OUTLINER_OB_MESH", 0, "OUTLINER_OB_MESH", ""},
	{236, "OUTLINER_OB_CURVE", 0, "OUTLINER_OB_CURVE", ""},
	{237, "OUTLINER_OB_LATTICE", 0, "OUTLINER_OB_LATTICE", ""},
	{238, "OUTLINER_OB_META", 0, "OUTLINER_OB_META", ""},
	{239, "OUTLINER_OB_LAMP", 0, "OUTLINER_OB_LAMP", ""},
	{240, "OUTLINER_OB_CAMERA", 0, "OUTLINER_OB_CAMERA", ""},
	{241, "OUTLINER_OB_ARMATURE", 0, "OUTLINER_OB_ARMATURE", ""},
	{242, "OUTLINER_OB_FONT", 0, "OUTLINER_OB_FONT", ""},
	{243, "OUTLINER_OB_SURFACE", 0, "OUTLINER_OB_SURFACE", ""},
	{244, "OUTLINER_OB_SPEAKER", 0, "OUTLINER_OB_SPEAKER", ""},
	{253, "RESTRICT_VIEW_OFF", 0, "RESTRICT_VIEW_OFF", ""},
	{254, "RESTRICT_VIEW_ON", 0, "RESTRICT_VIEW_ON", ""},
	{255, "RESTRICT_SELECT_OFF", 0, "RESTRICT_SELECT_OFF", ""},
	{256, "RESTRICT_SELECT_ON", 0, "RESTRICT_SELECT_ON", ""},
	{257, "RESTRICT_RENDER_OFF", 0, "RESTRICT_RENDER_OFF", ""},
	{258, "RESTRICT_RENDER_ON", 0, "RESTRICT_RENDER_ON", ""},
	{260, "OUTLINER_DATA_EMPTY", 0, "OUTLINER_DATA_EMPTY", ""},
	{261, "OUTLINER_DATA_MESH", 0, "OUTLINER_DATA_MESH", ""},
	{262, "OUTLINER_DATA_CURVE", 0, "OUTLINER_DATA_CURVE", ""},
	{263, "OUTLINER_DATA_LATTICE", 0, "OUTLINER_DATA_LATTICE", ""},
	{264, "OUTLINER_DATA_META", 0, "OUTLINER_DATA_META", ""},
	{265, "OUTLINER_DATA_LAMP", 0, "OUTLINER_DATA_LAMP", ""},
	{266, "OUTLINER_DATA_CAMERA", 0, "OUTLINER_DATA_CAMERA", ""},
	{267, "OUTLINER_DATA_ARMATURE", 0, "OUTLINER_DATA_ARMATURE", ""},
	{268, "OUTLINER_DATA_FONT", 0, "OUTLINER_DATA_FONT", ""},
	{269, "OUTLINER_DATA_SURFACE", 0, "OUTLINER_DATA_SURFACE", ""},
	{270, "OUTLINER_DATA_SPEAKER", 0, "OUTLINER_DATA_SPEAKER", ""},
	{271, "OUTLINER_DATA_POSE", 0, "OUTLINER_DATA_POSE", ""},
	{286, "MESH_PLANE", 0, "MESH_PLANE", ""},
	{287, "MESH_CUBE", 0, "MESH_CUBE", ""},
	{288, "MESH_CIRCLE", 0, "MESH_CIRCLE", ""},
	{289, "MESH_UVSPHERE", 0, "MESH_UVSPHERE", ""},
	{290, "MESH_ICOSPHERE", 0, "MESH_ICOSPHERE", ""},
	{291, "MESH_GRID", 0, "MESH_GRID", ""},
	{292, "MESH_MONKEY", 0, "MESH_MONKEY", ""},
	{293, "MESH_CYLINDER", 0, "MESH_CYLINDER", ""},
	{294, "MESH_TORUS", 0, "MESH_TORUS", ""},
	{295, "MESH_CONE", 0, "MESH_CONE", ""},
	{298, "LAMP_POINT", 0, "LAMP_POINT", ""},
	{299, "LAMP_SUN", 0, "LAMP_SUN", ""},
	{300, "LAMP_SPOT", 0, "LAMP_SPOT", ""},
	{301, "LAMP_HEMI", 0, "LAMP_HEMI", ""},
	{302, "LAMP_AREA", 0, "LAMP_AREA", ""},
	{305, "META_EMPTY", 0, "META_EMPTY", ""},
	{306, "META_PLANE", 0, "META_PLANE", ""},
	{307, "META_CUBE", 0, "META_CUBE", ""},
	{308, "META_BALL", 0, "META_BALL", ""},
	{309, "META_ELLIPSOID", 0, "META_ELLIPSOID", ""},
	{310, "META_CAPSULE", 0, "META_CAPSULE", ""},
	{312, "SURFACE_NCURVE", 0, "SURFACE_NCURVE", ""},
	{313, "SURFACE_NCIRCLE", 0, "SURFACE_NCIRCLE", ""},
	{314, "SURFACE_NSURFACE", 0, "SURFACE_NSURFACE", ""},
	{315, "SURFACE_NCYLINDER", 0, "SURFACE_NCYLINDER", ""},
	{316, "SURFACE_NSPHERE", 0, "SURFACE_NSPHERE", ""},
	{317, "SURFACE_NTORUS", 0, "SURFACE_NTORUS", ""},
	{321, "CURVE_BEZCURVE", 0, "CURVE_BEZCURVE", ""},
	{322, "CURVE_BEZCIRCLE", 0, "CURVE_BEZCIRCLE", ""},
	{323, "CURVE_NCURVE", 0, "CURVE_NCURVE", ""},
	{324, "CURVE_NCIRCLE", 0, "CURVE_NCIRCLE", ""},
	{325, "CURVE_PATH", 0, "CURVE_PATH", ""},
	{331, "COLOR_RED", 0, "COLOR_RED", ""},
	{332, "COLOR_GREEN", 0, "COLOR_GREEN", ""},
	{333, "COLOR_BLUE", 0, "COLOR_BLUE", ""},
	{334, "TRIA_RIGHT_BAR", 0, "TRIA_RIGHT_BAR", ""},
	{335, "TRIA_DOWN_BAR", 0, "TRIA_DOWN_BAR", ""},
	{336, "TRIA_LEFT_BAR", 0, "TRIA_LEFT_BAR", ""},
	{337, "TRIA_UP_BAR", 0, "TRIA_UP_BAR", ""},
	{338, "FORCE_FORCE", 0, "FORCE_FORCE", ""},
	{339, "FORCE_WIND", 0, "FORCE_WIND", ""},
	{340, "FORCE_VORTEX", 0, "FORCE_VORTEX", ""},
	{341, "FORCE_MAGNETIC", 0, "FORCE_MAGNETIC", ""},
	{342, "FORCE_HARMONIC", 0, "FORCE_HARMONIC", ""},
	{343, "FORCE_CHARGE", 0, "FORCE_CHARGE", ""},
	{344, "FORCE_LENNARDJONES", 0, "FORCE_LENNARDJONES", ""},
	{345, "FORCE_TEXTURE", 0, "FORCE_TEXTURE", ""},
	{346, "FORCE_CURVE", 0, "FORCE_CURVE", ""},
	{347, "FORCE_BOID", 0, "FORCE_BOID", ""},
	{348, "FORCE_TURBULENCE", 0, "FORCE_TURBULENCE", ""},
	{349, "FORCE_DRAG", 0, "FORCE_DRAG", ""},
	{350, "FORCE_SMOKEFLOW", 0, "FORCE_SMOKEFLOW", ""},
	{442, "MODIFIER", 0, "MODIFIER", ""},
	{443, "MOD_WAVE", 0, "MOD_WAVE", ""},
	{444, "MOD_BUILD", 0, "MOD_BUILD", ""},
	{445, "MOD_DECIM", 0, "MOD_DECIM", ""},
	{446, "MOD_MIRROR", 0, "MOD_MIRROR", ""},
	{447, "MOD_SOFT", 0, "MOD_SOFT", ""},
	{448, "MOD_SUBSURF", 0, "MOD_SUBSURF", ""},
	{449, "HOOK", 0, "HOOK", ""},
	{450, "MOD_PHYSICS", 0, "MOD_PHYSICS", ""},
	{451, "MOD_PARTICLES", 0, "MOD_PARTICLES", ""},
	{452, "MOD_BOOLEAN", 0, "MOD_BOOLEAN", ""},
	{453, "MOD_EDGESPLIT", 0, "MOD_EDGESPLIT", ""},
	{454, "MOD_ARRAY", 0, "MOD_ARRAY", ""},
	{455, "MOD_UVPROJECT", 0, "MOD_UVPROJECT", ""},
	{456, "MOD_DISPLACE", 0, "MOD_DISPLACE", ""},
	{457, "MOD_CURVE", 0, "MOD_CURVE", ""},
	{458, "MOD_LATTICE", 0, "MOD_LATTICE", ""},
	{459, "CONSTRAINT_DATA", 0, "CONSTRAINT_DATA", ""},
	{460, "MOD_ARMATURE", 0, "MOD_ARMATURE", ""},
	{461, "MOD_SHRINKWRAP", 0, "MOD_SHRINKWRAP", ""},
	{462, "MOD_CAST", 0, "MOD_CAST", ""},
	{463, "MOD_MESHDEFORM", 0, "MOD_MESHDEFORM", ""},
	{464, "MOD_BEVEL", 0, "MOD_BEVEL", ""},
	{465, "MOD_SMOOTH", 0, "MOD_SMOOTH", ""},
	{466, "MOD_SIMPLEDEFORM", 0, "MOD_SIMPLEDEFORM", ""},
	{467, "MOD_MASK", 0, "MOD_MASK", ""},
	{468, "MOD_CLOTH", 0, "MOD_CLOTH", ""},
	{469, "MOD_EXPLODE", 0, "MOD_EXPLODE", ""},
	{470, "MOD_FLUIDSIM", 0, "MOD_FLUIDSIM", ""},
	{471, "MOD_MULTIRES", 0, "MOD_MULTIRES", ""},
	{472, "MOD_SMOKE", 0, "MOD_SMOKE", ""},
	{473, "MOD_SOLIDIFY", 0, "MOD_SOLIDIFY", ""},
	{474, "MOD_SCREW", 0, "MOD_SCREW", ""},
	{475, "MOD_VERTEX_WEIGHT", 0, "MOD_VERTEX_WEIGHT", ""},
	{476, "MOD_DYNAMICPAINT", 0, "MOD_DYNAMICPAINT", ""},
	{477, "MOD_REMESH", 0, "MOD_REMESH", ""},
	{478, "MOD_OCEAN", 0, "MOD_OCEAN", ""},
	{479, "MOD_WARP", 0, "MOD_WARP", ""},
	{480, "MOD_SKIN", 0, "MOD_SKIN", ""},
	{481, "MOD_TRIANGULATE", 0, "MOD_TRIANGULATE", ""},
	{482, "MOD_WIREFRAME", 0, "MOD_WIREFRAME", ""},
	{494, "REC", 0, "REC", ""},
	{495, "PLAY", 0, "PLAY", ""},
	{496, "FF", 0, "FF", ""},
	{497, "REW", 0, "REW", ""},
	{498, "PAUSE", 0, "PAUSE", ""},
	{499, "PREV_KEYFRAME", 0, "PREV_KEYFRAME", ""},
	{500, "NEXT_KEYFRAME", 0, "NEXT_KEYFRAME", ""},
	{501, "PLAY_AUDIO", 0, "PLAY_AUDIO", ""},
	{502, "PLAY_REVERSE", 0, "PLAY_REVERSE", ""},
	{503, "PREVIEW_RANGE", 0, "PREVIEW_RANGE", ""},
	{504, "ACTION_TWEAK", 0, "ACTION_TWEAK", ""},
	{505, "PMARKER_ACT", 0, "PMARKER_ACT", ""},
	{506, "PMARKER_SEL", 0, "PMARKER_SEL", ""},
	{507, "PMARKER", 0, "PMARKER", ""},
	{508, "MARKER_HLT", 0, "MARKER_HLT", ""},
	{509, "MARKER", 0, "MARKER", ""},
	{510, "SPACE2", 0, "SPACE2", ""},
	{511, "SPACE3", 0, "SPACE3", ""},
	{512, "KEYINGSET", 0, "KEYINGSET", ""},
	{513, "KEY_DEHLT", 0, "KEY_DEHLT", ""},
	{514, "KEY_HLT", 0, "KEY_HLT", ""},
	{515, "MUTE_IPO_OFF", 0, "MUTE_IPO_OFF", ""},
	{516, "MUTE_IPO_ON", 0, "MUTE_IPO_ON", ""},
	{517, "VISIBLE_IPO_OFF", 0, "VISIBLE_IPO_OFF", ""},
	{518, "VISIBLE_IPO_ON", 0, "VISIBLE_IPO_ON", ""},
	{519, "DRIVER", 0, "DRIVER", ""},
	{520, "SOLO_OFF", 0, "SOLO_OFF", ""},
	{521, "SOLO_ON", 0, "SOLO_ON", ""},
	{522, "FRAME_PREV", 0, "FRAME_PREV", ""},
	{523, "FRAME_NEXT", 0, "FRAME_NEXT", ""},
	{524, "NLA_PUSHDOWN", 0, "NLA_PUSHDOWN", ""},
	{525, "IPO_CONSTANT", 0, "IPO_CONSTANT", ""},
	{526, "IPO_LINEAR", 0, "IPO_LINEAR", ""},
	{527, "IPO_BEZIER", 0, "IPO_BEZIER", ""},
	{528, "IPO_SINE", 0, "IPO_SINE", ""},
	{529, "IPO_QUAD", 0, "IPO_QUAD", ""},
	{530, "IPO_CUBIC", 0, "IPO_CUBIC", ""},
	{531, "IPO_QUART", 0, "IPO_QUART", ""},
	{532, "IPO_QUINT", 0, "IPO_QUINT", ""},
	{533, "IPO_EXPO", 0, "IPO_EXPO", ""},
	{534, "IPO_CIRC", 0, "IPO_CIRC", ""},
	{535, "IPO_BOUNCE", 0, "IPO_BOUNCE", ""},
	{536, "IPO_ELASTIC", 0, "IPO_ELASTIC", ""},
	{537, "IPO_BACK", 0, "IPO_BACK", ""},
	{538, "IPO_EASE_IN", 0, "IPO_EASE_IN", ""},
	{539, "IPO_EASE_OUT", 0, "IPO_EASE_OUT", ""},
	{540, "IPO_EASE_IN_OUT", 0, "IPO_EASE_IN_OUT", ""},
	{546, "VERTEXSEL", 0, "VERTEXSEL", ""},
	{547, "EDGESEL", 0, "EDGESEL", ""},
	{548, "FACESEL", 0, "FACESEL", ""},
	{549, "LOOPSEL", 0, "LOOPSEL", ""},
	{551, "ROTATE", 0, "ROTATE", ""},
	{552, "CURSOR", 0, "CURSOR", ""},
	{553, "ROTATECOLLECTION", 0, "ROTATECOLLECTION", ""},
	{554, "ROTATECENTER", 0, "ROTATECENTER", ""},
	{555, "ROTACTIVE", 0, "ROTACTIVE", ""},
	{556, "ALIGN", 0, "ALIGN", ""},
	{558, "SMOOTHCURVE", 0, "SMOOTHCURVE", ""},
	{559, "SPHERECURVE", 0, "SPHERECURVE", ""},
	{560, "ROOTCURVE", 0, "ROOTCURVE", ""},
	{561, "SHARPCURVE", 0, "SHARPCURVE", ""},
	{562, "LINCURVE", 0, "LINCURVE", ""},
	{563, "NOCURVE", 0, "NOCURVE", ""},
	{564, "RNDCURVE", 0, "RNDCURVE", ""},
	{565, "PROP_OFF", 0, "PROP_OFF", ""},
	{566, "PROP_ON", 0, "PROP_ON", ""},
	{567, "PROP_CON", 0, "PROP_CON", ""},
	{568, "SCULPT_DYNTOPO", 0, "SCULPT_DYNTOPO", ""},
	{569, "PARTICLE_POINT", 0, "PARTICLE_POINT", ""},
	{570, "PARTICLE_TIP", 0, "PARTICLE_TIP", ""},
	{571, "PARTICLE_PATH", 0, "PARTICLE_PATH", ""},
	{572, "MAN_TRANS", 0, "MAN_TRANS", ""},
	{573, "MAN_ROT", 0, "MAN_ROT", ""},
	{574, "MAN_SCALE", 0, "MAN_SCALE", ""},
	{575, "MANIPUL", 0, "MANIPUL", ""},
	{576, "SNAP_OFF", 0, "SNAP_OFF", ""},
	{577, "SNAP_ON", 0, "SNAP_ON", ""},
	{578, "SNAP_NORMAL", 0, "SNAP_NORMAL", ""},
	{579, "SNAP_INCREMENT", 0, "SNAP_INCREMENT", ""},
	{580, "SNAP_VERTEX", 0, "SNAP_VERTEX", ""},
	{581, "SNAP_EDGE", 0, "SNAP_EDGE", ""},
	{582, "SNAP_FACE", 0, "SNAP_FACE", ""},
	{583, "SNAP_VOLUME", 0, "SNAP_VOLUME", ""},
	{585, "STICKY_UVS_LOC", 0, "STICKY_UVS_LOC", ""},
	{586, "STICKY_UVS_DISABLE", 0, "STICKY_UVS_DISABLE", ""},
	{587, "STICKY_UVS_VERT", 0, "STICKY_UVS_VERT", ""},
	{588, "CLIPUV_DEHLT", 0, "CLIPUV_DEHLT", ""},
	{589, "CLIPUV_HLT", 0, "CLIPUV_HLT", ""},
	{590, "SNAP_PEEL_OBJECT", 0, "SNAP_PEEL_OBJECT", ""},
	{591, "GRID", 0, "GRID", ""},
	{598, "PASTEDOWN", 0, "PASTEDOWN", ""},
	{599, "COPYDOWN", 0, "COPYDOWN", ""},
	{600, "PASTEFLIPUP", 0, "PASTEFLIPUP", ""},
	{601, "PASTEFLIPDOWN", 0, "PASTEFLIPDOWN", ""},
	{606, "SNAP_SURFACE", 0, "SNAP_SURFACE", ""},
	{607, "AUTOMERGE_ON", 0, "AUTOMERGE_ON", ""},
	{608, "AUTOMERGE_OFF", 0, "AUTOMERGE_OFF", ""},
	{609, "RETOPO", 0, "RETOPO", ""},
	{610, "UV_VERTEXSEL", 0, "UV_VERTEXSEL", ""},
	{611, "UV_EDGESEL", 0, "UV_EDGESEL", ""},
	{612, "UV_FACESEL", 0, "UV_FACESEL", ""},
	{613, "UV_ISLANDSEL", 0, "UV_ISLANDSEL", ""},
	{614, "UV_SYNC_SELECT", 0, "UV_SYNC_SELECT", ""},
	{624, "BBOX", 0, "BBOX", ""},
	{625, "WIRE", 0, "WIRE", ""},
	{626, "SOLID", 0, "SOLID", ""},
	{627, "SMOOTH", 0, "SMOOTH", ""},
	{628, "POTATO", 0, "POTATO", ""},
	{630, "ORTHO", 0, "ORTHO", ""},
	{633, "LOCKVIEW_OFF", 0, "LOCKVIEW_OFF", ""},
	{634, "LOCKVIEW_ON", 0, "LOCKVIEW_ON", ""},
	{636, "AXIS_SIDE", 0, "AXIS_SIDE", ""},
	{637, "AXIS_FRONT", 0, "AXIS_FRONT", ""},
	{638, "AXIS_TOP", 0, "AXIS_TOP", ""},
	{639, "NDOF_DOM", 0, "NDOF_DOM", ""},
	{640, "NDOF_TURN", 0, "NDOF_TURN", ""},
	{641, "NDOF_FLY", 0, "NDOF_FLY", ""},
	{642, "NDOF_TRANS", 0, "NDOF_TRANS", ""},
	{643, "LAYER_USED", 0, "LAYER_USED", ""},
	{644, "LAYER_ACTIVE", 0, "LAYER_ACTIVE", ""},
	{676, "SORTALPHA", 0, "SORTALPHA", ""},
	{677, "SORTBYEXT", 0, "SORTBYEXT", ""},
	{678, "SORTTIME", 0, "SORTTIME", ""},
	{679, "SORTSIZE", 0, "SORTSIZE", ""},
	{680, "LONGDISPLAY", 0, "LONGDISPLAY", ""},
	{681, "SHORTDISPLAY", 0, "SHORTDISPLAY", ""},
	{682, "GHOST", 0, "GHOST", ""},
	{683, "IMGDISPLAY", 0, "IMGDISPLAY", ""},
	{684, "SAVE_AS", 0, "SAVE_AS", ""},
	{685, "SAVE_COPY", 0, "SAVE_COPY", ""},
	{686, "BOOKMARKS", 0, "BOOKMARKS", ""},
	{687, "FONTPREVIEW", 0, "FONTPREVIEW", ""},
	{688, "FILTER", 0, "FILTER", ""},
	{689, "NEWFOLDER", 0, "NEWFOLDER", ""},
	{690, "OPEN_RECENT", 0, "OPEN_RECENT", ""},
	{691, "FILE_PARENT", 0, "FILE_PARENT", ""},
	{692, "FILE_REFRESH", 0, "FILE_REFRESH", ""},
	{693, "FILE_FOLDER", 0, "FILE_FOLDER", ""},
	{694, "FILE_BLANK", 0, "FILE_BLANK", ""},
	{695, "FILE_BLEND", 0, "FILE_BLEND", ""},
	{696, "FILE_IMAGE", 0, "FILE_IMAGE", ""},
	{697, "FILE_MOVIE", 0, "FILE_MOVIE", ""},
	{698, "FILE_SCRIPT", 0, "FILE_SCRIPT", ""},
	{699, "FILE_SOUND", 0, "FILE_SOUND", ""},
	{700, "FILE_FONT", 0, "FILE_FONT", ""},
	{701, "FILE_TEXT", 0, "FILE_TEXT", ""},
	{702, "RECOVER_AUTO", 0, "RECOVER_AUTO", ""},
	{703, "SAVE_PREFS", 0, "SAVE_PREFS", ""},
	{704, "LINK_BLEND", 0, "LINK_BLEND", ""},
	{705, "APPEND_BLEND", 0, "APPEND_BLEND", ""},
	{706, "IMPORT", 0, "IMPORT", ""},
	{707, "EXPORT", 0, "EXPORT", ""},
	{708, "EXTERNAL_DATA", 0, "EXTERNAL_DATA", ""},
	{709, "LOAD_FACTORY", 0, "LOAD_FACTORY", ""},
	{715, "LOOP_BACK", 0, "LOOP_BACK", ""},
	{716, "LOOP_FORWARDS", 0, "LOOP_FORWARDS", ""},
	{717, "BACK", 0, "BACK", ""},
	{718, "FORWARD", 0, "FORWARD", ""},
	{726, "FILE_BACKUP", 0, "FILE_BACKUP", ""},
	{727, "DISK_DRIVE", 0, "DISK_DRIVE", ""},
	{728, "MATPLANE", 0, "MATPLANE", ""},
	{729, "MATSPHERE", 0, "MATSPHERE", ""},
	{730, "MATCUBE", 0, "MATCUBE", ""},
	{731, "MONKEY", 0, "MONKEY", ""},
	{732, "HAIR", 0, "HAIR", ""},
	{733, "ALIASED", 0, "ALIASED", ""},
	{734, "ANTIALIASED", 0, "ANTIALIASED", ""},
	{735, "MAT_SPHERE_SKY", 0, "MAT_SPHERE_SKY", ""},
	{740, "WORDWRAP_OFF", 0, "WORDWRAP_OFF", ""},
	{741, "WORDWRAP_ON", 0, "WORDWRAP_ON", ""},
	{742, "SYNTAX_OFF", 0, "SYNTAX_OFF", ""},
	{743, "SYNTAX_ON", 0, "SYNTAX_ON", ""},
	{744, "LINENUMBERS_OFF", 0, "LINENUMBERS_OFF", ""},
	{745, "LINENUMBERS_ON", 0, "LINENUMBERS_ON", ""},
	{746, "SCRIPTPLUGINS", 0, "SCRIPTPLUGINS", ""},
	{754, "SEQ_SEQUENCER", 0, "SEQ_SEQUENCER", ""},
	{755, "SEQ_PREVIEW", 0, "SEQ_PREVIEW", ""},
	{756, "SEQ_LUMA_WAVEFORM", 0, "SEQ_LUMA_WAVEFORM", ""},
	{757, "SEQ_CHROMA_SCOPE", 0, "SEQ_CHROMA_SCOPE", ""},
	{758, "SEQ_HISTOGRAM", 0, "SEQ_HISTOGRAM", ""},
	{759, "SEQ_SPLITVIEW", 0, "SEQ_SPLITVIEW", ""},
	{763, "IMAGE_RGB", 0, "IMAGE_RGB", ""},
	{764, "IMAGE_RGB_ALPHA", 0, "IMAGE_RGB_ALPHA", ""},
	{765, "IMAGE_ALPHA", 0, "IMAGE_ALPHA", ""},
	{766, "IMAGE_ZDEPTH", 0, "IMAGE_ZDEPTH", ""},
	{767, "IMAGEFILE", 0, "IMAGEFILE", ""},
	{780, "BRUSH_ADD", 0, "BRUSH_ADD", ""},
	{781, "BRUSH_BLOB", 0, "BRUSH_BLOB", ""},
	{782, "BRUSH_BLUR", 0, "BRUSH_BLUR", ""},
	{783, "BRUSH_CLAY", 0, "BRUSH_CLAY", ""},
	{784, "BRUSH_CLAY_STRIPS", 0, "BRUSH_CLAY_STRIPS", ""},
	{785, "BRUSH_CLONE", 0, "BRUSH_CLONE", ""},
	{786, "BRUSH_CREASE", 0, "BRUSH_CREASE", ""},
	{787, "BRUSH_DARKEN", 0, "BRUSH_DARKEN", ""},
	{788, "BRUSH_FILL", 0, "BRUSH_FILL", ""},
	{789, "BRUSH_FLATTEN", 0, "BRUSH_FLATTEN", ""},
	{790, "BRUSH_GRAB", 0, "BRUSH_GRAB", ""},
	{791, "BRUSH_INFLATE", 0, "BRUSH_INFLATE", ""},
	{792, "BRUSH_LAYER", 0, "BRUSH_LAYER", ""},
	{793, "BRUSH_LIGHTEN", 0, "BRUSH_LIGHTEN", ""},
	{794, "BRUSH_MASK", 0, "BRUSH_MASK", ""},
	{795, "BRUSH_MIX", 0, "BRUSH_MIX", ""},
	{796, "BRUSH_MULTIPLY", 0, "BRUSH_MULTIPLY", ""},
	{797, "BRUSH_NUDGE", 0, "BRUSH_NUDGE", ""},
	{798, "BRUSH_PINCH", 0, "BRUSH_PINCH", ""},
	{799, "BRUSH_SCRAPE", 0, "BRUSH_SCRAPE", ""},
	{800, "BRUSH_SCULPT_DRAW", 0, "BRUSH_SCULPT_DRAW", ""},
	{801, "BRUSH_SMEAR", 0, "BRUSH_SMEAR", ""},
	{802, "BRUSH_SMOOTH", 0, "BRUSH_SMOOTH", ""},
	{803, "BRUSH_SNAKE_HOOK", 0, "BRUSH_SNAKE_HOOK", ""},
	{804, "BRUSH_SOFTEN", 0, "BRUSH_SOFTEN", ""},
	{805, "BRUSH_SUBTRACT", 0, "BRUSH_SUBTRACT", ""},
	{806, "BRUSH_TEXDRAW", 0, "BRUSH_TEXDRAW", ""},
	{807, "BRUSH_TEXFILL", 0, "BRUSH_TEXFILL", ""},
	{808, "BRUSH_TEXMASK", 0, "BRUSH_TEXMASK", ""},
	{809, "BRUSH_THUMB", 0, "BRUSH_THUMB", ""},
	{810, "BRUSH_ROTATE", 0, "BRUSH_ROTATE", ""},
	{811, "BRUSH_VERTEXDRAW", 0, "BRUSH_VERTEXDRAW", ""},
	{812, "MATCAP_01", 0, "MATCAP_01", ""},
	{813, "MATCAP_02", 0, "MATCAP_02", ""},
	{814, "MATCAP_03", 0, "MATCAP_03", ""},
	{815, "MATCAP_04", 0, "MATCAP_04", ""},
	{816, "MATCAP_05", 0, "MATCAP_05", ""},
	{817, "MATCAP_06", 0, "MATCAP_06", ""},
	{818, "MATCAP_07", 0, "MATCAP_07", ""},
	{819, "MATCAP_08", 0, "MATCAP_08", ""},
	{820, "MATCAP_09", 0, "MATCAP_09", ""},
	{821, "MATCAP_10", 0, "MATCAP_10", ""},
	{822, "MATCAP_11", 0, "MATCAP_11", ""},
	{823, "MATCAP_12", 0, "MATCAP_12", ""},
	{824, "MATCAP_13", 0, "MATCAP_13", ""},
	{825, "MATCAP_14", 0, "MATCAP_14", ""},
	{826, "MATCAP_15", 0, "MATCAP_15", ""},
	{827, "MATCAP_16", 0, "MATCAP_16", ""},
	{828, "MATCAP_17", 0, "MATCAP_17", ""},
	{829, "MATCAP_18", 0, "MATCAP_18", ""},
	{830, "MATCAP_19", 0, "MATCAP_19", ""},
	{831, "MATCAP_20", 0, "MATCAP_20", ""},
	{832, "MATCAP_21", 0, "MATCAP_21", ""},
	{833, "MATCAP_22", 0, "MATCAP_22", ""},
	{834, "MATCAP_23", 0, "MATCAP_23", ""},
	{835, "MATCAP_24", 0, "MATCAP_24", ""},
	{836, "VIEW3D_VEC", 0, "VIEW3D_VEC", ""},
	{837, "EDIT_VEC", 0, "EDIT_VEC", ""},
	{838, "EDITMODE_VEC_DEHLT", 0, "EDITMODE_VEC_DEHLT", ""},
	{839, "EDITMODE_VEC_HLT", 0, "EDITMODE_VEC_HLT", ""},
	{840, "DISCLOSURE_TRI_RIGHT_VEC", 0, "DISCLOSURE_TRI_RIGHT_VEC", ""},
	{841, "DISCLOSURE_TRI_DOWN_VEC", 0, "DISCLOSURE_TRI_DOWN_VEC", ""},
	{842, "MOVE_UP_VEC", 0, "MOVE_UP_VEC", ""},
	{843, "MOVE_DOWN_VEC", 0, "MOVE_DOWN_VEC", ""},
	{844, "X_VEC", 0, "X_VEC", ""},
	{845, "SMALL_TRI_RIGHT_VEC", 0, "SMALL_TRI_RIGHT_VEC", ""},
	{0, NULL, 0, NULL, NULL}
};

EnumPropertyRNA rna_UILayout_operator_icon = {
	{(PropertyRNA *)&rna_UILayout_operator_emboss, (PropertyRNA *)&rna_UILayout_operator_translate,
	-1, "icon", 3, "Icon",
	"Override automatic icon of the item",
	0, "*",
	PROP_ENUM, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	NULL, NULL, NULL, NULL, NULL, NULL, rna_UILayout_operator_icon_items, 542, 0
};

BoolPropertyRNA rna_UILayout_operator_emboss = {
	{(PropertyRNA *)&rna_UILayout_operator_properties, (PropertyRNA *)&rna_UILayout_operator_icon,
	-1, "emboss", 3, "",
	"Draw the button itself, just the icon/text",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 1, NULL
};

PointerPropertyRNA rna_UILayout_operator_properties = {
	{NULL, (PropertyRNA *)&rna_UILayout_operator_emboss,
	-1, "properties", 8390668, "",
	"Operator properties to fill in, return when \'properties\' is set to true",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	NULL, NULL, NULL, NULL,&RNA_OperatorProperties
};

FunctionRNA rna_UILayout_operator_func = {
	{(FunctionRNA *)&rna_UILayout_operator_enum_func, (FunctionRNA *)&rna_UILayout_prop_search_func,
	NULL,
	{(PropertyRNA *)&rna_UILayout_operator_operator, (PropertyRNA *)&rna_UILayout_operator_properties}},
	"operator", 0, "Item. Places a button into the layout to call an Operator",
	UILayout_operator_call,
	(PropertyRNA *)&rna_UILayout_operator_properties
};

StringPropertyRNA rna_UILayout_operator_enum_operator = {
	{(PropertyRNA *)&rna_UILayout_operator_enum_property, NULL,
	-1, "operator", 262149, "",
	"Identifier of the operator",
	0, "*",
	PROP_STRING, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	NULL, NULL, NULL, NULL, NULL, NULL, 0, ""
};

StringPropertyRNA rna_UILayout_operator_enum_property = {
	{NULL, (PropertyRNA *)&rna_UILayout_operator_enum_operator,
	-1, "property", 262149, "",
	"Identifier of property in operator",
	0, "*",
	PROP_STRING, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	NULL, NULL, NULL, NULL, NULL, NULL, 0, ""
};

FunctionRNA rna_UILayout_operator_enum_func = {
	{(FunctionRNA *)&rna_UILayout_operator_menu_enum_func, (FunctionRNA *)&rna_UILayout_operator_func,
	NULL,
	{(PropertyRNA *)&rna_UILayout_operator_enum_operator, (PropertyRNA *)&rna_UILayout_operator_enum_property}},
	"operator_enum", 0, "operator_enum",
	UILayout_operator_enum_call,
	NULL
};

StringPropertyRNA rna_UILayout_operator_menu_enum_operator = {
	{(PropertyRNA *)&rna_UILayout_operator_menu_enum_property, NULL,
	-1, "operator", 262149, "",
	"Identifier of the operator",
	0, "*",
	PROP_STRING, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	NULL, NULL, NULL, NULL, NULL, NULL, 0, ""
};

StringPropertyRNA rna_UILayout_operator_menu_enum_property = {
	{(PropertyRNA *)&rna_UILayout_operator_menu_enum_text, (PropertyRNA *)&rna_UILayout_operator_menu_enum_operator,
	-1, "property", 262149, "",
	"Identifier of property in operator",
	0, "*",
	PROP_STRING, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	NULL, NULL, NULL, NULL, NULL, NULL, 0, ""
};

StringPropertyRNA rna_UILayout_operator_menu_enum_text = {
	{(PropertyRNA *)&rna_UILayout_operator_menu_enum_text_ctxt, (PropertyRNA *)&rna_UILayout_operator_menu_enum_property,
	-1, "text", 262145, "",
	"Override automatic text of the item",
	0, "*",
	PROP_STRING, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	NULL, NULL, NULL, NULL, NULL, NULL, 0, ""
};

StringPropertyRNA rna_UILayout_operator_menu_enum_text_ctxt = {
	{(PropertyRNA *)&rna_UILayout_operator_menu_enum_translate, (PropertyRNA *)&rna_UILayout_operator_menu_enum_text,
	-1, "text_ctxt", 262145, "",
	"Override automatic translation context of the given text",
	0, "*",
	PROP_STRING, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	NULL, NULL, NULL, NULL, NULL, NULL, 0, ""
};

BoolPropertyRNA rna_UILayout_operator_menu_enum_translate = {
	{(PropertyRNA *)&rna_UILayout_operator_menu_enum_icon, (PropertyRNA *)&rna_UILayout_operator_menu_enum_text_ctxt,
	-1, "translate", 3, "",
	"Translate the given text, when UI translation is enabled",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 1, NULL
};

static EnumPropertyItem rna_UILayout_operator_menu_enum_icon_items[543] = {
	{0, "NONE", 0, "NONE", ""},
	{1, "QUESTION", 0, "QUESTION", ""},
	{2, "ERROR", 0, "ERROR", ""},
	{3, "CANCEL", 0, "CANCEL", ""},
	{4, "TRIA_RIGHT", 0, "TRIA_RIGHT", ""},
	{5, "TRIA_DOWN", 0, "TRIA_DOWN", ""},
	{6, "TRIA_LEFT", 0, "TRIA_LEFT", ""},
	{7, "TRIA_UP", 0, "TRIA_UP", ""},
	{8, "ARROW_LEFTRIGHT", 0, "ARROW_LEFTRIGHT", ""},
	{9, "PLUS", 0, "PLUS", ""},
	{10, "DISCLOSURE_TRI_DOWN", 0, "DISCLOSURE_TRI_DOWN", ""},
	{11, "DISCLOSURE_TRI_RIGHT", 0, "DISCLOSURE_TRI_RIGHT", ""},
	{12, "RADIOBUT_OFF", 0, "RADIOBUT_OFF", ""},
	{13, "RADIOBUT_ON", 0, "RADIOBUT_ON", ""},
	{14, "MENU_PANEL", 0, "MENU_PANEL", ""},
	{15, "BLENDER", 0, "BLENDER", ""},
	{16, "GRIP", 0, "GRIP", ""},
	{17, "DOT", 0, "DOT", ""},
	{18, "COLLAPSEMENU", 0, "COLLAPSEMENU", ""},
	{19, "X", 0, "X", ""},
	{21, "GO_LEFT", 0, "GO_LEFT", ""},
	{22, "PLUG", 0, "PLUG", ""},
	{23, "UI", 0, "UI", ""},
	{24, "NODE", 0, "NODE", ""},
	{25, "NODE_SEL", 0, "NODE_SEL", ""},
	{26, "FULLSCREEN", 0, "FULLSCREEN", ""},
	{27, "SPLITSCREEN", 0, "SPLITSCREEN", ""},
	{28, "RIGHTARROW_THIN", 0, "RIGHTARROW_THIN", ""},
	{29, "BORDERMOVE", 0, "BORDERMOVE", ""},
	{30, "VIEWZOOM", 0, "VIEWZOOM", ""},
	{31, "ZOOMIN", 0, "ZOOMIN", ""},
	{32, "ZOOMOUT", 0, "ZOOMOUT", ""},
	{33, "PANEL_CLOSE", 0, "PANEL_CLOSE", ""},
	{34, "COPY_ID", 0, "COPY_ID", ""},
	{35, "EYEDROPPER", 0, "EYEDROPPER", ""},
	{36, "LINK_AREA", 0, "LINK_AREA", ""},
	{37, "AUTO", 0, "AUTO", ""},
	{38, "CHECKBOX_DEHLT", 0, "CHECKBOX_DEHLT", ""},
	{39, "CHECKBOX_HLT", 0, "CHECKBOX_HLT", ""},
	{40, "UNLOCKED", 0, "UNLOCKED", ""},
	{41, "LOCKED", 0, "LOCKED", ""},
	{42, "UNPINNED", 0, "UNPINNED", ""},
	{43, "PINNED", 0, "PINNED", ""},
	{44, "SCREEN_BACK", 0, "SCREEN_BACK", ""},
	{45, "RIGHTARROW", 0, "RIGHTARROW", ""},
	{46, "DOWNARROW_HLT", 0, "DOWNARROW_HLT", ""},
	{47, "DOTSUP", 0, "DOTSUP", ""},
	{48, "DOTSDOWN", 0, "DOTSDOWN", ""},
	{49, "LINK", 0, "LINK", ""},
	{50, "INLINK", 0, "INLINK", ""},
	{51, "PLUGIN", 0, "PLUGIN", ""},
	{52, "HELP", 0, "HELP", ""},
	{53, "GHOST_ENABLED", 0, "GHOST_ENABLED", ""},
	{54, "COLOR", 0, "COLOR", ""},
	{55, "LINKED", 0, "LINKED", ""},
	{56, "UNLINKED", 0, "UNLINKED", ""},
	{57, "HAND", 0, "HAND", ""},
	{58, "ZOOM_ALL", 0, "ZOOM_ALL", ""},
	{59, "ZOOM_SELECTED", 0, "ZOOM_SELECTED", ""},
	{60, "ZOOM_PREVIOUS", 0, "ZOOM_PREVIOUS", ""},
	{61, "ZOOM_IN", 0, "ZOOM_IN", ""},
	{62, "ZOOM_OUT", 0, "ZOOM_OUT", ""},
	{63, "RENDER_REGION", 0, "RENDER_REGION", ""},
	{64, "BORDER_RECT", 0, "BORDER_RECT", ""},
	{65, "BORDER_LASSO", 0, "BORDER_LASSO", ""},
	{66, "FREEZE", 0, "FREEZE", ""},
	{67, "STYLUS_PRESSURE", 0, "STYLUS_PRESSURE", ""},
	{68, "GHOST_DISABLED", 0, "GHOST_DISABLED", ""},
	{69, "NEW", 0, "NEW", ""},
	{70, "FILE_TICK", 0, "FILE_TICK", ""},
	{71, "QUIT", 0, "QUIT", ""},
	{72, "URL", 0, "URL", ""},
	{73, "RECOVER_LAST", 0, "RECOVER_LAST", ""},
	{75, "FULLSCREEN_ENTER", 0, "FULLSCREEN_ENTER", ""},
	{76, "FULLSCREEN_EXIT", 0, "FULLSCREEN_EXIT", ""},
	{77, "BLANK1", 0, "BLANK1", ""},
	{78, "LAMP", 0, "LAMP", ""},
	{79, "MATERIAL", 0, "MATERIAL", ""},
	{80, "TEXTURE", 0, "TEXTURE", ""},
	{81, "ANIM", 0, "ANIM", ""},
	{82, "WORLD", 0, "WORLD", ""},
	{83, "SCENE", 0, "SCENE", ""},
	{84, "EDIT", 0, "EDIT", ""},
	{85, "GAME", 0, "GAME", ""},
	{86, "RADIO", 0, "RADIO", ""},
	{87, "SCRIPT", 0, "SCRIPT", ""},
	{88, "PARTICLES", 0, "PARTICLES", ""},
	{89, "PHYSICS", 0, "PHYSICS", ""},
	{90, "SPEAKER", 0, "SPEAKER", ""},
	{91, "TEXTURE_SHADED", 0, "TEXTURE_SHADED", ""},
	{104, "VIEW3D", 0, "VIEW3D", ""},
	{105, "IPO", 0, "IPO", ""},
	{106, "OOPS", 0, "OOPS", ""},
	{107, "BUTS", 0, "BUTS", ""},
	{108, "FILESEL", 0, "FILESEL", ""},
	{109, "IMAGE_COL", 0, "IMAGE_COL", ""},
	{110, "INFO", 0, "INFO", ""},
	{111, "SEQUENCE", 0, "SEQUENCE", ""},
	{112, "TEXT", 0, "TEXT", ""},
	{113, "IMASEL", 0, "IMASEL", ""},
	{114, "SOUND", 0, "SOUND", ""},
	{115, "ACTION", 0, "ACTION", ""},
	{116, "NLA", 0, "NLA", ""},
	{117, "SCRIPTWIN", 0, "SCRIPTWIN", ""},
	{118, "TIME", 0, "TIME", ""},
	{119, "NODETREE", 0, "NODETREE", ""},
	{120, "LOGIC", 0, "LOGIC", ""},
	{121, "CONSOLE", 0, "CONSOLE", ""},
	{122, "PREFERENCES", 0, "PREFERENCES", ""},
	{123, "CLIP", 0, "CLIP", ""},
	{124, "ASSET_MANAGER", 0, "ASSET_MANAGER", ""},
	{130, "OBJECT_DATAMODE", 0, "OBJECT_DATAMODE", ""},
	{131, "EDITMODE_HLT", 0, "EDITMODE_HLT", ""},
	{132, "FACESEL_HLT", 0, "FACESEL_HLT", ""},
	{133, "VPAINT_HLT", 0, "VPAINT_HLT", ""},
	{134, "TPAINT_HLT", 0, "TPAINT_HLT", ""},
	{135, "WPAINT_HLT", 0, "WPAINT_HLT", ""},
	{136, "SCULPTMODE_HLT", 0, "SCULPTMODE_HLT", ""},
	{137, "POSE_HLT", 0, "POSE_HLT", ""},
	{138, "PARTICLEMODE", 0, "PARTICLEMODE", ""},
	{139, "LIGHTPAINT", 0, "LIGHTPAINT", ""},
	{156, "SCENE_DATA", 0, "SCENE_DATA", ""},
	{157, "RENDERLAYERS", 0, "RENDERLAYERS", ""},
	{158, "WORLD_DATA", 0, "WORLD_DATA", ""},
	{159, "OBJECT_DATA", 0, "OBJECT_DATA", ""},
	{160, "MESH_DATA", 0, "MESH_DATA", ""},
	{161, "CURVE_DATA", 0, "CURVE_DATA", ""},
	{162, "META_DATA", 0, "META_DATA", ""},
	{163, "LATTICE_DATA", 0, "LATTICE_DATA", ""},
	{164, "LAMP_DATA", 0, "LAMP_DATA", ""},
	{165, "MATERIAL_DATA", 0, "MATERIAL_DATA", ""},
	{166, "TEXTURE_DATA", 0, "TEXTURE_DATA", ""},
	{167, "ANIM_DATA", 0, "ANIM_DATA", ""},
	{168, "CAMERA_DATA", 0, "CAMERA_DATA", ""},
	{169, "PARTICLE_DATA", 0, "PARTICLE_DATA", ""},
	{170, "LIBRARY_DATA_DIRECT", 0, "LIBRARY_DATA_DIRECT", ""},
	{171, "GROUP", 0, "GROUP", ""},
	{172, "ARMATURE_DATA", 0, "ARMATURE_DATA", ""},
	{173, "POSE_DATA", 0, "POSE_DATA", ""},
	{174, "BONE_DATA", 0, "BONE_DATA", ""},
	{175, "CONSTRAINT", 0, "CONSTRAINT", ""},
	{176, "SHAPEKEY_DATA", 0, "SHAPEKEY_DATA", ""},
	{177, "CONSTRAINT_BONE", 0, "CONSTRAINT_BONE", ""},
	{178, "CAMERA_STEREO", 0, "CAMERA_STEREO", ""},
	{179, "PACKAGE", 0, "PACKAGE", ""},
	{180, "UGLYPACKAGE", 0, "UGLYPACKAGE", ""},
	{182, "BRUSH_DATA", 0, "BRUSH_DATA", ""},
	{183, "IMAGE_DATA", 0, "IMAGE_DATA", ""},
	{184, "FILE", 0, "FILE", ""},
	{185, "FCURVE", 0, "FCURVE", ""},
	{186, "FONT_DATA", 0, "FONT_DATA", ""},
	{187, "RENDER_RESULT", 0, "RENDER_RESULT", ""},
	{188, "SURFACE_DATA", 0, "SURFACE_DATA", ""},
	{189, "EMPTY_DATA", 0, "EMPTY_DATA", ""},
	{190, "SETTINGS", 0, "SETTINGS", ""},
	{191, "RENDER_ANIMATION", 0, "RENDER_ANIMATION", ""},
	{192, "RENDER_STILL", 0, "RENDER_STILL", ""},
	{194, "BOIDS", 0, "BOIDS", ""},
	{195, "STRANDS", 0, "STRANDS", ""},
	{196, "LIBRARY_DATA_INDIRECT", 0, "LIBRARY_DATA_INDIRECT", ""},
	{197, "GREASEPENCIL", 0, "GREASEPENCIL", ""},
	{198, "LINE_DATA", 0, "LINE_DATA", ""},
	{200, "GROUP_BONE", 0, "GROUP_BONE", ""},
	{201, "GROUP_VERTEX", 0, "GROUP_VERTEX", ""},
	{202, "GROUP_VCOL", 0, "GROUP_VCOL", ""},
	{203, "GROUP_UVS", 0, "GROUP_UVS", ""},
	{206, "RNA", 0, "RNA", ""},
	{207, "RNA_ADD", 0, "RNA_ADD", ""},
	{234, "OUTLINER_OB_EMPTY", 0, "OUTLINER_OB_EMPTY", ""},
	{235, "OUTLINER_OB_MESH", 0, "OUTLINER_OB_MESH", ""},
	{236, "OUTLINER_OB_CURVE", 0, "OUTLINER_OB_CURVE", ""},
	{237, "OUTLINER_OB_LATTICE", 0, "OUTLINER_OB_LATTICE", ""},
	{238, "OUTLINER_OB_META", 0, "OUTLINER_OB_META", ""},
	{239, "OUTLINER_OB_LAMP", 0, "OUTLINER_OB_LAMP", ""},
	{240, "OUTLINER_OB_CAMERA", 0, "OUTLINER_OB_CAMERA", ""},
	{241, "OUTLINER_OB_ARMATURE", 0, "OUTLINER_OB_ARMATURE", ""},
	{242, "OUTLINER_OB_FONT", 0, "OUTLINER_OB_FONT", ""},
	{243, "OUTLINER_OB_SURFACE", 0, "OUTLINER_OB_SURFACE", ""},
	{244, "OUTLINER_OB_SPEAKER", 0, "OUTLINER_OB_SPEAKER", ""},
	{253, "RESTRICT_VIEW_OFF", 0, "RESTRICT_VIEW_OFF", ""},
	{254, "RESTRICT_VIEW_ON", 0, "RESTRICT_VIEW_ON", ""},
	{255, "RESTRICT_SELECT_OFF", 0, "RESTRICT_SELECT_OFF", ""},
	{256, "RESTRICT_SELECT_ON", 0, "RESTRICT_SELECT_ON", ""},
	{257, "RESTRICT_RENDER_OFF", 0, "RESTRICT_RENDER_OFF", ""},
	{258, "RESTRICT_RENDER_ON", 0, "RESTRICT_RENDER_ON", ""},
	{260, "OUTLINER_DATA_EMPTY", 0, "OUTLINER_DATA_EMPTY", ""},
	{261, "OUTLINER_DATA_MESH", 0, "OUTLINER_DATA_MESH", ""},
	{262, "OUTLINER_DATA_CURVE", 0, "OUTLINER_DATA_CURVE", ""},
	{263, "OUTLINER_DATA_LATTICE", 0, "OUTLINER_DATA_LATTICE", ""},
	{264, "OUTLINER_DATA_META", 0, "OUTLINER_DATA_META", ""},
	{265, "OUTLINER_DATA_LAMP", 0, "OUTLINER_DATA_LAMP", ""},
	{266, "OUTLINER_DATA_CAMERA", 0, "OUTLINER_DATA_CAMERA", ""},
	{267, "OUTLINER_DATA_ARMATURE", 0, "OUTLINER_DATA_ARMATURE", ""},
	{268, "OUTLINER_DATA_FONT", 0, "OUTLINER_DATA_FONT", ""},
	{269, "OUTLINER_DATA_SURFACE", 0, "OUTLINER_DATA_SURFACE", ""},
	{270, "OUTLINER_DATA_SPEAKER", 0, "OUTLINER_DATA_SPEAKER", ""},
	{271, "OUTLINER_DATA_POSE", 0, "OUTLINER_DATA_POSE", ""},
	{286, "MESH_PLANE", 0, "MESH_PLANE", ""},
	{287, "MESH_CUBE", 0, "MESH_CUBE", ""},
	{288, "MESH_CIRCLE", 0, "MESH_CIRCLE", ""},
	{289, "MESH_UVSPHERE", 0, "MESH_UVSPHERE", ""},
	{290, "MESH_ICOSPHERE", 0, "MESH_ICOSPHERE", ""},
	{291, "MESH_GRID", 0, "MESH_GRID", ""},
	{292, "MESH_MONKEY", 0, "MESH_MONKEY", ""},
	{293, "MESH_CYLINDER", 0, "MESH_CYLINDER", ""},
	{294, "MESH_TORUS", 0, "MESH_TORUS", ""},
	{295, "MESH_CONE", 0, "MESH_CONE", ""},
	{298, "LAMP_POINT", 0, "LAMP_POINT", ""},
	{299, "LAMP_SUN", 0, "LAMP_SUN", ""},
	{300, "LAMP_SPOT", 0, "LAMP_SPOT", ""},
	{301, "LAMP_HEMI", 0, "LAMP_HEMI", ""},
	{302, "LAMP_AREA", 0, "LAMP_AREA", ""},
	{305, "META_EMPTY", 0, "META_EMPTY", ""},
	{306, "META_PLANE", 0, "META_PLANE", ""},
	{307, "META_CUBE", 0, "META_CUBE", ""},
	{308, "META_BALL", 0, "META_BALL", ""},
	{309, "META_ELLIPSOID", 0, "META_ELLIPSOID", ""},
	{310, "META_CAPSULE", 0, "META_CAPSULE", ""},
	{312, "SURFACE_NCURVE", 0, "SURFACE_NCURVE", ""},
	{313, "SURFACE_NCIRCLE", 0, "SURFACE_NCIRCLE", ""},
	{314, "SURFACE_NSURFACE", 0, "SURFACE_NSURFACE", ""},
	{315, "SURFACE_NCYLINDER", 0, "SURFACE_NCYLINDER", ""},
	{316, "SURFACE_NSPHERE", 0, "SURFACE_NSPHERE", ""},
	{317, "SURFACE_NTORUS", 0, "SURFACE_NTORUS", ""},
	{321, "CURVE_BEZCURVE", 0, "CURVE_BEZCURVE", ""},
	{322, "CURVE_BEZCIRCLE", 0, "CURVE_BEZCIRCLE", ""},
	{323, "CURVE_NCURVE", 0, "CURVE_NCURVE", ""},
	{324, "CURVE_NCIRCLE", 0, "CURVE_NCIRCLE", ""},
	{325, "CURVE_PATH", 0, "CURVE_PATH", ""},
	{331, "COLOR_RED", 0, "COLOR_RED", ""},
	{332, "COLOR_GREEN", 0, "COLOR_GREEN", ""},
	{333, "COLOR_BLUE", 0, "COLOR_BLUE", ""},
	{334, "TRIA_RIGHT_BAR", 0, "TRIA_RIGHT_BAR", ""},
	{335, "TRIA_DOWN_BAR", 0, "TRIA_DOWN_BAR", ""},
	{336, "TRIA_LEFT_BAR", 0, "TRIA_LEFT_BAR", ""},
	{337, "TRIA_UP_BAR", 0, "TRIA_UP_BAR", ""},
	{338, "FORCE_FORCE", 0, "FORCE_FORCE", ""},
	{339, "FORCE_WIND", 0, "FORCE_WIND", ""},
	{340, "FORCE_VORTEX", 0, "FORCE_VORTEX", ""},
	{341, "FORCE_MAGNETIC", 0, "FORCE_MAGNETIC", ""},
	{342, "FORCE_HARMONIC", 0, "FORCE_HARMONIC", ""},
	{343, "FORCE_CHARGE", 0, "FORCE_CHARGE", ""},
	{344, "FORCE_LENNARDJONES", 0, "FORCE_LENNARDJONES", ""},
	{345, "FORCE_TEXTURE", 0, "FORCE_TEXTURE", ""},
	{346, "FORCE_CURVE", 0, "FORCE_CURVE", ""},
	{347, "FORCE_BOID", 0, "FORCE_BOID", ""},
	{348, "FORCE_TURBULENCE", 0, "FORCE_TURBULENCE", ""},
	{349, "FORCE_DRAG", 0, "FORCE_DRAG", ""},
	{350, "FORCE_SMOKEFLOW", 0, "FORCE_SMOKEFLOW", ""},
	{442, "MODIFIER", 0, "MODIFIER", ""},
	{443, "MOD_WAVE", 0, "MOD_WAVE", ""},
	{444, "MOD_BUILD", 0, "MOD_BUILD", ""},
	{445, "MOD_DECIM", 0, "MOD_DECIM", ""},
	{446, "MOD_MIRROR", 0, "MOD_MIRROR", ""},
	{447, "MOD_SOFT", 0, "MOD_SOFT", ""},
	{448, "MOD_SUBSURF", 0, "MOD_SUBSURF", ""},
	{449, "HOOK", 0, "HOOK", ""},
	{450, "MOD_PHYSICS", 0, "MOD_PHYSICS", ""},
	{451, "MOD_PARTICLES", 0, "MOD_PARTICLES", ""},
	{452, "MOD_BOOLEAN", 0, "MOD_BOOLEAN", ""},
	{453, "MOD_EDGESPLIT", 0, "MOD_EDGESPLIT", ""},
	{454, "MOD_ARRAY", 0, "MOD_ARRAY", ""},
	{455, "MOD_UVPROJECT", 0, "MOD_UVPROJECT", ""},
	{456, "MOD_DISPLACE", 0, "MOD_DISPLACE", ""},
	{457, "MOD_CURVE", 0, "MOD_CURVE", ""},
	{458, "MOD_LATTICE", 0, "MOD_LATTICE", ""},
	{459, "CONSTRAINT_DATA", 0, "CONSTRAINT_DATA", ""},
	{460, "MOD_ARMATURE", 0, "MOD_ARMATURE", ""},
	{461, "MOD_SHRINKWRAP", 0, "MOD_SHRINKWRAP", ""},
	{462, "MOD_CAST", 0, "MOD_CAST", ""},
	{463, "MOD_MESHDEFORM", 0, "MOD_MESHDEFORM", ""},
	{464, "MOD_BEVEL", 0, "MOD_BEVEL", ""},
	{465, "MOD_SMOOTH", 0, "MOD_SMOOTH", ""},
	{466, "MOD_SIMPLEDEFORM", 0, "MOD_SIMPLEDEFORM", ""},
	{467, "MOD_MASK", 0, "MOD_MASK", ""},
	{468, "MOD_CLOTH", 0, "MOD_CLOTH", ""},
	{469, "MOD_EXPLODE", 0, "MOD_EXPLODE", ""},
	{470, "MOD_FLUIDSIM", 0, "MOD_FLUIDSIM", ""},
	{471, "MOD_MULTIRES", 0, "MOD_MULTIRES", ""},
	{472, "MOD_SMOKE", 0, "MOD_SMOKE", ""},
	{473, "MOD_SOLIDIFY", 0, "MOD_SOLIDIFY", ""},
	{474, "MOD_SCREW", 0, "MOD_SCREW", ""},
	{475, "MOD_VERTEX_WEIGHT", 0, "MOD_VERTEX_WEIGHT", ""},
	{476, "MOD_DYNAMICPAINT", 0, "MOD_DYNAMICPAINT", ""},
	{477, "MOD_REMESH", 0, "MOD_REMESH", ""},
	{478, "MOD_OCEAN", 0, "MOD_OCEAN", ""},
	{479, "MOD_WARP", 0, "MOD_WARP", ""},
	{480, "MOD_SKIN", 0, "MOD_SKIN", ""},
	{481, "MOD_TRIANGULATE", 0, "MOD_TRIANGULATE", ""},
	{482, "MOD_WIREFRAME", 0, "MOD_WIREFRAME", ""},
	{494, "REC", 0, "REC", ""},
	{495, "PLAY", 0, "PLAY", ""},
	{496, "FF", 0, "FF", ""},
	{497, "REW", 0, "REW", ""},
	{498, "PAUSE", 0, "PAUSE", ""},
	{499, "PREV_KEYFRAME", 0, "PREV_KEYFRAME", ""},
	{500, "NEXT_KEYFRAME", 0, "NEXT_KEYFRAME", ""},
	{501, "PLAY_AUDIO", 0, "PLAY_AUDIO", ""},
	{502, "PLAY_REVERSE", 0, "PLAY_REVERSE", ""},
	{503, "PREVIEW_RANGE", 0, "PREVIEW_RANGE", ""},
	{504, "ACTION_TWEAK", 0, "ACTION_TWEAK", ""},
	{505, "PMARKER_ACT", 0, "PMARKER_ACT", ""},
	{506, "PMARKER_SEL", 0, "PMARKER_SEL", ""},
	{507, "PMARKER", 0, "PMARKER", ""},
	{508, "MARKER_HLT", 0, "MARKER_HLT", ""},
	{509, "MARKER", 0, "MARKER", ""},
	{510, "SPACE2", 0, "SPACE2", ""},
	{511, "SPACE3", 0, "SPACE3", ""},
	{512, "KEYINGSET", 0, "KEYINGSET", ""},
	{513, "KEY_DEHLT", 0, "KEY_DEHLT", ""},
	{514, "KEY_HLT", 0, "KEY_HLT", ""},
	{515, "MUTE_IPO_OFF", 0, "MUTE_IPO_OFF", ""},
	{516, "MUTE_IPO_ON", 0, "MUTE_IPO_ON", ""},
	{517, "VISIBLE_IPO_OFF", 0, "VISIBLE_IPO_OFF", ""},
	{518, "VISIBLE_IPO_ON", 0, "VISIBLE_IPO_ON", ""},
	{519, "DRIVER", 0, "DRIVER", ""},
	{520, "SOLO_OFF", 0, "SOLO_OFF", ""},
	{521, "SOLO_ON", 0, "SOLO_ON", ""},
	{522, "FRAME_PREV", 0, "FRAME_PREV", ""},
	{523, "FRAME_NEXT", 0, "FRAME_NEXT", ""},
	{524, "NLA_PUSHDOWN", 0, "NLA_PUSHDOWN", ""},
	{525, "IPO_CONSTANT", 0, "IPO_CONSTANT", ""},
	{526, "IPO_LINEAR", 0, "IPO_LINEAR", ""},
	{527, "IPO_BEZIER", 0, "IPO_BEZIER", ""},
	{528, "IPO_SINE", 0, "IPO_SINE", ""},
	{529, "IPO_QUAD", 0, "IPO_QUAD", ""},
	{530, "IPO_CUBIC", 0, "IPO_CUBIC", ""},
	{531, "IPO_QUART", 0, "IPO_QUART", ""},
	{532, "IPO_QUINT", 0, "IPO_QUINT", ""},
	{533, "IPO_EXPO", 0, "IPO_EXPO", ""},
	{534, "IPO_CIRC", 0, "IPO_CIRC", ""},
	{535, "IPO_BOUNCE", 0, "IPO_BOUNCE", ""},
	{536, "IPO_ELASTIC", 0, "IPO_ELASTIC", ""},
	{537, "IPO_BACK", 0, "IPO_BACK", ""},
	{538, "IPO_EASE_IN", 0, "IPO_EASE_IN", ""},
	{539, "IPO_EASE_OUT", 0, "IPO_EASE_OUT", ""},
	{540, "IPO_EASE_IN_OUT", 0, "IPO_EASE_IN_OUT", ""},
	{546, "VERTEXSEL", 0, "VERTEXSEL", ""},
	{547, "EDGESEL", 0, "EDGESEL", ""},
	{548, "FACESEL", 0, "FACESEL", ""},
	{549, "LOOPSEL", 0, "LOOPSEL", ""},
	{551, "ROTATE", 0, "ROTATE", ""},
	{552, "CURSOR", 0, "CURSOR", ""},
	{553, "ROTATECOLLECTION", 0, "ROTATECOLLECTION", ""},
	{554, "ROTATECENTER", 0, "ROTATECENTER", ""},
	{555, "ROTACTIVE", 0, "ROTACTIVE", ""},
	{556, "ALIGN", 0, "ALIGN", ""},
	{558, "SMOOTHCURVE", 0, "SMOOTHCURVE", ""},
	{559, "SPHERECURVE", 0, "SPHERECURVE", ""},
	{560, "ROOTCURVE", 0, "ROOTCURVE", ""},
	{561, "SHARPCURVE", 0, "SHARPCURVE", ""},
	{562, "LINCURVE", 0, "LINCURVE", ""},
	{563, "NOCURVE", 0, "NOCURVE", ""},
	{564, "RNDCURVE", 0, "RNDCURVE", ""},
	{565, "PROP_OFF", 0, "PROP_OFF", ""},
	{566, "PROP_ON", 0, "PROP_ON", ""},
	{567, "PROP_CON", 0, "PROP_CON", ""},
	{568, "SCULPT_DYNTOPO", 0, "SCULPT_DYNTOPO", ""},
	{569, "PARTICLE_POINT", 0, "PARTICLE_POINT", ""},
	{570, "PARTICLE_TIP", 0, "PARTICLE_TIP", ""},
	{571, "PARTICLE_PATH", 0, "PARTICLE_PATH", ""},
	{572, "MAN_TRANS", 0, "MAN_TRANS", ""},
	{573, "MAN_ROT", 0, "MAN_ROT", ""},
	{574, "MAN_SCALE", 0, "MAN_SCALE", ""},
	{575, "MANIPUL", 0, "MANIPUL", ""},
	{576, "SNAP_OFF", 0, "SNAP_OFF", ""},
	{577, "SNAP_ON", 0, "SNAP_ON", ""},
	{578, "SNAP_NORMAL", 0, "SNAP_NORMAL", ""},
	{579, "SNAP_INCREMENT", 0, "SNAP_INCREMENT", ""},
	{580, "SNAP_VERTEX", 0, "SNAP_VERTEX", ""},
	{581, "SNAP_EDGE", 0, "SNAP_EDGE", ""},
	{582, "SNAP_FACE", 0, "SNAP_FACE", ""},
	{583, "SNAP_VOLUME", 0, "SNAP_VOLUME", ""},
	{585, "STICKY_UVS_LOC", 0, "STICKY_UVS_LOC", ""},
	{586, "STICKY_UVS_DISABLE", 0, "STICKY_UVS_DISABLE", ""},
	{587, "STICKY_UVS_VERT", 0, "STICKY_UVS_VERT", ""},
	{588, "CLIPUV_DEHLT", 0, "CLIPUV_DEHLT", ""},
	{589, "CLIPUV_HLT", 0, "CLIPUV_HLT", ""},
	{590, "SNAP_PEEL_OBJECT", 0, "SNAP_PEEL_OBJECT", ""},
	{591, "GRID", 0, "GRID", ""},
	{598, "PASTEDOWN", 0, "PASTEDOWN", ""},
	{599, "COPYDOWN", 0, "COPYDOWN", ""},
	{600, "PASTEFLIPUP", 0, "PASTEFLIPUP", ""},
	{601, "PASTEFLIPDOWN", 0, "PASTEFLIPDOWN", ""},
	{606, "SNAP_SURFACE", 0, "SNAP_SURFACE", ""},
	{607, "AUTOMERGE_ON", 0, "AUTOMERGE_ON", ""},
	{608, "AUTOMERGE_OFF", 0, "AUTOMERGE_OFF", ""},
	{609, "RETOPO", 0, "RETOPO", ""},
	{610, "UV_VERTEXSEL", 0, "UV_VERTEXSEL", ""},
	{611, "UV_EDGESEL", 0, "UV_EDGESEL", ""},
	{612, "UV_FACESEL", 0, "UV_FACESEL", ""},
	{613, "UV_ISLANDSEL", 0, "UV_ISLANDSEL", ""},
	{614, "UV_SYNC_SELECT", 0, "UV_SYNC_SELECT", ""},
	{624, "BBOX", 0, "BBOX", ""},
	{625, "WIRE", 0, "WIRE", ""},
	{626, "SOLID", 0, "SOLID", ""},
	{627, "SMOOTH", 0, "SMOOTH", ""},
	{628, "POTATO", 0, "POTATO", ""},
	{630, "ORTHO", 0, "ORTHO", ""},
	{633, "LOCKVIEW_OFF", 0, "LOCKVIEW_OFF", ""},
	{634, "LOCKVIEW_ON", 0, "LOCKVIEW_ON", ""},
	{636, "AXIS_SIDE", 0, "AXIS_SIDE", ""},
	{637, "AXIS_FRONT", 0, "AXIS_FRONT", ""},
	{638, "AXIS_TOP", 0, "AXIS_TOP", ""},
	{639, "NDOF_DOM", 0, "NDOF_DOM", ""},
	{640, "NDOF_TURN", 0, "NDOF_TURN", ""},
	{641, "NDOF_FLY", 0, "NDOF_FLY", ""},
	{642, "NDOF_TRANS", 0, "NDOF_TRANS", ""},
	{643, "LAYER_USED", 0, "LAYER_USED", ""},
	{644, "LAYER_ACTIVE", 0, "LAYER_ACTIVE", ""},
	{676, "SORTALPHA", 0, "SORTALPHA", ""},
	{677, "SORTBYEXT", 0, "SORTBYEXT", ""},
	{678, "SORTTIME", 0, "SORTTIME", ""},
	{679, "SORTSIZE", 0, "SORTSIZE", ""},
	{680, "LONGDISPLAY", 0, "LONGDISPLAY", ""},
	{681, "SHORTDISPLAY", 0, "SHORTDISPLAY", ""},
	{682, "GHOST", 0, "GHOST", ""},
	{683, "IMGDISPLAY", 0, "IMGDISPLAY", ""},
	{684, "SAVE_AS", 0, "SAVE_AS", ""},
	{685, "SAVE_COPY", 0, "SAVE_COPY", ""},
	{686, "BOOKMARKS", 0, "BOOKMARKS", ""},
	{687, "FONTPREVIEW", 0, "FONTPREVIEW", ""},
	{688, "FILTER", 0, "FILTER", ""},
	{689, "NEWFOLDER", 0, "NEWFOLDER", ""},
	{690, "OPEN_RECENT", 0, "OPEN_RECENT", ""},
	{691, "FILE_PARENT", 0, "FILE_PARENT", ""},
	{692, "FILE_REFRESH", 0, "FILE_REFRESH", ""},
	{693, "FILE_FOLDER", 0, "FILE_FOLDER", ""},
	{694, "FILE_BLANK", 0, "FILE_BLANK", ""},
	{695, "FILE_BLEND", 0, "FILE_BLEND", ""},
	{696, "FILE_IMAGE", 0, "FILE_IMAGE", ""},
	{697, "FILE_MOVIE", 0, "FILE_MOVIE", ""},
	{698, "FILE_SCRIPT", 0, "FILE_SCRIPT", ""},
	{699, "FILE_SOUND", 0, "FILE_SOUND", ""},
	{700, "FILE_FONT", 0, "FILE_FONT", ""},
	{701, "FILE_TEXT", 0, "FILE_TEXT", ""},
	{702, "RECOVER_AUTO", 0, "RECOVER_AUTO", ""},
	{703, "SAVE_PREFS", 0, "SAVE_PREFS", ""},
	{704, "LINK_BLEND", 0, "LINK_BLEND", ""},
	{705, "APPEND_BLEND", 0, "APPEND_BLEND", ""},
	{706, "IMPORT", 0, "IMPORT", ""},
	{707, "EXPORT", 0, "EXPORT", ""},
	{708, "EXTERNAL_DATA", 0, "EXTERNAL_DATA", ""},
	{709, "LOAD_FACTORY", 0, "LOAD_FACTORY", ""},
	{715, "LOOP_BACK", 0, "LOOP_BACK", ""},
	{716, "LOOP_FORWARDS", 0, "LOOP_FORWARDS", ""},
	{717, "BACK", 0, "BACK", ""},
	{718, "FORWARD", 0, "FORWARD", ""},
	{726, "FILE_BACKUP", 0, "FILE_BACKUP", ""},
	{727, "DISK_DRIVE", 0, "DISK_DRIVE", ""},
	{728, "MATPLANE", 0, "MATPLANE", ""},
	{729, "MATSPHERE", 0, "MATSPHERE", ""},
	{730, "MATCUBE", 0, "MATCUBE", ""},
	{731, "MONKEY", 0, "MONKEY", ""},
	{732, "HAIR", 0, "HAIR", ""},
	{733, "ALIASED", 0, "ALIASED", ""},
	{734, "ANTIALIASED", 0, "ANTIALIASED", ""},
	{735, "MAT_SPHERE_SKY", 0, "MAT_SPHERE_SKY", ""},
	{740, "WORDWRAP_OFF", 0, "WORDWRAP_OFF", ""},
	{741, "WORDWRAP_ON", 0, "WORDWRAP_ON", ""},
	{742, "SYNTAX_OFF", 0, "SYNTAX_OFF", ""},
	{743, "SYNTAX_ON", 0, "SYNTAX_ON", ""},
	{744, "LINENUMBERS_OFF", 0, "LINENUMBERS_OFF", ""},
	{745, "LINENUMBERS_ON", 0, "LINENUMBERS_ON", ""},
	{746, "SCRIPTPLUGINS", 0, "SCRIPTPLUGINS", ""},
	{754, "SEQ_SEQUENCER", 0, "SEQ_SEQUENCER", ""},
	{755, "SEQ_PREVIEW", 0, "SEQ_PREVIEW", ""},
	{756, "SEQ_LUMA_WAVEFORM", 0, "SEQ_LUMA_WAVEFORM", ""},
	{757, "SEQ_CHROMA_SCOPE", 0, "SEQ_CHROMA_SCOPE", ""},
	{758, "SEQ_HISTOGRAM", 0, "SEQ_HISTOGRAM", ""},
	{759, "SEQ_SPLITVIEW", 0, "SEQ_SPLITVIEW", ""},
	{763, "IMAGE_RGB", 0, "IMAGE_RGB", ""},
	{764, "IMAGE_RGB_ALPHA", 0, "IMAGE_RGB_ALPHA", ""},
	{765, "IMAGE_ALPHA", 0, "IMAGE_ALPHA", ""},
	{766, "IMAGE_ZDEPTH", 0, "IMAGE_ZDEPTH", ""},
	{767, "IMAGEFILE", 0, "IMAGEFILE", ""},
	{780, "BRUSH_ADD", 0, "BRUSH_ADD", ""},
	{781, "BRUSH_BLOB", 0, "BRUSH_BLOB", ""},
	{782, "BRUSH_BLUR", 0, "BRUSH_BLUR", ""},
	{783, "BRUSH_CLAY", 0, "BRUSH_CLAY", ""},
	{784, "BRUSH_CLAY_STRIPS", 0, "BRUSH_CLAY_STRIPS", ""},
	{785, "BRUSH_CLONE", 0, "BRUSH_CLONE", ""},
	{786, "BRUSH_CREASE", 0, "BRUSH_CREASE", ""},
	{787, "BRUSH_DARKEN", 0, "BRUSH_DARKEN", ""},
	{788, "BRUSH_FILL", 0, "BRUSH_FILL", ""},
	{789, "BRUSH_FLATTEN", 0, "BRUSH_FLATTEN", ""},
	{790, "BRUSH_GRAB", 0, "BRUSH_GRAB", ""},
	{791, "BRUSH_INFLATE", 0, "BRUSH_INFLATE", ""},
	{792, "BRUSH_LAYER", 0, "BRUSH_LAYER", ""},
	{793, "BRUSH_LIGHTEN", 0, "BRUSH_LIGHTEN", ""},
	{794, "BRUSH_MASK", 0, "BRUSH_MASK", ""},
	{795, "BRUSH_MIX", 0, "BRUSH_MIX", ""},
	{796, "BRUSH_MULTIPLY", 0, "BRUSH_MULTIPLY", ""},
	{797, "BRUSH_NUDGE", 0, "BRUSH_NUDGE", ""},
	{798, "BRUSH_PINCH", 0, "BRUSH_PINCH", ""},
	{799, "BRUSH_SCRAPE", 0, "BRUSH_SCRAPE", ""},
	{800, "BRUSH_SCULPT_DRAW", 0, "BRUSH_SCULPT_DRAW", ""},
	{801, "BRUSH_SMEAR", 0, "BRUSH_SMEAR", ""},
	{802, "BRUSH_SMOOTH", 0, "BRUSH_SMOOTH", ""},
	{803, "BRUSH_SNAKE_HOOK", 0, "BRUSH_SNAKE_HOOK", ""},
	{804, "BRUSH_SOFTEN", 0, "BRUSH_SOFTEN", ""},
	{805, "BRUSH_SUBTRACT", 0, "BRUSH_SUBTRACT", ""},
	{806, "BRUSH_TEXDRAW", 0, "BRUSH_TEXDRAW", ""},
	{807, "BRUSH_TEXFILL", 0, "BRUSH_TEXFILL", ""},
	{808, "BRUSH_TEXMASK", 0, "BRUSH_TEXMASK", ""},
	{809, "BRUSH_THUMB", 0, "BRUSH_THUMB", ""},
	{810, "BRUSH_ROTATE", 0, "BRUSH_ROTATE", ""},
	{811, "BRUSH_VERTEXDRAW", 0, "BRUSH_VERTEXDRAW", ""},
	{812, "MATCAP_01", 0, "MATCAP_01", ""},
	{813, "MATCAP_02", 0, "MATCAP_02", ""},
	{814, "MATCAP_03", 0, "MATCAP_03", ""},
	{815, "MATCAP_04", 0, "MATCAP_04", ""},
	{816, "MATCAP_05", 0, "MATCAP_05", ""},
	{817, "MATCAP_06", 0, "MATCAP_06", ""},
	{818, "MATCAP_07", 0, "MATCAP_07", ""},
	{819, "MATCAP_08", 0, "MATCAP_08", ""},
	{820, "MATCAP_09", 0, "MATCAP_09", ""},
	{821, "MATCAP_10", 0, "MATCAP_10", ""},
	{822, "MATCAP_11", 0, "MATCAP_11", ""},
	{823, "MATCAP_12", 0, "MATCAP_12", ""},
	{824, "MATCAP_13", 0, "MATCAP_13", ""},
	{825, "MATCAP_14", 0, "MATCAP_14", ""},
	{826, "MATCAP_15", 0, "MATCAP_15", ""},
	{827, "MATCAP_16", 0, "MATCAP_16", ""},
	{828, "MATCAP_17", 0, "MATCAP_17", ""},
	{829, "MATCAP_18", 0, "MATCAP_18", ""},
	{830, "MATCAP_19", 0, "MATCAP_19", ""},
	{831, "MATCAP_20", 0, "MATCAP_20", ""},
	{832, "MATCAP_21", 0, "MATCAP_21", ""},
	{833, "MATCAP_22", 0, "MATCAP_22", ""},
	{834, "MATCAP_23", 0, "MATCAP_23", ""},
	{835, "MATCAP_24", 0, "MATCAP_24", ""},
	{836, "VIEW3D_VEC", 0, "VIEW3D_VEC", ""},
	{837, "EDIT_VEC", 0, "EDIT_VEC", ""},
	{838, "EDITMODE_VEC_DEHLT", 0, "EDITMODE_VEC_DEHLT", ""},
	{839, "EDITMODE_VEC_HLT", 0, "EDITMODE_VEC_HLT", ""},
	{840, "DISCLOSURE_TRI_RIGHT_VEC", 0, "DISCLOSURE_TRI_RIGHT_VEC", ""},
	{841, "DISCLOSURE_TRI_DOWN_VEC", 0, "DISCLOSURE_TRI_DOWN_VEC", ""},
	{842, "MOVE_UP_VEC", 0, "MOVE_UP_VEC", ""},
	{843, "MOVE_DOWN_VEC", 0, "MOVE_DOWN_VEC", ""},
	{844, "X_VEC", 0, "X_VEC", ""},
	{845, "SMALL_TRI_RIGHT_VEC", 0, "SMALL_TRI_RIGHT_VEC", ""},
	{0, NULL, 0, NULL, NULL}
};

EnumPropertyRNA rna_UILayout_operator_menu_enum_icon = {
	{NULL, (PropertyRNA *)&rna_UILayout_operator_menu_enum_translate,
	-1, "icon", 3, "Icon",
	"Override automatic icon of the item",
	0, "*",
	PROP_ENUM, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	NULL, NULL, NULL, NULL, NULL, NULL, rna_UILayout_operator_menu_enum_icon_items, 542, 0
};

FunctionRNA rna_UILayout_operator_menu_enum_func = {
	{(FunctionRNA *)&rna_UILayout_label_func, (FunctionRNA *)&rna_UILayout_operator_enum_func,
	NULL,
	{(PropertyRNA *)&rna_UILayout_operator_menu_enum_operator, (PropertyRNA *)&rna_UILayout_operator_menu_enum_icon}},
	"operator_menu_enum", 8, "operator_menu_enum",
	UILayout_operator_menu_enum_call,
	NULL
};

StringPropertyRNA rna_UILayout_label_text = {
	{(PropertyRNA *)&rna_UILayout_label_text_ctxt, NULL,
	-1, "text", 262145, "",
	"Override automatic text of the item",
	0, "*",
	PROP_STRING, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	NULL, NULL, NULL, NULL, NULL, NULL, 0, ""
};

StringPropertyRNA rna_UILayout_label_text_ctxt = {
	{(PropertyRNA *)&rna_UILayout_label_translate, (PropertyRNA *)&rna_UILayout_label_text,
	-1, "text_ctxt", 262145, "",
	"Override automatic translation context of the given text",
	0, "*",
	PROP_STRING, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	NULL, NULL, NULL, NULL, NULL, NULL, 0, ""
};

BoolPropertyRNA rna_UILayout_label_translate = {
	{(PropertyRNA *)&rna_UILayout_label_icon, (PropertyRNA *)&rna_UILayout_label_text_ctxt,
	-1, "translate", 3, "",
	"Translate the given text, when UI translation is enabled",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 1, NULL
};

static EnumPropertyItem rna_UILayout_label_icon_items[543] = {
	{0, "NONE", 0, "NONE", ""},
	{1, "QUESTION", 0, "QUESTION", ""},
	{2, "ERROR", 0, "ERROR", ""},
	{3, "CANCEL", 0, "CANCEL", ""},
	{4, "TRIA_RIGHT", 0, "TRIA_RIGHT", ""},
	{5, "TRIA_DOWN", 0, "TRIA_DOWN", ""},
	{6, "TRIA_LEFT", 0, "TRIA_LEFT", ""},
	{7, "TRIA_UP", 0, "TRIA_UP", ""},
	{8, "ARROW_LEFTRIGHT", 0, "ARROW_LEFTRIGHT", ""},
	{9, "PLUS", 0, "PLUS", ""},
	{10, "DISCLOSURE_TRI_DOWN", 0, "DISCLOSURE_TRI_DOWN", ""},
	{11, "DISCLOSURE_TRI_RIGHT", 0, "DISCLOSURE_TRI_RIGHT", ""},
	{12, "RADIOBUT_OFF", 0, "RADIOBUT_OFF", ""},
	{13, "RADIOBUT_ON", 0, "RADIOBUT_ON", ""},
	{14, "MENU_PANEL", 0, "MENU_PANEL", ""},
	{15, "BLENDER", 0, "BLENDER", ""},
	{16, "GRIP", 0, "GRIP", ""},
	{17, "DOT", 0, "DOT", ""},
	{18, "COLLAPSEMENU", 0, "COLLAPSEMENU", ""},
	{19, "X", 0, "X", ""},
	{21, "GO_LEFT", 0, "GO_LEFT", ""},
	{22, "PLUG", 0, "PLUG", ""},
	{23, "UI", 0, "UI", ""},
	{24, "NODE", 0, "NODE", ""},
	{25, "NODE_SEL", 0, "NODE_SEL", ""},
	{26, "FULLSCREEN", 0, "FULLSCREEN", ""},
	{27, "SPLITSCREEN", 0, "SPLITSCREEN", ""},
	{28, "RIGHTARROW_THIN", 0, "RIGHTARROW_THIN", ""},
	{29, "BORDERMOVE", 0, "BORDERMOVE", ""},
	{30, "VIEWZOOM", 0, "VIEWZOOM", ""},
	{31, "ZOOMIN", 0, "ZOOMIN", ""},
	{32, "ZOOMOUT", 0, "ZOOMOUT", ""},
	{33, "PANEL_CLOSE", 0, "PANEL_CLOSE", ""},
	{34, "COPY_ID", 0, "COPY_ID", ""},
	{35, "EYEDROPPER", 0, "EYEDROPPER", ""},
	{36, "LINK_AREA", 0, "LINK_AREA", ""},
	{37, "AUTO", 0, "AUTO", ""},
	{38, "CHECKBOX_DEHLT", 0, "CHECKBOX_DEHLT", ""},
	{39, "CHECKBOX_HLT", 0, "CHECKBOX_HLT", ""},
	{40, "UNLOCKED", 0, "UNLOCKED", ""},
	{41, "LOCKED", 0, "LOCKED", ""},
	{42, "UNPINNED", 0, "UNPINNED", ""},
	{43, "PINNED", 0, "PINNED", ""},
	{44, "SCREEN_BACK", 0, "SCREEN_BACK", ""},
	{45, "RIGHTARROW", 0, "RIGHTARROW", ""},
	{46, "DOWNARROW_HLT", 0, "DOWNARROW_HLT", ""},
	{47, "DOTSUP", 0, "DOTSUP", ""},
	{48, "DOTSDOWN", 0, "DOTSDOWN", ""},
	{49, "LINK", 0, "LINK", ""},
	{50, "INLINK", 0, "INLINK", ""},
	{51, "PLUGIN", 0, "PLUGIN", ""},
	{52, "HELP", 0, "HELP", ""},
	{53, "GHOST_ENABLED", 0, "GHOST_ENABLED", ""},
	{54, "COLOR", 0, "COLOR", ""},
	{55, "LINKED", 0, "LINKED", ""},
	{56, "UNLINKED", 0, "UNLINKED", ""},
	{57, "HAND", 0, "HAND", ""},
	{58, "ZOOM_ALL", 0, "ZOOM_ALL", ""},
	{59, "ZOOM_SELECTED", 0, "ZOOM_SELECTED", ""},
	{60, "ZOOM_PREVIOUS", 0, "ZOOM_PREVIOUS", ""},
	{61, "ZOOM_IN", 0, "ZOOM_IN", ""},
	{62, "ZOOM_OUT", 0, "ZOOM_OUT", ""},
	{63, "RENDER_REGION", 0, "RENDER_REGION", ""},
	{64, "BORDER_RECT", 0, "BORDER_RECT", ""},
	{65, "BORDER_LASSO", 0, "BORDER_LASSO", ""},
	{66, "FREEZE", 0, "FREEZE", ""},
	{67, "STYLUS_PRESSURE", 0, "STYLUS_PRESSURE", ""},
	{68, "GHOST_DISABLED", 0, "GHOST_DISABLED", ""},
	{69, "NEW", 0, "NEW", ""},
	{70, "FILE_TICK", 0, "FILE_TICK", ""},
	{71, "QUIT", 0, "QUIT", ""},
	{72, "URL", 0, "URL", ""},
	{73, "RECOVER_LAST", 0, "RECOVER_LAST", ""},
	{75, "FULLSCREEN_ENTER", 0, "FULLSCREEN_ENTER", ""},
	{76, "FULLSCREEN_EXIT", 0, "FULLSCREEN_EXIT", ""},
	{77, "BLANK1", 0, "BLANK1", ""},
	{78, "LAMP", 0, "LAMP", ""},
	{79, "MATERIAL", 0, "MATERIAL", ""},
	{80, "TEXTURE", 0, "TEXTURE", ""},
	{81, "ANIM", 0, "ANIM", ""},
	{82, "WORLD", 0, "WORLD", ""},
	{83, "SCENE", 0, "SCENE", ""},
	{84, "EDIT", 0, "EDIT", ""},
	{85, "GAME", 0, "GAME", ""},
	{86, "RADIO", 0, "RADIO", ""},
	{87, "SCRIPT", 0, "SCRIPT", ""},
	{88, "PARTICLES", 0, "PARTICLES", ""},
	{89, "PHYSICS", 0, "PHYSICS", ""},
	{90, "SPEAKER", 0, "SPEAKER", ""},
	{91, "TEXTURE_SHADED", 0, "TEXTURE_SHADED", ""},
	{104, "VIEW3D", 0, "VIEW3D", ""},
	{105, "IPO", 0, "IPO", ""},
	{106, "OOPS", 0, "OOPS", ""},
	{107, "BUTS", 0, "BUTS", ""},
	{108, "FILESEL", 0, "FILESEL", ""},
	{109, "IMAGE_COL", 0, "IMAGE_COL", ""},
	{110, "INFO", 0, "INFO", ""},
	{111, "SEQUENCE", 0, "SEQUENCE", ""},
	{112, "TEXT", 0, "TEXT", ""},
	{113, "IMASEL", 0, "IMASEL", ""},
	{114, "SOUND", 0, "SOUND", ""},
	{115, "ACTION", 0, "ACTION", ""},
	{116, "NLA", 0, "NLA", ""},
	{117, "SCRIPTWIN", 0, "SCRIPTWIN", ""},
	{118, "TIME", 0, "TIME", ""},
	{119, "NODETREE", 0, "NODETREE", ""},
	{120, "LOGIC", 0, "LOGIC", ""},
	{121, "CONSOLE", 0, "CONSOLE", ""},
	{122, "PREFERENCES", 0, "PREFERENCES", ""},
	{123, "CLIP", 0, "CLIP", ""},
	{124, "ASSET_MANAGER", 0, "ASSET_MANAGER", ""},
	{130, "OBJECT_DATAMODE", 0, "OBJECT_DATAMODE", ""},
	{131, "EDITMODE_HLT", 0, "EDITMODE_HLT", ""},
	{132, "FACESEL_HLT", 0, "FACESEL_HLT", ""},
	{133, "VPAINT_HLT", 0, "VPAINT_HLT", ""},
	{134, "TPAINT_HLT", 0, "TPAINT_HLT", ""},
	{135, "WPAINT_HLT", 0, "WPAINT_HLT", ""},
	{136, "SCULPTMODE_HLT", 0, "SCULPTMODE_HLT", ""},
	{137, "POSE_HLT", 0, "POSE_HLT", ""},
	{138, "PARTICLEMODE", 0, "PARTICLEMODE", ""},
	{139, "LIGHTPAINT", 0, "LIGHTPAINT", ""},
	{156, "SCENE_DATA", 0, "SCENE_DATA", ""},
	{157, "RENDERLAYERS", 0, "RENDERLAYERS", ""},
	{158, "WORLD_DATA", 0, "WORLD_DATA", ""},
	{159, "OBJECT_DATA", 0, "OBJECT_DATA", ""},
	{160, "MESH_DATA", 0, "MESH_DATA", ""},
	{161, "CURVE_DATA", 0, "CURVE_DATA", ""},
	{162, "META_DATA", 0, "META_DATA", ""},
	{163, "LATTICE_DATA", 0, "LATTICE_DATA", ""},
	{164, "LAMP_DATA", 0, "LAMP_DATA", ""},
	{165, "MATERIAL_DATA", 0, "MATERIAL_DATA", ""},
	{166, "TEXTURE_DATA", 0, "TEXTURE_DATA", ""},
	{167, "ANIM_DATA", 0, "ANIM_DATA", ""},
	{168, "CAMERA_DATA", 0, "CAMERA_DATA", ""},
	{169, "PARTICLE_DATA", 0, "PARTICLE_DATA", ""},
	{170, "LIBRARY_DATA_DIRECT", 0, "LIBRARY_DATA_DIRECT", ""},
	{171, "GROUP", 0, "GROUP", ""},
	{172, "ARMATURE_DATA", 0, "ARMATURE_DATA", ""},
	{173, "POSE_DATA", 0, "POSE_DATA", ""},
	{174, "BONE_DATA", 0, "BONE_DATA", ""},
	{175, "CONSTRAINT", 0, "CONSTRAINT", ""},
	{176, "SHAPEKEY_DATA", 0, "SHAPEKEY_DATA", ""},
	{177, "CONSTRAINT_BONE", 0, "CONSTRAINT_BONE", ""},
	{178, "CAMERA_STEREO", 0, "CAMERA_STEREO", ""},
	{179, "PACKAGE", 0, "PACKAGE", ""},
	{180, "UGLYPACKAGE", 0, "UGLYPACKAGE", ""},
	{182, "BRUSH_DATA", 0, "BRUSH_DATA", ""},
	{183, "IMAGE_DATA", 0, "IMAGE_DATA", ""},
	{184, "FILE", 0, "FILE", ""},
	{185, "FCURVE", 0, "FCURVE", ""},
	{186, "FONT_DATA", 0, "FONT_DATA", ""},
	{187, "RENDER_RESULT", 0, "RENDER_RESULT", ""},
	{188, "SURFACE_DATA", 0, "SURFACE_DATA", ""},
	{189, "EMPTY_DATA", 0, "EMPTY_DATA", ""},
	{190, "SETTINGS", 0, "SETTINGS", ""},
	{191, "RENDER_ANIMATION", 0, "RENDER_ANIMATION", ""},
	{192, "RENDER_STILL", 0, "RENDER_STILL", ""},
	{194, "BOIDS", 0, "BOIDS", ""},
	{195, "STRANDS", 0, "STRANDS", ""},
	{196, "LIBRARY_DATA_INDIRECT", 0, "LIBRARY_DATA_INDIRECT", ""},
	{197, "GREASEPENCIL", 0, "GREASEPENCIL", ""},
	{198, "LINE_DATA", 0, "LINE_DATA", ""},
	{200, "GROUP_BONE", 0, "GROUP_BONE", ""},
	{201, "GROUP_VERTEX", 0, "GROUP_VERTEX", ""},
	{202, "GROUP_VCOL", 0, "GROUP_VCOL", ""},
	{203, "GROUP_UVS", 0, "GROUP_UVS", ""},
	{206, "RNA", 0, "RNA", ""},
	{207, "RNA_ADD", 0, "RNA_ADD", ""},
	{234, "OUTLINER_OB_EMPTY", 0, "OUTLINER_OB_EMPTY", ""},
	{235, "OUTLINER_OB_MESH", 0, "OUTLINER_OB_MESH", ""},
	{236, "OUTLINER_OB_CURVE", 0, "OUTLINER_OB_CURVE", ""},
	{237, "OUTLINER_OB_LATTICE", 0, "OUTLINER_OB_LATTICE", ""},
	{238, "OUTLINER_OB_META", 0, "OUTLINER_OB_META", ""},
	{239, "OUTLINER_OB_LAMP", 0, "OUTLINER_OB_LAMP", ""},
	{240, "OUTLINER_OB_CAMERA", 0, "OUTLINER_OB_CAMERA", ""},
	{241, "OUTLINER_OB_ARMATURE", 0, "OUTLINER_OB_ARMATURE", ""},
	{242, "OUTLINER_OB_FONT", 0, "OUTLINER_OB_FONT", ""},
	{243, "OUTLINER_OB_SURFACE", 0, "OUTLINER_OB_SURFACE", ""},
	{244, "OUTLINER_OB_SPEAKER", 0, "OUTLINER_OB_SPEAKER", ""},
	{253, "RESTRICT_VIEW_OFF", 0, "RESTRICT_VIEW_OFF", ""},
	{254, "RESTRICT_VIEW_ON", 0, "RESTRICT_VIEW_ON", ""},
	{255, "RESTRICT_SELECT_OFF", 0, "RESTRICT_SELECT_OFF", ""},
	{256, "RESTRICT_SELECT_ON", 0, "RESTRICT_SELECT_ON", ""},
	{257, "RESTRICT_RENDER_OFF", 0, "RESTRICT_RENDER_OFF", ""},
	{258, "RESTRICT_RENDER_ON", 0, "RESTRICT_RENDER_ON", ""},
	{260, "OUTLINER_DATA_EMPTY", 0, "OUTLINER_DATA_EMPTY", ""},
	{261, "OUTLINER_DATA_MESH", 0, "OUTLINER_DATA_MESH", ""},
	{262, "OUTLINER_DATA_CURVE", 0, "OUTLINER_DATA_CURVE", ""},
	{263, "OUTLINER_DATA_LATTICE", 0, "OUTLINER_DATA_LATTICE", ""},
	{264, "OUTLINER_DATA_META", 0, "OUTLINER_DATA_META", ""},
	{265, "OUTLINER_DATA_LAMP", 0, "OUTLINER_DATA_LAMP", ""},
	{266, "OUTLINER_DATA_CAMERA", 0, "OUTLINER_DATA_CAMERA", ""},
	{267, "OUTLINER_DATA_ARMATURE", 0, "OUTLINER_DATA_ARMATURE", ""},
	{268, "OUTLINER_DATA_FONT", 0, "OUTLINER_DATA_FONT", ""},
	{269, "OUTLINER_DATA_SURFACE", 0, "OUTLINER_DATA_SURFACE", ""},
	{270, "OUTLINER_DATA_SPEAKER", 0, "OUTLINER_DATA_SPEAKER", ""},
	{271, "OUTLINER_DATA_POSE", 0, "OUTLINER_DATA_POSE", ""},
	{286, "MESH_PLANE", 0, "MESH_PLANE", ""},
	{287, "MESH_CUBE", 0, "MESH_CUBE", ""},
	{288, "MESH_CIRCLE", 0, "MESH_CIRCLE", ""},
	{289, "MESH_UVSPHERE", 0, "MESH_UVSPHERE", ""},
	{290, "MESH_ICOSPHERE", 0, "MESH_ICOSPHERE", ""},
	{291, "MESH_GRID", 0, "MESH_GRID", ""},
	{292, "MESH_MONKEY", 0, "MESH_MONKEY", ""},
	{293, "MESH_CYLINDER", 0, "MESH_CYLINDER", ""},
	{294, "MESH_TORUS", 0, "MESH_TORUS", ""},
	{295, "MESH_CONE", 0, "MESH_CONE", ""},
	{298, "LAMP_POINT", 0, "LAMP_POINT", ""},
	{299, "LAMP_SUN", 0, "LAMP_SUN", ""},
	{300, "LAMP_SPOT", 0, "LAMP_SPOT", ""},
	{301, "LAMP_HEMI", 0, "LAMP_HEMI", ""},
	{302, "LAMP_AREA", 0, "LAMP_AREA", ""},
	{305, "META_EMPTY", 0, "META_EMPTY", ""},
	{306, "META_PLANE", 0, "META_PLANE", ""},
	{307, "META_CUBE", 0, "META_CUBE", ""},
	{308, "META_BALL", 0, "META_BALL", ""},
	{309, "META_ELLIPSOID", 0, "META_ELLIPSOID", ""},
	{310, "META_CAPSULE", 0, "META_CAPSULE", ""},
	{312, "SURFACE_NCURVE", 0, "SURFACE_NCURVE", ""},
	{313, "SURFACE_NCIRCLE", 0, "SURFACE_NCIRCLE", ""},
	{314, "SURFACE_NSURFACE", 0, "SURFACE_NSURFACE", ""},
	{315, "SURFACE_NCYLINDER", 0, "SURFACE_NCYLINDER", ""},
	{316, "SURFACE_NSPHERE", 0, "SURFACE_NSPHERE", ""},
	{317, "SURFACE_NTORUS", 0, "SURFACE_NTORUS", ""},
	{321, "CURVE_BEZCURVE", 0, "CURVE_BEZCURVE", ""},
	{322, "CURVE_BEZCIRCLE", 0, "CURVE_BEZCIRCLE", ""},
	{323, "CURVE_NCURVE", 0, "CURVE_NCURVE", ""},
	{324, "CURVE_NCIRCLE", 0, "CURVE_NCIRCLE", ""},
	{325, "CURVE_PATH", 0, "CURVE_PATH", ""},
	{331, "COLOR_RED", 0, "COLOR_RED", ""},
	{332, "COLOR_GREEN", 0, "COLOR_GREEN", ""},
	{333, "COLOR_BLUE", 0, "COLOR_BLUE", ""},
	{334, "TRIA_RIGHT_BAR", 0, "TRIA_RIGHT_BAR", ""},
	{335, "TRIA_DOWN_BAR", 0, "TRIA_DOWN_BAR", ""},
	{336, "TRIA_LEFT_BAR", 0, "TRIA_LEFT_BAR", ""},
	{337, "TRIA_UP_BAR", 0, "TRIA_UP_BAR", ""},
	{338, "FORCE_FORCE", 0, "FORCE_FORCE", ""},
	{339, "FORCE_WIND", 0, "FORCE_WIND", ""},
	{340, "FORCE_VORTEX", 0, "FORCE_VORTEX", ""},
	{341, "FORCE_MAGNETIC", 0, "FORCE_MAGNETIC", ""},
	{342, "FORCE_HARMONIC", 0, "FORCE_HARMONIC", ""},
	{343, "FORCE_CHARGE", 0, "FORCE_CHARGE", ""},
	{344, "FORCE_LENNARDJONES", 0, "FORCE_LENNARDJONES", ""},
	{345, "FORCE_TEXTURE", 0, "FORCE_TEXTURE", ""},
	{346, "FORCE_CURVE", 0, "FORCE_CURVE", ""},
	{347, "FORCE_BOID", 0, "FORCE_BOID", ""},
	{348, "FORCE_TURBULENCE", 0, "FORCE_TURBULENCE", ""},
	{349, "FORCE_DRAG", 0, "FORCE_DRAG", ""},
	{350, "FORCE_SMOKEFLOW", 0, "FORCE_SMOKEFLOW", ""},
	{442, "MODIFIER", 0, "MODIFIER", ""},
	{443, "MOD_WAVE", 0, "MOD_WAVE", ""},
	{444, "MOD_BUILD", 0, "MOD_BUILD", ""},
	{445, "MOD_DECIM", 0, "MOD_DECIM", ""},
	{446, "MOD_MIRROR", 0, "MOD_MIRROR", ""},
	{447, "MOD_SOFT", 0, "MOD_SOFT", ""},
	{448, "MOD_SUBSURF", 0, "MOD_SUBSURF", ""},
	{449, "HOOK", 0, "HOOK", ""},
	{450, "MOD_PHYSICS", 0, "MOD_PHYSICS", ""},
	{451, "MOD_PARTICLES", 0, "MOD_PARTICLES", ""},
	{452, "MOD_BOOLEAN", 0, "MOD_BOOLEAN", ""},
	{453, "MOD_EDGESPLIT", 0, "MOD_EDGESPLIT", ""},
	{454, "MOD_ARRAY", 0, "MOD_ARRAY", ""},
	{455, "MOD_UVPROJECT", 0, "MOD_UVPROJECT", ""},
	{456, "MOD_DISPLACE", 0, "MOD_DISPLACE", ""},
	{457, "MOD_CURVE", 0, "MOD_CURVE", ""},
	{458, "MOD_LATTICE", 0, "MOD_LATTICE", ""},
	{459, "CONSTRAINT_DATA", 0, "CONSTRAINT_DATA", ""},
	{460, "MOD_ARMATURE", 0, "MOD_ARMATURE", ""},
	{461, "MOD_SHRINKWRAP", 0, "MOD_SHRINKWRAP", ""},
	{462, "MOD_CAST", 0, "MOD_CAST", ""},
	{463, "MOD_MESHDEFORM", 0, "MOD_MESHDEFORM", ""},
	{464, "MOD_BEVEL", 0, "MOD_BEVEL", ""},
	{465, "MOD_SMOOTH", 0, "MOD_SMOOTH", ""},
	{466, "MOD_SIMPLEDEFORM", 0, "MOD_SIMPLEDEFORM", ""},
	{467, "MOD_MASK", 0, "MOD_MASK", ""},
	{468, "MOD_CLOTH", 0, "MOD_CLOTH", ""},
	{469, "MOD_EXPLODE", 0, "MOD_EXPLODE", ""},
	{470, "MOD_FLUIDSIM", 0, "MOD_FLUIDSIM", ""},
	{471, "MOD_MULTIRES", 0, "MOD_MULTIRES", ""},
	{472, "MOD_SMOKE", 0, "MOD_SMOKE", ""},
	{473, "MOD_SOLIDIFY", 0, "MOD_SOLIDIFY", ""},
	{474, "MOD_SCREW", 0, "MOD_SCREW", ""},
	{475, "MOD_VERTEX_WEIGHT", 0, "MOD_VERTEX_WEIGHT", ""},
	{476, "MOD_DYNAMICPAINT", 0, "MOD_DYNAMICPAINT", ""},
	{477, "MOD_REMESH", 0, "MOD_REMESH", ""},
	{478, "MOD_OCEAN", 0, "MOD_OCEAN", ""},
	{479, "MOD_WARP", 0, "MOD_WARP", ""},
	{480, "MOD_SKIN", 0, "MOD_SKIN", ""},
	{481, "MOD_TRIANGULATE", 0, "MOD_TRIANGULATE", ""},
	{482, "MOD_WIREFRAME", 0, "MOD_WIREFRAME", ""},
	{494, "REC", 0, "REC", ""},
	{495, "PLAY", 0, "PLAY", ""},
	{496, "FF", 0, "FF", ""},
	{497, "REW", 0, "REW", ""},
	{498, "PAUSE", 0, "PAUSE", ""},
	{499, "PREV_KEYFRAME", 0, "PREV_KEYFRAME", ""},
	{500, "NEXT_KEYFRAME", 0, "NEXT_KEYFRAME", ""},
	{501, "PLAY_AUDIO", 0, "PLAY_AUDIO", ""},
	{502, "PLAY_REVERSE", 0, "PLAY_REVERSE", ""},
	{503, "PREVIEW_RANGE", 0, "PREVIEW_RANGE", ""},
	{504, "ACTION_TWEAK", 0, "ACTION_TWEAK", ""},
	{505, "PMARKER_ACT", 0, "PMARKER_ACT", ""},
	{506, "PMARKER_SEL", 0, "PMARKER_SEL", ""},
	{507, "PMARKER", 0, "PMARKER", ""},
	{508, "MARKER_HLT", 0, "MARKER_HLT", ""},
	{509, "MARKER", 0, "MARKER", ""},
	{510, "SPACE2", 0, "SPACE2", ""},
	{511, "SPACE3", 0, "SPACE3", ""},
	{512, "KEYINGSET", 0, "KEYINGSET", ""},
	{513, "KEY_DEHLT", 0, "KEY_DEHLT", ""},
	{514, "KEY_HLT", 0, "KEY_HLT", ""},
	{515, "MUTE_IPO_OFF", 0, "MUTE_IPO_OFF", ""},
	{516, "MUTE_IPO_ON", 0, "MUTE_IPO_ON", ""},
	{517, "VISIBLE_IPO_OFF", 0, "VISIBLE_IPO_OFF", ""},
	{518, "VISIBLE_IPO_ON", 0, "VISIBLE_IPO_ON", ""},
	{519, "DRIVER", 0, "DRIVER", ""},
	{520, "SOLO_OFF", 0, "SOLO_OFF", ""},
	{521, "SOLO_ON", 0, "SOLO_ON", ""},
	{522, "FRAME_PREV", 0, "FRAME_PREV", ""},
	{523, "FRAME_NEXT", 0, "FRAME_NEXT", ""},
	{524, "NLA_PUSHDOWN", 0, "NLA_PUSHDOWN", ""},
	{525, "IPO_CONSTANT", 0, "IPO_CONSTANT", ""},
	{526, "IPO_LINEAR", 0, "IPO_LINEAR", ""},
	{527, "IPO_BEZIER", 0, "IPO_BEZIER", ""},
	{528, "IPO_SINE", 0, "IPO_SINE", ""},
	{529, "IPO_QUAD", 0, "IPO_QUAD", ""},
	{530, "IPO_CUBIC", 0, "IPO_CUBIC", ""},
	{531, "IPO_QUART", 0, "IPO_QUART", ""},
	{532, "IPO_QUINT", 0, "IPO_QUINT", ""},
	{533, "IPO_EXPO", 0, "IPO_EXPO", ""},
	{534, "IPO_CIRC", 0, "IPO_CIRC", ""},
	{535, "IPO_BOUNCE", 0, "IPO_BOUNCE", ""},
	{536, "IPO_ELASTIC", 0, "IPO_ELASTIC", ""},
	{537, "IPO_BACK", 0, "IPO_BACK", ""},
	{538, "IPO_EASE_IN", 0, "IPO_EASE_IN", ""},
	{539, "IPO_EASE_OUT", 0, "IPO_EASE_OUT", ""},
	{540, "IPO_EASE_IN_OUT", 0, "IPO_EASE_IN_OUT", ""},
	{546, "VERTEXSEL", 0, "VERTEXSEL", ""},
	{547, "EDGESEL", 0, "EDGESEL", ""},
	{548, "FACESEL", 0, "FACESEL", ""},
	{549, "LOOPSEL", 0, "LOOPSEL", ""},
	{551, "ROTATE", 0, "ROTATE", ""},
	{552, "CURSOR", 0, "CURSOR", ""},
	{553, "ROTATECOLLECTION", 0, "ROTATECOLLECTION", ""},
	{554, "ROTATECENTER", 0, "ROTATECENTER", ""},
	{555, "ROTACTIVE", 0, "ROTACTIVE", ""},
	{556, "ALIGN", 0, "ALIGN", ""},
	{558, "SMOOTHCURVE", 0, "SMOOTHCURVE", ""},
	{559, "SPHERECURVE", 0, "SPHERECURVE", ""},
	{560, "ROOTCURVE", 0, "ROOTCURVE", ""},
	{561, "SHARPCURVE", 0, "SHARPCURVE", ""},
	{562, "LINCURVE", 0, "LINCURVE", ""},
	{563, "NOCURVE", 0, "NOCURVE", ""},
	{564, "RNDCURVE", 0, "RNDCURVE", ""},
	{565, "PROP_OFF", 0, "PROP_OFF", ""},
	{566, "PROP_ON", 0, "PROP_ON", ""},
	{567, "PROP_CON", 0, "PROP_CON", ""},
	{568, "SCULPT_DYNTOPO", 0, "SCULPT_DYNTOPO", ""},
	{569, "PARTICLE_POINT", 0, "PARTICLE_POINT", ""},
	{570, "PARTICLE_TIP", 0, "PARTICLE_TIP", ""},
	{571, "PARTICLE_PATH", 0, "PARTICLE_PATH", ""},
	{572, "MAN_TRANS", 0, "MAN_TRANS", ""},
	{573, "MAN_ROT", 0, "MAN_ROT", ""},
	{574, "MAN_SCALE", 0, "MAN_SCALE", ""},
	{575, "MANIPUL", 0, "MANIPUL", ""},
	{576, "SNAP_OFF", 0, "SNAP_OFF", ""},
	{577, "SNAP_ON", 0, "SNAP_ON", ""},
	{578, "SNAP_NORMAL", 0, "SNAP_NORMAL", ""},
	{579, "SNAP_INCREMENT", 0, "SNAP_INCREMENT", ""},
	{580, "SNAP_VERTEX", 0, "SNAP_VERTEX", ""},
	{581, "SNAP_EDGE", 0, "SNAP_EDGE", ""},
	{582, "SNAP_FACE", 0, "SNAP_FACE", ""},
	{583, "SNAP_VOLUME", 0, "SNAP_VOLUME", ""},
	{585, "STICKY_UVS_LOC", 0, "STICKY_UVS_LOC", ""},
	{586, "STICKY_UVS_DISABLE", 0, "STICKY_UVS_DISABLE", ""},
	{587, "STICKY_UVS_VERT", 0, "STICKY_UVS_VERT", ""},
	{588, "CLIPUV_DEHLT", 0, "CLIPUV_DEHLT", ""},
	{589, "CLIPUV_HLT", 0, "CLIPUV_HLT", ""},
	{590, "SNAP_PEEL_OBJECT", 0, "SNAP_PEEL_OBJECT", ""},
	{591, "GRID", 0, "GRID", ""},
	{598, "PASTEDOWN", 0, "PASTEDOWN", ""},
	{599, "COPYDOWN", 0, "COPYDOWN", ""},
	{600, "PASTEFLIPUP", 0, "PASTEFLIPUP", ""},
	{601, "PASTEFLIPDOWN", 0, "PASTEFLIPDOWN", ""},
	{606, "SNAP_SURFACE", 0, "SNAP_SURFACE", ""},
	{607, "AUTOMERGE_ON", 0, "AUTOMERGE_ON", ""},
	{608, "AUTOMERGE_OFF", 0, "AUTOMERGE_OFF", ""},
	{609, "RETOPO", 0, "RETOPO", ""},
	{610, "UV_VERTEXSEL", 0, "UV_VERTEXSEL", ""},
	{611, "UV_EDGESEL", 0, "UV_EDGESEL", ""},
	{612, "UV_FACESEL", 0, "UV_FACESEL", ""},
	{613, "UV_ISLANDSEL", 0, "UV_ISLANDSEL", ""},
	{614, "UV_SYNC_SELECT", 0, "UV_SYNC_SELECT", ""},
	{624, "BBOX", 0, "BBOX", ""},
	{625, "WIRE", 0, "WIRE", ""},
	{626, "SOLID", 0, "SOLID", ""},
	{627, "SMOOTH", 0, "SMOOTH", ""},
	{628, "POTATO", 0, "POTATO", ""},
	{630, "ORTHO", 0, "ORTHO", ""},
	{633, "LOCKVIEW_OFF", 0, "LOCKVIEW_OFF", ""},
	{634, "LOCKVIEW_ON", 0, "LOCKVIEW_ON", ""},
	{636, "AXIS_SIDE", 0, "AXIS_SIDE", ""},
	{637, "AXIS_FRONT", 0, "AXIS_FRONT", ""},
	{638, "AXIS_TOP", 0, "AXIS_TOP", ""},
	{639, "NDOF_DOM", 0, "NDOF_DOM", ""},
	{640, "NDOF_TURN", 0, "NDOF_TURN", ""},
	{641, "NDOF_FLY", 0, "NDOF_FLY", ""},
	{642, "NDOF_TRANS", 0, "NDOF_TRANS", ""},
	{643, "LAYER_USED", 0, "LAYER_USED", ""},
	{644, "LAYER_ACTIVE", 0, "LAYER_ACTIVE", ""},
	{676, "SORTALPHA", 0, "SORTALPHA", ""},
	{677, "SORTBYEXT", 0, "SORTBYEXT", ""},
	{678, "SORTTIME", 0, "SORTTIME", ""},
	{679, "SORTSIZE", 0, "SORTSIZE", ""},
	{680, "LONGDISPLAY", 0, "LONGDISPLAY", ""},
	{681, "SHORTDISPLAY", 0, "SHORTDISPLAY", ""},
	{682, "GHOST", 0, "GHOST", ""},
	{683, "IMGDISPLAY", 0, "IMGDISPLAY", ""},
	{684, "SAVE_AS", 0, "SAVE_AS", ""},
	{685, "SAVE_COPY", 0, "SAVE_COPY", ""},
	{686, "BOOKMARKS", 0, "BOOKMARKS", ""},
	{687, "FONTPREVIEW", 0, "FONTPREVIEW", ""},
	{688, "FILTER", 0, "FILTER", ""},
	{689, "NEWFOLDER", 0, "NEWFOLDER", ""},
	{690, "OPEN_RECENT", 0, "OPEN_RECENT", ""},
	{691, "FILE_PARENT", 0, "FILE_PARENT", ""},
	{692, "FILE_REFRESH", 0, "FILE_REFRESH", ""},
	{693, "FILE_FOLDER", 0, "FILE_FOLDER", ""},
	{694, "FILE_BLANK", 0, "FILE_BLANK", ""},
	{695, "FILE_BLEND", 0, "FILE_BLEND", ""},
	{696, "FILE_IMAGE", 0, "FILE_IMAGE", ""},
	{697, "FILE_MOVIE", 0, "FILE_MOVIE", ""},
	{698, "FILE_SCRIPT", 0, "FILE_SCRIPT", ""},
	{699, "FILE_SOUND", 0, "FILE_SOUND", ""},
	{700, "FILE_FONT", 0, "FILE_FONT", ""},
	{701, "FILE_TEXT", 0, "FILE_TEXT", ""},
	{702, "RECOVER_AUTO", 0, "RECOVER_AUTO", ""},
	{703, "SAVE_PREFS", 0, "SAVE_PREFS", ""},
	{704, "LINK_BLEND", 0, "LINK_BLEND", ""},
	{705, "APPEND_BLEND", 0, "APPEND_BLEND", ""},
	{706, "IMPORT", 0, "IMPORT", ""},
	{707, "EXPORT", 0, "EXPORT", ""},
	{708, "EXTERNAL_DATA", 0, "EXTERNAL_DATA", ""},
	{709, "LOAD_FACTORY", 0, "LOAD_FACTORY", ""},
	{715, "LOOP_BACK", 0, "LOOP_BACK", ""},
	{716, "LOOP_FORWARDS", 0, "LOOP_FORWARDS", ""},
	{717, "BACK", 0, "BACK", ""},
	{718, "FORWARD", 0, "FORWARD", ""},
	{726, "FILE_BACKUP", 0, "FILE_BACKUP", ""},
	{727, "DISK_DRIVE", 0, "DISK_DRIVE", ""},
	{728, "MATPLANE", 0, "MATPLANE", ""},
	{729, "MATSPHERE", 0, "MATSPHERE", ""},
	{730, "MATCUBE", 0, "MATCUBE", ""},
	{731, "MONKEY", 0, "MONKEY", ""},
	{732, "HAIR", 0, "HAIR", ""},
	{733, "ALIASED", 0, "ALIASED", ""},
	{734, "ANTIALIASED", 0, "ANTIALIASED", ""},
	{735, "MAT_SPHERE_SKY", 0, "MAT_SPHERE_SKY", ""},
	{740, "WORDWRAP_OFF", 0, "WORDWRAP_OFF", ""},
	{741, "WORDWRAP_ON", 0, "WORDWRAP_ON", ""},
	{742, "SYNTAX_OFF", 0, "SYNTAX_OFF", ""},
	{743, "SYNTAX_ON", 0, "SYNTAX_ON", ""},
	{744, "LINENUMBERS_OFF", 0, "LINENUMBERS_OFF", ""},
	{745, "LINENUMBERS_ON", 0, "LINENUMBERS_ON", ""},
	{746, "SCRIPTPLUGINS", 0, "SCRIPTPLUGINS", ""},
	{754, "SEQ_SEQUENCER", 0, "SEQ_SEQUENCER", ""},
	{755, "SEQ_PREVIEW", 0, "SEQ_PREVIEW", ""},
	{756, "SEQ_LUMA_WAVEFORM", 0, "SEQ_LUMA_WAVEFORM", ""},
	{757, "SEQ_CHROMA_SCOPE", 0, "SEQ_CHROMA_SCOPE", ""},
	{758, "SEQ_HISTOGRAM", 0, "SEQ_HISTOGRAM", ""},
	{759, "SEQ_SPLITVIEW", 0, "SEQ_SPLITVIEW", ""},
	{763, "IMAGE_RGB", 0, "IMAGE_RGB", ""},
	{764, "IMAGE_RGB_ALPHA", 0, "IMAGE_RGB_ALPHA", ""},
	{765, "IMAGE_ALPHA", 0, "IMAGE_ALPHA", ""},
	{766, "IMAGE_ZDEPTH", 0, "IMAGE_ZDEPTH", ""},
	{767, "IMAGEFILE", 0, "IMAGEFILE", ""},
	{780, "BRUSH_ADD", 0, "BRUSH_ADD", ""},
	{781, "BRUSH_BLOB", 0, "BRUSH_BLOB", ""},
	{782, "BRUSH_BLUR", 0, "BRUSH_BLUR", ""},
	{783, "BRUSH_CLAY", 0, "BRUSH_CLAY", ""},
	{784, "BRUSH_CLAY_STRIPS", 0, "BRUSH_CLAY_STRIPS", ""},
	{785, "BRUSH_CLONE", 0, "BRUSH_CLONE", ""},
	{786, "BRUSH_CREASE", 0, "BRUSH_CREASE", ""},
	{787, "BRUSH_DARKEN", 0, "BRUSH_DARKEN", ""},
	{788, "BRUSH_FILL", 0, "BRUSH_FILL", ""},
	{789, "BRUSH_FLATTEN", 0, "BRUSH_FLATTEN", ""},
	{790, "BRUSH_GRAB", 0, "BRUSH_GRAB", ""},
	{791, "BRUSH_INFLATE", 0, "BRUSH_INFLATE", ""},
	{792, "BRUSH_LAYER", 0, "BRUSH_LAYER", ""},
	{793, "BRUSH_LIGHTEN", 0, "BRUSH_LIGHTEN", ""},
	{794, "BRUSH_MASK", 0, "BRUSH_MASK", ""},
	{795, "BRUSH_MIX", 0, "BRUSH_MIX", ""},
	{796, "BRUSH_MULTIPLY", 0, "BRUSH_MULTIPLY", ""},
	{797, "BRUSH_NUDGE", 0, "BRUSH_NUDGE", ""},
	{798, "BRUSH_PINCH", 0, "BRUSH_PINCH", ""},
	{799, "BRUSH_SCRAPE", 0, "BRUSH_SCRAPE", ""},
	{800, "BRUSH_SCULPT_DRAW", 0, "BRUSH_SCULPT_DRAW", ""},
	{801, "BRUSH_SMEAR", 0, "BRUSH_SMEAR", ""},
	{802, "BRUSH_SMOOTH", 0, "BRUSH_SMOOTH", ""},
	{803, "BRUSH_SNAKE_HOOK", 0, "BRUSH_SNAKE_HOOK", ""},
	{804, "BRUSH_SOFTEN", 0, "BRUSH_SOFTEN", ""},
	{805, "BRUSH_SUBTRACT", 0, "BRUSH_SUBTRACT", ""},
	{806, "BRUSH_TEXDRAW", 0, "BRUSH_TEXDRAW", ""},
	{807, "BRUSH_TEXFILL", 0, "BRUSH_TEXFILL", ""},
	{808, "BRUSH_TEXMASK", 0, "BRUSH_TEXMASK", ""},
	{809, "BRUSH_THUMB", 0, "BRUSH_THUMB", ""},
	{810, "BRUSH_ROTATE", 0, "BRUSH_ROTATE", ""},
	{811, "BRUSH_VERTEXDRAW", 0, "BRUSH_VERTEXDRAW", ""},
	{812, "MATCAP_01", 0, "MATCAP_01", ""},
	{813, "MATCAP_02", 0, "MATCAP_02", ""},
	{814, "MATCAP_03", 0, "MATCAP_03", ""},
	{815, "MATCAP_04", 0, "MATCAP_04", ""},
	{816, "MATCAP_05", 0, "MATCAP_05", ""},
	{817, "MATCAP_06", 0, "MATCAP_06", ""},
	{818, "MATCAP_07", 0, "MATCAP_07", ""},
	{819, "MATCAP_08", 0, "MATCAP_08", ""},
	{820, "MATCAP_09", 0, "MATCAP_09", ""},
	{821, "MATCAP_10", 0, "MATCAP_10", ""},
	{822, "MATCAP_11", 0, "MATCAP_11", ""},
	{823, "MATCAP_12", 0, "MATCAP_12", ""},
	{824, "MATCAP_13", 0, "MATCAP_13", ""},
	{825, "MATCAP_14", 0, "MATCAP_14", ""},
	{826, "MATCAP_15", 0, "MATCAP_15", ""},
	{827, "MATCAP_16", 0, "MATCAP_16", ""},
	{828, "MATCAP_17", 0, "MATCAP_17", ""},
	{829, "MATCAP_18", 0, "MATCAP_18", ""},
	{830, "MATCAP_19", 0, "MATCAP_19", ""},
	{831, "MATCAP_20", 0, "MATCAP_20", ""},
	{832, "MATCAP_21", 0, "MATCAP_21", ""},
	{833, "MATCAP_22", 0, "MATCAP_22", ""},
	{834, "MATCAP_23", 0, "MATCAP_23", ""},
	{835, "MATCAP_24", 0, "MATCAP_24", ""},
	{836, "VIEW3D_VEC", 0, "VIEW3D_VEC", ""},
	{837, "EDIT_VEC", 0, "EDIT_VEC", ""},
	{838, "EDITMODE_VEC_DEHLT", 0, "EDITMODE_VEC_DEHLT", ""},
	{839, "EDITMODE_VEC_HLT", 0, "EDITMODE_VEC_HLT", ""},
	{840, "DISCLOSURE_TRI_RIGHT_VEC", 0, "DISCLOSURE_TRI_RIGHT_VEC", ""},
	{841, "DISCLOSURE_TRI_DOWN_VEC", 0, "DISCLOSURE_TRI_DOWN_VEC", ""},
	{842, "MOVE_UP_VEC", 0, "MOVE_UP_VEC", ""},
	{843, "MOVE_DOWN_VEC", 0, "MOVE_DOWN_VEC", ""},
	{844, "X_VEC", 0, "X_VEC", ""},
	{845, "SMALL_TRI_RIGHT_VEC", 0, "SMALL_TRI_RIGHT_VEC", ""},
	{0, NULL, 0, NULL, NULL}
};

EnumPropertyRNA rna_UILayout_label_icon = {
	{(PropertyRNA *)&rna_UILayout_label_icon_value, (PropertyRNA *)&rna_UILayout_label_translate,
	-1, "icon", 3, "Icon",
	"Override automatic icon of the item",
	0, "*",
	PROP_ENUM, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	NULL, NULL, NULL, NULL, NULL, NULL, rna_UILayout_label_icon_items, 542, 0
};

IntPropertyRNA rna_UILayout_label_icon_value = {
	{NULL, (PropertyRNA *)&rna_UILayout_label_icon,
	-1, "icon_value", 3, "Icon Value",
	"Override automatic icon of the item (use it e.g. with custom material icons returned by icon()...)",
	0, "*",
	PROP_INT, PROP_UNSIGNED | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL,
	0, 10000, 0, INT_MAX, 1, 0, NULL
};

FunctionRNA rna_UILayout_label_func = {
	{(FunctionRNA *)&rna_UILayout_menu_func, (FunctionRNA *)&rna_UILayout_operator_menu_enum_func,
	NULL,
	{(PropertyRNA *)&rna_UILayout_label_text, (PropertyRNA *)&rna_UILayout_label_icon_value}},
	"label", 0, "Item. Display text and/or icon in the layout",
	UILayout_label_call,
	NULL
};

StringPropertyRNA rna_UILayout_menu_menu = {
	{(PropertyRNA *)&rna_UILayout_menu_text, NULL,
	-1, "menu", 262149, "",
	"Identifier of the menu",
	0, "*",
	PROP_STRING, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	NULL, NULL, NULL, NULL, NULL, NULL, 0, ""
};

StringPropertyRNA rna_UILayout_menu_text = {
	{(PropertyRNA *)&rna_UILayout_menu_text_ctxt, (PropertyRNA *)&rna_UILayout_menu_menu,
	-1, "text", 262145, "",
	"Override automatic text of the item",
	0, "*",
	PROP_STRING, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	NULL, NULL, NULL, NULL, NULL, NULL, 0, ""
};

StringPropertyRNA rna_UILayout_menu_text_ctxt = {
	{(PropertyRNA *)&rna_UILayout_menu_translate, (PropertyRNA *)&rna_UILayout_menu_text,
	-1, "text_ctxt", 262145, "",
	"Override automatic translation context of the given text",
	0, "*",
	PROP_STRING, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	NULL, NULL, NULL, NULL, NULL, NULL, 0, ""
};

BoolPropertyRNA rna_UILayout_menu_translate = {
	{(PropertyRNA *)&rna_UILayout_menu_icon, (PropertyRNA *)&rna_UILayout_menu_text_ctxt,
	-1, "translate", 3, "",
	"Translate the given text, when UI translation is enabled",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 1, NULL
};

static EnumPropertyItem rna_UILayout_menu_icon_items[543] = {
	{0, "NONE", 0, "NONE", ""},
	{1, "QUESTION", 0, "QUESTION", ""},
	{2, "ERROR", 0, "ERROR", ""},
	{3, "CANCEL", 0, "CANCEL", ""},
	{4, "TRIA_RIGHT", 0, "TRIA_RIGHT", ""},
	{5, "TRIA_DOWN", 0, "TRIA_DOWN", ""},
	{6, "TRIA_LEFT", 0, "TRIA_LEFT", ""},
	{7, "TRIA_UP", 0, "TRIA_UP", ""},
	{8, "ARROW_LEFTRIGHT", 0, "ARROW_LEFTRIGHT", ""},
	{9, "PLUS", 0, "PLUS", ""},
	{10, "DISCLOSURE_TRI_DOWN", 0, "DISCLOSURE_TRI_DOWN", ""},
	{11, "DISCLOSURE_TRI_RIGHT", 0, "DISCLOSURE_TRI_RIGHT", ""},
	{12, "RADIOBUT_OFF", 0, "RADIOBUT_OFF", ""},
	{13, "RADIOBUT_ON", 0, "RADIOBUT_ON", ""},
	{14, "MENU_PANEL", 0, "MENU_PANEL", ""},
	{15, "BLENDER", 0, "BLENDER", ""},
	{16, "GRIP", 0, "GRIP", ""},
	{17, "DOT", 0, "DOT", ""},
	{18, "COLLAPSEMENU", 0, "COLLAPSEMENU", ""},
	{19, "X", 0, "X", ""},
	{21, "GO_LEFT", 0, "GO_LEFT", ""},
	{22, "PLUG", 0, "PLUG", ""},
	{23, "UI", 0, "UI", ""},
	{24, "NODE", 0, "NODE", ""},
	{25, "NODE_SEL", 0, "NODE_SEL", ""},
	{26, "FULLSCREEN", 0, "FULLSCREEN", ""},
	{27, "SPLITSCREEN", 0, "SPLITSCREEN", ""},
	{28, "RIGHTARROW_THIN", 0, "RIGHTARROW_THIN", ""},
	{29, "BORDERMOVE", 0, "BORDERMOVE", ""},
	{30, "VIEWZOOM", 0, "VIEWZOOM", ""},
	{31, "ZOOMIN", 0, "ZOOMIN", ""},
	{32, "ZOOMOUT", 0, "ZOOMOUT", ""},
	{33, "PANEL_CLOSE", 0, "PANEL_CLOSE", ""},
	{34, "COPY_ID", 0, "COPY_ID", ""},
	{35, "EYEDROPPER", 0, "EYEDROPPER", ""},
	{36, "LINK_AREA", 0, "LINK_AREA", ""},
	{37, "AUTO", 0, "AUTO", ""},
	{38, "CHECKBOX_DEHLT", 0, "CHECKBOX_DEHLT", ""},
	{39, "CHECKBOX_HLT", 0, "CHECKBOX_HLT", ""},
	{40, "UNLOCKED", 0, "UNLOCKED", ""},
	{41, "LOCKED", 0, "LOCKED", ""},
	{42, "UNPINNED", 0, "UNPINNED", ""},
	{43, "PINNED", 0, "PINNED", ""},
	{44, "SCREEN_BACK", 0, "SCREEN_BACK", ""},
	{45, "RIGHTARROW", 0, "RIGHTARROW", ""},
	{46, "DOWNARROW_HLT", 0, "DOWNARROW_HLT", ""},
	{47, "DOTSUP", 0, "DOTSUP", ""},
	{48, "DOTSDOWN", 0, "DOTSDOWN", ""},
	{49, "LINK", 0, "LINK", ""},
	{50, "INLINK", 0, "INLINK", ""},
	{51, "PLUGIN", 0, "PLUGIN", ""},
	{52, "HELP", 0, "HELP", ""},
	{53, "GHOST_ENABLED", 0, "GHOST_ENABLED", ""},
	{54, "COLOR", 0, "COLOR", ""},
	{55, "LINKED", 0, "LINKED", ""},
	{56, "UNLINKED", 0, "UNLINKED", ""},
	{57, "HAND", 0, "HAND", ""},
	{58, "ZOOM_ALL", 0, "ZOOM_ALL", ""},
	{59, "ZOOM_SELECTED", 0, "ZOOM_SELECTED", ""},
	{60, "ZOOM_PREVIOUS", 0, "ZOOM_PREVIOUS", ""},
	{61, "ZOOM_IN", 0, "ZOOM_IN", ""},
	{62, "ZOOM_OUT", 0, "ZOOM_OUT", ""},
	{63, "RENDER_REGION", 0, "RENDER_REGION", ""},
	{64, "BORDER_RECT", 0, "BORDER_RECT", ""},
	{65, "BORDER_LASSO", 0, "BORDER_LASSO", ""},
	{66, "FREEZE", 0, "FREEZE", ""},
	{67, "STYLUS_PRESSURE", 0, "STYLUS_PRESSURE", ""},
	{68, "GHOST_DISABLED", 0, "GHOST_DISABLED", ""},
	{69, "NEW", 0, "NEW", ""},
	{70, "FILE_TICK", 0, "FILE_TICK", ""},
	{71, "QUIT", 0, "QUIT", ""},
	{72, "URL", 0, "URL", ""},
	{73, "RECOVER_LAST", 0, "RECOVER_LAST", ""},
	{75, "FULLSCREEN_ENTER", 0, "FULLSCREEN_ENTER", ""},
	{76, "FULLSCREEN_EXIT", 0, "FULLSCREEN_EXIT", ""},
	{77, "BLANK1", 0, "BLANK1", ""},
	{78, "LAMP", 0, "LAMP", ""},
	{79, "MATERIAL", 0, "MATERIAL", ""},
	{80, "TEXTURE", 0, "TEXTURE", ""},
	{81, "ANIM", 0, "ANIM", ""},
	{82, "WORLD", 0, "WORLD", ""},
	{83, "SCENE", 0, "SCENE", ""},
	{84, "EDIT", 0, "EDIT", ""},
	{85, "GAME", 0, "GAME", ""},
	{86, "RADIO", 0, "RADIO", ""},
	{87, "SCRIPT", 0, "SCRIPT", ""},
	{88, "PARTICLES", 0, "PARTICLES", ""},
	{89, "PHYSICS", 0, "PHYSICS", ""},
	{90, "SPEAKER", 0, "SPEAKER", ""},
	{91, "TEXTURE_SHADED", 0, "TEXTURE_SHADED", ""},
	{104, "VIEW3D", 0, "VIEW3D", ""},
	{105, "IPO", 0, "IPO", ""},
	{106, "OOPS", 0, "OOPS", ""},
	{107, "BUTS", 0, "BUTS", ""},
	{108, "FILESEL", 0, "FILESEL", ""},
	{109, "IMAGE_COL", 0, "IMAGE_COL", ""},
	{110, "INFO", 0, "INFO", ""},
	{111, "SEQUENCE", 0, "SEQUENCE", ""},
	{112, "TEXT", 0, "TEXT", ""},
	{113, "IMASEL", 0, "IMASEL", ""},
	{114, "SOUND", 0, "SOUND", ""},
	{115, "ACTION", 0, "ACTION", ""},
	{116, "NLA", 0, "NLA", ""},
	{117, "SCRIPTWIN", 0, "SCRIPTWIN", ""},
	{118, "TIME", 0, "TIME", ""},
	{119, "NODETREE", 0, "NODETREE", ""},
	{120, "LOGIC", 0, "LOGIC", ""},
	{121, "CONSOLE", 0, "CONSOLE", ""},
	{122, "PREFERENCES", 0, "PREFERENCES", ""},
	{123, "CLIP", 0, "CLIP", ""},
	{124, "ASSET_MANAGER", 0, "ASSET_MANAGER", ""},
	{130, "OBJECT_DATAMODE", 0, "OBJECT_DATAMODE", ""},
	{131, "EDITMODE_HLT", 0, "EDITMODE_HLT", ""},
	{132, "FACESEL_HLT", 0, "FACESEL_HLT", ""},
	{133, "VPAINT_HLT", 0, "VPAINT_HLT", ""},
	{134, "TPAINT_HLT", 0, "TPAINT_HLT", ""},
	{135, "WPAINT_HLT", 0, "WPAINT_HLT", ""},
	{136, "SCULPTMODE_HLT", 0, "SCULPTMODE_HLT", ""},
	{137, "POSE_HLT", 0, "POSE_HLT", ""},
	{138, "PARTICLEMODE", 0, "PARTICLEMODE", ""},
	{139, "LIGHTPAINT", 0, "LIGHTPAINT", ""},
	{156, "SCENE_DATA", 0, "SCENE_DATA", ""},
	{157, "RENDERLAYERS", 0, "RENDERLAYERS", ""},
	{158, "WORLD_DATA", 0, "WORLD_DATA", ""},
	{159, "OBJECT_DATA", 0, "OBJECT_DATA", ""},
	{160, "MESH_DATA", 0, "MESH_DATA", ""},
	{161, "CURVE_DATA", 0, "CURVE_DATA", ""},
	{162, "META_DATA", 0, "META_DATA", ""},
	{163, "LATTICE_DATA", 0, "LATTICE_DATA", ""},
	{164, "LAMP_DATA", 0, "LAMP_DATA", ""},
	{165, "MATERIAL_DATA", 0, "MATERIAL_DATA", ""},
	{166, "TEXTURE_DATA", 0, "TEXTURE_DATA", ""},
	{167, "ANIM_DATA", 0, "ANIM_DATA", ""},
	{168, "CAMERA_DATA", 0, "CAMERA_DATA", ""},
	{169, "PARTICLE_DATA", 0, "PARTICLE_DATA", ""},
	{170, "LIBRARY_DATA_DIRECT", 0, "LIBRARY_DATA_DIRECT", ""},
	{171, "GROUP", 0, "GROUP", ""},
	{172, "ARMATURE_DATA", 0, "ARMATURE_DATA", ""},
	{173, "POSE_DATA", 0, "POSE_DATA", ""},
	{174, "BONE_DATA", 0, "BONE_DATA", ""},
	{175, "CONSTRAINT", 0, "CONSTRAINT", ""},
	{176, "SHAPEKEY_DATA", 0, "SHAPEKEY_DATA", ""},
	{177, "CONSTRAINT_BONE", 0, "CONSTRAINT_BONE", ""},
	{178, "CAMERA_STEREO", 0, "CAMERA_STEREO", ""},
	{179, "PACKAGE", 0, "PACKAGE", ""},
	{180, "UGLYPACKAGE", 0, "UGLYPACKAGE", ""},
	{182, "BRUSH_DATA", 0, "BRUSH_DATA", ""},
	{183, "IMAGE_DATA", 0, "IMAGE_DATA", ""},
	{184, "FILE", 0, "FILE", ""},
	{185, "FCURVE", 0, "FCURVE", ""},
	{186, "FONT_DATA", 0, "FONT_DATA", ""},
	{187, "RENDER_RESULT", 0, "RENDER_RESULT", ""},
	{188, "SURFACE_DATA", 0, "SURFACE_DATA", ""},
	{189, "EMPTY_DATA", 0, "EMPTY_DATA", ""},
	{190, "SETTINGS", 0, "SETTINGS", ""},
	{191, "RENDER_ANIMATION", 0, "RENDER_ANIMATION", ""},
	{192, "RENDER_STILL", 0, "RENDER_STILL", ""},
	{194, "BOIDS", 0, "BOIDS", ""},
	{195, "STRANDS", 0, "STRANDS", ""},
	{196, "LIBRARY_DATA_INDIRECT", 0, "LIBRARY_DATA_INDIRECT", ""},
	{197, "GREASEPENCIL", 0, "GREASEPENCIL", ""},
	{198, "LINE_DATA", 0, "LINE_DATA", ""},
	{200, "GROUP_BONE", 0, "GROUP_BONE", ""},
	{201, "GROUP_VERTEX", 0, "GROUP_VERTEX", ""},
	{202, "GROUP_VCOL", 0, "GROUP_VCOL", ""},
	{203, "GROUP_UVS", 0, "GROUP_UVS", ""},
	{206, "RNA", 0, "RNA", ""},
	{207, "RNA_ADD", 0, "RNA_ADD", ""},
	{234, "OUTLINER_OB_EMPTY", 0, "OUTLINER_OB_EMPTY", ""},
	{235, "OUTLINER_OB_MESH", 0, "OUTLINER_OB_MESH", ""},
	{236, "OUTLINER_OB_CURVE", 0, "OUTLINER_OB_CURVE", ""},
	{237, "OUTLINER_OB_LATTICE", 0, "OUTLINER_OB_LATTICE", ""},
	{238, "OUTLINER_OB_META", 0, "OUTLINER_OB_META", ""},
	{239, "OUTLINER_OB_LAMP", 0, "OUTLINER_OB_LAMP", ""},
	{240, "OUTLINER_OB_CAMERA", 0, "OUTLINER_OB_CAMERA", ""},
	{241, "OUTLINER_OB_ARMATURE", 0, "OUTLINER_OB_ARMATURE", ""},
	{242, "OUTLINER_OB_FONT", 0, "OUTLINER_OB_FONT", ""},
	{243, "OUTLINER_OB_SURFACE", 0, "OUTLINER_OB_SURFACE", ""},
	{244, "OUTLINER_OB_SPEAKER", 0, "OUTLINER_OB_SPEAKER", ""},
	{253, "RESTRICT_VIEW_OFF", 0, "RESTRICT_VIEW_OFF", ""},
	{254, "RESTRICT_VIEW_ON", 0, "RESTRICT_VIEW_ON", ""},
	{255, "RESTRICT_SELECT_OFF", 0, "RESTRICT_SELECT_OFF", ""},
	{256, "RESTRICT_SELECT_ON", 0, "RESTRICT_SELECT_ON", ""},
	{257, "RESTRICT_RENDER_OFF", 0, "RESTRICT_RENDER_OFF", ""},
	{258, "RESTRICT_RENDER_ON", 0, "RESTRICT_RENDER_ON", ""},
	{260, "OUTLINER_DATA_EMPTY", 0, "OUTLINER_DATA_EMPTY", ""},
	{261, "OUTLINER_DATA_MESH", 0, "OUTLINER_DATA_MESH", ""},
	{262, "OUTLINER_DATA_CURVE", 0, "OUTLINER_DATA_CURVE", ""},
	{263, "OUTLINER_DATA_LATTICE", 0, "OUTLINER_DATA_LATTICE", ""},
	{264, "OUTLINER_DATA_META", 0, "OUTLINER_DATA_META", ""},
	{265, "OUTLINER_DATA_LAMP", 0, "OUTLINER_DATA_LAMP", ""},
	{266, "OUTLINER_DATA_CAMERA", 0, "OUTLINER_DATA_CAMERA", ""},
	{267, "OUTLINER_DATA_ARMATURE", 0, "OUTLINER_DATA_ARMATURE", ""},
	{268, "OUTLINER_DATA_FONT", 0, "OUTLINER_DATA_FONT", ""},
	{269, "OUTLINER_DATA_SURFACE", 0, "OUTLINER_DATA_SURFACE", ""},
	{270, "OUTLINER_DATA_SPEAKER", 0, "OUTLINER_DATA_SPEAKER", ""},
	{271, "OUTLINER_DATA_POSE", 0, "OUTLINER_DATA_POSE", ""},
	{286, "MESH_PLANE", 0, "MESH_PLANE", ""},
	{287, "MESH_CUBE", 0, "MESH_CUBE", ""},
	{288, "MESH_CIRCLE", 0, "MESH_CIRCLE", ""},
	{289, "MESH_UVSPHERE", 0, "MESH_UVSPHERE", ""},
	{290, "MESH_ICOSPHERE", 0, "MESH_ICOSPHERE", ""},
	{291, "MESH_GRID", 0, "MESH_GRID", ""},
	{292, "MESH_MONKEY", 0, "MESH_MONKEY", ""},
	{293, "MESH_CYLINDER", 0, "MESH_CYLINDER", ""},
	{294, "MESH_TORUS", 0, "MESH_TORUS", ""},
	{295, "MESH_CONE", 0, "MESH_CONE", ""},
	{298, "LAMP_POINT", 0, "LAMP_POINT", ""},
	{299, "LAMP_SUN", 0, "LAMP_SUN", ""},
	{300, "LAMP_SPOT", 0, "LAMP_SPOT", ""},
	{301, "LAMP_HEMI", 0, "LAMP_HEMI", ""},
	{302, "LAMP_AREA", 0, "LAMP_AREA", ""},
	{305, "META_EMPTY", 0, "META_EMPTY", ""},
	{306, "META_PLANE", 0, "META_PLANE", ""},
	{307, "META_CUBE", 0, "META_CUBE", ""},
	{308, "META_BALL", 0, "META_BALL", ""},
	{309, "META_ELLIPSOID", 0, "META_ELLIPSOID", ""},
	{310, "META_CAPSULE", 0, "META_CAPSULE", ""},
	{312, "SURFACE_NCURVE", 0, "SURFACE_NCURVE", ""},
	{313, "SURFACE_NCIRCLE", 0, "SURFACE_NCIRCLE", ""},
	{314, "SURFACE_NSURFACE", 0, "SURFACE_NSURFACE", ""},
	{315, "SURFACE_NCYLINDER", 0, "SURFACE_NCYLINDER", ""},
	{316, "SURFACE_NSPHERE", 0, "SURFACE_NSPHERE", ""},
	{317, "SURFACE_NTORUS", 0, "SURFACE_NTORUS", ""},
	{321, "CURVE_BEZCURVE", 0, "CURVE_BEZCURVE", ""},
	{322, "CURVE_BEZCIRCLE", 0, "CURVE_BEZCIRCLE", ""},
	{323, "CURVE_NCURVE", 0, "CURVE_NCURVE", ""},
	{324, "CURVE_NCIRCLE", 0, "CURVE_NCIRCLE", ""},
	{325, "CURVE_PATH", 0, "CURVE_PATH", ""},
	{331, "COLOR_RED", 0, "COLOR_RED", ""},
	{332, "COLOR_GREEN", 0, "COLOR_GREEN", ""},
	{333, "COLOR_BLUE", 0, "COLOR_BLUE", ""},
	{334, "TRIA_RIGHT_BAR", 0, "TRIA_RIGHT_BAR", ""},
	{335, "TRIA_DOWN_BAR", 0, "TRIA_DOWN_BAR", ""},
	{336, "TRIA_LEFT_BAR", 0, "TRIA_LEFT_BAR", ""},
	{337, "TRIA_UP_BAR", 0, "TRIA_UP_BAR", ""},
	{338, "FORCE_FORCE", 0, "FORCE_FORCE", ""},
	{339, "FORCE_WIND", 0, "FORCE_WIND", ""},
	{340, "FORCE_VORTEX", 0, "FORCE_VORTEX", ""},
	{341, "FORCE_MAGNETIC", 0, "FORCE_MAGNETIC", ""},
	{342, "FORCE_HARMONIC", 0, "FORCE_HARMONIC", ""},
	{343, "FORCE_CHARGE", 0, "FORCE_CHARGE", ""},
	{344, "FORCE_LENNARDJONES", 0, "FORCE_LENNARDJONES", ""},
	{345, "FORCE_TEXTURE", 0, "FORCE_TEXTURE", ""},
	{346, "FORCE_CURVE", 0, "FORCE_CURVE", ""},
	{347, "FORCE_BOID", 0, "FORCE_BOID", ""},
	{348, "FORCE_TURBULENCE", 0, "FORCE_TURBULENCE", ""},
	{349, "FORCE_DRAG", 0, "FORCE_DRAG", ""},
	{350, "FORCE_SMOKEFLOW", 0, "FORCE_SMOKEFLOW", ""},
	{442, "MODIFIER", 0, "MODIFIER", ""},
	{443, "MOD_WAVE", 0, "MOD_WAVE", ""},
	{444, "MOD_BUILD", 0, "MOD_BUILD", ""},
	{445, "MOD_DECIM", 0, "MOD_DECIM", ""},
	{446, "MOD_MIRROR", 0, "MOD_MIRROR", ""},
	{447, "MOD_SOFT", 0, "MOD_SOFT", ""},
	{448, "MOD_SUBSURF", 0, "MOD_SUBSURF", ""},
	{449, "HOOK", 0, "HOOK", ""},
	{450, "MOD_PHYSICS", 0, "MOD_PHYSICS", ""},
	{451, "MOD_PARTICLES", 0, "MOD_PARTICLES", ""},
	{452, "MOD_BOOLEAN", 0, "MOD_BOOLEAN", ""},
	{453, "MOD_EDGESPLIT", 0, "MOD_EDGESPLIT", ""},
	{454, "MOD_ARRAY", 0, "MOD_ARRAY", ""},
	{455, "MOD_UVPROJECT", 0, "MOD_UVPROJECT", ""},
	{456, "MOD_DISPLACE", 0, "MOD_DISPLACE", ""},
	{457, "MOD_CURVE", 0, "MOD_CURVE", ""},
	{458, "MOD_LATTICE", 0, "MOD_LATTICE", ""},
	{459, "CONSTRAINT_DATA", 0, "CONSTRAINT_DATA", ""},
	{460, "MOD_ARMATURE", 0, "MOD_ARMATURE", ""},
	{461, "MOD_SHRINKWRAP", 0, "MOD_SHRINKWRAP", ""},
	{462, "MOD_CAST", 0, "MOD_CAST", ""},
	{463, "MOD_MESHDEFORM", 0, "MOD_MESHDEFORM", ""},
	{464, "MOD_BEVEL", 0, "MOD_BEVEL", ""},
	{465, "MOD_SMOOTH", 0, "MOD_SMOOTH", ""},
	{466, "MOD_SIMPLEDEFORM", 0, "MOD_SIMPLEDEFORM", ""},
	{467, "MOD_MASK", 0, "MOD_MASK", ""},
	{468, "MOD_CLOTH", 0, "MOD_CLOTH", ""},
	{469, "MOD_EXPLODE", 0, "MOD_EXPLODE", ""},
	{470, "MOD_FLUIDSIM", 0, "MOD_FLUIDSIM", ""},
	{471, "MOD_MULTIRES", 0, "MOD_MULTIRES", ""},
	{472, "MOD_SMOKE", 0, "MOD_SMOKE", ""},
	{473, "MOD_SOLIDIFY", 0, "MOD_SOLIDIFY", ""},
	{474, "MOD_SCREW", 0, "MOD_SCREW", ""},
	{475, "MOD_VERTEX_WEIGHT", 0, "MOD_VERTEX_WEIGHT", ""},
	{476, "MOD_DYNAMICPAINT", 0, "MOD_DYNAMICPAINT", ""},
	{477, "MOD_REMESH", 0, "MOD_REMESH", ""},
	{478, "MOD_OCEAN", 0, "MOD_OCEAN", ""},
	{479, "MOD_WARP", 0, "MOD_WARP", ""},
	{480, "MOD_SKIN", 0, "MOD_SKIN", ""},
	{481, "MOD_TRIANGULATE", 0, "MOD_TRIANGULATE", ""},
	{482, "MOD_WIREFRAME", 0, "MOD_WIREFRAME", ""},
	{494, "REC", 0, "REC", ""},
	{495, "PLAY", 0, "PLAY", ""},
	{496, "FF", 0, "FF", ""},
	{497, "REW", 0, "REW", ""},
	{498, "PAUSE", 0, "PAUSE", ""},
	{499, "PREV_KEYFRAME", 0, "PREV_KEYFRAME", ""},
	{500, "NEXT_KEYFRAME", 0, "NEXT_KEYFRAME", ""},
	{501, "PLAY_AUDIO", 0, "PLAY_AUDIO", ""},
	{502, "PLAY_REVERSE", 0, "PLAY_REVERSE", ""},
	{503, "PREVIEW_RANGE", 0, "PREVIEW_RANGE", ""},
	{504, "ACTION_TWEAK", 0, "ACTION_TWEAK", ""},
	{505, "PMARKER_ACT", 0, "PMARKER_ACT", ""},
	{506, "PMARKER_SEL", 0, "PMARKER_SEL", ""},
	{507, "PMARKER", 0, "PMARKER", ""},
	{508, "MARKER_HLT", 0, "MARKER_HLT", ""},
	{509, "MARKER", 0, "MARKER", ""},
	{510, "SPACE2", 0, "SPACE2", ""},
	{511, "SPACE3", 0, "SPACE3", ""},
	{512, "KEYINGSET", 0, "KEYINGSET", ""},
	{513, "KEY_DEHLT", 0, "KEY_DEHLT", ""},
	{514, "KEY_HLT", 0, "KEY_HLT", ""},
	{515, "MUTE_IPO_OFF", 0, "MUTE_IPO_OFF", ""},
	{516, "MUTE_IPO_ON", 0, "MUTE_IPO_ON", ""},
	{517, "VISIBLE_IPO_OFF", 0, "VISIBLE_IPO_OFF", ""},
	{518, "VISIBLE_IPO_ON", 0, "VISIBLE_IPO_ON", ""},
	{519, "DRIVER", 0, "DRIVER", ""},
	{520, "SOLO_OFF", 0, "SOLO_OFF", ""},
	{521, "SOLO_ON", 0, "SOLO_ON", ""},
	{522, "FRAME_PREV", 0, "FRAME_PREV", ""},
	{523, "FRAME_NEXT", 0, "FRAME_NEXT", ""},
	{524, "NLA_PUSHDOWN", 0, "NLA_PUSHDOWN", ""},
	{525, "IPO_CONSTANT", 0, "IPO_CONSTANT", ""},
	{526, "IPO_LINEAR", 0, "IPO_LINEAR", ""},
	{527, "IPO_BEZIER", 0, "IPO_BEZIER", ""},
	{528, "IPO_SINE", 0, "IPO_SINE", ""},
	{529, "IPO_QUAD", 0, "IPO_QUAD", ""},
	{530, "IPO_CUBIC", 0, "IPO_CUBIC", ""},
	{531, "IPO_QUART", 0, "IPO_QUART", ""},
	{532, "IPO_QUINT", 0, "IPO_QUINT", ""},
	{533, "IPO_EXPO", 0, "IPO_EXPO", ""},
	{534, "IPO_CIRC", 0, "IPO_CIRC", ""},
	{535, "IPO_BOUNCE", 0, "IPO_BOUNCE", ""},
	{536, "IPO_ELASTIC", 0, "IPO_ELASTIC", ""},
	{537, "IPO_BACK", 0, "IPO_BACK", ""},
	{538, "IPO_EASE_IN", 0, "IPO_EASE_IN", ""},
	{539, "IPO_EASE_OUT", 0, "IPO_EASE_OUT", ""},
	{540, "IPO_EASE_IN_OUT", 0, "IPO_EASE_IN_OUT", ""},
	{546, "VERTEXSEL", 0, "VERTEXSEL", ""},
	{547, "EDGESEL", 0, "EDGESEL", ""},
	{548, "FACESEL", 0, "FACESEL", ""},
	{549, "LOOPSEL", 0, "LOOPSEL", ""},
	{551, "ROTATE", 0, "ROTATE", ""},
	{552, "CURSOR", 0, "CURSOR", ""},
	{553, "ROTATECOLLECTION", 0, "ROTATECOLLECTION", ""},
	{554, "ROTATECENTER", 0, "ROTATECENTER", ""},
	{555, "ROTACTIVE", 0, "ROTACTIVE", ""},
	{556, "ALIGN", 0, "ALIGN", ""},
	{558, "SMOOTHCURVE", 0, "SMOOTHCURVE", ""},
	{559, "SPHERECURVE", 0, "SPHERECURVE", ""},
	{560, "ROOTCURVE", 0, "ROOTCURVE", ""},
	{561, "SHARPCURVE", 0, "SHARPCURVE", ""},
	{562, "LINCURVE", 0, "LINCURVE", ""},
	{563, "NOCURVE", 0, "NOCURVE", ""},
	{564, "RNDCURVE", 0, "RNDCURVE", ""},
	{565, "PROP_OFF", 0, "PROP_OFF", ""},
	{566, "PROP_ON", 0, "PROP_ON", ""},
	{567, "PROP_CON", 0, "PROP_CON", ""},
	{568, "SCULPT_DYNTOPO", 0, "SCULPT_DYNTOPO", ""},
	{569, "PARTICLE_POINT", 0, "PARTICLE_POINT", ""},
	{570, "PARTICLE_TIP", 0, "PARTICLE_TIP", ""},
	{571, "PARTICLE_PATH", 0, "PARTICLE_PATH", ""},
	{572, "MAN_TRANS", 0, "MAN_TRANS", ""},
	{573, "MAN_ROT", 0, "MAN_ROT", ""},
	{574, "MAN_SCALE", 0, "MAN_SCALE", ""},
	{575, "MANIPUL", 0, "MANIPUL", ""},
	{576, "SNAP_OFF", 0, "SNAP_OFF", ""},
	{577, "SNAP_ON", 0, "SNAP_ON", ""},
	{578, "SNAP_NORMAL", 0, "SNAP_NORMAL", ""},
	{579, "SNAP_INCREMENT", 0, "SNAP_INCREMENT", ""},
	{580, "SNAP_VERTEX", 0, "SNAP_VERTEX", ""},
	{581, "SNAP_EDGE", 0, "SNAP_EDGE", ""},
	{582, "SNAP_FACE", 0, "SNAP_FACE", ""},
	{583, "SNAP_VOLUME", 0, "SNAP_VOLUME", ""},
	{585, "STICKY_UVS_LOC", 0, "STICKY_UVS_LOC", ""},
	{586, "STICKY_UVS_DISABLE", 0, "STICKY_UVS_DISABLE", ""},
	{587, "STICKY_UVS_VERT", 0, "STICKY_UVS_VERT", ""},
	{588, "CLIPUV_DEHLT", 0, "CLIPUV_DEHLT", ""},
	{589, "CLIPUV_HLT", 0, "CLIPUV_HLT", ""},
	{590, "SNAP_PEEL_OBJECT", 0, "SNAP_PEEL_OBJECT", ""},
	{591, "GRID", 0, "GRID", ""},
	{598, "PASTEDOWN", 0, "PASTEDOWN", ""},
	{599, "COPYDOWN", 0, "COPYDOWN", ""},
	{600, "PASTEFLIPUP", 0, "PASTEFLIPUP", ""},
	{601, "PASTEFLIPDOWN", 0, "PASTEFLIPDOWN", ""},
	{606, "SNAP_SURFACE", 0, "SNAP_SURFACE", ""},
	{607, "AUTOMERGE_ON", 0, "AUTOMERGE_ON", ""},
	{608, "AUTOMERGE_OFF", 0, "AUTOMERGE_OFF", ""},
	{609, "RETOPO", 0, "RETOPO", ""},
	{610, "UV_VERTEXSEL", 0, "UV_VERTEXSEL", ""},
	{611, "UV_EDGESEL", 0, "UV_EDGESEL", ""},
	{612, "UV_FACESEL", 0, "UV_FACESEL", ""},
	{613, "UV_ISLANDSEL", 0, "UV_ISLANDSEL", ""},
	{614, "UV_SYNC_SELECT", 0, "UV_SYNC_SELECT", ""},
	{624, "BBOX", 0, "BBOX", ""},
	{625, "WIRE", 0, "WIRE", ""},
	{626, "SOLID", 0, "SOLID", ""},
	{627, "SMOOTH", 0, "SMOOTH", ""},
	{628, "POTATO", 0, "POTATO", ""},
	{630, "ORTHO", 0, "ORTHO", ""},
	{633, "LOCKVIEW_OFF", 0, "LOCKVIEW_OFF", ""},
	{634, "LOCKVIEW_ON", 0, "LOCKVIEW_ON", ""},
	{636, "AXIS_SIDE", 0, "AXIS_SIDE", ""},
	{637, "AXIS_FRONT", 0, "AXIS_FRONT", ""},
	{638, "AXIS_TOP", 0, "AXIS_TOP", ""},
	{639, "NDOF_DOM", 0, "NDOF_DOM", ""},
	{640, "NDOF_TURN", 0, "NDOF_TURN", ""},
	{641, "NDOF_FLY", 0, "NDOF_FLY", ""},
	{642, "NDOF_TRANS", 0, "NDOF_TRANS", ""},
	{643, "LAYER_USED", 0, "LAYER_USED", ""},
	{644, "LAYER_ACTIVE", 0, "LAYER_ACTIVE", ""},
	{676, "SORTALPHA", 0, "SORTALPHA", ""},
	{677, "SORTBYEXT", 0, "SORTBYEXT", ""},
	{678, "SORTTIME", 0, "SORTTIME", ""},
	{679, "SORTSIZE", 0, "SORTSIZE", ""},
	{680, "LONGDISPLAY", 0, "LONGDISPLAY", ""},
	{681, "SHORTDISPLAY", 0, "SHORTDISPLAY", ""},
	{682, "GHOST", 0, "GHOST", ""},
	{683, "IMGDISPLAY", 0, "IMGDISPLAY", ""},
	{684, "SAVE_AS", 0, "SAVE_AS", ""},
	{685, "SAVE_COPY", 0, "SAVE_COPY", ""},
	{686, "BOOKMARKS", 0, "BOOKMARKS", ""},
	{687, "FONTPREVIEW", 0, "FONTPREVIEW", ""},
	{688, "FILTER", 0, "FILTER", ""},
	{689, "NEWFOLDER", 0, "NEWFOLDER", ""},
	{690, "OPEN_RECENT", 0, "OPEN_RECENT", ""},
	{691, "FILE_PARENT", 0, "FILE_PARENT", ""},
	{692, "FILE_REFRESH", 0, "FILE_REFRESH", ""},
	{693, "FILE_FOLDER", 0, "FILE_FOLDER", ""},
	{694, "FILE_BLANK", 0, "FILE_BLANK", ""},
	{695, "FILE_BLEND", 0, "FILE_BLEND", ""},
	{696, "FILE_IMAGE", 0, "FILE_IMAGE", ""},
	{697, "FILE_MOVIE", 0, "FILE_MOVIE", ""},
	{698, "FILE_SCRIPT", 0, "FILE_SCRIPT", ""},
	{699, "FILE_SOUND", 0, "FILE_SOUND", ""},
	{700, "FILE_FONT", 0, "FILE_FONT", ""},
	{701, "FILE_TEXT", 0, "FILE_TEXT", ""},
	{702, "RECOVER_AUTO", 0, "RECOVER_AUTO", ""},
	{703, "SAVE_PREFS", 0, "SAVE_PREFS", ""},
	{704, "LINK_BLEND", 0, "LINK_BLEND", ""},
	{705, "APPEND_BLEND", 0, "APPEND_BLEND", ""},
	{706, "IMPORT", 0, "IMPORT", ""},
	{707, "EXPORT", 0, "EXPORT", ""},
	{708, "EXTERNAL_DATA", 0, "EXTERNAL_DATA", ""},
	{709, "LOAD_FACTORY", 0, "LOAD_FACTORY", ""},
	{715, "LOOP_BACK", 0, "LOOP_BACK", ""},
	{716, "LOOP_FORWARDS", 0, "LOOP_FORWARDS", ""},
	{717, "BACK", 0, "BACK", ""},
	{718, "FORWARD", 0, "FORWARD", ""},
	{726, "FILE_BACKUP", 0, "FILE_BACKUP", ""},
	{727, "DISK_DRIVE", 0, "DISK_DRIVE", ""},
	{728, "MATPLANE", 0, "MATPLANE", ""},
	{729, "MATSPHERE", 0, "MATSPHERE", ""},
	{730, "MATCUBE", 0, "MATCUBE", ""},
	{731, "MONKEY", 0, "MONKEY", ""},
	{732, "HAIR", 0, "HAIR", ""},
	{733, "ALIASED", 0, "ALIASED", ""},
	{734, "ANTIALIASED", 0, "ANTIALIASED", ""},
	{735, "MAT_SPHERE_SKY", 0, "MAT_SPHERE_SKY", ""},
	{740, "WORDWRAP_OFF", 0, "WORDWRAP_OFF", ""},
	{741, "WORDWRAP_ON", 0, "WORDWRAP_ON", ""},
	{742, "SYNTAX_OFF", 0, "SYNTAX_OFF", ""},
	{743, "SYNTAX_ON", 0, "SYNTAX_ON", ""},
	{744, "LINENUMBERS_OFF", 0, "LINENUMBERS_OFF", ""},
	{745, "LINENUMBERS_ON", 0, "LINENUMBERS_ON", ""},
	{746, "SCRIPTPLUGINS", 0, "SCRIPTPLUGINS", ""},
	{754, "SEQ_SEQUENCER", 0, "SEQ_SEQUENCER", ""},
	{755, "SEQ_PREVIEW", 0, "SEQ_PREVIEW", ""},
	{756, "SEQ_LUMA_WAVEFORM", 0, "SEQ_LUMA_WAVEFORM", ""},
	{757, "SEQ_CHROMA_SCOPE", 0, "SEQ_CHROMA_SCOPE", ""},
	{758, "SEQ_HISTOGRAM", 0, "SEQ_HISTOGRAM", ""},
	{759, "SEQ_SPLITVIEW", 0, "SEQ_SPLITVIEW", ""},
	{763, "IMAGE_RGB", 0, "IMAGE_RGB", ""},
	{764, "IMAGE_RGB_ALPHA", 0, "IMAGE_RGB_ALPHA", ""},
	{765, "IMAGE_ALPHA", 0, "IMAGE_ALPHA", ""},
	{766, "IMAGE_ZDEPTH", 0, "IMAGE_ZDEPTH", ""},
	{767, "IMAGEFILE", 0, "IMAGEFILE", ""},
	{780, "BRUSH_ADD", 0, "BRUSH_ADD", ""},
	{781, "BRUSH_BLOB", 0, "BRUSH_BLOB", ""},
	{782, "BRUSH_BLUR", 0, "BRUSH_BLUR", ""},
	{783, "BRUSH_CLAY", 0, "BRUSH_CLAY", ""},
	{784, "BRUSH_CLAY_STRIPS", 0, "BRUSH_CLAY_STRIPS", ""},
	{785, "BRUSH_CLONE", 0, "BRUSH_CLONE", ""},
	{786, "BRUSH_CREASE", 0, "BRUSH_CREASE", ""},
	{787, "BRUSH_DARKEN", 0, "BRUSH_DARKEN", ""},
	{788, "BRUSH_FILL", 0, "BRUSH_FILL", ""},
	{789, "BRUSH_FLATTEN", 0, "BRUSH_FLATTEN", ""},
	{790, "BRUSH_GRAB", 0, "BRUSH_GRAB", ""},
	{791, "BRUSH_INFLATE", 0, "BRUSH_INFLATE", ""},
	{792, "BRUSH_LAYER", 0, "BRUSH_LAYER", ""},
	{793, "BRUSH_LIGHTEN", 0, "BRUSH_LIGHTEN", ""},
	{794, "BRUSH_MASK", 0, "BRUSH_MASK", ""},
	{795, "BRUSH_MIX", 0, "BRUSH_MIX", ""},
	{796, "BRUSH_MULTIPLY", 0, "BRUSH_MULTIPLY", ""},
	{797, "BRUSH_NUDGE", 0, "BRUSH_NUDGE", ""},
	{798, "BRUSH_PINCH", 0, "BRUSH_PINCH", ""},
	{799, "BRUSH_SCRAPE", 0, "BRUSH_SCRAPE", ""},
	{800, "BRUSH_SCULPT_DRAW", 0, "BRUSH_SCULPT_DRAW", ""},
	{801, "BRUSH_SMEAR", 0, "BRUSH_SMEAR", ""},
	{802, "BRUSH_SMOOTH", 0, "BRUSH_SMOOTH", ""},
	{803, "BRUSH_SNAKE_HOOK", 0, "BRUSH_SNAKE_HOOK", ""},
	{804, "BRUSH_SOFTEN", 0, "BRUSH_SOFTEN", ""},
	{805, "BRUSH_SUBTRACT", 0, "BRUSH_SUBTRACT", ""},
	{806, "BRUSH_TEXDRAW", 0, "BRUSH_TEXDRAW", ""},
	{807, "BRUSH_TEXFILL", 0, "BRUSH_TEXFILL", ""},
	{808, "BRUSH_TEXMASK", 0, "BRUSH_TEXMASK", ""},
	{809, "BRUSH_THUMB", 0, "BRUSH_THUMB", ""},
	{810, "BRUSH_ROTATE", 0, "BRUSH_ROTATE", ""},
	{811, "BRUSH_VERTEXDRAW", 0, "BRUSH_VERTEXDRAW", ""},
	{812, "MATCAP_01", 0, "MATCAP_01", ""},
	{813, "MATCAP_02", 0, "MATCAP_02", ""},
	{814, "MATCAP_03", 0, "MATCAP_03", ""},
	{815, "MATCAP_04", 0, "MATCAP_04", ""},
	{816, "MATCAP_05", 0, "MATCAP_05", ""},
	{817, "MATCAP_06", 0, "MATCAP_06", ""},
	{818, "MATCAP_07", 0, "MATCAP_07", ""},
	{819, "MATCAP_08", 0, "MATCAP_08", ""},
	{820, "MATCAP_09", 0, "MATCAP_09", ""},
	{821, "MATCAP_10", 0, "MATCAP_10", ""},
	{822, "MATCAP_11", 0, "MATCAP_11", ""},
	{823, "MATCAP_12", 0, "MATCAP_12", ""},
	{824, "MATCAP_13", 0, "MATCAP_13", ""},
	{825, "MATCAP_14", 0, "MATCAP_14", ""},
	{826, "MATCAP_15", 0, "MATCAP_15", ""},
	{827, "MATCAP_16", 0, "MATCAP_16", ""},
	{828, "MATCAP_17", 0, "MATCAP_17", ""},
	{829, "MATCAP_18", 0, "MATCAP_18", ""},
	{830, "MATCAP_19", 0, "MATCAP_19", ""},
	{831, "MATCAP_20", 0, "MATCAP_20", ""},
	{832, "MATCAP_21", 0, "MATCAP_21", ""},
	{833, "MATCAP_22", 0, "MATCAP_22", ""},
	{834, "MATCAP_23", 0, "MATCAP_23", ""},
	{835, "MATCAP_24", 0, "MATCAP_24", ""},
	{836, "VIEW3D_VEC", 0, "VIEW3D_VEC", ""},
	{837, "EDIT_VEC", 0, "EDIT_VEC", ""},
	{838, "EDITMODE_VEC_DEHLT", 0, "EDITMODE_VEC_DEHLT", ""},
	{839, "EDITMODE_VEC_HLT", 0, "EDITMODE_VEC_HLT", ""},
	{840, "DISCLOSURE_TRI_RIGHT_VEC", 0, "DISCLOSURE_TRI_RIGHT_VEC", ""},
	{841, "DISCLOSURE_TRI_DOWN_VEC", 0, "DISCLOSURE_TRI_DOWN_VEC", ""},
	{842, "MOVE_UP_VEC", 0, "MOVE_UP_VEC", ""},
	{843, "MOVE_DOWN_VEC", 0, "MOVE_DOWN_VEC", ""},
	{844, "X_VEC", 0, "X_VEC", ""},
	{845, "SMALL_TRI_RIGHT_VEC", 0, "SMALL_TRI_RIGHT_VEC", ""},
	{0, NULL, 0, NULL, NULL}
};

EnumPropertyRNA rna_UILayout_menu_icon = {
	{NULL, (PropertyRNA *)&rna_UILayout_menu_translate,
	-1, "icon", 3, "Icon",
	"Override automatic icon of the item",
	0, "*",
	PROP_ENUM, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	NULL, NULL, NULL, NULL, NULL, NULL, rna_UILayout_menu_icon_items, 542, 0
};

FunctionRNA rna_UILayout_menu_func = {
	{(FunctionRNA *)&rna_UILayout_separator_func, (FunctionRNA *)&rna_UILayout_label_func,
	NULL,
	{(PropertyRNA *)&rna_UILayout_menu_menu, (PropertyRNA *)&rna_UILayout_menu_icon}},
	"menu", 8, "menu",
	UILayout_menu_call,
	NULL
};

FunctionRNA rna_UILayout_separator_func = {
	{(FunctionRNA *)&rna_UILayout_context_pointer_set_func, (FunctionRNA *)&rna_UILayout_menu_func,
	NULL,
	{NULL, NULL}},
	"separator", 0, "Item. Inserts empty space into the layout between items",
	UILayout_separator_call,
	NULL
};

StringPropertyRNA rna_UILayout_context_pointer_set_name = {
	{(PropertyRNA *)&rna_UILayout_context_pointer_set_data, NULL,
	-1, "name", 262149, "Name",
	"Name of entry in the context",
	0, "*",
	PROP_STRING, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	NULL, NULL, NULL, NULL, NULL, NULL, 0, ""
};

PointerPropertyRNA rna_UILayout_context_pointer_set_data = {
	{NULL, (PropertyRNA *)&rna_UILayout_context_pointer_set_name,
	-1, "data", 8390660, "",
	"Pointer to put in context",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	NULL, NULL, NULL, NULL,&RNA_AnyType
};

FunctionRNA rna_UILayout_context_pointer_set_func = {
	{(FunctionRNA *)&rna_UILayout_template_header_func, (FunctionRNA *)&rna_UILayout_separator_func,
	NULL,
	{(PropertyRNA *)&rna_UILayout_context_pointer_set_name, (PropertyRNA *)&rna_UILayout_context_pointer_set_data}},
	"context_pointer_set", 0, "context_pointer_set",
	UILayout_context_pointer_set_call,
	NULL
};

FunctionRNA rna_UILayout_template_header_func = {
	{(FunctionRNA *)&rna_UILayout_template_ID_func, (FunctionRNA *)&rna_UILayout_context_pointer_set_func,
	NULL,
	{NULL, NULL}},
	"template_header", 8, "template_header",
	UILayout_template_header_call,
	NULL
};

PointerPropertyRNA rna_UILayout_template_ID_data = {
	{(PropertyRNA *)&rna_UILayout_template_ID_property, NULL,
	-1, "data", 8652804, "",
	"Data from which to take property",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	NULL, NULL, NULL, NULL,&RNA_AnyType
};

StringPropertyRNA rna_UILayout_template_ID_property = {
	{(PropertyRNA *)&rna_UILayout_template_ID_new, (PropertyRNA *)&rna_UILayout_template_ID_data,
	-1, "property", 262149, "",
	"Identifier of property in data",
	0, "*",
	PROP_STRING, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	NULL, NULL, NULL, NULL, NULL, NULL, 0, ""
};

StringPropertyRNA rna_UILayout_template_ID_new = {
	{(PropertyRNA *)&rna_UILayout_template_ID_open, (PropertyRNA *)&rna_UILayout_template_ID_property,
	-1, "new", 262145, "",
	"Operator identifier to create a new ID block",
	0, "*",
	PROP_STRING, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	NULL, NULL, NULL, NULL, NULL, NULL, 0, ""
};

StringPropertyRNA rna_UILayout_template_ID_open = {
	{(PropertyRNA *)&rna_UILayout_template_ID_unlink, (PropertyRNA *)&rna_UILayout_template_ID_new,
	-1, "open", 262145, "",
	"Operator identifier to open a file for creating a new ID block",
	0, "*",
	PROP_STRING, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	NULL, NULL, NULL, NULL, NULL, NULL, 0, ""
};

StringPropertyRNA rna_UILayout_template_ID_unlink = {
	{NULL, (PropertyRNA *)&rna_UILayout_template_ID_open,
	-1, "unlink", 262145, "",
	"Operator identifier to unlink the ID block",
	0, "*",
	PROP_STRING, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	NULL, NULL, NULL, NULL, NULL, NULL, 0, ""
};

FunctionRNA rna_UILayout_template_ID_func = {
	{(FunctionRNA *)&rna_UILayout_template_ID_preview_func, (FunctionRNA *)&rna_UILayout_template_header_func,
	NULL,
	{(PropertyRNA *)&rna_UILayout_template_ID_data, (PropertyRNA *)&rna_UILayout_template_ID_unlink}},
	"template_ID", 8, "template_ID",
	UILayout_template_ID_call,
	NULL
};

PointerPropertyRNA rna_UILayout_template_ID_preview_data = {
	{(PropertyRNA *)&rna_UILayout_template_ID_preview_property, NULL,
	-1, "data", 8652804, "",
	"Data from which to take property",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	NULL, NULL, NULL, NULL,&RNA_AnyType
};

StringPropertyRNA rna_UILayout_template_ID_preview_property = {
	{(PropertyRNA *)&rna_UILayout_template_ID_preview_new, (PropertyRNA *)&rna_UILayout_template_ID_preview_data,
	-1, "property", 262149, "",
	"Identifier of property in data",
	0, "*",
	PROP_STRING, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	NULL, NULL, NULL, NULL, NULL, NULL, 0, ""
};

StringPropertyRNA rna_UILayout_template_ID_preview_new = {
	{(PropertyRNA *)&rna_UILayout_template_ID_preview_open, (PropertyRNA *)&rna_UILayout_template_ID_preview_property,
	-1, "new", 262145, "",
	"Operator identifier to create a new ID block",
	0, "*",
	PROP_STRING, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	NULL, NULL, NULL, NULL, NULL, NULL, 0, ""
};

StringPropertyRNA rna_UILayout_template_ID_preview_open = {
	{(PropertyRNA *)&rna_UILayout_template_ID_preview_unlink, (PropertyRNA *)&rna_UILayout_template_ID_preview_new,
	-1, "open", 262145, "",
	"Operator identifier to open a file for creating a new ID block",
	0, "*",
	PROP_STRING, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	NULL, NULL, NULL, NULL, NULL, NULL, 0, ""
};

StringPropertyRNA rna_UILayout_template_ID_preview_unlink = {
	{(PropertyRNA *)&rna_UILayout_template_ID_preview_rows, (PropertyRNA *)&rna_UILayout_template_ID_preview_open,
	-1, "unlink", 262145, "",
	"Operator identifier to unlink the ID block",
	0, "*",
	PROP_STRING, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	NULL, NULL, NULL, NULL, NULL, NULL, 0, ""
};

IntPropertyRNA rna_UILayout_template_ID_preview_rows = {
	{(PropertyRNA *)&rna_UILayout_template_ID_preview_cols, (PropertyRNA *)&rna_UILayout_template_ID_preview_unlink,
	-1, "rows", 3, "Number of thumbnail preview rows to display",
	"",
	0, "*",
	PROP_INT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL,
	0, INT_MAX, 0, INT_MAX, 1, 0, NULL
};

IntPropertyRNA rna_UILayout_template_ID_preview_cols = {
	{NULL, (PropertyRNA *)&rna_UILayout_template_ID_preview_rows,
	-1, "cols", 3, "Number of thumbnail preview columns to display",
	"",
	0, "*",
	PROP_INT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL,
	0, INT_MAX, 0, INT_MAX, 1, 0, NULL
};

FunctionRNA rna_UILayout_template_ID_preview_func = {
	{(FunctionRNA *)&rna_UILayout_template_any_ID_func, (FunctionRNA *)&rna_UILayout_template_ID_func,
	NULL,
	{(PropertyRNA *)&rna_UILayout_template_ID_preview_data, (PropertyRNA *)&rna_UILayout_template_ID_preview_cols}},
	"template_ID_preview", 8, "template_ID_preview",
	UILayout_template_ID_preview_call,
	NULL
};

PointerPropertyRNA rna_UILayout_template_any_ID_data = {
	{(PropertyRNA *)&rna_UILayout_template_any_ID_property, NULL,
	-1, "data", 8652804, "",
	"Data from which to take property",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	NULL, NULL, NULL, NULL,&RNA_AnyType
};

StringPropertyRNA rna_UILayout_template_any_ID_property = {
	{(PropertyRNA *)&rna_UILayout_template_any_ID_type_property, (PropertyRNA *)&rna_UILayout_template_any_ID_data,
	-1, "property", 262149, "",
	"Identifier of property in data",
	0, "*",
	PROP_STRING, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	NULL, NULL, NULL, NULL, NULL, NULL, 0, ""
};

StringPropertyRNA rna_UILayout_template_any_ID_type_property = {
	{(PropertyRNA *)&rna_UILayout_template_any_ID_text, (PropertyRNA *)&rna_UILayout_template_any_ID_property,
	-1, "type_property", 262149, "",
	"Identifier of property in data giving the type of the ID-blocks to use",
	0, "*",
	PROP_STRING, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	NULL, NULL, NULL, NULL, NULL, NULL, 0, ""
};

StringPropertyRNA rna_UILayout_template_any_ID_text = {
	{(PropertyRNA *)&rna_UILayout_template_any_ID_text_ctxt, (PropertyRNA *)&rna_UILayout_template_any_ID_type_property,
	-1, "text", 262145, "",
	"Override automatic text of the item",
	0, "*",
	PROP_STRING, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	NULL, NULL, NULL, NULL, NULL, NULL, 0, ""
};

StringPropertyRNA rna_UILayout_template_any_ID_text_ctxt = {
	{(PropertyRNA *)&rna_UILayout_template_any_ID_translate, (PropertyRNA *)&rna_UILayout_template_any_ID_text,
	-1, "text_ctxt", 262145, "",
	"Override automatic translation context of the given text",
	0, "*",
	PROP_STRING, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	NULL, NULL, NULL, NULL, NULL, NULL, 0, ""
};

BoolPropertyRNA rna_UILayout_template_any_ID_translate = {
	{NULL, (PropertyRNA *)&rna_UILayout_template_any_ID_text_ctxt,
	-1, "translate", 3, "",
	"Translate the given text, when UI translation is enabled",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 1, NULL
};

FunctionRNA rna_UILayout_template_any_ID_func = {
	{(FunctionRNA *)&rna_UILayout_template_path_builder_func, (FunctionRNA *)&rna_UILayout_template_ID_preview_func,
	NULL,
	{(PropertyRNA *)&rna_UILayout_template_any_ID_data, (PropertyRNA *)&rna_UILayout_template_any_ID_translate}},
	"template_any_ID", 0, "template_any_ID",
	UILayout_template_any_ID_call,
	NULL
};

PointerPropertyRNA rna_UILayout_template_path_builder_data = {
	{(PropertyRNA *)&rna_UILayout_template_path_builder_property, NULL,
	-1, "data", 8652804, "",
	"Data from which to take property",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	NULL, NULL, NULL, NULL,&RNA_AnyType
};

StringPropertyRNA rna_UILayout_template_path_builder_property = {
	{(PropertyRNA *)&rna_UILayout_template_path_builder_root, (PropertyRNA *)&rna_UILayout_template_path_builder_data,
	-1, "property", 262149, "",
	"Identifier of property in data",
	0, "*",
	PROP_STRING, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	NULL, NULL, NULL, NULL, NULL, NULL, 0, ""
};

PointerPropertyRNA rna_UILayout_template_path_builder_root = {
	{(PropertyRNA *)&rna_UILayout_template_path_builder_text, (PropertyRNA *)&rna_UILayout_template_path_builder_property,
	-1, "root", 8390660, "",
	"ID-block from which path is evaluated from",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	NULL, NULL, NULL, NULL,&RNA_ID
};

StringPropertyRNA rna_UILayout_template_path_builder_text = {
	{(PropertyRNA *)&rna_UILayout_template_path_builder_text_ctxt, (PropertyRNA *)&rna_UILayout_template_path_builder_root,
	-1, "text", 262145, "",
	"Override automatic text of the item",
	0, "*",
	PROP_STRING, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	NULL, NULL, NULL, NULL, NULL, NULL, 0, ""
};

StringPropertyRNA rna_UILayout_template_path_builder_text_ctxt = {
	{(PropertyRNA *)&rna_UILayout_template_path_builder_translate, (PropertyRNA *)&rna_UILayout_template_path_builder_text,
	-1, "text_ctxt", 262145, "",
	"Override automatic translation context of the given text",
	0, "*",
	PROP_STRING, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	NULL, NULL, NULL, NULL, NULL, NULL, 0, ""
};

BoolPropertyRNA rna_UILayout_template_path_builder_translate = {
	{NULL, (PropertyRNA *)&rna_UILayout_template_path_builder_text_ctxt,
	-1, "translate", 3, "",
	"Translate the given text, when UI translation is enabled",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 1, NULL
};

FunctionRNA rna_UILayout_template_path_builder_func = {
	{(FunctionRNA *)&rna_UILayout_template_modifier_func, (FunctionRNA *)&rna_UILayout_template_any_ID_func,
	NULL,
	{(PropertyRNA *)&rna_UILayout_template_path_builder_data, (PropertyRNA *)&rna_UILayout_template_path_builder_translate}},
	"template_path_builder", 0, "template_path_builder",
	UILayout_template_path_builder_call,
	NULL
};

PointerPropertyRNA rna_UILayout_template_modifier_data = {
	{(PropertyRNA *)&rna_UILayout_template_modifier_layout, NULL,
	-1, "data", 8652804, "",
	"Modifier data",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	NULL, NULL, NULL, NULL,&RNA_Modifier
};

PointerPropertyRNA rna_UILayout_template_modifier_layout = {
	{NULL, (PropertyRNA *)&rna_UILayout_template_modifier_data,
	-1, "layout", 8388616, "",
	"Sub-layout to put items in",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	NULL, NULL, NULL, NULL,&RNA_UILayout
};

FunctionRNA rna_UILayout_template_modifier_func = {
	{(FunctionRNA *)&rna_UILayout_template_constraint_func, (FunctionRNA *)&rna_UILayout_template_path_builder_func,
	NULL,
	{(PropertyRNA *)&rna_UILayout_template_modifier_data, (PropertyRNA *)&rna_UILayout_template_modifier_layout}},
	"template_modifier", 8, "Layout . Generates the UI layout for modifiers",
	UILayout_template_modifier_call,
	(PropertyRNA *)&rna_UILayout_template_modifier_layout
};

PointerPropertyRNA rna_UILayout_template_constraint_data = {
	{(PropertyRNA *)&rna_UILayout_template_constraint_layout, NULL,
	-1, "data", 8652804, "",
	"Constraint data",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	NULL, NULL, NULL, NULL,&RNA_Constraint
};

PointerPropertyRNA rna_UILayout_template_constraint_layout = {
	{NULL, (PropertyRNA *)&rna_UILayout_template_constraint_data,
	-1, "layout", 8388616, "",
	"Sub-layout to put items in",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	NULL, NULL, NULL, NULL,&RNA_UILayout
};

FunctionRNA rna_UILayout_template_constraint_func = {
	{(FunctionRNA *)&rna_UILayout_template_preview_func, (FunctionRNA *)&rna_UILayout_template_modifier_func,
	NULL,
	{(PropertyRNA *)&rna_UILayout_template_constraint_data, (PropertyRNA *)&rna_UILayout_template_constraint_layout}},
	"template_constraint", 0, "Layout . Generates the UI layout for constraints",
	UILayout_template_constraint_call,
	(PropertyRNA *)&rna_UILayout_template_constraint_layout
};

PointerPropertyRNA rna_UILayout_template_preview_id = {
	{(PropertyRNA *)&rna_UILayout_template_preview_show_buttons, NULL,
	-1, "id", 8388612, "",
	"ID datablock",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	NULL, NULL, NULL, NULL,&RNA_ID
};

BoolPropertyRNA rna_UILayout_template_preview_show_buttons = {
	{(PropertyRNA *)&rna_UILayout_template_preview_parent, (PropertyRNA *)&rna_UILayout_template_preview_id,
	-1, "show_buttons", 3, "",
	"Show preview buttons\?",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 1, NULL
};

PointerPropertyRNA rna_UILayout_template_preview_parent = {
	{(PropertyRNA *)&rna_UILayout_template_preview_slot, (PropertyRNA *)&rna_UILayout_template_preview_show_buttons,
	-1, "parent", 8388608, "",
	"ID datablock",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	NULL, NULL, NULL, NULL,&RNA_ID
};

PointerPropertyRNA rna_UILayout_template_preview_slot = {
	{(PropertyRNA *)&rna_UILayout_template_preview_preview_id, (PropertyRNA *)&rna_UILayout_template_preview_parent,
	-1, "slot", 8388608, "",
	"Texture slot",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	NULL, NULL, NULL, NULL,&RNA_TextureSlot
};

StringPropertyRNA rna_UILayout_template_preview_preview_id = {
	{NULL, (PropertyRNA *)&rna_UILayout_template_preview_slot,
	-1, "preview_id", 262145, "",
	"Identifier of this preview widget, if not set the ID type will be used (i.e. all previews of materials without explicit ID will have the same size...)",
	0, "*",
	PROP_STRING, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	NULL, NULL, NULL, NULL, NULL, NULL, 0, ""
};

FunctionRNA rna_UILayout_template_preview_func = {
	{(FunctionRNA *)&rna_UILayout_template_curve_mapping_func, (FunctionRNA *)&rna_UILayout_template_constraint_func,
	NULL,
	{(PropertyRNA *)&rna_UILayout_template_preview_id, (PropertyRNA *)&rna_UILayout_template_preview_preview_id}},
	"template_preview", 8, "Item. A preview window for materials, textures, lamps or worlds",
	UILayout_template_preview_call,
	NULL
};

PointerPropertyRNA rna_UILayout_template_curve_mapping_data = {
	{(PropertyRNA *)&rna_UILayout_template_curve_mapping_property, NULL,
	-1, "data", 8652804, "",
	"Data from which to take property",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	NULL, NULL, NULL, NULL,&RNA_AnyType
};

StringPropertyRNA rna_UILayout_template_curve_mapping_property = {
	{(PropertyRNA *)&rna_UILayout_template_curve_mapping_type, (PropertyRNA *)&rna_UILayout_template_curve_mapping_data,
	-1, "property", 262149, "",
	"Identifier of property in data",
	0, "*",
	PROP_STRING, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	NULL, NULL, NULL, NULL, NULL, NULL, 0, ""
};

static EnumPropertyItem rna_UILayout_template_curve_mapping_type_items[5] = {
	{0, "NONE", 0, "None", ""},
	{118, "VECTOR", 0, "Vector", ""},
	{99, "COLOR", 0, "Color", ""},
	{104, "HUE", 0, "Hue", ""},
	{0, NULL, 0, NULL, NULL}
};

EnumPropertyRNA rna_UILayout_template_curve_mapping_type = {
	{(PropertyRNA *)&rna_UILayout_template_curve_mapping_levels, (PropertyRNA *)&rna_UILayout_template_curve_mapping_property,
	-1, "type", 3, "Type",
	"Type of curves to display",
	0, "*",
	PROP_ENUM, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	NULL, NULL, NULL, NULL, NULL, NULL, rna_UILayout_template_curve_mapping_type_items, 4, 0
};

BoolPropertyRNA rna_UILayout_template_curve_mapping_levels = {
	{(PropertyRNA *)&rna_UILayout_template_curve_mapping_brush, (PropertyRNA *)&rna_UILayout_template_curve_mapping_type,
	-1, "levels", 3, "",
	"Show black/white levels",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_UILayout_template_curve_mapping_brush = {
	{(PropertyRNA *)&rna_UILayout_template_curve_mapping_use_negative_slope, (PropertyRNA *)&rna_UILayout_template_curve_mapping_levels,
	-1, "brush", 3, "",
	"Show brush options",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_UILayout_template_curve_mapping_use_negative_slope = {
	{NULL, (PropertyRNA *)&rna_UILayout_template_curve_mapping_brush,
	-1, "use_negative_slope", 3, "",
	"Use a negative slope by default",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

FunctionRNA rna_UILayout_template_curve_mapping_func = {
	{(FunctionRNA *)&rna_UILayout_template_color_ramp_func, (FunctionRNA *)&rna_UILayout_template_preview_func,
	NULL,
	{(PropertyRNA *)&rna_UILayout_template_curve_mapping_data, (PropertyRNA *)&rna_UILayout_template_curve_mapping_use_negative_slope}},
	"template_curve_mapping", 0, "Item. A curve mapping widget used for e.g falloff curves for lamps",
	UILayout_template_curve_mapping_call,
	NULL
};

PointerPropertyRNA rna_UILayout_template_color_ramp_data = {
	{(PropertyRNA *)&rna_UILayout_template_color_ramp_property, NULL,
	-1, "data", 8652804, "",
	"Data from which to take property",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	NULL, NULL, NULL, NULL,&RNA_AnyType
};

StringPropertyRNA rna_UILayout_template_color_ramp_property = {
	{(PropertyRNA *)&rna_UILayout_template_color_ramp_expand, (PropertyRNA *)&rna_UILayout_template_color_ramp_data,
	-1, "property", 262149, "",
	"Identifier of property in data",
	0, "*",
	PROP_STRING, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	NULL, NULL, NULL, NULL, NULL, NULL, 0, ""
};

BoolPropertyRNA rna_UILayout_template_color_ramp_expand = {
	{NULL, (PropertyRNA *)&rna_UILayout_template_color_ramp_property,
	-1, "expand", 3, "",
	"Expand button to show more detail",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

FunctionRNA rna_UILayout_template_color_ramp_func = {
	{(FunctionRNA *)&rna_UILayout_template_icon_view_func, (FunctionRNA *)&rna_UILayout_template_curve_mapping_func,
	NULL,
	{(PropertyRNA *)&rna_UILayout_template_color_ramp_data, (PropertyRNA *)&rna_UILayout_template_color_ramp_expand}},
	"template_color_ramp", 0, "Item. A color ramp widget",
	UILayout_template_color_ramp_call,
	NULL
};

PointerPropertyRNA rna_UILayout_template_icon_view_data = {
	{(PropertyRNA *)&rna_UILayout_template_icon_view_property, NULL,
	-1, "data", 8652804, "",
	"Data from which to take property",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	NULL, NULL, NULL, NULL,&RNA_AnyType
};

StringPropertyRNA rna_UILayout_template_icon_view_property = {
	{NULL, (PropertyRNA *)&rna_UILayout_template_icon_view_data,
	-1, "property", 262149, "",
	"Identifier of property in data",
	0, "*",
	PROP_STRING, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	NULL, NULL, NULL, NULL, NULL, NULL, 0, ""
};

FunctionRNA rna_UILayout_template_icon_view_func = {
	{(FunctionRNA *)&rna_UILayout_template_histogram_func, (FunctionRNA *)&rna_UILayout_template_color_ramp_func,
	NULL,
	{(PropertyRNA *)&rna_UILayout_template_icon_view_data, (PropertyRNA *)&rna_UILayout_template_icon_view_property}},
	"template_icon_view", 0, "Enum. Large widget showing Icon previews",
	UILayout_template_icon_view_call,
	NULL
};

PointerPropertyRNA rna_UILayout_template_histogram_data = {
	{(PropertyRNA *)&rna_UILayout_template_histogram_property, NULL,
	-1, "data", 8652804, "",
	"Data from which to take property",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	NULL, NULL, NULL, NULL,&RNA_AnyType
};

StringPropertyRNA rna_UILayout_template_histogram_property = {
	{NULL, (PropertyRNA *)&rna_UILayout_template_histogram_data,
	-1, "property", 262149, "",
	"Identifier of property in data",
	0, "*",
	PROP_STRING, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	NULL, NULL, NULL, NULL, NULL, NULL, 0, ""
};

FunctionRNA rna_UILayout_template_histogram_func = {
	{(FunctionRNA *)&rna_UILayout_template_waveform_func, (FunctionRNA *)&rna_UILayout_template_icon_view_func,
	NULL,
	{(PropertyRNA *)&rna_UILayout_template_histogram_data, (PropertyRNA *)&rna_UILayout_template_histogram_property}},
	"template_histogram", 0, "Item. A histogramm widget to analyze imaga data",
	UILayout_template_histogram_call,
	NULL
};

PointerPropertyRNA rna_UILayout_template_waveform_data = {
	{(PropertyRNA *)&rna_UILayout_template_waveform_property, NULL,
	-1, "data", 8652804, "",
	"Data from which to take property",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	NULL, NULL, NULL, NULL,&RNA_AnyType
};

StringPropertyRNA rna_UILayout_template_waveform_property = {
	{NULL, (PropertyRNA *)&rna_UILayout_template_waveform_data,
	-1, "property", 262149, "",
	"Identifier of property in data",
	0, "*",
	PROP_STRING, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	NULL, NULL, NULL, NULL, NULL, NULL, 0, ""
};

FunctionRNA rna_UILayout_template_waveform_func = {
	{(FunctionRNA *)&rna_UILayout_template_vectorscope_func, (FunctionRNA *)&rna_UILayout_template_histogram_func,
	NULL,
	{(PropertyRNA *)&rna_UILayout_template_waveform_data, (PropertyRNA *)&rna_UILayout_template_waveform_property}},
	"template_waveform", 0, "Item. A waveform widget to analyze imaga data",
	UILayout_template_waveform_call,
	NULL
};

PointerPropertyRNA rna_UILayout_template_vectorscope_data = {
	{(PropertyRNA *)&rna_UILayout_template_vectorscope_property, NULL,
	-1, "data", 8652804, "",
	"Data from which to take property",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	NULL, NULL, NULL, NULL,&RNA_AnyType
};

StringPropertyRNA rna_UILayout_template_vectorscope_property = {
	{NULL, (PropertyRNA *)&rna_UILayout_template_vectorscope_data,
	-1, "property", 262149, "",
	"Identifier of property in data",
	0, "*",
	PROP_STRING, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	NULL, NULL, NULL, NULL, NULL, NULL, 0, ""
};

FunctionRNA rna_UILayout_template_vectorscope_func = {
	{(FunctionRNA *)&rna_UILayout_template_layers_func, (FunctionRNA *)&rna_UILayout_template_waveform_func,
	NULL,
	{(PropertyRNA *)&rna_UILayout_template_vectorscope_data, (PropertyRNA *)&rna_UILayout_template_vectorscope_property}},
	"template_vectorscope", 0, "Item. A vectorscope widget to analyze imaga data",
	UILayout_template_vectorscope_call,
	NULL
};

PointerPropertyRNA rna_UILayout_template_layers_data = {
	{(PropertyRNA *)&rna_UILayout_template_layers_property, NULL,
	-1, "data", 8652804, "",
	"Data from which to take property",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	NULL, NULL, NULL, NULL,&RNA_AnyType
};

StringPropertyRNA rna_UILayout_template_layers_property = {
	{(PropertyRNA *)&rna_UILayout_template_layers_used_layers_data, (PropertyRNA *)&rna_UILayout_template_layers_data,
	-1, "property", 262149, "",
	"Identifier of property in data",
	0, "*",
	PROP_STRING, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	NULL, NULL, NULL, NULL, NULL, NULL, 0, ""
};

PointerPropertyRNA rna_UILayout_template_layers_used_layers_data = {
	{(PropertyRNA *)&rna_UILayout_template_layers_used_layers_property, (PropertyRNA *)&rna_UILayout_template_layers_property,
	-1, "used_layers_data", 8390660, "",
	"Data from which to take property",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	NULL, NULL, NULL, NULL,&RNA_AnyType
};

StringPropertyRNA rna_UILayout_template_layers_used_layers_property = {
	{(PropertyRNA *)&rna_UILayout_template_layers_active_layer, (PropertyRNA *)&rna_UILayout_template_layers_used_layers_data,
	-1, "used_layers_property", 262149, "",
	"Identifier of property in data",
	0, "*",
	PROP_STRING, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	NULL, NULL, NULL, NULL, NULL, NULL, 0, ""
};

IntPropertyRNA rna_UILayout_template_layers_active_layer = {
	{NULL, (PropertyRNA *)&rna_UILayout_template_layers_used_layers_property,
	-1, "active_layer", 7, "Active Layer",
	"",
	0, "*",
	PROP_INT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL,
	0, INT_MAX, 0, INT_MAX, 1, 0, NULL
};

FunctionRNA rna_UILayout_template_layers_func = {
	{(FunctionRNA *)&rna_UILayout_template_color_picker_func, (FunctionRNA *)&rna_UILayout_template_vectorscope_func,
	NULL,
	{(PropertyRNA *)&rna_UILayout_template_layers_data, (PropertyRNA *)&rna_UILayout_template_layers_active_layer}},
	"template_layers", 0, "template_layers",
	UILayout_template_layers_call,
	NULL
};

PointerPropertyRNA rna_UILayout_template_color_picker_data = {
	{(PropertyRNA *)&rna_UILayout_template_color_picker_property, NULL,
	-1, "data", 8652804, "",
	"Data from which to take property",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	NULL, NULL, NULL, NULL,&RNA_AnyType
};

StringPropertyRNA rna_UILayout_template_color_picker_property = {
	{(PropertyRNA *)&rna_UILayout_template_color_picker_value_slider, (PropertyRNA *)&rna_UILayout_template_color_picker_data,
	-1, "property", 262149, "",
	"Identifier of property in data",
	0, "*",
	PROP_STRING, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	NULL, NULL, NULL, NULL, NULL, NULL, 0, ""
};

BoolPropertyRNA rna_UILayout_template_color_picker_value_slider = {
	{(PropertyRNA *)&rna_UILayout_template_color_picker_lock, (PropertyRNA *)&rna_UILayout_template_color_picker_property,
	-1, "value_slider", 3, "",
	"Display the value slider to the right of the color wheel",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_UILayout_template_color_picker_lock = {
	{(PropertyRNA *)&rna_UILayout_template_color_picker_lock_luminosity, (PropertyRNA *)&rna_UILayout_template_color_picker_value_slider,
	-1, "lock", 3, "",
	"Lock the color wheel display to value 1.0 regardless of actual color",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_UILayout_template_color_picker_lock_luminosity = {
	{(PropertyRNA *)&rna_UILayout_template_color_picker_cubic, (PropertyRNA *)&rna_UILayout_template_color_picker_lock,
	-1, "lock_luminosity", 3, "",
	"Keep the color at its original vector length",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_UILayout_template_color_picker_cubic = {
	{NULL, (PropertyRNA *)&rna_UILayout_template_color_picker_lock_luminosity,
	-1, "cubic", 3, "",
	"Cubic saturation for picking values close to white",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

FunctionRNA rna_UILayout_template_color_picker_func = {
	{(FunctionRNA *)&rna_UILayout_template_palette_func, (FunctionRNA *)&rna_UILayout_template_layers_func,
	NULL,
	{(PropertyRNA *)&rna_UILayout_template_color_picker_data, (PropertyRNA *)&rna_UILayout_template_color_picker_cubic}},
	"template_color_picker", 0, "Item. A color wheel widget to pick colors",
	UILayout_template_color_picker_call,
	NULL
};

PointerPropertyRNA rna_UILayout_template_palette_data = {
	{(PropertyRNA *)&rna_UILayout_template_palette_property, NULL,
	-1, "data", 8652804, "",
	"Data from which to take property",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	NULL, NULL, NULL, NULL,&RNA_AnyType
};

StringPropertyRNA rna_UILayout_template_palette_property = {
	{(PropertyRNA *)&rna_UILayout_template_palette_color, (PropertyRNA *)&rna_UILayout_template_palette_data,
	-1, "property", 262149, "",
	"Identifier of property in data",
	0, "*",
	PROP_STRING, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	NULL, NULL, NULL, NULL, NULL, NULL, 0, ""
};

BoolPropertyRNA rna_UILayout_template_palette_color = {
	{NULL, (PropertyRNA *)&rna_UILayout_template_palette_property,
	-1, "color", 3, "",
	"Display the colors as colors or values",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

FunctionRNA rna_UILayout_template_palette_func = {
	{(FunctionRNA *)&rna_UILayout_template_image_layers_func, (FunctionRNA *)&rna_UILayout_template_color_picker_func,
	NULL,
	{(PropertyRNA *)&rna_UILayout_template_palette_data, (PropertyRNA *)&rna_UILayout_template_palette_color}},
	"template_palette", 0, "Item. A palette used to pick colors",
	UILayout_template_palette_call,
	NULL
};

PointerPropertyRNA rna_UILayout_template_image_layers_image = {
	{(PropertyRNA *)&rna_UILayout_template_image_layers_image_user, NULL,
	-1, "image", 8388612, "",
	"",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	NULL, NULL, NULL, NULL,&RNA_Image
};

PointerPropertyRNA rna_UILayout_template_image_layers_image_user = {
	{NULL, (PropertyRNA *)&rna_UILayout_template_image_layers_image,
	-1, "image_user", 8388612, "",
	"",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	NULL, NULL, NULL, NULL,&RNA_ImageUser
};

FunctionRNA rna_UILayout_template_image_layers_func = {
	{(FunctionRNA *)&rna_UILayout_template_image_func, (FunctionRNA *)&rna_UILayout_template_palette_func,
	NULL,
	{(PropertyRNA *)&rna_UILayout_template_image_layers_image, (PropertyRNA *)&rna_UILayout_template_image_layers_image_user}},
	"template_image_layers", 8, "template_image_layers",
	UILayout_template_image_layers_call,
	NULL
};

PointerPropertyRNA rna_UILayout_template_image_data = {
	{(PropertyRNA *)&rna_UILayout_template_image_property, NULL,
	-1, "data", 8652804, "",
	"Data from which to take property",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	NULL, NULL, NULL, NULL,&RNA_AnyType
};

StringPropertyRNA rna_UILayout_template_image_property = {
	{(PropertyRNA *)&rna_UILayout_template_image_image_user, (PropertyRNA *)&rna_UILayout_template_image_data,
	-1, "property", 262149, "",
	"Identifier of property in data",
	0, "*",
	PROP_STRING, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	NULL, NULL, NULL, NULL, NULL, NULL, 0, ""
};

PointerPropertyRNA rna_UILayout_template_image_image_user = {
	{(PropertyRNA *)&rna_UILayout_template_image_compact, (PropertyRNA *)&rna_UILayout_template_image_property,
	-1, "image_user", 8652804, "",
	"",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	NULL, NULL, NULL, NULL,&RNA_ImageUser
};

BoolPropertyRNA rna_UILayout_template_image_compact = {
	{NULL, (PropertyRNA *)&rna_UILayout_template_image_image_user,
	-1, "compact", 3, "",
	"Use more compact layout",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

FunctionRNA rna_UILayout_template_image_func = {
	{(FunctionRNA *)&rna_UILayout_template_image_settings_func, (FunctionRNA *)&rna_UILayout_template_image_layers_func,
	NULL,
	{(PropertyRNA *)&rna_UILayout_template_image_data, (PropertyRNA *)&rna_UILayout_template_image_compact}},
	"template_image", 8, "Item(s). User interface for selecting images and their source paths",
	UILayout_template_image_call,
	NULL
};

PointerPropertyRNA rna_UILayout_template_image_settings_image_settings = {
	{(PropertyRNA *)&rna_UILayout_template_image_settings_color_management, NULL,
	-1, "image_settings", 8652804, "",
	"",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	NULL, NULL, NULL, NULL,&RNA_ImageFormatSettings
};

BoolPropertyRNA rna_UILayout_template_image_settings_color_management = {
	{NULL, (PropertyRNA *)&rna_UILayout_template_image_settings_image_settings,
	-1, "color_management", 3, "",
	"Show color management settings",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

FunctionRNA rna_UILayout_template_image_settings_func = {
	{(FunctionRNA *)&rna_UILayout_template_movieclip_func, (FunctionRNA *)&rna_UILayout_template_image_func,
	NULL,
	{(PropertyRNA *)&rna_UILayout_template_image_settings_image_settings, (PropertyRNA *)&rna_UILayout_template_image_settings_color_management}},
	"template_image_settings", 0, "User interface for setting image format options",
	UILayout_template_image_settings_call,
	NULL
};

PointerPropertyRNA rna_UILayout_template_movieclip_data = {
	{(PropertyRNA *)&rna_UILayout_template_movieclip_property, NULL,
	-1, "data", 8652804, "",
	"Data from which to take property",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	NULL, NULL, NULL, NULL,&RNA_AnyType
};

StringPropertyRNA rna_UILayout_template_movieclip_property = {
	{(PropertyRNA *)&rna_UILayout_template_movieclip_compact, (PropertyRNA *)&rna_UILayout_template_movieclip_data,
	-1, "property", 262149, "",
	"Identifier of property in data",
	0, "*",
	PROP_STRING, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	NULL, NULL, NULL, NULL, NULL, NULL, 0, ""
};

BoolPropertyRNA rna_UILayout_template_movieclip_compact = {
	{NULL, (PropertyRNA *)&rna_UILayout_template_movieclip_property,
	-1, "compact", 3, "",
	"Use more compact layout",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

FunctionRNA rna_UILayout_template_movieclip_func = {
	{(FunctionRNA *)&rna_UILayout_template_track_func, (FunctionRNA *)&rna_UILayout_template_image_settings_func,
	NULL,
	{(PropertyRNA *)&rna_UILayout_template_movieclip_data, (PropertyRNA *)&rna_UILayout_template_movieclip_compact}},
	"template_movieclip", 8, "Item(s). User interface for selecting movie clips and their source paths",
	UILayout_template_movieclip_call,
	NULL
};

PointerPropertyRNA rna_UILayout_template_track_data = {
	{(PropertyRNA *)&rna_UILayout_template_track_property, NULL,
	-1, "data", 8652804, "",
	"Data from which to take property",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	NULL, NULL, NULL, NULL,&RNA_AnyType
};

StringPropertyRNA rna_UILayout_template_track_property = {
	{NULL, (PropertyRNA *)&rna_UILayout_template_track_data,
	-1, "property", 262149, "",
	"Identifier of property in data",
	0, "*",
	PROP_STRING, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	NULL, NULL, NULL, NULL, NULL, NULL, 0, ""
};

FunctionRNA rna_UILayout_template_track_func = {
	{(FunctionRNA *)&rna_UILayout_template_marker_func, (FunctionRNA *)&rna_UILayout_template_movieclip_func,
	NULL,
	{(PropertyRNA *)&rna_UILayout_template_track_data, (PropertyRNA *)&rna_UILayout_template_track_property}},
	"template_track", 0, "Item. A movie-track widget to preview tracking image.",
	UILayout_template_track_call,
	NULL
};

PointerPropertyRNA rna_UILayout_template_marker_data = {
	{(PropertyRNA *)&rna_UILayout_template_marker_property, NULL,
	-1, "data", 8652804, "",
	"Data from which to take property",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	NULL, NULL, NULL, NULL,&RNA_AnyType
};

StringPropertyRNA rna_UILayout_template_marker_property = {
	{(PropertyRNA *)&rna_UILayout_template_marker_clip_user, (PropertyRNA *)&rna_UILayout_template_marker_data,
	-1, "property", 262149, "",
	"Identifier of property in data",
	0, "*",
	PROP_STRING, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	NULL, NULL, NULL, NULL, NULL, NULL, 0, ""
};

PointerPropertyRNA rna_UILayout_template_marker_clip_user = {
	{(PropertyRNA *)&rna_UILayout_template_marker_track, (PropertyRNA *)&rna_UILayout_template_marker_property,
	-1, "clip_user", 8652804, "",
	"",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	NULL, NULL, NULL, NULL,&RNA_MovieClipUser
};

PointerPropertyRNA rna_UILayout_template_marker_track = {
	{(PropertyRNA *)&rna_UILayout_template_marker_compact, (PropertyRNA *)&rna_UILayout_template_marker_clip_user,
	-1, "track", 8652804, "",
	"",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	NULL, NULL, NULL, NULL,&RNA_MovieTrackingTrack
};

BoolPropertyRNA rna_UILayout_template_marker_compact = {
	{NULL, (PropertyRNA *)&rna_UILayout_template_marker_track,
	-1, "compact", 3, "",
	"Use more compact layout",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

FunctionRNA rna_UILayout_template_marker_func = {
	{(FunctionRNA *)&rna_UILayout_template_movieclip_information_func, (FunctionRNA *)&rna_UILayout_template_track_func,
	NULL,
	{(PropertyRNA *)&rna_UILayout_template_marker_data, (PropertyRNA *)&rna_UILayout_template_marker_compact}},
	"template_marker", 0, "Item. A widget to control single marker settings.",
	UILayout_template_marker_call,
	NULL
};

PointerPropertyRNA rna_UILayout_template_movieclip_information_data = {
	{(PropertyRNA *)&rna_UILayout_template_movieclip_information_property, NULL,
	-1, "data", 8652804, "",
	"Data from which to take property",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	NULL, NULL, NULL, NULL,&RNA_AnyType
};

StringPropertyRNA rna_UILayout_template_movieclip_information_property = {
	{(PropertyRNA *)&rna_UILayout_template_movieclip_information_clip_user, (PropertyRNA *)&rna_UILayout_template_movieclip_information_data,
	-1, "property", 262149, "",
	"Identifier of property in data",
	0, "*",
	PROP_STRING, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	NULL, NULL, NULL, NULL, NULL, NULL, 0, ""
};

PointerPropertyRNA rna_UILayout_template_movieclip_information_clip_user = {
	{NULL, (PropertyRNA *)&rna_UILayout_template_movieclip_information_property,
	-1, "clip_user", 8652804, "",
	"",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	NULL, NULL, NULL, NULL,&RNA_MovieClipUser
};

FunctionRNA rna_UILayout_template_movieclip_information_func = {
	{(FunctionRNA *)&rna_UILayout_template_list_func, (FunctionRNA *)&rna_UILayout_template_marker_func,
	NULL,
	{(PropertyRNA *)&rna_UILayout_template_movieclip_information_data, (PropertyRNA *)&rna_UILayout_template_movieclip_information_clip_user}},
	"template_movieclip_information", 0, "Item. Movie clip information data.",
	UILayout_template_movieclip_information_call,
	NULL
};

StringPropertyRNA rna_UILayout_template_list_listtype_name = {
	{(PropertyRNA *)&rna_UILayout_template_list_list_id, NULL,
	-1, "listtype_name", 262149, "",
	"Identifier of the list type to use",
	0, "*",
	PROP_STRING, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	NULL, NULL, NULL, NULL, NULL, NULL, 0, ""
};

StringPropertyRNA rna_UILayout_template_list_list_id = {
	{(PropertyRNA *)&rna_UILayout_template_list_dataptr, (PropertyRNA *)&rna_UILayout_template_list_listtype_name,
	-1, "list_id", 262145, "",
	"Identifier of this list widget (mandatory when using default \"UI_UL_list\" class). If this is set, the uilist gets a custom ID, otherwise it takes the name of the class used to define the uilist (for example, if the class name is \"OBJECT_UL_vgroups\", and list_id is not set by the script, then bl_idname = \"OBJECT_UL_vgroups\")",
	0, "*",
	PROP_STRING, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	NULL, NULL, NULL, NULL, NULL, NULL, 0, ""
};

PointerPropertyRNA rna_UILayout_template_list_dataptr = {
	{(PropertyRNA *)&rna_UILayout_template_list_propname, (PropertyRNA *)&rna_UILayout_template_list_list_id,
	-1, "dataptr", 8390660, "",
	"Data from which to take the Collection property",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	NULL, NULL, NULL, NULL,&RNA_AnyType
};

StringPropertyRNA rna_UILayout_template_list_propname = {
	{(PropertyRNA *)&rna_UILayout_template_list_active_dataptr, (PropertyRNA *)&rna_UILayout_template_list_dataptr,
	-1, "propname", 262149, "",
	"Identifier of the Collection property in data",
	0, "*",
	PROP_STRING, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	NULL, NULL, NULL, NULL, NULL, NULL, 0, ""
};

PointerPropertyRNA rna_UILayout_template_list_active_dataptr = {
	{(PropertyRNA *)&rna_UILayout_template_list_active_propname, (PropertyRNA *)&rna_UILayout_template_list_propname,
	-1, "active_dataptr", 8652804, "",
	"Data from which to take the integer property, index of the active item",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	NULL, NULL, NULL, NULL,&RNA_AnyType
};

StringPropertyRNA rna_UILayout_template_list_active_propname = {
	{(PropertyRNA *)&rna_UILayout_template_list_rows, (PropertyRNA *)&rna_UILayout_template_list_active_dataptr,
	-1, "active_propname", 262149, "",
	"Identifier of the integer property in active_data, index of the active item",
	0, "*",
	PROP_STRING, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	NULL, NULL, NULL, NULL, NULL, NULL, 0, ""
};

IntPropertyRNA rna_UILayout_template_list_rows = {
	{(PropertyRNA *)&rna_UILayout_template_list_maxrows, (PropertyRNA *)&rna_UILayout_template_list_active_propname,
	-1, "rows", 3, "",
	"Default and minimum number of rows to display",
	0, "*",
	PROP_INT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL,
	0, INT_MAX, 0, INT_MAX, 1, 5, NULL
};

IntPropertyRNA rna_UILayout_template_list_maxrows = {
	{(PropertyRNA *)&rna_UILayout_template_list_type, (PropertyRNA *)&rna_UILayout_template_list_rows,
	-1, "maxrows", 3, "",
	"Default maximum number of rows to display",
	0, "*",
	PROP_INT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL,
	0, INT_MAX, 0, INT_MAX, 1, 5, NULL
};

static EnumPropertyItem rna_UILayout_template_list_type_items[4] = {
	{0, "DEFAULT", 0, "Default Layout", "Use the default, multi-rows layout"},
	{1, "COMPACT", 0, "Compact Layout", "Use the compact, single-row layout"},
	{2, "GRID", 0, "Grid Layout", "Use the grid-based layout"},
	{0, NULL, 0, NULL, NULL}
};

EnumPropertyRNA rna_UILayout_template_list_type = {
	{(PropertyRNA *)&rna_UILayout_template_list_columns, (PropertyRNA *)&rna_UILayout_template_list_maxrows,
	-1, "type", 3, "Type",
	"Type of layout to use",
	0, "*",
	PROP_ENUM, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	NULL, NULL, NULL, NULL, NULL, NULL, rna_UILayout_template_list_type_items, 3, 0
};

IntPropertyRNA rna_UILayout_template_list_columns = {
	{NULL, (PropertyRNA *)&rna_UILayout_template_list_type,
	-1, "columns", 3, "",
	"Number of items to display per row, for GRID layout",
	0, "*",
	PROP_INT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL,
	0, INT_MAX, 0, INT_MAX, 1, 9, NULL
};

FunctionRNA rna_UILayout_template_list_func = {
	{(FunctionRNA *)&rna_UILayout_template_running_jobs_func, (FunctionRNA *)&rna_UILayout_template_movieclip_information_func,
	NULL,
	{(PropertyRNA *)&rna_UILayout_template_list_listtype_name, (PropertyRNA *)&rna_UILayout_template_list_columns}},
	"template_list", 8, "Item. A list widget to display data, e.g. vertexgroups.",
	UILayout_template_list_call,
	NULL
};

FunctionRNA rna_UILayout_template_running_jobs_func = {
	{(FunctionRNA *)&rna_UILayout_template_operator_search_func, (FunctionRNA *)&rna_UILayout_template_list_func,
	NULL,
	{NULL, NULL}},
	"template_running_jobs", 8, "template_running_jobs",
	UILayout_template_running_jobs_call,
	NULL
};

FunctionRNA rna_UILayout_template_operator_search_func = {
	{(FunctionRNA *)&rna_UILayout_template_header_3D_func, (FunctionRNA *)&rna_UILayout_template_running_jobs_func,
	NULL,
	{NULL, NULL}},
	"template_operator_search", 0, "template_operator_search",
	UILayout_template_operator_search_call,
	NULL
};

FunctionRNA rna_UILayout_template_header_3D_func = {
	{(FunctionRNA *)&rna_UILayout_template_edit_mode_selection_func, (FunctionRNA *)&rna_UILayout_template_operator_search_func,
	NULL,
	{NULL, NULL}},
	"template_header_3D", 8, "template_header_3D",
	UILayout_template_header_3D_call,
	NULL
};

FunctionRNA rna_UILayout_template_edit_mode_selection_func = {
	{(FunctionRNA *)&rna_UILayout_template_reports_banner_func, (FunctionRNA *)&rna_UILayout_template_header_3D_func,
	NULL,
	{NULL, NULL}},
	"template_edit_mode_selection", 8, "template_edit_mode_selection",
	UILayout_template_edit_mode_selection_call,
	NULL
};

FunctionRNA rna_UILayout_template_reports_banner_func = {
	{(FunctionRNA *)&rna_UILayout_template_node_link_func, (FunctionRNA *)&rna_UILayout_template_edit_mode_selection_func,
	NULL,
	{NULL, NULL}},
	"template_reports_banner", 8, "template_reports_banner",
	UILayout_template_reports_banner_call,
	NULL
};

PointerPropertyRNA rna_UILayout_template_node_link_ntree = {
	{(PropertyRNA *)&rna_UILayout_template_node_link_node, NULL,
	-1, "ntree", 8388612, "",
	"",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	NULL, NULL, NULL, NULL,&RNA_NodeTree
};

PointerPropertyRNA rna_UILayout_template_node_link_node = {
	{(PropertyRNA *)&rna_UILayout_template_node_link_socket, (PropertyRNA *)&rna_UILayout_template_node_link_ntree,
	-1, "node", 8388612, "",
	"",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	NULL, NULL, NULL, NULL,&RNA_Node
};

PointerPropertyRNA rna_UILayout_template_node_link_socket = {
	{NULL, (PropertyRNA *)&rna_UILayout_template_node_link_node,
	-1, "socket", 8388612, "",
	"",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	NULL, NULL, NULL, NULL,&RNA_NodeSocket
};

FunctionRNA rna_UILayout_template_node_link_func = {
	{(FunctionRNA *)&rna_UILayout_template_node_view_func, (FunctionRNA *)&rna_UILayout_template_reports_banner_func,
	NULL,
	{(PropertyRNA *)&rna_UILayout_template_node_link_ntree, (PropertyRNA *)&rna_UILayout_template_node_link_socket}},
	"template_node_link", 0, "template_node_link",
	UILayout_template_node_link_call,
	NULL
};

PointerPropertyRNA rna_UILayout_template_node_view_ntree = {
	{(PropertyRNA *)&rna_UILayout_template_node_view_node, NULL,
	-1, "ntree", 8388612, "",
	"",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	NULL, NULL, NULL, NULL,&RNA_NodeTree
};

PointerPropertyRNA rna_UILayout_template_node_view_node = {
	{(PropertyRNA *)&rna_UILayout_template_node_view_socket, (PropertyRNA *)&rna_UILayout_template_node_view_ntree,
	-1, "node", 8388612, "",
	"",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	NULL, NULL, NULL, NULL,&RNA_Node
};

PointerPropertyRNA rna_UILayout_template_node_view_socket = {
	{NULL, (PropertyRNA *)&rna_UILayout_template_node_view_node,
	-1, "socket", 8388612, "",
	"",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	NULL, NULL, NULL, NULL,&RNA_NodeSocket
};

FunctionRNA rna_UILayout_template_node_view_func = {
	{(FunctionRNA *)&rna_UILayout_template_texture_user_func, (FunctionRNA *)&rna_UILayout_template_node_link_func,
	NULL,
	{(PropertyRNA *)&rna_UILayout_template_node_view_ntree, (PropertyRNA *)&rna_UILayout_template_node_view_socket}},
	"template_node_view", 8, "template_node_view",
	UILayout_template_node_view_call,
	NULL
};

FunctionRNA rna_UILayout_template_texture_user_func = {
	{(FunctionRNA *)&rna_UILayout_template_keymap_item_properties_func, (FunctionRNA *)&rna_UILayout_template_node_view_func,
	NULL,
	{NULL, NULL}},
	"template_texture_user", 8, "template_texture_user",
	UILayout_template_texture_user_call,
	NULL
};

PointerPropertyRNA rna_UILayout_template_keymap_item_properties_item = {
	{NULL, NULL,
	-1, "item", 8652804, "",
	"",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	NULL, NULL, NULL, NULL,&RNA_KeyMapItem
};

FunctionRNA rna_UILayout_template_keymap_item_properties_func = {
	{(FunctionRNA *)&rna_UILayout_template_component_menu_func, (FunctionRNA *)&rna_UILayout_template_texture_user_func,
	NULL,
	{(PropertyRNA *)&rna_UILayout_template_keymap_item_properties_item, (PropertyRNA *)&rna_UILayout_template_keymap_item_properties_item}},
	"template_keymap_item_properties", 0, "template_keymap_item_properties",
	UILayout_template_keymap_item_properties_call,
	NULL
};

PointerPropertyRNA rna_UILayout_template_component_menu_data = {
	{(PropertyRNA *)&rna_UILayout_template_component_menu_property, NULL,
	-1, "data", 8390660, "",
	"Data from which to take property",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	NULL, NULL, NULL, NULL,&RNA_AnyType
};

StringPropertyRNA rna_UILayout_template_component_menu_property = {
	{(PropertyRNA *)&rna_UILayout_template_component_menu_name, (PropertyRNA *)&rna_UILayout_template_component_menu_data,
	-1, "property", 262149, "",
	"Identifier of property in data",
	0, "*",
	PROP_STRING, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	NULL, NULL, NULL, NULL, NULL, NULL, 0, ""
};

StringPropertyRNA rna_UILayout_template_component_menu_name = {
	{NULL, (PropertyRNA *)&rna_UILayout_template_component_menu_property,
	-1, "name", 262145, "",
	"",
	0, "*",
	PROP_STRING, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	NULL, NULL, NULL, NULL, NULL, NULL, 0, ""
};

FunctionRNA rna_UILayout_template_component_menu_func = {
	{(FunctionRNA *)&rna_UILayout_introspect_func, (FunctionRNA *)&rna_UILayout_template_keymap_item_properties_func,
	NULL,
	{(PropertyRNA *)&rna_UILayout_template_component_menu_data, (PropertyRNA *)&rna_UILayout_template_component_menu_name}},
	"template_component_menu", 0, "Item. Display expanded property in a popup menu",
	UILayout_template_component_menu_call,
	NULL
};

StringPropertyRNA rna_UILayout_introspect_string = {
	{NULL, NULL,
	-1, "string", 262153, "Descr",
	"DESCR",
	0, "*",
	PROP_STRING, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	NULL, NULL, NULL, NULL, NULL, NULL, 1048576, ""
};

FunctionRNA rna_UILayout_introspect_func = {
	{(FunctionRNA *)&rna_UILayout_template_colorspace_settings_func, (FunctionRNA *)&rna_UILayout_template_component_menu_func,
	NULL,
	{(PropertyRNA *)&rna_UILayout_introspect_string, (PropertyRNA *)&rna_UILayout_introspect_string}},
	"introspect", 0, "introspect",
	UILayout_introspect_call,
	(PropertyRNA *)&rna_UILayout_introspect_string
};

PointerPropertyRNA rna_UILayout_template_colorspace_settings_data = {
	{(PropertyRNA *)&rna_UILayout_template_colorspace_settings_property, NULL,
	-1, "data", 8652804, "",
	"Data from which to take property",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	NULL, NULL, NULL, NULL,&RNA_AnyType
};

StringPropertyRNA rna_UILayout_template_colorspace_settings_property = {
	{NULL, (PropertyRNA *)&rna_UILayout_template_colorspace_settings_data,
	-1, "property", 262149, "",
	"Identifier of property in data",
	0, "*",
	PROP_STRING, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	NULL, NULL, NULL, NULL, NULL, NULL, 0, ""
};

FunctionRNA rna_UILayout_template_colorspace_settings_func = {
	{(FunctionRNA *)&rna_UILayout_template_colormanaged_view_settings_func, (FunctionRNA *)&rna_UILayout_introspect_func,
	NULL,
	{(PropertyRNA *)&rna_UILayout_template_colorspace_settings_data, (PropertyRNA *)&rna_UILayout_template_colorspace_settings_property}},
	"template_colorspace_settings", 0, "Item. A widget to control input color space settings.",
	UILayout_template_colorspace_settings_call,
	NULL
};

PointerPropertyRNA rna_UILayout_template_colormanaged_view_settings_data = {
	{(PropertyRNA *)&rna_UILayout_template_colormanaged_view_settings_property, NULL,
	-1, "data", 8652804, "",
	"Data from which to take property",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	NULL, NULL, NULL, NULL,&RNA_AnyType
};

StringPropertyRNA rna_UILayout_template_colormanaged_view_settings_property = {
	{NULL, (PropertyRNA *)&rna_UILayout_template_colormanaged_view_settings_data,
	-1, "property", 262149, "",
	"Identifier of property in data",
	0, "*",
	PROP_STRING, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	NULL, NULL, NULL, NULL, NULL, NULL, 0, ""
};

FunctionRNA rna_UILayout_template_colormanaged_view_settings_func = {
	{(FunctionRNA *)&rna_UILayout_template_node_socket_func, (FunctionRNA *)&rna_UILayout_template_colorspace_settings_func,
	NULL,
	{(PropertyRNA *)&rna_UILayout_template_colormanaged_view_settings_data, (PropertyRNA *)&rna_UILayout_template_colormanaged_view_settings_property}},
	"template_colormanaged_view_settings", 8, "Item. A widget to control color managed view settings settings.",
	UILayout_template_colormanaged_view_settings_call,
	NULL
};

static float rna_UILayout_template_node_socket_color_default[4] = {
	0.0f,
	0.0f,
	0.0f,
	1.0f
};

FloatPropertyRNA rna_UILayout_template_node_socket_color = {
	{NULL, NULL,
	-1, "color", 3, "Color",
	"",
	0, "*",
	PROP_FLOAT, PROP_NONE | PROP_UNIT_NONE, NULL, 1, {4, 0, 0}, 4,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 1.0f, 0.0f, 1.0f, 1.0f, 3, 0.0f, rna_UILayout_template_node_socket_color_default
};

FunctionRNA rna_UILayout_template_node_socket_func = {
	{NULL, (FunctionRNA *)&rna_UILayout_template_colormanaged_view_settings_func,
	NULL,
	{(PropertyRNA *)&rna_UILayout_template_node_socket_color, (PropertyRNA *)&rna_UILayout_template_node_socket_color}},
	"template_node_socket", 8, "Node Socket Icon",
	UILayout_template_node_socket_call,
	NULL
};

StructRNA RNA_UILayout = {
	{(ContainerRNA *)&RNA_Panel, (ContainerRNA *)&RNA_Sound,
	NULL,
	{(PropertyRNA *)&rna_UILayout_rna_properties, (PropertyRNA *)&rna_UILayout_scale_y}},
	"UILayout", NULL, NULL, 4, "UI Layout",
	"User interface layout in a panel or header",
	"*", 17,
	NULL, (PropertyRNA *)&rna_UILayout_rna_properties,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	{(FunctionRNA *)&rna_UILayout_row_func, (FunctionRNA *)&rna_UILayout_template_node_socket_func}
};

/* Panel */
CollectionPropertyRNA rna_Panel_rna_properties = {
	{(PropertyRNA *)&rna_Panel_rna_type, NULL,
	-1, "rna_properties", 128, "Properties",
	"RNA property collection",
	0, "*",
	PROP_COLLECTION, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	Panel_rna_properties_begin, Panel_rna_properties_next, Panel_rna_properties_end, Panel_rna_properties_get, NULL, NULL, Panel_rna_properties_lookup_string, NULL, &RNA_Property
};

PointerPropertyRNA rna_Panel_rna_type = {
	{(PropertyRNA *)&rna_Panel_layout, (PropertyRNA *)&rna_Panel_rna_properties,
	-1, "rna_type", 8912896, "RNA",
	"RNA type definition",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	Panel_rna_type_get, NULL, NULL, NULL,&RNA_Struct
};

PointerPropertyRNA rna_Panel_layout = {
	{(PropertyRNA *)&rna_Panel_text, (PropertyRNA *)&rna_Panel_rna_type,
	-1, "layout", 8388608, "Layout",
	"Defines the structure of the panel in the UI",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	Panel_layout_get, NULL, NULL, NULL,&RNA_UILayout
};

StringPropertyRNA rna_Panel_text = {
	{(PropertyRNA *)&rna_Panel_bl_idname, (PropertyRNA *)&rna_Panel_layout,
	-1, "text", 262145, "Text",
	"XXX todo",
	0, "*",
	PROP_STRING, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {64, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	Panel_text_get, Panel_text_length, Panel_text_set, NULL, NULL, NULL, 64, ""
};

StringPropertyRNA rna_Panel_bl_idname = {
	{(PropertyRNA *)&rna_Panel_bl_label, (PropertyRNA *)&rna_Panel_text,
	-1, "bl_idname", 262161, "ID Name",
	"If this is set, the panel gets a custom ID, otherwise it takes the name of the class used to define the panel. For example, if the class name is \"OBJECT_PT_hello\", and bl_idname is not set by the script, then bl_idname = \"OBJECT_PT_hello\"",
	0, "*",
	PROP_STRING, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	Panel_bl_idname_get, Panel_bl_idname_length, Panel_bl_idname_set, NULL, NULL, NULL, 0, ""
};

StringPropertyRNA rna_Panel_bl_label = {
	{(PropertyRNA *)&rna_Panel_bl_translation_context, (PropertyRNA *)&rna_Panel_bl_idname,
	-1, "bl_label", 262161, "Label",
	"The panel label, shows up in the panel header at the right of the triangle used to collapse the panel",
	0, "*",
	PROP_STRING, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	Panel_bl_label_get, Panel_bl_label_length, Panel_bl_label_set, NULL, NULL, NULL, 0, ""
};

StringPropertyRNA rna_Panel_bl_translation_context = {
	{(PropertyRNA *)&rna_Panel_bl_category, (PropertyRNA *)&rna_Panel_bl_label,
	-1, "bl_translation_context", 262193, "bl_translation_context",
	"",
	0, "*",
	PROP_STRING, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	Panel_bl_translation_context_get, Panel_bl_translation_context_length, Panel_bl_translation_context_set, NULL, NULL, NULL, 0, "*"
};

StringPropertyRNA rna_Panel_bl_category = {
	{(PropertyRNA *)&rna_Panel_bl_space_type, (PropertyRNA *)&rna_Panel_bl_translation_context,
	-1, "bl_category", 262193, "bl_category",
	"",
	0, "*",
	PROP_STRING, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	Panel_bl_category_get, Panel_bl_category_length, Panel_bl_category_set, NULL, NULL, NULL, 0, ""
};

static EnumPropertyItem rna_Panel_bl_space_type_items[24] = {
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

EnumPropertyRNA rna_Panel_bl_space_type = {
	{(PropertyRNA *)&rna_Panel_bl_region_type, (PropertyRNA *)&rna_Panel_bl_category,
	-1, "bl_space_type", 19, "Space type",
	"The space where the panel is going to be used in",
	0, "*",
	PROP_ENUM, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	Panel_bl_space_type_get, Panel_bl_space_type_set, NULL, NULL, NULL, NULL, rna_Panel_bl_space_type_items, 23, 0
};

static EnumPropertyItem rna_Panel_bl_region_type_items[9] = {
	{0, "WINDOW", 0, "Window", ""},
	{1, "HEADER", 0, "Header", ""},
	{2, "CHANNELS", 0, "Channels", ""},
	{3, "TEMPORARY", 0, "Temporary", ""},
	{4, "UI", 0, "UI", ""},
	{5, "TOOLS", 0, "Tools", ""},
	{6, "TOOL_PROPS", 0, "Tool Properties", ""},
	{7, "PREVIEW", 0, "Preview", ""},
	{0, NULL, 0, NULL, NULL}
};

EnumPropertyRNA rna_Panel_bl_region_type = {
	{(PropertyRNA *)&rna_Panel_bl_context, (PropertyRNA *)&rna_Panel_bl_space_type,
	-1, "bl_region_type", 19, "Region Type",
	"The region where the panel is going to be used in",
	0, "*",
	PROP_ENUM, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	Panel_bl_region_type_get, Panel_bl_region_type_set, NULL, NULL, NULL, NULL, rna_Panel_bl_region_type_items, 8, 0
};

StringPropertyRNA rna_Panel_bl_context = {
	{(PropertyRNA *)&rna_Panel_bl_options, (PropertyRNA *)&rna_Panel_bl_region_type,
	-1, "bl_context", 262193, "Context",
	"The context in which the panel belongs to. (TODO: explain the possible combinations bl_context/bl_region_type/bl_space_type)",
	0, "*",
	PROP_STRING, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	Panel_bl_context_get, Panel_bl_context_length, Panel_bl_context_set, NULL, NULL, NULL, 0, ""
};

static EnumPropertyItem rna_Panel_bl_options_items[3] = {
	{1, "DEFAULT_CLOSED", 0, "Default Closed", "Defines if the panel has to be open or collapsed at the time of its creation"},
	{2, "HIDE_HEADER", 0, "Hide Header", "If set to False, the panel shows a header, which contains a clickable arrow to collapse the panel and the label (see bl_label)"},
	{0, NULL, 0, NULL, NULL}
};

EnumPropertyRNA rna_Panel_bl_options = {
	{(PropertyRNA *)&rna_Panel_use_pin, (PropertyRNA *)&rna_Panel_bl_context,
	-1, "bl_options", 2097203, "Options",
	"Options for this panel type",
	0, "*",
	PROP_ENUM, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	Panel_bl_options_get, Panel_bl_options_set, NULL, NULL, NULL, NULL, rna_Panel_bl_options_items, 2, 1
};

BoolPropertyRNA rna_Panel_use_pin = {
	{NULL, (PropertyRNA *)&rna_Panel_bl_options,
	-1, "use_pin", 3, "Pin",
	"",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 33554432, NULL, NULL,
	0, -1, NULL},
	Panel_use_pin_get, Panel_use_pin_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_Panel_poll_visible = {
	{(PropertyRNA *)&rna_Panel_poll_context, NULL,
	-1, "visible", 11, "",
	"",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 1, NULL
};

PointerPropertyRNA rna_Panel_poll_context = {
	{NULL, (PropertyRNA *)&rna_Panel_poll_visible,
	-1, "context", 8650756, "",
	"",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	NULL, NULL, NULL, NULL,&RNA_Context
};

FunctionRNA rna_Panel_poll_func = {
	{(FunctionRNA *)&rna_Panel_draw_func, NULL,
	NULL,
	{(PropertyRNA *)&rna_Panel_poll_visible, (PropertyRNA *)&rna_Panel_poll_context}},
	"poll", 97, "If this method returns a non-null output, then the panel can be drawn",
	NULL,
	(PropertyRNA *)&rna_Panel_poll_visible
};

PointerPropertyRNA rna_Panel_draw_context = {
	{NULL, NULL,
	-1, "context", 8650756, "",
	"",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	NULL, NULL, NULL, NULL,&RNA_Context
};

FunctionRNA rna_Panel_draw_func = {
	{(FunctionRNA *)&rna_Panel_draw_header_func, (FunctionRNA *)&rna_Panel_poll_func,
	NULL,
	{(PropertyRNA *)&rna_Panel_draw_context, (PropertyRNA *)&rna_Panel_draw_context}},
	"draw", 32, "Draw UI elements into the panel UI layout",
	NULL,
	NULL
};

PointerPropertyRNA rna_Panel_draw_header_context = {
	{NULL, NULL,
	-1, "context", 8650756, "",
	"",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	NULL, NULL, NULL, NULL,&RNA_Context
};

FunctionRNA rna_Panel_draw_header_func = {
	{NULL, (FunctionRNA *)&rna_Panel_draw_func,
	NULL,
	{(PropertyRNA *)&rna_Panel_draw_header_context, (PropertyRNA *)&rna_Panel_draw_header_context}},
	"draw_header", 96, "Draw UI elements into the panel\'s header UI layout",
	NULL,
	NULL
};

StructRNA RNA_Panel = {
	{(ContainerRNA *)&RNA_UIList, (ContainerRNA *)&RNA_UILayout,
	NULL,
	{(PropertyRNA *)&rna_Panel_rna_properties, (PropertyRNA *)&rna_Panel_use_pin}},
	"Panel", NULL, NULL, 4, "Panel",
	"Panel containing UI elements",
	"*", 17,
	NULL, (PropertyRNA *)&rna_Panel_rna_properties,
	NULL,
	NULL,
	rna_Panel_refine,
	NULL,
	rna_Panel_register,
	rna_Panel_unregister,
	NULL,
	NULL,
	{(FunctionRNA *)&rna_Panel_poll_func, (FunctionRNA *)&rna_Panel_draw_header_func}
};

/* UIList */
CollectionPropertyRNA rna_UIList_rna_properties = {
	{(PropertyRNA *)&rna_UIList_rna_type, NULL,
	-1, "rna_properties", 128, "Properties",
	"RNA property collection",
	0, "*",
	PROP_COLLECTION, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	UIList_rna_properties_begin, UIList_rna_properties_next, UIList_rna_properties_end, UIList_rna_properties_get, NULL, NULL, UIList_rna_properties_lookup_string, NULL, &RNA_Property
};

PointerPropertyRNA rna_UIList_rna_type = {
	{(PropertyRNA *)&rna_UIList_bl_idname, (PropertyRNA *)&rna_UIList_rna_properties,
	-1, "rna_type", 8912896, "RNA",
	"RNA type definition",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	UIList_rna_type_get, NULL, NULL, NULL,&RNA_Struct
};

StringPropertyRNA rna_UIList_bl_idname = {
	{(PropertyRNA *)&rna_UIList_layout_type, (PropertyRNA *)&rna_UIList_rna_type,
	-1, "bl_idname", 262161, "ID Name",
	"If this is set, the uilist gets a custom ID, otherwise it takes the name of the class used to define the uilist (for example, if the class name is \"OBJECT_UL_vgroups\", and bl_idname is not set by the script, then bl_idname = \"OBJECT_UL_vgroups\")",
	0, "*",
	PROP_STRING, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	UIList_bl_idname_get, UIList_bl_idname_length, UIList_bl_idname_set, NULL, NULL, NULL, 0, ""
};

static EnumPropertyItem rna_UIList_layout_type_items[4] = {
	{0, "DEFAULT", 0, "Default Layout", "Use the default, multi-rows layout"},
	{1, "COMPACT", 0, "Compact Layout", "Use the compact, single-row layout"},
	{2, "GRID", 0, "Grid Layout", "Use the grid-based layout"},
	{0, NULL, 0, NULL, NULL}
};

EnumPropertyRNA rna_UIList_layout_type = {
	{(PropertyRNA *)&rna_UIList_use_filter_show, (PropertyRNA *)&rna_UIList_bl_idname,
	-1, "layout_type", 2, "layout_type",
	"",
	0, "*",
	PROP_ENUM, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	UIList_layout_type_get, NULL, NULL, NULL, NULL, NULL, rna_UIList_layout_type_items, 3, 0
};

BoolPropertyRNA rna_UIList_use_filter_show = {
	{(PropertyRNA *)&rna_UIList_filter_name, (PropertyRNA *)&rna_UIList_layout_type,
	-1, "use_filter_show", 3, "Show Filter",
	"Show filtering options",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	UIList_use_filter_show_get, UIList_use_filter_show_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

StringPropertyRNA rna_UIList_filter_name = {
	{(PropertyRNA *)&rna_UIList_use_filter_invert, (PropertyRNA *)&rna_UIList_use_filter_show,
	-1, "filter_name", 262145, "Filter by Name",
	"Only show items matching this name (use \'*\' as wildcard)",
	0, "*",
	PROP_STRING, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {64, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	UIList_filter_name_get, UIList_filter_name_length, UIList_filter_name_set, NULL, NULL, NULL, 64, ""
};

BoolPropertyRNA rna_UIList_use_filter_invert = {
	{(PropertyRNA *)&rna_UIList_use_filter_sort_alpha, (PropertyRNA *)&rna_UIList_filter_name,
	-1, "use_filter_invert", 3, "Invert",
	"Invert filtering (show hidden items, and vice-versa)",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	UIList_use_filter_invert_get, UIList_use_filter_invert_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_UIList_use_filter_sort_alpha = {
	{(PropertyRNA *)&rna_UIList_use_filter_sort_reverse, (PropertyRNA *)&rna_UIList_use_filter_invert,
	-1, "use_filter_sort_alpha", 3, "Sort by Name",
	"Sort items by their name",
	676, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	UIList_use_filter_sort_alpha_get, UIList_use_filter_sort_alpha_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_UIList_use_filter_sort_reverse = {
	{(PropertyRNA *)&rna_UIList_bitflag_filter_item, (PropertyRNA *)&rna_UIList_use_filter_sort_alpha,
	-1, "use_filter_sort_reverse", 3, "Invert",
	"Invert the order of shown items",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	UIList_use_filter_sort_reverse_get, UIList_use_filter_sort_reverse_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

IntPropertyRNA rna_UIList_bitflag_filter_item = {
	{NULL, (PropertyRNA *)&rna_UIList_use_filter_sort_reverse,
	-1, "bitflag_filter_item", 2, "FILTER_ITEM",
	"The value of the reserved bitflag \'FILTER_ITEM\' (in filter_flags values)",
	0, "*",
	PROP_INT, PROP_UNSIGNED | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	UIList_bitflag_filter_item_get, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL,
	0, 10000, 0, INT_MAX, 1, 0, NULL
};

PointerPropertyRNA rna_UIList_draw_item_context = {
	{(PropertyRNA *)&rna_UIList_draw_item_layout, NULL,
	-1, "context", 8388612, "",
	"",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	NULL, NULL, NULL, NULL,&RNA_Context
};

PointerPropertyRNA rna_UIList_draw_item_layout = {
	{(PropertyRNA *)&rna_UIList_draw_item_data, (PropertyRNA *)&rna_UIList_draw_item_context,
	-1, "layout", 8650756, "",
	"Layout to draw the item",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	NULL, NULL, NULL, NULL,&RNA_UILayout
};

PointerPropertyRNA rna_UIList_draw_item_data = {
	{(PropertyRNA *)&rna_UIList_draw_item_item, (PropertyRNA *)&rna_UIList_draw_item_layout,
	-1, "data", 8390660, "",
	"Data from which to take Collection property",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	NULL, NULL, NULL, NULL,&RNA_AnyType
};

PointerPropertyRNA rna_UIList_draw_item_item = {
	{(PropertyRNA *)&rna_UIList_draw_item_icon, (PropertyRNA *)&rna_UIList_draw_item_data,
	-1, "item", 8390660, "",
	"Item of the collection property",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	NULL, NULL, NULL, NULL,&RNA_AnyType
};

IntPropertyRNA rna_UIList_draw_item_icon = {
	{(PropertyRNA *)&rna_UIList_draw_item_active_data, (PropertyRNA *)&rna_UIList_draw_item_item,
	-1, "icon", 7, "",
	"Icon of the item in the collection",
	0, "*",
	PROP_INT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL,
	0, INT_MAX, 0, INT_MAX, 1, 0, NULL
};

PointerPropertyRNA rna_UIList_draw_item_active_data = {
	{(PropertyRNA *)&rna_UIList_draw_item_active_property, (PropertyRNA *)&rna_UIList_draw_item_icon,
	-1, "active_data", 8652804, "",
	"Data from which to take property for the active element",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	NULL, NULL, NULL, NULL,&RNA_AnyType
};

StringPropertyRNA rna_UIList_draw_item_active_property = {
	{(PropertyRNA *)&rna_UIList_draw_item_index, (PropertyRNA *)&rna_UIList_draw_item_active_data,
	-1, "active_property", 1074003973, "",
	"Identifier of property in active_data, for the active element",
	0, "*",
	PROP_STRING, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	NULL, NULL, NULL, NULL, NULL, NULL, 0, ""
};

IntPropertyRNA rna_UIList_draw_item_index = {
	{(PropertyRNA *)&rna_UIList_draw_item_flt_flag, (PropertyRNA *)&rna_UIList_draw_item_active_property,
	-1, "index", 3, "",
	"Index of the item in the collection",
	0, "*",
	PROP_INT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL,
	0, INT_MAX, 0, INT_MAX, 1, 0, NULL
};

IntPropertyRNA rna_UIList_draw_item_flt_flag = {
	{NULL, (PropertyRNA *)&rna_UIList_draw_item_index,
	-1, "flt_flag", 3, "",
	"The filter-flag result for this item",
	0, "*",
	PROP_INT, PROP_UNSIGNED | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL,
	0, 10000, 0, INT_MAX, 1, 0, NULL
};

FunctionRNA rna_UIList_draw_item_func = {
	{(FunctionRNA *)&rna_UIList_draw_filter_func, NULL,
	NULL,
	{(PropertyRNA *)&rna_UIList_draw_item_context, (PropertyRNA *)&rna_UIList_draw_item_flt_flag}},
	"draw_item", 96, "Draw an item in the list (NOTE: when you define your own draw_item function, you may want to check given \'item\' is of the right type...)",
	NULL,
	NULL
};

PointerPropertyRNA rna_UIList_draw_filter_context = {
	{(PropertyRNA *)&rna_UIList_draw_filter_layout, NULL,
	-1, "context", 8388612, "",
	"",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	NULL, NULL, NULL, NULL,&RNA_Context
};

PointerPropertyRNA rna_UIList_draw_filter_layout = {
	{NULL, (PropertyRNA *)&rna_UIList_draw_filter_context,
	-1, "layout", 8650756, "",
	"Layout to draw the item",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	NULL, NULL, NULL, NULL,&RNA_UILayout
};

FunctionRNA rna_UIList_draw_filter_func = {
	{(FunctionRNA *)&rna_UIList_filter_items_func, (FunctionRNA *)&rna_UIList_draw_item_func,
	NULL,
	{(PropertyRNA *)&rna_UIList_draw_filter_context, (PropertyRNA *)&rna_UIList_draw_filter_layout}},
	"draw_filter", 96, "Draw filtering options",
	NULL,
	NULL
};

PointerPropertyRNA rna_UIList_filter_items_context = {
	{(PropertyRNA *)&rna_UIList_filter_items_data, NULL,
	-1, "context", 8388612, "",
	"",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	NULL, NULL, NULL, NULL,&RNA_Context
};

PointerPropertyRNA rna_UIList_filter_items_data = {
	{(PropertyRNA *)&rna_UIList_filter_items_property, (PropertyRNA *)&rna_UIList_filter_items_context,
	-1, "data", 8390660, "",
	"Data from which to take Collection property",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	NULL, NULL, NULL, NULL,&RNA_AnyType
};

StringPropertyRNA rna_UIList_filter_items_property = {
	{(PropertyRNA *)&rna_UIList_filter_items_filter_flags, (PropertyRNA *)&rna_UIList_filter_items_data,
	-1, "property", 262149, "",
	"Identifier of property in data, for the collection",
	0, "*",
	PROP_STRING, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	NULL, NULL, NULL, NULL, NULL, NULL, 0, ""
};

static int rna_UIList_filter_items_filter_flags_default[1] = {
	0
};

IntPropertyRNA rna_UIList_filter_items_filter_flags = {
	{(PropertyRNA *)&rna_UIList_filter_items_filter_neworder, (PropertyRNA *)&rna_UIList_filter_items_property,
	-1, "filter_flags", 131087, "",
	"An array of filter flags, one for each item in the collection (NOTE: FILTER_ITEM bit is reserved, it defines whether the item is shown or not)",
	0, "*",
	PROP_INT, PROP_UNSIGNED | PROP_UNIT_NONE, NULL, 1, {1, 0, 0}, 1,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL,
	0, 10000, 0, INT_MAX, 1, 0, rna_UIList_filter_items_filter_flags_default
};

static int rna_UIList_filter_items_filter_neworder_default[1] = {
	0
};

IntPropertyRNA rna_UIList_filter_items_filter_neworder = {
	{NULL, (PropertyRNA *)&rna_UIList_filter_items_filter_flags,
	-1, "filter_neworder", 131087, "",
	"An array of indices, one for each item in the collection, mapping the org index to the new one",
	0, "*",
	PROP_INT, PROP_UNSIGNED | PROP_UNIT_NONE, NULL, 1, {1, 0, 0}, 1,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL,
	0, 10000, 0, INT_MAX, 1, 0, rna_UIList_filter_items_filter_neworder_default
};

FunctionRNA rna_UIList_filter_items_func = {
	{NULL, (FunctionRNA *)&rna_UIList_draw_filter_func,
	NULL,
	{(PropertyRNA *)&rna_UIList_filter_items_context, (PropertyRNA *)&rna_UIList_filter_items_filter_neworder}},
	"filter_items", 96, "Filter and/or re-order items of the collection (output filter results in filter_flags, and reorder results in filter_neworder arrays)",
	NULL,
	NULL
};

StructRNA RNA_UIList = {
	{(ContainerRNA *)&RNA_Header, (ContainerRNA *)&RNA_Panel,
	NULL,
	{(PropertyRNA *)&rna_UIList_rna_properties, (PropertyRNA *)&rna_UIList_bitflag_filter_item}},
	"UIList", NULL, NULL, 4, "UIList",
	"UI list containing the elements of a collection",
	"*", 17,
	NULL, (PropertyRNA *)&rna_UIList_rna_properties,
	NULL,
	NULL,
	rna_UIList_refine,
	NULL,
	rna_UIList_register,
	rna_UIList_unregister,
	NULL,
	rna_UIList_idprops,
	{(FunctionRNA *)&rna_UIList_draw_item_func, (FunctionRNA *)&rna_UIList_filter_items_func}
};

/* Header */
CollectionPropertyRNA rna_Header_rna_properties = {
	{(PropertyRNA *)&rna_Header_rna_type, NULL,
	-1, "rna_properties", 128, "Properties",
	"RNA property collection",
	0, "*",
	PROP_COLLECTION, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	Header_rna_properties_begin, Header_rna_properties_next, Header_rna_properties_end, Header_rna_properties_get, NULL, NULL, Header_rna_properties_lookup_string, NULL, &RNA_Property
};

PointerPropertyRNA rna_Header_rna_type = {
	{(PropertyRNA *)&rna_Header_layout, (PropertyRNA *)&rna_Header_rna_properties,
	-1, "rna_type", 8912896, "RNA",
	"RNA type definition",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	Header_rna_type_get, NULL, NULL, NULL,&RNA_Struct
};

PointerPropertyRNA rna_Header_layout = {
	{(PropertyRNA *)&rna_Header_bl_idname, (PropertyRNA *)&rna_Header_rna_type,
	-1, "layout", 8388608, "Layout",
	"Structure of the header in the UI",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	Header_layout_get, NULL, NULL, NULL,&RNA_UILayout
};

StringPropertyRNA rna_Header_bl_idname = {
	{(PropertyRNA *)&rna_Header_bl_space_type, (PropertyRNA *)&rna_Header_layout,
	-1, "bl_idname", 262161, "ID Name",
	"If this is set, the header gets a custom ID, otherwise it takes the name of the class used to define the panel; for example, if the class name is \"OBJECT_HT_hello\", and bl_idname is not set by the script, then bl_idname = \"OBJECT_HT_hello\"",
	0, "*",
	PROP_STRING, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	Header_bl_idname_get, Header_bl_idname_length, Header_bl_idname_set, NULL, NULL, NULL, 0, ""
};

static EnumPropertyItem rna_Header_bl_space_type_items[24] = {
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

EnumPropertyRNA rna_Header_bl_space_type = {
	{NULL, (PropertyRNA *)&rna_Header_bl_idname,
	-1, "bl_space_type", 19, "Space type",
	"The space where the header is going to be used in",
	0, "*",
	PROP_ENUM, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	Header_bl_space_type_get, Header_bl_space_type_set, NULL, NULL, NULL, NULL, rna_Header_bl_space_type_items, 23, 0
};

PointerPropertyRNA rna_Header_draw_context = {
	{NULL, NULL,
	-1, "context", 8388612, "",
	"",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	NULL, NULL, NULL, NULL,&RNA_Context
};

FunctionRNA rna_Header_draw_func = {
	{NULL, NULL,
	NULL,
	{(PropertyRNA *)&rna_Header_draw_context, (PropertyRNA *)&rna_Header_draw_context}},
	"draw", 32, "Draw UI elements into the header UI layout",
	NULL,
	NULL
};

StructRNA RNA_Header = {
	{(ContainerRNA *)&RNA_Menu, (ContainerRNA *)&RNA_UIList,
	NULL,
	{(PropertyRNA *)&rna_Header_rna_properties, (PropertyRNA *)&rna_Header_bl_space_type}},
	"Header", NULL, NULL, 4, "Header",
	"Editor header containing UI elements",
	"*", 17,
	NULL, (PropertyRNA *)&rna_Header_rna_properties,
	NULL,
	NULL,
	rna_Header_refine,
	NULL,
	rna_Header_register,
	rna_Header_unregister,
	NULL,
	NULL,
	{(FunctionRNA *)&rna_Header_draw_func, (FunctionRNA *)&rna_Header_draw_func}
};

/* Menu */
CollectionPropertyRNA rna_Menu_rna_properties = {
	{(PropertyRNA *)&rna_Menu_rna_type, NULL,
	-1, "rna_properties", 128, "Properties",
	"RNA property collection",
	0, "*",
	PROP_COLLECTION, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	Menu_rna_properties_begin, Menu_rna_properties_next, Menu_rna_properties_end, Menu_rna_properties_get, NULL, NULL, Menu_rna_properties_lookup_string, NULL, &RNA_Property
};

PointerPropertyRNA rna_Menu_rna_type = {
	{(PropertyRNA *)&rna_Menu_layout, (PropertyRNA *)&rna_Menu_rna_properties,
	-1, "rna_type", 8912896, "RNA",
	"RNA type definition",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	Menu_rna_type_get, NULL, NULL, NULL,&RNA_Struct
};

PointerPropertyRNA rna_Menu_layout = {
	{(PropertyRNA *)&rna_Menu_bl_idname, (PropertyRNA *)&rna_Menu_rna_type,
	-1, "layout", 8388608, "Layout",
	"Defines the structure of the menu in the UI",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	Menu_layout_get, NULL, NULL, NULL,&RNA_UILayout
};

StringPropertyRNA rna_Menu_bl_idname = {
	{(PropertyRNA *)&rna_Menu_bl_label, (PropertyRNA *)&rna_Menu_layout,
	-1, "bl_idname", 262161, "ID Name",
	"If this is set, the menu gets a custom ID, otherwise it takes the name of the class used to define the menu (for example, if the class name is \"OBJECT_MT_hello\", and bl_idname is not set by the script, then bl_idname = \"OBJECT_MT_hello\")",
	0, "*",
	PROP_STRING, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	Menu_bl_idname_get, Menu_bl_idname_length, Menu_bl_idname_set, NULL, NULL, NULL, 0, ""
};

StringPropertyRNA rna_Menu_bl_label = {
	{(PropertyRNA *)&rna_Menu_bl_translation_context, (PropertyRNA *)&rna_Menu_bl_idname,
	-1, "bl_label", 262161, "Label",
	"The menu label",
	0, "*",
	PROP_STRING, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	Menu_bl_label_get, Menu_bl_label_length, Menu_bl_label_set, NULL, NULL, NULL, 0, ""
};

StringPropertyRNA rna_Menu_bl_translation_context = {
	{(PropertyRNA *)&rna_Menu_bl_description, (PropertyRNA *)&rna_Menu_bl_label,
	-1, "bl_translation_context", 262193, "bl_translation_context",
	"",
	0, "*",
	PROP_STRING, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	Menu_bl_translation_context_get, Menu_bl_translation_context_length, Menu_bl_translation_context_set, NULL, NULL, NULL, 0, "*"
};

StringPropertyRNA rna_Menu_bl_description = {
	{NULL, (PropertyRNA *)&rna_Menu_bl_translation_context,
	-1, "bl_description", 49, "bl_description",
	"",
	0, "*",
	PROP_STRING, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	Menu_bl_description_get, Menu_bl_description_length, Menu_bl_description_set, NULL, NULL, NULL, 240, ""
};

BoolPropertyRNA rna_Menu_poll_visible = {
	{(PropertyRNA *)&rna_Menu_poll_context, NULL,
	-1, "visible", 11, "",
	"",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 1, NULL
};

PointerPropertyRNA rna_Menu_poll_context = {
	{NULL, (PropertyRNA *)&rna_Menu_poll_visible,
	-1, "context", 8388612, "",
	"",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	NULL, NULL, NULL, NULL,&RNA_Context
};

FunctionRNA rna_Menu_poll_func = {
	{(FunctionRNA *)&rna_Menu_draw_func, NULL,
	NULL,
	{(PropertyRNA *)&rna_Menu_poll_visible, (PropertyRNA *)&rna_Menu_poll_context}},
	"poll", 97, "If this method returns a non-null output, then the menu can be drawn",
	NULL,
	(PropertyRNA *)&rna_Menu_poll_visible
};

PointerPropertyRNA rna_Menu_draw_context = {
	{NULL, NULL,
	-1, "context", 8388612, "",
	"",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	NULL, NULL, NULL, NULL,&RNA_Context
};

FunctionRNA rna_Menu_draw_func = {
	{NULL, (FunctionRNA *)&rna_Menu_poll_func,
	NULL,
	{(PropertyRNA *)&rna_Menu_draw_context, (PropertyRNA *)&rna_Menu_draw_context}},
	"draw", 32, "Draw UI elements into the menu UI layout",
	NULL,
	NULL
};

StructRNA RNA_Menu = {
	{(ContainerRNA *)&RNA_ThemeFontStyle, (ContainerRNA *)&RNA_Header,
	NULL,
	{(PropertyRNA *)&rna_Menu_rna_properties, (PropertyRNA *)&rna_Menu_bl_description}},
	"Menu", NULL, NULL, 4, "Menu",
	"Editor menu containing buttons",
	"*", 17,
	NULL, (PropertyRNA *)&rna_Menu_rna_properties,
	NULL,
	NULL,
	rna_Menu_refine,
	NULL,
	rna_Menu_register,
	rna_Menu_unregister,
	NULL,
	NULL,
	{(FunctionRNA *)&rna_Menu_poll_func, (FunctionRNA *)&rna_Menu_draw_func}
};

