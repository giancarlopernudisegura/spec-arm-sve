
/* Automatically generated struct definitions for the Data API.
 * Do not edit manually, changes will be overwritten.           */

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

#include "rna_animviz.c"

#pragma GCC diagnostic ignored "-Wunused-parameter"

/* Autogenerated Functions */


CollectionPropertyRNA rna_AnimViz_rna_properties;
PointerPropertyRNA rna_AnimViz_rna_type;
PointerPropertyRNA rna_AnimViz_onion_skin_frames;
PointerPropertyRNA rna_AnimViz_motion_path;


CollectionPropertyRNA rna_AnimVizOnionSkinning_rna_properties;
PointerPropertyRNA rna_AnimVizOnionSkinning_rna_type;
EnumPropertyRNA rna_AnimVizOnionSkinning_type;
BoolPropertyRNA rna_AnimVizOnionSkinning_show_only_selected;
IntPropertyRNA rna_AnimVizOnionSkinning_frame_step;
IntPropertyRNA rna_AnimVizOnionSkinning_frame_start;
IntPropertyRNA rna_AnimVizOnionSkinning_frame_end;
IntPropertyRNA rna_AnimVizOnionSkinning_frame_before;
IntPropertyRNA rna_AnimVizOnionSkinning_frame_after;


CollectionPropertyRNA rna_AnimVizMotionPaths_rna_properties;
PointerPropertyRNA rna_AnimVizMotionPaths_rna_type;
EnumPropertyRNA rna_AnimVizMotionPaths_type;
EnumPropertyRNA rna_AnimVizMotionPaths_bake_location;
BoolPropertyRNA rna_AnimVizMotionPaths_show_frame_numbers;
BoolPropertyRNA rna_AnimVizMotionPaths_show_keyframe_highlight;
BoolPropertyRNA rna_AnimVizMotionPaths_show_keyframe_numbers;
BoolPropertyRNA rna_AnimVizMotionPaths_show_keyframe_action_all;
IntPropertyRNA rna_AnimVizMotionPaths_frame_step;
IntPropertyRNA rna_AnimVizMotionPaths_frame_start;
IntPropertyRNA rna_AnimVizMotionPaths_frame_end;
IntPropertyRNA rna_AnimVizMotionPaths_frame_before;
IntPropertyRNA rna_AnimVizMotionPaths_frame_after;


CollectionPropertyRNA rna_MotionPath_rna_properties;
PointerPropertyRNA rna_MotionPath_rna_type;
CollectionPropertyRNA rna_MotionPath_points;
IntPropertyRNA rna_MotionPath_frame_start;
IntPropertyRNA rna_MotionPath_frame_end;
IntPropertyRNA rna_MotionPath_length;
BoolPropertyRNA rna_MotionPath_use_bone_head;
BoolPropertyRNA rna_MotionPath_is_modified;


CollectionPropertyRNA rna_MotionPathVert_rna_properties;
PointerPropertyRNA rna_MotionPathVert_rna_type;
FloatPropertyRNA rna_MotionPathVert_co;
BoolPropertyRNA rna_MotionPathVert_select;

static PointerRNA AnimViz_rna_properties_get(CollectionPropertyIterator *iter)
{
	return rna_builtin_properties_get(iter);
}

void AnimViz_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

	memset(iter, 0, sizeof(*iter));
	iter->parent = *ptr;
	iter->prop = (PropertyRNA *)&rna_AnimViz_rna_properties;

	rna_builtin_properties_begin(iter, ptr);

	if (iter->valid)
		iter->ptr = AnimViz_rna_properties_get(iter);
}

void AnimViz_rna_properties_next(CollectionPropertyIterator *iter)
{
	rna_builtin_properties_next(iter);

	if (iter->valid)
		iter->ptr = AnimViz_rna_properties_get(iter);
}

void AnimViz_rna_properties_end(CollectionPropertyIterator *iter)
{
	rna_iterator_listbase_end(iter);
}

int AnimViz_rna_properties_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
	return rna_builtin_properties_lookup_string(ptr, key, r_ptr);
}

PointerRNA AnimViz_rna_type_get(PointerRNA *ptr)
{
	return rna_builtin_type_get(ptr);
}

PointerRNA AnimViz_onion_skin_frames_get(PointerRNA *ptr)
{
	return rna_AnimViz_onion_skinning_get(ptr);
}

PointerRNA AnimViz_motion_path_get(PointerRNA *ptr)
{
	return rna_AnimViz_motion_paths_get(ptr);
}

static PointerRNA AnimVizOnionSkinning_rna_properties_get(CollectionPropertyIterator *iter)
{
	return rna_builtin_properties_get(iter);
}

void AnimVizOnionSkinning_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

	memset(iter, 0, sizeof(*iter));
	iter->parent = *ptr;
	iter->prop = (PropertyRNA *)&rna_AnimVizOnionSkinning_rna_properties;

	rna_builtin_properties_begin(iter, ptr);

	if (iter->valid)
		iter->ptr = AnimVizOnionSkinning_rna_properties_get(iter);
}

void AnimVizOnionSkinning_rna_properties_next(CollectionPropertyIterator *iter)
{
	rna_builtin_properties_next(iter);

	if (iter->valid)
		iter->ptr = AnimVizOnionSkinning_rna_properties_get(iter);
}

void AnimVizOnionSkinning_rna_properties_end(CollectionPropertyIterator *iter)
{
	rna_iterator_listbase_end(iter);
}

int AnimVizOnionSkinning_rna_properties_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
	return rna_builtin_properties_lookup_string(ptr, key, r_ptr);
}

PointerRNA AnimVizOnionSkinning_rna_type_get(PointerRNA *ptr)
{
	return rna_builtin_type_get(ptr);
}

int AnimVizOnionSkinning_type_get(PointerRNA *ptr)
{
	bAnimVizSettings *data = (bAnimVizSettings *)(ptr->data);
	return (int)(data->ghost_type);
}

