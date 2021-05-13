
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

#include "rna_movieclip.c"

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

StringPropertyRNA rna_MovieClip_filepath;
PointerPropertyRNA rna_MovieClip_tracking;
PointerPropertyRNA rna_MovieClip_proxy;
BoolPropertyRNA rna_MovieClip_use_proxy;
IntPropertyRNA rna_MovieClip_size;
FloatPropertyRNA rna_MovieClip_display_aspect;
EnumPropertyRNA rna_MovieClip_source;
BoolPropertyRNA rna_MovieClip_use_proxy_custom_directory;
PointerPropertyRNA rna_MovieClip_grease_pencil;
IntPropertyRNA rna_MovieClip_frame_start;
IntPropertyRNA rna_MovieClip_frame_offset;
IntPropertyRNA rna_MovieClip_frame_duration;
PointerPropertyRNA rna_MovieClip_colorspace_settings;

extern FunctionRNA rna_ID_copy_func;
extern PointerPropertyRNA rna_ID_copy_id;

extern FunctionRNA rna_ID_user_clear_func;
extern FunctionRNA rna_ID_animation_data_create_func;
extern PointerPropertyRNA rna_ID_animation_data_create_anim_data;

extern FunctionRNA rna_ID_animation_data_clear_func;
extern FunctionRNA rna_ID_update_tag_func;
extern EnumPropertyRNA rna_ID_update_tag_refresh;



CollectionPropertyRNA rna_MovieClipProxy_rna_properties;
PointerPropertyRNA rna_MovieClipProxy_rna_type;
BoolPropertyRNA rna_MovieClipProxy_build_25;
BoolPropertyRNA rna_MovieClipProxy_build_50;
BoolPropertyRNA rna_MovieClipProxy_build_75;
BoolPropertyRNA rna_MovieClipProxy_build_100;
BoolPropertyRNA rna_MovieClipProxy_build_undistorted_25;
BoolPropertyRNA rna_MovieClipProxy_build_undistorted_50;
BoolPropertyRNA rna_MovieClipProxy_build_undistorted_75;
BoolPropertyRNA rna_MovieClipProxy_build_undistorted_100;
BoolPropertyRNA rna_MovieClipProxy_build_record_run;
BoolPropertyRNA rna_MovieClipProxy_build_free_run;
BoolPropertyRNA rna_MovieClipProxy_build_free_run_rec_date;
IntPropertyRNA rna_MovieClipProxy_quality;
EnumPropertyRNA rna_MovieClipProxy_timecode;
StringPropertyRNA rna_MovieClipProxy_directory;


CollectionPropertyRNA rna_MovieClipUser_rna_properties;
PointerPropertyRNA rna_MovieClipUser_rna_type;
IntPropertyRNA rna_MovieClipUser_frame_current;
EnumPropertyRNA rna_MovieClipUser_proxy_render_size;
BoolPropertyRNA rna_MovieClipUser_use_render_undistorted;


CollectionPropertyRNA rna_MovieClipScopes_rna_properties;
PointerPropertyRNA rna_MovieClipScopes_rna_type;

void MovieClip_filepath_get(PointerRNA *ptr, char *value)
{
	MovieClip *data = (MovieClip *)(ptr->data);
	BLI_strncpy(value, data->name, 1024);
}

int MovieClip_filepath_length(PointerRNA *ptr)
{
	MovieClip *data = (MovieClip *)(ptr->data);
	return strlen(data->name);
}

void MovieClip_filepath_set(PointerRNA *ptr, const char *value)
{
	MovieClip *data = (MovieClip *)(ptr->data);
	BLI_strncpy(data->name, value, 1024);
}

PointerRNA MovieClip_tracking_get(PointerRNA *ptr)
{
	MovieClip *data = (MovieClip *)(ptr->data);
	return rna_pointer_inherit_refine(ptr, &RNA_MovieTracking, &data->tracking);
}

PointerRNA MovieClip_proxy_get(PointerRNA *ptr)
{
	MovieClip *data = (MovieClip *)(ptr->data);
	return rna_pointer_inherit_refine(ptr, &RNA_MovieClipProxy, &data->proxy);
}

int MovieClip_use_proxy_get(PointerRNA *ptr)
{
	MovieClip *data = (MovieClip *)(ptr->data);
	return (((data->flag) & 1) != 0);
}

void MovieClip_use_proxy_set(PointerRNA *ptr, int value)
{
	MovieClip *data = (MovieClip *)(ptr->data);
	if (value) data->flag |= 1;
	else data->flag &= ~1;
}

void MovieClip_size_get(PointerRNA *ptr, int values[2])
{
	rna_MovieClip_size_get(ptr, values);
}

void MovieClip_display_aspect_get(PointerRNA *ptr, float values[2])
{
	MovieClip *data = (MovieClip *)(ptr->data);
	unsigned int i;

	for (i = 0; i < 2; i++) {
		values[i] = (float)((&data->aspx)[i]);
	}
}

void MovieClip_display_aspect_set(PointerRNA *ptr, const float values[2])
{
	MovieClip *data = (MovieClip *)(ptr->data);
	unsigned int i;

	for (i = 0; i < 2; i++) {
		(&data->aspx)[i] = CLAMPIS(values[i], 0.1000000015f, FLT_MAX);
	}
}