void AnimVizOnionSkinning_type_set(PointerRNA *ptr, int value)
{
	bAnimVizSettings *data = (bAnimVizSettings *)(ptr->data);
	data->ghost_type = value;
}

int AnimVizOnionSkinning_show_only_selected_get(PointerRNA *ptr)
{
	bAnimVizSettings *data = (bAnimVizSettings *)(ptr->data);
	return (((data->ghost_flag) & 1) != 0);
}

void AnimVizOnionSkinning_show_only_selected_set(PointerRNA *ptr, int value)
{
	bAnimVizSettings *data = (bAnimVizSettings *)(ptr->data);
	if (value) data->ghost_flag |= 1;
	else data->ghost_flag &= ~1;
}

int AnimVizOnionSkinning_frame_step_get(PointerRNA *ptr)
{
	bAnimVizSettings *data = (bAnimVizSettings *)(ptr->data);
	return (int)(data->ghost_step);
}

void AnimVizOnionSkinning_frame_step_set(PointerRNA *ptr, int value)
{
	bAnimVizSettings *data = (bAnimVizSettings *)(ptr->data);
	data->ghost_step = CLAMPIS(value, 1, 20);
}

int AnimVizOnionSkinning_frame_start_get(PointerRNA *ptr)
{
	bAnimVizSettings *data = (bAnimVizSettings *)(ptr->data);
	return (int)(data->ghost_sf);
}

void AnimVizOnionSkinning_frame_start_set(PointerRNA *ptr, int value)
{
	rna_AnimViz_ghost_start_frame_set(ptr, value);
}

int AnimVizOnionSkinning_frame_end_get(PointerRNA *ptr)
{
	bAnimVizSettings *data = (bAnimVizSettings *)(ptr->data);
	return (int)(data->ghost_ef);
}

void AnimVizOnionSkinning_frame_end_set(PointerRNA *ptr, int value)
{
	rna_AnimViz_ghost_end_frame_set(ptr, value);
}

int AnimVizOnionSkinning_frame_before_get(PointerRNA *ptr)
{
	bAnimVizSettings *data = (bAnimVizSettings *)(ptr->data);
	return (int)(data->ghost_bc);
}

void AnimVizOnionSkinning_frame_before_set(PointerRNA *ptr, int value)
{
	bAnimVizSettings *data = (bAnimVizSettings *)(ptr->data);
	data->ghost_bc = CLAMPIS(value, 0, 30);
}

int AnimVizOnionSkinning_frame_after_get(PointerRNA *ptr)
{
	bAnimVizSettings *data = (bAnimVizSettings *)(ptr->data);
	return (int)(data->ghost_ac);
}

void AnimVizOnionSkinning_frame_after_set(PointerRNA *ptr, int value)
{
	bAnimVizSettings *data = (bAnimVizSettings *)(ptr->data);
	data->ghost_ac = CLAMPIS(value, 0, 30);
}

static PointerRNA AnimVizMotionPaths_rna_properties_get(CollectionPropertyIterator *iter)
{
	return rna_builtin_properties_get(iter);
}

void AnimVizMotionPaths_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

	memset(iter, 0, sizeof(*iter));
	iter->parent = *ptr;
	iter->prop = (PropertyRNA *)&rna_AnimVizMotionPaths_rna_properties;

	rna_builtin_properties_begin(iter, ptr);

	if (iter->valid)
		iter->ptr = AnimVizMotionPaths_rna_properties_get(iter);
}

void AnimVizMotionPaths_rna_properties_next(CollectionPropertyIterator *iter)
{
	rna_builtin_properties_next(iter);

	if (iter->valid)
		iter->ptr = AnimVizMotionPaths_rna_properties_get(iter);
}

void AnimVizMotionPaths_rna_properties_end(CollectionPropertyIterator *iter)
{
	rna_iterator_listbase_end(iter);
}

int AnimVizMotionPaths_rna_properties_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
	return rna_builtin_properties_lookup_string(ptr, key, r_ptr);
}

PointerRNA AnimVizMotionPaths_rna_type_get(PointerRNA *ptr)
{
	return rna_builtin_type_get(ptr);
}

int AnimVizMotionPaths_type_get(PointerRNA *ptr)
{
	bAnimVizSettings *data = (bAnimVizSettings *)(ptr->data);
	return (int)(data->path_type);
}

void AnimVizMotionPaths_type_set(PointerRNA *ptr, int value)
{
	bAnimVizSettings *data = (bAnimVizSettings *)(ptr->data);
	data->path_type = value;
}

int AnimVizMotionPaths_bake_location_get(PointerRNA *ptr)
{
	bAnimVizSettings *data = (bAnimVizSettings *)(ptr->data);
	return ((data->path_bakeflag) & 2);
}

void AnimVizMotionPaths_bake_location_set(PointerRNA *ptr, int value)
{
	bAnimVizSettings *data = (bAnimVizSettings *)(ptr->data);
	data->path_bakeflag &= ~2;
	data->path_bakeflag |= value;
}

int AnimVizMotionPaths_show_frame_numbers_get(PointerRNA *ptr)
{
	bAnimVizSettings *data = (bAnimVizSettings *)(ptr->data);
	return (((data->path_viewflag) & 1) != 0);
}

void AnimVizMotionPaths_show_frame_numbers_set(PointerRNA *ptr, int value)
{
	bAnimVizSettings *data = (bAnimVizSettings *)(ptr->data);
	if (value) data->path_viewflag |= 1;
	else data->path_viewflag &= ~1;
}

int AnimVizMotionPaths_show_keyframe_highlight_get(PointerRNA *ptr)
{
	bAnimVizSettings *data = (bAnimVizSettings *)(ptr->data);
	return (((data->path_viewflag) & 2) != 0);
}

void AnimVizMotionPaths_show_keyframe_highlight_set(PointerRNA *ptr, int value)
{
	bAnimVizSettings *data = (bAnimVizSettings *)(ptr->data);
	if (value) data->path_viewflag |= 2;
	else data->path_viewflag &= ~2;
}