int MovieClip_source_get(PointerRNA *ptr)
{
	MovieClip *data = (MovieClip *)(ptr->data);
	return (int)(data->source);
}

int MovieClip_use_proxy_custom_directory_get(PointerRNA *ptr)
{
	MovieClip *data = (MovieClip *)(ptr->data);
	return (((data->flag) & 2) != 0);
}

void MovieClip_use_proxy_custom_directory_set(PointerRNA *ptr, int value)
{
	MovieClip *data = (MovieClip *)(ptr->data);
	if (value) data->flag |= 2;
	else data->flag &= ~2;
}

PointerRNA MovieClip_grease_pencil_get(PointerRNA *ptr)
{
	MovieClip *data = (MovieClip *)(ptr->data);
	return rna_pointer_inherit_refine(ptr, &RNA_GreasePencil, data->gpd);
}

void MovieClip_grease_pencil_set(PointerRNA *ptr, PointerRNA value)
{
	MovieClip *data = (MovieClip *)(ptr->data);

	if (data->gpd)
		id_us_min((ID *)data->gpd);
	if (value.data)
		id_us_plus((ID *)value.data);

	data->gpd = value.data;
}

int MovieClip_frame_start_get(PointerRNA *ptr)
{
	MovieClip *data = (MovieClip *)(ptr->data);
	return (int)(data->start_frame);
}

void MovieClip_frame_start_set(PointerRNA *ptr, int value)
{
	MovieClip *data = (MovieClip *)(ptr->data);
	data->start_frame = value;
}

int MovieClip_frame_offset_get(PointerRNA *ptr)
{
	MovieClip *data = (MovieClip *)(ptr->data);
	return (int)(data->frame_offset);
}

void MovieClip_frame_offset_set(PointerRNA *ptr, int value)
{
	MovieClip *data = (MovieClip *)(ptr->data);
	data->frame_offset = value;
}

int MovieClip_frame_duration_get(PointerRNA *ptr)
{
	MovieClip *data = (MovieClip *)(ptr->data);
	return (int)(data->len);
}

PointerRNA MovieClip_colorspace_settings_get(PointerRNA *ptr)
{
	MovieClip *data = (MovieClip *)(ptr->data);
	return rna_pointer_inherit_refine(ptr, &RNA_ColorManagedInputColorspaceSettings, &data->colorspace_settings);
}

static PointerRNA MovieClipProxy_rna_properties_get(CollectionPropertyIterator *iter)
{
	return rna_builtin_properties_get(iter);
}

void MovieClipProxy_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

	memset(iter, 0, sizeof(*iter));
	iter->parent = *ptr;
	iter->prop = (PropertyRNA *)&rna_MovieClipProxy_rna_properties;

	rna_builtin_properties_begin(iter, ptr);

	if (iter->valid)
		iter->ptr = MovieClipProxy_rna_properties_get(iter);
}

void MovieClipProxy_rna_properties_next(CollectionPropertyIterator *iter)
{
	rna_builtin_properties_next(iter);

	if (iter->valid)
		iter->ptr = MovieClipProxy_rna_properties_get(iter);
}

void MovieClipProxy_rna_properties_end(CollectionPropertyIterator *iter)
{
	rna_iterator_listbase_end(iter);
}

int MovieClipProxy_rna_properties_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
	return rna_builtin_properties_lookup_string(ptr, key, r_ptr);
}

PointerRNA MovieClipProxy_rna_type_get(PointerRNA *ptr)
{
	return rna_builtin_type_get(ptr);
}

int MovieClipProxy_build_25_get(PointerRNA *ptr)
{
	MovieClipProxy *data = (MovieClipProxy *)(ptr->data);
	return (((data->build_size_flag) & 1) != 0);
}

void MovieClipProxy_build_25_set(PointerRNA *ptr, int value)
{
	MovieClipProxy *data = (MovieClipProxy *)(ptr->data);
	if (value) data->build_size_flag |= 1;
	else data->build_size_flag &= ~1;
}

int MovieClipProxy_build_50_get(PointerRNA *ptr)
{
	MovieClipProxy *data = (MovieClipProxy *)(ptr->data);
	return (((data->build_size_flag) & 2) != 0);
}

void MovieClipProxy_build_50_set(PointerRNA *ptr, int value)
{
	MovieClipProxy *data = (MovieClipProxy *)(ptr->data);
	if (value) data->build_size_flag |= 2;
	else data->build_size_flag &= ~2;
}

int MovieClipProxy_build_75_get(PointerRNA *ptr)
{
	MovieClipProxy *data = (MovieClipProxy *)(ptr->data);
	return (((data->build_size_flag) & 4) != 0);
}

void MovieClipProxy_build_75_set(PointerRNA *ptr, int value)
{
	MovieClipProxy *data = (MovieClipProxy *)(ptr->data);
	if (value) data->build_size_flag |= 4;
	else data->build_size_flag &= ~4;
}