int AnimVizMotionPaths_show_keyframe_numbers_get(PointerRNA *ptr)
{
	bAnimVizSettings *data = (bAnimVizSettings *)(ptr->data);
	return (((data->path_viewflag) & 4) != 0);
}

void AnimVizMotionPaths_show_keyframe_numbers_set(PointerRNA *ptr, int value)
{
	bAnimVizSettings *data = (bAnimVizSettings *)(ptr->data);
	if (value) data->path_viewflag |= 4;
	else data->path_viewflag &= ~4;
}

int AnimVizMotionPaths_show_keyframe_action_all_get(PointerRNA *ptr)
{
	bAnimVizSettings *data = (bAnimVizSettings *)(ptr->data);
	return (((data->path_viewflag) & 8) != 0);
}

void AnimVizMotionPaths_show_keyframe_action_all_set(PointerRNA *ptr, int value)
{
	bAnimVizSettings *data = (bAnimVizSettings *)(ptr->data);
	if (value) data->path_viewflag |= 8;
	else data->path_viewflag &= ~8;
}

int AnimVizMotionPaths_frame_step_get(PointerRNA *ptr)
{
	bAnimVizSettings *data = (bAnimVizSettings *)(ptr->data);
	return (int)(data->path_step);
}

void AnimVizMotionPaths_frame_step_set(PointerRNA *ptr, int value)
{
	bAnimVizSettings *data = (bAnimVizSettings *)(ptr->data);
	data->path_step = CLAMPIS(value, 1, 100);
}

int AnimVizMotionPaths_frame_start_get(PointerRNA *ptr)
{
	bAnimVizSettings *data = (bAnimVizSettings *)(ptr->data);
	return (int)(data->path_sf);
}

void AnimVizMotionPaths_frame_start_set(PointerRNA *ptr, int value)
{
	rna_AnimViz_path_start_frame_set(ptr, value);
}

int AnimVizMotionPaths_frame_end_get(PointerRNA *ptr)
{
	bAnimVizSettings *data = (bAnimVizSettings *)(ptr->data);
	return (int)(data->path_ef);
}

void AnimVizMotionPaths_frame_end_set(PointerRNA *ptr, int value)
{
	rna_AnimViz_path_end_frame_set(ptr, value);
}

int AnimVizMotionPaths_frame_before_get(PointerRNA *ptr)
{
	bAnimVizSettings *data = (bAnimVizSettings *)(ptr->data);
	return (int)(data->path_bc);
}

void AnimVizMotionPaths_frame_before_set(PointerRNA *ptr, int value)
{
	bAnimVizSettings *data = (bAnimVizSettings *)(ptr->data);
	data->path_bc = CLAMPIS(value, 1, 150000);
}

int AnimVizMotionPaths_frame_after_get(PointerRNA *ptr)
{
	bAnimVizSettings *data = (bAnimVizSettings *)(ptr->data);
	return (int)(data->path_ac);
}

void AnimVizMotionPaths_frame_after_set(PointerRNA *ptr, int value)
{
	bAnimVizSettings *data = (bAnimVizSettings *)(ptr->data);
	data->path_ac = CLAMPIS(value, 1, 150000);
}

static PointerRNA MotionPath_rna_properties_get(CollectionPropertyIterator *iter)
{
	return rna_builtin_properties_get(iter);
}

void MotionPath_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

	memset(iter, 0, sizeof(*iter));
	iter->parent = *ptr;
	iter->prop = (PropertyRNA *)&rna_MotionPath_rna_properties;

	rna_builtin_properties_begin(iter, ptr);

	if (iter->valid)
		iter->ptr = MotionPath_rna_properties_get(iter);
}

void MotionPath_rna_properties_next(CollectionPropertyIterator *iter)
{
	rna_builtin_properties_next(iter);

	if (iter->valid)
		iter->ptr = MotionPath_rna_properties_get(iter);
}

void MotionPath_rna_properties_end(CollectionPropertyIterator *iter)
{
	rna_iterator_listbase_end(iter);
}

int MotionPath_rna_properties_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
	return rna_builtin_properties_lookup_string(ptr, key, r_ptr);
}

PointerRNA MotionPath_rna_type_get(PointerRNA *ptr)
{
	return rna_builtin_type_get(ptr);
}

int MotionPath_points_length(PointerRNA *ptr)
{
	bMotionPath *data = (bMotionPath *)(ptr->data);
	return (data->points == NULL) ? 0 : data->length;
}

static PointerRNA MotionPath_points_get(CollectionPropertyIterator *iter)
{
	return rna_pointer_inherit_refine(&iter->parent, &RNA_MotionPathVert, rna_iterator_array_get(iter));
}

void MotionPath_points_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{
	bMotionPath *data = (bMotionPath *)(ptr->data);

	memset(iter, 0, sizeof(*iter));
	iter->parent = *ptr;
	iter->prop = (PropertyRNA *)&rna_MotionPath_points;

	rna_iterator_array_begin(iter, data->points, sizeof(data->points[0]), data->length, 0, NULL);

	if (iter->valid)
		iter->ptr = MotionPath_points_get(iter);
}

void MotionPath_points_next(CollectionPropertyIterator *iter)
{
	rna_iterator_array_next(iter);

	if (iter->valid)
		iter->ptr = MotionPath_points_get(iter);
}

void MotionPath_points_end(CollectionPropertyIterator *iter)
{
	rna_iterator_array_end(iter);
}

int MotionPath_points_lookup_int(PointerRNA *ptr, int index, PointerRNA *r_ptr)
{
	int found = 0;
	CollectionPropertyIterator iter;

	MotionPath_points_begin(&iter, ptr);

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
		if (found) *r_ptr = MotionPath_points_get(&iter);
	}

	MotionPath_points_end(&iter);

	return found;
}

int MotionPath_frame_start_get(PointerRNA *ptr)
{
	bMotionPath *data = (bMotionPath *)(ptr->data);
	return (int)(data->start_frame);
}