int MovieClipProxy_build_100_get(PointerRNA *ptr)
{
	MovieClipProxy *data = (MovieClipProxy *)(ptr->data);
	return (((data->build_size_flag) & 8) != 0);
}

void MovieClipProxy_build_100_set(PointerRNA *ptr, int value)
{
	MovieClipProxy *data = (MovieClipProxy *)(ptr->data);
	if (value) data->build_size_flag |= 8;
	else data->build_size_flag &= ~8;
}

int MovieClipProxy_build_undistorted_25_get(PointerRNA *ptr)
{
	MovieClipProxy *data = (MovieClipProxy *)(ptr->data);
	return (((data->build_size_flag) & 16) != 0);
}

void MovieClipProxy_build_undistorted_25_set(PointerRNA *ptr, int value)
{
	MovieClipProxy *data = (MovieClipProxy *)(ptr->data);
	if (value) data->build_size_flag |= 16;
	else data->build_size_flag &= ~16;
}

int MovieClipProxy_build_undistorted_50_get(PointerRNA *ptr)
{
	MovieClipProxy *data = (MovieClipProxy *)(ptr->data);
	return (((data->build_size_flag) & 32) != 0);
}

void MovieClipProxy_build_undistorted_50_set(PointerRNA *ptr, int value)
{
	MovieClipProxy *data = (MovieClipProxy *)(ptr->data);
	if (value) data->build_size_flag |= 32;
	else data->build_size_flag &= ~32;
}

int MovieClipProxy_build_undistorted_75_get(PointerRNA *ptr)
{
	MovieClipProxy *data = (MovieClipProxy *)(ptr->data);
	return (((data->build_size_flag) & 64) != 0);
}

void MovieClipProxy_build_undistorted_75_set(PointerRNA *ptr, int value)
{
	MovieClipProxy *data = (MovieClipProxy *)(ptr->data);
	if (value) data->build_size_flag |= 64;
	else data->build_size_flag &= ~64;
}

int MovieClipProxy_build_undistorted_100_get(PointerRNA *ptr)
{
	MovieClipProxy *data = (MovieClipProxy *)(ptr->data);
	return (((data->build_size_flag) & 128) != 0);
}

void MovieClipProxy_build_undistorted_100_set(PointerRNA *ptr, int value)
{
	MovieClipProxy *data = (MovieClipProxy *)(ptr->data);
	if (value) data->build_size_flag |= 128;
	else data->build_size_flag &= ~128;
}

int MovieClipProxy_build_record_run_get(PointerRNA *ptr)
{
	MovieClipProxy *data = (MovieClipProxy *)(ptr->data);
	return (((data->build_tc_flag) & 1) != 0);
}

void MovieClipProxy_build_record_run_set(PointerRNA *ptr, int value)
{
	MovieClipProxy *data = (MovieClipProxy *)(ptr->data);
	if (value) data->build_tc_flag |= 1;
	else data->build_tc_flag &= ~1;
}

int MovieClipProxy_build_free_run_get(PointerRNA *ptr)
{
	MovieClipProxy *data = (MovieClipProxy *)(ptr->data);
	return (((data->build_tc_flag) & 2) != 0);
}

void MovieClipProxy_build_free_run_set(PointerRNA *ptr, int value)
{
	MovieClipProxy *data = (MovieClipProxy *)(ptr->data);
	if (value) data->build_tc_flag |= 2;
	else data->build_tc_flag &= ~2;
}

int MovieClipProxy_build_free_run_rec_date_get(PointerRNA *ptr)
{
	MovieClipProxy *data = (MovieClipProxy *)(ptr->data);
	return (((data->build_tc_flag) & 4) != 0);
}

void MovieClipProxy_build_free_run_rec_date_set(PointerRNA *ptr, int value)
{
	MovieClipProxy *data = (MovieClipProxy *)(ptr->data);
	if (value) data->build_tc_flag |= 4;
	else data->build_tc_flag &= ~4;
}

int MovieClipProxy_quality_get(PointerRNA *ptr)
{
	MovieClipProxy *data = (MovieClipProxy *)(ptr->data);
	return (int)(data->quality);
}

void MovieClipProxy_quality_set(PointerRNA *ptr, int value)
{
	MovieClipProxy *data = (MovieClipProxy *)(ptr->data);
	data->quality = CLAMPIS(value, 0, 32767);
}

int MovieClipProxy_timecode_get(PointerRNA *ptr)
{
	MovieClipProxy *data = (MovieClipProxy *)(ptr->data);
	return (int)(data->tc);
}

void MovieClipProxy_timecode_set(PointerRNA *ptr, int value)
{
	MovieClipProxy *data = (MovieClipProxy *)(ptr->data);
	data->tc = value;
}

void MovieClipProxy_directory_get(PointerRNA *ptr, char *value)
{
	MovieClipProxy *data = (MovieClipProxy *)(ptr->data);
	BLI_strncpy(value, data->dir, 768);
}

int MovieClipProxy_directory_length(PointerRNA *ptr)
{
	MovieClipProxy *data = (MovieClipProxy *)(ptr->data);
	return strlen(data->dir);
}

void MovieClipProxy_directory_set(PointerRNA *ptr, const char *value)
{
	MovieClipProxy *data = (MovieClipProxy *)(ptr->data);
	BLI_strncpy(data->dir, value, 768);
}