int MotionPath_frame_end_get(PointerRNA *ptr)
{
	bMotionPath *data = (bMotionPath *)(ptr->data);
	return (int)(data->end_frame);
}

int MotionPath_length_get(PointerRNA *ptr)
{
	bMotionPath *data = (bMotionPath *)(ptr->data);
	return (int)(data->length);
}

int MotionPath_use_bone_head_get(PointerRNA *ptr)
{
	bMotionPath *data = (bMotionPath *)(ptr->data);
	return (((data->flag) & 1) != 0);
}

int MotionPath_is_modified_get(PointerRNA *ptr)
{
	bMotionPath *data = (bMotionPath *)(ptr->data);
	return (((data->flag) & 2) != 0);
}

void MotionPath_is_modified_set(PointerRNA *ptr, int value)
{
	bMotionPath *data = (bMotionPath *)(ptr->data);
	if (value) data->flag |= 2;
	else data->flag &= ~2;
}

static PointerRNA MotionPathVert_rna_properties_get(CollectionPropertyIterator *iter)
{
	return rna_builtin_properties_get(iter);
}

void MotionPathVert_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

	memset(iter, 0, sizeof(*iter));
	iter->parent = *ptr;
	iter->prop = (PropertyRNA *)&rna_MotionPathVert_rna_properties;

	rna_builtin_properties_begin(iter, ptr);

	if (iter->valid)
		iter->ptr = MotionPathVert_rna_properties_get(iter);
}

void MotionPathVert_rna_properties_next(CollectionPropertyIterator *iter)
{
	rna_builtin_properties_next(iter);

	if (iter->valid)
		iter->ptr = MotionPathVert_rna_properties_get(iter);
}

void MotionPathVert_rna_properties_end(CollectionPropertyIterator *iter)
{
	rna_iterator_listbase_end(iter);
}

int MotionPathVert_rna_properties_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
	return rna_builtin_properties_lookup_string(ptr, key, r_ptr);
}

PointerRNA MotionPathVert_rna_type_get(PointerRNA *ptr)
{
	return rna_builtin_type_get(ptr);
}

void MotionPathVert_co_get(PointerRNA *ptr, float values[3])
{
	bMotionPathVert *data = (bMotionPathVert *)(ptr->data);
	unsigned int i;

	for (i = 0; i < 3; i++) {
		values[i] = (float)(((float *)data->co)[i]);
	}
}

void MotionPathVert_co_set(PointerRNA *ptr, const float values[3])
{
	bMotionPathVert *data = (bMotionPathVert *)(ptr->data);
	unsigned int i;

	for (i = 0; i < 3; i++) {
		((float *)data->co)[i] = values[i];
	}
}

int MotionPathVert_select_get(PointerRNA *ptr)
{
	bMotionPathVert *data = (bMotionPathVert *)(ptr->data);
	return (((data->flag) & 1) != 0);
}

void MotionPathVert_select_set(PointerRNA *ptr, int value)
{
	bMotionPathVert *data = (bMotionPathVert *)(ptr->data);
	if (value) data->flag |= 1;
	else data->flag &= ~1;
}