static PointerRNA MovieClipUser_rna_properties_get(CollectionPropertyIterator *iter)
{
	return rna_builtin_properties_get(iter);
}

void MovieClipUser_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

	memset(iter, 0, sizeof(*iter));
	iter->parent = *ptr;
	iter->prop = (PropertyRNA *)&rna_MovieClipUser_rna_properties;

	rna_builtin_properties_begin(iter, ptr);

	if (iter->valid)
		iter->ptr = MovieClipUser_rna_properties_get(iter);
}

void MovieClipUser_rna_properties_next(CollectionPropertyIterator *iter)
{
	rna_builtin_properties_next(iter);

	if (iter->valid)
		iter->ptr = MovieClipUser_rna_properties_get(iter);
}

void MovieClipUser_rna_properties_end(CollectionPropertyIterator *iter)
{
	rna_iterator_listbase_end(iter);
}

int MovieClipUser_rna_properties_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
	return rna_builtin_properties_lookup_string(ptr, key, r_ptr);
}

PointerRNA MovieClipUser_rna_type_get(PointerRNA *ptr)
{
	return rna_builtin_type_get(ptr);
}

int MovieClipUser_frame_current_get(PointerRNA *ptr)
{
	MovieClipUser *data = (MovieClipUser *)(ptr->data);
	return (int)(data->framenr);
}

void MovieClipUser_frame_current_set(PointerRNA *ptr, int value)
{
	MovieClipUser *data = (MovieClipUser *)(ptr->data);
	data->framenr = CLAMPIS(value, -300000, 300000);
}

int MovieClipUser_proxy_render_size_get(PointerRNA *ptr)
{
	MovieClipUser *data = (MovieClipUser *)(ptr->data);
	return (int)(data->render_size);
}

void MovieClipUser_proxy_render_size_set(PointerRNA *ptr, int value)
{
	MovieClipUser *data = (MovieClipUser *)(ptr->data);
	data->render_size = value;
}

int MovieClipUser_use_render_undistorted_get(PointerRNA *ptr)
{
	MovieClipUser *data = (MovieClipUser *)(ptr->data);
	return (((data->render_flag) & 1) != 0);
}

void MovieClipUser_use_render_undistorted_set(PointerRNA *ptr, int value)
{
	MovieClipUser *data = (MovieClipUser *)(ptr->data);
	if (value) data->render_flag |= 1;
	else data->render_flag &= ~1;
}

static PointerRNA MovieClipScopes_rna_properties_get(CollectionPropertyIterator *iter)
{
	return rna_builtin_properties_get(iter);
}

void MovieClipScopes_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

	memset(iter, 0, sizeof(*iter));
	iter->parent = *ptr;
	iter->prop = (PropertyRNA *)&rna_MovieClipScopes_rna_properties;

	rna_builtin_properties_begin(iter, ptr);

	if (iter->valid)
		iter->ptr = MovieClipScopes_rna_properties_get(iter);
}

void MovieClipScopes_rna_properties_next(CollectionPropertyIterator *iter)
{
	rna_builtin_properties_next(iter);

	if (iter->valid)
		iter->ptr = MovieClipScopes_rna_properties_get(iter);
}

void MovieClipScopes_rna_properties_end(CollectionPropertyIterator *iter)
{
	rna_iterator_listbase_end(iter);
}

int MovieClipScopes_rna_properties_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
	return rna_builtin_properties_lookup_string(ptr, key, r_ptr);
}

PointerRNA MovieClipScopes_rna_type_get(PointerRNA *ptr)
{
	return rna_builtin_type_get(ptr);
}





/* MovieClip */
StringPropertyRNA rna_MovieClip_filepath = {
	{(PropertyRNA *)&rna_MovieClip_tracking, NULL,
	-1, "filepath", 262145, "File Path",
	"Filename of the movie or sequence file",
	0, "*",
	PROP_STRING, PROP_FILEPATH | PROP_UNIT_NONE, NULL, 0, {1024, 0, 0}, 0,
	rna_MovieClip_reload_update, 338886656, NULL, NULL,
	0, -1, NULL},
	MovieClip_filepath_get, MovieClip_filepath_length, MovieClip_filepath_set, NULL, NULL, NULL, 1024, ""
};

PointerPropertyRNA rna_MovieClip_tracking = {
	{(PropertyRNA *)&rna_MovieClip_proxy, (PropertyRNA *)&rna_MovieClip_filepath,
	-1, "tracking", 8388608, "tracking",
	"",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	MovieClip_tracking_get, NULL, NULL, NULL,&RNA_MovieTracking
};

PointerPropertyRNA rna_MovieClip_proxy = {
	{(PropertyRNA *)&rna_MovieClip_use_proxy, (PropertyRNA *)&rna_MovieClip_tracking,
	-1, "proxy", 8388608, "proxy",
	"",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	MovieClip_proxy_get, NULL, NULL, NULL,&RNA_MovieClipProxy
};

BoolPropertyRNA rna_MovieClip_use_proxy = {
	{(PropertyRNA *)&rna_MovieClip_size, (PropertyRNA *)&rna_MovieClip_proxy,
	-1, "use_proxy", 1, "Use Proxy / Timecode",
	"Use a preview proxy and/or timecode index for this clip",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 338886656, NULL, NULL,
	0, -1, NULL},
	MovieClip_use_proxy_get, MovieClip_use_proxy_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

static int rna_MovieClip_size_default[2] = {
	0,
	0
};

IntPropertyRNA rna_MovieClip_size = {
	{(PropertyRNA *)&rna_MovieClip_display_aspect, (PropertyRNA *)&rna_MovieClip_use_proxy,
	-1, "size", 2, "Size",
	"Width and height in pixels, zero when image data cant be loaded",
	0, "*",
	PROP_INT, PROP_XYZ | PROP_UNIT_NONE, NULL, 1, {2, 0, 0}, 2,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	NULL, NULL, MovieClip_size_get, NULL, NULL, NULL, NULL, NULL, NULL, NULL,
	0, 0, INT_MIN, INT_MAX, 1, 0, rna_MovieClip_size_default
};

static float rna_MovieClip_display_aspect_default[2] = {
	0.0f,
	0.0f
};

FloatPropertyRNA rna_MovieClip_display_aspect = {
	{(PropertyRNA *)&rna_MovieClip_source, (PropertyRNA *)&rna_MovieClip_size,
	-1, "display_aspect", 8195, "Display Aspect",
	"Display Aspect for this clip, does not affect rendering",
	0, "*",
	PROP_FLOAT, PROP_XYZ | PROP_UNIT_NONE, NULL, 1, {2, 0, 0}, 2,
	NULL, 338886656, NULL, NULL,
	offsetof(MovieClip, aspx), 4, NULL},
	NULL, NULL, MovieClip_display_aspect_get, MovieClip_display_aspect_set, NULL, NULL, NULL, NULL, NULL, NULL, 0.1000000015f, 5000.0f, 0.1000000015f, FLT_MAX, 1.0f, 2, 0.0f, rna_MovieClip_display_aspect_default
};

static EnumPropertyItem rna_MovieClip_source_items[3] = {
	{1, "SEQUENCE", 0, "Image Sequence", "Multiple image files, as a sequence"},
	{2, "MOVIE", 0, "Movie File", "Movie file"},
	{0, NULL, 0, NULL, NULL}
};

EnumPropertyRNA rna_MovieClip_source = {
	{(PropertyRNA *)&rna_MovieClip_use_proxy_custom_directory, (PropertyRNA *)&rna_MovieClip_display_aspect,
	-1, "source", 2, "Source",
	"Where the clip comes from",
	0, "*",
	PROP_ENUM, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	MovieClip_source_get, NULL, NULL, NULL, NULL, NULL, rna_MovieClip_source_items, 2, 1
};

BoolPropertyRNA rna_MovieClip_use_proxy_custom_directory = {
	{(PropertyRNA *)&rna_MovieClip_grease_pencil, (PropertyRNA *)&rna_MovieClip_source,
	-1, "use_proxy_custom_directory", 1, "Proxy Custom Directory",
	"Create proxy images in a custom directory (default is movie location)",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_MovieClip_reload_update, 338886656, NULL, NULL,
	0, -1, NULL},
	MovieClip_use_proxy_custom_directory_get, MovieClip_use_proxy_custom_directory_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

PointerPropertyRNA rna_MovieClip_grease_pencil = {
	{(PropertyRNA *)&rna_MovieClip_frame_start, (PropertyRNA *)&rna_MovieClip_use_proxy_custom_directory,
	-1, "grease_pencil", 8388673, "Grease Pencil",
	"Grease pencil data for this movie clip",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 338886656, NULL, NULL,
	0, -1, NULL},
	MovieClip_grease_pencil_get, MovieClip_grease_pencil_set, NULL, NULL,&RNA_GreasePencil
};

IntPropertyRNA rna_MovieClip_frame_start = {
	{(PropertyRNA *)&rna_MovieClip_frame_offset, (PropertyRNA *)&rna_MovieClip_grease_pencil,
	-1, "frame_start", 8195, "Start Frame",
	"Global scene frame number at which this movie starts playing (affects all data associated with a clip)",
	0, "*",
	PROP_INT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_MovieClip_reload_update, 338886656, NULL, NULL,
	offsetof(MovieClip, start_frame), 0, NULL},
	MovieClip_frame_start_get, MovieClip_frame_start_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL,
	-10000, 10000, INT_MIN, INT_MAX, 1, 0, NULL
};

IntPropertyRNA rna_MovieClip_frame_offset = {
	{(PropertyRNA *)&rna_MovieClip_frame_duration, (PropertyRNA *)&rna_MovieClip_frame_start,
	-1, "frame_offset", 8195, "Frame Offset",
	"Offset of footage first frame relative to it\'s file name (affects only how footage is loading, does not change data associated with a clip)",
	0, "*",
	PROP_INT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_MovieClip_reload_update, 338886656, NULL, NULL,
	offsetof(MovieClip, frame_offset), 0, NULL},
	MovieClip_frame_offset_get, MovieClip_frame_offset_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL,
	-10000, 10000, INT_MIN, INT_MAX, 1, 0, NULL
};

IntPropertyRNA rna_MovieClip_frame_duration = {
	{(PropertyRNA *)&rna_MovieClip_colorspace_settings, (PropertyRNA *)&rna_MovieClip_frame_offset,
	-1, "frame_duration", 8194, "Duration",
	"Detected duration of movie clip in frames",
	0, "*",
	PROP_INT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	offsetof(MovieClip, len), 0, NULL},
	MovieClip_frame_duration_get, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL,
	-10000, 10000, INT_MIN, INT_MAX, 1, 0, NULL
};

PointerPropertyRNA rna_MovieClip_colorspace_settings = {
	{NULL, (PropertyRNA *)&rna_MovieClip_frame_duration,
	-1, "colorspace_settings", 8388608, "Color Space Settings",
	"Input color space settings",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	MovieClip_colorspace_settings_get, NULL, NULL, NULL,&RNA_ColorManagedInputColorspaceSettings
};

StructRNA RNA_MovieClip = {
	{(ContainerRNA *)&RNA_MovieClipProxy, (ContainerRNA *)&RNA_WorldTextureSlot,
	NULL,
	{(PropertyRNA *)&rna_MovieClip_filepath, (PropertyRNA *)&rna_MovieClip_colorspace_settings}},
	"MovieClip", NULL, NULL, 7, "MovieClip",
	"MovieClip datablock referencing an external movie file",
	"*", 111,
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

/* Movie Clip Proxy */
CollectionPropertyRNA rna_MovieClipProxy_rna_properties = {
	{(PropertyRNA *)&rna_MovieClipProxy_rna_type, NULL,
	-1, "rna_properties", 128, "Properties",
	"RNA property collection",
	0, "*",
	PROP_COLLECTION, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	MovieClipProxy_rna_properties_begin, MovieClipProxy_rna_properties_next, MovieClipProxy_rna_properties_end, MovieClipProxy_rna_properties_get, NULL, NULL, MovieClipProxy_rna_properties_lookup_string, NULL, &RNA_Property
};

PointerPropertyRNA rna_MovieClipProxy_rna_type = {
	{(PropertyRNA *)&rna_MovieClipProxy_build_25, (PropertyRNA *)&rna_MovieClipProxy_rna_properties,
	-1, "rna_type", 8912896, "RNA",
	"RNA type definition",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	MovieClipProxy_rna_type_get, NULL, NULL, NULL,&RNA_Struct
};

BoolPropertyRNA rna_MovieClipProxy_build_25 = {
	{(PropertyRNA *)&rna_MovieClipProxy_build_50, (PropertyRNA *)&rna_MovieClipProxy_rna_type,
	-1, "build_25", 1, "25%",
	"Build proxy resolution 25% of the original footage dimension",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	MovieClipProxy_build_25_get, MovieClipProxy_build_25_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_MovieClipProxy_build_50 = {
	{(PropertyRNA *)&rna_MovieClipProxy_build_75, (PropertyRNA *)&rna_MovieClipProxy_build_25,
	-1, "build_50", 1, "50%",
	"Build proxy resolution 50% of the original footage dimension",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	MovieClipProxy_build_50_get, MovieClipProxy_build_50_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_MovieClipProxy_build_75 = {
	{(PropertyRNA *)&rna_MovieClipProxy_build_100, (PropertyRNA *)&rna_MovieClipProxy_build_50,
	-1, "build_75", 1, "75%",
	"Build proxy resolution 75% of the original footage dimension",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	MovieClipProxy_build_75_get, MovieClipProxy_build_75_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_MovieClipProxy_build_100 = {
	{(PropertyRNA *)&rna_MovieClipProxy_build_undistorted_25, (PropertyRNA *)&rna_MovieClipProxy_build_75,
	-1, "build_100", 1, "100%",
	"Build proxy resolution 100% of the original footage dimension",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	MovieClipProxy_build_100_get, MovieClipProxy_build_100_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_MovieClipProxy_build_undistorted_25 = {
	{(PropertyRNA *)&rna_MovieClipProxy_build_undistorted_50, (PropertyRNA *)&rna_MovieClipProxy_build_100,
	-1, "build_undistorted_25", 1, "25%",
	"Build proxy resolution 25% of the original undistorted footage dimension",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	MovieClipProxy_build_undistorted_25_get, MovieClipProxy_build_undistorted_25_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_MovieClipProxy_build_undistorted_50 = {
	{(PropertyRNA *)&rna_MovieClipProxy_build_undistorted_75, (PropertyRNA *)&rna_MovieClipProxy_build_undistorted_25,
	-1, "build_undistorted_50", 1, "50%",
	"Build proxy resolution 50% of the original undistorted footage dimension",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	MovieClipProxy_build_undistorted_50_get, MovieClipProxy_build_undistorted_50_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_MovieClipProxy_build_undistorted_75 = {
	{(PropertyRNA *)&rna_MovieClipProxy_build_undistorted_100, (PropertyRNA *)&rna_MovieClipProxy_build_undistorted_50,
	-1, "build_undistorted_75", 1, "75%",
	"Build proxy resolution 75% of the original undistorted footage dimension",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	MovieClipProxy_build_undistorted_75_get, MovieClipProxy_build_undistorted_75_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_MovieClipProxy_build_undistorted_100 = {
	{(PropertyRNA *)&rna_MovieClipProxy_build_record_run, (PropertyRNA *)&rna_MovieClipProxy_build_undistorted_75,
	-1, "build_undistorted_100", 1, "100%",
	"Build proxy resolution 100% of the original undistorted footage dimension",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	MovieClipProxy_build_undistorted_100_get, MovieClipProxy_build_undistorted_100_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_MovieClipProxy_build_record_run = {
	{(PropertyRNA *)&rna_MovieClipProxy_build_free_run, (PropertyRNA *)&rna_MovieClipProxy_build_undistorted_100,
	-1, "build_record_run", 1, "Rec Run",
	"Build record run time code index",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	MovieClipProxy_build_record_run_get, MovieClipProxy_build_record_run_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_MovieClipProxy_build_free_run = {
	{(PropertyRNA *)&rna_MovieClipProxy_build_free_run_rec_date, (PropertyRNA *)&rna_MovieClipProxy_build_record_run,
	-1, "build_free_run", 1, "Free Run",
	"Build free run time code index",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	MovieClipProxy_build_free_run_get, MovieClipProxy_build_free_run_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_MovieClipProxy_build_free_run_rec_date = {
	{(PropertyRNA *)&rna_MovieClipProxy_quality, (PropertyRNA *)&rna_MovieClipProxy_build_free_run,
	-1, "build_free_run_rec_date", 1, "Free Run (Rec Date)",
	"Build free run time code index using Record Date/Time",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	MovieClipProxy_build_free_run_rec_date_get, MovieClipProxy_build_free_run_rec_date_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

IntPropertyRNA rna_MovieClipProxy_quality = {
	{(PropertyRNA *)&rna_MovieClipProxy_timecode, (PropertyRNA *)&rna_MovieClipProxy_build_free_run_rec_date,
	-1, "quality", 8193, "Quality",
	"JPEG quality of proxy images",
	0, "*",
	PROP_INT, PROP_UNSIGNED | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	offsetof(MovieClipProxy, quality), 1, NULL},
	MovieClipProxy_quality_get, MovieClipProxy_quality_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL,
	1, 100, 0, 32767, 1, 0, NULL
};

static EnumPropertyItem rna_MovieClipProxy_timecode_items[6] = {
	{0, "NONE", 0, "No TC in use", ""},
	{1, "RECORD_RUN", 0, "Record Run", "Use images in the order they are recorded"},
	{2, "FREE_RUN", 0, "Free Run", "Use global timestamp written by recording device"},
	{4, "FREE_RUN_REC_DATE", 0, "Free Run (rec date)", "Interpolate a global timestamp using the record date and time written by recording device"},
	{8, "FREE_RUN_NO_GAPS", 0, "Free Run No Gaps", "Record run, but ignore timecode, changes in framerate or dropouts"},
	{0, NULL, 0, NULL, NULL}
};

EnumPropertyRNA rna_MovieClipProxy_timecode = {
	{(PropertyRNA *)&rna_MovieClipProxy_directory, (PropertyRNA *)&rna_MovieClipProxy_quality,
	-1, "timecode", 1, "Timecode",
	"",
	0, "*",
	PROP_ENUM, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 338886656, NULL, NULL,
	0, -1, NULL},
	MovieClipProxy_timecode_get, MovieClipProxy_timecode_set, NULL, NULL, NULL, NULL, rna_MovieClipProxy_timecode_items, 5, 0
};

StringPropertyRNA rna_MovieClipProxy_directory = {
	{NULL, (PropertyRNA *)&rna_MovieClipProxy_timecode,
	-1, "directory", 262145, "Directory",
	"Location to store the proxy files",
	0, "*",
	PROP_STRING, PROP_DIRPATH | PROP_UNIT_NONE, NULL, 0, {768, 0, 0}, 0,
	rna_MovieClip_reload_update, 338886656, NULL, NULL,
	0, -1, NULL},
	MovieClipProxy_directory_get, MovieClipProxy_directory_length, MovieClipProxy_directory_set, NULL, NULL, NULL, 768, ""
};

StructRNA RNA_MovieClipProxy = {
	{(ContainerRNA *)&RNA_MovieClipUser, (ContainerRNA *)&RNA_MovieClip,
	NULL,
	{(PropertyRNA *)&rna_MovieClipProxy_rna_properties, (PropertyRNA *)&rna_MovieClipProxy_directory}},
	"MovieClipProxy", NULL, NULL, 4, "Movie Clip Proxy",
	"Proxy parameters for a movie clip",
	"*", 17,
	NULL, (PropertyRNA *)&rna_MovieClipProxy_rna_properties,
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

/* Movie Clip User */
CollectionPropertyRNA rna_MovieClipUser_rna_properties = {
	{(PropertyRNA *)&rna_MovieClipUser_rna_type, NULL,
	-1, "rna_properties", 128, "Properties",
	"RNA property collection",
	0, "*",
	PROP_COLLECTION, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	MovieClipUser_rna_properties_begin, MovieClipUser_rna_properties_next, MovieClipUser_rna_properties_end, MovieClipUser_rna_properties_get, NULL, NULL, MovieClipUser_rna_properties_lookup_string, NULL, &RNA_Property
};

PointerPropertyRNA rna_MovieClipUser_rna_type = {
	{(PropertyRNA *)&rna_MovieClipUser_frame_current, (PropertyRNA *)&rna_MovieClipUser_rna_properties,
	-1, "rna_type", 8912896, "RNA",
	"RNA type definition",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	MovieClipUser_rna_type_get, NULL, NULL, NULL,&RNA_Struct
};

IntPropertyRNA rna_MovieClipUser_frame_current = {
	{(PropertyRNA *)&rna_MovieClipUser_proxy_render_size, (PropertyRNA *)&rna_MovieClipUser_rna_type,
	-1, "frame_current", 8195, "Current Frame",
	"Current frame number in movie or image sequence",
	0, "*",
	PROP_INT, PROP_TIME | PROP_UNIT_TIME, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	offsetof(MovieClipUser, framenr), 0, NULL},
	MovieClipUser_frame_current_get, MovieClipUser_frame_current_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL,
	-300000, 300000, -300000, 300000, 1, 0, NULL
};

static EnumPropertyItem rna_MovieClipUser_proxy_render_size_items[6] = {
	{1, "PROXY_25", 0, "Proxy size 25%", ""},
	{2, "PROXY_50", 0, "Proxy size 50%", ""},
	{3, "PROXY_75", 0, "Proxy size 75%", ""},
	{4, "PROXY_100", 0, "Proxy size 100%", ""},
	{0, "FULL", 0, "No proxy, full render", ""},
	{0, NULL, 0, NULL, NULL}
};

EnumPropertyRNA rna_MovieClipUser_proxy_render_size = {
	{(PropertyRNA *)&rna_MovieClipUser_use_render_undistorted, (PropertyRNA *)&rna_MovieClipUser_frame_current,
	-1, "proxy_render_size", 3, "Proxy render size",
	"Draw preview using full resolution or different proxy resolutions",
	0, "*",
	PROP_ENUM, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_MovieClipUser_proxy_render_settings_update, 338886656, NULL, NULL,
	0, -1, NULL},
	MovieClipUser_proxy_render_size_get, MovieClipUser_proxy_render_size_set, NULL, NULL, NULL, NULL, rna_MovieClipUser_proxy_render_size_items, 5, 0
};

BoolPropertyRNA rna_MovieClipUser_use_render_undistorted = {
	{NULL, (PropertyRNA *)&rna_MovieClipUser_proxy_render_size,
	-1, "use_render_undistorted", 3, "Render Undistorted",
	"Render preview using undistorted proxy",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_MovieClipUser_proxy_render_settings_update, 338886656, NULL, NULL,
	0, -1, NULL},
	MovieClipUser_use_render_undistorted_get, MovieClipUser_use_render_undistorted_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

StructRNA RNA_MovieClipUser = {
	{(ContainerRNA *)&RNA_MovieClipScopes, (ContainerRNA *)&RNA_MovieClipProxy,
	NULL,
	{(PropertyRNA *)&rna_MovieClipUser_rna_properties, (PropertyRNA *)&rna_MovieClipUser_use_render_undistorted}},
	"MovieClipUser", NULL, NULL, 4, "Movie Clip User",
	"Parameters defining how a MovieClip datablock is used by another datablock",
	"*", 17,
	NULL, (PropertyRNA *)&rna_MovieClipUser_rna_properties,
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

/* MovieClipScopes */
CollectionPropertyRNA rna_MovieClipScopes_rna_properties = {
	{(PropertyRNA *)&rna_MovieClipScopes_rna_type, NULL,
	-1, "rna_properties", 128, "Properties",
	"RNA property collection",
	0, "*",
	PROP_COLLECTION, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	MovieClipScopes_rna_properties_begin, MovieClipScopes_rna_properties_next, MovieClipScopes_rna_properties_end, MovieClipScopes_rna_properties_get, NULL, NULL, MovieClipScopes_rna_properties_lookup_string, NULL, &RNA_Property
};

PointerPropertyRNA rna_MovieClipScopes_rna_type = {
	{NULL, (PropertyRNA *)&rna_MovieClipScopes_rna_properties,
	-1, "rna_type", 8912896, "RNA",
	"RNA type definition",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	MovieClipScopes_rna_type_get, NULL, NULL, NULL,&RNA_Struct
};

StructRNA RNA_MovieClipScopes = {
	{(ContainerRNA *)&RNA_MovieTrackingSettings, (ContainerRNA *)&RNA_MovieClipUser,
	NULL,
	{(PropertyRNA *)&rna_MovieClipScopes_rna_properties, (PropertyRNA *)&rna_MovieClipScopes_rna_type}},
	"MovieClipScopes", NULL, NULL, 4, "MovieClipScopes",
	"Scopes for statistical view of a movie clip",
	"*", 17,
	NULL, (PropertyRNA *)&rna_MovieClipScopes_rna_properties,
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