/* Animation Visualization */
CollectionPropertyRNA rna_AnimViz_rna_properties = {
	{(PropertyRNA *)&rna_AnimViz_rna_type, NULL,
	-1, "rna_properties", 128, "Properties",
	"RNA property collection",
	0, "*",
	PROP_COLLECTION, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	AnimViz_rna_properties_begin, AnimViz_rna_properties_next, AnimViz_rna_properties_end, AnimViz_rna_properties_get, NULL, NULL, AnimViz_rna_properties_lookup_string, NULL, &RNA_Property
};

PointerPropertyRNA rna_AnimViz_rna_type = {
	{(PropertyRNA *)&rna_AnimViz_onion_skin_frames, (PropertyRNA *)&rna_AnimViz_rna_properties,
	-1, "rna_type", 8912896, "RNA",
	"RNA type definition",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	AnimViz_rna_type_get, NULL, NULL, NULL,&RNA_Struct
};

PointerPropertyRNA rna_AnimViz_onion_skin_frames = {
	{(PropertyRNA *)&rna_AnimViz_motion_path, (PropertyRNA *)&rna_AnimViz_rna_type,
	-1, "onion_skin_frames", 8650752, "Onion Skinning",
	"Onion Skinning (ghosting) settings for visualization",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	AnimViz_onion_skin_frames_get, NULL, NULL, NULL,&RNA_AnimVizOnionSkinning
};

PointerPropertyRNA rna_AnimViz_motion_path = {
	{NULL, (PropertyRNA *)&rna_AnimViz_onion_skin_frames,
	-1, "motion_path", 8650752, "Motion Paths",
	"Motion Path settings for visualization",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	AnimViz_motion_path_get, NULL, NULL, NULL,&RNA_AnimVizMotionPaths
};

StructRNA RNA_AnimViz = {
	{(ContainerRNA *)&RNA_AnimVizOnionSkinning, (ContainerRNA *)&RNA_KeyingSetInfo,
	NULL,
	{(PropertyRNA *)&rna_AnimViz_rna_properties, (PropertyRNA *)&rna_AnimViz_motion_path}},
	"AnimViz", NULL, NULL, 4, "Animation Visualization",
	"Settings for the visualization of motion",
	"*", 17,
	NULL, (PropertyRNA *)&rna_AnimViz_rna_properties,
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

/* Onion Skinning Settings */
CollectionPropertyRNA rna_AnimVizOnionSkinning_rna_properties = {
	{(PropertyRNA *)&rna_AnimVizOnionSkinning_rna_type, NULL,
	-1, "rna_properties", 128, "Properties",
	"RNA property collection",
	0, "*",
	PROP_COLLECTION, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	AnimVizOnionSkinning_rna_properties_begin, AnimVizOnionSkinning_rna_properties_next, AnimVizOnionSkinning_rna_properties_end, AnimVizOnionSkinning_rna_properties_get, NULL, NULL, AnimVizOnionSkinning_rna_properties_lookup_string, NULL, &RNA_Property
};

PointerPropertyRNA rna_AnimVizOnionSkinning_rna_type = {
	{(PropertyRNA *)&rna_AnimVizOnionSkinning_type, (PropertyRNA *)&rna_AnimVizOnionSkinning_rna_properties,
	-1, "rna_type", 8912896, "RNA",
	"RNA type definition",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	AnimVizOnionSkinning_rna_type_get, NULL, NULL, NULL,&RNA_Struct
};

static EnumPropertyItem rna_AnimVizOnionSkinning_type_items[5] = {
	{0, "NONE", 0, "No Ghosts", "Do not show any ghosts"},
	{1, "CURRENT_FRAME", 0, "Around Current Frame", "Show ghosts from around the current frame"},
	{2, "RANGE", 0, "In Range", "Show ghosts for the specified frame range"},
	{3, "KEYS", 0, "On Keyframes", "Show ghosts on keyframes"},
	{0, NULL, 0, NULL, NULL}
};

EnumPropertyRNA rna_AnimVizOnionSkinning_type = {
	{(PropertyRNA *)&rna_AnimVizOnionSkinning_show_only_selected, (PropertyRNA *)&rna_AnimVizOnionSkinning_rna_type,
	-1, "type", 3, "Type",
	"Method used for determining what ghosts get drawn",
	0, "*",
	PROP_ENUM, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 252248064, NULL, NULL,
	0, -1, NULL},
	AnimVizOnionSkinning_type_get, AnimVizOnionSkinning_type_set, NULL, NULL, NULL, NULL, rna_AnimVizOnionSkinning_type_items, 4, 0
};

BoolPropertyRNA rna_AnimVizOnionSkinning_show_only_selected = {
	{(PropertyRNA *)&rna_AnimVizOnionSkinning_frame_step, (PropertyRNA *)&rna_AnimVizOnionSkinning_type,
	-1, "show_only_selected", 3, "On Selected Bones Only",
	"For Pose-Mode drawing, only draw ghosts for selected bones",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 252248064, NULL, NULL,
	0, -1, NULL},
	AnimVizOnionSkinning_show_only_selected_get, AnimVizOnionSkinning_show_only_selected_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

IntPropertyRNA rna_AnimVizOnionSkinning_frame_step = {
	{(PropertyRNA *)&rna_AnimVizOnionSkinning_frame_start, (PropertyRNA *)&rna_AnimVizOnionSkinning_show_only_selected,
	-1, "frame_step", 8195, "Frame Step",
	"Number of frames between ghosts shown (not for \'On Keyframes\' Onion-skinning method)",
	0, "*",
	PROP_INT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 252248064, NULL, NULL,
	offsetof(bAnimVizSettings, ghost_step), 1, NULL},
	AnimVizOnionSkinning_frame_step_get, AnimVizOnionSkinning_frame_step_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL,
	1, 20, 1, 20, 1, 0, NULL
};

IntPropertyRNA rna_AnimVizOnionSkinning_frame_start = {
	{(PropertyRNA *)&rna_AnimVizOnionSkinning_frame_end, (PropertyRNA *)&rna_AnimVizOnionSkinning_frame_step,
	-1, "frame_start", 3, "Start Frame",
	"Starting frame of range of Ghosts to display (not for \'Around Current Frame\' Onion-skinning method)",
	0, "*",
	PROP_INT, PROP_TIME | PROP_UNIT_TIME, NULL, 0, {0, 0, 0}, 0,
	NULL, 252248064, NULL, NULL,
	0, -1, NULL},
	AnimVizOnionSkinning_frame_start_get, AnimVizOnionSkinning_frame_start_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL,
	-10000, 10000, INT_MIN, INT_MAX, 1, 0, NULL
};

IntPropertyRNA rna_AnimVizOnionSkinning_frame_end = {
	{(PropertyRNA *)&rna_AnimVizOnionSkinning_frame_before, (PropertyRNA *)&rna_AnimVizOnionSkinning_frame_start,
	-1, "frame_end", 3, "End Frame",
	"End frame of range of Ghosts to display (not for \'Around Current Frame\' Onion-skinning method)",
	0, "*",
	PROP_INT, PROP_TIME | PROP_UNIT_TIME, NULL, 0, {0, 0, 0}, 0,
	NULL, 252248064, NULL, NULL,
	0, -1, NULL},
	AnimVizOnionSkinning_frame_end_get, AnimVizOnionSkinning_frame_end_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL,
	-10000, 10000, INT_MIN, INT_MAX, 1, 0, NULL
};

IntPropertyRNA rna_AnimVizOnionSkinning_frame_before = {
	{(PropertyRNA *)&rna_AnimVizOnionSkinning_frame_after, (PropertyRNA *)&rna_AnimVizOnionSkinning_frame_end,
	-1, "frame_before", 8195, "Before Current",
	"Number of frames to show before the current frame (only for \'Around Current Frame\' Onion-skinning method)",
	0, "*",
	PROP_INT, PROP_TIME | PROP_UNIT_TIME, NULL, 0, {0, 0, 0}, 0,
	NULL, 252248064, NULL, NULL,
	offsetof(bAnimVizSettings, ghost_bc), 0, NULL},
	AnimVizOnionSkinning_frame_before_get, AnimVizOnionSkinning_frame_before_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL,
	0, 30, 0, 30, 1, 0, NULL
};

IntPropertyRNA rna_AnimVizOnionSkinning_frame_after = {
	{NULL, (PropertyRNA *)&rna_AnimVizOnionSkinning_frame_before,
	-1, "frame_after", 8195, "After Current",
	"Number of frames to show after the current frame (only for \'Around Current Frame\' Onion-skinning method)",
	0, "*",
	PROP_INT, PROP_TIME | PROP_UNIT_TIME, NULL, 0, {0, 0, 0}, 0,
	NULL, 252248064, NULL, NULL,
	offsetof(bAnimVizSettings, ghost_ac), 0, NULL},
	AnimVizOnionSkinning_frame_after_get, AnimVizOnionSkinning_frame_after_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL,
	0, 30, 0, 30, 1, 0, NULL
};

StructRNA RNA_AnimVizOnionSkinning = {
	{(ContainerRNA *)&RNA_AnimVizMotionPaths, (ContainerRNA *)&RNA_AnimViz,
	NULL,
	{(PropertyRNA *)&rna_AnimVizOnionSkinning_rna_properties, (PropertyRNA *)&rna_AnimVizOnionSkinning_frame_after}},
	"AnimVizOnionSkinning", NULL, NULL, 4, "Onion Skinning Settings",
	"Onion Skinning settings for animation visualization",
	"*", 17,
	NULL, (PropertyRNA *)&rna_AnimVizOnionSkinning_rna_properties,
	NULL,
	&RNA_AnimViz,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	{NULL, NULL}
};

/* Motion Path Settings */
CollectionPropertyRNA rna_AnimVizMotionPaths_rna_properties = {
	{(PropertyRNA *)&rna_AnimVizMotionPaths_rna_type, NULL,
	-1, "rna_properties", 128, "Properties",
	"RNA property collection",
	0, "*",
	PROP_COLLECTION, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	AnimVizMotionPaths_rna_properties_begin, AnimVizMotionPaths_rna_properties_next, AnimVizMotionPaths_rna_properties_end, AnimVizMotionPaths_rna_properties_get, NULL, NULL, AnimVizMotionPaths_rna_properties_lookup_string, NULL, &RNA_Property
};

PointerPropertyRNA rna_AnimVizMotionPaths_rna_type = {
	{(PropertyRNA *)&rna_AnimVizMotionPaths_type, (PropertyRNA *)&rna_AnimVizMotionPaths_rna_properties,
	-1, "rna_type", 8912896, "RNA",
	"RNA type definition",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	AnimVizMotionPaths_rna_type_get, NULL, NULL, NULL,&RNA_Struct
};

static EnumPropertyItem rna_AnimVizMotionPaths_type_items[3] = {
	{1, "CURRENT_FRAME", 0, "Around Frame", "Display Paths of poses within a fixed number of frames around the current frame"},
	{0, "RANGE", 0, "In Range", "Display Paths of poses within specified range"},
	{0, NULL, 0, NULL, NULL}
};

EnumPropertyRNA rna_AnimVizMotionPaths_type = {
	{(PropertyRNA *)&rna_AnimVizMotionPaths_bake_location, (PropertyRNA *)&rna_AnimVizMotionPaths_rna_type,
	-1, "type", 3, "Paths Type",
	"Type of range to show for Motion Paths",
	0, "*",
	PROP_ENUM, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 252248064, NULL, NULL,
	0, -1, NULL},
	AnimVizMotionPaths_type_get, AnimVizMotionPaths_type_set, NULL, NULL, NULL, NULL, rna_AnimVizMotionPaths_type_items, 2, 0
};

static EnumPropertyItem rna_AnimVizMotionPaths_bake_location_items[3] = {
	{2, "HEADS", 0, "Heads", "Calculate bone paths from heads"},
	{0, "TAILS", 0, "Tails", "Calculate bone paths from tails"},
	{0, NULL, 0, NULL, NULL}
};

EnumPropertyRNA rna_AnimVizMotionPaths_bake_location = {
	{(PropertyRNA *)&rna_AnimVizMotionPaths_show_frame_numbers, (PropertyRNA *)&rna_AnimVizMotionPaths_type,
	-1, "bake_location", 3, "Bake Location",
	"When calculating Bone Paths, use Head or Tips",
	0, "*",
	PROP_ENUM, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 252248064, NULL, NULL,
	0, -1, NULL},
	AnimVizMotionPaths_bake_location_get, AnimVizMotionPaths_bake_location_set, NULL, NULL, NULL, NULL, rna_AnimVizMotionPaths_bake_location_items, 2, 0
};

BoolPropertyRNA rna_AnimVizMotionPaths_show_frame_numbers = {
	{(PropertyRNA *)&rna_AnimVizMotionPaths_show_keyframe_highlight, (PropertyRNA *)&rna_AnimVizMotionPaths_bake_location,
	-1, "show_frame_numbers", 3, "Show Frame Numbers",
	"Show frame numbers on Motion Paths",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 252248064, NULL, NULL,
	0, -1, NULL},
	AnimVizMotionPaths_show_frame_numbers_get, AnimVizMotionPaths_show_frame_numbers_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_AnimVizMotionPaths_show_keyframe_highlight = {
	{(PropertyRNA *)&rna_AnimVizMotionPaths_show_keyframe_numbers, (PropertyRNA *)&rna_AnimVizMotionPaths_show_frame_numbers,
	-1, "show_keyframe_highlight", 3, "Highlight Keyframes",
	"Emphasize position of keyframes on Motion Paths",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 252248064, NULL, NULL,
	0, -1, NULL},
	AnimVizMotionPaths_show_keyframe_highlight_get, AnimVizMotionPaths_show_keyframe_highlight_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_AnimVizMotionPaths_show_keyframe_numbers = {
	{(PropertyRNA *)&rna_AnimVizMotionPaths_show_keyframe_action_all, (PropertyRNA *)&rna_AnimVizMotionPaths_show_keyframe_highlight,
	-1, "show_keyframe_numbers", 3, "Show Keyframe Numbers",
	"Show frame numbers of Keyframes on Motion Paths",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 252248064, NULL, NULL,
	0, -1, NULL},
	AnimVizMotionPaths_show_keyframe_numbers_get, AnimVizMotionPaths_show_keyframe_numbers_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_AnimVizMotionPaths_show_keyframe_action_all = {
	{(PropertyRNA *)&rna_AnimVizMotionPaths_frame_step, (PropertyRNA *)&rna_AnimVizMotionPaths_show_keyframe_numbers,
	-1, "show_keyframe_action_all", 3, "All Action Keyframes",
	"For bone motion paths, search whole Action for keyframes instead of in group with matching name only (is slower)",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 252248064, NULL, NULL,
	0, -1, NULL},
	AnimVizMotionPaths_show_keyframe_action_all_get, AnimVizMotionPaths_show_keyframe_action_all_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

IntPropertyRNA rna_AnimVizMotionPaths_frame_step = {
	{(PropertyRNA *)&rna_AnimVizMotionPaths_frame_start, (PropertyRNA *)&rna_AnimVizMotionPaths_show_keyframe_action_all,
	-1, "frame_step", 8195, "Frame Step",
	"Number of frames between paths shown (not for \'On Keyframes\' Onion-skinning method)",
	0, "*",
	PROP_INT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 252248064, NULL, NULL,
	offsetof(bAnimVizSettings, path_step), 1, NULL},
	AnimVizMotionPaths_frame_step_get, AnimVizMotionPaths_frame_step_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL,
	1, 100, 1, 100, 1, 0, NULL
};

IntPropertyRNA rna_AnimVizMotionPaths_frame_start = {
	{(PropertyRNA *)&rna_AnimVizMotionPaths_frame_end, (PropertyRNA *)&rna_AnimVizMotionPaths_frame_step,
	-1, "frame_start", 3, "Start Frame",
	"Starting frame of range of paths to display/calculate (not for \'Around Current Frame\' Onion-skinning method)",
	0, "*",
	PROP_INT, PROP_TIME | PROP_UNIT_TIME, NULL, 0, {0, 0, 0}, 0,
	NULL, 252248064, NULL, NULL,
	0, -1, NULL},
	AnimVizMotionPaths_frame_start_get, AnimVizMotionPaths_frame_start_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL,
	-10000, 10000, INT_MIN, INT_MAX, 1, 0, NULL
};

IntPropertyRNA rna_AnimVizMotionPaths_frame_end = {
	{(PropertyRNA *)&rna_AnimVizMotionPaths_frame_before, (PropertyRNA *)&rna_AnimVizMotionPaths_frame_start,
	-1, "frame_end", 3, "End Frame",
	"End frame of range of paths to display/calculate (not for \'Around Current Frame\' Onion-skinning method)",
	0, "*",
	PROP_INT, PROP_TIME | PROP_UNIT_TIME, NULL, 0, {0, 0, 0}, 0,
	NULL, 252248064, NULL, NULL,
	0, -1, NULL},
	AnimVizMotionPaths_frame_end_get, AnimVizMotionPaths_frame_end_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL,
	-10000, 10000, INT_MIN, INT_MAX, 1, 0, NULL
};

IntPropertyRNA rna_AnimVizMotionPaths_frame_before = {
	{(PropertyRNA *)&rna_AnimVizMotionPaths_frame_after, (PropertyRNA *)&rna_AnimVizMotionPaths_frame_end,
	-1, "frame_before", 8195, "Before Current",
	"Number of frames to show before the current frame (only for \'Around Current Frame\' Onion-skinning method)",
	0, "*",
	PROP_INT, PROP_TIME | PROP_UNIT_TIME, NULL, 0, {0, 0, 0}, 0,
	NULL, 252248064, NULL, NULL,
	offsetof(bAnimVizSettings, path_bc), 0, NULL},
	AnimVizMotionPaths_frame_before_get, AnimVizMotionPaths_frame_before_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL,
	1, 150000, 1, 150000, 1, 0, NULL
};

IntPropertyRNA rna_AnimVizMotionPaths_frame_after = {
	{NULL, (PropertyRNA *)&rna_AnimVizMotionPaths_frame_before,
	-1, "frame_after", 8195, "After Current",
	"Number of frames to show after the current frame (only for \'Around Current Frame\' Onion-skinning method)",
	0, "*",
	PROP_INT, PROP_TIME | PROP_UNIT_TIME, NULL, 0, {0, 0, 0}, 0,
	NULL, 252248064, NULL, NULL,
	offsetof(bAnimVizSettings, path_ac), 0, NULL},
	AnimVizMotionPaths_frame_after_get, AnimVizMotionPaths_frame_after_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL,
	1, 150000, 1, 150000, 1, 0, NULL
};

StructRNA RNA_AnimVizMotionPaths = {
	{(ContainerRNA *)&RNA_MotionPath, (ContainerRNA *)&RNA_AnimVizOnionSkinning,
	NULL,
	{(PropertyRNA *)&rna_AnimVizMotionPaths_rna_properties, (PropertyRNA *)&rna_AnimVizMotionPaths_frame_after}},
	"AnimVizMotionPaths", NULL, NULL, 4, "Motion Path Settings",
	"Motion Path settings for animation visualization",
	"*", 17,
	NULL, (PropertyRNA *)&rna_AnimVizMotionPaths_rna_properties,
	NULL,
	&RNA_AnimViz,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	{NULL, NULL}
};

/* Motion Path */
CollectionPropertyRNA rna_MotionPath_rna_properties = {
	{(PropertyRNA *)&rna_MotionPath_rna_type, NULL,
	-1, "rna_properties", 128, "Properties",
	"RNA property collection",
	0, "*",
	PROP_COLLECTION, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	MotionPath_rna_properties_begin, MotionPath_rna_properties_next, MotionPath_rna_properties_end, MotionPath_rna_properties_get, NULL, NULL, MotionPath_rna_properties_lookup_string, NULL, &RNA_Property
};

PointerPropertyRNA rna_MotionPath_rna_type = {
	{(PropertyRNA *)&rna_MotionPath_points, (PropertyRNA *)&rna_MotionPath_rna_properties,
	-1, "rna_type", 8912896, "RNA",
	"RNA type definition",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	MotionPath_rna_type_get, NULL, NULL, NULL,&RNA_Struct
};

CollectionPropertyRNA rna_MotionPath_points = {
	{(PropertyRNA *)&rna_MotionPath_frame_start, (PropertyRNA *)&rna_MotionPath_rna_type,
	-1, "points", 16384, "Motion Path Points",
	"Cached positions per frame",
	0, "*",
	PROP_COLLECTION, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	MotionPath_points_begin, MotionPath_points_next, MotionPath_points_end, MotionPath_points_get, MotionPath_points_length, MotionPath_points_lookup_int, NULL, NULL, &RNA_MotionPathVert
};

IntPropertyRNA rna_MotionPath_frame_start = {
	{(PropertyRNA *)&rna_MotionPath_frame_end, (PropertyRNA *)&rna_MotionPath_points,
	-1, "frame_start", 8194, "Start Frame",
	"Starting frame of the stored range",
	0, "*",
	PROP_INT, PROP_TIME | PROP_UNIT_TIME, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	offsetof(bMotionPath, start_frame), 0, NULL},
	MotionPath_frame_start_get, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL,
	-10000, 10000, INT_MIN, INT_MAX, 1, 0, NULL
};

IntPropertyRNA rna_MotionPath_frame_end = {
	{(PropertyRNA *)&rna_MotionPath_length, (PropertyRNA *)&rna_MotionPath_frame_start,
	-1, "frame_end", 8194, "End Frame",
	"End frame of the stored range",
	0, "*",
	PROP_INT, PROP_TIME | PROP_UNIT_TIME, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	offsetof(bMotionPath, end_frame), 0, NULL},
	MotionPath_frame_end_get, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL,
	-10000, 10000, INT_MIN, INT_MAX, 1, 0, NULL
};

IntPropertyRNA rna_MotionPath_length = {
	{(PropertyRNA *)&rna_MotionPath_use_bone_head, (PropertyRNA *)&rna_MotionPath_frame_end,
	-1, "length", 8194, "Length",
	"Number of frames cached",
	0, "*",
	PROP_INT, PROP_TIME | PROP_UNIT_TIME, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	offsetof(bMotionPath, length), 0, NULL},
	MotionPath_length_get, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL,
	-10000, 10000, INT_MIN, INT_MAX, 1, 0, NULL
};

BoolPropertyRNA rna_MotionPath_use_bone_head = {
	{(PropertyRNA *)&rna_MotionPath_is_modified, (PropertyRNA *)&rna_MotionPath_length,
	-1, "use_bone_head", 2, "Use Bone Heads",
	"For PoseBone paths, use the bone head location when calculating this path",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	MotionPath_use_bone_head_get, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_MotionPath_is_modified = {
	{NULL, (PropertyRNA *)&rna_MotionPath_use_bone_head,
	-1, "is_modified", 3, "Edit Path",
	"Path is being edited",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	MotionPath_is_modified_get, MotionPath_is_modified_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

StructRNA RNA_MotionPath = {
	{(ContainerRNA *)&RNA_MotionPathVert, (ContainerRNA *)&RNA_AnimVizMotionPaths,
	NULL,
	{(PropertyRNA *)&rna_MotionPath_rna_properties, (PropertyRNA *)&rna_MotionPath_is_modified}},
	"MotionPath", NULL, NULL, 4, "Motion Path",
	"Cache of the worldspace positions of an element over a frame range",
	"*", 17,
	NULL, (PropertyRNA *)&rna_MotionPath_rna_properties,
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

/* Motion Path Cache Point */
CollectionPropertyRNA rna_MotionPathVert_rna_properties = {
	{(PropertyRNA *)&rna_MotionPathVert_rna_type, NULL,
	-1, "rna_properties", 128, "Properties",
	"RNA property collection",
	0, "*",
	PROP_COLLECTION, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	MotionPathVert_rna_properties_begin, MotionPathVert_rna_properties_next, MotionPathVert_rna_properties_end, MotionPathVert_rna_properties_get, NULL, NULL, MotionPathVert_rna_properties_lookup_string, NULL, &RNA_Property
};

PointerPropertyRNA rna_MotionPathVert_rna_type = {
	{(PropertyRNA *)&rna_MotionPathVert_co, (PropertyRNA *)&rna_MotionPathVert_rna_properties,
	-1, "rna_type", 8912896, "RNA",
	"RNA type definition",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	MotionPathVert_rna_type_get, NULL, NULL, NULL,&RNA_Struct
};

static float rna_MotionPathVert_co_default[3] = {
	0.0f,
	0.0f,
	0.0f
};

FloatPropertyRNA rna_MotionPathVert_co = {
	{(PropertyRNA *)&rna_MotionPathVert_select, (PropertyRNA *)&rna_MotionPathVert_rna_type,
	-1, "co", 8195, "Coordinates",
	"",
	0, "*",
	PROP_FLOAT, PROP_XYZ | PROP_UNIT_NONE, NULL, 1, {3, 0, 0}, 3,
	NULL, 0, NULL, NULL,
	offsetof(bMotionPathVert, co), 4, NULL},
	NULL, NULL, MotionPathVert_co_get, MotionPathVert_co_set, NULL, NULL, NULL, NULL, NULL, NULL, -10000.0f, 10000.0f, -FLT_MAX, FLT_MAX, 10.0f, 3, 0.0f, rna_MotionPathVert_co_default
};

BoolPropertyRNA rna_MotionPathVert_select = {
	{NULL, (PropertyRNA *)&rna_MotionPathVert_co,
	-1, "select", 3, "Select",
	"Path point is selected for editing",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	MotionPathVert_select_get, MotionPathVert_select_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

StructRNA RNA_MotionPathVert = {
	{(ContainerRNA *)&RNA_Actuator, (ContainerRNA *)&RNA_MotionPath,
	NULL,
	{(PropertyRNA *)&rna_MotionPathVert_rna_properties, (PropertyRNA *)&rna_MotionPathVert_select}},
	"MotionPathVert", NULL, NULL, 4, "Motion Path Cache Point",
	"Cached location on path",
	"*", 17,
	NULL, (PropertyRNA *)&rna_MotionPathVert_rna_properties,
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

